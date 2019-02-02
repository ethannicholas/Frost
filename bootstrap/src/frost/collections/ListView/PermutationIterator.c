#include "frost/collections/ListView/PermutationIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterable.h"

__attribute__((weak)) frost$core$Object* frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT$shim(frost$collections$ListView$PermutationIterator* p0) {
    frost$collections$ListView* result = frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$ListView$PermutationIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$ListView$PermutationIterator$get_done$R$frost$core$Bit, frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$ListView$PermutationIterator$class_type frost$collections$ListView$PermutationIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$PermutationIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$ListView$PermutationIterator$cleanup, frost$collections$ListView$PermutationIterator$get_done$R$frost$core$Bit, frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT$shim} };

typedef frost$core$Int64 (*$fn8)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn23)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn35)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn46)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn50)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn55)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn70)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn85)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn115)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x65\x72\x6d\x75\x74\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72", 46, -3631324891367083935, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x65\x72\x6d\x75\x74\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x65\x72\x6d\x75\x74\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 164, -4650726166023995916, NULL };

void frost$collections$ListView$PermutationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT(frost$collections$ListView$PermutationIterator* param0, frost$collections$ListView* param1) {

// line 72
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$ListView** $tmp2 = &param0->list;
frost$collections$ListView* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$collections$ListView** $tmp4 = &param0->list;
*$tmp4 = param1;
// line 73
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp5 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp6 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6 = $tmp6->next;
}
$fn8 $tmp7 = $tmp6->methods[0];
frost$core$Int64 $tmp9 = $tmp7(((frost$collections$CollectionView*) param1));
frost$core$Int64 $tmp10 = (frost$core$Int64) {0};
frost$core$Int64$wrapper* $tmp11;
$tmp11 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp11->value = $tmp10;
frost$collections$Array$init$frost$core$Int64$frost$collections$Array$T($tmp5, $tmp9, ((frost$core$Object*) $tmp11));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$Array** $tmp12 = &param0->choices;
frost$collections$Array* $tmp13 = *$tmp12;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$collections$Array** $tmp14 = &param0->choices;
*$tmp14 = $tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
return;

}
frost$core$Bit frost$collections$ListView$PermutationIterator$get_done$R$frost$core$Bit(frost$collections$ListView$PermutationIterator* param0) {

// line 78
frost$collections$Array** $tmp15 = &param0->choices;
frost$collections$Array* $tmp16 = *$tmp15;
frost$core$Int64 $tmp17 = (frost$core$Int64) {0};
frost$core$Object* $tmp18 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp16, $tmp17);
frost$core$Int64 $tmp19 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp20 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int64$wrapper*) $tmp18)->value, $tmp19);
frost$core$Frost$unref$frost$core$Object$Q($tmp18);
return $tmp20;

}
frost$collections$ListView* frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT(frost$collections$ListView$PermutationIterator* param0) {

frost$collections$Array* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int64 local2;
frost$core$Int64 local3;
ITable* $tmp21 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp21 = $tmp21->next;
}
$fn23 $tmp22 = $tmp21->methods[0];
frost$core$Bit $tmp24 = $tmp22(((frost$collections$Iterator*) param0));
frost$core$Bit $tmp25 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp24);
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp27 = (frost$core$Int64) {82};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s28, $tmp27, &$s29);
abort(); // unreachable
block1:;
// line 83
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp30 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$ListView** $tmp31 = &param0->list;
frost$collections$ListView* $tmp32 = *$tmp31;
ITable* $tmp33 = ((frost$collections$CollectionView*) $tmp32)->$class->itable;
while ($tmp33->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp33 = $tmp33->next;
}
$fn35 $tmp34 = $tmp33->methods[0];
frost$core$Int64 $tmp36 = $tmp34(((frost$collections$CollectionView*) $tmp32));
frost$collections$Array$init$frost$core$Int64($tmp30, $tmp36);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$collections$Array* $tmp37 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
*(&local0) = $tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// line 84
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp38 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$ListView** $tmp39 = &param0->list;
frost$collections$ListView* $tmp40 = *$tmp39;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp38, ((frost$collections$CollectionView*) $tmp40));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$collections$Array* $tmp41 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
*(&local1) = $tmp38;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
// line 85
frost$collections$Array** $tmp42 = &param0->choices;
frost$collections$Array* $tmp43 = *$tmp42;
ITable* $tmp44 = ((frost$collections$Iterable*) $tmp43)->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp44 = $tmp44->next;
}
$fn46 $tmp45 = $tmp44->methods[0];
frost$collections$Iterator* $tmp47 = $tmp45(((frost$collections$Iterable*) $tmp43));
goto block3;
block3:;
ITable* $tmp48 = $tmp47->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp48 = $tmp48->next;
}
$fn50 $tmp49 = $tmp48->methods[0];
frost$core$Bit $tmp51 = $tmp49($tmp47);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block5; else goto block4;
block4:;
ITable* $tmp53 = $tmp47->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp53 = $tmp53->next;
}
$fn55 $tmp54 = $tmp53->methods[1];
frost$core$Object* $tmp56 = $tmp54($tmp47);
*(&local2) = ((frost$core$Int64$wrapper*) $tmp56)->value;
// line 86
frost$collections$Array* $tmp57 = *(&local0);
frost$collections$Array* $tmp58 = *(&local1);
frost$core$Int64 $tmp59 = *(&local2);
frost$core$Object* $tmp60 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp58, $tmp59);
frost$collections$Array$add$frost$collections$Array$T($tmp57, $tmp60);
frost$core$Frost$unref$frost$core$Object$Q($tmp60);
// line 87
frost$collections$Array* $tmp61 = *(&local1);
frost$core$Int64 $tmp62 = *(&local2);
frost$core$Object* $tmp63 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp61, $tmp62);
frost$core$Frost$unref$frost$core$Object$Q($tmp63);
frost$core$Frost$unref$frost$core$Object$Q($tmp56);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// line 89
frost$core$Int64 $tmp64 = (frost$core$Int64) {0};
*(&local3) = $tmp64;
// line 90
goto block6;
block6:;
frost$core$Int64 $tmp65 = *(&local3);
frost$collections$Array** $tmp66 = &param0->choices;
frost$collections$Array* $tmp67 = *$tmp66;
ITable* $tmp68 = ((frost$collections$CollectionView*) $tmp67)->$class->itable;
while ($tmp68->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp68 = $tmp68->next;
}
$fn70 $tmp69 = $tmp68->methods[0];
frost$core$Int64 $tmp71 = $tmp69(((frost$collections$CollectionView*) $tmp67));
int64_t $tmp72 = $tmp65.value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 < $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block9; else goto block8;
block9:;
frost$collections$Array** $tmp77 = &param0->choices;
frost$collections$Array* $tmp78 = *$tmp77;
frost$core$Int64 $tmp79 = *(&local3);
frost$core$Object* $tmp80 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp78, $tmp79);
frost$collections$ListView** $tmp81 = &param0->list;
frost$collections$ListView* $tmp82 = *$tmp81;
ITable* $tmp83 = ((frost$collections$CollectionView*) $tmp82)->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp83 = $tmp83->next;
}
$fn85 $tmp84 = $tmp83->methods[0];
frost$core$Int64 $tmp86 = $tmp84(((frost$collections$CollectionView*) $tmp82));
frost$core$Int64 $tmp87 = *(&local3);
int64_t $tmp88 = $tmp86.value;
int64_t $tmp89 = $tmp87.value;
int64_t $tmp90 = $tmp88 - $tmp89;
frost$core$Int64 $tmp91 = (frost$core$Int64) {$tmp90};
frost$core$Int64 $tmp92 = (frost$core$Int64) {1};
int64_t $tmp93 = $tmp91.value;
int64_t $tmp94 = $tmp92.value;
int64_t $tmp95 = $tmp93 - $tmp94;
frost$core$Int64 $tmp96 = (frost$core$Int64) {$tmp95};
frost$core$Bit $tmp97 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int64$wrapper*) $tmp80)->value, $tmp96);
bool $tmp98 = $tmp97.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp80);
if ($tmp98) goto block7; else goto block8;
block7:;
// line 91
frost$collections$Array** $tmp99 = &param0->choices;
frost$collections$Array* $tmp100 = *$tmp99;
frost$core$Int64 $tmp101 = *(&local3);
frost$core$Int64 $tmp102 = (frost$core$Int64) {0};
frost$core$Int64$wrapper* $tmp103;
$tmp103 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp103->value = $tmp102;
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp100, $tmp101, ((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// line 92
frost$core$Int64 $tmp104 = *(&local3);
frost$core$Int64 $tmp105 = (frost$core$Int64) {1};
int64_t $tmp106 = $tmp104.value;
int64_t $tmp107 = $tmp105.value;
int64_t $tmp108 = $tmp106 + $tmp107;
frost$core$Int64 $tmp109 = (frost$core$Int64) {$tmp108};
*(&local3) = $tmp109;
goto block6;
block8:;
// line 94
frost$core$Int64 $tmp110 = *(&local3);
frost$collections$Array** $tmp111 = &param0->choices;
frost$collections$Array* $tmp112 = *$tmp111;
ITable* $tmp113 = ((frost$collections$CollectionView*) $tmp112)->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[0];
frost$core$Int64 $tmp116 = $tmp114(((frost$collections$CollectionView*) $tmp112));
frost$core$Bit $tmp117 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp110, $tmp116);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block10; else goto block12;
block10:;
// line 95
frost$collections$Array** $tmp119 = &param0->choices;
frost$collections$Array* $tmp120 = *$tmp119;
frost$core$Int64 $tmp121 = (frost$core$Int64) {0};
frost$core$Int64 $tmp122 = (frost$core$Int64) {18446744073709551615};
frost$core$Int64$wrapper* $tmp123;
$tmp123 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp123->value = $tmp122;
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp120, $tmp121, ((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
goto block11;
block12:;
// line 1
// line 98
frost$collections$Array** $tmp124 = &param0->choices;
frost$collections$Array* $tmp125 = *$tmp124;
frost$core$Int64 $tmp126 = *(&local3);
frost$core$Object* $tmp127 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp125, $tmp126);
frost$core$Int64 $tmp128 = (frost$core$Int64) {1};
int64_t $tmp129 = ((frost$core$Int64$wrapper*) $tmp127)->value.value;
int64_t $tmp130 = $tmp128.value;
int64_t $tmp131 = $tmp129 + $tmp130;
frost$core$Int64 $tmp132 = (frost$core$Int64) {$tmp131};
frost$core$Int64$wrapper* $tmp133;
$tmp133 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp133->value = $tmp132;
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp125, $tmp126, ((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
goto block11;
block11:;
// line 100
frost$collections$Array* $tmp134 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp134)));
frost$collections$Array* $tmp135 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
*(&local1) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp136 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp134);

}
void frost$collections$ListView$PermutationIterator$cleanup(frost$collections$ListView$PermutationIterator* param0) {

// line 66
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$ListView** $tmp137 = &param0->list;
frost$collections$ListView* $tmp138 = *$tmp137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$collections$Array** $tmp139 = &param0->choices;
frost$collections$Array* $tmp140 = *$tmp139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
return;

}

