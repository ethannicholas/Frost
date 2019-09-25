#include "frost/collections/HashMap/EntryIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Tuple2.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Int.h"
#include "frost/collections/HashMap/Entry.h"
#include "frost/core/Bit.h"
#include "frost/unsafe/Pointer.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/collections/HashKey.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Object* frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP$shim(frost$collections$HashMap$EntryIterator* p0) {
    frost$core$Tuple2* result = frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$HashMap$EntryIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$HashMap$EntryIterator$get_done$R$frost$core$Bit, frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$HashMap$EntryIterator$class_type frost$collections$HashMap$EntryIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$HashMap$EntryIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$HashMap$EntryIterator$cleanup, frost$collections$HashMap$EntryIterator$get_done$R$frost$core$Bit, frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP$shim} };

typedef frost$core$Bit (*$fn2)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 39, 1175059209093268818, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x29", 165, 6278041426078439422, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e", 273, 4111340678981763157, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e", 273, 4111340678981763157, NULL };

void frost$collections$HashMap$EntryIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$GT(void* rawSelf, frost$collections$HashMap* param1) {
frost$collections$HashMap$EntryIterator* param0 = (frost$collections$HashMap$EntryIterator*) rawSelf;

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Object* _5;
frost$collections$HashMap$Entry** _7;
frost$collections$HashMap$Entry* _8;
frost$core$Object* _9;
frost$collections$HashMap$Entry** _11;
frost$core$Object* _14;
frost$collections$HashMap** _16;
frost$collections$HashMap* _17;
frost$core$Object* _18;
frost$collections$HashMap** _20;
frost$core$Int* _24;
frost$core$Int _25;
frost$core$Int* _26;
frost$core$Int _27;
int64_t _28;
int64_t _29;
bool _30;
frost$core$Bit _31;
bool _32;
frost$unsafe$Pointer* _34;
frost$unsafe$Pointer _35;
int64_t _36;
frost$core$Int* _37;
frost$core$Int _38;
frost$core$Int64 _39;
int64_t _40;
frost$collections$HashMap$Entry* _41;
bool _42;
frost$core$Bit _43;
bool _44;
frost$core$Int* _47;
frost$core$Int _48;
frost$core$Int _49;
int64_t _50;
int64_t _51;
int64_t _52;
frost$core$Int _53;
frost$core$Int* _54;
frost$core$Int* _58;
frost$core$Int _59;
frost$core$Int* _60;
frost$core$Int _61;
int64_t _62;
int64_t _63;
bool _64;
frost$core$Bit _65;
bool _66;
frost$unsafe$Pointer* _69;
frost$unsafe$Pointer _70;
int64_t _71;
frost$core$Int* _72;
frost$core$Int _73;
frost$core$Int64 _74;
int64_t _75;
frost$collections$HashMap$Entry* _76;
frost$core$Object* _77;
frost$collections$HashMap$Entry** _79;
frost$collections$HashMap$Entry* _80;
frost$core$Object* _81;
frost$collections$HashMap$Entry** _83;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:43
_1 = (frost$core$Int) {0u};
_2 = &param0->bucket;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:44
_5 = ((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->entry;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->entry;
*_11 = ((frost$collections$HashMap$Entry*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:47
_14 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_14);
_16 = &param0->map;
_17 = *_16;
_18 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = &param0->map;
*_20 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:48
goto block1;
block1:;
_24 = &param0->bucket;
_25 = *_24;
_26 = &param1->bucketCount;
_27 = *_26;
_28 = _25.value;
_29 = _27.value;
_30 = _28 < _29;
_31 = (frost$core$Bit) {_30};
_32 = _31.value;
if (_32) goto block4; else goto block3;
block4:;
_34 = &param1->contents;
_35 = *_34;
_36 = _35.value;
_37 = &param0->bucket;
_38 = *_37;
_39 = frost$core$Int64$init$frost$core$Int(_38);
_40 = _39.value;
_41 = ((frost$collections$HashMap$Entry**)_36)[_40];
_42 = _41 == NULL;
_43 = (frost$core$Bit) {_42};
_44 = _43.value;
if (_44) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:49
_47 = &param0->bucket;
_48 = *_47;
_49 = (frost$core$Int) {1u};
_50 = _48.value;
_51 = _49.value;
_52 = _50 + _51;
_53 = (frost$core$Int) {_52};
_54 = &param0->bucket;
*_54 = _53;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:51
_58 = &param0->bucket;
_59 = *_58;
_60 = &param1->bucketCount;
_61 = *_60;
_62 = _59.value;
_63 = _61.value;
_64 = _62 < _63;
_65 = (frost$core$Bit) {_64};
_66 = _65.value;
if (_66) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:52
_69 = &param1->contents;
_70 = *_69;
_71 = _70.value;
_72 = &param0->bucket;
_73 = *_72;
_74 = frost$core$Int64$init$frost$core$Int(_73);
_75 = _74.value;
_76 = ((frost$collections$HashMap$Entry**)_71)[_75];
_77 = ((frost$core$Object*) _76);
frost$core$Frost$ref$frost$core$Object$Q(_77);
_79 = &param0->entry;
_80 = *_79;
_81 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_81);
_83 = &param0->entry;
*_83 = _76;
goto block6;
block6:;
return;

}
frost$core$Bit frost$collections$HashMap$EntryIterator$get_done$R$frost$core$Bit(void* rawSelf) {
frost$collections$HashMap$EntryIterator* param0 = (frost$collections$HashMap$EntryIterator*) rawSelf;

frost$core$Bit local0;
frost$core$Int* _1;
frost$core$Int _2;
frost$collections$HashMap** _3;
frost$collections$HashMap* _4;
frost$core$Int* _5;
frost$core$Int _6;
int64_t _9;
int64_t _10;
bool _11;
frost$core$Bit _12;
bool _14;
frost$collections$HashMap$Entry** _16;
frost$collections$HashMap$Entry* _17;
bool _18;
frost$core$Bit _19;
frost$core$Bit _24;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:58
_1 = &param0->bucket;
_2 = *_1;
_3 = &param0->map;
_4 = *_3;
_5 = &_4->bucketCount;
_6 = *_5;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HashMap.frost:58:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_9 = _2.value;
_10 = _6.value;
_11 = _9 == _10;
_12 = (frost$core$Bit) {_11};
_14 = _12.value;
if (_14) goto block2; else goto block3;
block2:;
_16 = &param0->entry;
_17 = *_16;
_18 = _17 == NULL;
_19 = (frost$core$Bit) {_18};
*(&local0) = _19;
goto block4;
block3:;
*(&local0) = _12;
goto block4;
block4:;
_24 = *(&local0);
return _24;

}
frost$core$Tuple2* frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP(void* rawSelf) {
frost$collections$HashMap$EntryIterator* param0 = (frost$collections$HashMap$EntryIterator*) rawSelf;

frost$collections$HashMap$Entry* local0 = NULL;
frost$collections$Iterator* _0;
$fn2 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$collections$HashMap$Entry** _15;
frost$collections$HashMap$Entry* _16;
bool _17;
frost$core$Bit _18;
bool _19;
frost$core$Int _21;
frost$core$Int* _25;
frost$core$Int _26;
frost$collections$HashMap** _27;
frost$collections$HashMap* _28;
frost$core$Int* _29;
frost$core$Int _30;
int64_t _31;
int64_t _32;
bool _33;
frost$core$Bit _34;
bool _35;
frost$core$Int _37;
frost$collections$HashMap$Entry** _41;
frost$collections$HashMap$Entry* _42;
bool _43;
frost$core$Bit _44;
bool _45;
frost$core$Int _47;
frost$collections$HashMap$Entry* _50;
frost$core$Object* _52;
frost$collections$HashMap$Entry* _54;
frost$core$Object* _55;
frost$collections$HashMap$Entry** _59;
frost$collections$HashMap$Entry* _60;
bool _61;
frost$core$Bit _62;
bool _63;
frost$core$Int _65;
frost$collections$HashMap$Entry* _68;
frost$collections$HashMap$Entry** _69;
frost$collections$HashMap$Entry* _70;
frost$collections$HashMap$Entry* _71;
frost$core$Object* _72;
frost$collections$HashMap$Entry** _74;
frost$collections$HashMap$Entry* _75;
frost$core$Object* _76;
frost$collections$HashMap$Entry** _78;
frost$collections$HashMap$Entry** _82;
frost$collections$HashMap$Entry* _83;
bool _84;
frost$core$Bit _85;
bool _86;
frost$core$Int* _89;
frost$core$Int _90;
frost$core$Int _91;
int64_t _92;
int64_t _93;
int64_t _94;
frost$core$Int _95;
frost$core$Int* _96;
frost$core$Int* _99;
frost$core$Int _100;
frost$collections$HashMap** _101;
frost$collections$HashMap* _102;
frost$core$Int* _103;
frost$core$Int _104;
int64_t _107;
int64_t _108;
bool _109;
frost$core$Bit _110;
bool _112;
frost$collections$HashMap** _117;
frost$collections$HashMap* _118;
frost$unsafe$Pointer* _119;
frost$unsafe$Pointer _120;
int64_t _121;
frost$core$Int* _122;
frost$core$Int _123;
frost$core$Int64 _124;
int64_t _125;
frost$collections$HashMap$Entry* _126;
frost$core$Object* _127;
frost$collections$HashMap$Entry** _129;
frost$collections$HashMap$Entry* _130;
frost$core$Object* _131;
frost$collections$HashMap$Entry** _133;
frost$core$Tuple2* _137;
frost$collections$HashMap$Entry* _138;
frost$collections$HashKey** _139;
frost$collections$HashKey* _140;
frost$collections$HashKey* _141;
frost$core$Object* _142;
frost$collections$HashMap$Entry* _143;
frost$core$Object** _144;
frost$core$Object* _145;
frost$core$Object* _146;
frost$core$Object* _147;
frost$core$Tuple2* _149;
frost$core$Object* _150;
frost$core$Object* _152;
frost$collections$HashMap$Entry* _154;
frost$core$Object* _155;
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
_11 = (frost$core$Int) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4, _11, &$s5);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:63
_15 = &param0->entry;
_16 = *_15;
_17 = _16 != NULL;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block4; else goto block5;
block5:;
_21 = (frost$core$Int) {63u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s6, _21);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:64
_25 = &param0->bucket;
_26 = *_25;
_27 = &param0->map;
_28 = *_27;
_29 = &_28->bucketCount;
_30 = *_29;
_31 = _26.value;
_32 = _30.value;
_33 = _31 < _32;
_34 = (frost$core$Bit) {_33};
_35 = _34.value;
if (_35) goto block6; else goto block7;
block7:;
_37 = (frost$core$Int) {64u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s7, _37);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:65
_41 = &param0->entry;
_42 = *_41;
_43 = _42 != NULL;
_44 = (frost$core$Bit) {_43};
_45 = _44.value;
if (_45) goto block8; else goto block9;
block9:;
_47 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _47, &$s9);
abort(); // unreachable
block8:;
_50 = _42;
*(&local0) = ((frost$collections$HashMap$Entry*) NULL);
_52 = ((frost$core$Object*) _50);
frost$core$Frost$ref$frost$core$Object$Q(_52);
_54 = *(&local0);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
*(&local0) = _50;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:66
_59 = &param0->entry;
_60 = *_59;
_61 = _60 != NULL;
_62 = (frost$core$Bit) {_61};
_63 = _62.value;
if (_63) goto block10; else goto block11;
block11:;
_65 = (frost$core$Int) {66u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _65, &$s11);
abort(); // unreachable
block10:;
_68 = _60;
_69 = &_68->next;
_70 = *_69;
_71 = _70;
_72 = ((frost$core$Object*) _71);
frost$core$Frost$ref$frost$core$Object$Q(_72);
_74 = &param0->entry;
_75 = *_74;
_76 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_76);
_78 = &param0->entry;
*_78 = _71;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:67
goto block12;
block12:;
_82 = &param0->entry;
_83 = *_82;
_84 = _83 == NULL;
_85 = (frost$core$Bit) {_84};
_86 = _85.value;
if (_86) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:68
_89 = &param0->bucket;
_90 = *_89;
_91 = (frost$core$Int) {1u};
_92 = _90.value;
_93 = _91.value;
_94 = _92 + _93;
_95 = (frost$core$Int) {_94};
_96 = &param0->bucket;
*_96 = _95;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:69
_99 = &param0->bucket;
_100 = *_99;
_101 = &param0->map;
_102 = *_101;
_103 = &_102->bucketCount;
_104 = *_103;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HashMap.frost:69:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_107 = _100.value;
_108 = _104.value;
_109 = _107 == _108;
_110 = (frost$core$Bit) {_109};
_112 = _110.value;
if (_112) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:70
goto block14;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:72
_117 = &param0->map;
_118 = *_117;
_119 = &_118->contents;
_120 = *_119;
_121 = _120.value;
_122 = &param0->bucket;
_123 = *_122;
_124 = frost$core$Int64$init$frost$core$Int(_123);
_125 = _124.value;
_126 = ((frost$collections$HashMap$Entry**)_121)[_125];
_127 = ((frost$core$Object*) _126);
frost$core$Frost$ref$frost$core$Object$Q(_127);
_129 = &param0->entry;
_130 = *_129;
_131 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_131);
_133 = &param0->entry;
*_133 = _126;
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:74
_137 = (frost$core$Tuple2*) frostObjectAlloc(sizeof(frost$core$Tuple2), (frost$core$Class*) &frost$core$Tuple2$class);
_138 = *(&local0);
_139 = &_138->key;
_140 = *_139;
_141 = _140;
_142 = ((frost$core$Object*) _141);
_143 = *(&local0);
_144 = &_143->value;
_145 = *_144;
_146 = _145;
_147 = _146;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1(_137, _142, _147);
_149 = _137;
_150 = ((frost$core$Object*) _149);
frost$core$Frost$ref$frost$core$Object$Q(_150);
_152 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_152);
_154 = *(&local0);
_155 = ((frost$core$Object*) _154);
frost$core$Frost$unref$frost$core$Object$Q(_155);
*(&local0) = ((frost$collections$HashMap$Entry*) NULL);
return _149;

}
void frost$collections$HashMap$EntryIterator$cleanup(void* rawSelf) {
frost$collections$HashMap$EntryIterator* param0 = (frost$collections$HashMap$EntryIterator*) rawSelf;

frost$core$Object* _1;
frost$collections$HashMap** _3;
frost$collections$HashMap* _4;
frost$core$Object* _5;
frost$collections$HashMap$Entry** _7;
frost$collections$HashMap$Entry* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:41
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->map;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->entry;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




