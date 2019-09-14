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
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/collections/HashKey.h"

__attribute__((weak)) frost$core$Object* frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP$shim(frost$collections$HashMap$EntryIterator* p0) {
    frost$core$Tuple2* result = frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$HashMap$EntryIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$HashMap$EntryIterator$get_done$R$frost$core$Bit, frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$HashMap$EntryIterator$class_type frost$collections$HashMap$EntryIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$HashMap$EntryIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$HashMap$EntryIterator$cleanup, frost$collections$HashMap$EntryIterator$get_done$R$frost$core$Bit, frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP$shim} };

typedef frost$core$Bit (*$fn2)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 39, 1175059209093268818, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x29", 165, 6278041426078439422, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e", 273, 4111340678981763157, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e", 273, 4111340678981763157, NULL };

void frost$collections$HashMap$EntryIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$GT(void* rawSelf, frost$collections$HashMap* param1) {
frost$collections$HashMap$EntryIterator* param0 = (frost$collections$HashMap$EntryIterator*) rawSelf;

frost$collections$HashMap$EntryIterator* _1;
frost$core$Int _2;
frost$core$Int* _3;
frost$collections$HashMap$EntryIterator* _6;
frost$core$Object* _7;
frost$collections$HashMap$Entry** _9;
frost$collections$HashMap$Entry* _10;
frost$core$Object* _11;
frost$collections$HashMap$Entry** _13;
frost$collections$HashMap$EntryIterator* _16;
frost$core$Object* _17;
frost$collections$HashMap** _19;
frost$collections$HashMap* _20;
frost$core$Object* _21;
frost$collections$HashMap** _23;
frost$collections$HashMap$EntryIterator* _27;
frost$core$Int* _28;
frost$core$Int _29;
frost$collections$HashMap* _30;
frost$core$Int* _31;
frost$core$Int _32;
int64_t _33;
int64_t _34;
bool _35;
frost$core$Bit _36;
bool _37;
frost$collections$HashMap* _39;
frost$collections$HashMap$Entry*** _40;
frost$collections$HashMap$Entry** _41;
frost$collections$HashMap$Entry** _42;
frost$collections$HashMap$EntryIterator* _43;
frost$core$Int* _44;
frost$core$Int _45;
frost$core$Int64 _46;
int64_t _47;
frost$collections$HashMap$Entry* _48;
bool _49;
frost$core$Bit _50;
bool _51;
frost$collections$HashMap$EntryIterator* _54;
frost$core$Int* _55;
frost$core$Int _56;
frost$core$Int _57;
int64_t _58;
int64_t _59;
int64_t _60;
frost$core$Int _61;
frost$core$Int* _62;
frost$collections$HashMap$EntryIterator* _66;
frost$core$Int* _67;
frost$core$Int _68;
frost$collections$HashMap* _69;
frost$core$Int* _70;
frost$core$Int _71;
int64_t _72;
int64_t _73;
bool _74;
frost$core$Bit _75;
bool _76;
frost$collections$HashMap$EntryIterator* _79;
frost$collections$HashMap* _80;
frost$collections$HashMap$Entry*** _81;
frost$collections$HashMap$Entry** _82;
frost$collections$HashMap$Entry** _83;
frost$collections$HashMap$EntryIterator* _84;
frost$core$Int* _85;
frost$core$Int _86;
frost$core$Int64 _87;
int64_t _88;
frost$collections$HashMap$Entry* _89;
frost$core$Object* _90;
frost$collections$HashMap$Entry** _92;
frost$collections$HashMap$Entry* _93;
frost$core$Object* _94;
frost$collections$HashMap$Entry** _96;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:43
_1 = param0;
_2 = (frost$core$Int) {0u};
_3 = &_1->bucket;
*_3 = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:44
_6 = param0;
_7 = ((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = &_6->entry;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = &_6->entry;
*_13 = ((frost$collections$HashMap$Entry*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:47
_16 = param0;
_17 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = &_16->map;
_20 = *_19;
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = &_16->map;
*_23 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:48
goto block1;
block1:;
_27 = param0;
_28 = &_27->bucket;
_29 = *_28;
_30 = param1;
_31 = &_30->bucketCount;
_32 = *_31;
_33 = _29.value;
_34 = _32.value;
_35 = _33 < _34;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block4; else goto block3;
block4:;
_39 = param1;
_40 = &_39->contents;
_41 = *_40;
_42 = _41;
_43 = param0;
_44 = &_43->bucket;
_45 = *_44;
_46 = frost$core$Int64$init$frost$core$Int(_45);
_47 = _46.value;
_48 = _42[_47];
_49 = _48 == NULL;
_50 = (frost$core$Bit) {_49};
_51 = _50.value;
if (_51) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:49
_54 = param0;
_55 = &_54->bucket;
_56 = *_55;
_57 = (frost$core$Int) {1u};
_58 = _56.value;
_59 = _57.value;
_60 = _58 + _59;
_61 = (frost$core$Int) {_60};
_62 = &_54->bucket;
*_62 = _61;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:51
_66 = param0;
_67 = &_66->bucket;
_68 = *_67;
_69 = param1;
_70 = &_69->bucketCount;
_71 = *_70;
_72 = _68.value;
_73 = _71.value;
_74 = _72 < _73;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:52
_79 = param0;
_80 = param1;
_81 = &_80->contents;
_82 = *_81;
_83 = _82;
_84 = param0;
_85 = &_84->bucket;
_86 = *_85;
_87 = frost$core$Int64$init$frost$core$Int(_86);
_88 = _87.value;
_89 = _83[_88];
_90 = ((frost$core$Object*) _89);
frost$core$Frost$ref$frost$core$Object$Q(_90);
_92 = &_79->entry;
_93 = *_92;
_94 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_94);
_96 = &_79->entry;
*_96 = _89;
goto block6;
block6:;
return;

}
frost$core$Bit frost$collections$HashMap$EntryIterator$get_done$R$frost$core$Bit(void* rawSelf) {
frost$collections$HashMap$EntryIterator* param0 = (frost$collections$HashMap$EntryIterator*) rawSelf;

frost$core$Bit local0;
frost$collections$HashMap$EntryIterator* _1;
frost$core$Int* _2;
frost$core$Int _3;
frost$collections$HashMap$EntryIterator* _4;
frost$collections$HashMap** _5;
frost$collections$HashMap* _6;
frost$collections$HashMap* _7;
frost$core$Int* _8;
frost$core$Int _9;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
bool _17;
frost$collections$HashMap$EntryIterator* _19;
frost$collections$HashMap$Entry** _20;
frost$collections$HashMap$Entry* _21;
bool _22;
frost$core$Bit _23;
frost$core$Bit _28;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:58
_1 = param0;
_2 = &_1->bucket;
_3 = *_2;
_4 = param0;
_5 = &_4->map;
_6 = *_5;
_7 = _6;
_8 = &_7->bucketCount;
_9 = *_8;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HashMap.frost:58:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_12 = _3.value;
_13 = _9.value;
_14 = _12 == _13;
_15 = (frost$core$Bit) {_14};
_17 = _15.value;
if (_17) goto block2; else goto block3;
block2:;
_19 = param0;
_20 = &_19->entry;
_21 = *_20;
_22 = _21 == NULL;
_23 = (frost$core$Bit) {_22};
*(&local0) = _23;
goto block4;
block3:;
*(&local0) = _15;
goto block4;
block4:;
_28 = *(&local0);
return _28;

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
frost$collections$HashMap$EntryIterator* _15;
frost$collections$HashMap$Entry** _16;
frost$collections$HashMap$Entry* _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$core$Int _22;
frost$collections$HashMap$EntryIterator* _26;
frost$core$Int* _27;
frost$core$Int _28;
frost$collections$HashMap$EntryIterator* _29;
frost$collections$HashMap** _30;
frost$collections$HashMap* _31;
frost$collections$HashMap* _32;
frost$core$Int* _33;
frost$core$Int _34;
int64_t _35;
int64_t _36;
bool _37;
frost$core$Bit _38;
bool _39;
frost$core$Int _41;
frost$collections$HashMap$EntryIterator* _45;
frost$collections$HashMap$Entry** _46;
frost$collections$HashMap$Entry* _47;
bool _48;
frost$core$Bit _49;
bool _50;
frost$core$Int _52;
frost$collections$HashMap$Entry* _55;
frost$core$Object* _57;
frost$collections$HashMap$Entry* _59;
frost$core$Object* _60;
frost$collections$HashMap$EntryIterator* _64;
frost$collections$HashMap$EntryIterator* _65;
frost$collections$HashMap$Entry** _66;
frost$collections$HashMap$Entry* _67;
bool _68;
frost$core$Bit _69;
bool _70;
frost$core$Int _72;
frost$collections$HashMap$Entry* _75;
frost$collections$HashMap$Entry* _76;
frost$collections$HashMap$Entry** _77;
frost$collections$HashMap$Entry* _78;
frost$collections$HashMap$Entry* _79;
frost$core$Object* _80;
frost$collections$HashMap$Entry** _82;
frost$collections$HashMap$Entry* _83;
frost$core$Object* _84;
frost$collections$HashMap$Entry** _86;
frost$collections$HashMap$EntryIterator* _90;
frost$collections$HashMap$Entry** _91;
frost$collections$HashMap$Entry* _92;
bool _93;
frost$core$Bit _94;
bool _95;
frost$collections$HashMap$EntryIterator* _98;
frost$core$Int* _99;
frost$core$Int _100;
frost$core$Int _101;
int64_t _102;
int64_t _103;
int64_t _104;
frost$core$Int _105;
frost$core$Int* _106;
frost$collections$HashMap$EntryIterator* _109;
frost$core$Int* _110;
frost$core$Int _111;
frost$collections$HashMap$EntryIterator* _112;
frost$collections$HashMap** _113;
frost$collections$HashMap* _114;
frost$collections$HashMap* _115;
frost$core$Int* _116;
frost$core$Int _117;
int64_t _120;
int64_t _121;
bool _122;
frost$core$Bit _123;
bool _125;
frost$collections$HashMap$EntryIterator* _130;
frost$collections$HashMap$EntryIterator* _131;
frost$collections$HashMap** _132;
frost$collections$HashMap* _133;
frost$collections$HashMap* _134;
frost$collections$HashMap$Entry*** _135;
frost$collections$HashMap$Entry** _136;
frost$collections$HashMap$Entry** _137;
frost$collections$HashMap$EntryIterator* _138;
frost$core$Int* _139;
frost$core$Int _140;
frost$core$Int64 _141;
int64_t _142;
frost$collections$HashMap$Entry* _143;
frost$core$Object* _144;
frost$collections$HashMap$Entry** _146;
frost$collections$HashMap$Entry* _147;
frost$core$Object* _148;
frost$collections$HashMap$Entry** _150;
frost$core$Tuple2* _154;
frost$core$Tuple2* _155;
frost$collections$HashMap$Entry* _156;
frost$collections$HashMap$Entry* _157;
frost$collections$HashKey** _158;
frost$collections$HashKey* _159;
frost$collections$HashKey* _160;
frost$core$Object* _161;
frost$collections$HashMap$Entry* _162;
frost$collections$HashMap$Entry* _163;
frost$core$Object** _164;
frost$core$Object* _165;
frost$core$Object* _166;
frost$core$Object* _167;
frost$core$Tuple2* _169;
frost$core$Object* _170;
frost$core$Object* _172;
frost$collections$HashMap$Entry* _174;
frost$core$Object* _175;
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
_15 = param0;
_16 = &_15->entry;
_17 = *_16;
_18 = _17 != NULL;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block4; else goto block5;
block5:;
_22 = (frost$core$Int) {63u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s6, _22);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:64
_26 = param0;
_27 = &_26->bucket;
_28 = *_27;
_29 = param0;
_30 = &_29->map;
_31 = *_30;
_32 = _31;
_33 = &_32->bucketCount;
_34 = *_33;
_35 = _28.value;
_36 = _34.value;
_37 = _35 < _36;
_38 = (frost$core$Bit) {_37};
_39 = _38.value;
if (_39) goto block6; else goto block7;
block7:;
_41 = (frost$core$Int) {64u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s7, _41);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:65
_45 = param0;
_46 = &_45->entry;
_47 = *_46;
_48 = _47 != NULL;
_49 = (frost$core$Bit) {_48};
_50 = _49.value;
if (_50) goto block8; else goto block9;
block9:;
_52 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _52, &$s9);
abort(); // unreachable
block8:;
_55 = _47;
*(&local0) = ((frost$collections$HashMap$Entry*) NULL);
_57 = ((frost$core$Object*) _55);
frost$core$Frost$ref$frost$core$Object$Q(_57);
_59 = *(&local0);
_60 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_60);
*(&local0) = _55;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:66
_64 = param0;
_65 = param0;
_66 = &_65->entry;
_67 = *_66;
_68 = _67 != NULL;
_69 = (frost$core$Bit) {_68};
_70 = _69.value;
if (_70) goto block10; else goto block11;
block11:;
_72 = (frost$core$Int) {66u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _72, &$s11);
abort(); // unreachable
block10:;
_75 = _67;
_76 = _75;
_77 = &_76->next;
_78 = *_77;
_79 = _78;
_80 = ((frost$core$Object*) _79);
frost$core$Frost$ref$frost$core$Object$Q(_80);
_82 = &_64->entry;
_83 = *_82;
_84 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_84);
_86 = &_64->entry;
*_86 = _79;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:67
goto block12;
block12:;
_90 = param0;
_91 = &_90->entry;
_92 = *_91;
_93 = _92 == NULL;
_94 = (frost$core$Bit) {_93};
_95 = _94.value;
if (_95) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:68
_98 = param0;
_99 = &_98->bucket;
_100 = *_99;
_101 = (frost$core$Int) {1u};
_102 = _100.value;
_103 = _101.value;
_104 = _102 + _103;
_105 = (frost$core$Int) {_104};
_106 = &_98->bucket;
*_106 = _105;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:69
_109 = param0;
_110 = &_109->bucket;
_111 = *_110;
_112 = param0;
_113 = &_112->map;
_114 = *_113;
_115 = _114;
_116 = &_115->bucketCount;
_117 = *_116;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HashMap.frost:69:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_120 = _111.value;
_121 = _117.value;
_122 = _120 == _121;
_123 = (frost$core$Bit) {_122};
_125 = _123.value;
if (_125) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:70
goto block14;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:72
_130 = param0;
_131 = param0;
_132 = &_131->map;
_133 = *_132;
_134 = _133;
_135 = &_134->contents;
_136 = *_135;
_137 = _136;
_138 = param0;
_139 = &_138->bucket;
_140 = *_139;
_141 = frost$core$Int64$init$frost$core$Int(_140);
_142 = _141.value;
_143 = _137[_142];
_144 = ((frost$core$Object*) _143);
frost$core$Frost$ref$frost$core$Object$Q(_144);
_146 = &_130->entry;
_147 = *_146;
_148 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_148);
_150 = &_130->entry;
*_150 = _143;
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:74
_154 = (frost$core$Tuple2*) frostObjectAlloc(sizeof(frost$core$Tuple2), (frost$core$Class*) &frost$core$Tuple2$class);
_155 = _154;
_156 = *(&local0);
_157 = _156;
_158 = &_157->key;
_159 = *_158;
_160 = _159;
_161 = ((frost$core$Object*) _160);
_162 = *(&local0);
_163 = _162;
_164 = &_163->value;
_165 = *_164;
_166 = _165;
_167 = _166;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1(_155, _161, _167);
_169 = _154;
_170 = ((frost$core$Object*) _169);
frost$core$Frost$ref$frost$core$Object$Q(_170);
_172 = ((frost$core$Object*) _154);
frost$core$Frost$unref$frost$core$Object$Q(_172);
_174 = *(&local0);
_175 = ((frost$core$Object*) _174);
frost$core$Frost$unref$frost$core$Object$Q(_175);
*(&local0) = ((frost$collections$HashMap$Entry*) NULL);
return _169;

}
void frost$collections$HashMap$EntryIterator$cleanup(void* rawSelf) {
frost$collections$HashMap$EntryIterator* param0 = (frost$collections$HashMap$EntryIterator*) rawSelf;

frost$core$Object* _1;
frost$collections$HashMap$EntryIterator* _3;
frost$collections$HashMap** _4;
frost$collections$HashMap* _5;
frost$core$Object* _6;
frost$collections$HashMap$EntryIterator* _8;
frost$collections$HashMap$Entry** _9;
frost$collections$HashMap$Entry* _10;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:41
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->map;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = param0;
_9 = &_8->entry;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return;

}






