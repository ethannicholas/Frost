#include "frost/core/Bit.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Formattable.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"

__attribute__((weak)) frost$core$Int64 frost$core$Bit$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Bit$get_hash$R$frost$core$Int64(((frost$core$Bit$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit(((frost$core$Bit$wrapper*) p0)->value, ((frost$core$Bit$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit(((frost$core$Bit$wrapper*) p0)->value, ((frost$core$Bit$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Bit$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Bit$format$frost$core$String$R$frost$core$String(((frost$core$Bit$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Bit$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Bit$get_asString$R$frost$core$String(((frost$core$Bit$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Bit frost$core$Bit$$NOT$R$frost$core$Bit$shim(frost$core$Object* p0) {
    frost$core$Bit result = frost$core$Bit$$NOT$R$frost$core$Bit(((frost$core$Bit$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Bit$$OR$frost$core$Bit$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Bit p1) {
    frost$core$Bit result = frost$core$Bit$$OR$frost$core$Bit$R$frost$core$Bit(((frost$core$Bit$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Bit$$AND$frost$core$Bit$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Bit p1) {
    frost$core$Bit result = frost$core$Bit$$AND$frost$core$Bit$R$frost$core$Bit(((frost$core$Bit$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Bit$$XOR$frost$core$Bit$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Bit p1) {
    frost$core$Bit result = frost$core$Bit$$XOR$frost$core$Bit$R$frost$core$Bit(((frost$core$Bit$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T$shim(frost$core$Object* p0, frost$core$Object* p1, frost$core$Object* p2) {
    frost$core$Object* result = frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T(((frost$core$Bit$wrapper*) p0)->value, p1, p2);

    return result;
}
__attribute__((weak)) void frost$core$Bit$cleanup$shim(frost$core$Object* p0) {
    frost$core$Bit$cleanup(((frost$core$Bit$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Bit$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$Bit$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Bit$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Bit$_frost$collections$Key, { frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Bit$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Bit$_frost$core$Equatable, { frost$core$Bit$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s1;
frost$core$Bit$class_type frost$core$Bit$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Bit$_frost$core$Formattable, { frost$core$Bit$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$get_hash$R$frost$core$Int64$shim, frost$core$Bit$$NOT$R$frost$core$Bit$shim, frost$core$Bit$$OR$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$AND$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$XOR$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T$shim, frost$core$Bit$format$frost$core$String$R$frost$core$String$shim, frost$core$Bit$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Bit$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$Bit$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Bit$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Bit$wrapper_frost$collections$Key, { frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Bit$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Bit$wrapper_frost$core$Equatable, { frost$core$Bit$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s2;
frost$core$Bit$wrapperclass_type frost$core$Bit$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Bit$wrapper_frost$core$Formattable, { frost$core$Bit$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn45)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 23, 6494996805396556951, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x74\x2e\x66\x72\x6f\x73\x74", 9, 1819751750130869392, NULL };

frost$core$Bit frost$core$Bit$init$builtin_bit(bool param0) {

frost$core$Bit local0;
// line 10
bool* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
frost$core$Bit $tmp4 = *(&local0);
return $tmp4;

}
frost$core$String* frost$core$Bit$get_asString$R$frost$core$String(frost$core$Bit param0) {

// line 15
bool $tmp5 = param0.value;
if ($tmp5) goto block1; else goto block3;
block1:;
// line 16
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6));
return &$s7;
block3:;
// line 1
// line 19
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s8));
return &$s9;
block2:;
goto block4;
block4:;

}
frost$core$Bit frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// line 25
bool $tmp10 = param0.value;
bool $tmp11 = param1.value;
bool $tmp12 = $tmp10 == $tmp11;
frost$core$Bit $tmp13 = frost$core$Bit$init$builtin_bit($tmp12);
return $tmp13;

}
frost$core$Bit frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// line 30
bool $tmp14 = param0.value;
bool $tmp15 = param1.value;
bool $tmp16 = $tmp14 != $tmp15;
frost$core$Bit $tmp17 = frost$core$Bit$init$builtin_bit($tmp16);
return $tmp17;

}
frost$core$Int64 frost$core$Bit$get_hash$R$frost$core$Int64(frost$core$Bit param0) {

// line 35
bool $tmp18 = param0.value;
frost$core$Bit $tmp19 = frost$core$Bit$init$builtin_bit($tmp18);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block1:;
// line 36
frost$core$Int64 $tmp21 = (frost$core$Int64) {1};
return $tmp21;
block2:;
// line 38
frost$core$Int64 $tmp22 = (frost$core$Int64) {0};
return $tmp22;

}
frost$core$Bit frost$core$Bit$$NOT$R$frost$core$Bit(frost$core$Bit param0) {

// line 42
bool $tmp23 = param0.value;
bool $tmp24 = !$tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
return $tmp25;

}
frost$core$Bit frost$core$Bit$$OR$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// line 49
bool $tmp26 = param0.value;
bool $tmp27 = param1.value;
bool $tmp28 = $tmp26 | $tmp27;
frost$core$Bit $tmp29 = frost$core$Bit$init$builtin_bit($tmp28);
return $tmp29;

}
frost$core$Bit frost$core$Bit$$AND$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// line 53
bool $tmp30 = param0.value;
bool $tmp31 = param1.value;
bool $tmp32 = $tmp30 & $tmp31;
frost$core$Bit $tmp33 = frost$core$Bit$init$builtin_bit($tmp32);
return $tmp33;

}
frost$core$Bit frost$core$Bit$$XOR$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// line 57
bool $tmp34 = param0.value;
bool $tmp35 = param1.value;
bool $tmp36 = $tmp34 ^ $tmp35;
frost$core$Bit $tmp37 = (frost$core$Bit) {$tmp36};
return $tmp37;

}
frost$core$Object* frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T(frost$core$Bit param0, frost$core$Object* param1, frost$core$Object* param2) {

// line 62
bool $tmp38 = param0.value;
if ($tmp38) goto block1; else goto block2;
block1:;
// line 63
frost$core$Frost$ref$frost$core$Object$Q(param1);
return param1;
block2:;
// line 65
frost$core$Frost$ref$frost$core$Object$Q(param2);
return param2;

}
frost$core$String* frost$core$Bit$format$frost$core$String$R$frost$core$String(frost$core$Bit param0, frost$core$String* param1) {

frost$collections$Array* local0 = NULL;
// line 75
frost$collections$Array* $tmp39 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT(param1, &$s40);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$collections$Array* $tmp41 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
*(&local0) = $tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// line 76
frost$collections$Array* $tmp42 = *(&local0);
ITable* $tmp43 = ((frost$collections$CollectionView*) $tmp42)->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp43 = $tmp43->next;
}
$fn45 $tmp44 = $tmp43->methods[0];
frost$core$Int64 $tmp46 = $tmp44(((frost$collections$CollectionView*) $tmp42));
frost$core$Int64 $tmp47 = (frost$core$Int64) {2};
frost$core$Bit $tmp48 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp46, $tmp47);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp50 = (frost$core$Int64) {76};
frost$core$String* $tmp51 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s52, param1);
frost$core$String* $tmp53 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp51, &$s54);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s55, $tmp50, $tmp53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
abort(); // unreachable
block1:;
// line 77
bool $tmp56 = param0.value;
if ($tmp56) goto block3; else goto block4;
block3:;
// line 78
frost$collections$Array* $tmp57 = *(&local0);
frost$core$Int64 $tmp58 = (frost$core$Int64) {0};
frost$core$Object* $tmp59 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp57, $tmp58);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp59)));
frost$core$Frost$unref$frost$core$Object$Q($tmp59);
frost$collections$Array* $tmp60 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$core$String*) $tmp59);
block4:;
// line 80
frost$collections$Array* $tmp61 = *(&local0);
frost$core$Int64 $tmp62 = (frost$core$Int64) {1};
frost$core$Object* $tmp63 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp61, $tmp62);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp63)));
frost$core$Frost$unref$frost$core$Object$Q($tmp63);
frost$collections$Array* $tmp64 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$core$String*) $tmp63);

}
void frost$core$Bit$cleanup(frost$core$Bit param0) {

return;

}

