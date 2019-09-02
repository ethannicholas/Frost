#include "org/frostlang/frostc/pass/Analyzer/BlockExit.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Int org$frostlang$frostc$pass$Analyzer$BlockExit$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$frostc$pass$Analyzer$BlockExit$get_hash$R$frost$core$Int(((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit org$frostlang$frostc$pass$Analyzer$BlockExit$$EQ$org$frostlang$frostc$pass$Analyzer$BlockExit$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$pass$Analyzer$BlockExit$$EQ$org$frostlang$frostc$pass$Analyzer$BlockExit$R$frost$core$Bit(((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) p0)->value, ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$pass$Analyzer$BlockExit$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$pass$Analyzer$BlockExit$get_asString$R$frost$core$String(((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$pass$Analyzer$BlockExit$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$pass$Analyzer$BlockExit$cleanup(((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$pass$Analyzer$BlockExit$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { org$frostlang$frostc$pass$Analyzer$BlockExit$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$pass$Analyzer$BlockExit$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$pass$Analyzer$BlockExit$_frost$collections$HashKey, { org$frostlang$frostc$pass$Analyzer$BlockExit$$EQ$org$frostlang$frostc$pass$Analyzer$BlockExit$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$pass$Analyzer$BlockExit$class_type org$frostlang$frostc$pass$Analyzer$BlockExit$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$pass$Analyzer$BlockExit$_frost$core$Equatable, { org$frostlang$frostc$pass$Analyzer$BlockExit$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$pass$Analyzer$BlockExit$$EQ$org$frostlang$frostc$pass$Analyzer$BlockExit$R$frost$core$Bit$shim, org$frostlang$frostc$pass$Analyzer$BlockExit$get_hash$R$frost$core$Int$shim, org$frostlang$frostc$pass$Analyzer$BlockExit$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { org$frostlang$frostc$pass$Analyzer$BlockExit$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper_frost$collections$HashKey, { org$frostlang$frostc$pass$Analyzer$BlockExit$$EQ$org$frostlang$frostc$pass$Analyzer$BlockExit$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$pass$Analyzer$BlockExit$wrapperclass_type org$frostlang$frostc$pass$Analyzer$BlockExit$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper_frost$core$Equatable, { org$frostlang$frostc$pass$Analyzer$BlockExit$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn6)(frost$core$Object*);
typedef frost$core$String* (*$fn10)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x42\x6c\x6f\x63\x6b\x45\x78\x69\x74", 44, -749128004734210960, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x42\x6c\x6f\x63\x6b\x45\x78\x69\x74", 44, -749128004734210960, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x6c\x6f\x63\x6b\x45\x78\x69\x74\x3c", 10, 3106445861934095538, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };

org$frostlang$frostc$pass$Analyzer$BlockExit org$frostlang$frostc$pass$Analyzer$BlockExit$init$org$frostlang$frostc$IR$Block$ID$frost$core$Int(org$frostlang$frostc$IR$Block$ID param0, frost$core$Int param1) {

org$frostlang$frostc$pass$Analyzer$BlockExit local0;
org$frostlang$frostc$IR$Block$ID* _1;
frost$core$Int* _4;
org$frostlang$frostc$pass$Analyzer$BlockExit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:197
_1 = &(&local0)->id;
*_1 = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:198
_4 = &(&local0)->exit;
*_4 = param1;
_6 = *(&local0);
return _6;

}
frost$core$Bit org$frostlang$frostc$pass$Analyzer$BlockExit$$EQ$org$frostlang$frostc$pass$Analyzer$BlockExit$R$frost$core$Bit(org$frostlang$frostc$pass$Analyzer$BlockExit param0, org$frostlang$frostc$pass$Analyzer$BlockExit param1) {

frost$core$Bit local0;
org$frostlang$frostc$IR$Block$ID _1;
org$frostlang$frostc$IR$Block$ID _2;
frost$core$Int _5;
frost$core$Int _6;
int64_t _9;
int64_t _10;
bool _11;
frost$core$Bit _12;
bool _15;
frost$core$Int _17;
frost$core$Int _18;
int64_t _21;
int64_t _22;
bool _23;
frost$core$Bit _24;
frost$core$Bit _30;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:203
_1 = param0.id;
_2 = param1.id;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from Analyzer.frost:203:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
_5 = _1.value;
_6 = _2.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_9 = _5.value;
_10 = _6.value;
_11 = _9 == _10;
_12 = (frost$core$Bit) {_11};
_15 = _12.value;
if (_15) goto block3; else goto block4;
block3:;
_17 = param0.exit;
_18 = param1.exit;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:203:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_21 = _17.value;
_22 = _18.value;
_23 = _21 == _22;
_24 = (frost$core$Bit) {_23};
*(&local0) = _24;
goto block5;
block4:;
*(&local0) = _12;
goto block5;
block5:;
_30 = *(&local0);
return _30;

}
frost$core$String* org$frostlang$frostc$pass$Analyzer$BlockExit$get_asString$R$frost$core$String(org$frostlang$frostc$pass$Analyzer$BlockExit param0) {

org$frostlang$frostc$IR$Block$ID _1;
frost$core$Object* _2;
$fn3 _5;
frost$core$String* _6;
frost$core$String* _7;
frost$core$Object* _8;
frost$core$Object* _10;
frost$core$Object* _12;
frost$core$String* _15;
frost$core$Int _16;
frost$core$Object* _17;
$fn4 _20;
frost$core$String* _21;
frost$core$String* _22;
frost$core$Object* _23;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$String* _30;
frost$core$Object* _31;
frost$core$Object* _33;
frost$core$Object* _35;
frost$core$Object* _37;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$Object* _43;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:208
_1 = param0.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp5;
$tmp5 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp5->value = _1;
_2 = ((frost$core$Object*) $tmp5);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:208:20
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_5 = ($fn6) _2->$class->vtable[0];
_6 = _5(_2);
_7 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s7, _6);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_7, &$s8);
_16 = param0.exit;
frost$core$Int$wrapper* $tmp9;
$tmp9 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp9->value = _16;
_17 = ((frost$core$Object*) $tmp9);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:208:20
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_20 = ($fn10) _17->$class->vtable[0];
_21 = _20(_17);
_22 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_15, _21);
_23 = ((frost$core$Object*) _22);
frost$core$Frost$ref$frost$core$Object$Q(_23);
_25 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_27);
_30 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_22, &$s11);
_31 = ((frost$core$Object*) _30);
frost$core$Frost$ref$frost$core$Object$Q(_31);
_33 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_35 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_35);
_37 = _17;
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = _2;
frost$core$Frost$unref$frost$core$Object$Q(_43);
return _30;

}
frost$core$Int org$frostlang$frostc$pass$Analyzer$BlockExit$get_hash$R$frost$core$Int(org$frostlang$frostc$pass$Analyzer$BlockExit param0) {

org$frostlang$frostc$IR$Block$ID _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:213
_1 = param0.id;
_2 = _1.value;
_3 = param0.exit;
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from Analyzer.frost:213:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:291
_6 = _2.value;
_7 = _3.value;
_8 = _6 ^ _7;
_9 = (frost$core$Int) {_8};
return _9;

}
void org$frostlang$frostc$pass$Analyzer$BlockExit$cleanup(org$frostlang$frostc$pass$Analyzer$BlockExit param0) {

return;

}

