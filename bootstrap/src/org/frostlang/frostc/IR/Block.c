#include "org/frostlang/frostc/IR/Block.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$IR$Block$class_type org$frostlang$frostc$IR$Block$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$IR$Block$get_asString$R$frost$core$String, org$frostlang$frostc$IR$Block$cleanup} };

typedef frost$core$String* (*$fn21)(frost$core$Object*);
typedef frost$core$Int (*$fn35)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn66)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn83)(frost$core$Object*);
typedef frost$core$Int (*$fn99)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn115)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 29, -7242955456988393464, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b", 5, 1505885265403634530, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x0a", 2, 584938020052538053, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };

void org$frostlang$frostc$IR$Block$init$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR$Block* param0, org$frostlang$frostc$IR$Block$ID param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:398
frost$core$Bit $tmp2 = (frost$core$Bit) {false};
frost$core$Bit* $tmp3 = &param0->forceReachable;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:400
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$Array** $tmp5 = &param0->ids;
frost$collections$Array* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$Array** $tmp7 = &param0->ids;
*$tmp7 = $tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:402
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp8 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$Array** $tmp9 = &param0->statements;
frost$collections$Array* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$collections$Array** $tmp11 = &param0->statements;
*$tmp11 = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:408
frost$core$Bit $tmp12 = (frost$core$Bit) {false};
frost$core$Bit* $tmp13 = &param0->containsExplicitCode;
*$tmp13 = $tmp12;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:411
org$frostlang$frostc$IR$Block$ID* $tmp14 = &param0->id;
*$tmp14 = param1;
return;

}
frost$core$String* org$frostlang$frostc$IR$Block$get_asString$R$frost$core$String(org$frostlang$frostc$IR$Block* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:416
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp15 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$IR$Block$ID* $tmp16 = &param0->id;
org$frostlang$frostc$IR$Block$ID $tmp17 = *$tmp16;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.get_asString():frost.core.String from IR.frost:416:44
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:392
frost$core$Int $tmp18 = $tmp17.value;
frost$core$Int$wrapper* $tmp19;
$tmp19 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp19->value = $tmp18;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:392:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn21 $tmp20 = ($fn21) ((frost$core$Object*) $tmp19)->$class->vtable[0];
frost$core$String* $tmp22 = $tmp20(((frost$core$Object*) $tmp19));
frost$core$String* $tmp23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s24, $tmp22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$String* $tmp25 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp23, &$s26);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$String* $tmp27 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp25, &$s28);
frost$core$MutableString$init$frost$core$String($tmp15, $tmp27);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$MutableString* $tmp29 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local0) = $tmp15;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:417
frost$core$Int $tmp30 = (frost$core$Int) {0u};
frost$collections$Array** $tmp31 = &param0->statements;
frost$collections$Array* $tmp32 = *$tmp31;
ITable* $tmp33 = ((frost$collections$CollectionView*) $tmp32)->$class->itable;
while ($tmp33->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp33 = $tmp33->next;
}
$fn35 $tmp34 = $tmp33->methods[0];
frost$core$Int $tmp36 = $tmp34(((frost$collections$CollectionView*) $tmp32));
frost$core$Bit $tmp37 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp38 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp30, $tmp36, $tmp37);
frost$core$Int $tmp39 = $tmp38.min;
*(&local1) = $tmp39;
frost$core$Int $tmp40 = $tmp38.max;
frost$core$Bit $tmp41 = $tmp38.inclusive;
bool $tmp42 = $tmp41.value;
frost$core$Int $tmp43 = (frost$core$Int) {1u};
if ($tmp42) goto block6; else goto block7;
block6:;
int64_t $tmp44 = $tmp39.value;
int64_t $tmp45 = $tmp40.value;
bool $tmp46 = $tmp44 <= $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block3; else goto block4;
block7:;
int64_t $tmp49 = $tmp39.value;
int64_t $tmp50 = $tmp40.value;
bool $tmp51 = $tmp49 < $tmp50;
frost$core$Bit $tmp52 = (frost$core$Bit) {$tmp51};
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:418
frost$core$MutableString* $tmp54 = *(&local0);
frost$collections$Array** $tmp55 = &param0->ids;
frost$collections$Array* $tmp56 = *$tmp55;
frost$core$Int $tmp57 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from IR.frost:418:34
frost$core$Int $tmp58 = (frost$core$Int) {0u};
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58.value;
bool $tmp61 = $tmp59 >= $tmp60;
frost$core$Bit $tmp62 = (frost$core$Bit) {$tmp61};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block11; else goto block10;
block11:;
ITable* $tmp64 = ((frost$collections$CollectionView*) $tmp56)->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp64 = $tmp64->next;
}
$fn66 $tmp65 = $tmp64->methods[0];
frost$core$Int $tmp67 = $tmp65(((frost$collections$CollectionView*) $tmp56));
int64_t $tmp68 = $tmp57.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 < $tmp69;
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block9; else goto block10;
block10:;
frost$core$Int $tmp73 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s74, $tmp73, &$s75);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp76 = &$tmp56->data;
frost$core$Object** $tmp77 = *$tmp76;
frost$core$Int64 $tmp78 = frost$core$Int64$init$frost$core$Int($tmp57);
int64_t $tmp79 = $tmp78.value;
frost$core$Object* $tmp80 = $tmp77[$tmp79];
frost$core$Frost$ref$frost$core$Object$Q($tmp80);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp81;
$tmp81 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp81->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp80)->value;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from IR.frost:418:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn83 $tmp82 = ($fn83) ((frost$core$Object*) $tmp81)->$class->vtable[0];
frost$core$String* $tmp84 = $tmp82(((frost$core$Object*) $tmp81));
frost$core$MutableString$append$frost$core$String($tmp54, $tmp84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q($tmp80);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:419
frost$core$MutableString* $tmp85 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp85, &$s86);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:420
frost$core$MutableString* $tmp87 = *(&local0);
frost$collections$Array** $tmp88 = &param0->statements;
frost$collections$Array* $tmp89 = *$tmp88;
frost$core$Int $tmp90 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from IR.frost:420:41
frost$core$Int $tmp91 = (frost$core$Int) {0u};
int64_t $tmp92 = $tmp90.value;
int64_t $tmp93 = $tmp91.value;
bool $tmp94 = $tmp92 >= $tmp93;
frost$core$Bit $tmp95 = (frost$core$Bit) {$tmp94};
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block16; else goto block15;
block16:;
ITable* $tmp97 = ((frost$collections$CollectionView*) $tmp89)->$class->itable;
while ($tmp97->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp97 = $tmp97->next;
}
$fn99 $tmp98 = $tmp97->methods[0];
frost$core$Int $tmp100 = $tmp98(((frost$collections$CollectionView*) $tmp89));
int64_t $tmp101 = $tmp90.value;
int64_t $tmp102 = $tmp100.value;
bool $tmp103 = $tmp101 < $tmp102;
frost$core$Bit $tmp104 = (frost$core$Bit) {$tmp103};
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block14; else goto block15;
block15:;
frost$core$Int $tmp106 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s107, $tmp106, &$s108);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp109 = &$tmp89->data;
frost$core$Object** $tmp110 = *$tmp109;
frost$core$Int64 $tmp111 = frost$core$Int64$init$frost$core$Int($tmp90);
int64_t $tmp112 = $tmp111.value;
frost$core$Object* $tmp113 = $tmp110[$tmp112];
frost$core$Frost$ref$frost$core$Object$Q($tmp113);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from IR.frost:420:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn115 $tmp114 = ($fn115) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp113))->$class->vtable[0];
frost$core$String* $tmp116 = $tmp114(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp113)));
frost$core$MutableString$append$frost$core$String($tmp87, $tmp116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$core$Frost$unref$frost$core$Object$Q($tmp113);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:421
frost$core$MutableString* $tmp117 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp117, &$s118);
frost$core$Int $tmp119 = *(&local1);
int64_t $tmp120 = $tmp40.value;
int64_t $tmp121 = $tmp119.value;
int64_t $tmp122 = $tmp120 - $tmp121;
frost$core$Int $tmp123 = (frost$core$Int) {$tmp122};
if ($tmp42) goto block19; else goto block20;
block19:;
int64_t $tmp124 = $tmp123.value;
int64_t $tmp125 = $tmp43.value;
bool $tmp126 = $tmp124 >= $tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block18; else goto block4;
block20:;
int64_t $tmp129 = $tmp123.value;
int64_t $tmp130 = $tmp43.value;
bool $tmp131 = $tmp129 > $tmp130;
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block18; else goto block4;
block18:;
int64_t $tmp134 = $tmp119.value;
int64_t $tmp135 = $tmp43.value;
int64_t $tmp136 = $tmp134 + $tmp135;
frost$core$Int $tmp137 = (frost$core$Int) {$tmp136};
*(&local1) = $tmp137;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:423
frost$core$MutableString* $tmp138 = *(&local0);
frost$core$String* $tmp139 = frost$core$MutableString$finish$R$frost$core$String($tmp138);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$MutableString* $tmp140 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp139;

}
void org$frostlang$frostc$IR$Block$cleanup(org$frostlang$frostc$IR$Block* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:372
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp141 = &param0->ids;
frost$collections$Array* $tmp142 = *$tmp141;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$collections$Array** $tmp143 = &param0->statements;
frost$collections$Array* $tmp144 = *$tmp143;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
return;

}

