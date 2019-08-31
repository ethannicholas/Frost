#include "org/frostlang/frostc/pass/Analyzer/BlockExit.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Int org$frostlang$frostc$pass$Analyzer$BlockExit$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$frostc$pass$Analyzer$BlockExit$get_hash$R$frost$core$Int(((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit org$frostlang$frostc$pass$Analyzer$BlockExit$$EQ$org$frostlang$frostc$pass$Analyzer$BlockExit$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$pass$Analyzer$BlockExit$$EQ$org$frostlang$frostc$pass$Analyzer$BlockExit$R$frost$core$Bit(((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) p0)->value, ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$pass$Analyzer$BlockExit$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$pass$Analyzer$BlockExit$get_asString$R$frost$core$String(((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$pass$Analyzer$BlockExit$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$pass$Analyzer$BlockExit$cleanup(((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$pass$Analyzer$BlockExit$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { org$frostlang$frostc$pass$Analyzer$BlockExit$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$pass$Analyzer$BlockExit$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$pass$Analyzer$BlockExit$_frost$collections$HashKey, { org$frostlang$frostc$pass$Analyzer$BlockExit$$EQ$org$frostlang$frostc$pass$Analyzer$BlockExit$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$pass$Analyzer$BlockExit$class_type org$frostlang$frostc$pass$Analyzer$BlockExit$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$pass$Analyzer$BlockExit$_frost$core$Equatable, { org$frostlang$frostc$pass$Analyzer$BlockExit$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$pass$Analyzer$BlockExit$$EQ$org$frostlang$frostc$pass$Analyzer$BlockExit$R$frost$core$Bit$shim, org$frostlang$frostc$pass$Analyzer$BlockExit$get_hash$R$frost$core$Int$shim, org$frostlang$frostc$pass$Analyzer$BlockExit$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { org$frostlang$frostc$pass$Analyzer$BlockExit$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper_frost$collections$HashKey, { org$frostlang$frostc$pass$Analyzer$BlockExit$$EQ$org$frostlang$frostc$pass$Analyzer$BlockExit$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$pass$Analyzer$BlockExit$wrapperclass_type org$frostlang$frostc$pass$Analyzer$BlockExit$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper_frost$core$Equatable, { org$frostlang$frostc$pass$Analyzer$BlockExit$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$String* (*$fn25)(frost$core$Object*);
typedef frost$core$String* (*$fn34)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x42\x6c\x6f\x63\x6b\x45\x78\x69\x74", 44, -749128004734210960, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x42\x6c\x6f\x63\x6b\x45\x78\x69\x74", 44, -749128004734210960, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x6c\x6f\x63\x6b\x45\x78\x69\x74\x3c", 10, 3106445861934095538, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };

org$frostlang$frostc$pass$Analyzer$BlockExit org$frostlang$frostc$pass$Analyzer$BlockExit$init$org$frostlang$frostc$IR$Block$ID$frost$core$Int(org$frostlang$frostc$IR$Block$ID param0, frost$core$Int param1) {

org$frostlang$frostc$pass$Analyzer$BlockExit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:197
org$frostlang$frostc$IR$Block$ID* $tmp3 = &(&local0)->id;
*$tmp3 = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:198
frost$core$Int* $tmp4 = &(&local0)->exit;
*$tmp4 = param1;
org$frostlang$frostc$pass$Analyzer$BlockExit $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Bit org$frostlang$frostc$pass$Analyzer$BlockExit$$EQ$org$frostlang$frostc$pass$Analyzer$BlockExit$R$frost$core$Bit(org$frostlang$frostc$pass$Analyzer$BlockExit param0, org$frostlang$frostc$pass$Analyzer$BlockExit param1) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:203
org$frostlang$frostc$IR$Block$ID $tmp6 = param0.id;
org$frostlang$frostc$IR$Block$ID $tmp7 = param1.id;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:203:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp8 = $tmp6.value;
frost$core$Int $tmp9 = $tmp7.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp10 = $tmp8.value;
int64_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 == $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block3; else goto block4;
block3:;
frost$core$Int $tmp15 = param0.exit;
frost$core$Int $tmp16 = param1.exit;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:203:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp17 = $tmp15.value;
int64_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 == $tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
*(&local0) = $tmp20;
goto block5;
block4:;
*(&local0) = $tmp13;
goto block5;
block5:;
frost$core$Bit $tmp21 = *(&local0);
return $tmp21;

}
frost$core$String* org$frostlang$frostc$pass$Analyzer$BlockExit$get_asString$R$frost$core$String(org$frostlang$frostc$pass$Analyzer$BlockExit param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:208
org$frostlang$frostc$IR$Block$ID $tmp22 = param0.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp23;
$tmp23 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp23->value = $tmp22;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:208:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn25 $tmp24 = ($fn25) ((frost$core$Object*) $tmp23)->$class->vtable[0];
frost$core$String* $tmp26 = $tmp24(((frost$core$Object*) $tmp23));
frost$core$String* $tmp27 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s28, $tmp26);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$String* $tmp29 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp27, &$s30);
frost$core$Int $tmp31 = param0.exit;
frost$core$Int$wrapper* $tmp32;
$tmp32 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp32->value = $tmp31;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:208:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn34 $tmp33 = ($fn34) ((frost$core$Object*) $tmp32)->$class->vtable[0];
frost$core$String* $tmp35 = $tmp33(((frost$core$Object*) $tmp32));
frost$core$String* $tmp36 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp29, $tmp35);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$String* $tmp37 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp36, &$s38);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
return $tmp37;

}
frost$core$Int org$frostlang$frostc$pass$Analyzer$BlockExit$get_hash$R$frost$core$Int(org$frostlang$frostc$pass$Analyzer$BlockExit param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:213
org$frostlang$frostc$IR$Block$ID $tmp39 = param0.id;
frost$core$Int $tmp40 = $tmp39.value;
frost$core$Int $tmp41 = param0.exit;
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Analyzer.frost:213:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41.value;
int64_t $tmp44 = $tmp42 ^ $tmp43;
frost$core$Int $tmp45 = (frost$core$Int) {$tmp44};
return $tmp45;

}
void org$frostlang$frostc$pass$Analyzer$BlockExit$cleanup(org$frostlang$frostc$pass$Analyzer$BlockExit param0) {

return;

}

