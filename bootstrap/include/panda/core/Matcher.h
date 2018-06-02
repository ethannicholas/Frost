#pragma once
#include "panda_c.h"
#include "Matcher_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$Matcher panda$core$Matcher;
#include "panda/core/String/Index_types.h"
typedef struct panda$core$MutableString panda$core$MutableString;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64_types.h"

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

