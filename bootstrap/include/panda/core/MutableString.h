#pragma once
#include "panda_c.h"
#include "MutableString_types.h"
typedef struct panda$core$MutableString panda$core$MutableString;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64_types.h"
#include "panda/core/Char8_types.h"
#include "panda/core/Char32_types.h"
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/MutableString/Index_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$core$RegularExpression panda$core$RegularExpression;
typedef struct panda$core$MutableMethod panda$core$MutableMethod;
#include "panda/core/Range.LTpanda/core/MutableString/Index.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/MutableString/Index.Q.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"

void panda$core$MutableString$init(panda$core$MutableString* self);
void panda$core$MutableString$init$panda$core$String(panda$core$MutableString* self, panda$core$String* p_s);
void panda$core$MutableString$init$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_capacity);
void panda$core$MutableString$cleanup(panda$core$MutableString* self);
void panda$core$MutableString$append$panda$core$Char8(panda$core$MutableString* self, panda$core$Char8 p_c);
void panda$core$MutableString$append$panda$core$Char32(panda$core$MutableString* self, panda$core$Char32 p_c);
void panda$core$MutableString$append$panda$core$String(panda$core$MutableString* self, panda$core$String* p_s);
void panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(panda$core$MutableString* self, panda$core$Char8* p_chars, panda$core$Int64 p_count);
void panda$core$MutableString$append$panda$core$Object(panda$core$MutableString* self, panda$core$Object* p_o);
panda$core$Int64 panda$core$MutableString$length$R$panda$core$Int64(panda$core$MutableString* self);
panda$core$Int64 panda$core$MutableString$byteLength$R$panda$core$Int64(panda$core$MutableString* self);
panda$core$MutableString$Index panda$core$MutableString$start$R$panda$core$MutableString$Index(panda$core$MutableString* self);
panda$core$MutableString$Index panda$core$MutableString$end$R$panda$core$MutableString$Index(panda$core$MutableString* self);
panda$core$MutableString$Index panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(panda$core$MutableString* self, panda$core$MutableString$Index p_i);
panda$core$MutableString$Index panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index(panda$core$MutableString* self, panda$core$MutableString$Index p_i);
panda$core$MutableString$Index panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(panda$core$MutableString* self, panda$core$MutableString$Index p_index, panda$core$Int64 p_offset);
panda$core$MutableString$Index$nullable panda$core$MutableString$indexOf$panda$core$String$R$panda$core$MutableString$Index$Q(panda$core$MutableString* self, panda$core$String* p_s);
panda$core$MutableString$Index$nullable panda$core$MutableString$indexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(panda$core$MutableString* self, panda$core$String* p_s, panda$core$MutableString$Index p_start);
panda$core$Bit panda$core$MutableString$contains$panda$core$Char8$R$panda$core$Bit(panda$core$MutableString* self, panda$core$Char8 p_c);
panda$core$Bit panda$core$MutableString$contains$panda$core$String$R$panda$core$Bit(panda$core$MutableString* self, panda$core$String* p_s);
panda$core$Bit panda$core$MutableString$startsWith$panda$core$String$R$panda$core$Bit(panda$core$MutableString* self, panda$core$String* p_other);
panda$core$Bit panda$core$MutableString$endsWith$panda$core$String$R$panda$core$Bit(panda$core$MutableString* self, panda$core$String* p_other);
panda$core$MutableString$Index$nullable panda$core$MutableString$lastIndexOf$panda$core$String$R$panda$core$MutableString$Index$Q(panda$core$MutableString* self, panda$core$String* p_s);
panda$core$MutableString$Index$nullable panda$core$MutableString$lastIndexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(panda$core$MutableString* self, panda$core$String* p_s, panda$core$MutableString$Index p_start);
panda$core$Bit panda$core$MutableString$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$MutableString* self, panda$core$RegularExpression* p_regex);
panda$core$Bit panda$core$MutableString$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$MutableString* self, panda$core$RegularExpression* p_needle);
void panda$core$MutableString$trim(panda$core$MutableString* self);
void panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(panda$core$MutableString* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement);
void panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit(panda$core$MutableString* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement, panda$core$Bit p_allowGroupReferences);
void panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP(panda$core$MutableString* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement);
void panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(panda$core$MutableString* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement);
panda$core$Char32 panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32(panda$core$MutableString* self, panda$core$MutableString$Index p_index);
panda$core$Char32 panda$core$MutableString$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$MutableString* self, panda$core$Int64 p_index);
void panda$core$MutableString$$IDXEQ$panda$core$MutableString$Index$panda$core$Char32(panda$core$MutableString* self, panda$core$MutableString$Index p_index, panda$core$Char32 p_c);
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(panda$core$MutableString* self, panda$core$Range$LTpanda$core$MutableString$Index$GT p_r, panda$core$String* p_s);
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$core$String(panda$core$MutableString* self, panda$core$Range$LTpanda$core$Int64$GT p_r, panda$core$String* p_s);
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(panda$core$MutableString* self, panda$core$Range$LTpanda$core$MutableString$Index$Q$GT p_r, panda$core$String* p_s);
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(panda$core$MutableString* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r, panda$core$String* p_s);
void panda$core$MutableString$replace$panda$core$String$panda$core$String(panda$core$MutableString* self, panda$core$String* p_search, panda$core$String* p_replacement);
void panda$core$MutableString$ensureCapacity$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_newSize);
void panda$core$MutableString$clear(panda$core$MutableString* self);
panda$core$String* panda$core$MutableString$convert$R$panda$core$String(panda$core$MutableString* self);
panda$core$String* panda$core$MutableString$finish$R$panda$core$String(panda$core$MutableString* self);

