#include "org/frostlang/frostc/statement/If.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MethodPosition.h"
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

void org$frostlang$frostc$statement$If$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodPosition param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4) {

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
$fn6 _63;
frost$collections$Iterator* _64;
$fn7 _66;
frost$core$Bit _67;
bool _68;
$fn8 _71;
frost$core$Object* _72;
org$frostlang$frostc$ASTNode* _73;
frost$core$Object* _74;
org$frostlang$frostc$ASTNode* _76;
frost$core$Object* _77;
org$frostlang$frostc$ASTNode* _81;
frost$core$Object* _83;
org$frostlang$frostc$ASTNode* _85;
frost$core$Object* _86;
frost$core$Object* _90;
org$frostlang$frostc$Compiler$AutoScope* _92;
frost$core$Object* _93;
org$frostlang$frostc$IR* _97;
$fn9 _98;
frost$core$Bit _99;
bool _102;
bool _103;
frost$core$Bit _104;
bool _106;
org$frostlang$frostc$IR* _109;
org$frostlang$frostc$IR$Statement* _110;
frost$core$Int _111;
org$frostlang$frostc$IR$Block$ID _112;
$fn10 _114;
org$frostlang$frostc$IR$Statement$ID _115;
frost$core$Object* _116;
bool _120;
frost$core$Bit _121;
bool _122;
org$frostlang$frostc$IR* _125;
org$frostlang$frostc$IR$Block$ID _126;
$fn11 _127;
bool _130;
frost$core$Bit _131;
bool _132;
frost$core$Int _134;
org$frostlang$frostc$ASTNode* _137;
org$frostlang$frostc$IR* _140;
$fn12 _141;
frost$core$Bit _142;
bool _145;
bool _146;
frost$core$Bit _147;
bool _149;
org$frostlang$frostc$IR* _152;
org$frostlang$frostc$IR$Statement* _153;
frost$core$Int _154;
org$frostlang$frostc$IR$Block$ID _155;
$fn13 _157;
org$frostlang$frostc$IR$Statement$ID _158;
frost$core$Object* _159;
org$frostlang$frostc$IR* _164;
org$frostlang$frostc$IR$Block$ID _165;
$fn14 _166;
org$frostlang$frostc$IR$Value* _168;
frost$core$Object* _169;
org$frostlang$frostc$IR* _172;
frost$core$Object* _173;
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
ITable* $tmp22 = _62->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp22 = $tmp22->next;
}
_63 = $tmp22->methods[0];
_64 = _63(_62);
goto block4;
block4:;
ITable* $tmp23 = _64->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp23 = $tmp23->next;
}
_66 = $tmp23->methods[0];
_67 = _66(_64);
_68 = _67.value;
if (_68) goto block6; else goto block5;
block5:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp24 = _64->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp24 = $tmp24->next;
}
_71 = $tmp24->methods[1];
_72 = _71(_64);
_73 = ((org$frostlang$frostc$ASTNode*) _72);
_74 = ((frost$core$Object*) _73);
frost$core$Frost$ref$frost$core$Object$Q(_74);
_76 = *(&local6);
_77 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_77);
*(&local6) = _73;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:33
_81 = *(&local6);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, _81);
_83 = _72;
frost$core$Frost$unref$frost$core$Object$Q(_83);
_85 = *(&local6);
_86 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_86);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block6:;
_90 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_90);
_92 = *(&local5);
_93 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_93);
*(&local5) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:36
_97 = *(&local0);
_98 = ($fn25) _97->$class->vtable[5];
_99 = _98(_97);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from If.frost:36:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_102 = _99.value;
_103 = !_102;
_104 = (frost$core$Bit) {_103};
_106 = _104.value;
if (_106) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:37
_109 = *(&local0);
_110 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_111 = (frost$core$Int) {1u};
_112 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Block$ID(_110, _111, param1, _112);
_114 = ($fn26) _109->$class->vtable[2];
_115 = _114(_109, _110);
_116 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_116);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:39
_120 = param4 != NULL;
_121 = (frost$core$Bit) {_120};
_122 = _121.value;
if (_122) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:40
_125 = *(&local0);
_126 = *(&local4);
_127 = ($fn27) _125->$class->vtable[4];
_127(_125, _126);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:41
_130 = param4 != NULL;
_131 = (frost$core$Bit) {_130};
_132 = _131.value;
if (_132) goto block12; else goto block13;
block13:;
_134 = (frost$core$Int) {41u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s28, _134, &$s29);
abort(); // unreachable
block12:;
_137 = param4;
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, _137);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:42
_140 = *(&local0);
_141 = ($fn30) _140->$class->vtable[5];
_142 = _141(_140);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from If.frost:42:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_145 = _142.value;
_146 = !_145;
_147 = (frost$core$Bit) {_146};
_149 = _147.value;
if (_149) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:43
_152 = *(&local0);
_153 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_154 = (frost$core$Int) {1u};
_155 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Block$ID(_153, _154, param1, _155);
_157 = ($fn31) _152->$class->vtable[2];
_158 = _157(_152, _153);
_159 = ((frost$core$Object*) _153);
frost$core$Frost$unref$frost$core$Object$Q(_159);
goto block15;
block15:;
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:46
_164 = *(&local0);
_165 = *(&local3);
_166 = ($fn32) _164->$class->vtable[4];
_166(_164, _165);
_168 = *(&local1);
_169 = ((frost$core$Object*) _168);
frost$core$Frost$unref$frost$core$Object$Q(_169);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_172 = *(&local0);
_173 = ((frost$core$Object*) _172);
frost$core$Frost$unref$frost$core$Object$Q(_173);
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






