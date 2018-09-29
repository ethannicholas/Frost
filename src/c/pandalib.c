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

extern Class panda$core$String$class;

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

extern Class panda$io$FileInputStream$class;

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

extern Class panda$core$Panda$class;

extern Class panda$io$File$class;

extern Class panda$io$FileOutputStream$class;

extern Class panda$collections$Array$class;

extern Class panda$collections$CollectionView$class;

extern Class panda$collections$ListView$class;

extern Class panda$core$System$Process$class;

extern Class panda$core$Matcher$class;

void panda$core$Panda$init(Object*);

Object* panda$core$Panda$success$panda$core$Object$R$panda$core$Maybe$LTpanda$core$Object$GT$Q(Object*);

Object* panda$core$Panda$error$panda$core$String$R$panda$core$Maybe$LTpanda$core$Object$GT$Q(String*);

#define pandaMaybeSuccess panda$core$Panda$success$panda$core$Object$R$panda$core$Maybe$LTpanda$core$Object$GT$Q

#define pandaMaybeError panda$core$Panda$error$panda$core$String$R$panda$core$Maybe$LTpanda$core$Object$GT$Q

void panda$core$Panda$unref$panda$core$Object$Q(Object*);

void panda$core$Panda$dumpReport(Object*);

#if DEBUG_ALLOCS
void panda$core$Panda$countAllocation$panda$core$Class(Object*, Class*);

void panda$core$Panda$countDeallocation$panda$core$Class(Object*, Class*);
#endif

void panda$core$Panda$countTrace$panda$core$String(Object*, String*);

void panda$collections$Array$add$panda$collections$Array$T(Array*, Object*);

void panda$io$InputStream$init(void*);

void panda$io$OutputStream$init(void*);

char* pandaGetCString(String* s);

void pandaFree(void* ptr);

int allocations = 0;

static int preventsExitThreads = 0;
static pthread_cond_t preventsExitThreadsVar = PTHREAD_COND_INITIALIZER;
static pthread_mutex_t preventsExitThreadsMutex = PTHREAD_MUTEX_INITIALIZER;

Object* panda = NULL;

static bool refErrorReporting = true;

#if DEBUG_ALLOCS
bool debugAllocs = true;
#endif

void* pandaAlloc(size_t size) {
    allocations++;
    return calloc(size, 1);
}

void* pandaZAlloc(size_t size) {
    allocations++;
    return calloc(size, 1);
}

void* pandaObjectAlloc(size_t size, Class* cl) {
#if DEBUG_ALLOCS
    if (debugAllocs) {
        debugAllocs = false;
        if (!panda) {
            panda = pandaZAlloc(sizeof(Object) + sizeof(void*));
            panda->cl = &panda$core$Panda$class;
            panda->refcnt = 1;
            panda$core$Panda$init(panda);
        }
        panda$core$Panda$countAllocation$panda$core$Class(panda, cl);
        debugAllocs = true;
    }
#endif
    Object* result = pandaZAlloc(size);
    result->cl = cl;
    result->refcnt = 1;
    return result;
}

void* pandaRealloc(void* ptr, size_t oldSize, size_t newSize) {
    void* result = realloc(ptr, newSize);
    if (newSize > oldSize) {
        memset(result + oldSize, 0, newSize - oldSize);
    }
    return result;
}

void pandaFree(void* ptr) {
    allocations--;
#if !DEBUG_ALLOCS
//    free(ptr);
#endif
}

void pandaObjectFree(Object* o) {
#if DEBUG_ALLOCS
    if (debugAllocs) {
        debugAllocs = false;
        panda$core$Panda$countDeallocation$panda$core$Class(panda, o->cl);
        debugAllocs = true;
    }
#endif
    o->refcnt = -100000;
    pandaFree(o);
}

/**
 * Returns a null-terminated copy of a Panda string. The caller is responsible for freeing this
 * memory.
 */
char* pandaGetCString(String* s) {
    char* result = pandaAlloc(s->size + 1);
    memcpy(result, s->data, s->size);
    result[s->size] = 0;
    return result;
}

char* pandaConvertToString(void* o) {
    String* (*convert)(void*) = (String*(*)(void*)) ((Object*) o)->cl->vtable[0]; // FIXME hardcoded index to convert
    String* pandaString = convert(o);
    char* result = pandaGetCString(pandaString);
    panda$core$Panda$unref$panda$core$Object$Q((Object*) pandaString);
    return result;
}

String* pandaNewString(const char* s, int length) {
    String* result = pandaObjectAlloc(sizeof(String), &panda$core$String$class);
    result->size = length;
    result->data = pandaAlloc(length);
    result->hash = 0;
    result->owner = 0;
    memcpy(result->data, s, length);
    return result;
}

void* pandaGetInterfaceMethod(Object* o, Class* intf, int index) {
    ITable* it = o->cl->itable;
    while (it->cl != intf) {
        it = it->next;
    }
    return it->methods[index];
}

void pandaMain(Array* args);

int main(int argc, char** argv) {
    Array* args = pandaObjectAlloc(sizeof(Array), &panda$collections$Array$class);
    args->count = argc;
    args->capacity = argc;
    args->data = pandaZAlloc(argc * sizeof(Object*));
    int i;
    for (i = 0; i < argc; ++i) {
        args->data[i] = (Object*) pandaNewString(argv[i], strlen(argv[i]));
    }
    pandaMain(args);
    // ensure all threads have exited
    pthread_mutex_lock(&preventsExitThreadsMutex);
    for (;;) {
        if (preventsExitThreads == 0) {
            break;
        }
        pthread_cond_wait(&preventsExitThreadsVar, &preventsExitThreadsMutex);
    }
    panda$core$Panda$unref$panda$core$Object$Q((Object*) args);
#if DEBUG_ALLOCS
    debugAllocs = false;
#endif
    if (refErrorReporting) {
        if (panda) {
            panda$core$Panda$dumpReport(panda);
            panda$core$Panda$unref$panda$core$Object$Q(panda);
        }
        if (allocations && allocations != 1) {
            printf("warning: %d objects were still in memory on exit\n", allocations);
        }
        else if (allocations == 1) {
            printf("warning: 1 object was still in memory on exit\n");
        }
    }
    else if (panda) {
        panda$core$Panda$unref$panda$core$Object$Q(panda);
    }
    return 0;
}

// System

void panda$core$System$exit$panda$core$UInt8(UInt8 code) {
    exit(code.value);
}

void panda$core$System$crash() {
    fflush(stdout);
    fflush(stderr);
    __builtin_trap();
}

Process* panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(
        File* path, Object* args) {
    // FIXME need to output headers so I can kill these hardcoded interface method offsets
    int (*get_count)(Object*) = pandaGetInterfaceMethod(args,
                &panda$collections$CollectionView$class, 0);
    String* (*index)(Object*, int) = pandaGetInterfaceMethod(args,
                &panda$collections$ListView$class, 0);
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
        char** cargs = (char**) pandaAlloc((argCount + 2) * sizeof(char*));
        cargs[0] = pandaGetCString(path->path);
        int i;
        for (i = 0; i < argCount; ++i) {
            cargs[i + 1] = pandaGetCString(index(args, i));
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
        Process* result = pandaObjectAlloc(sizeof(Process), &panda$core$System$Process$class);
        result->pid = pid;
        result->input = pandaObjectAlloc(sizeof(FileOutputStream),
                &panda$io$FileOutputStream$class);
        panda$io$OutputStream$init(result->input);
        result->input->file = fdopen(stdinPipe[1], "wb");
        result->input->closeOnCleanup.value = true;
//        setvbuf(result->input->file, NULL, _IONBF, 0);
        result->output = pandaObjectAlloc(sizeof(FileInputStream), &panda$io$FileInputStream$class);
        panda$io$InputStream$init(result->output);
        result->output->file = fdopen(stdoutPipe[0], "rb");
        result->output->closeOnCleanup.value = true;
//        setvbuf(result->output->file, NULL, _IONBF, 0);
        result->error = pandaObjectAlloc(sizeof(FileInputStream), &panda$io$FileInputStream$class);
        panda$io$InputStream$init(result->error);
        result->error->file = fdopen(stderrPipe[0], "rb");
        result->error->closeOnCleanup.value = true;
//        setvbuf(result->error->file, NULL, _IONBF, 0);
        return result;
    }
    return NULL;
}

void panda$core$System$Process$waitFor$R$panda$core$Int64(Int64* result, Process* p) {
    int status;
    waitpid(p->pid, &status, 0);
    result->value = WEXITSTATUS(status);
}

File* panda$core$System$tempDir$R$panda$io$File() {
    const char* tmpdir = getenv("TMPDIR");
    if (!tmpdir) {
        tmpdir = "/tmp";
    }
    String* path = pandaNewString(tmpdir, strlen(tmpdir));
    File* file = pandaObjectAlloc(sizeof(File), &panda$io$File$class);
    file->path = path;
    return file;
}

// Panda

#define NO_REFCNT -999

void panda$core$Panda$debugPrint$builtin_int64(int64_t x) {
    printf("Debug: %" PRId64 "\n", x);
}

void pandaDebugPrintObject(void* object) {
    char* className = pandaGetCString(((Object*) object)->cl->name);
    printf("%s(%p):\n", className, object);
    char* converted = pandaConvertToString(object);
    printf("    %s\n", converted);
    pandaFree(converted);
    pandaFree(className);
}

void panda$core$Panda$debugPrint$panda$core$Object(void* object) {
    pandaDebugPrintObject(object);
}

String* panda$core$Panda$pointerConvert$panda$unsafe$Pointer$LTpanda$core$Object$Q$GT$R$panda$core$String(void* ptr) {
    char buffer[32];
    int length = sprintf(buffer, "%p", ptr);
    return pandaNewString(buffer, length);
}

void panda$core$Panda$trace$panda$core$String(String* s) {
    if (!panda) {
        panda = pandaZAlloc(sizeof(Object) + sizeof(void*));
        panda->cl = &panda$core$Panda$class;
        panda->refcnt = 1;
        panda$core$Panda$init(panda);
    }
    panda$core$Panda$countTrace$panda$core$String(panda, s);
}

void panda$core$Panda$ref$panda$core$Object$Q(Object* o) {
    if (o && o->refcnt != NO_REFCNT) {
        int newCount = __atomic_add_fetch(&o->refcnt, 1, __ATOMIC_RELAXED <= 1);
        if (newCount <= 1 && refErrorReporting) {
            printf("internal error: ref %p with refcnt = %d\n", o, newCount - 1);
            printf("    class: %s\n", pandaGetCString(o->cl->name));
            abort();
        }
    }
}

void panda$core$Panda$unref$panda$core$Object$Q(Object* o) {
    if (o && o->refcnt != NO_REFCNT) {
        int newCount = __atomic_sub_fetch(&o->refcnt, 1, __ATOMIC_RELAXED);
        if (newCount < 0 && refErrorReporting) {
            printf("internal error: unref %p with refcnt = %d\n", o, newCount + 1);
            printf("    class: %s\n", pandaGetCString(o->cl->name));
            abort();
        }
        if (newCount == 0) {
            void (*cleanup)() = o->cl->vtable[1]; // FIXME hardcoded index to cleanup
            o->refcnt = 1; // no other thread can see it, so we no longer need to use atomics here
            cleanup(o);
            if (o->refcnt != 1) {
                char* cl = pandaGetCString(o->cl->name);
                printf("internal error: refcount of %s(%p) changed during cleanup\n", cl, o);
                abort();
            }
            pandaObjectFree(o);
        }
    }
}

void panda$core$Panda$addressOf$panda$core$Object$R$panda$core$Int64(Int64* result, void* o) {
    result->value = (int64_t) o;
}

void panda$core$Panda$toReal64$panda$core$String$R$panda$core$Real64(Real64* result, String* s) {
    char* cstr = pandaGetCString(s);
    result->value = atof(cstr);
    pandaFree(cstr);
}

String* panda$core$Real32$convert$R$panda$core$String(Real32 d) {
    size_t len = snprintf(NULL, 0, "%g", d.value);
    char* chars = (char*) pandaAlloc(len + 1);
    snprintf(chars, len + 1, "%g", d.value);
    String* result = pandaNewString(chars, len);
    pandaFree(chars);
    return result;
}

String* panda$core$Real64$convert$R$panda$core$String(Real64 d) {
    size_t len = snprintf(NULL, 0, "%g", d.value);
    char* chars = (char*) pandaAlloc(len + 1);
    snprintf(chars, len + 1, "%g", d.value);
    String* result = pandaNewString(chars, len);
    pandaFree(chars);
    return result;
}

void panda$core$Panda$floatToIntBits$panda$core$Real64$R$panda$core$Int64(Int64* result,
        Real64 d) {
    *result = *(Int64*) &d;
}

float panda$core$Panda$sqrt$builtin_float32$R$builtin_float32(float v) {
    return sqrt(v);
}

double panda$core$Panda$sqrt$builtin_float64$R$builtin_float64(double v) {
    return sqrt(v);
}

int64_t panda$core$Panda$currentTime$R$builtin_int64() {
    struct timeval t;
    if (gettimeofday(&t, NULL) == -1) {
        abort();
    }
    return ((int64_t) t.tv_sec) * 1000 + ((int64_t) t.tv_usec) / 1000;
    
}

void panda$core$Panda$disableRefErrorReporting() {
    refErrorReporting = false;
}

// RegularExpression

void pandaFatalError(const char* msg) {
    printf("%s\n", msg);
    abort();
}

void pandaAssert(uint8_t b) {
    if (!b) {
        pandaFatalError("assertion failure");
    }
}

void panda$core$RegularExpression$compile$panda$core$String$panda$core$Int64(RegularExpression* r,
        String* regex, Int64 flags) {
    UErrorCode status = U_ZERO_ERROR;
    char* text = pandaGetCString(regex);
    UText* ut = utext_openUTF8(NULL, text, regex->size, &status);
    if (U_FAILURE(status)) {
        pandaFatalError(u_errorName(status));
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
    pandaFree(text);
    if (U_FAILURE(status)) {
        pandaFatalError(u_errorName(status));
    }
}

Matcher* panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(
        RegularExpression* self, String* s) {
    Matcher* result = pandaObjectAlloc(sizeof(Matcher), &panda$core$Matcher$class);
    UErrorCode status = U_ZERO_ERROR;
    ++allocations;
    result->nativeHandle = uregex_clone(self->nativeHandle, &status);
    if (U_FAILURE(status)) {
        pandaFatalError(u_errorName(status));
    }
    result->searchText = s;
    panda$core$Panda$ref$panda$core$Object$Q((Object*) s);    
    UText* ut = utext_openUTF8(NULL, (const char*) s->data, s->size, &status);
    if (U_FAILURE(status)) {
        pandaFatalError(u_errorName(status));
    }
    uregex_setUText(result->nativeHandle, ut, &status);
    if (U_FAILURE(status)) {
        pandaFatalError(u_errorName(status));
    }
    utext_close(ut);
    return result;
}

void panda$core$RegularExpression$destroy(RegularExpression* self) {
    uregex_close(self->nativeHandle);
    --allocations;
}

void panda$core$Matcher$matches$R$panda$core$Bit(Bit* result, Matcher* self) {
    UErrorCode status = U_ZERO_ERROR;
    self->matched.value = uregex_matches(self->nativeHandle, 0, &status);
    *result = self->matched;
    self->replacementIndex.value.value = self->searchText->size;
    if (U_FAILURE(status)) {
        pandaFatalError(u_errorName(status));
    }
}

void panda$core$Matcher$nativeFind$panda$core$String$Index$R$panda$core$Bit(Bit* result,
        Matcher* self, StringIndex startIndex) {
    UErrorCode status = U_ZERO_ERROR;
    result->value = uregex_find(self->nativeHandle, startIndex.value.value, &status);
    if (U_FAILURE(status)) {
        pandaFatalError(u_errorName(status));
    }
}

void panda$core$Matcher$get_start$R$panda$core$String$Index(Int64* result, Matcher* self) {
    UErrorCode status = U_ZERO_ERROR;
    result->value = uregex_start(self->nativeHandle, 0, &status);
    if (U_FAILURE(status)) {
        pandaFatalError(u_errorName(status));
    }

}

void panda$core$Matcher$get_end$R$panda$core$String$Index(Int64* result, Matcher* self) {
    UErrorCode status = U_ZERO_ERROR;
    result->value = uregex_end(self->nativeHandle, 0, &status);
    if (U_FAILURE(status)) {
        pandaFatalError(u_errorName(status));
    }

}

void panda$core$Matcher$get_groupCount$R$panda$core$Int64(Int64* result, Matcher* self) {
    UErrorCode status = U_ZERO_ERROR;
    result->value = uregex_groupCount(self->nativeHandle, &status) + 1;
    if (U_FAILURE(status)) {
        pandaFatalError(u_errorName(status));
    }
}

String* panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(Matcher* self,
        Int64 group) {
    UErrorCode status = U_ZERO_ERROR;
    int64_t length;
    UText* ut = uregex_groupUText(self->nativeHandle, group.value, NULL, &length, &status);
    if (U_FAILURE(status)) {
        pandaFatalError(u_errorName(status));
    }
    const char* utf8 = (ut->context + (int) UTEXT_GETNATIVEINDEX(ut));
    String* result = pandaNewString(utf8, length);
    utext_close(ut);
    return result;
}

void panda$core$Matcher$destroy(Matcher* self) {
    uregex_close(self->nativeHandle);
    --allocations;
}

// Thread

typedef struct ThreadInfo {
    Method* run;
    Bit preventsExit;
} ThreadInfo;

void pandaThreadEntry(ThreadInfo* threadInfo) {
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
    panda$core$Panda$unref$panda$core$Object$Q((Object*) threadInfo->run);
    pandaFree(threadInfo);
    if (threadInfo->preventsExit.value) {
        pthread_mutex_lock(&preventsExitThreadsMutex);
        preventsExitThreads--;
        if (preventsExitThreads == 0)
            pthread_cond_signal(&preventsExitThreadsVar);
        pthread_mutex_unlock(&preventsExitThreadsMutex);
    }
}

void panda$threads$Thread$run$$LP$RP$EQ$AM$GT$ST$LP$RP$builtin_bit(Object* thread, Method* run,
        Bit preventsExit) {
    pthread_t threadId;
    ThreadInfo* threadInfo = pandaAlloc(sizeof(ThreadInfo));
    panda$core$Panda$ref$panda$core$Object$Q((Object*) run);
    threadInfo->run = run;
    threadInfo->preventsExit = preventsExit;
    pthread_create(&threadId, NULL, (void* (*)()) &pandaThreadEntry, threadInfo);
}

void panda$threads$Thread$sleep$panda$core$Int64(int64_t millis) {
    usleep(millis * 1000);
}

// Lock

void panda$threads$Lock$create(Lock* lock) {
    lock->mutex = pandaAlloc(sizeof(pthread_mutex_t));
    pthread_mutex_init(lock->mutex, NULL);
}

void panda$threads$Lock$lock(Lock* lock) {
    pthread_mutex_lock(lock->mutex);
}

void panda$threads$Lock$unlock(Lock* lock) {
    pthread_mutex_unlock(lock->mutex);
}

void panda$threads$Lock$destroy(Lock* lock) {
    pthread_mutex_destroy(lock->mutex);
    pandaFree(lock->mutex);
}

// Notifier

void panda$threads$Notifier$create(Notifier* notifier) {
    notifier->cond = pandaAlloc(sizeof(pthread_cond_t));
    pthread_cond_init(notifier->cond, NULL);
}

void panda$threads$Notifier$wait(Notifier* notifier) {
    pthread_cond_wait(notifier->cond, notifier->lock->mutex);
}

void panda$threads$Notifier$notify(Notifier* notifier) {
    pthread_cond_signal(notifier->cond);
}

void panda$threads$Notifier$notifyAll(Notifier* notifier) {
    pthread_cond_broadcast(notifier->cond);
}

void panda$threads$Notifier$destroy(Notifier* notifier) {
    pthread_cond_destroy(notifier->cond);
    pandaFree(notifier->cond);
}

// Console

void panda$io$Console$write$panda$core$Char8(char ch) {
    putchar(ch);
}

void panda$io$Console$print$panda$core$String(String* s) {
    fwrite(s->data, 1, s->size, stdout);
}

void panda$io$Console$read$R$panda$core$Char8$Q(NullableChar* result) {
    int read = getchar();
    if (read != EOF) {
        result->value = read;
        result->nonnull = 1;
    }
    else {
        result->nonnull = 0;
    }
}

FileInputStream* panda$io$Console$inputStream$R$panda$io$InputStream() {
    FileInputStream* result = pandaObjectAlloc(sizeof(FileInputStream),
            &panda$io$FileInputStream$class);
    panda$io$InputStream$init(result);
    result->file = stdin;
    return result;
}

FileOutputStream* panda$io$Console$outputStream$R$panda$io$OutputStream() {
    FileOutputStream* result = pandaObjectAlloc(sizeof(FileOutputStream),
            &panda$io$FileOutputStream$class);
    panda$io$OutputStream$init(result);
    result->file = stdout;
    return result;
}

FileOutputStream* panda$io$Console$errorStream$R$panda$io$OutputStream() {
    FileOutputStream* result = pandaObjectAlloc(sizeof(FileOutputStream),
            &panda$io$FileOutputStream$class);
    panda$io$OutputStream$init(result);
    result->file = stderr;
    return result;
}

// File

FileInputStream* panda$io$File$openInputStream$R$panda$io$InputStream(File* self) {
    FileInputStream* result = pandaObjectAlloc(sizeof(FileInputStream),
            &panda$io$FileInputStream$class);
    panda$io$InputStream$init(result);
    char* str = pandaGetCString(self->path);
    result->file = fopen(str, "rb");
    if (!result->file) {
        printf("error opening '%s' for reading\n", str);
        exit(1);
    }
    result->closeOnCleanup.value = true;
    pandaFree(str);
    return result;
}

FileOutputStream* panda$io$File$openOutputStream$R$panda$io$OutputStream(File* self) {
    FileOutputStream* result = pandaObjectAlloc(sizeof(FileOutputStream),
            &panda$io$FileOutputStream$class);
    panda$io$OutputStream$init(result);
    char* str = pandaGetCString(self->path);
    result->file = fopen(str, "wb");
    if (!result->file) {
        printf("error opening '%s' for writing\n", str);
        exit(1);
    }
    result->closeOnCleanup.value = true;
    pandaFree(str);
    return result;
}

FileOutputStream* panda$io$File$openForAppend$R$panda$io$OutputStream(File* self) {
    FileOutputStream* result = pandaObjectAlloc(sizeof(FileOutputStream),
            &panda$io$FileOutputStream$class);
    panda$io$OutputStream$init(result);
    char* str = pandaGetCString(self->path);
    result->file = fopen(str, "ab");
    if (!result->file) {
        printf("error opening '%s' for appending\n", str);
        exit(1);
    }
    result->closeOnCleanup.value = true;
    pandaFree(str);
    return result;
}

Object* panda$io$File$absolute$R$panda$core$Maybe$LTpanda$io$File$GT(File* file) {
    char path[PATH_MAX];
    char* rawPath = pandaGetCString(file->path);
    if (!realpath(rawPath, path)) {
        const char* msg = "unable to resolve absolute path";
        return pandaMaybeError(pandaNewString(msg, strlen(msg)));
    }
    pandaFree(rawPath);
    File* result = pandaObjectAlloc(sizeof(File), &panda$io$File$class);
    result->path = pandaNewString(path, strlen(path));
    return pandaMaybeSuccess(result);
}

void panda$io$File$delete(File* file) {
    char* path = pandaGetCString(file->path);
    if (remove(path)) {
        printf("failed to delete %s\n", path);
        exit(1);
    }
    pandaFree(path);
}

void panda$io$File$exists$R$panda$core$Bit(Bit* result, File* file) {
    char* path = pandaGetCString(file->path);
    struct stat fileInfo;
    result->value = stat(path, &fileInfo) >= 0;
    pandaFree(path);
}

void panda$io$File$isDirectory$R$panda$core$Bit(Bit* result, File* file) {
    char* path = pandaGetCString(file->path);
    struct stat fileInfo;
    stat(path, &fileInfo);
    pandaFree(path);
    result->value = S_ISDIR(fileInfo.st_mode);
}

void panda$io$File$createDirectory(File* file) {
    char* path = pandaGetCString(file->path);
    mkdir(path, 0755);
    pandaFree(path);
}

Array* panda$io$File$list$R$panda$collections$ListView$LTpanda$io$File$GT(File* dir) {
    Array* result = pandaObjectAlloc(sizeof(Array), &panda$collections$Array$class);
    result->count = 0;
    result->capacity = 16;
    result->data = pandaZAlloc(result->capacity * sizeof(Object*));
    DIR *d;
    struct dirent *entry;
    char* path = pandaGetCString(dir->path);
    #define MAX_PATH 1024
    char buffer[MAX_PATH];
    memcpy(buffer, path, dir->path->size);
    buffer[dir->path->size] = '/';
    d = opendir(path);
    pandaFree(path);
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
        String* path = pandaNewString(buffer, dir->path->size + 1 + length);
        File* file = pandaObjectAlloc(sizeof(File), &panda$io$File$class);
        file->path = path;
        panda$collections$Array$add$panda$collections$Array$T(result, (Object*) file);
        --file->refcnt;
    }
    closedir(d);
    return result;
}

// FileInputStream

void panda$io$FileInputStream$readImpl$R$panda$core$UInt8$Q(NullableUInt8* result,
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

void panda$io$FileInputStream$readImpl$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(
        int64_t* result, FileInputStream* self, void* buffer, int max) {
    *result = fread(buffer, 1, max, self->file);
}

void panda$io$FileInputStream$close(FileInputStream* self) {
    if (self->file) {
        fclose(self->file);
    }
}

// FileOutputStream

void panda$io$FileOutputStream$write$panda$core$UInt8(FileOutputStream* self, uint8_t ch) {
    fputc(ch, self->file);
}

void panda$io$FileOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64(
        FileOutputStream* self, void* src, int64_t count) {
    fwrite(src, 1, count, self->file);
}

void panda$io$FileOutputStream$close(FileOutputStream* self) {
    fclose(self->file);
}

void panda$io$FileOutputStream$flush(FileOutputStream* self) {
    fflush(self->file);
}
