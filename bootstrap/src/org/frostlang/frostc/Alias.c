#include "org/frostlang/frostc/Alias.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Alias$class_type org$frostlang$frostc$Alias$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$Alias$get_asString$R$frost$core$String, org$frostlang$frostc$Alias$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6c\x69\x61\x73", 26, 475752284557701908, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6c\x69\x61\x73\x28", 6, 1961570522600386317, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e", 2, 562958782608952338, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type(org$frostlang$frostc$Alias* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2) {

org$frostlang$frostc$Symbol$Kind local0;
org$frostlang$frostc$Symbol$Kind local1;
org$frostlang$frostc$Symbol* _1;
frost$core$Int _2;
frost$core$Int* _5;
org$frostlang$frostc$Symbol$Kind _7;
org$frostlang$frostc$Symbol$Kind _10;
org$frostlang$frostc$Symbol* _11;
org$frostlang$frostc$Position* _12;
org$frostlang$frostc$Position _13;
frost$core$Object* _16;
org$frostlang$frostc$Type** _18;
org$frostlang$frostc$Type* _19;
frost$core$Object* _20;
org$frostlang$frostc$Type** _22;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Alias.frost:8
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Alias.frost:8:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_5 = &(&local1)->$rawValue;
*_5 = _2;
_7 = *(&local1);
*(&local0) = _7;
_10 = *(&local0);
_11 = ((org$frostlang$frostc$Symbol*) param2);
_12 = &_11->position;
_13 = *_12;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_1, _10, _13, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Alias.frost:9
_16 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = &param0->type;
_19 = *_18;
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = &param0->type;
*_22 = param2;
return;

}
frost$core$String* org$frostlang$frostc$Alias$get_asString$R$frost$core$String(org$frostlang$frostc$Alias* param0) {

org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$core$String* _4;
frost$core$String* _5;
org$frostlang$frostc$Type** _6;
org$frostlang$frostc$Type* _7;
frost$core$Object* _8;
$fn2 _11;
frost$core$String* _12;
frost$core$String* _13;
frost$core$Object* _14;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$String* _21;
frost$core$Object* _22;
frost$core$Object* _24;
frost$core$Object* _26;
frost$core$Object* _28;
frost$core$Object* _30;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Alias.frost:14
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->name;
_3 = *_2;
_4 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3, _3);
_5 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_4, &$s4);
_6 = &param0->type;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Alias.frost:14:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_11 = ($fn5) _8->$class->vtable[0];
_12 = _11(_8);
_13 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_5, _12);
_14 = ((frost$core$Object*) _13);
frost$core$Frost$ref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_21 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_13, &$s6);
_22 = ((frost$core$Object*) _21);
frost$core$Frost$ref$frost$core$Object$Q(_22);
_24 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_26);
_28 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_28);
_30 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_30);
return _21;

}
void org$frostlang$frostc$Alias$cleanup(org$frostlang$frostc$Alias* param0) {

org$frostlang$frostc$Symbol* _1;
org$frostlang$frostc$Type** _3;
org$frostlang$frostc$Type* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Alias.frost:4
_1 = ((org$frostlang$frostc$Symbol*) param0);
org$frostlang$frostc$Symbol$cleanup(_1);
_3 = &param0->type;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}






