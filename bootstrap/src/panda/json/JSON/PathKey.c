#include "panda/json/JSON/PathKey.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/String/Index.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$core$Bit panda$json$JSON$PathKey$$EQ$panda$json$JSON$PathKey$R$panda$core$Bit$shim(panda$json$JSON$PathKey* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$json$JSON$PathKey$$EQ$panda$json$JSON$PathKey$R$panda$core$Bit(p0, ((panda$json$JSON$PathKey*) p1));

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$json$JSON$PathKey$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { panda$json$JSON$PathKey$$EQ$panda$json$JSON$PathKey$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
panda$json$JSON$PathKey$class_type panda$json$JSON$PathKey$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$json$JSON$PathKey$_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$json$JSON$PathKey$cleanup, panda$json$JSON$PathKey$$EQ$panda$json$JSON$PathKey$R$panda$core$Bit$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79", 23, 7178919972541529313, NULL };

void panda$json$JSON$PathKey$cleanup(panda$json$JSON$PathKey* param0) {

panda$core$String* local0 = NULL;
panda$core$String$Index local1;
panda$core$Int64 local2;
panda$core$String$Index local3;
// line 45
panda$core$Int64* $tmp2 = &param0->$rawValue;
panda$core$Int64 $tmp3 = *$tmp2;
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
panda$core$String** $tmp7 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp8 = *$tmp7;
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$String* $tmp9 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
*(&local0) = $tmp8;
panda$core$String$Index* $tmp10 = (panda$core$String$Index*) (param0->$data + 8);
panda$core$String$Index $tmp11 = *$tmp10;
*(&local1) = $tmp11;
// line 1
panda$core$String* $tmp12 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$core$String* $tmp13 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing _f0
*(&local0) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp14 = (panda$core$Int64) {1};
panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp14);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block4; else goto block1;
block4:;
panda$core$Int64* $tmp17 = (panda$core$Int64*) (param0->$data + 0);
panda$core$Int64 $tmp18 = *$tmp17;
*(&local2) = $tmp18;
panda$core$String$Index* $tmp19 = (panda$core$String$Index*) (param0->$data + 8);
panda$core$String$Index $tmp20 = *$tmp19;
*(&local3) = $tmp20;
goto block1;
block1:;
// line 45
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}
void panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$String$panda$core$String$Index(panda$json$JSON$PathKey* param0, panda$core$Int64 param1, panda$core$String* param2, panda$core$String$Index param3) {

// line 45
panda$core$Int64* $tmp21 = &param0->$rawValue;
*$tmp21 = param1;
// line 45
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp22 = (panda$core$String**) (param0->$data + 0);
*$tmp22 = param2;
// line 45
panda$core$String$Index* $tmp23 = (panda$core$String$Index*) (param0->$data + 8);
*$tmp23 = param3;
return;

}
void panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$Int64$panda$core$String$Index(panda$json$JSON$PathKey* param0, panda$core$Int64 param1, panda$core$Int64 param2, panda$core$String$Index param3) {

// line 45
panda$core$Int64* $tmp24 = &param0->$rawValue;
*$tmp24 = param1;
// line 45
panda$core$Int64* $tmp25 = (panda$core$Int64*) (param0->$data + 0);
*$tmp25 = param2;
// line 45
panda$core$String$Index* $tmp26 = (panda$core$String$Index*) (param0->$data + 8);
*$tmp26 = param3;
return;

}
panda$core$Bit panda$json$JSON$PathKey$$EQ$panda$json$JSON$PathKey$R$panda$core$Bit(panda$json$JSON$PathKey* param0, panda$json$JSON$PathKey* param1) {

// line 45
panda$core$Int64* $tmp27 = &param0->$rawValue;
panda$core$Int64 $tmp28 = *$tmp27;
panda$core$Int64* $tmp29 = &param1->$rawValue;
panda$core$Int64 $tmp30 = *$tmp29;
int64_t $tmp31 = $tmp28.value;
int64_t $tmp32 = $tmp30.value;
bool $tmp33 = $tmp31 != $tmp32;
panda$core$Bit $tmp34 = (panda$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block1; else goto block2;
block1:;
// line 45
panda$core$Bit $tmp36 = panda$core$Bit$init$builtin_bit(false);
return $tmp36;
block2:;
// line 45
panda$core$Bit $tmp37 = panda$core$Bit$init$builtin_bit(true);
return $tmp37;

}






