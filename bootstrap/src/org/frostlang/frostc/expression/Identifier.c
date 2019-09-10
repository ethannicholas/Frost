#include "org/frostlang/frostc/expression/Identifier.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/collections/Array.h"
#include "frost/collections/ListView.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Identifier$class_type org$frostlang$frostc$expression$Identifier$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Identifier$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 42, -8375094989312626673, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6f\x72\x63\x65\x5f\x73\x65\x6c\x66", 11, -5315424461330038243, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 3249880500923765431, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 427689102976539594, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x27\x73\x65\x6c\x66\x27\x20\x69\x6e\x20\x73\x79\x6d\x62\x6f\x6c\x74\x61\x62\x6c\x65", 24, 8624017954578017041, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 427689102976539594, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 427689102976539594, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 427689102976539594, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 427689102976539594, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 427689102976539594, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, -8767184032745329904, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Identifier$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2) {

org$frostlang$frostc$Symbol* local0 = NULL;
org$frostlang$frostc$Symbol* local1 = NULL;
org$frostlang$frostc$ClassDecl* local2 = NULL;
frost$core$Bit _1;
bool _2;
org$frostlang$frostc$SymbolTable** _5;
org$frostlang$frostc$SymbolTable* _6;
org$frostlang$frostc$Symbol* _7;
frost$core$Object* _9;
org$frostlang$frostc$Symbol* _11;
frost$core$Object* _12;
frost$core$Object* _15;
org$frostlang$frostc$Symbol* _18;
bool _19;
frost$core$Bit _20;
bool _21;
frost$core$Int _23;
org$frostlang$frostc$Symbol* _27;
bool _28;
frost$core$Bit _29;
bool _30;
frost$core$Int _32;
org$frostlang$frostc$Symbol* _35;
org$frostlang$frostc$IR$Value* _36;
frost$core$Object* _37;
frost$core$Object* _39;
org$frostlang$frostc$Symbol* _41;
frost$core$Object* _42;
org$frostlang$frostc$SymbolTable** _47;
org$frostlang$frostc$SymbolTable* _48;
org$frostlang$frostc$Symbol* _49;
frost$core$Object* _51;
org$frostlang$frostc$Symbol* _53;
frost$core$Object* _54;
frost$core$Object* _57;
org$frostlang$frostc$Symbol* _60;
bool _61;
frost$core$Bit _62;
bool _63;
org$frostlang$frostc$ClassDecl* _66;
frost$core$Object* _68;
org$frostlang$frostc$ClassDecl* _70;
frost$core$Object* _71;
frost$core$Object* _74;
org$frostlang$frostc$ClassDecl* _77;
bool _78;
frost$core$Bit _79;
bool _80;
org$frostlang$frostc$ClassDecl* _83;
bool _84;
frost$core$Bit _85;
bool _86;
frost$core$Int _88;
org$frostlang$frostc$ClassDecl* _91;
org$frostlang$frostc$ClassDecl* _92;
bool _93;
frost$core$Bit _94;
bool _95;
frost$core$Int _97;
org$frostlang$frostc$ClassDecl* _100;
org$frostlang$frostc$Type** _101;
org$frostlang$frostc$Type* _102;
frost$core$Bit _103;
org$frostlang$frostc$ClassDecl* _105;
bool _106;
frost$core$Bit _107;
bool _108;
frost$core$Int _110;
org$frostlang$frostc$ClassDecl* _113;
org$frostlang$frostc$Type** _114;
org$frostlang$frostc$Type* _115;
org$frostlang$frostc$IR$Value* _118;
frost$core$Int _119;
org$frostlang$frostc$Type** _122;
org$frostlang$frostc$Type* _123;
frost$collections$Array* _124;
frost$collections$Array* _125;
frost$core$Int _126;
frost$collections$Array* _128;
frost$core$Object* _129;
frost$collections$ListView* _131;
org$frostlang$frostc$Type* _132;
frost$core$Object* _133;
frost$core$Object* _135;
frost$core$Object* _137;
frost$core$Object* _141;
frost$core$Object* _143;
frost$core$Object* _145;
org$frostlang$frostc$IR$Value* _148;
frost$core$Object* _149;
frost$core$Object* _151;
org$frostlang$frostc$ClassDecl* _153;
frost$core$Object* _154;
org$frostlang$frostc$Symbol* _157;
frost$core$Object* _158;
org$frostlang$frostc$ClassDecl* _162;
frost$core$Object* _163;
org$frostlang$frostc$Symbol* _168;
bool _169;
frost$core$Bit _170;
bool _171;
org$frostlang$frostc$Symbol* _174;
bool _175;
frost$core$Bit _176;
bool _177;
frost$core$Int _179;
org$frostlang$frostc$Symbol* _182;
org$frostlang$frostc$IR$Value* _183;
frost$core$Object* _184;
frost$core$Object* _186;
org$frostlang$frostc$Symbol* _188;
frost$core$Object* _189;
frost$core$Object* _196;
org$frostlang$frostc$Symbol* _198;
frost$core$Object* _199;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:13
_1 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param2, &$s2);
_2 = _1.value;
if (_2) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:14
_5 = &param0->symbolTable;
_6 = *_5;
_7 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(_6, &$s3);
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
_9 = ((frost$core$Object*) _7);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = *(&local0);
_12 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_12);
*(&local0) = _7;
_15 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_15);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:15
_18 = *(&local0);
_19 = _18 != NULL;
_20 = (frost$core$Bit) {_19};
_21 = _20.value;
if (_21) goto block3; else goto block4;
block4:;
_23 = (frost$core$Int) {15u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4, _23, &$s5);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:16
_27 = *(&local0);
_28 = _27 != NULL;
_29 = (frost$core$Bit) {_28};
_30 = _29.value;
if (_30) goto block5; else goto block6;
block6:;
_32 = (frost$core$Int) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _32, &$s7);
abort(); // unreachable
block5:;
_35 = _27;
_36 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) NULL), _35);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$ref$frost$core$Object$Q(_37);
_39 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = *(&local0);
_42 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_42);
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return _36;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:18
_47 = &param0->symbolTable;
_48 = *_47;
_49 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(_48, param2);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
_51 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = *(&local1);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local1) = _49;
_57 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_57);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:19
_60 = *(&local1);
_61 = _60 == NULL;
_62 = (frost$core$Bit) {_61};
_63 = _62.value;
if (_63) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:20
_66 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q(param0, param2);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
_68 = ((frost$core$Object*) _66);
frost$core$Frost$ref$frost$core$Object$Q(_68);
_70 = *(&local2);
_71 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_71);
*(&local2) = _66;
_74 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_74);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:21
_77 = *(&local2);
_78 = _77 != NULL;
_79 = (frost$core$Bit) {_78};
_80 = _79.value;
if (_80) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:22
_83 = *(&local2);
_84 = _83 != NULL;
_85 = (frost$core$Bit) {_84};
_86 = _85.value;
if (_86) goto block11; else goto block12;
block12:;
_88 = (frost$core$Int) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _88, &$s9);
abort(); // unreachable
block11:;
_91 = _83;
_92 = *(&local2);
_93 = _92 != NULL;
_94 = (frost$core$Bit) {_93};
_95 = _94.value;
if (_95) goto block13; else goto block14;
block14:;
_97 = (frost$core$Int) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _97, &$s11);
abort(); // unreachable
block13:;
_100 = _92;
_101 = &_100->type;
_102 = *_101;
_103 = org$frostlang$frostc$Compiler$checkGenericArguments$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, _91, _102);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:23
_105 = *(&local2);
_106 = _105 != NULL;
_107 = (frost$core$Bit) {_106};
_108 = _107.value;
if (_108) goto block15; else goto block16;
block16:;
_110 = (frost$core$Int) {23u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s12, _110, &$s13);
abort(); // unreachable
block15:;
_113 = _105;
_114 = &_113->type;
_115 = *_114;
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Identifier.frost:23:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3564
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
_118 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_119 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3564:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:274
_122 = &param0->CLASS_TYPE;
_123 = *_122;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_124 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_125 = _124;
_126 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_125, _126);
_128 = _124;
_129 = ((frost$core$Object*) _115);
frost$collections$Array$add$frost$collections$Array$T(_128, _129);
_131 = ((frost$collections$ListView*) _124);
_132 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_123, _131);
_133 = ((frost$core$Object*) _132);
frost$core$Frost$ref$frost$core$Object$Q(_133);
_135 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_135);
_137 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_137);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type(_118, _119, _115, _132);
_141 = ((frost$core$Object*) _118);
frost$core$Frost$ref$frost$core$Object$Q(_141);
_143 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_143);
_145 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_145);
_148 = _118;
_149 = ((frost$core$Object*) _148);
frost$core$Frost$ref$frost$core$Object$Q(_149);
_151 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_151);
_153 = *(&local2);
_154 = ((frost$core$Object*) _153);
frost$core$Frost$unref$frost$core$Object$Q(_154);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
_157 = *(&local1);
_158 = ((frost$core$Object*) _157);
frost$core$Frost$unref$frost$core$Object$Q(_158);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
return _148;
block10:;
_162 = *(&local2);
_163 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_163);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:26
_168 = *(&local1);
_169 = _168 != NULL;
_170 = (frost$core$Bit) {_169};
_171 = _170.value;
if (_171) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:27
_174 = *(&local1);
_175 = _174 != NULL;
_176 = (frost$core$Bit) {_175};
_177 = _176.value;
if (_177) goto block21; else goto block22;
block22:;
_179 = (frost$core$Int) {27u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _179, &$s15);
abort(); // unreachable
block21:;
_182 = _174;
_183 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) NULL), _182);
_184 = ((frost$core$Object*) _183);
frost$core$Frost$ref$frost$core$Object$Q(_184);
_186 = ((frost$core$Object*) _183);
frost$core$Frost$unref$frost$core$Object$Q(_186);
_188 = *(&local1);
_189 = ((frost$core$Object*) _188);
frost$core$Frost$unref$frost$core$Object$Q(_189);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
return _183;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:29
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s16);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:30
_196 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_196);
_198 = *(&local1);
_199 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_199);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);

}
void org$frostlang$frostc$expression$Identifier$init(org$frostlang$frostc$expression$Identifier* param0) {

return;

}
void org$frostlang$frostc$expression$Identifier$cleanup(org$frostlang$frostc$expression$Identifier* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:10
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






