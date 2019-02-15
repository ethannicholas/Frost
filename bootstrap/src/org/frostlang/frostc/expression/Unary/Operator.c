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
org$frostlang$frostc$expression$Unary$Operator$class_type org$frostlang$frostc$expression$Unary$Operator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$expression$Unary$Operator$_frost$core$Equatable, { org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$expression$Unary$Operator$cleanup$shim, org$frostlang$frostc$expression$Unary$Operator$$EQ$org$frostlang$frostc$expression$Unary$Operator$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$expression$Unary$Operator$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$expression$Unary$Operator$$EQ$org$frostlang$frostc$expression$Unary$Operator$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$expression$Unary$Operator$wrapperclass_type org$frostlang$frostc$expression$Unary$Operator$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$expression$Unary$Operator$wrapper_frost$core$Equatable, { org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$String* (*$fn38)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79\x2e\x4f\x70\x65\x72\x61\x74\x6f\x72", 46, 1008608909626454407, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79\x2e\x4f\x70\x65\x72\x61\x74\x6f\x72", 46, 1008608909626454407, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x75\x6e\x61\x72\x79\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x3a\x20", 22, 2109876756095818792, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21", 1, -5808627241898115124, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21", 1, -5808627241898115124, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x21", 2, 559153372864470967, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x21", 2, 559153372864470967, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, -2122636747489765608, NULL };

org$frostlang$frostc$expression$Unary$Operator org$frostlang$frostc$expression$Unary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Unary$Operator(org$frostlang$frostc$parser$Token param0) {

org$frostlang$frostc$expression$Unary$Operator local0;
org$frostlang$frostc$expression$Unary$Operator local1;
org$frostlang$frostc$expression$Unary$Operator local2;
org$frostlang$frostc$expression$Unary$Operator local3;
org$frostlang$frostc$expression$Unary$Operator local4;
org$frostlang$frostc$expression$Unary$Operator local5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:24
org$frostlang$frostc$parser$Token$Kind $tmp3 = param0.kind;
frost$core$Int64 $tmp4 = $tmp3.$rawValue;
frost$core$Int64 $tmp5 = (frost$core$Int64) {57u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Unary.frost:25:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp6 = $tmp4.value;
int64_t $tmp7 = $tmp5.value;
bool $tmp8 = $tmp6 == $tmp7;
frost$core$Bit $tmp9 = (frost$core$Bit) {$tmp8};
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:25
frost$core$Int64 $tmp11 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.expression.Unary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Unary.Operator from Unary.frost:25:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:17
frost$core$Int64* $tmp12 = &(&local1)->$rawValue;
*$tmp12 = $tmp11;
org$frostlang$frostc$expression$Unary$Operator $tmp13 = *(&local1);
*(&local0) = $tmp13;
org$frostlang$frostc$expression$Unary$Operator $tmp14 = *(&local0);
return $tmp14;
block3:;
frost$core$Int64 $tmp15 = (frost$core$Int64) {54u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Unary.frost:26:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp16 = $tmp4.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 == $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:26
frost$core$Int64 $tmp21 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.expression.Unary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Unary.Operator from Unary.frost:26:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:17
frost$core$Int64* $tmp22 = &(&local3)->$rawValue;
*$tmp22 = $tmp21;
org$frostlang$frostc$expression$Unary$Operator $tmp23 = *(&local3);
*(&local2) = $tmp23;
org$frostlang$frostc$expression$Unary$Operator $tmp24 = *(&local2);
return $tmp24;
block7:;
frost$core$Int64 $tmp25 = (frost$core$Int64) {55u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Unary.frost:27:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp26 = $tmp4.value;
int64_t $tmp27 = $tmp25.value;
bool $tmp28 = $tmp26 == $tmp27;
frost$core$Bit $tmp29 = (frost$core$Bit) {$tmp28};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:27
frost$core$Int64 $tmp31 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.expression.Unary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Unary.Operator from Unary.frost:27:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:17
frost$core$Int64* $tmp32 = &(&local5)->$rawValue;
*$tmp32 = $tmp31;
org$frostlang$frostc$expression$Unary$Operator $tmp33 = *(&local5);
*(&local4) = $tmp33;
org$frostlang$frostc$expression$Unary$Operator $tmp34 = *(&local4);
return $tmp34;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:28
frost$core$Int64 $tmp35 = (frost$core$Int64) {28u};
org$frostlang$frostc$parser$Token$wrapper* $tmp36;
$tmp36 = (org$frostlang$frostc$parser$Token$wrapper*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$parser$Token$wrapperclass);
$tmp36->value = param0;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Unary.frost:28:60
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn38 $tmp37 = ($fn38) ((frost$core$Object*) $tmp36)->$class->vtable[0];
frost$core$String* $tmp39 = $tmp37(((frost$core$Object*) $tmp36));
frost$core$String* $tmp40 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s41, $tmp39);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$String* $tmp42 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp40, &$s43);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s44, $tmp35, $tmp42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
abort(); // unreachable
block1:;
goto block15;
block15:;

}
frost$core$String* org$frostlang$frostc$expression$Unary$Operator$get_asString$R$frost$core$String(org$frostlang$frostc$expression$Unary$Operator param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:34
frost$core$Int64 $tmp45 = param0.$rawValue;
frost$core$Int64 $tmp46 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Unary.frost:35:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp47 = $tmp45.value;
int64_t $tmp48 = $tmp46.value;
bool $tmp49 = $tmp47 == $tmp48;
frost$core$Bit $tmp50 = (frost$core$Bit) {$tmp49};
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:35
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s52));
return &$s53;
block3:;
frost$core$Int64 $tmp54 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Unary.frost:36:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp55 = $tmp45.value;
int64_t $tmp56 = $tmp54.value;
bool $tmp57 = $tmp55 == $tmp56;
frost$core$Bit $tmp58 = (frost$core$Bit) {$tmp57};
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:36
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s60));
return &$s61;
block6:;
frost$core$Int64 $tmp62 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Unary.frost:37:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp63 = $tmp45.value;
int64_t $tmp64 = $tmp62.value;
bool $tmp65 = $tmp63 == $tmp64;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65};
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:37
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s68));
return &$s69;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:38
frost$core$Int64 $tmp70 = (frost$core$Int64) {38u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s71, $tmp70);
abort(); // unreachable
block1:;
goto block11;
block11:;

}
void org$frostlang$frostc$expression$Unary$Operator$cleanup(org$frostlang$frostc$expression$Unary$Operator param0) {

return;

}
org$frostlang$frostc$expression$Unary$Operator org$frostlang$frostc$expression$Unary$Operator$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$frostc$expression$Unary$Operator local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:17
frost$core$Int64* $tmp72 = &(&local0)->$rawValue;
*$tmp72 = param0;
org$frostlang$frostc$expression$Unary$Operator $tmp73 = *(&local0);
return $tmp73;

}
frost$core$Bit org$frostlang$frostc$expression$Unary$Operator$$EQ$org$frostlang$frostc$expression$Unary$Operator$R$frost$core$Bit(org$frostlang$frostc$expression$Unary$Operator param0, org$frostlang$frostc$expression$Unary$Operator param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:17
frost$core$Int64 $tmp74 = param0.$rawValue;
frost$core$Int64 $tmp75 = param1.$rawValue;
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75.value;
bool $tmp78 = $tmp76 != $tmp77;
frost$core$Bit $tmp79 = (frost$core$Bit) {$tmp78};
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:17
frost$core$Bit $tmp81 = (frost$core$Bit) {false};
return $tmp81;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:17
frost$core$Bit $tmp82 = (frost$core$Bit) {true};
return $tmp82;

}






