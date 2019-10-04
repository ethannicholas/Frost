#include "org/frostlang/frostc/CodeGenerator/_Closure5.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/CodeGenerator.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Code/Value.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Code/PrimitiveType.h"
#include "org/frostlang/frostc/Code/Signature.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$CodeGenerator$_Closure5$class_type org$frostlang$frostc$CodeGenerator$_Closure5$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$CodeGenerator$_Closure5$cleanup, org$frostlang$frostc$CodeGenerator$_Closure5$$anonymous4$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Code$Value} };

typedef org$frostlang$frostc$Code$Signature* (*$fn2)(org$frostlang$frostc$CodeGenerator*, org$frostlang$frostc$MethodDecl*);
typedef org$frostlang$frostc$Code$Signature* (*$fn3)(org$frostlang$frostc$CodeGenerator*, org$frostlang$frostc$MethodDecl*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x35", 44, -8754960252560898527, NULL };

void org$frostlang$frostc$CodeGenerator$_Closure5$init$org$frostlang$frostc$CodeGenerator(void* rawSelf, org$frostlang$frostc$CodeGenerator* param1) {
org$frostlang$frostc$CodeGenerator$_Closure5* param0 = (org$frostlang$frostc$CodeGenerator$_Closure5*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$CodeGenerator** _3;
org$frostlang$frostc$CodeGenerator* _4;
frost$core$Object* _5;
org$frostlang$frostc$CodeGenerator** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CodeGenerator.frost:171
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
void org$frostlang$frostc$CodeGenerator$_Closure5$cleanup(void* rawSelf) {
org$frostlang$frostc$CodeGenerator$_Closure5* param0 = (org$frostlang$frostc$CodeGenerator$_Closure5*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$CodeGenerator** _3;
org$frostlang$frostc$CodeGenerator* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CodeGenerator.frost:171
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
org$frostlang$frostc$Code$Value* org$frostlang$frostc$CodeGenerator$_Closure5$$anonymous4$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Code$Value(void* rawSelf, org$frostlang$frostc$MethodDecl* param1) {
org$frostlang$frostc$CodeGenerator$_Closure5* param0 = (org$frostlang$frostc$CodeGenerator$_Closure5*) rawSelf;

org$frostlang$frostc$Annotations** _1;
org$frostlang$frostc$Annotations* _2;
frost$core$Int* _5;
frost$core$Int _6;
frost$core$Int _7;
int64_t _10;
int64_t _11;
int64_t _12;
frost$core$Int _13;
frost$core$Int _15;
int64_t _16;
int64_t _17;
bool _18;
frost$core$Bit _19;
bool _21;
org$frostlang$frostc$Code$Value* _24;
frost$core$Int _25;
frost$core$UInt64 _26;
org$frostlang$frostc$Code$PrimitiveType* _27;
frost$core$Int _28;
frost$core$Object* _31;
frost$core$Object* _33;
frost$core$Object* _35;
org$frostlang$frostc$Code$Value* _40;
frost$core$Int _41;
org$frostlang$frostc$CodeGenerator** _42;
org$frostlang$frostc$CodeGenerator* _43;
$fn2 _44;
org$frostlang$frostc$Code$Signature* _45;
frost$core$Object* _47;
frost$core$Object* _49;
frost$core$Object* _51;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CodeGenerator.frost:172
_1 = &param1->annotations;
_2 = *_1;
// begin inline call to function org.frostlang.frostc.Annotations.get_isAbstract():frost.core.Bit from CodeGenerator.frost:172:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:145
_5 = &_2->flags;
_6 = *_5;
_7 = (frost$core$Int) {512u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:145:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_10 = _6.value;
_11 = _7.value;
_12 = _10 & _11;
_13 = (frost$core$Int) {_12};
_15 = (frost$core$Int) {0u};
_16 = _13.value;
_17 = _15.value;
_18 = _16 != _17;
_19 = (frost$core$Bit) {_18};
_21 = _19.value;
if (_21) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CodeGenerator.frost:173
_24 = (org$frostlang$frostc$Code$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$Code$Value), (frost$core$Class*) &org$frostlang$frostc$Code$Value$class);
_25 = (frost$core$Int) {2u};
_26 = (frost$core$UInt64) {0u};
_27 = (org$frostlang$frostc$Code$PrimitiveType*) frostObjectAlloc(sizeof(org$frostlang$frostc$Code$PrimitiveType), (frost$core$Class*) &org$frostlang$frostc$Code$PrimitiveType$class);
_28 = (frost$core$Int) {0u};
org$frostlang$frostc$Code$PrimitiveType$init$frost$core$Int(_27, _28);
org$frostlang$frostc$Code$Value$init$frost$core$Int$frost$core$UInt64$org$frostlang$frostc$Code$PrimitiveType(_24, _25, _26, _27);
_31 = ((frost$core$Object*) _24);
frost$core$Frost$ref$frost$core$Object$Q(_31);
_33 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_35 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_35);
return _24;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CodeGenerator.frost:176
_40 = (org$frostlang$frostc$Code$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$Code$Value), (frost$core$Class*) &org$frostlang$frostc$Code$Value$class);
_41 = (frost$core$Int) {3u};
_42 = &param0->$self;
_43 = *_42;
_44 = ($fn3) _43->$class->vtable[29];
_45 = _44(_43, param1);
org$frostlang$frostc$Code$Value$init$frost$core$Int$org$frostlang$frostc$Code$Signature(_40, _41, _45);
_47 = ((frost$core$Object*) _40);
frost$core$Frost$ref$frost$core$Object$Q(_47);
_49 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_51);
return _40;
block2:;
goto block6;
block6:;

}

