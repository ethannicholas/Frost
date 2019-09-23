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

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Object* _5;
frost$collections$IdentityMap$Entry** _7;
frost$collections$IdentityMap$Entry* _8;
frost$core$Object* _9;
frost$collections$IdentityMap$Entry** _11;
frost$core$Object* _14;
frost$collections$IdentityMap** _16;
frost$collections$IdentityMap* _17;
frost$core$Object* _18;
frost$collections$IdentityMap** _20;
frost$core$Int* _24;
frost$core$Int _25;
frost$core$Int* _26;
frost$core$Int _27;
int64_t _28;
int64_t _29;
bool _30;
frost$core$Bit _31;
bool _32;
frost$collections$IdentityMap$Entry*** _34;
frost$collections$IdentityMap$Entry** _35;
frost$collections$IdentityMap$Entry** _36;
frost$core$Int* _37;
frost$core$Int _38;
frost$core$Int64 _39;
int64_t _40;
frost$collections$IdentityMap$Entry* _41;
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
frost$collections$IdentityMap$Entry*** _69;
frost$collections$IdentityMap$Entry** _70;
frost$collections$IdentityMap$Entry** _71;
frost$core$Int* _72;
frost$core$Int _73;
frost$core$Int64 _74;
int64_t _75;
frost$collections$IdentityMap$Entry* _76;
frost$core$Object* _77;
frost$collections$IdentityMap$Entry** _79;
frost$collections$IdentityMap$Entry* _80;
frost$core$Object* _81;
frost$collections$IdentityMap$Entry** _83;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:37
_1 = (frost$core$Int) {0u};
_2 = &param0->bucket;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:38
_5 = ((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->entry;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->entry;
*_11 = ((frost$collections$IdentityMap$Entry*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:41
_14 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_14);
_16 = &param0->map;
_17 = *_16;
_18 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = &param0->map;
*_20 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:42
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
_36 = ((frost$collections$IdentityMap$Entry**) _35);
_37 = &param0->bucket;
_38 = *_37;
_39 = frost$core$Int64$init$frost$core$Int(_38);
_40 = _39.value;
_41 = _36[_40];
_42 = _41 == NULL;
_43 = (frost$core$Bit) {_42};
_44 = _43.value;
if (_44) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:43
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:45
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:46
_69 = &param1->contents;
_70 = *_69;
_71 = ((frost$collections$IdentityMap$Entry**) _70);
_72 = &param0->bucket;
_73 = *_72;
_74 = frost$core$Int64$init$frost$core$Int(_73);
_75 = _74.value;
_76 = _71[_75];
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
frost$core$Bit frost$collections$IdentityMap$EntryIterator$get_done$R$frost$core$Bit(void* rawSelf) {
frost$collections$IdentityMap$EntryIterator* param0 = (frost$collections$IdentityMap$EntryIterator*) rawSelf;

frost$core$Bit local0;
frost$core$Int* _1;
frost$core$Int _2;
frost$collections$IdentityMap** _3;
frost$collections$IdentityMap* _4;
frost$core$Int* _5;
frost$core$Int _6;
int64_t _9;
int64_t _10;
bool _11;
frost$core$Bit _12;
bool _14;
frost$collections$IdentityMap$Entry** _16;
frost$collections$IdentityMap$Entry* _17;
bool _18;
frost$core$Bit _19;
frost$core$Bit _24;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:52
_1 = &param0->bucket;
_2 = *_1;
_3 = &param0->map;
_4 = *_3;
_5 = &_4->bucketCount;
_6 = *_5;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IdentityMap.frost:52:27
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
frost$collections$IdentityMap$Entry** _15;
frost$collections$IdentityMap$Entry* _16;
bool _17;
frost$core$Bit _18;
bool _19;
frost$core$Int _21;
frost$core$Int* _25;
frost$core$Int _26;
frost$collections$IdentityMap** _27;
frost$collections$IdentityMap* _28;
frost$core$Int* _29;
frost$core$Int _30;
int64_t _31;
int64_t _32;
bool _33;
frost$core$Bit _34;
bool _35;
frost$core$Int _37;
frost$collections$IdentityMap$Entry** _41;
frost$collections$IdentityMap$Entry* _42;
frost$core$Object* _44;
frost$collections$IdentityMap$Entry* _46;
frost$core$Object* _47;
frost$collections$IdentityMap$Entry** _51;
frost$collections$IdentityMap$Entry* _52;
bool _53;
frost$core$Bit _54;
bool _55;
frost$core$Int _57;
frost$collections$IdentityMap$Entry* _60;
frost$collections$IdentityMap$Entry** _61;
frost$collections$IdentityMap$Entry* _62;
frost$collections$IdentityMap$Entry* _63;
frost$core$Object* _64;
frost$collections$IdentityMap$Entry** _66;
frost$collections$IdentityMap$Entry* _67;
frost$core$Object* _68;
frost$collections$IdentityMap$Entry** _70;
frost$collections$IdentityMap$Entry** _74;
frost$collections$IdentityMap$Entry* _75;
bool _76;
frost$core$Bit _77;
bool _78;
frost$core$Int* _81;
frost$core$Int _82;
frost$core$Int _83;
int64_t _84;
int64_t _85;
int64_t _86;
frost$core$Int _87;
frost$core$Int* _88;
frost$core$Int* _91;
frost$core$Int _92;
frost$collections$IdentityMap** _93;
frost$collections$IdentityMap* _94;
frost$core$Int* _95;
frost$core$Int _96;
int64_t _99;
int64_t _100;
bool _101;
frost$core$Bit _102;
bool _104;
frost$collections$IdentityMap** _109;
frost$collections$IdentityMap* _110;
frost$collections$IdentityMap$Entry*** _111;
frost$collections$IdentityMap$Entry** _112;
frost$collections$IdentityMap$Entry** _113;
frost$core$Int* _114;
frost$core$Int _115;
frost$core$Int64 _116;
int64_t _117;
frost$collections$IdentityMap$Entry* _118;
frost$core$Object* _119;
frost$collections$IdentityMap$Entry** _121;
frost$collections$IdentityMap$Entry* _122;
frost$core$Object* _123;
frost$collections$IdentityMap$Entry** _125;
frost$core$Tuple2* _129;
frost$collections$IdentityMap$Entry* _130;
bool _131;
frost$core$Bit _132;
bool _133;
frost$core$Int _135;
frost$collections$IdentityMap$Entry* _138;
frost$core$Object** _139;
frost$core$Object* _140;
frost$core$Object* _141;
frost$core$Object* _142;
frost$collections$IdentityMap$Entry* _143;
bool _144;
frost$core$Bit _145;
bool _146;
frost$core$Int _148;
frost$collections$IdentityMap$Entry* _151;
frost$core$Object** _152;
frost$core$Object* _153;
frost$core$Object* _154;
frost$core$Object* _155;
frost$core$Tuple2* _157;
frost$core$Object* _158;
frost$core$Object* _160;
frost$collections$IdentityMap$Entry* _162;
frost$core$Object* _163;
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
_15 = &param0->entry;
_16 = *_15;
_17 = _16 != NULL;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block4; else goto block5;
block5:;
_21 = (frost$core$Int) {57u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s6, _21);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:58
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
_37 = (frost$core$Int) {58u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s7, _37);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:59
_41 = &param0->entry;
_42 = *_41;
*(&local0) = ((frost$collections$IdentityMap$Entry*) NULL);
_44 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_44);
_46 = *(&local0);
_47 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_47);
*(&local0) = _42;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:60
_51 = &param0->entry;
_52 = *_51;
_53 = _52 != NULL;
_54 = (frost$core$Bit) {_53};
_55 = _54.value;
if (_55) goto block8; else goto block9;
block9:;
_57 = (frost$core$Int) {60u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _57, &$s9);
abort(); // unreachable
block8:;
_60 = _52;
_61 = &_60->next;
_62 = *_61;
_63 = _62;
_64 = ((frost$core$Object*) _63);
frost$core$Frost$ref$frost$core$Object$Q(_64);
_66 = &param0->entry;
_67 = *_66;
_68 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_68);
_70 = &param0->entry;
*_70 = _63;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:61
goto block10;
block10:;
_74 = &param0->entry;
_75 = *_74;
_76 = _75 == NULL;
_77 = (frost$core$Bit) {_76};
_78 = _77.value;
if (_78) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:62
_81 = &param0->bucket;
_82 = *_81;
_83 = (frost$core$Int) {1u};
_84 = _82.value;
_85 = _83.value;
_86 = _84 + _85;
_87 = (frost$core$Int) {_86};
_88 = &param0->bucket;
*_88 = _87;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:63
_91 = &param0->bucket;
_92 = *_91;
_93 = &param0->map;
_94 = *_93;
_95 = &_94->bucketCount;
_96 = *_95;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IdentityMap.frost:63:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_99 = _92.value;
_100 = _96.value;
_101 = _99 == _100;
_102 = (frost$core$Bit) {_101};
_104 = _102.value;
if (_104) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:64
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:66
_109 = &param0->map;
_110 = *_109;
_111 = &_110->contents;
_112 = *_111;
_113 = ((frost$collections$IdentityMap$Entry**) _112);
_114 = &param0->bucket;
_115 = *_114;
_116 = frost$core$Int64$init$frost$core$Int(_115);
_117 = _116.value;
_118 = _113[_117];
_119 = ((frost$core$Object*) _118);
frost$core$Frost$ref$frost$core$Object$Q(_119);
_121 = &param0->entry;
_122 = *_121;
_123 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_123);
_125 = &param0->entry;
*_125 = _118;
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:68
_129 = (frost$core$Tuple2*) frostObjectAlloc(sizeof(frost$core$Tuple2), (frost$core$Class*) &frost$core$Tuple2$class);
_130 = *(&local0);
_131 = _130 != NULL;
_132 = (frost$core$Bit) {_131};
_133 = _132.value;
if (_133) goto block16; else goto block17;
block17:;
_135 = (frost$core$Int) {68u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _135, &$s11);
abort(); // unreachable
block16:;
_138 = _130;
_139 = &_138->key;
_140 = *_139;
_141 = _140;
_142 = _141;
_143 = *(&local0);
_144 = _143 != NULL;
_145 = (frost$core$Bit) {_144};
_146 = _145.value;
if (_146) goto block18; else goto block19;
block19:;
_148 = (frost$core$Int) {68u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s12, _148, &$s13);
abort(); // unreachable
block18:;
_151 = _143;
_152 = &_151->value;
_153 = *_152;
_154 = _153;
_155 = _154;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1(_129, _142, _155);
_157 = _129;
_158 = ((frost$core$Object*) _157);
frost$core$Frost$ref$frost$core$Object$Q(_158);
_160 = ((frost$core$Object*) _129);
frost$core$Frost$unref$frost$core$Object$Q(_160);
_162 = *(&local0);
_163 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_163);
*(&local0) = ((frost$collections$IdentityMap$Entry*) NULL);
return _157;

}
void frost$collections$IdentityMap$EntryIterator$cleanup(void* rawSelf) {
frost$collections$IdentityMap$EntryIterator* param0 = (frost$collections$IdentityMap$EntryIterator*) rawSelf;

frost$core$Object* _1;
frost$collections$IdentityMap** _3;
frost$collections$IdentityMap* _4;
frost$core$Object* _5;
frost$collections$IdentityMap$Entry** _7;
frost$collections$IdentityMap$Entry* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:35
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






