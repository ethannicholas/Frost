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
frost$collections$ListView* _2;
frost$core$Int _3;
$fn2 _4;
frost$core$Object* _5;
frost$core$String* _6;
bool _7;
frost$core$Bit _8;
bool _9;
frost$core$Int _11;
frost$core$String* _14;
frost$core$Object* _17;
frost$core$MutableString* _19;
frost$core$Object* _20;
frost$core$Object* _23;
frost$core$Object* _25;
org$frostlang$frostc$frostdoc$Markdown** _28;
org$frostlang$frostc$frostdoc$Markdown* _29;
frost$core$MutableString* _30;
$fn3 _31;
frost$collections$ListView* _34;
frost$core$Int _35;
$fn4 _36;
frost$core$Object* _37;
frost$core$String* _38;
bool _39;
frost$core$Bit _40;
bool _41;
frost$core$Int _43;
frost$core$String* _46;
frost$core$String* _47;
frost$core$String* _48;
frost$core$MutableString* _49;
frost$core$Object* _50;
$fn5 _53;
frost$core$String* _54;
frost$core$String* _55;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$String* _63;
frost$core$Object* _64;
frost$core$Object* _66;
frost$core$Object* _68;
frost$core$Object* _70;
frost$core$Object* _72;
frost$core$Object* _74;
frost$core$MutableString* _76;
frost$core$Object* _77;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:770
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
_2 = param1;
_3 = (frost$core$Int) {1u};
ITable* $tmp6 = _2->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp6 = $tmp6->next;
}
_4 = $tmp6->methods[0];
_5 = _4(_2, _3);
_6 = ((frost$core$String*) _5);
_7 = _6 != NULL;
_8 = (frost$core$Bit) {_7};
_9 = _8.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {770u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _11, &$s8);
abort(); // unreachable
block1:;
_14 = _6;
frost$core$MutableString$init$frost$core$String(_1, _14);
*(&local0) = ((frost$core$MutableString*) NULL);
_17 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local0);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local0) = _1;
_23 = _5;
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_25);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:771
_28 = &param0->$self;
_29 = *_28;
_30 = *(&local0);
_31 = ($fn9) _29->$class->vtable[22];
_31(_29, _30);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:772
_34 = param1;
_35 = (frost$core$Int) {1u};
ITable* $tmp10 = _34->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp10 = $tmp10->next;
}
_36 = $tmp10->methods[0];
_37 = _36(_34, _35);
_38 = ((frost$core$String*) _37);
_39 = _38 != NULL;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block3; else goto block4;
block4:;
_43 = (frost$core$Int) {772u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _43, &$s12);
abort(); // unreachable
block3:;
_46 = _38;
_47 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s13, _46);
_48 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_47, &$s14);
_49 = *(&local0);
_50 = ((frost$core$Object*) _49);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:772:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_53 = ($fn15) _50->$class->vtable[0];
_54 = _53(_50);
_55 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_48, _54);
_56 = ((frost$core$Object*) _55);
frost$core$Frost$ref$frost$core$Object$Q(_56);
_58 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_60);
_63 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_55, &$s16);
_64 = ((frost$core$Object*) _63);
frost$core$Frost$ref$frost$core$Object$Q(_64);
_66 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_66);
_68 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_68);
_70 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_70);
_72 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_72);
_74 = _37;
frost$core$Frost$unref$frost$core$Object$Q(_74);
_76 = *(&local0);
_77 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_77);
*(&local0) = ((frost$core$MutableString*) NULL);
return _63;

}

