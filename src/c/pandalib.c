#include "stdio.h"
#include "stdlib.h"
#include "string.h"

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

void panda$core$System$exit$panda$core$Int64(int64_t code) {
    exit(code);
}

// Console

void panda$io$Console$print$panda$core$Char8(char ch) {
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
    char* str = malloc(self->path->size + 1);
    memcpy(str, self->path->data, self->path->size);
    str[self->path->size] = 0;
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
    char* str = malloc(self->path->size + 1);
    memcpy(str, self->path->data, self->path->size);
    str[self->path->size] = 0;
    result->file = fopen(str, "wb");
    if (!result->file) {
        printf("error opening '%s'", str);
        exit(1);
    }
    free(str);
    return result;
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

int64_t panda$io$FileInputStream$readImpl$panda$core$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(
        FileInputStream* self, void* buffer, int max) {
    return fread(buffer, 1, max, self->file);
}

void panda$io$FileInputStream$cleanup(FileInputStream* self) {
    fclose(self->file);
}

// FileOutputStream

void panda$io$FileOutputStream$write$panda$core$Int8(FileOutputStream* self, int8_t ch) {
    fputc(ch, self->file);
}

void panda$io$FileOutputStream$write$panda$core$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$panda$core$Int64(
        FileOutputStream* self, void* src, int64_t offset, int64_t count) {
    fwrite(src + offset, 1, count, self->file);
}

void panda$io$FileOutputStream$cleanup(FileOutputStream* self) {
    fclose(self->file);
}
