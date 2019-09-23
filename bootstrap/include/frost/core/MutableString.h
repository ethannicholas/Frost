#pragma once
#include "frost_c.h"
#include "MutableString_types.h"
typedef struct frost$core$MutableString frost$core$MutableString;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int_types.h"
#include "frost/core/Char8_types.h"
#include "frost/core/Char32_types.h"
#include "frost/unsafe/NewPointer_types.h"
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/MutableString/Index_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$RegularExpression frost$core$RegularExpression;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
#include "frost/core/Range.LTfrost/core/MutableString/Index.GT.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Range.LTfrost/core/MutableString/Index.Q.GT.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"

void frost$core$MutableString$init(void* rawSelf);
void frost$core$MutableString$init$frost$core$String(void* rawSelf, frost$core$String* p_s);
void frost$core$MutableString$init$frost$core$Int(void* rawSelf, frost$core$Int p_capacity);
void frost$core$MutableString$cleanup(void* rawSelf);
void frost$core$MutableString$append$frost$core$Char8(void* rawSelf, frost$core$Char8 p_c);
void frost$core$MutableString$append$frost$core$Char32(void* rawSelf, frost$core$Char32 p_c);
void frost$core$MutableString$append$frost$core$String(void* rawSelf, frost$core$String* p_s);
void frost$core$MutableString$append$frost$unsafe$NewPointer$LTfrost$core$Char8$GT$frost$core$Int(void* rawSelf, frost$unsafe$NewPointer p_chars, frost$core$Int p_count);
void frost$core$MutableString$append$frost$core$Object(void* rawSelf, frost$core$Object* p_o);
frost$core$Int frost$core$MutableString$get_length$R$frost$core$Int(void* rawSelf);
frost$core$Int frost$core$MutableString$get_byteLength$R$frost$core$Int(void* rawSelf);
frost$core$MutableString$Index frost$core$MutableString$get_start$R$frost$core$MutableString$Index(void* rawSelf);
frost$core$MutableString$Index frost$core$MutableString$get_end$R$frost$core$MutableString$Index(void* rawSelf);
frost$core$MutableString$Index frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(void* rawSelf, frost$core$MutableString$Index p_i);
frost$core$MutableString$Index frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(void* rawSelf, frost$core$MutableString$Index p_i);
frost$core$MutableString$Index frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index(void* rawSelf, frost$core$MutableString$Index p_index, frost$core$Int p_offset);
frost$core$MutableString$Index$nullable frost$core$MutableString$indexOf$frost$core$String$R$frost$core$MutableString$Index$Q(void* rawSelf, frost$core$String* p_s);
frost$core$MutableString$Index$nullable frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(void* rawSelf, frost$core$String* p_s, frost$core$MutableString$Index p_start);
frost$core$Bit frost$core$MutableString$contains$frost$core$Char8$R$frost$core$Bit(void* rawSelf, frost$core$Char8 p_c);
frost$core$Bit frost$core$MutableString$contains$frost$core$String$R$frost$core$Bit(void* rawSelf, frost$core$String* p_s);
frost$core$Bit frost$core$MutableString$startsWith$frost$core$String$R$frost$core$Bit(void* rawSelf, frost$core$String* p_other);
frost$core$Bit frost$core$MutableString$endsWith$frost$core$String$R$frost$core$Bit(void* rawSelf, frost$core$String* p_other);
frost$core$MutableString$Index$nullable frost$core$MutableString$lastIndexOf$frost$core$String$R$frost$core$MutableString$Index$Q(void* rawSelf, frost$core$String* p_s);
frost$core$MutableString$Index$nullable frost$core$MutableString$lastIndexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(void* rawSelf, frost$core$String* p_s, frost$core$MutableString$Index p_start);
frost$core$Bit frost$core$MutableString$matches$frost$core$RegularExpression$R$frost$core$Bit(void* rawSelf, frost$core$RegularExpression* p_regex);
frost$core$Bit frost$core$MutableString$contains$frost$core$RegularExpression$R$frost$core$Bit(void* rawSelf, frost$core$RegularExpression* p_needle);
void frost$core$MutableString$trim(void* rawSelf);
void frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(void* rawSelf, frost$core$RegularExpression* p_search, frost$core$String* p_replacement);
void frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit(void* rawSelf, frost$core$RegularExpression* p_search, frost$core$String* p_replacement, frost$core$Bit p_allowGroupReferences);
void frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP(void* rawSelf, frost$core$RegularExpression* p_search, frost$core$MutableMethod* p_replacement);
void frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(void* rawSelf, frost$core$RegularExpression* p_search, frost$core$MutableMethod* p_replacement);
frost$core$Char32 frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(void* rawSelf, frost$core$MutableString$Index p_index);
frost$core$Char32 frost$core$MutableString$$IDX$frost$core$Int$R$frost$core$Char32(void* rawSelf, frost$core$Int p_index);
void frost$core$MutableString$$IDXEQ$frost$core$MutableString$Index$frost$core$Char32(void* rawSelf, frost$core$MutableString$Index p_index, frost$core$Char32 p_c);
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(void* rawSelf, frost$core$Range$LTfrost$core$MutableString$Index$GT p_r, frost$core$String* p_s);
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int$GT$frost$core$String(void* rawSelf, frost$core$Range$LTfrost$core$Int$GT p_r, frost$core$String* p_s);
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(void* rawSelf, frost$core$Range$LTfrost$core$MutableString$Index$Q$GT p_r, frost$core$String* p_s);
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int$Q$GT$frost$core$String(void* rawSelf, frost$core$Range$LTfrost$core$Int$Q$GT p_r, frost$core$String* p_s);
void frost$core$MutableString$replace$frost$core$String$frost$core$String(void* rawSelf, frost$core$String* p_search, frost$core$String* p_replacement);
void frost$core$MutableString$ensureCapacity$frost$core$Int(void* rawSelf, frost$core$Int p_newSize);
void frost$core$MutableString$clear(void* rawSelf);
frost$core$String* frost$core$MutableString$get_asString$R$frost$core$String(void* rawSelf);
frost$core$String* frost$core$MutableString$finish$R$frost$core$String(void* rawSelf);

