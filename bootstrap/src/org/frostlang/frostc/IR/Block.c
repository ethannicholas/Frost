#include "org/frostlang/frostc/IR/Block.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int64.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$IR$Block$class_type org$frostlang$frostc$IR$Block$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$IR$Block$convert$R$frost$core$String, org$frostlang$frostc$IR$Block$cleanup} };

typedef frost$core$Int64 (*$fn23)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 29, -7272186206410497000, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };

void org$frostlang$frostc$IR$Block$init$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR$Block* param0, org$frostlang$frostc$IR$Block$ID param1) {

// line 287
frost$collections$Array* $tmp2 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$collections$Array** $tmp3 = &param0->ids;
frost$collections$Array* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$Array** $tmp5 = &param0->ids;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.IR.Statement.ID>)
// line 289
frost$collections$Array* $tmp6 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$Array** $tmp7 = &param0->statements;
frost$collections$Array* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$Array** $tmp9 = &param0->statements;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// unreffing REF($16:frost.collections.Array<org.frostlang.frostc.IR.Statement>)
// line 292
org$frostlang$frostc$IR$Block$ID* $tmp10 = &param0->id;
*$tmp10 = param1;
return;

}
frost$core$String* org$frostlang$frostc$IR$Block$convert$R$frost$core$String(org$frostlang$frostc$IR$Block* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
// line 297
frost$core$MutableString* $tmp11 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$IR$Block$ID* $tmp12 = &param0->id;
org$frostlang$frostc$IR$Block$ID $tmp13 = *$tmp12;
frost$core$String* $tmp14 = org$frostlang$frostc$IR$Block$ID$convert$R$frost$core$String($tmp13);
frost$core$String* $tmp15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp14, &$s16);
frost$core$MutableString$init$frost$core$String($tmp11, $tmp15);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$MutableString* $tmp17 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
*(&local0) = $tmp11;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
// unreffing REF($1:frost.core.MutableString)
// line 298
frost$core$Int64 $tmp18 = (frost$core$Int64) {0};
frost$collections$Array** $tmp19 = &param0->statements;
frost$collections$Array* $tmp20 = *$tmp19;
ITable* $tmp21 = ((frost$collections$CollectionView*) $tmp20)->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp21 = $tmp21->next;
}
$fn23 $tmp22 = $tmp21->methods[0];
frost$core$Int64 $tmp24 = $tmp22(((frost$collections$CollectionView*) $tmp20));
frost$core$Bit $tmp25 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp26 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp18, $tmp24, $tmp25);
frost$core$Int64 $tmp27 = $tmp26.min;
*(&local1) = $tmp27;
frost$core$Int64 $tmp28 = $tmp26.max;
frost$core$Bit $tmp29 = $tmp26.inclusive;
bool $tmp30 = $tmp29.value;
frost$core$Int64 $tmp31 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp32 = frost$core$Int64$convert$R$frost$core$UInt64($tmp31);
if ($tmp30) goto block4; else goto block5;
block4:;
int64_t $tmp33 = $tmp27.value;
int64_t $tmp34 = $tmp28.value;
bool $tmp35 = $tmp33 <= $tmp34;
frost$core$Bit $tmp36 = (frost$core$Bit) {$tmp35};
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block1; else goto block2;
block5:;
int64_t $tmp38 = $tmp27.value;
int64_t $tmp39 = $tmp28.value;
bool $tmp40 = $tmp38 < $tmp39;
frost$core$Bit $tmp41 = (frost$core$Bit) {$tmp40};
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block1; else goto block2;
block1:;
// line 299
frost$core$MutableString* $tmp43 = *(&local0);
frost$collections$Array** $tmp44 = &param0->ids;
frost$collections$Array* $tmp45 = *$tmp44;
frost$core$Int64 $tmp46 = *(&local1);
frost$core$Object* $tmp47 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp45, $tmp46);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp48;
$tmp48 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp48->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp47)->value;
frost$core$MutableString$append$frost$core$Object($tmp43, ((frost$core$Object*) $tmp48));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
// unreffing REF($60:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q($tmp47);
// unreffing REF($58:frost.collections.Array.T)
// line 300
frost$core$MutableString* $tmp49 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp49, &$s50);
// line 301
frost$core$MutableString* $tmp51 = *(&local0);
frost$collections$Array** $tmp52 = &param0->statements;
frost$collections$Array* $tmp53 = *$tmp52;
frost$core$Int64 $tmp54 = *(&local1);
frost$core$Object* $tmp55 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp53, $tmp54);
frost$core$MutableString$append$frost$core$Object($tmp51, ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp55)));
frost$core$Frost$unref$frost$core$Object$Q($tmp55);
// unreffing REF($77:frost.collections.Array.T)
// line 302
frost$core$MutableString* $tmp56 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp56, &$s57);
goto block3;
block3:;
frost$core$Int64 $tmp58 = *(&local1);
int64_t $tmp59 = $tmp28.value;
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59 - $tmp60;
frost$core$Int64 $tmp62 = (frost$core$Int64) {$tmp61};
frost$core$UInt64 $tmp63 = frost$core$Int64$convert$R$frost$core$UInt64($tmp62);
if ($tmp30) goto block7; else goto block8;
block7:;
uint64_t $tmp64 = $tmp63.value;
uint64_t $tmp65 = $tmp32.value;
bool $tmp66 = $tmp64 >= $tmp65;
frost$core$Bit $tmp67 = (frost$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block6; else goto block2;
block8:;
uint64_t $tmp69 = $tmp63.value;
uint64_t $tmp70 = $tmp32.value;
bool $tmp71 = $tmp69 > $tmp70;
frost$core$Bit $tmp72 = (frost$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block6; else goto block2;
block6:;
int64_t $tmp74 = $tmp58.value;
int64_t $tmp75 = $tmp31.value;
int64_t $tmp76 = $tmp74 + $tmp75;
frost$core$Int64 $tmp77 = (frost$core$Int64) {$tmp76};
*(&local1) = $tmp77;
goto block1;
block2:;
// line 304
frost$core$MutableString* $tmp78 = *(&local0);
frost$core$String* $tmp79 = frost$core$MutableString$finish$R$frost$core$String($tmp78);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// unreffing REF($115:frost.core.String)
frost$core$MutableString* $tmp80 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp79;

}
void org$frostlang$frostc$IR$Block$cleanup(org$frostlang$frostc$IR$Block* param0) {

// line 266
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp81 = &param0->ids;
frost$collections$Array* $tmp82 = *$tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$collections$Array** $tmp83 = &param0->statements;
frost$collections$Array* $tmp84 = *$tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
return;

}

