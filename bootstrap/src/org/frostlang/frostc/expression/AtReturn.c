#include "org/frostlang/frostc/expression/AtReturn.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/Variable.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$expression$AtReturn$class_type org$frostlang$frostc$expression$AtReturn$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$AtReturn$cleanup} };

typedef org$frostlang$frostc$IR$Statement$ID (*$fn2)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn10)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x74\x52\x65\x74\x75\x72\x6e", 40, 7066167264907395571, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x69\x6e\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x68\x69\x63\x68\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 64, 1553288918222246752, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x69\x6e\x73\x69\x64\x65\x20\x40\x70\x72\x65", 30, 8171654486767653242, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e", 45, -6910059158768412799, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x74\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 14, 8062424630748313802, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x74\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 14, 8062424630748313802, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x74\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 14, 8062424630748313802, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$AtReturn$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodPosition param1, org$frostlang$frostc$Compiler$TypeContext* param2) {

frost$core$Int local0;
frost$core$Int local1;
org$frostlang$frostc$IR$Statement$ID local2;
org$frostlang$frostc$Variable** _1;
org$frostlang$frostc$Variable* _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _12;
frost$core$Int _13;
frost$core$Int _14;
org$frostlang$frostc$Position _15;
frost$core$Object* _20;
frost$core$Bit* _24;
frost$core$Bit _25;
bool _26;
frost$core$Int _33;
frost$core$Int _34;
frost$core$Int _35;
org$frostlang$frostc$Position _36;
frost$core$Object* _41;
org$frostlang$frostc$IR$Block$ID$nullable* _45;
org$frostlang$frostc$IR$Block$ID$nullable _46;
bool _47;
frost$core$Bit _48;
bool _49;
frost$core$Int _56;
frost$core$Int _57;
frost$core$Int _58;
org$frostlang$frostc$Position _59;
frost$core$Object* _64;
org$frostlang$frostc$Variable** _69;
org$frostlang$frostc$Variable* _70;
bool _71;
frost$core$Bit _72;
bool _73;
frost$core$Int _75;
org$frostlang$frostc$Variable* _78;
org$frostlang$frostc$Variable$Storage** _79;
org$frostlang$frostc$Variable$Storage* _80;
frost$core$Int* _81;
frost$core$Int _82;
frost$core$Int _83;
int64_t _86;
int64_t _87;
bool _88;
frost$core$Bit _89;
bool _91;
frost$core$Int* _93;
frost$core$Int _94;
frost$core$Int _97;
org$frostlang$frostc$IR** _101;
org$frostlang$frostc$IR* _102;
org$frostlang$frostc$IR$Statement* _103;
frost$core$Int _104;
org$frostlang$frostc$IR$Value* _105;
frost$core$Int _106;
frost$core$Int _107;
org$frostlang$frostc$Variable** _108;
org$frostlang$frostc$Variable* _109;
bool _110;
frost$core$Bit _111;
bool _112;
frost$core$Int _114;
org$frostlang$frostc$Variable* _117;
org$frostlang$frostc$Type** _118;
org$frostlang$frostc$Type* _119;
$fn2 _122;
org$frostlang$frostc$IR$Statement$ID _123;
frost$core$Object* _125;
frost$core$Object* _127;
org$frostlang$frostc$IR$Value* _130;
frost$core$Int _131;
org$frostlang$frostc$IR$Statement$ID _132;
org$frostlang$frostc$Variable** _133;
org$frostlang$frostc$Variable* _134;
bool _135;
frost$core$Bit _136;
bool _137;
frost$core$Int _139;
org$frostlang$frostc$Variable* _142;
org$frostlang$frostc$Type** _143;
org$frostlang$frostc$Type* _144;
org$frostlang$frostc$IR$Value* _146;
org$frostlang$frostc$IR$Value* _147;
frost$core$Object* _148;
frost$core$Object* _150;
frost$core$Object* _152;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:14
_1 = &param0->returnVar;
_2 = *_1;
_3 = _2 == NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:15
// begin inline call to method org.frostlang.frostc.Compiler.error(pos:org.frostlang.frostc.MethodPosition, msg:frost.core.String) from AtReturn.frost:15:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6109
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Compiler.frost:6109:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_12 = param1.file;
_13 = param1.line;
_14 = param1.column;
_15 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_12, _13, _14);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, _15, &$s3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:17
_20 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_20);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:19
_24 = &param0->inAtPre;
_25 = *_24;
_26 = _25.value;
if (_26) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:20
// begin inline call to method org.frostlang.frostc.Compiler.error(pos:org.frostlang.frostc.MethodPosition, msg:frost.core.String) from AtReturn.frost:20:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6109
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Compiler.frost:6109:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_33 = param1.file;
_34 = param1.line;
_35 = param1.column;
_36 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_33, _34, _35);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, _36, &$s4);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:21
_41 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_41);
return ((org$frostlang$frostc$IR$Value*) NULL);
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:23
_45 = &param0->atPreBlock;
_46 = *_45;
_47 = !_46.nonnull;
_48 = (frost$core$Bit) {_47};
_49 = _48.value;
if (_49) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:24
// begin inline call to method org.frostlang.frostc.Compiler.error(pos:org.frostlang.frostc.MethodPosition, msg:frost.core.String) from AtReturn.frost:24:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6109
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Compiler.frost:6109:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_56 = param1.file;
_57 = param1.line;
_58 = param1.column;
_59 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_56, _57, _58);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, _59, &$s5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:25
_64 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_64);
return ((org$frostlang$frostc$IR$Value*) NULL);
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:28
_69 = &param0->returnVar;
_70 = *_69;
_71 = _70 != NULL;
_72 = (frost$core$Bit) {_71};
_73 = _72.value;
if (_73) goto block13; else goto block14;
block14:;
_75 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _75, &$s7);
abort(); // unreachable
block13:;
_78 = _70;
_79 = &_78->storage;
_80 = *_79;
_81 = &_80->$rawValue;
_82 = *_81;
_83 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from AtReturn.frost:29:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_86 = _82.value;
_87 = _83.value;
_88 = _86 == _87;
_89 = (frost$core$Bit) {_88};
_91 = _89.value;
if (_91) goto block16; else goto block15;
block16:;
_93 = &_80->$data.$LOCAL.field0;
_94 = *_93;
*(&local1) = _94;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:30
_97 = *(&local1);
*(&local0) = _97;
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:33
_101 = &param0->ir;
_102 = *_101;
_103 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_104 = (frost$core$Int) {14u};
_105 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_106 = (frost$core$Int) {2u};
_107 = *(&local0);
_108 = &param0->returnVar;
_109 = *_108;
_110 = _109 != NULL;
_111 = (frost$core$Bit) {_110};
_112 = _111.value;
if (_112) goto block18; else goto block19;
block19:;
_114 = (frost$core$Int) {34u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _114, &$s9);
abort(); // unreachable
block18:;
_117 = _109;
_118 = &_117->type;
_119 = *_118;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type(_105, _106, _107, _119);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value(_103, _104, param1, _105);
_122 = ($fn10) _102->$class->vtable[2];
_123 = _122(_102, _103);
*(&local2) = _123;
_125 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_125);
_127 = ((frost$core$Object*) _103);
frost$core$Frost$unref$frost$core$Object$Q(_127);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:35
_130 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_131 = (frost$core$Int) {7u};
_132 = *(&local2);
_133 = &param0->returnVar;
_134 = *_133;
_135 = _134 != NULL;
_136 = (frost$core$Bit) {_135};
_137 = _136.value;
if (_137) goto block20; else goto block21;
block21:;
_139 = (frost$core$Int) {35u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _139, &$s12);
abort(); // unreachable
block20:;
_142 = _134;
_143 = &_142->type;
_144 = *_143;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(_130, _131, _132, _144);
_146 = _130;
_147 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _146, param2);
_148 = ((frost$core$Object*) _147);
frost$core$Frost$ref$frost$core$Object$Q(_148);
_150 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_150);
_152 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_152);
return _147;

}
void org$frostlang$frostc$expression$AtReturn$init(void* rawSelf) {
org$frostlang$frostc$expression$AtReturn* param0 = (org$frostlang$frostc$expression$AtReturn*) rawSelf;

return;

}
void org$frostlang$frostc$expression$AtReturn$cleanup(void* rawSelf) {
org$frostlang$frostc$expression$AtReturn* param0 = (org$frostlang$frostc$expression$AtReturn*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/AtReturn.frost:11
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




