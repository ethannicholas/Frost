#include "org/pandalanguage/pandac/pandadoc/Markdown/HTMLToken.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$$EQ$org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$R$panda$core$Bit$shim(org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$$EQ$org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$R$panda$core$Bit(p0, ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) p1));

    return result;
}
__attribute__((weak)) void org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$cleanup$shim(org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* p0) {
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$cleanup(p0);

}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$$EQ$org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class_type org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$cleanup$shim, org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$$EQ$org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$R$panda$core$Bit$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x48\x54\x4d\x4c\x54\x6f\x6b\x65\x6e", 52, -3956136468165552167, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* param0) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 813
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
// line 1
panda$core$String* $tmp10 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$core$String* $tmp11 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
// unreffing _f0
*(&local0) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp12 = (panda$core$Int64) {1};
panda$core$Bit $tmp13 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp12);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block1;
block4:;
panda$core$String** $tmp15 = (panda$core$String**) (param0->$data + 0);
panda$core$String* $tmp16 = *$tmp15;
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$core$String* $tmp17 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
*(&local1) = $tmp16;
// line 1
panda$core$String* $tmp18 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$core$String* $tmp19 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
// unreffing _f0
*(&local1) = ((panda$core$String*) NULL);
goto block1;
block1:;
// line 813
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* param0, panda$core$Int64 param1, panda$core$String* param2) {

// line 813
panda$core$Int64* $tmp20 = &param0->$rawValue;
*$tmp20 = param1;
// line 813
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp21 = (panda$core$String**) (param0->$data + 0);
*$tmp21 = param2;
return;

}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$$EQ$org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* param0, org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* param1) {

// line 813
panda$core$Int64* $tmp22 = &param0->$rawValue;
panda$core$Int64 $tmp23 = *$tmp22;
panda$core$Int64* $tmp24 = &param1->$rawValue;
panda$core$Int64 $tmp25 = *$tmp24;
int64_t $tmp26 = $tmp23.value;
int64_t $tmp27 = $tmp25.value;
bool $tmp28 = $tmp26 != $tmp27;
panda$core$Bit $tmp29 = (panda$core$Bit) {$tmp28};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block1; else goto block2;
block1:;
// line 813
panda$core$Bit $tmp31 = panda$core$Bit$init$builtin_bit(false);
return $tmp31;
block2:;
// line 813
panda$core$Bit $tmp32 = panda$core$Bit$init$builtin_bit(true);
return $tmp32;

}

