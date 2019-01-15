#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>

typedef struct frost$core$Class frost$core$Class;

typedef struct ITable {
    frost$core$Class* $class;
    struct ITable* next;
    void* methods[];
} ITable;

void* frostZAlloc(size_t size);

void* frostObjectAlloc(size_t size, frost$core$Class* cl);

void* frostRealloc(void* old, size_t oldSize, size_t newSize);

void* frostNewRealloc(void* old, size_t oldSize, size_t newSize);

void frostFree(void* ptr);

char* frostConvertToString(void* o);

void frostDebugPrintObject(void* object);

#define FROST_ASSERT(x) if (!x) { printf("assertion failure: %s:%d\n", __FILE__, __LINE__); \
        __builtin_trap(); }
