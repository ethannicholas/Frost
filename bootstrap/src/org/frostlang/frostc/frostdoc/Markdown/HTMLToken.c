#include "org/frostlang/frostc/frostdoc/Markdown/HTMLToken.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/Key.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$HTMLToken$$EQ$org$frostlang$frostc$frostdoc$Markdown$HTMLToken$R$frost$core$Bit$shim(org$frostlang$frostc$frostdoc$Markdown$HTMLToken* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$frostdoc$Markdown$HTMLToken$$EQ$org$frostlang$frostc$frostdoc$Markdown$HTMLToken$R$frost$core$Bit(p0, ((org$frostlang$frostc$frostdoc$Markdown$HTMLToken*) p1));

    return result;
}
__attribute__((weak)) frost$core$Int org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_hash$R$frost$core$Int$shim(org$frostlang$frostc$frostdoc$Markdown$HTMLToken* p0) {
    frost$core$Int result = org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_hash$R$frost$core$Int(p0);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_asString$R$frost$core$String$shim(org$frostlang$frostc$frostdoc$Markdown$HTMLToken* p0) {
    frost$core$String* result = org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void org$frostlang$frostc$frostdoc$Markdown$HTMLToken$cleanup$shim(org$frostlang$frostc$frostdoc$Markdown$HTMLToken* p0) {
    org$frostlang$frostc$frostdoc$Markdown$HTMLToken$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$frostdoc$Markdown$HTMLToken$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$frostdoc$Markdown$HTMLToken$$EQ$org$frostlang$frostc$frostdoc$Markdown$HTMLToken$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$frostdoc$Markdown$HTMLToken$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$_frost$core$Equatable, { org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class_type org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &org$frostlang$frostc$frostdoc$Markdown$HTMLToken$_frost$collections$Key, { org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_asString$R$frost$core$String$shim, org$frostlang$frostc$frostdoc$Markdown$HTMLToken$cleanup$shim, org$frostlang$frostc$frostdoc$Markdown$HTMLToken$$EQ$org$frostlang$frostc$frostdoc$Markdown$HTMLToken$R$frost$core$Bit$shim, org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_hash$R$frost$core$Int$shim} };

typedef frost$core$Int (*$fn54)(frost$collections$Key*);
typedef frost$core$Int (*$fn74)(frost$collections$Key*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x48\x54\x4d\x4c\x54\x6f\x6b\x65\x6e", 48, -7589272969880814545, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x41\x47\x28", 4, -1292964125579388543, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x45\x58\x54\x28", 5, 1619763848982391586, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };

void org$frostlang$frostc$frostdoc$Markdown$HTMLToken$cleanup(org$frostlang$frostc$frostdoc$Markdown$HTMLToken* param0) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
frost$core$Int* $tmp2 = &param0->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:813:5
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
// <no location>
frost$core$String* $tmp13 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$String* $tmp14 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int $tmp15 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:813:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp16 = $tmp3.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 == $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block5; else goto block1;
block5:;
frost$core$String** $tmp21 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp22 = *$tmp21;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$String* $tmp23 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
*(&local1) = $tmp22;
// <no location>
frost$core$String* $tmp24 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$String* $tmp25 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
return;

}
void org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$HTMLToken* param0, frost$core$Int param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
frost$core$Int* $tmp26 = &param0->$rawValue;
*$tmp26 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp27 = (frost$core$String**) (param0->$data + 0);
*$tmp27 = param2;
return;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$HTMLToken$$EQ$org$frostlang$frostc$frostdoc$Markdown$HTMLToken$R$frost$core$Bit(org$frostlang$frostc$frostdoc$Markdown$HTMLToken* param0, org$frostlang$frostc$frostdoc$Markdown$HTMLToken* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
frost$core$Int* $tmp28 = &param0->$rawValue;
frost$core$Int $tmp29 = *$tmp28;
frost$core$Int* $tmp30 = &param1->$rawValue;
frost$core$Int $tmp31 = *$tmp30;
int64_t $tmp32 = $tmp29.value;
int64_t $tmp33 = $tmp31.value;
bool $tmp34 = $tmp32 != $tmp33;
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
frost$core$Bit $tmp37 = (frost$core$Bit) {false};
return $tmp37;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
frost$core$Bit $tmp38 = (frost$core$Bit) {true};
return $tmp38;

}
frost$core$Int org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_hash$R$frost$core$Int(org$frostlang$frostc$frostdoc$Markdown$HTMLToken* param0) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
frost$core$Int* $tmp39 = &param0->$rawValue;
frost$core$Int $tmp40 = *$tmp39;
frost$core$Int $tmp41 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:813:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41.value;
bool $tmp44 = $tmp42 == $tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block2; else goto block3;
block2:;
frost$core$String** $tmp47 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp48 = *$tmp47;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
frost$core$String* $tmp49 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local0) = $tmp48;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
frost$core$Int $tmp50 = (frost$core$Int) {10857471103828737071u};
frost$core$String* $tmp51 = *(&local0);
ITable* $tmp52 = ((frost$collections$Key*) $tmp51)->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp52 = $tmp52->next;
}
$fn54 $tmp53 = $tmp52->methods[0];
frost$core$Int $tmp55 = $tmp53(((frost$collections$Key*) $tmp51));
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Markdown.frost:813:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp56 = $tmp50.value;
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56 ^ $tmp57;
frost$core$Int $tmp59 = (frost$core$Int) {$tmp58};
frost$core$String* $tmp60 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local0) = ((frost$core$String*) NULL);
return $tmp59;
block3:;
frost$core$Int $tmp61 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:813:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp62 = $tmp40.value;
int64_t $tmp63 = $tmp61.value;
bool $tmp64 = $tmp62 == $tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block6; else goto block7;
block6:;
frost$core$String** $tmp67 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp68 = *$tmp67;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$String* $tmp69 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
*(&local1) = $tmp68;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
frost$core$Int $tmp70 = (frost$core$Int) {3268198133947922526u};
frost$core$String* $tmp71 = *(&local1);
ITable* $tmp72 = ((frost$collections$Key*) $tmp71)->$class->itable;
while ($tmp72->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp72 = $tmp72->next;
}
$fn74 $tmp73 = $tmp72->methods[0];
frost$core$Int $tmp75 = $tmp73(((frost$collections$Key*) $tmp71));
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Markdown.frost:813:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp76 = $tmp70.value;
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76 ^ $tmp77;
frost$core$Int $tmp79 = (frost$core$Int) {$tmp78};
frost$core$String* $tmp80 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local1) = ((frost$core$String*) NULL);
return $tmp79;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
frost$core$Int $tmp81 = (frost$core$Int) {813u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s82, $tmp81);
abort(); // unreachable
block1:;
goto block10;
block10:;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_asString$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$HTMLToken* param0) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
frost$core$Int* $tmp83 = &param0->$rawValue;
frost$core$Int $tmp84 = *$tmp83;
frost$core$Int $tmp85 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:813:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp86 = $tmp84.value;
int64_t $tmp87 = $tmp85.value;
bool $tmp88 = $tmp86 == $tmp87;
frost$core$Bit $tmp89 = (frost$core$Bit) {$tmp88};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block2; else goto block3;
block2:;
frost$core$String** $tmp91 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp92 = *$tmp91;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$String* $tmp93 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local0) = $tmp92;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
frost$core$String* $tmp94 = *(&local0);
frost$core$String* $tmp95 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s96, $tmp94);
frost$core$String* $tmp97 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp95, &$s98);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$String* $tmp99 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
*(&local0) = ((frost$core$String*) NULL);
return $tmp97;
block3:;
frost$core$Int $tmp100 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Markdown.frost:813:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp101 = $tmp84.value;
int64_t $tmp102 = $tmp100.value;
bool $tmp103 = $tmp101 == $tmp102;
frost$core$Bit $tmp104 = (frost$core$Bit) {$tmp103};
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block5; else goto block6;
block5:;
frost$core$String** $tmp106 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp107 = *$tmp106;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$String* $tmp108 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
*(&local1) = $tmp107;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
frost$core$String* $tmp109 = *(&local1);
frost$core$String* $tmp110 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s111, $tmp109);
frost$core$String* $tmp112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp110, &$s113);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$String* $tmp114 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local1) = ((frost$core$String*) NULL);
return $tmp112;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:813
frost$core$Int $tmp115 = (frost$core$Int) {813u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s116, $tmp115);
abort(); // unreachable
block1:;
goto block8;
block8:;

}

