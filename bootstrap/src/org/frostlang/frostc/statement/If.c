#include "org/frostlang/frostc/statement/If.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$If$class_type org$frostlang$frostc$statement$If$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$If$cleanup} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn2)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn4)(org$frostlang$frostc$IR*, frost$core$String*);
typedef void (*$fn5)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn6)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn7)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn8)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn9)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn10)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn11)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn12)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn13)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn14)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn15)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn17)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn19)(org$frostlang$frostc$IR*, frost$core$String*);
typedef void (*$fn21)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn25)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn26)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn27)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn30)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn31)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn32)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x66", 33, -6167115790057972022, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x66\x20\x74\x72\x75\x65", 7, 8109127451288362590, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x66\x20\x65\x6e\x64", 6, 3467118246808131167, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x66\x20\x66\x61\x6c\x73\x65", 8, -7063678156154507783, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x66\x2e\x66\x72\x6f\x73\x74", 8, -8891973059455874766, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };

void org$frostlang$frostc$statement$If$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$IR$Block$ID local4;
org$frostlang$frostc$Compiler$AutoScope* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
org$frostlang$frostc$IR** _1;
org$frostlang$frostc$IR* _2;
frost$core$Object* _4;
org$frostlang$frostc$IR* _6;
frost$core$Object* _7;
org$frostlang$frostc$IR* _13;
$fn2 _14;
org$frostlang$frostc$IR$Block$ID _15;
org$frostlang$frostc$IR* _18;
$fn3 _19;
org$frostlang$frostc$IR$Block$ID _20;
bool _24;
frost$core$Bit _25;
bool _26;
org$frostlang$frostc$IR* _29;
$fn4 _30;
org$frostlang$frostc$IR$Block$ID _31;
org$frostlang$frostc$IR$Block$ID _36;
org$frostlang$frostc$IR$Block$ID _40;
org$frostlang$frostc$IR$Block$ID _41;
org$frostlang$frostc$IR* _44;
org$frostlang$frostc$IR$Block$ID _45;
$fn5 _46;
org$frostlang$frostc$Compiler$AutoScope* _50;
frost$core$Object* _53;
org$frostlang$frostc$Compiler$AutoScope* _55;
frost$core$Object* _56;
frost$core$Object* _59;
frost$collections$Iterable* _62;
frost$collections$Iterable* _63;
$fn6 _64;
frost$collections$Iterator* _65;
frost$collections$Iterator* _66;
frost$collections$Iterator* _68;
$fn7 _69;
frost$core$Bit _70;
bool _71;
frost$collections$Iterator* _74;
$fn8 _75;
frost$core$Object* _76;
org$frostlang$frostc$ASTNode* _77;
frost$core$Object* _78;
org$frostlang$frostc$ASTNode* _80;
frost$core$Object* _81;
org$frostlang$frostc$ASTNode* _85;
frost$core$Object* _87;
org$frostlang$frostc$ASTNode* _89;
frost$core$Object* _90;
frost$core$Object* _94;
org$frostlang$frostc$Compiler$AutoScope* _96;
frost$core$Object* _97;
org$frostlang$frostc$IR* _101;
$fn9 _102;
frost$core$Bit _103;
bool _106;
bool _107;
frost$core$Bit _108;
bool _110;
org$frostlang$frostc$IR* _113;
org$frostlang$frostc$IR$Statement* _114;
frost$core$Int _115;
org$frostlang$frostc$IR$Block$ID _116;
$fn10 _118;
org$frostlang$frostc$IR$Statement$ID _119;
frost$core$Object* _120;
bool _124;
frost$core$Bit _125;
bool _126;
org$frostlang$frostc$IR* _129;
org$frostlang$frostc$IR$Block$ID _130;
$fn11 _131;
bool _134;
frost$core$Bit _135;
bool _136;
frost$core$Int _138;
org$frostlang$frostc$ASTNode* _141;
org$frostlang$frostc$IR* _144;
$fn12 _145;
frost$core$Bit _146;
bool _149;
bool _150;
frost$core$Bit _151;
bool _153;
org$frostlang$frostc$IR* _156;
org$frostlang$frostc$IR$Statement* _157;
frost$core$Int _158;
org$frostlang$frostc$IR$Block$ID _159;
$fn13 _161;
org$frostlang$frostc$IR$Statement$ID _162;
frost$core$Object* _163;
org$frostlang$frostc$IR* _168;
org$frostlang$frostc$IR$Block$ID _169;
$fn14 _170;
org$frostlang$frostc$IR$Value* _172;
frost$core$Object* _173;
org$frostlang$frostc$IR* _176;
frost$core$Object* _177;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:17
_1 = &param0->ir;
_2 = *_1;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:18
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:19
_13 = *(&local0);
_14 = ($fn15) _13->$class->vtable[3];
_15 = _14(_13, &$s16);
*(&local2) = _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:20
_18 = *(&local0);
_19 = ($fn17) _18->$class->vtable[3];
_20 = _19(_18, &$s18);
*(&local3) = _20;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:22
_24 = param4 != NULL;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:23
_29 = *(&local0);
_30 = ($fn19) _29->$class->vtable[3];
_31 = _30(_29, &$s20);
*(&local4) = _31;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:26
_36 = *(&local3);
*(&local4) = _36;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:28
_40 = *(&local2);
_41 = *(&local4);
org$frostlang$frostc$Compiler$compileConditionalBranch$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, param2, _40, _41);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:29
_44 = *(&local0);
_45 = *(&local2);
_46 = ($fn21) _44->$class->vtable[4];
_46(_44, _45);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:31
_50 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$AutoScope), (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler(_50, param0);
*(&local5) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
_53 = ((frost$core$Object*) _50);
frost$core$Frost$ref$frost$core$Object$Q(_53);
_55 = *(&local5);
_56 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_56);
*(&local5) = _50;
_59 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_59);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:32
_62 = ((frost$collections$Iterable*) param3);
_63 = _62;
ITable* $tmp22 = _63->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp22 = $tmp22->next;
}
_64 = $tmp22->methods[0];
_65 = _64(_63);
_66 = _65;
goto block4;
block4:;
_68 = _66;
ITable* $tmp23 = _68->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp23 = $tmp23->next;
}
_69 = $tmp23->methods[0];
_70 = _69(_68);
_71 = _70.value;
if (_71) goto block6; else goto block5;
block5:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
_74 = _66;
ITable* $tmp24 = _74->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp24 = $tmp24->next;
}
_75 = $tmp24->methods[1];
_76 = _75(_74);
_77 = ((org$frostlang$frostc$ASTNode*) _76);
_78 = ((frost$core$Object*) _77);
frost$core$Frost$ref$frost$core$Object$Q(_78);
_80 = *(&local6);
_81 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_81);
*(&local6) = _77;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:33
_85 = *(&local6);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, _85);
_87 = _76;
frost$core$Frost$unref$frost$core$Object$Q(_87);
_89 = *(&local6);
_90 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_90);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block6:;
_94 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_94);
_96 = *(&local5);
_97 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_97);
*(&local5) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:36
_101 = *(&local0);
_102 = ($fn25) _101->$class->vtable[5];
_103 = _102(_101);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from If.frost:36:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_106 = _103.value;
_107 = !_106;
_108 = (frost$core$Bit) {_107};
_110 = _108.value;
if (_110) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:37
_113 = *(&local0);
_114 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_115 = (frost$core$Int) {1u};
_116 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(_114, _115, param1, _116);
_118 = ($fn26) _113->$class->vtable[2];
_119 = _118(_113, _114);
_120 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_120);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:39
_124 = param4 != NULL;
_125 = (frost$core$Bit) {_124};
_126 = _125.value;
if (_126) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:40
_129 = *(&local0);
_130 = *(&local4);
_131 = ($fn27) _129->$class->vtable[4];
_131(_129, _130);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:41
_134 = param4 != NULL;
_135 = (frost$core$Bit) {_134};
_136 = _135.value;
if (_136) goto block12; else goto block13;
block13:;
_138 = (frost$core$Int) {41u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s28, _138, &$s29);
abort(); // unreachable
block12:;
_141 = param4;
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, _141);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:42
_144 = *(&local0);
_145 = ($fn30) _144->$class->vtable[5];
_146 = _145(_144);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from If.frost:42:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_149 = _146.value;
_150 = !_149;
_151 = (frost$core$Bit) {_150};
_153 = _151.value;
if (_153) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:43
_156 = *(&local0);
_157 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_158 = (frost$core$Int) {1u};
_159 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(_157, _158, param1, _159);
_161 = ($fn31) _156->$class->vtable[2];
_162 = _161(_156, _157);
_163 = ((frost$core$Object*) _157);
frost$core$Frost$unref$frost$core$Object$Q(_163);
goto block15;
block15:;
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:46
_168 = *(&local0);
_169 = *(&local3);
_170 = ($fn32) _168->$class->vtable[4];
_170(_168, _169);
_172 = *(&local1);
_173 = ((frost$core$Object*) _172);
frost$core$Frost$unref$frost$core$Object$Q(_173);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_176 = *(&local0);
_177 = ((frost$core$Object*) _176);
frost$core$Frost$unref$frost$core$Object$Q(_177);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$If$init(void* rawSelf) {
org$frostlang$frostc$statement$If* param0 = (org$frostlang$frostc$statement$If*) rawSelf;

return;

}
void org$frostlang$frostc$statement$If$cleanup(void* rawSelf) {
org$frostlang$frostc$statement$If* param0 = (org$frostlang$frostc$statement$If*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:13
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






