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
frost$json$JSON$PathKey$class_type frost$json$JSON$PathKey$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$json$JSON$PathKey$_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$json$JSON$PathKey$cleanup$shim, frost$json$JSON$PathKey$$EQ$frost$json$JSON$PathKey$R$frost$core$Bit$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79", 23, 4907892411442390093, NULL };

void frost$json$JSON$PathKey$cleanup(frost$json$JSON$PathKey* param0) {

frost$core$String* local0 = NULL;
frost$core$String$Index local1;
frost$core$Int64 local2;
frost$core$String$Index local3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:43
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
frost$core$String** $tmp10 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp11 = *$tmp10;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$String* $tmp12 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local0) = $tmp11;
frost$core$String$Index* $tmp13 = (frost$core$String$Index*) (param0->$data + 8);
frost$core$String$Index $tmp14 = *$tmp13;
*(&local1) = $tmp14;
// <no location>
frost$core$String* $tmp15 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$String* $tmp16 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp17 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp18 = $tmp3.value;
int64_t $tmp19 = $tmp17.value;
bool $tmp20 = $tmp18 == $tmp19;
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20};
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block5; else goto block1;
block5:;
frost$core$Int64* $tmp23 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp24 = *$tmp23;
*(&local2) = $tmp24;
frost$core$String$Index* $tmp25 = (frost$core$String$Index*) (param0->$data + 8);
frost$core$String$Index $tmp26 = *$tmp25;
*(&local3) = $tmp26;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:43
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
return;

}
void frost$json$JSON$PathKey$init$frost$core$Int64$frost$core$String$frost$core$String$Index(frost$json$JSON$PathKey* param0, frost$core$Int64 param1, frost$core$String* param2, frost$core$String$Index param3) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:43
frost$core$Int64* $tmp27 = &param0->$rawValue;
*$tmp27 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:43
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp28 = (frost$core$String**) (param0->$data + 0);
*$tmp28 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:43
frost$core$String$Index* $tmp29 = (frost$core$String$Index*) (param0->$data + 8);
*$tmp29 = param3;
return;

}
void frost$json$JSON$PathKey$init$frost$core$Int64$frost$core$Int64$frost$core$String$Index(frost$json$JSON$PathKey* param0, frost$core$Int64 param1, frost$core$Int64 param2, frost$core$String$Index param3) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:43
frost$core$Int64* $tmp30 = &param0->$rawValue;
*$tmp30 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:43
frost$core$Int64* $tmp31 = (frost$core$Int64*) (param0->$data + 0);
*$tmp31 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:43
frost$core$String$Index* $tmp32 = (frost$core$String$Index*) (param0->$data + 8);
*$tmp32 = param3;
return;

}
frost$core$Bit frost$json$JSON$PathKey$$EQ$frost$json$JSON$PathKey$R$frost$core$Bit(frost$json$JSON$PathKey* param0, frost$json$JSON$PathKey* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:43
frost$core$Int64* $tmp33 = &param0->$rawValue;
frost$core$Int64 $tmp34 = *$tmp33;
frost$core$Int64* $tmp35 = &param1->$rawValue;
frost$core$Int64 $tmp36 = *$tmp35;
int64_t $tmp37 = $tmp34.value;
int64_t $tmp38 = $tmp36.value;
bool $tmp39 = $tmp37 != $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:43
frost$core$Bit $tmp42 = (frost$core$Bit) {false};
return $tmp42;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:43
frost$core$Bit $tmp43 = (frost$core$Bit) {true};
return $tmp43;

}






