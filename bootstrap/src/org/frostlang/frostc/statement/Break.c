#include "org/frostlang/frostc/statement/Break.h"
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
org$frostlang$frostc$statement$Break$class_type org$frostlang$frostc$statement$Break$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Break$cleanup} };

typedef org$frostlang$frostc$IR$Statement$ID (*$fn30)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x42\x72\x65\x61\x6b", 36, -4868280243405435060, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x72\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 11, -2897467709932721922, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 131, -1829207491133654075, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x72\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 11, -2897467709932721922, NULL };

void org$frostlang$frostc$statement$Break$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2) {

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
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit($tmp7 != NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp10 = (frost$core$Int64) {13};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s11, $tmp10, &$s12);
abort(); // unreachable
block3:;
frost$core$Int64* $tmp13 = &$tmp7->$rawValue;
frost$core$Int64 $tmp14 = *$tmp13;
frost$core$Int64 $tmp15 = (frost$core$Int64) {0};
frost$core$Bit $tmp16 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp14, $tmp15);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block6; else goto block7;
block6:;
frost$core$String** $tmp18 = (frost$core$String**) ($tmp7->$data + 0);
frost$core$String* $tmp19 = *$tmp18;
org$frostlang$frostc$IR$Block$ID* $tmp20 = (org$frostlang$frostc$IR$Block$ID*) ($tmp7->$data + 8);
org$frostlang$frostc$IR$Block$ID $tmp21 = *$tmp20;
*(&local1) = $tmp21;
org$frostlang$frostc$IR$Block$ID* $tmp22 = (org$frostlang$frostc$IR$Block$ID*) ($tmp7->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp23 = *$tmp22;
// line 15
org$frostlang$frostc$IR** $tmp24 = &param0->ir;
org$frostlang$frostc$IR* $tmp25 = *$tmp24;
org$frostlang$frostc$IR$Statement* $tmp26 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp27 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp28 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp26, $tmp27, param1, $tmp28);
$fn30 $tmp29 = ($fn30) $tmp25->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp31 = $tmp29($tmp25, $tmp26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($44:org.frostlang.frostc.IR.Statement)
goto block5;
block7:;
// line 18
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit(false);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp34 = (frost$core$Int64) {18};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s35, $tmp34);
abort(); // unreachable
block8:;
goto block5;
block5:;
goto block2;
block2:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp36 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
// unreffing l
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
return;

}
void org$frostlang$frostc$statement$Break$init(org$frostlang$frostc$statement$Break* param0) {

return;

}
void org$frostlang$frostc$statement$Break$cleanup(org$frostlang$frostc$statement$Break* param0) {

// line 8
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






