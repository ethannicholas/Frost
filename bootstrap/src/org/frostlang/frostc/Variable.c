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
frost$core$Weak* _2;
frost$core$Object* _3;
frost$core$Object* _5;
frost$core$Weak** _7;
frost$core$Weak* _8;
frost$core$Object* _9;
frost$core$Weak** _11;
frost$core$Object* _13;
org$frostlang$frostc$Symbol* _15;
frost$core$String** _16;
frost$core$String* _17;
frost$core$Equatable* _18;
frost$core$Equatable* _19;
frost$core$Equatable* _20;
$fn2 _21;
frost$core$Bit _22;
bool _23;
frost$core$Int _25;
org$frostlang$frostc$Variable$Kind* _29;
frost$core$Object* _32;
org$frostlang$frostc$Type** _34;
org$frostlang$frostc$Type* _35;
frost$core$Object* _36;
org$frostlang$frostc$Type** _38;
frost$core$Object* _41;
org$frostlang$frostc$Variable$Storage** _43;
org$frostlang$frostc$Variable$Storage* _44;
frost$core$Object* _45;
org$frostlang$frostc$Variable$Storage** _47;
org$frostlang$frostc$Symbol* _50;
frost$core$Int _51;
frost$core$Int* _54;
org$frostlang$frostc$Symbol$Kind _56;
org$frostlang$frostc$Symbol$Kind _59;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:28
_1 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_2 = _1;
_3 = ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_2, _3);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->owner;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->owner;
*_11 = _1;
_13 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = ((org$frostlang$frostc$Symbol*) param4);
_16 = &_15->name;
_17 = *_16;
_18 = ((frost$core$Equatable*) _17);
_19 = _18;
_20 = ((frost$core$Equatable*) &$s3);
ITable* $tmp4 = _19->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4 = $tmp4->next;
}
_21 = $tmp4->methods[1];
_22 = _21(_19, _20);
_23 = _22.value;
if (_23) goto block1; else goto block2;
block2:;
_25 = (frost$core$Int) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _25, &$s6);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:32
_29 = &param0->varKind;
*_29 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:33
_32 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = &param0->type;
_35 = *_34;
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = &param0->type;
*_38 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:34
_41 = ((frost$core$Object*) param5);
frost$core$Frost$ref$frost$core$Object$Q(_41);
_43 = &param0->storage;
_44 = *_43;
_45 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = &param0->storage;
*_47 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:35
_50 = ((org$frostlang$frostc$Symbol*) param0);
_51 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Variable.frost:35:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_54 = &(&local1)->$rawValue;
*_54 = _51;
_56 = *(&local1);
*(&local0) = _56;
_59 = *(&local0);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_50, _59, param1, param3);
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

