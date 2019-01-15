#include "org/frostlanguage/frostc/Methods.h"
#include "org/frostlanguage/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/collections/ListView.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "org/frostlanguage/frostc/Symbol/Kind.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/MethodDecl.h"
#include "org/frostlanguage/frostc/FixedArray.h"
#include "frost/collections/HashSet.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Key.h"
#include "frost/io/Console.h"


static frost$core$String $s1;
org$frostlanguage$frostc$Methods$class_type org$frostlanguage$frostc$Methods$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &org$frostlanguage$frostc$Symbol$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$Methods$cleanup, org$frostlanguage$frostc$Symbol$get_heritable$R$frost$core$Bit} };

typedef frost$core$Int64 (*$fn4)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn25)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn37)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn41)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn46)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn56)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn60)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn70)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn74)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn79)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn88)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn92)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73", 32, 1894407170784771326, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x73\x2e\x66\x72\x6f\x73\x74", 13, -2524075234416817907, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73\x2e\x69\x6e\x69\x74\x28\x6d\x65\x74\x68\x6f\x64\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3e\x29", 135, 8132693348382571280, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x3a", 18, -8206996285794401398, NULL };

void org$frostlanguage$frostc$Methods$init$frost$collections$ListView$LTorg$frostlanguage$frostc$MethodDecl$GT(org$frostlanguage$frostc$Methods* param0, frost$collections$ListView* param1) {

frost$core$Bit local0;
ITable* $tmp2 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp2->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2 = $tmp2->next;
}
$fn4 $tmp3 = $tmp2->methods[0];
frost$core$Int64 $tmp5 = $tmp3(((frost$collections$CollectionView*) param1));
frost$core$Int64 $tmp6 = (frost$core$Int64) {0};
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
bool $tmp9 = $tmp7 > $tmp8;
frost$core$Bit $tmp10 = (frost$core$Bit) {$tmp9};
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
frost$core$Bit $tmp12 = org$frostlanguage$frostc$Methods$containsDuplicates$frost$collections$ListView$LTorg$frostlanguage$frostc$MethodDecl$GT$R$frost$core$Bit(param1);
frost$core$Bit $tmp13 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp12);
*(&local0) = $tmp13;
goto block3;
block2:;
*(&local0) = $tmp10;
goto block3;
block3:;
frost$core$Bit $tmp14 = *(&local0);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp16 = (frost$core$Int64) {8};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s17, $tmp16, &$s18);
abort(); // unreachable
block4:;
// line 9
frost$core$Int64 $tmp19 = (frost$core$Int64) {6};
org$frostlanguage$frostc$Symbol$Kind $tmp20 = org$frostlanguage$frostc$Symbol$Kind$init$frost$core$Int64($tmp19);
org$frostlanguage$frostc$Position $tmp21 = org$frostlanguage$frostc$Position$init();
frost$core$Int64 $tmp22 = (frost$core$Int64) {0};
ITable* $tmp23 = param1->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp23 = $tmp23->next;
}
$fn25 $tmp24 = $tmp23->methods[0];
frost$core$Object* $tmp26 = $tmp24(param1, $tmp22);
frost$core$String** $tmp27 = &((org$frostlanguage$frostc$Symbol*) ((org$frostlanguage$frostc$MethodDecl*) $tmp26))->name;
frost$core$String* $tmp28 = *$tmp27;
org$frostlanguage$frostc$Symbol$init$org$frostlanguage$frostc$Symbol$Kind$org$frostlanguage$frostc$Position$frost$core$String(((org$frostlanguage$frostc$Symbol*) param0), $tmp20, $tmp21, $tmp28);
frost$core$Frost$unref$frost$core$Object$Q($tmp26);
// unreffing REF($30:frost.collections.ListView.T)
// line 10
org$frostlanguage$frostc$FixedArray* $tmp29 = (org$frostlanguage$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$FixedArray$class);
org$frostlanguage$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlanguage$frostc$FixedArray$T$GT($tmp29, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
org$frostlanguage$frostc$FixedArray** $tmp30 = &param0->methods;
org$frostlanguage$frostc$FixedArray* $tmp31 = *$tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
org$frostlanguage$frostc$FixedArray** $tmp32 = &param0->methods;
*$tmp32 = $tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing REF($40:org.frostlanguage.frostc.FixedArray<org.frostlanguage.frostc.MethodDecl>)
return;

}
frost$core$Bit org$frostlanguage$frostc$Methods$containsDuplicates$frost$collections$ListView$LTorg$frostlanguage$frostc$MethodDecl$GT$R$frost$core$Bit(frost$collections$ListView* param0) {

frost$collections$HashSet* local0 = NULL;
org$frostlanguage$frostc$MethodDecl* local1 = NULL;
org$frostlanguage$frostc$MethodDecl* local2 = NULL;
// line 15
frost$collections$HashSet* $tmp33 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp33);
*(&local0) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$collections$HashSet* $tmp34 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
*(&local0) = $tmp33;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing REF($1:frost.collections.HashSet<frost.core.String>)
// line 16
ITable* $tmp35 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp35 = $tmp35->next;
}
$fn37 $tmp36 = $tmp35->methods[0];
frost$collections$Iterator* $tmp38 = $tmp36(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp39 = $tmp38->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp39 = $tmp39->next;
}
$fn41 $tmp40 = $tmp39->methods[0];
frost$core$Bit $tmp42 = $tmp40($tmp38);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
ITable* $tmp44 = $tmp38->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp44 = $tmp44->next;
}
$fn46 $tmp45 = $tmp44->methods[1];
frost$core$Object* $tmp47 = $tmp45($tmp38);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$MethodDecl*) $tmp47)));
org$frostlanguage$frostc$MethodDecl* $tmp48 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
*(&local1) = ((org$frostlanguage$frostc$MethodDecl*) $tmp47);
// line 17
frost$collections$HashSet* $tmp49 = *(&local0);
org$frostlanguage$frostc$MethodDecl* $tmp50 = *(&local1);
frost$core$String* $tmp51 = org$frostlanguage$frostc$MethodDecl$get_signature$R$frost$core$String($tmp50);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp49, ((frost$collections$Key*) $tmp51));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing REF($41:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp47);
// unreffing REF($29:frost.collections.Iterator.T)
org$frostlanguage$frostc$MethodDecl* $tmp52 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// unreffing m
*(&local1) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
// unreffing REF($18:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 19
frost$collections$HashSet* $tmp53 = *(&local0);
ITable* $tmp54 = ((frost$collections$CollectionView*) $tmp53)->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp54 = $tmp54->next;
}
$fn56 $tmp55 = $tmp54->methods[0];
frost$core$Int64 $tmp57 = $tmp55(((frost$collections$CollectionView*) $tmp53));
ITable* $tmp58 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp58 = $tmp58->next;
}
$fn60 $tmp59 = $tmp58->methods[0];
frost$core$Int64 $tmp61 = $tmp59(((frost$collections$CollectionView*) param0));
int64_t $tmp62 = $tmp57.value;
int64_t $tmp63 = $tmp61.value;
bool $tmp64 = $tmp62 < $tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block4; else goto block5;
block4:;
// line 20
frost$io$Console$printLine$frost$core$String(&$s67);
// line 21
ITable* $tmp68 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp68->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp68 = $tmp68->next;
}
$fn70 $tmp69 = $tmp68->methods[0];
frost$collections$Iterator* $tmp71 = $tmp69(((frost$collections$Iterable*) param0));
goto block6;
block6:;
ITable* $tmp72 = $tmp71->$class->itable;
while ($tmp72->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp72 = $tmp72->next;
}
$fn74 $tmp73 = $tmp72->methods[0];
frost$core$Bit $tmp75 = $tmp73($tmp71);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block8; else goto block7;
block7:;
*(&local2) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
ITable* $tmp77 = $tmp71->$class->itable;
while ($tmp77->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp77 = $tmp77->next;
}
$fn79 $tmp78 = $tmp77->methods[1];
frost$core$Object* $tmp80 = $tmp78($tmp71);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$MethodDecl*) $tmp80)));
org$frostlanguage$frostc$MethodDecl* $tmp81 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local2) = ((org$frostlanguage$frostc$MethodDecl*) $tmp80);
// line 22
org$frostlanguage$frostc$MethodDecl* $tmp82 = *(&local2);
frost$core$String* $tmp83 = org$frostlanguage$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp82);
frost$io$Console$printLine$frost$core$String($tmp83);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// unreffing REF($100:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp80);
// unreffing REF($90:frost.collections.Iterator.T)
org$frostlanguage$frostc$MethodDecl* $tmp84 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// unreffing m
*(&local2) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing REF($79:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block5;
block5:;
// line 25
frost$collections$HashSet* $tmp85 = *(&local0);
ITable* $tmp86 = ((frost$collections$CollectionView*) $tmp85)->$class->itable;
while ($tmp86->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp86 = $tmp86->next;
}
$fn88 $tmp87 = $tmp86->methods[0];
frost$core$Int64 $tmp89 = $tmp87(((frost$collections$CollectionView*) $tmp85));
ITable* $tmp90 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp90->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp90 = $tmp90->next;
}
$fn92 $tmp91 = $tmp90->methods[0];
frost$core$Int64 $tmp93 = $tmp91(((frost$collections$CollectionView*) param0));
int64_t $tmp94 = $tmp89.value;
int64_t $tmp95 = $tmp93.value;
bool $tmp96 = $tmp94 < $tmp95;
frost$core$Bit $tmp97 = (frost$core$Bit) {$tmp96};
frost$collections$HashSet* $tmp98 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// unreffing sigs
*(&local0) = ((frost$collections$HashSet*) NULL);
return $tmp97;

}
void org$frostlanguage$frostc$Methods$cleanup(org$frostlanguage$frostc$Methods* param0) {

// line 4
org$frostlanguage$frostc$Symbol$cleanup(((org$frostlanguage$frostc$Symbol*) param0));
org$frostlanguage$frostc$FixedArray** $tmp99 = &param0->methods;
org$frostlanguage$frostc$FixedArray* $tmp100 = *$tmp99;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
return;

}

