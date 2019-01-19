#include "org/frostlang/frostc/statement/Assignment.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "frost/core/Bit.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/expression/Binary.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Assignment$class_type org$frostlang$frostc$statement$Assignment$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Assignment$cleanup} };

typedef frost$core$Bit (*$fn12)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn37)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn87)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn100)(org$frostlang$frostc$lvalue$LValue*);
typedef org$frostlang$frostc$IR$Value* (*$fn112)(org$frostlang$frostc$lvalue$LValue*);
typedef org$frostlang$frostc$Type* (*$fn140)(org$frostlang$frostc$lvalue$LValue*);
typedef void (*$fn164)(org$frostlang$frostc$lvalue$LValue*, org$frostlang$frostc$IR$Value*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74", 41, 4166699868084837216, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 15, -6277848839784652004, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 2397797701155234970, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 2397797701155234970, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 107, -5100597373488824507, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 2397797701155234970, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 107, -5100597373488824507, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 2397797701155234970, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 2397797701155234970, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 107, -5100597373488824507, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 2397797701155234970, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 107, -5100597373488824507, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 2397797701155234970, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };

void org$frostlang$frostc$statement$Assignment$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$parser$Token$Kind param3, org$frostlang$frostc$ASTNode* param4) {

org$frostlang$frostc$Position local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$parser$Token$Kind local2;
org$frostlang$frostc$ASTNode* local3 = NULL;
frost$collections$Array* local4 = NULL;
org$frostlang$frostc$IR$Value* local5 = NULL;
org$frostlang$frostc$lvalue$LValue* local6 = NULL;
org$frostlang$frostc$IR$Value* local7 = NULL;
org$frostlang$frostc$IR$Value* local8 = NULL;
// line 17
frost$core$Bit $tmp2 = org$frostlang$frostc$Compiler$isAssignment$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit(param3);
frost$core$Bit $tmp3 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2);
bool $tmp4 = $tmp3.value;
if ($tmp4) goto block1; else goto block2;
block1:;
// line 18
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s5);
// line 19
return;
block2:;
// line 21
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp6;
$tmp6 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp6->value = param3;
frost$core$Int64 $tmp7 = (frost$core$Int64) {77};
org$frostlang$frostc$parser$Token$Kind $tmp8 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp7);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp9;
$tmp9 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp9->value = $tmp8;
ITable* $tmp10 = ((frost$core$Equatable*) $tmp6)->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
frost$core$Bit $tmp13 = $tmp11(((frost$core$Equatable*) $tmp6), ((frost$core$Equatable*) $tmp9));
bool $tmp14 = $tmp13.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp9)));
// unreffing REF($14:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp6)));
// unreffing REF($10:frost.core.Equatable<org.frostlang.frostc.parser.Token.Kind>)
if ($tmp14) goto block3; else goto block4;
block3:;
// line 22
frost$core$Int64* $tmp15 = &param2->$rawValue;
frost$core$Int64 $tmp16 = *$tmp15;
frost$core$Int64 $tmp17 = (frost$core$Int64) {5};
frost$core$Bit $tmp18 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp16, $tmp17);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Position* $tmp20 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp21 = *$tmp20;
*(&local0) = $tmp21;
org$frostlang$frostc$ASTNode** $tmp22 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp23 = *$tmp22;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
org$frostlang$frostc$ASTNode* $tmp24 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local1) = $tmp23;
org$frostlang$frostc$parser$Token$Kind* $tmp25 = (org$frostlang$frostc$parser$Token$Kind*) (param2->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp26 = *$tmp25;
*(&local2) = $tmp26;
org$frostlang$frostc$ASTNode** $tmp27 = (org$frostlang$frostc$ASTNode**) (param2->$data + 32);
org$frostlang$frostc$ASTNode* $tmp28 = *$tmp27;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
org$frostlang$frostc$ASTNode* $tmp29 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local3) = $tmp28;
// line 24
org$frostlang$frostc$parser$Token$Kind $tmp30 = *(&local2);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp31;
$tmp31 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp31->value = $tmp30;
frost$core$Int64 $tmp32 = (frost$core$Int64) {105};
org$frostlang$frostc$parser$Token$Kind $tmp33 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp32);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp34;
$tmp34 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp34->value = $tmp33;
ITable* $tmp35 = ((frost$core$Equatable*) $tmp31)->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp35 = $tmp35->next;
}
$fn37 $tmp36 = $tmp35->methods[0];
frost$core$Bit $tmp38 = $tmp36(((frost$core$Equatable*) $tmp31), ((frost$core$Equatable*) $tmp34));
bool $tmp39 = $tmp38.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp34)));
// unreffing REF($62:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp31)));
// unreffing REF($58:frost.core.Equatable<org.frostlang.frostc.parser.Token.Kind>)
if ($tmp39) goto block7; else goto block8;
block7:;
// line 25
frost$collections$Array* $tmp40 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp40);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$collections$Array* $tmp41 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
*(&local4) = $tmp40;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// unreffing REF($74:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 26
org$frostlang$frostc$ASTNode* $tmp42 = *(&local1);
org$frostlang$frostc$Compiler$TypeContext* $tmp43 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp44 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp43, $tmp44);
org$frostlang$frostc$IR$Value* $tmp45 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp42, $tmp43);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
org$frostlang$frostc$IR$Value* $tmp46 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
*(&local5) = $tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// unreffing REF($92:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// unreffing REF($89:org.frostlang.frostc.Compiler.TypeContext)
// line 27
org$frostlang$frostc$IR$Value* $tmp47 = *(&local5);
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit($tmp47 == NULL);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block9; else goto block10;
block9:;
// line 28
org$frostlang$frostc$IR$Value* $tmp50 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// unreffing compiledBase
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp51 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing args
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp52 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// unreffing index
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp53 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
// unreffing base
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return;
block10:;
// line 30
frost$collections$Array* $tmp54 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp55 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp54, ((frost$core$Object*) $tmp55));
// line 31
frost$collections$Array* $tmp56 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp56, ((frost$core$Object*) param4));
// line 32
org$frostlang$frostc$Position $tmp57 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp58 = *(&local5);
frost$core$Bit $tmp59 = frost$core$Bit$init$builtin_bit($tmp58 != NULL);
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp61 = (frost$core$Int64) {32};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s62, $tmp61, &$s63);
abort(); // unreachable
block11:;
frost$collections$Array* $tmp64 = *(&local4);
org$frostlang$frostc$Compiler$TypeContext* $tmp65 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp66 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp65, $tmp66);
org$frostlang$frostc$IR$Value* $tmp67 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp57, $tmp58, &$s68, ((frost$collections$ListView*) $tmp64), $tmp65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing REF($161:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing REF($158:org.frostlang.frostc.Compiler.TypeContext)
// line 34
org$frostlang$frostc$IR$Value* $tmp69 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing compiledBase
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp70 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// unreffing args
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp71 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing index
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp72 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing base
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return;
block8:;
org$frostlang$frostc$ASTNode* $tmp73 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing index
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp74 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing base
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block5:;
goto block4;
block4:;
// line 39
org$frostlang$frostc$lvalue$LValue* $tmp75 = org$frostlang$frostc$lvalue$LValue$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$lvalue$LValue$Q(param0, param2);
*(&local6) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
org$frostlang$frostc$lvalue$LValue* $tmp76 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
*(&local6) = $tmp75;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing REF($203:org.frostlang.frostc.lvalue.LValue?)
// line 40
org$frostlang$frostc$lvalue$LValue* $tmp77 = *(&local6);
frost$core$Bit $tmp78 = frost$core$Bit$init$builtin_bit($tmp77 == NULL);
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block13; else goto block14;
block13:;
// line 41
org$frostlang$frostc$lvalue$LValue* $tmp80 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
// unreffing left
*(&local6) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;
block14:;
// line 43
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 44
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp81;
$tmp81 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp81->value = param3;
frost$core$Int64 $tmp82 = (frost$core$Int64) {77};
org$frostlang$frostc$parser$Token$Kind $tmp83 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp82);
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp84;
$tmp84 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp84->value = $tmp83;
ITable* $tmp85 = ((frost$core$Equatable*) $tmp81)->$class->itable;
while ($tmp85->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp85 = $tmp85->next;
}
$fn87 $tmp86 = $tmp85->methods[0];
frost$core$Bit $tmp88 = $tmp86(((frost$core$Equatable*) $tmp81), ((frost$core$Equatable*) $tmp84));
bool $tmp89 = $tmp88.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp84)));
// unreffing REF($234:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp81)));
// unreffing REF($230:frost.core.Equatable<org.frostlang.frostc.parser.Token.Kind>)
if ($tmp89) goto block15; else goto block17;
block15:;
// line 45
org$frostlang$frostc$Compiler$TypeContext* $tmp90 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp91 = (frost$core$Int64) {3};
org$frostlang$frostc$lvalue$LValue* $tmp92 = *(&local6);
frost$core$Bit $tmp93 = frost$core$Bit$init$builtin_bit($tmp92 != NULL);
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp95 = (frost$core$Int64) {45};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s96, $tmp95, &$s97);
abort(); // unreachable
block18:;
ITable* $tmp98 = $tmp92->$class->itable;
while ($tmp98->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[0];
org$frostlang$frostc$Type* $tmp101 = $tmp99($tmp92);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp90, $tmp91, $tmp101);
org$frostlang$frostc$IR$Value* $tmp102 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp90);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
org$frostlang$frostc$IR$Value* $tmp103 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
*(&local7) = $tmp102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing REF($260:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// unreffing REF($258:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing REF($246:org.frostlang.frostc.Compiler.TypeContext)
goto block16;
block17:;
// line 1
// line 48
org$frostlang$frostc$lvalue$LValue* $tmp104 = *(&local6);
frost$core$Bit $tmp105 = frost$core$Bit$init$builtin_bit($tmp104 != NULL);
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp107 = (frost$core$Int64) {48};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s108, $tmp107, &$s109);
abort(); // unreachable
block20:;
ITable* $tmp110 = $tmp104->$class->itable;
while ($tmp110->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp110 = $tmp110->next;
}
$fn112 $tmp111 = $tmp110->methods[1];
org$frostlang$frostc$IR$Value* $tmp113 = $tmp111($tmp104);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
org$frostlang$frostc$IR$Value* $tmp114 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local8) = $tmp113;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// unreffing REF($289:org.frostlang.frostc.IR.Value?)
// line 49
org$frostlang$frostc$IR$Value* $tmp115 = *(&local8);
frost$core$Bit $tmp116 = frost$core$Bit$init$builtin_bit($tmp115 == NULL);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block22; else goto block23;
block22:;
// line 50
org$frostlang$frostc$IR$Value* $tmp118 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
// unreffing load
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp119 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
// unreffing right
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$lvalue$LValue* $tmp120 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing left
*(&local6) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;
block23:;
// line 52
org$frostlang$frostc$ASTNode* $tmp121 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp122 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp123 = *(&local8);
frost$core$Bit $tmp124 = frost$core$Bit$init$builtin_bit($tmp123 != NULL);
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp126 = (frost$core$Int64) {53};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s127, $tmp126, &$s128);
abort(); // unreachable
block24:;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp121, $tmp122, param1, $tmp123);
org$frostlang$frostc$parser$Token$Kind $tmp129 = org$frostlang$frostc$Compiler$removeAssignment$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Kind(param3);
org$frostlang$frostc$Compiler$TypeContext* $tmp130 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp131 = (frost$core$Int64) {3};
org$frostlang$frostc$lvalue$LValue* $tmp132 = *(&local6);
frost$core$Bit $tmp133 = frost$core$Bit$init$builtin_bit($tmp132 != NULL);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp135 = (frost$core$Int64) {56};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s136, $tmp135, &$s137);
abort(); // unreachable
block26:;
ITable* $tmp138 = $tmp132->$class->itable;
while ($tmp138->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp138 = $tmp138->next;
}
$fn140 $tmp139 = $tmp138->methods[0];
org$frostlang$frostc$Type* $tmp141 = $tmp139($tmp132);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp130, $tmp131, $tmp141);
org$frostlang$frostc$IR$Value* $tmp142 = org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp121, $tmp129, param4, $tmp130);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
org$frostlang$frostc$IR$Value* $tmp143 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local7) = $tmp142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// unreffing REF($351:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
// unreffing REF($349:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// unreffing REF($337:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing REF($324:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$IR$Value* $tmp144 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
// unreffing load
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block16;
block16:;
// line 58
org$frostlang$frostc$IR$Value* $tmp145 = *(&local7);
frost$core$Bit $tmp146 = frost$core$Bit$init$builtin_bit($tmp145 == NULL);
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block28; else goto block29;
block28:;
// line 59
org$frostlang$frostc$IR$Value* $tmp148 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// unreffing right
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$lvalue$LValue* $tmp149 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// unreffing left
*(&local6) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;
block29:;
// line 61
org$frostlang$frostc$lvalue$LValue* $tmp150 = *(&local6);
frost$core$Bit $tmp151 = frost$core$Bit$init$builtin_bit($tmp150 != NULL);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp153 = (frost$core$Int64) {61};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s154, $tmp153, &$s155);
abort(); // unreachable
block30:;
org$frostlang$frostc$IR$Value* $tmp156 = *(&local7);
frost$core$Bit $tmp157 = frost$core$Bit$init$builtin_bit($tmp156 != NULL);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp159 = (frost$core$Int64) {61};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s160, $tmp159, &$s161);
abort(); // unreachable
block32:;
ITable* $tmp162 = $tmp150->$class->itable;
while ($tmp162->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp162 = $tmp162->next;
}
$fn164 $tmp163 = $tmp162->methods[2];
$tmp163($tmp150, $tmp156);
org$frostlang$frostc$IR$Value* $tmp165 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
// unreffing right
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$lvalue$LValue* $tmp166 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
// unreffing left
*(&local6) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;

}
void org$frostlang$frostc$statement$Assignment$init(org$frostlang$frostc$statement$Assignment* param0) {

return;

}
void org$frostlang$frostc$statement$Assignment$cleanup(org$frostlang$frostc$statement$Assignment* param0) {

// line 13
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






