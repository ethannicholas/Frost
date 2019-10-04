#include "org/frostlang/frostc/LLVMBackend/_Closure4.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/LLVMBackend.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Code/Value.h"
#include "org/frostlang/frostc/Code/PrimitiveType.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$LLVMBackend$_Closure4$class_type org$frostlang$frostc$LLVMBackend$_Closure4$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$LLVMBackend$_Closure4$cleanup, org$frostlang$frostc$LLVMBackend$_Closure4$$anonymous3$org$frostlang$frostc$Code$Value$R$frost$core$String} };

typedef org$frostlang$frostc$Code$PrimitiveType* (*$fn2)(org$frostlang$frostc$Code$Value*);
typedef org$frostlang$frostc$Code$PrimitiveType* (*$fn3)(org$frostlang$frostc$Code$Value*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4c\x4c\x56\x4d\x42\x61\x63\x6b\x65\x6e\x64\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x34", 42, -5644434076132803273, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20", 1, -5808626142386486913, NULL };

void org$frostlang$frostc$LLVMBackend$_Closure4$init$org$frostlang$frostc$LLVMBackend(void* rawSelf, org$frostlang$frostc$LLVMBackend* param1) {
org$frostlang$frostc$LLVMBackend$_Closure4* param0 = (org$frostlang$frostc$LLVMBackend$_Closure4*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$LLVMBackend** _3;
org$frostlang$frostc$LLVMBackend* _4;
frost$core$Object* _5;
org$frostlang$frostc$LLVMBackend** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMBackend.frost:196
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->$dummy2;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->$dummy2;
*_7 = param1;
return;

}
void org$frostlang$frostc$LLVMBackend$_Closure4$cleanup(void* rawSelf) {
org$frostlang$frostc$LLVMBackend$_Closure4* param0 = (org$frostlang$frostc$LLVMBackend$_Closure4*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$LLVMBackend** _3;
org$frostlang$frostc$LLVMBackend* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMBackend.frost:196
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$dummy2;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$String* org$frostlang$frostc$LLVMBackend$_Closure4$$anonymous3$org$frostlang$frostc$Code$Value$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Code$Value* param1) {
org$frostlang$frostc$LLVMBackend$_Closure4* param0 = (org$frostlang$frostc$LLVMBackend$_Closure4*) rawSelf;

org$frostlang$frostc$LLVMBackend** _1;
org$frostlang$frostc$LLVMBackend* _2;
$fn2 _5;
org$frostlang$frostc$Code$PrimitiveType* _6;
frost$core$String* _7;
frost$core$String* _8;
frost$core$String* _9;
frost$core$String* _10;
frost$core$Object* _11;
frost$core$Object* _13;
frost$core$Object* _15;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Object* _24;
frost$core$Object* _26;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMBackend.frost:196
_1 = &param0->$dummy2;
_2 = *_1;
// begin inline call to method org.frostlang.frostc.LLVMBackend.getTypedReference(v:org.frostlang.frostc.Code.Value):frost.core.String from LLVMBackend.frost:196:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMBackend.frost:208
_5 = ($fn3) param1->$class->vtable[2];
_6 = _5(param1);
_7 = org$frostlang$frostc$LLVMBackend$llvmType$org$frostlang$frostc$Code$PrimitiveType$R$frost$core$String(_2, _6);
_8 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_7, &$s4);
_9 = org$frostlang$frostc$LLVMBackend$getReference$org$frostlang$frostc$Code$Value$R$frost$core$String(_2, param1);
_10 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_8, _9);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$ref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_15);
_17 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_24 = ((frost$core$Object*) _10);
frost$core$Frost$ref$frost$core$Object$Q(_24);
_26 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_26);
return _10;

}

