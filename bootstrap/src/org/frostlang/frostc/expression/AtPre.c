#include "org/frostlang/frostc/expression/AtPre.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/Compiler/AutoAtPreFlag.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$expression$AtPre$class_type org$frostlang$frostc$expression$AtPre$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$AtPre$cleanup} };

typedef void (*$fn2)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn3)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn8)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn9)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x74\x50\x72\x65", 37, 8337020099355785226, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x40\x70\x72\x65\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x77\x69\x74\x68\x69\x6e\x20\x61\x20\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e", 44, 5635200483790214262, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x70\x72\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x40\x70\x72\x65", 27, -562802552943005333, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x74\x50\x72\x65\x2e\x66\x72\x6f\x73\x74", 11, 3976641262113472341, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 103, -224583640390607907, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$AtPre$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodPosition param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$Compiler$AutoAtPreFlag* local1 = NULL;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Value* local3 = NULL;
org$frostlang$frostc$IR** _1;
org$frostlang$frostc$IR* _2;
frost$core$Object* _4;
org$frostlang$frostc$IR* _6;
frost$core$Object* _7;
org$frostlang$frostc$IR$Block$ID$nullable* _11;
org$frostlang$frostc$IR$Block$ID$nullable _12;
bool _13;
frost$core$Bit _14;
bool _15;
frost$core$Int _22;
frost$core$Int _23;
frost$core$Int _24;
org$frostlang$frostc$Position _25;
frost$core$Object* _30;
org$frostlang$frostc$IR* _32;
frost$core$Object* _33;
frost$core$Bit* _38;
frost$core$Bit _39;
bool _40;
frost$core$Int _47;
frost$core$Int _48;
frost$core$Int _49;
org$frostlang$frostc$Position _50;
frost$core$Object* _55;
org$frostlang$frostc$IR* _57;
frost$core$Object* _58;
org$frostlang$frostc$Compiler$AutoAtPreFlag* _63;
frost$core$Object* _66;
org$frostlang$frostc$Compiler$AutoAtPreFlag* _68;
frost$core$Object* _69;
frost$core$Object* _72;
org$frostlang$frostc$IR* _75;
org$frostlang$frostc$IR$Block** _76;
org$frostlang$frostc$IR$Block* _77;
org$frostlang$frostc$IR$Block$ID* _78;
org$frostlang$frostc$IR$Block$ID _79;
org$frostlang$frostc$IR* _82;
org$frostlang$frostc$IR$Block$ID$nullable* _83;
org$frostlang$frostc$IR$Block$ID$nullable _84;
bool _85;
frost$core$Bit _86;
bool _87;
frost$core$Int _89;
org$frostlang$frostc$IR$Block$ID _92;
$fn2 _93;
org$frostlang$frostc$IR$Value* _96;
frost$core$Object* _98;
org$frostlang$frostc$IR$Value* _100;
frost$core$Object* _101;
frost$core$Object* _104;
org$frostlang$frostc$IR* _107;
org$frostlang$frostc$IR$Block** _108;
org$frostlang$frostc$IR$Block* _109;
org$frostlang$frostc$IR$Block$ID* _110;
org$frostlang$frostc$IR$Block$ID _111;
org$frostlang$frostc$IR$Block$ID$nullable _112;
org$frostlang$frostc$IR$Block$ID$nullable* _113;
org$frostlang$frostc$IR* _116;
org$frostlang$frostc$IR$Block$ID _117;
$fn3 _118;
org$frostlang$frostc$IR$Value* _121;
frost$core$Object* _122;
org$frostlang$frostc$IR$Value* _124;
frost$core$Object* _125;
org$frostlang$frostc$Compiler$AutoAtPreFlag* _128;
frost$core$Object* _129;
org$frostlang$frostc$IR* _132;
frost$core$Object* _133;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:14
_1 = &param0->ir;
_2 = *_1;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:15
_11 = &param0->atPreBlock;
_12 = *_11;
_13 = !_12.nonnull;
_14 = (frost$core$Bit) {_13};
_15 = _14.value;
if (_15) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:16
// begin inline call to method org.frostlang.frostc.Compiler.error(pos:org.frostlang.frostc.MethodPosition, msg:frost.core.String) from AtPre.frost:16:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6108
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Compiler.frost:6108:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_22 = param1.file;
_23 = param1.line;
_24 = param1.column;
_25 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_22, _23, _24);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, _25, &$s4);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:17
_30 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = *(&local0);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:19
_38 = &param0->inAtPre;
_39 = *_38;
_40 = _39.value;
if (_40) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:20
// begin inline call to method org.frostlang.frostc.Compiler.error(pos:org.frostlang.frostc.MethodPosition, msg:frost.core.String) from AtPre.frost:20:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6108
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Compiler.frost:6108:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_47 = param1.file;
_48 = param1.line;
_49 = param1.column;
_50 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_47, _48, _49);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, _50, &$s5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:21
_55 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_55);
_57 = *(&local0);
_58 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_58);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:23
_63 = (org$frostlang$frostc$Compiler$AutoAtPreFlag*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$AutoAtPreFlag), (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoAtPreFlag$class);
org$frostlang$frostc$Compiler$AutoAtPreFlag$init$org$frostlang$frostc$Compiler(_63, param0);
*(&local1) = ((org$frostlang$frostc$Compiler$AutoAtPreFlag*) NULL);
_66 = ((frost$core$Object*) _63);
frost$core$Frost$ref$frost$core$Object$Q(_66);
_68 = *(&local1);
_69 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_69);
*(&local1) = _63;
_72 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_72);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:24
_75 = *(&local0);
_76 = &_75->currentBlock;
_77 = *_76;
_78 = &_77->id;
_79 = *_78;
*(&local2) = _79;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:25
_82 = *(&local0);
_83 = &param0->atPreBlock;
_84 = *_83;
_85 = _84.nonnull;
_86 = (frost$core$Bit) {_85};
_87 = _86.value;
if (_87) goto block9; else goto block10;
block10:;
_89 = (frost$core$Int) {25u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _89, &$s7);
abort(); // unreachable
block9:;
_92 = ((org$frostlang$frostc$IR$Block$ID) _84.value);
_93 = ($fn8) _82->$class->vtable[4];
_93(_82, _92);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:26
_96 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, param3);
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
_98 = ((frost$core$Object*) _96);
frost$core$Frost$ref$frost$core$Object$Q(_98);
_100 = *(&local3);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_101);
*(&local3) = _96;
_104 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_104);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:27
_107 = *(&local0);
_108 = &_107->currentBlock;
_109 = *_108;
_110 = &_109->id;
_111 = *_110;
_112 = ((org$frostlang$frostc$IR$Block$ID$nullable) { _111, true });
_113 = &param0->atPreBlock;
*_113 = _112;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:28
_116 = *(&local0);
_117 = *(&local2);
_118 = ($fn9) _116->$class->vtable[4];
_118(_116, _117);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:29
_121 = *(&local3);
_122 = ((frost$core$Object*) _121);
frost$core$Frost$ref$frost$core$Object$Q(_122);
_124 = *(&local3);
_125 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_125);
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
_128 = *(&local1);
_129 = ((frost$core$Object*) _128);
frost$core$Frost$unref$frost$core$Object$Q(_129);
*(&local1) = ((org$frostlang$frostc$Compiler$AutoAtPreFlag*) NULL);
_132 = *(&local0);
_133 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_133);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return _121;

}
void org$frostlang$frostc$expression$AtPre$init(void* rawSelf) {
org$frostlang$frostc$expression$AtPre* param0 = (org$frostlang$frostc$expression$AtPre*) rawSelf;

return;

}
void org$frostlang$frostc$expression$AtPre$cleanup(void* rawSelf) {
org$frostlang$frostc$expression$AtPre* param0 = (org$frostlang$frostc$expression$AtPre*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:10
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




