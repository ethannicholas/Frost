#pragma once
#include "frost_c.h"
#include "String_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Char8_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct frost$collections$Iterator frost$collections$Iterator;
#include "frost/core/Bit_types.h"
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Char32_types.h"
#include "frost/core/String/Index_types.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/String/Index.Q.Cfrost/core/Int64.GT.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Q.Cfrost/core/Int64.GT.h"
typedef struct frost$core$RegularExpression frost$core$RegularExpression;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
typedef struct frost$collections$Array frost$collections$Array;
#include "frost/core/UInt64_types.h"
#include "frost/core/Real64_types.h"

void frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64(frost$core$String* self, frost$core$Char8* p_data, frost$core$Int64 p_length);
void frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$frost$core$String(frost$core$String* self, frost$core$Char8* p_data, frost$core$Int64 p_length, frost$core$String* p_owner);
void frost$core$String$init$frost$collections$ListView$LTfrost$core$Char8$GT(frost$core$String* self, frost$collections$ListView* p_chars);
void frost$core$String$init$frost$collections$ListView$LTfrost$core$Char32$GT(frost$core$String* self, frost$collections$ListView* p_chars);
frost$core$String* frost$core$String$convert$R$frost$core$String(frost$core$String* self);
frost$core$String* frost$core$String$format$frost$core$String$R$frost$core$String(frost$core$String* self, frost$core$String* p_fmt);
void frost$core$String$cleanup(frost$core$String* self);
frost$collections$ListView* frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(frost$core$String* self);
frost$collections$Iterator* frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT(frost$core$String* self);
frost$collections$Iterator* frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT(frost$core$String* self);
frost$core$Int64 frost$core$String$get_length$R$frost$core$Int64(frost$core$String* self);
frost$core$Int64 frost$core$String$get_byteLength$R$frost$core$Int64(frost$core$String* self);
frost$core$Bit frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(frost$core$String* self, frost$core$String* p_other);
frost$core$Bit frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(frost$core$String* self, frost$core$String* p_other);
frost$core$String* frost$core$String$get_trimmed$R$frost$core$String(frost$core$String* self);
frost$core$String* frost$core$String$$ADD$frost$core$String$R$frost$core$String(frost$core$String* self, frost$core$String* p_other);
frost$core$String* frost$core$String$$ADD$frost$core$Object$R$frost$core$String(frost$core$String* self, frost$core$Object* p_other);
frost$core$String* frost$core$String$$MUL$frost$core$Int64$R$frost$core$String(frost$core$String* self, frost$core$Int64 p_count);
frost$core$String* frost$core$String$$MUL$frost$core$Int64$frost$core$String$R$frost$core$String(frost$core$Int64 p_count, frost$core$String* p_s);
frost$core$String* frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(frost$core$Object* p_o, frost$core$String* p_s);
frost$core$Bit frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(frost$core$String* self, frost$core$String* p_other);
frost$core$Bit frost$core$String$$GT$frost$core$String$R$frost$core$Bit(frost$core$String* self, frost$core$String* p_other);
frost$core$Char32 frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(frost$core$String* self, frost$core$String$Index p_index);
frost$core$Char32 frost$core$String$$IDX$frost$core$Int64$R$frost$core$Char32(frost$core$String* self, frost$core$Int64 p_index);
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* self, frost$core$Range$LTfrost$core$String$Index$GT p_r);
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* self, frost$core$Range$LTfrost$core$String$Index$Q$GT p_r);
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* self, frost$core$Range$LTfrost$core$String$Index$GT p_r);
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* self, frost$core$Range$LTfrost$core$String$Index$Q$GT p_r);
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$R$frost$core$String(frost$core$String* self, frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT p_r);
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(frost$core$String* self, frost$core$Range$LTfrost$core$Int64$Q$GT p_r);
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$core$String(frost$core$String* self, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT p_r);
frost$core$Bit frost$core$String$contains$frost$core$Char8$R$frost$core$Bit(frost$core$String* self, frost$core$Char8 p_c);
frost$core$Bit frost$core$String$contains$frost$core$String$R$frost$core$Bit(frost$core$String* self, frost$core$String* p_s);
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* self, frost$core$String* p_s);
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* self, frost$core$String* p_s, frost$core$String$Index p_start);
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* self, frost$core$String* p_s);
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* self, frost$core$String* p_s, frost$core$String$Index p_start);
frost$core$Bit frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* self, frost$core$RegularExpression* p_regex);
frost$core$Bit frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* self, frost$core$RegularExpression* p_needle);
frost$collections$ListView* frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q(frost$core$String* self, frost$core$RegularExpression* p_regex);
frost$core$String* frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* self, frost$core$String* p_search, frost$core$String* p_replacement);
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String(frost$core$String* self, frost$core$RegularExpression* p_search, frost$core$String* p_replacement);
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(frost$core$String* self, frost$core$RegularExpression* p_search, frost$core$String* p_replacement, frost$core$Bit p_allowGroupReferences);
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* self, frost$core$RegularExpression* p_search, frost$core$MutableMethod* p_replacement);
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* self, frost$core$RegularExpression* p_search, frost$core$MutableMethod* p_replacement);
frost$collections$Iterator* frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* self, frost$core$String* p_needle);
frost$collections$Iterator* frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* self, frost$core$String* p_needle, frost$core$Bit p_overlapping);
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* self, frost$core$RegularExpression* p_needle);
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* self, frost$core$RegularExpression* p_needle, frost$core$Bit p_overlapping);
frost$core$String$Index frost$core$String$get_start$R$frost$core$String$Index(frost$core$String* self);
frost$core$String$Index frost$core$String$get_end$R$frost$core$String$Index(frost$core$String* self);
frost$core$String$Index frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* self, frost$core$String$Index p_i);
frost$core$String$Index frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* self, frost$core$String$Index p_i);
frost$core$String$Index frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(frost$core$String* self, frost$core$String$Index p_index, frost$core$Int64 p_offset);
frost$core$String* frost$core$String$leftAlign$frost$core$Int64$R$frost$core$String(frost$core$String* self, frost$core$Int64 p_width);
frost$core$String* frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* self, frost$core$Int64 p_width, frost$core$Char32 p_fill);
frost$core$String* frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String(frost$core$String* self, frost$core$Int64 p_width);
frost$core$String* frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* self, frost$core$Int64 p_width, frost$core$Char32 p_fill);
frost$core$String* frost$core$String$centerAlign$frost$core$Int64$R$frost$core$String(frost$core$String* self, frost$core$Int64 p_width);
frost$core$String* frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* self, frost$core$Int64 p_width, frost$core$Char32 p_fill);
frost$collections$Array* frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* self, frost$core$String* p_delimiter);
frost$collections$Array* frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* self, frost$core$String* p_delimiter, frost$core$Int64 p_maxResults);
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* self, frost$core$RegularExpression* p_delimiter, frost$core$Int64 p_maxResults);
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* self, frost$core$RegularExpression* p_delimiter);
frost$core$Int64$nullable frost$core$String$convert$R$frost$core$Int64$Q(frost$core$String* self);
frost$core$UInt64$nullable frost$core$String$convert$R$frost$core$UInt64$Q(frost$core$String* self);
frost$core$Real64$nullable frost$core$String$convert$R$frost$core$Real64$Q(frost$core$String* self);
frost$core$Int64 frost$core$String$get_hash$R$frost$core$Int64(frost$core$String* self);

