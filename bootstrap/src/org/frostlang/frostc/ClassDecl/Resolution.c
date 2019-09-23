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

void org$frostlang$frostc$ClassDecl$Resolution$init$org$frostlang$frostc$ClassDecl$Q(void* rawSelf, org$frostlang$frostc$ClassDecl* param1) {
org$frostlang$frostc$ClassDecl$Resolution* param0 = (org$frostlang$frostc$ClassDecl$Resolution*) rawSelf;

frost$core$Weak* _1;
frost$core$Object* _2;
frost$core$Object* _4;
frost$core$Weak** _6;
frost$core$Weak* _7;
frost$core$Object* _8;
frost$core$Weak** _10;
frost$core$Object* _12;
frost$core$Weak* _15;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Weak** _20;
frost$core$Weak* _21;
frost$core$Object* _22;
frost$core$Weak** _24;
frost$core$Object* _26;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:41
_1 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_2 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_1, _2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->value;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->value;
*_10 = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:44
_15 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_16 = ((frost$core$Object*) param1);
frost$core$Weak$init$frost$core$Weak$T$Q(_15, _16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = &param0->value;
_21 = *_20;
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = &param0->value;
*_24 = _15;
_26 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_26);
return;

}
void org$frostlang$frostc$ClassDecl$Resolution$cleanup(void* rawSelf) {
org$frostlang$frostc$ClassDecl$Resolution* param0 = (org$frostlang$frostc$ClassDecl$Resolution*) rawSelf;

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






