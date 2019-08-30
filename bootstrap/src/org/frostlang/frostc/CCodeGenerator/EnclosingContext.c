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

typedef frost$core$String* (*$fn75)(frost$core$Object*);
typedef frost$core$String* (*$fn119)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 52, -8601812873085532932, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x4f\x50\x28", 5, -4488024136446187047, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x49\x4e\x41\x4c\x4c\x59\x28", 8, 2960125007830506560, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 4580239808655160548, NULL };

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
$fn75 $tmp74 = ($fn75) ((frost$core$Object*) $tmp71)->$class->vtable[0];
frost$core$String* $tmp76 = $tmp74(((frost$core$Object*) $tmp71));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
*(&local3) = $tmp76;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:264
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s77));
*(&local3) = &$s78;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s79));
goto block5;
block5:;
frost$core$String* $tmp80 = *(&local3);
frost$core$String* $tmp81 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s82, $tmp80);
frost$core$String* $tmp83 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp81, &$s84);
frost$core$String* $tmp85 = *(&local1);
frost$core$String* $tmp86 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp83, $tmp85);
frost$core$String* $tmp87 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp86, &$s88);
frost$core$String* $tmp89 = *(&local2);
frost$core$String* $tmp90 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp87, $tmp89);
frost$core$String* $tmp91 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp90, &$s92);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$String* $tmp93 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp94 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp95 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp96 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local0) = ((frost$core$String*) NULL);
return $tmp91;
block3:;
frost$core$Int $tmp97 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CCodeGenerator.frost:13:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp98 = $tmp55.value;
int64_t $tmp99 = $tmp97.value;
bool $tmp100 = $tmp98 == $tmp99;
frost$core$Bit $tmp101 = (frost$core$Bit) {$tmp100};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block8; else goto block9;
block8:;
frost$core$String** $tmp103 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp104 = *$tmp103;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$String* $tmp105 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local4) = $tmp104;
frost$collections$Map** $tmp106 = (frost$collections$Map**) (param0->$data + 8);
frost$collections$Map* $tmp107 = *$tmp106;
*(&local5) = ((frost$collections$Map*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$collections$Map* $tmp108 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
*(&local5) = $tmp107;
frost$core$String** $tmp109 = (frost$core$String**) (param0->$data + 16);
frost$core$String* $tmp110 = *$tmp109;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$String* $tmp111 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local6) = $tmp110;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$String* $tmp112 = *(&local4);
frost$core$String* $tmp113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s114, $tmp112);
frost$core$String* $tmp115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp113, &$s116);
frost$collections$Map* $tmp117 = *(&local5);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from CCodeGenerator.frost:13:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn119 $tmp118 = ($fn119) ((frost$core$Object*) $tmp117)->$class->vtable[0];
frost$core$String* $tmp120 = $tmp118(((frost$core$Object*) $tmp117));
frost$core$String* $tmp121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp115, $tmp120);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$String* $tmp122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp121, &$s123);
frost$core$String* $tmp124 = *(&local6);
frost$core$String* $tmp125 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp122, $tmp124);
frost$core$String* $tmp126 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp125, &$s127);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$String* $tmp128 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$Map* $tmp129 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
*(&local5) = ((frost$collections$Map*) NULL);
frost$core$String* $tmp130 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
*(&local4) = ((frost$core$String*) NULL);
return $tmp126;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
frost$core$Int $tmp131 = (frost$core$Int) {13u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s132, $tmp131);
abort(); // unreachable
block1:;
goto block12;
block12:;

}

