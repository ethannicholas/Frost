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

__attribute__((weak)) panda$collections$Iterator* panda$collections$Stack$get_iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim(panda$collections$Stack* p0) {
    panda$collections$Iterator* result = panda$collections$Stack$get_iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Stack$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$Stack$get_iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim} };

static panda$core$String $s1;
panda$collections$Stack$class_type panda$collections$Stack$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Stack$_panda$collections$Iterable, { panda$collections$Stack$convert$R$panda$core$String, panda$collections$Stack$cleanup, panda$collections$Stack$push$panda$collections$Stack$T, panda$collections$Stack$pop$R$panda$collections$Stack$T, panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T, panda$collections$Stack$clear, panda$collections$Stack$get_iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim, panda$collections$Stack$get_count$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn18)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn34)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn49)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn79)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn94)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn113)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b", 23, 4189143067940765470, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4463479325045299737, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x70\x6f\x70\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 87, -3717553610229014045, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4463479325045299737, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4463479325045299737, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, 5685017306878640050, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, -4463479325045299737, NULL };

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
panda$core$Panda$ref$panda$core$Object$Q($tmp41);
panda$core$Object* $tmp42 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp42);
*(&local0) = $tmp41;
panda$core$Panda$unref$panda$core$Object$Q($tmp41);
// unreffing REF($45:panda.collections.Array.T)
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
// unreffing REF($73:panda.collections.Array.T)
// line 55
panda$core$Object* $tmp57 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q($tmp57);
panda$core$Object* $tmp58 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp58);
// unreffing result
*(&local0) = ((panda$core$Object*) NULL);
return $tmp57;

}
panda$core$Object* panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(panda$collections$Stack* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp59 = (panda$core$Int64) {0};
int64_t $tmp60 = param1.value;
int64_t $tmp61 = $tmp59.value;
bool $tmp62 = $tmp60 >= $tmp61;
panda$core$Bit $tmp63 = (panda$core$Bit) {$tmp62};
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block1; else goto block2;
block1:;
panda$core$Int64 $tmp65 = panda$collections$Stack$get_count$R$panda$core$Int64(param0);
int64_t $tmp66 = param1.value;
int64_t $tmp67 = $tmp65.value;
bool $tmp68 = $tmp66 < $tmp67;
panda$core$Bit $tmp69 = (panda$core$Bit) {$tmp68};
*(&local0) = $tmp69;
goto block3;
block2:;
*(&local0) = $tmp63;
goto block3;
block3:;
panda$core$Bit $tmp70 = *(&local0);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp72 = (panda$core$Int64) {63};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s73, $tmp72, &$s74);
abort(); // unreachable
block4:;
// line 64
panda$collections$Array** $tmp75 = &param0->contents;
panda$collections$Array* $tmp76 = *$tmp75;
ITable* $tmp77 = ((panda$collections$CollectionView*) $tmp76)->$class->itable;
while ($tmp77->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp77 = $tmp77->next;
}
$fn79 $tmp78 = $tmp77->methods[0];
panda$core$Int64 $tmp80 = $tmp78(((panda$collections$CollectionView*) $tmp76));
int64_t $tmp81 = $tmp80.value;
int64_t $tmp82 = param1.value;
bool $tmp83 = $tmp81 > $tmp82;
panda$core$Bit $tmp84 = (panda$core$Bit) {$tmp83};
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp86 = (panda$core$Int64) {64};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s87, $tmp86);
abort(); // unreachable
block6:;
// line 65
panda$collections$Array** $tmp88 = &param0->contents;
panda$collections$Array* $tmp89 = *$tmp88;
panda$collections$Array** $tmp90 = &param0->contents;
panda$collections$Array* $tmp91 = *$tmp90;
ITable* $tmp92 = ((panda$collections$CollectionView*) $tmp91)->$class->itable;
while ($tmp92->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp92 = $tmp92->next;
}
$fn94 $tmp93 = $tmp92->methods[0];
panda$core$Int64 $tmp95 = $tmp93(((panda$collections$CollectionView*) $tmp91));
panda$core$Int64 $tmp96 = (panda$core$Int64) {1};
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96.value;
int64_t $tmp99 = $tmp97 - $tmp98;
panda$core$Int64 $tmp100 = (panda$core$Int64) {$tmp99};
int64_t $tmp101 = $tmp100.value;
int64_t $tmp102 = param1.value;
int64_t $tmp103 = $tmp101 - $tmp102;
panda$core$Int64 $tmp104 = (panda$core$Int64) {$tmp103};
panda$core$Object* $tmp105 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp89, $tmp104);
panda$core$Panda$ref$panda$core$Object$Q($tmp105);
panda$core$Panda$unref$panda$core$Object$Q($tmp105);
// unreffing REF($59:panda.collections.Array.T)
return $tmp105;

}
void panda$collections$Stack$clear(panda$collections$Stack* param0) {

// line 72
panda$collections$Array** $tmp106 = &param0->contents;
panda$collections$Array* $tmp107 = *$tmp106;
panda$collections$Array$clear($tmp107);
return;

}
panda$collections$Iterator* panda$collections$Stack$get_iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(panda$collections$Stack* param0) {

// line 81
panda$collections$Stack$StackIterator* $tmp108 = (panda$collections$Stack$StackIterator*) frostObjectAlloc(32, (panda$core$Class*) &panda$collections$Stack$StackIterator$class);
panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT($tmp108, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp108)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
// unreffing REF($1:panda.collections.Stack.StackIterator<panda.collections.Stack.T>)
return ((panda$collections$Iterator*) $tmp108);

}
panda$core$Int64 panda$collections$Stack$get_count$R$panda$core$Int64(panda$collections$Stack* param0) {

// line 85
panda$collections$Array** $tmp109 = &param0->contents;
panda$collections$Array* $tmp110 = *$tmp109;
ITable* $tmp111 = ((panda$collections$CollectionView*) $tmp110)->$class->itable;
while ($tmp111->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[0];
panda$core$Int64 $tmp114 = $tmp112(((panda$collections$CollectionView*) $tmp110));
return $tmp114;

}
panda$core$String* panda$collections$Stack$convert$R$panda$core$String(panda$collections$Stack* param0) {

// line 90
panda$collections$Array** $tmp115 = &param0->contents;
panda$collections$Array* $tmp116 = *$tmp115;
panda$core$String* $tmp117 = panda$collections$Array$convert$R$panda$core$String($tmp116);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
// unreffing REF($5:panda.core.String)
return $tmp117;

}
void panda$collections$Stack$init(panda$collections$Stack* param0) {

// line 34
panda$collections$Array* $tmp118 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp118);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
panda$collections$Array** $tmp119 = &param0->contents;
panda$collections$Array* $tmp120 = *$tmp119;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
panda$collections$Array** $tmp121 = &param0->contents;
*$tmp121 = $tmp118;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
// unreffing REF($2:panda.collections.Array<panda.collections.Stack.T>)
return;

}
void panda$collections$Stack$cleanup(panda$collections$Stack* param0) {

// line 9
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$Array** $tmp122 = &param0->contents;
panda$collections$Array* $tmp123 = *$tmp122;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
return;

}

