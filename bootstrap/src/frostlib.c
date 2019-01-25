#include <dirent.h>
#include <inttypes.h>
#include <limits.h>
#include <math.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

#include "unicode/uregex.h"

typedef uint8_t bool;

#define true 1
#define false 0

#define DEBUG_ALLOCS 0

struct Class;
struct String;

typedef struct ITable {
    struct Class* cl;
    struct ITable* next;
    void* methods[0];
} ITable;

typedef struct Class {
    struct Class* cl;
    int32_t refcnt;
    struct String* name;
    struct Class* super;
    ITable* itable;
    void* vtable[0];
} Class;

typedef struct Object {
    Class* cl;
    int32_t refcnt;
} Object;

typedef struct Bit {
    uint8_t value;
} Bit;

typedef struct Int64 {
    int64_t value;
} Int64;

typedef struct UInt8 {
    uint8_t value;
} UInt8;

typedef struct Real32 {
    double value;
} Real32;

typedef struct Real64 {
    double value;
} Real64;

typedef struct NullableChar {
    int8_t value;
    int8_t nonnull;
} NullableChar;

typedef struct NullableUInt8 {
    uint8_t value;
    int8_t nonnull;
} NullableUInt8;

typedef struct NullableInt {
    int64_t value;
    int8_t nonnull;
} NullableInt;

extern Class frost$core$String$class;

typedef struct String {
    Class* cl;
    int32_t refcnt;
    int8_t* data;
    int64_t size;
    int64_t hash;
    struct String* owner;
} String;

typedef struct StringIndex {
    Int64 value;
} StringIndex;

typedef struct Array {
    Class* cl;
    int32_t refcnt;
    int64_t count;
    int64_t capacity;
    Object** data;
} Array;

typedef struct Error {
    Class* cl;
    int32_t refcnt;
    String* message;
} Error;

typedef struct File {
    Class* cl;
    int32_t refcnt;
    String* path;
} File;

typedef struct FileInputStream {
    Class* cl;
    int32_t refcnt;
    int64_t byteOrder;
    FILE* file;
    Bit closeOnCleanup;
} FileInputStream;

extern Class frost$io$FileInputStream$class;

typedef struct FileOutputStream {
    Class* cl;
    int32_t refcnt;
    int64_t byteOrder;
    String* lineEnding;
    FILE* file;
    Bit closeOnCleanup;
} FileOutputStream;

typedef struct Process {
    Class* cl;
    int32_t refcnt;
    int64_t pid;
    // FIXME unsafe assumption that Object* and int64_t are the same size
    FileOutputStream* stdin;
    FileInputStream* stdout;
    FileInputStream* stderr;
} Process;

typedef struct Thread {
    Class* cl;
    int32_t refcnt;
    // FIXME unsafe assumption that void* and int64_t are the same size
    void* nativeHandle;
} Thread;

typedef struct Lock {
    Class* cl;
    int32_t refcnt;
    pthread_mutex_t* mutex;
} Lock;

typedef struct Notifier {
    Class* cl;
    int32_t refcnt;
    pthread_cond_t* cond;
    Lock* lock;
} Notifier;

typedef struct Method {
    Class* cl;
    int32_t refcnt;
    void* pointer;
    Object* target;
} Method;

typedef struct RegularExpression {
    Class* cl;
    int32_t refcnt;
    void* nativeHandle;
} RegularExpression;

typedef struct Matcher {
    Class* cl;
    int32_t refcnt;
    void* nativeHandle;
    String* searchText;
    Bit matched;
    StringIndex replacementIndex;
} Matcher;

extern Class frost$core$Frost$class;

extern Class frost$core$Error$class;

extern Class frost$io$File$class;

extern Class frost$io$FileOutputStream$class;

extern Class frost$collections$Array$class;

extern Class frost$collections$CollectionView$class;

extern Class frost$collections$ListView$class;

extern Class frost$core$System$Process$class;

extern Class frost$core$Matcher$class;

void frost$core$Frost$init(Object*);

Object* frost$core$Frost$success$frost$core$Object$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(Object*);

Object* frost$core$Frost$error$frost$core$String$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(String*);

void frost$core$Frost$ref$frost$core$Object$Q(Object*);

void frost$core$Frost$unref$frost$core$Object$Q(Object*);

void frost$core$Frost$dumpReport(Object*);

#if DEBUG_ALLOCS
void frost$core$Frost$countAllocation$frost$core$Class(Object*, Class*);

void frost$core$Frost$countDeallocation$frost$core$Class(Object*, Class*);
#endif

void frost$core$Frost$countTrace$frost$core$String(Object*, String*);

void frost$collections$Array$add$frost$collections$Array$T(Array*, Object*);

void frost$io$InputStream$init(void*);

void frost$io$OutputStream$init(void*);

char* frostGetCString(String* s);

void frostFree(void* ptr);

int allocations = 0;

static int preventsExitThreads = 0;
static pthread_cond_t preventsExitThreadsVar = PTHREAD_COND_INITIALIZER;
static pthread_mutex_t preventsExitThreadsMutex = PTHREAD_MUTEX_INITIALIZER;

Object* frost = NULL;

static bool refErrorReporting = true;

#if DEBUG_ALLOCS
static pthread_mutex_t traceMutex = PTHREAD_MUTEX_INITIALIZER;
bool debugAllocs = true;
#endif

void frostFatalError(const char* msg) {
    printf("%s\n", msg);
    abort();
}

void _frostAssert(int i, int line) {
    if (!i) {
        fprintf(stderr, "%s:%d: assertion failure\n", __FILE__, line);
        abort();
    }
}

#define frostAssert(i) _frostAssert(i, __LINE__)

void* frostAlloc(size_t size) {
    __atomic_add_fetch(&allocations, 1, __ATOMIC_RELAXED);
    void* result = calloc(size, 1);
    frostAssert(result != NULL || size == 0);
    return result;
}

void* frostZAlloc(size_t size) {
    return frostAlloc(size);
}

void frostDebugPrintObject(void* object);

void* frostObjectAlloc(size_t size, Class* cl) {
#if DEBUG_ALLOCS
    if (debugAllocs) {
        debugAllocs = false;
        if (!frost) {
            frost = frostAlloc(sizeof(Object) + sizeof(void*));
            frost->cl = &frost$core$Frost$class;
            frost->refcnt = 1;
            frost$core$Frost$init(frost);
        }
        pthread_mutex_lock(&traceMutex);
        frost$core$Frost$countAllocation$frost$core$Class(frost, cl);
        pthread_mutex_unlock(&traceMutex);
        debugAllocs = true;
    }
#endif
    Object* result = frostAlloc(size);
    result->cl = cl;
    result->refcnt = 1;
    return result;
}

void* frostRealloc(void* ptr, size_t oldSize, size_t newSize) {
    void* result = realloc(ptr, newSize);
    frostAssert(result != NULL || newSize == 0);
    if (newSize > oldSize) {
        memset(result + oldSize, 0, newSize - oldSize);
    }
    return result;
}

void frostFree(void* ptr) {
    __atomic_sub_fetch(&allocations, 1, __ATOMIC_RELAXED);
#if !DEBUG_ALLOCS
    //free(ptr);
#endif
}

void frostObjectFree(Object* o) {
#if DEBUG_ALLOCS
    if (debugAllocs) {
        debugAllocs = false;
        pthread_mutex_lock(&traceMutex);
        frost$core$Frost$countDeallocation$frost$core$Class(frost, o->cl);
        pthread_mutex_unlock(&traceMutex);
        debugAllocs = true;
    }
#endif
    o->refcnt = -100000;
    frostFree(o);
}

/**
 * Returns a null-terminated copy of a Frost string. The caller is responsible for freeing this
 * memory.
 */
char* frostGetCString(String* s) {
    char* result = frostAlloc(s->size + 1);
    memcpy(result, s->data, s->size);
    result[s->size] = 0;
    return result;
}

char* frostConvertToString(void* o) {
    String* (*convert)(void*) = (String*(*)(void*)) ((Object*) o)->cl->vtable[0]; // FIXME hardcoded index to convert
    String* frostString = convert(o);
    char* result = frostGetCString(frostString);
    frost$core$Frost$unref$frost$core$Object$Q((Object*) frostString);
    return result;
}

String* frostNewString(const char* s, int length) {
    String* result = frostObjectAlloc(sizeof(String), &frost$core$String$class);
    result->size = length;
    result->data = frostAlloc(length);
    result->hash = 0;
    result->owner = 0;
    memcpy(result->data, s, length);
    return result;
}

// returns o wrapped in a Maybe.SUCCESS, *without* increasing its refcount
Object* frostMaybeSuccess(Object* o) {
    Object* result = frost$core$Frost$success$frost$core$Object$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(o);
    frost$core$Frost$unref$frost$core$Object$Q(o);
    return result;
}    

// returns s wrapped in a Maybe.ERROR, *without* increasing its refcount
Object* frostMaybeError(String* s) {
    Object* result = frost$core$Frost$error$frost$core$String$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(s);
    frost$core$Frost$unref$frost$core$Object$Q((Object*) s);
    return result;
}    

// returns s wrapped in an Error, *without* increasing its refcount
Error* frostError(String *s) {
    Error* result = frostObjectAlloc(sizeof(Error), &frost$core$Error$class);
    result->message = s;
    return result;
}

void* frostGetInterfaceMethod(Object* o, Class* intf, int index) {
    ITable* it = o->cl->itable;
    while (it->cl != intf) {
        it = it->next;
    }
    return it->methods[index];
}

void frostMain(Array* args);

int main(int argc, char** argv) {
#if DEBUG_ALLOCS
    printf("Warning: memory tracing is enabled. This will severely impact performance.\n");
#endif
    Array* args = frostObjectAlloc(sizeof(Array), &frost$collections$Array$class);
    args->count = argc;
    args->capacity = argc;
    args->data = frostAlloc(argc * sizeof(Object*));
    int i;
    for (i = 0; i < argc; ++i) {
        args->data[i] = (Object*) frostNewString(argv[i], strlen(argv[i]));
    }
    frostMain(args);
    // ensure all threads have exited
    pthread_mutex_lock(&preventsExitThreadsMutex);
    for (;;) {
        if (preventsExitThreads == 0) {
            break;
        }
        pthread_cond_wait(&preventsExitThreadsVar, &preventsExitThreadsMutex);
    }
    frost$core$Frost$unref$frost$core$Object$Q((Object*) args);
#if DEBUG_ALLOCS
    debugAllocs = false;
#endif
    if (refErrorReporting) {
        if (frost) {
            frost$core$Frost$dumpReport(frost);
            frost$core$Frost$unref$frost$core$Object$Q(frost);
        }
        if (allocations && allocations != 1) {
            printf("warning: %d objects were still in memory on exit\n", allocations);
        }
        else if (allocations == 1) {
            printf("warning: 1 object was still in memory on exit\n");
        }
    }
    else if (frost) {
        frost$core$Frost$unref$frost$core$Object$Q(frost);
    }
    return 0;
}

// System

void frost$core$System$exit$frost$core$Int64(Int64 code) {
    exit(code.value);
}

void frost$core$System$crash() {
    fflush(stdout);
    fflush(stderr);
    __builtin_trap();
}

Object* frost$core$System$exec$frost$core$String$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$Maybe$LTfrost$core$System$Process$GT(
        String* path, Object* args) {
    // FIXME need to output headers so I can kill these hardcoded interface method offsets
    int (*get_count)(Object*) = frostGetInterfaceMethod(args,
                &frost$collections$CollectionView$class, 0);
    String* (*index)(Object*, int) = frostGetInterfaceMethod(args,
                &frost$collections$ListView$class, 0);
    int stdinPipe[2];
    if (pipe(stdinPipe)) {
        const char* msg = strerror(errno);
        return frostMaybeError(frostNewString(msg, strlen(msg)));
    }
    int stdoutPipe[2];
    if (pipe(stdoutPipe)) {
        const char* msg = strerror(errno);
        return frostMaybeError(frostNewString(msg, strlen(msg)));
    }
    int stderrPipe[2];
    if (pipe(stderrPipe)) {
        const char* msg = strerror(errno);
        return frostMaybeError(frostNewString(msg, strlen(msg)));
    }
    pid_t pid = fork();
    if (pid < 0) {
        const char* msg = strerror(errno);
        return frostMaybeError(frostNewString(msg, strlen(msg)));
    }
    if (!pid) {
        // child
        close(stdinPipe[1]);
        if (dup2(stdinPipe[0], STDIN_FILENO) == -1) {
            perror("dup2 onto stdin failed");
            exit(1);
        }
        close(stdoutPipe[0]);
        if (dup2(stdoutPipe[1], STDOUT_FILENO) == -1) {
            perror("dup2 onto stdout failed");
            exit(1);
        }
        close(stderrPipe[0]);
        if (dup2(stderrPipe[1], STDERR_FILENO) == -1) {
            perror("dup2 onto stderr failed");
            exit(1);
        }
//        setvbuf(stdin, NULL, _IONBF, 0);
//        setvbuf(stdout, NULL, _IONBF, 0);
//        setvbuf(stderr, NULL, _IONBF, 0);
        int argCount = get_count(args);
        char** cargs = (char**) frostAlloc((argCount + 2) * sizeof(char*));
        cargs[0] = frostGetCString(path);
        int i;
        for (i = 0; i < argCount; ++i) {
            cargs[i + 1] = frostGetCString(index(args, i));
        }
        cargs[argCount + 1] = NULL;
        execvp(cargs[0], cargs);
        // we don't bother freeing the argument memory because we just kill the process here
        exit(1);
    }
    else {
        // parent
        close(stdinPipe[0]);
        close(stdoutPipe[1]);
        close(stderrPipe[1]);
        Process* result = frostObjectAlloc(sizeof(Process), &frost$core$System$Process$class);
        result->pid = pid;

        result->stdin = frostObjectAlloc(sizeof(FileOutputStream),
                &frost$io$FileOutputStream$class);
        frost$io$OutputStream$init(result->stdin);
        result->stdin->file = fdopen(stdinPipe[1], "wb");
        frostAssert(result->stdin->file != NULL);
        result->stdin->closeOnCleanup.value = true;

        result->stdout = frostObjectAlloc(sizeof(FileInputStream),
                &frost$io$FileInputStream$class);
        frost$io$InputStream$init(result->stdout);
        result->stdout->file = fdopen(stdoutPipe[0], "rb");
        frostAssert(result->stdout->file != NULL);
        result->stdout->closeOnCleanup.value = true;

        result->stderr = frostObjectAlloc(sizeof(FileInputStream),
                &frost$io$FileInputStream$class);
        frost$io$InputStream$init(result->stderr);
        result->stderr->file = fdopen(stderrPipe[0], "rb");
        frostAssert(result->stderr->file != NULL);
        result->stderr->closeOnCleanup.value = true;

        return frostMaybeSuccess((Object*) result);
    }
}

Object* frost$core$System$Process$standardInput$R$frost$io$OutputStream(Process* p) {
    Object* result = (Object*) p->stdin;
    frost$core$Frost$ref$frost$core$Object$Q(result);
    return result;
}

Object* frost$core$System$Process$standardOutput$R$frost$io$InputStream(Process* p) {
    Object* result = (Object*) p->stdout;
    frost$core$Frost$ref$frost$core$Object$Q(result);
    return result;
}

Object* frost$core$System$Process$standardError$R$frost$io$InputStream(Process* p) {
    Object* result = (Object*) p->stderr;
    frost$core$Frost$ref$frost$core$Object$Q(result);
    return result;
}

void frost$core$System$Process$_cleanup(Process* p) {
    frost$core$Frost$unref$frost$core$Object$Q((Object*) p->stdin);
    frost$core$Frost$unref$frost$core$Object$Q((Object*) p->stdout);
    frost$core$Frost$unref$frost$core$Object$Q((Object*) p->stderr);
}

void frost$core$System$Process$exitCode$R$frost$core$Int64$Q(NullableInt* result, Process* p) {
    int status;
    waitpid(p->pid, &status, WNOHANG);
    if (WIFEXITED(status)) {
        result->nonnull = true;
        result->value = WEXITSTATUS(status);
    }
    else {
        result->nonnull = false;
    }
}

void frost$core$System$Process$waitFor$R$frost$core$Int64(Int64* result, Process* p) {
    int status;
    waitpid(p->pid, &status, 0);
    result->value = WEXITSTATUS(status);
}

File* frost$core$System$workingDirectory$R$frost$io$File() {
    char dir[PATH_MAX];
    getcwd(dir, PATH_MAX);
    String* path = frostNewString(dir, strlen(dir));
    File* file = frostObjectAlloc(sizeof(File), &frost$io$File$class);
    file->path = path;
    return file;
}

File* frost$core$System$temporaryDirectory$R$frost$io$File() {
    const char* tmpdir = getenv("TMPDIR");
    if (!tmpdir) {
        tmpdir = "/tmp";
    }
    String* path = frostNewString(tmpdir, strlen(tmpdir));
    File* file = frostObjectAlloc(sizeof(File), &frost$io$File$class);
    file->path = path;
    return file;
}

// Frost

#define NO_REFCNT -999

void frost$core$Frost$debugPrint$builtin_int64(int64_t x) {
    printf("Debug: %" PRId64 "\n", x);
}

void frostDebugPrintObject(void* object) {
    char* className = frostGetCString(((Object*) object)->cl->name);
    printf("%s(%p):\n", className, object);
    char* converted = frostConvertToString(object);
    printf("    %s\n", converted);
    frostFree(converted);
    frostFree(className);
}

void frost$core$Frost$debugPrint$frost$core$Object(void* object) {
    frostDebugPrintObject(object);
}

String* frost$core$Frost$pointerConvert$frost$unsafe$Pointer$LTfrost$core$Object$Q$GT$R$frost$core$String(void* ptr) {
    char buffer[32];
    int length = sprintf(buffer, "%p", ptr);
    return frostNewString(buffer, length);
}

void frost$core$Frost$trace$frost$core$String(String* s) {
    if (!frost) {
        frost = frostAlloc(sizeof(Object) + sizeof(void*));
        frost->cl = &frost$core$Frost$class;
        frost->refcnt = 1;
        frost$core$Frost$init(frost);
    }
    frost$core$Frost$countTrace$frost$core$String(frost, s);
}

void frost$core$Frost$ref$frost$core$Object$Q(Object* o) {
    // should be ok to perform load without locking - if it's NO_REFCNT, nobody should be changing
    // it anyway
    if (o && o->refcnt != NO_REFCNT) {
        int newCount = __atomic_add_fetch(&o->refcnt, 1, __ATOMIC_RELAXED);
        if (newCount <= 1 && refErrorReporting) {
            printf("internal error: ref %p with refcnt = %d\n", o, newCount - 1);
            printf("    class: %s\n", frostGetCString(o->cl->name));
            abort();
        }
    }
}

void frost$core$Frost$unref$frost$core$Object$Q(Object* o) {
    // should be ok to perform load without locking - if it's NO_REFCNT, nobody should be changing
    // it anyway
    if (o && o->refcnt != NO_REFCNT) {
        int newCount = __atomic_sub_fetch(&o->refcnt, 1, __ATOMIC_RELAXED);
        if (newCount < 0 && refErrorReporting) {
            printf("internal error: unref %p with refcnt = %d\n", o, newCount + 1);
            printf("    class: %s\n", frostGetCString(o->cl->name));
            abort();
        }
        if (newCount == 0) {
            void (*cleanup)() = o->cl->vtable[1]; // FIXME hardcoded index to cleanup
            o->refcnt = 1; // no other thread can see it, so we no longer need to use atomics here
            cleanup(o);
            if (o->refcnt != 1) {
                char* cl = frostGetCString(o->cl->name);
                printf("internal error: refcount of %s(%p) changed during cleanup\n", cl, o);
                abort();
            }
            frostObjectFree(o);
        }
    }
}

void frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int64(Int64* result, void* o) {
    result->value = (int64_t) o;
}

void frost$core$Frost$toReal64$frost$core$String$R$frost$core$Real64(Real64* result, String* s) {
    char* cstr = frostGetCString(s);
    result->value = atof(cstr);
    frostFree(cstr);
}

String* frost$core$Real32$get_asString$R$frost$core$String(Real32 d) {
    size_t len = snprintf(NULL, 0, "%g", d.value);
    char* chars = (char*) frostAlloc(len + 1);
    snprintf(chars, len + 1, "%g", d.value);
    String* result = frostNewString(chars, len);
    frostFree(chars);
    return result;
}

String* frost$core$Real64$get_asString$R$frost$core$String(Real64 d) {
    size_t len = snprintf(NULL, 0, "%g", d.value);
    char* chars = (char*) frostAlloc(len + 1);
    snprintf(chars, len + 1, "%g", d.value);
    String* result = frostNewString(chars, len);
    frostFree(chars);
    return result;
}

void frost$core$Frost$floatToIntBits$frost$core$Real64$R$frost$core$Int64(Int64* result,
        Real64 d) {
    *result = *(Int64*) &d;
}

float frost$core$Frost$sqrt$builtin_float32$R$builtin_float32(float v) {
    return sqrt(v);
}

double frost$core$Frost$sqrt$builtin_float64$R$builtin_float64(double v) {
    return sqrt(v);
}

int64_t frost$core$Frost$currentTime$R$builtin_int64() {
    struct timeval t;
    if (gettimeofday(&t, NULL) == -1) {
        abort();
    }
    return ((int64_t) t.tv_sec) * 1000 + ((int64_t) t.tv_usec) / 1000;
    
}

void frost$core$Frost$disableRefErrorReporting() {
    refErrorReporting = false;
}

// RegularExpression

void frost$core$RegularExpression$compile$frost$core$String$frost$core$Int64(RegularExpression* r,
        String* regex, Int64 flags) {
    UErrorCode status = U_ZERO_ERROR;
    char* text = frostGetCString(regex);
    UText* ut = utext_openUTF8(NULL, text, regex->size, &status);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
    UParseError parseStatus;
    int icuFlags = 0;
    if (flags.value & 1) {
        icuFlags |= UREGEX_MULTILINE;
    }
    if (flags.value & 2) {
        icuFlags |= UREGEX_CASE_INSENSITIVE;
    }
    if (flags.value & 4) {
        icuFlags |= UREGEX_DOTALL;
    }
    r->nativeHandle = uregex_openUText(ut, icuFlags, &parseStatus, &status);
    ++allocations;
    utext_close(ut);
    frostFree(text);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
}

Matcher* frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(
        RegularExpression* self, String* s) {
    Matcher* result = frostObjectAlloc(sizeof(Matcher), &frost$core$Matcher$class);
    UErrorCode status = U_ZERO_ERROR;
    ++allocations;
    result->nativeHandle = uregex_clone(self->nativeHandle, &status);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
    result->searchText = s;
    frost$core$Frost$ref$frost$core$Object$Q((Object*) s);    
    UText* ut = utext_openUTF8(NULL, (const char*) s->data, s->size, &status);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
    uregex_setUText(result->nativeHandle, ut, &status);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
    utext_close(ut);
    return result;
}

void frost$core$RegularExpression$destroy(RegularExpression* self) {
    uregex_close(self->nativeHandle);
    __atomic_sub_fetch(&allocations, 1, __ATOMIC_RELAXED);
}

void frost$core$Matcher$matches$R$frost$core$Bit(Bit* result, Matcher* self) {
    UErrorCode status = U_ZERO_ERROR;
    self->matched.value = uregex_matches(self->nativeHandle, 0, &status);
    *result = self->matched;
    self->replacementIndex.value.value = self->searchText->size;
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
}

void frost$core$Matcher$nativeFind$frost$core$String$Index$R$frost$core$Bit(Bit* result,
        Matcher* self, StringIndex startIndex) {
    UErrorCode status = U_ZERO_ERROR;
    result->value = uregex_find(self->nativeHandle, startIndex.value.value, &status);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
}

void frost$core$Matcher$get_start$R$frost$core$String$Index(Int64* result, Matcher* self) {
    UErrorCode status = U_ZERO_ERROR;
    result->value = uregex_start(self->nativeHandle, 0, &status);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }

}

void frost$core$Matcher$get_end$R$frost$core$String$Index(Int64* result, Matcher* self) {
    UErrorCode status = U_ZERO_ERROR;
    result->value = uregex_end(self->nativeHandle, 0, &status);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }

}

void frost$core$Matcher$get_groupCount$R$frost$core$Int64(Int64* result, Matcher* self) {
    UErrorCode status = U_ZERO_ERROR;
    result->value = uregex_groupCount(self->nativeHandle, &status) + 1;
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
}

String* frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q(Matcher* self,
        Int64 group) {
    UErrorCode status = U_ZERO_ERROR;
    int64_t length;
    UText* ut = uregex_groupUText(self->nativeHandle, group.value, NULL, &length, &status);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
    const char* utf8 = (ut->context + (int) UTEXT_GETNATIVEINDEX(ut));
    String* result = frostNewString(utf8, length);
    utext_close(ut);
    return result;
}

void frost$core$Matcher$destroy(Matcher* self) {
    uregex_close(self->nativeHandle);
    __atomic_sub_fetch(&allocations, 1, __ATOMIC_RELAXED);
}

// Thread

typedef struct ThreadInfo {
    Method* run;
    Bit preventsExit;
} ThreadInfo;

void frostThreadEntry(ThreadInfo* threadInfo) {
    if (threadInfo->run->target) {
        ((void(*)(Object*)) threadInfo->run->pointer)(threadInfo->run->target);
    }
    else {
        ((void(*)()) threadInfo->run->pointer)();
    }
    frost$core$Frost$unref$frost$core$Object$Q((Object*) threadInfo->run);
    frostFree(threadInfo);
    if (threadInfo->preventsExit.value) {
        pthread_mutex_lock(&preventsExitThreadsMutex);
        preventsExitThreads--;
        if (preventsExitThreads == 0) {
            pthread_cond_signal(&preventsExitThreadsVar);
        }
        pthread_mutex_unlock(&preventsExitThreadsMutex);
    }
}

void frost$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(Thread* thread, Method* run,
        Bit preventsExit) {
    if (!preventsExit.value) {
        // if threads are still running on exit, then naturally objects will still be in memory on
        // exit, so don't complain
        refErrorReporting = false;
    }
    pthread_t threadId;
    ThreadInfo* threadInfo = frostAlloc(sizeof(ThreadInfo));
    frost$core$Frost$ref$frost$core$Object$Q((Object*) run);
    threadInfo->run = run;
    threadInfo->preventsExit = preventsExit;
    if (threadInfo->preventsExit.value) {
        pthread_mutex_lock(&preventsExitThreadsMutex);
        preventsExitThreads++;
        pthread_mutex_unlock(&preventsExitThreadsMutex);
    }
    pthread_create(&threadId, NULL, (void* (*)()) &frostThreadEntry, threadInfo);
    // If there's a system where this isn't true, we can easily use the nativeHandler as a pointer
    // to the pthread_t instead when the sizes don't match. For now, I'm just going to be lazy.
    frostAssert(sizeof(threadId) == sizeof(thread->nativeHandle));
    thread->nativeHandle = threadId;
}

void frost$threads$Thread$run$$LP$RP$EQ$AM$GT$ST$LP$RP$builtin_bit(Thread* thread, Method* run,
        Bit preventsExit) {
    frost$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(thread, run, preventsExit);
}

void frost$threads$Thread$waitFor(Thread* thread) {
    frostAssert(sizeof(pthread_t) == sizeof(thread->nativeHandle));
    pthread_join((pthread_t) thread->nativeHandle, NULL);
}

void frost$threads$Thread$sleep$frost$core$Int64(int64_t millis) {
    usleep(millis * 1000);
}

// Lock

void frost$threads$Lock$create(Lock* lock) {
    lock->mutex = frostAlloc(sizeof(pthread_mutex_t));
    pthread_mutex_init(lock->mutex, NULL);
}

void frost$threads$Lock$lock(Lock* lock) {
    pthread_mutex_lock(lock->mutex);
}

void frost$threads$Lock$unlock(Lock* lock) {
    pthread_mutex_unlock(lock->mutex);
}

void frost$threads$Lock$destroy(Lock* lock) {
    pthread_mutex_destroy(lock->mutex);
    frostFree(lock->mutex);
}

// Notifier

void frost$threads$Notifier$create(Notifier* notifier) {
    notifier->cond = frostAlloc(sizeof(pthread_cond_t));
    pthread_cond_init(notifier->cond, NULL);
}

void frost$threads$Notifier$wait(Notifier* notifier) {
    pthread_cond_wait(notifier->cond, notifier->lock->mutex);
}

void frost$threads$Notifier$notify(Notifier* notifier) {
    pthread_cond_signal(notifier->cond);
}

void frost$threads$Notifier$notifyAll(Notifier* notifier) {
    pthread_cond_broadcast(notifier->cond);
}

void frost$threads$Notifier$destroy(Notifier* notifier) {
    pthread_cond_destroy(notifier->cond);
    frostFree(notifier->cond);
}

// Console

void frost$io$Console$print$frost$core$String(String* s) {
    fwrite(s->data, 1, s->size, stdout);
}

void frost$io$Console$printError$frost$core$String(String* s) {
    fwrite(s->data, 1, s->size, stderr);
}

void frost$io$Console$read$R$frost$core$Char8$Q(NullableChar* result) {
    int read = getchar();
    if (read != EOF) {
        result->value = read;
        result->nonnull = 1;
    }
    else {
        result->nonnull = 0;
    }
}

FileInputStream* frost$io$Console$inputStream$R$frost$io$InputStream() {
    FileInputStream* result = frostObjectAlloc(sizeof(FileInputStream),
            &frost$io$FileInputStream$class);
    frost$io$InputStream$init(result);
    result->file = stdin;
    return result;
}

FileOutputStream* frost$io$Console$outputStream$R$frost$io$OutputStream() {
    FileOutputStream* result = frostObjectAlloc(sizeof(FileOutputStream),
            &frost$io$FileOutputStream$class);
    frost$io$OutputStream$init(result);
    result->file = stdout;
    return result;
}

FileOutputStream* frost$io$Console$errorStream$R$frost$io$OutputStream() {
    FileOutputStream* result = frostObjectAlloc(sizeof(FileOutputStream),
            &frost$io$FileOutputStream$class);
    frost$io$OutputStream$init(result);
    result->file = stderr;
    return result;
}

// File

String* frostFileErrorMessage(const char* msg, const char* path) {
    char buffer[1024];
    int length;
    if (path) {
        length = snprintf(buffer, sizeof(buffer), "%s %s: %s", msg, path, strerror(errno));
    }
    else {
        length = snprintf(buffer, sizeof(buffer), "%s: %s", msg, strerror(errno));
    }
    return frostNewString(buffer, length);
}

Object* frost$io$File$openInputStream$R$frost$core$Maybe$LTfrost$io$InputStream$GT(File* self) {
    FileInputStream* result = frostObjectAlloc(sizeof(FileInputStream),
            &frost$io$FileInputStream$class);
    frost$io$InputStream$init(result);
    char* str = frostGetCString(self->path);
    result->file = fopen(str, "rb");
    if (!result->file) {
        frostFree(str);
        return frostMaybeError(frostFileErrorMessage("Could not read", str));
    }
    frostFree(str);
    result->closeOnCleanup.value = true;
    return frostMaybeSuccess((Object*) result);
}

Object* frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(File* self) {
    FileOutputStream* result = frostObjectAlloc(sizeof(FileOutputStream),
            &frost$io$FileOutputStream$class);
    frost$io$OutputStream$init(result);
    char* str = frostGetCString(self->path);
    result->file = fopen(str, "wb");
    if (!result->file) {
        frostFree(str);
        return frostMaybeError(frostFileErrorMessage("Could not write", str));
    }
    frostFree(str);
    result->closeOnCleanup.value = true;
    return frostMaybeSuccess((Object*) result);
}

Object* frost$io$File$openForAppend$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(File* self) {
    FileOutputStream* result = frostObjectAlloc(sizeof(FileOutputStream),
            &frost$io$FileOutputStream$class);
    frost$io$OutputStream$init(result);
    char* str = frostGetCString(self->path);
    result->file = fopen(str, "ab");
    if (!result->file) {
        frostFree(str);
        return frostMaybeError(frostFileErrorMessage("Could not write", str));
    }
    frostFree(str);
    result->closeOnCleanup.value = true;
    return frostMaybeSuccess((Object*) result);
}

Object* frost$io$File$absolute$R$frost$core$Maybe$LTfrost$io$File$GT(File* file) {
    char path[PATH_MAX];
    char* rawPath = frostGetCString(file->path);
    if (!realpath(rawPath, path)) {
        Object* result = frostMaybeError(frostFileErrorMessage("Could not determine absolute path",
                rawPath));
        frostFree(rawPath);
        return result;
    }
    frostFree(rawPath);
    File* f = frostObjectAlloc(sizeof(File), &frost$io$File$class);
    f->path = frostNewString(path, strlen(path));
    Object* result = frostMaybeSuccess((Object*) f);
    return result;
}

Error* frost$io$File$rename$frost$io$File$R$frost$core$Error$Q(File* src, File* dst) {
    char* srcPath = frostGetCString(src->path);
    char* dstPath = frostGetCString(dst->path);
    if (rename(srcPath, dstPath)) {
        Error* result = frostObjectAlloc(sizeof(Error), &frost$core$Error$class);
        result->message = frostFileErrorMessage("Could not rename", srcPath);
        frostFree(srcPath);
        frostFree(dstPath);
        return result;
    }
    return NULL;
}

Error* frost$io$File$delete$R$frost$core$Error$Q(File* self) {
    char* path = frostGetCString(self->path);
    if (remove(path)) {
        Error* result = frostObjectAlloc(sizeof(Error), &frost$core$Error$class);
        result->message = frostFileErrorMessage("Could not delete", path);
        frostFree(path);
        return result;
    }
    return NULL;
}

void frost$io$File$exists$R$frost$core$Bit(Bit* result, File* file) {
    char* path = frostGetCString(file->path);
    struct stat fileInfo;
    result->value = stat(path, &fileInfo) >= 0;
    frostFree(path);
}

void frost$io$File$isDirectory$R$frost$core$Bit(Bit* result, File* file) {
    char* path = frostGetCString(file->path);
    struct stat fileInfo;
    stat(path, &fileInfo);
    frostFree(path);
    result->value = S_ISDIR(fileInfo.st_mode);
}

Error* frost$io$File$createDirectory$R$frost$core$Error$Q(File* file) {
    Bit directoryExists;
    frost$io$File$isDirectory$R$frost$core$Bit(&directoryExists, file);
    if (!directoryExists.value) {
        char* path = frostGetCString(file->path);
        int result = mkdir(path, 0755);
        frostFree(path);
        if (result) {
            return frostError(frostFileErrorMessage("Could not create directory", path));
        }
    }
    return NULL;
}

Object* frost$io$File$list$R$frost$core$Maybe$LTfrost$collections$ListView$LTfrost$io$File$GT$GT(File* dir) {
    Array* result = frostObjectAlloc(sizeof(Array), &frost$collections$Array$class);
    result->count = 0;
    result->capacity = 16;
    result->data = frostAlloc(result->capacity * sizeof(Object*));
    DIR *d;
    struct dirent *entry;
    char* path = frostGetCString(dir->path);
    #define MAX_PATH 1024
    char buffer[MAX_PATH];
    memcpy(buffer, path, dir->path->size);
    buffer[dir->path->size] = '/';
    d = opendir(path);
    if (!d) {
        Object* result = frostMaybeError(frostFileErrorMessage("Could not list directory", path));
        frostFree(path);
        return result;
    }
    frostFree(path);
    while ((entry = readdir(d))) {
        if (!strcmp(entry->d_name, ".") || !strcmp(entry->d_name, "..")) {
            continue;
        }
        size_t length = strlen(entry->d_name);
        memcpy(buffer + dir->path->size + 1, entry->d_name, length);
        buffer[dir->path->size + 1 + length] = 0;
        String* path = frostNewString(buffer, dir->path->size + 1 + length);
        File* file = frostObjectAlloc(sizeof(File), &frost$io$File$class);
        file->path = path;
        frost$collections$Array$add$frost$collections$Array$T(result, (Object*) file);
        --file->refcnt;
    }
    closedir(d);
    return frostMaybeSuccess((Object*) result);
}

// FileInputStream

void frost$io$FileInputStream$readImpl$R$frost$core$UInt8$Q(NullableUInt8* result,
        FileInputStream* self) {
    int read = fgetc(self->file);
    if (read != EOF) {
        result->value = read;
        result->nonnull = -1;
    }
    else {
        result->nonnull = 0;
    }
}

void frost$io$FileInputStream$readImpl$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64(
        int64_t* result, FileInputStream* self, void* buffer, int max) {
    *result = fread(buffer, 1, max, self->file);
}

Error* frost$io$FileInputStream$close$R$frost$core$Error$Q(FileInputStream* self) {
    self->closeOnCleanup.value = false;
    if (fclose(self->file)) {
        return frostError(frostFileErrorMessage("Error closing stream", NULL));
    }
    return NULL;
}

// FileOutputStream
Error* frost$io$FileOutputStream$write$frost$core$UInt8$R$frost$core$Error$Q(FileOutputStream* self,
        uint8_t ch) {
    if (fputc(ch, self->file) == EOF) {
        const char* msg = "Error writing to stream";
        return frostError(frostNewString(msg, strlen(msg)));
    }
    return NULL;
}

Error* frost$io$FileOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Error$Q(
        FileOutputStream* self, void* src, int64_t count) {
    if (fwrite(src, 1, count, self->file) != count) {
        const char* msg = "Error writing to stream";
        return frostError(frostNewString(msg, strlen(msg)));
    }
    return NULL;
}

Error* frost$io$FileOutputStream$close$R$frost$core$Error$Q(FileOutputStream* self) {
    self->closeOnCleanup.value = false;
    if (fclose(self->file)) {
        return frostError(frostFileErrorMessage("Error closing stream", NULL));
    }
    return NULL;
}

Error* frost$io$FileOutputStream$flush$R$frost$core$Error$Q(FileOutputStream* self) {
    if (fflush(self->file)) {
        return frostError(frostFileErrorMessage("Error flushing stream", NULL));
    }
    return NULL;
}

Error* frost$io$File$rename$frost$core$String(File* src, String* dst) {
    char* srcPath = frostGetCString(src->path);
    char* dstPath = frostGetCString(dst);
    if (rename(srcPath, dstPath)) {
        return frostError(frostFileErrorMessage("Error renaming file", srcPath));
    }
    return NULL;
}

