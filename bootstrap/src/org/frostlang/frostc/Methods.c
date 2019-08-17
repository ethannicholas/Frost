#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/HashSet.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Key.h"
#include "frost/collections/HashMap.h"
#include "frost/io/Console.h"


static frost$core$String $s1;
org$frostlang$frostc$Methods$class_type org$frostlang$frostc$Methods$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Methods$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };

typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn28)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn43)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn47)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn52)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn64)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn68)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn79)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn83)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn88)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn98)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn102)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73", 28, -7892381055912215442, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x73\x2e\x66\x72\x6f\x73\x74", 13, 3446750053624965341, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73\x2e\x69\x6e\x69\x74\x28\x6d\x65\x74\x68\x6f\x64\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3e\x29", 127, -2859513609938129634, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x3a", 18, 5562811063883540698, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };

void org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(org$frostlang$frostc$Methods* param0, frost$collections$ListView* param1) {

org$frostlang$frostc$Symbol$Kind local0;
org$frostlang$frostc$Symbol$Kind local1;
ITable* $tmp2 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp2->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2 = $tmp2->next;
}
$fn4 $tmp3 = $tmp2->methods[0];
frost$core$Int $tmp5 = $tmp3(((frost$collections$CollectionView*) param1));
frost$core$Int $tmp6 = (frost$core$Int) {0u};
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
bool $tmp9 = $tmp7 > $tmp8;
frost$core$Bit $tmp10 = (frost$core$Bit) {$tmp9};
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block3; else goto block2;
block3:;
frost$core$Bit $tmp12 = org$frostlang$frostc$Methods$containsDuplicates$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$R$frost$core$Bit(param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Methods.frost:7:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp13 = $tmp12.value;
bool $tmp14 = !$tmp13;
frost$core$Bit $tmp15 = (frost$core$Bit) {$tmp14};
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block1; else goto block2;
block2:;
frost$core$Int $tmp17 = (frost$core$Int) {8u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, $tmp17, &$s19);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:9
frost$core$Int $tmp20 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Methods.frost:9:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int* $tmp21 = &(&local1)->$rawValue;
*$tmp21 = $tmp20;
org$frostlang$frostc$Symbol$Kind $tmp22 = *(&local1);
*(&local0) = $tmp22;
org$frostlang$frostc$Symbol$Kind $tmp23 = *(&local0);
org$frostlang$frostc$Position $tmp24 = org$frostlang$frostc$Position$init();
frost$core$Int $tmp25 = (frost$core$Int) {0u};
ITable* $tmp26 = param1->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp26 = $tmp26->next;
}
$fn28 $tmp27 = $tmp26->methods[0];
frost$core$Object* $tmp29 = $tmp27(param1, $tmp25);
frost$core$String** $tmp30 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp29))->name;
frost$core$String* $tmp31 = *$tmp30;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp23, $tmp24, $tmp31);
frost$core$Frost$unref$frost$core$Object$Q($tmp29);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:10
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp32 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp32, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
org$frostlang$frostc$FixedArray** $tmp33 = &param0->methods;
org$frostlang$frostc$FixedArray* $tmp34 = *$tmp33;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
org$frostlang$frostc$FixedArray** $tmp35 = &param0->methods;
*$tmp35 = $tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
return;

}
frost$core$Bit org$frostlang$frostc$Methods$containsDuplicates$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$R$frost$core$Bit(frost$collections$ListView* param0) {

frost$collections$HashSet* local0 = NULL;
org$frostlang$frostc$MethodDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:15
frost$core$Bit $tmp36 = (frost$core$Bit) {true};
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:15
frost$core$Bit $tmp38 = (frost$core$Bit) {false};
return $tmp38;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:16
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp39 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp39);
*(&local0) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$collections$HashSet* $tmp40 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
*(&local0) = $tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:17
ITable* $tmp41 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp41 = $tmp41->next;
}
$fn43 $tmp42 = $tmp41->methods[0];
frost$collections$Iterator* $tmp44 = $tmp42(((frost$collections$Iterable*) param0));
goto block3;
block3:;
ITable* $tmp45 = $tmp44->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp45 = $tmp45->next;
}
$fn47 $tmp46 = $tmp45->methods[0];
frost$core$Bit $tmp48 = $tmp46($tmp44);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block5; else goto block4;
block4:;
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp50 = $tmp44->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp50 = $tmp50->next;
}
$fn52 $tmp51 = $tmp50->methods[1];
frost$core$Object* $tmp53 = $tmp51($tmp44);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp53)));
org$frostlang$frostc$MethodDecl* $tmp54 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) $tmp53);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:18
frost$collections$HashSet* $tmp55 = *(&local0);
org$frostlang$frostc$MethodDecl* $tmp56 = *(&local1);
frost$core$String* $tmp57 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String($tmp56);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Methods.frost:18:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp58 = &$tmp55->contents;
frost$collections$HashMap* $tmp59 = *$tmp58;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp59, ((frost$collections$Key*) $tmp57), ((frost$core$Object*) ((frost$collections$Key*) $tmp57)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q($tmp53);
org$frostlang$frostc$MethodDecl* $tmp60 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:20
frost$collections$HashSet* $tmp61 = *(&local0);
ITable* $tmp62 = ((frost$collections$CollectionView*) $tmp61)->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp62 = $tmp62->next;
}
$fn64 $tmp63 = $tmp62->methods[0];
frost$core$Int $tmp65 = $tmp63(((frost$collections$CollectionView*) $tmp61));
ITable* $tmp66 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp66 = $tmp66->next;
}
$fn68 $tmp67 = $tmp66->methods[0];
frost$core$Int $tmp69 = $tmp67(((frost$collections$CollectionView*) param0));
int64_t $tmp70 = $tmp65.value;
int64_t $tmp71 = $tmp69.value;
bool $tmp72 = $tmp70 < $tmp71;
frost$core$Bit $tmp73 = (frost$core$Bit) {$tmp72};
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:21
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Methods.frost:21:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s75);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s76);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:22
ITable* $tmp77 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp77->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp77 = $tmp77->next;
}
$fn79 $tmp78 = $tmp77->methods[0];
frost$collections$Iterator* $tmp80 = $tmp78(((frost$collections$Iterable*) param0));
goto block11;
block11:;
ITable* $tmp81 = $tmp80->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[0];
frost$core$Bit $tmp84 = $tmp82($tmp80);
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block13; else goto block12;
block12:;
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp86 = $tmp80->$class->itable;
while ($tmp86->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp86 = $tmp86->next;
}
$fn88 $tmp87 = $tmp86->methods[1];
frost$core$Object* $tmp89 = $tmp87($tmp80);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp89)));
org$frostlang$frostc$MethodDecl* $tmp90 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) $tmp89);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:23
org$frostlang$frostc$MethodDecl* $tmp91 = *(&local2);
frost$core$String* $tmp92 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp91);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Methods.frost:23:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp92);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$Frost$unref$frost$core$Object$Q($tmp89);
org$frostlang$frostc$MethodDecl* $tmp94 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block11;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:26
frost$collections$HashSet* $tmp95 = *(&local0);
ITable* $tmp96 = ((frost$collections$CollectionView*) $tmp95)->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp96 = $tmp96->next;
}
$fn98 $tmp97 = $tmp96->methods[0];
frost$core$Int $tmp99 = $tmp97(((frost$collections$CollectionView*) $tmp95));
ITable* $tmp100 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[0];
frost$core$Int $tmp103 = $tmp101(((frost$collections$CollectionView*) param0));
int64_t $tmp104 = $tmp99.value;
int64_t $tmp105 = $tmp103.value;
bool $tmp106 = $tmp104 < $tmp105;
frost$core$Bit $tmp107 = (frost$core$Bit) {$tmp106};
frost$collections$HashSet* $tmp108 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
*(&local0) = ((frost$collections$HashSet*) NULL);
return $tmp107;

}
void org$frostlang$frostc$Methods$cleanup(org$frostlang$frostc$Methods* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
org$frostlang$frostc$FixedArray** $tmp109 = &param0->methods;
org$frostlang$frostc$FixedArray* $tmp110 = *$tmp109;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
return;

}

