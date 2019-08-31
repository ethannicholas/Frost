#include "org/frostlang/frostc/CCodeGenerator/EnclosingContext.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Map.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$CCodeGenerator$EnclosingContext$class_type org$frostlang$frostc$CCodeGenerator$EnclosingContext$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$CCodeGenerator$EnclosingContext$get_asString$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$EnclosingContext$cleanup} };

typedef frost$core$String* (*$fn80)(frost$core$Object*);
typedef frost$core$String* (*$fn124)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 52, -8601812873085532932, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -5360016314918414915, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x4f\x50\x28", 5, -4488024136446187047, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x49\x4e\x41\x4c\x4c\x59\x28", 8, 2960125007830506560, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 4580239808655160548, NULL };

void org$frostlang$frostc$CCodeGenerator$EnclosingContext$cleanup(org$frostlang$frostc$CCodeGenerator$EnclosingContext* param0) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$collections$Map* local4 = NULL;
frost$core$String* local5 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Int* $tmp2 = &param0->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CCodeGenerator.frost:13:5
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
frost$core$String** $tmp13 = (frost$core$String**) (param0->$data + 8);
frost$core$String* $tmp14 = *$tmp13;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$String* $tmp15 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
*(&local1) = $tmp14;
frost$core$String** $tmp16 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp17 = *$tmp16;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$String* $tmp18 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local2) = $tmp17;
// <no location>
frost$core$String* $tmp19 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// <no location>
frost$core$String* $tmp20 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// <no location>
frost$core$String* $tmp21 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$String* $tmp22 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp23 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp24 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int $tmp25 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CCodeGenerator.frost:13:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp26 = $tmp3.value;
int64_t $tmp27 = $tmp25.value;
bool $tmp28 = $tmp26 == $tmp27;
frost$core$Bit $tmp29 = (frost$core$Bit) {$tmp28};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block5; else goto block1;
block5:;
frost$core$String** $tmp31 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp32 = *$tmp31;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$String* $tmp33 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
*(&local3) = $tmp32;
frost$collections$Map** $tmp34 = (frost$collections$Map**) (param0->$data + 8);
frost$collections$Map* $tmp35 = *$tmp34;
*(&local4) = ((frost$collections$Map*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$collections$Map* $tmp36 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local4) = $tmp35;
frost$core$String** $tmp37 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp38 = *$tmp37;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$String* $tmp39 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
*(&local5) = $tmp38;
// <no location>
frost$core$String* $tmp40 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// <no location>
frost$collections$Map* $tmp41 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// <no location>
frost$core$String* $tmp42 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$String* $tmp43 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local5) = ((frost$core$String*) NULL);
frost$collections$Map* $tmp44 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local4) = ((frost$collections$Map*) NULL);
frost$core$String* $tmp45 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
*(&local3) = ((frost$core$String*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$CCodeGenerator$EnclosingContext$init$frost$core$Int$frost$core$String$Q$frost$core$String$frost$core$String(org$frostlang$frostc$CCodeGenerator$EnclosingContext* param0, frost$core$Int param1, frost$core$String* param2, frost$core$String* param3, frost$core$String* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Int* $tmp46 = &param0->$rawValue;
*$tmp46 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp47 = (frost$core$String**) (param0->$data + 0);
*$tmp47 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp48 = (frost$core$String**) (param0->$data + 8);
*$tmp48 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp49 = (frost$core$String**) (param0->$data + 16);
*$tmp49 = param4;
return;

}
void org$frostlang$frostc$CCodeGenerator$EnclosingContext$init$frost$core$Int$frost$core$String$frost$collections$Map$LTfrost$core$String$Corg$frostlang$frostc$Pair$LTfrost$core$Int$Cfrost$core$String$GT$GT$frost$core$String(org$frostlang$frostc$CCodeGenerator$EnclosingContext* param0, frost$core$Int param1, frost$core$String* param2, frost$collections$Map* param3, frost$core$String* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Int* $tmp50 = &param0->$rawValue;
*$tmp50 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp51 = (frost$core$String**) (param0->$data + 0);
*$tmp51 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$collections$Map** $tmp52 = (frost$collections$Map**) (param0->$data + 8);
*$tmp52 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp53 = (frost$core$String**) (param0->$data + 16);
*$tmp53 = param4;
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$EnclosingContext$get_asString$R$frost$core$String(org$frostlang$frostc$CCodeGenerator$EnclosingContext* param0) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
frost$collections$Map* local5 = NULL;
frost$core$String* local6 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Int* $tmp54 = &param0->$rawValue;
frost$core$Int $tmp55 = *$tmp54;
frost$core$Int $tmp56 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CCodeGenerator.frost:13:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56.value;
bool $tmp59 = $tmp57 == $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block2; else goto block3;
block2:;
frost$core$String** $tmp62 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp63 = *$tmp62;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$String* $tmp64 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
*(&local0) = $tmp63;
frost$core$String** $tmp65 = (frost$core$String**) (param0->$data + 8);
frost$core$String* $tmp66 = *$tmp65;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$core$String* $tmp67 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local1) = $tmp66;
frost$core$String** $tmp68 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp69 = *$tmp68;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$String* $tmp70 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local2) = $tmp69;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$String* $tmp71 = *(&local0);
// begin inline call to function frost.core.Frost.string(o:frost.core.Object?):frost.core.String from CCodeGenerator.frost:13:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:261
frost$core$Bit $tmp72 = (frost$core$Bit) {((frost$core$Object*) $tmp71) != NULL};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:262
frost$core$Bit $tmp74 = (frost$core$Bit) {((frost$core$Object*) $tmp71) != NULL};
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block8; else goto block9;
block9:;
frost$core$Int $tmp76 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s77, $tmp76, &$s78);
abort(); // unreachable
block8:;
$fn80 $tmp79 = ($fn80) ((frost$core$Object*) $tmp71)->$class->vtable[0];
frost$core$String* $tmp81 = $tmp79(((frost$core$Object*) $tmp71));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local3) = $tmp81;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:264
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s82));
*(&local3) = &$s83;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s84));
goto block5;
block5:;
frost$core$String* $tmp85 = *(&local3);
frost$core$String* $tmp86 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s87, $tmp85);
frost$core$String* $tmp88 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp86, &$s89);
frost$core$String* $tmp90 = *(&local1);
frost$core$String* $tmp91 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp88, $tmp90);
frost$core$String* $tmp92 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp91, &$s93);
frost$core$String* $tmp94 = *(&local2);
frost$core$String* $tmp95 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp92, $tmp94);
frost$core$String* $tmp96 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp95, &$s97);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$String* $tmp98 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp99 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp100 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp101 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
*(&local0) = ((frost$core$String*) NULL);
return $tmp96;
block3:;
frost$core$Int $tmp102 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CCodeGenerator.frost:13:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp103 = $tmp55.value;
int64_t $tmp104 = $tmp102.value;
bool $tmp105 = $tmp103 == $tmp104;
frost$core$Bit $tmp106 = (frost$core$Bit) {$tmp105};
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block10; else goto block11;
block10:;
frost$core$String** $tmp108 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp109 = *$tmp108;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$String* $tmp110 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local4) = $tmp109;
frost$collections$Map** $tmp111 = (frost$collections$Map**) (param0->$data + 8);
frost$collections$Map* $tmp112 = *$tmp111;
*(&local5) = ((frost$collections$Map*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$collections$Map* $tmp113 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
*(&local5) = $tmp112;
frost$core$String** $tmp114 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp115 = *$tmp114;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$core$String* $tmp116 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local6) = $tmp115;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$String* $tmp117 = *(&local4);
frost$core$String* $tmp118 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s119, $tmp117);
frost$core$String* $tmp120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp118, &$s121);
frost$collections$Map* $tmp122 = *(&local5);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from CCodeGenerator.frost:13:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn124 $tmp123 = ($fn124) ((frost$core$Object*) $tmp122)->$class->vtable[0];
frost$core$String* $tmp125 = $tmp123(((frost$core$Object*) $tmp122));
frost$core$String* $tmp126 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp120, $tmp125);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$String* $tmp127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp126, &$s128);
frost$core$String* $tmp129 = *(&local6);
frost$core$String* $tmp130 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp127, $tmp129);
frost$core$String* $tmp131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp130, &$s132);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$core$String* $tmp133 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$Map* $tmp134 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local5) = ((frost$collections$Map*) NULL);
frost$core$String* $tmp135 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
*(&local4) = ((frost$core$String*) NULL);
return $tmp131;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Int $tmp136 = (frost$core$Int) {13u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s137, $tmp136);
abort(); // unreachable
block1:;
goto block14;
block14:;

}

