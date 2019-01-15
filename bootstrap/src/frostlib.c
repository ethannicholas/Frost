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
    FileOutputStream* input;
    FileInputStream* output;
    FileInputStream* error;
} Process;

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

#define frostMaybeSuccess frost$core$Frost$success$frost$core$Object$R$frost$core$Maybe$LTfrost$core$Object$GT$Q

#define frostMaybeError frost$core$Frost$error$frost$core$String$R$frost$core$Maybe$LTfrost$core$Object$GT$Q

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
bool debugAllocs = true;
#endif

void* frostAlloc(size_t size) {
    allocations++;
    return calloc(size, 1);
}

void* frostZAlloc(size_t size) {
    allocations++;
    return calloc(size, 1);
}

void* frostObjectAlloc(size_t size, Class* cl) {
#if DEBUG_ALLOCS
    if (debugAllocs) {
        debugAllocs = false;
        if (!frost) {
            frost = frostZAlloc(sizeof(Object) + sizeof(void*));
            frost->cl = &frost$core$Frost$class;
            frost->refcnt = 1;
            frost$core$Frost$init(frost);
        }
        frost$core$Frost$countAllocation$frost$core$Class(frost, cl);
        debugAllocs = true;
    }
#endif
    Object* result = frostZAlloc(size);
    result->cl = cl;
    result->refcnt = 1;
    return result;
}

void* frostRealloc(void* ptr, size_t oldSize, size_t newSize) {
    void* result = realloc(ptr, newSize);
    if (newSize > oldSize) {
        memset(result + oldSize, 0, newSize - oldSize);
    }
    return result;
}

void frostFree(void* ptr) {
    allocations--;
#if !DEBUG_ALLOCS
//    free(ptr);
#endif
}

void frostObjectFree(Object* o) {
#if DEBUG_ALLOCS
    if (debugAllocs) {
        debugAllocs = false;
        frost$core$Frost$countDeallocation$frost$core$Class(frost, o->cl);
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
    args->data = frostZAlloc(argc * sizeof(Object*));
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

void frost$core$System$exit$frost$core$UInt8(UInt8 code) {
    exit(code.value);
}

void frost$core$System$crash() {
    fflush(stdout);
    fflush(stderr);
    __builtin_trap();
}

Process* frost$core$System$exec$frost$io$File$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$System$Process$Q(
        File* path, Object* args) {
    // FIXME need to output headers so I can kill these hardcoded interface method offsets
    int (*get_count)(Object*) = frostGetInterfaceMethod(args,
                &frost$collections$CollectionView$class, 0);
    String* (*index)(Object*, int) = frostGetInterfaceMethod(args,
                &frost$collections$ListView$class, 0);
    int stdinPipe[2];
    if (pipe(stdinPipe)) {
        perror("error opening stdin pipe");
        exit(1);
    }
    int stdoutPipe[2];
    if (pipe(stdoutPipe)) {
        perror("error opening stdout pipe");
        exit(1);
    }
    int stderrPipe[2];
    if (pipe(stderrPipe)) {
        perror("error opening stderr pipe");
        exit(1);
    }
    pid_t pid = fork();
    if (pid < 0) {
        perror("fork failed");
        exit(1);
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
        cargs[0] = frostGetCString(path->path);
        int i;
        for (i = 0; i < argCount; ++i) {
            cargs[i + 1] = frostGetCString(index(args, i));
        }
        cargs[argCount + 1] = NULL;
        execvp(cargs[0], cargs);
        perror("error exec'ing child process");
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
        result->input = frostObjectAlloc(sizeof(FileOutputStream),
                &frost$io$FileOutputStream$class);
        frost$io$OutputStream$init(result->input);
        result->input->file = fdopen(stdinPipe[1], "wb");
        result->input->closeOnCleanup.value = true;
//        setvbuf(result->input->file, NULL, _IONBF, 0);
        result->output = frostObjectAlloc(sizeof(FileInputStream), &frost$io$FileInputStream$class);
        frost$io$InputStream$init(result->output);
        result->output->file = fdopen(stdoutPipe[0], "rb");
        result->output->closeOnCleanup.value = true;
//        setvbuf(result->output->file, NULL, _IONBF, 0);
        result->error = frostObjectAlloc(sizeof(FileInputStream), &frost$io$FileInputStream$class);
        frost$io$InputStream$init(result->error);
        result->error->file = fdopen(stderrPipe[0], "rb");
        result->error->closeOnCleanup.value = true;
//        setvbuf(result->error->file, NULL, _IONBF, 0);
        return result;
    }
    return NULL;
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
        frost = frostZAlloc(sizeof(Object) + sizeof(void*));
        frost->cl = &frost$core$Frost$class;
        frost->refcnt = 1;
        frost$core$Frost$init(frost);
    }
    frost$core$Frost$countTrace$frost$core$String(frost, s);
}

void frost$core$Frost$ref$frost$core$Object$Q(Object* o) {
    if (o && o->refcnt != NO_REFCNT) {
        int newCount = __atomic_add_fetch(&o->refcnt, 1, __ATOMIC_RELAXED <= 1);
        if (newCount <= 1 && refErrorReporting) {
            printf("internal error: ref %p with refcnt = %d\n", o, newCount - 1);
            printf("    class: %s\n", frostGetCString(o->cl->name));
            abort();
        }
    }
}

void frost$core$Frost$unref$frost$core$Object$Q(Object* o) {
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

String* frost$core$Real32$convert$R$frost$core$String(Real32 d) {
    size_t len = snprintf(NULL, 0, "%g", d.value);
    char* chars = (char*) frostAlloc(len + 1);
    snprintf(chars, len + 1, "%g", d.value);
    String* result = frostNewString(chars, len);
    frostFree(chars);
    return result;
}

String* frost$core$Real64$convert$R$frost$core$String(Real64 d) {
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

void frostFatalError(const char* msg) {
    printf("%s\n", msg);
    abort();
}

void frostAssert(uint8_t b) {
    if (!b) {
        frostFatalError("assertion failure");
    }
}

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
    --allocations;
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
    --allocations;
}

// Thread

typedef struct ThreadInfo {
    Method* run;
    Bit preventsExit;
} ThreadInfo;

void frostThreadEntry(ThreadInfo* threadInfo) {
    if (threadInfo->preventsExit.value) {
        pthread_mutex_lock(&preventsExitThreadsMutex);
        preventsExitThreads++;
        pthread_mutex_unlock(&preventsExitThreadsMutex);
    }
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
        if (preventsExitThreads == 0)
            pthread_cond_signal(&preventsExitThreadsVar);
        pthread_mutex_unlock(&preventsExitThreadsMutex);
    }
}

void frost$threads$Thread$run$$LP$RP$EQ$AM$GT$ST$LP$RP$builtin_bit(Object* thread, Method* run,
        Bit preventsExit) {
    pthread_t threadId;
    ThreadInfo* threadInfo = frostAlloc(sizeof(ThreadInfo));
    frost$core$Frost$ref$frost$core$Object$Q((Object*) run);
    threadInfo->run = run;
    threadInfo->preventsExit = preventsExit;
    pthread_create(&threadId, NULL, (void* (*)()) &frostThreadEntry, threadInfo);
}

void frost$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(Object* thread, Method* run,
        Bit preventsExit) {
    pthread_t threadId;
    ThreadInfo* threadInfo = frostAlloc(sizeof(ThreadInfo));
    frost$core$Frost$ref$frost$core$Object$Q((Object*) run);
    threadInfo->run = run;
    threadInfo->preventsExit = preventsExit;
    pthread_create(&threadId, NULL, (void* (*)()) &frostThreadEntry, threadInfo);
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

void frost$io$Console$write$frost$core$Char8(char ch) {
    putchar(ch);
}

void frost$io$Console$print$frost$core$String(String* s) {
    fwrite(s->data, 1, s->size, stdout);
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

FileInputStream* frost$io$File$openInputStream$R$frost$io$InputStream(File* self) {
    FileInputStream* result = frostObjectAlloc(sizeof(FileInputStream),
            &frost$io$FileInputStream$class);
    frost$io$InputStream$init(result);
    char* str = frostGetCString(self->path);
    result->file = fopen(str, "rb");
    if (!result->file) {
        printf("error opening '%s' for reading\n", str);
        exit(1);
    }
    result->closeOnCleanup.value = true;
    frostFree(str);
    return result;
}

FileOutputStream* frost$io$File$openOutputStream$R$frost$io$OutputStream(File* self) {
    FileOutputStream* result = frostObjectAlloc(sizeof(FileOutputStream),
            &frost$io$FileOutputStream$class);
    frost$io$OutputStream$init(result);
    char* str = frostGetCString(self->path);
    result->file = fopen(str, "wb");
    if (!result->file) {
        printf("error opening '%s' for writing\n", str);
        exit(1);
    }
    result->closeOnCleanup.value = true;
    frostFree(str);
    return result;
}

FileOutputStream* frost$io$File$openForAppend$R$frost$io$OutputStream(File* self) {
    FileOutputStream* result = frostObjectAlloc(sizeof(FileOutputStream),
            &frost$io$FileOutputStream$class);
    frost$io$OutputStream$init(result);
    char* str = frostGetCString(self->path);
    result->file = fopen(str, "ab");
    if (!result->file) {
        printf("error opening '%s' for appending\n", str);
        exit(1);
    }
    result->closeOnCleanup.value = true;
    frostFree(str);
    return result;
}

Object* frost$io$File$absolute$R$frost$core$Maybe$LTfrost$io$File$GT(File* file) {
    char path[PATH_MAX];
    char* rawPath = frostGetCString(file->path);
    if (!realpath(rawPath, path)) {
        frostFree(rawPath);
        const char* msg = "unable to resolve absolute path";
        String* str = frostNewString(msg, strlen(msg));
        Object* result = frostMaybeError(str);
        frost$core$Frost$unref$frost$core$Object$Q((Object*) str);
        return result;
    }
    frostFree(rawPath);
    File* f = frostObjectAlloc(sizeof(File), &frost$io$File$class);
    f->path = frostNewString(path, strlen(path));
    Object* result = frostMaybeSuccess((Object*) f);
    frost$core$Frost$unref$frost$core$Object$Q((Object*) f);
    return result;
}

void frost$io$File$delete(File* file) {
    char* path = frostGetCString(file->path);
    if (remove(path)) {
        printf("failed to delete %s\n", path);
        exit(1);
    }
    frostFree(path);
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

void frost$io$File$createDirectory(File* file) {
    char* path = frostGetCString(file->path);
    mkdir(path, 0755);
    frostFree(path);
}

Array* frost$io$File$list$R$frost$collections$ListView$LTfrost$io$File$GT(File* dir) {
    Array* result = frostObjectAlloc(sizeof(Array), &frost$collections$Array$class);
    result->count = 0;
    result->capacity = 16;
    result->data = frostZAlloc(result->capacity * sizeof(Object*));
    DIR *d;
    struct dirent *entry;
    char* path = frostGetCString(dir->path);
    #define MAX_PATH 1024
    char buffer[MAX_PATH];
    memcpy(buffer, path, dir->path->size);
    buffer[dir->path->size] = '/';
    d = opendir(path);
    frostFree(path);
    if (!d) {
        return result;
    }
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
    return result;
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

void frost$io$FileInputStream$close(FileInputStream* self) {
    fclose(self->file);
    self->closeOnCleanup.value = false;
}

// FileOutputStream

void frost$io$FileOutputStream$write$frost$core$UInt8(FileOutputStream* self, uint8_t ch) {
    fputc(ch, self->file);
}

void frost$io$FileOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64(
        FileOutputStream* self, void* src, int64_t count) {
    fwrite(src, 1, count, self->file);
}

void frost$io$FileOutputStream$close(FileOutputStream* self) {
    fclose(self->file);
    self->closeOnCleanup.value = false;
}

void frost$io$FileOutputStream$flush(FileOutputStream* self) {
    fflush(self->file);
}

void frost$io$File$rename$frost$core$String(File* src, String* dst) {
    char* srcPath = frostGetCString(src->path);
    char* dstPath = frostGetCString(dst);
    rename(srcPath, dstPath);
}

