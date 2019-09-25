#include "frost/core/String/RegexMatchIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/String/Match.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Bit.h"
#include "frost/core/Matcher.h"
#include "frost/core/Frost.h"
#include "frost/core/String/Index.h"
#include "frost/core/Int.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Object* frost$core$String$RegexMatchIterator$next$R$frost$core$String$Match$shim(frost$core$String$RegexMatchIterator* p0) {
    frost$core$String$Match* result = frost$core$String$RegexMatchIterator$next$R$frost$core$String$Match(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$core$String$RegexMatchIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$core$String$RegexMatchIterator$get_done$R$frost$core$Bit, frost$core$String$RegexMatchIterator$next$R$frost$core$String$Match$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$core$String$RegexMatchIterator$class_type frost$core$String$RegexMatchIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$String$RegexMatchIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$core$String$RegexMatchIterator$cleanup, frost$core$String$RegexMatchIterator$get_done$R$frost$core$Bit, frost$core$String$RegexMatchIterator$next$R$frost$core$String$Match$shim} };

typedef frost$core$Bit (*$fn2)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x52\x65\x67\x65\x78\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72", 36, 1261885359379399127, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x52\x65\x67\x65\x78\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68", 99, 4799945088653928830, NULL };

void frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit(void* rawSelf, frost$core$String* param1, frost$core$RegularExpression* param2, frost$core$Bit param3) {
frost$core$String$RegexMatchIterator* param0 = (frost$core$String$RegexMatchIterator*) rawSelf;

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
frost$core$String** _7;
frost$core$Bit* _10;
frost$core$Matcher* _13;
frost$core$Object* _14;
frost$core$Matcher** _16;
frost$core$Matcher* _17;
frost$core$Object* _18;
frost$core$Matcher** _20;
frost$core$Object* _22;
frost$core$Matcher** _25;
frost$core$Matcher* _26;
frost$core$Bit _27;
frost$core$Bit* _28;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:295
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->haystack;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->haystack;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:296
_10 = &param0->allowOverlaps;
*_10 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:297
_13 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param2, param1);
_14 = ((frost$core$Object*) _13);
frost$core$Frost$ref$frost$core$Object$Q(_14);
_16 = &param0->matcher;
_17 = *_16;
_18 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = &param0->matcher;
*_20 = _13;
_22 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_22);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:298
_25 = &param0->matcher;
_26 = *_25;
_27 = frost$core$Matcher$find$R$frost$core$Bit(_26);
_28 = &param0->found;
*_28 = _27;
return;

}
frost$core$Bit frost$core$String$RegexMatchIterator$get_done$R$frost$core$Bit(void* rawSelf) {
frost$core$String$RegexMatchIterator* param0 = (frost$core$String$RegexMatchIterator*) rawSelf;

frost$core$Bit* _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:303
_1 = &param0->found;
_2 = *_1;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from String.frost:303:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
return _7;

}
frost$core$String$Match* frost$core$String$RegexMatchIterator$next$R$frost$core$String$Match(void* rawSelf) {
frost$core$String$RegexMatchIterator* param0 = (frost$core$String$RegexMatchIterator*) rawSelf;

frost$core$String$Match* local0 = NULL;
frost$core$String$Index local1;
frost$collections$Iterator* _0;
$fn2 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$core$String$Match* _15;
frost$core$Matcher** _16;
frost$core$Matcher* _17;
frost$core$Object* _20;
frost$core$String$Match* _22;
frost$core$Object* _23;
frost$core$Object* _26;
frost$core$Bit* _30;
frost$core$Bit _31;
bool _32;
frost$core$String** _35;
frost$core$String* _36;
frost$core$Matcher** _37;
frost$core$Matcher* _38;
frost$core$String$Index _39;
frost$core$String$Index _40;
frost$core$Matcher** _45;
frost$core$Matcher* _46;
frost$core$String$Index _47;
frost$core$Matcher** _51;
frost$core$Matcher* _52;
frost$core$String$Index _53;
frost$core$String$Index* _56;
frost$core$Bit _59;
frost$core$Bit* _60;
frost$core$Bit* _63;
frost$core$Bit _64;
frost$core$Bit* _66;
frost$core$String$Match* _69;
frost$core$Object* _70;
frost$core$String$Match* _72;
frost$core$Object* _73;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp3 = _0->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3 = $tmp3->next;
}
_1 = $tmp3->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {307u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4, _11, &$s5);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:308
_15 = (frost$core$String$Match*) frostObjectAlloc(sizeof(frost$core$String$Match), (frost$core$Class*) &frost$core$String$Match$class);
_16 = &param0->matcher;
_17 = *_16;
frost$core$String$Match$init$frost$core$Matcher(_15, _17);
*(&local0) = ((frost$core$String$Match*) NULL);
_20 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = *(&local0);
_23 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_23);
*(&local0) = _15;
_26 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_26);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:309
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:310
_30 = &param0->allowOverlaps;
_31 = *_30;
_32 = _31.value;
if (_32) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:311
_35 = &param0->haystack;
_36 = *_35;
_37 = &param0->matcher;
_38 = *_37;
frost$core$Matcher$get_start$R$frost$core$String$Index(&_39, _38);
_40 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_36, _39);
*(&local1) = _40;
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:314
_45 = &param0->matcher;
_46 = *_45;
frost$core$Matcher$get_end$R$frost$core$String$Index(&_47, _46);
*(&local1) = _47;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:316
_51 = &param0->matcher;
_52 = *_51;
_53 = *(&local1);
// begin inline call to method frost.core.Matcher.find(start:frost.core.String.Index):frost.core.Bit from String.frost:316:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:84
_56 = &_52->replacementIndex;
*_56 = _53;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:85
frost$core$Matcher$nativeFind$frost$core$String$Index$R$frost$core$Bit(&_59, _52, _53);
_60 = &_52->matched;
*_60 = _59;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:86
_63 = &_52->matched;
_64 = *_63;
_66 = &param0->found;
*_66 = _64;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:317
_69 = *(&local0);
_70 = ((frost$core$Object*) _69);
frost$core$Frost$ref$frost$core$Object$Q(_70);
_72 = *(&local0);
_73 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_73);
*(&local0) = ((frost$core$String$Match*) NULL);
return _69;

}
void frost$core$String$RegexMatchIterator$cleanup(void* rawSelf) {
frost$core$String$RegexMatchIterator* param0 = (frost$core$String$RegexMatchIterator*) rawSelf;

frost$core$Object* _1;
frost$core$Matcher** _3;
frost$core$Matcher* _4;
frost$core$Object* _5;
frost$core$String** _7;
frost$core$String* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:285
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->matcher;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->haystack;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




