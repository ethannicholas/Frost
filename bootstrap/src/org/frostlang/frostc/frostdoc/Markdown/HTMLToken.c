#include "org/frostlang/frostc/frostdoc/Markdown/HTMLToken.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$HTMLToken$$EQ$org$frostlang$frostc$frostdoc$Markdown$HTMLToken$R$frost$core$Bit$shim(org$frostlang$frostc$frostdoc$Markdown$HTMLToken* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$frostdoc$Markdown$HTMLToken$$EQ$org$frostlang$frostc$frostdoc$Markdown$HTMLToken$R$frost$core$Bit(p0, ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) p1));

    return result;
}
__attribute__((weak)) void org$frostlang$frostc$frostdoc$Markdown$HTMLToken$cleanup$shim(org$frostlang$frostc$frostdoc$Markdown$HTMLToken* p0) {
    org$frostlang$frostc$frostdoc$Markdown$HTMLToken$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$frostdoc$Markdown$HTMLToken$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$frostdoc$Markdown$HTMLToken$$EQ$org$frostlang$frostc$frostdoc$Markdown$HTMLToken$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class_type org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$HTMLToken$cleanup$shim, org$frostlang$frostc$frostdoc$Markdown$HTMLToken$$EQ$org$frostlang$frostc$frostdoc$Markdown$HTMLToken$R$frost$core$Bit$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x48\x54\x4d\x4c\x54\x6f\x6b\x65\x6e", 48, -6324894750501686771, NULL };

void org$frostlang$frostc$frostdoc$Markdown$HTMLToken$cleanup(org$frostlang$frostc$frostdoc$Markdown$HTMLToken* param0) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// line 813
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
frost$core$String** $tmp7 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp8 = *$tmp7;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$String* $tmp9 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local0) = $tmp8;
// line 1
frost$core$String* $tmp10 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$String* $tmp11 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp12 = (frost$core$Int64) {1};
frost$core$Bit $tmp13 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp12);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block1;
block4:;
frost$core$String** $tmp15 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp16 = *$tmp15;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$String* $tmp17 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
*(&local1) = $tmp16;
// line 1
frost$core$String* $tmp18 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$core$String* $tmp19 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block1:;
// line 813
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int64$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$HTMLToken* param0, frost$core$Int64 param1, frost$core$String* param2) {

// line 813
frost$core$Int64* $tmp20 = &param0->$rawValue;
*$tmp20 = param1;
// line 813
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp21 = (frost$core$String**) (param0->$data + 0);
*$tmp21 = param2;
return;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$HTMLToken$$EQ$org$frostlang$frostc$frostdoc$Markdown$HTMLToken$R$frost$core$Bit(org$frostlang$frostc$frostdoc$Markdown$HTMLToken* param0, org$frostlang$frostc$frostdoc$Markdown$HTMLToken* param1) {

// line 813
frost$core$Int64* $tmp22 = &param0->$rawValue;
frost$core$Int64 $tmp23 = *$tmp22;
frost$core$Int64* $tmp24 = &param1->$rawValue;
frost$core$Int64 $tmp25 = *$tmp24;
int64_t $tmp26 = $tmp23.value;
int64_t $tmp27 = $tmp25.value;
bool $tmp28 = $tmp26 != $tmp27;
frost$core$Bit $tmp29 = (frost$core$Bit) {$tmp28};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block1; else goto block2;
block1:;
// line 813
frost$core$Bit $tmp31 = frost$core$Bit$init$builtin_bit(false);
return $tmp31;
block2:;
// line 813
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit(true);
return $tmp32;

}

