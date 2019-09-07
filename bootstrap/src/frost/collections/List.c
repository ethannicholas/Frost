#include "frost/collections/List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Collection.h"
#include "frost/collections/ListWriter.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/Frost.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/collections/MergeSort.h"

__attribute__((weak)) frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim(frost$collections$ListView* p0) {
    frost$core$Object* result = frost$collections$ListView$get_first$R$frost$collections$ListView$T(p0);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) void frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim(frost$collections$List* p0, frost$core$MutableMethod* p1) {
    frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP(p0, p1);

}

struct { frost$core$Class* cl; ITable* next; void* methods[17]; } frost$collections$List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[5]; } frost$collections$List$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$List$_frost$collections$ListView, { NULL, NULL, frost$collections$CollectionWriter$addAll$frost$collections$CollectionView$LTfrost$collections$CollectionWriter$T$GT, NULL, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$List$_frost$collections$CollectionWriter, { NULL, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$List$_frost$collections$CollectionView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$List$_frost$collections$List = { (frost$core$Class*) &frost$collections$List$class, (ITable*) &frost$collections$List$_frost$collections$Iterable, { frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP} };

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$List$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$List$_frost$collections$List, { } };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$List$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, (ITable*) &frost$collections$List$_frost$collections$Collection, { NULL, NULL, NULL, frost$collections$ListWriter$removeLast} };

static frost$core$String $s1;
frost$collections$List$class_type frost$collections$List$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$List$_frost$collections$ListWriter, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP} };

typedef frost$core$Object* (*$fn2)(frost$collections$ListWriter*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn3)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5)(frost$collections$Iterator*);
typedef void (*$fn6)(frost$collections$ListWriter*, frost$core$Int, frost$core$Object*);
typedef frost$core$Int (*$fn14)(frost$collections$CollectionView*);
typedef void (*$fn15)(frost$collections$List*, frost$core$Range$LTfrost$core$Int$GT, frost$collections$ListView*);
typedef frost$core$Int (*$fn22)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn23)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn24)(frost$core$Object*);
typedef frost$core$Bit (*$fn25)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn26)(frost$collections$ListWriter*, frost$core$Int);
typedef frost$core$Bit (*$fn29)(frost$core$Object*);
typedef frost$core$Bit (*$fn30)(frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74", 22, -256051039653262332, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 10, 5900027631537538501, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x2e\x5b\x5d\x3a\x3d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x2c\x20\x6c\x69\x73\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x2e\x54\x3e\x29", 158, 3819738606459091986, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 10, 5900027631537538501, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 10, 5900027631537538501, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };

void frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$GT$frost$collections$ListView$LTfrost$collections$List$T$GT(frost$collections$List* param0, frost$core$Range$LTfrost$core$Int$GT param1, frost$collections$ListView* param2) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Object* local3 = NULL;
frost$core$Int _0;
frost$core$Int _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
frost$core$Int _8;
frost$core$Int _12;
frost$core$Bit _15;
bool _18;
bool _19;
frost$core$Bit _20;
bool _22;
frost$core$Int _25;
frost$core$Int _26;
int64_t _27;
int64_t _28;
int64_t _29;
frost$core$Int _30;
frost$core$Int _34;
frost$core$Int _35;
frost$core$Int _36;
frost$core$Bit _37;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT _38;
frost$core$Int _39;
frost$core$Int _41;
frost$core$Int _42;
int64_t _45;
int64_t _46;
frost$core$Int _47;
frost$core$Bit _49;
bool _50;
frost$core$Int _51;
int64_t _52;
int64_t _53;
bool _54;
frost$core$Bit _55;
bool _56;
int64_t _59;
int64_t _60;
bool _61;
frost$core$Bit _62;
bool _63;
int64_t _65;
int64_t _66;
bool _67;
frost$core$Bit _68;
bool _69;
int64_t _72;
int64_t _73;
bool _74;
frost$core$Bit _75;
bool _76;
int64_t _78;
int64_t _79;
bool _80;
frost$core$Bit _81;
bool _82;
frost$collections$ListWriter* _85;
frost$core$Int _86;
$fn2 _87;
frost$core$Object* _88;
frost$core$Object* _89;
frost$core$Object* _90;
frost$core$Int _93;
int64_t _95;
int64_t _96;
int64_t _97;
frost$core$Int _98;
int64_t _100;
int64_t _101;
bool _102;
frost$core$Bit _103;
bool _104;
int64_t _106;
int64_t _107;
bool _108;
frost$core$Bit _109;
bool _110;
int64_t _112;
int64_t _113;
int64_t _114;
frost$core$Int _115;
int64_t _117;
int64_t _118;
bool _119;
frost$core$Bit _120;
bool _121;
int64_t _123;
int64_t _124;
bool _125;
frost$core$Bit _126;
bool _127;
int64_t _129;
int64_t _130;
int64_t _131;
frost$core$Int _132;
frost$core$Int _136;
frost$collections$Iterable* _139;
frost$collections$Iterable* _140;
$fn3 _141;
frost$collections$Iterator* _142;
frost$collections$Iterator* _143;
frost$collections$Iterator* _145;
$fn4 _146;
frost$core$Bit _147;
bool _148;
frost$collections$Iterator* _151;
$fn5 _152;
frost$core$Object* _153;
frost$core$Object* _154;
frost$core$Object* _155;
frost$core$Object* _157;
frost$core$Object* _158;
frost$collections$ListWriter* _162;
frost$core$Int _163;
frost$core$Object* _164;
frost$core$Object* _165;
$fn6 _166;
frost$core$Int _169;
frost$core$Int _170;
int64_t _171;
int64_t _172;
int64_t _173;
frost$core$Int _174;
frost$core$Object* _176;
frost$core$Object* _178;
frost$core$Object* _179;
frost$core$Object* _183;
_0 = param1.min;
_1 = param1.max;
_2 = _0.value;
_3 = _1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block2:;
_8 = (frost$core$Int) {11u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _8, &$s8);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:13
_12 = param1.max;
*(&local0) = _12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:14
_15 = param1.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from List.frost:14:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_18 = _15.value;
_19 = !_18;
_20 = (frost$core$Bit) {_19};
_22 = _20.value;
if (_22) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:15
_25 = *(&local0);
_26 = (frost$core$Int) {1u};
_27 = _25.value;
_28 = _26.value;
_29 = _27 - _28;
_30 = (frost$core$Int) {_29};
*(&local0) = _30;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:17
_34 = *(&local0);
_35 = param1.min;
_36 = (frost$core$Int) {18446744073709551615u};
_37 = (frost$core$Bit) {true};
_38 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit(_34, _35, _36, _37);
_39 = _38.start;
*(&local1) = _39;
_41 = _38.end;
_42 = _38.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from List.frost:17:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_45 = _42.value;
_46 = -_45;
_47 = (frost$core$Int) {_46};
_49 = _38.inclusive;
_50 = _49.value;
_51 = (frost$core$Int) {0u};
_52 = _42.value;
_53 = _51.value;
_54 = _52 >= _53;
_55 = (frost$core$Bit) {_54};
_56 = _55.value;
if (_56) goto block10; else goto block11;
block10:;
if (_50) goto block12; else goto block13;
block12:;
_59 = _39.value;
_60 = _41.value;
_61 = _59 <= _60;
_62 = (frost$core$Bit) {_61};
_63 = _62.value;
if (_63) goto block7; else goto block8;
block13:;
_65 = _39.value;
_66 = _41.value;
_67 = _65 < _66;
_68 = (frost$core$Bit) {_67};
_69 = _68.value;
if (_69) goto block7; else goto block8;
block11:;
if (_50) goto block14; else goto block15;
block14:;
_72 = _39.value;
_73 = _41.value;
_74 = _72 >= _73;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block7; else goto block8;
block15:;
_78 = _39.value;
_79 = _41.value;
_80 = _78 > _79;
_81 = (frost$core$Bit) {_80};
_82 = _81.value;
if (_82) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:18
_85 = ((frost$collections$ListWriter*) param0);
_86 = *(&local1);
ITable* $tmp9 = _85->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp9 = $tmp9->next;
}
_87 = $tmp9->methods[2];
_88 = _87(_85, _86);
_89 = _88;
_90 = _88;
frost$core$Frost$unref$frost$core$Object$Q(_90);
_93 = *(&local1);
if (_56) goto block17; else goto block18;
block17:;
_95 = _41.value;
_96 = _93.value;
_97 = _95 - _96;
_98 = (frost$core$Int) {_97};
if (_50) goto block19; else goto block20;
block19:;
_100 = _98.value;
_101 = _42.value;
_102 = _100 >= _101;
_103 = (frost$core$Bit) {_102};
_104 = _103.value;
if (_104) goto block16; else goto block8;
block20:;
_106 = _98.value;
_107 = _42.value;
_108 = _106 > _107;
_109 = (frost$core$Bit) {_108};
_110 = _109.value;
if (_110) goto block16; else goto block8;
block18:;
_112 = _93.value;
_113 = _41.value;
_114 = _112 - _113;
_115 = (frost$core$Int) {_114};
if (_50) goto block21; else goto block22;
block21:;
_117 = _115.value;
_118 = _47.value;
_119 = _117 >= _118;
_120 = (frost$core$Bit) {_119};
_121 = _120.value;
if (_121) goto block16; else goto block8;
block22:;
_123 = _115.value;
_124 = _47.value;
_125 = _123 > _124;
_126 = (frost$core$Bit) {_125};
_127 = _126.value;
if (_127) goto block16; else goto block8;
block16:;
_129 = _93.value;
_130 = _42.value;
_131 = _129 + _130;
_132 = (frost$core$Int) {_131};
*(&local1) = _132;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:20
_136 = param1.min;
*(&local2) = _136;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:21
_139 = ((frost$collections$Iterable*) param2);
_140 = _139;
ITable* $tmp10 = _140->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp10 = $tmp10->next;
}
_141 = $tmp10->methods[0];
_142 = _141(_140);
_143 = _142;
goto block23;
block23:;
_145 = _143;
ITable* $tmp11 = _145->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp11 = $tmp11->next;
}
_146 = $tmp11->methods[0];
_147 = _146(_145);
_148 = _147.value;
if (_148) goto block25; else goto block24;
block24:;
*(&local3) = ((frost$core$Object*) NULL);
_151 = _143;
ITable* $tmp12 = _151->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp12 = $tmp12->next;
}
_152 = $tmp12->methods[1];
_153 = _152(_151);
_154 = _153;
_155 = _154;
frost$core$Frost$ref$frost$core$Object$Q(_155);
_157 = *(&local3);
_158 = _157;
frost$core$Frost$unref$frost$core$Object$Q(_158);
*(&local3) = _154;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:22
_162 = ((frost$collections$ListWriter*) param0);
_163 = *(&local2);
_164 = *(&local3);
_165 = _164;
ITable* $tmp13 = _162->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp13 = $tmp13->next;
}
_166 = $tmp13->methods[1];
_166(_162, _163, _165);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:23
_169 = *(&local2);
_170 = (frost$core$Int) {1u};
_171 = _169.value;
_172 = _170.value;
_173 = _171 + _172;
_174 = (frost$core$Int) {_173};
*(&local2) = _174;
_176 = _153;
frost$core$Frost$unref$frost$core$Object$Q(_176);
_178 = *(&local3);
_179 = _178;
frost$core$Frost$unref$frost$core$Object$Q(_179);
*(&local3) = ((frost$core$Object*) NULL);
goto block23;
block25:;
_183 = ((frost$core$Object*) _142);
frost$core$Frost$unref$frost$core$Object$Q(_183);
return;

}
void frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT(frost$collections$List* param0, frost$core$Range$LTfrost$core$Int$Q$GT param1, frost$collections$ListView* param2) {

frost$core$Int$nullable local0;
frost$core$Int$nullable local1;
frost$core$Int$nullable _1;
frost$core$Int$nullable _4;
bool _5;
frost$core$Bit _6;
bool _7;
frost$core$Int _10;
frost$core$Int$nullable _11;
frost$core$Int$nullable _15;
frost$core$Int$nullable _18;
bool _19;
frost$core$Bit _20;
bool _21;
frost$collections$CollectionView* _24;
$fn14 _25;
frost$core$Int _26;
frost$core$Int$nullable _27;
frost$collections$List* _31;
frost$core$Int$nullable _32;
bool _33;
frost$core$Bit _34;
bool _35;
frost$core$Int _37;
frost$core$Int _40;
frost$core$Int$nullable _41;
bool _42;
frost$core$Bit _43;
bool _44;
frost$core$Int _46;
frost$core$Int _49;
frost$core$Bit _50;
frost$core$Range$LTfrost$core$Int$GT _51;
$fn15 _52;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:29
_1 = param1.min;
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:30
_4 = *(&local0);
_5 = !_4.nonnull;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:31
_10 = (frost$core$Int) {0u};
_11 = ((frost$core$Int$nullable) { _10, true });
*(&local0) = _11;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:34
_15 = param1.max;
*(&local1) = _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:35
_18 = *(&local1);
_19 = !_18.nonnull;
_20 = (frost$core$Bit) {_19};
_21 = _20.value;
if (_21) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:36
_24 = ((frost$collections$CollectionView*) param0);
ITable* $tmp16 = _24->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
_25 = $tmp16->methods[0];
_26 = _25(_24);
_27 = ((frost$core$Int$nullable) { _26, true });
*(&local1) = _27;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:39
_31 = param0;
_32 = *(&local0);
_33 = _32.nonnull;
_34 = (frost$core$Bit) {_33};
_35 = _34.value;
if (_35) goto block5; else goto block6;
block6:;
_37 = (frost$core$Int) {39u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s17, _37, &$s18);
abort(); // unreachable
block5:;
_40 = ((frost$core$Int) _32.value);
_41 = *(&local1);
_42 = _41.nonnull;
_43 = (frost$core$Bit) {_42};
_44 = _43.value;
if (_44) goto block7; else goto block8;
block8:;
_46 = (frost$core$Int) {39u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s19, _46, &$s20);
abort(); // unreachable
block7:;
_49 = ((frost$core$Int) _41.value);
_50 = param1.inclusive;
_51 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_40, _49, _50);
ITable* $tmp21 = _31->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$List$class) {
    $tmp21 = $tmp21->next;
}
_52 = $tmp21->methods[0];
_52(_31, _51, param2);
return;

}
void frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$MutableMethod* param1) {

frost$core$Int local0;
frost$core$Bit local1;
frost$collections$CollectionView* _1;
$fn22 _2;
frost$core$Int _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
int64_t _7;
frost$core$Int _8;
frost$core$Int _9;
frost$core$Int _10;
frost$core$Bit _11;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT _12;
frost$core$Int _13;
frost$core$Int _15;
frost$core$Int _16;
int64_t _19;
int64_t _20;
frost$core$Int _21;
frost$core$Bit _23;
bool _24;
frost$core$Int _25;
int64_t _26;
int64_t _27;
bool _28;
frost$core$Bit _29;
bool _30;
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
int64_t _46;
int64_t _47;
bool _48;
frost$core$Bit _49;
bool _50;
int64_t _52;
int64_t _53;
bool _54;
frost$core$Bit _55;
bool _56;
frost$collections$ListView* _59;
frost$collections$ListView* _60;
frost$core$Int _61;
$fn23 _62;
frost$core$Object* _63;
frost$core$Object* _64;
frost$core$MutableMethod* _65;
frost$core$Int8** _66;
frost$core$Int8* _67;
frost$core$Object** _68;
frost$core$Object* _69;
bool _70;
$fn24 _72;
frost$core$Bit _73;
$fn25 _76;
frost$core$Bit _77;
frost$core$Bit _80;
bool _83;
bool _84;
frost$core$Bit _85;
bool _87;
frost$core$Object* _88;
frost$collections$ListWriter* _92;
frost$core$Int _93;
$fn26 _94;
frost$core$Object* _95;
frost$core$Object* _96;
frost$core$Object* _97;
frost$core$Int _101;
int64_t _103;
int64_t _104;
int64_t _105;
frost$core$Int _106;
int64_t _108;
int64_t _109;
bool _110;
frost$core$Bit _111;
bool _112;
int64_t _114;
int64_t _115;
bool _116;
frost$core$Bit _117;
bool _118;
int64_t _120;
int64_t _121;
int64_t _122;
frost$core$Int _123;
int64_t _125;
int64_t _126;
bool _127;
frost$core$Bit _128;
bool _129;
int64_t _131;
int64_t _132;
bool _133;
frost$core$Bit _134;
bool _135;
int64_t _137;
int64_t _138;
int64_t _139;
frost$core$Int _140;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:45
_1 = ((frost$collections$CollectionView*) param0);
ITable* $tmp27 = _1->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp27 = $tmp27->next;
}
_2 = $tmp27->methods[0];
_3 = _2(_1);
_4 = (frost$core$Int) {1u};
_5 = _3.value;
_6 = _4.value;
_7 = _5 - _6;
_8 = (frost$core$Int) {_7};
_9 = (frost$core$Int) {0u};
_10 = (frost$core$Int) {18446744073709551615u};
_11 = (frost$core$Bit) {true};
_12 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit(_8, _9, _10, _11);
_13 = _12.start;
*(&local0) = _13;
_15 = _12.end;
_16 = _12.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from List.frost:45:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_19 = _16.value;
_20 = -_19;
_21 = (frost$core$Int) {_20};
_23 = _12.inclusive;
_24 = _23.value;
_25 = (frost$core$Int) {0u};
_26 = _16.value;
_27 = _25.value;
_28 = _26 >= _27;
_29 = (frost$core$Bit) {_28};
_30 = _29.value;
if (_30) goto block5; else goto block6;
block5:;
if (_24) goto block7; else goto block8;
block7:;
_33 = _13.value;
_34 = _15.value;
_35 = _33 <= _34;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block2; else goto block3;
block8:;
_39 = _13.value;
_40 = _15.value;
_41 = _39 < _40;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block2; else goto block3;
block6:;
if (_24) goto block9; else goto block10;
block9:;
_46 = _13.value;
_47 = _15.value;
_48 = _46 >= _47;
_49 = (frost$core$Bit) {_48};
_50 = _49.value;
if (_50) goto block2; else goto block3;
block10:;
_52 = _13.value;
_53 = _15.value;
_54 = _52 > _53;
_55 = (frost$core$Bit) {_54};
_56 = _55.value;
if (_56) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:46
_59 = ((frost$collections$ListView*) param0);
_60 = _59;
_61 = *(&local0);
ITable* $tmp28 = _60->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp28 = $tmp28->next;
}
_62 = $tmp28->methods[0];
_63 = _62(_60, _61);
_64 = _63;
_65 = param1;
_66 = &_65->pointer;
_67 = *_66;
_68 = &_65->target;
_69 = *_68;
_70 = _69 != ((frost$core$Object*) NULL);
if (_70) goto block13; else goto block14;
block14:;
_72 = (($fn29) _67);
_73 = _72(_64);
*(&local1) = _73;
goto block15;
block13:;
_76 = (($fn30) _67);
_77 = _76(_69, _64);
*(&local1) = _77;
goto block15;
block15:;
_80 = *(&local1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from List.frost:46:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_83 = _80.value;
_84 = !_83;
_85 = (frost$core$Bit) {_84};
_87 = _85.value;
_88 = _63;
frost$core$Frost$unref$frost$core$Object$Q(_88);
if (_87) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:47
_92 = ((frost$collections$ListWriter*) param0);
_93 = *(&local0);
ITable* $tmp31 = _92->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp31 = $tmp31->next;
}
_94 = $tmp31->methods[2];
_95 = _94(_92, _93);
_96 = _95;
_97 = _95;
frost$core$Frost$unref$frost$core$Object$Q(_97);
goto block12;
block12:;
_101 = *(&local0);
if (_30) goto block18; else goto block19;
block18:;
_103 = _15.value;
_104 = _101.value;
_105 = _103 - _104;
_106 = (frost$core$Int) {_105};
if (_24) goto block20; else goto block21;
block20:;
_108 = _106.value;
_109 = _16.value;
_110 = _108 >= _109;
_111 = (frost$core$Bit) {_110};
_112 = _111.value;
if (_112) goto block17; else goto block3;
block21:;
_114 = _106.value;
_115 = _16.value;
_116 = _114 > _115;
_117 = (frost$core$Bit) {_116};
_118 = _117.value;
if (_118) goto block17; else goto block3;
block19:;
_120 = _101.value;
_121 = _15.value;
_122 = _120 - _121;
_123 = (frost$core$Int) {_122};
if (_24) goto block22; else goto block23;
block22:;
_125 = _123.value;
_126 = _21.value;
_127 = _125 >= _126;
_128 = (frost$core$Bit) {_127};
_129 = _128.value;
if (_129) goto block17; else goto block3;
block23:;
_131 = _123.value;
_132 = _21.value;
_133 = _131 > _132;
_134 = (frost$core$Bit) {_133};
_135 = _134.value;
if (_135) goto block17; else goto block3;
block17:;
_137 = _101.value;
_138 = _16.value;
_139 = _137 + _138;
_140 = (frost$core$Int) {_139};
*(&local0) = _140;
goto block2;
block3:;
return;

}
void frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$MutableMethod* param1) {

frost$collections$List* _1;
frost$core$MutableMethod* _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:57
_1 = param0;
_2 = param1;
frost$collections$MergeSort$sort$frost$collections$List$LTfrost$collections$MergeSort$sort$T$GT$$LPfrost$collections$MergeSort$sort$T$Cfrost$collections$MergeSort$sort$T$RP$EQ$GT$LPfrost$core$Bit$RP(_1, _2);
return;

}

