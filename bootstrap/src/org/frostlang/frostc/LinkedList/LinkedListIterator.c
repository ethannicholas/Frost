#include "org/frostlang/frostc/LinkedList/LinkedListIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/LinkedList/Node.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Object* org$frostlang$frostc$LinkedList$LinkedListIterator$next$R$org$frostlang$frostc$LinkedList$LinkedListIterator$T$shim(org$frostlang$frostc$LinkedList$LinkedListIterator* p0) {
    frost$core$Object* result = org$frostlang$frostc$LinkedList$LinkedListIterator$next$R$org$frostlang$frostc$LinkedList$LinkedListIterator$T(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } org$frostlang$frostc$LinkedList$LinkedListIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { org$frostlang$frostc$LinkedList$LinkedListIterator$get_done$R$frost$core$Bit, org$frostlang$frostc$LinkedList$LinkedListIterator$next$R$org$frostlang$frostc$LinkedList$LinkedListIterator$T$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
org$frostlang$frostc$LinkedList$LinkedListIterator$class_type org$frostlang$frostc$LinkedList$LinkedListIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$LinkedList$LinkedListIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$LinkedList$LinkedListIterator$cleanup, org$frostlang$frostc$LinkedList$LinkedListIterator$next$R$org$frostlang$frostc$LinkedList$LinkedListIterator$T$shim, org$frostlang$frostc$LinkedList$LinkedListIterator$get_done$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn2)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72", 50, 9081505766101653022, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 142, -7792985317219817619, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 165, 434639595046643102, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 5729708155239154352, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 165, 434639595046643102, NULL };

void org$frostlang$frostc$LinkedList$LinkedListIterator$init$org$frostlang$frostc$LinkedList$Node$LTorg$frostlang$frostc$LinkedList$LinkedListIterator$T$GT(void* rawSelf, org$frostlang$frostc$LinkedList$Node* param1) {
org$frostlang$frostc$LinkedList$LinkedListIterator* param0 = (org$frostlang$frostc$LinkedList$LinkedListIterator*) rawSelf;

org$frostlang$frostc$LinkedList$Node* _1;
frost$core$Object* _2;
org$frostlang$frostc$LinkedList$Node** _4;
org$frostlang$frostc$LinkedList$Node* _5;
frost$core$Object* _6;
org$frostlang$frostc$LinkedList$Node** _8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:21
_1 = param1;
_2 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_2);
_4 = &param0->current;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = &param0->current;
*_8 = _1;
return;

}
frost$core$Object* org$frostlang$frostc$LinkedList$LinkedListIterator$next$R$org$frostlang$frostc$LinkedList$LinkedListIterator$T(void* rawSelf) {
org$frostlang$frostc$LinkedList$LinkedListIterator* param0 = (org$frostlang$frostc$LinkedList$LinkedListIterator*) rawSelf;

frost$core$Object* local0 = NULL;
frost$collections$Iterator* _0;
$fn2 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
org$frostlang$frostc$LinkedList$Node** _15;
org$frostlang$frostc$LinkedList$Node* _16;
bool _17;
frost$core$Bit _18;
bool _19;
frost$core$Int _21;
org$frostlang$frostc$LinkedList$Node** _25;
org$frostlang$frostc$LinkedList$Node* _26;
bool _27;
frost$core$Bit _28;
bool _29;
frost$core$Int _31;
org$frostlang$frostc$LinkedList$Node* _34;
frost$core$Object** _35;
frost$core$Object* _36;
frost$core$Object* _37;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$Object* _42;
org$frostlang$frostc$LinkedList$Node** _46;
org$frostlang$frostc$LinkedList$Node* _47;
bool _48;
frost$core$Bit _49;
bool _50;
frost$core$Int _52;
org$frostlang$frostc$LinkedList$Node* _55;
org$frostlang$frostc$LinkedList$Node** _56;
org$frostlang$frostc$LinkedList$Node* _57;
org$frostlang$frostc$LinkedList$Node* _58;
frost$core$Object* _59;
org$frostlang$frostc$LinkedList$Node** _61;
org$frostlang$frostc$LinkedList$Node* _62;
frost$core$Object* _63;
org$frostlang$frostc$LinkedList$Node** _65;
frost$core$Object* _68;
frost$core$Object* _69;
frost$core$Object* _71;
frost$core$Object* _72;
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
_15 = &param0->current;
_16 = *_15;
_17 = _16 != NULL;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block4; else goto block5;
block5:;
_21 = (frost$core$Int) {26u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s6, _21);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:27
_25 = &param0->current;
_26 = *_25;
_27 = _26 != NULL;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block6; else goto block7;
block7:;
_31 = (frost$core$Int) {27u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _31, &$s8);
abort(); // unreachable
block6:;
_34 = _26;
_35 = &_34->value;
_36 = *_35;
_37 = _36;
*(&local0) = ((frost$core$Object*) NULL);
_39 = _37;
frost$core$Frost$ref$frost$core$Object$Q(_39);
_41 = *(&local0);
_42 = _41;
frost$core$Frost$unref$frost$core$Object$Q(_42);
*(&local0) = _37;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:28
_46 = &param0->current;
_47 = *_46;
_48 = _47 != NULL;
_49 = (frost$core$Bit) {_48};
_50 = _49.value;
if (_50) goto block8; else goto block9;
block9:;
_52 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _52, &$s10);
abort(); // unreachable
block8:;
_55 = _47;
_56 = &_55->next;
_57 = *_56;
_58 = _57;
_59 = ((frost$core$Object*) _58);
frost$core$Frost$ref$frost$core$Object$Q(_59);
_61 = &param0->current;
_62 = *_61;
_63 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_63);
_65 = &param0->current;
*_65 = _58;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:29
_68 = *(&local0);
_69 = _68;
frost$core$Frost$ref$frost$core$Object$Q(_69);
_71 = *(&local0);
_72 = _71;
frost$core$Frost$unref$frost$core$Object$Q(_72);
*(&local0) = ((frost$core$Object*) NULL);
return _68;

}
frost$core$Bit org$frostlang$frostc$LinkedList$LinkedListIterator$get_done$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$LinkedList$LinkedListIterator* param0 = (org$frostlang$frostc$LinkedList$LinkedListIterator*) rawSelf;

org$frostlang$frostc$LinkedList$Node** _1;
org$frostlang$frostc$LinkedList$Node* _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:34
_1 = &param0->current;
_2 = *_1;
_3 = _2 == NULL;
_4 = (frost$core$Bit) {_3};
return _4;

}
void org$frostlang$frostc$LinkedList$LinkedListIterator$cleanup(void* rawSelf) {
org$frostlang$frostc$LinkedList$LinkedListIterator* param0 = (org$frostlang$frostc$LinkedList$LinkedListIterator*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$LinkedList$Node** _3;
org$frostlang$frostc$LinkedList$Node* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:17
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->current;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




