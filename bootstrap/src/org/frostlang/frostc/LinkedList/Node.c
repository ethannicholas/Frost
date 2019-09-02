#include "org/frostlang/frostc/LinkedList/Node.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Weak.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$LinkedList$Node$class_type org$frostlang$frostc$LinkedList$Node$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$LinkedList$Node$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 36, -3688922123338486519, NULL };

void org$frostlang$frostc$LinkedList$Node$init$org$frostlang$frostc$LinkedList$Node$T(org$frostlang$frostc$LinkedList$Node* param0, frost$core$Object* param1) {

org$frostlang$frostc$LinkedList$Node* _1;
frost$core$Weak* _2;
frost$core$Weak* _3;
frost$core$Object* _4;
frost$core$Object* _6;
frost$core$Weak** _8;
frost$core$Weak* _9;
frost$core$Object* _10;
frost$core$Weak** _12;
frost$core$Object* _14;
org$frostlang$frostc$LinkedList$Node* _17;
frost$core$Object* _18;
frost$core$Object** _20;
frost$core$Object* _21;
frost$core$Object* _22;
frost$core$Object** _24;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:9
_1 = param0;
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_2 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_3 = _2;
_4 = ((frost$core$Object*) ((org$frostlang$frostc$LinkedList$Node*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_3, _4);
_6 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = &_1->prev;
_9 = *_8;
_10 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_10);
_12 = &_1->prev;
*_12 = _2;
_14 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_14);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:12
_17 = param0;
_18 = param1;
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = &_17->value;
_21 = *_20;
_22 = _21;
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = &_17->value;
*_24 = param1;
return;

}
void org$frostlang$frostc$LinkedList$Node$cleanup(org$frostlang$frostc$LinkedList$Node* param0) {

frost$core$Object* _1;
org$frostlang$frostc$LinkedList$Node* _3;
frost$core$Object** _4;
frost$core$Object* _5;
frost$core$Object* _6;
org$frostlang$frostc$LinkedList$Node* _8;
org$frostlang$frostc$LinkedList$Node** _9;
org$frostlang$frostc$LinkedList$Node* _10;
frost$core$Object* _11;
org$frostlang$frostc$LinkedList$Node* _13;
frost$core$Weak** _14;
frost$core$Weak* _15;
frost$core$Object* _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:5
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->value;
_5 = *_4;
_6 = _5;
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = param0;
_9 = &_8->next;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = param0;
_14 = &_13->prev;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
return;

}

