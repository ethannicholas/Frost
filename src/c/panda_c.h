#pragma once

#include <stdlib.h>
#include <inttypes.h>
#include <stdbool.h>

typedef struct panda$core$ClassDecl panda$core$ClassDecl;

typedef struct ITable {
    panda$core$ClassDecl* $class;
    struct ITable* next;
    void** methods;
} ITable;