#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
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

typedef frost$core$Int64 (*$fn4)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn28)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn40)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn44)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn49)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn61)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn65)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn76)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn80)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn85)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn95)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn99)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73", 28, 5772515583316665044, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x73\x2e\x66\x72\x6f\x73\x74", 13, -2524075234416817907, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73\x2e\x69\x6e\x69\x74\x28\x6d\x65\x74\x68\x6f\x64\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3e\x29", 127, -3431584010759797324, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x3a", 18, -8206996285794401398, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };

void org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(org$frostlang$frostc$Methods* param0, frost$collections$ListView* param1) {

org$frostlang$frostc$Symbol$Kind local0;
org$frostlang$frostc$Symbol$Kind local1;
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
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Methods.frost:7:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp13 = $tmp12.value;
bool $tmp14 = !$tmp13;
frost$core$Bit $tmp15 = (frost$core$Bit) {$tmp14};
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp17 = (frost$core$Int64) {8};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s18, $tmp17, &$s19);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:9
frost$core$Int64 $tmp20 = (frost$core$Int64) {6};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Symbol.Kind from Methods.frost:9:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int64* $tmp21 = &(&local1)->$rawValue;
*$tmp21 = $tmp20;
org$frostlang$frostc$Symbol$Kind $tmp22 = *(&local1);
*(&local0) = $tmp22;
org$frostlang$frostc$Symbol$Kind $tmp23 = *(&local0);
org$frostlang$frostc$Position $tmp24 = org$frostlang$frostc$Position$init();
frost$core$Int64 $tmp25 = (frost$core$Int64) {0};
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
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp36 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp36);
*(&local0) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$collections$HashSet* $tmp37 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
*(&local0) = $tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:16
ITable* $tmp38 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp38->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp38 = $tmp38->next;
}
$fn40 $tmp39 = $tmp38->methods[0];
frost$collections$Iterator* $tmp41 = $tmp39(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp42 = $tmp41->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp42 = $tmp42->next;
}
$fn44 $tmp43 = $tmp42->methods[0];
frost$core$Bit $tmp45 = $tmp43($tmp41);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp47 = $tmp41->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp47 = $tmp47->next;
}
$fn49 $tmp48 = $tmp47->methods[1];
frost$core$Object* $tmp50 = $tmp48($tmp41);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp50)));
org$frostlang$frostc$MethodDecl* $tmp51 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) $tmp50);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:17
frost$collections$HashSet* $tmp52 = *(&local0);
org$frostlang$frostc$MethodDecl* $tmp53 = *(&local1);
frost$core$String* $tmp54 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String($tmp53);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Methods.frost:17:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:8
frost$collections$HashMap** $tmp55 = &$tmp52->contents;
frost$collections$HashMap* $tmp56 = *$tmp55;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp56, ((frost$collections$Key*) $tmp54), ((frost$core$Object*) ((frost$collections$Key*) $tmp54)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q($tmp50);
org$frostlang$frostc$MethodDecl* $tmp57 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:19
frost$collections$HashSet* $tmp58 = *(&local0);
ITable* $tmp59 = ((frost$collections$CollectionView*) $tmp58)->$class->itable;
while ($tmp59->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp59 = $tmp59->next;
}
$fn61 $tmp60 = $tmp59->methods[0];
frost$core$Int64 $tmp62 = $tmp60(((frost$collections$CollectionView*) $tmp58));
ITable* $tmp63 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp63->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp63 = $tmp63->next;
}
$fn65 $tmp64 = $tmp63->methods[0];
frost$core$Int64 $tmp66 = $tmp64(((frost$collections$CollectionView*) param0));
int64_t $tmp67 = $tmp62.value;
int64_t $tmp68 = $tmp66.value;
bool $tmp69 = $tmp67 < $tmp68;
frost$core$Bit $tmp70 = (frost$core$Bit) {$tmp69};
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:20
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Methods.frost:20:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String(&$s72);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
// begin inline call to method frost.io.Console.printLine() from Console.stub:26:10
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:38
frost$io$Console$print$frost$core$String(&$s73);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:21
ITable* $tmp74 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp74 = $tmp74->next;
}
$fn76 $tmp75 = $tmp74->methods[0];
frost$collections$Iterator* $tmp77 = $tmp75(((frost$collections$Iterable*) param0));
goto block9;
block9:;
ITable* $tmp78 = $tmp77->$class->itable;
while ($tmp78->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp78 = $tmp78->next;
}
$fn80 $tmp79 = $tmp78->methods[0];
frost$core$Bit $tmp81 = $tmp79($tmp77);
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block11; else goto block10;
block10:;
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp83 = $tmp77->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp83 = $tmp83->next;
}
$fn85 $tmp84 = $tmp83->methods[1];
frost$core$Object* $tmp86 = $tmp84($tmp77);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp86)));
org$frostlang$frostc$MethodDecl* $tmp87 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) $tmp86);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:22
org$frostlang$frostc$MethodDecl* $tmp88 = *(&local2);
frost$core$String* $tmp89 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp88);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Methods.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp89);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
// begin inline call to method frost.io.Console.printLine() from Console.stub:26:10
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:38
frost$io$Console$print$frost$core$String(&$s90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Frost$unref$frost$core$Object$Q($tmp86);
org$frostlang$frostc$MethodDecl* $tmp91 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:25
frost$collections$HashSet* $tmp92 = *(&local0);
ITable* $tmp93 = ((frost$collections$CollectionView*) $tmp92)->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[0];
frost$core$Int64 $tmp96 = $tmp94(((frost$collections$CollectionView*) $tmp92));
ITable* $tmp97 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp97->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp97 = $tmp97->next;
}
$fn99 $tmp98 = $tmp97->methods[0];
frost$core$Int64 $tmp100 = $tmp98(((frost$collections$CollectionView*) param0));
int64_t $tmp101 = $tmp96.value;
int64_t $tmp102 = $tmp100.value;
bool $tmp103 = $tmp101 < $tmp102;
frost$core$Bit $tmp104 = (frost$core$Bit) {$tmp103};
frost$collections$HashSet* $tmp105 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local0) = ((frost$collections$HashSet*) NULL);
return $tmp104;

}
void org$frostlang$frostc$Methods$cleanup(org$frostlang$frostc$Methods* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
org$frostlang$frostc$FixedArray** $tmp106 = &param0->methods;
org$frostlang$frostc$FixedArray* $tmp107 = *$tmp106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
return;

}

