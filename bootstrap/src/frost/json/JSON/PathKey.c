#include "frost/json/JSON/PathKey.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/String/Index.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit frost$json$JSON$PathKey$$EQ$frost$json$JSON$PathKey$R$frost$core$Bit$shim(frost$json$JSON$PathKey* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$json$JSON$PathKey$$EQ$frost$json$JSON$PathKey$R$frost$core$Bit(p0, ((frost$json$JSON$PathKey*) p1));

    return result;
}
__attribute__((weak)) void frost$json$JSON$PathKey$cleanup$shim(frost$json$JSON$PathKey* p0) {
    frost$json$JSON$PathKey$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$json$JSON$PathKey$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$json$JSON$PathKey$$EQ$frost$json$JSON$PathKey$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$json$JSON$PathKey$class_type frost$json$JSON$PathKey$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$json$JSON$PathKey$_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$json$JSON$PathKey$cleanup$shim, frost$json$JSON$PathKey$$EQ$frost$json$JSON$PathKey$R$frost$core$Bit$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79", 23, 2189856566983612715, NULL };

void frost$json$JSON$PathKey$cleanup(frost$json$JSON$PathKey* param0) {

frost$core$String* local0 = NULL;
frost$core$String$Index local1;
frost$core$Int64 local2;
frost$core$String$Index local3;
// line 44
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
frost$core$String** $tmp7 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp8 = *$tmp7;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$String* $tmp9 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local0) = $tmp8;
frost$core$String$Index* $tmp10 = (frost$core$String$Index*) (param0->$data + 8);
frost$core$String$Index $tmp11 = *$tmp10;
*(&local1) = $tmp11;
// line 1
frost$core$String* $tmp12 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$core$String* $tmp13 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp14 = (frost$core$Int64) {1};
frost$core$Bit $tmp15 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp14);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block4; else goto block1;
block4:;
frost$core$Int64* $tmp17 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp18 = *$tmp17;
*(&local2) = $tmp18;
frost$core$String$Index* $tmp19 = (frost$core$String$Index*) (param0->$data + 8);
frost$core$String$Index $tmp20 = *$tmp19;
*(&local3) = $tmp20;
goto block1;
block1:;
// line 44
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
return;

}
void frost$json$JSON$PathKey$init$frost$core$Int64$frost$core$String$frost$core$String$Index(frost$json$JSON$PathKey* param0, frost$core$Int64 param1, frost$core$String* param2, frost$core$String$Index param3) {

// line 44
frost$core$Int64* $tmp21 = &param0->$rawValue;
*$tmp21 = param1;
// line 44
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp22 = (frost$core$String**) (param0->$data + 0);
*$tmp22 = param2;
// line 44
frost$core$String$Index* $tmp23 = (frost$core$String$Index*) (param0->$data + 8);
*$tmp23 = param3;
return;

}
void frost$json$JSON$PathKey$init$frost$core$Int64$frost$core$Int64$frost$core$String$Index(frost$json$JSON$PathKey* param0, frost$core$Int64 param1, frost$core$Int64 param2, frost$core$String$Index param3) {

// line 44
frost$core$Int64* $tmp24 = &param0->$rawValue;
*$tmp24 = param1;
// line 44
frost$core$Int64* $tmp25 = (frost$core$Int64*) (param0->$data + 0);
*$tmp25 = param2;
// line 44
frost$core$String$Index* $tmp26 = (frost$core$String$Index*) (param0->$data + 8);
*$tmp26 = param3;
return;

}
frost$core$Bit frost$json$JSON$PathKey$$EQ$frost$json$JSON$PathKey$R$frost$core$Bit(frost$json$JSON$PathKey* param0, frost$json$JSON$PathKey* param1) {

// line 44
frost$core$Int64* $tmp27 = &param0->$rawValue;
frost$core$Int64 $tmp28 = *$tmp27;
frost$core$Int64* $tmp29 = &param1->$rawValue;
frost$core$Int64 $tmp30 = *$tmp29;
int64_t $tmp31 = $tmp28.value;
int64_t $tmp32 = $tmp30.value;
bool $tmp33 = $tmp31 != $tmp32;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block1; else goto block2;
block1:;
// line 44
frost$core$Bit $tmp36 = frost$core$Bit$init$builtin_bit(false);
return $tmp36;
block2:;
// line 44
frost$core$Bit $tmp37 = frost$core$Bit$init$builtin_bit(true);
return $tmp37;

}






