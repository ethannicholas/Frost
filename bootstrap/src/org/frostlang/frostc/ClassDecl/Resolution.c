#include "org/frostlang/frostc/ClassDecl/Resolution.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/Weak.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$ClassDecl$Resolution$class_type org$frostlang$frostc$ClassDecl$Resolution$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$ClassDecl$Resolution$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x52\x65\x73\x6f\x6c\x75\x74\x69\x6f\x6e", 41, 418069668677381812, NULL };

void org$frostlang$frostc$ClassDecl$Resolution$init$org$frostlang$frostc$ClassDecl$Q(org$frostlang$frostc$ClassDecl$Resolution* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Weak* _1;
frost$core$Weak* _2;
frost$core$Object* _3;
frost$core$Object* _5;
frost$core$Weak** _7;
frost$core$Weak* _8;
frost$core$Object* _9;
frost$core$Weak** _11;
frost$core$Object* _13;
frost$core$Weak* _16;
frost$core$Weak* _17;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Weak** _22;
frost$core$Weak* _23;
frost$core$Object* _24;
frost$core$Weak** _26;
frost$core$Object* _28;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:41
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_1 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_2 = _1;
_3 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_2, _3);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->value;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->value;
*_11 = _1;
_13 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:44
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_16 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_17 = _16;
_18 = ((frost$core$Object*) param1);
frost$core$Weak$init$frost$core$Weak$T$Q(_17, _18);
_20 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = &param0->value;
_23 = *_22;
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = &param0->value;
*_26 = _16;
_28 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_28);
return;

}
void org$frostlang$frostc$ClassDecl$Resolution$cleanup(org$frostlang$frostc$ClassDecl$Resolution* param0) {

frost$core$Object* _1;
frost$core$Weak** _3;
frost$core$Weak* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:39
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->value;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}






