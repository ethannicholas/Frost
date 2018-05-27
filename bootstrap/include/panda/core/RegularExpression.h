#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int8.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$core$RegularExpression {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int8* nativeHandle;
} panda$core$RegularExpression;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[5]; } panda$core$RegularExpression$class_type;
extern panda$core$RegularExpression$class_type panda$core$RegularExpression$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$RegularExpression panda$core$RegularExpression;
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Matcher panda$core$Matcher;

void panda$core$RegularExpression$init$panda$core$String(panda$core$RegularExpression* self, panda$core$String* p_regex);
panda$core$Matcher* panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(panda$core$RegularExpression* self, panda$core$String* p_text);
void panda$core$RegularExpression$cleanup(panda$core$RegularExpression* self);
void panda$core$RegularExpression$compile$panda$core$String(panda$core$RegularExpression* self, panda$core$String* p_regex);
void panda$core$RegularExpression$destroy(panda$core$RegularExpression* self);

#endif
