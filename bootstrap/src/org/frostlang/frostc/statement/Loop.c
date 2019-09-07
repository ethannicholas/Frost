#include "org/frostlang/frostc/statement/Loop.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Compiler/AutoContext.h"
#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Loop$class_type org$frostlang$frostc$statement$Loop$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Loop$cleanup} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn2)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn4)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn5)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn6)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn7)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn8)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn9)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn10)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn11)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn12)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn14)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn16)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn17)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn21)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn22)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn23)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4c\x6f\x6f\x70", 35, 6589831657816811839, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x62\x6f\x64\x79", 9, -1976155174968152447, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x65\x6e\x64", 8, -837180363362312906, NULL };

void org$frostlang$frostc$statement$Loop$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$FixedArray* param3) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$Compiler$AutoContext* local3 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$IR** _1;
org$frostlang$frostc$IR* _2;
frost$core$Object* _4;
org$frostlang$frostc$IR* _6;
frost$core$Object* _7;
org$frostlang$frostc$IR* _11;
$fn2 _12;
org$frostlang$frostc$IR$Block$ID _13;
org$frostlang$frostc$IR* _16;
$fn3 _17;
org$frostlang$frostc$IR$Block$ID _18;
org$frostlang$frostc$Compiler$AutoContext* _22;
org$frostlang$frostc$Compiler$EnclosingContext* _23;
frost$core$Int _24;
org$frostlang$frostc$IR$Block$ID _25;
org$frostlang$frostc$IR$Block$ID _26;
frost$core$Object* _30;
org$frostlang$frostc$Compiler$AutoContext* _32;
frost$core$Object* _33;
frost$core$Object* _36;
frost$core$Object* _38;
org$frostlang$frostc$Compiler$AutoScope* _41;
frost$core$Object* _44;
org$frostlang$frostc$Compiler$AutoScope* _46;
frost$core$Object* _47;
frost$core$Object* _50;
org$frostlang$frostc$IR* _53;
org$frostlang$frostc$IR$Statement* _54;
frost$core$Int _55;
org$frostlang$frostc$IR$Block$ID _56;
$fn4 _58;
org$frostlang$frostc$IR$Statement$ID _59;
frost$core$Object* _60;
org$frostlang$frostc$IR* _63;
org$frostlang$frostc$IR$Block$ID _64;
$fn5 _65;
frost$collections$Iterable* _68;
frost$collections$Iterable* _69;
$fn6 _70;
frost$collections$Iterator* _71;
frost$collections$Iterator* _72;
frost$collections$Iterator* _74;
$fn7 _75;
frost$core$Bit _76;
bool _77;
frost$collections$Iterator* _80;
$fn8 _81;
frost$core$Object* _82;
org$frostlang$frostc$ASTNode* _83;
frost$core$Object* _84;
org$frostlang$frostc$ASTNode* _86;
frost$core$Object* _87;
org$frostlang$frostc$ASTNode* _91;
frost$core$Object* _93;
org$frostlang$frostc$ASTNode* _95;
frost$core$Object* _96;
frost$core$Object* _100;
org$frostlang$frostc$Compiler$AutoScope* _102;
frost$core$Object* _103;
org$frostlang$frostc$Compiler$AutoContext* _106;
frost$core$Object* _107;
org$frostlang$frostc$IR* _111;
$fn9 _112;
frost$core$Bit _113;
bool _116;
bool _117;
frost$core$Bit _118;
bool _120;
org$frostlang$frostc$IR* _123;
org$frostlang$frostc$IR$Statement* _124;
frost$core$Int _125;
org$frostlang$frostc$IR$Block$ID _126;
$fn10 _128;
org$frostlang$frostc$IR$Statement$ID _129;
frost$core$Object* _130;
org$frostlang$frostc$IR* _134;
org$frostlang$frostc$IR$Block$ID _135;
$fn11 _136;
org$frostlang$frostc$IR* _138;
frost$core$Object* _139;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:17
_1 = &param0->ir;
_2 = *_1;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:18
_11 = *(&local0);
_12 = ($fn12) _11->$class->vtable[3];
_13 = _12(_11, &$s13);
*(&local1) = _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:19
_16 = *(&local0);
_17 = ($fn14) _16->$class->vtable[3];
_18 = _17(_16, &$s15);
*(&local2) = _18;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:21
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
_22 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
_23 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
_24 = (frost$core$Int) {1u};
_25 = *(&local2);
_26 = *(&local1);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(_23, _24, param2, _25, _26);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext(_22, param0, _23);
*(&local3) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
_30 = ((frost$core$Object*) _22);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = *(&local3);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local3) = _22;
_36 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_38);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:22
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
_41 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler(_41, param0);
*(&local4) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
_44 = ((frost$core$Object*) _41);
frost$core$Frost$ref$frost$core$Object$Q(_44);
_46 = *(&local4);
_47 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_47);
*(&local4) = _41;
_50 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_50);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:23
_53 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
_54 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_55 = (frost$core$Int) {1u};
_56 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(_54, _55, param1, _56);
_58 = ($fn16) _53->$class->vtable[2];
_59 = _58(_53, _54);
_60 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_60);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:24
_63 = *(&local0);
_64 = *(&local1);
_65 = ($fn17) _63->$class->vtable[4];
_65(_63, _64);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:25
_68 = ((frost$collections$Iterable*) param3);
_69 = _68;
ITable* $tmp18 = _69->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp18 = $tmp18->next;
}
_70 = $tmp18->methods[0];
_71 = _70(_69);
_72 = _71;
goto block1;
block1:;
_74 = _72;
ITable* $tmp19 = _74->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp19 = $tmp19->next;
}
_75 = $tmp19->methods[0];
_76 = _75(_74);
_77 = _76.value;
if (_77) goto block3; else goto block2;
block2:;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
_80 = _72;
ITable* $tmp20 = _80->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp20 = $tmp20->next;
}
_81 = $tmp20->methods[1];
_82 = _81(_80);
_83 = ((org$frostlang$frostc$ASTNode*) _82);
_84 = ((frost$core$Object*) _83);
frost$core$Frost$ref$frost$core$Object$Q(_84);
_86 = *(&local5);
_87 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_87);
*(&local5) = _83;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:26
_91 = *(&local5);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, _91);
_93 = _82;
frost$core$Frost$unref$frost$core$Object$Q(_93);
_95 = *(&local5);
_96 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_96);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
_100 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_100);
_102 = *(&local4);
_103 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_103);
*(&local4) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
_106 = *(&local3);
_107 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_107);
*(&local3) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:29
_111 = *(&local0);
_112 = ($fn21) _111->$class->vtable[5];
_113 = _112(_111);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Loop.frost:29:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_116 = _113.value;
_117 = !_116;
_118 = (frost$core$Bit) {_117};
_120 = _118.value;
if (_120) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:30
_123 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
_124 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_125 = (frost$core$Int) {1u};
_126 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(_124, _125, param1, _126);
_128 = ($fn22) _123->$class->vtable[2];
_129 = _128(_123, _124);
_130 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_130);
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:32
_134 = *(&local0);
_135 = *(&local2);
_136 = ($fn23) _134->$class->vtable[4];
_136(_134, _135);
_138 = *(&local0);
_139 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_139);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$Loop$init(org$frostlang$frostc$statement$Loop* param0) {

return;

}
void org$frostlang$frostc$statement$Loop$cleanup(org$frostlang$frostc$statement$Loop* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:13
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






