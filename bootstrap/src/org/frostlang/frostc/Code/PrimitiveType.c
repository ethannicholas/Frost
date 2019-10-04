#include "org/frostlang/frostc/Code/PrimitiveType.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "org/frostlang/frostc/Code/PrimitiveType/_Closure3.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/Code/PrimitiveType/_Closure5.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$Code$PrimitiveType$class_type org$frostlang$frostc$Code$PrimitiveType$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Code$PrimitiveType$get_asString$R$frost$core$String, org$frostlang$frostc$Code$PrimitiveType$cleanup, org$frostlang$frostc$Code$PrimitiveType$get_isInt$R$frost$core$Bit, org$frostlang$frostc$Code$PrimitiveType$get_isFloat$R$frost$core$Bit, org$frostlang$frostc$Code$PrimitiveType$alignUp$frost$core$Int$frost$core$Int$R$frost$core$Int, org$frostlang$frostc$Code$PrimitiveType$elementOffset$frost$core$Int$R$frost$core$Int, org$frostlang$frostc$Code$PrimitiveType$get_size$R$frost$core$Int, org$frostlang$frostc$Code$PrimitiveType$get_alignment$R$frost$core$Int} };

typedef frost$core$Int (*$fn6)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn7)(org$frostlang$frostc$Code$PrimitiveType*);
typedef frost$core$Int (*$fn8)(org$frostlang$frostc$Code$PrimitiveType*, frost$core$Int, frost$core$Int);
typedef frost$core$Int (*$fn9)(org$frostlang$frostc$Code$PrimitiveType*);
typedef frost$core$Int (*$fn10)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn11)(org$frostlang$frostc$Code$PrimitiveType*, frost$core$Int, frost$core$Int);
typedef frost$core$Int (*$fn12)(org$frostlang$frostc$Code$PrimitiveType*);
typedef frost$core$Int (*$fn13)(org$frostlang$frostc$Code$PrimitiveType*, frost$core$Int, frost$core$Int);
typedef frost$core$String* (*$fn14)(frost$core$Object*);
typedef frost$core$Int (*$fn17)(org$frostlang$frostc$Code$PrimitiveType*);
typedef frost$core$Int (*$fn18)(org$frostlang$frostc$Code$PrimitiveType*, frost$core$Int, frost$core$Int);
typedef frost$core$Int (*$fn19)(org$frostlang$frostc$Code$PrimitiveType*);
typedef frost$core$Int (*$fn21)(org$frostlang$frostc$Code$PrimitiveType*, frost$core$Int, frost$core$Int);
typedef frost$core$Int (*$fn22)(org$frostlang$frostc$Code$PrimitiveType*);
typedef frost$core$Int (*$fn23)(org$frostlang$frostc$Code$PrimitiveType*, frost$core$Int, frost$core$Int);
typedef frost$core$String* (*$fn24)(frost$core$Object*);
typedef frost$core$Int (*$fn28)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn29)(org$frostlang$frostc$Code$PrimitiveType*, frost$core$Int);
typedef frost$core$Int (*$fn30)(org$frostlang$frostc$Code$PrimitiveType*);
typedef frost$core$Int (*$fn32)(org$frostlang$frostc$Code$PrimitiveType*, frost$core$Int);
typedef frost$core$Int (*$fn33)(org$frostlang$frostc$Code$PrimitiveType*);
typedef frost$core$Int (*$fn35)(org$frostlang$frostc$Code$PrimitiveType*);
typedef frost$core$Int (*$fn36)(org$frostlang$frostc$Code$PrimitiveType*);
typedef frost$collections$Array* (*$fn37)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$Object* (*$fn38)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$Int (*$fn39)(org$frostlang$frostc$Code$PrimitiveType*);
typedef frost$core$Int (*$fn40)(org$frostlang$frostc$Code$PrimitiveType*);
typedef frost$core$Int (*$fn43)(org$frostlang$frostc$Code$PrimitiveType*);
typedef frost$core$Int (*$fn44)(org$frostlang$frostc$Code$PrimitiveType*);
typedef frost$core$String* (*$fn45)(frost$core$Object*);
typedef frost$core$String* (*$fn46)(frost$core$Object*);
typedef frost$core$String* (*$fn47)(frost$core$Object*);
typedef frost$core$String* (*$fn65)(frost$core$Object*);
typedef frost$core$String* (*$fn68)(frost$core$Object*);
typedef frost$core$String* (*$fn70)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x2e\x50\x72\x69\x6d\x69\x74\x69\x76\x65\x54\x79\x70\x65", 39, -7262290491952411582, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 10, 3952116379015744940, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x2e\x50\x72\x69\x6d\x69\x74\x69\x76\x65\x54\x79\x70\x65\x2e\x61\x6c\x69\x67\x6e\x55\x70\x28\x6f\x66\x66\x73\x65\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x61\x6c\x69\x67\x6e\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 141, 5262376166638164868, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 10, 3952116379015744940, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x2e\x50\x72\x69\x6d\x69\x74\x69\x76\x65\x54\x79\x70\x65\x2e\x61\x6c\x69\x67\x6e\x55\x70\x28\x6f\x66\x66\x73\x65\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x61\x6c\x69\x67\x6e\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 142, 454627314790074997, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 10, 3952116379015744940, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x63\x61\x6e\x6e\x6f\x74\x20\x67\x65\x74\x20\x6f\x66\x66\x73\x65\x74\x20\x69\x6e\x74\x6f\x20", 23, -7686928664419316765, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 10, 3952116379015744940, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 10, 3952116379015744940, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x54", 3, 4700701491050133790, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x54", 3, 4700701491050133790, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x54\x38", 4, 763464388020804498, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x54\x38", 4, 763464388020804498, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x54\x31\x36", 5, -6547298266932515503, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x54\x31\x36", 5, -6547298266932515503, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x54\x33\x32", 5, -6549281785909429697, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x54\x33\x32", 5, -6549281785909429697, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x54\x36\x34", 5, -6554058064421432156, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x54\x36\x34", 5, -6554058064421432156, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x4c\x4f\x41\x54\x33\x32", 7, 1713696091726162832, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x4c\x4f\x41\x54\x33\x32", 7, 1713696091726162832, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x4c\x4f\x41\x54\x36\x34", 7, 1710762594702663559, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x4c\x4f\x41\x54\x36\x34", 7, 1710762594702663559, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x54", 3, 1580866933638322512, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x54", 3, 1580866933638322512, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x52\x52\x41\x59\x28", 6, -3549779656121369174, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x54\x52\x55\x43\x54\x28", 7, 98271112238727000, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 10, 3952116379015744940, NULL };

frost$core$Bit org$frostlang$frostc$Code$PrimitiveType$get_isInt$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Code$PrimitiveType* param0 = (org$frostlang$frostc$Code$PrimitiveType*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Int _13;
int64_t _16;
int64_t _17;
bool _18;
frost$core$Bit _19;
bool _21;
frost$core$Int _23;
int64_t _26;
int64_t _27;
bool _28;
frost$core$Bit _29;
bool _31;
frost$core$Int _33;
int64_t _36;
int64_t _37;
bool _38;
frost$core$Bit _39;
bool _41;
frost$core$Int _43;
int64_t _46;
int64_t _47;
bool _48;
frost$core$Bit _49;
bool _51;
frost$core$Bit _54;
frost$core$Bit _57;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:22
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:23:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block3:;
_13 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:23:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_16 = _2.value;
_17 = _13.value;
_18 = _16 == _17;
_19 = (frost$core$Bit) {_18};
_21 = _19.value;
if (_21) goto block2; else goto block5;
block5:;
_23 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:23:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_26 = _2.value;
_27 = _23.value;
_28 = _26 == _27;
_29 = (frost$core$Bit) {_28};
_31 = _29.value;
if (_31) goto block2; else goto block7;
block7:;
_33 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:23:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_36 = _2.value;
_37 = _33.value;
_38 = _36 == _37;
_39 = (frost$core$Bit) {_38};
_41 = _39.value;
if (_41) goto block2; else goto block9;
block9:;
_43 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:23:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_46 = _2.value;
_47 = _43.value;
_48 = _46 == _47;
_49 = (frost$core$Bit) {_48};
_51 = _49.value;
if (_51) goto block2; else goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:24
_54 = (frost$core$Bit) {true};
return _54;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:27
_57 = (frost$core$Bit) {false};
return _57;

}
frost$core$Bit org$frostlang$frostc$Code$PrimitiveType$get_isFloat$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Code$PrimitiveType* param0 = (org$frostlang$frostc$Code$PrimitiveType*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Int _13;
int64_t _16;
int64_t _17;
bool _18;
frost$core$Bit _19;
bool _21;
frost$core$Bit _24;
frost$core$Bit _27;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:32
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:33:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block3:;
_13 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:33:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_16 = _2.value;
_17 = _13.value;
_18 = _16 == _17;
_19 = (frost$core$Bit) {_18};
_21 = _19.value;
if (_21) goto block2; else goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:34
_24 = (frost$core$Bit) {true};
return _24;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:37
_27 = (frost$core$Bit) {false};
return _27;

}
frost$core$Int org$frostlang$frostc$Code$PrimitiveType$alignUp$frost$core$Int$frost$core$Int$R$frost$core$Int(void* rawSelf, frost$core$Int param1, frost$core$Int param2) {
org$frostlang$frostc$Code$PrimitiveType* param0 = (org$frostlang$frostc$Code$PrimitiveType*) rawSelf;

frost$core$Int local0;
frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _7;
int64_t _36;
int64_t _37;
int64_t _38;
frost$core$Int _39;
frost$core$Int _41;
int64_t _42;
int64_t _43;
bool _44;
frost$core$Bit _45;
bool _46;
int64_t _49;
int64_t _50;
int64_t _51;
frost$core$Int _52;
int64_t _55;
int64_t _56;
int64_t _57;
frost$core$Int _58;
int64_t _60;
int64_t _61;
int64_t _62;
frost$core$Int _63;
frost$core$Int _10;
int64_t _13;
int64_t _14;
int64_t _15;
frost$core$Int _16;
frost$core$Int _18;
int64_t _21;
int64_t _22;
bool _23;
frost$core$Bit _24;
bool _29;
frost$core$Int _31;
frost$core$Int _26;
_0 = (frost$core$Int) {0u};
_1 = param2.value;
_2 = _0.value;
_3 = _1 != _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block2:;
_7 = (frost$core$Int) {42u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _7, &$s3);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:43
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from Code.frost:43:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_36 = param1.value;
_37 = param2.value;
_38 = _36 % _37;
_39 = (frost$core$Int) {_38};
_41 = (frost$core$Int) {0u};
_42 = _39.value;
_43 = _41.value;
_44 = _42 != _43;
_45 = (frost$core$Bit) {_44};
_46 = _45.value;
if (_46) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:44
_49 = param1.value;
_50 = param2.value;
_51 = _49 + _50;
_52 = (frost$core$Int) {_51};
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from Code.frost:44:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_55 = param1.value;
_56 = param2.value;
_57 = _55 % _56;
_58 = (frost$core$Int) {_57};
_60 = _52.value;
_61 = _58.value;
_62 = _60 - _61;
_63 = (frost$core$Int) {_62};
*(&local0) = _63;
goto block3;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:46
*(&local0) = param1;
goto block3;
block3:;
_10 = *(&local0);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from Code.frost:41:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_13 = _10.value;
_14 = param2.value;
_15 = _13 % _14;
_16 = (frost$core$Int) {_15};
_18 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:41:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_21 = _16.value;
_22 = _18.value;
_23 = _21 == _22;
_24 = (frost$core$Bit) {_23};
_29 = _24.value;
if (_29) goto block6; else goto block7;
block6:;
_31 = *(&local0);
return _31;
block7:;
_26 = (frost$core$Int) {42u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4, _26, &$s5);
abort(); // unreachable

}
frost$core$Int org$frostlang$frostc$Code$PrimitiveType$elementOffset$frost$core$Int$R$frost$core$Int(void* rawSelf, frost$core$Int param1) {
org$frostlang$frostc$Code$PrimitiveType* param0 = (org$frostlang$frostc$Code$PrimitiveType*) rawSelf;

org$frostlang$frostc$FixedArray* local0 = NULL;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Int local3;
org$frostlang$frostc$Code$PrimitiveType* local4 = NULL;
frost$core$Int local5;
frost$core$Int local6;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
org$frostlang$frostc$FixedArray** _13;
org$frostlang$frostc$FixedArray* _14;
frost$core$Object* _16;
org$frostlang$frostc$FixedArray* _18;
frost$core$Object* _19;
org$frostlang$frostc$FixedArray* _23;
frost$collections$CollectionView* _24;
$fn6 _25;
frost$core$Int _26;
int64_t _27;
int64_t _28;
bool _29;
frost$core$Bit _30;
bool _31;
frost$core$Int _33;
frost$core$Int _37;
frost$core$Int _40;
frost$core$Int _43;
frost$core$Bit _44;
frost$core$Range$LTfrost$core$Int$GT _45;
frost$core$Int _46;
frost$core$Int _48;
frost$core$Bit _49;
bool _50;
frost$core$Int _51;
int64_t _53;
int64_t _54;
bool _55;
frost$core$Bit _56;
bool _57;
int64_t _59;
int64_t _60;
bool _61;
frost$core$Bit _62;
bool _63;
org$frostlang$frostc$FixedArray* _66;
frost$core$Int _67;
frost$core$Object* _68;
org$frostlang$frostc$Code$PrimitiveType* _69;
frost$core$Object* _71;
org$frostlang$frostc$Code$PrimitiveType* _73;
frost$core$Object* _74;
frost$core$Object* _77;
org$frostlang$frostc$Code$PrimitiveType* _80;
$fn7 _81;
frost$core$Int _82;
frost$core$Int _85;
frost$core$Int _86;
int64_t _89;
int64_t _90;
bool _91;
frost$core$Bit _92;
bool _93;
int64_t _96;
frost$core$Int _97;
int64_t _101;
frost$core$Int _102;
frost$core$Int _105;
frost$core$Int _108;
frost$core$Int _109;
$fn8 _110;
frost$core$Int _111;
frost$core$Int _114;
org$frostlang$frostc$Code$PrimitiveType* _115;
$fn9 _116;
frost$core$Int _117;
int64_t _118;
int64_t _119;
int64_t _120;
frost$core$Int _121;
org$frostlang$frostc$Code$PrimitiveType* _123;
frost$core$Object* _124;
frost$core$Int _128;
int64_t _129;
int64_t _130;
int64_t _131;
frost$core$Int _132;
int64_t _134;
int64_t _135;
bool _136;
frost$core$Bit _137;
bool _138;
int64_t _140;
int64_t _141;
bool _142;
frost$core$Bit _143;
bool _144;
int64_t _146;
int64_t _147;
int64_t _148;
frost$core$Int _149;
org$frostlang$frostc$FixedArray* _153;
frost$collections$CollectionView* _154;
$fn10 _155;
frost$core$Int _156;
int64_t _159;
int64_t _160;
bool _161;
frost$core$Bit _162;
bool _164;
frost$core$Int _167;
frost$core$Int _168;
$fn11 _169;
frost$core$Int _170;
frost$core$Int _175;
org$frostlang$frostc$FixedArray* _176;
frost$core$Object* _177;
org$frostlang$frostc$Code$PrimitiveType* _178;
$fn12 _179;
frost$core$Int _180;
$fn13 _181;
frost$core$Int _182;
frost$core$Object* _184;
frost$core$Int _188;
org$frostlang$frostc$FixedArray* _189;
frost$core$Object* _190;
frost$core$Int _195;
frost$core$Object* _196;
$fn14 _199;
frost$core$String* _200;
frost$core$String* _201;
frost$core$Object* _202;
frost$core$Object* _204;
frost$core$Object* _206;
frost$core$String* _209;
frost$core$Object* _211;
frost$core$Object* _213;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:50
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:51:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$STRUCT.field0;
_14 = *_13;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:52
_23 = *(&local0);
_24 = ((frost$collections$CollectionView*) _23);
ITable* $tmp15 = _24->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp15 = $tmp15->next;
}
_25 = $tmp15->methods[0];
_26 = _25(_24);
_27 = param1.value;
_28 = _26.value;
_29 = _27 <= _28;
_30 = (frost$core$Bit) {_29};
_31 = _30.value;
if (_31) goto block5; else goto block6;
block6:;
_33 = (frost$core$Int) {52u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s16, _33);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:53
_37 = (frost$core$Int) {0u};
*(&local1) = _37;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:54
_40 = (frost$core$Int) {1u};
*(&local2) = _40;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:55
_43 = (frost$core$Int) {0u};
_44 = (frost$core$Bit) {false};
_45 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_43, param1, _44);
_46 = _45.min;
*(&local3) = _46;
_48 = _45.max;
_49 = _45.inclusive;
_50 = _49.value;
_51 = (frost$core$Int) {1u};
if (_50) goto block10; else goto block11;
block10:;
_53 = _46.value;
_54 = _48.value;
_55 = _53 <= _54;
_56 = (frost$core$Bit) {_55};
_57 = _56.value;
if (_57) goto block7; else goto block8;
block11:;
_59 = _46.value;
_60 = _48.value;
_61 = _59 < _60;
_62 = (frost$core$Bit) {_61};
_63 = _62.value;
if (_63) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:56
_66 = *(&local0);
_67 = *(&local3);
_68 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_66, _67);
_69 = ((org$frostlang$frostc$Code$PrimitiveType*) _68);
*(&local4) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_71 = ((frost$core$Object*) _69);
frost$core$Frost$ref$frost$core$Object$Q(_71);
_73 = *(&local4);
_74 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_74);
*(&local4) = _69;
_77 = _68;
frost$core$Frost$unref$frost$core$Object$Q(_77);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:57
_80 = *(&local4);
_81 = ($fn17) _80->$class->vtable[7];
_82 = _81(_80);
*(&local5) = _82;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:58
_85 = *(&local2);
_86 = *(&local5);
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from Code.frost:58:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
_89 = _85.value;
_90 = _86.value;
_91 = _89 > _90;
_92 = (frost$core$Bit) {_91};
_93 = _92.value;
if (_93) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
_96 = _85.value;
_97 = (frost$core$Int) {_96};
*(&local6) = _97;
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
_101 = _86.value;
_102 = (frost$core$Int) {_101};
*(&local6) = _102;
goto block12;
block12:;
_105 = *(&local6);
*(&local2) = _105;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:59
_108 = *(&local1);
_109 = *(&local5);
_110 = ($fn18) param0->$class->vtable[4];
_111 = _110(param0, _108, _109);
*(&local1) = _111;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:60
_114 = *(&local1);
_115 = *(&local4);
_116 = ($fn19) _115->$class->vtable[6];
_117 = _116(_115);
_118 = _114.value;
_119 = _117.value;
_120 = _118 + _119;
_121 = (frost$core$Int) {_120};
*(&local1) = _121;
_123 = *(&local4);
_124 = ((frost$core$Object*) _123);
frost$core$Frost$unref$frost$core$Object$Q(_124);
*(&local4) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_128 = *(&local3);
_129 = _48.value;
_130 = _128.value;
_131 = _129 - _130;
_132 = (frost$core$Int) {_131};
if (_50) goto block16; else goto block17;
block16:;
_134 = _132.value;
_135 = _51.value;
_136 = _134 >= _135;
_137 = (frost$core$Bit) {_136};
_138 = _137.value;
if (_138) goto block15; else goto block8;
block17:;
_140 = _132.value;
_141 = _51.value;
_142 = _140 > _141;
_143 = (frost$core$Bit) {_142};
_144 = _143.value;
if (_144) goto block15; else goto block8;
block15:;
_146 = _128.value;
_147 = _51.value;
_148 = _146 + _147;
_149 = (frost$core$Int) {_148};
*(&local3) = _149;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:62
_153 = *(&local0);
_154 = ((frost$collections$CollectionView*) _153);
ITable* $tmp20 = _154->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
_155 = $tmp20->methods[0];
_156 = _155(_154);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:62:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_159 = param1.value;
_160 = _156.value;
_161 = _159 == _160;
_162 = (frost$core$Bit) {_161};
_164 = _162.value;
if (_164) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:63
_167 = *(&local1);
_168 = *(&local2);
_169 = ($fn21) param0->$class->vtable[4];
_170 = _169(param0, _167, _168);
*(&local1) = _170;
goto block19;
block20:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:66
_175 = *(&local1);
_176 = *(&local0);
_177 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_176, param1);
_178 = ((org$frostlang$frostc$Code$PrimitiveType*) _177);
_179 = ($fn22) _178->$class->vtable[7];
_180 = _179(_178);
_181 = ($fn23) param0->$class->vtable[4];
_182 = _181(param0, _175, _180);
*(&local1) = _182;
_184 = _177;
frost$core$Frost$unref$frost$core$Object$Q(_184);
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:68
_188 = *(&local1);
_189 = *(&local0);
_190 = ((frost$core$Object*) _189);
frost$core$Frost$unref$frost$core$Object$Q(_190);
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return _188;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:71
_195 = (frost$core$Int) {71u};
_196 = ((frost$core$Object*) param0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:71:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_199 = ($fn24) _196->$class->vtable[0];
_200 = _199(_196);
_201 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s25, _200);
_202 = ((frost$core$Object*) _201);
frost$core$Frost$ref$frost$core$Object$Q(_202);
_204 = ((frost$core$Object*) _201);
frost$core$Frost$unref$frost$core$Object$Q(_204);
_206 = ((frost$core$Object*) _200);
frost$core$Frost$unref$frost$core$Object$Q(_206);
_209 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_201, &$s26);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s27, _195, _209);
_211 = ((frost$core$Object*) _209);
frost$core$Frost$unref$frost$core$Object$Q(_211);
_213 = ((frost$core$Object*) _201);
frost$core$Frost$unref$frost$core$Object$Q(_213);
abort(); // unreachable
block1:;
goto block23;
block23:;

}
frost$core$Int org$frostlang$frostc$Code$PrimitiveType$get_size$R$frost$core$Int(void* rawSelf) {
org$frostlang$frostc$Code$PrimitiveType* param0 = (org$frostlang$frostc$Code$PrimitiveType*) rawSelf;

org$frostlang$frostc$FixedArray* local0 = NULL;
frost$core$Int local1;
org$frostlang$frostc$Code$PrimitiveType* local2 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Int _14;
frost$core$Int _16;
int64_t _19;
int64_t _20;
bool _21;
frost$core$Bit _22;
bool _24;
frost$core$Int _26;
int64_t _29;
int64_t _30;
bool _31;
frost$core$Bit _32;
bool _34;
frost$core$Int _37;
frost$core$Int _39;
int64_t _42;
int64_t _43;
bool _44;
frost$core$Bit _45;
bool _47;
frost$core$Int _50;
frost$core$Int _52;
int64_t _55;
int64_t _56;
bool _57;
frost$core$Bit _58;
bool _60;
frost$core$Int _62;
int64_t _65;
int64_t _66;
bool _67;
frost$core$Bit _68;
bool _70;
frost$core$Int _73;
frost$core$Int _75;
int64_t _78;
int64_t _79;
bool _80;
frost$core$Bit _81;
bool _83;
frost$core$Int _85;
int64_t _88;
int64_t _89;
bool _90;
frost$core$Bit _91;
bool _93;
frost$core$Int _96;
frost$core$Int _98;
int64_t _101;
int64_t _102;
bool _103;
frost$core$Bit _104;
bool _106;
org$frostlang$frostc$FixedArray** _108;
org$frostlang$frostc$FixedArray* _109;
frost$core$Object* _111;
org$frostlang$frostc$FixedArray* _113;
frost$core$Object* _114;
org$frostlang$frostc$FixedArray* _118;
frost$collections$CollectionView* _119;
$fn28 _120;
frost$core$Int _121;
$fn29 _122;
frost$core$Int _123;
org$frostlang$frostc$FixedArray* _124;
frost$core$Object* _125;
frost$core$Int _129;
int64_t _132;
int64_t _133;
bool _134;
frost$core$Bit _135;
bool _137;
frost$core$Int* _139;
frost$core$Int _140;
org$frostlang$frostc$Code$PrimitiveType** _142;
org$frostlang$frostc$Code$PrimitiveType* _143;
frost$core$Object* _145;
org$frostlang$frostc$Code$PrimitiveType* _147;
frost$core$Object* _148;
frost$core$Int _152;
org$frostlang$frostc$Code$PrimitiveType* _153;
$fn30 _154;
frost$core$Int _155;
int64_t _156;
int64_t _157;
int64_t _158;
frost$core$Int _159;
org$frostlang$frostc$Code$PrimitiveType* _160;
frost$core$Object* _161;
frost$core$Int _166;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:78
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:79:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:80
_14 = (frost$core$Int) {8u};
return _14;
block3:;
_16 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:82:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_19 = _2.value;
_20 = _16.value;
_21 = _19 == _20;
_22 = (frost$core$Bit) {_21};
_24 = _22.value;
if (_24) goto block5; else goto block6;
block6:;
_26 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:82:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_29 = _2.value;
_30 = _26.value;
_31 = _29 == _30;
_32 = (frost$core$Bit) {_31};
_34 = _32.value;
if (_34) goto block5; else goto block8;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:83
_37 = (frost$core$Int) {1u};
return _37;
block8:;
_39 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:85:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_42 = _2.value;
_43 = _39.value;
_44 = _42 == _43;
_45 = (frost$core$Bit) {_44};
_47 = _45.value;
if (_47) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:86
_50 = (frost$core$Int) {2u};
return _50;
block11:;
_52 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:88:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_55 = _2.value;
_56 = _52.value;
_57 = _55 == _56;
_58 = (frost$core$Bit) {_57};
_60 = _58.value;
if (_60) goto block13; else goto block14;
block14:;
_62 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:88:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_65 = _2.value;
_66 = _62.value;
_67 = _65 == _66;
_68 = (frost$core$Bit) {_67};
_70 = _68.value;
if (_70) goto block13; else goto block16;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:89
_73 = (frost$core$Int) {4u};
return _73;
block16:;
_75 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:91:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_78 = _2.value;
_79 = _75.value;
_80 = _78 == _79;
_81 = (frost$core$Bit) {_80};
_83 = _81.value;
if (_83) goto block18; else goto block19;
block19:;
_85 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:91:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_88 = _2.value;
_89 = _85.value;
_90 = _88 == _89;
_91 = (frost$core$Bit) {_90};
_93 = _91.value;
if (_93) goto block18; else goto block21;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:92
_96 = (frost$core$Int) {8u};
return _96;
block21:;
_98 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:94:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_101 = _2.value;
_102 = _98.value;
_103 = _101 == _102;
_104 = (frost$core$Bit) {_103};
_106 = _104.value;
if (_106) goto block23; else goto block24;
block23:;
_108 = &param0->$data.$STRUCT.field0;
_109 = *_108;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
_111 = ((frost$core$Object*) _109);
frost$core$Frost$ref$frost$core$Object$Q(_111);
_113 = *(&local0);
_114 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_114);
*(&local0) = _109;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:95
_118 = *(&local0);
_119 = ((frost$collections$CollectionView*) _118);
ITable* $tmp31 = _119->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp31 = $tmp31->next;
}
_120 = $tmp31->methods[0];
_121 = _120(_119);
_122 = ($fn32) param0->$class->vtable[5];
_123 = _122(param0, _121);
_124 = *(&local0);
_125 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_125);
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return _123;
block24:;
_129 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:97:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_132 = _2.value;
_133 = _129.value;
_134 = _132 == _133;
_135 = (frost$core$Bit) {_134};
_137 = _135.value;
if (_137) goto block26; else goto block27;
block26:;
_139 = &param0->$data.$ARRAY.field0;
_140 = *_139;
*(&local1) = _140;
_142 = &param0->$data.$ARRAY.field1;
_143 = *_142;
*(&local2) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_145 = ((frost$core$Object*) _143);
frost$core$Frost$ref$frost$core$Object$Q(_145);
_147 = *(&local2);
_148 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_148);
*(&local2) = _143;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:98
_152 = *(&local1);
_153 = *(&local2);
_154 = ($fn33) _153->$class->vtable[6];
_155 = _154(_153);
_156 = _152.value;
_157 = _155.value;
_158 = _156 * _157;
_159 = (frost$core$Int) {_158};
_160 = *(&local2);
_161 = ((frost$core$Object*) _160);
frost$core$Frost$unref$frost$core$Object$Q(_161);
*(&local2) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
return _159;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:101
_166 = (frost$core$Int) {101u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s34, _166);
abort(); // unreachable
block1:;
goto block29;
block29:;

}
frost$core$Int org$frostlang$frostc$Code$PrimitiveType$$anonymous1$org$frostlang$frostc$Code$PrimitiveType$R$frost$core$Int(org$frostlang$frostc$Code$PrimitiveType* param0) {

$fn35 _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:110
_1 = ($fn36) param0->$class->vtable[6];
_2 = _1(param0);
return _2;

}
frost$core$Int org$frostlang$frostc$Code$PrimitiveType$get_alignment$R$frost$core$Int(void* rawSelf) {
org$frostlang$frostc$Code$PrimitiveType* param0 = (org$frostlang$frostc$Code$PrimitiveType*) rawSelf;

org$frostlang$frostc$FixedArray* local0 = NULL;
frost$core$MutableMethod* local1 = NULL;
frost$core$MutableMethod* local2 = NULL;
frost$core$Int local3;
org$frostlang$frostc$Code$PrimitiveType* local4 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
org$frostlang$frostc$FixedArray** _13;
org$frostlang$frostc$FixedArray* _14;
frost$core$Object* _16;
org$frostlang$frostc$FixedArray* _18;
frost$core$Object* _19;
org$frostlang$frostc$FixedArray* _23;
frost$collections$CollectionView* _24;
int64_t _25;
frost$core$Method* _26;
int64_t* _29;
frost$core$Object* _32;
frost$core$Immutable** _34;
frost$core$Immutable* _35;
frost$core$Object* _36;
frost$core$Immutable** _38;
frost$core$Method* _41;
frost$core$MutableMethod* _42;
frost$core$Object* _44;
frost$core$MutableMethod* _46;
frost$core$Object* _47;
org$frostlang$frostc$Code$PrimitiveType$_Closure3* _50;
frost$core$MutableMethod* _51;
int64_t _53;
frost$core$MutableMethod* _54;
frost$core$Object* _55;
int64_t* _58;
frost$core$Object** _62;
frost$core$Object* _63;
frost$core$Object** _65;
frost$core$MutableMethod* _68;
$fn37 _69;
frost$collections$Array* _70;
frost$collections$CollectionView* _71;
int64_t _72;
frost$core$Method* _73;
int64_t* _76;
frost$core$Object* _79;
frost$core$Immutable** _81;
frost$core$Immutable* _82;
frost$core$Object* _83;
frost$core$Immutable** _85;
frost$core$Method* _88;
frost$core$MutableMethod* _89;
frost$core$Object* _91;
frost$core$MutableMethod* _93;
frost$core$Object* _94;
org$frostlang$frostc$Code$PrimitiveType$_Closure5* _97;
frost$core$MutableMethod* _98;
int64_t _100;
frost$core$MutableMethod* _101;
frost$core$Object* _102;
int64_t* _105;
frost$core$Object** _109;
frost$core$Object* _110;
frost$core$Object** _112;
frost$core$MutableMethod* _115;
$fn38 _116;
frost$core$Object* _117;
frost$core$Int _118;
frost$core$Object* _119;
frost$core$Object* _121;
frost$core$Object* _123;
frost$core$MutableMethod* _125;
frost$core$Object* _126;
frost$core$Object* _129;
frost$core$Object* _131;
frost$core$Object* _133;
frost$core$Object* _135;
frost$core$MutableMethod* _137;
frost$core$Object* _138;
frost$core$Object* _141;
org$frostlang$frostc$FixedArray* _143;
frost$core$Object* _144;
frost$core$Int _148;
int64_t _151;
int64_t _152;
bool _153;
frost$core$Bit _154;
bool _156;
frost$core$Int* _158;
frost$core$Int _159;
org$frostlang$frostc$Code$PrimitiveType** _161;
org$frostlang$frostc$Code$PrimitiveType* _162;
frost$core$Object* _164;
org$frostlang$frostc$Code$PrimitiveType* _166;
frost$core$Object* _167;
org$frostlang$frostc$Code$PrimitiveType* _171;
$fn39 _172;
frost$core$Int _173;
org$frostlang$frostc$Code$PrimitiveType* _174;
frost$core$Object* _175;
$fn40 _180;
frost$core$Int _181;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:108
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:109:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$STRUCT.field0;
_14 = *_13;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:110
_23 = *(&local0);
_24 = ((frost$collections$CollectionView*) _23);
_25 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Code$PrimitiveType$$anonymous1$org$frostlang$frostc$Code$PrimitiveType$R$frost$core$Int).value;
_26 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:builtin_int, target:frost.core.Immutable?) from Code.frost:110:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_29 = &_26->pointer;
*_29 = _25;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
_32 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = &_26->target;
_35 = *_34;
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = &_26->target;
*_38 = ((frost$core$Immutable*) NULL);
_41 = _26;
_42 = ((frost$core$MutableMethod*) _41);
*(&local1) = ((frost$core$MutableMethod*) NULL);
_44 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_44);
_46 = *(&local1);
_47 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_47);
*(&local1) = _42;
_50 = (org$frostlang$frostc$Code$PrimitiveType$_Closure3*) frostObjectAlloc(sizeof(org$frostlang$frostc$Code$PrimitiveType$_Closure3), (frost$core$Class*) &org$frostlang$frostc$Code$PrimitiveType$_Closure3$class);
_51 = *(&local1);
org$frostlang$frostc$Code$PrimitiveType$_Closure3$init$$LPorg$frostlang$frostc$Code$PrimitiveType$RP$EQ$GT$LPfrost$core$Int$RP(_50, _51);
_53 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Code$PrimitiveType$_Closure3$$anonymous2$frost$collections$CollectionView$T$R$frost$collections$CollectionView$map$U).value;
_54 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_55 = ((frost$core$Object*) _50);
// begin inline call to frost.core.MutableMethod.init(pointer:builtin_int, target:frost.core.Object?) from Code.frost:110:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:30
_58 = &_54->pointer;
*_58 = _53;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:31
frost$core$Frost$ref$frost$core$Object$Q(_55);
_62 = &_54->target;
_63 = *_62;
frost$core$Frost$unref$frost$core$Object$Q(_63);
_65 = &_54->target;
*_65 = _55;
_68 = _54;
ITable* $tmp41 = _24->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp41 = $tmp41->next;
}
_69 = $tmp41->methods[9];
_70 = _69(_24, _68);
_71 = ((frost$collections$CollectionView*) _70);
_72 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &frost$core$Int$max$frost$core$Int$R$frost$core$Int).value;
_73 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:builtin_int, target:frost.core.Immutable?) from Code.frost:110:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_76 = &_73->pointer;
*_76 = _72;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
_79 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_79);
_81 = &_73->target;
_82 = *_81;
_83 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_83);
_85 = &_73->target;
*_85 = ((frost$core$Immutable*) NULL);
_88 = _73;
_89 = ((frost$core$MutableMethod*) _88);
*(&local2) = ((frost$core$MutableMethod*) NULL);
_91 = ((frost$core$Object*) _89);
frost$core$Frost$ref$frost$core$Object$Q(_91);
_93 = *(&local2);
_94 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_94);
*(&local2) = _89;
_97 = (org$frostlang$frostc$Code$PrimitiveType$_Closure5*) frostObjectAlloc(sizeof(org$frostlang$frostc$Code$PrimitiveType$_Closure5), (frost$core$Class*) &org$frostlang$frostc$Code$PrimitiveType$_Closure5$class);
_98 = *(&local2);
org$frostlang$frostc$Code$PrimitiveType$_Closure5$init$$LPfrost$core$Int$Cfrost$core$Int$RP$EQ$GT$LPfrost$core$Int$RP(_97, _98);
_100 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Code$PrimitiveType$_Closure5$$anonymous4$frost$collections$CollectionView$T$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T).value;
_101 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_102 = ((frost$core$Object*) _97);
// begin inline call to frost.core.MutableMethod.init(pointer:builtin_int, target:frost.core.Object?) from Code.frost:110:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:30
_105 = &_101->pointer;
*_105 = _100;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:31
frost$core$Frost$ref$frost$core$Object$Q(_102);
_109 = &_101->target;
_110 = *_109;
frost$core$Frost$unref$frost$core$Object$Q(_110);
_112 = &_101->target;
*_112 = _102;
_115 = _101;
ITable* $tmp42 = _71->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp42 = $tmp42->next;
}
_116 = $tmp42->methods[4];
_117 = _116(_71, _115);
_118 = ((frost$core$Int$wrapper*) _117)->value;
_119 = _117;
frost$core$Frost$unref$frost$core$Object$Q(_119);
_121 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_121);
_123 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_123);
_125 = *(&local2);
_126 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_126);
*(&local2) = ((frost$core$MutableMethod*) NULL);
_129 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_129);
_131 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_131);
_133 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_133);
_135 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_135);
_137 = *(&local1);
_138 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_138);
*(&local1) = ((frost$core$MutableMethod*) NULL);
_141 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_141);
_143 = *(&local0);
_144 = ((frost$core$Object*) _143);
frost$core$Frost$unref$frost$core$Object$Q(_144);
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return _118;
block3:;
_148 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:112:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_151 = _2.value;
_152 = _148.value;
_153 = _151 == _152;
_154 = (frost$core$Bit) {_153};
_156 = _154.value;
if (_156) goto block9; else goto block10;
block9:;
_158 = &param0->$data.$ARRAY.field0;
_159 = *_158;
*(&local3) = _159;
_161 = &param0->$data.$ARRAY.field1;
_162 = *_161;
*(&local4) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_164 = ((frost$core$Object*) _162);
frost$core$Frost$ref$frost$core$Object$Q(_164);
_166 = *(&local4);
_167 = ((frost$core$Object*) _166);
frost$core$Frost$unref$frost$core$Object$Q(_167);
*(&local4) = _162;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:113
_171 = *(&local4);
_172 = ($fn43) _171->$class->vtable[7];
_173 = _172(_171);
_174 = *(&local4);
_175 = ((frost$core$Object*) _174);
frost$core$Frost$unref$frost$core$Object$Q(_175);
*(&local4) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
return _173;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:116
_180 = ($fn44) param0->$class->vtable[6];
_181 = _180(param0);
return _181;
block1:;
goto block12;
block12:;

}
void org$frostlang$frostc$Code$PrimitiveType$cleanup(void* rawSelf) {
org$frostlang$frostc$Code$PrimitiveType* param0 = (org$frostlang$frostc$Code$PrimitiveType*) rawSelf;

frost$core$Int local0;
org$frostlang$frostc$Code$PrimitiveType* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Int _14;
int64_t _17;
int64_t _18;
bool _19;
frost$core$Bit _20;
bool _22;
frost$core$Int _25;
int64_t _28;
int64_t _29;
bool _30;
frost$core$Bit _31;
bool _33;
frost$core$Int _36;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
bool _44;
frost$core$Int _47;
int64_t _50;
int64_t _51;
bool _52;
frost$core$Bit _53;
bool _55;
frost$core$Int _58;
int64_t _61;
int64_t _62;
bool _63;
frost$core$Bit _64;
bool _66;
frost$core$Int _69;
int64_t _72;
int64_t _73;
bool _74;
frost$core$Bit _75;
bool _77;
frost$core$Int _80;
int64_t _83;
int64_t _84;
bool _85;
frost$core$Bit _86;
bool _88;
frost$core$Int _91;
int64_t _94;
int64_t _95;
bool _96;
frost$core$Bit _97;
bool _99;
frost$core$Int* _101;
frost$core$Int _102;
org$frostlang$frostc$Code$PrimitiveType** _104;
org$frostlang$frostc$Code$PrimitiveType* _105;
frost$core$Object* _107;
org$frostlang$frostc$Code$PrimitiveType* _109;
frost$core$Object* _110;
org$frostlang$frostc$Code$PrimitiveType* _114;
frost$core$Object* _115;
org$frostlang$frostc$Code$PrimitiveType* _117;
frost$core$Object* _118;
frost$core$Int _122;
int64_t _125;
int64_t _126;
bool _127;
frost$core$Bit _128;
bool _130;
org$frostlang$frostc$FixedArray** _132;
org$frostlang$frostc$FixedArray* _133;
frost$core$Object* _135;
org$frostlang$frostc$FixedArray* _137;
frost$core$Object* _138;
org$frostlang$frostc$FixedArray* _142;
frost$core$Object* _143;
org$frostlang$frostc$FixedArray* _145;
frost$core$Object* _146;
frost$core$Object* _151;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
goto block1;
block3:;
_14 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_17 = _2.value;
_18 = _14.value;
_19 = _17 == _18;
_20 = (frost$core$Bit) {_19};
_22 = _20.value;
if (_22) goto block5; else goto block6;
block5:;
goto block1;
block6:;
_25 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_28 = _2.value;
_29 = _25.value;
_30 = _28 == _29;
_31 = (frost$core$Bit) {_30};
_33 = _31.value;
if (_33) goto block8; else goto block9;
block8:;
goto block1;
block9:;
_36 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_39 = _2.value;
_40 = _36.value;
_41 = _39 == _40;
_42 = (frost$core$Bit) {_41};
_44 = _42.value;
if (_44) goto block11; else goto block12;
block11:;
goto block1;
block12:;
_47 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_50 = _2.value;
_51 = _47.value;
_52 = _50 == _51;
_53 = (frost$core$Bit) {_52};
_55 = _53.value;
if (_55) goto block14; else goto block15;
block14:;
goto block1;
block15:;
_58 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_61 = _2.value;
_62 = _58.value;
_63 = _61 == _62;
_64 = (frost$core$Bit) {_63};
_66 = _64.value;
if (_66) goto block17; else goto block18;
block17:;
goto block1;
block18:;
_69 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_72 = _2.value;
_73 = _69.value;
_74 = _72 == _73;
_75 = (frost$core$Bit) {_74};
_77 = _75.value;
if (_77) goto block20; else goto block21;
block20:;
goto block1;
block21:;
_80 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_83 = _2.value;
_84 = _80.value;
_85 = _83 == _84;
_86 = (frost$core$Bit) {_85};
_88 = _86.value;
if (_88) goto block23; else goto block24;
block23:;
goto block1;
block24:;
_91 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_94 = _2.value;
_95 = _91.value;
_96 = _94 == _95;
_97 = (frost$core$Bit) {_96};
_99 = _97.value;
if (_99) goto block26; else goto block27;
block26:;
_101 = &param0->$data.$ARRAY.field0;
_102 = *_101;
*(&local0) = _102;
_104 = &param0->$data.$ARRAY.field1;
_105 = *_104;
*(&local1) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_107 = ((frost$core$Object*) _105);
frost$core$Frost$ref$frost$core$Object$Q(_107);
_109 = *(&local1);
_110 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_110);
*(&local1) = _105;
// <no location>
_114 = *(&local1);
_115 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_115);
_117 = *(&local1);
_118 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_118);
*(&local1) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
goto block1;
block27:;
_122 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_125 = _2.value;
_126 = _122.value;
_127 = _125 == _126;
_128 = (frost$core$Bit) {_127};
_130 = _128.value;
if (_130) goto block29; else goto block1;
block29:;
_132 = &param0->$data.$STRUCT.field0;
_133 = *_132;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
_135 = ((frost$core$Object*) _133);
frost$core$Frost$ref$frost$core$Object$Q(_135);
_137 = *(&local2);
_138 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_138);
*(&local2) = _133;
// <no location>
_142 = *(&local2);
_143 = ((frost$core$Object*) _142);
frost$core$Frost$unref$frost$core$Object$Q(_143);
_145 = *(&local2);
_146 = ((frost$core$Object*) _145);
frost$core$Frost$unref$frost$core$Object$Q(_146);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_151 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_151);
return;

}
void org$frostlang$frostc$Code$PrimitiveType$init$frost$core$Int(void* rawSelf, frost$core$Int param1) {
org$frostlang$frostc$Code$PrimitiveType* param0 = (org$frostlang$frostc$Code$PrimitiveType*) rawSelf;

frost$core$Int* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_1 = &param0->$rawValue;
*_1 = param1;
return;

}
void org$frostlang$frostc$Code$PrimitiveType$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf, frost$core$Int param1, frost$core$Int param2, org$frostlang$frostc$Code$PrimitiveType* param3) {
org$frostlang$frostc$Code$PrimitiveType* param0 = (org$frostlang$frostc$Code$PrimitiveType*) rawSelf;

frost$core$Int* _1;
frost$core$Int* _4;
frost$core$Object* _7;
org$frostlang$frostc$Code$PrimitiveType** _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_4 = &param0->$data.$ARRAY.field0;
*_4 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_7 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = &param0->$data.$ARRAY.field1;
*_9 = param3;
return;

}
void org$frostlang$frostc$Code$PrimitiveType$init$frost$core$Int$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Code$PrimitiveType$GT(void* rawSelf, frost$core$Int param1, org$frostlang$frostc$FixedArray* param2) {
org$frostlang$frostc$Code$PrimitiveType* param0 = (org$frostlang$frostc$Code$PrimitiveType*) rawSelf;

frost$core$Int* _1;
frost$core$Object* _4;
org$frostlang$frostc$FixedArray** _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->$data.$STRUCT.field0;
*_6 = param2;
return;

}
frost$core$String* org$frostlang$frostc$Code$PrimitiveType$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$Code$PrimitiveType* param0 = (org$frostlang$frostc$Code$PrimitiveType*) rawSelf;

frost$core$Int local0;
org$frostlang$frostc$Code$PrimitiveType* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Object* _14;
frost$core$Int _17;
int64_t _20;
int64_t _21;
bool _22;
frost$core$Bit _23;
bool _25;
frost$core$Object* _28;
frost$core$Int _31;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _39;
frost$core$Object* _42;
frost$core$Int _45;
int64_t _48;
int64_t _49;
bool _50;
frost$core$Bit _51;
bool _53;
frost$core$Object* _56;
frost$core$Int _59;
int64_t _62;
int64_t _63;
bool _64;
frost$core$Bit _65;
bool _67;
frost$core$Object* _70;
frost$core$Int _73;
int64_t _76;
int64_t _77;
bool _78;
frost$core$Bit _79;
bool _81;
frost$core$Object* _84;
frost$core$Int _87;
int64_t _90;
int64_t _91;
bool _92;
frost$core$Bit _93;
bool _95;
frost$core$Object* _98;
frost$core$Int _101;
int64_t _104;
int64_t _105;
bool _106;
frost$core$Bit _107;
bool _109;
frost$core$Object* _112;
frost$core$Int _115;
int64_t _118;
int64_t _119;
bool _120;
frost$core$Bit _121;
bool _123;
frost$core$Int* _125;
frost$core$Int _126;
org$frostlang$frostc$Code$PrimitiveType** _128;
org$frostlang$frostc$Code$PrimitiveType* _129;
frost$core$Object* _131;
org$frostlang$frostc$Code$PrimitiveType* _133;
frost$core$Object* _134;
frost$core$Int _138;
frost$core$Object* _139;
$fn45 _142;
frost$core$String* _143;
frost$core$String* _144;
frost$core$Object* _145;
frost$core$Object* _147;
frost$core$Object* _149;
frost$core$String* _152;
org$frostlang$frostc$Code$PrimitiveType* _153;
frost$core$Object* _154;
$fn46 _157;
frost$core$String* _158;
frost$core$String* _159;
frost$core$Object* _160;
frost$core$Object* _162;
frost$core$Object* _164;
frost$core$String* _167;
frost$core$Object* _168;
frost$core$Object* _170;
frost$core$Object* _172;
frost$core$Object* _174;
frost$core$Object* _176;
frost$core$Object* _178;
org$frostlang$frostc$Code$PrimitiveType* _180;
frost$core$Object* _181;
frost$core$Int _185;
int64_t _188;
int64_t _189;
bool _190;
frost$core$Bit _191;
bool _193;
org$frostlang$frostc$FixedArray** _195;
org$frostlang$frostc$FixedArray* _196;
frost$core$Object* _198;
org$frostlang$frostc$FixedArray* _200;
frost$core$Object* _201;
org$frostlang$frostc$FixedArray* _205;
frost$core$Object* _206;
$fn47 _209;
frost$core$String* _210;
frost$core$String* _211;
frost$core$Object* _212;
frost$core$Object* _214;
frost$core$Object* _216;
frost$core$String* _219;
frost$core$Object* _220;
frost$core$Object* _222;
frost$core$Object* _224;
org$frostlang$frostc$FixedArray* _226;
frost$core$Object* _227;
frost$core$Int _232;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_14 = ((frost$core$Object*) &$s48);
frost$core$Frost$ref$frost$core$Object$Q(_14);
return &$s49;
block3:;
_17 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_20 = _2.value;
_21 = _17.value;
_22 = _20 == _21;
_23 = (frost$core$Bit) {_22};
_25 = _23.value;
if (_25) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_28 = ((frost$core$Object*) &$s50);
frost$core$Frost$ref$frost$core$Object$Q(_28);
return &$s51;
block6:;
_31 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_34 = _2.value;
_35 = _31.value;
_36 = _34 == _35;
_37 = (frost$core$Bit) {_36};
_39 = _37.value;
if (_39) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_42 = ((frost$core$Object*) &$s52);
frost$core$Frost$ref$frost$core$Object$Q(_42);
return &$s53;
block9:;
_45 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_48 = _2.value;
_49 = _45.value;
_50 = _48 == _49;
_51 = (frost$core$Bit) {_50};
_53 = _51.value;
if (_53) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_56 = ((frost$core$Object*) &$s54);
frost$core$Frost$ref$frost$core$Object$Q(_56);
return &$s55;
block12:;
_59 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_62 = _2.value;
_63 = _59.value;
_64 = _62 == _63;
_65 = (frost$core$Bit) {_64};
_67 = _65.value;
if (_67) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_70 = ((frost$core$Object*) &$s56);
frost$core$Frost$ref$frost$core$Object$Q(_70);
return &$s57;
block15:;
_73 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_76 = _2.value;
_77 = _73.value;
_78 = _76 == _77;
_79 = (frost$core$Bit) {_78};
_81 = _79.value;
if (_81) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_84 = ((frost$core$Object*) &$s58);
frost$core$Frost$ref$frost$core$Object$Q(_84);
return &$s59;
block18:;
_87 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_90 = _2.value;
_91 = _87.value;
_92 = _90 == _91;
_93 = (frost$core$Bit) {_92};
_95 = _93.value;
if (_95) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_98 = ((frost$core$Object*) &$s60);
frost$core$Frost$ref$frost$core$Object$Q(_98);
return &$s61;
block21:;
_101 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_104 = _2.value;
_105 = _101.value;
_106 = _104 == _105;
_107 = (frost$core$Bit) {_106};
_109 = _107.value;
if (_109) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_112 = ((frost$core$Object*) &$s62);
frost$core$Frost$ref$frost$core$Object$Q(_112);
return &$s63;
block24:;
_115 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_118 = _2.value;
_119 = _115.value;
_120 = _118 == _119;
_121 = (frost$core$Bit) {_120};
_123 = _121.value;
if (_123) goto block26; else goto block27;
block26:;
_125 = &param0->$data.$ARRAY.field0;
_126 = *_125;
*(&local0) = _126;
_128 = &param0->$data.$ARRAY.field1;
_129 = *_128;
*(&local1) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_131 = ((frost$core$Object*) _129);
frost$core$Frost$ref$frost$core$Object$Q(_131);
_133 = *(&local1);
_134 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_134);
*(&local1) = _129;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_138 = *(&local0);
frost$core$Int$wrapper* $tmp64;
$tmp64 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp64->value = _138;
_139 = ((frost$core$Object*) $tmp64);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_142 = ($fn65) _139->$class->vtable[0];
_143 = _142(_139);
_144 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s66, _143);
_145 = ((frost$core$Object*) _144);
frost$core$Frost$ref$frost$core$Object$Q(_145);
_147 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_147);
_149 = ((frost$core$Object*) _143);
frost$core$Frost$unref$frost$core$Object$Q(_149);
_152 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_144, &$s67);
_153 = *(&local1);
_154 = ((frost$core$Object*) _153);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_157 = ($fn68) _154->$class->vtable[0];
_158 = _157(_154);
_159 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_152, _158);
_160 = ((frost$core$Object*) _159);
frost$core$Frost$ref$frost$core$Object$Q(_160);
_162 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_162);
_164 = ((frost$core$Object*) _158);
frost$core$Frost$unref$frost$core$Object$Q(_164);
_167 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_159, &$s69);
_168 = ((frost$core$Object*) _167);
frost$core$Frost$ref$frost$core$Object$Q(_168);
_170 = ((frost$core$Object*) _167);
frost$core$Frost$unref$frost$core$Object$Q(_170);
_172 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_172);
_174 = ((frost$core$Object*) _152);
frost$core$Frost$unref$frost$core$Object$Q(_174);
_176 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_176);
_178 = _139;
frost$core$Frost$unref$frost$core$Object$Q(_178);
_180 = *(&local1);
_181 = ((frost$core$Object*) _180);
frost$core$Frost$unref$frost$core$Object$Q(_181);
*(&local1) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
return _167;
block27:;
_185 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_188 = _2.value;
_189 = _185.value;
_190 = _188 == _189;
_191 = (frost$core$Bit) {_190};
_193 = _191.value;
if (_193) goto block31; else goto block32;
block31:;
_195 = &param0->$data.$STRUCT.field0;
_196 = *_195;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
_198 = ((frost$core$Object*) _196);
frost$core$Frost$ref$frost$core$Object$Q(_198);
_200 = *(&local2);
_201 = ((frost$core$Object*) _200);
frost$core$Frost$unref$frost$core$Object$Q(_201);
*(&local2) = _196;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_205 = *(&local2);
_206 = ((frost$core$Object*) _205);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:8:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_209 = ($fn70) _206->$class->vtable[0];
_210 = _209(_206);
_211 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s71, _210);
_212 = ((frost$core$Object*) _211);
frost$core$Frost$ref$frost$core$Object$Q(_212);
_214 = ((frost$core$Object*) _211);
frost$core$Frost$unref$frost$core$Object$Q(_214);
_216 = ((frost$core$Object*) _210);
frost$core$Frost$unref$frost$core$Object$Q(_216);
_219 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_211, &$s72);
_220 = ((frost$core$Object*) _219);
frost$core$Frost$ref$frost$core$Object$Q(_220);
_222 = ((frost$core$Object*) _219);
frost$core$Frost$unref$frost$core$Object$Q(_222);
_224 = ((frost$core$Object*) _211);
frost$core$Frost$unref$frost$core$Object$Q(_224);
_226 = *(&local2);
_227 = ((frost$core$Object*) _226);
frost$core$Frost$unref$frost$core$Object$Q(_227);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
return _219;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:8
_232 = (frost$core$Int) {8u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s73, _232);
abort(); // unreachable
block1:;
goto block35;
block35:;

}

