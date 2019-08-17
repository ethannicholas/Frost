#include "org/frostlang/frostc/IR/Block.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/LinkedList.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int.h"
#include "frost/collections/Iterable.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$IR$Block$class_type org$frostlang$frostc$IR$Block$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$IR$Block$get_asString$R$frost$core$String, org$frostlang$frostc$IR$Block$cleanup} };

typedef frost$core$String* (*$fn21)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn34)(frost$collections$Iterable*);
typedef frost$collections$Iterator* (*$fn41)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn47)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn57)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn61)(frost$core$Object*);
typedef frost$core$Object* (*$fn69)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn72)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 29, -7242955456988393464, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b", 5, 1505885265403634530, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x0a", 2, 584938020052538053, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };

void org$frostlang$frostc$IR$Block$init$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR$Block* param0, org$frostlang$frostc$IR$Block$ID param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:398
frost$core$Bit $tmp2 = (frost$core$Bit) {false};
frost$core$Bit* $tmp3 = &param0->forceReachable;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:400
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$LinkedList));
org$frostlang$frostc$LinkedList* $tmp4 = (org$frostlang$frostc$LinkedList*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$LinkedList$class);
org$frostlang$frostc$LinkedList$init($tmp4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
org$frostlang$frostc$LinkedList** $tmp5 = &param0->ids;
org$frostlang$frostc$LinkedList* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$LinkedList** $tmp7 = &param0->ids;
*$tmp7 = $tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:402
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$LinkedList));
org$frostlang$frostc$LinkedList* $tmp8 = (org$frostlang$frostc$LinkedList*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$LinkedList$class);
org$frostlang$frostc$LinkedList$init($tmp8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
org$frostlang$frostc$LinkedList** $tmp9 = &param0->statements;
org$frostlang$frostc$LinkedList* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlang$frostc$LinkedList** $tmp11 = &param0->statements;
*$tmp11 = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:408
frost$core$Bit $tmp12 = (frost$core$Bit) {false};
frost$core$Bit* $tmp13 = &param0->containsExplicitCode;
*$tmp13 = $tmp12;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:411
org$frostlang$frostc$IR$Block$ID* $tmp14 = &param0->id;
*$tmp14 = param1;
return;

}
frost$core$String* org$frostlang$frostc$IR$Block$get_asString$R$frost$core$String(org$frostlang$frostc$IR$Block* param0) {

frost$core$MutableString* local0 = NULL;
frost$collections$Iterator* local1 = NULL;
frost$collections$Iterator* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:416
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp15 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$IR$Block$ID* $tmp16 = &param0->id;
org$frostlang$frostc$IR$Block$ID $tmp17 = *$tmp16;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.get_asString():frost.core.String from IR.frost:416:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:392
frost$core$Int $tmp18 = $tmp17.value;
frost$core$Int$wrapper* $tmp19;
$tmp19 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp19->value = $tmp18;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:392:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn21 $tmp20 = ($fn21) ((frost$core$Object*) $tmp19)->$class->vtable[0];
frost$core$String* $tmp22 = $tmp20(((frost$core$Object*) $tmp19));
frost$core$String* $tmp23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s24, $tmp22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$String* $tmp25 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp23, &$s26);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$String* $tmp27 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp25, &$s28);
frost$core$MutableString$init$frost$core$String($tmp15, $tmp27);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$MutableString* $tmp29 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local0) = $tmp15;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:417
org$frostlang$frostc$LinkedList** $tmp30 = &param0->ids;
org$frostlang$frostc$LinkedList* $tmp31 = *$tmp30;
ITable* $tmp32 = ((frost$collections$Iterable*) $tmp31)->$class->itable;
while ($tmp32->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp32 = $tmp32->next;
}
$fn34 $tmp33 = $tmp32->methods[0];
frost$collections$Iterator* $tmp35 = $tmp33(((frost$collections$Iterable*) $tmp31));
*(&local1) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$collections$Iterator* $tmp36 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local1) = $tmp35;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:418
org$frostlang$frostc$LinkedList** $tmp37 = &param0->statements;
org$frostlang$frostc$LinkedList* $tmp38 = *$tmp37;
ITable* $tmp39 = ((frost$collections$Iterable*) $tmp38)->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp39 = $tmp39->next;
}
$fn41 $tmp40 = $tmp39->methods[0];
frost$collections$Iterator* $tmp42 = $tmp40(((frost$collections$Iterable*) $tmp38));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$collections$Iterator* $tmp43 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local2) = $tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:419
goto block3;
block3:;
frost$collections$Iterator* $tmp44 = *(&local1);
ITable* $tmp45 = $tmp44->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp45 = $tmp45->next;
}
$fn47 $tmp46 = $tmp45->methods[0];
frost$core$Bit $tmp48 = $tmp46($tmp44);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from IR.frost:419:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp49 = $tmp48.value;
bool $tmp50 = !$tmp49;
frost$core$Bit $tmp51 = (frost$core$Bit) {$tmp50};
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:420
frost$core$MutableString* $tmp53 = *(&local0);
frost$collections$Iterator* $tmp54 = *(&local1);
ITable* $tmp55 = $tmp54->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp55 = $tmp55->next;
}
$fn57 $tmp56 = $tmp55->methods[1];
frost$core$Object* $tmp58 = $tmp56($tmp54);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp59;
$tmp59 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp59->value = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp58)->value;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from IR.frost:420:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn61 $tmp60 = ($fn61) ((frost$core$Object*) $tmp59)->$class->vtable[0];
frost$core$String* $tmp62 = $tmp60(((frost$core$Object*) $tmp59));
frost$core$MutableString$append$frost$core$String($tmp53, $tmp62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q($tmp58);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:421
frost$core$MutableString* $tmp63 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp63, &$s64);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:422
frost$core$MutableString* $tmp65 = *(&local0);
frost$collections$Iterator* $tmp66 = *(&local2);
ITable* $tmp67 = $tmp66->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp67 = $tmp67->next;
}
$fn69 $tmp68 = $tmp67->methods[1];
frost$core$Object* $tmp70 = $tmp68($tmp66);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from IR.frost:422:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn72 $tmp71 = ($fn72) ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp70))->$class->vtable[0];
frost$core$String* $tmp73 = $tmp71(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp70)));
frost$core$MutableString$append$frost$core$String($tmp65, $tmp73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$Frost$unref$frost$core$Object$Q($tmp70);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:423
frost$core$MutableString* $tmp74 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp74, &$s75);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:425
frost$core$MutableString* $tmp76 = *(&local0);
frost$core$String* $tmp77 = frost$core$MutableString$finish$R$frost$core$String($tmp76);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$collections$Iterator* $tmp78 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$collections$Iterator* $tmp79 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
*(&local1) = ((frost$collections$Iterator*) NULL);
frost$core$MutableString* $tmp80 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp77;

}
void org$frostlang$frostc$IR$Block$cleanup(org$frostlang$frostc$IR$Block* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:372
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$LinkedList** $tmp81 = &param0->ids;
org$frostlang$frostc$LinkedList* $tmp82 = *$tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
org$frostlang$frostc$LinkedList** $tmp83 = &param0->statements;
org$frostlang$frostc$LinkedList* $tmp84 = *$tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
return;

}

