#include "frost/io/ByteOrder.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"

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
frost$io$ByteOrder$class_type frost$io$ByteOrder$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$io$ByteOrder$_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim, frost$io$ByteOrder$cleanup$shim, frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$io$ByteOrder$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
frost$io$ByteOrder$wrapperclass_type frost$io$ByteOrder$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$io$ByteOrder$wrapper_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x42\x79\x74\x65\x4f\x72\x64\x65\x72", 18, 1060474237832200391, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x42\x79\x74\x65\x4f\x72\x64\x65\x72", 18, 1060474237832200391, NULL };

void frost$io$ByteOrder$cleanup(frost$io$ByteOrder param0) {

// line 6
frost$core$Int64 $tmp3 = param0.$rawValue;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
goto block1;
block3:;
frost$core$Int64 $tmp7 = (frost$core$Int64) {1};
frost$core$Bit $tmp8 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp7);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block4; else goto block1;
block4:;
goto block1;
block1:;
return;

}
frost$io$ByteOrder frost$io$ByteOrder$init$frost$core$Int64(frost$core$Int64 param0) {

frost$io$ByteOrder local0;
// line 6
frost$core$Int64* $tmp10 = &(&local0)->$rawValue;
*$tmp10 = param0;
frost$io$ByteOrder $tmp11 = *(&local0);
return $tmp11;

}
frost$core$Bit frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit(frost$io$ByteOrder param0, frost$io$ByteOrder param1) {

// line 6
frost$core$Int64 $tmp12 = param0.$rawValue;
frost$core$Int64 $tmp13 = param1.$rawValue;
int64_t $tmp14 = $tmp12.value;
int64_t $tmp15 = $tmp13.value;
bool $tmp16 = $tmp14 != $tmp15;
frost$core$Bit $tmp17 = (frost$core$Bit) {$tmp16};
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block1; else goto block2;
block1:;
// line 6
frost$core$Bit $tmp19 = frost$core$Bit$init$builtin_bit(false);
return $tmp19;
block2:;
// line 6
frost$core$Bit $tmp20 = frost$core$Bit$init$builtin_bit(true);
return $tmp20;

}






