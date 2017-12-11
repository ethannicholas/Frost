#include <dirent.h>
#include <inttypes.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

typedef uint8_t Bit;

struct Class;

typedef struct ITable {
    struct Class* cl;
    struct ITable* next;
    void* methods[0];
} ITable;

typedef struct Class {
    struct Class* cl;
    int32_t refcnt;
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

void panda$collections$Array$add$panda$collections$Array$T(Array*, Object*);

void debugPrint(int64_t value) {
    printf("%" PRId64 "\n", value);
}

/**
 * Returns a null-terminated copy of a Panda string. The caller is responsible for freeing this
 * memory.
 */
char* pandaGetCString(String* s) {
    char* result = malloc(s->size + 1);
    memcpy(result, s->data, s->size);
    result[s->size] = 0;
    return result;
}

String* pandaNewString(const char* s, int length) {
    String* result = malloc(sizeof(String));
    result->cl = &panda$core$String$class;
    result->refcnt = 1;
    result->size = length;
    result->data = malloc(length);
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
    Array* args = malloc(sizeof(Array));
    args->cl = &panda$collections$Array$class;
    args->refcnt = 1;
    args->count = argc;
    args->capacity = argc;
    args->data = malloc(argc * sizeof(Object*));
    int i;
    for (i = 0; i < argc; ++i) {
        args->data[i] = (Object*) pandaNewString(argv[i], strlen(argv[i]));
    }
    pandaMain(args);
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
        char** cargs = (char**) malloc((argCount + 2) * sizeof(char*));
        cargs[0] = pandaGetCString(path->path);
        int i;
        for (i = 0; i < argCount; ++i) {
            cargs[i + 1] = pandaGetCString(index(args, i));
        }
        cargs[argCount + 1] = NULL;
        execv(cargs[0], cargs);
        perror("error exec'ing child process");
        // we don't bother freeing the argument memory because we just kill the process here
        exit(1);
    }
    else {
        // parent
        close(stdinPipe[0]);
        close(stdoutPipe[1]);
        close(stderrPipe[1]);
        Process* result = malloc(sizeof(Process));
        result->cl = &panda$core$System$Process$class;
        result->refcnt = 1;
        result->pid = pid;
        result->input = malloc(sizeof(FileOutputStream));
        result->input->cl = &panda$io$FileOutputStream$class;
        result->input->refcnt = 1;
        result->input->file = fdopen(stdinPipe[1], "wb");
        result->output = malloc(sizeof(FileInputStream));
        result->output->cl = &panda$io$FileInputStream$class;
        result->output->refcnt = 1;
        result->output->file = fdopen(stdoutPipe[0], "rb");
        result->error = malloc(sizeof(FileInputStream));
        result->error->cl = &panda$io$FileInputStream$class;
        result->error->refcnt = 1;
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

void panda$core$Panda$addressOf$panda$core$Object$R$panda$core$Int64(int64_t* result, void* o) {
    *result = (int64_t) o;
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
    FileInputStream* result = malloc(sizeof(FileInputStream));
    result->cl = &panda$io$FileInputStream$class;
    result->refcnt = 1;
    result->file = stdin;
    return result;
}

FileOutputStream* panda$io$Console$outputStream$R$panda$io$OutputStream() {
    FileOutputStream* result = malloc(sizeof(FileOutputStream));
    result->cl = &panda$io$FileOutputStream$class;
    result->refcnt = 1;
    result->file = stdout;
    return result;
}

FileOutputStream* panda$io$Console$errorStream$R$panda$io$OutputStream() {
    FileOutputStream* result = malloc(sizeof(FileOutputStream));
    result->cl = &panda$io$FileOutputStream$class;
    result->refcnt = 1;
    result->file = stderr;
    return result;
}

// File

FileInputStream* panda$io$File$openInputStream$R$panda$io$InputStream(File* self) {
    FileInputStream* result = malloc(sizeof(FileInputStream));
    result->cl = &panda$io$FileInputStream$class;
    result->refcnt = 1;
    char* str = pandaGetCString(self->path);
    result->file = fopen(str, "rb");
    if (!result->file) {
        printf("error opening '%s' for reading\n", str);
        exit(1);
    }
    free(str);
    return result;
}

FileOutputStream* panda$io$File$openOutputStream$R$panda$io$OutputStream(File* self) {
    FileOutputStream* result = malloc(sizeof(FileOutputStream));
    result->cl = &panda$io$FileOutputStream$class;
    result->refcnt = 1;
    char* str = pandaGetCString(self->path);
    result->file = fopen(str, "wb");
    if (!result->file) {
        printf("error opening '%s' for writing\n", str);
        exit(1);
    }
    free(str);
    return result;
}

String* panda$io$File$absolutePath$R$panda$core$String(File* file) {
    char result[PATH_MAX];
    char* rawPath = pandaGetCString(file->path);
    realpath(rawPath, result);
    free(rawPath);
    return pandaNewString(result, strlen(result));
}

void panda$io$File$delete(File* file) {
    char* path = pandaGetCString(file->path);
    if (remove(path)) {
        printf("failed to delete %s\n", path);
        exit(1);
    }
    free(path);
}

void panda$io$File$exists$R$panda$core$Bit(Bit* result, File* file) {
    char* path = pandaGetCString(file->path);
    struct stat fileInfo;
    *result = stat(path, &fileInfo) >= 0;
    free(path);
}

void panda$io$File$isDirectory(Bit* result, File* file) {
    char* path = pandaGetCString(file->path);
    struct stat fileInfo;
    stat(path, &fileInfo);
    free(path);
    *result = S_ISDIR(fileInfo.st_mode);
}

void panda$io$File$createDirectory(File* file) {
    char* path = pandaGetCString(file->path);
    mkdir(path, 0755);
    free(path);
}

Array* panda$io$File$list$R$panda$collections$ListView$LTpanda$io$File$GT(File* dir) {
    Array* result = malloc(sizeof(Array));
    result->cl = &panda$collections$Array$class;
    result->refcnt = 1;
    result->count = 0;
    result->capacity = 16;
    result->data = malloc(result->capacity * sizeof(Object*));
    DIR *d;
    struct dirent *entry;
    char* path = pandaGetCString(dir->path);
    #define MAX_PATH 1024
    char buffer[MAX_PATH];
    memcpy(buffer, path, dir->path->size);
    buffer[dir->path->size] = '/';
    d = opendir(path);
    free(path);
    if (!d) {
        return result;
    }
    while ((entry = readdir(d))) {
        size_t length =  strlen(entry->d_name);
        memcpy(buffer + dir->path->size + 1, entry->d_name, length);
        buffer[dir->path->size + 1 + length] = 0;
        String* path = pandaNewString(buffer, dir->path->size + 1 + length);
        File* file = malloc(sizeof(File));
        file->cl = &panda$io$File$class;
        file->refcnt = 1;
        file->path = path;
        panda$collections$Array$add$panda$collections$Array$T(result, (Object*) file);
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
