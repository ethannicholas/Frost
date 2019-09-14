#include "org/frostlang/frostc/statement/While.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Compiler/AutoContext.h"
#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$While$class_type org$frostlang$frostc$statement$While$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$While$cleanup} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn2)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn4)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn5)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn6)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn7)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn8)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn9)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn10)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn11)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn12)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn13)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn14)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn16)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn18)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn20)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn21)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn22)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn26)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn27)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn28)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x57\x68\x69\x6c\x65", 36, 4114960838759712458, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x74\x65\x73\x74", 10, 6914017449470105130, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x62\x6f\x64\x79", 10, 4740566941368473614, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x65\x6e\x64", 9, -4885594404457096681, NULL };

void org$frostlang$frostc$statement$While$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$Compiler$AutoContext* local4 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
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
org$frostlang$frostc$IR* _21;
$fn4 _22;
org$frostlang$frostc$IR$Block$ID _23;
org$frostlang$frostc$Compiler$AutoContext* _27;
org$frostlang$frostc$Compiler$EnclosingContext* _28;
frost$core$Int _29;
org$frostlang$frostc$IR$Block$ID _30;
org$frostlang$frostc$IR$Block$ID _31;
frost$core$Object* _35;
org$frostlang$frostc$Compiler$AutoContext* _37;
frost$core$Object* _38;
frost$core$Object* _41;
frost$core$Object* _43;
org$frostlang$frostc$Compiler$AutoScope* _46;
frost$core$Object* _49;
org$frostlang$frostc$Compiler$AutoScope* _51;
frost$core$Object* _52;
frost$core$Object* _55;
org$frostlang$frostc$IR* _58;
org$frostlang$frostc$IR$Statement* _59;
frost$core$Int _60;
org$frostlang$frostc$IR$Block$ID _61;
$fn5 _63;
org$frostlang$frostc$IR$Statement$ID _64;
frost$core$Object* _65;
org$frostlang$frostc$IR* _68;
org$frostlang$frostc$IR$Block$ID _69;
$fn6 _70;
org$frostlang$frostc$IR$Block$ID _73;
org$frostlang$frostc$IR$Block$ID _74;
org$frostlang$frostc$IR* _77;
org$frostlang$frostc$IR$Block$ID _78;
$fn7 _79;
frost$collections$Iterable* _82;
frost$collections$Iterable* _83;
$fn8 _84;
frost$collections$Iterator* _85;
frost$collections$Iterator* _86;
frost$collections$Iterator* _88;
$fn9 _89;
frost$core$Bit _90;
bool _91;
frost$collections$Iterator* _94;
$fn10 _95;
frost$core$Object* _96;
org$frostlang$frostc$ASTNode* _97;
frost$core$Object* _98;
org$frostlang$frostc$ASTNode* _100;
frost$core$Object* _101;
org$frostlang$frostc$ASTNode* _105;
frost$core$Object* _107;
org$frostlang$frostc$ASTNode* _109;
frost$core$Object* _110;
frost$core$Object* _114;
org$frostlang$frostc$Compiler$AutoScope* _116;
frost$core$Object* _117;
org$frostlang$frostc$Compiler$AutoContext* _120;
frost$core$Object* _121;
org$frostlang$frostc$IR* _125;
$fn11 _126;
frost$core$Bit _127;
bool _130;
bool _131;
frost$core$Bit _132;
bool _134;
org$frostlang$frostc$IR* _137;
org$frostlang$frostc$IR$Statement* _138;
frost$core$Int _139;
org$frostlang$frostc$IR$Block$ID _140;
$fn12 _142;
org$frostlang$frostc$IR$Statement$ID _143;
frost$core$Object* _144;
org$frostlang$frostc$IR* _148;
org$frostlang$frostc$IR$Block$ID _149;
$fn13 _150;
org$frostlang$frostc$IR* _152;
frost$core$Object* _153;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/While.frost:19
_1 = &param0->ir;
_2 = *_1;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/While.frost:20
_11 = *(&local0);
_12 = ($fn14) _11->$class->vtable[3];
_13 = _12(_11, &$s15);
*(&local1) = _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/While.frost:21
_16 = *(&local0);
_17 = ($fn16) _16->$class->vtable[3];
_18 = _17(_16, &$s17);
*(&local2) = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/While.frost:22
_21 = *(&local0);
_22 = ($fn18) _21->$class->vtable[3];
_23 = _22(_21, &$s19);
*(&local3) = _23;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/While.frost:24
_27 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$AutoContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
_28 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$EnclosingContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
_29 = (frost$core$Int) {1u};
_30 = *(&local3);
_31 = *(&local1);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(_28, _29, param2, _30, _31);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext(_27, param0, _28);
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
_35 = ((frost$core$Object*) _27);
frost$core$Frost$ref$frost$core$Object$Q(_35);
_37 = *(&local4);
_38 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_38);
*(&local4) = _27;
_41 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_43);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/While.frost:25
_46 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$AutoScope), (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler(_46, param0);
*(&local5) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
_49 = ((frost$core$Object*) _46);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = *(&local5);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
*(&local5) = _46;
_55 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_55);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/While.frost:26
_58 = *(&local0);
_59 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_60 = (frost$core$Int) {1u};
_61 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(_59, _60, param1, _61);
_63 = ($fn20) _58->$class->vtable[2];
_64 = _63(_58, _59);
_65 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_65);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/While.frost:27
_68 = *(&local0);
_69 = *(&local1);
_70 = ($fn21) _68->$class->vtable[4];
_70(_68, _69);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/While.frost:28
_73 = *(&local2);
_74 = *(&local3);
org$frostlang$frostc$Compiler$compileConditionalBranch$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, param3, _73, _74);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/While.frost:29
_77 = *(&local0);
_78 = *(&local2);
_79 = ($fn22) _77->$class->vtable[4];
_79(_77, _78);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/While.frost:30
_82 = ((frost$collections$Iterable*) param4);
_83 = _82;
ITable* $tmp23 = _83->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp23 = $tmp23->next;
}
_84 = $tmp23->methods[0];
_85 = _84(_83);
_86 = _85;
goto block1;
block1:;
_88 = _86;
ITable* $tmp24 = _88->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp24 = $tmp24->next;
}
_89 = $tmp24->methods[0];
_90 = _89(_88);
_91 = _90.value;
if (_91) goto block3; else goto block2;
block2:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
_94 = _86;
ITable* $tmp25 = _94->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp25 = $tmp25->next;
}
_95 = $tmp25->methods[1];
_96 = _95(_94);
_97 = ((org$frostlang$frostc$ASTNode*) _96);
_98 = ((frost$core$Object*) _97);
frost$core$Frost$ref$frost$core$Object$Q(_98);
_100 = *(&local6);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_101);
*(&local6) = _97;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/While.frost:31
_105 = *(&local6);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, _105);
_107 = _96;
frost$core$Frost$unref$frost$core$Object$Q(_107);
_109 = *(&local6);
_110 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_110);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
_114 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_114);
_116 = *(&local5);
_117 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_117);
*(&local5) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
_120 = *(&local4);
_121 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_121);
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/While.frost:34
_125 = *(&local0);
_126 = ($fn26) _125->$class->vtable[5];
_127 = _126(_125);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from While.frost:34:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_130 = _127.value;
_131 = !_130;
_132 = (frost$core$Bit) {_131};
_134 = _132.value;
if (_134) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/While.frost:35
_137 = *(&local0);
_138 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_139 = (frost$core$Int) {1u};
_140 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(_138, _139, param1, _140);
_142 = ($fn27) _137->$class->vtable[2];
_143 = _142(_137, _138);
_144 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_144);
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/While.frost:37
_148 = *(&local0);
_149 = *(&local3);
_150 = ($fn28) _148->$class->vtable[4];
_150(_148, _149);
_152 = *(&local0);
_153 = ((frost$core$Object*) _152);
frost$core$Frost$unref$frost$core$Object$Q(_153);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$While$init(void* rawSelf) {
org$frostlang$frostc$statement$While* param0 = (org$frostlang$frostc$statement$While*) rawSelf;

return;

}
void org$frostlang$frostc$statement$While$cleanup(void* rawSelf) {
org$frostlang$frostc$statement$While* param0 = (org$frostlang$frostc$statement$While*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/While.frost:15
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






