#include <dirent.h>
#include <inttypes.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

typedef uint8_t Bit;

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
    FILE* file;
} FileInputStream;

extern Class panda$io$FileInputStream$class;

typedef struct FileOutputStream {
    Class* cl;
    int32_t refcnt;
    FILE* file;
} FileOutputStream;

typedef struct Process {
    Class* cl;
    int32_t refcnt;
    int64_t pid;
    FileOutputStream* input;
    FileInputStream* output;
    FileInputStream* error;
} Process;

extern Class panda$io$File$class;

extern Class panda$io$FileOutputStream$class;

extern Class panda$collections$Array$class;

extern Class panda$collections$CollectionView$class;

extern Class panda$collections$ListView$class;

extern Class panda$core$System$Process$class;

void panda$core$Panda$unref$panda$core$Object(Object*);

void panda$collections$Array$add$panda$collections$Array$T(Array*, Object*);

char* pandaGetCString(String* s);

void pandaFree(void* ptr);

int allocations = 0;

int refCount = 1;

void* pandaAlloc(size_t size) {
    allocations++;
    return calloc(size, 1);
}

void* pandaZAlloc(size_t size) {
    allocations++;
    return calloc(size, 1);
}

void* pandaObjectAlloc(size_t size, Class* cl) {
/*    char* name = pandaGetCString(cl->name);
    printf("%s alloc\n", name);
    pandaFree(name);*/
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
    free(ptr);
}

void pandaObjectFree(Object* o) {
/*    char* name = pandaGetCString(o->cl->name);
    printf("%s free\n", name);
    pandaFree(name);*/
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
    panda$core$Panda$unref$panda$core$Object((Object*) args);
    if (refCount && allocations > 1) {
        printf("warning: %d objects were still in memory on exit\n", allocations);
    }
    else if (refCount && allocations == 1) {
        printf("warning: 1 object was still in memory on exit\n");
    }
    return 0;
}

// System

void panda$core$System$exit$panda$core$Int64(int64_t code) {
    exit(code);
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
        int argCount = get_count(args);
        char** cargs = (char**) pandaAlloc((argCount + 2) * sizeof(char*));
        cargs[0] = pandaGetCString(path->path);
        int i;
        for (i = 0; i < argCount; ++i) {
            cargs[i + 1] = pandaGetCString(index(args, i));
        }
        cargs[argCount + 1] = NULL;
        execv(cargs[0], cargs);
        printf("running %s\n", cargs[0]);
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
        result->input->file = fdopen(stdinPipe[1], "wb");
        result->output = pandaObjectAlloc(sizeof(FileInputStream), &panda$io$FileInputStream$class);
        result->output->file = fdopen(stdoutPipe[0], "rb");
        result->error = pandaObjectAlloc(sizeof(FileInputStream), &panda$io$FileInputStream$class);
        result->error->file = fdopen(stderrPipe[0], "rb");
        return result;
    }
    return NULL;
}

void panda$core$System$Process$waitFor$R$panda$core$Int64(int64_t* result, Process* p) {
    int status;
    fclose(p->input->file);
    waitpid(p->pid, &status, 0);
    *result = WEXITSTATUS(status);
    fclose(p->output->file);
    fclose(p->error->file);
}

// Panda

#define NO_REFCNT -999

void panda$core$Panda$debugPrint$builtin_int64(int64_t x) {
    printf("Debug: %" PRId64 "\n", x);
}

// #################### FIME REMOVE ####################
void panda$core$Panda$disableRefCounting() {
    refCount = 0;
}

void panda$core$Panda$ref$panda$core$Object(Object* o) {
    if (refCount && o && o->refcnt != NO_REFCNT) {
        if (o->refcnt <= 0) {
            printf("internal error: ref with refcnt = %d\n", o->refcnt);
            abort();
        }
        ++o->refcnt;
    }
}

void panda$core$Panda$unref$panda$core$Object(Object* o) {
    if (refCount && o && o->refcnt != NO_REFCNT) {
        if (o->refcnt <= 0) {
            printf("internal error: unref with refcnt = %d\n", o->refcnt);
            abort();
        }
        --o->refcnt;
        if (o->refcnt == 0) {
            void (*cleanup)() = o->cl->vtable[1]; // FIXME hardcoded index to cleanup
            o->refcnt = -100000;
            cleanup(o);
            pandaObjectFree(o);
        }
    }
}

void panda$core$Panda$addressOf$panda$core$Object$R$panda$core$Int64(int64_t* result, void* o) {
    *result = (int64_t) o;
}

void panda$core$Panda$toReal64$panda$core$String$R$panda$core$Real64(double* result, String* s) {
    char* cstr = pandaGetCString(s);
    *result = atof(cstr);
    pandaFree(cstr);
}

String* panda$core$Real64$convert$R$panda$core$String(double d) {
    size_t len = snprintf(NULL, 0, "%g", d);
    char* chars = (char*) pandaAlloc(len + 1);
    snprintf(chars, len + 1, "%g", d);
    String* result = pandaNewString(chars, len);
    pandaFree(chars);
    return result;
}

void panda$core$Panda$floatToIntBits$panda$core$Real64$R$panda$core$Int64(int64_t* result,
        double d) {
    *result = *((int64_t*) &d);
}

// Console

void panda$io$Console$write$panda$core$Char8(char ch) {
    putchar(ch);
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
    FileInputStream* result = pandaAlloc(sizeof(FileInputStream));
    result->cl = &panda$io$FileInputStream$class;
    result->refcnt = 1;
    result->file = stdin;
    return result;
}

FileOutputStream* panda$io$Console$outputStream$R$panda$io$OutputStream() {
    FileOutputStream* result = pandaAlloc(sizeof(FileOutputStream));
    result->cl = &panda$io$FileOutputStream$class;
    result->refcnt = 1;
    result->file = stdout;
    return result;
}

FileOutputStream* panda$io$Console$errorStream$R$panda$io$OutputStream() {
    FileOutputStream* result = pandaAlloc(sizeof(FileOutputStream));
    result->cl = &panda$io$FileOutputStream$class;
    result->refcnt = 1;
    result->file = stderr;
    return result;
}

// File

FileInputStream* panda$io$File$openInputStream$R$panda$io$InputStream(File* self) {
    FileInputStream* result = pandaAlloc(sizeof(FileInputStream));
    result->cl = &panda$io$FileInputStream$class;
    result->refcnt = 1;
    char* str = pandaGetCString(self->path);
    result->file = fopen(str, "rb");
    if (!result->file) {
        printf("error opening '%s' for reading\n", str);
        exit(1);
    }
    pandaFree(str);
    return result;
}

FileOutputStream* panda$io$File$openOutputStream$R$panda$io$OutputStream(File* self) {
    FileOutputStream* result = pandaAlloc(sizeof(FileOutputStream));
    result->cl = &panda$io$FileOutputStream$class;
    result->refcnt = 1;
    char* str = pandaGetCString(self->path);
    result->file = fopen(str, "wb");
    if (!result->file) {
        printf("error opening '%s' for writing\n", str);
        exit(1);
    }
    pandaFree(str);
    return result;
}

String* panda$io$File$absolutePath$R$panda$core$String(File* file) {
    char result[PATH_MAX];
    char* rawPath = pandaGetCString(file->path);
    realpath(rawPath, result);
    pandaFree(rawPath);
    return pandaNewString(result, strlen(result));
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
    *result = stat(path, &fileInfo) >= 0;
    pandaFree(path);
}

void panda$io$File$isDirectory$R$panda$core$Bit(Bit* result, File* file) {
    char* path = pandaGetCString(file->path);
    struct stat fileInfo;
    stat(path, &fileInfo);
    pandaFree(path);
    *result = S_ISDIR(fileInfo.st_mode);
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

void panda$io$FileInputStream$cleanup(FileInputStream* self) {
    fclose(self->file);
}

// FileOutputStream

void panda$io$FileOutputStream$write$panda$core$UInt8(FileOutputStream* self, uint8_t ch) {
    fputc(ch, self->file);
}

void panda$io$FileOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(
        FileOutputStream* self, void* src, int64_t offset, int64_t count) {
    fwrite(src + offset, 1, count, self->file);
}

void panda$io$FileOutputStream$cleanup(FileOutputStream* self) {
    fclose(self->file);
}
