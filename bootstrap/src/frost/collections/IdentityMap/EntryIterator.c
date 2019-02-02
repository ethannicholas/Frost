#include "frost/collections/IdentityMap/EntryIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Tuple2.h"
#include "frost/collections/IdentityMap.h"
#include "frost/core/Int64.h"
#include "frost/collections/IdentityMap/Entry.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"

__attribute__((weak)) frost$core$Object* frost$collections$IdentityMap$EntryIterator$next$R$$LPfrost$collections$IdentityMap$EntryIterator$K$Cfrost$collections$IdentityMap$EntryIterator$V$RP$shim(frost$collections$IdentityMap$EntryIterator* p0) {
    frost$core$Tuple2* result = frost$collections$IdentityMap$EntryIterator$next$R$$LPfrost$collections$IdentityMap$EntryIterator$K$Cfrost$collections$IdentityMap$EntryIterator$V$RP(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$IdentityMap$EntryIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$IdentityMap$EntryIterator$get_done$R$frost$core$Bit, frost$collections$IdentityMap$EntryIterator$next$R$$LPfrost$collections$IdentityMap$EntryIterator$K$Cfrost$collections$IdentityMap$EntryIterator$V$RP$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$IdentityMap$EntryIterator$class_type frost$collections$IdentityMap$EntryIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$IdentityMap$EntryIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$IdentityMap$EntryIterator$cleanup, frost$collections$IdentityMap$EntryIterator$get_done$R$frost$core$Bit, frost$collections$IdentityMap$EntryIterator$next$R$$LPfrost$collections$IdentityMap$EntryIterator$K$Cfrost$collections$IdentityMap$EntryIterator$V$RP$shim} };

typedef frost$core$Bit (*$fn67)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 43, 664695482508992124, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x29", 177, 3517766199428343022, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };

void frost$collections$IdentityMap$EntryIterator$init$frost$collections$IdentityMap$LTfrost$collections$IdentityMap$EntryIterator$K$Cfrost$collections$IdentityMap$EntryIterator$V$GT(frost$collections$IdentityMap$EntryIterator* param0, frost$collections$IdentityMap* param1) {

// line 37
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->bucket;
*$tmp3 = $tmp2;
// line 38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry** $tmp4 = &param0->entry;
frost$collections$IdentityMap$Entry* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$IdentityMap$Entry** $tmp6 = &param0->entry;
*$tmp6 = ((frost$collections$IdentityMap$Entry*) NULL);
// line 41
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$IdentityMap** $tmp7 = &param0->map;
frost$collections$IdentityMap* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$IdentityMap** $tmp9 = &param0->map;
*$tmp9 = param1;
// line 42
goto block1;
block1:;
frost$core$Int64* $tmp10 = &param0->bucket;
frost$core$Int64 $tmp11 = *$tmp10;
frost$core$Int64* $tmp12 = &param1->bucketCount;
frost$core$Int64 $tmp13 = *$tmp12;
int64_t $tmp14 = $tmp11.value;
int64_t $tmp15 = $tmp13.value;
bool $tmp16 = $tmp14 < $tmp15;
frost$core$Bit $tmp17 = (frost$core$Bit) {$tmp16};
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block4; else goto block3;
block4:;
frost$collections$IdentityMap$Entry*** $tmp19 = &param1->contents;
frost$collections$IdentityMap$Entry** $tmp20 = *$tmp19;
frost$core$Int64* $tmp21 = &param0->bucket;
frost$core$Int64 $tmp22 = *$tmp21;
int64_t $tmp23 = $tmp22.value;
frost$collections$IdentityMap$Entry* $tmp24 = $tmp20[$tmp23];
frost$core$Bit $tmp25 = frost$core$Bit$init$builtin_bit($tmp24 == NULL);
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block2; else goto block3;
block2:;
// line 43
frost$core$Int64* $tmp27 = &param0->bucket;
frost$core$Int64 $tmp28 = *$tmp27;
frost$core$Int64 $tmp29 = (frost$core$Int64) {1};
int64_t $tmp30 = $tmp28.value;
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30 + $tmp31;
frost$core$Int64 $tmp33 = (frost$core$Int64) {$tmp32};
frost$core$Int64* $tmp34 = &param0->bucket;
*$tmp34 = $tmp33;
goto block1;
block3:;
// line 45
frost$core$Int64* $tmp35 = &param0->bucket;
frost$core$Int64 $tmp36 = *$tmp35;
frost$core$Int64* $tmp37 = &param1->bucketCount;
frost$core$Int64 $tmp38 = *$tmp37;
int64_t $tmp39 = $tmp36.value;
int64_t $tmp40 = $tmp38.value;
bool $tmp41 = $tmp39 < $tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block5; else goto block6;
block5:;
// line 46
frost$collections$IdentityMap$Entry*** $tmp44 = &param1->contents;
frost$collections$IdentityMap$Entry** $tmp45 = *$tmp44;
frost$core$Int64* $tmp46 = &param0->bucket;
frost$core$Int64 $tmp47 = *$tmp46;
int64_t $tmp48 = $tmp47.value;
frost$collections$IdentityMap$Entry* $tmp49 = $tmp45[$tmp48];
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$collections$IdentityMap$Entry** $tmp50 = &param0->entry;
frost$collections$IdentityMap$Entry* $tmp51 = *$tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$collections$IdentityMap$Entry** $tmp52 = &param0->entry;
*$tmp52 = $tmp49;
goto block6;
block6:;
return;

}
frost$core$Bit frost$collections$IdentityMap$EntryIterator$get_done$R$frost$core$Bit(frost$collections$IdentityMap$EntryIterator* param0) {

frost$core$Bit local0;
// line 52
frost$core$Int64* $tmp53 = &param0->bucket;
frost$core$Int64 $tmp54 = *$tmp53;
frost$collections$IdentityMap** $tmp55 = &param0->map;
frost$collections$IdentityMap* $tmp56 = *$tmp55;
frost$core$Int64* $tmp57 = &$tmp56->bucketCount;
frost$core$Int64 $tmp58 = *$tmp57;
frost$core$Bit $tmp59 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp54, $tmp58);
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block1; else goto block2;
block1:;
frost$collections$IdentityMap$Entry** $tmp61 = &param0->entry;
frost$collections$IdentityMap$Entry* $tmp62 = *$tmp61;
frost$core$Bit $tmp63 = frost$core$Bit$init$builtin_bit($tmp62 == NULL);
*(&local0) = $tmp63;
goto block3;
block2:;
*(&local0) = $tmp59;
goto block3;
block3:;
frost$core$Bit $tmp64 = *(&local0);
return $tmp64;

}
frost$core$Tuple2* frost$collections$IdentityMap$EntryIterator$next$R$$LPfrost$collections$IdentityMap$EntryIterator$K$Cfrost$collections$IdentityMap$EntryIterator$V$RP(frost$collections$IdentityMap$EntryIterator* param0) {

frost$collections$IdentityMap$Entry* local0 = NULL;
ITable* $tmp65 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp65->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp65 = $tmp65->next;
}
$fn67 $tmp66 = $tmp65->methods[0];
frost$core$Bit $tmp68 = $tmp66(((frost$collections$Iterator*) param0));
frost$core$Bit $tmp69 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp68);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp71 = (frost$core$Int64) {56};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s72, $tmp71, &$s73);
abort(); // unreachable
block1:;
// line 57
frost$collections$IdentityMap$Entry** $tmp74 = &param0->entry;
frost$collections$IdentityMap$Entry* $tmp75 = *$tmp74;
frost$core$Bit $tmp76 = frost$core$Bit$init$builtin_bit($tmp75 != NULL);
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp78 = (frost$core$Int64) {57};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s79, $tmp78);
abort(); // unreachable
block3:;
// line 58
frost$core$Int64* $tmp80 = &param0->bucket;
frost$core$Int64 $tmp81 = *$tmp80;
frost$collections$IdentityMap** $tmp82 = &param0->map;
frost$collections$IdentityMap* $tmp83 = *$tmp82;
frost$core$Int64* $tmp84 = &$tmp83->bucketCount;
frost$core$Int64 $tmp85 = *$tmp84;
int64_t $tmp86 = $tmp81.value;
int64_t $tmp87 = $tmp85.value;
bool $tmp88 = $tmp86 < $tmp87;
frost$core$Bit $tmp89 = (frost$core$Bit) {$tmp88};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp91 = (frost$core$Int64) {58};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s92, $tmp91);
abort(); // unreachable
block5:;
// line 59
frost$collections$IdentityMap$Entry** $tmp93 = &param0->entry;
frost$collections$IdentityMap$Entry* $tmp94 = *$tmp93;
*(&local0) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$collections$IdentityMap$Entry* $tmp95 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local0) = $tmp94;
// line 60
frost$collections$IdentityMap$Entry** $tmp96 = &param0->entry;
frost$collections$IdentityMap$Entry* $tmp97 = *$tmp96;
frost$collections$IdentityMap$Entry** $tmp98 = &$tmp97->next;
frost$collections$IdentityMap$Entry* $tmp99 = *$tmp98;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$collections$IdentityMap$Entry** $tmp100 = &param0->entry;
frost$collections$IdentityMap$Entry* $tmp101 = *$tmp100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$collections$IdentityMap$Entry** $tmp102 = &param0->entry;
*$tmp102 = $tmp99;
// line 61
goto block7;
block7:;
frost$collections$IdentityMap$Entry** $tmp103 = &param0->entry;
frost$collections$IdentityMap$Entry* $tmp104 = *$tmp103;
frost$core$Bit $tmp105 = frost$core$Bit$init$builtin_bit($tmp104 == NULL);
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block8; else goto block9;
block8:;
// line 62
frost$core$Int64* $tmp107 = &param0->bucket;
frost$core$Int64 $tmp108 = *$tmp107;
frost$core$Int64 $tmp109 = (frost$core$Int64) {1};
int64_t $tmp110 = $tmp108.value;
int64_t $tmp111 = $tmp109.value;
int64_t $tmp112 = $tmp110 + $tmp111;
frost$core$Int64 $tmp113 = (frost$core$Int64) {$tmp112};
frost$core$Int64* $tmp114 = &param0->bucket;
*$tmp114 = $tmp113;
// line 63
frost$core$Int64* $tmp115 = &param0->bucket;
frost$core$Int64 $tmp116 = *$tmp115;
frost$collections$IdentityMap** $tmp117 = &param0->map;
frost$collections$IdentityMap* $tmp118 = *$tmp117;
frost$core$Int64* $tmp119 = &$tmp118->bucketCount;
frost$core$Int64 $tmp120 = *$tmp119;
frost$core$Bit $tmp121 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp116, $tmp120);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block10; else goto block11;
block10:;
// line 64
goto block9;
block11:;
// line 66
frost$collections$IdentityMap** $tmp123 = &param0->map;
frost$collections$IdentityMap* $tmp124 = *$tmp123;
frost$collections$IdentityMap$Entry*** $tmp125 = &$tmp124->contents;
frost$collections$IdentityMap$Entry** $tmp126 = *$tmp125;
frost$core$Int64* $tmp127 = &param0->bucket;
frost$core$Int64 $tmp128 = *$tmp127;
int64_t $tmp129 = $tmp128.value;
frost$collections$IdentityMap$Entry* $tmp130 = $tmp126[$tmp129];
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$collections$IdentityMap$Entry** $tmp131 = &param0->entry;
frost$collections$IdentityMap$Entry* $tmp132 = *$tmp131;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$collections$IdentityMap$Entry** $tmp133 = &param0->entry;
*$tmp133 = $tmp130;
goto block7;
block9:;
// line 68
FROST_ASSERT(32 == sizeof(frost$core$Tuple2));
frost$core$Tuple2* $tmp134 = (frost$core$Tuple2*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Tuple2$class);
frost$collections$IdentityMap$Entry* $tmp135 = *(&local0);
frost$core$Object** $tmp136 = &$tmp135->key;
frost$core$Object* $tmp137 = *$tmp136;
frost$collections$IdentityMap$Entry* $tmp138 = *(&local0);
frost$core$Object** $tmp139 = &$tmp138->value;
frost$core$Object* $tmp140 = *$tmp139;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1($tmp134, $tmp137, $tmp140);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$collections$IdentityMap$Entry* $tmp141 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local0) = ((frost$collections$IdentityMap$Entry*) NULL);
return $tmp134;

}
void frost$collections$IdentityMap$EntryIterator$cleanup(frost$collections$IdentityMap$EntryIterator* param0) {

// line 35
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$IdentityMap** $tmp142 = &param0->map;
frost$collections$IdentityMap* $tmp143 = *$tmp142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$collections$IdentityMap$Entry** $tmp144 = &param0->entry;
frost$collections$IdentityMap$Entry* $tmp145 = *$tmp144;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
return;

}






