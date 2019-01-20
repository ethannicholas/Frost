#include "org/frostlang/frostc/expression/Unary/Operator.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$expression$Unary$Operator$$EQ$org$frostlang$frostc$expression$Unary$Operator$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$expression$Unary$Operator$$EQ$org$frostlang$frostc$expression$Unary$Operator$R$frost$core$Bit(((org$frostlang$frostc$expression$Unary$Operator$wrapper*) p0)->value, ((org$frostlang$frostc$expression$Unary$Operator$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String(((org$frostlang$frostc$expression$Unary$Operator$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$expression$Unary$Operator$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$expression$Unary$Operator$cleanup(((org$frostlang$frostc$expression$Unary$Operator$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$expression$Unary$Operator$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$expression$Unary$Operator$$EQ$org$frostlang$frostc$expression$Unary$Operator$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$expression$Unary$Operator$class_type org$frostlang$frostc$expression$Unary$Operator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$expression$Unary$Operator$_frost$core$Equatable, { org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$expression$Unary$Operator$cleanup$shim, org$frostlang$frostc$expression$Unary$Operator$$EQ$org$frostlang$frostc$expression$Unary$Operator$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$expression$Unary$Operator$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$expression$Unary$Operator$$EQ$org$frostlang$frostc$expression$Unary$Operator$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$expression$Unary$Operator$wrapperclass_type org$frostlang$frostc$expression$Unary$Operator$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$expression$Unary$Operator$wrapper_frost$core$Equatable, { org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79\x2e\x4f\x70\x65\x72\x61\x74\x6f\x72", 46, 1067844029242438359, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79\x2e\x4f\x70\x65\x72\x61\x74\x6f\x72", 46, 1067844029242438359, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x75\x6e\x61\x72\x79\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x3a\x20", 22, -8553663190719159520, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79\x2e\x4f\x70\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x6d\x54\x6f\x6b\x65\x6e\x28\x6f\x70\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79\x2e\x4f\x70\x65\x72\x61\x74\x6f\x72\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 175, -764501726616042286, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21", 1, 134, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21", 1, 134, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x21", 2, 13567, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x21", 2, 13567, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79\x2e\x4f\x70\x65\x72\x61\x74\x6f\x72\x2e\x67\x65\x74\x5f\x61\x73\x53\x74\x72\x69\x6e\x67\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 113, 1466089553418145803, NULL };

org$frostlang$frostc$expression$Unary$Operator org$frostlang$frostc$expression$Unary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Unary$Operator(org$frostlang$frostc$parser$Token param0) {

// line 24
org$frostlang$frostc$parser$Token$Kind $tmp3 = param0.kind;
frost$core$Int64 $tmp4 = $tmp3.$rawValue;
frost$core$Int64 $tmp5 = (frost$core$Int64) {56};
frost$core$Bit $tmp6 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp5);
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block2; else goto block3;
block2:;
// line 25
frost$core$Int64 $tmp8 = (frost$core$Int64) {2};
org$frostlang$frostc$expression$Unary$Operator $tmp9 = org$frostlang$frostc$expression$Unary$Operator$init$frost$core$Int64($tmp8);
return $tmp9;
block3:;
frost$core$Int64 $tmp10 = (frost$core$Int64) {53};
frost$core$Bit $tmp11 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp10);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block4; else goto block5;
block4:;
// line 26
frost$core$Int64 $tmp13 = (frost$core$Int64) {0};
org$frostlang$frostc$expression$Unary$Operator $tmp14 = org$frostlang$frostc$expression$Unary$Operator$init$frost$core$Int64($tmp13);
return $tmp14;
block5:;
frost$core$Int64 $tmp15 = (frost$core$Int64) {54};
frost$core$Bit $tmp16 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp15);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block6; else goto block7;
block6:;
// line 27
frost$core$Int64 $tmp18 = (frost$core$Int64) {1};
org$frostlang$frostc$expression$Unary$Operator $tmp19 = org$frostlang$frostc$expression$Unary$Operator$init$frost$core$Int64($tmp18);
return $tmp19;
block7:;
// line 28
frost$core$Bit $tmp20 = frost$core$Bit$init$builtin_bit(false);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp22 = (frost$core$Int64) {28};
org$frostlang$frostc$parser$Token$wrapper* $tmp23;
$tmp23 = (org$frostlang$frostc$parser$Token$wrapper*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$parser$Token$wrapperclass);
$tmp23->value = param0;
frost$core$String* $tmp24 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s25, ((frost$core$Object*) $tmp23));
frost$core$String* $tmp26 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp24, &$s27);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s28, $tmp22, $tmp26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($34:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// unreffing REF($33:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// unreffing REF($32:frost.core.Object)
abort(); // unreachable
block8:;
goto block1;
block1:;
frost$core$Bit $tmp29 = frost$core$Bit$init$builtin_bit(false);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp31 = (frost$core$Int64) {23};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s32, $tmp31, &$s33);
abort(); // unreachable
block10:;
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String(org$frostlang$frostc$expression$Unary$Operator param0) {

// line 34
frost$core$Int64 $tmp34 = param0.$rawValue;
frost$core$Int64 $tmp35 = (frost$core$Int64) {0};
frost$core$Bit $tmp36 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp34, $tmp35);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block2; else goto block3;
block2:;
// line 35
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s38));
return &$s39;
block3:;
frost$core$Int64 $tmp40 = (frost$core$Int64) {1};
frost$core$Bit $tmp41 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp34, $tmp40);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block4; else goto block5;
block4:;
// line 36
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s43));
return &$s44;
block5:;
frost$core$Int64 $tmp45 = (frost$core$Int64) {2};
frost$core$Bit $tmp46 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp34, $tmp45);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block6; else goto block7;
block6:;
// line 37
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s48));
return &$s49;
block7:;
// line 38
frost$core$Bit $tmp50 = frost$core$Bit$init$builtin_bit(false);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp52 = (frost$core$Int64) {38};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s53, $tmp52);
abort(); // unreachable
block8:;
goto block1;
block1:;
frost$core$Bit $tmp54 = frost$core$Bit$init$builtin_bit(false);
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp56 = (frost$core$Int64) {33};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s57, $tmp56, &$s58);
abort(); // unreachable
block10:;
abort(); // unreachable

}
void org$frostlang$frostc$expression$Unary$Operator$cleanup(org$frostlang$frostc$expression$Unary$Operator param0) {

// line 17
frost$core$Int64 $tmp59 = param0.$rawValue;
frost$core$Int64 $tmp60 = (frost$core$Int64) {0};
frost$core$Bit $tmp61 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp59, $tmp60);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block2; else goto block3;
block2:;
goto block1;
block3:;
frost$core$Int64 $tmp63 = (frost$core$Int64) {1};
frost$core$Bit $tmp64 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp59, $tmp63);
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block4; else goto block5;
block4:;
goto block1;
block5:;
frost$core$Int64 $tmp66 = (frost$core$Int64) {2};
frost$core$Bit $tmp67 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp59, $tmp66);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block6; else goto block1;
block6:;
goto block1;
block1:;
return;

}
org$frostlang$frostc$expression$Unary$Operator org$frostlang$frostc$expression$Unary$Operator$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$frostc$expression$Unary$Operator local0;
// line 17
frost$core$Int64* $tmp69 = &(&local0)->$rawValue;
*$tmp69 = param0;
org$frostlang$frostc$expression$Unary$Operator $tmp70 = *(&local0);
return $tmp70;

}
frost$core$Bit org$frostlang$frostc$expression$Unary$Operator$$EQ$org$frostlang$frostc$expression$Unary$Operator$R$frost$core$Bit(org$frostlang$frostc$expression$Unary$Operator param0, org$frostlang$frostc$expression$Unary$Operator param1) {

// line 17
frost$core$Int64 $tmp71 = param0.$rawValue;
frost$core$Int64 $tmp72 = param1.$rawValue;
int64_t $tmp73 = $tmp71.value;
int64_t $tmp74 = $tmp72.value;
bool $tmp75 = $tmp73 != $tmp74;
frost$core$Bit $tmp76 = (frost$core$Bit) {$tmp75};
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block1; else goto block2;
block1:;
// line 17
frost$core$Bit $tmp78 = frost$core$Bit$init$builtin_bit(false);
return $tmp78;
block2:;
// line 17
frost$core$Bit $tmp79 = frost$core$Bit$init$builtin_bit(true);
return $tmp79;

}






