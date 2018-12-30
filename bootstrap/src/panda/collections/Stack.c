#include "panda/collections/Stack.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Array.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Stack/StackIterator.h"

__attribute__((weak)) panda$collections$Iterator* panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim(panda$collections$Stack* p0) {
    panda$collections$Iterator* result = panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Stack$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim} };

static panda$core$String $s1;
panda$collections$Stack$class_type panda$collections$Stack$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Stack$_panda$collections$Iterable, { panda$collections$Stack$convert$R$panda$core$String, panda$collections$Stack$cleanup, panda$collections$Stack$push$panda$collections$Stack$T, panda$collections$Stack$pop$R$panda$collections$Stack$T, panda$collections$Stack$pop$panda$collections$Stack$T, panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T, panda$collections$Stack$clear, panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim, panda$collections$Stack$get_count$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn18)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn34)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn49)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn88)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn103)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn122)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b", 23, 4189143067940765470, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x70\x6f\x70\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 87, -3717553610229014045, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x70\x6f\x70\x28\x65\x78\x70\x65\x63\x74\x65\x64\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54\x29", 95, -2894691554432978803, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, 5685017306878640050, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };

void panda$collections$Stack$push$panda$collections$Stack$T(panda$collections$Stack* param0, panda$core$Object* param1) {

// line 42
panda$collections$Array** $tmp2 = &param0->contents;
panda$collections$Array* $tmp3 = *$tmp2;
panda$collections$Array$add$panda$collections$Array$T($tmp3, param1);
return;

}
panda$core$Object* panda$collections$Stack$pop$R$panda$collections$Stack$T(panda$collections$Stack* param0) {

panda$core$Object* local0 = NULL;
panda$core$Int64 $tmp4 = panda$collections$Stack$get_count$R$panda$core$Int64(param0);
panda$core$Int64 $tmp5 = (panda$core$Int64) {0};
int64_t $tmp6 = $tmp4.value;
int64_t $tmp7 = $tmp5.value;
bool $tmp8 = $tmp6 > $tmp7;
panda$core$Bit $tmp9 = (panda$core$Bit) {$tmp8};
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp11 = (panda$core$Int64) {51};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s12, $tmp11, &$s13);
abort(); // unreachable
block1:;
// line 52
panda$collections$Array** $tmp14 = &param0->contents;
panda$collections$Array* $tmp15 = *$tmp14;
ITable* $tmp16 = ((panda$collections$CollectionView*) $tmp15)->$class->itable;
while ($tmp16->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
$fn18 $tmp17 = $tmp16->methods[0];
panda$core$Int64 $tmp19 = $tmp17(((panda$collections$CollectionView*) $tmp15));
panda$core$Int64 $tmp20 = (panda$core$Int64) {0};
int64_t $tmp21 = $tmp19.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 > $tmp22;
panda$core$Bit $tmp24 = (panda$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp26 = (panda$core$Int64) {52};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s27, $tmp26);
abort(); // unreachable
block3:;
// line 53
panda$collections$Array** $tmp28 = &param0->contents;
panda$collections$Array* $tmp29 = *$tmp28;
panda$collections$Array** $tmp30 = &param0->contents;
panda$collections$Array* $tmp31 = *$tmp30;
ITable* $tmp32 = ((panda$collections$CollectionView*) $tmp31)->$class->itable;
while ($tmp32->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp32 = $tmp32->next;
}
$fn34 $tmp33 = $tmp32->methods[0];
panda$core$Int64 $tmp35 = $tmp33(((panda$collections$CollectionView*) $tmp31));
panda$core$Int64 $tmp36 = (panda$core$Int64) {1};
int64_t $tmp37 = $tmp35.value;
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37 - $tmp38;
panda$core$Int64 $tmp40 = (panda$core$Int64) {$tmp39};
panda$core$Object* $tmp41 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp29, $tmp40);
*(&local0) = ((panda$core$Object*) NULL);
panda$core$Object* $tmp42 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp42);
panda$core$Panda$ref$panda$core$Object$Q($tmp41);
*(&local0) = $tmp41;
panda$core$Panda$unref$panda$core$Object$Q($tmp41);
// line 54
panda$collections$Array** $tmp43 = &param0->contents;
panda$collections$Array* $tmp44 = *$tmp43;
panda$collections$Array** $tmp45 = &param0->contents;
panda$collections$Array* $tmp46 = *$tmp45;
ITable* $tmp47 = ((panda$collections$CollectionView*) $tmp46)->$class->itable;
while ($tmp47->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp47 = $tmp47->next;
}
$fn49 $tmp48 = $tmp47->methods[0];
panda$core$Int64 $tmp50 = $tmp48(((panda$collections$CollectionView*) $tmp46));
panda$core$Int64 $tmp51 = (panda$core$Int64) {1};
int64_t $tmp52 = $tmp50.value;
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52 - $tmp53;
panda$core$Int64 $tmp55 = (panda$core$Int64) {$tmp54};
panda$core$Object* $tmp56 = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T($tmp44, $tmp55);
panda$core$Panda$unref$panda$core$Object$Q($tmp56);
// line 55
panda$core$Object* $tmp57 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q($tmp57);
panda$core$Object* $tmp58 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp58);
// unreffing result
*(&local0) = ((panda$core$Object*) NULL);
return $tmp57;

}
void panda$collections$Stack$pop$panda$collections$Stack$T(panda$collections$Stack* param0, panda$core$Object* param1) {

panda$core$Int64 $tmp59 = (panda$core$Int64) {0};
panda$core$Object* $tmp60 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(param0, $tmp59);
bool $tmp61 = $tmp60 == param1;
panda$core$Bit $tmp62 = panda$core$Bit$init$builtin_bit($tmp61);
panda$core$Panda$unref$panda$core$Object$Q($tmp60);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp64 = (panda$core$Int64) {76};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s65, $tmp64, &$s66);
abort(); // unreachable
block1:;
// line 77
panda$core$Object* $tmp67 = panda$collections$Stack$pop$R$panda$collections$Stack$T(param0);
panda$core$Panda$unref$panda$core$Object$Q($tmp67);
return;

}
panda$core$Object* panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(panda$collections$Stack* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp68 = (panda$core$Int64) {0};
int64_t $tmp69 = param1.value;
int64_t $tmp70 = $tmp68.value;
bool $tmp71 = $tmp69 >= $tmp70;
panda$core$Bit $tmp72 = (panda$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block1; else goto block2;
block1:;
panda$core$Int64 $tmp74 = panda$collections$Stack$get_count$R$panda$core$Int64(param0);
int64_t $tmp75 = param1.value;
int64_t $tmp76 = $tmp74.value;
bool $tmp77 = $tmp75 < $tmp76;
panda$core$Bit $tmp78 = (panda$core$Bit) {$tmp77};
*(&local0) = $tmp78;
goto block3;
block2:;
*(&local0) = $tmp72;
goto block3;
block3:;
panda$core$Bit $tmp79 = *(&local0);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp81 = (panda$core$Int64) {85};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s82, $tmp81, &$s83);
abort(); // unreachable
block4:;
// line 86
panda$collections$Array** $tmp84 = &param0->contents;
panda$collections$Array* $tmp85 = *$tmp84;
ITable* $tmp86 = ((panda$collections$CollectionView*) $tmp85)->$class->itable;
while ($tmp86->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp86 = $tmp86->next;
}
$fn88 $tmp87 = $tmp86->methods[0];
panda$core$Int64 $tmp89 = $tmp87(((panda$collections$CollectionView*) $tmp85));
int64_t $tmp90 = $tmp89.value;
int64_t $tmp91 = param1.value;
bool $tmp92 = $tmp90 > $tmp91;
panda$core$Bit $tmp93 = (panda$core$Bit) {$tmp92};
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp95 = (panda$core$Int64) {86};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s96, $tmp95);
abort(); // unreachable
block6:;
// line 87
panda$collections$Array** $tmp97 = &param0->contents;
panda$collections$Array* $tmp98 = *$tmp97;
panda$collections$Array** $tmp99 = &param0->contents;
panda$collections$Array* $tmp100 = *$tmp99;
ITable* $tmp101 = ((panda$collections$CollectionView*) $tmp100)->$class->itable;
while ($tmp101->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp101 = $tmp101->next;
}
$fn103 $tmp102 = $tmp101->methods[0];
panda$core$Int64 $tmp104 = $tmp102(((panda$collections$CollectionView*) $tmp100));
panda$core$Int64 $tmp105 = (panda$core$Int64) {1};
int64_t $tmp106 = $tmp104.value;
int64_t $tmp107 = $tmp105.value;
int64_t $tmp108 = $tmp106 - $tmp107;
panda$core$Int64 $tmp109 = (panda$core$Int64) {$tmp108};
int64_t $tmp110 = $tmp109.value;
int64_t $tmp111 = param1.value;
int64_t $tmp112 = $tmp110 - $tmp111;
panda$core$Int64 $tmp113 = (panda$core$Int64) {$tmp112};
panda$core$Object* $tmp114 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp98, $tmp113);
panda$core$Panda$ref$panda$core$Object$Q($tmp114);
panda$core$Panda$unref$panda$core$Object$Q($tmp114);
return $tmp114;

}
void panda$collections$Stack$clear(panda$collections$Stack* param0) {

// line 94
panda$collections$Array** $tmp115 = &param0->contents;
panda$collections$Array* $tmp116 = *$tmp115;
panda$collections$Array$clear($tmp116);
return;

}
panda$collections$Iterator* panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(panda$collections$Stack* param0) {

// line 103
panda$collections$Stack$StackIterator* $tmp117 = (panda$collections$Stack$StackIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$Stack$StackIterator$class);
panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT($tmp117, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp117)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
return ((panda$collections$Iterator*) $tmp117);

}
panda$core$Int64 panda$collections$Stack$get_count$R$panda$core$Int64(panda$collections$Stack* param0) {

// line 107
panda$collections$Array** $tmp118 = &param0->contents;
panda$collections$Array* $tmp119 = *$tmp118;
ITable* $tmp120 = ((panda$collections$CollectionView*) $tmp119)->$class->itable;
while ($tmp120->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp120 = $tmp120->next;
}
$fn122 $tmp121 = $tmp120->methods[0];
panda$core$Int64 $tmp123 = $tmp121(((panda$collections$CollectionView*) $tmp119));
return $tmp123;

}
panda$core$String* panda$collections$Stack$convert$R$panda$core$String(panda$collections$Stack* param0) {

// line 112
panda$collections$Array** $tmp124 = &param0->contents;
panda$collections$Array* $tmp125 = *$tmp124;
panda$core$String* $tmp126 = panda$collections$Array$convert$R$panda$core$String($tmp125);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
return $tmp126;

}
void panda$collections$Stack$init(panda$collections$Stack* param0) {

// line 34
panda$collections$Array* $tmp127 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp127);
panda$collections$Array** $tmp128 = &param0->contents;
panda$collections$Array* $tmp129 = *$tmp128;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
panda$collections$Array** $tmp130 = &param0->contents;
*$tmp130 = $tmp127;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
return;

}
void panda$collections$Stack$cleanup(panda$collections$Stack* param0) {

panda$collections$Array** $tmp131 = &param0->contents;
panda$collections$Array* $tmp132 = *$tmp131;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
return;

}

