#include "org/frostlang/frostc/Code/Block.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Code/Block/ID.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$Code$Block$class_type org$frostlang$frostc$Code$Block$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Code$Block$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x2e\x42\x6c\x6f\x63\x6b", 31, 4111512651710330942, NULL };

void org$frostlang$frostc$Code$Block$init$org$frostlang$frostc$Code$Block$ID$frost$collections$Array$LTorg$frostlang$frostc$Code$Statement$GT(void* rawSelf, org$frostlang$frostc$Code$Block$ID param1, frost$collections$Array* param2) {
org$frostlang$frostc$Code$Block* param0 = (org$frostlang$frostc$Code$Block*) rawSelf;

frost$collections$Array* _1;
frost$core$Object* _3;
frost$collections$Array** _5;
frost$collections$Array* _6;
frost$core$Object* _7;
frost$collections$Array** _9;
frost$core$Object* _11;
org$frostlang$frostc$Code$Block$ID* _14;
frost$core$Object* _17;
frost$collections$Array** _19;
frost$collections$Array* _20;
frost$core$Object* _21;
frost$collections$Array** _23;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:672
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = &param0->statements;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = &param0->statements;
*_9 = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:675
_14 = &param0->id;
*_14 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:676
_17 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = &param0->statements;
_20 = *_19;
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = &param0->statements;
*_23 = param2;
return;

}
void org$frostlang$frostc$Code$Block$cleanup(void* rawSelf) {
org$frostlang$frostc$Code$Block* param0 = (org$frostlang$frostc$Code$Block*) rawSelf;

frost$core$Object* _1;
frost$collections$Array** _3;
frost$collections$Array* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:646
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->statements;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}

