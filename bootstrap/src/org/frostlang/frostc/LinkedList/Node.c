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

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:9
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp2 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp2, ((frost$core$Object*) ((org$frostlang$frostc$LinkedList$Node*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$core$Weak** $tmp3 = &param0->prev;
frost$core$Weak* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$core$Weak** $tmp5 = &param0->prev;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:12
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object** $tmp6 = &param0->value;
frost$core$Object* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q($tmp7);
frost$core$Object** $tmp8 = &param0->value;
*$tmp8 = param1;
return;

}
void org$frostlang$frostc$LinkedList$Node$cleanup(org$frostlang$frostc$LinkedList$Node* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LinkedList.frost:5
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Object** $tmp9 = &param0->value;
frost$core$Object* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q($tmp10);
org$frostlang$frostc$LinkedList$Node** $tmp11 = &param0->next;
org$frostlang$frostc$LinkedList$Node* $tmp12 = *$tmp11;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$core$Weak** $tmp13 = &param0->prev;
frost$core$Weak* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
return;

}

