#include "frost/io/ByteOrder.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"

__attribute__((weak)) frost$core$Bit frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit(((frost$io$ByteOrder$wrapper*) p0)->value, ((frost$io$ByteOrder$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void frost$io$ByteOrder$cleanup$shim(frost$core$Object* p0) {
    frost$io$ByteOrder$cleanup(((frost$io$ByteOrder$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$io$ByteOrder$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$io$ByteOrder$class_type frost$io$ByteOrder$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$io$ByteOrder$_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim, frost$io$ByteOrder$cleanup$shim, frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$io$ByteOrder$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
frost$io$ByteOrder$wrapperclass_type frost$io$ByteOrder$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$io$ByteOrder$wrapper_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x42\x79\x74\x65\x4f\x72\x64\x65\x72", 18, -9020516456099406651, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x42\x79\x74\x65\x4f\x72\x64\x65\x72", 18, -9020516456099406651, NULL };

void frost$io$ByteOrder$cleanup(frost$io$ByteOrder param0) {

return;

}
frost$io$ByteOrder frost$io$ByteOrder$init$frost$core$Int(frost$core$Int param0) {

frost$io$ByteOrder local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/ByteOrder.frost:6
frost$core$Int* $tmp3 = &(&local0)->$rawValue;
*$tmp3 = param0;
frost$io$ByteOrder $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Bit frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit(frost$io$ByteOrder param0, frost$io$ByteOrder param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/ByteOrder.frost:6
frost$core$Int $tmp5 = param0.$rawValue;
frost$core$Int $tmp6 = param1.$rawValue;
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
bool $tmp9 = $tmp7 != $tmp8;
frost$core$Bit $tmp10 = (frost$core$Bit) {$tmp9};
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/ByteOrder.frost:6
frost$core$Bit $tmp12 = (frost$core$Bit) {false};
return $tmp12;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/ByteOrder.frost:6
frost$core$Bit $tmp13 = (frost$core$Bit) {true};
return $tmp13;

}






