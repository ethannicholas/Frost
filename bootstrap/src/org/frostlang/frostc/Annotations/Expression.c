#include "org/frostlang/frostc/Annotations/Expression.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Annotations$Expression$class_type org$frostlang$frostc$Annotations$Expression$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Annotations$Expression$get_asString$R$frost$core$String, org$frostlang$frostc$Annotations$Expression$cleanup} };

typedef frost$core$String* (*$fn17)(frost$core$Object*);
typedef frost$core$String* (*$fn37)(frost$core$Object*);
typedef frost$core$String* (*$fn57)(frost$core$Object*);
typedef frost$core$String* (*$fn77)(frost$core$Object*);
typedef frost$core$String* (*$fn97)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 43, 1213590712351619310, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65\x28", 5, -3005768931565142592, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65\x4f\x72\x28", 7, 8507669291200671751, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x6f\x73\x74\x28", 6, -7748712806728186949, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64\x28", 9, -7791594326291061002, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79\x28", 10, -822412385073170115, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x66\x72\x6f\x73\x74", 17, 6603721120407380261, NULL };

frost$core$String* org$frostlang$frostc$Annotations$Expression$get_asString$R$frost$core$String(org$frostlang$frostc$Annotations$Expression* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:35
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Annotations.frost:36:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
frost$core$String** $tmp10 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp11 = *$tmp10;
org$frostlang$frostc$ASTNode** $tmp12 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp13 = *$tmp12;
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
org$frostlang$frostc$ASTNode* $tmp14 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
*(&local0) = $tmp13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:36
org$frostlang$frostc$ASTNode* $tmp15 = *(&local0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Annotations.frost:36:49
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn17 $tmp16 = ($fn17) ((frost$core$Object*) $tmp15)->$class->vtable[0];
frost$core$String* $tmp18 = $tmp16(((frost$core$Object*) $tmp15));
frost$core$String* $tmp19 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s20, $tmp18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$core$String* $tmp21 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp19, &$s22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
org$frostlang$frostc$ASTNode* $tmp23 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp21;
block3:;
frost$core$Int64 $tmp24 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Annotations.frost:37:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp25 = $tmp3.value;
int64_t $tmp26 = $tmp24.value;
bool $tmp27 = $tmp25 == $tmp26;
frost$core$Bit $tmp28 = (frost$core$Bit) {$tmp27};
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block6; else goto block7;
block6:;
frost$core$String** $tmp30 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp31 = *$tmp30;
org$frostlang$frostc$ASTNode** $tmp32 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp33 = *$tmp32;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
org$frostlang$frostc$ASTNode* $tmp34 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
*(&local1) = $tmp33;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:37
org$frostlang$frostc$ASTNode* $tmp35 = *(&local1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Annotations.frost:37:49
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn37 $tmp36 = ($fn37) ((frost$core$Object*) $tmp35)->$class->vtable[0];
frost$core$String* $tmp38 = $tmp36(((frost$core$Object*) $tmp35));
frost$core$String* $tmp39 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s40, $tmp38);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$String* $tmp41 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp39, &$s42);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
org$frostlang$frostc$ASTNode* $tmp43 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp41;
block7:;
frost$core$Int64 $tmp44 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Annotations.frost:38:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp45 = $tmp3.value;
int64_t $tmp46 = $tmp44.value;
bool $tmp47 = $tmp45 == $tmp46;
frost$core$Bit $tmp48 = (frost$core$Bit) {$tmp47};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block10; else goto block11;
block10:;
frost$core$String** $tmp50 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp51 = *$tmp50;
org$frostlang$frostc$ASTNode** $tmp52 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp53 = *$tmp52;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
org$frostlang$frostc$ASTNode* $tmp54 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local2) = $tmp53;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:38
org$frostlang$frostc$ASTNode* $tmp55 = *(&local2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Annotations.frost:38:49
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn57 $tmp56 = ($fn57) ((frost$core$Object*) $tmp55)->$class->vtable[0];
frost$core$String* $tmp58 = $tmp56(((frost$core$Object*) $tmp55));
frost$core$String* $tmp59 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s60, $tmp58);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$String* $tmp61 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp59, &$s62);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
org$frostlang$frostc$ASTNode* $tmp63 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp61;
block11:;
frost$core$Int64 $tmp64 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Annotations.frost:39:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp65 = $tmp3.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 == $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block14; else goto block15;
block14:;
frost$core$String** $tmp70 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp71 = *$tmp70;
org$frostlang$frostc$ASTNode** $tmp72 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp73 = *$tmp72;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
org$frostlang$frostc$ASTNode* $tmp74 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
*(&local3) = $tmp73;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:39
org$frostlang$frostc$ASTNode* $tmp75 = *(&local3);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Annotations.frost:39:49
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn77 $tmp76 = ($fn77) ((frost$core$Object*) $tmp75)->$class->vtable[0];
frost$core$String* $tmp78 = $tmp76(((frost$core$Object*) $tmp75));
frost$core$String* $tmp79 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s80, $tmp78);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$core$String* $tmp81 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp79, &$s82);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
org$frostlang$frostc$ASTNode* $tmp83 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp81;
block15:;
frost$core$Int64 $tmp84 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Annotations.frost:40:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp85 = $tmp3.value;
int64_t $tmp86 = $tmp84.value;
bool $tmp87 = $tmp85 == $tmp86;
frost$core$Bit $tmp88 = (frost$core$Bit) {$tmp87};
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block18; else goto block1;
block18:;
frost$core$String** $tmp90 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp91 = *$tmp90;
org$frostlang$frostc$ASTNode** $tmp92 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp93 = *$tmp92;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
org$frostlang$frostc$ASTNode* $tmp94 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local4) = $tmp93;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:40
org$frostlang$frostc$ASTNode* $tmp95 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Annotations.frost:40:49
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn97 $tmp96 = ($fn97) ((frost$core$Object*) $tmp95)->$class->vtable[0];
frost$core$String* $tmp98 = $tmp96(((frost$core$Object*) $tmp95));
frost$core$String* $tmp99 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s100, $tmp98);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$core$String* $tmp101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp99, &$s102);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
org$frostlang$frostc$ASTNode* $tmp103 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp101;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:42
frost$core$Int64 $tmp104 = (frost$core$Int64) {42u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s105, $tmp104);
abort(); // unreachable

}
void org$frostlang$frostc$Annotations$Expression$cleanup(org$frostlang$frostc$Annotations$Expression* param0) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
frost$core$String* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
frost$core$String* local6 = NULL;
org$frostlang$frostc$ASTNode* local7 = NULL;
frost$core$String* local8 = NULL;
org$frostlang$frostc$ASTNode* local9 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:26
frost$core$Int64* $tmp106 = &param0->$rawValue;
frost$core$Int64 $tmp107 = *$tmp106;
frost$core$Int64 $tmp108 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Annotations.frost:26:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp109 = $tmp107.value;
int64_t $tmp110 = $tmp108.value;
bool $tmp111 = $tmp109 == $tmp110;
frost$core$Bit $tmp112 = (frost$core$Bit) {$tmp111};
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block2; else goto block3;
block2:;
frost$core$String** $tmp114 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp115 = *$tmp114;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$core$String* $tmp116 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local0) = $tmp115;
org$frostlang$frostc$ASTNode** $tmp117 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp118 = *$tmp117;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
org$frostlang$frostc$ASTNode* $tmp119 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
*(&local1) = $tmp118;
// <no location>
frost$core$String* $tmp120 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// <no location>
org$frostlang$frostc$ASTNode* $tmp121 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
org$frostlang$frostc$ASTNode* $tmp122 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp123 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp124 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Annotations.frost:26:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp125 = $tmp107.value;
int64_t $tmp126 = $tmp124.value;
bool $tmp127 = $tmp125 == $tmp126;
frost$core$Bit $tmp128 = (frost$core$Bit) {$tmp127};
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block5; else goto block6;
block5:;
frost$core$String** $tmp130 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp131 = *$tmp130;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
frost$core$String* $tmp132 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local2) = $tmp131;
org$frostlang$frostc$ASTNode** $tmp133 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp134 = *$tmp133;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
org$frostlang$frostc$ASTNode* $tmp135 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
*(&local3) = $tmp134;
// <no location>
frost$core$String* $tmp136 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// <no location>
org$frostlang$frostc$ASTNode* $tmp137 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
org$frostlang$frostc$ASTNode* $tmp138 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp139 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block6:;
frost$core$Int64 $tmp140 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Annotations.frost:26:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp141 = $tmp107.value;
int64_t $tmp142 = $tmp140.value;
bool $tmp143 = $tmp141 == $tmp142;
frost$core$Bit $tmp144 = (frost$core$Bit) {$tmp143};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block8; else goto block9;
block8:;
frost$core$String** $tmp146 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp147 = *$tmp146;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$String* $tmp148 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local4) = $tmp147;
org$frostlang$frostc$ASTNode** $tmp149 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp150 = *$tmp149;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
org$frostlang$frostc$ASTNode* $tmp151 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
*(&local5) = $tmp150;
// <no location>
frost$core$String* $tmp152 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// <no location>
org$frostlang$frostc$ASTNode* $tmp153 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
org$frostlang$frostc$ASTNode* $tmp154 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp155 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp156 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Annotations.frost:26:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp157 = $tmp107.value;
int64_t $tmp158 = $tmp156.value;
bool $tmp159 = $tmp157 == $tmp158;
frost$core$Bit $tmp160 = (frost$core$Bit) {$tmp159};
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block11; else goto block12;
block11:;
frost$core$String** $tmp162 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp163 = *$tmp162;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$core$String* $tmp164 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
*(&local6) = $tmp163;
org$frostlang$frostc$ASTNode** $tmp165 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp166 = *$tmp165;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
org$frostlang$frostc$ASTNode* $tmp167 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local7) = $tmp166;
// <no location>
frost$core$String* $tmp168 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
// <no location>
org$frostlang$frostc$ASTNode* $tmp169 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
org$frostlang$frostc$ASTNode* $tmp170 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp171 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local6) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Int64 $tmp172 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Annotations.frost:26:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp173 = $tmp107.value;
int64_t $tmp174 = $tmp172.value;
bool $tmp175 = $tmp173 == $tmp174;
frost$core$Bit $tmp176 = (frost$core$Bit) {$tmp175};
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block14; else goto block1;
block14:;
frost$core$String** $tmp178 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp179 = *$tmp178;
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$String* $tmp180 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
*(&local8) = $tmp179;
org$frostlang$frostc$ASTNode** $tmp181 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp182 = *$tmp181;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
org$frostlang$frostc$ASTNode* $tmp183 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local9) = $tmp182;
// <no location>
frost$core$String* $tmp184 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
// <no location>
org$frostlang$frostc$ASTNode* $tmp185 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
org$frostlang$frostc$ASTNode* $tmp186 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp187 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
*(&local8) = ((frost$core$String*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:26
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Annotations$Expression* param0, frost$core$Int64 param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:26
frost$core$Int64* $tmp188 = &param0->$rawValue;
*$tmp188 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:26
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp189 = (frost$core$String**) (param0->$data + 0);
*$tmp189 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:26
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp190 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
*$tmp190 = param3;
return;

}






