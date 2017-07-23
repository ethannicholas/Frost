#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct NullableChar {
    int8_t value;
    int8_t nonnull;
} NullableChar;

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

typedef struct FileOutputStream {
    void* cl;
    int32_t refcnt;
    FILE* file;
} FileOutputStream;

void panda$core$System$exit$panda$core$Int64(int64_t code) {
    exit(code);
}

void panda$io$Console$print$panda$core$Char8(char ch) {
    putchar(ch);
}

void panda$io$Console$read$R$panda$core$Char8$Q(NullableChar* result) {
    int read = getchar();
    if (read != EOF) {
        result->value = read;
        result->nonnull = -1;
    }
    else {
        result->value = 0;
        result->nonnull = 0;
    }
}

void panda$io$FileOutputStream$init$panda$io$File(FileOutputStream* self, File* path) {
    char* str = malloc(path->path->size + 1);
    memcpy(str, path->path->data, path->path->size);
    str[path->path->size] = 0;
    self->file = fopen(str, "wb");
    free(str);
}

void panda$io$FileOutputStream$write$panda$core$Int8(FileOutputStream* self, int8_t ch) {
    fputc(ch, self->file);
}

void panda$io$FileOutputStream$write$panda$core$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$panda$core$Int64(
        FileOutputStream* self, void* src, int64_t offset, int64_t count) {
    fwrite(src + offset, count, 1, self->file);
}

void panda$io$FileOutputStream$cleanup(FileOutputStream* self) {
    fclose(self->file);
}
