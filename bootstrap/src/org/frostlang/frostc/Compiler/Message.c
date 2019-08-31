#include "org/frostlang/frostc/Compiler/Message.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Int org$frostlang$frostc$Compiler$Message$get_hash$R$frost$core$Int$shim(org$frostlang$frostc$Compiler$Message* p0) {
    frost$core$Int result = org$frostlang$frostc$Compiler$Message$get_hash$R$frost$core$Int(p0);

    return result;
}
__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Compiler$Message$$EQ$org$frostlang$frostc$Compiler$Message$R$frost$core$Bit$shim(org$frostlang$frostc$Compiler$Message* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Compiler$Message$$EQ$org$frostlang$frostc$Compiler$Message$R$frost$core$Bit(p0, ((org$frostlang$frostc$Compiler$Message*) p1));

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$Compiler$Message$get_asString$R$frost$core$String$shim(org$frostlang$frostc$Compiler$Message* p0) {
    frost$core$String* result = org$frostlang$frostc$Compiler$Message$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void org$frostlang$frostc$Compiler$Message$cleanup$shim(org$frostlang$frostc$Compiler$Message* p0) {
    org$frostlang$frostc$Compiler$Message$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Compiler$Message$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { org$frostlang$frostc$Compiler$Message$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Compiler$Message$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$Compiler$Message$_frost$collections$HashKey, { org$frostlang$frostc$Compiler$Message$$EQ$org$frostlang$frostc$Compiler$Message$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$Compiler$Message$class_type org$frostlang$frostc$Compiler$Message$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &org$frostlang$frostc$Compiler$Message$_frost$core$Equatable, { org$frostlang$frostc$Compiler$Message$get_asString$R$frost$core$String$shim, org$frostlang$frostc$Compiler$Message$cleanup$shim, org$frostlang$frostc$Compiler$Message$$EQ$org$frostlang$frostc$Compiler$Message$R$frost$core$Bit$shim, org$frostlang$frostc$Compiler$Message$get_hash$R$frost$core$Int$shim} };

typedef frost$core$Int (*$fn82)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn92)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn102)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn111)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn139)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn149)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn159)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn168)(frost$collections$HashKey*);
typedef frost$core$String* (*$fn204)(frost$core$Object*);
typedef frost$core$String* (*$fn212)(frost$core$Object*);
typedef frost$core$String* (*$fn247)(frost$core$Object*);
typedef frost$core$String* (*$fn255)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x4d\x65\x73\x73\x61\x67\x65", 37, 1320719138988270736, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x52\x52\x4f\x52\x28", 6, 306458978544878811, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x41\x52\x4e\x49\x4e\x47\x28", 8, 1928923551051819493, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

void org$frostlang$frostc$Compiler$Message$cleanup(org$frostlang$frostc$Compiler$Message* param0) {

frost$core$String* local0 = NULL;
frost$core$Int local1;
frost$core$Int local2;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
frost$core$Int local5;
frost$core$Int local6;
frost$core$String* local7 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
frost$core$Int* $tmp2 = &param0->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
frost$core$String** $tmp10 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp11 = *$tmp10;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$String* $tmp12 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local0) = $tmp11;
frost$core$Int* $tmp13 = (frost$core$Int*) (param0->$data + 8);
frost$core$Int $tmp14 = *$tmp13;
*(&local1) = $tmp14;
frost$core$Int* $tmp15 = (frost$core$Int*) (param0->$data + 16);
frost$core$Int $tmp16 = *$tmp15;
*(&local2) = $tmp16;
frost$core$String** $tmp17 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp18 = *$tmp17;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$core$String* $tmp19 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
*(&local3) = $tmp18;
// <no location>
frost$core$String* $tmp20 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// <no location>
frost$core$String* $tmp21 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$String* $tmp22 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp23 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int $tmp24 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp25 = $tmp3.value;
int64_t $tmp26 = $tmp24.value;
bool $tmp27 = $tmp25 == $tmp26;
frost$core$Bit $tmp28 = (frost$core$Bit) {$tmp27};
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block5; else goto block1;
block5:;
frost$core$String** $tmp30 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp31 = *$tmp30;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$core$String* $tmp32 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local4) = $tmp31;
frost$core$Int* $tmp33 = (frost$core$Int*) (param0->$data + 8);
frost$core$Int $tmp34 = *$tmp33;
*(&local5) = $tmp34;
frost$core$Int* $tmp35 = (frost$core$Int*) (param0->$data + 16);
frost$core$Int $tmp36 = *$tmp35;
*(&local6) = $tmp36;
frost$core$String** $tmp37 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp38 = *$tmp37;
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$String* $tmp39 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
*(&local7) = $tmp38;
// <no location>
frost$core$String* $tmp40 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// <no location>
frost$core$String* $tmp41 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$String* $tmp42 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp43 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
return;

}
void org$frostlang$frostc$Compiler$Message$init$frost$core$Int$frost$core$String$frost$core$Int$frost$core$Int$frost$core$String(org$frostlang$frostc$Compiler$Message* param0, frost$core$Int param1, frost$core$String* param2, frost$core$Int param3, frost$core$Int param4, frost$core$String* param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
frost$core$Int* $tmp44 = &param0->$rawValue;
*$tmp44 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp45 = (frost$core$String**) (param0->$data + 0);
*$tmp45 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
frost$core$Int* $tmp46 = (frost$core$Int*) (param0->$data + 8);
*$tmp46 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
frost$core$Int* $tmp47 = (frost$core$Int*) (param0->$data + 16);
*$tmp47 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
frost$core$String** $tmp48 = (frost$core$String**) (param0->$data + 24);
*$tmp48 = param5;
return;

}
frost$core$Bit org$frostlang$frostc$Compiler$Message$$EQ$org$frostlang$frostc$Compiler$Message$R$frost$core$Bit(org$frostlang$frostc$Compiler$Message* param0, org$frostlang$frostc$Compiler$Message* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
frost$core$Int* $tmp49 = &param0->$rawValue;
frost$core$Int $tmp50 = *$tmp49;
frost$core$Int* $tmp51 = &param1->$rawValue;
frost$core$Int $tmp52 = *$tmp51;
int64_t $tmp53 = $tmp50.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 != $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
frost$core$Bit $tmp58 = (frost$core$Bit) {false};
return $tmp58;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
frost$core$Bit $tmp59 = (frost$core$Bit) {true};
return $tmp59;

}
frost$core$Int org$frostlang$frostc$Compiler$Message$get_hash$R$frost$core$Int(org$frostlang$frostc$Compiler$Message* param0) {

frost$core$String* local0 = NULL;
frost$core$Int local1;
frost$core$Int local2;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
frost$core$Int local5;
frost$core$Int local6;
frost$core$String* local7 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
frost$core$Int* $tmp60 = &param0->$rawValue;
frost$core$Int $tmp61 = *$tmp60;
frost$core$Int $tmp62 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp63 = $tmp61.value;
int64_t $tmp64 = $tmp62.value;
bool $tmp65 = $tmp63 == $tmp64;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65};
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block2; else goto block3;
block2:;
frost$core$String** $tmp68 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp69 = *$tmp68;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$String* $tmp70 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local0) = $tmp69;
frost$core$Int* $tmp71 = (frost$core$Int*) (param0->$data + 8);
frost$core$Int $tmp72 = *$tmp71;
*(&local1) = $tmp72;
frost$core$Int* $tmp73 = (frost$core$Int*) (param0->$data + 16);
frost$core$Int $tmp74 = *$tmp73;
*(&local2) = $tmp74;
frost$core$String** $tmp75 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp76 = *$tmp75;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$String* $tmp77 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local3) = $tmp76;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
frost$core$Int $tmp78 = (frost$core$Int) {1320719138988270736u};
frost$core$String* $tmp79 = *(&local0);
ITable* $tmp80 = ((frost$collections$HashKey*) $tmp79)->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp80 = $tmp80->next;
}
$fn82 $tmp81 = $tmp80->methods[0];
frost$core$Int $tmp83 = $tmp81(((frost$collections$HashKey*) $tmp79));
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp84 = $tmp78.value;
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84 ^ $tmp85;
frost$core$Int $tmp87 = (frost$core$Int) {$tmp86};
frost$core$Int $tmp88 = *(&local1);
frost$core$Int$wrapper* $tmp89;
$tmp89 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp89->value = $tmp88;
ITable* $tmp90 = ((frost$collections$HashKey*) $tmp89)->$class->itable;
while ($tmp90->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp90 = $tmp90->next;
}
$fn92 $tmp91 = $tmp90->methods[0];
frost$core$Int $tmp93 = $tmp91(((frost$collections$HashKey*) $tmp89));
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp94 = $tmp87.value;
int64_t $tmp95 = $tmp93.value;
int64_t $tmp96 = $tmp94 ^ $tmp95;
frost$core$Int $tmp97 = (frost$core$Int) {$tmp96};
frost$core$Int $tmp98 = *(&local2);
frost$core$Int$wrapper* $tmp99;
$tmp99 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp99->value = $tmp98;
ITable* $tmp100 = ((frost$collections$HashKey*) $tmp99)->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[0];
frost$core$Int $tmp103 = $tmp101(((frost$collections$HashKey*) $tmp99));
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp104 = $tmp97.value;
int64_t $tmp105 = $tmp103.value;
int64_t $tmp106 = $tmp104 ^ $tmp105;
frost$core$Int $tmp107 = (frost$core$Int) {$tmp106};
frost$core$String* $tmp108 = *(&local3);
ITable* $tmp109 = ((frost$collections$HashKey*) $tmp108)->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp109 = $tmp109->next;
}
$fn111 $tmp110 = $tmp109->methods[0];
frost$core$Int $tmp112 = $tmp110(((frost$collections$HashKey*) $tmp108));
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp113 = $tmp107.value;
int64_t $tmp114 = $tmp112.value;
int64_t $tmp115 = $tmp113 ^ $tmp114;
frost$core$Int $tmp116 = (frost$core$Int) {$tmp115};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp99)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp89)));
frost$core$String* $tmp117 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp118 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local0) = ((frost$core$String*) NULL);
return $tmp116;
block3:;
frost$core$Int $tmp119 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp120 = $tmp61.value;
int64_t $tmp121 = $tmp119.value;
bool $tmp122 = $tmp120 == $tmp121;
frost$core$Bit $tmp123 = (frost$core$Bit) {$tmp122};
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block9; else goto block10;
block9:;
frost$core$String** $tmp125 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp126 = *$tmp125;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$String* $tmp127 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
*(&local4) = $tmp126;
frost$core$Int* $tmp128 = (frost$core$Int*) (param0->$data + 8);
frost$core$Int $tmp129 = *$tmp128;
*(&local5) = $tmp129;
frost$core$Int* $tmp130 = (frost$core$Int*) (param0->$data + 16);
frost$core$Int $tmp131 = *$tmp130;
*(&local6) = $tmp131;
frost$core$String** $tmp132 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp133 = *$tmp132;
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$String* $tmp134 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local7) = $tmp133;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
frost$core$Int $tmp135 = (frost$core$Int) {2641438277976541472u};
frost$core$String* $tmp136 = *(&local4);
ITable* $tmp137 = ((frost$collections$HashKey*) $tmp136)->$class->itable;
while ($tmp137->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp137 = $tmp137->next;
}
$fn139 $tmp138 = $tmp137->methods[0];
frost$core$Int $tmp140 = $tmp138(((frost$collections$HashKey*) $tmp136));
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp141 = $tmp135.value;
int64_t $tmp142 = $tmp140.value;
int64_t $tmp143 = $tmp141 ^ $tmp142;
frost$core$Int $tmp144 = (frost$core$Int) {$tmp143};
frost$core$Int $tmp145 = *(&local5);
frost$core$Int$wrapper* $tmp146;
$tmp146 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp146->value = $tmp145;
ITable* $tmp147 = ((frost$collections$HashKey*) $tmp146)->$class->itable;
while ($tmp147->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp147 = $tmp147->next;
}
$fn149 $tmp148 = $tmp147->methods[0];
frost$core$Int $tmp150 = $tmp148(((frost$collections$HashKey*) $tmp146));
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp151 = $tmp144.value;
int64_t $tmp152 = $tmp150.value;
int64_t $tmp153 = $tmp151 ^ $tmp152;
frost$core$Int $tmp154 = (frost$core$Int) {$tmp153};
frost$core$Int $tmp155 = *(&local6);
frost$core$Int$wrapper* $tmp156;
$tmp156 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp156->value = $tmp155;
ITable* $tmp157 = ((frost$collections$HashKey*) $tmp156)->$class->itable;
while ($tmp157->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp157 = $tmp157->next;
}
$fn159 $tmp158 = $tmp157->methods[0];
frost$core$Int $tmp160 = $tmp158(((frost$collections$HashKey*) $tmp156));
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp161 = $tmp154.value;
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161 ^ $tmp162;
frost$core$Int $tmp164 = (frost$core$Int) {$tmp163};
frost$core$String* $tmp165 = *(&local7);
ITable* $tmp166 = ((frost$collections$HashKey*) $tmp165)->$class->itable;
while ($tmp166->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[0];
frost$core$Int $tmp169 = $tmp167(((frost$collections$HashKey*) $tmp165));
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp170 = $tmp164.value;
int64_t $tmp171 = $tmp169.value;
int64_t $tmp172 = $tmp170 ^ $tmp171;
frost$core$Int $tmp173 = (frost$core$Int) {$tmp172};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp156)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp146)));
frost$core$String* $tmp174 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp175 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
*(&local4) = ((frost$core$String*) NULL);
return $tmp173;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
frost$core$Int $tmp176 = (frost$core$Int) {51u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s177, $tmp176);
abort(); // unreachable
block1:;
goto block16;
block16:;

}
frost$core$String* org$frostlang$frostc$Compiler$Message$get_asString$R$frost$core$String(org$frostlang$frostc$Compiler$Message* param0) {

frost$core$String* local0 = NULL;
frost$core$Int local1;
frost$core$Int local2;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
frost$core$Int local5;
frost$core$Int local6;
frost$core$String* local7 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
frost$core$Int* $tmp178 = &param0->$rawValue;
frost$core$Int $tmp179 = *$tmp178;
frost$core$Int $tmp180 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp181 = $tmp179.value;
int64_t $tmp182 = $tmp180.value;
bool $tmp183 = $tmp181 == $tmp182;
frost$core$Bit $tmp184 = (frost$core$Bit) {$tmp183};
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block2; else goto block3;
block2:;
frost$core$String** $tmp186 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp187 = *$tmp186;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$String* $tmp188 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local0) = $tmp187;
frost$core$Int* $tmp189 = (frost$core$Int*) (param0->$data + 8);
frost$core$Int $tmp190 = *$tmp189;
*(&local1) = $tmp190;
frost$core$Int* $tmp191 = (frost$core$Int*) (param0->$data + 16);
frost$core$Int $tmp192 = *$tmp191;
*(&local2) = $tmp192;
frost$core$String** $tmp193 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp194 = *$tmp193;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$String* $tmp195 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local3) = $tmp194;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
frost$core$String* $tmp196 = *(&local0);
frost$core$String* $tmp197 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s198, $tmp196);
frost$core$String* $tmp199 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp197, &$s200);
frost$core$Int $tmp201 = *(&local1);
frost$core$Int$wrapper* $tmp202;
$tmp202 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp202->value = $tmp201;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn204 $tmp203 = ($fn204) ((frost$core$Object*) $tmp202)->$class->vtable[0];
frost$core$String* $tmp205 = $tmp203(((frost$core$Object*) $tmp202));
frost$core$String* $tmp206 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp199, $tmp205);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$core$String* $tmp207 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp206, &$s208);
frost$core$Int $tmp209 = *(&local2);
frost$core$Int$wrapper* $tmp210;
$tmp210 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp210->value = $tmp209;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn212 $tmp211 = ($fn212) ((frost$core$Object*) $tmp210)->$class->vtable[0];
frost$core$String* $tmp213 = $tmp211(((frost$core$Object*) $tmp210));
frost$core$String* $tmp214 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp207, $tmp213);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$String* $tmp215 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp214, &$s216);
frost$core$String* $tmp217 = *(&local3);
frost$core$String* $tmp218 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp215, $tmp217);
frost$core$String* $tmp219 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp218, &$s220);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$core$String* $tmp221 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp222 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
*(&local0) = ((frost$core$String*) NULL);
return $tmp219;
block3:;
frost$core$Int $tmp223 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp224 = $tmp179.value;
int64_t $tmp225 = $tmp223.value;
bool $tmp226 = $tmp224 == $tmp225;
frost$core$Bit $tmp227 = (frost$core$Bit) {$tmp226};
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block7; else goto block8;
block7:;
frost$core$String** $tmp229 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp230 = *$tmp229;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$core$String* $tmp231 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local4) = $tmp230;
frost$core$Int* $tmp232 = (frost$core$Int*) (param0->$data + 8);
frost$core$Int $tmp233 = *$tmp232;
*(&local5) = $tmp233;
frost$core$Int* $tmp234 = (frost$core$Int*) (param0->$data + 16);
frost$core$Int $tmp235 = *$tmp234;
*(&local6) = $tmp235;
frost$core$String** $tmp236 = (frost$core$String**) (param0->$data + 24);
frost$core$String* $tmp237 = *$tmp236;
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$String* $tmp238 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local7) = $tmp237;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
frost$core$String* $tmp239 = *(&local4);
frost$core$String* $tmp240 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s241, $tmp239);
frost$core$String* $tmp242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp240, &$s243);
frost$core$Int $tmp244 = *(&local5);
frost$core$Int$wrapper* $tmp245;
$tmp245 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp245->value = $tmp244;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn247 $tmp246 = ($fn247) ((frost$core$Object*) $tmp245)->$class->vtable[0];
frost$core$String* $tmp248 = $tmp246(((frost$core$Object*) $tmp245));
frost$core$String* $tmp249 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp242, $tmp248);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$core$String* $tmp250 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp249, &$s251);
frost$core$Int $tmp252 = *(&local6);
frost$core$Int$wrapper* $tmp253;
$tmp253 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp253->value = $tmp252;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:51:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn255 $tmp254 = ($fn255) ((frost$core$Object*) $tmp253)->$class->vtable[0];
frost$core$String* $tmp256 = $tmp254(((frost$core$Object*) $tmp253));
frost$core$String* $tmp257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp250, $tmp256);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
frost$core$String* $tmp258 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp257, &$s259);
frost$core$String* $tmp260 = *(&local7);
frost$core$String* $tmp261 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp258, $tmp260);
frost$core$String* $tmp262 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp261, &$s263);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
frost$core$String* $tmp264 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp265 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local4) = ((frost$core$String*) NULL);
return $tmp262;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:51
frost$core$Int $tmp266 = (frost$core$Int) {51u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s267, $tmp266);
abort(); // unreachable
block1:;
goto block12;
block12:;

}

