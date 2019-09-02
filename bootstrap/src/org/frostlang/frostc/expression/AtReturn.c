#include "org/frostlang/frostc/expression/AtReturn.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/Variable.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$AtReturn$class_type org$frostlang$frostc$expression$AtReturn$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$AtReturn$cleanup} };

typedef org$frostlang$frostc$IR$Statement$ID (*$fn2)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn10)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x74\x52\x65\x74\x75\x72\x6e", 40, 7066167264907395571, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x69\x6e\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x68\x69\x63\x68\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 64, 1553288918222246752, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x69\x6e\x73\x69\x64\x65\x20\x40\x70\x72\x65", 30, 8171654486767653242, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e", 45, -6910059158768412799, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x74\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 14, 8062424630748313802, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x74\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 14, 8062424630748313802, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x74\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 14, 8062424630748313802, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$AtReturn$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$Compiler$TypeContext* param2) {

frost$core$Int local0;
frost$core$Int local1;
org$frostlang$frostc$IR$Statement$ID local2;
org$frostlang$frostc$Variable** _1;
org$frostlang$frostc$Variable* _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Object* _10;
frost$core$Bit* _14;
frost$core$Bit _15;
bool _16;
frost$core$Object* _21;
org$frostlang$frostc$IR$Block$ID$nullable* _25;
org$frostlang$frostc$IR$Block$ID$nullable _26;
bool _27;
frost$core$Bit _28;
bool _29;
frost$core$Object* _34;
org$frostlang$frostc$Variable** _39;
org$frostlang$frostc$Variable* _40;
bool _41;
frost$core$Bit _42;
bool _43;
frost$core$Int _45;
org$frostlang$frostc$Variable* _48;
org$frostlang$frostc$Variable$Storage** _49;
org$frostlang$frostc$Variable$Storage* _50;
frost$core$Int* _51;
frost$core$Int _52;
frost$core$Int _53;
int64_t _56;
int64_t _57;
bool _58;
frost$core$Bit _59;
bool _61;
frost$core$Int* _63;
frost$core$Int _64;
frost$core$Int _67;
org$frostlang$frostc$IR** _71;
org$frostlang$frostc$IR* _72;
org$frostlang$frostc$IR$Statement* _73;
frost$core$Int _74;
org$frostlang$frostc$IR$Value* _75;
frost$core$Int _76;
frost$core$Int _77;
org$frostlang$frostc$Variable** _78;
org$frostlang$frostc$Variable* _79;
bool _80;
frost$core$Bit _81;
bool _82;
frost$core$Int _84;
org$frostlang$frostc$Variable* _87;
org$frostlang$frostc$Type** _88;
org$frostlang$frostc$Type* _89;
$fn2 _92;
org$frostlang$frostc$IR$Statement$ID _93;
frost$core$Object* _95;
frost$core$Object* _97;
org$frostlang$frostc$IR$Value* _100;
frost$core$Int _101;
org$frostlang$frostc$IR$Statement$ID _102;
org$frostlang$frostc$Variable** _103;
org$frostlang$frostc$Variable* _104;
bool _105;
frost$core$Bit _106;
bool _107;
frost$core$Int _109;
org$frostlang$frostc$Variable* _112;
org$frostlang$frostc$Type** _113;
org$frostlang$frostc$Type* _114;
org$frostlang$frostc$IR$Value* _116;
org$frostlang$frostc$IR$Value* _117;
frost$core$Object* _118;
frost$core$Object* _120;
frost$core$Object* _122;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:14
_1 = &param0->returnVar;
_2 = *_1;
_3 = _2 == NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:15
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:17
_10 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_10);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:19
_14 = &param0->inAtPre;
_15 = *_14;
_16 = _15.value;
if (_16) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:20
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s4);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:21
_21 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_21);
return ((org$frostlang$frostc$IR$Value*) NULL);
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:23
_25 = &param0->atPreBlock;
_26 = *_25;
_27 = !_26.nonnull;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:24
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:25
_34 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_34);
return ((org$frostlang$frostc$IR$Value*) NULL);
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:28
_39 = &param0->returnVar;
_40 = *_39;
_41 = _40 != NULL;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block7; else goto block8;
block8:;
_45 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _45, &$s7);
abort(); // unreachable
block7:;
_48 = _40;
_49 = &_48->storage;
_50 = *_49;
_51 = &_50->$rawValue;
_52 = *_51;
_53 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from AtReturn.frost:29:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_56 = _52.value;
_57 = _53.value;
_58 = _56 == _57;
_59 = (frost$core$Bit) {_58};
_61 = _59.value;
if (_61) goto block10; else goto block9;
block10:;
_63 = (frost$core$Int*) (_50->$data + 0);
_64 = *_63;
*(&local1) = _64;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:30
_67 = *(&local1);
*(&local0) = _67;
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:33
_71 = &param0->ir;
_72 = *_71;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
_73 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_74 = (frost$core$Int) {14u};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
_75 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_76 = (frost$core$Int) {2u};
_77 = *(&local0);
_78 = &param0->returnVar;
_79 = *_78;
_80 = _79 != NULL;
_81 = (frost$core$Bit) {_80};
_82 = _81.value;
if (_82) goto block12; else goto block13;
block13:;
_84 = (frost$core$Int) {34u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _84, &$s9);
abort(); // unreachable
block12:;
_87 = _79;
_88 = &_87->type;
_89 = *_88;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type(_75, _76, _77, _89);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_73, _74, param1, _75);
_92 = ($fn10) _72->$class->vtable[2];
_93 = _92(_72, _73);
*(&local2) = _93;
_95 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_95);
_97 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_97);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:35
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
_100 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_101 = (frost$core$Int) {7u};
_102 = *(&local2);
_103 = &param0->returnVar;
_104 = *_103;
_105 = _104 != NULL;
_106 = (frost$core$Bit) {_105};
_107 = _106.value;
if (_107) goto block14; else goto block15;
block15:;
_109 = (frost$core$Int) {35u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _109, &$s12);
abort(); // unreachable
block14:;
_112 = _104;
_113 = &_112->type;
_114 = *_113;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(_100, _101, _102, _114);
_116 = _100;
_117 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _116, param2);
_118 = ((frost$core$Object*) _117);
frost$core$Frost$ref$frost$core$Object$Q(_118);
_120 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_120);
_122 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_122);
return _117;

}
void org$frostlang$frostc$expression$AtReturn$init(org$frostlang$frostc$expression$AtReturn* param0) {

return;

}
void org$frostlang$frostc$expression$AtReturn$cleanup(org$frostlang$frostc$expression$AtReturn* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:11
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






