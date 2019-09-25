#include "org/frostlang/frostc/statement/Var.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$statement$Var$class_type org$frostlang$frostc$statement$Var$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Var$cleanup} };

typedef frost$collections$Iterator* (*$fn2)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x56\x61\x72", 34, -1895594640368022534, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x56\x61\x72\x2e\x66\x72\x6f\x73\x74", 9, 290294940600097642, NULL };

void org$frostlang$frostc$statement$Var$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodPosition param1, org$frostlang$frostc$Variable$Kind param2, org$frostlang$frostc$FixedArray* param3) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$Position local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
frost$collections$Iterable* _1;
$fn2 _2;
frost$collections$Iterator* _3;
$fn3 _5;
frost$core$Bit _6;
bool _7;
$fn4 _10;
frost$core$Object* _11;
org$frostlang$frostc$ASTNode* _12;
frost$core$Object* _13;
org$frostlang$frostc$ASTNode* _15;
frost$core$Object* _16;
org$frostlang$frostc$ASTNode* _20;
frost$core$Int* _21;
frost$core$Int _22;
frost$core$Int _23;
int64_t _26;
int64_t _27;
bool _28;
frost$core$Bit _29;
bool _31;
org$frostlang$frostc$Position* _33;
org$frostlang$frostc$Position _34;
org$frostlang$frostc$ASTNode** _36;
org$frostlang$frostc$ASTNode* _37;
frost$core$Object* _39;
org$frostlang$frostc$ASTNode* _41;
frost$core$Object* _42;
org$frostlang$frostc$ASTNode** _45;
org$frostlang$frostc$ASTNode* _46;
frost$core$Object* _48;
org$frostlang$frostc$ASTNode* _50;
frost$core$Object* _51;
org$frostlang$frostc$Position _55;
frost$core$Int _56;
org$frostlang$frostc$MethodPosition _57;
org$frostlang$frostc$ASTNode* _58;
org$frostlang$frostc$ASTNode* _59;
org$frostlang$frostc$ASTNode* _61;
frost$core$Object* _62;
org$frostlang$frostc$ASTNode* _65;
frost$core$Object* _66;
frost$core$Object* _74;
org$frostlang$frostc$ASTNode* _76;
frost$core$Object* _77;
frost$core$Int _71;
frost$core$Object* _81;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Var.frost:13
_1 = ((frost$collections$Iterable*) param3);
ITable* $tmp5 = _1->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp5 = $tmp5->next;
}
_2 = $tmp5->methods[0];
_3 = _2(_1);
goto block1;
block1:;
ITable* $tmp6 = _3->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6 = $tmp6->next;
}
_5 = $tmp6->methods[0];
_6 = _5(_3);
_7 = _6.value;
if (_7) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp7 = _3->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp7 = $tmp7->next;
}
_10 = $tmp7->methods[1];
_11 = _10(_3);
_12 = ((org$frostlang$frostc$ASTNode*) _11);
_13 = ((frost$core$Object*) _12);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = *(&local0);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
*(&local0) = _12;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Var.frost:14
_20 = *(&local0);
_21 = &_20->$rawValue;
_22 = *_21;
_23 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Var.frost:15:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_26 = _22.value;
_27 = _23.value;
_28 = _26 == _27;
_29 = (frost$core$Bit) {_28};
_31 = _29.value;
if (_31) goto block5; else goto block6;
block5:;
_33 = &_20->$data.$DECLARATION.field0;
_34 = *_33;
*(&local1) = _34;
_36 = &_20->$data.$DECLARATION.field1;
_37 = *_36;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
_39 = ((frost$core$Object*) _37);
frost$core$Frost$ref$frost$core$Object$Q(_39);
_41 = *(&local2);
_42 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_42);
*(&local2) = _37;
_45 = &_20->$data.$DECLARATION.field2;
_46 = *_45;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
_48 = ((frost$core$Object*) _46);
frost$core$Frost$ref$frost$core$Object$Q(_48);
_50 = *(&local3);
_51 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_51);
*(&local3) = _46;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Var.frost:16
_55 = *(&local1);
_56 = param1.methodIndex;
_57 = org$frostlang$frostc$MethodPosition$init$org$frostlang$frostc$Position$frost$core$Int(_55, _56);
_58 = *(&local2);
_59 = *(&local3);
org$frostlang$frostc$Compiler$compileDeclaration$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Variable$Kind(param0, _57, _58, _59, param2);
_61 = *(&local3);
_62 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_62);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
_65 = *(&local2);
_66 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_66);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
_74 = _11;
frost$core$Frost$unref$frost$core$Object$Q(_74);
_76 = *(&local0);
_77 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_77);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Var.frost:20
_71 = (frost$core$Int) {20u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s8, _71);
abort(); // unreachable
block3:;
_81 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_81);
return;

}
void org$frostlang$frostc$statement$Var$init(void* rawSelf) {
org$frostlang$frostc$statement$Var* param0 = (org$frostlang$frostc$statement$Var*) rawSelf;

return;

}
void org$frostlang$frostc$statement$Var$cleanup(void* rawSelf) {
org$frostlang$frostc$statement$Var* param0 = (org$frostlang$frostc$statement$Var*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Var.frost:9
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




