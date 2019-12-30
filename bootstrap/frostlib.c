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

//#define FROST_DEBUG

typedef int8_t bool;

typedef intptr_t frost_int;

typedef uintptr_t frost_uint;

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

typedef struct NullableChar {
    int8_t value;
    int8_t nonnull;
} NullableChar;

typedef struct NullableUInt8 {
    uint8_t value;
    int8_t nonnull;
} NullableUInt8;

typedef struct NullableInt {
    frost_int value;
    int8_t nonnull;
} NullableInt;

extern Class frost$core$String$class;

typedef struct String {
    Class* cl;
    int32_t refcnt;
    bool flags;
    int8_t* data;
    frost_int size;
    frost_int hash;
    struct String* owner;
} String;

typedef struct Array {
    Class* cl;
    int32_t refcnt;
    bool flags;
    frost_int count;
    frost_int capacity;
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
    frost_int byteOrder;
    FILE* file;
    bool closeOnCleanup;
} FileInputStream;

extern Class frost$io$FileInputStream$class;

typedef struct FileOutputStream {
    Class* cl;
    int32_t refcnt;
    bool flags;
    frost_int byteOrder;
    String* lineEnding;
    FILE* file;
    bool closeOnCleanup;
} FileOutputStream;

typedef struct Process {
    Class* cl;
    int32_t refcnt;
    bool flags;
    frost_int pid;
    FileOutputStream* _stdin;
    FileInputStream* _stdout;
    FileInputStream* _stderr;
} Process;

typedef struct Thread {
    Class* cl;
    int32_t refcnt;
    bool flags;
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
    bool matched;
    frost_int replacementIndex;
} Matcher;

typedef struct Timer {
    Class* cl;
    int32_t refcnt;
#ifdef MACH_TIMER
    double scale;
#else
    frost_int native;
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

Object* frost$core$Frost$success$frost$core$Object$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost_int);

Object* frost$core$Frost$error$frost$core$String$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost_int);

void frostRefThreadSafe(frost_int);

void frostUnrefThreadSafe(frost_int);

void frostUnrefThreadUnsafe(frost_int);

void frost$collections$Array$add$frost$collections$Array$T(frost_int, frost_int);

void frost$io$InputStream$init(void*);

void frost$io$OutputStream$init(void*);

Object* frost$core$Frost$createWeakReferenceMap$R$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Object$GT$GT();

void frost$core$Frost$_addWeakReference$frost$core$Weak$LTfrost$core$Object$GT$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(frost_int, frost_int);

void frost$core$Frost$weakReferentDestroyed$frost$core$Int$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(frost_int, frost_int);

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

#ifdef FROST_DEBUG
#define frostAssert(i) _frostAssert(i, __FILE__, __LINE__)
#else
#define frostAssert(i)
#endif

void frostOverflow(const char* file, int32_t line) {
    fprintf(stderr, "%s:%d: arithmetic overflow\n", file, line);
    abort();
}

void* frostAlloc(size_t size) {
    __atomic_add_fetch(&allocations, 1, __ATOMIC_RELAXED);
    void* result = calloc(size, 1);
    frostAssert(result != NULL || size == 0);
    return result;
}

void* frostObjectAlloc(size_t size, Class* cl) {
    Object* result = frostAlloc(size);
    result->cl = cl;
    result->refcnt = 1;
    return result;
}

void frostFree(void* ptr) {
    __atomic_sub_fetch(&allocations, 1, __ATOMIC_RELAXED);
    free(ptr);
}

void frostObjectFree(Object* o) {
    if (o->flags & FROST_WEAK_REFERENCE_FLAG) {
        pthread_mutex_lock(&weakReferenceMutex);
        frost_int cast = (frost_int) o;
        frost$core$Frost$weakReferentDestroyed$frost$core$Int$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(cast, (frost_int) weakReferences);
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
    frostUnrefThreadSafe((frost_int)frostString);
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
frost_int frostMaybeSuccess(Object* o) {
    Object* result = (Object*) frost$core$Frost$success$frost$core$Object$R$frost$core$Maybe$LTfrost$core$Object$GT$Q((frost_int) o);
    frostUnrefThreadSafe((frost_int) o);
    return (frost_int) result;
}    

// returns s wrapped in a Maybe.ERROR, *without* increasing its refcount
frost_int frostMaybeError(String* s) {
    Object* result = (Object*) frost$core$Frost$error$frost$core$String$R$frost$core$Maybe$LTfrost$core$Object$GT$Q((frost_int) s);
    frostUnrefThreadSafe((frost_int) s);
    return (frost_int) result;
}    

// returns s wrapped in an Error, *without* increasing its refcount
frost_int frostError(String *s) {
    Error* result = (Error*) frostObjectAlloc(sizeof(Error), &frost$core$Error$class);
    result->message = s;
    return (frost_int) result;
}

void* frostGetInterfaceMethod(frost_int o, Class* intf, int index) {
    ITable* it = ((Object*) o)->cl->itable;
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
    pthread_mutex_unlock(&preventsExitThreadsMutex);
    frostUnrefThreadUnsafe((frost_int) args);
    if (weakReferences) {
        frostAssert(weakReferences->refcnt == 1);
        frostUnrefThreadUnsafe((frost_int) weakReferences);
        weakReferences = NULL;
    }
#ifndef __EMSCRIPTEN__
    if (refErrorReporting) {
        if (allocations && allocations != 1) {
            printf("warning: %d objects were still in memory on exit\n", allocations);
        }
        else if (allocations == 1) {
            printf("warning: 1 object was still in memory on exit\n");
        }
    }
#endif
    return 0;
}

// System

void frostSystemExit(frost_int code) {
    exit(code);
}

void frostSystemCrash() {
    fflush(stdout);
    fflush(stderr);
    __builtin_trap();
}

frost_int frostSystemExec(frost_int path, frost_int args) {
    // FIXME need to output headers so I can kill these hardcoded interface method offsets
    int (*get_count)(frost_int) = frostGetInterfaceMethod(args,
                &frost$collections$CollectionView$class, 0);
    String* (*index)(frost_int, int) = frostGetInterfaceMethod(args,
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
        cargs[0] = frostGetCString((String*) path);
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
        result->_stdin->closeOnCleanup = true;

        result->_stdout = frostObjectAlloc(sizeof(FileInputStream),
                &frost$io$FileInputStream$class);
        frost$io$InputStream$init(result->_stdout);
        result->_stdout->file = fdopen(stdoutPipe[0], "rb");
        frostAssert(result->_stdout->file != NULL);
        result->_stdout->closeOnCleanup = true;

        result->_stderr = frostObjectAlloc(sizeof(FileInputStream),
                &frost$io$FileInputStream$class);
        frost$io$InputStream$init(result->_stderr);
        result->_stderr->file = fdopen(stderrPipe[0], "rb");
        frostAssert(result->_stderr->file != NULL);
        result->_stderr->closeOnCleanup = true;

        return frostMaybeSuccess((Object*) result);
    }
}

frost_int frostProcessStandardInput(frost_int p) {
    frost_int result = (frost_int) ((Process*) p)->_stdin;
    frostRefThreadSafe(result);
    return result;
}

frost_int frostProcessStandardOutput(frost_int p) {
    frost_int result = (frost_int) ((Process*) p)->_stdout;
    frostRefThreadSafe(result);
    return result;
}

frost_int frostProcessStandardError(frost_int p) {
    frost_int result = (frost_int) ((Process*) p)->_stderr;
    frostRefThreadSafe(result);
    return result;
}

void frostProcessCleanup(frost_int p) {
    frostUnrefThreadUnsafe((frost_int) ((Process*) p)->_stdin);
    frostUnrefThreadUnsafe((frost_int) ((Process*) p)->_stdout);
    frostUnrefThreadUnsafe((frost_int) ((Process*) p)->_stderr);
}

void frostProcessExitCode(frost_int result, frost_int p) {
    int status;
    waitpid(((Process*) p)->pid, &status, WNOHANG);
    if (WIFEXITED(status)) {
        ((NullableInt*) result)->nonnull = true;
        ((NullableInt*) result)->value = WEXITSTATUS(status);
    }
    else {
        ((NullableInt*) result)->nonnull = false;
    }
}

frost_int frostProcessWaitFor(frost_int p) {
    int status;
    waitpid(((Process*) p)->pid, &status, 0);
    return WEXITSTATUS(status);
}

frost_int frostSystemWorkingDirectory() {
    char dir[PATH_MAX];
    getcwd(dir, PATH_MAX);
    String* path = frostNewString(dir, strlen(dir));
    File* file = frostObjectAlloc(sizeof(File), &frost$io$File$class);
    file->path = path;
    return (frost_int) file;
}

frost_int frostSystemTemporaryDirectory() {
    const char* tmpdir = getenv("TMPDIR");
    if (!tmpdir) {
        tmpdir = "/tmp";
    }
    String* path = frostNewString(tmpdir, strlen(tmpdir));
    File* file = frostObjectAlloc(sizeof(File), &frost$io$File$class);
    file->path = path;
    return (frost_int) file;
}

// Int8

int8_t frostInt8_get_bitCount(int8_t x) {
    return __builtin_popcount(x);
}

// Int16

int16_t frostInt16_get_bitCount(int16_t x) {
    return __builtin_popcount(x);
}

// Int32

int32_t frostInt32_get_bitCount(int32_t x) {
    return __builtin_popcount(x);
}

// Int64

int64_t frostInt64_get_bitCount(int64_t x) {
    return __builtin_popcount(x);
}

// Int

int frostInt_get_bitCount(int x) {
    return __builtin_popcount(x);
}

// UInt8

uint8_t frostUInt8_get_bitCount(uint8_t x) {
    return __builtin_popcount(x);
}

// UInt16

uint16_t frostUInt16_get_bitCount(uint16_t x) {
    return __builtin_popcount(x);
}

// UInt32

uint32_t frostUInt32_get_bitCount(uint32_t x) {
    return __builtin_popcount(x);
}

// UInt64

uint64_t frostUInt64_get_bitCount(uint64_t x) {
    return __builtin_popcount(x);
}

// UInt

uint64_t frostUInt_get_bitCount(uint64_t x) {
    return __builtin_popcount(x);
}

// Real32

float frostReal32_get_floor(float x) {
    return floorf(x);
}

float frostReal32_get_ceiling(float x) {
    return ceilf(x);
}

float frostReal32_get_sqrt(float x) {
    return sqrtf(x);
}

float frostReal32_get_sin(float x) {
    return sinf(x);
}

float frostReal32_get_cos(float x) {
    return cosf(x);
}

float frostReal32_get_tan(float x) {
    return tanf(x);
}

float frostReal32_get_asin(float x) {
    return asinf(x);
}

float frostReal32_get_acos(float x) {
    return acosf(x);
}

float frostReal32_get_atan(float x) {
    return atanf(x);
}

float frostReal32_atan2(float y, float x) {
    return atan2f(y, x);
}

// Real64

double frostReal64_get_floor(double x) {
    return floor(x);
}

double frostReal64_get_ceiling(double x) {
    return ceil(x);
}

double frostReal64_get_sqrt(double x) {
    return sqrt(x);
}

double frostReal64_get_sin(double x) {
    return sin(x);
}

double frostReal64_get_cos(double x) {
    return cos(x);
}

double frostReal64_get_tan(double x) {
    return tan(x);
}

double frostReal64_get_asin(double x) {
    return sin(x);
}

double frostReal64_get_acos(double x) {
    return cos(x);
}

double frostReal64_get_atan(double x) {
    return tan(x);
}

double frostReal64_atan2(double y, double x) {
    return atan2(y, x);
}

// Frost

#define NO_REFCNT -999

frost_uint frostPtrAlloc(frost_int size) {
    return (frost_int) frostAlloc(size);
}

void frostPtrDestroy(frost_uint ptr) {
    frostFree((void*) ptr);
}

frost_uint frostPtrRealloc(frost_uint ptr, frost_int oldSize, frost_int newSize) {
    void* result = realloc((void*) ptr, newSize);
    frostAssert(result != NULL || newSize == 0);
    if (newSize > oldSize) {
        memset(result + oldSize, 0, newSize - oldSize);
    }
    return (frost_int) result;
}

void frostDebugPrint(int64_t x) {
    printf("Debug: %" PRId64 "\n", x);
}

// known to not be a constant, so we don't have to check for NO_REFCNT
void frostRefThreadSafeNonConstant(frost_int ptr) {
    Object* o = (Object*) ptr;
    if (o) {
        int newCount = __atomic_add_fetch(&o->refcnt, 1, __ATOMIC_RELAXED);
        #ifdef FROST_DEBUG
            if (newCount <= 1 && refErrorReporting) {
                printf("internal error: ref %p with refcnt = %d\n", o, newCount - 1);
                printf("    class: %s\n", frostGetCString(o->cl->name));
                abort();
            }
        #endif
    }
}

void frostRefThreadSafe(frost_int ptr) {
    Object* o = (Object*) ptr;
    // should be ok to check whether it's NO_REFCNT without a lock - if it is, nobody should be
    // changing it anyway
    if (o && o->refcnt != NO_REFCNT) {
        int newCount = __atomic_add_fetch(&o->refcnt, 1, __ATOMIC_RELAXED);
        #ifdef FROST_DEBUG
            if (newCount <= 1 && refErrorReporting) {
                printf("internal error: ref %p with refcnt = %d\n", o, newCount - 1);
                printf("    class: %s\n", frostGetCString(o->cl->name));
                abort();
            }
        #endif
    }
}

void frostRefThreadUnsafe(frost_int ptr) {
    Object* o = (Object*) ptr;
    // objects which are known to only be used in a single thread can't be NO_REFCNT
    if (o) {
        ++o->refcnt;
        #ifdef FROST_DEBUG
            if (o->refcnt <= 1 && refErrorReporting) {
                printf("internal error: ref %p with refcnt = %d\n", o, o->refcnt);
                printf("    class: %s\n", frostGetCString(o->cl->name));
                abort();
            }
        #endif
    }
}

void frostDestroy(Object* o) {
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

void frostUnrefThreadSafeNonConstant(frost_int ptr) {
    Object* o = (Object*) ptr;
    // should be ok to check whether it's NO_REFCNT without a lock - if it is, nobody should be
    // changing it anyway
    if (o && o->refcnt != NO_REFCNT) {
        int newCount = __atomic_sub_fetch(&o->refcnt, 1, __ATOMIC_RELAXED);
        #ifdef FROST_DEBUG
            if (newCount < 0 && refErrorReporting) {
                printf("internal error: unref %p with refcnt = %d\n", o, newCount + 1);
                printf("    class: %s\n", frostGetCString(o->cl->name));
                abort();
            }
        #endif
        if (newCount == 0) {
            frostDestroy(o);
        }
    }
}

void frostUnrefThreadSafe(frost_int ptr) {
    Object* o = (Object*) ptr;
    if (o && o->refcnt != NO_REFCNT) {
        int newCount = __atomic_sub_fetch(&o->refcnt, 1, __ATOMIC_RELAXED);
        #ifdef FROST_DEBUG
            if (newCount < 0 && refErrorReporting) {
                printf("internal error: unref %p with refcnt = %d\n", o, newCount + 1);
                printf("    class: %s\n", frostGetCString(o->cl->name));
                abort();
            }
        #endif
        if (newCount == 0) {
            frostDestroy(o);
        }
    }
}

void frostUnrefThreadUnsafe(frost_int ptr) {
    Object* o = (Object*) ptr;
    if (o) {
        --o->refcnt;
        #ifdef FROST_DEBUG
            if (o->refcnt < 0 && refErrorReporting) {
                printf("internal error: unref %p with refcnt = %d\n", o, o->refcnt + 1);
                printf("    class: %s\n", frostGetCString(o->cl->name));
                abort();
            }
        #endif
        if (o->refcnt == 0) {
            frostDestroy(o);
        }
    }
}

void frostUnrefThreadSafeNonConstantNoCleanup(frost_int ptr) {
    Object* o = (Object*) ptr;
    // should be ok to check whether it's NO_REFCNT without a lock - if it is, nobody should be
    // changing it anyway
    if (o && o->refcnt != NO_REFCNT) {
        int newCount = __atomic_sub_fetch(&o->refcnt, 1, __ATOMIC_RELAXED);
        #ifdef FROST_DEBUG
            if (newCount < 0 && refErrorReporting) {
                printf("internal error: unref %p with refcnt = %d\n", o, newCount + 1);
                printf("    class: %s\n", frostGetCString(o->cl->name));
                abort();
            }
        #endif
        if (newCount == 0) {
            frostObjectFree(o);
        }
    }
}

void frostUnrefThreadSafeNoCleanup(frost_int ptr) {
    Object* o = (Object*) ptr;
    if (o && o->refcnt != NO_REFCNT) {
        int newCount = __atomic_sub_fetch(&o->refcnt, 1, __ATOMIC_RELAXED);
        #ifdef FROST_DEBUG
            if (newCount < 0 && refErrorReporting) {
                printf("internal error: unref %p with refcnt = %d\n", o, newCount + 1);
                printf("    class: %s\n", frostGetCString(o->cl->name));
                abort();
            }
        #endif
        if (newCount == 0) {
            frostObjectFree(o);
        }
    }
}

void frostUnrefThreadUnsafeNoCleanup(frost_int ptr) {
    Object* o = (Object*) ptr;
    if (o) {
        --o->refcnt;
        #ifdef FROST_DEBUG
            if (o->refcnt < 0 && refErrorReporting) {
                printf("internal error: unref %p with refcnt = %d\n", o, o->refcnt + 1);
                printf("    class: %s\n", frostGetCString(o->cl->name));
                abort();
            }
        #endif
        if (o->refcnt == 0) {
            frostObjectFree(o);
        }
    }
}

frost_int frostFrostAddressOf(frost_int o) {
    return o;
}

double frostFrostToReal64(frost_int s) {
    char* cstr = frostGetCString((String*) s);
    double result = atof(cstr);
    frostFree(cstr);
    return result;
}

frost_int frostReal32ToString(float d) {
    size_t len = snprintf(NULL, 0, "%g", d);
    char* chars = (char*) frostAlloc(len + 1);
    snprintf(chars, len + 1, "%g", d);
    String* result = frostNewString(chars, len);
    frostFree(chars);
    return (frost_int) result;
}

frost_int frostReal64ToString(double d) {
    size_t len = snprintf(NULL, 0, "%g", d);
    char* chars = (char*) frostAlloc(len + 1);
    snprintf(chars, len + 1, "%g", d);
    String* result = frostNewString(chars, len);
    frostFree(chars);
    return (frost_int) result;
}

int64_t frostFrostFloatToIntBits(double d) {
    return *(int64_t*) &d;
}

double frostFrostIntBitsToFloat(int64_t i) {
    return *(double*) &i;
}

void frostFrostAddWeakReference(frost_int w) {
    pthread_mutex_lock(&weakReferenceMutex);
    if (!weakReferences) {
        weakReferences = frost$core$Frost$createWeakReferenceMap$R$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Object$GT$GT();
    }
    frost$core$Frost$_addWeakReference$frost$core$Weak$LTfrost$core$Object$GT$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(w, (frost_int) weakReferences);
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
                break;
            }
        }
        re[index] = new RegExp(UTF8ToString(str), "g");
        return index;
    });

    EM_JS(int, createMatcher, (int regex, const char* str), {
        var re = Module['regularExpressions'];
        var index = re.length;
        // FIXME implement a free list rather than a linear search
        for (var i = 0; i < index; ++i) {
            if (!re[i]) {
                index = i;
                break;
            }
        }
        re[index] = { regexp:re[regex], str:UTF8ToString(str) };
        return index;
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

void frostRegularExpressionCompile(frost_int rPtr,
        frost_int regexPtr, frost_int flags) {
    RegularExpression* r = (RegularExpression*) rPtr;
    String* regex = (String*) regexPtr;
#ifdef __EMSCRIPTEN__
    frostAssert(flags == 0); // flags NYI
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
    if (flags & 1) {
        icuFlags |= UREGEX_MULTILINE;
    }
    if (flags & 2) {
        icuFlags |= UREGEX_CASE_INSENSITIVE;
    }
    if (flags & 4) {
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

Matcher* frostRegularExpressionMatcher(frost_int selfPtr, frost_int sPtr) {
    RegularExpression* self = (RegularExpression*) selfPtr;
    String* s = (String*) sPtr;
    Matcher* result = frostObjectAlloc(sizeof(Matcher), &frost$core$Matcher$class);
    result->searchText = s;
    frostRefThreadSafe((frost_int) s);
#ifdef __EMSCRIPTEN__
    char* str = frostGetCString(s);
    result->nativeHandle = (void*) createMatcher((frost_int) self->nativeHandle, str);
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

void frostRegularExpressionDestroy(frost_int selfPtr) {
    RegularExpression* self = (RegularExpression*) selfPtr;
#ifdef __EMSCRIPTEN__
    destroyRegex((int) self->nativeHandle);
#else
    uregex_close(self->nativeHandle);
    __atomic_sub_fetch(&allocations, 1, __ATOMIC_RELAXED);
#endif
}

bool frostMatcherMatches(frost_int selfPtr) {
    Matcher* self = (Matcher*) selfPtr;
#ifdef __EMSCRIPTEN__
    return matcherMatches((int) self->nativeHandle);
#else
    UErrorCode status = U_ZERO_ERROR;
    self->matched = uregex_matches(self->nativeHandle, 0, &status);
    bool result = self->matched;
    self->replacementIndex = self->searchText->size;
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
    return result;
#endif
}

bool frostMatcherNativeFind(frost_int selfPtr, frost_int startIndex) {
    Matcher* self = (Matcher*) selfPtr;
#ifdef __EMSCRIPTEN__
    return matcherFind((int) self->nativeHandle, startIndex);
#else
    UErrorCode status = U_ZERO_ERROR;
    bool result = uregex_find(self->nativeHandle, startIndex, &status);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
    return result;
#endif
}

frost_int frostMatcherStart(frost_int selfPtr) {
    Matcher* self = (Matcher*) selfPtr;
#ifdef __EMSCRIPTEN__
    return matcherStart((int) self->nativeHandle);
#else
    UErrorCode status = U_ZERO_ERROR;
    frost_int result = uregex_start(self->nativeHandle, 0, &status);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
    return result;
#endif
}

frost_int frostMatcherEnd(frost_int selfPtr) {
    Matcher* self = (Matcher*) selfPtr;
#ifdef __EMSCRIPTEN__
    return matcherEnd((int) self->nativeHandle);
#else
    UErrorCode status = U_ZERO_ERROR;
    frost_int result = uregex_end(self->nativeHandle, 0, &status);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
    return result;
#endif
}

frost_int frostMatcherGroupCount(frost_int selfPtr) {
    Matcher* self = (Matcher*) selfPtr;
#ifdef __EMSCRIPTEN__
    return matcherGroupCount((int) self->nativeHandle);
#else
    UErrorCode status = U_ZERO_ERROR;
    frost_int result = uregex_groupCount(self->nativeHandle, &status) + 1;
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
    return result;
#endif
}

String* frostMatcherGroup(frost_int selfPtr,
        frost_int group) {
    Matcher* self = (Matcher*) selfPtr;
#ifdef __EMSCRIPTEN__
    const char* str = matcherGroup((int) self->nativeHandle, group);
    String* result = frostNewString(str, strlen(str));
    // the use of free instead of frostFree is deliberate, as this pointer was allocated with
    // Emscripten's _malloc
    free((void*) str);
    return result;
#else
    UErrorCode status = U_ZERO_ERROR;
    int64_t length;
    UText* ut = uregex_groupUText(self->nativeHandle, group, NULL, &length, &status);
    if (U_FAILURE(status)) {
        frostFatalError(u_errorName(status));
    }
    const char* utf8 = (ut->context + (int) UTEXT_GETNATIVEINDEX(ut));
    String* result = frostNewString(utf8, length);
    utext_close(ut);
    return result;
#endif
}

void frostMatcherDestroy(frost_int selfPtr) {
    Matcher* self = (Matcher*) selfPtr;
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
    bool preventsExit;
} ThreadInfo;

void frostThreadEntry(frost_int threadInfoPtr) {
    ThreadInfo* threadInfo = (ThreadInfo*) threadInfoPtr;
    if (threadInfo->run->target) {
        ((void(*)(Object*)) threadInfo->run->pointer)(threadInfo->run->target);
    }
    else {
        ((void(*)()) threadInfo->run->pointer)();
    }
    frostUnrefThreadSafe((frost_int) threadInfo->run);
    frostFree(threadInfo);
    if (threadInfo->preventsExit) {
        pthread_mutex_lock(&preventsExitThreadsMutex);
        preventsExitThreads--;
        if (preventsExitThreads == 0) {
            pthread_cond_signal(&preventsExitThreadsVar);
        }
        pthread_mutex_unlock(&preventsExitThreadsMutex);
    }
}

void frostThreadRun(frost_int threadPtr, frost_int runPtr, bool preventsExit) {
    Thread* thread = (Thread*) threadPtr;
    Method* run = (Method*) runPtr;
    if (!preventsExit) {
        // if threads are still running on exit, then naturally objects will still be in memory on
        // exit, so don't complain
        refErrorReporting = false;
    }
    pthread_t threadId;
    ThreadInfo* threadInfo = frostAlloc(sizeof(ThreadInfo));
    frostRefThreadSafe(runPtr);
    threadInfo->run = run;
    threadInfo->preventsExit = preventsExit;
    if (threadInfo->preventsExit) {
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

void frostThreadWaitFor(Thread* thread) {
    frostAssert(sizeof(pthread_t) == sizeof(thread->nativeHandle));
    pthread_join((pthread_t) thread->nativeHandle, NULL);
}

void frostThreadSleep(double seconds) {
    usleep((useconds_t) (seconds * 1000000));
}

// Lock

void frostLockCreate(Lock* lock) {
    lock->mutex = frostAlloc(sizeof(pthread_mutex_t));
    pthread_mutex_init(lock->mutex, NULL);
}

void frostLockLock(Lock* lock) {
    pthread_mutex_lock(lock->mutex);
}

void frostLockUnlock(Lock* lock) {
    pthread_mutex_unlock(lock->mutex);
}

void frostLockDestroy(Lock* lock) {
    pthread_mutex_destroy(lock->mutex);
    frostFree(lock->mutex);
}

// Notifier

void frostNotifierCreate(Notifier* notifier) {
    notifier->cond = frostAlloc(sizeof(pthread_cond_t));
    pthread_cond_init(notifier->cond, NULL);
}

void frostNotifierWait(Notifier* notifier) {
    pthread_cond_wait(notifier->cond, notifier->lock->mutex);
}

void frostNotifierNotify(Notifier* notifier) {
    pthread_cond_signal(notifier->cond);
}

void frostNotifierNotifyAll(Notifier* notifier) {
    pthread_cond_broadcast(notifier->cond);
}

void frostNotifierDestroy(Notifier* notifier) {
    pthread_cond_destroy(notifier->cond);
    frostFree(notifier->cond);
}

// Console

void frostConsolePrint(String* s) {
    fwrite(s->data, 1, s->size, stdout);
    fflush(stdout);
}

void frostConsolePrintError(String* s) {
    fwrite(s->data, 1, s->size, stderr);
}

void frostConsoleRead(NullableChar* result) {
    int read = getchar();
    if (read != EOF) {
        result->value = read;
        result->nonnull = 1;
    }
    else {
        result->nonnull = 0;
    }
}

FileInputStream* frostConsoleInputStream() {
    FileInputStream* result = frostObjectAlloc(sizeof(FileInputStream),
            &frost$io$FileInputStream$class);
    frost$io$InputStream$init(result);
    result->file = stdin;
    return result;
}

FileOutputStream* frostConsoleOutputStream() {
    FileOutputStream* result = frostObjectAlloc(sizeof(FileOutputStream),
            &frost$io$FileOutputStream$class);
    frost$io$OutputStream$init(result);
    result->file = stdout;
    return result;
}

FileOutputStream* frostConsoleErrorStream() {
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

frost_int frostFileOpenInputStream(frost_int selfPtr) {
    File* self = (File*) selfPtr;
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
    result->closeOnCleanup = true;
    return frostMaybeSuccess((Object*) result);
}

frost_int frostFileOpenOutputStream(frost_int selfPtr) {
    File* self = (File*) selfPtr;
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
    result->closeOnCleanup = true;
    return frostMaybeSuccess((Object*) result);
}

frost_int frostFileOpenForAppend(frost_int selfPtr) {
    File* self = (File*) selfPtr;
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
    result->closeOnCleanup = true;
    return frostMaybeSuccess((Object*) result);
}

frost_int frostFileAbsolute(frost_int filePtr) {
    File* file = (File*) filePtr;
    char path[PATH_MAX];
    char* rawPath = frostGetCString(file->path);
    if (!realpath(rawPath, path)) {
        frost_int result = frostMaybeError(frostFileErrorMessage("Could not read", rawPath));
        frostFree(rawPath);
        return result;
    }
    frostFree(rawPath);
    File* f = frostObjectAlloc(sizeof(File), &frost$io$File$class);
    f->path = frostNewString(path, strlen(path));
    return frostMaybeSuccess((Object*) f);
}

frost_int frostFileRename(frost_int srcPtr, frost_int dstPtr) {
    File* src = (File*) srcPtr;
    File* dst = (File*) dstPtr;
    char* srcPath = frostGetCString(src->path);
    char* dstPath = frostGetCString(dst->path);
    if (rename(srcPath, dstPath)) {
        frost_int result = (frost_int) frostObjectAlloc(sizeof(Error), &frost$core$Error$class);
        ((Error*) result)->message = frostFileErrorMessage("Could not rename", srcPath);
        frostFree(srcPath);
        frostFree(dstPath);
        return result;
    }
    frostFree(srcPath);
    frostFree(dstPath);
    return 0;
}

frost_int frostFileDelete(frost_int selfPtr) {
    File* self = (File*) selfPtr;
    char* path = frostGetCString(self->path);
    if (remove(path)) {
        frost_int result = (frost_int) frostObjectAlloc(sizeof(Error), &frost$core$Error$class);
        ((Error*) result)->message = frostFileErrorMessage("Could not delete", path);
        frostFree(path);
        return result;
    }
    frostFree(path);
    return 0;
}

bool frostFileExists(frost_int filePtr) {
    File* file = (File*) filePtr;
    char* path = frostGetCString(file->path);
    struct stat fileInfo;
    bool result = stat(path, &fileInfo) >= 0;
    frostFree(path);
    return result;
}

bool frostFileIsDirectory(frost_int filePtr) {
    File* file = (File*) filePtr;
    char* path = frostGetCString(file->path);
    struct stat fileInfo;
    stat(path, &fileInfo);
    frostFree(path);
    return S_ISDIR(fileInfo.st_mode);
}

frost_int frostFileCreateDirectory(frost_int filePtr) {
    File* file = (File*) filePtr;
    char* path = frostGetCString(file->path);
    int result = mkdir(path, 0700);
    if (result && errno != EISDIR && errno != EEXIST) {
        String* result = frostFileErrorMessage("Could not create directory", path);
        frostFree(path);
        return frostError(result);
    }
    frostFree(path);
    return 0;
}


frost_int frostFileList(frost_int dir) {
    Array* result = frostObjectAlloc(sizeof(Array), &frost$collections$Array$class);
    result->count = 0;
    result->capacity = 16;
    result->data = frostAlloc(result->capacity * sizeof(Object*));
    DIR *d;
    struct dirent *entry;
    String* dirPath = ((File*) dir)->path;
    char* path = frostGetCString(dirPath);
    #define MAX_PATH 1024
    char buffer[MAX_PATH];
    memcpy(buffer, path, dirPath->size);
    buffer[dirPath->size] = '/';
    d = opendir(path);
    if (!d) {
        frost_int result = frostMaybeError(frostFileErrorMessage("Could not list directory", path));
        frostFree(path);
        return result;
    }
    frostFree(path);
    while ((entry = readdir(d))) {
        if (!strcmp(entry->d_name, ".") || !strcmp(entry->d_name, "..")) {
            continue;
        }
        size_t length = strlen(entry->d_name);
        memcpy(buffer + dirPath->size + 1, entry->d_name, length);
        buffer[dirPath->size + 1 + length] = 0;
        String* path = frostNewString(buffer, dirPath->size + 1 + length);
        File* file = frostObjectAlloc(sizeof(File), &frost$io$File$class);
        file->path = path;
        frost$collections$Array$add$frost$collections$Array$T((frost_int) result, (frost_int) file);
        --file->refcnt;
    }
    closedir(d);
    return frostMaybeSuccess((Object*) result);
}

// FileInputStream

void frostFileInputStreamReadByte(frost_int result, frost_int self) {
    int read = fgetc(((FileInputStream*) self)->file);
    if (read != EOF) {
        ((NullableUInt8*) result)->value = read;
        ((NullableUInt8*) result)->nonnull = -1;
    }
    else {
        ((NullableUInt8*) result)->nonnull = 0;
    }
}

frost_int frostFileInputStreamReadArray(frost_int self, frost_int buffer, frost_int max) {
    return fread((void*) buffer, 1, max, ((FileInputStream*) self)->file);
}

frost_int frostFileInputStreamClose(frost_int selfPtr) {
    FileInputStream* self = (FileInputStream*) selfPtr;
    self->closeOnCleanup = false;
    if (fclose(self->file)) {
        return frostError(frostFileErrorMessage("Error closing stream", NULL));
    }
    return 0;
}

// FileOutputStream
frost_int frostFileOutputStreamWriteByte(frost_int self,
        uint8_t ch) {
    if (fputc(ch, ((FileOutputStream*) self)->file) == EOF) {
        const char* msg = "Error writing to stream";
        return frostError(frostNewString(msg, strlen(msg)));
    }
    return 0;
}

frost_int frostFileOutputStreamWriteArray(frost_int self, frost_int src, frost_int count) {
    if (fwrite((void*) src, 1, count, ((FileOutputStream*) self)->file) != count) {
        const char* msg = "Error writing to stream";
        return frostError(frostNewString(msg, strlen(msg)));
    }
    return 0;
}

frost_int frostFileOutputStreamClose(frost_int self) {
    ((FileOutputStream*) self)->closeOnCleanup = false;
    if (fclose(((FileOutputStream*) self)->file)) {
        return frostError(frostFileErrorMessage("Error closing stream", NULL));
    }
    return 0;
}

frost_int frostFileOutputStreamFlush(frost_int self) {
    if (fflush(((FileOutputStream*) self)->file)) {
        return frostError(frostFileErrorMessage("Error flushing stream", NULL));
    }
    return 0;
}

// Timer

void frostTimerSetup(frost_int timer) {
#ifdef MACH_TIMER
    mach_timebase_info_data_t info;
    mach_timebase_info(&info);
    ((Timer*) timer)->scale = (double) info.numer / (double) info.denom / 1000000000.0;
#endif
}

double frostTimerNow(frost_int timer) {
#ifdef MACH_TIMER
    return mach_absolute_time() * ((Timer*) timer)->scale;
#endif
    return 0;
}

void frostTimerDestroy(frost_int timer) {
}
