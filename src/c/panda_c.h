#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdbool.h>

typedef struct panda$core$Class panda$core$Class;

typedef struct ITable {
    panda$core$Class* $class;
    struct ITable* next;
    void* methods[];
} ITable;

#define PANDA_ASSERT(x) if (!x) { printf("assertion failure: %s:%d\n", __FILE__, __LINE__); \
        __builtin_trap(); }