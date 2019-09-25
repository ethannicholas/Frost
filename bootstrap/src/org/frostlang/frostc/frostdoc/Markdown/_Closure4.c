#include "org/frostlang/frostc/frostdoc/Markdown/_Closure4.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/frostdoc/Protector.h"
#include "frost/core/Bit.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure4$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure4$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure4$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure4$$anonymous3$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn2)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$String* (*$fn3)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn7)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x34", 48, 5457368082752904347, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a\x0a", 2, 600243221914207573, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a\x0a", 2, 600243221914207573, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure4$init$org$frostlang$frostc$frostdoc$Markdown(void* rawSelf, org$frostlang$frostc$frostdoc$Markdown* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure4* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure4*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
org$frostlang$frostc$frostdoc$Markdown** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:277
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
void org$frostlang$frostc$frostdoc$Markdown$_Closure4$cleanup(void* rawSelf) {
org$frostlang$frostc$frostdoc$Markdown$_Closure4* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure4*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:277
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure4$$anonymous3$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(void* rawSelf, frost$collections$ListView* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure4* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure4*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$Int _1;
$fn2 _2;
frost$core$Object* _3;
frost$core$String* _4;
frost$core$Object* _6;
frost$core$String* _8;
frost$core$Object* _9;
frost$core$Object* _12;
org$frostlang$frostc$frostdoc$Markdown** _15;
org$frostlang$frostc$frostdoc$Markdown* _16;
org$frostlang$frostc$frostdoc$Protector** _17;
org$frostlang$frostc$frostdoc$Protector* _18;
frost$core$String* _19;
bool _20;
frost$core$Bit _21;
bool _22;
frost$core$Int _24;
frost$core$String* _27;
$fn3 _28;
frost$core$String* _29;
frost$core$String* _30;
frost$core$String* _31;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$String* _40;
frost$core$Object* _41;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:278
_1 = (frost$core$Int) {0u};
ITable* $tmp4 = param1->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp4 = $tmp4->next;
}
_2 = $tmp4->methods[0];
_3 = _2(param1, _1);
_4 = ((frost$core$String*) _3);
*(&local0) = ((frost$core$String*) NULL);
_6 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = *(&local0);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
*(&local0) = _4;
_12 = _3;
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:279
_15 = &param0->$self;
_16 = *_15;
_17 = &_16->htmlProtector;
_18 = *_17;
_19 = *(&local0);
_20 = _19 != NULL;
_21 = (frost$core$Bit) {_20};
_22 = _21.value;
if (_22) goto block1; else goto block2;
block2:;
_24 = (frost$core$Int) {279u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _24, &$s6);
abort(); // unreachable
block1:;
_27 = _19;
_28 = ($fn7) _18->$class->vtable[2];
_29 = _28(_18, _27);
_30 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s8, _29);
_31 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_30, &$s9);
_32 = ((frost$core$Object*) _31);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_38);
_40 = *(&local0);
_41 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_41);
*(&local0) = ((frost$core$String*) NULL);
return _31;

}

