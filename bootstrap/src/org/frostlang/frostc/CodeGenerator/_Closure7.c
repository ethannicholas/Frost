#include "org/frostlang/frostc/CodeGenerator/_Closure7.h"
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
#include "org/frostlang/frostc/Code/Signature.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Code/PrimitiveType.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$CodeGenerator$_Closure7$class_type org$frostlang$frostc$CodeGenerator$_Closure7$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$CodeGenerator$_Closure7$cleanup, org$frostlang$frostc$CodeGenerator$_Closure7$$anonymous6$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Code$Value} };

typedef org$frostlang$frostc$Code$Signature* (*$fn2)(org$frostlang$frostc$CodeGenerator*, org$frostlang$frostc$MethodDecl*);
typedef org$frostlang$frostc$Code$Signature* (*$fn3)(org$frostlang$frostc$CodeGenerator*, org$frostlang$frostc$MethodDecl*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x37", 44, -8754962451584154949, NULL };

void org$frostlang$frostc$CodeGenerator$_Closure7$init$org$frostlang$frostc$CodeGenerator(void* rawSelf, org$frostlang$frostc$CodeGenerator* param1) {
org$frostlang$frostc$CodeGenerator$_Closure7* param0 = (org$frostlang$frostc$CodeGenerator$_Closure7*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$CodeGenerator** _3;
org$frostlang$frostc$CodeGenerator* _4;
frost$core$Object* _5;
org$frostlang$frostc$CodeGenerator** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CodeGenerator.frost:266
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
void org$frostlang$frostc$CodeGenerator$_Closure7$cleanup(void* rawSelf) {
org$frostlang$frostc$CodeGenerator$_Closure7* param0 = (org$frostlang$frostc$CodeGenerator$_Closure7*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$CodeGenerator** _3;
org$frostlang$frostc$CodeGenerator* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CodeGenerator.frost:266
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
org$frostlang$frostc$Code$Value* org$frostlang$frostc$CodeGenerator$_Closure7$$anonymous6$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Code$Value(void* rawSelf, org$frostlang$frostc$MethodDecl* param1) {
org$frostlang$frostc$CodeGenerator$_Closure7* param0 = (org$frostlang$frostc$CodeGenerator$_Closure7*) rawSelf;

frost$core$Object* local0 = NULL;
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
bool _23;
bool _24;
frost$core$Bit _25;
org$frostlang$frostc$Code$Value* _27;
frost$core$Int _28;
org$frostlang$frostc$CodeGenerator** _29;
org$frostlang$frostc$CodeGenerator* _30;
$fn2 _31;
org$frostlang$frostc$Code$Signature* _32;
frost$core$Object* _34;
org$frostlang$frostc$Code$Value* _35;
frost$core$Int _36;
frost$core$UInt64 _37;
org$frostlang$frostc$Code$PrimitiveType* _38;
frost$core$Int _39;
frost$core$Object* _42;
bool _45;
frost$core$Object* _48;
frost$core$Object* _51;
frost$core$Object* _55;
frost$core$Object* _58;
frost$core$Object* _61;
org$frostlang$frostc$Code$Value* _62;
frost$core$Object* _63;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$Object* _68;
frost$core$Object* _71;
frost$core$Object* _73;
frost$core$Object* _75;
frost$core$Object* _77;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CodeGenerator.frost:266
_1 = &param1->annotations;
_2 = *_1;
// begin inline call to function org.frostlang.frostc.Annotations.get_isAbstract():frost.core.Bit from CodeGenerator.frost:266:56
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
// begin inline call to function frost.core.Bit.!():frost.core.Bit from CodeGenerator.frost:266:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_23 = _19.value;
_24 = !_23;
_25 = (frost$core$Bit) {_24};
_27 = (org$frostlang$frostc$Code$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$Code$Value), (frost$core$Class*) &org$frostlang$frostc$Code$Value$class);
_28 = (frost$core$Int) {3u};
_29 = &param0->$self;
_30 = *_29;
_31 = ($fn3) _30->$class->vtable[29];
_32 = _31(_30, param1);
org$frostlang$frostc$Code$Value$init$frost$core$Int$org$frostlang$frostc$Code$Signature(_27, _28, _32);
_34 = ((frost$core$Object*) _27);
_35 = (org$frostlang$frostc$Code$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$Code$Value), (frost$core$Class*) &org$frostlang$frostc$Code$Value$class);
_36 = (frost$core$Int) {2u};
_37 = (frost$core$UInt64) {0u};
_38 = (org$frostlang$frostc$Code$PrimitiveType*) frostObjectAlloc(sizeof(org$frostlang$frostc$Code$PrimitiveType), (frost$core$Class*) &org$frostlang$frostc$Code$PrimitiveType$class);
_39 = (frost$core$Int) {0u};
org$frostlang$frostc$Code$PrimitiveType$init$frost$core$Int(_38, _39);
org$frostlang$frostc$Code$Value$init$frost$core$Int$frost$core$UInt64$org$frostlang$frostc$Code$PrimitiveType(_35, _36, _37, _38);
_42 = ((frost$core$Object*) _35);
// begin inline call to function frost.core.Bit.choose(ifTrue:frost.core.Bit.choose.T, ifFalse:frost.core.Bit.choose.T):frost.core.Bit.choose.T from CodeGenerator.frost:266:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:62
_45 = _25.value;
if (_45) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:63
_48 = _34;
frost$core$Frost$ref$frost$core$Object$Q(_48);
*(&local0) = _34;
_51 = _34;
frost$core$Frost$ref$frost$core$Object$Q(_51);
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:65
_55 = _42;
frost$core$Frost$ref$frost$core$Object$Q(_55);
*(&local0) = _42;
_58 = _42;
frost$core$Frost$ref$frost$core$Object$Q(_58);
goto block4;
block4:;
_61 = *(&local0);
_62 = ((org$frostlang$frostc$Code$Value*) _61);
_63 = ((frost$core$Object*) _62);
frost$core$Frost$ref$frost$core$Object$Q(_63);
_65 = _61;
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = *(&local0);
_68 = _67;
frost$core$Frost$unref$frost$core$Object$Q(_68);
*(&local0) = ((frost$core$Object*) NULL);
_71 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_71);
_73 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_73);
_75 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_75);
_77 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_77);
return _62;

}

