#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$MethodDecl$GenericParameter$class_type org$frostlang$frostc$MethodDecl$GenericParameter$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$MethodDecl$GenericParameter$get_asString$R$frost$core$String, org$frostlang$frostc$MethodDecl$GenericParameter$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 48, -4893146077359160067, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

void org$frostlang$frostc$MethodDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type(org$frostlang$frostc$MethodDecl$GenericParameter* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, frost$core$String* param3, org$frostlang$frostc$Type* param4) {

org$frostlang$frostc$Symbol$Kind local0;
org$frostlang$frostc$Symbol$Kind local1;
frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
frost$core$String** _7;
frost$core$Object* _10;
org$frostlang$frostc$Type** _12;
org$frostlang$frostc$Type* _13;
frost$core$Object* _14;
org$frostlang$frostc$Type** _16;
org$frostlang$frostc$Symbol* _19;
frost$core$Int _20;
frost$core$Int* _23;
org$frostlang$frostc$Symbol$Kind _25;
org$frostlang$frostc$Symbol$Kind _28;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:38
_1 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->owner;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->owner;
*_7 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:39
_10 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->bound;
_13 = *_12;
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->bound;
*_16 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:40
_19 = ((org$frostlang$frostc$Symbol*) param0);
_20 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from MethodDecl.frost:40:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_23 = &(&local1)->$rawValue;
*_23 = _20;
_25 = *(&local1);
*(&local0) = _25;
_28 = *(&local0);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_19, _28, param1, param3);
return;

}
frost$core$String* org$frostlang$frostc$MethodDecl$GenericParameter$get_asString$R$frost$core$String(org$frostlang$frostc$MethodDecl$GenericParameter* param0) {

frost$core$String** _1;
frost$core$String* _2;
frost$core$Object* _5;
frost$core$String* _8;
org$frostlang$frostc$Symbol* _9;
frost$core$String** _10;
frost$core$String* _11;
frost$core$String* _12;
frost$core$String* _13;
org$frostlang$frostc$Type** _14;
org$frostlang$frostc$Type* _15;
frost$core$Object* _16;
$fn2 _19;
frost$core$String* _20;
frost$core$String* _21;
frost$core$Object* _22;
frost$core$Object* _24;
frost$core$Object* _26;
frost$core$String* _29;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$Object* _42;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:45
_1 = &param0->owner;
_2 = *_1;
// begin inline call to function frost.core.String.get_asString():frost.core.String from MethodDecl.frost:45:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_5 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_8 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2, &$s3);
_9 = ((org$frostlang$frostc$Symbol*) param0);
_10 = &_9->name;
_11 = *_10;
_12 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_8, _11);
_13 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_12, &$s4);
_14 = &param0->bound;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodDecl.frost:45:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_19 = ($fn5) _16->$class->vtable[0];
_20 = _19(_16);
_21 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_13, _20);
_22 = ((frost$core$Object*) _21);
frost$core$Frost$ref$frost$core$Object$Q(_22);
_24 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_26);
_29 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_21, &$s6);
_30 = ((frost$core$Object*) _29);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_40);
_42 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_42);
return _29;

}
void org$frostlang$frostc$MethodDecl$GenericParameter$cleanup(org$frostlang$frostc$MethodDecl$GenericParameter* param0) {

org$frostlang$frostc$Symbol* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
org$frostlang$frostc$Type** _7;
org$frostlang$frostc$Type* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:32
_1 = ((org$frostlang$frostc$Symbol*) param0);
org$frostlang$frostc$Symbol$cleanup(_1);
_3 = &param0->owner;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->bound;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}






