#include "org/frostlanguage/json/Position.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$String* org$frostlanguage$json$Position$convert$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlanguage$json$Position$convert$R$frost$core$String(((org$frostlanguage$json$Position$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void org$frostlanguage$json$Position$cleanup$shim(frost$core$Object* p0) {
    org$frostlanguage$json$Position$cleanup(((org$frostlanguage$json$Position$wrapper*) p0)->value);

}

static frost$core$String $s1;
org$frostlanguage$json$Position$class_type org$frostlanguage$json$Position$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, NULL, { org$frostlanguage$json$Position$convert$R$frost$core$String$shim, org$frostlanguage$json$Position$cleanup$shim} };

static frost$core$String $s2;
org$frostlanguage$json$Position$wrapperclass_type org$frostlanguage$json$Position$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { org$frostlanguage$json$Position$convert$R$frost$core$String$shim, org$frostlanguage$json$Position$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 31, 3917812045442820136, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 31, 3917812045442820136, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2e\x66\x72\x6f\x73\x74", 14, -2904814051032449202, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };

org$frostlanguage$json$Position org$frostlanguage$json$Position$init() {

org$frostlanguage$json$Position local0;
// line 10
frost$core$Int64 $tmp3 = (frost$core$Int64) {1};
frost$core$Int64* $tmp4 = &(&local0)->line;
*$tmp4 = $tmp3;
// line 11
frost$core$Int64 $tmp5 = (frost$core$Int64) {1};
frost$core$Int64* $tmp6 = &(&local0)->column;
*$tmp6 = $tmp5;
org$frostlanguage$json$Position $tmp7 = *(&local0);
return $tmp7;

}
org$frostlanguage$json$Position org$frostlanguage$json$Position$init$frost$core$Int64$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

org$frostlanguage$json$Position local0;
frost$core$Bit local1;
// line 15
frost$core$Int64 $tmp8 = (frost$core$Int64) {0};
int64_t $tmp9 = param0.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 != $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block1; else goto block2;
block1:;
frost$core$Int64 $tmp14 = (frost$core$Int64) {0};
int64_t $tmp15 = param1.value;
int64_t $tmp16 = $tmp14.value;
bool $tmp17 = $tmp15 != $tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17};
*(&local1) = $tmp18;
goto block3;
block2:;
*(&local1) = $tmp12;
goto block3;
block3:;
frost$core$Bit $tmp19 = *(&local1);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp21 = (frost$core$Int64) {15};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s22, $tmp21);
abort(); // unreachable
block4:;
// line 16
frost$core$Int64* $tmp23 = &(&local0)->line;
*$tmp23 = param0;
// line 17
frost$core$Int64* $tmp24 = &(&local0)->column;
*$tmp24 = param1;
org$frostlanguage$json$Position $tmp25 = *(&local0);
return $tmp25;

}
frost$core$String* org$frostlanguage$json$Position$convert$R$frost$core$String(org$frostlanguage$json$Position param0) {

// line 22
frost$core$Int64 $tmp26 = param0.line;
frost$core$String* $tmp27 = frost$core$Int64$convert$R$frost$core$String($tmp26);
frost$core$String* $tmp28 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp27, &$s29);
frost$core$Int64 $tmp30 = param0.column;
frost$core$Int64$wrapper* $tmp31;
$tmp31 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp31->value = $tmp30;
frost$core$String* $tmp32 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp28, ((frost$core$Object*) $tmp31));
frost$core$String* $tmp33 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp32, &$s34);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// unreffing REF($6:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
// unreffing REF($5:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing REF($2:frost.core.String)
return $tmp33;

}
void org$frostlanguage$json$Position$cleanup(org$frostlanguage$json$Position param0) {

return;

}






