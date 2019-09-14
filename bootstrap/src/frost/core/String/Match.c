#include "frost/core/String/Match.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Matcher.h"
#include "frost/collections/Array.h"
#include "frost/core/Int.h"
#include "frost/core/String/Index.h"
#include "frost/core/Object.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/collections/ImmutableArray.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$String* frost$core$String$Match$get_asString$R$frost$core$String$shim(frost$core$String$Match* p0) {
    frost$core$String* result = frost$core$String$Match$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$core$String$Match$cleanup$shim(frost$core$String$Match* p0) {
    frost$core$String$Match$cleanup(p0);

}

static frost$core$String $s1;
frost$core$String$Match$class_type frost$core$String$Match$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$String$Match$get_asString$R$frost$core$String$shim, frost$core$String$Match$cleanup$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68", 23, -7089004959739480374, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x28", 6, -3203041817595402214, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void frost$core$String$Match$init$frost$core$Matcher(void* rawSelf, frost$core$Matcher* param1) {
frost$core$String$Match* param0 = (frost$core$String$Match*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$core$String$Index _1;
frost$core$String$Index* _2;
frost$core$String$Index _5;
frost$core$String$Index* _6;
frost$collections$Array* _9;
frost$collections$Array* _10;
frost$core$Object* _13;
frost$collections$Array* _15;
frost$core$Object* _16;
frost$core$Object* _19;
frost$core$Int _22;
frost$core$Int _23;
frost$core$Bit _24;
frost$core$Range$LTfrost$core$Int$GT _25;
frost$core$Int _26;
frost$core$Int _28;
frost$core$Bit _29;
bool _30;
frost$core$Int _31;
int64_t _33;
int64_t _34;
bool _35;
frost$core$Bit _36;
bool _37;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
bool _43;
frost$collections$Array* _46;
frost$collections$Array* _47;
frost$core$Int _48;
frost$core$String* _49;
bool _50;
frost$core$Bit _51;
bool _52;
frost$core$Int _54;
frost$core$String* _57;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$Int _63;
int64_t _64;
int64_t _65;
int64_t _66;
frost$core$Int _67;
int64_t _69;
int64_t _70;
bool _71;
frost$core$Bit _72;
bool _73;
int64_t _75;
int64_t _76;
bool _77;
frost$core$Bit _78;
bool _79;
int64_t _81;
int64_t _82;
int64_t _83;
frost$core$Int _84;
frost$collections$Array* _88;
frost$collections$Array* _89;
frost$collections$ImmutableArray* _90;
frost$collections$ImmutableArray* _91;
frost$core$Object* _92;
frost$collections$ImmutableArray** _94;
frost$collections$ImmutableArray* _95;
frost$core$Object* _96;
frost$collections$ImmutableArray** _98;
frost$core$Object* _100;
frost$collections$Array* _102;
frost$core$Object* _103;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:269
frost$core$Matcher$get_start$R$frost$core$String$Index(&_1, param1);
_2 = &param0->start;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:270
frost$core$Matcher$get_end$R$frost$core$String$Index(&_5, param1);
_6 = &param0->end;
*_6 = _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:271
_9 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_10 = _9;
frost$collections$Array$init(_10);
*(&local0) = ((frost$collections$Array*) NULL);
_13 = ((frost$core$Object*) _9);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = *(&local0);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
*(&local0) = _9;
_19 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_19);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:272
_22 = (frost$core$Int) {0u};
frost$core$Matcher$get_groupCount$R$frost$core$Int(&_23, param1);
_24 = (frost$core$Bit) {false};
_25 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_22, _23, _24);
_26 = _25.min;
*(&local1) = _26;
_28 = _25.max;
_29 = _25.inclusive;
_30 = _29.value;
_31 = (frost$core$Int) {1u};
if (_30) goto block4; else goto block5;
block4:;
_33 = _26.value;
_34 = _28.value;
_35 = _33 <= _34;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block1; else goto block2;
block5:;
_39 = _26.value;
_40 = _28.value;
_41 = _39 < _40;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:273
_46 = *(&local0);
_47 = _46;
_48 = *(&local1);
_49 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q(param1, _48);
_50 = _49 != NULL;
_51 = (frost$core$Bit) {_50};
_52 = _51.value;
if (_52) goto block6; else goto block7;
block7:;
_54 = (frost$core$Int) {273u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _54, &$s3);
abort(); // unreachable
block6:;
_57 = _49;
_58 = ((frost$core$Object*) _57);
frost$collections$Array$add$frost$collections$Array$T(_47, _58);
_60 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_60);
_63 = *(&local1);
_64 = _28.value;
_65 = _63.value;
_66 = _64 - _65;
_67 = (frost$core$Int) {_66};
if (_30) goto block9; else goto block10;
block9:;
_69 = _67.value;
_70 = _31.value;
_71 = _69 >= _70;
_72 = (frost$core$Bit) {_71};
_73 = _72.value;
if (_73) goto block8; else goto block2;
block10:;
_75 = _67.value;
_76 = _31.value;
_77 = _75 > _76;
_78 = (frost$core$Bit) {_77};
_79 = _78.value;
if (_79) goto block8; else goto block2;
block8:;
_81 = _63.value;
_82 = _31.value;
_83 = _81 + _82;
_84 = (frost$core$Int) {_83};
*(&local1) = _84;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:275
_88 = *(&local0);
_89 = _88;
_90 = frost$collections$ImmutableArray$from$frost$collections$Array$LTfrost$collections$ImmutableArray$T$GT$R$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$T$GT(_89);
_91 = _90;
_92 = ((frost$core$Object*) _91);
frost$core$Frost$ref$frost$core$Object$Q(_92);
_94 = &param0->groups;
_95 = *_94;
_96 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_96);
_98 = &param0->groups;
*_98 = _91;
_100 = ((frost$core$Object*) _90);
frost$core$Frost$unref$frost$core$Object$Q(_100);
_102 = *(&local0);
_103 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_103);
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
frost$core$String* frost$core$String$Match$get_asString$R$frost$core$String(void* rawSelf) {
frost$core$String$Match* param0 = (frost$core$String$Match*) rawSelf;

frost$collections$ImmutableArray** _1;
frost$collections$ImmutableArray* _2;
frost$collections$ImmutableArray* _3;
frost$core$Int _4;
frost$core$Immutable* _5;
frost$core$String* _6;
frost$core$String* _7;
frost$core$String* _8;
frost$core$Object* _9;
frost$core$Object* _11;
frost$core$Object* _13;
frost$core$Object* _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:280
_1 = &param0->groups;
_2 = *_1;
_3 = _2;
_4 = (frost$core$Int) {0u};
_5 = frost$collections$ImmutableArray$$IDX$frost$core$Int$R$frost$collections$ImmutableArray$T(_3, _4);
_6 = ((frost$core$String*) _5);
_7 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4, _6);
_8 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_7, &$s5);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_15);
return _8;

}
void frost$core$String$Match$cleanup(void* rawSelf) {
frost$core$String$Match* param0 = (frost$core$String$Match*) rawSelf;

frost$core$Immutable* _1;
frost$collections$ImmutableArray** _3;
frost$collections$ImmutableArray* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:251
_1 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_1);
_3 = &param0->groups;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}

