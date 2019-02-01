#include "org/frostlang/frostc/IR/Block.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int64.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$IR$Block$class_type org$frostlang$frostc$IR$Block$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$IR$Block$get_asString$R$frost$core$String, org$frostlang$frostc$IR$Block$cleanup} };

typedef frost$core$Int64 (*$fn25)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 29, -7272186206410497000, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };

void org$frostlang$frostc$IR$Block$init$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR$Block* param0, org$frostlang$frostc$IR$Block$ID param1) {

// line 398
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$collections$Array** $tmp3 = &param0->ids;
frost$collections$Array* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$Array** $tmp5 = &param0->ids;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// line 400
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp6 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$Array** $tmp7 = &param0->statements;
frost$collections$Array* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$Array** $tmp9 = &param0->statements;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// line 406
frost$core$Bit $tmp10 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp11 = &param0->containsExplicitCode;
*$tmp11 = $tmp10;
// line 409
org$frostlang$frostc$IR$Block$ID* $tmp12 = &param0->id;
*$tmp12 = param1;
return;

}
frost$core$String* org$frostlang$frostc$IR$Block$get_asString$R$frost$core$String(org$frostlang$frostc$IR$Block* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
// line 414
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp13 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$IR$Block$ID* $tmp14 = &param0->id;
org$frostlang$frostc$IR$Block$ID $tmp15 = *$tmp14;
frost$core$String* $tmp16 = org$frostlang$frostc$IR$Block$ID$get_asString$R$frost$core$String($tmp15);
frost$core$String* $tmp17 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp16, &$s18);
frost$core$MutableString$init$frost$core$String($tmp13, $tmp17);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$MutableString* $tmp19 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
*(&local0) = $tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// line 415
frost$core$Int64 $tmp20 = (frost$core$Int64) {0};
frost$collections$Array** $tmp21 = &param0->statements;
frost$collections$Array* $tmp22 = *$tmp21;
ITable* $tmp23 = ((frost$collections$CollectionView*) $tmp22)->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp23 = $tmp23->next;
}
$fn25 $tmp24 = $tmp23->methods[0];
frost$core$Int64 $tmp26 = $tmp24(((frost$collections$CollectionView*) $tmp22));
frost$core$Bit $tmp27 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp28 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp20, $tmp26, $tmp27);
frost$core$Int64 $tmp29 = $tmp28.min;
*(&local1) = $tmp29;
frost$core$Int64 $tmp30 = $tmp28.max;
frost$core$Bit $tmp31 = $tmp28.inclusive;
bool $tmp32 = $tmp31.value;
frost$core$Int64 $tmp33 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp34 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp33);
if ($tmp32) goto block4; else goto block5;
block4:;
int64_t $tmp35 = $tmp29.value;
int64_t $tmp36 = $tmp30.value;
bool $tmp37 = $tmp35 <= $tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block1; else goto block2;
block5:;
int64_t $tmp40 = $tmp29.value;
int64_t $tmp41 = $tmp30.value;
bool $tmp42 = $tmp40 < $tmp41;
frost$core$Bit $tmp43 = (frost$core$Bit) {$tmp42};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block1; else goto block2;
block1:;
// line 416
frost$core$MutableString* $tmp45 = *(&local0);
frost$collections$Array** $tmp46 = &param0->ids;
frost$collections$Array* $tmp47 = *$tmp46;
frost$core$Int64 $tmp48 = *(&local1);
frost$core$Object* $tmp49 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp47, $tmp48);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp50;
$tmp50 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp50->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp49)->value;
frost$core$MutableString$append$frost$core$Object($tmp45, ((frost$core$Object*) $tmp50));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$Frost$unref$frost$core$Object$Q($tmp49);
// line 417
frost$core$MutableString* $tmp51 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp51, &$s52);
// line 418
frost$core$MutableString* $tmp53 = *(&local0);
frost$collections$Array** $tmp54 = &param0->statements;
frost$collections$Array* $tmp55 = *$tmp54;
frost$core$Int64 $tmp56 = *(&local1);
frost$core$Object* $tmp57 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp55, $tmp56);
frost$core$MutableString$append$frost$core$Object($tmp53, ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp57)));
frost$core$Frost$unref$frost$core$Object$Q($tmp57);
// line 419
frost$core$MutableString* $tmp58 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp58, &$s59);
goto block3;
block3:;
frost$core$Int64 $tmp60 = *(&local1);
int64_t $tmp61 = $tmp30.value;
int64_t $tmp62 = $tmp60.value;
int64_t $tmp63 = $tmp61 - $tmp62;
frost$core$Int64 $tmp64 = (frost$core$Int64) {$tmp63};
frost$core$UInt64 $tmp65 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp64);
if ($tmp32) goto block7; else goto block8;
block7:;
uint64_t $tmp66 = $tmp65.value;
uint64_t $tmp67 = $tmp34.value;
bool $tmp68 = $tmp66 >= $tmp67;
frost$core$Bit $tmp69 = (frost$core$Bit) {$tmp68};
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block6; else goto block2;
block8:;
uint64_t $tmp71 = $tmp65.value;
uint64_t $tmp72 = $tmp34.value;
bool $tmp73 = $tmp71 > $tmp72;
frost$core$Bit $tmp74 = (frost$core$Bit) {$tmp73};
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block6; else goto block2;
block6:;
int64_t $tmp76 = $tmp60.value;
int64_t $tmp77 = $tmp33.value;
int64_t $tmp78 = $tmp76 + $tmp77;
frost$core$Int64 $tmp79 = (frost$core$Int64) {$tmp78};
*(&local1) = $tmp79;
goto block1;
block2:;
// line 421
frost$core$MutableString* $tmp80 = *(&local0);
frost$core$String* $tmp81 = frost$core$MutableString$finish$R$frost$core$String($tmp80);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$MutableString* $tmp82 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp81;

}
void org$frostlang$frostc$IR$Block$cleanup(org$frostlang$frostc$IR$Block* param0) {

// line 372
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp83 = &param0->ids;
frost$collections$Array* $tmp84 = *$tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$collections$Array** $tmp85 = &param0->statements;
frost$collections$Array* $tmp86 = *$tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
return;

}

