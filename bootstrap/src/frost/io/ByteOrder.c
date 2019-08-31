#include "frost/io/ByteOrder.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Int frost$io$ByteOrder$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$io$ByteOrder$get_hash$R$frost$core$Int(((frost$io$ByteOrder$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit(((frost$io$ByteOrder$wrapper*) p0)->value, ((frost$io$ByteOrder$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$io$ByteOrder$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$io$ByteOrder$get_asString$R$frost$core$String(((frost$io$ByteOrder$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void frost$io$ByteOrder$cleanup$shim(frost$core$Object* p0) {
    frost$io$ByteOrder$cleanup(((frost$io$ByteOrder$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$io$ByteOrder$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$io$ByteOrder$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$io$ByteOrder$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$io$ByteOrder$_frost$collections$HashKey, { frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$io$ByteOrder$class_type frost$io$ByteOrder$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$io$ByteOrder$_frost$core$Equatable, { frost$io$ByteOrder$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$io$ByteOrder$cleanup$shim, frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit$shim, frost$io$ByteOrder$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$io$ByteOrder$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$io$ByteOrder$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$io$ByteOrder$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$io$ByteOrder$wrapper_frost$collections$HashKey, { frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
frost$io$ByteOrder$wrapperclass_type frost$io$ByteOrder$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$io$ByteOrder$wrapper_frost$core$Equatable, { frost$io$ByteOrder$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x42\x79\x74\x65\x4f\x72\x64\x65\x72", 18, -9020516456099406651, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x42\x79\x74\x65\x4f\x72\x64\x65\x72", 18, -9020516456099406651, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x79\x74\x65\x4f\x72\x64\x65\x72\x2e\x66\x72\x6f\x73\x74", 15, -8507021180538529515, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x49\x54\x54\x4c\x45\x5f\x45\x4e\x44\x49\x41\x4e", 13, 686991733482657517, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x49\x54\x54\x4c\x45\x5f\x45\x4e\x44\x49\x41\x4e", 13, 686991733482657517, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x47\x5f\x45\x4e\x44\x49\x41\x4e", 10, -927966598188130251, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x47\x5f\x45\x4e\x44\x49\x41\x4e", 10, -927966598188130251, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x79\x74\x65\x4f\x72\x64\x65\x72\x2e\x66\x72\x6f\x73\x74", 15, -8507021180538529515, NULL };

void frost$io$ByteOrder$cleanup(frost$io$ByteOrder param0) {

return;

}
frost$io$ByteOrder frost$io$ByteOrder$init$frost$core$Int(frost$core$Int param0) {

frost$io$ByteOrder local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int* $tmp3 = &(&local0)->$rawValue;
*$tmp3 = param0;
frost$io$ByteOrder $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Bit frost$io$ByteOrder$$EQ$frost$io$ByteOrder$R$frost$core$Bit(frost$io$ByteOrder param0, frost$io$ByteOrder param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int $tmp5 = param0.$rawValue;
frost$core$Int $tmp6 = param1.$rawValue;
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
bool $tmp9 = $tmp7 != $tmp8;
frost$core$Bit $tmp10 = (frost$core$Bit) {$tmp9};
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Bit $tmp12 = (frost$core$Bit) {false};
return $tmp12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Bit $tmp13 = (frost$core$Bit) {true};
return $tmp13;

}
frost$core$Int frost$io$ByteOrder$get_hash$R$frost$core$Int(frost$io$ByteOrder param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int $tmp14 = param0.$rawValue;
frost$core$Int $tmp15 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ByteOrder.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp16 = $tmp14.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 == $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int $tmp21 = (frost$core$Int) {9426227617610144965u};
return $tmp21;
block3:;
frost$core$Int $tmp22 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ByteOrder.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp23 = $tmp14.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 == $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int $tmp28 = (frost$core$Int) {405711161510738314u};
return $tmp28;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int $tmp29 = (frost$core$Int) {6u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s30, $tmp29);
abort(); // unreachable
block1:;
goto block8;
block8:;

}
frost$core$String* frost$io$ByteOrder$get_asString$R$frost$core$String(frost$io$ByteOrder param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int $tmp31 = param0.$rawValue;
frost$core$Int $tmp32 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ByteOrder.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp33 = $tmp31.value;
int64_t $tmp34 = $tmp32.value;
bool $tmp35 = $tmp33 == $tmp34;
frost$core$Bit $tmp36 = (frost$core$Bit) {$tmp35};
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s38));
return &$s39;
block3:;
frost$core$Int $tmp40 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ByteOrder.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp41 = $tmp31.value;
int64_t $tmp42 = $tmp40.value;
bool $tmp43 = $tmp41 == $tmp42;
frost$core$Bit $tmp44 = (frost$core$Bit) {$tmp43};
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s46));
return &$s47;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int $tmp48 = (frost$core$Int) {6u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s49, $tmp48);
abort(); // unreachable
block1:;
goto block8;
block8:;

}






