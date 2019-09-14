#include "frost/collections/IdentityMap/EntryIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Tuple2.h"
#include "frost/collections/IdentityMap.h"
#include "frost/core/Int.h"
#include "frost/collections/IdentityMap/Entry.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Object* frost$collections$IdentityMap$EntryIterator$next$R$$LPfrost$collections$IdentityMap$EntryIterator$K$Cfrost$collections$IdentityMap$EntryIterator$V$RP$shim(frost$collections$IdentityMap$EntryIterator* p0) {
    frost$core$Tuple2* result = frost$collections$IdentityMap$EntryIterator$next$R$$LPfrost$collections$IdentityMap$EntryIterator$K$Cfrost$collections$IdentityMap$EntryIterator$V$RP(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$IdentityMap$EntryIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$IdentityMap$EntryIterator$get_done$R$frost$core$Bit, frost$collections$IdentityMap$EntryIterator$next$R$$LPfrost$collections$IdentityMap$EntryIterator$K$Cfrost$collections$IdentityMap$EntryIterator$V$RP$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$IdentityMap$EntryIterator$class_type frost$collections$IdentityMap$EntryIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$IdentityMap$EntryIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$IdentityMap$EntryIterator$cleanup, frost$collections$IdentityMap$EntryIterator$get_done$R$frost$core$Bit, frost$collections$IdentityMap$EntryIterator$next$R$$LPfrost$collections$IdentityMap$EntryIterator$K$Cfrost$collections$IdentityMap$EntryIterator$V$RP$shim} };

typedef frost$core$Bit (*$fn2)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 43, 2236975008322121848, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x29", 177, -4561064380209001484, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e", 297, -3226645080403128051, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 203, -4286683860171238074, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 203, -4286683860171238074, NULL };

void frost$collections$IdentityMap$EntryIterator$init$frost$collections$IdentityMap$LTfrost$collections$IdentityMap$EntryIterator$K$Cfrost$collections$IdentityMap$EntryIterator$V$GT(void* rawSelf, frost$collections$IdentityMap* param1) {
frost$collections$IdentityMap$EntryIterator* param0 = (frost$collections$IdentityMap$EntryIterator*) rawSelf;

frost$collections$IdentityMap$EntryIterator* _1;
frost$core$Int _2;
frost$core$Int* _3;
frost$collections$IdentityMap$EntryIterator* _6;
frost$core$Object* _7;
frost$collections$IdentityMap$Entry** _9;
frost$collections$IdentityMap$Entry* _10;
frost$core$Object* _11;
frost$collections$IdentityMap$Entry** _13;
frost$collections$IdentityMap$EntryIterator* _16;
frost$core$Object* _17;
frost$collections$IdentityMap** _19;
frost$collections$IdentityMap* _20;
frost$core$Object* _21;
frost$collections$IdentityMap** _23;
frost$collections$IdentityMap$EntryIterator* _27;
frost$core$Int* _28;
frost$core$Int _29;
frost$collections$IdentityMap* _30;
frost$core$Int* _31;
frost$core$Int _32;
int64_t _33;
int64_t _34;
bool _35;
frost$core$Bit _36;
bool _37;
frost$collections$IdentityMap* _39;
frost$collections$IdentityMap$Entry*** _40;
frost$collections$IdentityMap$Entry** _41;
frost$collections$IdentityMap$Entry** _42;
frost$collections$IdentityMap$EntryIterator* _43;
frost$core$Int* _44;
frost$core$Int _45;
frost$core$Int64 _46;
int64_t _47;
frost$collections$IdentityMap$Entry* _48;
bool _49;
frost$core$Bit _50;
bool _51;
frost$collections$IdentityMap$EntryIterator* _54;
frost$core$Int* _55;
frost$core$Int _56;
frost$core$Int _57;
int64_t _58;
int64_t _59;
int64_t _60;
frost$core$Int _61;
frost$core$Int* _62;
frost$collections$IdentityMap$EntryIterator* _66;
frost$core$Int* _67;
frost$core$Int _68;
frost$collections$IdentityMap* _69;
frost$core$Int* _70;
frost$core$Int _71;
int64_t _72;
int64_t _73;
bool _74;
frost$core$Bit _75;
bool _76;
frost$collections$IdentityMap$EntryIterator* _79;
frost$collections$IdentityMap* _80;
frost$collections$IdentityMap$Entry*** _81;
frost$collections$IdentityMap$Entry** _82;
frost$collections$IdentityMap$Entry** _83;
frost$collections$IdentityMap$EntryIterator* _84;
frost$core$Int* _85;
frost$core$Int _86;
frost$core$Int64 _87;
int64_t _88;
frost$collections$IdentityMap$Entry* _89;
frost$core$Object* _90;
frost$collections$IdentityMap$Entry** _92;
frost$collections$IdentityMap$Entry* _93;
frost$core$Object* _94;
frost$collections$IdentityMap$Entry** _96;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:37
_1 = param0;
_2 = (frost$core$Int) {0u};
_3 = &_1->bucket;
*_3 = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:38
_6 = param0;
_7 = ((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = &_6->entry;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = &_6->entry;
*_13 = ((frost$collections$IdentityMap$Entry*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:41
_16 = param0;
_17 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = &_16->map;
_20 = *_19;
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = &_16->map;
*_23 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:42
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:43
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:45
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:46
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
frost$core$Bit frost$collections$IdentityMap$EntryIterator$get_done$R$frost$core$Bit(void* rawSelf) {
frost$collections$IdentityMap$EntryIterator* param0 = (frost$collections$IdentityMap$EntryIterator*) rawSelf;

frost$core$Bit local0;
frost$collections$IdentityMap$EntryIterator* _1;
frost$core$Int* _2;
frost$core$Int _3;
frost$collections$IdentityMap$EntryIterator* _4;
frost$collections$IdentityMap** _5;
frost$collections$IdentityMap* _6;
frost$collections$IdentityMap* _7;
frost$core$Int* _8;
frost$core$Int _9;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
bool _17;
frost$collections$IdentityMap$EntryIterator* _19;
frost$collections$IdentityMap$Entry** _20;
frost$collections$IdentityMap$Entry* _21;
bool _22;
frost$core$Bit _23;
frost$core$Bit _28;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:52
_1 = param0;
_2 = &_1->bucket;
_3 = *_2;
_4 = param0;
_5 = &_4->map;
_6 = *_5;
_7 = _6;
_8 = &_7->bucketCount;
_9 = *_8;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IdentityMap.frost:52:27
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
frost$core$Tuple2* frost$collections$IdentityMap$EntryIterator$next$R$$LPfrost$collections$IdentityMap$EntryIterator$K$Cfrost$collections$IdentityMap$EntryIterator$V$RP(void* rawSelf) {
frost$collections$IdentityMap$EntryIterator* param0 = (frost$collections$IdentityMap$EntryIterator*) rawSelf;

frost$collections$IdentityMap$Entry* local0 = NULL;
frost$collections$Iterator* _0;
$fn2 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$collections$IdentityMap$EntryIterator* _15;
frost$collections$IdentityMap$Entry** _16;
frost$collections$IdentityMap$Entry* _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$core$Int _22;
frost$collections$IdentityMap$EntryIterator* _26;
frost$core$Int* _27;
frost$core$Int _28;
frost$collections$IdentityMap$EntryIterator* _29;
frost$collections$IdentityMap** _30;
frost$collections$IdentityMap* _31;
frost$collections$IdentityMap* _32;
frost$core$Int* _33;
frost$core$Int _34;
int64_t _35;
int64_t _36;
bool _37;
frost$core$Bit _38;
bool _39;
frost$core$Int _41;
frost$collections$IdentityMap$EntryIterator* _45;
frost$collections$IdentityMap$Entry** _46;
frost$collections$IdentityMap$Entry* _47;
frost$core$Object* _49;
frost$collections$IdentityMap$Entry* _51;
frost$core$Object* _52;
frost$collections$IdentityMap$EntryIterator* _56;
frost$collections$IdentityMap$EntryIterator* _57;
frost$collections$IdentityMap$Entry** _58;
frost$collections$IdentityMap$Entry* _59;
bool _60;
frost$core$Bit _61;
bool _62;
frost$core$Int _64;
frost$collections$IdentityMap$Entry* _67;
frost$collections$IdentityMap$Entry* _68;
frost$collections$IdentityMap$Entry** _69;
frost$collections$IdentityMap$Entry* _70;
frost$collections$IdentityMap$Entry* _71;
frost$core$Object* _72;
frost$collections$IdentityMap$Entry** _74;
frost$collections$IdentityMap$Entry* _75;
frost$core$Object* _76;
frost$collections$IdentityMap$Entry** _78;
frost$collections$IdentityMap$EntryIterator* _82;
frost$collections$IdentityMap$Entry** _83;
frost$collections$IdentityMap$Entry* _84;
bool _85;
frost$core$Bit _86;
bool _87;
frost$collections$IdentityMap$EntryIterator* _90;
frost$core$Int* _91;
frost$core$Int _92;
frost$core$Int _93;
int64_t _94;
int64_t _95;
int64_t _96;
frost$core$Int _97;
frost$core$Int* _98;
frost$collections$IdentityMap$EntryIterator* _101;
frost$core$Int* _102;
frost$core$Int _103;
frost$collections$IdentityMap$EntryIterator* _104;
frost$collections$IdentityMap** _105;
frost$collections$IdentityMap* _106;
frost$collections$IdentityMap* _107;
frost$core$Int* _108;
frost$core$Int _109;
int64_t _112;
int64_t _113;
bool _114;
frost$core$Bit _115;
bool _117;
frost$collections$IdentityMap$EntryIterator* _122;
frost$collections$IdentityMap$EntryIterator* _123;
frost$collections$IdentityMap** _124;
frost$collections$IdentityMap* _125;
frost$collections$IdentityMap* _126;
frost$collections$IdentityMap$Entry*** _127;
frost$collections$IdentityMap$Entry** _128;
frost$collections$IdentityMap$Entry** _129;
frost$collections$IdentityMap$EntryIterator* _130;
frost$core$Int* _131;
frost$core$Int _132;
frost$core$Int64 _133;
int64_t _134;
frost$collections$IdentityMap$Entry* _135;
frost$core$Object* _136;
frost$collections$IdentityMap$Entry** _138;
frost$collections$IdentityMap$Entry* _139;
frost$core$Object* _140;
frost$collections$IdentityMap$Entry** _142;
frost$core$Tuple2* _146;
frost$core$Tuple2* _147;
frost$collections$IdentityMap$Entry* _148;
bool _149;
frost$core$Bit _150;
bool _151;
frost$core$Int _153;
frost$collections$IdentityMap$Entry* _156;
frost$core$Object** _157;
frost$core$Object* _158;
frost$core$Object* _159;
frost$core$Object* _160;
frost$collections$IdentityMap$Entry* _161;
bool _162;
frost$core$Bit _163;
bool _164;
frost$core$Int _166;
frost$collections$IdentityMap$Entry* _169;
frost$core$Object** _170;
frost$core$Object* _171;
frost$core$Object* _172;
frost$core$Object* _173;
frost$core$Tuple2* _175;
frost$core$Object* _176;
frost$core$Object* _178;
frost$collections$IdentityMap$Entry* _180;
frost$core$Object* _181;
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
_11 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4, _11, &$s5);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:57
_15 = param0;
_16 = &_15->entry;
_17 = *_16;
_18 = _17 != NULL;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block4; else goto block5;
block5:;
_22 = (frost$core$Int) {57u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s6, _22);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:58
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
_41 = (frost$core$Int) {58u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s7, _41);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:59
_45 = param0;
_46 = &_45->entry;
_47 = *_46;
*(&local0) = ((frost$collections$IdentityMap$Entry*) NULL);
_49 = ((frost$core$Object*) _47);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = *(&local0);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
*(&local0) = _47;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:60
_56 = param0;
_57 = param0;
_58 = &_57->entry;
_59 = *_58;
_60 = _59 != NULL;
_61 = (frost$core$Bit) {_60};
_62 = _61.value;
if (_62) goto block8; else goto block9;
block9:;
_64 = (frost$core$Int) {60u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _64, &$s9);
abort(); // unreachable
block8:;
_67 = _59;
_68 = _67;
_69 = &_68->next;
_70 = *_69;
_71 = _70;
_72 = ((frost$core$Object*) _71);
frost$core$Frost$ref$frost$core$Object$Q(_72);
_74 = &_56->entry;
_75 = *_74;
_76 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_76);
_78 = &_56->entry;
*_78 = _71;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:61
goto block10;
block10:;
_82 = param0;
_83 = &_82->entry;
_84 = *_83;
_85 = _84 == NULL;
_86 = (frost$core$Bit) {_85};
_87 = _86.value;
if (_87) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:62
_90 = param0;
_91 = &_90->bucket;
_92 = *_91;
_93 = (frost$core$Int) {1u};
_94 = _92.value;
_95 = _93.value;
_96 = _94 + _95;
_97 = (frost$core$Int) {_96};
_98 = &_90->bucket;
*_98 = _97;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:63
_101 = param0;
_102 = &_101->bucket;
_103 = *_102;
_104 = param0;
_105 = &_104->map;
_106 = *_105;
_107 = _106;
_108 = &_107->bucketCount;
_109 = *_108;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IdentityMap.frost:63:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_112 = _103.value;
_113 = _109.value;
_114 = _112 == _113;
_115 = (frost$core$Bit) {_114};
_117 = _115.value;
if (_117) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:64
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:66
_122 = param0;
_123 = param0;
_124 = &_123->map;
_125 = *_124;
_126 = _125;
_127 = &_126->contents;
_128 = *_127;
_129 = _128;
_130 = param0;
_131 = &_130->bucket;
_132 = *_131;
_133 = frost$core$Int64$init$frost$core$Int(_132);
_134 = _133.value;
_135 = _129[_134];
_136 = ((frost$core$Object*) _135);
frost$core$Frost$ref$frost$core$Object$Q(_136);
_138 = &_122->entry;
_139 = *_138;
_140 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_140);
_142 = &_122->entry;
*_142 = _135;
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:68
_146 = (frost$core$Tuple2*) frostObjectAlloc(sizeof(frost$core$Tuple2), (frost$core$Class*) &frost$core$Tuple2$class);
_147 = _146;
_148 = *(&local0);
_149 = _148 != NULL;
_150 = (frost$core$Bit) {_149};
_151 = _150.value;
if (_151) goto block16; else goto block17;
block17:;
_153 = (frost$core$Int) {68u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _153, &$s11);
abort(); // unreachable
block16:;
_156 = _148;
_157 = &_156->key;
_158 = *_157;
_159 = _158;
_160 = _159;
_161 = *(&local0);
_162 = _161 != NULL;
_163 = (frost$core$Bit) {_162};
_164 = _163.value;
if (_164) goto block18; else goto block19;
block19:;
_166 = (frost$core$Int) {68u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s12, _166, &$s13);
abort(); // unreachable
block18:;
_169 = _161;
_170 = &_169->value;
_171 = *_170;
_172 = _171;
_173 = _172;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1(_147, _160, _173);
_175 = _146;
_176 = ((frost$core$Object*) _175);
frost$core$Frost$ref$frost$core$Object$Q(_176);
_178 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_178);
_180 = *(&local0);
_181 = ((frost$core$Object*) _180);
frost$core$Frost$unref$frost$core$Object$Q(_181);
*(&local0) = ((frost$collections$IdentityMap$Entry*) NULL);
return _175;

}
void frost$collections$IdentityMap$EntryIterator$cleanup(void* rawSelf) {
frost$collections$IdentityMap$EntryIterator* param0 = (frost$collections$IdentityMap$EntryIterator*) rawSelf;

frost$core$Object* _1;
frost$collections$IdentityMap$EntryIterator* _3;
frost$collections$IdentityMap** _4;
frost$collections$IdentityMap* _5;
frost$core$Object* _6;
frost$collections$IdentityMap$EntryIterator* _8;
frost$collections$IdentityMap$Entry** _9;
frost$collections$IdentityMap$Entry* _10;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:35
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






