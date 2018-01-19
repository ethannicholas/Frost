#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$CollectionWriter {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$collections$CollectionWriter;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[5]; } panda$collections$CollectionWriter$class_type;
extern panda$collections$CollectionWriter$class_type panda$collections$CollectionWriter$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$CollectionWriter panda$collections$CollectionWriter;
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$collections$CollectionView panda$collections$CollectionView;

void panda$collections$CollectionWriter$add$panda$collections$CollectionWriter$T(panda$collections$CollectionWriter* self, panda$core$Object* p_value);
void panda$collections$CollectionWriter$addAll$panda$collections$CollectionView$LTpanda$collections$CollectionWriter$T$GT(panda$collections$CollectionWriter* self, panda$collections$CollectionView* p_c);
void panda$collections$CollectionWriter$clear(panda$collections$CollectionWriter* self);

#endif
