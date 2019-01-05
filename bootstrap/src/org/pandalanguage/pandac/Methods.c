#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/collections/ListView.h"
#include "panda/core/Bit.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/HashSet.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Key.h"
#include "panda/io/Console.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Methods$class_type org$pandalanguage$pandac$Methods$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Methods$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };

typedef panda$core$Int64 (*$fn4)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn25)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn37)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn41)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn46)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn56)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn60)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn70)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn74)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn79)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn88)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn92)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73", 32, -9211802459835250902, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x73\x2e\x70\x61\x6e\x64\x61", 13, -2524075233393740749, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73\x2e\x69\x6e\x69\x74\x28\x6d\x65\x74\x68\x6f\x64\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3e\x29", 135, 8418565472397904326, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x3a", 18, -8206996285794401398, NULL };

void org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Methods* param0, panda$collections$ListView* param1) {

panda$core$Bit local0;
ITable* $tmp2 = ((panda$collections$CollectionView*) param1)->$class->itable;
while ($tmp2->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2 = $tmp2->next;
}
$fn4 $tmp3 = $tmp2->methods[0];
panda$core$Int64 $tmp5 = $tmp3(((panda$collections$CollectionView*) param1));
panda$core$Int64 $tmp6 = (panda$core$Int64) {0};
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
bool $tmp9 = $tmp7 > $tmp8;
panda$core$Bit $tmp10 = (panda$core$Bit) {$tmp9};
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
panda$core$Bit $tmp12 = org$pandalanguage$pandac$Methods$containsDuplicates$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$R$panda$core$Bit(param1);
panda$core$Bit $tmp13 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp12);
*(&local0) = $tmp13;
goto block3;
block2:;
*(&local0) = $tmp10;
goto block3;
block3:;
panda$core$Bit $tmp14 = *(&local0);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp16 = (panda$core$Int64) {8};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s17, $tmp16, &$s18);
abort(); // unreachable
block4:;
// line 9
panda$core$Int64 $tmp19 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Symbol$Kind $tmp20 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp19);
org$pandalanguage$pandac$Position $tmp21 = org$pandalanguage$pandac$Position$init();
panda$core$Int64 $tmp22 = (panda$core$Int64) {0};
ITable* $tmp23 = param1->$class->itable;
while ($tmp23->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp23 = $tmp23->next;
}
$fn25 $tmp24 = $tmp23->methods[0];
panda$core$Object* $tmp26 = $tmp24(param1, $tmp22);
panda$core$String** $tmp27 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl*) $tmp26))->name;
panda$core$String* $tmp28 = *$tmp27;
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp20, $tmp21, $tmp28);
panda$core$Panda$unref$panda$core$Object$Q($tmp26);
// unreffing REF($30:panda.collections.ListView.T)
// line 10
panda$collections$ImmutableArray* $tmp29 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp29, param1);
panda$collections$ImmutableArray** $tmp30 = &param0->methods;
panda$collections$ImmutableArray* $tmp31 = *$tmp30;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
panda$collections$ImmutableArray** $tmp32 = &param0->methods;
*$tmp32 = $tmp29;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// unreffing REF($40:panda.collections.ImmutableArray<org.pandalanguage.pandac.MethodDecl>)
return;

}
panda$core$Bit org$pandalanguage$pandac$Methods$containsDuplicates$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$R$panda$core$Bit(panda$collections$ListView* param0) {

panda$collections$HashSet* local0 = NULL;
org$pandalanguage$pandac$MethodDecl* local1 = NULL;
org$pandalanguage$pandac$MethodDecl* local2 = NULL;
// line 15
panda$collections$HashSet* $tmp33 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp33);
*(&local0) = ((panda$collections$HashSet*) NULL);
panda$collections$HashSet* $tmp34 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
*(&local0) = $tmp33;
// line 16
ITable* $tmp35 = ((panda$collections$Iterable*) param0)->$class->itable;
while ($tmp35->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp35 = $tmp35->next;
}
$fn37 $tmp36 = $tmp35->methods[0];
panda$collections$Iterator* $tmp38 = $tmp36(((panda$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp39 = $tmp38->$class->itable;
while ($tmp39->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp39 = $tmp39->next;
}
$fn41 $tmp40 = $tmp39->methods[0];
panda$core$Bit $tmp42 = $tmp40($tmp38);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block3; else goto block2;
block2:;
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp44 = $tmp38->$class->itable;
while ($tmp44->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp44 = $tmp44->next;
}
$fn46 $tmp45 = $tmp44->methods[1];
panda$core$Object* $tmp47 = $tmp45($tmp38);
org$pandalanguage$pandac$MethodDecl* $tmp48 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp47)));
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) $tmp47);
// line 17
panda$collections$HashSet* $tmp49 = *(&local0);
org$pandalanguage$pandac$MethodDecl* $tmp50 = *(&local1);
panda$core$String* $tmp51 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String($tmp50);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp49, ((panda$collections$Key*) $tmp51));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp47);
// unreffing REF($26:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp52 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
// unreffing REF($15:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 19
panda$collections$HashSet* $tmp53 = *(&local0);
ITable* $tmp54 = ((panda$collections$CollectionView*) $tmp53)->$class->itable;
while ($tmp54->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp54 = $tmp54->next;
}
$fn56 $tmp55 = $tmp54->methods[0];
panda$core$Int64 $tmp57 = $tmp55(((panda$collections$CollectionView*) $tmp53));
ITable* $tmp58 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp58->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp58 = $tmp58->next;
}
$fn60 $tmp59 = $tmp58->methods[0];
panda$core$Int64 $tmp61 = $tmp59(((panda$collections$CollectionView*) param0));
int64_t $tmp62 = $tmp57.value;
int64_t $tmp63 = $tmp61.value;
bool $tmp64 = $tmp62 < $tmp63;
panda$core$Bit $tmp65 = (panda$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block4; else goto block5;
block4:;
// line 20
panda$io$Console$printLine$panda$core$String(&$s67);
// line 21
ITable* $tmp68 = ((panda$collections$Iterable*) param0)->$class->itable;
while ($tmp68->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp68 = $tmp68->next;
}
$fn70 $tmp69 = $tmp68->methods[0];
panda$collections$Iterator* $tmp71 = $tmp69(((panda$collections$Iterable*) param0));
goto block6;
block6:;
ITable* $tmp72 = $tmp71->$class->itable;
while ($tmp72->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp72 = $tmp72->next;
}
$fn74 $tmp73 = $tmp72->methods[0];
panda$core$Bit $tmp75 = $tmp73($tmp71);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block8; else goto block7;
block7:;
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp77 = $tmp71->$class->itable;
while ($tmp77->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp77 = $tmp77->next;
}
$fn79 $tmp78 = $tmp77->methods[1];
panda$core$Object* $tmp80 = $tmp78($tmp71);
org$pandalanguage$pandac$MethodDecl* $tmp81 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp80)));
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) $tmp80);
// line 22
org$pandalanguage$pandac$MethodDecl* $tmp82 = *(&local2);
panda$core$String* $tmp83 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp82);
panda$io$Console$printLine$panda$core$String($tmp83);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing REF($97:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp80);
// unreffing REF($87:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp84 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// unreffing m
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block6;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
// unreffing REF($76:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block5;
block5:;
// line 25
panda$collections$HashSet* $tmp85 = *(&local0);
ITable* $tmp86 = ((panda$collections$CollectionView*) $tmp85)->$class->itable;
while ($tmp86->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp86 = $tmp86->next;
}
$fn88 $tmp87 = $tmp86->methods[0];
panda$core$Int64 $tmp89 = $tmp87(((panda$collections$CollectionView*) $tmp85));
ITable* $tmp90 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp90->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp90 = $tmp90->next;
}
$fn92 $tmp91 = $tmp90->methods[0];
panda$core$Int64 $tmp93 = $tmp91(((panda$collections$CollectionView*) param0));
int64_t $tmp94 = $tmp89.value;
int64_t $tmp95 = $tmp93.value;
bool $tmp96 = $tmp94 < $tmp95;
panda$core$Bit $tmp97 = (panda$core$Bit) {$tmp96};
panda$collections$HashSet* $tmp98 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
// unreffing sigs
*(&local0) = ((panda$collections$HashSet*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// unreffing REF($1:panda.collections.HashSet<panda.core.String>)
return $tmp97;

}
void org$pandalanguage$pandac$Methods$cleanup(org$pandalanguage$pandac$Methods* param0) {

// line 4
org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) param0));
panda$collections$ImmutableArray** $tmp99 = &param0->methods;
panda$collections$ImmutableArray* $tmp100 = *$tmp99;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
return;

}

