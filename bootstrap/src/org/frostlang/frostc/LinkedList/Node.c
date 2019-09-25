#include "org/frostlang/frostc/LinkedList/Node.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Weak.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$LinkedList$Node$class_type org$frostlang$frostc$LinkedList$Node$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$LinkedList$Node$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x69\x6e\x6b\x65\x64\x4c\x69\x73\x74\x2e\x4e\x6f\x64\x65", 36, -3688922123338486519, NULL };

void org$frostlang$frostc$LinkedList$Node$init$org$frostlang$frostc$LinkedList$Node$T(void* rawSelf, frost$core$Object* param1) {
org$frostlang$frostc$LinkedList$Node* param0 = (org$frostlang$frostc$LinkedList$Node*) rawSelf;

frost$core$Weak* _1;
frost$core$Object* _2;
frost$core$Object* _4;
frost$core$Weak** _6;
frost$core$Weak* _7;
frost$core$Object* _8;
frost$core$Weak** _10;
frost$core$Object* _12;
frost$core$Object* _15;
frost$core$Object** _17;
frost$core$Object* _18;
frost$core$Object* _19;
frost$core$Object** _21;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:9
_1 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_2 = ((frost$core$Object*) ((org$frostlang$frostc$LinkedList$Node*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_1, _2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->prev;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->prev;
*_10 = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:12
_15 = param1;
frost$core$Frost$ref$frost$core$Object$Q(_15);
_17 = &param0->value;
_18 = *_17;
_19 = _18;
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = &param0->value;
*_21 = param1;
return;

}
void org$frostlang$frostc$LinkedList$Node$cleanup(void* rawSelf) {
org$frostlang$frostc$LinkedList$Node* param0 = (org$frostlang$frostc$LinkedList$Node*) rawSelf;

frost$core$Object* _1;
frost$core$Object** _3;
frost$core$Object* _4;
frost$core$Object* _5;
org$frostlang$frostc$LinkedList$Node** _7;
org$frostlang$frostc$LinkedList$Node* _8;
frost$core$Object* _9;
frost$core$Weak** _11;
frost$core$Weak* _12;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:5
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->value;
_4 = *_3;
_5 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->next;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->prev;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return;

}

