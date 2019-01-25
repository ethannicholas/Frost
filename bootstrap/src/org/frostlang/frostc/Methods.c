#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/collections/ListView.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/HashSet.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Key.h"
#include "frost/io/Console.h"


static frost$core$String $s1;
org$frostlang$frostc$Methods$class_type org$frostlang$frostc$Methods$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Methods$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };

typedef frost$core$Int64 (*$fn4)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn24)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn36)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn40)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn45)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn55)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn59)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn69)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn73)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn78)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn87)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn91)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73", 28, 5772515583316665044, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x73\x2e\x66\x72\x6f\x73\x74", 13, -2524075234416817907, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73\x2e\x69\x6e\x69\x74\x28\x6d\x65\x74\x68\x6f\x64\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3e\x29", 127, -3431584010759797324, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x3a", 18, -8206996285794401398, NULL };

void org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(org$frostlang$frostc$Methods* param0, frost$collections$ListView* param1) {

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
if ($tmp11) goto block3; else goto block2;
block3:;
frost$core$Bit $tmp12 = org$frostlang$frostc$Methods$containsDuplicates$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$R$frost$core$Bit(param1);
frost$core$Bit $tmp13 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp12);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp15 = (frost$core$Int64) {8};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s16, $tmp15, &$s17);
abort(); // unreachable
block1:;
// line 9
frost$core$Int64 $tmp18 = (frost$core$Int64) {6};
org$frostlang$frostc$Symbol$Kind $tmp19 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp18);
org$frostlang$frostc$Position $tmp20 = org$frostlang$frostc$Position$init();
frost$core$Int64 $tmp21 = (frost$core$Int64) {0};
ITable* $tmp22 = param1->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp22 = $tmp22->next;
}
$fn24 $tmp23 = $tmp22->methods[0];
frost$core$Object* $tmp25 = $tmp23(param1, $tmp21);
frost$core$String** $tmp26 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp25))->name;
frost$core$String* $tmp27 = *$tmp26;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp19, $tmp20, $tmp27);
frost$core$Frost$unref$frost$core$Object$Q($tmp25);
// line 10
org$frostlang$frostc$FixedArray* $tmp28 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp28, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
org$frostlang$frostc$FixedArray** $tmp29 = &param0->methods;
org$frostlang$frostc$FixedArray* $tmp30 = *$tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
org$frostlang$frostc$FixedArray** $tmp31 = &param0->methods;
*$tmp31 = $tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
return;

}
frost$core$Bit org$frostlang$frostc$Methods$containsDuplicates$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$R$frost$core$Bit(frost$collections$ListView* param0) {

frost$collections$HashSet* local0 = NULL;
org$frostlang$frostc$MethodDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
// line 15
frost$collections$HashSet* $tmp32 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp32);
*(&local0) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$collections$HashSet* $tmp33 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
*(&local0) = $tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// line 16
ITable* $tmp34 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp34 = $tmp34->next;
}
$fn36 $tmp35 = $tmp34->methods[0];
frost$collections$Iterator* $tmp37 = $tmp35(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp38 = $tmp37->$class->itable;
while ($tmp38->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp38 = $tmp38->next;
}
$fn40 $tmp39 = $tmp38->methods[0];
frost$core$Bit $tmp41 = $tmp39($tmp37);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp43 = $tmp37->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp43 = $tmp43->next;
}
$fn45 $tmp44 = $tmp43->methods[1];
frost$core$Object* $tmp46 = $tmp44($tmp37);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp46)));
org$frostlang$frostc$MethodDecl* $tmp47 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) $tmp46);
// line 17
frost$collections$HashSet* $tmp48 = *(&local0);
org$frostlang$frostc$MethodDecl* $tmp49 = *(&local1);
frost$core$String* $tmp50 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String($tmp49);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp48, ((frost$collections$Key*) $tmp50));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$Frost$unref$frost$core$Object$Q($tmp46);
org$frostlang$frostc$MethodDecl* $tmp51 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
// line 19
frost$collections$HashSet* $tmp52 = *(&local0);
ITable* $tmp53 = ((frost$collections$CollectionView*) $tmp52)->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp53 = $tmp53->next;
}
$fn55 $tmp54 = $tmp53->methods[0];
frost$core$Int64 $tmp56 = $tmp54(((frost$collections$CollectionView*) $tmp52));
ITable* $tmp57 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[0];
frost$core$Int64 $tmp60 = $tmp58(((frost$collections$CollectionView*) param0));
int64_t $tmp61 = $tmp56.value;
int64_t $tmp62 = $tmp60.value;
bool $tmp63 = $tmp61 < $tmp62;
frost$core$Bit $tmp64 = (frost$core$Bit) {$tmp63};
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block4; else goto block5;
block4:;
// line 20
frost$io$Console$printLine$frost$core$String(&$s66);
// line 21
ITable* $tmp67 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp67 = $tmp67->next;
}
$fn69 $tmp68 = $tmp67->methods[0];
frost$collections$Iterator* $tmp70 = $tmp68(((frost$collections$Iterable*) param0));
goto block6;
block6:;
ITable* $tmp71 = $tmp70->$class->itable;
while ($tmp71->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp71 = $tmp71->next;
}
$fn73 $tmp72 = $tmp71->methods[0];
frost$core$Bit $tmp74 = $tmp72($tmp70);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block8; else goto block7;
block7:;
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp76 = $tmp70->$class->itable;
while ($tmp76->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp76 = $tmp76->next;
}
$fn78 $tmp77 = $tmp76->methods[1];
frost$core$Object* $tmp79 = $tmp77($tmp70);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp79)));
org$frostlang$frostc$MethodDecl* $tmp80 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) $tmp79);
// line 22
org$frostlang$frostc$MethodDecl* $tmp81 = *(&local2);
frost$core$String* $tmp82 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp81);
frost$io$Console$printLine$frost$core$String($tmp82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q($tmp79);
org$frostlang$frostc$MethodDecl* $tmp83 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
goto block5;
block5:;
// line 25
frost$collections$HashSet* $tmp84 = *(&local0);
ITable* $tmp85 = ((frost$collections$CollectionView*) $tmp84)->$class->itable;
while ($tmp85->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp85 = $tmp85->next;
}
$fn87 $tmp86 = $tmp85->methods[0];
frost$core$Int64 $tmp88 = $tmp86(((frost$collections$CollectionView*) $tmp84));
ITable* $tmp89 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[0];
frost$core$Int64 $tmp92 = $tmp90(((frost$collections$CollectionView*) param0));
int64_t $tmp93 = $tmp88.value;
int64_t $tmp94 = $tmp92.value;
bool $tmp95 = $tmp93 < $tmp94;
frost$core$Bit $tmp96 = (frost$core$Bit) {$tmp95};
frost$collections$HashSet* $tmp97 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
*(&local0) = ((frost$collections$HashSet*) NULL);
return $tmp96;

}
void org$frostlang$frostc$Methods$cleanup(org$frostlang$frostc$Methods* param0) {

// line 4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
org$frostlang$frostc$FixedArray** $tmp98 = &param0->methods;
org$frostlang$frostc$FixedArray* $tmp99 = *$tmp98;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
return;

}

