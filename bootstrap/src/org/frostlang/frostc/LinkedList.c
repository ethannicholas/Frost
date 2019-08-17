#include "org/frostlang/frostc/LinkedList.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Collection.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/LinkedList/LinkedListIterator.h"
#include "org/frostlang/frostc/LinkedList/Node.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Weak.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) void org$frostlang$frostc$LinkedList$add$org$frostlang$frostc$LinkedList$T$shim(org$frostlang$frostc$LinkedList* p0, frost$core$Object* p1) {
    org$frostlang$frostc$LinkedList$add$org$frostlang$frostc$LinkedList$T(p0, p1);

}
__attribute__((weak)) frost$collections$Iterator* org$frostlang$frostc$LinkedList$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$LinkedList$T$GT$shim(org$frostlang$frostc$LinkedList* p0) {
    frost$collections$Iterator* result = org$frostlang$frostc$LinkedList$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$LinkedList$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$LinkedList$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, NULL, { org$frostlang$frostc$LinkedList$clear} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } org$frostlang$frostc$LinkedList$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &org$frostlang$frostc$LinkedList$_frost$collections$Collection, { org$frostlang$frostc$LinkedList$get_count$R$frost$core$Int, frost$collections$CollectionView$get_first$R$frost$collections$CollectionView$T, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } org$frostlang$frostc$LinkedList$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &org$frostlang$frostc$LinkedList$_frost$collections$CollectionView, { org$frostlang$frostc$LinkedList$get_count$R$frost$core$Int, org$frostlang$frostc$LinkedList$add$org$frostlang$frostc$LinkedList$T$shim, frost$collections$CollectionWriter$addAll$frost$collections$CollectionView$LTfrost$collections$CollectionWriter$T$GT, org$frostlang$frostc$LinkedList$clear} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$LinkedList$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlang$frostc$LinkedList$_frost$collections$CollectionWriter, { org$frostlang$frostc$LinkedList$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$LinkedList$T$GT$shim} };

static frost$core$String $s1;
org$frostlang$frostc$LinkedList$class_type org$frostlang$frostc$LinkedList$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$LinkedList$_frost$collections$Iterable, { org$frostlang$frostc$LinkedList$get_asString$R$frost$core$String, org$frostlang$frostc$LinkedList$cleanup, org$frostlang$frostc$LinkedList$get_count$R$frost$core$Int, org$frostlang$frostc$LinkedList$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$LinkedList$T$GT$shim, org$frostlang$frostc$LinkedList$add$org$frostlang$frostc$LinkedList$T$shim, org$frostlang$frostc$LinkedList$merge$org$frostlang$frostc$LinkedList$LTorg$frostlang$frostc$LinkedList$T$GT, org$frostlang$frostc$LinkedList$get_last$R$org$frostlang$frostc$LinkedList$T, org$frostlang$frostc$LinkedList$removeLast, org$frostlang$frostc$LinkedList$clear} };

typedef frost$core$Int (*$fn13)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn48)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn77)(frost$collections$CollectionView*);
typedef void (*$fn115)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn130)(org$frostlang$frostc$LinkedList*);
typedef frost$core$Int (*$fn133)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn150)(frost$collections$CollectionView*);
typedef void (*$fn206)(org$frostlang$frostc$LinkedList*);
typedef frost$collections$Iterator* (*$fn224)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn228)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn233)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn247)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74", 31, 2735825773150690837, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x67\x65\x74\x5f\x6c\x61\x73\x74\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x54", 110, -349411081372872262, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x72\x65\x6d\x6f\x76\x65\x4c\x61\x73\x74\x28\x29", 76, 1305984995167838374, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

frost$core$Int org$frostlang$frostc$LinkedList$get_count$R$frost$core$Int(org$frostlang$frostc$LinkedList* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:49
frost$core$Int* $tmp2 = &param0->_count;
frost$core$Int $tmp3 = *$tmp2;
return $tmp3;

}
frost$collections$Iterator* org$frostlang$frostc$LinkedList$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$LinkedList$T$GT(org$frostlang$frostc$LinkedList* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:54
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$LinkedList$LinkedListIterator));
org$frostlang$frostc$LinkedList$LinkedListIterator* $tmp4 = (org$frostlang$frostc$LinkedList$LinkedListIterator*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$LinkedList$LinkedListIterator$class);
org$frostlang$frostc$LinkedList$Node** $tmp5 = &param0->head;
org$frostlang$frostc$LinkedList$Node* $tmp6 = *$tmp5;
org$frostlang$frostc$LinkedList$LinkedListIterator$init$org$frostlang$frostc$LinkedList$Node$LTorg$frostlang$frostc$LinkedList$LinkedListIterator$T$GT($tmp4, $tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp4)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
return ((frost$collections$Iterator*) $tmp4);

}
void org$frostlang$frostc$LinkedList$add$org$frostlang$frostc$LinkedList$T(org$frostlang$frostc$LinkedList* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:59
org$frostlang$frostc$LinkedList$Node** $tmp7 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp8 = *$tmp7;
frost$core$Bit $tmp9 = (frost$core$Bit) {$tmp8 != NULL};
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:60
ITable* $tmp11 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
frost$core$Int $tmp14 = $tmp12(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp15 = (frost$core$Int) {0u};
int64_t $tmp16 = $tmp14.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 > $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block4; else goto block5;
block5:;
frost$core$Int $tmp21 = (frost$core$Int) {60u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s22, $tmp21);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:61
org$frostlang$frostc$LinkedList$Node** $tmp23 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp24 = *$tmp23;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$LinkedList$Node));
org$frostlang$frostc$LinkedList$Node* $tmp25 = (org$frostlang$frostc$LinkedList$Node*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$LinkedList$Node$class);
org$frostlang$frostc$LinkedList$Node$init$org$frostlang$frostc$LinkedList$Node$T($tmp25, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
org$frostlang$frostc$LinkedList$Node** $tmp26 = &$tmp24->next;
org$frostlang$frostc$LinkedList$Node* $tmp27 = *$tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
org$frostlang$frostc$LinkedList$Node** $tmp28 = &$tmp24->next;
*$tmp28 = $tmp25;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:62
org$frostlang$frostc$LinkedList$Node** $tmp29 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp30 = *$tmp29;
org$frostlang$frostc$LinkedList$Node** $tmp31 = &$tmp30->next;
org$frostlang$frostc$LinkedList$Node* $tmp32 = *$tmp31;
org$frostlang$frostc$LinkedList$Node** $tmp33 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp34 = *$tmp33;
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp35 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp35, ((frost$core$Object*) $tmp34));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Weak** $tmp36 = &$tmp32->prev;
frost$core$Weak* $tmp37 = *$tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$Weak** $tmp38 = &$tmp32->prev;
*$tmp38 = $tmp35;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:63
org$frostlang$frostc$LinkedList$Node** $tmp39 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp40 = *$tmp39;
org$frostlang$frostc$LinkedList$Node** $tmp41 = &$tmp40->next;
org$frostlang$frostc$LinkedList$Node* $tmp42 = *$tmp41;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
org$frostlang$frostc$LinkedList$Node** $tmp43 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp44 = *$tmp43;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
org$frostlang$frostc$LinkedList$Node** $tmp45 = &param0->tail;
*$tmp45 = $tmp42;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:66
ITable* $tmp46 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[0];
frost$core$Int $tmp49 = $tmp47(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp50 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LinkedList.frost:66:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp51 = $tmp49.value;
int64_t $tmp52 = $tmp50.value;
bool $tmp53 = $tmp51 == $tmp52;
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block7; else goto block8;
block8:;
frost$core$Int $tmp56 = (frost$core$Int) {66u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s57, $tmp56);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:67
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$LinkedList$Node));
org$frostlang$frostc$LinkedList$Node* $tmp58 = (org$frostlang$frostc$LinkedList$Node*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$LinkedList$Node$class);
org$frostlang$frostc$LinkedList$Node$init$org$frostlang$frostc$LinkedList$Node$T($tmp58, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
org$frostlang$frostc$LinkedList$Node** $tmp59 = &param0->head;
org$frostlang$frostc$LinkedList$Node* $tmp60 = *$tmp59;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
org$frostlang$frostc$LinkedList$Node** $tmp61 = &param0->head;
*$tmp61 = $tmp58;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:68
org$frostlang$frostc$LinkedList$Node** $tmp62 = &param0->head;
org$frostlang$frostc$LinkedList$Node* $tmp63 = *$tmp62;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
org$frostlang$frostc$LinkedList$Node** $tmp64 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp65 = *$tmp64;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
org$frostlang$frostc$LinkedList$Node** $tmp66 = &param0->tail;
*$tmp66 = $tmp63;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:70
frost$core$Int* $tmp67 = &param0->_count;
frost$core$Int $tmp68 = *$tmp67;
frost$core$Int $tmp69 = (frost$core$Int) {1u};
int64_t $tmp70 = $tmp68.value;
int64_t $tmp71 = $tmp69.value;
int64_t $tmp72 = $tmp70 + $tmp71;
frost$core$Int $tmp73 = (frost$core$Int) {$tmp72};
frost$core$Int* $tmp74 = &param0->_count;
*$tmp74 = $tmp73;
return;

}
void org$frostlang$frostc$LinkedList$merge$org$frostlang$frostc$LinkedList$LTorg$frostlang$frostc$LinkedList$T$GT(org$frostlang$frostc$LinkedList* param0, org$frostlang$frostc$LinkedList* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:79
ITable* $tmp75 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp75->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[0];
frost$core$Int $tmp78 = $tmp76(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp79 = (frost$core$Int) {0u};
int64_t $tmp80 = $tmp78.value;
int64_t $tmp81 = $tmp79.value;
bool $tmp82 = $tmp80 > $tmp81;
frost$core$Bit $tmp83 = (frost$core$Bit) {$tmp82};
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:80
org$frostlang$frostc$LinkedList$Node** $tmp85 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp86 = *$tmp85;
org$frostlang$frostc$LinkedList$Node** $tmp87 = &param1->head;
org$frostlang$frostc$LinkedList$Node* $tmp88 = *$tmp87;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
org$frostlang$frostc$LinkedList$Node** $tmp89 = &$tmp86->next;
org$frostlang$frostc$LinkedList$Node* $tmp90 = *$tmp89;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
org$frostlang$frostc$LinkedList$Node** $tmp91 = &$tmp86->next;
*$tmp91 = $tmp88;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:81
org$frostlang$frostc$LinkedList$Node** $tmp92 = &param1->head;
org$frostlang$frostc$LinkedList$Node* $tmp93 = *$tmp92;
org$frostlang$frostc$LinkedList$Node** $tmp94 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp95 = *$tmp94;
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp96 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp96, ((frost$core$Object*) $tmp95));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$core$Weak** $tmp97 = &$tmp93->prev;
frost$core$Weak* $tmp98 = *$tmp97;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$core$Weak** $tmp99 = &$tmp93->prev;
*$tmp99 = $tmp96;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:82
org$frostlang$frostc$LinkedList$Node** $tmp100 = &param1->tail;
org$frostlang$frostc$LinkedList$Node* $tmp101 = *$tmp100;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
org$frostlang$frostc$LinkedList$Node** $tmp102 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp103 = *$tmp102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
org$frostlang$frostc$LinkedList$Node** $tmp104 = &param0->tail;
*$tmp104 = $tmp101;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:83
frost$core$Int* $tmp105 = &param0->_count;
frost$core$Int $tmp106 = *$tmp105;
frost$core$Int* $tmp107 = &param1->_count;
frost$core$Int $tmp108 = *$tmp107;
int64_t $tmp109 = $tmp106.value;
int64_t $tmp110 = $tmp108.value;
int64_t $tmp111 = $tmp109 + $tmp110;
frost$core$Int $tmp112 = (frost$core$Int) {$tmp111};
frost$core$Int* $tmp113 = &param0->_count;
*$tmp113 = $tmp112;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:84
$fn115 $tmp114 = ($fn115) param1->$class->vtable[8];
$tmp114(param1);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:87
org$frostlang$frostc$LinkedList$Node** $tmp116 = &param1->head;
org$frostlang$frostc$LinkedList$Node* $tmp117 = *$tmp116;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
org$frostlang$frostc$LinkedList$Node** $tmp118 = &param0->head;
org$frostlang$frostc$LinkedList$Node* $tmp119 = *$tmp118;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
org$frostlang$frostc$LinkedList$Node** $tmp120 = &param0->head;
*$tmp120 = $tmp117;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:88
org$frostlang$frostc$LinkedList$Node** $tmp121 = &param1->tail;
org$frostlang$frostc$LinkedList$Node* $tmp122 = *$tmp121;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
org$frostlang$frostc$LinkedList$Node** $tmp123 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp124 = *$tmp123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
org$frostlang$frostc$LinkedList$Node** $tmp125 = &param0->tail;
*$tmp125 = $tmp122;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:89
frost$core$Int* $tmp126 = &param1->_count;
frost$core$Int $tmp127 = *$tmp126;
frost$core$Int* $tmp128 = &param0->_count;
*$tmp128 = $tmp127;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:90
$fn130 $tmp129 = ($fn130) param1->$class->vtable[8];
$tmp129(param1);
goto block2;
block2:;
return;

}
frost$core$Object* org$frostlang$frostc$LinkedList$get_last$R$org$frostlang$frostc$LinkedList$T(org$frostlang$frostc$LinkedList* param0) {

ITable* $tmp131 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp131->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp131 = $tmp131->next;
}
$fn133 $tmp132 = $tmp131->methods[0];
frost$core$Int $tmp134 = $tmp132(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp135 = (frost$core$Int) {0u};
int64_t $tmp136 = $tmp134.value;
int64_t $tmp137 = $tmp135.value;
bool $tmp138 = $tmp136 > $tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block1; else goto block2;
block2:;
frost$core$Int $tmp141 = (frost$core$Int) {96u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s142, $tmp141, &$s143);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:97
org$frostlang$frostc$LinkedList$Node** $tmp144 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp145 = *$tmp144;
frost$core$Object** $tmp146 = &$tmp145->value;
frost$core$Object* $tmp147 = *$tmp146;
frost$core$Frost$ref$frost$core$Object$Q($tmp147);
return $tmp147;

}
void org$frostlang$frostc$LinkedList$removeLast(org$frostlang$frostc$LinkedList* param0) {

ITable* $tmp148 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp148->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp148 = $tmp148->next;
}
$fn150 $tmp149 = $tmp148->methods[0];
frost$core$Int $tmp151 = $tmp149(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp152 = (frost$core$Int) {0u};
int64_t $tmp153 = $tmp151.value;
int64_t $tmp154 = $tmp152.value;
bool $tmp155 = $tmp153 > $tmp154;
frost$core$Bit $tmp156 = (frost$core$Bit) {$tmp155};
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block1; else goto block2;
block2:;
frost$core$Int $tmp158 = (frost$core$Int) {101u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s159, $tmp158, &$s160);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:102
frost$core$Int* $tmp161 = &param0->_count;
frost$core$Int $tmp162 = *$tmp161;
frost$core$Int $tmp163 = (frost$core$Int) {1u};
int64_t $tmp164 = $tmp162.value;
int64_t $tmp165 = $tmp163.value;
bool $tmp166 = $tmp164 > $tmp165;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:103
org$frostlang$frostc$LinkedList$Node** $tmp169 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp170 = *$tmp169;
frost$core$Weak** $tmp171 = &$tmp170->prev;
frost$core$Weak* $tmp172 = *$tmp171;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LinkedList.frost:103:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp173 = &$tmp172->_valid;
frost$core$Bit $tmp174 = *$tmp173;
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block8; else goto block9;
block9:;
frost$core$Int $tmp176 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s177, $tmp176);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp178 = &$tmp172->value;
frost$core$Object* $tmp179 = *$tmp178;
frost$core$Frost$ref$frost$core$Object$Q($tmp179);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$LinkedList$Node*) NULL)));
org$frostlang$frostc$LinkedList$Node** $tmp180 = &((org$frostlang$frostc$LinkedList$Node*) $tmp179)->next;
org$frostlang$frostc$LinkedList$Node* $tmp181 = *$tmp180;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
org$frostlang$frostc$LinkedList$Node** $tmp182 = &((org$frostlang$frostc$LinkedList$Node*) $tmp179)->next;
*$tmp182 = ((org$frostlang$frostc$LinkedList$Node*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp179);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:104
org$frostlang$frostc$LinkedList$Node** $tmp183 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp184 = *$tmp183;
frost$core$Weak** $tmp185 = &$tmp184->prev;
frost$core$Weak* $tmp186 = *$tmp185;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LinkedList.frost:104:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp187 = &$tmp186->_valid;
frost$core$Bit $tmp188 = *$tmp187;
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block12; else goto block13;
block13:;
frost$core$Int $tmp190 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s191, $tmp190);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp192 = &$tmp186->value;
frost$core$Object* $tmp193 = *$tmp192;
frost$core$Frost$ref$frost$core$Object$Q($tmp193);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$LinkedList$Node*) $tmp193)));
org$frostlang$frostc$LinkedList$Node** $tmp194 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp195 = *$tmp194;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
org$frostlang$frostc$LinkedList$Node** $tmp196 = &param0->tail;
*$tmp196 = ((org$frostlang$frostc$LinkedList$Node*) $tmp193);
frost$core$Frost$unref$frost$core$Object$Q($tmp193);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:105
frost$core$Int* $tmp197 = &param0->_count;
frost$core$Int $tmp198 = *$tmp197;
frost$core$Int $tmp199 = (frost$core$Int) {1u};
int64_t $tmp200 = $tmp198.value;
int64_t $tmp201 = $tmp199.value;
int64_t $tmp202 = $tmp200 - $tmp201;
frost$core$Int $tmp203 = (frost$core$Int) {$tmp202};
frost$core$Int* $tmp204 = &param0->_count;
*$tmp204 = $tmp203;
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:108
$fn206 $tmp205 = ($fn206) param0->$class->vtable[8];
$tmp205(param0);
goto block4;
block4:;
return;

}
void org$frostlang$frostc$LinkedList$clear(org$frostlang$frostc$LinkedList* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:114
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$LinkedList$Node*) NULL)));
org$frostlang$frostc$LinkedList$Node** $tmp207 = &param0->head;
org$frostlang$frostc$LinkedList$Node* $tmp208 = *$tmp207;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
org$frostlang$frostc$LinkedList$Node** $tmp209 = &param0->head;
*$tmp209 = ((org$frostlang$frostc$LinkedList$Node*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:115
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$LinkedList$Node*) NULL)));
org$frostlang$frostc$LinkedList$Node** $tmp210 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp211 = *$tmp210;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
org$frostlang$frostc$LinkedList$Node** $tmp212 = &param0->tail;
*$tmp212 = ((org$frostlang$frostc$LinkedList$Node*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:116
frost$core$Int $tmp213 = (frost$core$Int) {0u};
frost$core$Int* $tmp214 = &param0->_count;
*$tmp214 = $tmp213;
return;

}
frost$core$String* org$frostlang$frostc$LinkedList$get_asString$R$frost$core$String(org$frostlang$frostc$LinkedList* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Object* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:121
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp215 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp215);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$MutableString* $tmp216 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local0) = $tmp215;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:122
frost$core$MutableString* $tmp217 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp217, &$s218);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:123
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s219));
frost$core$String* $tmp220 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
*(&local1) = &$s221;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:124
ITable* $tmp222 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp222->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp222 = $tmp222->next;
}
$fn224 $tmp223 = $tmp222->methods[0];
frost$collections$Iterator* $tmp225 = $tmp223(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp226 = $tmp225->$class->itable;
while ($tmp226->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp226 = $tmp226->next;
}
$fn228 $tmp227 = $tmp226->methods[0];
frost$core$Bit $tmp229 = $tmp227($tmp225);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp231 = $tmp225->$class->itable;
while ($tmp231->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp231 = $tmp231->next;
}
$fn233 $tmp232 = $tmp231->methods[1];
frost$core$Object* $tmp234 = $tmp232($tmp225);
frost$core$Frost$ref$frost$core$Object$Q($tmp234);
frost$core$Object* $tmp235 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp235);
*(&local2) = $tmp234;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:125
frost$core$MutableString* $tmp236 = *(&local0);
frost$core$String* $tmp237 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp236, $tmp237);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:126
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s238));
frost$core$String* $tmp239 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local1) = &$s240;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:127
frost$core$Object* $tmp241 = *(&local2);
frost$core$Bit $tmp242 = (frost$core$Bit) {true};
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:128
frost$core$MutableString* $tmp244 = *(&local0);
frost$core$Object* $tmp245 = *(&local2);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from LinkedList.frost:128:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn247 $tmp246 = ($fn247) $tmp245->$class->vtable[0];
frost$core$String* $tmp248 = $tmp246($tmp245);
frost$core$MutableString$append$frost$core$String($tmp244, $tmp248);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:131
frost$core$MutableString* $tmp249 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp249, &$s250);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp234);
frost$core$Object* $tmp251 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp251);
*(&local2) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:134
frost$core$MutableString* $tmp252 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp252, &$s253);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:135
frost$core$MutableString* $tmp254 = *(&local0);
frost$core$String* $tmp255 = frost$core$MutableString$finish$R$frost$core$String($tmp254);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$core$String* $tmp256 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp257 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp255;

}
void org$frostlang$frostc$LinkedList$init(org$frostlang$frostc$LinkedList* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:39
frost$core$Int $tmp258 = (frost$core$Int) {0u};
frost$core$Int* $tmp259 = &param0->_count;
*$tmp259 = $tmp258;
return;

}
void org$frostlang$frostc$LinkedList$cleanup(org$frostlang$frostc$LinkedList* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:3
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$LinkedList$Node** $tmp260 = &param0->head;
org$frostlang$frostc$LinkedList$Node* $tmp261 = *$tmp260;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
org$frostlang$frostc$LinkedList$Node** $tmp262 = &param0->tail;
org$frostlang$frostc$LinkedList$Node* $tmp263 = *$tmp262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
return;

}

