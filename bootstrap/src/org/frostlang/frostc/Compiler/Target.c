#include "org/frostlang/frostc/Compiler/Target.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$Target$class_type org$frostlang$frostc$Compiler$Target$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$Target$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x61\x72\x67\x65\x74", 36, -1488967827986507996, NULL };

void org$frostlang$frostc$Compiler$Target$cleanup(org$frostlang$frostc$Compiler$Target* param0) {

org$frostlang$frostc$Variable* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
// line 171
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Variable** $tmp7 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
org$frostlang$frostc$Variable* $tmp8 = *$tmp7;
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
org$frostlang$frostc$Variable* $tmp9 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local0) = $tmp8;
org$frostlang$frostc$IR$Value** $tmp10 = (org$frostlang$frostc$IR$Value**) (param0->$data + 8);
org$frostlang$frostc$IR$Value* $tmp11 = *$tmp10;
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
org$frostlang$frostc$IR$Value* $tmp12 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local1) = $tmp11;
// line 1
org$frostlang$frostc$Variable* $tmp13 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// line 1
org$frostlang$frostc$IR$Value* $tmp14 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
org$frostlang$frostc$IR$Value* $tmp15 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Variable* $tmp16 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp17 = (frost$core$Int64) {1};
frost$core$Bit $tmp18 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp17);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block4; else goto block1;
block4:;
org$frostlang$frostc$FixedArray** $tmp20 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
org$frostlang$frostc$FixedArray* $tmp21 = *$tmp20;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
org$frostlang$frostc$FixedArray* $tmp22 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
*(&local2) = $tmp21;
// line 1
org$frostlang$frostc$FixedArray* $tmp23 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
org$frostlang$frostc$FixedArray* $tmp24 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block1:;
// line 171
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$Compiler$Target$init$frost$core$Int64$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler$Target* param0, frost$core$Int64 param1, org$frostlang$frostc$Variable* param2, org$frostlang$frostc$IR$Value* param3) {

// line 171
frost$core$Int64* $tmp25 = &param0->$rawValue;
*$tmp25 = param1;
// line 171
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Variable** $tmp26 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
*$tmp26 = param2;
// line 171
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp27 = (org$frostlang$frostc$IR$Value**) (param0->$data + 8);
*$tmp27 = param3;
return;

}
void org$frostlang$frostc$Compiler$Target$init$frost$core$Int64$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Compiler$Target$GT(org$frostlang$frostc$Compiler$Target* param0, frost$core$Int64 param1, org$frostlang$frostc$FixedArray* param2) {

// line 171
frost$core$Int64* $tmp28 = &param0->$rawValue;
*$tmp28 = param1;
// line 171
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$FixedArray** $tmp29 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
*$tmp29 = param2;
return;

}

