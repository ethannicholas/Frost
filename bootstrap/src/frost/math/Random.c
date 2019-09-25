#include "frost/math/Random.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/math/XorShift128Plus.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int32.h"
#include "frost/core/Int.h"
#include "frost/core/Real32.h"
#include "frost/core/UInt32.h"
#include "frost/core/Real64.h"
#include "frost/core/UInt64.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

struct { frost$core$Class* cl; ITable* next; void* methods[6]; } frost$math$Random$_frost$math$Random = { (frost$core$Class*) &frost$math$Random$class, NULL, { frost$math$Random$bit$R$frost$core$Bit, frost$math$Random$int32$R$frost$core$Int32, NULL, frost$math$Random$int$frost$core$Int$R$frost$core$Int, frost$math$Random$real32$R$frost$core$Real32, frost$math$Random$real64$R$frost$core$Real64} };

static frost$core$String $s1;
frost$math$Random$class_type frost$math$Random$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$math$Random$_frost$math$Random, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, frost$math$Random$bit$R$frost$core$Bit, frost$math$Random$int32$R$frost$core$Int32, NULL, frost$math$Random$int$frost$core$Int$R$frost$core$Int, frost$math$Random$real32$R$frost$core$Real32, frost$math$Random$real64$R$frost$core$Real64} };

typedef frost$core$Int64 (*$fn2)(frost$math$Random*);
typedef frost$core$Int64 (*$fn4)(frost$math$Random*);
typedef frost$core$Int64 (*$fn6)(frost$math$Random*);
typedef frost$core$Int32 (*$fn12)(frost$math$Random*);
typedef frost$core$Int64 (*$fn16)(frost$math$Random*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d", 17, 246873264650368936, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x61\x6e\x64\x6f\x6d\x2e\x66\x72\x6f\x73\x74", 12, 2479631432786516750, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 86, 3246781277201696262, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x61\x6e\x64\x6f\x6d\x2e\x66\x72\x6f\x73\x74", 12, 2479631432786516750, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x69\x6e\x74\x28\x6e\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 87, -758947845813128963, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x61\x6e\x64\x6f\x6d\x2e\x66\x72\x6f\x73\x74", 12, 2479631432786516750, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x72\x65\x61\x6c\x33\x32\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 77, 4780773254121889007, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x61\x6e\x64\x6f\x6d\x2e\x66\x72\x6f\x73\x74", 12, 2479631432786516750, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d\x2e\x72\x65\x61\x6c\x36\x34\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 77, -7206352807318238505, NULL };

frost$math$Random* frost$math$Random$default$R$frost$math$Random() {

frost$math$XorShift128Plus* _1;
int64_t _2;
frost$core$Int64 _3;
frost$math$Random* _5;
frost$core$Object* _6;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/Random.frost:17
_1 = (frost$math$XorShift128Plus*) frostObjectAlloc(sizeof(frost$math$XorShift128Plus), (frost$core$Class*) &frost$math$XorShift128Plus$class);
_2 = frost$core$Frost$currentTime$R$builtin_int64();
_3 = (frost$core$Int64) {_2};
frost$math$XorShift128Plus$init$frost$core$Int64(_1, _3);
_5 = ((frost$math$Random*) _1);
_6 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_8);
return _5;

}
frost$core$Bit frost$math$Random$bit$R$frost$core$Bit(void* rawSelf) {
frost$math$Random* param0 = (frost$math$Random*) rawSelf;

frost$core$Int64 local0;
$fn2 _1;
frost$core$Int64 _2;
frost$core$Int64 _5;
frost$core$Int64 _6;
int64_t _9;
int64_t _10;
int64_t _11;
frost$core$Int64 _12;
frost$core$Int64 _14;
int64_t _15;
int64_t _16;
bool _17;
frost$core$Bit _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/Random.frost:27
ITable* $tmp3 = param0->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp3 = $tmp3->next;
}
_1 = $tmp3->methods[2];
_2 = _1(param0);
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/Random.frost:28
_5 = *(&local0);
_6 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Random.frost:28:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:178
_9 = _5.value;
_10 = _6.value;
_11 = _9 & _10;
_12 = (frost$core$Int64) {_11};
_14 = (frost$core$Int64) {0u};
_15 = _12.value;
_16 = _14.value;
_17 = _15 != _16;
_18 = (frost$core$Bit) {_17};
return _18;

}
frost$core$Int32 frost$math$Random$int32$R$frost$core$Int32(void* rawSelf) {
frost$math$Random* param0 = (frost$math$Random*) rawSelf;

$fn4 _1;
frost$core$Int64 _2;
int64_t _5;
int32_t _6;
frost$core$Int32 _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/Random.frost:36
ITable* $tmp5 = param0->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp5 = $tmp5->next;
}
_1 = $tmp5->methods[2];
_2 = _1(param0);
// begin inline call to function frost.core.Int64.get_asInt32():frost.core.Int32 from Random.frost:36:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:598
_5 = _2.value;
_6 = ((int32_t) _5);
_7 = (frost$core$Int32) {_6};
return _7;

}
frost$core$Int frost$math$Random$int$frost$core$Int$R$frost$core$Int(void* rawSelf, frost$core$Int param1) {
frost$math$Random* param0 = (frost$math$Random*) rawSelf;

frost$core$Int local0;
frost$core$Bit local1;
frost$core$Int local2;
frost$core$Int local3;
frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _7;
frost$core$Int _36;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
bool _44;
frost$core$Int _47;
int64_t _53;
int64_t _54;
frost$core$Int _55;
int64_t _59;
int64_t _60;
int64_t _61;
frost$core$Int _62;
$fn6 _68;
frost$core$Int64 _69;
int64_t _72;
int64_t _73;
frost$core$Int _74;
frost$core$Int _78;
frost$core$Int _79;
int64_t _80;
int64_t _81;
bool _82;
frost$core$Bit _83;
bool _84;
frost$core$Int _87;
int64_t _90;
int64_t _91;
int64_t _92;
frost$core$Int _93;
frost$core$Int _10;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
bool _16;
frost$core$Int _18;
int64_t _19;
int64_t _20;
bool _21;
frost$core$Bit _22;
frost$core$Bit _27;
bool _31;
frost$core$Int _33;
frost$core$Int _28;
_0 = (frost$core$Int) {1u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block2:;
_7 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _7, &$s8);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/Random.frost:55
_36 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Random.frost:55:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_39 = param1.value;
_40 = _36.value;
_41 = _39 == _40;
_42 = (frost$core$Bit) {_41};
_44 = _42.value;
if (_44) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/Random.frost:56
_47 = (frost$core$Int) {0u};
*(&local0) = _47;
goto block3;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/Random.frost:59
// begin inline call to function frost.core.Int.-():frost.core.Int from Random.frost:59:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_53 = param1.value;
_54 = -_53;
_55 = (frost$core$Int) {_54};
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from Random.frost:59:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_59 = _55.value;
_60 = param1.value;
_61 = _59 % _60;
_62 = (frost$core$Int) {_61};
*(&local2) = _62;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/Random.frost:60
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/Random.frost:61
ITable* $tmp9 = param0->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp9 = $tmp9->next;
}
_68 = $tmp9->methods[2];
_69 = _68(param0);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Random.frost:61:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_72 = _69.value;
_73 = ((int64_t) _72);
_74 = (frost$core$Int) {_73};
*(&local3) = _74;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/Random.frost:62
_78 = *(&local3);
_79 = *(&local2);
_80 = _78.value;
_81 = _79.value;
_82 = _80 >= _81;
_83 = (frost$core$Bit) {_82};
_84 = _83.value;
if (_84) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/Random.frost:63
_87 = *(&local3);
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from Random.frost:63:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_90 = _87.value;
_91 = param1.value;
_92 = _90 % _91;
_93 = (frost$core$Int) {_92};
*(&local0) = _93;
goto block3;
block18:;
goto block14;
block15:;
goto block20;
block20:;
block3:;
_10 = *(&local0);
_11 = (frost$core$Int) {0u};
_12 = _10.value;
_13 = _11.value;
_14 = _12 >= _13;
_15 = (frost$core$Bit) {_14};
_16 = _15.value;
if (_16) goto block4; else goto block5;
block4:;
_18 = *(&local0);
_19 = _18.value;
_20 = param1.value;
_21 = _19 < _20;
_22 = (frost$core$Bit) {_21};
*(&local1) = _22;
goto block6;
block5:;
*(&local1) = _15;
goto block6;
block6:;
_27 = *(&local1);
_31 = _27.value;
if (_31) goto block7; else goto block8;
block7:;
_33 = *(&local0);
return _33;
block8:;
_28 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _28, &$s11);
abort(); // unreachable

}
frost$core$Real32 frost$math$Random$real32$R$frost$core$Real32(void* rawSelf) {
frost$math$Random* param0 = (frost$math$Random*) rawSelf;

frost$core$Real32 local0;
frost$core$Bit local1;
$fn12 _29;
frost$core$Int32 _30;
int32_t _33;
uint32_t _34;
frost$core$UInt32 _35;
frost$core$UInt32 _37;
uint32_t _40;
uint32_t _41;
uint32_t _42;
frost$core$UInt32 _43;
frost$core$UInt32 _45;
uint32_t _48;
float _49;
uint32_t _50;
float _51;
float _52;
frost$core$Real32 _53;
frost$core$Real32 _0;
frost$core$Real64 _1;
frost$core$Real64 _2;
double _3;
double _4;
bool _5;
frost$core$Bit _6;
bool _7;
frost$core$Real32 _9;
frost$core$Real64 _10;
frost$core$Real64 _11;
double _12;
double _13;
bool _14;
frost$core$Bit _15;
frost$core$Bit _20;
bool _24;
frost$core$Real32 _26;
frost$core$Int _21;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/Random.frost:76
ITable* $tmp13 = param0->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp13 = $tmp13->next;
}
_29 = $tmp13->methods[1];
_30 = _29(param0);
// begin inline call to function frost.core.Int32.get_asUInt32():frost.core.UInt32 from Random.frost:76:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1002
_33 = _30.value;
_34 = ((uint32_t) _33);
_35 = (frost$core$UInt32) {_34};
_37 = (frost$core$UInt32) {8u};
// begin inline call to function frost.core.UInt32.>>(other:frost.core.UInt32):frost.core.UInt32 from Random.frost:76:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:382
_40 = _35.value;
_41 = _37.value;
_42 = _40 >> _41;
_43 = (frost$core$UInt32) {_42};
_45 = (frost$core$UInt32) {16777216u};
// begin inline call to function frost.core.UInt32./(other:frost.core.UInt32):frost.core.Real32 from Random.frost:76:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:239
_48 = _43.value;
_49 = ((float) _48);
_50 = _45.value;
_51 = ((float) _50);
_52 = _49 / _51;
_53 = (frost$core$Real32) {_52};
*(&local0) = _53;
_0 = *(&local0);
_1 = frost$core$Real64$init$frost$core$Real32(_0);
_2 = (frost$core$Real64) {0.0};
_3 = _1.value;
_4 = _2.value;
_5 = _3 >= _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block2; else goto block3;
block2:;
_9 = *(&local0);
_10 = frost$core$Real64$init$frost$core$Real32(_9);
_11 = (frost$core$Real64) {1.0};
_12 = _10.value;
_13 = _11.value;
_14 = _12 < _13;
_15 = (frost$core$Bit) {_14};
*(&local1) = _15;
goto block4;
block3:;
*(&local1) = _6;
goto block4;
block4:;
_20 = *(&local1);
_24 = _20.value;
if (_24) goto block5; else goto block6;
block5:;
_26 = *(&local0);
return _26;
block6:;
_21 = (frost$core$Int) {75u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _21, &$s15);
abort(); // unreachable

}
frost$core$Real64 frost$math$Random$real64$R$frost$core$Real64(void* rawSelf) {
frost$math$Random* param0 = (frost$math$Random*) rawSelf;

frost$core$Real64 local0;
frost$core$Bit local1;
$fn16 _27;
frost$core$Int64 _28;
int64_t _31;
uint64_t _32;
frost$core$UInt64 _33;
frost$core$UInt64 _35;
uint64_t _38;
uint64_t _39;
uint64_t _40;
frost$core$UInt64 _41;
frost$core$UInt64 _43;
uint64_t _46;
double _47;
uint64_t _48;
double _49;
double _50;
frost$core$Real64 _51;
frost$core$Real64 _0;
frost$core$Real64 _1;
double _2;
double _3;
bool _4;
frost$core$Bit _5;
bool _6;
frost$core$Real64 _8;
frost$core$Real64 _9;
double _10;
double _11;
bool _12;
frost$core$Bit _13;
frost$core$Bit _18;
bool _22;
frost$core$Real64 _24;
frost$core$Int _19;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/Random.frost:87
ITable* $tmp17 = param0->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp17 = $tmp17->next;
}
_27 = $tmp17->methods[2];
_28 = _27(param0);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Random.frost:87:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
_31 = _28.value;
_32 = ((uint64_t) _31);
_33 = (frost$core$UInt64) {_32};
_35 = (frost$core$UInt64) {11u};
// begin inline call to function frost.core.UInt64.>>(other:frost.core.UInt64):frost.core.UInt64 from Random.frost:87:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:202
_38 = _33.value;
_39 = _35.value;
_40 = _38 >> _39;
_41 = (frost$core$UInt64) {_40};
_43 = (frost$core$UInt64) {9007199254740992u};
// begin inline call to function frost.core.UInt64./(other:frost.core.UInt64):frost.core.Real64 from Random.frost:87:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:137
_46 = _41.value;
_47 = ((double) _46);
_48 = _43.value;
_49 = ((double) _48);
_50 = _47 / _49;
_51 = (frost$core$Real64) {_50};
*(&local0) = _51;
_0 = *(&local0);
_1 = (frost$core$Real64) {0.0};
_2 = _0.value;
_3 = _1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block2; else goto block3;
block2:;
_8 = *(&local0);
_9 = (frost$core$Real64) {1.0};
_10 = _8.value;
_11 = _9.value;
_12 = _10 < _11;
_13 = (frost$core$Bit) {_12};
*(&local1) = _13;
goto block4;
block3:;
*(&local1) = _5;
goto block4;
block4:;
_18 = *(&local1);
_22 = _18.value;
if (_22) goto block5; else goto block6;
block5:;
_24 = *(&local0);
return _24;
block6:;
_19 = (frost$core$Int) {86u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _19, &$s19);
abort(); // unreachable

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




