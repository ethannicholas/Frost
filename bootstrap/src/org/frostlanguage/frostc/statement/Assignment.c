#include "org/frostlanguage/frostc/statement/Assignment.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "org/frostlanguage/frostc/parser/Token/Kind.h"
#include "frost/collections/Array.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "org/frostlanguage/frostc/lvalue/LValue.h"
#include "frost/core/Bit.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "org/frostlanguage/frostc/Compiler/TypeContext.h"
#include "frost/collections/ListView.h"
#include "org/frostlanguage/frostc/expression/Call.h"
#include "org/frostlanguage/frostc/Type.h"
#include "org/frostlanguage/frostc/expression/Binary.h"


static frost$core$String $s1;
org$frostlanguage$frostc$statement$Assignment$class_type org$frostlanguage$frostc$statement$Assignment$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$statement$Assignment$cleanup} };

typedef frost$core$Bit (*$fn12)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn37)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn82)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlanguage$frostc$Type* (*$fn90)(org$frostlanguage$frostc$lvalue$LValue*);
typedef org$frostlanguage$frostc$IR$Value* (*$fn99)(org$frostlanguage$frostc$lvalue$LValue*);
typedef org$frostlanguage$frostc$Type* (*$fn107)(org$frostlanguage$frostc$lvalue$LValue*);
typedef void (*$fn120)(org$frostlanguage$frostc$lvalue$LValue*, org$frostlanguage$frostc$IR$Value*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74", 45, -2889533511282512750, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 15, -6277848839784652004, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };

void org$frostlanguage$frostc$statement$Assignment$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$ASTNode* param2, org$frostlanguage$frostc$parser$Token$Kind param3, org$frostlanguage$frostc$ASTNode* param4) {

org$frostlanguage$frostc$Position local0;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
org$frostlanguage$frostc$parser$Token$Kind local2;
org$frostlanguage$frostc$ASTNode* local3 = NULL;
frost$collections$Array* local4 = NULL;
org$frostlanguage$frostc$IR$Value* local5 = NULL;
org$frostlanguage$frostc$lvalue$LValue* local6 = NULL;
org$frostlanguage$frostc$IR$Value* local7 = NULL;
// line 17
frost$core$Bit $tmp2 = org$frostlanguage$frostc$Compiler$isAssignment$org$frostlanguage$frostc$parser$Token$Kind$R$frost$core$Bit(param3);
frost$core$Bit $tmp3 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2);
bool $tmp4 = $tmp3.value;
if ($tmp4) goto block1; else goto block2;
block1:;
// line 18
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, &$s5);
// line 19
return;
block2:;
// line 21
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp6;
$tmp6 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp6->value = param3;
frost$core$Int64 $tmp7 = (frost$core$Int64) {74};
org$frostlanguage$frostc$parser$Token$Kind $tmp8 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp7);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp9;
$tmp9 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
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
// unreffing REF($10:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
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
org$frostlanguage$frostc$Position* $tmp20 = (org$frostlanguage$frostc$Position*) (param2->$data + 0);
org$frostlanguage$frostc$Position $tmp21 = *$tmp20;
*(&local0) = $tmp21;
org$frostlanguage$frostc$ASTNode** $tmp22 = (org$frostlanguage$frostc$ASTNode**) (param2->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp23 = *$tmp22;
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
org$frostlanguage$frostc$ASTNode* $tmp24 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local1) = $tmp23;
org$frostlanguage$frostc$parser$Token$Kind* $tmp25 = (org$frostlanguage$frostc$parser$Token$Kind*) (param2->$data + 24);
org$frostlanguage$frostc$parser$Token$Kind $tmp26 = *$tmp25;
*(&local2) = $tmp26;
org$frostlanguage$frostc$ASTNode** $tmp27 = (org$frostlanguage$frostc$ASTNode**) (param2->$data + 32);
org$frostlanguage$frostc$ASTNode* $tmp28 = *$tmp27;
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
org$frostlanguage$frostc$ASTNode* $tmp29 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local3) = $tmp28;
// line 24
org$frostlanguage$frostc$parser$Token$Kind $tmp30 = *(&local2);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp31;
$tmp31 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp31->value = $tmp30;
frost$core$Int64 $tmp32 = (frost$core$Int64) {102};
org$frostlanguage$frostc$parser$Token$Kind $tmp33 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp32);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp34;
$tmp34 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
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
// unreffing REF($58:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
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
// unreffing REF($74:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 26
org$frostlanguage$frostc$ASTNode* $tmp42 = *(&local1);
org$frostlanguage$frostc$Compiler$TypeContext* $tmp43 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp44 = (frost$core$Int64) {1};
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp43, $tmp44);
org$frostlanguage$frostc$IR$Value* $tmp45 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, $tmp42, $tmp43);
*(&local5) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
org$frostlanguage$frostc$IR$Value* $tmp46 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
*(&local5) = $tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// unreffing REF($92:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// unreffing REF($89:org.frostlanguage.frostc.Compiler.TypeContext)
// line 27
org$frostlanguage$frostc$IR$Value* $tmp47 = *(&local5);
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit($tmp47 == NULL);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block9; else goto block10;
block9:;
// line 28
org$frostlanguage$frostc$IR$Value* $tmp50 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// unreffing compiledBase
*(&local5) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp51 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing args
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp52 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// unreffing index
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp53 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
// unreffing base
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return;
block10:;
// line 30
frost$collections$Array* $tmp54 = *(&local4);
org$frostlanguage$frostc$ASTNode* $tmp55 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp54, ((frost$core$Object*) $tmp55));
// line 31
frost$collections$Array* $tmp56 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp56, ((frost$core$Object*) param4));
// line 32
org$frostlanguage$frostc$Position $tmp57 = *(&local0);
org$frostlanguage$frostc$IR$Value* $tmp58 = *(&local5);
frost$collections$Array* $tmp59 = *(&local4);
org$frostlanguage$frostc$Compiler$TypeContext* $tmp60 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp61 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp60, $tmp61);
org$frostlanguage$frostc$IR$Value* $tmp62 = org$frostlanguage$frostc$expression$Call$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, $tmp57, $tmp58, &$s63, ((frost$collections$ListView*) $tmp59), $tmp60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing REF($154:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// unreffing REF($151:org.frostlanguage.frostc.Compiler.TypeContext)
// line 34
org$frostlanguage$frostc$IR$Value* $tmp64 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing compiledBase
*(&local5) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp65 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing args
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp66 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// unreffing index
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp67 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing base
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
return;
block8:;
org$frostlanguage$frostc$ASTNode* $tmp68 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// unreffing index
*(&local3) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp69 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing base
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block5;
block5:;
goto block4;
block4:;
// line 39
org$frostlanguage$frostc$lvalue$LValue* $tmp70 = org$frostlanguage$frostc$lvalue$LValue$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$lvalue$LValue$Q(param0, param2);
*(&local6) = ((org$frostlanguage$frostc$lvalue$LValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
org$frostlanguage$frostc$lvalue$LValue* $tmp71 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
*(&local6) = $tmp70;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// unreffing REF($196:org.frostlanguage.frostc.lvalue.LValue?)
// line 40
org$frostlanguage$frostc$lvalue$LValue* $tmp72 = *(&local6);
frost$core$Bit $tmp73 = frost$core$Bit$init$builtin_bit($tmp72 == NULL);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block11; else goto block12;
block11:;
// line 41
org$frostlanguage$frostc$lvalue$LValue* $tmp75 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing left
*(&local6) = ((org$frostlanguage$frostc$lvalue$LValue*) NULL);
return;
block12:;
// line 43
*(&local7) = ((org$frostlanguage$frostc$IR$Value*) NULL);
// line 44
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp76;
$tmp76 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp76->value = param3;
frost$core$Int64 $tmp77 = (frost$core$Int64) {74};
org$frostlanguage$frostc$parser$Token$Kind $tmp78 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp77);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp79;
$tmp79 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp79->value = $tmp78;
ITable* $tmp80 = ((frost$core$Equatable*) $tmp76)->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp80 = $tmp80->next;
}
$fn82 $tmp81 = $tmp80->methods[0];
frost$core$Bit $tmp83 = $tmp81(((frost$core$Equatable*) $tmp76), ((frost$core$Equatable*) $tmp79));
bool $tmp84 = $tmp83.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp79)));
// unreffing REF($227:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp76)));
// unreffing REF($223:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp84) goto block13; else goto block15;
block13:;
// line 45
org$frostlanguage$frostc$Compiler$TypeContext* $tmp85 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp86 = (frost$core$Int64) {3};
org$frostlanguage$frostc$lvalue$LValue* $tmp87 = *(&local6);
ITable* $tmp88 = $tmp87->$class->itable;
while ($tmp88->$class != (frost$core$Class*) &org$frostlanguage$frostc$lvalue$LValue$class) {
    $tmp88 = $tmp88->next;
}
$fn90 $tmp89 = $tmp88->methods[0];
org$frostlanguage$frostc$Type* $tmp91 = $tmp89($tmp87);
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp85, $tmp86, $tmp91);
org$frostlanguage$frostc$IR$Value* $tmp92 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param4, $tmp85);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
org$frostlanguage$frostc$IR$Value* $tmp93 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local7) = $tmp92;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing REF($246:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing REF($244:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// unreffing REF($239:org.frostlanguage.frostc.Compiler.TypeContext)
goto block14;
block15:;
// line 1
// line 48
org$frostlanguage$frostc$ASTNode* $tmp94 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp95 = (frost$core$Int64) {26};
org$frostlanguage$frostc$lvalue$LValue* $tmp96 = *(&local6);
ITable* $tmp97 = $tmp96->$class->itable;
while ($tmp97->$class != (frost$core$Class*) &org$frostlanguage$frostc$lvalue$LValue$class) {
    $tmp97 = $tmp97->next;
}
$fn99 $tmp98 = $tmp97->methods[1];
org$frostlanguage$frostc$IR$Value* $tmp100 = $tmp98($tmp96);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value($tmp94, $tmp95, param1, $tmp100);
org$frostlanguage$frostc$parser$Token$Kind $tmp101 = org$frostlanguage$frostc$Compiler$removeAssignment$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Kind(param3);
org$frostlanguage$frostc$Compiler$TypeContext* $tmp102 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp103 = (frost$core$Int64) {3};
org$frostlanguage$frostc$lvalue$LValue* $tmp104 = *(&local6);
ITable* $tmp105 = $tmp104->$class->itable;
while ($tmp105->$class != (frost$core$Class*) &org$frostlanguage$frostc$lvalue$LValue$class) {
    $tmp105 = $tmp105->next;
}
$fn107 $tmp106 = $tmp105->methods[0];
org$frostlanguage$frostc$Type* $tmp108 = $tmp106($tmp104);
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp102, $tmp103, $tmp108);
org$frostlanguage$frostc$IR$Value* $tmp109 = org$frostlanguage$frostc$expression$Binary$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp94, $tmp101, param4, $tmp102);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
org$frostlanguage$frostc$IR$Value* $tmp110 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local7) = $tmp109;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
// unreffing REF($281:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing REF($279:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing REF($274:org.frostlanguage.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// unreffing REF($270:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($265:org.frostlanguage.frostc.ASTNode)
goto block14;
block14:;
// line 54
org$frostlanguage$frostc$IR$Value* $tmp111 = *(&local7);
frost$core$Bit $tmp112 = frost$core$Bit$init$builtin_bit($tmp111 == NULL);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block16; else goto block17;
block16:;
// line 55
org$frostlanguage$frostc$IR$Value* $tmp114 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
// unreffing right
*(&local7) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$lvalue$LValue* $tmp115 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
// unreffing left
*(&local6) = ((org$frostlanguage$frostc$lvalue$LValue*) NULL);
return;
block17:;
// line 57
org$frostlanguage$frostc$lvalue$LValue* $tmp116 = *(&local6);
org$frostlanguage$frostc$IR$Value* $tmp117 = *(&local7);
ITable* $tmp118 = $tmp116->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &org$frostlanguage$frostc$lvalue$LValue$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[2];
$tmp119($tmp116, $tmp117);
org$frostlanguage$frostc$IR$Value* $tmp121 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing right
*(&local7) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$lvalue$LValue* $tmp122 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// unreffing left
*(&local6) = ((org$frostlanguage$frostc$lvalue$LValue*) NULL);
return;

}
void org$frostlanguage$frostc$statement$Assignment$init(org$frostlanguage$frostc$statement$Assignment* param0) {

return;

}
void org$frostlanguage$frostc$statement$Assignment$cleanup(org$frostlanguage$frostc$statement$Assignment* param0) {

// line 13
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






