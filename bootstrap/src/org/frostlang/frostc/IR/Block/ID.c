#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Int org$frostlang$frostc$IR$Block$ID$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$frostc$IR$Block$ID$get_hash$R$frost$core$Int(((org$frostlang$frostc$IR$Block$ID$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit(((org$frostlang$frostc$IR$Block$ID$wrapper*) p0)->value, ((org$frostlang$frostc$IR$Block$ID$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$IR$Block$ID$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$IR$Block$ID$get_asString$R$frost$core$String(((org$frostlang$frostc$IR$Block$ID$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$IR$Block$ID$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$IR$Block$ID$cleanup(((org$frostlang$frostc$IR$Block$ID$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$IR$Block$ID$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { org$frostlang$frostc$IR$Block$ID$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$IR$Block$ID$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$IR$Block$ID$_frost$collections$HashKey, { org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$IR$Block$ID$class_type org$frostlang$frostc$IR$Block$ID$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$IR$Block$ID$_frost$core$Equatable, { org$frostlang$frostc$IR$Block$ID$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit$shim, org$frostlang$frostc$IR$Block$ID$get_hash$R$frost$core$Int$shim, org$frostlang$frostc$IR$Block$ID$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$IR$Block$ID$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { org$frostlang$frostc$IR$Block$ID$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$IR$Block$ID$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$IR$Block$ID$wrapper_frost$collections$HashKey, { org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$IR$Block$ID$wrapperclass_type org$frostlang$frostc$IR$Block$ID$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$IR$Block$ID$wrapper_frost$core$Equatable, { org$frostlang$frostc$IR$Block$ID$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 32, 3874791884914947999, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 32, 3874791884914947999, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x62\x6c\x6f\x63\x6b", 5, 1505885265403634530, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };

org$frostlang$frostc$IR$Block$ID org$frostlang$frostc$IR$Block$ID$init$frost$core$Int(frost$core$Int param0) {

org$frostlang$frostc$IR$Block$ID local0;
frost$core$Int* _1;
org$frostlang$frostc$IR$Block$ID _3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:333
_1 = &(&local0)->value;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$Bit org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit(org$frostlang$frostc$IR$Block$ID param0, org$frostlang$frostc$IR$Block$ID param1) {

frost$core$Int _1;
frost$core$Int _2;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:338
_1 = param0.value;
_2 = param1.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:338:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
return _8;

}
frost$core$Int org$frostlang$frostc$IR$Block$ID$get_hash$R$frost$core$Int(org$frostlang$frostc$IR$Block$ID param0) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:343
_1 = param0.value;
return _1;

}
frost$core$String* org$frostlang$frostc$IR$Block$ID$get_asString$R$frost$core$String(org$frostlang$frostc$IR$Block$ID param0) {

frost$core$Int _1;
frost$core$Object* _2;
$fn3 _5;
frost$core$String* _6;
frost$core$String* _7;
frost$core$Object* _8;
frost$core$Object* _10;
frost$core$Object* _12;
frost$core$String* _15;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Object* _22;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:348
_1 = param0.value;
frost$core$Int$wrapper* $tmp4;
$tmp4 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp4->value = _1;
_2 = ((frost$core$Object*) $tmp4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:348:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_5 = ($fn5) _2->$class->vtable[0];
_6 = _5(_2);
_7 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s6, _6);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_7, &$s7);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = _2;
frost$core$Frost$unref$frost$core$Object$Q(_22);
return _15;

}
void org$frostlang$frostc$IR$Block$ID$cleanup(org$frostlang$frostc$IR$Block$ID param0) {

return;

}

