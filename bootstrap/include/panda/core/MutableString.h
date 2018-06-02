#pragma once
#include "panda_c.h"
#include "MutableString_types.h"
typedef struct panda$core$MutableString panda$core$MutableString;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64_types.h"
#include "panda/core/Char8_types.h"
#include "panda/core/Char32_types.h"
typedef struct panda$core$Object panda$core$Object;

void panda$core$MutableString$init(panda$core$MutableString* self);
void panda$core$MutableString$init$panda$core$String(panda$core$MutableString* self, panda$core$String* p_s);
void panda$core$MutableString$init$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_capacity);
void panda$core$MutableString$cleanup(panda$core$MutableString* self);
void panda$core$MutableString$append$panda$core$Char8(panda$core$MutableString* self, panda$core$Char8 p_c);
void panda$core$MutableString$append$panda$core$Char32(panda$core$MutableString* self, panda$core$Char32 p_c);
void panda$core$MutableString$append$panda$core$String(panda$core$MutableString* self, panda$core$String* p_s);
void panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(panda$core$MutableString* self, panda$core$Char8* p_chars, panda$core$Int64 p_offset, panda$core$Int64 p_count);
void panda$core$MutableString$append$panda$core$Object(panda$core$MutableString* self, panda$core$Object* p_o);
void panda$core$MutableString$ensureCapacity$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_newSize);
void panda$core$MutableString$clear(panda$core$MutableString* self);
panda$core$String* panda$core$MutableString$convert$R$panda$core$String(panda$core$MutableString* self);
panda$core$String* panda$core$MutableString$finish$R$panda$core$String(panda$core$MutableString* self);

