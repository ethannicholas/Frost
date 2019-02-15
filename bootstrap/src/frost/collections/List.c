#include "frost/collections/List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Collection.h"
#include "frost/collections/ListWriter.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/MutableMethod.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } frost$collections$List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$List$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$List$_frost$collections$ListView, { NULL, frost$collections$CollectionWriter$addAll$frost$collections$CollectionView$LTfrost$collections$CollectionWriter$T$GT, NULL} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$collections$List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$List$_frost$collections$CollectionWriter, { NULL, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$List$_frost$collections$CollectionView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$List$_frost$collections$List = { (frost$core$Class*) &frost$collections$List$class, (ITable*) &frost$collections$List$_frost$collections$Iterable, { frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$List$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$List$_frost$collections$List, { NULL} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$List$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, (ITable*) &frost$collections$List$_frost$collections$Collection, { NULL, NULL, NULL} };

static frost$core$String $s1;
frost$collections$List$class_type frost$collections$List$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$List$_frost$collections$ListWriter, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP} };

typedef frost$core$Object* (*$fn70)(frost$collections$ListWriter*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn112)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn116)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn121)(frost$collections$Iterator*);
typedef void (*$fn128)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef frost$core$Int64 (*$fn147)(frost$collections$CollectionView*);
typedef void (*$fn155)(frost$collections$List*, frost$core$Range$LTfrost$core$Int64$GT, frost$collections$ListView*);
typedef frost$core$Int64 (*$fn158)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn210)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn217)(frost$core$Object*);
typedef frost$core$Bit (*$fn219)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn229)(frost$collections$ListWriter*, frost$core$Int64);
typedef frost$core$Int64 (*$fn271)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74", 22, -256051039653262332, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 10, 5900027631537538501, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x2e\x5b\x5d\x3a\x3d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x2c\x20\x6c\x69\x73\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x2e\x54\x3e\x29", 160, -5816405409084873364, NULL };

void frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$collections$ListView$LTfrost$collections$List$T$GT(frost$collections$List* param0, frost$core$Range$LTfrost$core$Int64$GT param1, frost$collections$ListView* param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Object* local3 = NULL;
frost$core$Int64 $tmp2 = param1.min;
frost$core$Int64 $tmp3 = param1.max;
int64_t $tmp4 = $tmp2.value;
int64_t $tmp5 = $tmp3.value;
bool $tmp6 = $tmp4 <= $tmp5;
frost$core$Bit $tmp7 = (frost$core$Bit) {$tmp6};
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp9 = (frost$core$Int64) {11u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s10, $tmp9, &$s11);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:13
frost$core$Int64 $tmp12 = param1.max;
*(&local0) = $tmp12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:14
frost$core$Bit $tmp13 = param1.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from List.frost:14:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp14 = $tmp13.value;
bool $tmp15 = !$tmp14;
frost$core$Bit $tmp16 = (frost$core$Bit) {$tmp15};
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:15
frost$core$Int64 $tmp18 = *(&local0);
frost$core$Int64 $tmp19 = (frost$core$Int64) {1u};
int64_t $tmp20 = $tmp18.value;
int64_t $tmp21 = $tmp19.value;
int64_t $tmp22 = $tmp20 - $tmp21;
frost$core$Int64 $tmp23 = (frost$core$Int64) {$tmp22};
*(&local0) = $tmp23;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:17
frost$core$Int64 $tmp24 = *(&local0);
frost$core$Int64 $tmp25 = param1.min;
frost$core$Int64 $tmp26 = (frost$core$Int64) {18446744073709551615u};
frost$core$Bit $tmp27 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp28 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp24, $tmp25, $tmp26, $tmp27);
frost$core$Int64 $tmp29 = $tmp28.start;
*(&local1) = $tmp29;
frost$core$Int64 $tmp30 = $tmp28.end;
frost$core$Int64 $tmp31 = $tmp28.step;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp32 = $tmp31.value;
frost$core$UInt64 $tmp33 = (frost$core$UInt64) {((uint64_t) $tmp32)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from List.frost:17:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:49
int64_t $tmp34 = $tmp31.value;
int64_t $tmp35 = -$tmp34;
frost$core$Int64 $tmp36 = (frost$core$Int64) {$tmp35};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp37 = $tmp36.value;
frost$core$UInt64 $tmp38 = (frost$core$UInt64) {((uint64_t) $tmp37)};
frost$core$Bit $tmp39 = $tmp28.inclusive;
bool $tmp40 = $tmp39.value;
frost$core$Int64 $tmp41 = (frost$core$Int64) {0u};
int64_t $tmp42 = $tmp31.value;
int64_t $tmp43 = $tmp41.value;
bool $tmp44 = $tmp42 >= $tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block12; else goto block13;
block12:;
if ($tmp40) goto block14; else goto block15;
block14:;
int64_t $tmp47 = $tmp29.value;
int64_t $tmp48 = $tmp30.value;
bool $tmp49 = $tmp47 <= $tmp48;
frost$core$Bit $tmp50 = (frost$core$Bit) {$tmp49};
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block9; else goto block10;
block15:;
int64_t $tmp52 = $tmp29.value;
int64_t $tmp53 = $tmp30.value;
bool $tmp54 = $tmp52 < $tmp53;
frost$core$Bit $tmp55 = (frost$core$Bit) {$tmp54};
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block9; else goto block10;
block13:;
if ($tmp40) goto block16; else goto block17;
block16:;
int64_t $tmp57 = $tmp29.value;
int64_t $tmp58 = $tmp30.value;
bool $tmp59 = $tmp57 >= $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block9; else goto block10;
block17:;
int64_t $tmp62 = $tmp29.value;
int64_t $tmp63 = $tmp30.value;
bool $tmp64 = $tmp62 > $tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:18
frost$core$Int64 $tmp67 = *(&local1);
ITable* $tmp68 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp68->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp68 = $tmp68->next;
}
$fn70 $tmp69 = $tmp68->methods[2];
frost$core$Object* $tmp71 = $tmp69(((frost$collections$ListWriter*) param0), $tmp67);
frost$core$Frost$unref$frost$core$Object$Q($tmp71);
frost$core$Int64 $tmp72 = *(&local1);
if ($tmp46) goto block19; else goto block20;
block19:;
int64_t $tmp73 = $tmp30.value;
int64_t $tmp74 = $tmp72.value;
int64_t $tmp75 = $tmp73 - $tmp74;
frost$core$Int64 $tmp76 = (frost$core$Int64) {$tmp75};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp77 = $tmp76.value;
frost$core$UInt64 $tmp78 = (frost$core$UInt64) {((uint64_t) $tmp77)};
if ($tmp40) goto block22; else goto block23;
block22:;
uint64_t $tmp79 = $tmp78.value;
uint64_t $tmp80 = $tmp33.value;
bool $tmp81 = $tmp79 >= $tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block18; else goto block10;
block23:;
uint64_t $tmp84 = $tmp78.value;
uint64_t $tmp85 = $tmp33.value;
bool $tmp86 = $tmp84 > $tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block18; else goto block10;
block20:;
int64_t $tmp89 = $tmp72.value;
int64_t $tmp90 = $tmp30.value;
int64_t $tmp91 = $tmp89 - $tmp90;
frost$core$Int64 $tmp92 = (frost$core$Int64) {$tmp91};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp93 = $tmp92.value;
frost$core$UInt64 $tmp94 = (frost$core$UInt64) {((uint64_t) $tmp93)};
if ($tmp40) goto block25; else goto block26;
block25:;
uint64_t $tmp95 = $tmp94.value;
uint64_t $tmp96 = $tmp38.value;
bool $tmp97 = $tmp95 >= $tmp96;
frost$core$Bit $tmp98 = (frost$core$Bit) {$tmp97};
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block18; else goto block10;
block26:;
uint64_t $tmp100 = $tmp94.value;
uint64_t $tmp101 = $tmp38.value;
bool $tmp102 = $tmp100 > $tmp101;
frost$core$Bit $tmp103 = (frost$core$Bit) {$tmp102};
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block18; else goto block10;
block18:;
int64_t $tmp105 = $tmp72.value;
int64_t $tmp106 = $tmp31.value;
int64_t $tmp107 = $tmp105 + $tmp106;
frost$core$Int64 $tmp108 = (frost$core$Int64) {$tmp107};
*(&local1) = $tmp108;
goto block9;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:20
frost$core$Int64 $tmp109 = param1.min;
*(&local2) = $tmp109;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:21
ITable* $tmp110 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp110->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp110 = $tmp110->next;
}
$fn112 $tmp111 = $tmp110->methods[0];
frost$collections$Iterator* $tmp113 = $tmp111(((frost$collections$Iterable*) param2));
goto block27;
block27:;
ITable* $tmp114 = $tmp113->$class->itable;
while ($tmp114->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp114 = $tmp114->next;
}
$fn116 $tmp115 = $tmp114->methods[0];
frost$core$Bit $tmp117 = $tmp115($tmp113);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block29; else goto block28;
block28:;
*(&local3) = ((frost$core$Object*) NULL);
ITable* $tmp119 = $tmp113->$class->itable;
while ($tmp119->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp119 = $tmp119->next;
}
$fn121 $tmp120 = $tmp119->methods[1];
frost$core$Object* $tmp122 = $tmp120($tmp113);
frost$core$Frost$ref$frost$core$Object$Q($tmp122);
frost$core$Object* $tmp123 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q($tmp123);
*(&local3) = $tmp122;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:22
frost$core$Int64 $tmp124 = *(&local2);
frost$core$Object* $tmp125 = *(&local3);
ITable* $tmp126 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp126->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp126 = $tmp126->next;
}
$fn128 $tmp127 = $tmp126->methods[1];
$tmp127(((frost$collections$ListWriter*) param0), $tmp124, $tmp125);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:23
frost$core$Int64 $tmp129 = *(&local2);
frost$core$Int64 $tmp130 = (frost$core$Int64) {1u};
int64_t $tmp131 = $tmp129.value;
int64_t $tmp132 = $tmp130.value;
int64_t $tmp133 = $tmp131 + $tmp132;
frost$core$Int64 $tmp134 = (frost$core$Int64) {$tmp133};
*(&local2) = $tmp134;
frost$core$Frost$unref$frost$core$Object$Q($tmp122);
frost$core$Object* $tmp135 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q($tmp135);
*(&local3) = ((frost$core$Object*) NULL);
goto block27;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
return;

}
void frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT(frost$collections$List* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1, frost$collections$ListView* param2) {

frost$core$Int64$nullable local0;
frost$core$Int64$nullable local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:29
frost$core$Int64$nullable $tmp136 = param1.min;
*(&local0) = $tmp136;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:30
frost$core$Int64$nullable $tmp137 = *(&local0);
frost$core$Bit $tmp138 = (frost$core$Bit) {!$tmp137.nonnull};
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:31
frost$core$Int64 $tmp140 = (frost$core$Int64) {0u};
*(&local0) = ((frost$core$Int64$nullable) { $tmp140, true });
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:34
frost$core$Int64$nullable $tmp141 = param1.max;
*(&local1) = $tmp141;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:35
frost$core$Int64$nullable $tmp142 = *(&local1);
frost$core$Bit $tmp143 = (frost$core$Bit) {!$tmp142.nonnull};
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:36
ITable* $tmp145 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp145->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp145 = $tmp145->next;
}
$fn147 $tmp146 = $tmp145->methods[0];
frost$core$Int64 $tmp148 = $tmp146(((frost$collections$CollectionView*) param0));
*(&local1) = ((frost$core$Int64$nullable) { $tmp148, true });
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:39
frost$core$Int64$nullable $tmp149 = *(&local0);
frost$core$Int64$nullable $tmp150 = *(&local1);
frost$core$Bit $tmp151 = param1.inclusive;
frost$core$Range$LTfrost$core$Int64$GT $tmp152 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(((frost$core$Int64) $tmp149.value), ((frost$core$Int64) $tmp150.value), $tmp151);
ITable* $tmp153 = param0->$class->itable;
while ($tmp153->$class != (frost$core$Class*) &frost$collections$List$class) {
    $tmp153 = $tmp153->next;
}
$fn155 $tmp154 = $tmp153->methods[0];
$tmp154(param0, $tmp152, param2);
return;

}
void frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$MutableMethod* param1) {

frost$core$Int64 local0;
frost$core$Bit local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:44
ITable* $tmp156 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp156->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp156 = $tmp156->next;
}
$fn158 $tmp157 = $tmp156->methods[0];
frost$core$Int64 $tmp159 = $tmp157(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp160 = (frost$core$Int64) {1u};
int64_t $tmp161 = $tmp159.value;
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161 - $tmp162;
frost$core$Int64 $tmp164 = (frost$core$Int64) {$tmp163};
frost$core$Int64 $tmp165 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp166 = (frost$core$Int64) {18446744073709551615u};
frost$core$Bit $tmp167 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp168 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp164, $tmp165, $tmp166, $tmp167);
frost$core$Int64 $tmp169 = $tmp168.start;
*(&local0) = $tmp169;
frost$core$Int64 $tmp170 = $tmp168.end;
frost$core$Int64 $tmp171 = $tmp168.step;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp172 = $tmp171.value;
frost$core$UInt64 $tmp173 = (frost$core$UInt64) {((uint64_t) $tmp172)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from List.frost:44:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:49
int64_t $tmp174 = $tmp171.value;
int64_t $tmp175 = -$tmp174;
frost$core$Int64 $tmp176 = (frost$core$Int64) {$tmp175};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp177 = $tmp176.value;
frost$core$UInt64 $tmp178 = (frost$core$UInt64) {((uint64_t) $tmp177)};
frost$core$Bit $tmp179 = $tmp168.inclusive;
bool $tmp180 = $tmp179.value;
frost$core$Int64 $tmp181 = (frost$core$Int64) {0u};
int64_t $tmp182 = $tmp171.value;
int64_t $tmp183 = $tmp181.value;
bool $tmp184 = $tmp182 >= $tmp183;
frost$core$Bit $tmp185 = (frost$core$Bit) {$tmp184};
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block7; else goto block8;
block7:;
if ($tmp180) goto block9; else goto block10;
block9:;
int64_t $tmp187 = $tmp169.value;
int64_t $tmp188 = $tmp170.value;
bool $tmp189 = $tmp187 <= $tmp188;
frost$core$Bit $tmp190 = (frost$core$Bit) {$tmp189};
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block4; else goto block5;
block10:;
int64_t $tmp192 = $tmp169.value;
int64_t $tmp193 = $tmp170.value;
bool $tmp194 = $tmp192 < $tmp193;
frost$core$Bit $tmp195 = (frost$core$Bit) {$tmp194};
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block4; else goto block5;
block8:;
if ($tmp180) goto block11; else goto block12;
block11:;
int64_t $tmp197 = $tmp169.value;
int64_t $tmp198 = $tmp170.value;
bool $tmp199 = $tmp197 >= $tmp198;
frost$core$Bit $tmp200 = (frost$core$Bit) {$tmp199};
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block4; else goto block5;
block12:;
int64_t $tmp202 = $tmp169.value;
int64_t $tmp203 = $tmp170.value;
bool $tmp204 = $tmp202 > $tmp203;
frost$core$Bit $tmp205 = (frost$core$Bit) {$tmp204};
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:45
frost$core$Int64 $tmp207 = *(&local0);
ITable* $tmp208 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp208->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp208 = $tmp208->next;
}
$fn210 $tmp209 = $tmp208->methods[0];
frost$core$Object* $tmp211 = $tmp209(((frost$collections$ListView*) param0), $tmp207);
frost$core$Int8** $tmp212 = &param1->pointer;
frost$core$Int8* $tmp213 = *$tmp212;
frost$core$Object** $tmp214 = &param1->target;
frost$core$Object* $tmp215 = *$tmp214;
bool $tmp216 = $tmp215 != ((frost$core$Object*) NULL);
if ($tmp216) goto block15; else goto block16;
block16:;
frost$core$Bit $tmp218 = (($fn217) $tmp213)($tmp211);
*(&local1) = $tmp218;
goto block17;
block15:;
frost$core$Bit $tmp220 = (($fn219) $tmp213)($tmp215, $tmp211);
*(&local1) = $tmp220;
goto block17;
block17:;
frost$core$Bit $tmp221 = *(&local1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from List.frost:45:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp222 = $tmp221.value;
bool $tmp223 = !$tmp222;
frost$core$Bit $tmp224 = (frost$core$Bit) {$tmp223};
bool $tmp225 = $tmp224.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp211);
if ($tmp225) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:46
frost$core$Int64 $tmp226 = *(&local0);
ITable* $tmp227 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp227->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp227 = $tmp227->next;
}
$fn229 $tmp228 = $tmp227->methods[2];
frost$core$Object* $tmp230 = $tmp228(((frost$collections$ListWriter*) param0), $tmp226);
frost$core$Frost$unref$frost$core$Object$Q($tmp230);
goto block14;
block14:;
frost$core$Int64 $tmp231 = *(&local0);
if ($tmp186) goto block20; else goto block21;
block20:;
int64_t $tmp232 = $tmp170.value;
int64_t $tmp233 = $tmp231.value;
int64_t $tmp234 = $tmp232 - $tmp233;
frost$core$Int64 $tmp235 = (frost$core$Int64) {$tmp234};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp236 = $tmp235.value;
frost$core$UInt64 $tmp237 = (frost$core$UInt64) {((uint64_t) $tmp236)};
if ($tmp180) goto block23; else goto block24;
block23:;
uint64_t $tmp238 = $tmp237.value;
uint64_t $tmp239 = $tmp173.value;
bool $tmp240 = $tmp238 >= $tmp239;
frost$core$Bit $tmp241 = (frost$core$Bit) {$tmp240};
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block19; else goto block5;
block24:;
uint64_t $tmp243 = $tmp237.value;
uint64_t $tmp244 = $tmp173.value;
bool $tmp245 = $tmp243 > $tmp244;
frost$core$Bit $tmp246 = (frost$core$Bit) {$tmp245};
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block19; else goto block5;
block21:;
int64_t $tmp248 = $tmp231.value;
int64_t $tmp249 = $tmp170.value;
int64_t $tmp250 = $tmp248 - $tmp249;
frost$core$Int64 $tmp251 = (frost$core$Int64) {$tmp250};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp252 = $tmp251.value;
frost$core$UInt64 $tmp253 = (frost$core$UInt64) {((uint64_t) $tmp252)};
if ($tmp180) goto block26; else goto block27;
block26:;
uint64_t $tmp254 = $tmp253.value;
uint64_t $tmp255 = $tmp178.value;
bool $tmp256 = $tmp254 >= $tmp255;
frost$core$Bit $tmp257 = (frost$core$Bit) {$tmp256};
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block19; else goto block5;
block27:;
uint64_t $tmp259 = $tmp253.value;
uint64_t $tmp260 = $tmp178.value;
bool $tmp261 = $tmp259 > $tmp260;
frost$core$Bit $tmp262 = (frost$core$Bit) {$tmp261};
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block19; else goto block5;
block19:;
int64_t $tmp264 = $tmp231.value;
int64_t $tmp265 = $tmp171.value;
int64_t $tmp266 = $tmp264 + $tmp265;
frost$core$Int64 $tmp267 = (frost$core$Int64) {$tmp266};
*(&local0) = $tmp267;
goto block4;
block5:;
return;

}
void frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$MutableMethod* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:56
frost$core$Int64 $tmp268 = (frost$core$Int64) {0u};
ITable* $tmp269 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp269->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp269 = $tmp269->next;
}
$fn271 $tmp270 = $tmp269->methods[0];
frost$core$Int64 $tmp272 = $tmp270(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp273 = (frost$core$Int64) {1u};
int64_t $tmp274 = $tmp272.value;
int64_t $tmp275 = $tmp273.value;
int64_t $tmp276 = $tmp274 - $tmp275;
frost$core$Int64 $tmp277 = (frost$core$Int64) {$tmp276};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, $tmp268, $tmp277, param1);
return;

}

