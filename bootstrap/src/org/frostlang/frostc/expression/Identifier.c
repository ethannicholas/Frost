#include "org/frostlang/frostc/expression/Identifier.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Position.h"
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

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Identifier$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodPosition param1, frost$core$String* param2) {

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
frost$core$Int _85;
frost$core$Int _86;
frost$core$Int _87;
org$frostlang$frostc$Position _88;
org$frostlang$frostc$ClassDecl* _90;
bool _91;
frost$core$Bit _92;
bool _93;
frost$core$Int _95;
org$frostlang$frostc$ClassDecl* _98;
org$frostlang$frostc$ClassDecl* _99;
bool _100;
frost$core$Bit _101;
bool _102;
frost$core$Int _104;
org$frostlang$frostc$ClassDecl* _107;
org$frostlang$frostc$Type** _108;
org$frostlang$frostc$Type* _109;
frost$core$Bit _110;
org$frostlang$frostc$ClassDecl* _112;
bool _113;
frost$core$Bit _114;
bool _115;
frost$core$Int _117;
org$frostlang$frostc$ClassDecl* _120;
org$frostlang$frostc$Type** _121;
org$frostlang$frostc$Type* _122;
org$frostlang$frostc$IR$Value* _125;
frost$core$Int _126;
org$frostlang$frostc$Type** _129;
org$frostlang$frostc$Type* _130;
frost$collections$Array* _131;
frost$core$Int _132;
frost$core$Object* _134;
frost$collections$ListView* _136;
org$frostlang$frostc$Type* _137;
frost$core$Object* _138;
frost$core$Object* _140;
frost$core$Object* _142;
frost$core$Object* _146;
frost$core$Object* _148;
frost$core$Object* _150;
org$frostlang$frostc$IR$Value* _153;
frost$core$Object* _154;
frost$core$Object* _156;
org$frostlang$frostc$ClassDecl* _158;
frost$core$Object* _159;
org$frostlang$frostc$Symbol* _162;
frost$core$Object* _163;
org$frostlang$frostc$ClassDecl* _167;
frost$core$Object* _168;
org$frostlang$frostc$Symbol* _173;
bool _174;
frost$core$Bit _175;
bool _176;
org$frostlang$frostc$Symbol* _179;
bool _180;
frost$core$Bit _181;
bool _182;
frost$core$Int _184;
org$frostlang$frostc$Symbol* _187;
org$frostlang$frostc$IR$Value* _188;
frost$core$Object* _189;
frost$core$Object* _191;
org$frostlang$frostc$Symbol* _193;
frost$core$Object* _194;
frost$core$Int _203;
frost$core$Int _204;
frost$core$Int _205;
org$frostlang$frostc$Position _206;
frost$core$Object* _211;
org$frostlang$frostc$Symbol* _213;
frost$core$Object* _214;
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
_36 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) NULL), _35);
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
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Identifier.frost:22:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_85 = param1.file;
_86 = param1.line;
_87 = param1.column;
_88 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_85, _86, _87);
_90 = *(&local2);
_91 = _90 != NULL;
_92 = (frost$core$Bit) {_91};
_93 = _92.value;
if (_93) goto block12; else goto block13;
block13:;
_95 = (frost$core$Int) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _95, &$s9);
abort(); // unreachable
block12:;
_98 = _90;
_99 = *(&local2);
_100 = _99 != NULL;
_101 = (frost$core$Bit) {_100};
_102 = _101.value;
if (_102) goto block14; else goto block15;
block15:;
_104 = (frost$core$Int) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _104, &$s11);
abort(); // unreachable
block14:;
_107 = _99;
_108 = &_107->type;
_109 = *_108;
_110 = org$frostlang$frostc$Compiler$checkGenericArguments$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Type$R$frost$core$Bit(param0, _88, _98, _109);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:23
_112 = *(&local2);
_113 = _112 != NULL;
_114 = (frost$core$Bit) {_113};
_115 = _114.value;
if (_115) goto block16; else goto block17;
block17:;
_117 = (frost$core$Int) {23u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s12, _117, &$s13);
abort(); // unreachable
block16:;
_120 = _112;
_121 = &_120->type;
_122 = *_121;
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Identifier.frost:23:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3499
_125 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_126 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3499:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:278
_129 = &param0->CLASS_TYPE;
_130 = *_129;
_131 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_132 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_131, _132);
_134 = ((frost$core$Object*) _122);
frost$collections$Array$add$frost$collections$Array$T(_131, _134);
_136 = ((frost$collections$ListView*) _131);
_137 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_130, _136);
_138 = ((frost$core$Object*) _137);
frost$core$Frost$ref$frost$core$Object$Q(_138);
_140 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_140);
_142 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_142);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type(_125, _126, _122, _137);
_146 = ((frost$core$Object*) _125);
frost$core$Frost$ref$frost$core$Object$Q(_146);
_148 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_148);
_150 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_150);
_153 = _125;
_154 = ((frost$core$Object*) _153);
frost$core$Frost$ref$frost$core$Object$Q(_154);
_156 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_156);
_158 = *(&local2);
_159 = ((frost$core$Object*) _158);
frost$core$Frost$unref$frost$core$Object$Q(_159);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
_162 = *(&local1);
_163 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_163);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
return _153;
block10:;
_167 = *(&local2);
_168 = ((frost$core$Object*) _167);
frost$core$Frost$unref$frost$core$Object$Q(_168);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:26
_173 = *(&local1);
_174 = _173 != NULL;
_175 = (frost$core$Bit) {_174};
_176 = _175.value;
if (_176) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:27
_179 = *(&local1);
_180 = _179 != NULL;
_181 = (frost$core$Bit) {_180};
_182 = _181.value;
if (_182) goto block22; else goto block23;
block23:;
_184 = (frost$core$Int) {27u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _184, &$s15);
abort(); // unreachable
block22:;
_187 = _179;
_188 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) NULL), _187);
_189 = ((frost$core$Object*) _188);
frost$core$Frost$ref$frost$core$Object$Q(_189);
_191 = ((frost$core$Object*) _188);
frost$core$Frost$unref$frost$core$Object$Q(_191);
_193 = *(&local1);
_194 = ((frost$core$Object*) _193);
frost$core$Frost$unref$frost$core$Object$Q(_194);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
return _188;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:29
// begin inline call to method org.frostlang.frostc.Compiler.error(pos:org.frostlang.frostc.MethodPosition, msg:frost.core.String) from Identifier.frost:29:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6117
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Compiler.frost:6117:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_203 = param1.file;
_204 = param1.line;
_205 = param1.column;
_206 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_203, _204, _205);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, _206, &$s16);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:30
_211 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_211);
_213 = *(&local1);
_214 = ((frost$core$Object*) _213);
frost$core$Frost$unref$frost$core$Object$Q(_214);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);

}
void org$frostlang$frostc$expression$Identifier$init(void* rawSelf) {
org$frostlang$frostc$expression$Identifier* param0 = (org$frostlang$frostc$expression$Identifier*) rawSelf;

return;

}
void org$frostlang$frostc$expression$Identifier$cleanup(void* rawSelf) {
org$frostlang$frostc$expression$Identifier* param0 = (org$frostlang$frostc$expression$Identifier*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Identifier.frost:10
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






