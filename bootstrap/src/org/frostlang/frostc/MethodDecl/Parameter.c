#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$MethodDecl$Parameter$class_type org$frostlang$frostc$MethodDecl$Parameter$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$MethodDecl$Parameter$get_asString$R$frost$core$String, org$frostlang$frostc$MethodDecl$Parameter$cleanup} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 41, -4772957783404417120, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };

void org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type(void* rawSelf, frost$core$String* param1, org$frostlang$frostc$Type* param2) {
org$frostlang$frostc$MethodDecl$Parameter* param0 = (org$frostlang$frostc$MethodDecl$Parameter*) rawSelf;

frost$core$Weak* _1;
frost$core$Object* _2;
frost$core$Object* _4;
frost$core$Weak** _6;
frost$core$Weak* _7;
frost$core$Object* _8;
frost$core$Weak** _10;
frost$core$Object* _12;
frost$core$Object* _15;
frost$core$String** _17;
frost$core$String* _18;
frost$core$Object* _19;
frost$core$String** _21;
frost$core$Object* _24;
org$frostlang$frostc$Type** _26;
org$frostlang$frostc$Type* _27;
frost$core$Object* _28;
org$frostlang$frostc$Type** _30;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:19
_1 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_2 = ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_1, _2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->owner;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->owner;
*_10 = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:22
_15 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_15);
_17 = &param0->name;
_18 = *_17;
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = &param0->name;
*_21 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:23
_24 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_24);
_26 = &param0->type;
_27 = *_26;
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
_30 = &param0->type;
*_30 = param2;
return;

}
frost$core$String* org$frostlang$frostc$MethodDecl$Parameter$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$MethodDecl$Parameter* param0 = (org$frostlang$frostc$MethodDecl$Parameter*) rawSelf;

frost$core$String** _1;
frost$core$String* _2;
frost$core$Object* _5;
frost$core$String* _8;
org$frostlang$frostc$Type** _9;
org$frostlang$frostc$Type* _10;
frost$core$Object* _11;
$fn2 _14;
frost$core$String* _15;
frost$core$String* _16;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$String* _24;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$Object* _29;
frost$core$Object* _31;
frost$core$Object* _33;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:28
_1 = &param0->name;
_2 = *_1;
// begin inline call to function frost.core.String.get_asString():frost.core.String from MethodDecl.frost:28:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_5 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_8 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2, &$s3);
_9 = &param0->type;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodDecl.frost:28:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_14 = ($fn4) _11->$class->vtable[0];
_15 = _14(_11);
_16 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_8, _15);
_17 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_16, &$s5);
_25 = ((frost$core$Object*) _24);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_31 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_33 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_33);
return _24;

}
void org$frostlang$frostc$MethodDecl$Parameter$cleanup(void* rawSelf) {
org$frostlang$frostc$MethodDecl$Parameter* param0 = (org$frostlang$frostc$MethodDecl$Parameter*) rawSelf;

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
org$frostlang$frostc$Type** _7;
org$frostlang$frostc$Type* _8;
frost$core$Object* _9;
frost$core$Weak** _11;
frost$core$Weak* _12;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:13
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->name;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->type;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->owner;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return;

}

