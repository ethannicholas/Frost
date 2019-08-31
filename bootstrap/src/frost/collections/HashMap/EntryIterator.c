#include "frost/collections/HashMap/EntryIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Tuple2.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Int.h"
#include "frost/collections/HashMap/Entry.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/collections/HashKey.h"

__attribute__((weak)) frost$core$Object* frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP$shim(frost$collections$HashMap$EntryIterator* p0) {
    frost$core$Tuple2* result = frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$HashMap$EntryIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$HashMap$EntryIterator$get_done$R$frost$core$Bit, frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$HashMap$EntryIterator$class_type frost$collections$HashMap$EntryIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$HashMap$EntryIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$HashMap$EntryIterator$cleanup, frost$collections$HashMap$EntryIterator$get_done$R$frost$core$Bit, frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP$shim} };

typedef frost$core$Bit (*$fn72)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 39, 1175059209093268818, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x29", 165, 6278041426078439422, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e", 273, 4111340678981763157, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e", 273, 4111340678981763157, NULL };

void frost$collections$HashMap$EntryIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$GT(frost$collections$HashMap$EntryIterator* param0, frost$collections$HashMap* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:43
frost$core$Int $tmp2 = (frost$core$Int) {0u};
frost$core$Int* $tmp3 = &param0->bucket;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:44
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry** $tmp4 = &param0->entry;
frost$collections$HashMap$Entry* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$HashMap$Entry** $tmp6 = &param0->entry;
*$tmp6 = ((frost$collections$HashMap$Entry*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:47
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$HashMap** $tmp7 = &param0->map;
frost$collections$HashMap* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$HashMap** $tmp9 = &param0->map;
*$tmp9 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:48
goto block1;
block1:;
frost$core$Int* $tmp10 = &param0->bucket;
frost$core$Int $tmp11 = *$tmp10;
frost$core$Int* $tmp12 = &param1->bucketCount;
frost$core$Int $tmp13 = *$tmp12;
int64_t $tmp14 = $tmp11.value;
int64_t $tmp15 = $tmp13.value;
bool $tmp16 = $tmp14 < $tmp15;
frost$core$Bit $tmp17 = (frost$core$Bit) {$tmp16};
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block4; else goto block3;
block4:;
frost$collections$HashMap$Entry*** $tmp19 = &param1->contents;
frost$collections$HashMap$Entry** $tmp20 = *$tmp19;
frost$core$Int* $tmp21 = &param0->bucket;
frost$core$Int $tmp22 = *$tmp21;
frost$core$Int64 $tmp23 = frost$core$Int64$init$frost$core$Int($tmp22);
int64_t $tmp24 = $tmp23.value;
frost$collections$HashMap$Entry* $tmp25 = $tmp20[$tmp24];
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25 == NULL};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:49
frost$core$Int* $tmp28 = &param0->bucket;
frost$core$Int $tmp29 = *$tmp28;
frost$core$Int $tmp30 = (frost$core$Int) {1u};
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30.value;
int64_t $tmp33 = $tmp31 + $tmp32;
frost$core$Int $tmp34 = (frost$core$Int) {$tmp33};
frost$core$Int* $tmp35 = &param0->bucket;
*$tmp35 = $tmp34;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:51
frost$core$Int* $tmp36 = &param0->bucket;
frost$core$Int $tmp37 = *$tmp36;
frost$core$Int* $tmp38 = &param1->bucketCount;
frost$core$Int $tmp39 = *$tmp38;
int64_t $tmp40 = $tmp37.value;
int64_t $tmp41 = $tmp39.value;
bool $tmp42 = $tmp40 < $tmp41;
frost$core$Bit $tmp43 = (frost$core$Bit) {$tmp42};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:52
frost$collections$HashMap$Entry*** $tmp45 = &param1->contents;
frost$collections$HashMap$Entry** $tmp46 = *$tmp45;
frost$core$Int* $tmp47 = &param0->bucket;
frost$core$Int $tmp48 = *$tmp47;
frost$core$Int64 $tmp49 = frost$core$Int64$init$frost$core$Int($tmp48);
int64_t $tmp50 = $tmp49.value;
frost$collections$HashMap$Entry* $tmp51 = $tmp46[$tmp50];
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$collections$HashMap$Entry** $tmp52 = &param0->entry;
frost$collections$HashMap$Entry* $tmp53 = *$tmp52;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$collections$HashMap$Entry** $tmp54 = &param0->entry;
*$tmp54 = $tmp51;
goto block6;
block6:;
return;

}
frost$core$Bit frost$collections$HashMap$EntryIterator$get_done$R$frost$core$Bit(frost$collections$HashMap$EntryIterator* param0) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:58
frost$core$Int* $tmp55 = &param0->bucket;
frost$core$Int $tmp56 = *$tmp55;
frost$collections$HashMap** $tmp57 = &param0->map;
frost$collections$HashMap* $tmp58 = *$tmp57;
frost$core$Int* $tmp59 = &$tmp58->bucketCount;
frost$core$Int $tmp60 = *$tmp59;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HashMap.frost:58:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp61 = $tmp56.value;
int64_t $tmp62 = $tmp60.value;
bool $tmp63 = $tmp61 == $tmp62;
frost$core$Bit $tmp64 = (frost$core$Bit) {$tmp63};
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block2; else goto block3;
block2:;
frost$collections$HashMap$Entry** $tmp66 = &param0->entry;
frost$collections$HashMap$Entry* $tmp67 = *$tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67 == NULL};
*(&local0) = $tmp68;
goto block4;
block3:;
*(&local0) = $tmp64;
goto block4;
block4:;
frost$core$Bit $tmp69 = *(&local0);
return $tmp69;

}
frost$core$Tuple2* frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP(frost$collections$HashMap$EntryIterator* param0) {

frost$collections$HashMap$Entry* local0 = NULL;
ITable* $tmp70 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp70->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp70 = $tmp70->next;
}
$fn72 $tmp71 = $tmp70->methods[0];
frost$core$Bit $tmp73 = $tmp71(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp74 = $tmp73.value;
bool $tmp75 = !$tmp74;
frost$core$Bit $tmp76 = (frost$core$Bit) {$tmp75};
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block1; else goto block2;
block2:;
frost$core$Int $tmp78 = (frost$core$Int) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s79, $tmp78, &$s80);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:63
frost$collections$HashMap$Entry** $tmp81 = &param0->entry;
frost$collections$HashMap$Entry* $tmp82 = *$tmp81;
frost$core$Bit $tmp83 = (frost$core$Bit) {$tmp82 != NULL};
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block4; else goto block5;
block5:;
frost$core$Int $tmp85 = (frost$core$Int) {63u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s86, $tmp85);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:64
frost$core$Int* $tmp87 = &param0->bucket;
frost$core$Int $tmp88 = *$tmp87;
frost$collections$HashMap** $tmp89 = &param0->map;
frost$collections$HashMap* $tmp90 = *$tmp89;
frost$core$Int* $tmp91 = &$tmp90->bucketCount;
frost$core$Int $tmp92 = *$tmp91;
int64_t $tmp93 = $tmp88.value;
int64_t $tmp94 = $tmp92.value;
bool $tmp95 = $tmp93 < $tmp94;
frost$core$Bit $tmp96 = (frost$core$Bit) {$tmp95};
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block6; else goto block7;
block7:;
frost$core$Int $tmp98 = (frost$core$Int) {64u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s99, $tmp98);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:65
frost$collections$HashMap$Entry** $tmp100 = &param0->entry;
frost$collections$HashMap$Entry* $tmp101 = *$tmp100;
frost$core$Bit $tmp102 = (frost$core$Bit) {$tmp101 != NULL};
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block8; else goto block9;
block9:;
frost$core$Int $tmp104 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s105, $tmp104, &$s106);
abort(); // unreachable
block8:;
*(&local0) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$collections$HashMap$Entry* $tmp107 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
*(&local0) = $tmp101;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:66
frost$collections$HashMap$Entry** $tmp108 = &param0->entry;
frost$collections$HashMap$Entry* $tmp109 = *$tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109 != NULL};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block10; else goto block11;
block11:;
frost$core$Int $tmp112 = (frost$core$Int) {66u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s113, $tmp112, &$s114);
abort(); // unreachable
block10:;
frost$collections$HashMap$Entry** $tmp115 = &$tmp109->next;
frost$collections$HashMap$Entry* $tmp116 = *$tmp115;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$collections$HashMap$Entry** $tmp117 = &param0->entry;
frost$collections$HashMap$Entry* $tmp118 = *$tmp117;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$collections$HashMap$Entry** $tmp119 = &param0->entry;
*$tmp119 = $tmp116;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:67
goto block12;
block12:;
frost$collections$HashMap$Entry** $tmp120 = &param0->entry;
frost$collections$HashMap$Entry* $tmp121 = *$tmp120;
frost$core$Bit $tmp122 = (frost$core$Bit) {$tmp121 == NULL};
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:68
frost$core$Int* $tmp124 = &param0->bucket;
frost$core$Int $tmp125 = *$tmp124;
frost$core$Int $tmp126 = (frost$core$Int) {1u};
int64_t $tmp127 = $tmp125.value;
int64_t $tmp128 = $tmp126.value;
int64_t $tmp129 = $tmp127 + $tmp128;
frost$core$Int $tmp130 = (frost$core$Int) {$tmp129};
frost$core$Int* $tmp131 = &param0->bucket;
*$tmp131 = $tmp130;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:69
frost$core$Int* $tmp132 = &param0->bucket;
frost$core$Int $tmp133 = *$tmp132;
frost$collections$HashMap** $tmp134 = &param0->map;
frost$collections$HashMap* $tmp135 = *$tmp134;
frost$core$Int* $tmp136 = &$tmp135->bucketCount;
frost$core$Int $tmp137 = *$tmp136;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HashMap.frost:69:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp138 = $tmp133.value;
int64_t $tmp139 = $tmp137.value;
bool $tmp140 = $tmp138 == $tmp139;
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:70
goto block14;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:72
frost$collections$HashMap** $tmp143 = &param0->map;
frost$collections$HashMap* $tmp144 = *$tmp143;
frost$collections$HashMap$Entry*** $tmp145 = &$tmp144->contents;
frost$collections$HashMap$Entry** $tmp146 = *$tmp145;
frost$core$Int* $tmp147 = &param0->bucket;
frost$core$Int $tmp148 = *$tmp147;
frost$core$Int64 $tmp149 = frost$core$Int64$init$frost$core$Int($tmp148);
int64_t $tmp150 = $tmp149.value;
frost$collections$HashMap$Entry* $tmp151 = $tmp146[$tmp150];
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$collections$HashMap$Entry** $tmp152 = &param0->entry;
frost$collections$HashMap$Entry* $tmp153 = *$tmp152;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$collections$HashMap$Entry** $tmp154 = &param0->entry;
*$tmp154 = $tmp151;
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:74
FROST_ASSERT(32 == sizeof(frost$core$Tuple2));
frost$core$Tuple2* $tmp155 = (frost$core$Tuple2*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Tuple2$class);
frost$collections$HashMap$Entry* $tmp156 = *(&local0);
frost$collections$HashKey** $tmp157 = &$tmp156->key;
frost$collections$HashKey* $tmp158 = *$tmp157;
frost$collections$HashMap$Entry* $tmp159 = *(&local0);
frost$core$Object** $tmp160 = &$tmp159->value;
frost$core$Object* $tmp161 = *$tmp160;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1($tmp155, ((frost$core$Object*) $tmp158), $tmp161);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$collections$HashMap$Entry* $tmp162 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local0) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp155;

}
void frost$collections$HashMap$EntryIterator$cleanup(frost$collections$HashMap$EntryIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:41
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp163 = &param0->map;
frost$collections$HashMap* $tmp164 = *$tmp163;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$collections$HashMap$Entry** $tmp165 = &param0->entry;
frost$collections$HashMap$Entry* $tmp166 = *$tmp165;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
return;

}






