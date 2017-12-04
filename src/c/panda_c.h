#pragma once

#include <stdlib.h>
#include <inttypes.h>
#include <stdbool.h>

typedef struct panda$core$Class panda$core$Class;

typedef struct ITable {
    panda$core$Class* $class;
    struct ITable* next;
    void* methods[];
} ITable;