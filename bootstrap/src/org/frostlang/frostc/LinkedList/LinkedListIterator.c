#include "org/frostlang/frostc/LinkedList/LinkedListIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/LinkedList/Node.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"

__attribute__((weak)) frost$core$Object* org$frostlang$frostc$LinkedList$LinkedListIterator$next$R$org$frostlang$frostc$LinkedList$LinkedListIterator$T$shim(org$frostlang$frostc$LinkedList$LinkedListIterator* p0) {
    frost$core$Object* result = org$frostlang$frostc$LinkedList$LinkedListIterator$next$R$org$frostlang$frostc$LinkedList$LinkedListIterator$T(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } org$frostlang$frostc$LinkedList$LinkedListIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { org$frostlang$frostc$LinkedList$LinkedListIterator$get_done$R$frost$core$Bit, org$frostlang$frostc$LinkedList$LinkedListIterator$next$R$org$frostlang$frostc$LinkedList$LinkedListIterator$T$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
org$frostlang$frostc$LinkedList$LinkedListIterator$class_type org$frostlang$frostc$LinkedList$LinkedListIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$LinkedList$LinkedListIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$LinkedList$LinkedListIterator$cleanup, org$frostlang$frostc$LinkedList$LinkedListIterator$next$R$org$frostlang$frostc$LinkedList$LinkedListIterator$T$shim, org$frostlang$frostc$LinkedList$LinkedListIterator$get_done$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn7)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72", 50, 9081505766101653022, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 142, -7792985317219817619, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };

void org$frostlang$frostc$LinkedList$LinkedListIterator$init$org$frostlang$frostc$LinkedList$Node$LTorg$frostlang$frostc$LinkedList$LinkedListIterator$T$GT(org$frostlang$frostc$LinkedList$LinkedListIterator* param0, org$frostlang$frostc$LinkedList$Node* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:21
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$LinkedList$Node** $tmp2 = &param0->current;
org$frostlang$frostc$LinkedList$Node* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$LinkedList$Node** $tmp4 = &param0->current;
*$tmp4 = param1;
return;

}
frost$core$Object* org$frostlang$frostc$LinkedList$LinkedListIterator$next$R$org$frostlang$frostc$LinkedList$LinkedListIterator$T(org$frostlang$frostc$LinkedList$LinkedListIterator* param0) {

frost$core$Object* local0 = NULL;
ITable* $tmp5 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5 = $tmp5->next;
}
$fn7 $tmp6 = $tmp5->methods[0];
frost$core$Bit $tmp8 = $tmp6(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp9 = $tmp8.value;
bool $tmp10 = !$tmp9;
frost$core$Bit $tmp11 = (frost$core$Bit) {$tmp10};
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block1; else goto block2;
block2:;
frost$core$Int $tmp13 = (frost$core$Int) {25u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, $tmp13, &$s15);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:26
org$frostlang$frostc$LinkedList$Node** $tmp16 = &param0->current;
org$frostlang$frostc$LinkedList$Node* $tmp17 = *$tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17 != NULL};
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block4; else goto block5;
block5:;
frost$core$Int $tmp20 = (frost$core$Int) {26u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s21, $tmp20);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:27
org$frostlang$frostc$LinkedList$Node** $tmp22 = &param0->current;
org$frostlang$frostc$LinkedList$Node* $tmp23 = *$tmp22;
frost$core$Object** $tmp24 = &$tmp23->value;
frost$core$Object* $tmp25 = *$tmp24;
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp25);
frost$core$Object* $tmp26 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp26);
*(&local0) = $tmp25;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:28
org$frostlang$frostc$LinkedList$Node** $tmp27 = &param0->current;
org$frostlang$frostc$LinkedList$Node* $tmp28 = *$tmp27;
org$frostlang$frostc$LinkedList$Node** $tmp29 = &$tmp28->next;
org$frostlang$frostc$LinkedList$Node* $tmp30 = *$tmp29;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
org$frostlang$frostc$LinkedList$Node** $tmp31 = &param0->current;
org$frostlang$frostc$LinkedList$Node* $tmp32 = *$tmp31;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
org$frostlang$frostc$LinkedList$Node** $tmp33 = &param0->current;
*$tmp33 = $tmp30;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:29
frost$core$Object* $tmp34 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp34);
frost$core$Object* $tmp35 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp35);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp34;

}
frost$core$Bit org$frostlang$frostc$LinkedList$LinkedListIterator$get_done$R$frost$core$Bit(org$frostlang$frostc$LinkedList$LinkedListIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:34
org$frostlang$frostc$LinkedList$Node** $tmp36 = &param0->current;
org$frostlang$frostc$LinkedList$Node* $tmp37 = *$tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37 == NULL};
return $tmp38;

}
void org$frostlang$frostc$LinkedList$LinkedListIterator$cleanup(org$frostlang$frostc$LinkedList$LinkedListIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:17
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$LinkedList$Node** $tmp39 = &param0->current;
org$frostlang$frostc$LinkedList$Node* $tmp40 = *$tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
return;

}






