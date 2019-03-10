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
#include "frost/collections/Key.h"

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

void frost$collections$HashMap$EntryIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$GT(frost$collections$HashMap$EntryIterator* param0, frost$collections$HashMap* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:43
frost$core$Int $tmp2 = (frost$core$Int) {0u};
frost$core$Int* $tmp3 = &param0->bucket;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:44
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry** $tmp4 = &param0->entry;
frost$collections$HashMap$Entry* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$HashMap$Entry** $tmp6 = &param0->entry;
*$tmp6 = ((frost$collections$HashMap$Entry*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:47
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$HashMap** $tmp7 = &param0->map;
frost$collections$HashMap* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$HashMap** $tmp9 = &param0->map;
*$tmp9 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:48
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:49
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:51
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:52
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:58
frost$core$Int* $tmp55 = &param0->bucket;
frost$core$Int $tmp56 = *$tmp55;
frost$collections$HashMap** $tmp57 = &param0->map;
frost$collections$HashMap* $tmp58 = *$tmp57;
frost$core$Int* $tmp59 = &$tmp58->bucketCount;
frost$core$Int $tmp60 = *$tmp59;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HashMap.frost:58:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:63
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:64
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:65
frost$collections$HashMap$Entry** $tmp100 = &param0->entry;
frost$collections$HashMap$Entry* $tmp101 = *$tmp100;
*(&local0) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$collections$HashMap$Entry* $tmp102 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
*(&local0) = $tmp101;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:66
frost$collections$HashMap$Entry** $tmp103 = &param0->entry;
frost$collections$HashMap$Entry* $tmp104 = *$tmp103;
frost$collections$HashMap$Entry** $tmp105 = &$tmp104->next;
frost$collections$HashMap$Entry* $tmp106 = *$tmp105;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$collections$HashMap$Entry** $tmp107 = &param0->entry;
frost$collections$HashMap$Entry* $tmp108 = *$tmp107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$collections$HashMap$Entry** $tmp109 = &param0->entry;
*$tmp109 = $tmp106;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:67
goto block8;
block8:;
frost$collections$HashMap$Entry** $tmp110 = &param0->entry;
frost$collections$HashMap$Entry* $tmp111 = *$tmp110;
frost$core$Bit $tmp112 = (frost$core$Bit) {$tmp111 == NULL};
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:68
frost$core$Int* $tmp114 = &param0->bucket;
frost$core$Int $tmp115 = *$tmp114;
frost$core$Int $tmp116 = (frost$core$Int) {1u};
int64_t $tmp117 = $tmp115.value;
int64_t $tmp118 = $tmp116.value;
int64_t $tmp119 = $tmp117 + $tmp118;
frost$core$Int $tmp120 = (frost$core$Int) {$tmp119};
frost$core$Int* $tmp121 = &param0->bucket;
*$tmp121 = $tmp120;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:69
frost$core$Int* $tmp122 = &param0->bucket;
frost$core$Int $tmp123 = *$tmp122;
frost$collections$HashMap** $tmp124 = &param0->map;
frost$collections$HashMap* $tmp125 = *$tmp124;
frost$core$Int* $tmp126 = &$tmp125->bucketCount;
frost$core$Int $tmp127 = *$tmp126;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HashMap.frost:69:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp128 = $tmp123.value;
int64_t $tmp129 = $tmp127.value;
bool $tmp130 = $tmp128 == $tmp129;
frost$core$Bit $tmp131 = (frost$core$Bit) {$tmp130};
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:70
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:72
frost$collections$HashMap** $tmp133 = &param0->map;
frost$collections$HashMap* $tmp134 = *$tmp133;
frost$collections$HashMap$Entry*** $tmp135 = &$tmp134->contents;
frost$collections$HashMap$Entry** $tmp136 = *$tmp135;
frost$core$Int* $tmp137 = &param0->bucket;
frost$core$Int $tmp138 = *$tmp137;
frost$core$Int64 $tmp139 = frost$core$Int64$init$frost$core$Int($tmp138);
int64_t $tmp140 = $tmp139.value;
frost$collections$HashMap$Entry* $tmp141 = $tmp136[$tmp140];
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
frost$collections$HashMap$Entry** $tmp142 = &param0->entry;
frost$collections$HashMap$Entry* $tmp143 = *$tmp142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$collections$HashMap$Entry** $tmp144 = &param0->entry;
*$tmp144 = $tmp141;
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:74
FROST_ASSERT(32 == sizeof(frost$core$Tuple2));
frost$core$Tuple2* $tmp145 = (frost$core$Tuple2*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Tuple2$class);
frost$collections$HashMap$Entry* $tmp146 = *(&local0);
frost$collections$Key** $tmp147 = &$tmp146->key;
frost$collections$Key* $tmp148 = *$tmp147;
frost$collections$HashMap$Entry* $tmp149 = *(&local0);
frost$core$Object** $tmp150 = &$tmp149->value;
frost$core$Object* $tmp151 = *$tmp150;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1($tmp145, ((frost$core$Object*) $tmp148), $tmp151);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$collections$HashMap$Entry* $tmp152 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
*(&local0) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp145;

}
void frost$collections$HashMap$EntryIterator$cleanup(frost$collections$HashMap$EntryIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:41
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp153 = &param0->map;
frost$collections$HashMap* $tmp154 = *$tmp153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$collections$HashMap$Entry** $tmp155 = &param0->entry;
frost$collections$HashMap$Entry* $tmp156 = *$tmp155;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
return;

}






