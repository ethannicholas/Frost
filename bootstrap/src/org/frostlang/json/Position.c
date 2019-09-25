#include "org/frostlang/json/Position.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$String* org$frostlang$json$Position$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$json$Position$get_asString$R$frost$core$String(((org$frostlang$json$Position$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void org$frostlang$json$Position$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$json$Position$cleanup(((org$frostlang$json$Position$wrapper*) p0)->value);

}

static frost$core$String $s1;
org$frostlang$json$Position$class_type org$frostlang$json$Position$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, NULL, { org$frostlang$json$Position$get_asString$R$frost$core$String$shim, org$frostlang$json$Position$cleanup$shim} };

static frost$core$String $s2;
org$frostlang$json$Position$wrapperclass_type org$frostlang$json$Position$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { org$frostlang$json$Position$get_asString$R$frost$core$String$shim, org$frostlang$json$Position$cleanup$shim} };typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 27, 7520947739033505064, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 27, 7520947739033505064, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2e\x66\x72\x6f\x73\x74", 14, 805330372391573046, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };

org$frostlang$json$Position org$frostlang$json$Position$init() {

org$frostlang$json$Position local0;
frost$core$Int _1;
frost$core$Int* _2;
frost$core$Int _5;
frost$core$Int* _6;
org$frostlang$json$Position _8;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Position.frost:10
_1 = (frost$core$Int) {1u};
_2 = &(&local0)->line;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Position.frost:11
_5 = (frost$core$Int) {1u};
_6 = &(&local0)->column;
*_6 = _5;
_8 = *(&local0);
return _8;

}
org$frostlang$json$Position org$frostlang$json$Position$init$frost$core$Int$frost$core$Int(frost$core$Int param0, frost$core$Int param1) {

org$frostlang$json$Position local0;
frost$core$Bit local1;
frost$core$Int _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
frost$core$Int _8;
int64_t _9;
int64_t _10;
bool _11;
frost$core$Bit _12;
frost$core$Bit _17;
bool _18;
frost$core$Int _20;
frost$core$Int* _24;
frost$core$Int* _27;
org$frostlang$json$Position _29;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Position.frost:15
_1 = (frost$core$Int) {0u};
_2 = param0.value;
_3 = _1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
_8 = (frost$core$Int) {0u};
_9 = param1.value;
_10 = _8.value;
_11 = _9 != _10;
_12 = (frost$core$Bit) {_11};
*(&local1) = _12;
goto block3;
block2:;
*(&local1) = _5;
goto block3;
block3:;
_17 = *(&local1);
_18 = _17.value;
if (_18) goto block4; else goto block5;
block5:;
_20 = (frost$core$Int) {15u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3, _20);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Position.frost:16
_24 = &(&local0)->line;
*_24 = param0;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Position.frost:17
_27 = &(&local0)->column;
*_27 = param1;
_29 = *(&local0);
return _29;

}
frost$core$String* org$frostlang$json$Position$get_asString$R$frost$core$String(org$frostlang$json$Position param0) {

frost$core$Int _1;
frost$core$String* _2;
frost$core$String* _3;
frost$core$Int _4;
frost$core$Object* _5;
$fn4 _8;
frost$core$String* _9;
frost$core$String* _10;
frost$core$Object* _11;
frost$core$Object* _13;
frost$core$Object* _15;
frost$core$String* _18;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Object* _23;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$Object* _29;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Position.frost:22
_1 = param0.line;
_2 = frost$core$Int$get_asString$R$frost$core$String(_1);
_3 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2, &$s5);
_4 = param0.column;
frost$core$Int$wrapper* $tmp6;
$tmp6 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp6->value = _4;
_5 = ((frost$core$Object*) $tmp6);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Position.frost:22:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_8 = ($fn7) _5->$class->vtable[0];
_9 = _8(_5);
_10 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3, _9);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$ref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_15);
_18 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_10, &$s8);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = _5;
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_29);
return _18;

}
void org$frostlang$json$Position$cleanup(org$frostlang$json$Position param0) {

return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




