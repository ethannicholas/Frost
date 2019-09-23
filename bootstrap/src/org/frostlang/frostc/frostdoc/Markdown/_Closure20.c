#include "org/frostlang/frostc/frostdoc/Markdown/_Closure20.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure20$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure20$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure20$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure20$$anonymous19$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn2)(frost$collections$ListView*, frost$core$Int);
typedef void (*$fn3)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$Object* (*$fn4)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$String* (*$fn5)(frost$core$Object*);
typedef void (*$fn9)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn15)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x30", 49, -4904420822714040345, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x61\x20\x6e\x61\x6d\x65\x3d\x22", 9, -9190680143138402286, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x3e\x3c\x2f\x61\x3e\x3c\x68\x31\x3e", 10, -6779142223923521000, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x68\x31\x3e", 5, -4855631817455469397, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure20$init$org$frostlang$frostc$frostdoc$Markdown(void* rawSelf, org$frostlang$frostc$frostdoc$Markdown* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure20* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure20*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
org$frostlang$frostc$frostdoc$Markdown** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:769
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->$self;
*_7 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure20$cleanup(void* rawSelf) {
org$frostlang$frostc$frostdoc$Markdown$_Closure20* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure20*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:769
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure20$$anonymous19$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(void* rawSelf, frost$collections$ListView* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure20* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure20*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$MutableString* _1;
frost$core$Int _2;
$fn2 _3;
frost$core$Object* _4;
frost$core$String* _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$Int _10;
frost$core$String* _13;
frost$core$Object* _16;
frost$core$MutableString* _18;
frost$core$Object* _19;
frost$core$Object* _22;
frost$core$Object* _24;
org$frostlang$frostc$frostdoc$Markdown** _27;
org$frostlang$frostc$frostdoc$Markdown* _28;
frost$core$MutableString* _29;
$fn3 _30;
frost$core$Int _33;
$fn4 _34;
frost$core$Object* _35;
frost$core$String* _36;
bool _37;
frost$core$Bit _38;
bool _39;
frost$core$Int _41;
frost$core$String* _44;
frost$core$String* _45;
frost$core$String* _46;
frost$core$MutableString* _47;
frost$core$Object* _48;
$fn5 _51;
frost$core$String* _52;
frost$core$String* _53;
frost$core$Object* _54;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$String* _61;
frost$core$Object* _62;
frost$core$Object* _64;
frost$core$Object* _66;
frost$core$Object* _68;
frost$core$Object* _70;
frost$core$Object* _72;
frost$core$MutableString* _74;
frost$core$Object* _75;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:770
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
_2 = (frost$core$Int) {1u};
ITable* $tmp6 = param1->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp6 = $tmp6->next;
}
_3 = $tmp6->methods[0];
_4 = _3(param1, _2);
_5 = ((frost$core$String*) _4);
_6 = _5 != NULL;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block2:;
_10 = (frost$core$Int) {770u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _10, &$s8);
abort(); // unreachable
block1:;
_13 = _5;
frost$core$MutableString$init$frost$core$String(_1, _13);
*(&local0) = ((frost$core$MutableString*) NULL);
_16 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _1;
_22 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_24);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:771
_27 = &param0->$self;
_28 = *_27;
_29 = *(&local0);
_30 = ($fn9) _28->$class->vtable[22];
_30(_28, _29);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:772
_33 = (frost$core$Int) {1u};
ITable* $tmp10 = param1->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp10 = $tmp10->next;
}
_34 = $tmp10->methods[0];
_35 = _34(param1, _33);
_36 = ((frost$core$String*) _35);
_37 = _36 != NULL;
_38 = (frost$core$Bit) {_37};
_39 = _38.value;
if (_39) goto block3; else goto block4;
block4:;
_41 = (frost$core$Int) {772u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _41, &$s12);
abort(); // unreachable
block3:;
_44 = _36;
_45 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s13, _44);
_46 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_45, &$s14);
_47 = *(&local0);
_48 = ((frost$core$Object*) _47);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:772:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_51 = ($fn15) _48->$class->vtable[0];
_52 = _51(_48);
_53 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_46, _52);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$ref$frost$core$Object$Q(_54);
_56 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_61 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_53, &$s16);
_62 = ((frost$core$Object*) _61);
frost$core$Frost$ref$frost$core$Object$Q(_62);
_64 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_64);
_66 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_66);
_68 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_68);
_70 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_70);
_72 = _35;
frost$core$Frost$unref$frost$core$Object$Q(_72);
_74 = *(&local0);
_75 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_75);
*(&local0) = ((frost$core$MutableString*) NULL);
return _61;

}

