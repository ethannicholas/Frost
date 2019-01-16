#include "org/frostlang/frostc/statement/Continue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Continue$class_type org$frostlang$frostc$statement$Continue$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$statement$Continue$cleanup} };

typedef org$frostlang$frostc$IR$Statement$ID (*$fn25)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x43\x6f\x6e\x74\x69\x6e\x75\x65", 39, 4837893405445383104, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x66\x72\x6f\x73\x74", 14, -7855305760879133046, NULL };

void org$frostlang$frostc$statement$Continue$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2) {

org$frostlang$frostc$Compiler$EnclosingContext* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
// line 11
org$frostlang$frostc$Compiler$EnclosingContext* $tmp2 = org$frostlang$frostc$Compiler$findAndLeaveToLoopScope$org$frostlang$frostc$Position$frost$core$String$Q$R$org$frostlang$frostc$Compiler$EnclosingContext$Q(param0, param1, param2);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp3 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
*(&local0) = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// unreffing REF($1:org.frostlang.frostc.Compiler.EnclosingContext?)
// line 12
org$frostlang$frostc$Compiler$EnclosingContext* $tmp4 = *(&local0);
frost$core$Bit $tmp5 = frost$core$Bit$init$builtin_bit($tmp4 != NULL);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block1; else goto block2;
block1:;
// line 13
org$frostlang$frostc$Compiler$EnclosingContext* $tmp7 = *(&local0);
frost$core$Int64* $tmp8 = &$tmp7->$rawValue;
frost$core$Int64 $tmp9 = *$tmp8;
frost$core$Int64 $tmp10 = (frost$core$Int64) {0};
frost$core$Bit $tmp11 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp9, $tmp10);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block4; else goto block5;
block4:;
frost$core$String** $tmp13 = (frost$core$String**) ($tmp7->$data + 0);
frost$core$String* $tmp14 = *$tmp13;
org$frostlang$frostc$IR$Block$ID* $tmp15 = (org$frostlang$frostc$IR$Block$ID*) ($tmp7->$data + 8);
org$frostlang$frostc$IR$Block$ID $tmp16 = *$tmp15;
org$frostlang$frostc$IR$Block$ID* $tmp17 = (org$frostlang$frostc$IR$Block$ID*) ($tmp7->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp18 = *$tmp17;
*(&local1) = $tmp18;
// line 15
org$frostlang$frostc$IR** $tmp19 = &param0->ir;
org$frostlang$frostc$IR* $tmp20 = *$tmp19;
org$frostlang$frostc$IR$Statement* $tmp21 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp22 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp23 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp21, $tmp22, param1, $tmp23);
$fn25 $tmp24 = ($fn25) $tmp20->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp26 = $tmp24($tmp20, $tmp21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing REF($37:org.frostlang.frostc.IR.Statement)
goto block3;
block5:;
// line 18
frost$core$Bit $tmp27 = frost$core$Bit$init$builtin_bit(false);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp29 = (frost$core$Int64) {18};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s30, $tmp29);
abort(); // unreachable
block6:;
goto block3;
block3:;
goto block2;
block2:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp31 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
// unreffing l
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
return;

}
void org$frostlang$frostc$statement$Continue$init(org$frostlang$frostc$statement$Continue* param0) {

return;

}
void org$frostlang$frostc$statement$Continue$cleanup(org$frostlang$frostc$statement$Continue* param0) {

// line 8
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






