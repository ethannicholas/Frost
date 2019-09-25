#include "org/frostlang/frostc/Compiler/_Closure17.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Position.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$Compiler$_Closure17$class_type org$frostlang$frostc$Compiler$_Closure17$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$_Closure17$cleanup, org$frostlang$frostc$Compiler$_Closure17$$anonymous16$frost$core$Int$frost$core$String} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x37", 40, 5411929312269284547, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x69\x65\x6c\x64\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x65\x64\x20\x77\x69\x74\x68\x20\x27", 34, 2476856889983467694, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27", 1, -5808629440921371546, NULL };

void org$frostlang$frostc$Compiler$_Closure17$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$FieldDecl(void* rawSelf, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$FieldDecl* param2) {
org$frostlang$frostc$Compiler$_Closure17* param0 = (org$frostlang$frostc$Compiler$_Closure17*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$Compiler** _7;
frost$core$Object* _10;
org$frostlang$frostc$FieldDecl** _12;
org$frostlang$frostc$FieldDecl* _13;
frost$core$Object* _14;
org$frostlang$frostc$FieldDecl** _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5955
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->$self;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5955
_10 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->f;
_13 = *_12;
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->f;
*_16 = param2;
return;

}
void org$frostlang$frostc$Compiler$_Closure17$cleanup(void* rawSelf) {
org$frostlang$frostc$Compiler$_Closure17* param0 = (org$frostlang$frostc$Compiler$_Closure17*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$FieldDecl** _7;
org$frostlang$frostc$FieldDecl* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5955
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->f;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}
void org$frostlang$frostc$Compiler$_Closure17$$anonymous16$frost$core$Int$frost$core$String(void* rawSelf, frost$core$Int param1, frost$core$String* param2) {
org$frostlang$frostc$Compiler$_Closure17* param0 = (org$frostlang$frostc$Compiler$_Closure17*) rawSelf;

org$frostlang$frostc$FieldDecl** _1;
org$frostlang$frostc$FieldDecl* _2;
org$frostlang$frostc$Annotations** _3;
org$frostlang$frostc$Annotations* _4;
frost$core$Int* _5;
frost$core$Int _6;
int64_t _9;
int64_t _10;
int64_t _11;
frost$core$Int _12;
frost$core$Int _14;
int64_t _15;
int64_t _16;
bool _17;
frost$core$Bit _18;
bool _19;
org$frostlang$frostc$Compiler** _22;
org$frostlang$frostc$Compiler* _23;
org$frostlang$frostc$FieldDecl** _24;
org$frostlang$frostc$FieldDecl* _25;
org$frostlang$frostc$Symbol* _26;
org$frostlang$frostc$Position* _27;
org$frostlang$frostc$Position _28;
frost$core$String* _29;
frost$core$String* _30;
frost$core$Object* _32;
frost$core$Object* _34;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5956
_1 = &param0->f;
_2 = *_1;
_3 = &_2->annotations;
_4 = *_3;
_5 = &_4->flags;
_6 = *_5;
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Compiler.frost:5956:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_9 = _6.value;
_10 = param1.value;
_11 = _9 & _10;
_12 = (frost$core$Int) {_11};
_14 = (frost$core$Int) {0u};
_15 = _12.value;
_16 = _14.value;
_17 = _15 != _16;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5957
_22 = &param0->$self;
_23 = *_22;
_24 = &param0->f;
_25 = *_24;
_26 = ((org$frostlang$frostc$Symbol*) _25);
_27 = &_26->position;
_28 = *_27;
_29 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2, param2);
_30 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_29, &$s3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(_23, _28, _30);
_32 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_34);
goto block2;
block2:;
return;

}

