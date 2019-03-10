#include "org/frostlang/frostc/statement/Assignment.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
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
org$frostlang$frostc$statement$Assignment$class_type org$frostlang$frostc$statement$Assignment$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Assignment$cleanup} };

typedef frost$core$Bit (*$fn16)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn46)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn93)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn101)(org$frostlang$frostc$lvalue$LValue*);
typedef org$frostlang$frostc$IR$Value* (*$fn109)(org$frostlang$frostc$lvalue$LValue*);
typedef org$frostlang$frostc$Type* (*$fn127)(org$frostlang$frostc$lvalue$LValue*);
typedef void (*$fn142)(org$frostlang$frostc$lvalue$LValue*, org$frostlang$frostc$IR$Value*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74", 41, 2998949642810861948, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 15, 7724162655211760908, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 8142898892933095984, NULL };

void org$frostlang$frostc$statement$Assignment$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$expression$Binary$Operator param3, org$frostlang$frostc$ASTNode* param4) {

org$frostlang$frostc$expression$Binary$Operator local0;
org$frostlang$frostc$expression$Binary$Operator local1;
org$frostlang$frostc$Position local2;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$expression$Binary$Operator local4;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$expression$Binary$Operator local6;
org$frostlang$frostc$expression$Binary$Operator local7;
frost$collections$Array* local8 = NULL;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$lvalue$LValue* local10 = NULL;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$expression$Binary$Operator local12;
org$frostlang$frostc$expression$Binary$Operator local13;
org$frostlang$frostc$IR$Value* local14 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:16
frost$core$Bit $tmp2 = org$frostlang$frostc$expression$Binary$Operator$get_isAssignment$R$frost$core$Bit(param3);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Assignment.frost:16:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp3 = $tmp2.value;
bool $tmp4 = !$tmp3;
frost$core$Bit $tmp5 = (frost$core$Bit) {$tmp4};
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:17
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s7);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:18
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:20
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp8;
$tmp8 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp8->value = param3;
frost$core$Int64 $tmp9 = (frost$core$Int64) {24u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from Assignment.frost:20:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp10 = &(&local1)->$rawValue;
*$tmp10 = $tmp9;
org$frostlang$frostc$expression$Binary$Operator $tmp11 = *(&local1);
*(&local0) = $tmp11;
org$frostlang$frostc$expression$Binary$Operator $tmp12 = *(&local0);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp13;
$tmp13 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp13->value = $tmp12;
ITable* $tmp14 = ((frost$core$Equatable*) $tmp8)->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[0];
frost$core$Bit $tmp17 = $tmp15(((frost$core$Equatable*) $tmp8), ((frost$core$Equatable*) $tmp13));
bool $tmp18 = $tmp17.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp13)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp8)));
if ($tmp18) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:21
frost$core$Int64* $tmp19 = &param2->$rawValue;
frost$core$Int64 $tmp20 = *$tmp19;
frost$core$Int64 $tmp21 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Assignment.frost:22:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp22 = $tmp20.value;
int64_t $tmp23 = $tmp21.value;
bool $tmp24 = $tmp22 == $tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block8; else goto block7;
block8:;
org$frostlang$frostc$Position* $tmp27 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp28 = *$tmp27;
*(&local2) = $tmp28;
org$frostlang$frostc$ASTNode** $tmp29 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp30 = *$tmp29;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
org$frostlang$frostc$ASTNode* $tmp31 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
*(&local3) = $tmp30;
org$frostlang$frostc$expression$Binary$Operator* $tmp32 = (org$frostlang$frostc$expression$Binary$Operator*) (param2->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp33 = *$tmp32;
*(&local4) = $tmp33;
org$frostlang$frostc$ASTNode** $tmp34 = (org$frostlang$frostc$ASTNode**) (param2->$data + 40);
org$frostlang$frostc$ASTNode* $tmp35 = *$tmp34;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
org$frostlang$frostc$ASTNode* $tmp36 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local5) = $tmp35;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:23
org$frostlang$frostc$expression$Binary$Operator $tmp37 = *(&local4);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp38;
$tmp38 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp38->value = $tmp37;
frost$core$Int64 $tmp39 = (frost$core$Int64) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from Assignment.frost:23:44
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp40 = &(&local7)->$rawValue;
*$tmp40 = $tmp39;
org$frostlang$frostc$expression$Binary$Operator $tmp41 = *(&local7);
*(&local6) = $tmp41;
org$frostlang$frostc$expression$Binary$Operator $tmp42 = *(&local6);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp43;
$tmp43 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp43->value = $tmp42;
ITable* $tmp44 = ((frost$core$Equatable*) $tmp38)->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp44 = $tmp44->next;
}
$fn46 $tmp45 = $tmp44->methods[0];
frost$core$Bit $tmp47 = $tmp45(((frost$core$Equatable*) $tmp38), ((frost$core$Equatable*) $tmp43));
bool $tmp48 = $tmp47.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp43)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp38)));
if ($tmp48) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:24
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp49 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp49);
*(&local8) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$collections$Array* $tmp50 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
*(&local8) = $tmp49;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:25
org$frostlang$frostc$ASTNode* $tmp51 = *(&local3);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp52 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp53 = (frost$core$Int64) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp52, $tmp53);
org$frostlang$frostc$IR$Value* $tmp54 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp51, $tmp52);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
org$frostlang$frostc$IR$Value* $tmp55 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local9) = $tmp54;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:26
org$frostlang$frostc$IR$Value* $tmp56 = *(&local9);
frost$core$Bit $tmp57 = (frost$core$Bit) {$tmp56 == NULL};
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:27
org$frostlang$frostc$IR$Value* $tmp59 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp60 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local8) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp61 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp62 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:29
frost$collections$Array* $tmp63 = *(&local8);
org$frostlang$frostc$ASTNode* $tmp64 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp63, ((frost$core$Object*) $tmp64));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:30
frost$collections$Array* $tmp65 = *(&local8);
frost$collections$Array$add$frost$collections$Array$T($tmp65, ((frost$core$Object*) param4));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:31
org$frostlang$frostc$Position $tmp66 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp67 = *(&local9);
frost$collections$Array* $tmp68 = *(&local8);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp69 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp70 = (frost$core$Int64) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp69, $tmp70);
org$frostlang$frostc$IR$Value* $tmp71 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp66, $tmp67, &$s72, ((frost$collections$ListView*) $tmp68), $tmp69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:33
org$frostlang$frostc$IR$Value* $tmp73 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp74 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
*(&local8) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp75 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp76 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return;
block11:;
org$frostlang$frostc$ASTNode* $tmp77 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp78 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block7:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:38
org$frostlang$frostc$lvalue$LValue* $tmp79 = org$frostlang$frostc$lvalue$LValue$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$lvalue$LValue$Q(param0, param2);
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
org$frostlang$frostc$lvalue$LValue* $tmp80 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local10) = $tmp79;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:39
org$frostlang$frostc$lvalue$LValue* $tmp81 = *(&local10);
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81 == NULL};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:40
org$frostlang$frostc$lvalue$LValue* $tmp84 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:42
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:43
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp85;
$tmp85 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp85->value = param3;
frost$core$Int64 $tmp86 = (frost$core$Int64) {24u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from Assignment.frost:43:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp87 = &(&local13)->$rawValue;
*$tmp87 = $tmp86;
org$frostlang$frostc$expression$Binary$Operator $tmp88 = *(&local13);
*(&local12) = $tmp88;
org$frostlang$frostc$expression$Binary$Operator $tmp89 = *(&local12);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp90;
$tmp90 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp90->value = $tmp89;
ITable* $tmp91 = ((frost$core$Equatable*) $tmp85)->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[0];
frost$core$Bit $tmp94 = $tmp92(((frost$core$Equatable*) $tmp85), ((frost$core$Equatable*) $tmp90));
bool $tmp95 = $tmp94.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp90)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp85)));
if ($tmp95) goto block17; else goto block19;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:44
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp96 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp97 = (frost$core$Int64) {3u};
org$frostlang$frostc$lvalue$LValue* $tmp98 = *(&local10);
ITable* $tmp99 = $tmp98->$class->itable;
while ($tmp99->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp99 = $tmp99->next;
}
$fn101 $tmp100 = $tmp99->methods[0];
org$frostlang$frostc$Type* $tmp102 = $tmp100($tmp98);
frost$core$Bit $tmp103 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp96, $tmp97, $tmp102, $tmp103);
org$frostlang$frostc$IR$Value* $tmp104 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp96);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
org$frostlang$frostc$IR$Value* $tmp105 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local11) = $tmp104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
goto block18;
block19:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:47
org$frostlang$frostc$lvalue$LValue* $tmp106 = *(&local10);
ITable* $tmp107 = $tmp106->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[1];
org$frostlang$frostc$IR$Value* $tmp110 = $tmp108($tmp106);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
org$frostlang$frostc$IR$Value* $tmp111 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local14) = $tmp110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:48
org$frostlang$frostc$IR$Value* $tmp112 = *(&local14);
frost$core$Bit $tmp113 = (frost$core$Bit) {$tmp112 == NULL};
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:49
org$frostlang$frostc$IR$Value* $tmp115 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp116 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$lvalue$LValue* $tmp117 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:51
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp118 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp119 = (frost$core$Int64) {26u};
org$frostlang$frostc$IR$Value* $tmp120 = *(&local14);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp118, $tmp119, param1, $tmp120);
org$frostlang$frostc$expression$Binary$Operator $tmp121 = org$frostlang$frostc$expression$Binary$Operator$removeAssignment$R$org$frostlang$frostc$expression$Binary$Operator(param3);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp122 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp123 = (frost$core$Int64) {3u};
org$frostlang$frostc$lvalue$LValue* $tmp124 = *(&local10);
ITable* $tmp125 = $tmp124->$class->itable;
while ($tmp125->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp125 = $tmp125->next;
}
$fn127 $tmp126 = $tmp125->methods[0];
org$frostlang$frostc$Type* $tmp128 = $tmp126($tmp124);
frost$core$Bit $tmp129 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp122, $tmp123, $tmp128, $tmp129);
org$frostlang$frostc$IR$Value* $tmp130 = org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp118, $tmp121, param4, $tmp122);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
org$frostlang$frostc$IR$Value* $tmp131 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local11) = $tmp130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
org$frostlang$frostc$IR$Value* $tmp132 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block18;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:54
org$frostlang$frostc$IR$Value* $tmp133 = *(&local11);
frost$core$Bit $tmp134 = (frost$core$Bit) {$tmp133 == NULL};
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:55
org$frostlang$frostc$IR$Value* $tmp136 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$lvalue$LValue* $tmp137 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:57
org$frostlang$frostc$lvalue$LValue* $tmp138 = *(&local10);
org$frostlang$frostc$IR$Value* $tmp139 = *(&local11);
ITable* $tmp140 = $tmp138->$class->itable;
while ($tmp140->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp140 = $tmp140->next;
}
$fn142 $tmp141 = $tmp140->methods[2];
$tmp141($tmp138, $tmp139);
org$frostlang$frostc$IR$Value* $tmp143 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$lvalue$LValue* $tmp144 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;

}
void org$frostlang$frostc$statement$Assignment$init(org$frostlang$frostc$statement$Assignment* param0) {

return;

}
void org$frostlang$frostc$statement$Assignment$cleanup(org$frostlang$frostc$statement$Assignment* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Assignment.frost:12
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






