#include "org/frostlang/frostc/FixedArray.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/FixedArray/FixedArrayIterator.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$collections$Iterator* org$frostlang$frostc$FixedArray$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$FixedArray$T$GT$shim(org$frostlang$frostc$FixedArray* p0) {
    frost$collections$Iterator* result = org$frostlang$frostc$FixedArray$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$FixedArray$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T$shim(org$frostlang$frostc$FixedArray* p0, frost$core$Int p1) {
    frost$core$Object* result = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(p0, p1);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } org$frostlang$frostc$FixedArray$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { org$frostlang$frostc$FixedArray$get_count$R$frost$core$Int, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$FixedArray$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlang$frostc$FixedArray$_frost$collections$CollectionView, { org$frostlang$frostc$FixedArray$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$FixedArray$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } org$frostlang$frostc$FixedArray$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &org$frostlang$frostc$FixedArray$_frost$collections$Iterable, { org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

static frost$core$String $s1;
org$frostlang$frostc$FixedArray$class_type org$frostlang$frostc$FixedArray$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$FixedArray$_frost$collections$ListView, { org$frostlang$frostc$FixedArray$get_asString$R$frost$core$String, org$frostlang$frostc$FixedArray$cleanup, org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T$shim, org$frostlang$frostc$FixedArray$get_count$R$frost$core$Int, org$frostlang$frostc$FixedArray$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$FixedArray$T$GT$shim} };

typedef frost$core$Int (*$fn10)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn22)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn48)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn96)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn150)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn168)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn195)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn199)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn204)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn218)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79", 31, -9121689662595246717, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 16, -6247431822907188018, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x54", 124, -687733006522056811, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 16, -6247431822907188018, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void org$frostlang$frostc$FixedArray$init(org$frostlang$frostc$FixedArray* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:39
frost$core$Int $tmp2 = (frost$core$Int) {0u};
frost$core$Int* $tmp3 = &param0->_count;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:40
frost$core$Int64 $tmp4 = (frost$core$Int64) {0u};
int64_t $tmp5 = $tmp4.value;
frost$core$Object** $tmp6 = ((frost$core$Object**) frostAlloc($tmp5 * 8));
frost$core$Object*** $tmp7 = &param0->data;
*$tmp7 = $tmp6;
return;

}
void org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT(org$frostlang$frostc$FixedArray* param0, frost$collections$ListView* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:44
ITable* $tmp8 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
frost$core$Int $tmp11 = $tmp9(((frost$collections$CollectionView*) param1));
frost$core$Int* $tmp12 = &param0->_count;
*$tmp12 = $tmp11;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:45
frost$core$Int* $tmp13 = &param0->_count;
frost$core$Int $tmp14 = *$tmp13;
frost$core$Int64 $tmp15 = frost$core$Int64$init$frost$core$Int($tmp14);
int64_t $tmp16 = $tmp15.value;
frost$core$Object** $tmp17 = ((frost$core$Object**) frostAlloc($tmp16 * 8));
frost$core$Object*** $tmp18 = &param0->data;
*$tmp18 = $tmp17;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:46
frost$core$Int $tmp19 = (frost$core$Int) {0u};
ITable* $tmp20 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
frost$core$Int $tmp23 = $tmp21(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp24 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp25 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp19, $tmp23, $tmp24);
frost$core$Int $tmp26 = $tmp25.min;
*(&local0) = $tmp26;
frost$core$Int $tmp27 = $tmp25.max;
frost$core$Bit $tmp28 = $tmp25.inclusive;
bool $tmp29 = $tmp28.value;
frost$core$Int $tmp30 = (frost$core$Int) {1u};
if ($tmp29) goto block4; else goto block5;
block4:;
int64_t $tmp31 = $tmp26.value;
int64_t $tmp32 = $tmp27.value;
bool $tmp33 = $tmp31 <= $tmp32;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block1; else goto block2;
block5:;
int64_t $tmp36 = $tmp26.value;
int64_t $tmp37 = $tmp27.value;
bool $tmp38 = $tmp36 < $tmp37;
frost$core$Bit $tmp39 = (frost$core$Bit) {$tmp38};
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:47
frost$core$Object*** $tmp41 = &param0->data;
frost$core$Object** $tmp42 = *$tmp41;
frost$core$Int $tmp43 = *(&local0);
frost$core$Int64 $tmp44 = frost$core$Int64$init$frost$core$Int($tmp43);
frost$core$Int $tmp45 = *(&local0);
ITable* $tmp46 = param1->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[0];
frost$core$Object* $tmp49 = $tmp47(param1, $tmp45);
int64_t $tmp50 = $tmp44.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp49);
frost$core$Object* $tmp51 = $tmp42[$tmp50];
frost$core$Frost$unref$frost$core$Object$Q($tmp51);
$tmp42[$tmp50] = $tmp49;
frost$core$Frost$unref$frost$core$Object$Q($tmp49);
frost$core$Int $tmp52 = *(&local0);
int64_t $tmp53 = $tmp27.value;
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53 - $tmp54;
frost$core$Int $tmp56 = (frost$core$Int) {$tmp55};
if ($tmp29) goto block7; else goto block8;
block7:;
int64_t $tmp57 = $tmp56.value;
int64_t $tmp58 = $tmp30.value;
bool $tmp59 = $tmp57 >= $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block6; else goto block2;
block8:;
int64_t $tmp62 = $tmp56.value;
int64_t $tmp63 = $tmp30.value;
bool $tmp64 = $tmp62 > $tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block6; else goto block2;
block6:;
int64_t $tmp67 = $tmp52.value;
int64_t $tmp68 = $tmp30.value;
int64_t $tmp69 = $tmp67 + $tmp68;
frost$core$Int $tmp70 = (frost$core$Int) {$tmp69};
*(&local0) = $tmp70;
goto block1;
block2:;
return;

}
void org$frostlang$frostc$FixedArray$init$frost$unsafe$Pointer$LTorg$frostlang$frostc$FixedArray$T$GT$frost$core$Int(org$frostlang$frostc$FixedArray* param0, frost$core$Object** param1, frost$core$Int param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:53
frost$core$Object*** $tmp71 = &param0->data;
*$tmp71 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:54
frost$core$Int* $tmp72 = &param0->_count;
*$tmp72 = param2;
return;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT(frost$collections$Array* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:67
frost$core$Object*** $tmp73 = &param0->data;
frost$core$Object** $tmp74 = *$tmp73;
frost$core$Int* $tmp75 = &param0->capacity;
frost$core$Int $tmp76 = *$tmp75;
frost$core$Int64 $tmp77 = frost$core$Int64$init$frost$core$Int($tmp76);
frost$core$Int* $tmp78 = &param0->_count;
frost$core$Int $tmp79 = *$tmp78;
frost$core$Int64 $tmp80 = frost$core$Int64$init$frost$core$Int($tmp79);
int64_t $tmp81 = $tmp77.value;
int64_t $tmp82 = $tmp80.value;
frost$core$Object** $tmp83 = (frost$core$Object**) frostRealloc($tmp74, $tmp81 * 8, $tmp82 * 8);
frost$core$Object*** $tmp84 = &param0->data;
*$tmp84 = $tmp83;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:68
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp85 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp85);
frost$core$Class** $tmp86 = &((frost$core$Object*) $tmp85)->$class;
frost$core$Class* $tmp87 = *$tmp86;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Class** $tmp88 = &((frost$core$Object*) param0)->$class;
frost$core$Class* $tmp89 = *$tmp88;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Class** $tmp90 = &((frost$core$Object*) param0)->$class;
*$tmp90 = $tmp87;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:69
frost$core$Int $tmp91 = (frost$core$Int) {18446744073709551615u};
frost$core$Int* $tmp92 = &param0->capacity;
*$tmp92 = $tmp91;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:70
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) ((frost$core$Object*) param0))));
return ((org$frostlang$frostc$FixedArray*) ((frost$core$Object*) param0));

}
void org$frostlang$frostc$FixedArray$cleanup(org$frostlang$frostc$FixedArray* param0) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:75
frost$core$Int $tmp93 = (frost$core$Int) {0u};
ITable* $tmp94 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp94->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp94 = $tmp94->next;
}
$fn96 $tmp95 = $tmp94->methods[0];
frost$core$Int $tmp97 = $tmp95(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp98 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp99 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp93, $tmp97, $tmp98);
frost$core$Int $tmp100 = $tmp99.min;
*(&local0) = $tmp100;
frost$core$Int $tmp101 = $tmp99.max;
frost$core$Bit $tmp102 = $tmp99.inclusive;
bool $tmp103 = $tmp102.value;
frost$core$Int $tmp104 = (frost$core$Int) {1u};
if ($tmp103) goto block4; else goto block5;
block4:;
int64_t $tmp105 = $tmp100.value;
int64_t $tmp106 = $tmp101.value;
bool $tmp107 = $tmp105 <= $tmp106;
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107};
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block1; else goto block2;
block5:;
int64_t $tmp110 = $tmp100.value;
int64_t $tmp111 = $tmp101.value;
bool $tmp112 = $tmp110 < $tmp111;
frost$core$Bit $tmp113 = (frost$core$Bit) {$tmp112};
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:76
frost$core$Object*** $tmp115 = &param0->data;
frost$core$Object** $tmp116 = *$tmp115;
frost$core$Int $tmp117 = *(&local0);
frost$core$Int64 $tmp118 = frost$core$Int64$init$frost$core$Int($tmp117);
int64_t $tmp119 = $tmp118.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$core$Object* $tmp120 = $tmp116[$tmp119];
frost$core$Frost$unref$frost$core$Object$Q($tmp120);
$tmp116[$tmp119] = ((frost$core$Object*) NULL);
frost$core$Int $tmp121 = *(&local0);
int64_t $tmp122 = $tmp101.value;
int64_t $tmp123 = $tmp121.value;
int64_t $tmp124 = $tmp122 - $tmp123;
frost$core$Int $tmp125 = (frost$core$Int) {$tmp124};
if ($tmp103) goto block7; else goto block8;
block7:;
int64_t $tmp126 = $tmp125.value;
int64_t $tmp127 = $tmp104.value;
bool $tmp128 = $tmp126 >= $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block6; else goto block2;
block8:;
int64_t $tmp131 = $tmp125.value;
int64_t $tmp132 = $tmp104.value;
bool $tmp133 = $tmp131 > $tmp132;
frost$core$Bit $tmp134 = (frost$core$Bit) {$tmp133};
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block6; else goto block2;
block6:;
int64_t $tmp136 = $tmp121.value;
int64_t $tmp137 = $tmp104.value;
int64_t $tmp138 = $tmp136 + $tmp137;
frost$core$Int $tmp139 = (frost$core$Int) {$tmp138};
*(&local0) = $tmp139;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:78
frost$core$Object*** $tmp140 = &param0->data;
frost$core$Object** $tmp141 = *$tmp140;
frostFree($tmp141);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:74
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Object* org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(org$frostlang$frostc$FixedArray* param0, frost$core$Int param1) {

frost$core$Bit local0;
frost$core$Int $tmp142 = (frost$core$Int) {0u};
int64_t $tmp143 = param1.value;
int64_t $tmp144 = $tmp142.value;
bool $tmp145 = $tmp143 >= $tmp144;
frost$core$Bit $tmp146 = (frost$core$Bit) {$tmp145};
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block3; else goto block2;
block3:;
ITable* $tmp148 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp148->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp148 = $tmp148->next;
}
$fn150 $tmp149 = $tmp148->methods[0];
frost$core$Int $tmp151 = $tmp149(((frost$collections$CollectionView*) param0));
int64_t $tmp152 = param1.value;
int64_t $tmp153 = $tmp151.value;
bool $tmp154 = $tmp152 < $tmp153;
frost$core$Bit $tmp155 = (frost$core$Bit) {$tmp154};
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block1; else goto block2;
block2:;
frost$core$Int $tmp157 = (frost$core$Int) {82u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s158, $tmp157, &$s159);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:83
frost$core$Int $tmp160 = (frost$core$Int) {0u};
int64_t $tmp161 = param1.value;
int64_t $tmp162 = $tmp160.value;
bool $tmp163 = $tmp161 >= $tmp162;
frost$core$Bit $tmp164 = (frost$core$Bit) {$tmp163};
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block4; else goto block5;
block4:;
ITable* $tmp166 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp166->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[0];
frost$core$Int $tmp169 = $tmp167(((frost$collections$CollectionView*) param0));
int64_t $tmp170 = param1.value;
int64_t $tmp171 = $tmp169.value;
bool $tmp172 = $tmp170 < $tmp171;
frost$core$Bit $tmp173 = (frost$core$Bit) {$tmp172};
*(&local0) = $tmp173;
goto block6;
block5:;
*(&local0) = $tmp164;
goto block6;
block6:;
frost$core$Bit $tmp174 = *(&local0);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block7; else goto block8;
block8:;
frost$core$Int $tmp176 = (frost$core$Int) {83u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s177, $tmp176);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:84
frost$core$Object*** $tmp178 = &param0->data;
frost$core$Object** $tmp179 = *$tmp178;
frost$core$Int64 $tmp180 = frost$core$Int64$init$frost$core$Int(param1);
int64_t $tmp181 = $tmp180.value;
frost$core$Object* $tmp182 = $tmp179[$tmp181];
frost$core$Frost$ref$frost$core$Object$Q($tmp182);
return $tmp182;

}
frost$core$Int org$frostlang$frostc$FixedArray$get_count$R$frost$core$Int(org$frostlang$frostc$FixedArray* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:89
frost$core$Int* $tmp183 = &param0->_count;
frost$core$Int $tmp184 = *$tmp183;
return $tmp184;

}
frost$collections$Iterator* org$frostlang$frostc$FixedArray$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$FixedArray$T$GT(org$frostlang$frostc$FixedArray* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:94
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$FixedArray$FixedArrayIterator));
org$frostlang$frostc$FixedArray$FixedArrayIterator* $tmp185 = (org$frostlang$frostc$FixedArray$FixedArrayIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$FixedArray$FixedArrayIterator$class);
org$frostlang$frostc$FixedArray$FixedArrayIterator$init$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$FixedArrayIterator$T$GT($tmp185, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp185)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
return ((frost$collections$Iterator*) $tmp185);

}
frost$core$String* org$frostlang$frostc$FixedArray$get_asString$R$frost$core$String(org$frostlang$frostc$FixedArray* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Object* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:99
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp186 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp186);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
frost$core$MutableString* $tmp187 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
*(&local0) = $tmp186;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:100
frost$core$MutableString* $tmp188 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp188, &$s189);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:101
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s190));
frost$core$String* $tmp191 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local1) = &$s192;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:102
ITable* $tmp193 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp193->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp193 = $tmp193->next;
}
$fn195 $tmp194 = $tmp193->methods[0];
frost$collections$Iterator* $tmp196 = $tmp194(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp197 = $tmp196->$class->itable;
while ($tmp197->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp197 = $tmp197->next;
}
$fn199 $tmp198 = $tmp197->methods[0];
frost$core$Bit $tmp200 = $tmp198($tmp196);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp202 = $tmp196->$class->itable;
while ($tmp202->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp202 = $tmp202->next;
}
$fn204 $tmp203 = $tmp202->methods[1];
frost$core$Object* $tmp205 = $tmp203($tmp196);
frost$core$Frost$ref$frost$core$Object$Q($tmp205);
frost$core$Object* $tmp206 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp206);
*(&local2) = $tmp205;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:103
frost$core$MutableString* $tmp207 = *(&local0);
frost$core$String* $tmp208 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp207, $tmp208);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:104
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s209));
frost$core$String* $tmp210 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local1) = &$s211;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:105
frost$core$Object* $tmp212 = *(&local2);
frost$core$Bit $tmp213 = (frost$core$Bit) {true};
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:106
frost$core$MutableString* $tmp215 = *(&local0);
frost$core$Object* $tmp216 = *(&local2);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from FixedArray.frost:106:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn218 $tmp217 = ($fn218) $tmp216->$class->vtable[0];
frost$core$String* $tmp219 = $tmp217($tmp216);
frost$core$MutableString$append$frost$core$String($tmp215, $tmp219);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:109
frost$core$MutableString* $tmp220 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp220, &$s221);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp205);
frost$core$Object* $tmp222 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp222);
*(&local2) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:112
frost$core$MutableString* $tmp223 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp223, &$s224);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:113
frost$core$MutableString* $tmp225 = *(&local0);
frost$core$String* $tmp226 = frost$core$MutableString$finish$R$frost$core$String($tmp225);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$String* $tmp227 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp228 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp226;

}

