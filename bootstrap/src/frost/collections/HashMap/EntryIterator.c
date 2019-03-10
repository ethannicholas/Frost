#include "frost/collections/HashMap/EntryIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Tuple2.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Int64.h"
#include "frost/collections/HashMap/Entry.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/collections/Key.h"

__attribute__((weak)) frost$core$Object* frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP$shim(frost$collections$HashMap$EntryIterator* p0) {
    frost$core$Tuple2* result = frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$HashMap$EntryIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$HashMap$EntryIterator$get_done$R$frost$core$Bit, frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$HashMap$EntryIterator$class_type frost$collections$HashMap$EntryIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$HashMap$EntryIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$HashMap$EntryIterator$cleanup, frost$collections$HashMap$EntryIterator$get_done$R$frost$core$Bit, frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP$shim} };

typedef frost$core$Bit (*$fn70)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 39, 1175059209093268818, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x29", 165, 6278041426078439422, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };

void frost$collections$HashMap$EntryIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$GT(frost$collections$HashMap$EntryIterator* param0, frost$collections$HashMap* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:43
frost$core$Int64 $tmp2 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp3 = &param0->bucket;
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
frost$collections$HashMap$Entry*** $tmp19 = &param1->contents;
frost$collections$HashMap$Entry** $tmp20 = *$tmp19;
frost$core$Int64* $tmp21 = &param0->bucket;
frost$core$Int64 $tmp22 = *$tmp21;
int64_t $tmp23 = $tmp22.value;
frost$collections$HashMap$Entry* $tmp24 = $tmp20[$tmp23];
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24 == NULL};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:49
frost$core$Int64* $tmp27 = &param0->bucket;
frost$core$Int64 $tmp28 = *$tmp27;
frost$core$Int64 $tmp29 = (frost$core$Int64) {1u};
int64_t $tmp30 = $tmp28.value;
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30 + $tmp31;
frost$core$Int64 $tmp33 = (frost$core$Int64) {$tmp32};
frost$core$Int64* $tmp34 = &param0->bucket;
*$tmp34 = $tmp33;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:51
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:52
frost$collections$HashMap$Entry*** $tmp44 = &param1->contents;
frost$collections$HashMap$Entry** $tmp45 = *$tmp44;
frost$core$Int64* $tmp46 = &param0->bucket;
frost$core$Int64 $tmp47 = *$tmp46;
int64_t $tmp48 = $tmp47.value;
frost$collections$HashMap$Entry* $tmp49 = $tmp45[$tmp48];
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$collections$HashMap$Entry** $tmp50 = &param0->entry;
frost$collections$HashMap$Entry* $tmp51 = *$tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$collections$HashMap$Entry** $tmp52 = &param0->entry;
*$tmp52 = $tmp49;
goto block6;
block6:;
return;

}
frost$core$Bit frost$collections$HashMap$EntryIterator$get_done$R$frost$core$Bit(frost$collections$HashMap$EntryIterator* param0) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:58
frost$core$Int64* $tmp53 = &param0->bucket;
frost$core$Int64 $tmp54 = *$tmp53;
frost$collections$HashMap** $tmp55 = &param0->map;
frost$collections$HashMap* $tmp56 = *$tmp55;
frost$core$Int64* $tmp57 = &$tmp56->bucketCount;
frost$core$Int64 $tmp58 = *$tmp57;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HashMap.frost:58:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp59 = $tmp54.value;
int64_t $tmp60 = $tmp58.value;
bool $tmp61 = $tmp59 == $tmp60;
frost$core$Bit $tmp62 = (frost$core$Bit) {$tmp61};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block2; else goto block3;
block2:;
frost$collections$HashMap$Entry** $tmp64 = &param0->entry;
frost$collections$HashMap$Entry* $tmp65 = *$tmp64;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65 == NULL};
*(&local0) = $tmp66;
goto block4;
block3:;
*(&local0) = $tmp62;
goto block4;
block4:;
frost$core$Bit $tmp67 = *(&local0);
return $tmp67;

}
frost$core$Tuple2* frost$collections$HashMap$EntryIterator$next$R$$LPfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$RP(frost$collections$HashMap$EntryIterator* param0) {

frost$collections$HashMap$Entry* local0 = NULL;
ITable* $tmp68 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp68->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp68 = $tmp68->next;
}
$fn70 $tmp69 = $tmp68->methods[0];
frost$core$Bit $tmp71 = $tmp69(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp72 = $tmp71.value;
bool $tmp73 = !$tmp72;
frost$core$Bit $tmp74 = (frost$core$Bit) {$tmp73};
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp76 = (frost$core$Int64) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s77, $tmp76, &$s78);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:63
frost$collections$HashMap$Entry** $tmp79 = &param0->entry;
frost$collections$HashMap$Entry* $tmp80 = *$tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80 != NULL};
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp83 = (frost$core$Int64) {63u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s84, $tmp83);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:64
frost$core$Int64* $tmp85 = &param0->bucket;
frost$core$Int64 $tmp86 = *$tmp85;
frost$collections$HashMap** $tmp87 = &param0->map;
frost$collections$HashMap* $tmp88 = *$tmp87;
frost$core$Int64* $tmp89 = &$tmp88->bucketCount;
frost$core$Int64 $tmp90 = *$tmp89;
int64_t $tmp91 = $tmp86.value;
int64_t $tmp92 = $tmp90.value;
bool $tmp93 = $tmp91 < $tmp92;
frost$core$Bit $tmp94 = (frost$core$Bit) {$tmp93};
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp96 = (frost$core$Int64) {64u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s97, $tmp96);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:65
frost$collections$HashMap$Entry** $tmp98 = &param0->entry;
frost$collections$HashMap$Entry* $tmp99 = *$tmp98;
*(&local0) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$collections$HashMap$Entry* $tmp100 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local0) = $tmp99;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:66
frost$collections$HashMap$Entry** $tmp101 = &param0->entry;
frost$collections$HashMap$Entry* $tmp102 = *$tmp101;
frost$collections$HashMap$Entry** $tmp103 = &$tmp102->next;
frost$collections$HashMap$Entry* $tmp104 = *$tmp103;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$collections$HashMap$Entry** $tmp105 = &param0->entry;
frost$collections$HashMap$Entry* $tmp106 = *$tmp105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$collections$HashMap$Entry** $tmp107 = &param0->entry;
*$tmp107 = $tmp104;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:67
goto block8;
block8:;
frost$collections$HashMap$Entry** $tmp108 = &param0->entry;
frost$collections$HashMap$Entry* $tmp109 = *$tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109 == NULL};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:68
frost$core$Int64* $tmp112 = &param0->bucket;
frost$core$Int64 $tmp113 = *$tmp112;
frost$core$Int64 $tmp114 = (frost$core$Int64) {1u};
int64_t $tmp115 = $tmp113.value;
int64_t $tmp116 = $tmp114.value;
int64_t $tmp117 = $tmp115 + $tmp116;
frost$core$Int64 $tmp118 = (frost$core$Int64) {$tmp117};
frost$core$Int64* $tmp119 = &param0->bucket;
*$tmp119 = $tmp118;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:69
frost$core$Int64* $tmp120 = &param0->bucket;
frost$core$Int64 $tmp121 = *$tmp120;
frost$collections$HashMap** $tmp122 = &param0->map;
frost$collections$HashMap* $tmp123 = *$tmp122;
frost$core$Int64* $tmp124 = &$tmp123->bucketCount;
frost$core$Int64 $tmp125 = *$tmp124;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HashMap.frost:69:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp126 = $tmp121.value;
int64_t $tmp127 = $tmp125.value;
bool $tmp128 = $tmp126 == $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:70
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:72
frost$collections$HashMap** $tmp131 = &param0->map;
frost$collections$HashMap* $tmp132 = *$tmp131;
frost$collections$HashMap$Entry*** $tmp133 = &$tmp132->contents;
frost$collections$HashMap$Entry** $tmp134 = *$tmp133;
frost$core$Int64* $tmp135 = &param0->bucket;
frost$core$Int64 $tmp136 = *$tmp135;
int64_t $tmp137 = $tmp136.value;
frost$collections$HashMap$Entry* $tmp138 = $tmp134[$tmp137];
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$collections$HashMap$Entry** $tmp139 = &param0->entry;
frost$collections$HashMap$Entry* $tmp140 = *$tmp139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$collections$HashMap$Entry** $tmp141 = &param0->entry;
*$tmp141 = $tmp138;
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:74
FROST_ASSERT(32 == sizeof(frost$core$Tuple2));
frost$core$Tuple2* $tmp142 = (frost$core$Tuple2*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Tuple2$class);
frost$collections$HashMap$Entry* $tmp143 = *(&local0);
frost$collections$Key** $tmp144 = &$tmp143->key;
frost$collections$Key* $tmp145 = *$tmp144;
frost$collections$HashMap$Entry* $tmp146 = *(&local0);
frost$core$Object** $tmp147 = &$tmp146->value;
frost$core$Object* $tmp148 = *$tmp147;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1($tmp142, ((frost$core$Object*) $tmp145), $tmp148);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$collections$HashMap$Entry* $tmp149 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
*(&local0) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp142;

}
void frost$collections$HashMap$EntryIterator$cleanup(frost$collections$HashMap$EntryIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:41
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp150 = &param0->map;
frost$collections$HashMap* $tmp151 = *$tmp150;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$collections$HashMap$Entry** $tmp152 = &param0->entry;
frost$collections$HashMap$Entry* $tmp153 = *$tmp152;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
return;

}






