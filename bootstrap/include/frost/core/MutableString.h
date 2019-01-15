#pragma once
#include "frost_c.h"
#include "MutableString_types.h"
typedef struct frost$core$MutableString frost$core$MutableString;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int64_types.h"
#include "frost/core/Char8_types.h"
#include "frost/core/Char32_types.h"
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/MutableString/Index_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$RegularExpression frost$core$RegularExpression;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
#include "frost/core/Range.LTfrost/core/MutableString/Index.GT.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/Range.LTfrost/core/MutableString/Index.Q.GT.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"

void frost$core$MutableString$init(frost$core$MutableString* self);
void frost$core$MutableString$init$frost$core$String(frost$core$MutableString* self, frost$core$String* p_s);
void frost$core$MutableString$init$frost$core$Int64(frost$core$MutableString* self, frost$core$Int64 p_capacity);
void frost$core$MutableString$cleanup(frost$core$MutableString* self);
void frost$core$MutableString$append$frost$core$Char8(frost$core$MutableString* self, frost$core$Char8 p_c);
void frost$core$MutableString$append$frost$core$Char32(frost$core$MutableString* self, frost$core$Char32 p_c);
void frost$core$MutableString$append$frost$core$String(frost$core$MutableString* self, frost$core$String* p_s);
void frost$core$MutableString$append$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64(frost$core$MutableString* self, frost$core$Char8* p_chars, frost$core$Int64 p_count);
void frost$core$MutableString$append$frost$core$Object(frost$core$MutableString* self, frost$core$Object* p_o);
frost$core$Int64 frost$core$MutableString$get_length$R$frost$core$Int64(frost$core$MutableString* self);
frost$core$Int64 frost$core$MutableString$get_byteLength$R$frost$core$Int64(frost$core$MutableString* self);
frost$core$MutableString$Index frost$core$MutableString$get_start$R$frost$core$MutableString$Index(frost$core$MutableString* self);
frost$core$MutableString$Index frost$core$MutableString$get_end$R$frost$core$MutableString$Index(frost$core$MutableString* self);
frost$core$MutableString$Index frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(frost$core$MutableString* self, frost$core$MutableString$Index p_i);
frost$core$MutableString$Index frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(frost$core$MutableString* self, frost$core$MutableString$Index p_i);
frost$core$MutableString$Index frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int64$R$frost$core$MutableString$Index(frost$core$MutableString* self, frost$core$MutableString$Index p_index, frost$core$Int64 p_offset);
frost$core$MutableString$Index$nullable frost$core$MutableString$indexOf$frost$core$String$R$frost$core$MutableString$Index$Q(frost$core$MutableString* self, frost$core$String* p_s);
frost$core$MutableString$Index$nullable frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(frost$core$MutableString* self, frost$core$String* p_s, frost$core$MutableString$Index p_start);
frost$core$Bit frost$core$MutableString$contains$frost$core$Char8$R$frost$core$Bit(frost$core$MutableString* self, frost$core$Char8 p_c);
frost$core$Bit frost$core$MutableString$contains$frost$core$String$R$frost$core$Bit(frost$core$MutableString* self, frost$core$String* p_s);
frost$core$Bit frost$core$MutableString$startsWith$frost$core$String$R$frost$core$Bit(frost$core$MutableString* self, frost$core$String* p_other);
frost$core$Bit frost$core$MutableString$endsWith$frost$core$String$R$frost$core$Bit(frost$core$MutableString* self, frost$core$String* p_other);
frost$core$MutableString$Index$nullable frost$core$MutableString$lastIndexOf$frost$core$String$R$frost$core$MutableString$Index$Q(frost$core$MutableString* self, frost$core$String* p_s);
frost$core$MutableString$Index$nullable frost$core$MutableString$lastIndexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(frost$core$MutableString* self, frost$core$String* p_s, frost$core$MutableString$Index p_start);
frost$core$Bit frost$core$MutableString$matches$frost$core$RegularExpression$R$frost$core$Bit(frost$core$MutableString* self, frost$core$RegularExpression* p_regex);
frost$core$Bit frost$core$MutableString$contains$frost$core$RegularExpression$R$frost$core$Bit(frost$core$MutableString* self, frost$core$RegularExpression* p_needle);
void frost$core$MutableString$trim(frost$core$MutableString* self);
void frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(frost$core$MutableString* self, frost$core$RegularExpression* p_search, frost$core$String* p_replacement);
void frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit(frost$core$MutableString* self, frost$core$RegularExpression* p_search, frost$core$String* p_replacement, frost$core$Bit p_allowGroupReferences);
void frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP(frost$core$MutableString* self, frost$core$RegularExpression* p_search, frost$core$MutableMethod* p_replacement);
void frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(frost$core$MutableString* self, frost$core$RegularExpression* p_search, frost$core$MutableMethod* p_replacement);
frost$core$Char32 frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(frost$core$MutableString* self, frost$core$MutableString$Index p_index);
frost$core$Char32 frost$core$MutableString$$IDX$frost$core$Int64$R$frost$core$Char32(frost$core$MutableString* self, frost$core$Int64 p_index);
void frost$core$MutableString$$IDXEQ$frost$core$MutableString$Index$frost$core$Char32(frost$core$MutableString* self, frost$core$MutableString$Index p_index, frost$core$Char32 p_c);
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(frost$core$MutableString* self, frost$core$Range$LTfrost$core$MutableString$Index$GT p_r, frost$core$String* p_s);
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$core$String(frost$core$MutableString* self, frost$core$Range$LTfrost$core$Int64$GT p_r, frost$core$String* p_s);
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(frost$core$MutableString* self, frost$core$Range$LTfrost$core$MutableString$Index$Q$GT p_r, frost$core$String* p_s);
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$core$String(frost$core$MutableString* self, frost$core$Range$LTfrost$core$Int64$Q$GT p_r, frost$core$String* p_s);
void frost$core$MutableString$replace$frost$core$String$frost$core$String(frost$core$MutableString* self, frost$core$String* p_search, frost$core$String* p_replacement);
void frost$core$MutableString$ensureCapacity$frost$core$Int64(frost$core$MutableString* self, frost$core$Int64 p_newSize);
void frost$core$MutableString$clear(frost$core$MutableString* self);
frost$core$String* frost$core$MutableString$convert$R$frost$core$String(frost$core$MutableString* self);
frost$core$String* frost$core$MutableString$finish$R$frost$core$String(frost$core$MutableString* self);

