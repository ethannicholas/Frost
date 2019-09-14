#include "org/frostlang/frostc/statement/Do.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/ASTNode.h"
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
org$frostlang$frostc$statement$Do$class_type org$frostlang$frostc$statement$Do$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Do$cleanup} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn2)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn4)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn5)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn6)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn7)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn8)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn9)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn10)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn11)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn12)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn13)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn14)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn16)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn18)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn20)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn21)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn25)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn26)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn27)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn28)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x44\x6f", 33, -6169938236407021984, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6f\x20\x62\x6f\x64\x79", 7, -6004841761394204936, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6f\x20\x74\x65\x73\x74", 7, 1722209606578233592, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6f\x20\x65\x6e\x64", 6, 8687908936560712913, NULL };

void org$frostlang$frostc$statement$Do$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4) {

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
frost$collections$Iterable* _73;
frost$collections$Iterable* _74;
$fn7 _75;
frost$collections$Iterator* _76;
frost$collections$Iterator* _77;
frost$collections$Iterator* _79;
$fn8 _80;
frost$core$Bit _81;
bool _82;
frost$collections$Iterator* _85;
$fn9 _86;
frost$core$Object* _87;
org$frostlang$frostc$ASTNode* _88;
frost$core$Object* _89;
org$frostlang$frostc$ASTNode* _91;
frost$core$Object* _92;
org$frostlang$frostc$ASTNode* _96;
frost$core$Object* _98;
org$frostlang$frostc$ASTNode* _100;
frost$core$Object* _101;
frost$core$Object* _105;
org$frostlang$frostc$Compiler$AutoScope* _107;
frost$core$Object* _108;
org$frostlang$frostc$Compiler$AutoContext* _111;
frost$core$Object* _112;
org$frostlang$frostc$IR* _116;
$fn10 _117;
frost$core$Bit _118;
bool _121;
bool _122;
frost$core$Bit _123;
bool _125;
org$frostlang$frostc$IR* _128;
org$frostlang$frostc$IR$Statement* _129;
frost$core$Int _130;
org$frostlang$frostc$IR$Block$ID _131;
$fn11 _133;
org$frostlang$frostc$IR$Statement$ID _134;
frost$core$Object* _135;
org$frostlang$frostc$IR* _139;
org$frostlang$frostc$IR$Block$ID _140;
$fn12 _141;
org$frostlang$frostc$IR$Block$ID _144;
org$frostlang$frostc$IR$Block$ID _145;
org$frostlang$frostc$IR* _148;
org$frostlang$frostc$IR$Block$ID _149;
$fn13 _150;
org$frostlang$frostc$IR* _152;
frost$core$Object* _153;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Do.frost:19
_1 = &param0->ir;
_2 = *_1;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Do.frost:20
_11 = *(&local0);
_12 = ($fn14) _11->$class->vtable[3];
_13 = _12(_11, &$s15);
*(&local1) = _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Do.frost:21
_16 = *(&local0);
_17 = ($fn16) _16->$class->vtable[3];
_18 = _17(_16, &$s17);
*(&local2) = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Do.frost:22
_21 = *(&local0);
_22 = ($fn18) _21->$class->vtable[3];
_23 = _22(_21, &$s19);
*(&local3) = _23;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Do.frost:24
_27 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$AutoContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
_28 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$EnclosingContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
_29 = (frost$core$Int) {1u};
_30 = *(&local3);
_31 = *(&local2);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Do.frost:25
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Do.frost:26
_58 = *(&local0);
_59 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_60 = (frost$core$Int) {1u};
_61 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(_59, _60, param1, _61);
_63 = ($fn20) _58->$class->vtable[2];
_64 = _63(_58, _59);
_65 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_65);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Do.frost:27
_68 = *(&local0);
_69 = *(&local1);
_70 = ($fn21) _68->$class->vtable[4];
_70(_68, _69);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Do.frost:28
_73 = ((frost$collections$Iterable*) param3);
_74 = _73;
ITable* $tmp22 = _74->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp22 = $tmp22->next;
}
_75 = $tmp22->methods[0];
_76 = _75(_74);
_77 = _76;
goto block1;
block1:;
_79 = _77;
ITable* $tmp23 = _79->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp23 = $tmp23->next;
}
_80 = $tmp23->methods[0];
_81 = _80(_79);
_82 = _81.value;
if (_82) goto block3; else goto block2;
block2:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
_85 = _77;
ITable* $tmp24 = _85->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp24 = $tmp24->next;
}
_86 = $tmp24->methods[1];
_87 = _86(_85);
_88 = ((org$frostlang$frostc$ASTNode*) _87);
_89 = ((frost$core$Object*) _88);
frost$core$Frost$ref$frost$core$Object$Q(_89);
_91 = *(&local6);
_92 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_92);
*(&local6) = _88;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Do.frost:29
_96 = *(&local6);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, _96);
_98 = _87;
frost$core$Frost$unref$frost$core$Object$Q(_98);
_100 = *(&local6);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_101);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
_105 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = *(&local5);
_108 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_108);
*(&local5) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
_111 = *(&local4);
_112 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_112);
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Do.frost:32
_116 = *(&local0);
_117 = ($fn25) _116->$class->vtable[5];
_118 = _117(_116);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Do.frost:32:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_121 = _118.value;
_122 = !_121;
_123 = (frost$core$Bit) {_122};
_125 = _123.value;
if (_125) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Do.frost:33
_128 = *(&local0);
_129 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_130 = (frost$core$Int) {1u};
_131 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(_129, _130, param1, _131);
_133 = ($fn26) _128->$class->vtable[2];
_134 = _133(_128, _129);
_135 = ((frost$core$Object*) _129);
frost$core$Frost$unref$frost$core$Object$Q(_135);
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Do.frost:35
_139 = *(&local0);
_140 = *(&local2);
_141 = ($fn27) _139->$class->vtable[4];
_141(_139, _140);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Do.frost:36
_144 = *(&local1);
_145 = *(&local3);
org$frostlang$frostc$Compiler$compileConditionalBranch$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, param4, _144, _145);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Do.frost:37
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
void org$frostlang$frostc$statement$Do$init(void* rawSelf) {
org$frostlang$frostc$statement$Do* param0 = (org$frostlang$frostc$statement$Do*) rawSelf;

return;

}
void org$frostlang$frostc$statement$Do$cleanup(void* rawSelf) {
org$frostlang$frostc$statement$Do* param0 = (org$frostlang$frostc$statement$Do*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Do.frost:15
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






