#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Variable$class_type org$frostlang$frostc$Variable$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$Variable$get_asString$R$frost$core$String, org$frostlang$frostc$Variable$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn2)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 29, -7485661671380419432, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 3563412735833858527, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 14, 4449036271541915161, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x69\x6e\x69\x74\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x73\x74\x6f\x72\x61\x67\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x53\x74\x6f\x72\x61\x67\x65\x29", 243, 8633673692106961677, NULL };

void org$frostlang$frostc$Variable$init$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Variable$Storage(void* rawSelf, org$frostlang$frostc$Position param1, org$frostlang$frostc$Variable$Kind param2, frost$core$String* param3, org$frostlang$frostc$Type* param4, org$frostlang$frostc$Variable$Storage* param5) {
org$frostlang$frostc$Variable* param0 = (org$frostlang$frostc$Variable*) rawSelf;

org$frostlang$frostc$Symbol$Kind local0;
org$frostlang$frostc$Symbol$Kind local1;
frost$core$Weak* _1;
frost$core$Object* _2;
frost$core$Object* _4;
frost$core$Weak** _6;
frost$core$Weak* _7;
frost$core$Object* _8;
frost$core$Weak** _10;
frost$core$Object* _12;
org$frostlang$frostc$Symbol* _14;
frost$core$String** _15;
frost$core$String* _16;
frost$core$Equatable* _17;
frost$core$Equatable* _18;
$fn2 _19;
frost$core$Bit _20;
bool _21;
frost$core$Int _23;
org$frostlang$frostc$Variable$Kind* _27;
frost$core$Object* _30;
org$frostlang$frostc$Type** _32;
org$frostlang$frostc$Type* _33;
frost$core$Object* _34;
org$frostlang$frostc$Type** _36;
frost$core$Object* _39;
org$frostlang$frostc$Variable$Storage** _41;
org$frostlang$frostc$Variable$Storage* _42;
frost$core$Object* _43;
org$frostlang$frostc$Variable$Storage** _45;
org$frostlang$frostc$Symbol* _48;
frost$core$Int _49;
frost$core$Int* _52;
org$frostlang$frostc$Symbol$Kind _54;
org$frostlang$frostc$Symbol$Kind _57;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:28
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
_14 = ((org$frostlang$frostc$Symbol*) param4);
_15 = &_14->name;
_16 = *_15;
_17 = ((frost$core$Equatable*) _16);
_18 = ((frost$core$Equatable*) &$s3);
ITable* $tmp4 = _17->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4 = $tmp4->next;
}
_19 = $tmp4->methods[1];
_20 = _19(_17, _18);
_21 = _20.value;
if (_21) goto block1; else goto block2;
block2:;
_23 = (frost$core$Int) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _23, &$s6);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:32
_27 = &param0->varKind;
*_27 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:33
_30 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = &param0->type;
_33 = *_32;
_34 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = &param0->type;
*_36 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:34
_39 = ((frost$core$Object*) param5);
frost$core$Frost$ref$frost$core$Object$Q(_39);
_41 = &param0->storage;
_42 = *_41;
_43 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = &param0->storage;
*_45 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:35
_48 = ((org$frostlang$frostc$Symbol*) param0);
_49 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Variable.frost:35:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_52 = &(&local1)->$rawValue;
*_52 = _49;
_54 = *(&local1);
*(&local0) = _54;
_57 = *(&local0);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_48, _57, param1, param3);
return;

}
frost$core$String* org$frostlang$frostc$Variable$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$Variable* param0 = (org$frostlang$frostc$Variable*) rawSelf;

org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$core$Object* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:40
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->name;
_3 = *_2;
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
return _3;

}
void org$frostlang$frostc$Variable$cleanup(void* rawSelf) {
org$frostlang$frostc$Variable* param0 = (org$frostlang$frostc$Variable*) rawSelf;

org$frostlang$frostc$Symbol* _1;
org$frostlang$frostc$Type** _3;
org$frostlang$frostc$Type* _4;
frost$core$Object* _5;
org$frostlang$frostc$Variable$Storage** _7;
org$frostlang$frostc$Variable$Storage* _8;
frost$core$Object* _9;
frost$core$Weak** _11;
frost$core$Weak* _12;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:7
_1 = ((org$frostlang$frostc$Symbol*) param0);
org$frostlang$frostc$Symbol$cleanup(_1);
_3 = &param0->type;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->storage;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->owner;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return;

}

