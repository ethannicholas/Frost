#include "org/frostlang/frost/UInt16List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt16.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt16.Cfrost/core/UInt16.GT.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/UInt32.h"

__attribute__((weak)) frost$core$Object* org$frostlang$frost$UInt16List$$IDX$frost$core$Int64$R$frost$core$UInt16$shim(org$frostlang$frost$UInt16List* p0, frost$core$Int64 p1) {
    frost$core$UInt16 result = org$frostlang$frost$UInt16List$$IDX$frost$core$Int64$R$frost$core$UInt16(p0, p1);

    frost$core$UInt16$wrapper* $tmp2;
    $tmp2 = (frost$core$UInt16$wrapper*) frostObjectAlloc(18, (frost$core$Class*) &frost$core$UInt16$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } org$frostlang$frost$UInt16List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { org$frostlang$frost$UInt16List$$IDX$frost$core$Int64$R$frost$core$UInt16$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frost$UInt16List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlang$frost$UInt16List$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } org$frostlang$frost$UInt16List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &org$frostlang$frost$UInt16List$_frost$collections$Iterable, { org$frostlang$frost$UInt16List$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
org$frostlang$frost$UInt16List$class_type org$frostlang$frost$UInt16List$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$UInt16List$_frost$collections$CollectionView, { org$frostlang$frost$UInt16List$get_asString$R$frost$core$String, org$frostlang$frost$UInt16List$cleanup, org$frostlang$frost$UInt16List$get_count$R$frost$core$Int64, org$frostlang$frost$UInt16List$$IDX$frost$core$Int64$R$frost$core$UInt16$shim} };

typedef frost$core$Int64 (*$fn20)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn53)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x31\x36\x4c\x69\x73\x74", 30, 4039612249519127878, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, -7249708953424587494, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, -7249708953424587494, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, -7249708953424587494, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 109, 7706543833766239592, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void org$frostlang$frost$UInt16List$init$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT(org$frostlang$frost$UInt16List* param0, frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:16
frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:17
// begin inline call to function org.frostlang.frost.UInt16List.computeCount(range:frost.core.SteppedRange<frost.core.UInt16, frost.core.UInt16>):frost.core.Int64 from UInt16List.frost:17:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:22
frost$core$Int64 $tmp4 = (frost$core$Int64) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5, $tmp4);
abort(); // unreachable
block1:;
frost$core$Int64 $tmp6 = *(&local0);
frost$core$Int64* $tmp7 = &param0->_count;
*$tmp7 = $tmp6;
return;

}
frost$core$Int64 org$frostlang$frost$UInt16List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT$R$frost$core$Int64(frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:22
frost$core$Int64 $tmp8 = (frost$core$Int64) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s9, $tmp8);
abort(); // unreachable

}
frost$core$Int64 org$frostlang$frost$UInt16List$get_count$R$frost$core$Int64(org$frostlang$frost$UInt16List* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:27
frost$core$Int64* $tmp10 = &param0->_count;
frost$core$Int64 $tmp11 = *$tmp10;
return $tmp11;

}
frost$core$UInt16 org$frostlang$frost$UInt16List$$IDX$frost$core$Int64$R$frost$core$UInt16(org$frostlang$frost$UInt16List* param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp12 = (frost$core$Int64) {0u};
int64_t $tmp13 = param1.value;
int64_t $tmp14 = $tmp12.value;
bool $tmp15 = $tmp13 >= $tmp14;
frost$core$Bit $tmp16 = (frost$core$Bit) {$tmp15};
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block3; else goto block2;
block3:;
ITable* $tmp18 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
$fn20 $tmp19 = $tmp18->methods[0];
frost$core$Int64 $tmp21 = $tmp19(((frost$collections$CollectionView*) param0));
int64_t $tmp22 = param1.value;
int64_t $tmp23 = $tmp21.value;
bool $tmp24 = $tmp22 < $tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp27 = (frost$core$Int64) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s28, $tmp27, &$s29);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:32
frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT* $tmp30 = &param0->range;
frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT $tmp31 = *$tmp30;
frost$core$UInt16 $tmp32 = $tmp31.start;
frost$core$UInt32 $tmp33 = frost$core$UInt32$init$frost$core$UInt16($tmp32);
frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT* $tmp34 = &param0->range;
frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT $tmp35 = *$tmp34;
frost$core$UInt16 $tmp36 = $tmp35.step;
frost$core$UInt32 $tmp37 = frost$core$UInt32$init$frost$core$UInt16($tmp36);
// begin inline call to function frost.core.Int64.get_asUInt16():frost.core.UInt16 from UInt16List.frost:32:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:543
int64_t $tmp38 = param1.value;
frost$core$UInt16 $tmp39 = (frost$core$UInt16) {((uint16_t) $tmp38)};
frost$core$UInt32 $tmp40 = frost$core$UInt32$init$frost$core$UInt16($tmp39);
uint32_t $tmp41 = $tmp37.value;
uint32_t $tmp42 = $tmp40.value;
uint32_t $tmp43 = $tmp41 * $tmp42;
frost$core$UInt32 $tmp44 = (frost$core$UInt32) {$tmp43};
uint32_t $tmp45 = $tmp33.value;
uint32_t $tmp46 = $tmp44.value;
uint32_t $tmp47 = $tmp45 + $tmp46;
frost$core$UInt32 $tmp48 = (frost$core$UInt32) {$tmp47};
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from UInt16List.frost:32:59
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:756
uint32_t $tmp49 = $tmp48.value;
frost$core$UInt16 $tmp50 = (frost$core$UInt16) {((uint16_t) $tmp49)};
return $tmp50;

}
frost$core$String* org$frostlang$frost$UInt16List$get_asString$R$frost$core$String(org$frostlang$frost$UInt16List* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:37
ITable* $tmp51 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp51->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp51 = $tmp51->next;
}
$fn53 $tmp52 = $tmp51->methods[2];
frost$core$String* $tmp54 = $tmp52(((frost$collections$CollectionView*) param0), &$s55);
frost$core$String* $tmp56 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s57, $tmp54);
frost$core$String* $tmp58 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp56, &$s59);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
return $tmp58;

}
void org$frostlang$frost$UInt16List$cleanup(org$frostlang$frost$UInt16List* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:8
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

