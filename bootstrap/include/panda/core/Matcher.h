#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int8.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit.h"
#include "panda/core/String/Index.h"

typedef struct panda$core$Matcher {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int8* nativeHandle;
    panda$core$String* searchText;
    panda$core$Bit matched;
    panda$core$String$Index replacementIndex;
} panda$core$Matcher;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[14]; } panda$core$Matcher$class_type;
extern panda$core$Matcher$class_type panda$core$Matcher$class;

#ifndef PANDA_TYPESONLY
#include "panda/core/Bit.h"
typedef struct panda$core$Matcher panda$core$Matcher;
#include "panda/core/String/Index.h"
typedef struct panda$core$MutableString panda$core$MutableString;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64.h"

void panda$core$Matcher$matches$R$panda$core$Bit(panda$core$Bit* result, panda$core$Matcher* self);
panda$core$Bit panda$core$Matcher$find$R$panda$core$Bit(panda$core$Matcher* self);
panda$core$Bit panda$core$Matcher$find$panda$core$String$Index$R$panda$core$Bit(panda$core$Matcher* self, panda$core$String$Index p_start);
void panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String(panda$core$Matcher* self, panda$core$MutableString* p_target, panda$core$String* p_replacement);
void panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(panda$core$Matcher* self, panda$core$MutableString* p_target, panda$core$String* p_replacement, panda$core$Bit p_allowGroupReferences);
void panda$core$Matcher$appendTail$panda$core$MutableString(panda$core$Matcher* self, panda$core$MutableString* p_target);
void panda$core$Matcher$nativeFind$panda$core$String$Index$R$panda$core$Bit(panda$core$Bit* result, panda$core$Matcher* self, panda$core$String$Index p_start);
void panda$core$Matcher$get_start$R$panda$core$String$Index(panda$core$String$Index* result, panda$core$Matcher* self);
void panda$core$Matcher$get_end$R$panda$core$String$Index(panda$core$String$Index* result, panda$core$Matcher* self);
void panda$core$Matcher$get_groupCount$R$panda$core$Int64(panda$core$Int64* result, panda$core$Matcher* self);
panda$core$String* panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(panda$core$Matcher* self, panda$core$Int64 p_index);
void panda$core$Matcher$cleanup(panda$core$Matcher* self);
void panda$core$Matcher$destroy(panda$core$Matcher* self);
void panda$core$Matcher$init(panda$core$Matcher* self);

#endif
