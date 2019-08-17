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
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/core/MutableMethod.h"

__attribute__((weak)) frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim(frost$collections$ListView* p0) {
    frost$core$Object* result = frost$collections$ListView$get_first$R$frost$collections$ListView$T(p0);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[16]; } frost$collections$List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { NULL, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$List$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$List$_frost$collections$ListView, { NULL, NULL, frost$collections$CollectionWriter$addAll$frost$collections$CollectionView$LTfrost$collections$CollectionWriter$T$GT, NULL} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$List$_frost$collections$CollectionWriter, { NULL, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$List$_frost$collections$CollectionView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$List$_frost$collections$List = { (frost$core$Class*) &frost$collections$List$class, (ITable*) &frost$collections$List$_frost$collections$Iterable, { frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$List$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$List$_frost$collections$List, { NULL} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$List$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, (ITable*) &frost$collections$List$_frost$collections$Collection, { NULL, NULL, NULL, frost$collections$ListWriter$removeLast} };

static frost$core$String $s1;
frost$collections$List$class_type frost$collections$List$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$List$_frost$collections$ListWriter, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP} };

typedef frost$core$Object* (*$fn66)(frost$collections$ListWriter*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn104)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn108)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn113)(frost$collections$Iterator*);
typedef void (*$fn120)(frost$collections$ListWriter*, frost$core$Int, frost$core$Object*);
typedef frost$core$Int (*$fn139)(frost$collections$CollectionView*);
typedef void (*$fn147)(frost$collections$List*, frost$core$Range$LTfrost$core$Int$GT, frost$collections$ListView*);
typedef frost$core$Int (*$fn150)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn198)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn205)(frost$core$Object*);
typedef frost$core$Bit (*$fn207)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn217)(frost$collections$ListWriter*, frost$core$Int);
typedef frost$core$Int (*$fn255)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74", 22, -256051039653262332, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 10, 5900027631537538501, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x2e\x5b\x5d\x3a\x3d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x2c\x20\x6c\x69\x73\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x2e\x54\x3e\x29", 158, 3819738606459091986, NULL };

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
frost$core$Int$nullable $tmp142 = *(&local1);
frost$core$Bit $tmp143 = param1.inclusive;
frost$core$Range$LTfrost$core$Int$GT $tmp144 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(((frost$core$Int) $tmp141.value), ((frost$core$Int) $tmp142.value), $tmp143);
ITable* $tmp145 = param0->$class->itable;
while ($tmp145->$class != (frost$core$Class*) &frost$collections$List$class) {
    $tmp145 = $tmp145->next;
}
$fn147 $tmp146 = $tmp145->methods[0];
$tmp146(param0, $tmp144, param2);
return;

}
void frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$MutableMethod* param1) {

frost$core$Int local0;
frost$core$Bit local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:44
ITable* $tmp148 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp148->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp148 = $tmp148->next;
}
$fn150 $tmp149 = $tmp148->methods[0];
frost$core$Int $tmp151 = $tmp149(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp152 = (frost$core$Int) {1u};
int64_t $tmp153 = $tmp151.value;
int64_t $tmp154 = $tmp152.value;
int64_t $tmp155 = $tmp153 - $tmp154;
frost$core$Int $tmp156 = (frost$core$Int) {$tmp155};
frost$core$Int $tmp157 = (frost$core$Int) {0u};
frost$core$Int $tmp158 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp159 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp160 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp156, $tmp157, $tmp158, $tmp159);
frost$core$Int $tmp161 = $tmp160.start;
*(&local0) = $tmp161;
frost$core$Int $tmp162 = $tmp160.end;
frost$core$Int $tmp163 = $tmp160.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from List.frost:44:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp164 = $tmp163.value;
int64_t $tmp165 = -$tmp164;
frost$core$Int $tmp166 = (frost$core$Int) {$tmp165};
frost$core$Bit $tmp167 = $tmp160.inclusive;
bool $tmp168 = $tmp167.value;
frost$core$Int $tmp169 = (frost$core$Int) {0u};
int64_t $tmp170 = $tmp163.value;
int64_t $tmp171 = $tmp169.value;
bool $tmp172 = $tmp170 >= $tmp171;
frost$core$Bit $tmp173 = (frost$core$Bit) {$tmp172};
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block5; else goto block6;
block5:;
if ($tmp168) goto block7; else goto block8;
block7:;
int64_t $tmp175 = $tmp161.value;
int64_t $tmp176 = $tmp162.value;
bool $tmp177 = $tmp175 <= $tmp176;
frost$core$Bit $tmp178 = (frost$core$Bit) {$tmp177};
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block2; else goto block3;
block8:;
int64_t $tmp180 = $tmp161.value;
int64_t $tmp181 = $tmp162.value;
bool $tmp182 = $tmp180 < $tmp181;
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block2; else goto block3;
block6:;
if ($tmp168) goto block9; else goto block10;
block9:;
int64_t $tmp185 = $tmp161.value;
int64_t $tmp186 = $tmp162.value;
bool $tmp187 = $tmp185 >= $tmp186;
frost$core$Bit $tmp188 = (frost$core$Bit) {$tmp187};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block2; else goto block3;
block10:;
int64_t $tmp190 = $tmp161.value;
int64_t $tmp191 = $tmp162.value;
bool $tmp192 = $tmp190 > $tmp191;
frost$core$Bit $tmp193 = (frost$core$Bit) {$tmp192};
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:45
frost$core$Int $tmp195 = *(&local0);
ITable* $tmp196 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp196->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp196 = $tmp196->next;
}
$fn198 $tmp197 = $tmp196->methods[0];
frost$core$Object* $tmp199 = $tmp197(((frost$collections$ListView*) param0), $tmp195);
frost$core$Int8** $tmp200 = &param1->pointer;
frost$core$Int8* $tmp201 = *$tmp200;
frost$core$Object** $tmp202 = &param1->target;
frost$core$Object* $tmp203 = *$tmp202;
bool $tmp204 = $tmp203 != ((frost$core$Object*) NULL);
if ($tmp204) goto block13; else goto block14;
block14:;
frost$core$Bit $tmp206 = (($fn205) $tmp201)($tmp199);
*(&local1) = $tmp206;
goto block15;
block13:;
frost$core$Bit $tmp208 = (($fn207) $tmp201)($tmp203, $tmp199);
*(&local1) = $tmp208;
goto block15;
block15:;
frost$core$Bit $tmp209 = *(&local1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from List.frost:45:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp210 = $tmp209.value;
bool $tmp211 = !$tmp210;
frost$core$Bit $tmp212 = (frost$core$Bit) {$tmp211};
bool $tmp213 = $tmp212.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp199);
if ($tmp213) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:46
frost$core$Int $tmp214 = *(&local0);
ITable* $tmp215 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp215->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp215 = $tmp215->next;
}
$fn217 $tmp216 = $tmp215->methods[2];
frost$core$Object* $tmp218 = $tmp216(((frost$collections$ListWriter*) param0), $tmp214);
frost$core$Frost$unref$frost$core$Object$Q($tmp218);
goto block12;
block12:;
frost$core$Int $tmp219 = *(&local0);
if ($tmp174) goto block18; else goto block19;
block18:;
int64_t $tmp220 = $tmp162.value;
int64_t $tmp221 = $tmp219.value;
int64_t $tmp222 = $tmp220 - $tmp221;
frost$core$Int $tmp223 = (frost$core$Int) {$tmp222};
if ($tmp168) goto block20; else goto block21;
block20:;
int64_t $tmp224 = $tmp223.value;
int64_t $tmp225 = $tmp163.value;
bool $tmp226 = $tmp224 >= $tmp225;
frost$core$Bit $tmp227 = (frost$core$Bit) {$tmp226};
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block17; else goto block3;
block21:;
int64_t $tmp229 = $tmp223.value;
int64_t $tmp230 = $tmp163.value;
bool $tmp231 = $tmp229 > $tmp230;
frost$core$Bit $tmp232 = (frost$core$Bit) {$tmp231};
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block17; else goto block3;
block19:;
int64_t $tmp234 = $tmp219.value;
int64_t $tmp235 = $tmp162.value;
int64_t $tmp236 = $tmp234 - $tmp235;
frost$core$Int $tmp237 = (frost$core$Int) {$tmp236};
if ($tmp168) goto block22; else goto block23;
block22:;
int64_t $tmp238 = $tmp237.value;
int64_t $tmp239 = $tmp166.value;
bool $tmp240 = $tmp238 >= $tmp239;
frost$core$Bit $tmp241 = (frost$core$Bit) {$tmp240};
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block17; else goto block3;
block23:;
int64_t $tmp243 = $tmp237.value;
int64_t $tmp244 = $tmp166.value;
bool $tmp245 = $tmp243 > $tmp244;
frost$core$Bit $tmp246 = (frost$core$Bit) {$tmp245};
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block17; else goto block3;
block17:;
int64_t $tmp248 = $tmp219.value;
int64_t $tmp249 = $tmp163.value;
int64_t $tmp250 = $tmp248 + $tmp249;
frost$core$Int $tmp251 = (frost$core$Int) {$tmp250};
*(&local0) = $tmp251;
goto block2;
block3:;
return;

}
void frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$MutableMethod* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/List.frost:56
frost$core$Int $tmp252 = (frost$core$Int) {0u};
ITable* $tmp253 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp253->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp253 = $tmp253->next;
}
$fn255 $tmp254 = $tmp253->methods[0];
frost$core$Int $tmp256 = $tmp254(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp257 = (frost$core$Int) {1u};
int64_t $tmp258 = $tmp256.value;
int64_t $tmp259 = $tmp257.value;
int64_t $tmp260 = $tmp258 - $tmp259;
frost$core$Int $tmp261 = (frost$core$Int) {$tmp260};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int$frost$core$Int$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, $tmp252, $tmp261, param1);
return;

}

