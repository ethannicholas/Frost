#include "org/frostlang/frostc/Position.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Comparable.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Frost.h"
#include "frost/core/String/Index.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/io/File.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Position$$EQ$org$frostlang$frostc$Position$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Position$$EQ$org$frostlang$frostc$Position$R$frost$core$Bit(((org$frostlang$frostc$Position$wrapper*) p0)->value, ((org$frostlang$frostc$Position$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int org$frostlang$frostc$Position$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$frostc$Position$get_hash$R$frost$core$Int(((org$frostlang$frostc$Position$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Position$$GT$org$frostlang$frostc$Position$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Position$$GT$org$frostlang$frostc$Position$R$frost$core$Bit(((org$frostlang$frostc$Position$wrapper*) p0)->value, ((org$frostlang$frostc$Position$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$Position$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$Position$get_asString$R$frost$core$String(((org$frostlang$frostc$Position$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$Position$asString$org$frostlang$frostc$Compiler$R$frost$core$String$shim(frost$core$Object* p0, org$frostlang$frostc$Compiler* p1) {
    frost$core$String* result = org$frostlang$frostc$Position$asString$org$frostlang$frostc$Compiler$R$frost$core$String(((org$frostlang$frostc$Position$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void org$frostlang$frostc$Position$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$Position$cleanup(((org$frostlang$frostc$Position$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Position$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Position$$EQ$org$frostlang$frostc$Position$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Position$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &org$frostlang$frostc$Position$_frost$core$Equatable, { org$frostlang$frostc$Position$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } org$frostlang$frostc$Position$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &org$frostlang$frostc$Position$_frost$collections$HashKey, { org$frostlang$frostc$Position$$GT$org$frostlang$frostc$Position$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$Position$class_type org$frostlang$frostc$Position$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Position$_frost$core$Comparable, { org$frostlang$frostc$Position$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$Position$$EQ$org$frostlang$frostc$Position$R$frost$core$Bit$shim, org$frostlang$frostc$Position$$GT$org$frostlang$frostc$Position$R$frost$core$Bit$shim, org$frostlang$frostc$Position$get_hash$R$frost$core$Int$shim, org$frostlang$frostc$Position$asString$org$frostlang$frostc$Compiler$R$frost$core$String$shim, org$frostlang$frostc$Position$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$Position$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Position$$EQ$org$frostlang$frostc$Position$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$Position$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &org$frostlang$frostc$Position$wrapper_frost$core$Equatable, { org$frostlang$frostc$Position$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } org$frostlang$frostc$Position$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &org$frostlang$frostc$Position$wrapper_frost$collections$HashKey, { org$frostlang$frostc$Position$$GT$org$frostlang$frostc$Position$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$Position$wrapperclass_type org$frostlang$frostc$Position$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Position$wrapper_frost$core$Comparable, { org$frostlang$frostc$Position$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$String* (*$fn91)(frost$core$Object*);
typedef frost$core$String* (*$fn106)(frost$core$Object*);
typedef frost$core$String* (*$fn115)(frost$core$Object*);
typedef frost$core$Int (*$fn131)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn176)(frost$core$Object*);
typedef frost$core$String* (*$fn184)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 29, 9043357439141894955, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 29, 9043357439141894955, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2e\x66\x72\x6f\x73\x74", 14, 805330372391573046, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6e\x74\x65\x72\x6e\x61\x6c\x3e\x3a", 11, 3848044038881794386, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

org$frostlang$frostc$Position org$frostlang$frostc$Position$init() {

org$frostlang$frostc$Position local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:12
frost$core$Int $tmp3 = (frost$core$Int) {18446744073709551615u};
frost$core$Int* $tmp4 = &(&local0)->file;
*$tmp4 = $tmp3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:13
frost$core$Int $tmp5 = (frost$core$Int) {1u};
frost$core$Int* $tmp6 = &(&local0)->line;
*$tmp6 = $tmp5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:14
frost$core$Int $tmp7 = (frost$core$Int) {1u};
frost$core$Int* $tmp8 = &(&local0)->column;
*$tmp8 = $tmp7;
org$frostlang$frostc$Position $tmp9 = *(&local0);
return $tmp9;

}
org$frostlang$frostc$Position org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(frost$core$Int param0, frost$core$Int param1, frost$core$Int param2) {

org$frostlang$frostc$Position local0;
frost$core$Bit local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:18
frost$core$Int $tmp10 = (frost$core$Int) {0u};
int64_t $tmp11 = param1.value;
int64_t $tmp12 = $tmp10.value;
bool $tmp13 = $tmp11 != $tmp12;
frost$core$Bit $tmp14 = (frost$core$Bit) {$tmp13};
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block1; else goto block2;
block1:;
frost$core$Int $tmp16 = (frost$core$Int) {0u};
int64_t $tmp17 = param2.value;
int64_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 != $tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
*(&local1) = $tmp20;
goto block3;
block2:;
*(&local1) = $tmp14;
goto block3;
block3:;
frost$core$Bit $tmp21 = *(&local1);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block4; else goto block5;
block5:;
frost$core$Int $tmp23 = (frost$core$Int) {18u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s24, $tmp23);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:19
frost$core$Int* $tmp25 = &(&local0)->file;
*$tmp25 = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:20
frost$core$Int* $tmp26 = &(&local0)->line;
*$tmp26 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:21
frost$core$Int* $tmp27 = &(&local0)->column;
*$tmp27 = param2;
org$frostlang$frostc$Position $tmp28 = *(&local0);
return $tmp28;

}
frost$core$Bit org$frostlang$frostc$Position$$EQ$org$frostlang$frostc$Position$R$frost$core$Bit(org$frostlang$frostc$Position param0, org$frostlang$frostc$Position param1) {

frost$core$Bit local0;
frost$core$Bit local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:26
frost$core$Int $tmp29 = param0.file;
frost$core$Int $tmp30 = param1.file;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Position.frost:26:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30.value;
bool $tmp33 = $tmp31 == $tmp32;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block2; else goto block3;
block2:;
frost$core$Int $tmp36 = param0.line;
frost$core$Int $tmp37 = param1.line;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Position.frost:26:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37.value;
bool $tmp40 = $tmp38 == $tmp39;
frost$core$Bit $tmp41 = (frost$core$Bit) {$tmp40};
*(&local1) = $tmp41;
goto block4;
block3:;
*(&local1) = $tmp34;
goto block4;
block4:;
frost$core$Bit $tmp42 = *(&local1);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block6; else goto block7;
block6:;
frost$core$Int $tmp44 = param0.column;
frost$core$Int $tmp45 = param1.column;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Position.frost:26:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp46 = $tmp44.value;
int64_t $tmp47 = $tmp45.value;
bool $tmp48 = $tmp46 == $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
*(&local0) = $tmp49;
goto block8;
block7:;
*(&local0) = $tmp42;
goto block8;
block8:;
frost$core$Bit $tmp50 = *(&local0);
return $tmp50;

}
frost$core$Bit org$frostlang$frostc$Position$$GT$org$frostlang$frostc$Position$R$frost$core$Bit(org$frostlang$frostc$Position param0, org$frostlang$frostc$Position param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:31
frost$core$Int $tmp51 = param0.line;
frost$core$Int $tmp52 = param1.line;
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 > $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:32
frost$core$Bit $tmp58 = (frost$core$Bit) {true};
return $tmp58;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:34
frost$core$Int $tmp59 = param0.line;
frost$core$Int $tmp60 = param1.line;
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60.value;
bool $tmp63 = $tmp61 < $tmp62;
frost$core$Bit $tmp64 = (frost$core$Bit) {$tmp63};
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:35
frost$core$Bit $tmp66 = (frost$core$Bit) {false};
return $tmp66;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:37
frost$core$Int $tmp67 = param0.column;
frost$core$Int $tmp68 = param1.column;
int64_t $tmp69 = $tmp67.value;
int64_t $tmp70 = $tmp68.value;
bool $tmp71 = $tmp69 > $tmp70;
frost$core$Bit $tmp72 = (frost$core$Bit) {$tmp71};
return $tmp72;

}
frost$core$Int org$frostlang$frostc$Position$get_hash$R$frost$core$Int(org$frostlang$frostc$Position param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:42
frost$core$Int $tmp73 = param0.line;
frost$core$Int $tmp74 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from Position.frost:42:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75 << $tmp76;
frost$core$Int $tmp78 = (frost$core$Int) {$tmp77};
frost$core$Int $tmp79 = param0.column;
int64_t $tmp80 = $tmp78.value;
int64_t $tmp81 = $tmp79.value;
int64_t $tmp82 = $tmp80 + $tmp81;
frost$core$Int $tmp83 = (frost$core$Int) {$tmp82};
return $tmp83;

}
frost$core$String* org$frostlang$frostc$Position$get_asString$R$frost$core$String(org$frostlang$frostc$Position param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:47
frost$core$Int $tmp84 = param0.line;
frost$core$String* $tmp85 = frost$core$Int$get_asString$R$frost$core$String($tmp84);
frost$core$String* $tmp86 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp85, &$s87);
frost$core$Int $tmp88 = param0.column;
frost$core$Int$wrapper* $tmp89;
$tmp89 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp89->value = $tmp88;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Position.frost:47:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn91 $tmp90 = ($fn91) ((frost$core$Object*) $tmp89)->$class->vtable[0];
frost$core$String* $tmp92 = $tmp90(((frost$core$Object*) $tmp89));
frost$core$String* $tmp93 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp86, $tmp92);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$String* $tmp94 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp93, &$s95);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
return $tmp94;

}
frost$core$String* org$frostlang$frostc$Position$asString$org$frostlang$frostc$Compiler$R$frost$core$String(org$frostlang$frostc$Position param0, org$frostlang$frostc$Compiler* param1) {

frost$core$String* local0 = NULL;
frost$core$String$Index$nullable local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:51
frost$core$Int $tmp96 = param0.file;
frost$core$Int $tmp97 = (frost$core$Int) {18446744073709551615u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Position.frost:51:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp98 = $tmp96.value;
int64_t $tmp99 = $tmp97.value;
bool $tmp100 = $tmp98 == $tmp99;
frost$core$Bit $tmp101 = (frost$core$Bit) {$tmp100};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:52
frost$core$Int $tmp103 = param0.line;
frost$core$Int$wrapper* $tmp104;
$tmp104 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp104->value = $tmp103;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Position.frost:52:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn106 $tmp105 = ($fn106) ((frost$core$Object*) $tmp104)->$class->vtable[0];
frost$core$String* $tmp107 = $tmp105(((frost$core$Object*) $tmp104));
frost$core$String* $tmp108 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s109, $tmp107);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$String* $tmp110 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp108, &$s111);
frost$core$Int $tmp112 = param0.column;
frost$core$Int$wrapper* $tmp113;
$tmp113 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp113->value = $tmp112;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Position.frost:52:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn115 $tmp114 = ($fn115) ((frost$core$Object*) $tmp113)->$class->vtable[0];
frost$core$String* $tmp116 = $tmp114(((frost$core$Object*) $tmp113));
frost$core$String* $tmp117 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp110, $tmp116);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$core$String* $tmp118 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp117, &$s119);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
return $tmp118;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Position.frost:54
frost$collections$Array** $tmp120 = &param1->files;
frost$collections$Array* $tmp121 = *$tmp120;
frost$core$Int $tmp122 = param0.file;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Position.frost:54:33
frost$core$Int $tmp123 = (frost$core$Int) {0u};
int64_t $tmp124 = $tmp122.value;
int64_t $tmp125 = $tmp123.value;
bool $tmp126 = $tmp124 >= $tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block9; else goto block8;
block9:;
ITable* $tmp129 = ((frost$collections$CollectionView*) $tmp121)->$class->itable;
while ($tmp129->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp129 = $tmp129->next;
}
$fn131 $tmp130 = $tmp129->methods[0];
frost$core$Int $tmp132 = $tmp130(((frost$collections$CollectionView*) $tmp121));
int64_t $tmp133 = $tmp122.value;
int64_t $tmp134 = $tmp132.value;
bool $tmp135 = $tmp133 < $tmp134;
frost$core$Bit $tmp136 = (frost$core$Bit) {$tmp135};
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block7; else goto block8;
block8:;
frost$core$Int $tmp138 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s139, $tmp138, &$s140);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp141 = &$tmp121->data;
frost$core$Object** $tmp142 = *$tmp141;
frost$core$Int64 $tmp143 = frost$core$Int64$init$frost$core$Int($tmp122);
int64_t $tmp144 = $tmp143.value;
frost$core$Object* $tmp145 = $tmp142[$tmp144];
frost$core$Frost$ref$frost$core$Object$Q($tmp145);
// begin inline call to function frost.io.File.get_name():frost.core.String from Position.frost:54:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
frost$core$String** $tmp146 = &((frost$io$File*) $tmp145)->path;
frost$core$String* $tmp147 = *$tmp146;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:148:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
frost$core$String$Index $tmp148 = frost$core$String$get_end$R$frost$core$String$Index($tmp147);
frost$core$String$Index$nullable $tmp149 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp147, &$s150, $tmp148);
*(&local1) = $tmp149;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp151 = *(&local1);
frost$core$Bit $tmp152 = (frost$core$Bit) {$tmp151.nonnull};
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block12; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:150
frost$core$String** $tmp154 = &((frost$io$File*) $tmp145)->path;
frost$core$String* $tmp155 = *$tmp154;
frost$core$String** $tmp156 = &((frost$io$File*) $tmp145)->path;
frost$core$String* $tmp157 = *$tmp156;
frost$core$String$Index$nullable $tmp158 = *(&local1);
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158.nonnull};
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block15; else goto block16;
block16:;
frost$core$Int $tmp161 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s162, $tmp161, &$s163);
abort(); // unreachable
block15:;
frost$core$String$Index $tmp164 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp157, ((frost$core$String$Index) $tmp158.value));
frost$core$Bit $tmp165 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp166 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp164, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp165);
frost$core$String* $tmp167 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp155, $tmp166);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local0) = $tmp167;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
goto block10;
block14:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:153
frost$core$String** $tmp168 = &((frost$io$File*) $tmp145)->path;
frost$core$String* $tmp169 = *$tmp168;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
*(&local0) = $tmp169;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
goto block10;
block13:;
goto block10;
block10:;
frost$core$String* $tmp170 = *(&local0);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Position.frost:54:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$String* $tmp171 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp170, &$s172);
frost$core$Int $tmp173 = param0.line;
frost$core$Int$wrapper* $tmp174;
$tmp174 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp174->value = $tmp173;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Position.frost:54:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn176 $tmp175 = ($fn176) ((frost$core$Object*) $tmp174)->$class->vtable[0];
frost$core$String* $tmp177 = $tmp175(((frost$core$Object*) $tmp174));
frost$core$String* $tmp178 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp171, $tmp177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$String* $tmp179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp178, &$s180);
frost$core$Int $tmp181 = param0.column;
frost$core$Int$wrapper* $tmp182;
$tmp182 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp182->value = $tmp181;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Position.frost:54:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn184 $tmp183 = ($fn184) ((frost$core$Object*) $tmp182)->$class->vtable[0];
frost$core$String* $tmp185 = $tmp183(((frost$core$Object*) $tmp182));
frost$core$String* $tmp186 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp179, $tmp185);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$String* $tmp187 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp186, &$s188);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$String* $tmp189 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp145);
return $tmp187;

}
void org$frostlang$frostc$Position$cleanup(org$frostlang$frostc$Position param0) {

return;

}

