#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Maybe.h"
#include "panda/core/Int64.h"
#include "panda/core/Error.h"
#include "panda/core/Bit.h"
#include "panda/collections/Key.h"
#include "panda/collections/Iterator.h"
#include "panda/io/Console.h"
#include "panda/io/OutputStream.h"
#include "panda/core/System.h"
#include "panda/core/UInt64.h"
#include "panda/core/Char32.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt8.h"
#include "panda/core/Char8.h"
#include "panda/core/String/Index.h"
#include "panda/core/Equatable.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/ListView.h"
#include "panda/core/Comparable.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"


static panda$core$String $s1;
panda$core$Panda$class_type panda$core$Panda$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Panda$cleanup, panda$core$Panda$countAllocation$panda$core$Class, panda$core$Panda$countDeallocation$panda$core$Class, panda$core$Panda$dumpReport, panda$core$Panda$countTrace$panda$core$String} };

typedef panda$core$Bit (*$fn90)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn95)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn127)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn132)(panda$collections$Iterator*);
typedef void (*$fn175)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn189)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn263)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn385)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Object* (*$fn467)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2f\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 31, 1503042479218620573, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2f\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 31, 1503042479218620573, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2f\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 38, 4390673133021255337, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2f\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 38, 4390673133021255337, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61\x2e\x61\x6c\x69\x67\x6e\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x73\x70\x65\x63\x69\x66\x69\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 126, -635296898711655152, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 8772831143845743696, NULL };

void panda$core$Panda$init(panda$core$Panda* param0) {

// line 11
panda$collections$HashMap* $tmp2 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$collections$HashMap** $tmp3 = &param0->allocations;
panda$collections$HashMap* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$collections$HashMap** $tmp5 = &param0->allocations;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:panda.collections.HashMap<panda.core.String, panda.core.Int64>)
// line 13
panda$collections$HashMap* $tmp6 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp6);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$collections$HashMap** $tmp7 = &param0->traces;
panda$collections$HashMap* $tmp8 = *$tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$collections$HashMap** $tmp9 = &param0->traces;
*$tmp9 = $tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// unreffing REF($16:panda.collections.HashMap<panda.core.String, panda.core.Int64>)
return;

}
panda$core$Maybe* panda$core$Panda$success$panda$core$Object$R$panda$core$Maybe$LTpanda$core$Object$GT$Q(panda$core$Object* param0) {

// line 21
panda$core$Maybe* $tmp10 = (panda$core$Maybe*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Maybe$class);
panda$core$Int64 $tmp11 = (panda$core$Int64) {0};
panda$core$Maybe$init$panda$core$Int64$panda$core$Maybe$T($tmp10, $tmp11, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
// unreffing REF($1:panda.core.Maybe<panda.core.Object>)
return $tmp10;

}
panda$core$Maybe* panda$core$Panda$error$panda$core$String$R$panda$core$Maybe$LTpanda$core$Object$GT$Q(panda$core$String* param0) {

// line 27
panda$core$Maybe* $tmp12 = (panda$core$Maybe*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Maybe$class);
panda$core$Int64 $tmp13 = (panda$core$Int64) {1};
panda$core$Error* $tmp14 = (panda$core$Error*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Error$class);
panda$core$Error$init$panda$core$String($tmp14, param0);
panda$core$Maybe$init$panda$core$Int64$panda$core$Error($tmp12, $tmp13, $tmp14);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
// unreffing REF($4:panda.core.Error)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
// unreffing REF($1:panda.core.Maybe<panda.core.Object>)
return $tmp12;

}
panda$core$String* panda$core$Panda$allocationName$panda$core$Class$R$panda$core$String(panda$core$Class* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
// line 33
panda$core$String** $tmp15 = &param0->name;
panda$core$String* $tmp16 = *$tmp15;
panda$core$Bit $tmp17 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp16, &$s18);
bool $tmp19 = $tmp17.value;
if ($tmp19) goto block3; else goto block4;
block3:;
*(&local0) = $tmp17;
goto block5;
block4:;
panda$core$String** $tmp20 = &param0->name;
panda$core$String* $tmp21 = *$tmp20;
panda$core$Bit $tmp22 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp21, &$s23);
*(&local0) = $tmp22;
goto block5;
block5:;
panda$core$Bit $tmp24 = *(&local0);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block1:;
// line 34
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s26));
return &$s27;
block2:;
// line 36
panda$core$String** $tmp28 = &param0->name;
panda$core$String* $tmp29 = *$tmp28;
panda$core$Bit $tmp30 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp29, &$s31);
bool $tmp32 = $tmp30.value;
if ($tmp32) goto block8; else goto block9;
block8:;
*(&local1) = $tmp30;
goto block10;
block9:;
panda$core$String** $tmp33 = &param0->name;
panda$core$String* $tmp34 = *$tmp33;
panda$core$Bit $tmp35 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp34, &$s36);
*(&local1) = $tmp35;
goto block10;
block10:;
panda$core$Bit $tmp37 = *(&local1);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block6; else goto block7;
block6:;
// line 37
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s39));
return &$s40;
block7:;
// line 39
panda$core$String** $tmp41 = &param0->name;
panda$core$String* $tmp42 = *$tmp41;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
return $tmp42;

}
void panda$core$Panda$countAllocation$panda$core$Class(panda$core$Panda* param0, panda$core$Class* param1) {

panda$core$String* local0 = NULL;
panda$core$Int64$nullable local1;
// line 43
panda$core$String* $tmp43 = panda$core$Panda$allocationName$panda$core$Class$R$panda$core$String(param1);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$core$String* $tmp44 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
*(&local0) = $tmp43;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// unreffing REF($1:panda.core.String)
// line 44
panda$collections$HashMap** $tmp45 = &param0->allocations;
panda$collections$HashMap* $tmp46 = *$tmp45;
panda$core$String* $tmp47 = *(&local0);
panda$core$Object* $tmp48 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp46, ((panda$collections$Key*) $tmp47));
*(&local1) = ($tmp48 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp48)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
panda$core$Panda$unref$panda$core$Object$Q($tmp48);
// unreffing REF($18:panda.collections.HashMap.V?)
// line 45
panda$core$Int64$nullable $tmp49 = *(&local1);
panda$core$Bit $tmp50 = panda$core$Bit$init$builtin_bit(!$tmp49.nonnull);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block1; else goto block2;
block1:;
// line 46
panda$core$Int64 $tmp52 = (panda$core$Int64) {0};
*(&local1) = ((panda$core$Int64$nullable) { $tmp52, true });
goto block2;
block2:;
// line 48
panda$collections$HashMap** $tmp53 = &param0->allocations;
panda$collections$HashMap* $tmp54 = *$tmp53;
panda$core$String* $tmp55 = *(&local0);
panda$core$Int64$nullable $tmp56 = *(&local1);
panda$core$Int64 $tmp57 = (panda$core$Int64) {1};
int64_t $tmp58 = ((panda$core$Int64) $tmp56.value).value;
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58 + $tmp59;
panda$core$Int64 $tmp61 = (panda$core$Int64) {$tmp60};
panda$core$Int64$wrapper* $tmp62;
$tmp62 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp62->value = $tmp61;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp54, ((panda$collections$Key*) $tmp55), ((panda$core$Object*) $tmp62));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// unreffing REF($48:panda.collections.HashMap.V)
panda$core$String* $tmp63 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return;

}
void panda$core$Panda$countDeallocation$panda$core$Class(panda$core$Panda* param0, panda$core$Class* param1) {

panda$core$String* local0 = NULL;
panda$core$Int64$nullable local1;
// line 52
panda$core$String* $tmp64 = panda$core$Panda$allocationName$panda$core$Class$R$panda$core$String(param1);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
panda$core$String* $tmp65 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
*(&local0) = $tmp64;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing REF($1:panda.core.String)
// line 53
panda$collections$HashMap** $tmp66 = &param0->allocations;
panda$collections$HashMap* $tmp67 = *$tmp66;
panda$core$String* $tmp68 = *(&local0);
panda$core$Object* $tmp69 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp67, ((panda$collections$Key*) $tmp68));
*(&local1) = ($tmp69 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp69)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
panda$core$Panda$unref$panda$core$Object$Q($tmp69);
// unreffing REF($18:panda.collections.HashMap.V?)
// line 54
panda$core$Int64$nullable $tmp70 = *(&local1);
panda$core$Bit $tmp71 = panda$core$Bit$init$builtin_bit(!$tmp70.nonnull);
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block1; else goto block2;
block1:;
// line 55
panda$core$Int64 $tmp73 = (panda$core$Int64) {0};
*(&local1) = ((panda$core$Int64$nullable) { $tmp73, true });
goto block2;
block2:;
// line 57
panda$collections$HashMap** $tmp74 = &param0->allocations;
panda$collections$HashMap* $tmp75 = *$tmp74;
panda$core$String* $tmp76 = *(&local0);
panda$core$Int64$nullable $tmp77 = *(&local1);
panda$core$Int64 $tmp78 = (panda$core$Int64) {1};
int64_t $tmp79 = ((panda$core$Int64) $tmp77.value).value;
int64_t $tmp80 = $tmp78.value;
int64_t $tmp81 = $tmp79 - $tmp80;
panda$core$Int64 $tmp82 = (panda$core$Int64) {$tmp81};
panda$core$Int64$wrapper* $tmp83;
$tmp83 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp83->value = $tmp82;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp75, ((panda$collections$Key*) $tmp76), ((panda$core$Object*) $tmp83));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing REF($48:panda.collections.HashMap.V)
panda$core$String* $tmp84 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return;

}
void panda$core$Panda$dumpReport(panda$core$Panda* param0) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 61
panda$collections$HashMap** $tmp85 = &param0->allocations;
panda$collections$HashMap* $tmp86 = *$tmp85;
panda$collections$Iterator* $tmp87 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT($tmp86);
goto block1;
block1:;
ITable* $tmp88 = $tmp87->$class->itable;
while ($tmp88->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp88 = $tmp88->next;
}
$fn90 $tmp89 = $tmp88->methods[0];
panda$core$Bit $tmp91 = $tmp89($tmp87);
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block3; else goto block2;
block2:;
*(&local0) = ((panda$core$String*) NULL);
ITable* $tmp93 = $tmp87->$class->itable;
while ($tmp93->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[1];
panda$core$Object* $tmp96 = $tmp94($tmp87);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp96)));
panda$core$String* $tmp97 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
*(&local0) = ((panda$core$String*) $tmp96);
// line 62
panda$collections$HashMap** $tmp98 = &param0->allocations;
panda$collections$HashMap* $tmp99 = *$tmp98;
panda$core$String* $tmp100 = *(&local0);
panda$core$Object* $tmp101 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp99, ((panda$collections$Key*) $tmp100));
panda$core$Int64 $tmp102 = (panda$core$Int64) {0};
int64_t $tmp103 = ((panda$core$Int64) ($tmp101 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp101)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value).value;
int64_t $tmp104 = $tmp102.value;
bool $tmp105 = $tmp103 != $tmp104;
panda$core$Bit $tmp106 = (panda$core$Bit) {$tmp105};
bool $tmp107 = $tmp106.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp101);
// unreffing REF($29:panda.collections.HashMap.V?)
if ($tmp107) goto block4; else goto block5;
block4:;
// line 63
panda$core$String* $tmp108 = *(&local0);
panda$core$String* $tmp109 = panda$core$String$convert$R$panda$core$String($tmp108);
panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp109, &$s111);
panda$collections$HashMap** $tmp112 = &param0->allocations;
panda$collections$HashMap* $tmp113 = *$tmp112;
panda$core$String* $tmp114 = *(&local0);
panda$core$Object* $tmp115 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp113, ((panda$collections$Key*) $tmp114));
panda$core$Object* $tmp116;
if (($tmp115 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp115)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).nonnull) {
    panda$core$Int64$wrapper* $tmp117;
    $tmp117 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp117->value = ((panda$core$Int64) ($tmp115 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp115)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value);
    $tmp116 = ((panda$core$Object*) $tmp117);
}
else {
    $tmp116 = NULL;
}
panda$core$String* $tmp118 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp110, $tmp116);
panda$core$String* $tmp119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp118, &$s120);
panda$io$Console$printLine$panda$core$String($tmp119);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp119));
// unreffing REF($55:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
// unreffing REF($54:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp116);
// unreffing REF($53:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q($tmp115);
// unreffing REF($51:panda.collections.HashMap.V?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
// unreffing REF($45:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
// unreffing REF($44:panda.core.String)
goto block5;
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp96);
// unreffing REF($15:panda.collections.Iterator.T)
panda$core$String* $tmp121 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
// unreffing k
*(&local0) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// unreffing REF($4:panda.collections.Iterator<panda.collections.HashMap.K>)
// line 66
panda$collections$HashMap** $tmp122 = &param0->traces;
panda$collections$HashMap* $tmp123 = *$tmp122;
panda$collections$Iterator* $tmp124 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT($tmp123);
goto block6;
block6:;
ITable* $tmp125 = $tmp124->$class->itable;
while ($tmp125->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp125 = $tmp125->next;
}
$fn127 $tmp126 = $tmp125->methods[0];
panda$core$Bit $tmp128 = $tmp126($tmp124);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block8; else goto block7;
block7:;
*(&local1) = ((panda$core$String*) NULL);
ITable* $tmp130 = $tmp124->$class->itable;
while ($tmp130->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp130 = $tmp130->next;
}
$fn132 $tmp131 = $tmp130->methods[1];
panda$core$Object* $tmp133 = $tmp131($tmp124);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp133)));
panda$core$String* $tmp134 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
*(&local1) = ((panda$core$String*) $tmp133);
// line 67
panda$core$String* $tmp135 = *(&local1);
panda$core$String* $tmp136 = panda$core$String$convert$R$panda$core$String($tmp135);
panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp136, &$s138);
panda$collections$HashMap** $tmp139 = &param0->traces;
panda$collections$HashMap* $tmp140 = *$tmp139;
panda$core$String* $tmp141 = *(&local1);
panda$core$Object* $tmp142 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp140, ((panda$collections$Key*) $tmp141));
panda$core$Object* $tmp143;
if (($tmp142 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp142)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).nonnull) {
    panda$core$Int64$wrapper* $tmp144;
    $tmp144 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp144->value = ((panda$core$Int64) ($tmp142 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp142)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value);
    $tmp143 = ((panda$core$Object*) $tmp144);
}
else {
    $tmp143 = NULL;
}
panda$core$String* $tmp145 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp137, $tmp143);
panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp145, &$s147);
panda$io$Console$printLine$panda$core$String($tmp146);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
// unreffing REF($124:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
// unreffing REF($123:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp143);
// unreffing REF($122:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q($tmp142);
// unreffing REF($120:panda.collections.HashMap.V?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
// unreffing REF($114:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing REF($113:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp133);
// unreffing REF($103:panda.collections.Iterator.T)
panda$core$String* $tmp148 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
// unreffing k
*(&local1) = ((panda$core$String*) NULL);
goto block6;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
// unreffing REF($92:panda.collections.Iterator<panda.collections.HashMap.K>)
return;

}
void panda$core$Panda$countTrace$panda$core$String(panda$core$Panda* param0, panda$core$String* param1) {

panda$core$Int64$nullable local0;
// line 84
panda$collections$HashMap** $tmp149 = &param0->traces;
panda$collections$HashMap* $tmp150 = *$tmp149;
panda$core$Object* $tmp151 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp150, ((panda$collections$Key*) param1));
*(&local0) = ($tmp151 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp151)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
panda$core$Panda$unref$panda$core$Object$Q($tmp151);
// unreffing REF($5:panda.collections.HashMap.V?)
// line 85
panda$core$Int64$nullable $tmp152 = *(&local0);
panda$core$Bit $tmp153 = panda$core$Bit$init$builtin_bit(!$tmp152.nonnull);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block1; else goto block2;
block1:;
// line 86
panda$core$Int64 $tmp155 = (panda$core$Int64) {0};
*(&local0) = ((panda$core$Int64$nullable) { $tmp155, true });
goto block2;
block2:;
// line 88
panda$collections$HashMap** $tmp156 = &param0->traces;
panda$collections$HashMap* $tmp157 = *$tmp156;
panda$core$Int64$nullable $tmp158 = *(&local0);
panda$core$Int64 $tmp159 = (panda$core$Int64) {1};
int64_t $tmp160 = ((panda$core$Int64) $tmp158.value).value;
int64_t $tmp161 = $tmp159.value;
int64_t $tmp162 = $tmp160 + $tmp161;
panda$core$Int64 $tmp163 = (panda$core$Int64) {$tmp162};
panda$core$Int64$wrapper* $tmp164;
$tmp164 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp164->value = $tmp163;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp157, ((panda$collections$Key*) param1), ((panda$core$Object*) $tmp164));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
// unreffing REF($34:panda.collections.HashMap.V)
return;

}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(panda$core$String* param0, panda$core$Int64 param1) {

// line 105
panda$io$OutputStream* $tmp165 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s167, param0);
panda$core$String* $tmp168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp166, &$s169);
panda$core$Int64$wrapper* $tmp170;
$tmp170 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp170->value = param1;
panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp168, ((panda$core$Object*) $tmp170));
panda$core$String* $tmp172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp171, &$s173);
$fn175 $tmp174 = ($fn175) $tmp165->$class->vtable[19];
$tmp174($tmp165, $tmp172);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp170));
// unreffing REF($4:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
// unreffing REF($1:panda.io.OutputStream)
// line 106
panda$core$System$crash();
return;

}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(panda$core$String* param0, panda$core$Int64 param1, panda$core$String* param2) {

// line 111
panda$io$OutputStream* $tmp176 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s178, param0);
panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp177, &$s180);
panda$core$Int64$wrapper* $tmp181;
$tmp181 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp181->value = param1;
panda$core$String* $tmp182 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp179, ((panda$core$Object*) $tmp181));
panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp182, &$s184);
panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp183, param2);
panda$core$String* $tmp186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp185, &$s187);
$fn189 $tmp188 = ($fn189) $tmp176->$class->vtable[19];
$tmp188($tmp176, $tmp186);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
// unreffing REF($4:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
// unreffing REF($1:panda.io.OutputStream)
// line 112
panda$core$System$crash();
return;

}
panda$core$UInt64$nullable panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q(panda$core$Char32 param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
// line 117
panda$core$Int32 $tmp190 = (panda$core$Int32) {48};
panda$core$Char32 $tmp191 = panda$core$Char32$init$panda$core$Int32($tmp190);
panda$core$Bit $tmp192 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(param0, $tmp191);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block3; else goto block4;
block3:;
panda$core$Int32 $tmp194 = (panda$core$Int32) {57};
panda$core$Char32 $tmp195 = panda$core$Char32$init$panda$core$Int32($tmp194);
panda$core$Bit $tmp196 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(param0, $tmp195);
*(&local0) = $tmp196;
goto block5;
block4:;
*(&local0) = $tmp192;
goto block5;
block5:;
panda$core$Bit $tmp197 = *(&local0);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block1; else goto block2;
block1:;
// line 118
panda$core$UInt64 $tmp199 = panda$core$Char32$convert$R$panda$core$UInt64(param0);
panda$core$UInt8 $tmp200 = (panda$core$UInt8) {48};
panda$core$Char8 $tmp201 = panda$core$Char8$init$panda$core$UInt8($tmp200);
panda$core$UInt64 $tmp202 = panda$core$Char8$convert$R$panda$core$UInt64($tmp201);
uint64_t $tmp203 = $tmp199.value;
uint64_t $tmp204 = $tmp202.value;
uint64_t $tmp205 = $tmp203 - $tmp204;
panda$core$UInt64 $tmp206 = (panda$core$UInt64) {$tmp205};
return ((panda$core$UInt64$nullable) { $tmp206, true });
block2:;
// line 120
panda$core$Int32 $tmp207 = (panda$core$Int32) {65};
panda$core$Char32 $tmp208 = panda$core$Char32$init$panda$core$Int32($tmp207);
panda$core$Bit $tmp209 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(param0, $tmp208);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block8; else goto block9;
block8:;
panda$core$Int32 $tmp211 = (panda$core$Int32) {90};
panda$core$Char32 $tmp212 = panda$core$Char32$init$panda$core$Int32($tmp211);
panda$core$Bit $tmp213 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(param0, $tmp212);
*(&local1) = $tmp213;
goto block10;
block9:;
*(&local1) = $tmp209;
goto block10;
block10:;
panda$core$Bit $tmp214 = *(&local1);
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block6; else goto block7;
block6:;
// line 121
panda$core$UInt64 $tmp216 = panda$core$Char32$convert$R$panda$core$UInt64(param0);
panda$core$UInt8 $tmp217 = (panda$core$UInt8) {65};
panda$core$Char8 $tmp218 = panda$core$Char8$init$panda$core$UInt8($tmp217);
panda$core$UInt64 $tmp219 = panda$core$Char8$convert$R$panda$core$UInt64($tmp218);
uint64_t $tmp220 = $tmp216.value;
uint64_t $tmp221 = $tmp219.value;
uint64_t $tmp222 = $tmp220 - $tmp221;
panda$core$UInt64 $tmp223 = (panda$core$UInt64) {$tmp222};
panda$core$UInt64 $tmp224 = (panda$core$UInt64) {10};
uint64_t $tmp225 = $tmp223.value;
uint64_t $tmp226 = $tmp224.value;
uint64_t $tmp227 = $tmp225 + $tmp226;
panda$core$UInt64 $tmp228 = (panda$core$UInt64) {$tmp227};
return ((panda$core$UInt64$nullable) { $tmp228, true });
block7:;
// line 123
panda$core$Int32 $tmp229 = (panda$core$Int32) {97};
panda$core$Char32 $tmp230 = panda$core$Char32$init$panda$core$Int32($tmp229);
panda$core$Bit $tmp231 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(param0, $tmp230);
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block13; else goto block14;
block13:;
panda$core$Int32 $tmp233 = (panda$core$Int32) {122};
panda$core$Char32 $tmp234 = panda$core$Char32$init$panda$core$Int32($tmp233);
panda$core$Bit $tmp235 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(param0, $tmp234);
*(&local2) = $tmp235;
goto block15;
block14:;
*(&local2) = $tmp231;
goto block15;
block15:;
panda$core$Bit $tmp236 = *(&local2);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block11; else goto block12;
block11:;
// line 124
panda$core$UInt64 $tmp238 = panda$core$Char32$convert$R$panda$core$UInt64(param0);
panda$core$UInt8 $tmp239 = (panda$core$UInt8) {97};
panda$core$Char8 $tmp240 = panda$core$Char8$init$panda$core$UInt8($tmp239);
panda$core$UInt64 $tmp241 = panda$core$Char8$convert$R$panda$core$UInt64($tmp240);
uint64_t $tmp242 = $tmp238.value;
uint64_t $tmp243 = $tmp241.value;
uint64_t $tmp244 = $tmp242 - $tmp243;
panda$core$UInt64 $tmp245 = (panda$core$UInt64) {$tmp244};
panda$core$UInt64 $tmp246 = (panda$core$UInt64) {10};
uint64_t $tmp247 = $tmp245.value;
uint64_t $tmp248 = $tmp246.value;
uint64_t $tmp249 = $tmp247 + $tmp248;
panda$core$UInt64 $tmp250 = (panda$core$UInt64) {$tmp249};
return ((panda$core$UInt64$nullable) { $tmp250, true });
block12:;
// line 126
return ((panda$core$UInt64$nullable) { .nonnull = false });

}
panda$core$UInt64$nullable panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* param0, panda$core$Int64 param1) {

panda$core$UInt64 local0;
panda$core$UInt64 local1;
panda$core$String$Index local2;
panda$core$UInt64$nullable local3;
panda$core$Bit local4;
// line 134
panda$core$Bit $tmp251 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param0, &$s252);
bool $tmp253 = $tmp251.value;
if ($tmp253) goto block1; else goto block2;
block1:;
// line 135
return ((panda$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 137
panda$core$UInt64 $tmp254 = (panda$core$UInt64) {0};
*(&local0) = $tmp254;
// line 138
panda$core$UInt64 $tmp255 = panda$core$Int64$convert$R$panda$core$UInt64(param1);
*(&local1) = $tmp255;
// line 139
panda$core$String$Index $tmp256 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local2) = $tmp256;
// line 140
goto block3;
block3:;
panda$core$String$Index $tmp257 = *(&local2);
panda$core$String$Index$wrapper* $tmp258;
$tmp258 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp258->value = $tmp257;
panda$core$String$Index $tmp259 = panda$core$String$get_end$R$panda$core$String$Index(param0);
panda$core$String$Index$wrapper* $tmp260;
$tmp260 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp260->value = $tmp259;
ITable* $tmp261 = ((panda$core$Equatable*) $tmp258)->$class->itable;
while ($tmp261->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp261 = $tmp261->next;
}
$fn263 $tmp262 = $tmp261->methods[1];
panda$core$Bit $tmp264 = $tmp262(((panda$core$Equatable*) $tmp258), ((panda$core$Equatable*) $tmp260));
bool $tmp265 = $tmp264.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp260)));
// unreffing REF($21:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp258)));
// unreffing REF($18:panda.core.Equatable<panda.core.String.Index>)
if ($tmp265) goto block4; else goto block5;
block4:;
// line 141
panda$core$String$Index $tmp266 = *(&local2);
panda$core$Char32 $tmp267 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param0, $tmp266);
panda$core$UInt64$nullable $tmp268 = panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q($tmp267);
*(&local3) = $tmp268;
// line 142
panda$core$UInt64$nullable $tmp269 = *(&local3);
panda$core$Bit $tmp270 = panda$core$Bit$init$builtin_bit(!$tmp269.nonnull);
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block8; else goto block9;
block8:;
*(&local4) = $tmp270;
goto block10;
block9:;
panda$core$UInt64$nullable $tmp272 = *(&local3);
panda$core$UInt64 $tmp273 = *(&local1);
uint64_t $tmp274 = ((panda$core$UInt64) $tmp272.value).value;
uint64_t $tmp275 = $tmp273.value;
bool $tmp276 = $tmp274 >= $tmp275;
panda$core$Bit $tmp277 = (panda$core$Bit) {$tmp276};
*(&local4) = $tmp277;
goto block10;
block10:;
panda$core$Bit $tmp278 = *(&local4);
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block6; else goto block7;
block6:;
// line 143
return ((panda$core$UInt64$nullable) { .nonnull = false });
block7:;
// line 145
panda$core$UInt64 $tmp280 = *(&local0);
panda$core$UInt64 $tmp281 = *(&local1);
uint64_t $tmp282 = $tmp280.value;
uint64_t $tmp283 = $tmp281.value;
uint64_t $tmp284 = $tmp282 * $tmp283;
panda$core$UInt64 $tmp285 = (panda$core$UInt64) {$tmp284};
panda$core$UInt64$nullable $tmp286 = *(&local3);
uint64_t $tmp287 = $tmp285.value;
uint64_t $tmp288 = ((panda$core$UInt64) $tmp286.value).value;
uint64_t $tmp289 = $tmp287 + $tmp288;
panda$core$UInt64 $tmp290 = (panda$core$UInt64) {$tmp289};
*(&local0) = $tmp290;
// line 146
panda$core$String$Index $tmp291 = *(&local2);
panda$core$String$Index $tmp292 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp291);
*(&local2) = $tmp292;
goto block3;
block5:;
// line 148
panda$core$UInt64 $tmp293 = *(&local0);
return ((panda$core$UInt64$nullable) { $tmp293, true });

}
panda$core$String* panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$String* param1) {

panda$core$String$Index local0;
panda$core$Int64 local1;
panda$core$Char32 local2;
// line 174
panda$core$Int64 $tmp294 = panda$core$String$get_length$R$panda$core$Int64(param1);
panda$core$Int64 $tmp295 = (panda$core$Int64) {2};
int64_t $tmp296 = $tmp294.value;
int64_t $tmp297 = $tmp295.value;
bool $tmp298 = $tmp296 >= $tmp297;
panda$core$Bit $tmp299 = (panda$core$Bit) {$tmp298};
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp301 = (panda$core$Int64) {174};
panda$core$String* $tmp302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s303, param1);
panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp302, &$s305);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s306, $tmp301, $tmp304);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
// unreffing REF($11:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
// unreffing REF($10:panda.core.String)
abort(); // unreachable
block1:;
// line 175
panda$core$String$Index $tmp307 = panda$core$String$get_start$R$panda$core$String$Index(param1);
panda$core$String$Index $tmp308 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param1, $tmp307);
*(&local0) = $tmp308;
// line 176
panda$core$String$Index $tmp309 = *(&local0);
panda$core$Char32 $tmp310 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param1, $tmp309);
panda$core$Int32 $tmp311 = (panda$core$Int32) {60};
panda$core$Char32 $tmp312 = panda$core$Char32$init$panda$core$Int32($tmp311);
panda$core$Bit $tmp313 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp310, $tmp312);
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block4; else goto block5;
block5:;
panda$core$Int32 $tmp315 = (panda$core$Int32) {94};
panda$core$Char32 $tmp316 = panda$core$Char32$init$panda$core$Int32($tmp315);
panda$core$Bit $tmp317 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp310, $tmp316);
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block4; else goto block6;
block6:;
panda$core$Int32 $tmp319 = (panda$core$Int32) {62};
panda$core$Char32 $tmp320 = panda$core$Char32$init$panda$core$Int32($tmp319);
panda$core$Bit $tmp321 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp310, $tmp320);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block4; else goto block7;
block4:;
goto block3;
block7:;
// line 181
panda$core$String$Index $tmp323 = panda$core$String$get_start$R$panda$core$String$Index(param1);
*(&local0) = $tmp323;
goto block3;
block3:;
// line 184
panda$core$String$Index $tmp324 = *(&local0);
panda$core$String$Index $tmp325 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param1, $tmp324);
panda$core$Bit $tmp326 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp327 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp325, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp326);
panda$core$String* $tmp328 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param1, $tmp327);
panda$core$Int64$nullable $tmp329 = panda$core$String$convert$R$panda$core$Int64$Q($tmp328);
*(&local1) = ((panda$core$Int64) $tmp329.value);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
// unreffing REF($53:panda.core.String)
// line 185
// line 186
panda$core$String$Index $tmp330 = *(&local0);
panda$core$String$Index $tmp331 = panda$core$String$get_start$R$panda$core$String$Index(param1);
panda$core$Bit $tmp332 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit($tmp330, $tmp331);
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block8; else goto block10;
block8:;
// line 187
panda$core$Int32 $tmp334 = (panda$core$Int32) {32};
panda$core$Char32 $tmp335 = panda$core$Char32$init$panda$core$Int32($tmp334);
*(&local2) = $tmp335;
goto block9;
block10:;
// line 1
// line 190
panda$core$String$Index $tmp336 = panda$core$String$get_start$R$panda$core$String$Index(param1);
panda$core$Char32 $tmp337 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param1, $tmp336);
*(&local2) = $tmp337;
goto block9;
block9:;
// line 192
panda$core$String$Index $tmp338 = *(&local0);
panda$core$Char32 $tmp339 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param1, $tmp338);
panda$core$Int32 $tmp340 = (panda$core$Int32) {60};
panda$core$Char32 $tmp341 = panda$core$Char32$init$panda$core$Int32($tmp340);
panda$core$Bit $tmp342 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp339, $tmp341);
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block12; else goto block13;
block12:;
// line 193
panda$core$Int64 $tmp344 = *(&local1);
panda$core$Char32 $tmp345 = *(&local2);
panda$core$String* $tmp346 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, $tmp344, $tmp345);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
// unreffing REF($89:panda.core.String)
return $tmp346;
block13:;
panda$core$Int32 $tmp347 = (panda$core$Int32) {94};
panda$core$Char32 $tmp348 = panda$core$Char32$init$panda$core$Int32($tmp347);
panda$core$Bit $tmp349 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp339, $tmp348);
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block14; else goto block15;
block14:;
// line 194
panda$core$Int64 $tmp351 = *(&local1);
panda$core$Char32 $tmp352 = *(&local2);
panda$core$String* $tmp353 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, $tmp351, $tmp352);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
// unreffing REF($104:panda.core.String)
return $tmp353;
block15:;
panda$core$Int32 $tmp354 = (panda$core$Int32) {62};
panda$core$Char32 $tmp355 = panda$core$Char32$init$panda$core$Int32($tmp354);
panda$core$Bit $tmp356 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp339, $tmp355);
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block16; else goto block17;
block16:;
// line 195
panda$core$Int64 $tmp358 = *(&local1);
panda$core$Char32 $tmp359 = *(&local2);
panda$core$String* $tmp360 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, $tmp358, $tmp359);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
// unreffing REF($119:panda.core.String)
return $tmp360;
block17:;
// line 196
panda$core$Bit $tmp361 = panda$core$Bit$init$builtin_bit(false);
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp363 = (panda$core$Int64) {196};
panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s365, param1);
panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp364, &$s367);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s368, $tmp363, $tmp366);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
// unreffing REF($132:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
// unreffing REF($131:panda.core.String)
abort(); // unreachable
block18:;
goto block11;
block11:;
panda$core$Bit $tmp369 = panda$core$Bit$init$builtin_bit(false);
bool $tmp370 = $tmp369.value;
if ($tmp370) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp371 = (panda$core$Int64) {173};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s372, $tmp371, &$s373);
abort(); // unreachable
block20:;
abort(); // unreachable

}
panda$core$String* panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(panda$core$Bit param0, panda$core$UInt64 param1, panda$core$UInt64 param2, panda$core$String* param3) {

panda$core$String$Index local0;
panda$core$UInt64 local1;
panda$collections$ListView* local2 = NULL;
panda$core$UInt64 local3;
panda$core$Bit local4;
panda$core$Int64 local5;
panda$core$Char8* local6;
panda$core$Int64 local7;
panda$core$Bit local8;
panda$core$Int64 local9;
panda$core$Int64 local10;
// line 210
panda$core$String$Index $tmp374 = panda$core$String$get_start$R$panda$core$String$Index(param3);
*(&local0) = $tmp374;
// line 211
panda$core$UInt64 $tmp375 = (panda$core$UInt64) {10};
*(&local1) = $tmp375;
// line 212
panda$collections$ListView* $tmp376 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s377);
*(&local2) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
panda$collections$ListView* $tmp378 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
*(&local2) = $tmp376;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
// unreffing REF($7:panda.collections.ListView<panda.core.Char8>)
// line 213
panda$core$String$Index $tmp379 = *(&local0);
panda$core$String$Index$wrapper* $tmp380;
$tmp380 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp380->value = $tmp379;
panda$core$String$Index $tmp381 = panda$core$String$get_end$R$panda$core$String$Index(param3);
panda$core$String$Index$wrapper* $tmp382;
$tmp382 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp382->value = $tmp381;
ITable* $tmp383 = ((panda$core$Comparable*) $tmp380)->$class->itable;
while ($tmp383->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp383 = $tmp383->next;
}
$fn385 $tmp384 = $tmp383->methods[1];
panda$core$Bit $tmp386 = $tmp384(((panda$core$Comparable*) $tmp380), ((panda$core$Comparable*) $tmp382));
bool $tmp387 = $tmp386.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp382)));
// unreffing REF($23:panda.core.Comparable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp380)));
// unreffing REF($20:panda.core.Comparable<panda.core.String.Index>)
if ($tmp387) goto block1; else goto block2;
block1:;
// line 214
panda$core$String$Index $tmp388 = *(&local0);
panda$core$Char32 $tmp389 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param3, $tmp388);
panda$core$Int32 $tmp390 = (panda$core$Int32) {98};
panda$core$Char32 $tmp391 = panda$core$Char32$init$panda$core$Int32($tmp390);
panda$core$Bit $tmp392 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp389, $tmp391);
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block4; else goto block5;
block5:;
panda$core$Int32 $tmp394 = (panda$core$Int32) {66};
panda$core$Char32 $tmp395 = panda$core$Char32$init$panda$core$Int32($tmp394);
panda$core$Bit $tmp396 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp389, $tmp395);
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block4; else goto block6;
block4:;
// line 216
panda$core$UInt64 $tmp398 = (panda$core$UInt64) {2};
*(&local1) = $tmp398;
goto block3;
block6:;
panda$core$Int32 $tmp399 = (panda$core$Int32) {111};
panda$core$Char32 $tmp400 = panda$core$Char32$init$panda$core$Int32($tmp399);
panda$core$Bit $tmp401 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp389, $tmp400);
bool $tmp402 = $tmp401.value;
if ($tmp402) goto block7; else goto block8;
block8:;
panda$core$Int32 $tmp403 = (panda$core$Int32) {79};
panda$core$Char32 $tmp404 = panda$core$Char32$init$panda$core$Int32($tmp403);
panda$core$Bit $tmp405 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp389, $tmp404);
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block7; else goto block9;
block7:;
// line 219
panda$core$UInt64 $tmp407 = (panda$core$UInt64) {8};
*(&local1) = $tmp407;
goto block3;
block9:;
panda$core$Int32 $tmp408 = (panda$core$Int32) {100};
panda$core$Char32 $tmp409 = panda$core$Char32$init$panda$core$Int32($tmp408);
panda$core$Bit $tmp410 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp389, $tmp409);
bool $tmp411 = $tmp410.value;
if ($tmp411) goto block10; else goto block11;
block11:;
panda$core$Int32 $tmp412 = (panda$core$Int32) {68};
panda$core$Char32 $tmp413 = panda$core$Char32$init$panda$core$Int32($tmp412);
panda$core$Bit $tmp414 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp389, $tmp413);
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block10; else goto block12;
block10:;
// line 222
panda$core$UInt64 $tmp416 = (panda$core$UInt64) {10};
*(&local1) = $tmp416;
goto block3;
block12:;
panda$core$Int32 $tmp417 = (panda$core$Int32) {120};
panda$core$Char32 $tmp418 = panda$core$Char32$init$panda$core$Int32($tmp417);
panda$core$Bit $tmp419 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp389, $tmp418);
bool $tmp420 = $tmp419.value;
if ($tmp420) goto block13; else goto block14;
block13:;
// line 225
panda$core$UInt64 $tmp421 = (panda$core$UInt64) {16};
*(&local1) = $tmp421;
goto block3;
block14:;
panda$core$Int32 $tmp422 = (panda$core$Int32) {88};
panda$core$Char32 $tmp423 = panda$core$Char32$init$panda$core$Int32($tmp422);
panda$core$Bit $tmp424 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp389, $tmp423);
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block15; else goto block16;
block15:;
// line 228
panda$core$UInt64 $tmp426 = (panda$core$UInt64) {16};
*(&local1) = $tmp426;
// line 229
panda$collections$ListView* $tmp427 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s428);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp427));
panda$collections$ListView* $tmp429 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp429));
*(&local2) = $tmp427;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp427));
// unreffing REF($97:panda.collections.ListView<panda.core.Char8>)
goto block3;
block16:;
// line 232
panda$core$Bit $tmp430 = panda$core$Bit$init$builtin_bit(false);
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp432 = (panda$core$Int64) {232};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s433, $tmp432, &$s434);
abort(); // unreachable
block17:;
goto block3;
block3:;
goto block2;
block2:;
// line 236
// line 237
bool $tmp435 = param0.value;
if ($tmp435) goto block21; else goto block22;
block21:;
panda$core$UInt64 $tmp436 = *(&local1);
panda$core$UInt64 $tmp437 = (panda$core$UInt64) {10};
uint64_t $tmp438 = $tmp436.value;
uint64_t $tmp439 = $tmp437.value;
bool $tmp440 = $tmp438 != $tmp439;
panda$core$Bit $tmp441 = (panda$core$Bit) {$tmp440};
*(&local4) = $tmp441;
goto block23;
block22:;
*(&local4) = param0;
goto block23;
block23:;
panda$core$Bit $tmp442 = *(&local4);
bool $tmp443 = $tmp442.value;
if ($tmp443) goto block19; else goto block24;
block19:;
// line 238
panda$core$Int64 $tmp444 = panda$core$UInt64$convert$R$panda$core$Int64(param1);
panda$core$Int64 $tmp445 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp444);
panda$core$UInt64 $tmp446 = panda$core$Int64$convert$R$panda$core$UInt64($tmp445);
panda$core$UInt64 $tmp447 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64($tmp446, param2);
*(&local3) = $tmp447;
goto block20;
block24:;
// line 1
// line 241
*(&local3) = param1;
goto block20;
block20:;
// line 243
panda$core$Int64 $tmp448 = (panda$core$Int64) {64};
*(&local5) = $tmp448;
// line 244
panda$core$Int64 $tmp449 = *(&local5);
int64_t $tmp450 = $tmp449.value;
panda$core$Char8* $tmp451 = ((panda$core$Char8*) pandaZAlloc($tmp450 * 1));
*(&local6) = $tmp451;
// line 245
panda$core$Int64 $tmp452 = *(&local5);
panda$core$Int64 $tmp453 = (panda$core$Int64) {1};
int64_t $tmp454 = $tmp452.value;
int64_t $tmp455 = $tmp453.value;
int64_t $tmp456 = $tmp454 - $tmp455;
panda$core$Int64 $tmp457 = (panda$core$Int64) {$tmp456};
*(&local7) = $tmp457;
// line 246
goto block25;
block25:;
// line 247
panda$core$Char8* $tmp458 = *(&local6);
panda$core$Int64 $tmp459 = *(&local7);
panda$collections$ListView* $tmp460 = *(&local2);
panda$core$UInt64 $tmp461 = *(&local3);
panda$core$UInt64 $tmp462 = *(&local1);
panda$core$UInt64 $tmp463 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64($tmp461, $tmp462);
panda$core$Int64 $tmp464 = panda$core$UInt64$convert$R$panda$core$Int64($tmp463);
ITable* $tmp465 = $tmp460->$class->itable;
while ($tmp465->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp465 = $tmp465->next;
}
$fn467 $tmp466 = $tmp465->methods[0];
panda$core$Object* $tmp468 = $tmp466($tmp460, $tmp464);
int64_t $tmp469 = $tmp459.value;
$tmp458[$tmp469] = ((panda$core$Char8$wrapper*) $tmp468)->value;
panda$core$Panda$unref$panda$core$Object$Q($tmp468);
// unreffing REF($173:panda.collections.ListView.T)
// line 248
panda$core$UInt64 $tmp470 = *(&local3);
panda$core$UInt64 $tmp471 = *(&local1);
uint64_t $tmp472 = $tmp470.value;
uint64_t $tmp473 = $tmp471.value;
uint64_t $tmp474 = $tmp472 / $tmp473;
panda$core$UInt64 $tmp475 = (panda$core$UInt64) {$tmp474};
*(&local3) = $tmp475;
// line 249
panda$core$Int64 $tmp476 = *(&local7);
panda$core$Int64 $tmp477 = (panda$core$Int64) {1};
int64_t $tmp478 = $tmp476.value;
int64_t $tmp479 = $tmp477.value;
int64_t $tmp480 = $tmp478 - $tmp479;
panda$core$Int64 $tmp481 = (panda$core$Int64) {$tmp480};
*(&local7) = $tmp481;
goto block26;
block26:;
panda$core$UInt64 $tmp482 = *(&local3);
panda$core$UInt64 $tmp483 = (panda$core$UInt64) {0};
uint64_t $tmp484 = $tmp482.value;
uint64_t $tmp485 = $tmp483.value;
bool $tmp486 = $tmp484 > $tmp485;
panda$core$Bit $tmp487 = (panda$core$Bit) {$tmp486};
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block25; else goto block27;
block27:;
// line 252
bool $tmp489 = param0.value;
if ($tmp489) goto block30; else goto block31;
block30:;
panda$core$UInt64 $tmp490 = *(&local1);
panda$core$UInt64 $tmp491 = (panda$core$UInt64) {10};
panda$core$Bit $tmp492 = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit($tmp490, $tmp491);
*(&local8) = $tmp492;
goto block32;
block31:;
*(&local8) = param0;
goto block32;
block32:;
panda$core$Bit $tmp493 = *(&local8);
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block28; else goto block29;
block28:;
// line 253
panda$core$Char8* $tmp495 = *(&local6);
panda$core$Int64 $tmp496 = *(&local7);
panda$core$UInt8 $tmp497 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp498 = panda$core$Char8$init$panda$core$UInt8($tmp497);
int64_t $tmp499 = $tmp496.value;
$tmp495[$tmp499] = $tmp498;
// line 254
panda$core$Int64 $tmp500 = *(&local7);
panda$core$Int64 $tmp501 = (panda$core$Int64) {1};
int64_t $tmp502 = $tmp500.value;
int64_t $tmp503 = $tmp501.value;
int64_t $tmp504 = $tmp502 - $tmp503;
panda$core$Int64 $tmp505 = (panda$core$Int64) {$tmp504};
*(&local7) = $tmp505;
goto block29;
block29:;
// line 256
panda$core$Int64 $tmp506 = *(&local7);
panda$core$Int64 $tmp507 = (panda$core$Int64) {1};
int64_t $tmp508 = $tmp506.value;
int64_t $tmp509 = $tmp507.value;
int64_t $tmp510 = $tmp508 + $tmp509;
panda$core$Int64 $tmp511 = (panda$core$Int64) {$tmp510};
*(&local7) = $tmp511;
// line 257
panda$core$Int64 $tmp512 = *(&local5);
panda$core$Int64 $tmp513 = *(&local7);
int64_t $tmp514 = $tmp512.value;
int64_t $tmp515 = $tmp513.value;
int64_t $tmp516 = $tmp514 - $tmp515;
panda$core$Int64 $tmp517 = (panda$core$Int64) {$tmp516};
*(&local9) = $tmp517;
// line 258
panda$core$Int64 $tmp518 = (panda$core$Int64) {0};
panda$core$Int64 $tmp519 = *(&local9);
panda$core$Bit $tmp520 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp521 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp518, $tmp519, $tmp520);
panda$core$Int64 $tmp522 = $tmp521.min;
*(&local10) = $tmp522;
panda$core$Int64 $tmp523 = $tmp521.max;
panda$core$Bit $tmp524 = $tmp521.inclusive;
bool $tmp525 = $tmp524.value;
panda$core$Int64 $tmp526 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp527 = panda$core$Int64$convert$R$panda$core$UInt64($tmp526);
if ($tmp525) goto block36; else goto block37;
block36:;
int64_t $tmp528 = $tmp522.value;
int64_t $tmp529 = $tmp523.value;
bool $tmp530 = $tmp528 <= $tmp529;
panda$core$Bit $tmp531 = (panda$core$Bit) {$tmp530};
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block33; else goto block34;
block37:;
int64_t $tmp533 = $tmp522.value;
int64_t $tmp534 = $tmp523.value;
bool $tmp535 = $tmp533 < $tmp534;
panda$core$Bit $tmp536 = (panda$core$Bit) {$tmp535};
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block33; else goto block34;
block33:;
// line 259
panda$core$Char8* $tmp538 = *(&local6);
panda$core$Int64 $tmp539 = *(&local10);
panda$core$Char8* $tmp540 = *(&local6);
panda$core$Int64 $tmp541 = *(&local10);
panda$core$Int64 $tmp542 = *(&local7);
int64_t $tmp543 = $tmp541.value;
int64_t $tmp544 = $tmp542.value;
int64_t $tmp545 = $tmp543 + $tmp544;
panda$core$Int64 $tmp546 = (panda$core$Int64) {$tmp545};
int64_t $tmp547 = $tmp546.value;
panda$core$Char8 $tmp548 = $tmp540[$tmp547];
int64_t $tmp549 = $tmp539.value;
$tmp538[$tmp549] = $tmp548;
goto block35;
block35:;
panda$core$Int64 $tmp550 = *(&local10);
int64_t $tmp551 = $tmp523.value;
int64_t $tmp552 = $tmp550.value;
int64_t $tmp553 = $tmp551 - $tmp552;
panda$core$Int64 $tmp554 = (panda$core$Int64) {$tmp553};
panda$core$UInt64 $tmp555 = panda$core$Int64$convert$R$panda$core$UInt64($tmp554);
if ($tmp525) goto block39; else goto block40;
block39:;
uint64_t $tmp556 = $tmp555.value;
uint64_t $tmp557 = $tmp527.value;
bool $tmp558 = $tmp556 >= $tmp557;
panda$core$Bit $tmp559 = (panda$core$Bit) {$tmp558};
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block38; else goto block34;
block40:;
uint64_t $tmp561 = $tmp555.value;
uint64_t $tmp562 = $tmp527.value;
bool $tmp563 = $tmp561 > $tmp562;
panda$core$Bit $tmp564 = (panda$core$Bit) {$tmp563};
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block38; else goto block34;
block38:;
int64_t $tmp566 = $tmp550.value;
int64_t $tmp567 = $tmp526.value;
int64_t $tmp568 = $tmp566 + $tmp567;
panda$core$Int64 $tmp569 = (panda$core$Int64) {$tmp568};
*(&local10) = $tmp569;
goto block33;
block34:;
// line 261
panda$core$String* $tmp570 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp571 = *(&local6);
panda$core$Int64 $tmp572 = *(&local9);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp570, $tmp571, $tmp572);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp570));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp570));
// unreffing REF($316:panda.core.String)
panda$collections$ListView* $tmp573 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
// unreffing digits
*(&local2) = ((panda$collections$ListView*) NULL);
return $tmp570;

}
void panda$core$Panda$cleanup(panda$core$Panda* param0) {

// line 10
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$HashMap** $tmp574 = &param0->allocations;
panda$collections$HashMap* $tmp575 = *$tmp574;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp575));
panda$collections$HashMap** $tmp576 = &param0->traces;
panda$collections$HashMap* $tmp577 = *$tmp576;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
return;

}

