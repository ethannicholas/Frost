#include <inttypes.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

typedef uint8_t Bit;

typedef struct Class {
} Class;

typedef struct NullableChar {
    int8_t value;
    int8_t nonnull;
} NullableChar;

typedef struct NullableInt8 {
    int8_t value;
    int8_t nonnull;
} NullableInt8;

extern Class panda$core$String$class;

typedef struct String {
    void* cl;
    int32_t refcnt;
    int8_t* data;
    int64_t size;
} String;

typedef struct File {
    void* cl;
    int32_t refcnt;
    String* path;
} File;

typedef struct FileInputStream {
    void* cl;
    int32_t refcnt;
    FILE* file;
} FileInputStream;

extern Class panda$io$FileInputStream$class;

typedef struct FileOutputStream {
    void* cl;
    int32_t refcnt;
    FILE* file;
} FileOutputStream;

extern Class panda$io$FileOutputStream$class;

void pandaMain();

int main() {
    pandaMain();
    return 0;
}

void panda$core$System$exit$panda$core$Int64(int64_t code) {
    exit(code);
}

void debugPrint(int64_t value) {
    printf("%" PRId64 "\n", value);
}

char* pandaGetCString(String* s) {
    char* result = malloc(s->size + 1);
    memcpy(result, s->data, s->size);
    result[s->size] = 0;
    return result;
}

String* pandaNewString(const char* s, int length) {
    String* result = malloc(sizeof(String));
    result->cl = &panda$core$String$class;
    result->size = length;
    result->data = malloc(length);
    memcpy(result->data, s, length);
    return result;
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

// File

FileInputStream* panda$io$File$openInputStream$R$panda$io$InputStream(File* self) {
    FileInputStream* result = malloc(sizeof(FileInputStream));
    result->cl = &panda$io$FileInputStream$class;
    result->refcnt = 1;
    char* str = pandaGetCString(self->path);
    result->file = fopen(str, "rb");
    if (!result->file) {
        printf("error opening '%s'", str);
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
        printf("error opening '%s'", str);
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

// FileInputStream

void panda$io$FileInputStream$readImpl$R$panda$core$Int8$Q(NullableInt8* result,
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

void panda$io$FileInputStream$readImpl$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(
        int64_t* result, FileInputStream* self, void* buffer, int max) {
    *result = fread(buffer, 1, max, self->file);
}

void panda$io$FileInputStream$cleanup(FileInputStream* self) {
    fclose(self->file);
}

// FileOutputStream

void panda$io$FileOutputStream$write$panda$core$Int8(FileOutputStream* self, int8_t ch) {
    fputc(ch, self->file);
}

void panda$io$FileOutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$panda$core$Int64(
        FileOutputStream* self, void* src, int64_t offset, int64_t count) {
    fwrite(src + offset, 1, count, self->file);
}

void panda$io$FileOutputStream$cleanup(FileOutputStream* self) {
    fclose(self->file);
}
