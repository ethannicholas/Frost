#include "org/frostlang/frostc/expression/AtPre.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/Compiler/AutoAtPreFlag.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$AtPre$class_type org$frostlang$frostc$expression$AtPre$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$AtPre$cleanup} };

typedef void (*$fn2)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn3)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn8)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn9)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x74\x50\x72\x65", 37, 8337020099355785226, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x77\x69\x74\x68\x69\x6e\x20\x61\x20\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e", 44, 5635200483790214262, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x70\x72\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x40\x70\x72\x65", 27, -562802552943005333, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x74\x50\x72\x65\x2e\x66\x72\x6f\x73\x74", 11, 3976641262113472341, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 103, -224583640390607907, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$AtPre$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

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
frost$core$Object* _20;
org$frostlang$frostc$IR* _22;
frost$core$Object* _23;
frost$core$Bit* _28;
frost$core$Bit _29;
bool _30;
frost$core$Object* _35;
org$frostlang$frostc$IR* _37;
frost$core$Object* _38;
org$frostlang$frostc$Compiler$AutoAtPreFlag* _43;
frost$core$Object* _46;
org$frostlang$frostc$Compiler$AutoAtPreFlag* _48;
frost$core$Object* _49;
frost$core$Object* _52;
org$frostlang$frostc$IR* _55;
org$frostlang$frostc$IR$Block** _56;
org$frostlang$frostc$IR$Block* _57;
org$frostlang$frostc$IR$Block$ID* _58;
org$frostlang$frostc$IR$Block$ID _59;
org$frostlang$frostc$IR* _62;
org$frostlang$frostc$IR$Block$ID$nullable* _63;
org$frostlang$frostc$IR$Block$ID$nullable _64;
bool _65;
frost$core$Bit _66;
bool _67;
frost$core$Int _69;
org$frostlang$frostc$IR$Block$ID _72;
$fn2 _73;
org$frostlang$frostc$IR$Value* _76;
frost$core$Object* _78;
org$frostlang$frostc$IR$Value* _80;
frost$core$Object* _81;
frost$core$Object* _84;
org$frostlang$frostc$IR* _87;
org$frostlang$frostc$IR$Block** _88;
org$frostlang$frostc$IR$Block* _89;
org$frostlang$frostc$IR$Block$ID* _90;
org$frostlang$frostc$IR$Block$ID _91;
org$frostlang$frostc$IR$Block$ID$nullable _92;
org$frostlang$frostc$IR$Block$ID$nullable* _93;
org$frostlang$frostc$IR* _96;
org$frostlang$frostc$IR$Block$ID _97;
$fn3 _98;
org$frostlang$frostc$IR$Value* _101;
frost$core$Object* _102;
org$frostlang$frostc$IR$Value* _104;
frost$core$Object* _105;
org$frostlang$frostc$Compiler$AutoAtPreFlag* _108;
frost$core$Object* _109;
org$frostlang$frostc$IR* _112;
frost$core$Object* _113;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:13
_1 = &param0->ir;
_2 = *_1;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:14
_11 = &param0->atPreBlock;
_12 = *_11;
_13 = !_12.nonnull;
_14 = (frost$core$Bit) {_13};
_15 = _14.value;
if (_15) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:15
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s4);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:16
_20 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = *(&local0);
_23 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_23);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:18
_28 = &param0->inAtPre;
_29 = *_28;
_30 = _29.value;
if (_30) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:19
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:20
_35 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_35);
_37 = *(&local0);
_38 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_38);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:22
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$Compiler$AutoAtPreFlag));
_43 = (org$frostlang$frostc$Compiler$AutoAtPreFlag*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoAtPreFlag$class);
org$frostlang$frostc$Compiler$AutoAtPreFlag$init$org$frostlang$frostc$Compiler(_43, param0);
*(&local1) = ((org$frostlang$frostc$Compiler$AutoAtPreFlag*) NULL);
_46 = ((frost$core$Object*) _43);
frost$core$Frost$ref$frost$core$Object$Q(_46);
_48 = *(&local1);
_49 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_49);
*(&local1) = _43;
_52 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_52);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:23
_55 = *(&local0);
_56 = &_55->currentBlock;
_57 = *_56;
_58 = &_57->id;
_59 = *_58;
*(&local2) = _59;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:24
_62 = *(&local0);
_63 = &param0->atPreBlock;
_64 = *_63;
_65 = _64.nonnull;
_66 = (frost$core$Bit) {_65};
_67 = _66.value;
if (_67) goto block5; else goto block6;
block6:;
_69 = (frost$core$Int) {24u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _69, &$s7);
abort(); // unreachable
block5:;
_72 = ((org$frostlang$frostc$IR$Block$ID) _64.value);
_73 = ($fn8) _62->$class->vtable[4];
_73(_62, _72);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:25
_76 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, param3);
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
_78 = ((frost$core$Object*) _76);
frost$core$Frost$ref$frost$core$Object$Q(_78);
_80 = *(&local3);
_81 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_81);
*(&local3) = _76;
_84 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_84);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:26
_87 = *(&local0);
_88 = &_87->currentBlock;
_89 = *_88;
_90 = &_89->id;
_91 = *_90;
_92 = ((org$frostlang$frostc$IR$Block$ID$nullable) { _91, true });
_93 = &param0->atPreBlock;
*_93 = _92;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:27
_96 = *(&local0);
_97 = *(&local2);
_98 = ($fn9) _96->$class->vtable[4];
_98(_96, _97);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:28
_101 = *(&local3);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$ref$frost$core$Object$Q(_102);
_104 = *(&local3);
_105 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_105);
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
_108 = *(&local1);
_109 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_109);
*(&local1) = ((org$frostlang$frostc$Compiler$AutoAtPreFlag*) NULL);
_112 = *(&local0);
_113 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_113);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return _101;

}
void org$frostlang$frostc$expression$AtPre$init(org$frostlang$frostc$expression$AtPre* param0) {

return;

}
void org$frostlang$frostc$expression$AtPre$cleanup(org$frostlang$frostc$expression$AtPre* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtPre.frost:10
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






