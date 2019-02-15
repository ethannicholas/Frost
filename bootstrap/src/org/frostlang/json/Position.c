#include "org/frostlang/json/Position.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$String* org$frostlang$json$Position$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$json$Position$get_asString$R$frost$core$String(((org$frostlang$json$Position$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void org$frostlang$json$Position$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$json$Position$cleanup(((org$frostlang$json$Position$wrapper*) p0)->value);

}

static frost$core$String $s1;
org$frostlang$json$Position$class_type org$frostlang$json$Position$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, NULL, { org$frostlang$json$Position$get_asString$R$frost$core$String$shim, org$frostlang$json$Position$cleanup$shim} };

static frost$core$String $s2;
org$frostlang$json$Position$wrapperclass_type org$frostlang$json$Position$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { org$frostlang$json$Position$get_asString$R$frost$core$String$shim, org$frostlang$json$Position$cleanup$shim} };typedef frost$core$String* (*$fn33)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 27, 7520947739033505064, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 27, 7520947739033505064, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2e\x66\x72\x6f\x73\x74", 14, 805330372391573046, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

org$frostlang$json$Position org$frostlang$json$Position$init() {

org$frostlang$json$Position local0;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Position.frost:10
frost$core$Int64 $tmp3 = (frost$core$Int64) {1u};
frost$core$Int64* $tmp4 = &(&local0)->line;
*$tmp4 = $tmp3;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Position.frost:11
frost$core$Int64 $tmp5 = (frost$core$Int64) {1u};
frost$core$Int64* $tmp6 = &(&local0)->column;
*$tmp6 = $tmp5;
org$frostlang$json$Position $tmp7 = *(&local0);
return $tmp7;

}
org$frostlang$json$Position org$frostlang$json$Position$init$frost$core$Int64$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

org$frostlang$json$Position local0;
frost$core$Bit local1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Position.frost:15
frost$core$Int64 $tmp8 = (frost$core$Int64) {0u};
int64_t $tmp9 = param0.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 != $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block1; else goto block2;
block1:;
frost$core$Int64 $tmp14 = (frost$core$Int64) {0u};
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
frost$core$Int64 $tmp21 = (frost$core$Int64) {15u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s22, $tmp21);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Position.frost:16
frost$core$Int64* $tmp23 = &(&local0)->line;
*$tmp23 = param0;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Position.frost:17
frost$core$Int64* $tmp24 = &(&local0)->column;
*$tmp24 = param1;
org$frostlang$json$Position $tmp25 = *(&local0);
return $tmp25;

}
frost$core$String* org$frostlang$json$Position$get_asString$R$frost$core$String(org$frostlang$json$Position param0) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Position.frost:22
frost$core$Int64 $tmp26 = param0.line;
frost$core$String* $tmp27 = frost$core$Int64$get_asString$R$frost$core$String($tmp26);
frost$core$String* $tmp28 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp27, &$s29);
frost$core$Int64 $tmp30 = param0.column;
frost$core$Int64$wrapper* $tmp31;
$tmp31 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp31->value = $tmp30;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Position.frost:22:19
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn33 $tmp32 = ($fn33) ((frost$core$Object*) $tmp31)->$class->vtable[0];
frost$core$String* $tmp34 = $tmp32(((frost$core$Object*) $tmp31));
frost$core$String* $tmp35 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp28, $tmp34);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$String* $tmp36 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp35, &$s37);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
return $tmp36;

}
void org$frostlang$json$Position$cleanup(org$frostlang$json$Position param0) {

return;

}






