#include "org/frostlang/frostc/statement/Var.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Var$class_type org$frostlang$frostc$statement$Var$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Var$cleanup} };

typedef frost$collections$Iterator* (*$fn2)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x56\x61\x72", 34, -1895594640368022534, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x61\x72\x2e\x66\x72\x6f\x73\x74", 9, 290294940600097642, NULL };

void org$frostlang$frostc$statement$Var$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$Variable$Kind param2, org$frostlang$frostc$FixedArray* param3) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$Position local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
frost$collections$Iterable* _1;
frost$collections$Iterable* _2;
$fn2 _3;
frost$collections$Iterator* _4;
frost$collections$Iterator* _5;
frost$collections$Iterator* _7;
$fn3 _8;
frost$core$Bit _9;
bool _10;
frost$collections$Iterator* _13;
$fn4 _14;
frost$core$Object* _15;
org$frostlang$frostc$ASTNode* _16;
frost$core$Object* _17;
org$frostlang$frostc$ASTNode* _19;
frost$core$Object* _20;
org$frostlang$frostc$ASTNode* _24;
frost$core$Int* _25;
frost$core$Int _26;
frost$core$Int _27;
int64_t _30;
int64_t _31;
bool _32;
frost$core$Bit _33;
bool _35;
org$frostlang$frostc$Position* _37;
org$frostlang$frostc$Position _38;
org$frostlang$frostc$ASTNode** _40;
org$frostlang$frostc$ASTNode* _41;
frost$core$Object* _43;
org$frostlang$frostc$ASTNode* _45;
frost$core$Object* _46;
org$frostlang$frostc$ASTNode** _49;
org$frostlang$frostc$ASTNode* _50;
frost$core$Object* _52;
org$frostlang$frostc$ASTNode* _54;
frost$core$Object* _55;
org$frostlang$frostc$Position _59;
org$frostlang$frostc$ASTNode* _60;
org$frostlang$frostc$ASTNode* _61;
org$frostlang$frostc$ASTNode* _63;
frost$core$Object* _64;
org$frostlang$frostc$ASTNode* _67;
frost$core$Object* _68;
frost$core$Object* _76;
org$frostlang$frostc$ASTNode* _78;
frost$core$Object* _79;
frost$core$Int _73;
frost$core$Object* _83;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Var.frost:13
_1 = ((frost$collections$Iterable*) param3);
_2 = _1;
ITable* $tmp5 = _2->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp5 = $tmp5->next;
}
_3 = $tmp5->methods[0];
_4 = _3(_2);
_5 = _4;
goto block1;
block1:;
_7 = _5;
ITable* $tmp6 = _7->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6 = $tmp6->next;
}
_8 = $tmp6->methods[0];
_9 = _8(_7);
_10 = _9.value;
if (_10) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
_13 = _5;
ITable* $tmp7 = _13->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp7 = $tmp7->next;
}
_14 = $tmp7->methods[1];
_15 = _14(_13);
_16 = ((org$frostlang$frostc$ASTNode*) _15);
_17 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local0);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local0) = _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Var.frost:14
_24 = *(&local0);
_25 = &_24->$rawValue;
_26 = *_25;
_27 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Var.frost:15:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_30 = _26.value;
_31 = _27.value;
_32 = _30 == _31;
_33 = (frost$core$Bit) {_32};
_35 = _33.value;
if (_35) goto block5; else goto block6;
block5:;
_37 = (org$frostlang$frostc$Position*) (_24->$data + 0);
_38 = *_37;
*(&local1) = _38;
_40 = (org$frostlang$frostc$ASTNode**) (_24->$data + 24);
_41 = *_40;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
_43 = ((frost$core$Object*) _41);
frost$core$Frost$ref$frost$core$Object$Q(_43);
_45 = *(&local2);
_46 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_46);
*(&local2) = _41;
_49 = (org$frostlang$frostc$ASTNode**) (_24->$data + 32);
_50 = *_49;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
_52 = ((frost$core$Object*) _50);
frost$core$Frost$ref$frost$core$Object$Q(_52);
_54 = *(&local3);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
*(&local3) = _50;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Var.frost:16
_59 = *(&local1);
_60 = *(&local2);
_61 = *(&local3);
org$frostlang$frostc$Compiler$compileDeclaration$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Variable$Kind(param0, _59, _60, _61, param2);
_63 = *(&local3);
_64 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_64);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
_67 = *(&local2);
_68 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_68);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
_76 = _15;
frost$core$Frost$unref$frost$core$Object$Q(_76);
_78 = *(&local0);
_79 = ((frost$core$Object*) _78);
frost$core$Frost$unref$frost$core$Object$Q(_79);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Var.frost:19
_73 = (frost$core$Int) {19u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s8, _73);
abort(); // unreachable
block3:;
_83 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_83);
return;

}
void org$frostlang$frostc$statement$Var$init(org$frostlang$frostc$statement$Var* param0) {

return;

}
void org$frostlang$frostc$statement$Var$cleanup(org$frostlang$frostc$statement$Var* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Var.frost:9
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






