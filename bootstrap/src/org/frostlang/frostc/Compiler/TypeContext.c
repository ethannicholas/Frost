#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/HashKey.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Compiler$TypeContext$$EQ$org$frostlang$frostc$Compiler$TypeContext$R$frost$core$Bit$shim(org$frostlang$frostc$Compiler$TypeContext* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Compiler$TypeContext$$EQ$org$frostlang$frostc$Compiler$TypeContext$R$frost$core$Bit(p0, ((org$frostlang$frostc$Compiler$TypeContext*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Compiler$TypeContext$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Compiler$TypeContext$$EQ$org$frostlang$frostc$Compiler$TypeContext$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Compiler$TypeContext$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &org$frostlang$frostc$Compiler$TypeContext$_frost$core$Equatable, { org$frostlang$frostc$Compiler$TypeContext$get_hash$R$frost$core$Int} };

static frost$core$String $s1;
org$frostlang$frostc$Compiler$TypeContext$class_type org$frostlang$frostc$Compiler$TypeContext$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$Compiler$TypeContext$_frost$collections$HashKey, { org$frostlang$frostc$Compiler$TypeContext$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$TypeContext$cleanup, org$frostlang$frostc$Compiler$TypeContext$description$R$frost$core$String, org$frostlang$frostc$Compiler$TypeContext$$EQ$org$frostlang$frostc$Compiler$TypeContext$R$frost$core$Bit$shim, org$frostlang$frostc$Compiler$TypeContext$get_hash$R$frost$core$Int} };

typedef frost$core$String* (*$fn41)(frost$core$Object*);
typedef frost$core$Int (*$fn136)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn146)(frost$collections$HashKey*);
typedef frost$core$String* (*$fn194)(frost$core$Object*);
typedef frost$core$String* (*$fn203)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74", 41, 7286788768173347864, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x27", 49, -4672832085192635236, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x27", 49, -4672832085192635236, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27", 28, 3186585700466148650, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x53\x50\x45\x43\x49\x46\x49\x45\x44", 11, -5143693783589769076, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x53\x50\x45\x43\x49\x46\x49\x45\x44", 11, -5143693783589769076, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x4f\x4e\x5f\x56\x4f\x49\x44", 8, -6706428097584095157, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x4f\x4e\x5f\x56\x4f\x49\x44", 8, -6706428097584095157, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 9, -8273843884663715393, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 9, -8273843884663715393, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x59\x50\x45\x28", 5, 7370278550074045823, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

frost$core$String* org$frostlang$frostc$Compiler$TypeContext$description$R$frost$core$String(org$frostlang$frostc$Compiler$TypeContext* param0) {

org$frostlang$frostc$Type* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:85
frost$core$Int* $tmp2 = &param0->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:86:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:87
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s10));
return &$s11;
block3:;
frost$core$Int $tmp12 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:89:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp13 = $tmp3.value;
int64_t $tmp14 = $tmp12.value;
bool $tmp15 = $tmp13 == $tmp14;
frost$core$Bit $tmp16 = (frost$core$Bit) {$tmp15};
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:90
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s18));
return &$s19;
block6:;
frost$core$Int $tmp20 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:92:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp21 = $tmp3.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 == $tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:93
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s26));
return &$s27;
block9:;
frost$core$Int $tmp28 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:95:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp29 = $tmp3.value;
int64_t $tmp30 = $tmp28.value;
bool $tmp31 = $tmp29 == $tmp30;
frost$core$Bit $tmp32 = (frost$core$Bit) {$tmp31};
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block11; else goto block1;
block11:;
org$frostlang$frostc$Type** $tmp34 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp35 = *$tmp34;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
org$frostlang$frostc$Type* $tmp36 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local0) = $tmp35;
frost$core$Bit* $tmp37 = (frost$core$Bit*) (param0->$data + 8);
frost$core$Bit $tmp38 = *$tmp37;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:96
org$frostlang$frostc$Type* $tmp39 = *(&local0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:96:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn41 $tmp40 = ($fn41) ((frost$core$Object*) $tmp39)->$class->vtable[0];
frost$core$String* $tmp42 = $tmp40(((frost$core$Object*) $tmp39));
frost$core$String* $tmp43 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s44, $tmp42);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$String* $tmp45 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp43, &$s46);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
org$frostlang$frostc$Type* $tmp47 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp45;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:99
frost$core$Int $tmp48 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s49, $tmp48);
abort(); // unreachable

}
void org$frostlang$frostc$Compiler$TypeContext$cleanup(org$frostlang$frostc$Compiler$TypeContext* param0) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Bit local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Int* $tmp50 = &param0->$rawValue;
frost$core$Int $tmp51 = *$tmp50;
frost$core$Int $tmp52 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 == $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block2; else goto block3;
block2:;
goto block1;
block3:;
frost$core$Int $tmp58 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp59 = $tmp51.value;
int64_t $tmp60 = $tmp58.value;
bool $tmp61 = $tmp59 == $tmp60;
frost$core$Bit $tmp62 = (frost$core$Bit) {$tmp61};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block5; else goto block6;
block5:;
goto block1;
block6:;
frost$core$Int $tmp64 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp65 = $tmp51.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 == $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block8; else goto block9;
block8:;
goto block1;
block9:;
frost$core$Int $tmp70 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp71 = $tmp51.value;
int64_t $tmp72 = $tmp70.value;
bool $tmp73 = $tmp71 == $tmp72;
frost$core$Bit $tmp74 = (frost$core$Bit) {$tmp73};
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block11; else goto block1;
block11:;
org$frostlang$frostc$Type** $tmp76 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp77 = *$tmp76;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
org$frostlang$frostc$Type* $tmp78 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local0) = $tmp77;
frost$core$Bit* $tmp79 = (frost$core$Bit*) (param0->$data + 8);
frost$core$Bit $tmp80 = *$tmp79;
*(&local1) = $tmp80;
// <no location>
org$frostlang$frostc$Type* $tmp81 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
org$frostlang$frostc$Type* $tmp82 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(org$frostlang$frostc$Compiler$TypeContext* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Int* $tmp83 = &param0->$rawValue;
*$tmp83 = param1;
return;

}
void org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(org$frostlang$frostc$Compiler$TypeContext* param0, frost$core$Int param1, org$frostlang$frostc$Type* param2, frost$core$Bit param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Int* $tmp84 = &param0->$rawValue;
*$tmp84 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp85 = (org$frostlang$frostc$Type**) (param0->$data + 0);
*$tmp85 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Bit* $tmp86 = (frost$core$Bit*) (param0->$data + 8);
*$tmp86 = param3;
return;

}
frost$core$Bit org$frostlang$frostc$Compiler$TypeContext$$EQ$org$frostlang$frostc$Compiler$TypeContext$R$frost$core$Bit(org$frostlang$frostc$Compiler$TypeContext* param0, org$frostlang$frostc$Compiler$TypeContext* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Int* $tmp87 = &param0->$rawValue;
frost$core$Int $tmp88 = *$tmp87;
frost$core$Int* $tmp89 = &param1->$rawValue;
frost$core$Int $tmp90 = *$tmp89;
int64_t $tmp91 = $tmp88.value;
int64_t $tmp92 = $tmp90.value;
bool $tmp93 = $tmp91 != $tmp92;
frost$core$Bit $tmp94 = (frost$core$Bit) {$tmp93};
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Bit $tmp96 = (frost$core$Bit) {false};
return $tmp96;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Bit $tmp97 = (frost$core$Bit) {true};
return $tmp97;

}
frost$core$Int org$frostlang$frostc$Compiler$TypeContext$get_hash$R$frost$core$Int(org$frostlang$frostc$Compiler$TypeContext* param0) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Bit local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Int* $tmp98 = &param0->$rawValue;
frost$core$Int $tmp99 = *$tmp98;
frost$core$Int $tmp100 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp101 = $tmp99.value;
int64_t $tmp102 = $tmp100.value;
bool $tmp103 = $tmp101 == $tmp102;
frost$core$Bit $tmp104 = (frost$core$Bit) {$tmp103};
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Int $tmp106 = (frost$core$Int) {7286788768173347864u};
return $tmp106;
block3:;
frost$core$Int $tmp107 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp108 = $tmp99.value;
int64_t $tmp109 = $tmp107.value;
bool $tmp110 = $tmp108 == $tmp109;
frost$core$Bit $tmp111 = (frost$core$Bit) {$tmp110};
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Int $tmp113 = (frost$core$Int) {14573577536346695728u};
return $tmp113;
block6:;
frost$core$Int $tmp114 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp115 = $tmp99.value;
int64_t $tmp116 = $tmp114.value;
bool $tmp117 = $tmp115 == $tmp116;
frost$core$Bit $tmp118 = (frost$core$Bit) {$tmp117};
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Int $tmp120 = (frost$core$Int) {3413622230810491976u};
return $tmp120;
block9:;
frost$core$Int $tmp121 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp122 = $tmp99.value;
int64_t $tmp123 = $tmp121.value;
bool $tmp124 = $tmp122 == $tmp123;
frost$core$Bit $tmp125 = (frost$core$Bit) {$tmp124};
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Type** $tmp127 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp128 = *$tmp127;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
org$frostlang$frostc$Type* $tmp129 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
*(&local0) = $tmp128;
frost$core$Bit* $tmp130 = (frost$core$Bit*) (param0->$data + 8);
frost$core$Bit $tmp131 = *$tmp130;
*(&local1) = $tmp131;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Int $tmp132 = (frost$core$Int) {10700410998983839840u};
org$frostlang$frostc$Type* $tmp133 = *(&local0);
ITable* $tmp134 = ((frost$collections$HashKey*) $tmp133)->$class->itable;
while ($tmp134->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp134 = $tmp134->next;
}
$fn136 $tmp135 = $tmp134->methods[0];
frost$core$Int $tmp137 = $tmp135(((frost$collections$HashKey*) $tmp133));
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp138 = $tmp132.value;
int64_t $tmp139 = $tmp137.value;
int64_t $tmp140 = $tmp138 ^ $tmp139;
frost$core$Int $tmp141 = (frost$core$Int) {$tmp140};
frost$core$Bit $tmp142 = *(&local1);
frost$core$Bit$wrapper* $tmp143;
$tmp143 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp143->value = $tmp142;
ITable* $tmp144 = ((frost$collections$HashKey*) $tmp143)->$class->itable;
while ($tmp144->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp144 = $tmp144->next;
}
$fn146 $tmp145 = $tmp144->methods[0];
frost$core$Int $tmp147 = $tmp145(((frost$collections$HashKey*) $tmp143));
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp148 = $tmp141.value;
int64_t $tmp149 = $tmp147.value;
int64_t $tmp150 = $tmp148 ^ $tmp149;
frost$core$Int $tmp151 = (frost$core$Int) {$tmp150};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp143)));
org$frostlang$frostc$Type* $tmp152 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp151;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Int $tmp153 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s154, $tmp153);
abort(); // unreachable
block1:;
goto block16;
block16:;

}
frost$core$String* org$frostlang$frostc$Compiler$TypeContext$get_asString$R$frost$core$String(org$frostlang$frostc$Compiler$TypeContext* param0) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Bit local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Int* $tmp155 = &param0->$rawValue;
frost$core$Int $tmp156 = *$tmp155;
frost$core$Int $tmp157 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp158 = $tmp156.value;
int64_t $tmp159 = $tmp157.value;
bool $tmp160 = $tmp158 == $tmp159;
frost$core$Bit $tmp161 = (frost$core$Bit) {$tmp160};
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s163));
return &$s164;
block3:;
frost$core$Int $tmp165 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp166 = $tmp156.value;
int64_t $tmp167 = $tmp165.value;
bool $tmp168 = $tmp166 == $tmp167;
frost$core$Bit $tmp169 = (frost$core$Bit) {$tmp168};
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s171));
return &$s172;
block6:;
frost$core$Int $tmp173 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp174 = $tmp156.value;
int64_t $tmp175 = $tmp173.value;
bool $tmp176 = $tmp174 == $tmp175;
frost$core$Bit $tmp177 = (frost$core$Bit) {$tmp176};
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s179));
return &$s180;
block9:;
frost$core$Int $tmp181 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp182 = $tmp156.value;
int64_t $tmp183 = $tmp181.value;
bool $tmp184 = $tmp182 == $tmp183;
frost$core$Bit $tmp185 = (frost$core$Bit) {$tmp184};
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Type** $tmp187 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp188 = *$tmp187;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
org$frostlang$frostc$Type* $tmp189 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local0) = $tmp188;
frost$core$Bit* $tmp190 = (frost$core$Bit*) (param0->$data + 8);
frost$core$Bit $tmp191 = *$tmp190;
*(&local1) = $tmp191;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
org$frostlang$frostc$Type* $tmp192 = *(&local0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn194 $tmp193 = ($fn194) ((frost$core$Object*) $tmp192)->$class->vtable[0];
frost$core$String* $tmp195 = $tmp193(((frost$core$Object*) $tmp192));
frost$core$String* $tmp196 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s197, $tmp195);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$String* $tmp198 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp196, &$s199);
frost$core$Bit $tmp200 = *(&local1);
frost$core$Bit$wrapper* $tmp201;
$tmp201 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp201->value = $tmp200;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:59:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn203 $tmp202 = ($fn203) ((frost$core$Object*) $tmp201)->$class->vtable[0];
frost$core$String* $tmp204 = $tmp202(((frost$core$Object*) $tmp201));
frost$core$String* $tmp205 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp198, $tmp204);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$String* $tmp206 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp205, &$s207);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
org$frostlang$frostc$Type* $tmp208 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp206;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:59
frost$core$Int $tmp209 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s210, $tmp209);
abort(); // unreachable
block1:;
goto block16;
block16:;

}

