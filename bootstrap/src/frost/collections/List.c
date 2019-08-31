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
#include "frost/core/Frost.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"

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

struct { frost$core$Class* cl; ITable* next; void* methods[16]; } frost$collections$List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[5]; } frost$collections$List$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$List$_frost$collections$ListView, { NULL, NULL, frost$collections$CollectionWriter$addAll$frost$collections$CollectionView$LTfrost$collections$CollectionWriter$T$GT, NULL, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$List$_frost$collections$CollectionWriter, { NULL, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$List$_frost$collections$CollectionView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$List$_frost$collections$List = { (frost$core$Class*) &frost$collections$List$class, (ITable*) &frost$collections$List$_frost$collections$Iterable, { frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP} };

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$List$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$List$_frost$collections$List, { } };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$List$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, (ITable*) &frost$collections$List$_frost$collections$Collection, { NULL, NULL, NULL, frost$collections$ListWriter$removeLast} };

static frost$core$String $s1;
frost$collections$List$class_type frost$collections$List$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$List$_frost$collections$ListWriter, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP} };

typedef frost$core$Object* (*$fn66)(frost$collections$ListWriter*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn104)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn108)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn113)(frost$collections$Iterator*);
typedef void (*$fn120)(frost$collections$ListWriter*, frost$core$Int, frost$core$Object*);
typedef frost$core$Int (*$fn139)(frost$collections$CollectionView*);
typedef void (*$fn157)(frost$collections$List*, frost$core$Range$LTfrost$core$Int$GT, frost$collections$ListView*);
typedef frost$core$Int (*$fn160)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn208)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn215)(frost$core$Object*);
typedef frost$core$Bit (*$fn217)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn227)(frost$collections$ListWriter*, frost$core$Int);
typedef frost$core$Int (*$fn265)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74", 22, -256051039653262332, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 10, 5900027631537538501, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x2e\x5b\x5d\x3a\x3d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x2c\x20\x6c\x69\x73\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x2e\x54\x3e\x29", 158, 3819738606459091986, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 10, 5900027631537538501, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 10, 5900027631537538501, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };

void frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$GT$frost$collections$ListView$LTfrost$collections$List$T$GT(frost$collections$List* param0, frost$core$Range$LTfrost$core$Int$GT param1, frost$collections$ListView* param2) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Object* local3 = NULL;
frost$core$Int $tmp2 = param1.min;
frost$core$Int $tmp3 = param1.max;
int64_t $tmp4 = $tmp2.value;
int64_t $tmp5 = $tmp3.value;
bool $tmp6 = $tmp4 <= $tmp5;
frost$core$Bit $tmp7 = (frost$core$Bit) {$tmp6};
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block2:;
frost$core$Int $tmp9 = (frost$core$Int) {11u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, $tmp9, &$s11);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:13
frost$core$Int $tmp12 = param1.max;
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
frost$core$Int $tmp18 = *(&local0);
frost$core$Int $tmp19 = (frost$core$Int) {1u};
int64_t $tmp20 = $tmp18.value;
int64_t $tmp21 = $tmp19.value;
int64_t $tmp22 = $tmp20 - $tmp21;
frost$core$Int $tmp23 = (frost$core$Int) {$tmp22};
*(&local0) = $tmp23;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:17
frost$core$Int $tmp24 = *(&local0);
frost$core$Int $tmp25 = param1.min;
frost$core$Int $tmp26 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp27 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp28 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp24, $tmp25, $tmp26, $tmp27);
frost$core$Int $tmp29 = $tmp28.start;
*(&local1) = $tmp29;
frost$core$Int $tmp30 = $tmp28.end;
frost$core$Int $tmp31 = $tmp28.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from List.frost:17:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp32 = $tmp31.value;
int64_t $tmp33 = -$tmp32;
frost$core$Int $tmp34 = (frost$core$Int) {$tmp33};
frost$core$Bit $tmp35 = $tmp28.inclusive;
bool $tmp36 = $tmp35.value;
frost$core$Int $tmp37 = (frost$core$Int) {0u};
int64_t $tmp38 = $tmp31.value;
int64_t $tmp39 = $tmp37.value;
bool $tmp40 = $tmp38 >= $tmp39;
frost$core$Bit $tmp41 = (frost$core$Bit) {$tmp40};
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block10; else goto block11;
block10:;
if ($tmp36) goto block12; else goto block13;
block12:;
int64_t $tmp43 = $tmp29.value;
int64_t $tmp44 = $tmp30.value;
bool $tmp45 = $tmp43 <= $tmp44;
frost$core$Bit $tmp46 = (frost$core$Bit) {$tmp45};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block7; else goto block8;
block13:;
int64_t $tmp48 = $tmp29.value;
int64_t $tmp49 = $tmp30.value;
bool $tmp50 = $tmp48 < $tmp49;
frost$core$Bit $tmp51 = (frost$core$Bit) {$tmp50};
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block7; else goto block8;
block11:;
if ($tmp36) goto block14; else goto block15;
block14:;
int64_t $tmp53 = $tmp29.value;
int64_t $tmp54 = $tmp30.value;
bool $tmp55 = $tmp53 >= $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block7; else goto block8;
block15:;
int64_t $tmp58 = $tmp29.value;
int64_t $tmp59 = $tmp30.value;
bool $tmp60 = $tmp58 > $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:18
frost$core$Int $tmp63 = *(&local1);
ITable* $tmp64 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp64 = $tmp64->next;
}
$fn66 $tmp65 = $tmp64->methods[2];
frost$core$Object* $tmp67 = $tmp65(((frost$collections$ListWriter*) param0), $tmp63);
frost$core$Frost$unref$frost$core$Object$Q($tmp67);
frost$core$Int $tmp68 = *(&local1);
if ($tmp42) goto block17; else goto block18;
block17:;
int64_t $tmp69 = $tmp30.value;
int64_t $tmp70 = $tmp68.value;
int64_t $tmp71 = $tmp69 - $tmp70;
frost$core$Int $tmp72 = (frost$core$Int) {$tmp71};
if ($tmp36) goto block19; else goto block20;
block19:;
int64_t $tmp73 = $tmp72.value;
int64_t $tmp74 = $tmp31.value;
bool $tmp75 = $tmp73 >= $tmp74;
frost$core$Bit $tmp76 = (frost$core$Bit) {$tmp75};
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block16; else goto block8;
block20:;
int64_t $tmp78 = $tmp72.value;
int64_t $tmp79 = $tmp31.value;
bool $tmp80 = $tmp78 > $tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80};
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block16; else goto block8;
block18:;
int64_t $tmp83 = $tmp68.value;
int64_t $tmp84 = $tmp30.value;
int64_t $tmp85 = $tmp83 - $tmp84;
frost$core$Int $tmp86 = (frost$core$Int) {$tmp85};
if ($tmp36) goto block21; else goto block22;
block21:;
int64_t $tmp87 = $tmp86.value;
int64_t $tmp88 = $tmp34.value;
bool $tmp89 = $tmp87 >= $tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block16; else goto block8;
block22:;
int64_t $tmp92 = $tmp86.value;
int64_t $tmp93 = $tmp34.value;
bool $tmp94 = $tmp92 > $tmp93;
frost$core$Bit $tmp95 = (frost$core$Bit) {$tmp94};
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block16; else goto block8;
block16:;
int64_t $tmp97 = $tmp68.value;
int64_t $tmp98 = $tmp31.value;
int64_t $tmp99 = $tmp97 + $tmp98;
frost$core$Int $tmp100 = (frost$core$Int) {$tmp99};
*(&local1) = $tmp100;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:20
frost$core$Int $tmp101 = param1.min;
*(&local2) = $tmp101;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:21
ITable* $tmp102 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[0];
frost$collections$Iterator* $tmp105 = $tmp103(((frost$collections$Iterable*) param2));
goto block23;
block23:;
ITable* $tmp106 = $tmp105->$class->itable;
while ($tmp106->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp106 = $tmp106->next;
}
$fn108 $tmp107 = $tmp106->methods[0];
frost$core$Bit $tmp109 = $tmp107($tmp105);
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block25; else goto block24;
block24:;
*(&local3) = ((frost$core$Object*) NULL);
ITable* $tmp111 = $tmp105->$class->itable;
while ($tmp111->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[1];
frost$core$Object* $tmp114 = $tmp112($tmp105);
frost$core$Frost$ref$frost$core$Object$Q($tmp114);
frost$core$Object* $tmp115 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q($tmp115);
*(&local3) = $tmp114;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:22
frost$core$Int $tmp116 = *(&local2);
frost$core$Object* $tmp117 = *(&local3);
ITable* $tmp118 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[1];
$tmp119(((frost$collections$ListWriter*) param0), $tmp116, $tmp117);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:23
frost$core$Int $tmp121 = *(&local2);
frost$core$Int $tmp122 = (frost$core$Int) {1u};
int64_t $tmp123 = $tmp121.value;
int64_t $tmp124 = $tmp122.value;
int64_t $tmp125 = $tmp123 + $tmp124;
frost$core$Int $tmp126 = (frost$core$Int) {$tmp125};
*(&local2) = $tmp126;
frost$core$Frost$unref$frost$core$Object$Q($tmp114);
frost$core$Object* $tmp127 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
*(&local3) = ((frost$core$Object*) NULL);
goto block23;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
return;

}
void frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT(frost$collections$List* param0, frost$core$Range$LTfrost$core$Int$Q$GT param1, frost$collections$ListView* param2) {

frost$core$Int$nullable local0;
frost$core$Int$nullable local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:29
frost$core$Int$nullable $tmp128 = param1.min;
*(&local0) = $tmp128;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:30
frost$core$Int$nullable $tmp129 = *(&local0);
frost$core$Bit $tmp130 = (frost$core$Bit) {!$tmp129.nonnull};
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:31
frost$core$Int $tmp132 = (frost$core$Int) {0u};
*(&local0) = ((frost$core$Int$nullable) { $tmp132, true });
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:34
frost$core$Int$nullable $tmp133 = param1.max;
*(&local1) = $tmp133;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:35
frost$core$Int$nullable $tmp134 = *(&local1);
frost$core$Bit $tmp135 = (frost$core$Bit) {!$tmp134.nonnull};
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:36
ITable* $tmp137 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp137->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp137 = $tmp137->next;
}
$fn139 $tmp138 = $tmp137->methods[0];
frost$core$Int $tmp140 = $tmp138(((frost$collections$CollectionView*) param0));
*(&local1) = ((frost$core$Int$nullable) { $tmp140, true });
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:39
frost$core$Int$nullable $tmp141 = *(&local0);
frost$core$Bit $tmp142 = (frost$core$Bit) {$tmp141.nonnull};
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block5; else goto block6;
block6:;
frost$core$Int $tmp144 = (frost$core$Int) {39u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s145, $tmp144, &$s146);
abort(); // unreachable
block5:;
frost$core$Int$nullable $tmp147 = *(&local1);
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147.nonnull};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block7; else goto block8;
block8:;
frost$core$Int $tmp150 = (frost$core$Int) {39u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s151, $tmp150, &$s152);
abort(); // unreachable
block7:;
frost$core$Bit $tmp153 = param1.inclusive;
frost$core$Range$LTfrost$core$Int$GT $tmp154 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(((frost$core$Int) $tmp141.value), ((frost$core$Int) $tmp147.value), $tmp153);
ITable* $tmp155 = param0->$class->itable;
while ($tmp155->$class != (frost$core$Class*) &frost$collections$List$class) {
    $tmp155 = $tmp155->next;
}
$fn157 $tmp156 = $tmp155->methods[0];
$tmp156(param0, $tmp154, param2);
return;

}
void frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$MutableMethod* param1) {

frost$core$Int local0;
frost$core$Bit local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:45
ITable* $tmp158 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp158->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp158 = $tmp158->next;
}
$fn160 $tmp159 = $tmp158->methods[0];
frost$core$Int $tmp161 = $tmp159(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp162 = (frost$core$Int) {1u};
int64_t $tmp163 = $tmp161.value;
int64_t $tmp164 = $tmp162.value;
int64_t $tmp165 = $tmp163 - $tmp164;
frost$core$Int $tmp166 = (frost$core$Int) {$tmp165};
frost$core$Int $tmp167 = (frost$core$Int) {0u};
frost$core$Int $tmp168 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp169 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp170 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp166, $tmp167, $tmp168, $tmp169);
frost$core$Int $tmp171 = $tmp170.start;
*(&local0) = $tmp171;
frost$core$Int $tmp172 = $tmp170.end;
frost$core$Int $tmp173 = $tmp170.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from List.frost:45:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp174 = $tmp173.value;
int64_t $tmp175 = -$tmp174;
frost$core$Int $tmp176 = (frost$core$Int) {$tmp175};
frost$core$Bit $tmp177 = $tmp170.inclusive;
bool $tmp178 = $tmp177.value;
frost$core$Int $tmp179 = (frost$core$Int) {0u};
int64_t $tmp180 = $tmp173.value;
int64_t $tmp181 = $tmp179.value;
bool $tmp182 = $tmp180 >= $tmp181;
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block5; else goto block6;
block5:;
if ($tmp178) goto block7; else goto block8;
block7:;
int64_t $tmp185 = $tmp171.value;
int64_t $tmp186 = $tmp172.value;
bool $tmp187 = $tmp185 <= $tmp186;
frost$core$Bit $tmp188 = (frost$core$Bit) {$tmp187};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block2; else goto block3;
block8:;
int64_t $tmp190 = $tmp171.value;
int64_t $tmp191 = $tmp172.value;
bool $tmp192 = $tmp190 < $tmp191;
frost$core$Bit $tmp193 = (frost$core$Bit) {$tmp192};
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block2; else goto block3;
block6:;
if ($tmp178) goto block9; else goto block10;
block9:;
int64_t $tmp195 = $tmp171.value;
int64_t $tmp196 = $tmp172.value;
bool $tmp197 = $tmp195 >= $tmp196;
frost$core$Bit $tmp198 = (frost$core$Bit) {$tmp197};
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block2; else goto block3;
block10:;
int64_t $tmp200 = $tmp171.value;
int64_t $tmp201 = $tmp172.value;
bool $tmp202 = $tmp200 > $tmp201;
frost$core$Bit $tmp203 = (frost$core$Bit) {$tmp202};
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:46
frost$core$Int $tmp205 = *(&local0);
ITable* $tmp206 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp206->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp206 = $tmp206->next;
}
$fn208 $tmp207 = $tmp206->methods[0];
frost$core$Object* $tmp209 = $tmp207(((frost$collections$ListView*) param0), $tmp205);
frost$core$Int8** $tmp210 = &param1->pointer;
frost$core$Int8* $tmp211 = *$tmp210;
frost$core$Object** $tmp212 = &param1->target;
frost$core$Object* $tmp213 = *$tmp212;
bool $tmp214 = $tmp213 != ((frost$core$Object*) NULL);
if ($tmp214) goto block13; else goto block14;
block14:;
frost$core$Bit $tmp216 = (($fn215) $tmp211)($tmp209);
*(&local1) = $tmp216;
goto block15;
block13:;
frost$core$Bit $tmp218 = (($fn217) $tmp211)($tmp213, $tmp209);
*(&local1) = $tmp218;
goto block15;
block15:;
frost$core$Bit $tmp219 = *(&local1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from List.frost:46:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp220 = $tmp219.value;
bool $tmp221 = !$tmp220;
frost$core$Bit $tmp222 = (frost$core$Bit) {$tmp221};
bool $tmp223 = $tmp222.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp209);
if ($tmp223) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:47
frost$core$Int $tmp224 = *(&local0);
ITable* $tmp225 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp225->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp225 = $tmp225->next;
}
$fn227 $tmp226 = $tmp225->methods[2];
frost$core$Object* $tmp228 = $tmp226(((frost$collections$ListWriter*) param0), $tmp224);
frost$core$Frost$unref$frost$core$Object$Q($tmp228);
goto block12;
block12:;
frost$core$Int $tmp229 = *(&local0);
if ($tmp184) goto block18; else goto block19;
block18:;
int64_t $tmp230 = $tmp172.value;
int64_t $tmp231 = $tmp229.value;
int64_t $tmp232 = $tmp230 - $tmp231;
frost$core$Int $tmp233 = (frost$core$Int) {$tmp232};
if ($tmp178) goto block20; else goto block21;
block20:;
int64_t $tmp234 = $tmp233.value;
int64_t $tmp235 = $tmp173.value;
bool $tmp236 = $tmp234 >= $tmp235;
frost$core$Bit $tmp237 = (frost$core$Bit) {$tmp236};
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block17; else goto block3;
block21:;
int64_t $tmp239 = $tmp233.value;
int64_t $tmp240 = $tmp173.value;
bool $tmp241 = $tmp239 > $tmp240;
frost$core$Bit $tmp242 = (frost$core$Bit) {$tmp241};
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block17; else goto block3;
block19:;
int64_t $tmp244 = $tmp229.value;
int64_t $tmp245 = $tmp172.value;
int64_t $tmp246 = $tmp244 - $tmp245;
frost$core$Int $tmp247 = (frost$core$Int) {$tmp246};
if ($tmp178) goto block22; else goto block23;
block22:;
int64_t $tmp248 = $tmp247.value;
int64_t $tmp249 = $tmp176.value;
bool $tmp250 = $tmp248 >= $tmp249;
frost$core$Bit $tmp251 = (frost$core$Bit) {$tmp250};
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block17; else goto block3;
block23:;
int64_t $tmp253 = $tmp247.value;
int64_t $tmp254 = $tmp176.value;
bool $tmp255 = $tmp253 > $tmp254;
frost$core$Bit $tmp256 = (frost$core$Bit) {$tmp255};
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block17; else goto block3;
block17:;
int64_t $tmp258 = $tmp229.value;
int64_t $tmp259 = $tmp173.value;
int64_t $tmp260 = $tmp258 + $tmp259;
frost$core$Int $tmp261 = (frost$core$Int) {$tmp260};
*(&local0) = $tmp261;
goto block2;
block3:;
return;

}
void frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$MutableMethod* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:57
frost$core$Int $tmp262 = (frost$core$Int) {0u};
ITable* $tmp263 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp263->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp263 = $tmp263->next;
}
$fn265 $tmp264 = $tmp263->methods[0];
frost$core$Int $tmp266 = $tmp264(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp267 = (frost$core$Int) {1u};
int64_t $tmp268 = $tmp266.value;
int64_t $tmp269 = $tmp267.value;
int64_t $tmp270 = $tmp268 - $tmp269;
frost$core$Int $tmp271 = (frost$core$Int) {$tmp270};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int$frost$core$Int$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, $tmp262, $tmp271, param1);
return;

}

