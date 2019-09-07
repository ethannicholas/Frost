#include "frost/math/XorShift128Plus.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/math/Random.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } frost$math$XorShift128Plus$_frost$math$Random = { (frost$core$Class*) &frost$math$Random$class, NULL, { frost$math$Random$bit$R$frost$core$Bit, frost$math$Random$int32$R$frost$core$Int32, frost$math$XorShift128Plus$int64$R$frost$core$Int64, frost$math$Random$int$frost$core$Int$R$frost$core$Int, frost$math$Random$real32$R$frost$core$Real32, frost$math$Random$real64$R$frost$core$Real64} };

static frost$core$String $s1;
frost$math$XorShift128Plus$class_type frost$math$XorShift128Plus$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$math$XorShift128Plus$_frost$math$Random, { frost$core$Object$get_asString$R$frost$core$String, frost$math$XorShift128Plus$cleanup, frost$math$XorShift128Plus$int64$R$frost$core$Int64} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x58\x6f\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6c\x75\x73", 26, 4029058821734976825, NULL };

void frost$math$XorShift128Plus$init$frost$core$Int64(frost$math$XorShift128Plus* param0, frost$core$Int64 param1) {

frost$core$Int64 _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
frost$core$Int64 _6;
int64_t _7;
int64_t _8;
int64_t _9;
frost$core$Int64 _10;
frost$core$Int64* _11;
frost$core$Int64* _14;
frost$core$Int64 _15;
frost$core$Int64 _16;
int64_t _19;
int64_t _20;
bool _21;
frost$core$Bit _22;
bool _24;
frost$core$Int64 _27;
frost$core$Int64* _28;
frost$core$Int64* _32;
frost$core$Int64 _33;
int64_t _36;
int64_t _37;
frost$core$Int64 _38;
frost$core$Int64* _40;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:29
_1 = (frost$core$Int64) {6713u};
_2 = param1.value;
_3 = _1.value;
_4 = _2 * _3;
_5 = (frost$core$Int64) {_4};
_6 = (frost$core$Int64) {123456789u};
_7 = _5.value;
_8 = _6.value;
_9 = _7 + _8;
_10 = (frost$core$Int64) {_9};
_11 = &param0->state1;
*_11 = _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:30
_14 = &param0->state1;
_15 = *_14;
_16 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from XorShift128Plus.frost:30:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:245
_19 = _15.value;
_20 = _16.value;
_21 = _19 == _20;
_22 = (frost$core$Bit) {_21};
_24 = _22.value;
if (_24) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:32
_27 = (frost$core$Int64) {123456789u};
_28 = &param0->state1;
*_28 = _27;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:34
_32 = &param0->state1;
_33 = *_32;
// begin inline call to function frost.core.Int64.!!():frost.core.Int64 from XorShift128Plus.frost:34:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:172
_36 = _33.value;
_37 = !_36;
_38 = (frost$core$Int64) {_37};
_40 = &param0->state2;
*_40 = _38;
return;

}
frost$core$Int64 frost$math$XorShift128Plus$int64$R$frost$core$Int64(frost$math$XorShift128Plus* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64* _1;
frost$core$Int64 _2;
frost$core$Int64* _5;
frost$core$Int64 _6;
frost$core$Int64 _9;
frost$core$Int64* _10;
frost$core$Int64 _13;
frost$core$Int64 _14;
frost$core$Int64 _15;
int64_t _18;
int64_t _19;
int64_t _20;
frost$core$Int64 _21;
int64_t _25;
int64_t _26;
int64_t _27;
frost$core$Int64 _28;
frost$core$Int64 _32;
frost$core$Int64 _33;
int64_t _36;
int64_t _37;
int64_t _38;
frost$core$Int64 _39;
frost$core$Int64 _41;
frost$core$Int64 _42;
int64_t _45;
int64_t _46;
int64_t _47;
frost$core$Int64 _48;
int64_t _52;
int64_t _53;
int64_t _54;
frost$core$Int64 _55;
frost$core$Int64 _57;
frost$core$Int64 _58;
int64_t _61;
int64_t _62;
int64_t _63;
frost$core$Int64 _64;
int64_t _68;
int64_t _69;
int64_t _70;
frost$core$Int64 _71;
frost$core$Int64* _73;
frost$core$Int64* _76;
frost$core$Int64 _77;
frost$core$Int64 _78;
int64_t _79;
int64_t _80;
int64_t _81;
frost$core$Int64 _82;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:39
_1 = &param0->state1;
_2 = *_1;
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:40
_5 = &param0->state2;
_6 = *_5;
*(&local1) = _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:41
_9 = *(&local1);
_10 = &param0->state1;
*_10 = _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:42
_13 = *(&local0);
_14 = *(&local0);
_15 = (frost$core$Int64) {23u};
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from XorShift128Plus.frost:42:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:214
_18 = _14.value;
_19 = _15.value;
_20 = _18 << _19;
_21 = (frost$core$Int64) {_20};
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from XorShift128Plus.frost:42:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:202
_25 = _13.value;
_26 = _21.value;
_27 = _25 ^ _26;
_28 = (frost$core$Int64) {_27};
*(&local0) = _28;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:43
_32 = *(&local0);
_33 = *(&local1);
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from XorShift128Plus.frost:43:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:202
_36 = _32.value;
_37 = _33.value;
_38 = _36 ^ _37;
_39 = (frost$core$Int64) {_38};
_41 = *(&local0);
_42 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.>>(other:frost.core.Int64):frost.core.Int64 from XorShift128Plus.frost:43:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:220
_45 = _41.value;
_46 = _42.value;
_47 = _45 >> _46;
_48 = (frost$core$Int64) {_47};
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from XorShift128Plus.frost:43:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:202
_52 = _39.value;
_53 = _48.value;
_54 = _52 ^ _53;
_55 = (frost$core$Int64) {_54};
_57 = *(&local1);
_58 = (frost$core$Int64) {26u};
// begin inline call to function frost.core.Int64.>>(other:frost.core.Int64):frost.core.Int64 from XorShift128Plus.frost:43:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:220
_61 = _57.value;
_62 = _58.value;
_63 = _61 >> _62;
_64 = (frost$core$Int64) {_63};
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from XorShift128Plus.frost:43:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:202
_68 = _55.value;
_69 = _64.value;
_70 = _68 ^ _69;
_71 = (frost$core$Int64) {_70};
_73 = &param0->state2;
*_73 = _71;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:44
_76 = &param0->state2;
_77 = *_76;
_78 = *(&local1);
_79 = _77.value;
_80 = _78.value;
_81 = _79 + _80;
_82 = (frost$core$Int64) {_81};
return _82;

}
void frost$math$XorShift128Plus$cleanup(frost$math$XorShift128Plus* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:10
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






