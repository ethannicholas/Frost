#include "panda/collections/HashMap/EntryIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/HashMap/Entry.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$core$Object* panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT$shim(panda$collections$HashMap$EntryIterator* p0) {
    panda$collections$HashMap$Entry* result = panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(p0);

    return ((panda$core$Object*) result);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$HashMap$EntryIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$HashMap$EntryIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$HashMap$EntryIterator$class_type panda$collections$HashMap$EntryIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$EntryIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$HashMap$EntryIterator$cleanup, panda$collections$HashMap$EntryIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT$shim} };

typedef panda$core$Bit (*$fn67)(panda$collections$HashMap$EntryIterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 39, -8022287705701263072, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e", 196, 6351877564221287732, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };

void panda$collections$HashMap$EntryIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(panda$collections$HashMap$EntryIterator* param0, panda$collections$HashMap* param1) {

panda$core$Bit local0;
// line 43
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
panda$core$Int64* $tmp3 = &param0->bucket;
*$tmp3 = $tmp2;
// line 44
panda$collections$HashMap$Entry** $tmp4 = &param0->entry;
panda$collections$HashMap$Entry* $tmp5 = *$tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$HashMap$Entry*) NULL)));
panda$collections$HashMap$Entry** $tmp6 = &param0->entry;
*$tmp6 = ((panda$collections$HashMap$Entry*) NULL);
// line 47
panda$collections$HashMap** $tmp7 = &param0->map;
panda$collections$HashMap* $tmp8 = *$tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$collections$HashMap** $tmp9 = &param0->map;
*$tmp9 = param1;
// line 48
goto block1;
block1:;
panda$core$Int64* $tmp10 = &param0->bucket;
panda$core$Int64 $tmp11 = *$tmp10;
panda$core$Int64* $tmp12 = &param1->bucketCount;
panda$core$Int64 $tmp13 = *$tmp12;
int64_t $tmp14 = $tmp11.value;
int64_t $tmp15 = $tmp13.value;
bool $tmp16 = $tmp14 < $tmp15;
panda$core$Bit $tmp17 = (panda$core$Bit) {$tmp16};
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block4; else goto block5;
block4:;
panda$collections$HashMap$Entry*** $tmp19 = &param1->contents;
panda$collections$HashMap$Entry** $tmp20 = *$tmp19;
panda$core$Int64* $tmp21 = &param0->bucket;
panda$core$Int64 $tmp22 = *$tmp21;
int64_t $tmp23 = $tmp22.value;
panda$collections$HashMap$Entry* $tmp24 = $tmp20[$tmp23];
panda$core$Bit $tmp25 = panda$core$Bit$init$builtin_bit($tmp24 == NULL);
*(&local0) = $tmp25;
goto block6;
block5:;
*(&local0) = $tmp17;
goto block6;
block6:;
panda$core$Bit $tmp26 = *(&local0);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block2; else goto block3;
block2:;
// line 49
panda$core$Int64* $tmp28 = &param0->bucket;
panda$core$Int64 $tmp29 = *$tmp28;
panda$core$Int64 $tmp30 = (panda$core$Int64) {1};
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30.value;
int64_t $tmp33 = $tmp31 + $tmp32;
panda$core$Int64 $tmp34 = (panda$core$Int64) {$tmp33};
panda$core$Int64* $tmp35 = &param0->bucket;
*$tmp35 = $tmp34;
goto block1;
block3:;
// line 51
panda$core$Int64* $tmp36 = &param0->bucket;
panda$core$Int64 $tmp37 = *$tmp36;
panda$core$Int64* $tmp38 = &param1->bucketCount;
panda$core$Int64 $tmp39 = *$tmp38;
int64_t $tmp40 = $tmp37.value;
int64_t $tmp41 = $tmp39.value;
bool $tmp42 = $tmp40 < $tmp41;
panda$core$Bit $tmp43 = (panda$core$Bit) {$tmp42};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block7; else goto block8;
block7:;
// line 52
panda$collections$HashMap$Entry*** $tmp45 = &param1->contents;
panda$collections$HashMap$Entry** $tmp46 = *$tmp45;
panda$core$Int64* $tmp47 = &param0->bucket;
panda$core$Int64 $tmp48 = *$tmp47;
int64_t $tmp49 = $tmp48.value;
panda$collections$HashMap$Entry* $tmp50 = $tmp46[$tmp49];
panda$collections$HashMap$Entry** $tmp51 = &param0->entry;
panda$collections$HashMap$Entry* $tmp52 = *$tmp51;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
panda$collections$HashMap$Entry** $tmp53 = &param0->entry;
*$tmp53 = $tmp50;
goto block8;
block8:;
return;

}
panda$core$Bit panda$collections$HashMap$EntryIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$EntryIterator* param0) {

panda$core$Bit local0;
// line 58
panda$core$Int64* $tmp54 = &param0->bucket;
panda$core$Int64 $tmp55 = *$tmp54;
panda$collections$HashMap** $tmp56 = &param0->map;
panda$collections$HashMap* $tmp57 = *$tmp56;
panda$core$Int64* $tmp58 = &$tmp57->bucketCount;
panda$core$Int64 $tmp59 = *$tmp58;
panda$core$Bit $tmp60 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp55, $tmp59);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block1; else goto block2;
block1:;
panda$collections$HashMap$Entry** $tmp62 = &param0->entry;
panda$collections$HashMap$Entry* $tmp63 = *$tmp62;
panda$core$Bit $tmp64 = panda$core$Bit$init$builtin_bit($tmp63 == NULL);
*(&local0) = $tmp64;
goto block3;
block2:;
*(&local0) = $tmp60;
goto block3;
block3:;
panda$core$Bit $tmp65 = *(&local0);
return $tmp65;

}
panda$collections$HashMap$Entry* panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(panda$collections$HashMap$EntryIterator* param0) {

panda$collections$HashMap$Entry* local0 = NULL;
$fn67 $tmp66 = ($fn67) param0->$class->vtable[2];
panda$core$Bit $tmp68 = $tmp66(param0);
panda$core$Bit $tmp69 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp68);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp71 = (panda$core$Int64) {62};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s72, $tmp71, &$s73);
abort(); // unreachable
block1:;
// line 63
panda$collections$HashMap$Entry** $tmp74 = &param0->entry;
panda$collections$HashMap$Entry* $tmp75 = *$tmp74;
panda$core$Bit $tmp76 = panda$core$Bit$init$builtin_bit($tmp75 != NULL);
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp78 = (panda$core$Int64) {63};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s79, $tmp78);
abort(); // unreachable
block3:;
// line 64
panda$core$Int64* $tmp80 = &param0->bucket;
panda$core$Int64 $tmp81 = *$tmp80;
panda$collections$HashMap** $tmp82 = &param0->map;
panda$collections$HashMap* $tmp83 = *$tmp82;
panda$core$Int64* $tmp84 = &$tmp83->bucketCount;
panda$core$Int64 $tmp85 = *$tmp84;
int64_t $tmp86 = $tmp81.value;
int64_t $tmp87 = $tmp85.value;
bool $tmp88 = $tmp86 < $tmp87;
panda$core$Bit $tmp89 = (panda$core$Bit) {$tmp88};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp91 = (panda$core$Int64) {64};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s92, $tmp91);
abort(); // unreachable
block5:;
// line 65
panda$collections$HashMap$Entry** $tmp93 = &param0->entry;
panda$collections$HashMap$Entry* $tmp94 = *$tmp93;
*(&local0) = ((panda$collections$HashMap$Entry*) NULL);
panda$collections$HashMap$Entry* $tmp95 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
*(&local0) = $tmp94;
// line 66
panda$collections$HashMap$Entry** $tmp96 = &param0->entry;
panda$collections$HashMap$Entry* $tmp97 = *$tmp96;
panda$collections$HashMap$Entry** $tmp98 = &$tmp97->next;
panda$collections$HashMap$Entry* $tmp99 = *$tmp98;
panda$collections$HashMap$Entry** $tmp100 = &param0->entry;
panda$collections$HashMap$Entry* $tmp101 = *$tmp100;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
panda$collections$HashMap$Entry** $tmp102 = &param0->entry;
*$tmp102 = $tmp99;
// line 67
goto block7;
block7:;
panda$collections$HashMap$Entry** $tmp103 = &param0->entry;
panda$collections$HashMap$Entry* $tmp104 = *$tmp103;
panda$core$Bit $tmp105 = panda$core$Bit$init$builtin_bit($tmp104 == NULL);
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block8; else goto block9;
block8:;
// line 68
panda$core$Int64* $tmp107 = &param0->bucket;
panda$core$Int64 $tmp108 = *$tmp107;
panda$core$Int64 $tmp109 = (panda$core$Int64) {1};
int64_t $tmp110 = $tmp108.value;
int64_t $tmp111 = $tmp109.value;
int64_t $tmp112 = $tmp110 + $tmp111;
panda$core$Int64 $tmp113 = (panda$core$Int64) {$tmp112};
panda$core$Int64* $tmp114 = &param0->bucket;
*$tmp114 = $tmp113;
// line 69
panda$core$Int64* $tmp115 = &param0->bucket;
panda$core$Int64 $tmp116 = *$tmp115;
panda$collections$HashMap** $tmp117 = &param0->map;
panda$collections$HashMap* $tmp118 = *$tmp117;
panda$core$Int64* $tmp119 = &$tmp118->bucketCount;
panda$core$Int64 $tmp120 = *$tmp119;
panda$core$Bit $tmp121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp116, $tmp120);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block10; else goto block11;
block10:;
// line 70
goto block9;
block11:;
// line 72
panda$collections$HashMap** $tmp123 = &param0->map;
panda$collections$HashMap* $tmp124 = *$tmp123;
panda$collections$HashMap$Entry*** $tmp125 = &$tmp124->contents;
panda$collections$HashMap$Entry** $tmp126 = *$tmp125;
panda$core$Int64* $tmp127 = &param0->bucket;
panda$core$Int64 $tmp128 = *$tmp127;
int64_t $tmp129 = $tmp128.value;
panda$collections$HashMap$Entry* $tmp130 = $tmp126[$tmp129];
panda$collections$HashMap$Entry** $tmp131 = &param0->entry;
panda$collections$HashMap$Entry* $tmp132 = *$tmp131;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
panda$collections$HashMap$Entry** $tmp133 = &param0->entry;
*$tmp133 = $tmp130;
goto block7;
block9:;
// line 74
panda$collections$HashMap$Entry* $tmp134 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
panda$collections$HashMap$Entry* $tmp135 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
// unreffing result
*(&local0) = ((panda$collections$HashMap$Entry*) NULL);
return $tmp134;

}
void panda$collections$HashMap$EntryIterator$cleanup(panda$collections$HashMap$EntryIterator* param0) {

// line 41
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$HashMap** $tmp136 = &param0->map;
panda$collections$HashMap* $tmp137 = *$tmp136;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
panda$collections$HashMap$Entry** $tmp138 = &param0->entry;
panda$collections$HashMap$Entry* $tmp139 = *$tmp138;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
return;

}

