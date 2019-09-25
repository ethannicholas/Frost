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

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$String* frost$core$String$Match$get_asString$R$frost$core$String$shim(frost$core$String$Match* p0) {
    frost$core$String* result = frost$core$String$Match$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$core$String$Match$cleanup$shim(frost$core$String$Match* p0) {
    frost$core$String$Match$cleanup(p0);

}

static frost$core$String $s1;
frost$core$String$Match$class_type frost$core$String$Match$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$String$Match$get_asString$R$frost$core$String$shim, frost$core$String$Match$cleanup$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68", 23, -7089004959739480374, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x74\x63\x68\x28", 6, -3203041817595402214, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };

void frost$core$String$Match$init$frost$core$Matcher(void* rawSelf, frost$core$Matcher* param1) {
frost$core$String$Match* param0 = (frost$core$String$Match*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$core$String$Index _1;
frost$core$String$Index* _2;
frost$core$String$Index _5;
frost$core$String$Index* _6;
frost$collections$Array* _9;
frost$core$Object* _12;
frost$collections$Array* _14;
frost$core$Object* _15;
frost$core$Object* _18;
frost$core$Int _21;
frost$core$Int _22;
frost$core$Bit _23;
frost$core$Range$LTfrost$core$Int$GT _24;
frost$core$Int _25;
frost$core$Int _27;
frost$core$Bit _28;
bool _29;
frost$core$Int _30;
int64_t _32;
int64_t _33;
bool _34;
frost$core$Bit _35;
bool _36;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
frost$collections$Array* _45;
frost$core$Int _46;
frost$core$String* _47;
bool _48;
frost$core$Bit _49;
bool _50;
frost$core$Int _52;
frost$core$String* _55;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$Int _61;
int64_t _62;
int64_t _63;
int64_t _64;
frost$core$Int _65;
int64_t _67;
int64_t _68;
bool _69;
frost$core$Bit _70;
bool _71;
int64_t _73;
int64_t _74;
bool _75;
frost$core$Bit _76;
bool _77;
int64_t _79;
int64_t _80;
int64_t _81;
frost$core$Int _82;
frost$collections$Array* _86;
frost$collections$ImmutableArray* _87;
frost$core$Object* _88;
frost$collections$ImmutableArray** _90;
frost$collections$ImmutableArray* _91;
frost$core$Object* _92;
frost$collections$ImmutableArray** _94;
frost$core$Object* _96;
frost$collections$Array* _98;
frost$core$Object* _99;
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
frost$collections$Array$init(_9);
*(&local0) = ((frost$collections$Array*) NULL);
_12 = ((frost$core$Object*) _9);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = *(&local0);
_15 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_15);
*(&local0) = _9;
_18 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_18);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:272
_21 = (frost$core$Int) {0u};
frost$core$Matcher$get_groupCount$R$frost$core$Int(&_22, param1);
_23 = (frost$core$Bit) {false};
_24 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_21, _22, _23);
_25 = _24.min;
*(&local1) = _25;
_27 = _24.max;
_28 = _24.inclusive;
_29 = _28.value;
_30 = (frost$core$Int) {1u};
if (_29) goto block4; else goto block5;
block4:;
_32 = _25.value;
_33 = _27.value;
_34 = _32 <= _33;
_35 = (frost$core$Bit) {_34};
_36 = _35.value;
if (_36) goto block1; else goto block2;
block5:;
_38 = _25.value;
_39 = _27.value;
_40 = _38 < _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:273
_45 = *(&local0);
_46 = *(&local1);
_47 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q(param1, _46);
_48 = _47 != NULL;
_49 = (frost$core$Bit) {_48};
_50 = _49.value;
if (_50) goto block6; else goto block7;
block7:;
_52 = (frost$core$Int) {273u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _52, &$s3);
abort(); // unreachable
block6:;
_55 = _47;
_56 = ((frost$core$Object*) _55);
frost$collections$Array$add$frost$collections$Array$T(_45, _56);
_58 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_61 = *(&local1);
_62 = _27.value;
_63 = _61.value;
_64 = _62 - _63;
_65 = (frost$core$Int) {_64};
if (_29) goto block9; else goto block10;
block9:;
_67 = _65.value;
_68 = _30.value;
_69 = _67 >= _68;
_70 = (frost$core$Bit) {_69};
_71 = _70.value;
if (_71) goto block8; else goto block2;
block10:;
_73 = _65.value;
_74 = _30.value;
_75 = _73 > _74;
_76 = (frost$core$Bit) {_75};
_77 = _76.value;
if (_77) goto block8; else goto block2;
block8:;
_79 = _61.value;
_80 = _30.value;
_81 = _79 + _80;
_82 = (frost$core$Int) {_81};
*(&local1) = _82;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:275
_86 = *(&local0);
_87 = frost$collections$ImmutableArray$from$frost$collections$Array$LTfrost$collections$ImmutableArray$T$GT$R$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$T$GT(_86);
_88 = ((frost$core$Object*) _87);
frost$core$Frost$ref$frost$core$Object$Q(_88);
_90 = &param0->groups;
_91 = *_90;
_92 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_92);
_94 = &param0->groups;
*_94 = _87;
_96 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_96);
_98 = *(&local0);
_99 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_99);
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
frost$core$String* frost$core$String$Match$get_asString$R$frost$core$String(void* rawSelf) {
frost$core$String$Match* param0 = (frost$core$String$Match*) rawSelf;

frost$collections$ImmutableArray** _1;
frost$collections$ImmutableArray* _2;
frost$core$Int _3;
frost$core$Immutable* _4;
frost$core$String* _5;
frost$core$String* _6;
frost$core$String* _7;
frost$core$Object* _8;
frost$core$Object* _10;
frost$core$Object* _12;
frost$core$Object* _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:280
_1 = &param0->groups;
_2 = *_1;
_3 = (frost$core$Int) {0u};
_4 = frost$collections$ImmutableArray$$IDX$frost$core$Int$R$frost$collections$ImmutableArray$T(_2, _3);
_5 = ((frost$core$String*) _4);
_6 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4, _5);
_7 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_6, &$s5);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_14);
return _7;

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

