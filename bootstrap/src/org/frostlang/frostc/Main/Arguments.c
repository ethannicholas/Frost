#include "org/frostlang/frostc/Main/Arguments.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"
#include "frost/io/Console.h"
#include "frost/core/System.h"


static frost$core$String $s1;
org$frostlang$frostc$Main$Arguments$class_type org$frostlang$frostc$Main$Arguments$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Main$Arguments$cleanup, org$frostlang$frostc$Main$Arguments$get_done$R$frost$core$Bit, org$frostlang$frostc$Main$Arguments$next$R$frost$core$String, org$frostlang$frostc$Main$Arguments$next$frost$core$String$R$frost$core$String} };

typedef frost$core$Int64 (*$fn13)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn20)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Object* (*$fn47)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn50)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Int64 (*$fn63)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn72)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$String* (*$fn80)(org$frostlang$frostc$Main$Arguments*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x41\x72\x67\x75\x6d\x65\x6e\x74\x73", 35, 4342876122100458845, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x61\x66\x74\x65\x72\x20\x27", 8, 14363451844115734, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };

void org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT(org$frostlang$frostc$Main$Arguments* param0, frost$collections$ListView* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:33
frost$core$Int64 $tmp2 = (frost$core$Int64) {1};
frost$core$Int64* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$ListView** $tmp4 = &param0->args;
frost$collections$ListView* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$ListView** $tmp6 = &param0->args;
*$tmp6 = param1;
return;

}
frost$core$Bit org$frostlang$frostc$Main$Arguments$get_done$R$frost$core$Bit(org$frostlang$frostc$Main$Arguments* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:42
frost$core$Int64* $tmp7 = &param0->index;
frost$core$Int64 $tmp8 = *$tmp7;
frost$collections$ListView** $tmp9 = &param0->args;
frost$collections$ListView* $tmp10 = *$tmp9;
ITable* $tmp11 = ((frost$collections$CollectionView*) $tmp10)->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
frost$core$Int64 $tmp14 = $tmp12(((frost$collections$CollectionView*) $tmp10));
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:42:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp15 = $tmp8.value;
int64_t $tmp16 = $tmp14.value;
bool $tmp17 = $tmp15 == $tmp16;
frost$core$Bit $tmp18 = frost$core$Bit$init$builtin_bit($tmp17);
return $tmp18;

}
frost$core$String* org$frostlang$frostc$Main$Arguments$next$R$frost$core$String(org$frostlang$frostc$Main$Arguments* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:46
$fn20 $tmp19 = ($fn20) param0->$class->vtable[2];
frost$core$Bit $tmp21 = $tmp19(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:46:20
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp22 = $tmp21.value;
bool $tmp23 = !$tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp26 = (frost$core$Int64) {46};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s27, $tmp26);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:47
frost$core$Int64* $tmp28 = &param0->index;
frost$core$Int64 $tmp29 = *$tmp28;
frost$core$Int64 $tmp30 = (frost$core$Int64) {1};
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30.value;
int64_t $tmp33 = $tmp31 + $tmp32;
frost$core$Int64 $tmp34 = (frost$core$Int64) {$tmp33};
frost$core$Int64* $tmp35 = &param0->index;
*$tmp35 = $tmp34;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:48
frost$collections$ListView** $tmp36 = &param0->args;
frost$collections$ListView* $tmp37 = *$tmp36;
frost$core$Int64* $tmp38 = &param0->index;
frost$core$Int64 $tmp39 = *$tmp38;
frost$core$Int64 $tmp40 = (frost$core$Int64) {1};
int64_t $tmp41 = $tmp39.value;
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41 - $tmp42;
frost$core$Int64 $tmp44 = (frost$core$Int64) {$tmp43};
ITable* $tmp45 = $tmp37->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp45 = $tmp45->next;
}
$fn47 $tmp46 = $tmp45->methods[0];
frost$core$Object* $tmp48 = $tmp46($tmp37, $tmp44);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp48)));
frost$core$Frost$unref$frost$core$Object$Q($tmp48);
return ((frost$core$String*) $tmp48);

}
frost$core$String* org$frostlang$frostc$Main$Arguments$next$frost$core$String$R$frost$core$String(org$frostlang$frostc$Main$Arguments* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:52
$fn50 $tmp49 = ($fn50) param0->$class->vtable[2];
frost$core$Bit $tmp51 = $tmp49(param0);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:53
frost$core$String* $tmp53 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s54, param1);
frost$core$String* $tmp55 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp53, &$s56);
frost$collections$ListView** $tmp57 = &param0->args;
frost$collections$ListView* $tmp58 = *$tmp57;
frost$collections$ListView** $tmp59 = &param0->args;
frost$collections$ListView* $tmp60 = *$tmp59;
ITable* $tmp61 = ((frost$collections$CollectionView*) $tmp60)->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[0];
frost$core$Int64 $tmp64 = $tmp62(((frost$collections$CollectionView*) $tmp60));
frost$core$Int64 $tmp65 = (frost$core$Int64) {1};
int64_t $tmp66 = $tmp64.value;
int64_t $tmp67 = $tmp65.value;
int64_t $tmp68 = $tmp66 - $tmp67;
frost$core$Int64 $tmp69 = (frost$core$Int64) {$tmp68};
ITable* $tmp70 = $tmp58->$class->itable;
while ($tmp70->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp70 = $tmp70->next;
}
$fn72 $tmp71 = $tmp70->methods[0];
frost$core$Object* $tmp73 = $tmp71($tmp58, $tmp69);
frost$core$String* $tmp74 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp55, ((frost$core$String*) $tmp73));
frost$core$String* $tmp75 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp74, &$s76);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:53:39
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String($tmp75);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
// begin inline call to method frost.io.Console.printErrorLine() from Console.stub:46:15
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:58
frost$io$Console$printError$frost$core$String(&$s77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$core$Frost$unref$frost$core$Object$Q($tmp73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:54
frost$core$Int64 $tmp78 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp78);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:56
$fn80 $tmp79 = ($fn80) param0->$class->vtable[3];
frost$core$String* $tmp81 = $tmp79(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
return $tmp81;

}
void org$frostlang$frostc$Main$Arguments$cleanup(org$frostlang$frostc$Main$Arguments* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:28
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$ListView** $tmp82 = &param0->args;
frost$collections$ListView* $tmp83 = *$tmp82;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
return;

}






