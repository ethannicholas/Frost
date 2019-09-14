#include "frost/core/String/MatchIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/String/Index.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Object* frost$core$String$MatchIterator$next$R$frost$core$String$Index$shim(frost$core$String$MatchIterator* p0) {
    frost$core$String$Index result = frost$core$String$MatchIterator$next$R$frost$core$String$Index(p0);

    frost$core$String$Index$wrapper* $tmp2;
    $tmp2 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$core$String$MatchIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$core$String$MatchIterator$get_done$R$frost$core$Bit, frost$core$String$MatchIterator$next$R$frost$core$String$Index$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$core$String$MatchIterator$class_type frost$core$String$MatchIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$String$MatchIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$core$String$MatchIterator$cleanup, frost$core$String$MatchIterator$get_done$R$frost$core$Bit, frost$core$String$MatchIterator$next$R$frost$core$String$Index$shim} };

typedef frost$core$Bit (*$fn3)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72", 31, -2195058790848912080, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 94, 4224316421190324854, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };

void frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit(void* rawSelf, frost$core$String* param1, frost$core$String* param2, frost$core$Bit param3) {
frost$core$String$MatchIterator* param0 = (frost$core$String$MatchIterator*) rawSelf;

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
frost$core$String** _7;
frost$core$Object* _10;
frost$core$String** _12;
frost$core$String* _13;
frost$core$Object* _14;
frost$core$String** _16;
frost$core$Bit* _19;
frost$core$Bit _20;
frost$core$Bit* _21;
frost$core$Int _28;
frost$core$String$Index _29;
frost$core$String$Index$nullable _31;
frost$core$String$Index$nullable* _33;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:222
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->haystack;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->haystack;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:223
_10 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->needle;
_13 = *_12;
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->needle;
*_16 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:224
_19 = &param0->allowOverlaps;
_20 = *_19;
_21 = &param0->allowOverlaps;
*_21 = _20;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:225
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:225:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:978:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_28 = (frost$core$Int) {0u};
_29 = frost$core$String$Index$init$frost$core$Int(_28);
_31 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param1, param2, _29);
_33 = &param0->nextMatch;
*_33 = _31;
return;

}
frost$core$Bit frost$core$String$MatchIterator$get_done$R$frost$core$Bit(void* rawSelf) {
frost$core$String$MatchIterator* param0 = (frost$core$String$MatchIterator*) rawSelf;

frost$core$String$Index$nullable* _1;
frost$core$String$Index$nullable _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:230
_1 = &param0->nextMatch;
_2 = *_1;
_3 = !_2.nonnull;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$String$Index frost$core$String$MatchIterator$next$R$frost$core$String$Index(void* rawSelf) {
frost$core$String$MatchIterator* param0 = (frost$core$String$MatchIterator*) rawSelf;

frost$core$String$Index$nullable local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$collections$Iterator* _0;
$fn3 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$core$String$Index$nullable* _15;
frost$core$String$Index$nullable _16;
frost$core$Bit* _20;
frost$core$Bit _21;
bool _22;
frost$core$String** _25;
frost$core$String* _26;
frost$core$String$Index _27;
frost$core$String$Index _28;
frost$core$String$Index$nullable* _33;
frost$core$String$Index$nullable _34;
bool _35;
frost$core$Bit _36;
bool _37;
frost$core$Int _39;
frost$core$String$Index _42;
frost$core$Int _43;
frost$core$String** _44;
frost$core$String* _45;
frost$core$Int* _48;
frost$core$Int _49;
int64_t _51;
int64_t _52;
int64_t _53;
frost$core$Int _54;
frost$core$Int* _57;
frost$core$String$Index _59;
frost$core$String$Index _62;
frost$core$String** _66;
frost$core$String* _67;
frost$core$String** _68;
frost$core$String* _69;
frost$core$String$Index _70;
frost$core$String$Index$nullable _71;
frost$core$String$Index$nullable* _72;
frost$core$String$Index$nullable _75;
bool _76;
frost$core$Bit _77;
bool _78;
frost$core$Int _80;
frost$core$String$Index _83;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp4 = _0->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4 = $tmp4->next;
}
_1 = $tmp4->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {234u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _11, &$s6);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:235
_15 = &param0->nextMatch;
_16 = *_15;
*(&local0) = _16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:236
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:237
_20 = &param0->allowOverlaps;
_21 = *_20;
_22 = _21.value;
if (_22) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:238
_25 = &param0->haystack;
_26 = *_25;
_27 = *(&local1);
_28 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_26, _27);
*(&local1) = _28;
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:241
_33 = &param0->nextMatch;
_34 = *_33;
_35 = _34.nonnull;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block7; else goto block8;
block8:;
_39 = (frost$core$Int) {241u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _39, &$s8);
abort(); // unreachable
block7:;
_42 = ((frost$core$String$Index) _34.value);
_43 = _42.value;
_44 = &param0->needle;
_45 = *_44;
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int from String.frost:241:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:492
_48 = &_45->_length;
_49 = *_48;
_51 = _43.value;
_52 = _49.value;
_53 = _51 + _52;
_54 = (frost$core$Int) {_53};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:241:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_57 = &(&local3)->value;
*_57 = _54;
_59 = *(&local3);
*(&local2) = _59;
_62 = *(&local2);
*(&local1) = _62;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:243
_66 = &param0->haystack;
_67 = *_66;
_68 = &param0->needle;
_69 = *_68;
_70 = *(&local1);
_71 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_67, _69, _70);
_72 = &param0->nextMatch;
*_72 = _71;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:244
_75 = *(&local0);
_76 = _75.nonnull;
_77 = (frost$core$Bit) {_76};
_78 = _77.value;
if (_78) goto block11; else goto block12;
block12:;
_80 = (frost$core$Int) {244u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _80, &$s10);
abort(); // unreachable
block11:;
_83 = ((frost$core$String$Index) _75.value);
return _83;

}
void frost$core$String$MatchIterator$cleanup(void* rawSelf) {
frost$core$String$MatchIterator* param0 = (frost$core$String$MatchIterator*) rawSelf;

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
frost$core$String** _7;
frost$core$String* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:212
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->haystack;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->needle;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}

