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
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
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
typedef org$frostlang$frostc$IR$Statement$ID (*$fn51)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

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
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 16, 8102773322790090793, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };

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
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$IntLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$UInt64 param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

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
frost$core$Equatable* _29;
frost$core$Int _30;
frost$core$Int* _33;
org$frostlang$frostc$Type$Kind _35;
org$frostlang$frostc$Type$Kind _38;
frost$core$Equatable* _39;
$fn2 _40;
frost$core$Bit _41;
bool _42;
frost$core$Object* _43;
frost$core$Object* _45;
org$frostlang$frostc$Type* _48;
org$frostlang$frostc$Type$Kind* _49;
org$frostlang$frostc$Type$Kind _50;
frost$core$Equatable* _51;
frost$core$Equatable* _52;
frost$core$Int _53;
frost$core$Int* _56;
org$frostlang$frostc$Type$Kind _58;
org$frostlang$frostc$Type$Kind _61;
frost$core$Equatable* _62;
$fn3 _63;
frost$core$Bit _64;
bool _65;
frost$core$Object* _66;
frost$core$Object* _68;
frost$core$Int _72;
org$frostlang$frostc$Type* _73;
frost$core$Int _74;
int64_t _75;
int64_t _76;
bool _77;
frost$core$Bit _78;
bool _79;
org$frostlang$frostc$IR$Value* _82;
frost$core$Int _83;
org$frostlang$frostc$Type* _84;
org$frostlang$frostc$IR$Value* _86;
frost$core$Object* _87;
frost$core$Object* _89;
org$frostlang$frostc$Type* _91;
frost$core$Object* _92;
frost$core$Object* _100;
org$frostlang$frostc$Type* _102;
frost$core$Object* _103;
org$frostlang$frostc$Type* _109;
org$frostlang$frostc$Type$Kind* _110;
org$frostlang$frostc$Type$Kind _111;
frost$core$Equatable* _112;
frost$core$Equatable* _113;
frost$core$Int _114;
frost$core$Int* _117;
org$frostlang$frostc$Type$Kind _119;
org$frostlang$frostc$Type$Kind _122;
frost$core$Equatable* _123;
$fn4 _124;
frost$core$Bit _125;
bool _126;
frost$core$Object* _127;
frost$core$Object* _129;
org$frostlang$frostc$IR$Value* _133;
frost$core$Int _134;
frost$core$Real64 _135;
org$frostlang$frostc$Type* _136;
org$frostlang$frostc$IR$Value* _138;
frost$core$Object* _139;
frost$core$Object* _141;
org$frostlang$frostc$Type* _143;
frost$core$Object* _144;
org$frostlang$frostc$Type* _149;
frost$core$Bit _150;
bool _151;
org$frostlang$frostc$Type* _154;
org$frostlang$frostc$IR$Value* _157;
frost$core$Int _158;
org$frostlang$frostc$Type** _161;
org$frostlang$frostc$Type* _162;
frost$collections$Array* _163;
frost$collections$Array* _164;
frost$core$Int _165;
frost$collections$Array* _167;
frost$core$Object* _168;
frost$collections$ListView* _170;
org$frostlang$frostc$Type* _171;
frost$core$Object* _172;
frost$core$Object* _174;
frost$core$Object* _176;
frost$core$Object* _180;
frost$core$Object* _182;
frost$core$Object* _184;
frost$collections$Array* _187;
frost$collections$Array* _188;
frost$core$Int _189;
frost$collections$Array* _191;
org$frostlang$frostc$ASTNode* _192;
frost$core$Int _193;
frost$core$Object* _195;
frost$collections$ListView* _197;
org$frostlang$frostc$IR$Value* _198;
frost$core$Object* _199;
frost$core$Object* _201;
frost$core$Object* _203;
frost$core$Object* _205;
frost$core$Object* _207;
org$frostlang$frostc$Type* _209;
frost$core$Object* _210;
org$frostlang$frostc$Type* _214;
frost$core$Object* _215;
org$frostlang$frostc$Compiler$TypeContext* _220;
frost$core$Int _221;
org$frostlang$frostc$Type** _222;
org$frostlang$frostc$Type* _223;
frost$core$Bit _224;
org$frostlang$frostc$IR$Value* _226;
org$frostlang$frostc$IR$Value* _227;
frost$core$Object* _228;
frost$core$Object* _230;
frost$core$Object* _232;
frost$core$Object* _234;
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
_13 = (org$frostlang$frostc$Type**) (param3->$data + 0);
_14 = *_13;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
_22 = (frost$core$Bit*) (param3->$data + 8);
_23 = *_22;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:48
_25 = *(&local0);
_26 = &_25->typeKind;
_27 = *_26;
org$frostlang$frostc$Type$Kind$wrapper* $tmp5;
$tmp5 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp5->value = _27;
_28 = ((frost$core$Equatable*) $tmp5);
_29 = _28;
_30 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:48:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_33 = &(&local2)->$rawValue;
*_33 = _30;
_35 = *(&local2);
*(&local1) = _35;
_38 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp6;
$tmp6 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp6->value = _38;
_39 = ((frost$core$Equatable*) $tmp6);
ITable* $tmp7 = _29->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp7 = $tmp7->next;
}
_40 = $tmp7->methods[0];
_41 = _40(_29, _39);
_42 = _41.value;
_43 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_45);
if (_42) goto block4; else goto block6;
block6:;
_48 = *(&local0);
_49 = &_48->typeKind;
_50 = *_49;
org$frostlang$frostc$Type$Kind$wrapper* $tmp8;
$tmp8 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp8->value = _50;
_51 = ((frost$core$Equatable*) $tmp8);
_52 = _51;
_53 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:48:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_56 = &(&local4)->$rawValue;
*_56 = _53;
_58 = *(&local4);
*(&local3) = _58;
_61 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp9;
$tmp9 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp9->value = _61;
_62 = ((frost$core$Equatable*) $tmp9);
ITable* $tmp10 = _52->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp10 = $tmp10->next;
}
_63 = $tmp10->methods[0];
_64 = _63(_52, _62);
_65 = _64.value;
_66 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_66);
_68 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_68);
if (_65) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:49
_72 = org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$UInt64$R$frost$core$Int(param2);
_73 = *(&local0);
_74 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(_73);
_75 = _72.value;
_76 = _74.value;
_77 = _75 <= _76;
_78 = (frost$core$Bit) {_77};
_79 = _78.value;
if (_79) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:50
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
_82 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_83 = (frost$core$Int) {1u};
_84 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$UInt64$org$frostlang$frostc$Type(_82, _83, param2, _84);
_86 = _82;
_87 = ((frost$core$Object*) _86);
frost$core$Frost$ref$frost$core$Object$Q(_87);
_89 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_89);
_91 = *(&local0);
_92 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_92);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _86;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:53
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:54
_100 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_100);
_102 = *(&local0);
_103 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_103);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block10:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:57
_109 = *(&local0);
_110 = &_109->typeKind;
_111 = *_110;
org$frostlang$frostc$Type$Kind$wrapper* $tmp12;
$tmp12 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp12->value = _111;
_112 = ((frost$core$Equatable*) $tmp12);
_113 = _112;
_114 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:57:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_117 = &(&local6)->$rawValue;
*_117 = _114;
_119 = *(&local6);
*(&local5) = _119;
_122 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp13;
$tmp13 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp13->value = _122;
_123 = ((frost$core$Equatable*) $tmp13);
ITable* $tmp14 = _113->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp14 = $tmp14->next;
}
_124 = $tmp14->methods[0];
_125 = _124(_113, _123);
_126 = _125.value;
_127 = ((frost$core$Object*) _123);
frost$core$Frost$unref$frost$core$Object$Q(_127);
_129 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_129);
if (_126) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:58
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
_133 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_134 = (frost$core$Int) {6u};
_135 = frost$core$Real64$init$frost$core$UInt64(param2);
_136 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Real64$org$frostlang$frostc$Type(_133, _134, _135, _136);
_138 = _133;
_139 = ((frost$core$Object*) _138);
frost$core$Frost$ref$frost$core$Object$Q(_139);
_141 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_141);
_143 = *(&local0);
_144 = ((frost$core$Object*) _143);
frost$core$Frost$unref$frost$core$Object$Q(_144);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _138;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:60
_149 = *(&local0);
_150 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(_149);
_151 = _150.value;
if (_151) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:61
_154 = *(&local0);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from IntLiteral.frost:61:81
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3636
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
_157 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_158 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3636:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:297
_161 = &param0->CLASS_TYPE;
_162 = *_161;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_163 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_164 = _163;
_165 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_164, _165);
_167 = _163;
_168 = ((frost$core$Object*) _154);
frost$collections$Array$add$frost$collections$Array$T(_167, _168);
_170 = ((frost$collections$ListView*) _163);
_171 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_162, _170);
_172 = ((frost$core$Object*) _171);
frost$core$Frost$ref$frost$core$Object$Q(_172);
_174 = ((frost$core$Object*) _171);
frost$core$Frost$unref$frost$core$Object$Q(_174);
_176 = ((frost$core$Object*) _163);
frost$core$Frost$unref$frost$core$Object$Q(_176);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type(_157, _158, _154, _171);
_180 = ((frost$core$Object*) _157);
frost$core$Frost$ref$frost$core$Object$Q(_180);
_182 = ((frost$core$Object*) _171);
frost$core$Frost$unref$frost$core$Object$Q(_182);
_184 = ((frost$core$Object*) _157);
frost$core$Frost$unref$frost$core$Object$Q(_184);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_187 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_188 = _187;
_189 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_188, _189);
_191 = _187;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
_192 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_193 = (frost$core$Int) {25u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64(_192, _193, param1, param2);
_195 = ((frost$core$Object*) _192);
frost$collections$Array$add$frost$collections$Array$T(_191, _195);
_197 = ((frost$collections$ListView*) _187);
_198 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _157, _197, param3);
_199 = ((frost$core$Object*) _198);
frost$core$Frost$ref$frost$core$Object$Q(_199);
_201 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_201);
_203 = ((frost$core$Object*) _192);
frost$core$Frost$unref$frost$core$Object$Q(_203);
_205 = ((frost$core$Object*) _187);
frost$core$Frost$unref$frost$core$Object$Q(_205);
_207 = ((frost$core$Object*) _157);
frost$core$Frost$unref$frost$core$Object$Q(_207);
_209 = *(&local0);
_210 = ((frost$core$Object*) _209);
frost$core$Frost$unref$frost$core$Object$Q(_210);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _198;
block16:;
_214 = *(&local0);
_215 = ((frost$core$Object*) _214);
frost$core$Frost$unref$frost$core$Object$Q(_215);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:66
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
_220 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_221 = (frost$core$Int) {3u};
_222 = &param0->INT_TYPE;
_223 = *_222;
_224 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_220, _221, _223, _224);
_226 = org$frostlang$frostc$expression$IntLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, _220);
_227 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _226, param3);
_228 = ((frost$core$Object*) _227);
frost$core$Frost$ref$frost$core$Object$Q(_228);
_230 = ((frost$core$Object*) _227);
frost$core$Frost$unref$frost$core$Object$Q(_230);
_232 = ((frost$core$Object*) _226);
frost$core$Frost$unref$frost$core$Object$Q(_232);
_234 = ((frost$core$Object*) _220);
frost$core$Frost$unref$frost$core$Object$Q(_234);
return _227;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$UInt64 param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

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
frost$core$Object* _22;
frost$core$Int* _26;
frost$core$Int _27;
frost$core$Int _28;
int64_t _31;
int64_t _32;
bool _33;
frost$core$Bit _34;
bool _36;
org$frostlang$frostc$Type** _38;
org$frostlang$frostc$Type* _39;
frost$core$Object* _41;
org$frostlang$frostc$Type* _43;
frost$core$Object* _44;
frost$core$Bit* _47;
frost$core$Bit _48;
org$frostlang$frostc$Type* _50;
org$frostlang$frostc$Type$Kind* _51;
org$frostlang$frostc$Type$Kind _52;
frost$core$Equatable* _53;
frost$core$Equatable* _54;
frost$core$Int _55;
frost$core$Int* _58;
org$frostlang$frostc$Type$Kind _60;
org$frostlang$frostc$Type$Kind _63;
frost$core$Equatable* _64;
$fn15 _65;
frost$core$Bit _66;
bool _67;
frost$core$Object* _68;
frost$core$Object* _70;
frost$core$Object* _76;
org$frostlang$frostc$Type* _78;
frost$core$Object* _79;
org$frostlang$frostc$Type* _84;
org$frostlang$frostc$Type$Kind* _85;
org$frostlang$frostc$Type$Kind _86;
frost$core$Equatable* _87;
frost$core$Equatable* _88;
frost$core$Int _89;
frost$core$Int* _92;
org$frostlang$frostc$Type$Kind _94;
org$frostlang$frostc$Type$Kind _97;
frost$core$Equatable* _98;
$fn16 _99;
frost$core$Bit _100;
bool _101;
frost$core$Object* _102;
frost$core$Object* _104;
uint64_t _110;
int64_t _111;
frost$core$Int64 _112;
int64_t _116;
int64_t _117;
frost$core$Int64 _118;
frost$core$Int _120;
org$frostlang$frostc$Type* _121;
frost$core$Int _122;
int64_t _123;
int64_t _124;
bool _125;
frost$core$Bit _126;
bool _127;
org$frostlang$frostc$IR$Value* _130;
frost$core$Int _131;
uint64_t _134;
int64_t _135;
frost$core$Int64 _136;
int64_t _140;
int64_t _141;
frost$core$Int64 _142;
int64_t _146;
uint64_t _147;
frost$core$UInt64 _148;
org$frostlang$frostc$Type* _150;
org$frostlang$frostc$IR$Value* _152;
frost$core$Object* _153;
frost$core$Object* _155;
org$frostlang$frostc$Type* _157;
frost$core$Object* _158;
frost$core$Object* _166;
org$frostlang$frostc$Type* _168;
frost$core$Object* _169;
org$frostlang$frostc$Type* _175;
org$frostlang$frostc$Type$Kind* _176;
org$frostlang$frostc$Type$Kind _177;
frost$core$Equatable* _178;
frost$core$Equatable* _179;
frost$core$Int _180;
frost$core$Int* _183;
org$frostlang$frostc$Type$Kind _185;
org$frostlang$frostc$Type$Kind _188;
frost$core$Equatable* _189;
$fn17 _190;
frost$core$Bit _191;
bool _192;
frost$core$Object* _193;
frost$core$Object* _195;
org$frostlang$frostc$IR$Value* _199;
frost$core$Int _200;
uint64_t _203;
int64_t _204;
frost$core$Int64 _205;
int64_t _209;
int64_t _210;
frost$core$Int64 _211;
frost$core$Real64 _213;
org$frostlang$frostc$Type* _214;
org$frostlang$frostc$IR$Value* _216;
frost$core$Object* _217;
frost$core$Object* _219;
org$frostlang$frostc$Type* _221;
frost$core$Object* _222;
org$frostlang$frostc$Type* _227;
frost$core$Bit _228;
bool _229;
org$frostlang$frostc$Type* _232;
org$frostlang$frostc$ClassDecl* _233;
frost$core$Object* _235;
org$frostlang$frostc$ClassDecl* _237;
frost$core$Object* _238;
frost$core$Object* _241;
org$frostlang$frostc$ClassDecl* _244;
bool _245;
frost$core$Bit _246;
bool _247;
frost$core$Int _249;
org$frostlang$frostc$ClassDecl* _253;
bool _254;
frost$core$Bit _255;
bool _256;
frost$core$Int _258;
org$frostlang$frostc$ClassDecl* _261;
frost$collections$Array** _262;
frost$collections$Array* _263;
frost$collections$Array* _264;
frost$core$Int _265;
frost$core$Int _267;
int64_t _268;
int64_t _269;
bool _270;
frost$core$Bit _271;
bool _272;
frost$collections$CollectionView* _274;
$fn18 _275;
frost$core$Int _276;
int64_t _277;
int64_t _278;
bool _279;
frost$core$Bit _280;
bool _281;
frost$core$Int _283;
frost$core$Object*** _287;
frost$core$Object** _288;
frost$core$Int64 _289;
int64_t _290;
frost$core$Object* _291;
frost$core$Object* _292;
org$frostlang$frostc$MethodDecl* _295;
frost$core$Object* _297;
org$frostlang$frostc$MethodDecl* _299;
frost$core$Object* _300;
frost$core$Object* _303;
org$frostlang$frostc$MethodDecl* _306;
org$frostlang$frostc$MethodDecl$Kind* _307;
org$frostlang$frostc$MethodDecl$Kind _308;
frost$core$Equatable* _309;
frost$core$Equatable* _310;
frost$core$Int _311;
frost$core$Int* _314;
org$frostlang$frostc$MethodDecl$Kind _316;
org$frostlang$frostc$MethodDecl$Kind _319;
frost$core$Equatable* _320;
$fn19 _321;
frost$core$Bit _322;
bool _323;
frost$core$Int _325;
frost$core$Object* _328;
frost$core$Object* _330;
org$frostlang$frostc$MethodDecl* _333;
frost$core$Bit _334;
bool _337;
bool _338;
frost$core$Bit _339;
bool _341;
frost$core$Object* _344;
org$frostlang$frostc$MethodDecl* _346;
frost$core$Object* _347;
org$frostlang$frostc$ClassDecl* _350;
frost$core$Object* _351;
org$frostlang$frostc$Type* _354;
frost$core$Object* _355;
org$frostlang$frostc$Compiler$TypeContext* _360;
frost$core$Int _361;
org$frostlang$frostc$MethodDecl* _362;
frost$collections$Array** _363;
frost$collections$Array* _364;
frost$collections$Array* _365;
frost$core$Int _366;
frost$core$Int _368;
int64_t _369;
int64_t _370;
bool _371;
frost$core$Bit _372;
bool _373;
frost$collections$CollectionView* _375;
$fn20 _376;
frost$core$Int _377;
int64_t _378;
int64_t _379;
bool _380;
frost$core$Bit _381;
bool _382;
frost$core$Int _384;
frost$core$Object*** _388;
frost$core$Object** _389;
frost$core$Int64 _390;
int64_t _391;
frost$core$Object* _392;
frost$core$Object* _393;
org$frostlang$frostc$MethodDecl$Parameter* _396;
org$frostlang$frostc$Type** _397;
org$frostlang$frostc$Type* _398;
frost$core$Bit _399;
org$frostlang$frostc$IR$Value* _401;
frost$core$Object* _403;
org$frostlang$frostc$IR$Value* _405;
frost$core$Object* _406;
frost$core$Object* _409;
frost$core$Object* _411;
frost$core$Object* _413;
org$frostlang$frostc$IR** _416;
org$frostlang$frostc$IR* _417;
org$frostlang$frostc$IR$Statement* _418;
frost$core$Int _419;
org$frostlang$frostc$MethodDecl* _420;
frost$core$Weak** _421;
frost$core$Weak* _422;
frost$core$Weak* _423;
frost$core$Bit* _428;
frost$core$Bit _429;
bool _431;
frost$core$Int _433;
frost$core$Object** _437;
frost$core$Object* _438;
frost$core$Object* _439;
frost$core$Object* _440;
org$frostlang$frostc$ClassDecl* _443;
frost$collections$Array* _444;
frost$collections$Array* _445;
frost$core$Int _446;
frost$collections$Array* _448;
org$frostlang$frostc$IR$Value* _449;
bool _450;
frost$core$Bit _451;
bool _452;
frost$core$Int _454;
org$frostlang$frostc$IR$Value* _457;
frost$core$Object* _458;
frost$collections$Array* _460;
org$frostlang$frostc$FixedArray* _461;
org$frostlang$frostc$FixedArray* _462;
$fn21 _464;
org$frostlang$frostc$IR$Statement$ID _465;
frost$core$Object* _467;
frost$core$Object* _469;
frost$core$Object* _471;
frost$core$Object* _473;
org$frostlang$frostc$IR$Value* _476;
frost$core$Int _477;
org$frostlang$frostc$IR$Statement$ID _478;
org$frostlang$frostc$MethodDecl* _479;
frost$core$Weak** _480;
frost$core$Weak* _481;
frost$core$Weak* _482;
frost$core$Bit* _487;
frost$core$Bit _488;
bool _490;
frost$core$Int _492;
frost$core$Object** _496;
frost$core$Object* _497;
frost$core$Object* _498;
frost$core$Object* _499;
org$frostlang$frostc$ClassDecl* _502;
org$frostlang$frostc$Type** _503;
org$frostlang$frostc$Type* _504;
org$frostlang$frostc$IR$Value* _506;
org$frostlang$frostc$Type* _507;
frost$core$Equatable* _509;
frost$core$Equatable* _510;
org$frostlang$frostc$Type** _511;
org$frostlang$frostc$Type* _512;
frost$core$Equatable* _513;
$fn22 _514;
frost$core$Bit _515;
bool _516;
frost$core$Int _518;
frost$core$Bit _522;
org$frostlang$frostc$IR$Value* _523;
frost$core$Object* _524;
frost$core$Object* _526;
frost$core$Object* _529;
frost$core$Object* _531;
frost$core$Object* _533;
frost$core$Object* _535;
org$frostlang$frostc$IR$Value* _537;
frost$core$Object* _538;
org$frostlang$frostc$MethodDecl* _541;
frost$core$Object* _542;
org$frostlang$frostc$ClassDecl* _545;
frost$core$Object* _546;
org$frostlang$frostc$Type* _549;
frost$core$Object* _550;
org$frostlang$frostc$Type* _554;
frost$core$Object* _555;
org$frostlang$frostc$Compiler$TypeContext* _560;
frost$core$Int _561;
org$frostlang$frostc$Type** _562;
org$frostlang$frostc$Type* _563;
frost$core$Bit _564;
org$frostlang$frostc$IR$Value* _566;
org$frostlang$frostc$IR$Value* _567;
frost$core$Object* _568;
frost$core$Object* _570;
frost$core$Object* _572;
frost$core$Object* _574;
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
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s23);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:75
_22 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_22);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:77
_26 = &param3->$rawValue;
_27 = *_26;
_28 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IntLiteral.frost:78:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_31 = _27.value;
_32 = _28.value;
_33 = _31 == _32;
_34 = (frost$core$Bit) {_33};
_36 = _34.value;
if (_36) goto block5; else goto block4;
block5:;
_38 = (org$frostlang$frostc$Type**) (param3->$data + 0);
_39 = *_38;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
_41 = ((frost$core$Object*) _39);
frost$core$Frost$ref$frost$core$Object$Q(_41);
_43 = *(&local0);
_44 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_44);
*(&local0) = _39;
_47 = (frost$core$Bit*) (param3->$data + 8);
_48 = *_47;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:79
_50 = *(&local0);
_51 = &_50->typeKind;
_52 = *_51;
org$frostlang$frostc$Type$Kind$wrapper* $tmp24;
$tmp24 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp24->value = _52;
_53 = ((frost$core$Equatable*) $tmp24);
_54 = _53;
_55 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:79:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_58 = &(&local2)->$rawValue;
*_58 = _55;
_60 = *(&local2);
*(&local1) = _60;
_63 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp25;
$tmp25 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp25->value = _63;
_64 = ((frost$core$Equatable*) $tmp25);
ITable* $tmp26 = _54->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp26 = $tmp26->next;
}
_65 = $tmp26->methods[0];
_66 = _65(_54, _64);
_67 = _66.value;
_68 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_68);
_70 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_70);
if (_67) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:80
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s27);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:81
_76 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_76);
_78 = *(&local0);
_79 = ((frost$core$Object*) _78);
frost$core$Frost$unref$frost$core$Object$Q(_79);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:83
_84 = *(&local0);
_85 = &_84->typeKind;
_86 = *_85;
org$frostlang$frostc$Type$Kind$wrapper* $tmp28;
$tmp28 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp28->value = _86;
_87 = ((frost$core$Equatable*) $tmp28);
_88 = _87;
_89 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:83:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_92 = &(&local4)->$rawValue;
*_92 = _89;
_94 = *(&local4);
*(&local3) = _94;
_97 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp29;
$tmp29 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp29->value = _97;
_98 = ((frost$core$Equatable*) $tmp29);
ITable* $tmp30 = _88->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp30 = $tmp30->next;
}
_99 = $tmp30->methods[0];
_100 = _99(_88, _98);
_101 = _100.value;
_102 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_102);
_104 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_104);
if (_101) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:84
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from IntLiteral.frost:84:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_110 = param2.value;
_111 = ((int64_t) _110);
_112 = (frost$core$Int64) {_111};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from IntLiteral.frost:84:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
_116 = _112.value;
_117 = -_116;
_118 = (frost$core$Int64) {_117};
_120 = org$frostlang$frostc$expression$IntLiteral$requiredSize$frost$core$Int64$R$frost$core$Int(_118);
_121 = *(&local0);
_122 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(_121);
_123 = _120.value;
_124 = _122.value;
_125 = _123 <= _124;
_126 = (frost$core$Bit) {_125};
_127 = _126.value;
if (_127) goto block13; else goto block15;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:85
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
_130 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_131 = (frost$core$Int) {1u};
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from IntLiteral.frost:85:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_134 = param2.value;
_135 = ((int64_t) _134);
_136 = (frost$core$Int64) {_135};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from IntLiteral.frost:85:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
_140 = _136.value;
_141 = -_140;
_142 = (frost$core$Int64) {_141};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from IntLiteral.frost:85:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
_146 = _142.value;
_147 = ((uint64_t) _146);
_148 = (frost$core$UInt64) {_147};
_150 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$UInt64$org$frostlang$frostc$Type(_130, _131, _148, _150);
_152 = _130;
_153 = ((frost$core$Object*) _152);
frost$core$Frost$ref$frost$core$Object$Q(_153);
_155 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_155);
_157 = *(&local0);
_158 = ((frost$core$Object*) _157);
frost$core$Frost$unref$frost$core$Object$Q(_158);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _152;
block15:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:88
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s31);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:89
_166 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_166);
_168 = *(&local0);
_169 = ((frost$core$Object*) _168);
frost$core$Frost$unref$frost$core$Object$Q(_169);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block14:;
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:92
_175 = *(&local0);
_176 = &_175->typeKind;
_177 = *_176;
org$frostlang$frostc$Type$Kind$wrapper* $tmp32;
$tmp32 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp32->value = _177;
_178 = ((frost$core$Equatable*) $tmp32);
_179 = _178;
_180 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from IntLiteral.frost:92:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_183 = &(&local6)->$rawValue;
*_183 = _180;
_185 = *(&local6);
*(&local5) = _185;
_188 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp33;
$tmp33 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp33->value = _188;
_189 = ((frost$core$Equatable*) $tmp33);
ITable* $tmp34 = _179->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp34 = $tmp34->next;
}
_190 = $tmp34->methods[0];
_191 = _190(_179, _189);
_192 = _191.value;
_193 = ((frost$core$Object*) _189);
frost$core$Frost$unref$frost$core$Object$Q(_193);
_195 = ((frost$core$Object*) _178);
frost$core$Frost$unref$frost$core$Object$Q(_195);
if (_192) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:93
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
_199 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_200 = (frost$core$Int) {6u};
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from IntLiteral.frost:93:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_203 = param2.value;
_204 = ((int64_t) _203);
_205 = (frost$core$Int64) {_204};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from IntLiteral.frost:93:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
_209 = _205.value;
_210 = -_209;
_211 = (frost$core$Int64) {_210};
_213 = frost$core$Real64$init$frost$core$Int64(_211);
_214 = *(&local0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Real64$org$frostlang$frostc$Type(_199, _200, _213, _214);
_216 = _199;
_217 = ((frost$core$Object*) _216);
frost$core$Frost$ref$frost$core$Object$Q(_217);
_219 = ((frost$core$Object*) _199);
frost$core$Frost$unref$frost$core$Object$Q(_219);
_221 = *(&local0);
_222 = ((frost$core$Object*) _221);
frost$core$Frost$unref$frost$core$Object$Q(_222);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _216;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:95
_227 = *(&local0);
_228 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(_227);
_229 = _228.value;
if (_229) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:96
_232 = *(&local0);
_233 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, _232);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
_235 = ((frost$core$Object*) _233);
frost$core$Frost$ref$frost$core$Object$Q(_235);
_237 = *(&local7);
_238 = ((frost$core$Object*) _237);
frost$core$Frost$unref$frost$core$Object$Q(_238);
*(&local7) = _233;
_241 = ((frost$core$Object*) _233);
frost$core$Frost$unref$frost$core$Object$Q(_241);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:97
_244 = *(&local7);
_245 = _244 != NULL;
_246 = (frost$core$Bit) {_245};
_247 = _246.value;
if (_247) goto block28; else goto block29;
block29:;
_249 = (frost$core$Int) {97u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s35, _249);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:98
_253 = *(&local7);
_254 = _253 != NULL;
_255 = (frost$core$Bit) {_254};
_256 = _255.value;
if (_256) goto block30; else goto block31;
block31:;
_258 = (frost$core$Int) {98u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s36, _258, &$s37);
abort(); // unreachable
block30:;
_261 = _253;
_262 = &_261->methods;
_263 = *_262;
_264 = _263;
_265 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from IntLiteral.frost:98:40
_267 = (frost$core$Int) {0u};
_268 = _265.value;
_269 = _267.value;
_270 = _268 >= _269;
_271 = (frost$core$Bit) {_270};
_272 = _271.value;
if (_272) goto block35; else goto block34;
block35:;
_274 = ((frost$collections$CollectionView*) _264);
ITable* $tmp38 = _274->$class->itable;
while ($tmp38->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp38 = $tmp38->next;
}
_275 = $tmp38->methods[0];
_276 = _275(_274);
_277 = _265.value;
_278 = _276.value;
_279 = _277 < _278;
_280 = (frost$core$Bit) {_279};
_281 = _280.value;
if (_281) goto block33; else goto block34;
block34:;
_283 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s39, _283, &$s40);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_287 = &_264->data;
_288 = *_287;
_289 = frost$core$Int64$init$frost$core$Int(_265);
_290 = _289.value;
_291 = _288[_290];
_292 = _291;
frost$core$Frost$ref$frost$core$Object$Q(_292);
_295 = ((org$frostlang$frostc$MethodDecl*) _291);
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
_297 = ((frost$core$Object*) _295);
frost$core$Frost$ref$frost$core$Object$Q(_297);
_299 = *(&local8);
_300 = ((frost$core$Object*) _299);
frost$core$Frost$unref$frost$core$Object$Q(_300);
*(&local8) = _295;
_303 = _291;
frost$core$Frost$unref$frost$core$Object$Q(_303);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:99
_306 = *(&local8);
_307 = &_306->methodKind;
_308 = *_307;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp41;
$tmp41 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp41->value = _308;
_309 = ((frost$core$Equatable*) $tmp41);
_310 = _309;
_311 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from IntLiteral.frost:99:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
_314 = &(&local10)->$rawValue;
*_314 = _311;
_316 = *(&local10);
*(&local9) = _316;
_319 = *(&local9);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp42;
$tmp42 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp42->value = _319;
_320 = ((frost$core$Equatable*) $tmp42);
ITable* $tmp43 = _310->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp43 = $tmp43->next;
}
_321 = $tmp43->methods[0];
_322 = _321(_310, _320);
_323 = _322.value;
if (_323) goto block37; else goto block38;
block38:;
_325 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s44, _325);
abort(); // unreachable
block37:;
_328 = ((frost$core$Object*) _320);
frost$core$Frost$unref$frost$core$Object$Q(_328);
_330 = ((frost$core$Object*) _309);
frost$core$Frost$unref$frost$core$Object$Q(_330);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:100
_333 = *(&local8);
_334 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, _333);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from IntLiteral.frost:100:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_337 = _334.value;
_338 = !_337;
_339 = (frost$core$Bit) {_338};
_341 = _339.value;
if (_341) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:101
_344 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_344);
_346 = *(&local8);
_347 = ((frost$core$Object*) _346);
frost$core$Frost$unref$frost$core$Object$Q(_347);
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
_350 = *(&local7);
_351 = ((frost$core$Object*) _350);
frost$core$Frost$unref$frost$core$Object$Q(_351);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
_354 = *(&local0);
_355 = ((frost$core$Object*) _354);
frost$core$Frost$unref$frost$core$Object$Q(_355);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:103
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
_360 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_361 = (frost$core$Int) {3u};
_362 = *(&local8);
_363 = &_362->parameters;
_364 = *_363;
_365 = _364;
_366 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from IntLiteral.frost:104:58
_368 = (frost$core$Int) {0u};
_369 = _366.value;
_370 = _368.value;
_371 = _369 >= _370;
_372 = (frost$core$Bit) {_371};
_373 = _372.value;
if (_373) goto block45; else goto block44;
block45:;
_375 = ((frost$collections$CollectionView*) _365);
ITable* $tmp45 = _375->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
_376 = $tmp45->methods[0];
_377 = _376(_375);
_378 = _366.value;
_379 = _377.value;
_380 = _378 < _379;
_381 = (frost$core$Bit) {_380};
_382 = _381.value;
if (_382) goto block43; else goto block44;
block44:;
_384 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _384, &$s47);
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_388 = &_365->data;
_389 = *_388;
_390 = frost$core$Int64$init$frost$core$Int(_366);
_391 = _390.value;
_392 = _389[_391];
_393 = _392;
frost$core$Frost$ref$frost$core$Object$Q(_393);
_396 = ((org$frostlang$frostc$MethodDecl$Parameter*) _392);
_397 = &_396->type;
_398 = *_397;
_399 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_360, _361, _398, _399);
_401 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, _360);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
_403 = ((frost$core$Object*) _401);
frost$core$Frost$ref$frost$core$Object$Q(_403);
_405 = *(&local11);
_406 = ((frost$core$Object*) _405);
frost$core$Frost$unref$frost$core$Object$Q(_406);
*(&local11) = _401;
_409 = ((frost$core$Object*) _401);
frost$core$Frost$unref$frost$core$Object$Q(_409);
_411 = _392;
frost$core$Frost$unref$frost$core$Object$Q(_411);
_413 = ((frost$core$Object*) _360);
frost$core$Frost$unref$frost$core$Object$Q(_413);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:105
_416 = &param0->ir;
_417 = *_416;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
_418 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_419 = (frost$core$Int) {7u};
_420 = *(&local8);
_421 = &_420->owner;
_422 = *_421;
_423 = _422;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from IntLiteral.frost:106:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_428 = &_423->_valid;
_429 = *_428;
_431 = _429.value;
if (_431) goto block48; else goto block49;
block49:;
_433 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s48, _433);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_437 = &_423->value;
_438 = *_437;
_439 = _438;
_440 = _439;
frost$core$Frost$ref$frost$core$Object$Q(_440);
_443 = ((org$frostlang$frostc$ClassDecl*) _439);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_444 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_445 = _444;
_446 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_445, _446);
_448 = _444;
_449 = *(&local11);
_450 = _449 != NULL;
_451 = (frost$core$Bit) {_450};
_452 = _451.value;
if (_452) goto block50; else goto block51;
block51:;
_454 = (frost$core$Int) {106u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s49, _454, &$s50);
abort(); // unreachable
block50:;
_457 = _449;
_458 = ((frost$core$Object*) _457);
frost$collections$Array$add$frost$collections$Array$T(_448, _458);
_460 = _444;
_461 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT(_460);
_462 = _461;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(_418, _419, param1, _443, _462);
_464 = ($fn51) _417->$class->vtable[2];
_465 = _464(_417, _418);
*(&local12) = _465;
_467 = ((frost$core$Object*) _461);
frost$core$Frost$unref$frost$core$Object$Q(_467);
_469 = ((frost$core$Object*) _444);
frost$core$Frost$unref$frost$core$Object$Q(_469);
_471 = _439;
frost$core$Frost$unref$frost$core$Object$Q(_471);
_473 = ((frost$core$Object*) _418);
frost$core$Frost$unref$frost$core$Object$Q(_473);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:107
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
_476 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_477 = (frost$core$Int) {7u};
_478 = *(&local12);
_479 = *(&local8);
_480 = &_479->owner;
_481 = *_480;
_482 = _481;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from IntLiteral.frost:107:76
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_487 = &_482->_valid;
_488 = *_487;
_490 = _488.value;
if (_490) goto block54; else goto block55;
block55:;
_492 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s52, _492);
abort(); // unreachable
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_496 = &_482->value;
_497 = *_496;
_498 = _497;
_499 = _498;
frost$core$Frost$ref$frost$core$Object$Q(_499);
_502 = ((org$frostlang$frostc$ClassDecl*) _498);
_503 = &_502->type;
_504 = *_503;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(_476, _477, _478, _504);
_506 = _476;
_507 = *(&local0);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from IntLiteral.frost:107:43
_509 = ((frost$core$Equatable*) _507);
_510 = _509;
_511 = &param0->VOID_TYPE;
_512 = *_511;
_513 = ((frost$core$Equatable*) _512);
ITable* $tmp53 = _510->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp53 = $tmp53->next;
}
_514 = $tmp53->methods[1];
_515 = _514(_510, _513);
_516 = _515.value;
if (_516) goto block57; else goto block58;
block58:;
_518 = (frost$core$Int) {4052u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s54, _518, &$s55);
abort(); // unreachable
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4053
_522 = (frost$core$Bit) {false};
_523 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _506, _507, _522);
_524 = ((frost$core$Object*) _523);
frost$core$Frost$ref$frost$core$Object$Q(_524);
_526 = ((frost$core$Object*) _523);
frost$core$Frost$unref$frost$core$Object$Q(_526);
_529 = ((frost$core$Object*) _523);
frost$core$Frost$ref$frost$core$Object$Q(_529);
_531 = ((frost$core$Object*) _523);
frost$core$Frost$unref$frost$core$Object$Q(_531);
_533 = _498;
frost$core$Frost$unref$frost$core$Object$Q(_533);
_535 = ((frost$core$Object*) _476);
frost$core$Frost$unref$frost$core$Object$Q(_535);
_537 = *(&local11);
_538 = ((frost$core$Object*) _537);
frost$core$Frost$unref$frost$core$Object$Q(_538);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
_541 = *(&local8);
_542 = ((frost$core$Object*) _541);
frost$core$Frost$unref$frost$core$Object$Q(_542);
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
_545 = *(&local7);
_546 = ((frost$core$Object*) _545);
frost$core$Frost$unref$frost$core$Object$Q(_546);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
_549 = *(&local0);
_550 = ((frost$core$Object*) _549);
frost$core$Frost$unref$frost$core$Object$Q(_550);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _523;
block27:;
_554 = *(&local0);
_555 = ((frost$core$Object*) _554);
frost$core$Frost$unref$frost$core$Object$Q(_555);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:111
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
_560 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_561 = (frost$core$Int) {3u};
_562 = &param0->INT_TYPE;
_563 = *_562;
_564 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_560, _561, _563, _564);
_566 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, _560);
_567 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _566, param3);
_568 = ((frost$core$Object*) _567);
frost$core$Frost$ref$frost$core$Object$Q(_568);
_570 = ((frost$core$Object*) _567);
frost$core$Frost$unref$frost$core$Object$Q(_570);
_572 = ((frost$core$Object*) _566);
frost$core$Frost$unref$frost$core$Object$Q(_572);
_574 = ((frost$core$Object*) _560);
frost$core$Frost$unref$frost$core$Object$Q(_574);
return _567;

}
void org$frostlang$frostc$expression$IntLiteral$init(org$frostlang$frostc$expression$IntLiteral* param0) {

return;

}
void org$frostlang$frostc$expression$IntLiteral$cleanup(org$frostlang$frostc$expression$IntLiteral* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/IntLiteral.frost:14
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

