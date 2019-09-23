#include "org/frostlang/frostc/expression/IntLiteral.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Real64.h"
#include "frost/collections/Array.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/collections/CollectionView.h"
#include "frost/unsafe/NewPointer.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/FixedArray.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$IntLiteral$class_type org$frostlang$frostc$expression$IntLiteral$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$IntLiteral$cleanup} };

typedef frost$core$Bit (*$fn2)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn15)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn16)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn17)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn18)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn19)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn20)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn21)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn22)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn52)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c", 42, 5701837077934559492, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706997065182274518, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706997065182274518, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706997065182274518, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x67\x65\x72\x20\x6c\x69\x74\x65\x72\x61\x6c\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e\x67\x65", 31, 3706997065182274518, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 16, 8102773322790090793, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 16, 8102773322790090793, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 16, 8102773322790090793, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 16, 8102773322790090793, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 217, -2671469345214540238, NULL };

frost$core$Int org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$Int64$R$frost$core$Int(frost$core$Int64 param0) {

frost$core$Int64 _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
frost$core$Int64 _8;
int64_t _9;
int64_t _10;
bool _11;
frost$core$Bit _12;
bool _13;
frost$core$Int _16;
frost$core$Int64 _19;
int64_t _20;
int64_t _21;
bool _22;
frost$core$Bit _23;
bool _24;
frost$core$Int64 _26;
int64_t _27;
int64_t _28;
bool _29;
frost$core$Bit _30;
bool _31;
frost$core$Int _34;
frost$core$Int64 _37;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
frost$core$Int64 _44;
int64_t _45;
int64_t _46;
bool _47;
frost$core$Bit _48;
bool _49;
frost$core$Int _52;
frost$core$Int _55;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:17
_1 = (frost$core$Int64) {18446744073709551488u};
_2 = param0.value;
_3 = _1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block3; else goto block2;
block3:;
_8 = (frost$core$Int64) {127u};
_9 = param0.value;
_10 = _8.value;
_11 = _9 <= _10;
_12 = (frost$core$Bit) {_11};
_13 = _12.value;
if (_13) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:18
_16 = (frost$core$Int) {8u};
return _16;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:20
_19 = (frost$core$Int64) {18446744073709518848u};
_20 = param0.value;
_21 = _19.value;
_22 = _20 >= _21;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block6; else goto block5;
block6:;
_26 = (frost$core$Int64) {32767u};
_27 = param0.value;
_28 = _26.value;
_29 = _27 <= _28;
_30 = (frost$core$Bit) {_29};
_31 = _30.value;
if (_31) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:21
_34 = (frost$core$Int) {16u};
return _34;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:23
_37 = (frost$core$Int64) {18446744071562067968u};
_38 = param0.value;
_39 = _37.value;
_40 = _38 >= _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block9; else goto block8;
block9:;
_44 = (frost$core$Int64) {2147483647u};
_45 = param0.value;
_46 = _44.value;
_47 = _45 <= _46;
_48 = (frost$core$Bit) {_47};
_49 = _48.value;
if (_49) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:24
_52 = (frost$core$Int) {32u};
return _52;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:26
_55 = (frost$core$Int) {64u};
return _55;

}
frost$core$Int org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$UInt64$R$frost$core$Int(frost$core$UInt64 param0) {

frost$core$UInt64 _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
frost$core$Int _9;
frost$core$UInt64 _12;
uint64_t _13;
uint64_t _14;
bool _15;
frost$core$Bit _16;
bool _17;
frost$core$Int _20;
frost$core$UInt64 _23;
uint64_t _24;
uint64_t _25;
bool _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _31;
frost$core$Int _34;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:31
_1 = (frost$core$UInt64) {255u};
_2 = param0.value;
_3 = _1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:32
_9 = (frost$core$Int) {8u};
return _9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:34
_12 = (frost$core$UInt64) {65535u};
_13 = param0.value;
_14 = _12.value;
_15 = _13 <= _14;
_16 = (frost$core$Bit) {_15};
_17 = _16.value;
if (_17) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:35
_20 = (frost$core$Int) {16u};
return _20;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:37
_23 = (frost$core$UInt64) {4294967295u};
_24 = param0.value;
_25 = _23.value;
_26 = _24 <= _25;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:38
_31 = (frost$core$Int) {32u};
return _31;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:40
_34 = (frost$core$Int) {64u};
return _34;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$IntLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodPosition param1, frost$core$UInt64 param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
org$frostlang$frostc$Type** _13;
org$frostlang$frostc$Type* _14;
frost$core$Object* _16;
org$frostlang$frostc$Type* _18;
frost$core$Object* _19;
frost$core$Bit* _22;
frost$core$Bit _23;
org$frostlang$frostc$Type* _25;
org$frostlang$frostc$Type$Kind* _26;
org$frostlang$frostc$Type$Kind _27;
frost$core$Equatable* _28;
frost$core$Int _29;
frost$core$Int* _32;
org$frostlang$frostc$Type$Kind _34;
org$frostlang$frostc$Type$Kind _37;
frost$core$Equatable* _38;
$fn2 _39;
frost$core$Bit _40;
bool _41;
frost$core$Object* _42;
frost$core$Object* _44;
org$frostlang$frostc$Type* _47;
org$frostlang$frostc$Type$Kind* _48;
org$frostlang$frostc$Type$Kind _49;
frost$core$Equatable* _50;
frost$core$Int _51;
frost$core$Int* _54;
org$frostlang$frostc$Type$Kind _56;
org$frostlang$frostc$Type$Kind _59;
frost$core$Equatable* _60;
$fn3 _61;
frost$core$Bit _62;
bool _63;
frost$core$Object* _64;
frost$core$Object* _66;
frost$core$Int _70;
org$frostlang$frostc$Type* _71;
frost$core$Int _72;
int64_t _73;
int64_t _74;
bool _75;
frost$core$Bit _76;
bool _77;
org$frostlang$frostc$IR$Value* _80;
frost$core$Int _81;
org$frostlang$frostc$Type* _82;
org$frostlang$frostc$IR$Value* _84;
frost$core$Object* _85;
frost$core$Object* _87;
org$frostlang$frostc$Type* _89;
frost$core$Object* _90;
frost$core$Int _100;
frost$core$Int _101;
frost$core$Int _102;
org$frostlang$frostc$Position _103;
frost$core$Object* _108;
org$frostlang$frostc$Type* _110;
frost$core$Object* _111;
org$frostlang$frostc$Type* _117;
org$frostlang$frostc$Type$Kind* _118;
org$frostlang$frostc$Type$Kind _119;
frost$core$Equatable* _120;
frost$core$Int _121;
frost$core$Int* _124;
org$frostlang$frostc$Type$Kind _126;
org$frostlang$frostc$Type$Kind _129;
frost$core$Equatable* _130;
$fn4 _131;
frost$core$Bit _132;
bool _133;
frost$core$Object* _134;
frost$core$Object* _136;
org$frostlang$frostc$IR$Value* _140;
frost$core$Int _141;
frost$core$Real64 _142;
org$frostlang$frostc$Type* _143;
org$frostlang$frostc$IR$Value* _145;
frost$core$Object* _146;
frost$core$Object* _148;
org$frostlang$frostc$Type* _150;
frost$core$Object* _151;
org$frostlang$frostc$Type* _156;
frost$core$Bit _157;
bool _158;
org$frostlang$frostc$Type* _161;
org$frostlang$frostc$IR$Value* _164;
frost$core$Int _165;
org$frostlang$frostc$Type** _168;
org$frostlang$frostc$Type* _169;
frost$collections$Array* _170;
frost$core$Int _171;
frost$core$Object* _173;
frost$collections$ListView* _175;
org$frostlang$frostc$Type* _176;
frost$core$Object* _177;
frost$core$Object* _179;
frost$core$Object* _181;
frost$core$Object* _185;
frost$core$Object* _187;
frost$core$Object* _189;
frost$collections$Array* _192;
frost$core$Int _193;
org$frostlang$frostc$ASTNode* _195;
frost$core$Int _196;
frost$core$Int _199;
frost$core$Int _200;
frost$core$Int _201;
org$frostlang$frostc$Position _202;
frost$core$Object* _205;
frost$collections$ListView* _207;
org$frostlang$frostc$IR$Value* _208;
frost$core$Object* _209;
frost$core$Object* _211;
frost$core$Object* _213;
frost$core$Object* _215;
frost$core$Object* _217;
org$frostlang$frostc$Type* _219;
frost$core$Object* _220;
org$frostlang$frostc$Type* _224;
frost$core$Object* _225;
org$frostlang$frostc$Compiler$TypeContext* _230;
frost$core$Int _231;
org$frostlang$frostc$Type** _232;
org$frostlang$frostc$Type* _233;
frost$core$Bit _234;
org$frostlang$frostc$IR$Value* _236;
org$frostlang$frostc$IR$Value* _237;
frost$core$Object* _238;
frost$core$Object* _240;
frost$core$Object* _242;
frost$core$Object* _244;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:46
_1 = &param3->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IntLiteral.frost:47:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block1;
block2:;
_13 = &param3->$data.$TYPE.field0;
_14 = *_13;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
_22 = &param3->$data.$TYPE.field1;
_23 = *_22;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:48
_25 = *(&local0);
_26 = &_25->typeKind;
_27 = *_26;
org$frostlang$frostc$Type$Kind$wrapper* $tmp5;
$tmp5 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp5->value = _27;
_28 = ((frost$core$Equatable*) $tmp5);
_29 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:48:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_32 = &(&local2)->$rawValue;
*_32 = _29;
_34 = *(&local2);
*(&local1) = _34;
_37 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp6;
$tmp6 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp6->value = _37;
_38 = ((frost$core$Equatable*) $tmp6);
ITable* $tmp7 = _28->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp7 = $tmp7->next;
}
_39 = $tmp7->methods[0];
_40 = _39(_28, _38);
_41 = _40.value;
_42 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_44);
if (_41) goto block4; else goto block6;
block6:;
_47 = *(&local0);
_48 = &_47->typeKind;
_49 = *_48;
org$frostlang$frostc$Type$Kind$wrapper* $tmp8;
$tmp8 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp8->value = _49;
_50 = ((frost$core$Equatable*) $tmp8);
_51 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:48:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_54 = &(&local4)->$rawValue;
*_54 = _51;
_56 = *(&local4);
*(&local3) = _56;
_59 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp9;
$tmp9 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp9->value = _59;
_60 = ((frost$core$Equatable*) $tmp9);
ITable* $tmp10 = _50->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp10 = $tmp10->next;
}
_61 = $tmp10->methods[0];
_62 = _61(_50, _60);
_63 = _62.value;
_64 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_64);
_66 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_66);
if (_63) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:49
_70 = org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$UInt64$R$frost$core$Int(param2);
_71 = *(&local0);
_72 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(_71);
_73 = _70.value;
_74 = _72.value;
_75 = _73 <= _74;
_76 = (frost$core$Bit) {_75};
_77 = _76.value;
if (_77) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:50
_80 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_81 = (frost$core$Int) {1u};
_82 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$UInt64$org$frostlang$frostc$Type(_80, _81, param2, _82);
_84 = _80;
_85 = ((frost$core$Object*) _84);
frost$core$Frost$ref$frost$core$Object$Q(_85);
_87 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_87);
_89 = *(&local0);
_90 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_90);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _84;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:53
// begin inline call to method org.frostlang.frostc.Compiler.error(pos:org.frostlang.frostc.MethodPosition, msg:frost.core.String) from IntLiteral.frost:53:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6119
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Compiler.frost:6119:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_100 = param1.file;
_101 = param1.line;
_102 = param1.column;
_103 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_100, _101, _102);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, _103, &$s11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:54
_108 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_108);
_110 = *(&local0);
_111 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_111);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block10:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:57
_117 = *(&local0);
_118 = &_117->typeKind;
_119 = *_118;
org$frostlang$frostc$Type$Kind$wrapper* $tmp12;
$tmp12 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp12->value = _119;
_120 = ((frost$core$Equatable*) $tmp12);
_121 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:57:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_124 = &(&local6)->$rawValue;
*_124 = _121;
_126 = *(&local6);
*(&local5) = _126;
_129 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp13;
$tmp13 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp13->value = _129;
_130 = ((frost$core$Equatable*) $tmp13);
ITable* $tmp14 = _120->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp14 = $tmp14->next;
}
_131 = $tmp14->methods[0];
_132 = _131(_120, _130);
_133 = _132.value;
_134 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_134);
_136 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_136);
if (_133) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:58
_140 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_141 = (frost$core$Int) {6u};
_142 = frost$core$Real64$init$frost$core$UInt64(param2);
_143 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Real64$org$frostlang$frostc$Type(_140, _141, _142, _143);
_145 = _140;
_146 = ((frost$core$Object*) _145);
frost$core$Frost$ref$frost$core$Object$Q(_146);
_148 = ((frost$core$Object*) _140);
frost$core$Frost$unref$frost$core$Object$Q(_148);
_150 = *(&local0);
_151 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_151);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _145;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:60
_156 = *(&local0);
_157 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(_156);
_158 = _157.value;
if (_158) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:61
_161 = *(&local0);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from IntLiteral.frost:61:81
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3501
_164 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_165 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3501:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:278
_168 = &param0->CLASS_TYPE;
_169 = *_168;
_170 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_171 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_170, _171);
_173 = ((frost$core$Object*) _161);
frost$collections$Array$add$frost$collections$Array$T(_170, _173);
_175 = ((frost$collections$ListView*) _170);
_176 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_169, _175);
_177 = ((frost$core$Object*) _176);
frost$core$Frost$ref$frost$core$Object$Q(_177);
_179 = ((frost$core$Object*) _176);
frost$core$Frost$unref$frost$core$Object$Q(_179);
_181 = ((frost$core$Object*) _170);
frost$core$Frost$unref$frost$core$Object$Q(_181);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type(_164, _165, _161, _176);
_185 = ((frost$core$Object*) _164);
frost$core$Frost$ref$frost$core$Object$Q(_185);
_187 = ((frost$core$Object*) _176);
frost$core$Frost$unref$frost$core$Object$Q(_187);
_189 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_189);
_192 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_193 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_192, _193);
_195 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_196 = (frost$core$Int) {25u};
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from IntLiteral.frost:62:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_199 = param1.file;
_200 = param1.line;
_201 = param1.column;
_202 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_199, _200, _201);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64(_195, _196, _202, param2);
_205 = ((frost$core$Object*) _195);
frost$collections$Array$add$frost$collections$Array$T(_192, _205);
_207 = ((frost$collections$ListView*) _192);
_208 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _164, _207, param3);
_209 = ((frost$core$Object*) _208);
frost$core$Frost$ref$frost$core$Object$Q(_209);
_211 = ((frost$core$Object*) _208);
frost$core$Frost$unref$frost$core$Object$Q(_211);
_213 = ((frost$core$Object*) _195);
frost$core$Frost$unref$frost$core$Object$Q(_213);
_215 = ((frost$core$Object*) _192);
frost$core$Frost$unref$frost$core$Object$Q(_215);
_217 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_217);
_219 = *(&local0);
_220 = ((frost$core$Object*) _219);
frost$core$Frost$unref$frost$core$Object$Q(_220);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _208;
block18:;
_224 = *(&local0);
_225 = ((frost$core$Object*) _224);
frost$core$Frost$unref$frost$core$Object$Q(_225);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:66
_230 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_231 = (frost$core$Int) {3u};
_232 = &param0->INT_TYPE;
_233 = *_232;
_234 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_230, _231, _233, _234);
_236 = org$frostlang$frostc$expression$IntLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, _230);
_237 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _236, param3);
_238 = ((frost$core$Object*) _237);
frost$core$Frost$ref$frost$core$Object$Q(_238);
_240 = ((frost$core$Object*) _237);
frost$core$Frost$unref$frost$core$Object$Q(_240);
_242 = ((frost$core$Object*) _236);
frost$core$Frost$unref$frost$core$Object$Q(_242);
_244 = ((frost$core$Object*) _230);
frost$core$Frost$unref$frost$core$Object$Q(_244);
return _237;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodPosition param1, frost$core$UInt64 param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$ClassDecl* local7 = NULL;
org$frostlang$frostc$MethodDecl* local8 = NULL;
org$frostlang$frostc$MethodDecl$Kind local9;
org$frostlang$frostc$MethodDecl$Kind local10;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$IR$Statement$ID local12;
frost$core$Int64 _1;
int64_t _4;
uint64_t _5;
frost$core$UInt64 _6;
frost$core$UInt64 _8;
uint64_t _9;
uint64_t _10;
uint64_t _11;
frost$core$UInt64 _12;
uint64_t _13;
uint64_t _14;
bool _15;
frost$core$Bit _16;
bool _17;
frost$core$Int _24;
frost$core$Int _25;
frost$core$Int _26;
org$frostlang$frostc$Position _27;
frost$core$Object* _32;
frost$core$Int* _36;
frost$core$Int _37;
frost$core$Int _38;
int64_t _41;
int64_t _42;
bool _43;
frost$core$Bit _44;
bool _46;
org$frostlang$frostc$Type** _48;
org$frostlang$frostc$Type* _49;
frost$core$Object* _51;
org$frostlang$frostc$Type* _53;
frost$core$Object* _54;
frost$core$Bit* _57;
frost$core$Bit _58;
org$frostlang$frostc$Type* _60;
org$frostlang$frostc$Type$Kind* _61;
org$frostlang$frostc$Type$Kind _62;
frost$core$Equatable* _63;
frost$core$Int _64;
frost$core$Int* _67;
org$frostlang$frostc$Type$Kind _69;
org$frostlang$frostc$Type$Kind _72;
frost$core$Equatable* _73;
$fn15 _74;
frost$core$Bit _75;
bool _76;
frost$core$Object* _77;
frost$core$Object* _79;
frost$core$Int _87;
frost$core$Int _88;
frost$core$Int _89;
org$frostlang$frostc$Position _90;
frost$core$Object* _95;
org$frostlang$frostc$Type* _97;
frost$core$Object* _98;
org$frostlang$frostc$Type* _103;
org$frostlang$frostc$Type$Kind* _104;
org$frostlang$frostc$Type$Kind _105;
frost$core$Equatable* _106;
frost$core$Int _107;
frost$core$Int* _110;
org$frostlang$frostc$Type$Kind _112;
org$frostlang$frostc$Type$Kind _115;
frost$core$Equatable* _116;
$fn16 _117;
frost$core$Bit _118;
bool _119;
frost$core$Object* _120;
frost$core$Object* _122;
uint64_t _128;
int64_t _129;
frost$core$Int64 _130;
int64_t _134;
int64_t _135;
frost$core$Int64 _136;
frost$core$Int _138;
org$frostlang$frostc$Type* _139;
frost$core$Int _140;
int64_t _141;
int64_t _142;
bool _143;
frost$core$Bit _144;
bool _145;
org$frostlang$frostc$IR$Value* _148;
frost$core$Int _149;
uint64_t _152;
int64_t _153;
frost$core$Int64 _154;
int64_t _158;
int64_t _159;
frost$core$Int64 _160;
int64_t _164;
uint64_t _165;
frost$core$UInt64 _166;
org$frostlang$frostc$Type* _168;
org$frostlang$frostc$IR$Value* _170;
frost$core$Object* _171;
frost$core$Object* _173;
org$frostlang$frostc$Type* _175;
frost$core$Object* _176;
frost$core$Int _186;
frost$core$Int _187;
frost$core$Int _188;
org$frostlang$frostc$Position _189;
frost$core$Object* _194;
org$frostlang$frostc$Type* _196;
frost$core$Object* _197;
org$frostlang$frostc$Type* _203;
org$frostlang$frostc$Type$Kind* _204;
org$frostlang$frostc$Type$Kind _205;
frost$core$Equatable* _206;
frost$core$Int _207;
frost$core$Int* _210;
org$frostlang$frostc$Type$Kind _212;
org$frostlang$frostc$Type$Kind _215;
frost$core$Equatable* _216;
$fn17 _217;
frost$core$Bit _218;
bool _219;
frost$core$Object* _220;
frost$core$Object* _222;
org$frostlang$frostc$IR$Value* _226;
frost$core$Int _227;
uint64_t _230;
int64_t _231;
frost$core$Int64 _232;
int64_t _236;
int64_t _237;
frost$core$Int64 _238;
frost$core$Real64 _240;
org$frostlang$frostc$Type* _241;
org$frostlang$frostc$IR$Value* _243;
frost$core$Object* _244;
frost$core$Object* _246;
org$frostlang$frostc$Type* _248;
frost$core$Object* _249;
org$frostlang$frostc$Type* _254;
frost$core$Bit _255;
bool _256;
org$frostlang$frostc$Type* _259;
org$frostlang$frostc$ClassDecl* _260;
frost$core$Object* _262;
org$frostlang$frostc$ClassDecl* _264;
frost$core$Object* _265;
frost$core$Object* _268;
org$frostlang$frostc$ClassDecl* _271;
bool _272;
frost$core$Bit _273;
bool _274;
frost$core$Int _276;
org$frostlang$frostc$ClassDecl* _280;
bool _281;
frost$core$Bit _282;
bool _283;
frost$core$Int _285;
org$frostlang$frostc$ClassDecl* _288;
frost$collections$Array** _289;
frost$collections$Array* _290;
frost$core$Int _291;
frost$core$Int _293;
int64_t _294;
int64_t _295;
bool _296;
frost$core$Bit _297;
bool _298;
frost$collections$CollectionView* _300;
$fn18 _301;
frost$core$Int _302;
int64_t _303;
int64_t _304;
bool _305;
frost$core$Bit _306;
bool _307;
frost$core$Int _309;
frost$unsafe$NewPointer* _313;
frost$unsafe$NewPointer _314;
int64_t _315;
frost$core$Int64 _316;
int64_t _317;
frost$core$Object* _318;
frost$core$Object* _319;
org$frostlang$frostc$MethodDecl* _322;
frost$core$Object* _324;
org$frostlang$frostc$MethodDecl* _326;
frost$core$Object* _327;
frost$core$Object* _330;
org$frostlang$frostc$MethodDecl* _333;
org$frostlang$frostc$MethodDecl$Kind* _334;
org$frostlang$frostc$MethodDecl$Kind _335;
frost$core$Equatable* _336;
frost$core$Int _337;
frost$core$Int* _340;
org$frostlang$frostc$MethodDecl$Kind _342;
org$frostlang$frostc$MethodDecl$Kind _345;
frost$core$Equatable* _346;
$fn19 _347;
frost$core$Bit _348;
bool _349;
frost$core$Int _351;
frost$core$Object* _354;
frost$core$Object* _356;
org$frostlang$frostc$MethodDecl* _359;
frost$core$Bit _360;
bool _363;
bool _364;
frost$core$Bit _365;
bool _367;
frost$core$Object* _370;
org$frostlang$frostc$MethodDecl* _372;
frost$core$Object* _373;
org$frostlang$frostc$ClassDecl* _376;
frost$core$Object* _377;
org$frostlang$frostc$Type* _380;
frost$core$Object* _381;
org$frostlang$frostc$Compiler$TypeContext* _386;
frost$core$Int _387;
org$frostlang$frostc$MethodDecl* _388;
frost$collections$Array** _389;
frost$collections$Array* _390;
frost$core$Int _391;
frost$core$Int _393;
int64_t _394;
int64_t _395;
bool _396;
frost$core$Bit _397;
bool _398;
frost$collections$CollectionView* _400;
$fn20 _401;
frost$core$Int _402;
int64_t _403;
int64_t _404;
bool _405;
frost$core$Bit _406;
bool _407;
frost$core$Int _409;
frost$unsafe$NewPointer* _413;
frost$unsafe$NewPointer _414;
int64_t _415;
frost$core$Int64 _416;
int64_t _417;
frost$core$Object* _418;
frost$core$Object* _419;
org$frostlang$frostc$MethodDecl$Parameter* _422;
org$frostlang$frostc$Type** _423;
org$frostlang$frostc$Type* _424;
frost$core$Bit _425;
org$frostlang$frostc$IR$Value* _427;
frost$core$Object* _429;
org$frostlang$frostc$IR$Value* _431;
frost$core$Object* _432;
frost$core$Object* _435;
frost$core$Object* _437;
frost$core$Object* _439;
org$frostlang$frostc$IR$Value* _442;
bool _443;
frost$core$Bit _444;
bool _445;
frost$core$Object* _448;
org$frostlang$frostc$IR$Value* _450;
frost$core$Object* _451;
org$frostlang$frostc$MethodDecl* _454;
frost$core$Object* _455;
org$frostlang$frostc$ClassDecl* _458;
frost$core$Object* _459;
org$frostlang$frostc$Type* _462;
frost$core$Object* _463;
org$frostlang$frostc$IR** _468;
org$frostlang$frostc$IR* _469;
org$frostlang$frostc$IR$Statement* _470;
frost$core$Int _471;
org$frostlang$frostc$MethodDecl* _472;
frost$core$Weak** _473;
frost$core$Weak* _474;
frost$core$Bit* _479;
frost$core$Bit _480;
bool _482;
frost$core$Int _484;
frost$core$Object** _488;
frost$core$Object* _489;
frost$core$Object* _490;
frost$core$Object* _491;
org$frostlang$frostc$ClassDecl* _494;
frost$collections$Array* _495;
frost$core$Int _496;
org$frostlang$frostc$IR$Value* _498;
bool _499;
frost$core$Bit _500;
bool _501;
frost$core$Int _503;
org$frostlang$frostc$IR$Value* _506;
frost$core$Object* _507;
org$frostlang$frostc$FixedArray* _509;
$fn21 _511;
org$frostlang$frostc$IR$Statement$ID _512;
frost$core$Object* _514;
frost$core$Object* _516;
frost$core$Object* _518;
frost$core$Object* _520;
org$frostlang$frostc$IR$Value* _523;
frost$core$Int _524;
org$frostlang$frostc$IR$Statement$ID _525;
org$frostlang$frostc$MethodDecl* _526;
frost$core$Weak** _527;
frost$core$Weak* _528;
frost$core$Bit* _533;
frost$core$Bit _534;
bool _536;
frost$core$Int _538;
frost$core$Object** _542;
frost$core$Object* _543;
frost$core$Object* _544;
frost$core$Object* _545;
org$frostlang$frostc$ClassDecl* _548;
org$frostlang$frostc$Type** _549;
org$frostlang$frostc$Type* _550;
org$frostlang$frostc$IR$Value* _552;
org$frostlang$frostc$Type* _553;
frost$core$Equatable* _555;
org$frostlang$frostc$Type** _556;
org$frostlang$frostc$Type* _557;
frost$core$Equatable* _558;
$fn22 _559;
frost$core$Bit _560;
bool _561;
frost$core$Int _563;
frost$core$Bit _567;
org$frostlang$frostc$IR$Value* _568;
frost$core$Object* _569;
frost$core$Object* _571;
frost$core$Object* _574;
frost$core$Object* _576;
frost$core$Object* _578;
frost$core$Object* _580;
org$frostlang$frostc$IR$Value* _582;
frost$core$Object* _583;
org$frostlang$frostc$MethodDecl* _586;
frost$core$Object* _587;
org$frostlang$frostc$ClassDecl* _590;
frost$core$Object* _591;
org$frostlang$frostc$Type* _594;
frost$core$Object* _595;
org$frostlang$frostc$Type* _599;
frost$core$Object* _600;
org$frostlang$frostc$Compiler$TypeContext* _605;
frost$core$Int _606;
org$frostlang$frostc$Type** _607;
org$frostlang$frostc$Type* _608;
frost$core$Bit _609;
org$frostlang$frostc$IR$Value* _611;
org$frostlang$frostc$IR$Value* _612;
frost$core$Object* _613;
frost$core$Object* _615;
frost$core$Object* _617;
frost$core$Object* _619;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:73
_1 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from IntLiteral.frost:73:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
_4 = _1.value;
_5 = ((uint64_t) _4);
_6 = (frost$core$UInt64) {_5};
_8 = (frost$core$UInt64) {1u};
_9 = _6.value;
_10 = _8.value;
_11 = _9 + _10;
_12 = (frost$core$UInt64) {_11};
_13 = param2.value;
_14 = _12.value;
_15 = _13 > _14;
_16 = (frost$core$Bit) {_15};
_17 = _16.value;
if (_17) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:74
// begin inline call to method org.frostlang.frostc.Compiler.error(pos:org.frostlang.frostc.MethodPosition, msg:frost.core.String) from IntLiteral.frost:74:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6119
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Compiler.frost:6119:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_24 = param1.file;
_25 = param1.line;
_26 = param1.column;
_27 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_24, _25, _26);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, _27, &$s23);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:75
_32 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_32);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:77
_36 = &param3->$rawValue;
_37 = *_36;
_38 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IntLiteral.frost:78:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_41 = _37.value;
_42 = _38.value;
_43 = _41 == _42;
_44 = (frost$core$Bit) {_43};
_46 = _44.value;
if (_46) goto block7; else goto block6;
block7:;
_48 = &param3->$data.$TYPE.field0;
_49 = *_48;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
_51 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = *(&local0);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local0) = _49;
_57 = &param3->$data.$TYPE.field1;
_58 = *_57;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:79
_60 = *(&local0);
_61 = &_60->typeKind;
_62 = *_61;
org$frostlang$frostc$Type$Kind$wrapper* $tmp24;
$tmp24 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp24->value = _62;
_63 = ((frost$core$Equatable*) $tmp24);
_64 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:79:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_67 = &(&local2)->$rawValue;
*_67 = _64;
_69 = *(&local2);
*(&local1) = _69;
_72 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp25;
$tmp25 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp25->value = _72;
_73 = ((frost$core$Equatable*) $tmp25);
ITable* $tmp26 = _63->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp26 = $tmp26->next;
}
_74 = $tmp26->methods[0];
_75 = _74(_63, _73);
_76 = _75.value;
_77 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_79);
if (_76) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:80
// begin inline call to method org.frostlang.frostc.Compiler.error(pos:org.frostlang.frostc.MethodPosition, msg:frost.core.String) from IntLiteral.frost:80:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6119
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Compiler.frost:6119:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_87 = param1.file;
_88 = param1.line;
_89 = param1.column;
_90 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_87, _88, _89);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, _90, &$s27);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:81
_95 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_95);
_97 = *(&local0);
_98 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_98);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:83
_103 = *(&local0);
_104 = &_103->typeKind;
_105 = *_104;
org$frostlang$frostc$Type$Kind$wrapper* $tmp28;
$tmp28 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp28->value = _105;
_106 = ((frost$core$Equatable*) $tmp28);
_107 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:83:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_110 = &(&local4)->$rawValue;
*_110 = _107;
_112 = *(&local4);
*(&local3) = _112;
_115 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp29;
$tmp29 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp29->value = _115;
_116 = ((frost$core$Equatable*) $tmp29);
ITable* $tmp30 = _106->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp30 = $tmp30->next;
}
_117 = $tmp30->methods[0];
_118 = _117(_106, _116);
_119 = _118.value;
_120 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_120);
_122 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_122);
if (_119) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:84
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from IntLiteral.frost:84:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_128 = param2.value;
_129 = ((int64_t) _128);
_130 = (frost$core$Int64) {_129};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from IntLiteral.frost:84:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
_134 = _130.value;
_135 = -_134;
_136 = (frost$core$Int64) {_135};
_138 = org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$Int64$R$frost$core$Int(_136);
_139 = *(&local0);
_140 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(_139);
_141 = _138.value;
_142 = _140.value;
_143 = _141 <= _142;
_144 = (frost$core$Bit) {_143};
_145 = _144.value;
if (_145) goto block17; else goto block19;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:85
_148 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_149 = (frost$core$Int) {1u};
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from IntLiteral.frost:85:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_152 = param2.value;
_153 = ((int64_t) _152);
_154 = (frost$core$Int64) {_153};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from IntLiteral.frost:85:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
_158 = _154.value;
_159 = -_158;
_160 = (frost$core$Int64) {_159};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from IntLiteral.frost:85:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
_164 = _160.value;
_165 = ((uint64_t) _164);
_166 = (frost$core$UInt64) {_165};
_168 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$UInt64$org$frostlang$frostc$Type(_148, _149, _166, _168);
_170 = _148;
_171 = ((frost$core$Object*) _170);
frost$core$Frost$ref$frost$core$Object$Q(_171);
_173 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_173);
_175 = *(&local0);
_176 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_176);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _170;
block19:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:88
// begin inline call to method org.frostlang.frostc.Compiler.error(pos:org.frostlang.frostc.MethodPosition, msg:frost.core.String) from IntLiteral.frost:88:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6119
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Compiler.frost:6119:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_186 = param1.file;
_187 = param1.line;
_188 = param1.column;
_189 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_186, _187, _188);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, _189, &$s31);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:89
_194 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_194);
_196 = *(&local0);
_197 = ((frost$core$Object*) _196);
frost$core$Frost$unref$frost$core$Object$Q(_197);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block18:;
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:92
_203 = *(&local0);
_204 = &_203->typeKind;
_205 = *_204;
org$frostlang$frostc$Type$Kind$wrapper* $tmp32;
$tmp32 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp32->value = _205;
_206 = ((frost$core$Equatable*) $tmp32);
_207 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:92:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_210 = &(&local6)->$rawValue;
*_210 = _207;
_212 = *(&local6);
*(&local5) = _212;
_215 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp33;
$tmp33 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp33->value = _215;
_216 = ((frost$core$Equatable*) $tmp33);
ITable* $tmp34 = _206->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp34 = $tmp34->next;
}
_217 = $tmp34->methods[0];
_218 = _217(_206, _216);
_219 = _218.value;
_220 = ((frost$core$Object*) _216);
frost$core$Frost$unref$frost$core$Object$Q(_220);
_222 = ((frost$core$Object*) _206);
frost$core$Frost$unref$frost$core$Object$Q(_222);
if (_219) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:93
_226 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_227 = (frost$core$Int) {6u};
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from IntLiteral.frost:93:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_230 = param2.value;
_231 = ((int64_t) _230);
_232 = (frost$core$Int64) {_231};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from IntLiteral.frost:93:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
_236 = _232.value;
_237 = -_236;
_238 = (frost$core$Int64) {_237};
_240 = frost$core$Real64$init$frost$core$Int64(_238);
_241 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Real64$org$frostlang$frostc$Type(_226, _227, _240, _241);
_243 = _226;
_244 = ((frost$core$Object*) _243);
frost$core$Frost$ref$frost$core$Object$Q(_244);
_246 = ((frost$core$Object*) _226);
frost$core$Frost$unref$frost$core$Object$Q(_246);
_248 = *(&local0);
_249 = ((frost$core$Object*) _248);
frost$core$Frost$unref$frost$core$Object$Q(_249);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _243;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:95
_254 = *(&local0);
_255 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(_254);
_256 = _255.value;
if (_256) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:96
_259 = *(&local0);
_260 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, _259);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
_262 = ((frost$core$Object*) _260);
frost$core$Frost$ref$frost$core$Object$Q(_262);
_264 = *(&local7);
_265 = ((frost$core$Object*) _264);
frost$core$Frost$unref$frost$core$Object$Q(_265);
*(&local7) = _260;
_268 = ((frost$core$Object*) _260);
frost$core$Frost$unref$frost$core$Object$Q(_268);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:97
_271 = *(&local7);
_272 = _271 != NULL;
_273 = (frost$core$Bit) {_272};
_274 = _273.value;
if (_274) goto block34; else goto block35;
block35:;
_276 = (frost$core$Int) {97u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s35, _276);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:98
_280 = *(&local7);
_281 = _280 != NULL;
_282 = (frost$core$Bit) {_281};
_283 = _282.value;
if (_283) goto block36; else goto block37;
block37:;
_285 = (frost$core$Int) {98u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s36, _285, &$s37);
abort(); // unreachable
block36:;
_288 = _280;
_289 = &_288->methods;
_290 = *_289;
_291 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from IntLiteral.frost:98:40
_293 = (frost$core$Int) {0u};
_294 = _291.value;
_295 = _293.value;
_296 = _294 >= _295;
_297 = (frost$core$Bit) {_296};
_298 = _297.value;
if (_298) goto block41; else goto block40;
block41:;
_300 = ((frost$collections$CollectionView*) _290);
ITable* $tmp38 = _300->$class->itable;
while ($tmp38->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp38 = $tmp38->next;
}
_301 = $tmp38->methods[0];
_302 = _301(_300);
_303 = _291.value;
_304 = _302.value;
_305 = _303 < _304;
_306 = (frost$core$Bit) {_305};
_307 = _306.value;
if (_307) goto block39; else goto block40;
block40:;
_309 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s39, _309, &$s40);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_313 = &_290->data;
_314 = *_313;
_315 = _314.value;
_316 = frost$core$Int64$init$frost$core$Int(_291);
_317 = _316.value;
_318 = ((frost$core$Object**)_315)[_317];
_319 = _318;
frost$core$Frost$ref$frost$core$Object$Q(_319);
_322 = ((org$frostlang$frostc$MethodDecl*) _318);
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
_324 = ((frost$core$Object*) _322);
frost$core$Frost$ref$frost$core$Object$Q(_324);
_326 = *(&local8);
_327 = ((frost$core$Object*) _326);
frost$core$Frost$unref$frost$core$Object$Q(_327);
*(&local8) = _322;
_330 = _318;
frost$core$Frost$unref$frost$core$Object$Q(_330);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:99
_333 = *(&local8);
_334 = &_333->methodKind;
_335 = *_334;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp41;
$tmp41 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp41->value = _335;
_336 = ((frost$core$Equatable*) $tmp41);
_337 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from IntLiteral.frost:99:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
_340 = &(&local10)->$rawValue;
*_340 = _337;
_342 = *(&local10);
*(&local9) = _342;
_345 = *(&local9);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp42;
$tmp42 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp42->value = _345;
_346 = ((frost$core$Equatable*) $tmp42);
ITable* $tmp43 = _336->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp43 = $tmp43->next;
}
_347 = $tmp43->methods[0];
_348 = _347(_336, _346);
_349 = _348.value;
if (_349) goto block43; else goto block44;
block44:;
_351 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s44, _351);
abort(); // unreachable
block43:;
_354 = ((frost$core$Object*) _346);
frost$core$Frost$unref$frost$core$Object$Q(_354);
_356 = ((frost$core$Object*) _336);
frost$core$Frost$unref$frost$core$Object$Q(_356);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:100
_359 = *(&local8);
_360 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, _359);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from IntLiteral.frost:100:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_363 = _360.value;
_364 = !_363;
_365 = (frost$core$Bit) {_364};
_367 = _365.value;
if (_367) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:101
_370 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_370);
_372 = *(&local8);
_373 = ((frost$core$Object*) _372);
frost$core$Frost$unref$frost$core$Object$Q(_373);
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
_376 = *(&local7);
_377 = ((frost$core$Object*) _376);
frost$core$Frost$unref$frost$core$Object$Q(_377);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
_380 = *(&local0);
_381 = ((frost$core$Object*) _380);
frost$core$Frost$unref$frost$core$Object$Q(_381);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:103
_386 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_387 = (frost$core$Int) {3u};
_388 = *(&local8);
_389 = &_388->parameters;
_390 = *_389;
_391 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from IntLiteral.frost:104:58
_393 = (frost$core$Int) {0u};
_394 = _391.value;
_395 = _393.value;
_396 = _394 >= _395;
_397 = (frost$core$Bit) {_396};
_398 = _397.value;
if (_398) goto block51; else goto block50;
block51:;
_400 = ((frost$collections$CollectionView*) _390);
ITable* $tmp45 = _400->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
_401 = $tmp45->methods[0];
_402 = _401(_400);
_403 = _391.value;
_404 = _402.value;
_405 = _403 < _404;
_406 = (frost$core$Bit) {_405};
_407 = _406.value;
if (_407) goto block49; else goto block50;
block50:;
_409 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _409, &$s47);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_413 = &_390->data;
_414 = *_413;
_415 = _414.value;
_416 = frost$core$Int64$init$frost$core$Int(_391);
_417 = _416.value;
_418 = ((frost$core$Object**)_415)[_417];
_419 = _418;
frost$core$Frost$ref$frost$core$Object$Q(_419);
_422 = ((org$frostlang$frostc$MethodDecl$Parameter*) _418);
_423 = &_422->type;
_424 = *_423;
_425 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_386, _387, _424, _425);
_427 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, _386);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
_429 = ((frost$core$Object*) _427);
frost$core$Frost$ref$frost$core$Object$Q(_429);
_431 = *(&local11);
_432 = ((frost$core$Object*) _431);
frost$core$Frost$unref$frost$core$Object$Q(_432);
*(&local11) = _427;
_435 = ((frost$core$Object*) _427);
frost$core$Frost$unref$frost$core$Object$Q(_435);
_437 = _418;
frost$core$Frost$unref$frost$core$Object$Q(_437);
_439 = ((frost$core$Object*) _386);
frost$core$Frost$unref$frost$core$Object$Q(_439);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:105
_442 = *(&local11);
_443 = _442 == NULL;
_444 = (frost$core$Bit) {_443};
_445 = _444.value;
if (_445) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:106
_448 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_448);
_450 = *(&local11);
_451 = ((frost$core$Object*) _450);
frost$core$Frost$unref$frost$core$Object$Q(_451);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
_454 = *(&local8);
_455 = ((frost$core$Object*) _454);
frost$core$Frost$unref$frost$core$Object$Q(_455);
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
_458 = *(&local7);
_459 = ((frost$core$Object*) _458);
frost$core$Frost$unref$frost$core$Object$Q(_459);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
_462 = *(&local0);
_463 = ((frost$core$Object*) _462);
frost$core$Frost$unref$frost$core$Object$Q(_463);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:108
_468 = &param0->ir;
_469 = *_468;
_470 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_471 = (frost$core$Int) {7u};
_472 = *(&local8);
_473 = &_472->owner;
_474 = *_473;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from IntLiteral.frost:109:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_479 = &_474->_valid;
_480 = *_479;
_482 = _480.value;
if (_482) goto block56; else goto block57;
block57:;
_484 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s48, _484, &$s49);
abort(); // unreachable
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_488 = &_474->value;
_489 = *_488;
_490 = _489;
_491 = _490;
frost$core$Frost$ref$frost$core$Object$Q(_491);
_494 = ((org$frostlang$frostc$ClassDecl*) _490);
_495 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_496 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_495, _496);
_498 = *(&local11);
_499 = _498 != NULL;
_500 = (frost$core$Bit) {_499};
_501 = _500.value;
if (_501) goto block58; else goto block59;
block59:;
_503 = (frost$core$Int) {109u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s50, _503, &$s51);
abort(); // unreachable
block58:;
_506 = _498;
_507 = ((frost$core$Object*) _506);
frost$collections$Array$add$frost$collections$Array$T(_495, _507);
_509 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT(_495);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(_470, _471, param1, _494, _509);
_511 = ($fn52) _469->$class->vtable[2];
_512 = _511(_469, _470);
*(&local12) = _512;
_514 = ((frost$core$Object*) _509);
frost$core$Frost$unref$frost$core$Object$Q(_514);
_516 = ((frost$core$Object*) _495);
frost$core$Frost$unref$frost$core$Object$Q(_516);
_518 = _490;
frost$core$Frost$unref$frost$core$Object$Q(_518);
_520 = ((frost$core$Object*) _470);
frost$core$Frost$unref$frost$core$Object$Q(_520);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:110
_523 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_524 = (frost$core$Int) {7u};
_525 = *(&local12);
_526 = *(&local8);
_527 = &_526->owner;
_528 = *_527;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from IntLiteral.frost:110:76
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_533 = &_528->_valid;
_534 = *_533;
_536 = _534.value;
if (_536) goto block62; else goto block63;
block63:;
_538 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s53, _538, &$s54);
abort(); // unreachable
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_542 = &_528->value;
_543 = *_542;
_544 = _543;
_545 = _544;
frost$core$Frost$ref$frost$core$Object$Q(_545);
_548 = ((org$frostlang$frostc$ClassDecl*) _544);
_549 = &_548->type;
_550 = *_549;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(_523, _524, _525, _550);
_552 = _523;
_553 = *(&local0);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.MethodPosition, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from IntLiteral.frost:110:43
_555 = ((frost$core$Equatable*) _553);
_556 = &param0->VOID_TYPE;
_557 = *_556;
_558 = ((frost$core$Equatable*) _557);
ITable* $tmp55 = _555->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp55 = $tmp55->next;
}
_559 = $tmp55->methods[1];
_560 = _559(_555, _558);
_561 = _560.value;
if (_561) goto block65; else goto block66;
block66:;
_563 = (frost$core$Int) {3933u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s56, _563, &$s57);
abort(); // unreachable
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3934
_567 = (frost$core$Bit) {false};
_568 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _552, _553, _567);
_569 = ((frost$core$Object*) _568);
frost$core$Frost$ref$frost$core$Object$Q(_569);
_571 = ((frost$core$Object*) _568);
frost$core$Frost$unref$frost$core$Object$Q(_571);
_574 = ((frost$core$Object*) _568);
frost$core$Frost$ref$frost$core$Object$Q(_574);
_576 = ((frost$core$Object*) _568);
frost$core$Frost$unref$frost$core$Object$Q(_576);
_578 = _544;
frost$core$Frost$unref$frost$core$Object$Q(_578);
_580 = ((frost$core$Object*) _523);
frost$core$Frost$unref$frost$core$Object$Q(_580);
_582 = *(&local11);
_583 = ((frost$core$Object*) _582);
frost$core$Frost$unref$frost$core$Object$Q(_583);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
_586 = *(&local8);
_587 = ((frost$core$Object*) _586);
frost$core$Frost$unref$frost$core$Object$Q(_587);
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
_590 = *(&local7);
_591 = ((frost$core$Object*) _590);
frost$core$Frost$unref$frost$core$Object$Q(_591);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
_594 = *(&local0);
_595 = ((frost$core$Object*) _594);
frost$core$Frost$unref$frost$core$Object$Q(_595);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _568;
block33:;
_599 = *(&local0);
_600 = ((frost$core$Object*) _599);
frost$core$Frost$unref$frost$core$Object$Q(_600);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:114
_605 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_606 = (frost$core$Int) {3u};
_607 = &param0->INT_TYPE;
_608 = *_607;
_609 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_605, _606, _608, _609);
_611 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, _605);
_612 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _611, param3);
_613 = ((frost$core$Object*) _612);
frost$core$Frost$ref$frost$core$Object$Q(_613);
_615 = ((frost$core$Object*) _612);
frost$core$Frost$unref$frost$core$Object$Q(_615);
_617 = ((frost$core$Object*) _611);
frost$core$Frost$unref$frost$core$Object$Q(_617);
_619 = ((frost$core$Object*) _605);
frost$core$Frost$unref$frost$core$Object$Q(_619);
return _612;

}
void org$frostlang$frostc$expression$IntLiteral$init(void* rawSelf) {
org$frostlang$frostc$expression$IntLiteral* param0 = (org$frostlang$frostc$expression$IntLiteral*) rawSelf;

return;

}
void org$frostlang$frostc$expression$IntLiteral$cleanup(void* rawSelf) {
org$frostlang$frostc$expression$IntLiteral* param0 = (org$frostlang$frostc$expression$IntLiteral*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:14
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

