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

typedef frost$core$Bit (*$fn2)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72", 50, 9081505766101653022, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 142, -7792985317219817619, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 165, 434639595046643102, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 165, 434639595046643102, NULL };

void org$frostlang$frostc$LinkedList$LinkedListIterator$init$org$frostlang$frostc$LinkedList$Node$LTorg$frostlang$frostc$LinkedList$LinkedListIterator$T$GT(org$frostlang$frostc$LinkedList$LinkedListIterator* param0, org$frostlang$frostc$LinkedList$Node* param1) {

org$frostlang$frostc$LinkedList$LinkedListIterator* _1;
org$frostlang$frostc$LinkedList$Node* _2;
frost$core$Object* _3;
org$frostlang$frostc$LinkedList$Node** _5;
org$frostlang$frostc$LinkedList$Node* _6;
frost$core$Object* _7;
org$frostlang$frostc$LinkedList$Node** _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:21
_1 = param0;
_2 = param1;
_3 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = &_1->current;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = &_1->current;
*_9 = _2;
return;

}
frost$core$Object* org$frostlang$frostc$LinkedList$LinkedListIterator$next$R$org$frostlang$frostc$LinkedList$LinkedListIterator$T(org$frostlang$frostc$LinkedList$LinkedListIterator* param0) {

frost$core$Object* local0 = NULL;
frost$collections$Iterator* _0;
$fn2 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
org$frostlang$frostc$LinkedList$LinkedListIterator* _15;
org$frostlang$frostc$LinkedList$Node** _16;
org$frostlang$frostc$LinkedList$Node* _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$core$Int _22;
org$frostlang$frostc$LinkedList$LinkedListIterator* _26;
org$frostlang$frostc$LinkedList$Node** _27;
org$frostlang$frostc$LinkedList$Node* _28;
bool _29;
frost$core$Bit _30;
bool _31;
frost$core$Int _33;
org$frostlang$frostc$LinkedList$Node* _36;
frost$core$Object** _37;
frost$core$Object* _38;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$Object* _44;
org$frostlang$frostc$LinkedList$LinkedListIterator* _48;
org$frostlang$frostc$LinkedList$LinkedListIterator* _49;
org$frostlang$frostc$LinkedList$Node** _50;
org$frostlang$frostc$LinkedList$Node* _51;
bool _52;
frost$core$Bit _53;
bool _54;
frost$core$Int _56;
org$frostlang$frostc$LinkedList$Node* _59;
org$frostlang$frostc$LinkedList$Node** _60;
org$frostlang$frostc$LinkedList$Node* _61;
org$frostlang$frostc$LinkedList$Node* _62;
frost$core$Object* _63;
org$frostlang$frostc$LinkedList$Node** _65;
org$frostlang$frostc$LinkedList$Node* _66;
frost$core$Object* _67;
org$frostlang$frostc$LinkedList$Node** _69;
frost$core$Object* _72;
frost$core$Object* _73;
frost$core$Object* _75;
frost$core$Object* _76;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp3 = _0->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3 = $tmp3->next;
}
_1 = $tmp3->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {25u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4, _11, &$s5);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:26
_15 = param0;
_16 = &_15->current;
_17 = *_16;
_18 = _17 != NULL;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block4; else goto block5;
block5:;
_22 = (frost$core$Int) {26u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s6, _22);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:27
_26 = param0;
_27 = &_26->current;
_28 = *_27;
_29 = _28 != NULL;
_30 = (frost$core$Bit) {_29};
_31 = _30.value;
if (_31) goto block6; else goto block7;
block7:;
_33 = (frost$core$Int) {27u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _33, &$s8);
abort(); // unreachable
block6:;
_36 = _28;
_37 = &_36->value;
_38 = *_37;
_39 = _38;
*(&local0) = ((frost$core$Object*) NULL);
_41 = _39;
frost$core$Frost$ref$frost$core$Object$Q(_41);
_43 = *(&local0);
_44 = _43;
frost$core$Frost$unref$frost$core$Object$Q(_44);
*(&local0) = _39;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:28
_48 = param0;
_49 = param0;
_50 = &_49->current;
_51 = *_50;
_52 = _51 != NULL;
_53 = (frost$core$Bit) {_52};
_54 = _53.value;
if (_54) goto block8; else goto block9;
block9:;
_56 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _56, &$s10);
abort(); // unreachable
block8:;
_59 = _51;
_60 = &_59->next;
_61 = *_60;
_62 = _61;
_63 = ((frost$core$Object*) _62);
frost$core$Frost$ref$frost$core$Object$Q(_63);
_65 = &_48->current;
_66 = *_65;
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
_69 = &_48->current;
*_69 = _62;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:29
_72 = *(&local0);
_73 = _72;
frost$core$Frost$ref$frost$core$Object$Q(_73);
_75 = *(&local0);
_76 = _75;
frost$core$Frost$unref$frost$core$Object$Q(_76);
*(&local0) = ((frost$core$Object*) NULL);
return _72;

}
frost$core$Bit org$frostlang$frostc$LinkedList$LinkedListIterator$get_done$R$frost$core$Bit(org$frostlang$frostc$LinkedList$LinkedListIterator* param0) {

org$frostlang$frostc$LinkedList$LinkedListIterator* _1;
org$frostlang$frostc$LinkedList$Node** _2;
org$frostlang$frostc$LinkedList$Node* _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:34
_1 = param0;
_2 = &_1->current;
_3 = *_2;
_4 = _3 == NULL;
_5 = (frost$core$Bit) {_4};
return _5;

}
void org$frostlang$frostc$LinkedList$LinkedListIterator$cleanup(org$frostlang$frostc$LinkedList$LinkedListIterator* param0) {

frost$core$Object* _1;
org$frostlang$frostc$LinkedList$LinkedListIterator* _3;
org$frostlang$frostc$LinkedList$Node** _4;
org$frostlang$frostc$LinkedList$Node* _5;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:17
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->current;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return;

}






