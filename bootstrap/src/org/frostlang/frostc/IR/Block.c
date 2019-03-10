#include "org/frostlang/frostc/IR/Block.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int64.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$IR$Block$class_type org$frostlang$frostc$IR$Block$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$IR$Block$get_asString$R$frost$core$String, org$frostlang$frostc$IR$Block$cleanup} };

typedef frost$core$String* (*$fn21)(frost$core$Object*);
typedef frost$core$Int64 (*$fn35)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn68)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn84)(frost$core$Object*);
typedef frost$core$Int64 (*$fn100)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn115)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 29, -7242955456988393464, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b", 5, 1505885265403634530, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x0a", 2, 584938020052538053, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
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
frost$core$Int64 local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:416
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp15 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$IR$Block$ID* $tmp16 = &param0->id;
org$frostlang$frostc$IR$Block$ID $tmp17 = *$tmp16;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.get_asString():frost.core.String from IR.frost:416:44
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:392
frost$core$Int64 $tmp18 = $tmp17.value;
frost$core$Int64$wrapper* $tmp19;
$tmp19 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
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
frost$core$Int64 $tmp30 = (frost$core$Int64) {0u};
frost$collections$Array** $tmp31 = &param0->statements;
frost$collections$Array* $tmp32 = *$tmp31;
ITable* $tmp33 = ((frost$collections$CollectionView*) $tmp32)->$class->itable;
while ($tmp33->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp33 = $tmp33->next;
}
$fn35 $tmp34 = $tmp33->methods[0];
frost$core$Int64 $tmp36 = $tmp34(((frost$collections$CollectionView*) $tmp32));
frost$core$Bit $tmp37 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp38 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp30, $tmp36, $tmp37);
frost$core$Int64 $tmp39 = $tmp38.min;
*(&local1) = $tmp39;
frost$core$Int64 $tmp40 = $tmp38.max;
frost$core$Bit $tmp41 = $tmp38.inclusive;
bool $tmp42 = $tmp41.value;
frost$core$Int64 $tmp43 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp44 = $tmp43.value;
frost$core$UInt64 $tmp45 = (frost$core$UInt64) {((uint64_t) $tmp44)};
if ($tmp42) goto block7; else goto block8;
block7:;
int64_t $tmp46 = $tmp39.value;
int64_t $tmp47 = $tmp40.value;
bool $tmp48 = $tmp46 <= $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block4; else goto block5;
block8:;
int64_t $tmp51 = $tmp39.value;
int64_t $tmp52 = $tmp40.value;
bool $tmp53 = $tmp51 < $tmp52;
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:418
frost$core$MutableString* $tmp56 = *(&local0);
frost$collections$Array** $tmp57 = &param0->ids;
frost$collections$Array* $tmp58 = *$tmp57;
frost$core$Int64 $tmp59 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from IR.frost:418:34
frost$core$Int64 $tmp60 = (frost$core$Int64) {0u};
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60.value;
bool $tmp63 = $tmp61 >= $tmp62;
frost$core$Bit $tmp64 = (frost$core$Bit) {$tmp63};
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block12; else goto block11;
block12:;
ITable* $tmp66 = ((frost$collections$CollectionView*) $tmp58)->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp66 = $tmp66->next;
}
$fn68 $tmp67 = $tmp66->methods[0];
frost$core$Int64 $tmp69 = $tmp67(((frost$collections$CollectionView*) $tmp58));
int64_t $tmp70 = $tmp59.value;
int64_t $tmp71 = $tmp69.value;
bool $tmp72 = $tmp70 < $tmp71;
frost$core$Bit $tmp73 = (frost$core$Bit) {$tmp72};
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp75 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s76, $tmp75, &$s77);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp78 = &$tmp58->data;
frost$core$Object** $tmp79 = *$tmp78;
int64_t $tmp80 = $tmp59.value;
frost$core$Object* $tmp81 = $tmp79[$tmp80];
frost$core$Frost$ref$frost$core$Object$Q($tmp81);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp82;
$tmp82 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp82->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp81)->value;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from IR.frost:418:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn84 $tmp83 = ($fn84) ((frost$core$Object*) $tmp82)->$class->vtable[0];
frost$core$String* $tmp85 = $tmp83(((frost$core$Object*) $tmp82));
frost$core$MutableString$append$frost$core$String($tmp56, $tmp85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q($tmp81);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:419
frost$core$MutableString* $tmp86 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp86, &$s87);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:420
frost$core$MutableString* $tmp88 = *(&local0);
frost$collections$Array** $tmp89 = &param0->statements;
frost$collections$Array* $tmp90 = *$tmp89;
frost$core$Int64 $tmp91 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from IR.frost:420:41
frost$core$Int64 $tmp92 = (frost$core$Int64) {0u};
int64_t $tmp93 = $tmp91.value;
int64_t $tmp94 = $tmp92.value;
bool $tmp95 = $tmp93 >= $tmp94;
frost$core$Bit $tmp96 = (frost$core$Bit) {$tmp95};
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block17; else goto block16;
block17:;
ITable* $tmp98 = ((frost$collections$CollectionView*) $tmp90)->$class->itable;
while ($tmp98->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[0];
frost$core$Int64 $tmp101 = $tmp99(((frost$collections$CollectionView*) $tmp90));
int64_t $tmp102 = $tmp91.value;
int64_t $tmp103 = $tmp101.value;
bool $tmp104 = $tmp102 < $tmp103;
frost$core$Bit $tmp105 = (frost$core$Bit) {$tmp104};
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp107 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s108, $tmp107, &$s109);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp110 = &$tmp90->data;
frost$core$Object** $tmp111 = *$tmp110;
int64_t $tmp112 = $tmp91.value;
frost$core$Object* $tmp113 = $tmp111[$tmp112];
frost$core$Frost$ref$frost$core$Object$Q($tmp113);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from IR.frost:420:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn115 $tmp114 = ($fn115) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp113))->$class->vtable[0];
frost$core$String* $tmp116 = $tmp114(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp113)));
frost$core$MutableString$append$frost$core$String($tmp88, $tmp116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$core$Frost$unref$frost$core$Object$Q($tmp113);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:421
frost$core$MutableString* $tmp117 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp117, &$s118);
frost$core$Int64 $tmp119 = *(&local1);
int64_t $tmp120 = $tmp40.value;
int64_t $tmp121 = $tmp119.value;
int64_t $tmp122 = $tmp120 - $tmp121;
frost$core$Int64 $tmp123 = (frost$core$Int64) {$tmp122};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp124 = $tmp123.value;
frost$core$UInt64 $tmp125 = (frost$core$UInt64) {((uint64_t) $tmp124)};
if ($tmp42) goto block21; else goto block22;
block21:;
uint64_t $tmp126 = $tmp125.value;
uint64_t $tmp127 = $tmp45.value;
bool $tmp128 = $tmp126 >= $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block19; else goto block5;
block22:;
uint64_t $tmp131 = $tmp125.value;
uint64_t $tmp132 = $tmp45.value;
bool $tmp133 = $tmp131 > $tmp132;
frost$core$Bit $tmp134 = (frost$core$Bit) {$tmp133};
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block19; else goto block5;
block19:;
int64_t $tmp136 = $tmp119.value;
int64_t $tmp137 = $tmp43.value;
int64_t $tmp138 = $tmp136 + $tmp137;
frost$core$Int64 $tmp139 = (frost$core$Int64) {$tmp138};
*(&local1) = $tmp139;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:423
frost$core$MutableString* $tmp140 = *(&local0);
frost$core$String* $tmp141 = frost$core$MutableString$finish$R$frost$core$String($tmp140);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
frost$core$MutableString* $tmp142 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp141;

}
void org$frostlang$frostc$IR$Block$cleanup(org$frostlang$frostc$IR$Block* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:372
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp143 = &param0->ids;
frost$collections$Array* $tmp144 = *$tmp143;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$collections$Array** $tmp145 = &param0->statements;
frost$collections$Array* $tmp146 = *$tmp145;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
return;

}

