#include <dirent.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <math.h>
#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#else
#include "unicode/uregex.h"
#endif

#ifdef __APPLE__
#define MACH_TIMER
#include <mach/mach_time.h>
#endif

typedef uint8_t bool;

#define true 1
#define false 0

#define FROST_WEAK_REFERENCE_FLAG 1

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
    bool flags;
    struct String* name;
    struct Class* super;
    ITable* itable;
    void* vtable[0];
} Class;

typedef struct Object {
    Class* cl;
    int32_t refcnt;
    bool flags;
} Object;

typedef struct Bit {
    uint8_t value;
} Bit;

typedef struct Int8 {
    int8_t value;
} Int8;

typedef struct Int16 {
    int16_t value;
} Int16;

typedef struct Int32 {
    int32_t value;
} Int32;

typedef struct Int64 {
    int64_t value;
} Int64;

typedef struct Int {
    int64_t value;
} Int;

typedef struct UInt8 {
    uint8_t value;
} UInt8;

typedef struct UInt16 {
    uint16_t value;
} UInt16;

typedef struct UInt32 {
    uint32_t value;
} UInt32;

typedef struct UInt64 {
    uint64_t value;
} UInt64;

typedef struct UInt {
    uint64_t value;
} UInt;

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
    bool flags;
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
    bool flags;
    int64_t count;
    int64_t capacity;
    Object** data;
} Array;

typedef struct Error {
    Class* cl;
    int32_t refcnt;
    bool flags;
    String* message;
} Error;

typedef struct File {
    Class* cl;
    int32_t refcnt;
    bool flags;
    String* path;
} File;

typedef struct FileInputStream {
    Class* cl;
    int32_t refcnt;
    bool flags;
    int64_t byteOrder;
    FILE* file;
    Bit closeOnCleanup;
} FileInputStream;

extern Class frost$io$FileInputStream$class;

typedef struct FileOutputStream {
    Class* cl;
    int32_t refcnt;
    bool flags;
    int64_t byteOrder;
    String* lineEnding;
    FILE* file;
    Bit closeOnCleanup;
} FileOutputStream;

typedef struct Process {
    Class* cl;
    int32_t refcnt;
    bool flags;
    int64_t pid;
    // FIXME unsafe assumption that Object* and int64_t are the same size
    FileOutputStream* _stdin;
    FileInputStream* _stdout;
    FileInputStream* _stderr;
} Process;

typedef struct Thread {
    Class* cl;
    int32_t refcnt;
    bool flags;
    // FIXME unsafe assumption that void* and int64_t are the same size
    void* nativeHandle;
} Thread;

typedef struct Lock {
    Class* cl;
    int32_t refcnt;
    bool flags;
    pthread_mutex_t* mutex;
} Lock;

typedef struct Notifier {
    Class* cl;
    int32_t refcnt;
    bool flags;
    pthread_cond_t* cond;
    Lock* lock;
} Notifier;

typedef struct Method {
    Class* cl;
    int32_t refcnt;
    bool flags;
    void* pointer;
    Object* target;
} Method;

typedef struct RegularExpression {
    Class* cl;
    int32_t refcnt;
    bool flags;
    void* nativeHandle;
} RegularExpression;

typedef struct Matcher {
    Class* cl;
    int32_t refcnt;
    bool flags;
    void* nativeHandle;
    String* searchText;
    Bit matched;
    StringIndex replacementIndex;
} Matcher;

typedef struct Timer {
    Class* cl;
    int32_t refcnt;
#ifdef MACH_TIMER
    double scale;
#else
    int64_t native;
#endif
    double basis;
} Timer;

extern Class frost$core$Frost$class;

extern Class frost$core$Error$class;

extern Class frost$io$File$class;

extern Class frost$io$FileOutputStream$class;

extern Class frost$collections$Array$class;

extern Class frost$collections$CollectionView$class;

extern Class frost$collections$ListView$class;

extern Class frost$core$System$Process$class;

extern Class frost$core$Matcher$class;

Object* frost$core$Frost$success$frost$core$Object$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(Object*);

Object* frost$core$Frost$error$frost$core$String$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(String*);

void frost$core$Frost$ref$frost$core$Object$Q(Object*);

void frost$core$Frost$unref$frost$core$Object$Q(Object*);

void frost$core$Frost$dumpReport$frost$core$Frost$TraceData(Object*);

void frost$collections$Array$add$frost$collections$Array$T(Array*, Object*);

void frost$io$InputStream$init(void*);

void frost$io$OutputStream$init(void*);

Object* frost$core$Frost$createWeakReferenceMap$R$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Object$GT$GT();

void frost$core$Frost$_addWeakReference$frost$core$Weak$LTfrost$core$Object$GT$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(Object*, Object*);

void frost$core$Frost$weakReferentDestroyed$frost$core$Int$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(Int, Object*);

char* frostGetCString(String* s);

void frostFree(void* ptr);

int allocations = 0;

static int preventsExitThreads = 0;
static pthread_cond_t preventsExitThreadsVar = PTHREAD_COND_INITIALIZER;
static pthread_mutex_t preventsExitThreadsMutex = PTHREAD_MUTEX_INITIALIZER;

static pthread_mutex_t weakReferenceMutex = PTHREAD_MUTEX_INITIALIZER;

static Object* weakReferences = NULL;

static bool refErrorReporting = true;

void frostFatalError(const char* msg) {
    printf("%s\n", msg);
    abort();
}

void _frostAssert(int i, const char* file, int line) {
    if (!i) {
        fprintf(stderr, "%s:%d: assertion failure\n", file, line);
        abort();
    }
}

#define frostAssert(i) _frostAssert(i, __FILE__, __LINE__)

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
    free(ptr);
}

void frostObjectFree(Object* o) {
    if (o->flags & FROST_WEAK_REFERENCE_FLAG) {
        pthread_mutex_lock(&weakReferenceMutex);
        Int cast;
        cast.value = (int64_t) o;
        frost$core$Frost$weakReferentDestroyed$frost$core$Int$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(cast, weakReferences);
        pthread_mutex_unlock(&weakReferenceMutex);
    }
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
    Array* args = frostObjectAlloc(sizeof(Array), &frost$collections$Array$class);
    args->count = argc;
    args->capacity = argc;
    args->data = frostAlloc(argc * sizeof(Object*));
    int i;
    for (i = 0; i < argc; ++i) {
        args->data[i] = (Object*) frostNewString(argv[i], strlen(argv[i]));
    }
    signal(SIGPIPE, SIG_IGN);
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
    if (weakReferences) {
        frostAssert(weakReferences->refcnt == 1);
        frost$core$Frost$unref$frost$core$Object$Q(weakReferences);
    }
    if (refErrorReporting) {
        if (allocations && allocations != 1) {
            printf("warning: %d objects were still in memory on exit\n", allocations);
        }
        else if (allocations == 1) {
            printf("warning: 1 object was still in memory on exit\n");
        }
    }
    return 0;
}

// System

void frost$core$System$exit$frost$core$Int(Int64 code) {
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

        result->_stdin = frostObjectAlloc(sizeof(FileOutputStream),
                &frost$io$FileOutputStream$class);
        frost$io$OutputStream$init(result->_stdin);
        result->_stdin->file = fdopen(stdinPipe[1], "wb");
        frostAssert(result->_stdin->file != NULL);
        result->_stdin->closeOnCleanup.value = true;

        result->_stdout = frostObjectAlloc(sizeof(FileInputStream),
                &frost$io$FileInputStream$class);
        frost$io$InputStream$init(result->_stdout);
        result->_stdout->file = fdopen(stdoutPipe[0], "rb");
        frostAssert(result->_stdout->file != NULL);
        result->_stdout->closeOnCleanup.value = true;

        result->_stderr = frostObjectAlloc(sizeof(FileInputStream),
                &frost$io$FileInputStream$class);
        frost$io$InputStream$init(result->_stderr);
        result->_stderr->file = fdopen(stderrPipe[0], "rb");
        frostAssert(result->_stderr->file != NULL);
        result->_stderr->closeOnCleanup.value = true;

        return frostMaybeSuccess((Object*) result);
    }
}

Object* frost$core$System$Process$standardInput$R$frost$io$OutputStream(Process* p) {
    Object* result = (Object*) p->_stdin;
    frost$core$Frost$ref$frost$core$Object$Q(result);
    return result;
}

Object* frost$core$System$Process$standardOutput$R$frost$io$InputStream(Process* p) {
    Object* result = (Object*) p->_stdout;
    frost$core$Frost$ref$frost$core$Object$Q(result);
    return result;
}

Object* frost$core$System$Process$standardError$R$frost$io$InputStream(Process* p) {
    Object* result = (Object*) p->_stderr;
    frost$core$Frost$ref$frost$core$Object$Q(result);
    return result;
}

void frost$core$System$Process$_cleanup(Process* p) {
    frost$core$Frost$unref$frost$core$Object$Q((Object*) p->_stdin);
    frost$core$Frost$unref$frost$core$Object$Q((Object*) p->_stdout);
    frost$core$Frost$unref$frost$core$Object$Q((Object*) p->_stderr);
}

void frost$core$System$Process$exitCode$R$frost$core$Int$Q(NullableInt* result, Process* p) {
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

void frost$core$System$Process$waitFor$R$frost$core$Int(Int64* result, Process* p) {
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

// Int8

void frost$core$Int8$get_bitCount$R$frost$core$Int8(Int8* out, Int8 x) {
    out->value = __builtin_popcount(x.value);
}

// Int16

void frost$core$Int16$get_bitCount$R$frost$core$Int16(Int16* out, Int16 x) {
    out->value = __builtin_popcount(x.value);
}

// Int32

void frost$core$Int32$get_bitCount$R$frost$core$Int32(Int32* out, Int32 x) {
    out->value = __builtin_popcount(x.value);
}

// Int64

void frost$core$Int64$get_bitCount$R$frost$core$Int64(Int64* out, Int64 x) {
    out->value = __builtin_popcount(x.value);
}

// Int

void frost$core$Int$get_bitCount$R$frost$core$Int(Int64* out, Int64 x) {
    out->value = __builtin_popcount(x.value);
}

// UInt8

void frost$core$UInt8$get_bitCount$R$frost$core$UInt8(UInt8* out, UInt8 x) {
    out->value = __builtin_popcount(x.value);
}

// UInt16

void frost$core$UInt16$get_bitCount$R$frost$core$UInt16(UInt16* out, UInt16 x) {
    out->value = __builtin_popcount(x.value);
}

// UInt32

void frost$core$UInt32$get_bitCount$R$frost$core$UInt32(UInt32* out, UInt32 x) {
    out->value = __builtin_popcount(x.value);
}

// UInt64

void frost$core$UInt64$get_bitCount$R$frost$core$UInt64(UInt64* out, UInt64 x) {
    out->value = __builtin_popcount(x.value);
}

// UInt

void frost$core$UInt$get_bitCount$R$frost$core$UInt(UInt64* out, UInt64 x) {
    out->value = __builtin_popcount(x.value);
}

// Real32

void frost$core$Real32$get_floor$R$frost$core$Real32(Real32* out, Real32 x) {
    out->value = floor(x.value);
}

void frost$core$Real32$get_ceiling$R$frost$core$Real32(Real32* out, Real32 x) {
    out->value = ceil(x.value);
}

void frost$core$Real32$get_sqrt$R$frost$core$Real32(Real32* out, Real32 x) {
    out->value = sqrt(x.value);
}

void frost$core$Real32$get_sin$R$frost$core$Real32(Real32* out, Real32 x) {
    out->value = sin(x.value);
}

void frost$core$Real32$get_cos$R$frost$core$Real32(Real32* out, Real32 x) {
    out->value = cos(x.value);
}

void frost$core$Real32$get_tan$R$frost$core$Real32(Real32* out, Real32 x) {
    out->value = tan(x.value);
}

// Real64

void frost$core$Real64$get_floor$R$frost$core$Real64(Real64* out, Real64 x) {
    out->value = floor(x.value);
}

void frost$core$Real64$get_ceiling$R$frost$core$Real64(Real64* out, Real64 x) {
    out->value = ceil(x.value);
}

void frost$core$Real64$get_sqrt$R$frost$core$Real64(Real64* out, Real64 x) {
    out->value = sqrt(x.value);
}

void frost$core$Real64$get_sin$R$frost$core$Real64(Real64* out, Real64 x) {
    out->value = sin(x.value);
}

void frost$core$Real64$get_cos$R$frost$core$Real64(Real64* out, Real64 x) {
    out->value = cos(x.value);
}

void frost$core$Real64$get_tan$R$frost$core$Real64(Real64* out, Real64 x) {
    out->value = tan(x.value);
}

// Frost

#define NO_REFCNT -999

void* frost$core$Frost$alloc$builtin_int$R$builtin_int(int size) {
    return frostAlloc(size);
}

void frost$core$Frost$destroy$builtin_int(void* ptr) {
    frostFree(ptr);
}

void* frost$core$Frost$realloc$builtin_int$builtin_int$builtin_int$R$builtin_int(void* ptr, int oldSize,
        int newSize) {
    void* result = realloc(ptr, newSize);
    frostAssert(result != NULL || newSize == 0);
    if (newSize > oldSize) {
        memset(result + oldSize, 0, newSize - oldSize);
    }
    return result;
}

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

void frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(Int64* result, void* o) {
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

void frost$core$Frost$addWeakReference$frost$core$Weak$LTfrost$core$Frost$addWeakReference$T$GT(Object* w) {
    pthread_mutex_lock(&weakReferenceMutex);
    if (!weakReferences) {
        weakReferences = frost$core$Frost$createWeakReferenceMap$R$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Object$GT$GT();
    }
    frost$core$Frost$_addWeakReference$frost$core$Weak$LTfrost$core$Object$GT$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(w, weakReferences);
    pthread_mutex_unlock(&weakReferenceMutex);
}

// RegularExpression

#ifdef __EMSCRIPTEN__
    // under Emscripten, we use the JavaScript regex engine. FIXME: it's going to need some work
    // to handle non-ASCII characters.
    EM_JS(int, createRegex, (const char* str), {
        var re = Module['regularExpressions'];
        if (!re) {
            re = [];
            Module['regularExpressions'] = re;
        }
        var index = re.length;
        // FIXME implement a free list rather than a linear search
        for (var i = 0; i < index; ++i) {
            if (!re[i]) {
                index = i;
            }
        }
        re[i] = new RegExp(UTF8ToString(str), "g");
        return i;
    });

    EM_JS(int, createMatcher, (int regex, const char* str), {
        var re = Module['regularExpressions'];
        var index = re.length;
        // FIXME implement a free list rather than a linear search
        for (var i = 0; i < index; ++i) {
            if (!re[i]) {
                index = i;
            }
        }
        re[i] = { regexp:re[regex], str:UTF8ToString(str) };
        return i;
    });

    EM_JS(void, destroyRegex, (int regex), {
        Module['regularExpressions'][regex] = null;
    });

    EM_JS(int, matcherFind, (int matcher, int start), {
        var re = Module['regularExpressions'];
        var m = re[matcher];
        m.regexp.lastIndex = start;
        var result = m.regexp.exec(m.str);
        if (result) {
            m.groups = result;
            return 1;
        }
        return 0;
    });

    EM_JS(int, matcherMatches, (int matcher), {
        var re = Module['regularExpressions'];
        var m = re[matcher];
        m.regexp.lastIndex = 0;
        var result = m.regexp.exec(m.str);
        if (result && result.index == 0 & result[0].length == m.str.length) {
            m.groups = result;
            return 1;
        }
        return 0;
    });

    EM_JS(int, matcherStart, (int matcher), {
        var m = Module['regularExpressions'][matcher];
        return m.regexp.lastIndex - m.groups[0].length;
    });

    EM_JS(int, matcherEnd, (int matcher), {
        return Module['regularExpressions'][matcher].regexp.lastIndex;
    });

    EM_JS(int, matcherGroupCount, (int matcher), {
        return Module['regularExpressions'][matcher].groups.length;
    });

    EM_JS(const char*, matcherGroup, (int matcher, int group), {
        var result = Module['regularExpressions'][matcher].groups[group];
        var lengthBytes = lengthBytesUTF8(result) + 1;
        var dest = _malloc(lengthBytes);
        stringToUTF8(result, dest, lengthBytes);
        return dest;
    })
#endif

void frost$core$RegularExpression$compile$frost$core$String$frost$core$Int(RegularExpression* r,
        String* regex, Int64 flags) {
#ifdef __EMSCRIPTEN__
    frostAssert(flags.value == 0); // flags NYI
    char* str = frostGetCString(regex);
    r->nativeHandle = (void*) createRegex(str);
    frostFree(str);
#else
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
    __atomic_add_fetch(&allocations, 1, __ATOMIC_RELAXED);
    utext_close(ut);
    frostFree(text);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
#endif
}

Matcher* frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(
        RegularExpression* self, String* s) {
    Matcher* result = frostObjectAlloc(sizeof(Matcher), &frost$core$Matcher$class);
    result->searchText = s;
    frost$core$Frost$ref$frost$core$Object$Q((Object*) s);
#ifdef __EMSCRIPTEN__
    char* str = frostGetCString(s);
    result->nativeHandle = (void*) createMatcher((int) self->nativeHandle, str);
    frostFree(str);
#else
    UErrorCode status = U_ZERO_ERROR;
    __atomic_add_fetch(&allocations, 1, __ATOMIC_RELAXED);
    result->nativeHandle = uregex_clone(self->nativeHandle, &status);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
    UText* ut = utext_openUTF8(NULL, (const char*) s->data, s->size, &status);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
    uregex_setUText(result->nativeHandle, ut, &status);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
    utext_close(ut);
#endif
    return result;
}

void frost$core$RegularExpression$destroy(RegularExpression* self) {
#ifdef __EMSCRIPTEN__
    destroyRegex((int) self->nativeHandle);
#else
    uregex_close(self->nativeHandle);
    __atomic_sub_fetch(&allocations, 1, __ATOMIC_RELAXED);
#endif
}

void frost$core$Matcher$matches$R$frost$core$Bit(Bit* result, Matcher* self) {
#ifdef __EMSCRIPTEN__
    result->value = matcherMatches((int) self->nativeHandle);
#else
    UErrorCode status = U_ZERO_ERROR;
    self->matched.value = uregex_matches(self->nativeHandle, 0, &status);
    *result = self->matched;
    self->replacementIndex.value.value = self->searchText->size;
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
#endif
}

void frost$core$Matcher$nativeFind$frost$core$String$Index$R$frost$core$Bit(Bit* result,
        Matcher* self, StringIndex startIndex) {
#ifdef __EMSCRIPTEN__
    result->value = matcherFind((int) self->nativeHandle, startIndex.value.value);
#else
    UErrorCode status = U_ZERO_ERROR;
    result->value = uregex_find(self->nativeHandle, startIndex.value.value, &status);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
#endif
}

void frost$core$Matcher$get_start$R$frost$core$String$Index(Int64* result, Matcher* self) {
#ifdef __EMSCRIPTEN__
    result->value = matcherStart((int) self->nativeHandle);
#else
    UErrorCode status = U_ZERO_ERROR;
    result->value = uregex_start(self->nativeHandle, 0, &status);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
#endif
}

void frost$core$Matcher$get_end$R$frost$core$String$Index(Int64* result, Matcher* self) {
#ifdef __EMSCRIPTEN__
    result->value = matcherEnd((int) self->nativeHandle);
#else
    UErrorCode status = U_ZERO_ERROR;
    result->value = uregex_end(self->nativeHandle, 0, &status);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
#endif
}

void frost$core$Matcher$get_groupCount$R$frost$core$Int(Int64* result, Matcher* self) {
#ifdef __EMSCRIPTEN__
    result->value = matcherGroupCount((int) self->nativeHandle);
#else
    UErrorCode status = U_ZERO_ERROR;
    result->value = uregex_groupCount(self->nativeHandle, &status) + 1;
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
#endif
}

String* frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q(Matcher* self,
        Int64 group) {
#ifdef __EMSCRIPTEN__
    const char* str = matcherGroup((int) self->nativeHandle, group.value);
    String* result = frostNewString(str, strlen(str));
    // the use of free instead of frostFree is deliberate, as this pointer was allocated with
    // Emscripten's _malloc
    free((void*) str);
    return result;
#else
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
#endif
}

void frost$core$Matcher$destroy(Matcher* self) {
#ifdef __EMSCRIPTEN__
    destroyRegex((int) self->nativeHandle);
#else
    uregex_close(self->nativeHandle);
    __atomic_sub_fetch(&allocations, 1, __ATOMIC_RELAXED);
#endif
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
    thread->nativeHandle = (void*) threadId;
}

void frost$threads$Thread$run$$LP$RP$EQ$AM$GT$ST$LP$RP$builtin_bit(Thread* thread, Method* run,
        Bit preventsExit) {
    frost$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(thread, run, preventsExit);
}

void frost$threads$Thread$waitFor(Thread* thread) {
    frostAssert(sizeof(pthread_t) == sizeof(thread->nativeHandle));
    pthread_join((pthread_t) thread->nativeHandle, NULL);
}

void frost$threads$Thread$sleep$frost$core$Int(int64_t millis) {
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
    char* str = frostGetCString(self->path);
    FILE* file = fopen(str, "rb");
    if (!file) {
        String* error = frostFileErrorMessage("Could not read", str);
        frostFree(str);
        return frostMaybeError(error);
    }
    frostFree(str);
    FileInputStream* result = frostObjectAlloc(sizeof(FileInputStream),
            &frost$io$FileInputStream$class);
    frost$io$InputStream$init(result);
    result->file = file;
    result->closeOnCleanup.value = true;
    return frostMaybeSuccess((Object*) result);
}

Object* frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(File* self) {
    char* str = frostGetCString(self->path);
    FILE* file = fopen(str, "wb");
    if (!file) {
        String* error = frostFileErrorMessage("Could not write", str);
        frostFree(str);
        return frostMaybeError(error);
    }
    frostFree(str);
    FileOutputStream* result = frostObjectAlloc(sizeof(FileOutputStream),
            &frost$io$FileOutputStream$class);
    frost$io$OutputStream$init(result);
    result->file = file;
    result->closeOnCleanup.value = true;
    return frostMaybeSuccess((Object*) result);
}

Object* frost$io$File$openForAppend$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(File* self) {
    char* str = frostGetCString(self->path);
    FILE* file = fopen(str, "ab");
    if (!file) {
        String* error = frostFileErrorMessage("Could not write", str);
        frostFree(str);
        return frostMaybeError(error);
    }
    frostFree(str);
    FileOutputStream* result = frostObjectAlloc(sizeof(FileOutputStream),
            &frost$io$FileOutputStream$class);
    frost$io$OutputStream$init(result);
    result->file = file;
    result->closeOnCleanup.value = true;
    return frostMaybeSuccess((Object*) result);
}

Object* frost$io$File$absolute$R$frost$core$Maybe$LTfrost$io$File$GT(File* file) {
    char path[PATH_MAX];
    char* rawPath = frostGetCString(file->path);
    if (!realpath(rawPath, path)) {
        Object* result = frostMaybeError(frostFileErrorMessage("Could not read",
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
    frostFree(srcPath);
    frostFree(dstPath);
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
    frostFree(path);
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
        if (result) {
            String* result = frostFileErrorMessage("Could not create directory", path);
            frostFree(path);
            return frostError(result);
        }
        frostFree(path);
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

void frost$io$FileInputStream$readImpl$frost$unsafe$NewPointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Int(
        int64_t* result, FileInputStream* self, void* buffer, Int max) {
    *result = fread(buffer, 1, max.value, self->file);
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

Error* frost$io$FileOutputStream$write$frost$unsafe$NewPointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q(
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

// Timer

void frost$time$Timer$setup(Timer* timer) {
#ifdef MACH_TIMER
    mach_timebase_info_data_t info;
    mach_timebase_info(&info);
    timer->scale = (double) info.numer / (double) info.denom / 1000000000.0;
#endif
}

double frost$time$Timer$now$R$builtin_float64(Timer* timer) {
#ifdef MACH_TIMER
    return mach_absolute_time() * timer->scale;
#endif
    return 0;
}

void frost$time$Timer$destroy(Timer* timer) {
}
