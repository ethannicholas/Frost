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
#include "panda/collections/MapView.h"
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
#include "panda/collections/List.h"
#include "panda/collections/ListWriter.h"
#include "panda/core/MutableMethod.h"


static panda$core$String $s1;
panda$core$Panda$class_type panda$core$Panda$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Panda$cleanup, panda$core$Panda$countAllocation$panda$core$Class, panda$core$Panda$countDeallocation$panda$core$Class, panda$core$Panda$dumpReport, panda$core$Panda$countTrace$panda$core$String} };

typedef panda$collections$Iterator* (*$fn89)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn93)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn98)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn129)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn133)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn138)(panda$collections$Iterator*);
typedef void (*$fn181)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn195)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn269)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn391)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Object* (*$fn473)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn582)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn587)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn591)(panda$collections$ListWriter*, panda$core$Int64, panda$core$Object*);
typedef void (*$fn595)(panda$collections$ListWriter*, panda$core$Int64, panda$core$Object*);
typedef panda$core$Object* (*$fn618)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn648)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn656)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn658)(panda$core$Object*, panda$core$Object*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2f\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 31, 1503042479218620573, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2f\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 31, 1503042479218620573, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2f\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 38, 4390673133021255337, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2f\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 38, 4390673133021255337, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61\x2e\x61\x6c\x69\x67\x6e\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x73\x70\x65\x63\x69\x66\x69\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 126, -635296898711655152, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 8772831143845743696, NULL };

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
ITable* $tmp87 = ((panda$collections$MapView*) $tmp86)->$class->itable;
while ($tmp87->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp87 = $tmp87->next;
}
$fn89 $tmp88 = $tmp87->methods[3];
panda$collections$Iterator* $tmp90 = $tmp88(((panda$collections$MapView*) $tmp86));
goto block1;
block1:;
ITable* $tmp91 = $tmp90->$class->itable;
while ($tmp91->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[0];
panda$core$Bit $tmp94 = $tmp92($tmp90);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block3; else goto block2;
block2:;
*(&local0) = ((panda$core$String*) NULL);
ITable* $tmp96 = $tmp90->$class->itable;
while ($tmp96->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp96 = $tmp96->next;
}
$fn98 $tmp97 = $tmp96->methods[1];
panda$core$Object* $tmp99 = $tmp97($tmp90);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp99)));
panda$core$String* $tmp100 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
*(&local0) = ((panda$core$String*) $tmp99);
// line 62
panda$collections$HashMap** $tmp101 = &param0->allocations;
panda$collections$HashMap* $tmp102 = *$tmp101;
panda$core$String* $tmp103 = *(&local0);
panda$core$Object* $tmp104 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp102, ((panda$collections$Key*) $tmp103));
panda$core$Int64 $tmp105 = (panda$core$Int64) {0};
int64_t $tmp106 = ((panda$core$Int64) ($tmp104 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp104)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value).value;
int64_t $tmp107 = $tmp105.value;
bool $tmp108 = $tmp106 != $tmp107;
panda$core$Bit $tmp109 = (panda$core$Bit) {$tmp108};
bool $tmp110 = $tmp109.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp104);
// unreffing REF($30:panda.collections.HashMap.V?)
if ($tmp110) goto block4; else goto block5;
block4:;
// line 63
panda$core$String* $tmp111 = *(&local0);
panda$core$String* $tmp112 = panda$core$String$convert$R$panda$core$String($tmp111);
panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp112, &$s114);
panda$collections$HashMap** $tmp115 = &param0->allocations;
panda$collections$HashMap* $tmp116 = *$tmp115;
panda$core$String* $tmp117 = *(&local0);
panda$core$Object* $tmp118 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp116, ((panda$collections$Key*) $tmp117));
panda$core$Object* $tmp119;
if (($tmp118 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp118)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).nonnull) {
    panda$core$Int64$wrapper* $tmp120;
    $tmp120 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp120->value = ((panda$core$Int64) ($tmp118 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp118)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value);
    $tmp119 = ((panda$core$Object*) $tmp120);
}
else {
    $tmp119 = NULL;
}
panda$core$String* $tmp121 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp113, $tmp119);
panda$core$String* $tmp122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp121, &$s123);
panda$io$Console$printLine$panda$core$String($tmp122);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
// unreffing REF($56:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
// unreffing REF($55:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp119);
// unreffing REF($54:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q($tmp118);
// unreffing REF($52:panda.collections.HashMap.V?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
// unreffing REF($46:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing REF($45:panda.core.String)
goto block5;
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp99);
// unreffing REF($16:panda.collections.Iterator.T)
panda$core$String* $tmp124 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
// unreffing k
*(&local0) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing REF($5:panda.collections.Iterator<panda.collections.MapView.K>)
// line 66
panda$collections$HashMap** $tmp125 = &param0->traces;
panda$collections$HashMap* $tmp126 = *$tmp125;
ITable* $tmp127 = ((panda$collections$MapView*) $tmp126)->$class->itable;
while ($tmp127->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[3];
panda$collections$Iterator* $tmp130 = $tmp128(((panda$collections$MapView*) $tmp126));
goto block6;
block6:;
ITable* $tmp131 = $tmp130->$class->itable;
while ($tmp131->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp131 = $tmp131->next;
}
$fn133 $tmp132 = $tmp131->methods[0];
panda$core$Bit $tmp134 = $tmp132($tmp130);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block8; else goto block7;
block7:;
*(&local1) = ((panda$core$String*) NULL);
ITable* $tmp136 = $tmp130->$class->itable;
while ($tmp136->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp136 = $tmp136->next;
}
$fn138 $tmp137 = $tmp136->methods[1];
panda$core$Object* $tmp139 = $tmp137($tmp130);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp139)));
panda$core$String* $tmp140 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
*(&local1) = ((panda$core$String*) $tmp139);
// line 67
panda$core$String* $tmp141 = *(&local1);
panda$core$String* $tmp142 = panda$core$String$convert$R$panda$core$String($tmp141);
panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp142, &$s144);
panda$collections$HashMap** $tmp145 = &param0->traces;
panda$collections$HashMap* $tmp146 = *$tmp145;
panda$core$String* $tmp147 = *(&local1);
panda$core$Object* $tmp148 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp146, ((panda$collections$Key*) $tmp147));
panda$core$Object* $tmp149;
if (($tmp148 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp148)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).nonnull) {
    panda$core$Int64$wrapper* $tmp150;
    $tmp150 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp150->value = ((panda$core$Int64) ($tmp148 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp148)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value);
    $tmp149 = ((panda$core$Object*) $tmp150);
}
else {
    $tmp149 = NULL;
}
panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp143, $tmp149);
panda$core$String* $tmp152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp151, &$s153);
panda$io$Console$printLine$panda$core$String($tmp152);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
// unreffing REF($126:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
// unreffing REF($125:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp149);
// unreffing REF($124:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q($tmp148);
// unreffing REF($122:panda.collections.HashMap.V?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp143));
// unreffing REF($116:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
// unreffing REF($115:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp139);
// unreffing REF($105:panda.collections.Iterator.T)
panda$core$String* $tmp154 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp154));
// unreffing k
*(&local1) = ((panda$core$String*) NULL);
goto block6;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
// unreffing REF($94:panda.collections.Iterator<panda.collections.MapView.K>)
return;

}
void panda$core$Panda$countTrace$panda$core$String(panda$core$Panda* param0, panda$core$String* param1) {

panda$core$Int64$nullable local0;
// line 84
panda$collections$HashMap** $tmp155 = &param0->traces;
panda$collections$HashMap* $tmp156 = *$tmp155;
panda$core$Object* $tmp157 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp156, ((panda$collections$Key*) param1));
*(&local0) = ($tmp157 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp157)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
panda$core$Panda$unref$panda$core$Object$Q($tmp157);
// unreffing REF($5:panda.collections.HashMap.V?)
// line 85
panda$core$Int64$nullable $tmp158 = *(&local0);
panda$core$Bit $tmp159 = panda$core$Bit$init$builtin_bit(!$tmp158.nonnull);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block1; else goto block2;
block1:;
// line 86
panda$core$Int64 $tmp161 = (panda$core$Int64) {0};
*(&local0) = ((panda$core$Int64$nullable) { $tmp161, true });
goto block2;
block2:;
// line 88
panda$collections$HashMap** $tmp162 = &param0->traces;
panda$collections$HashMap* $tmp163 = *$tmp162;
panda$core$Int64$nullable $tmp164 = *(&local0);
panda$core$Int64 $tmp165 = (panda$core$Int64) {1};
int64_t $tmp166 = ((panda$core$Int64) $tmp164.value).value;
int64_t $tmp167 = $tmp165.value;
int64_t $tmp168 = $tmp166 + $tmp167;
panda$core$Int64 $tmp169 = (panda$core$Int64) {$tmp168};
panda$core$Int64$wrapper* $tmp170;
$tmp170 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp170->value = $tmp169;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp163, ((panda$collections$Key*) param1), ((panda$core$Object*) $tmp170));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp170));
// unreffing REF($34:panda.collections.HashMap.V)
return;

}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(panda$core$String* param0, panda$core$Int64 param1) {

// line 105
panda$io$OutputStream* $tmp171 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$String* $tmp172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s173, param0);
panda$core$String* $tmp174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp172, &$s175);
panda$core$Int64$wrapper* $tmp176;
$tmp176 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp176->value = param1;
panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp174, ((panda$core$Object*) $tmp176));
panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp177, &$s179);
$fn181 $tmp180 = ($fn181) $tmp171->$class->vtable[19];
$tmp180($tmp171, $tmp178);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
// unreffing REF($4:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
// unreffing REF($1:panda.io.OutputStream)
// line 106
panda$core$System$crash();
return;

}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(panda$core$String* param0, panda$core$Int64 param1, panda$core$String* param2) {

// line 111
panda$io$OutputStream* $tmp182 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s184, param0);
panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp183, &$s186);
panda$core$Int64$wrapper* $tmp187;
$tmp187 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp187->value = param1;
panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp185, ((panda$core$Object*) $tmp187));
panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp188, &$s190);
panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, param2);
panda$core$String* $tmp192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp191, &$s193);
$fn195 $tmp194 = ($fn195) $tmp182->$class->vtable[19];
$tmp194($tmp182, $tmp192);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
// unreffing REF($4:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
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
panda$core$Int32 $tmp196 = (panda$core$Int32) {48};
panda$core$Char32 $tmp197 = panda$core$Char32$init$panda$core$Int32($tmp196);
panda$core$Bit $tmp198 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(param0, $tmp197);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block3; else goto block4;
block3:;
panda$core$Int32 $tmp200 = (panda$core$Int32) {57};
panda$core$Char32 $tmp201 = panda$core$Char32$init$panda$core$Int32($tmp200);
panda$core$Bit $tmp202 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(param0, $tmp201);
*(&local0) = $tmp202;
goto block5;
block4:;
*(&local0) = $tmp198;
goto block5;
block5:;
panda$core$Bit $tmp203 = *(&local0);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block1; else goto block2;
block1:;
// line 118
panda$core$UInt64 $tmp205 = panda$core$Char32$convert$R$panda$core$UInt64(param0);
panda$core$UInt8 $tmp206 = (panda$core$UInt8) {48};
panda$core$Char8 $tmp207 = panda$core$Char8$init$panda$core$UInt8($tmp206);
panda$core$UInt64 $tmp208 = panda$core$Char8$convert$R$panda$core$UInt64($tmp207);
uint64_t $tmp209 = $tmp205.value;
uint64_t $tmp210 = $tmp208.value;
uint64_t $tmp211 = $tmp209 - $tmp210;
panda$core$UInt64 $tmp212 = (panda$core$UInt64) {$tmp211};
return ((panda$core$UInt64$nullable) { $tmp212, true });
block2:;
// line 120
panda$core$Int32 $tmp213 = (panda$core$Int32) {65};
panda$core$Char32 $tmp214 = panda$core$Char32$init$panda$core$Int32($tmp213);
panda$core$Bit $tmp215 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(param0, $tmp214);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block8; else goto block9;
block8:;
panda$core$Int32 $tmp217 = (panda$core$Int32) {90};
panda$core$Char32 $tmp218 = panda$core$Char32$init$panda$core$Int32($tmp217);
panda$core$Bit $tmp219 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(param0, $tmp218);
*(&local1) = $tmp219;
goto block10;
block9:;
*(&local1) = $tmp215;
goto block10;
block10:;
panda$core$Bit $tmp220 = *(&local1);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block6; else goto block7;
block6:;
// line 121
panda$core$UInt64 $tmp222 = panda$core$Char32$convert$R$panda$core$UInt64(param0);
panda$core$UInt8 $tmp223 = (panda$core$UInt8) {65};
panda$core$Char8 $tmp224 = panda$core$Char8$init$panda$core$UInt8($tmp223);
panda$core$UInt64 $tmp225 = panda$core$Char8$convert$R$panda$core$UInt64($tmp224);
uint64_t $tmp226 = $tmp222.value;
uint64_t $tmp227 = $tmp225.value;
uint64_t $tmp228 = $tmp226 - $tmp227;
panda$core$UInt64 $tmp229 = (panda$core$UInt64) {$tmp228};
panda$core$UInt64 $tmp230 = (panda$core$UInt64) {10};
uint64_t $tmp231 = $tmp229.value;
uint64_t $tmp232 = $tmp230.value;
uint64_t $tmp233 = $tmp231 + $tmp232;
panda$core$UInt64 $tmp234 = (panda$core$UInt64) {$tmp233};
return ((panda$core$UInt64$nullable) { $tmp234, true });
block7:;
// line 123
panda$core$Int32 $tmp235 = (panda$core$Int32) {97};
panda$core$Char32 $tmp236 = panda$core$Char32$init$panda$core$Int32($tmp235);
panda$core$Bit $tmp237 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(param0, $tmp236);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block13; else goto block14;
block13:;
panda$core$Int32 $tmp239 = (panda$core$Int32) {122};
panda$core$Char32 $tmp240 = panda$core$Char32$init$panda$core$Int32($tmp239);
panda$core$Bit $tmp241 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(param0, $tmp240);
*(&local2) = $tmp241;
goto block15;
block14:;
*(&local2) = $tmp237;
goto block15;
block15:;
panda$core$Bit $tmp242 = *(&local2);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block11; else goto block12;
block11:;
// line 124
panda$core$UInt64 $tmp244 = panda$core$Char32$convert$R$panda$core$UInt64(param0);
panda$core$UInt8 $tmp245 = (panda$core$UInt8) {97};
panda$core$Char8 $tmp246 = panda$core$Char8$init$panda$core$UInt8($tmp245);
panda$core$UInt64 $tmp247 = panda$core$Char8$convert$R$panda$core$UInt64($tmp246);
uint64_t $tmp248 = $tmp244.value;
uint64_t $tmp249 = $tmp247.value;
uint64_t $tmp250 = $tmp248 - $tmp249;
panda$core$UInt64 $tmp251 = (panda$core$UInt64) {$tmp250};
panda$core$UInt64 $tmp252 = (panda$core$UInt64) {10};
uint64_t $tmp253 = $tmp251.value;
uint64_t $tmp254 = $tmp252.value;
uint64_t $tmp255 = $tmp253 + $tmp254;
panda$core$UInt64 $tmp256 = (panda$core$UInt64) {$tmp255};
return ((panda$core$UInt64$nullable) { $tmp256, true });
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
panda$core$Bit $tmp257 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param0, &$s258);
bool $tmp259 = $tmp257.value;
if ($tmp259) goto block1; else goto block2;
block1:;
// line 135
return ((panda$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 137
panda$core$UInt64 $tmp260 = (panda$core$UInt64) {0};
*(&local0) = $tmp260;
// line 138
panda$core$UInt64 $tmp261 = panda$core$Int64$convert$R$panda$core$UInt64(param1);
*(&local1) = $tmp261;
// line 139
panda$core$String$Index $tmp262 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local2) = $tmp262;
// line 140
goto block3;
block3:;
panda$core$String$Index $tmp263 = *(&local2);
panda$core$String$Index$wrapper* $tmp264;
$tmp264 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp264->value = $tmp263;
panda$core$String$Index $tmp265 = panda$core$String$get_end$R$panda$core$String$Index(param0);
panda$core$String$Index$wrapper* $tmp266;
$tmp266 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp266->value = $tmp265;
ITable* $tmp267 = ((panda$core$Equatable*) $tmp264)->$class->itable;
while ($tmp267->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp267 = $tmp267->next;
}
$fn269 $tmp268 = $tmp267->methods[1];
panda$core$Bit $tmp270 = $tmp268(((panda$core$Equatable*) $tmp264), ((panda$core$Equatable*) $tmp266));
bool $tmp271 = $tmp270.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp266)));
// unreffing REF($21:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp264)));
// unreffing REF($18:panda.core.Equatable<panda.core.String.Index>)
if ($tmp271) goto block4; else goto block5;
block4:;
// line 141
panda$core$String$Index $tmp272 = *(&local2);
panda$core$Char32 $tmp273 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param0, $tmp272);
panda$core$UInt64$nullable $tmp274 = panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q($tmp273);
*(&local3) = $tmp274;
// line 142
panda$core$UInt64$nullable $tmp275 = *(&local3);
panda$core$Bit $tmp276 = panda$core$Bit$init$builtin_bit(!$tmp275.nonnull);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block8; else goto block9;
block8:;
*(&local4) = $tmp276;
goto block10;
block9:;
panda$core$UInt64$nullable $tmp278 = *(&local3);
panda$core$UInt64 $tmp279 = *(&local1);
uint64_t $tmp280 = ((panda$core$UInt64) $tmp278.value).value;
uint64_t $tmp281 = $tmp279.value;
bool $tmp282 = $tmp280 >= $tmp281;
panda$core$Bit $tmp283 = (panda$core$Bit) {$tmp282};
*(&local4) = $tmp283;
goto block10;
block10:;
panda$core$Bit $tmp284 = *(&local4);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block6; else goto block7;
block6:;
// line 143
return ((panda$core$UInt64$nullable) { .nonnull = false });
block7:;
// line 145
panda$core$UInt64 $tmp286 = *(&local0);
panda$core$UInt64 $tmp287 = *(&local1);
uint64_t $tmp288 = $tmp286.value;
uint64_t $tmp289 = $tmp287.value;
uint64_t $tmp290 = $tmp288 * $tmp289;
panda$core$UInt64 $tmp291 = (panda$core$UInt64) {$tmp290};
panda$core$UInt64$nullable $tmp292 = *(&local3);
uint64_t $tmp293 = $tmp291.value;
uint64_t $tmp294 = ((panda$core$UInt64) $tmp292.value).value;
uint64_t $tmp295 = $tmp293 + $tmp294;
panda$core$UInt64 $tmp296 = (panda$core$UInt64) {$tmp295};
*(&local0) = $tmp296;
// line 146
panda$core$String$Index $tmp297 = *(&local2);
panda$core$String$Index $tmp298 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp297);
*(&local2) = $tmp298;
goto block3;
block5:;
// line 148
panda$core$UInt64 $tmp299 = *(&local0);
return ((panda$core$UInt64$nullable) { $tmp299, true });

}
panda$core$String* panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$String* param1) {

panda$core$String$Index local0;
panda$core$Int64 local1;
panda$core$Char32 local2;
// line 174
panda$core$Int64 $tmp300 = panda$core$String$get_length$R$panda$core$Int64(param1);
panda$core$Int64 $tmp301 = (panda$core$Int64) {2};
int64_t $tmp302 = $tmp300.value;
int64_t $tmp303 = $tmp301.value;
bool $tmp304 = $tmp302 >= $tmp303;
panda$core$Bit $tmp305 = (panda$core$Bit) {$tmp304};
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp307 = (panda$core$Int64) {174};
panda$core$String* $tmp308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s309, param1);
panda$core$String* $tmp310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp308, &$s311);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s312, $tmp307, $tmp310);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp310));
// unreffing REF($11:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp308));
// unreffing REF($10:panda.core.String)
abort(); // unreachable
block1:;
// line 175
panda$core$String$Index $tmp313 = panda$core$String$get_start$R$panda$core$String$Index(param1);
panda$core$String$Index $tmp314 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param1, $tmp313);
*(&local0) = $tmp314;
// line 176
panda$core$String$Index $tmp315 = *(&local0);
panda$core$Char32 $tmp316 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param1, $tmp315);
panda$core$Int32 $tmp317 = (panda$core$Int32) {60};
panda$core$Char32 $tmp318 = panda$core$Char32$init$panda$core$Int32($tmp317);
panda$core$Bit $tmp319 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp316, $tmp318);
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block4; else goto block5;
block5:;
panda$core$Int32 $tmp321 = (panda$core$Int32) {94};
panda$core$Char32 $tmp322 = panda$core$Char32$init$panda$core$Int32($tmp321);
panda$core$Bit $tmp323 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp316, $tmp322);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block4; else goto block6;
block6:;
panda$core$Int32 $tmp325 = (panda$core$Int32) {62};
panda$core$Char32 $tmp326 = panda$core$Char32$init$panda$core$Int32($tmp325);
panda$core$Bit $tmp327 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp316, $tmp326);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block4; else goto block7;
block4:;
goto block3;
block7:;
// line 181
panda$core$String$Index $tmp329 = panda$core$String$get_start$R$panda$core$String$Index(param1);
*(&local0) = $tmp329;
goto block3;
block3:;
// line 184
panda$core$String$Index $tmp330 = *(&local0);
panda$core$String$Index $tmp331 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param1, $tmp330);
panda$core$Bit $tmp332 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp333 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp331, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp332);
panda$core$String* $tmp334 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param1, $tmp333);
panda$core$Int64$nullable $tmp335 = panda$core$String$convert$R$panda$core$Int64$Q($tmp334);
*(&local1) = ((panda$core$Int64) $tmp335.value);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
// unreffing REF($53:panda.core.String)
// line 185
// line 186
panda$core$String$Index $tmp336 = *(&local0);
panda$core$String$Index $tmp337 = panda$core$String$get_start$R$panda$core$String$Index(param1);
panda$core$Bit $tmp338 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit($tmp336, $tmp337);
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block8; else goto block10;
block8:;
// line 187
panda$core$Int32 $tmp340 = (panda$core$Int32) {32};
panda$core$Char32 $tmp341 = panda$core$Char32$init$panda$core$Int32($tmp340);
*(&local2) = $tmp341;
goto block9;
block10:;
// line 1
// line 190
panda$core$String$Index $tmp342 = panda$core$String$get_start$R$panda$core$String$Index(param1);
panda$core$Char32 $tmp343 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param1, $tmp342);
*(&local2) = $tmp343;
goto block9;
block9:;
// line 192
panda$core$String$Index $tmp344 = *(&local0);
panda$core$Char32 $tmp345 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param1, $tmp344);
panda$core$Int32 $tmp346 = (panda$core$Int32) {60};
panda$core$Char32 $tmp347 = panda$core$Char32$init$panda$core$Int32($tmp346);
panda$core$Bit $tmp348 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp345, $tmp347);
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block12; else goto block13;
block12:;
// line 193
panda$core$Int64 $tmp350 = *(&local1);
panda$core$Char32 $tmp351 = *(&local2);
panda$core$String* $tmp352 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, $tmp350, $tmp351);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
// unreffing REF($89:panda.core.String)
return $tmp352;
block13:;
panda$core$Int32 $tmp353 = (panda$core$Int32) {94};
panda$core$Char32 $tmp354 = panda$core$Char32$init$panda$core$Int32($tmp353);
panda$core$Bit $tmp355 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp345, $tmp354);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block14; else goto block15;
block14:;
// line 194
panda$core$Int64 $tmp357 = *(&local1);
panda$core$Char32 $tmp358 = *(&local2);
panda$core$String* $tmp359 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, $tmp357, $tmp358);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
// unreffing REF($104:panda.core.String)
return $tmp359;
block15:;
panda$core$Int32 $tmp360 = (panda$core$Int32) {62};
panda$core$Char32 $tmp361 = panda$core$Char32$init$panda$core$Int32($tmp360);
panda$core$Bit $tmp362 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp345, $tmp361);
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block16; else goto block17;
block16:;
// line 195
panda$core$Int64 $tmp364 = *(&local1);
panda$core$Char32 $tmp365 = *(&local2);
panda$core$String* $tmp366 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, $tmp364, $tmp365);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
// unreffing REF($119:panda.core.String)
return $tmp366;
block17:;
// line 196
panda$core$Bit $tmp367 = panda$core$Bit$init$builtin_bit(false);
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp369 = (panda$core$Int64) {196};
panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s371, param1);
panda$core$String* $tmp372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp370, &$s373);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s374, $tmp369, $tmp372);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
// unreffing REF($132:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp370));
// unreffing REF($131:panda.core.String)
abort(); // unreachable
block18:;
goto block11;
block11:;
panda$core$Bit $tmp375 = panda$core$Bit$init$builtin_bit(false);
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp377 = (panda$core$Int64) {173};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s378, $tmp377, &$s379);
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
panda$core$String$Index $tmp380 = panda$core$String$get_start$R$panda$core$String$Index(param3);
*(&local0) = $tmp380;
// line 211
panda$core$UInt64 $tmp381 = (panda$core$UInt64) {10};
*(&local1) = $tmp381;
// line 212
panda$collections$ListView* $tmp382 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s383);
*(&local2) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
panda$collections$ListView* $tmp384 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp384));
*(&local2) = $tmp382;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
// unreffing REF($7:panda.collections.ListView<panda.core.Char8>)
// line 213
panda$core$String$Index $tmp385 = *(&local0);
panda$core$String$Index$wrapper* $tmp386;
$tmp386 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp386->value = $tmp385;
panda$core$String$Index $tmp387 = panda$core$String$get_end$R$panda$core$String$Index(param3);
panda$core$String$Index$wrapper* $tmp388;
$tmp388 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp388->value = $tmp387;
ITable* $tmp389 = ((panda$core$Comparable*) $tmp386)->$class->itable;
while ($tmp389->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp389 = $tmp389->next;
}
$fn391 $tmp390 = $tmp389->methods[1];
panda$core$Bit $tmp392 = $tmp390(((panda$core$Comparable*) $tmp386), ((panda$core$Comparable*) $tmp388));
bool $tmp393 = $tmp392.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp388)));
// unreffing REF($23:panda.core.Comparable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp386)));
// unreffing REF($20:panda.core.Comparable<panda.core.String.Index>)
if ($tmp393) goto block1; else goto block2;
block1:;
// line 214
panda$core$String$Index $tmp394 = *(&local0);
panda$core$Char32 $tmp395 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param3, $tmp394);
panda$core$Int32 $tmp396 = (panda$core$Int32) {98};
panda$core$Char32 $tmp397 = panda$core$Char32$init$panda$core$Int32($tmp396);
panda$core$Bit $tmp398 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp395, $tmp397);
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block4; else goto block5;
block5:;
panda$core$Int32 $tmp400 = (panda$core$Int32) {66};
panda$core$Char32 $tmp401 = panda$core$Char32$init$panda$core$Int32($tmp400);
panda$core$Bit $tmp402 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp395, $tmp401);
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block4; else goto block6;
block4:;
// line 216
panda$core$UInt64 $tmp404 = (panda$core$UInt64) {2};
*(&local1) = $tmp404;
goto block3;
block6:;
panda$core$Int32 $tmp405 = (panda$core$Int32) {111};
panda$core$Char32 $tmp406 = panda$core$Char32$init$panda$core$Int32($tmp405);
panda$core$Bit $tmp407 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp395, $tmp406);
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block7; else goto block8;
block8:;
panda$core$Int32 $tmp409 = (panda$core$Int32) {79};
panda$core$Char32 $tmp410 = panda$core$Char32$init$panda$core$Int32($tmp409);
panda$core$Bit $tmp411 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp395, $tmp410);
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block7; else goto block9;
block7:;
// line 219
panda$core$UInt64 $tmp413 = (panda$core$UInt64) {8};
*(&local1) = $tmp413;
goto block3;
block9:;
panda$core$Int32 $tmp414 = (panda$core$Int32) {100};
panda$core$Char32 $tmp415 = panda$core$Char32$init$panda$core$Int32($tmp414);
panda$core$Bit $tmp416 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp395, $tmp415);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block10; else goto block11;
block11:;
panda$core$Int32 $tmp418 = (panda$core$Int32) {68};
panda$core$Char32 $tmp419 = panda$core$Char32$init$panda$core$Int32($tmp418);
panda$core$Bit $tmp420 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp395, $tmp419);
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block10; else goto block12;
block10:;
// line 222
panda$core$UInt64 $tmp422 = (panda$core$UInt64) {10};
*(&local1) = $tmp422;
goto block3;
block12:;
panda$core$Int32 $tmp423 = (panda$core$Int32) {120};
panda$core$Char32 $tmp424 = panda$core$Char32$init$panda$core$Int32($tmp423);
panda$core$Bit $tmp425 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp395, $tmp424);
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block13; else goto block14;
block13:;
// line 225
panda$core$UInt64 $tmp427 = (panda$core$UInt64) {16};
*(&local1) = $tmp427;
goto block3;
block14:;
panda$core$Int32 $tmp428 = (panda$core$Int32) {88};
panda$core$Char32 $tmp429 = panda$core$Char32$init$panda$core$Int32($tmp428);
panda$core$Bit $tmp430 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp395, $tmp429);
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block15; else goto block16;
block15:;
// line 228
panda$core$UInt64 $tmp432 = (panda$core$UInt64) {16};
*(&local1) = $tmp432;
// line 229
panda$collections$ListView* $tmp433 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s434);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp433));
panda$collections$ListView* $tmp435 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp435));
*(&local2) = $tmp433;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp433));
// unreffing REF($97:panda.collections.ListView<panda.core.Char8>)
goto block3;
block16:;
// line 232
panda$core$Bit $tmp436 = panda$core$Bit$init$builtin_bit(false);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp438 = (panda$core$Int64) {232};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s439, $tmp438, &$s440);
abort(); // unreachable
block17:;
goto block3;
block3:;
goto block2;
block2:;
// line 236
// line 237
bool $tmp441 = param0.value;
if ($tmp441) goto block21; else goto block22;
block21:;
panda$core$UInt64 $tmp442 = *(&local1);
panda$core$UInt64 $tmp443 = (panda$core$UInt64) {10};
uint64_t $tmp444 = $tmp442.value;
uint64_t $tmp445 = $tmp443.value;
bool $tmp446 = $tmp444 != $tmp445;
panda$core$Bit $tmp447 = (panda$core$Bit) {$tmp446};
*(&local4) = $tmp447;
goto block23;
block22:;
*(&local4) = param0;
goto block23;
block23:;
panda$core$Bit $tmp448 = *(&local4);
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block19; else goto block24;
block19:;
// line 238
panda$core$Int64 $tmp450 = panda$core$UInt64$convert$R$panda$core$Int64(param1);
panda$core$Int64 $tmp451 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp450);
panda$core$UInt64 $tmp452 = panda$core$Int64$convert$R$panda$core$UInt64($tmp451);
panda$core$UInt64 $tmp453 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64($tmp452, param2);
*(&local3) = $tmp453;
goto block20;
block24:;
// line 1
// line 241
*(&local3) = param1;
goto block20;
block20:;
// line 243
panda$core$Int64 $tmp454 = (panda$core$Int64) {64};
*(&local5) = $tmp454;
// line 244
panda$core$Int64 $tmp455 = *(&local5);
int64_t $tmp456 = $tmp455.value;
panda$core$Char8* $tmp457 = ((panda$core$Char8*) pandaZAlloc($tmp456 * 1));
*(&local6) = $tmp457;
// line 245
panda$core$Int64 $tmp458 = *(&local5);
panda$core$Int64 $tmp459 = (panda$core$Int64) {1};
int64_t $tmp460 = $tmp458.value;
int64_t $tmp461 = $tmp459.value;
int64_t $tmp462 = $tmp460 - $tmp461;
panda$core$Int64 $tmp463 = (panda$core$Int64) {$tmp462};
*(&local7) = $tmp463;
// line 246
goto block25;
block25:;
// line 247
panda$core$Char8* $tmp464 = *(&local6);
panda$core$Int64 $tmp465 = *(&local7);
panda$collections$ListView* $tmp466 = *(&local2);
panda$core$UInt64 $tmp467 = *(&local3);
panda$core$UInt64 $tmp468 = *(&local1);
panda$core$UInt64 $tmp469 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64($tmp467, $tmp468);
panda$core$Int64 $tmp470 = panda$core$UInt64$convert$R$panda$core$Int64($tmp469);
ITable* $tmp471 = $tmp466->$class->itable;
while ($tmp471->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp471 = $tmp471->next;
}
$fn473 $tmp472 = $tmp471->methods[0];
panda$core$Object* $tmp474 = $tmp472($tmp466, $tmp470);
int64_t $tmp475 = $tmp465.value;
$tmp464[$tmp475] = ((panda$core$Char8$wrapper*) $tmp474)->value;
panda$core$Panda$unref$panda$core$Object$Q($tmp474);
// unreffing REF($173:panda.collections.ListView.T)
// line 248
panda$core$UInt64 $tmp476 = *(&local3);
panda$core$UInt64 $tmp477 = *(&local1);
uint64_t $tmp478 = $tmp476.value;
uint64_t $tmp479 = $tmp477.value;
uint64_t $tmp480 = $tmp478 / $tmp479;
panda$core$UInt64 $tmp481 = (panda$core$UInt64) {$tmp480};
*(&local3) = $tmp481;
// line 249
panda$core$Int64 $tmp482 = *(&local7);
panda$core$Int64 $tmp483 = (panda$core$Int64) {1};
int64_t $tmp484 = $tmp482.value;
int64_t $tmp485 = $tmp483.value;
int64_t $tmp486 = $tmp484 - $tmp485;
panda$core$Int64 $tmp487 = (panda$core$Int64) {$tmp486};
*(&local7) = $tmp487;
goto block26;
block26:;
panda$core$UInt64 $tmp488 = *(&local3);
panda$core$UInt64 $tmp489 = (panda$core$UInt64) {0};
uint64_t $tmp490 = $tmp488.value;
uint64_t $tmp491 = $tmp489.value;
bool $tmp492 = $tmp490 > $tmp491;
panda$core$Bit $tmp493 = (panda$core$Bit) {$tmp492};
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block25; else goto block27;
block27:;
// line 252
bool $tmp495 = param0.value;
if ($tmp495) goto block30; else goto block31;
block30:;
panda$core$UInt64 $tmp496 = *(&local1);
panda$core$UInt64 $tmp497 = (panda$core$UInt64) {10};
panda$core$Bit $tmp498 = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit($tmp496, $tmp497);
*(&local8) = $tmp498;
goto block32;
block31:;
*(&local8) = param0;
goto block32;
block32:;
panda$core$Bit $tmp499 = *(&local8);
bool $tmp500 = $tmp499.value;
if ($tmp500) goto block28; else goto block29;
block28:;
// line 253
panda$core$Char8* $tmp501 = *(&local6);
panda$core$Int64 $tmp502 = *(&local7);
panda$core$UInt8 $tmp503 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp504 = panda$core$Char8$init$panda$core$UInt8($tmp503);
int64_t $tmp505 = $tmp502.value;
$tmp501[$tmp505] = $tmp504;
// line 254
panda$core$Int64 $tmp506 = *(&local7);
panda$core$Int64 $tmp507 = (panda$core$Int64) {1};
int64_t $tmp508 = $tmp506.value;
int64_t $tmp509 = $tmp507.value;
int64_t $tmp510 = $tmp508 - $tmp509;
panda$core$Int64 $tmp511 = (panda$core$Int64) {$tmp510};
*(&local7) = $tmp511;
goto block29;
block29:;
// line 256
panda$core$Int64 $tmp512 = *(&local7);
panda$core$Int64 $tmp513 = (panda$core$Int64) {1};
int64_t $tmp514 = $tmp512.value;
int64_t $tmp515 = $tmp513.value;
int64_t $tmp516 = $tmp514 + $tmp515;
panda$core$Int64 $tmp517 = (panda$core$Int64) {$tmp516};
*(&local7) = $tmp517;
// line 257
panda$core$Int64 $tmp518 = *(&local5);
panda$core$Int64 $tmp519 = *(&local7);
int64_t $tmp520 = $tmp518.value;
int64_t $tmp521 = $tmp519.value;
int64_t $tmp522 = $tmp520 - $tmp521;
panda$core$Int64 $tmp523 = (panda$core$Int64) {$tmp522};
*(&local9) = $tmp523;
// line 258
panda$core$Int64 $tmp524 = (panda$core$Int64) {0};
panda$core$Int64 $tmp525 = *(&local9);
panda$core$Bit $tmp526 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp527 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp524, $tmp525, $tmp526);
panda$core$Int64 $tmp528 = $tmp527.min;
*(&local10) = $tmp528;
panda$core$Int64 $tmp529 = $tmp527.max;
panda$core$Bit $tmp530 = $tmp527.inclusive;
bool $tmp531 = $tmp530.value;
panda$core$Int64 $tmp532 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp533 = panda$core$Int64$convert$R$panda$core$UInt64($tmp532);
if ($tmp531) goto block36; else goto block37;
block36:;
int64_t $tmp534 = $tmp528.value;
int64_t $tmp535 = $tmp529.value;
bool $tmp536 = $tmp534 <= $tmp535;
panda$core$Bit $tmp537 = (panda$core$Bit) {$tmp536};
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block33; else goto block34;
block37:;
int64_t $tmp539 = $tmp528.value;
int64_t $tmp540 = $tmp529.value;
bool $tmp541 = $tmp539 < $tmp540;
panda$core$Bit $tmp542 = (panda$core$Bit) {$tmp541};
bool $tmp543 = $tmp542.value;
if ($tmp543) goto block33; else goto block34;
block33:;
// line 259
panda$core$Char8* $tmp544 = *(&local6);
panda$core$Int64 $tmp545 = *(&local10);
panda$core$Char8* $tmp546 = *(&local6);
panda$core$Int64 $tmp547 = *(&local10);
panda$core$Int64 $tmp548 = *(&local7);
int64_t $tmp549 = $tmp547.value;
int64_t $tmp550 = $tmp548.value;
int64_t $tmp551 = $tmp549 + $tmp550;
panda$core$Int64 $tmp552 = (panda$core$Int64) {$tmp551};
int64_t $tmp553 = $tmp552.value;
panda$core$Char8 $tmp554 = $tmp546[$tmp553];
int64_t $tmp555 = $tmp545.value;
$tmp544[$tmp555] = $tmp554;
goto block35;
block35:;
panda$core$Int64 $tmp556 = *(&local10);
int64_t $tmp557 = $tmp529.value;
int64_t $tmp558 = $tmp556.value;
int64_t $tmp559 = $tmp557 - $tmp558;
panda$core$Int64 $tmp560 = (panda$core$Int64) {$tmp559};
panda$core$UInt64 $tmp561 = panda$core$Int64$convert$R$panda$core$UInt64($tmp560);
if ($tmp531) goto block39; else goto block40;
block39:;
uint64_t $tmp562 = $tmp561.value;
uint64_t $tmp563 = $tmp533.value;
bool $tmp564 = $tmp562 >= $tmp563;
panda$core$Bit $tmp565 = (panda$core$Bit) {$tmp564};
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block38; else goto block34;
block40:;
uint64_t $tmp567 = $tmp561.value;
uint64_t $tmp568 = $tmp533.value;
bool $tmp569 = $tmp567 > $tmp568;
panda$core$Bit $tmp570 = (panda$core$Bit) {$tmp569};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block38; else goto block34;
block38:;
int64_t $tmp572 = $tmp556.value;
int64_t $tmp573 = $tmp532.value;
int64_t $tmp574 = $tmp572 + $tmp573;
panda$core$Int64 $tmp575 = (panda$core$Int64) {$tmp574};
*(&local10) = $tmp575;
goto block33;
block34:;
// line 261
panda$core$String* $tmp576 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp577 = *(&local6);
panda$core$Int64 $tmp578 = *(&local9);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp576, $tmp577, $tmp578);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp576));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp576));
// unreffing REF($316:panda.core.String)
panda$collections$ListView* $tmp579 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
// unreffing digits
*(&local2) = ((panda$collections$ListView*) NULL);
return $tmp576;

}
void panda$core$Panda$swap$panda$collections$List$LTpanda$core$Panda$swap$T$GT$panda$core$Int64$panda$core$Int64(panda$collections$List* param0, panda$core$Int64 param1, panda$core$Int64 param2) {

panda$core$Object* local0 = NULL;
// line 283
ITable* $tmp580 = ((panda$collections$ListView*) param0)->$class->itable;
while ($tmp580->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp580 = $tmp580->next;
}
$fn582 $tmp581 = $tmp580->methods[0];
panda$core$Object* $tmp583 = $tmp581(((panda$collections$ListView*) param0), param1);
*(&local0) = ((panda$core$Object*) NULL);
panda$core$Panda$ref$panda$core$Object$Q($tmp583);
panda$core$Object* $tmp584 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp584);
*(&local0) = $tmp583;
panda$core$Panda$unref$panda$core$Object$Q($tmp583);
// unreffing REF($4:panda.collections.ListView.T)
// line 284
ITable* $tmp585 = ((panda$collections$ListView*) param0)->$class->itable;
while ($tmp585->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp585 = $tmp585->next;
}
$fn587 $tmp586 = $tmp585->methods[0];
panda$core$Object* $tmp588 = $tmp586(((panda$collections$ListView*) param0), param2);
ITable* $tmp589 = ((panda$collections$ListWriter*) param0)->$class->itable;
while ($tmp589->$class != (panda$core$Class*) &panda$collections$ListWriter$class) {
    $tmp589 = $tmp589->next;
}
$fn591 $tmp590 = $tmp589->methods[0];
$tmp590(((panda$collections$ListWriter*) param0), param1, $tmp588);
panda$core$Panda$unref$panda$core$Object$Q($tmp588);
// unreffing REF($21:panda.collections.ListView.T)
// line 285
panda$core$Object* $tmp592 = *(&local0);
ITable* $tmp593 = ((panda$collections$ListWriter*) param0)->$class->itable;
while ($tmp593->$class != (panda$core$Class*) &panda$collections$ListWriter$class) {
    $tmp593 = $tmp593->next;
}
$fn595 $tmp594 = $tmp593->methods[0];
$tmp594(((panda$collections$ListWriter*) param0), param2, $tmp592);
panda$core$Object* $tmp596 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp596);
// unreffing tmp
*(&local0) = ((panda$core$Object*) NULL);
return;

}
void panda$core$Panda$sort$panda$collections$List$LTpanda$core$Panda$sort$T$GT$panda$core$Int64$panda$core$Int64$$LPpanda$core$Panda$sort$T$Cpanda$core$Panda$sort$T$RP$EQ$GT$LPpanda$core$Bit$RP(panda$collections$List* param0, panda$core$Int64 param1, panda$core$Int64 param2, panda$core$MutableMethod* param3) {

panda$core$Int64 local0;
panda$core$Object* local1 = NULL;
panda$core$Int64 local2;
panda$core$Int64 local3;
panda$core$Bit local4;
// line 292
int64_t $tmp597 = param1.value;
int64_t $tmp598 = param2.value;
bool $tmp599 = $tmp597 >= $tmp598;
panda$core$Bit $tmp600 = (panda$core$Bit) {$tmp599};
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block1; else goto block2;
block1:;
// line 293
return;
block2:;
// line 295
int64_t $tmp602 = param2.value;
int64_t $tmp603 = param1.value;
int64_t $tmp604 = $tmp602 - $tmp603;
panda$core$Int64 $tmp605 = (panda$core$Int64) {$tmp604};
panda$core$Int64 $tmp606 = (panda$core$Int64) {2};
int64_t $tmp607 = $tmp605.value;
int64_t $tmp608 = $tmp606.value;
int64_t $tmp609 = $tmp607 / $tmp608;
panda$core$Int64 $tmp610 = (panda$core$Int64) {$tmp609};
int64_t $tmp611 = param1.value;
int64_t $tmp612 = $tmp610.value;
int64_t $tmp613 = $tmp611 + $tmp612;
panda$core$Int64 $tmp614 = (panda$core$Int64) {$tmp613};
*(&local0) = $tmp614;
// line 296
panda$core$Int64 $tmp615 = *(&local0);
ITable* $tmp616 = ((panda$collections$ListView*) param0)->$class->itable;
while ($tmp616->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp616 = $tmp616->next;
}
$fn618 $tmp617 = $tmp616->methods[0];
panda$core$Object* $tmp619 = $tmp617(((panda$collections$ListView*) param0), $tmp615);
*(&local1) = ((panda$core$Object*) NULL);
panda$core$Panda$ref$panda$core$Object$Q($tmp619);
panda$core$Object* $tmp620 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp620);
*(&local1) = $tmp619;
panda$core$Panda$unref$panda$core$Object$Q($tmp619);
// unreffing REF($29:panda.collections.ListView.T)
// line 297
panda$core$Int64 $tmp621 = *(&local0);
panda$core$Panda$swap$panda$collections$List$LTpanda$core$Panda$swap$T$GT$panda$core$Int64$panda$core$Int64(param0, param2, $tmp621);
// line 298
*(&local2) = param1;
// line 299
panda$core$Int64 $tmp622 = (panda$core$Int64) {1};
int64_t $tmp623 = param2.value;
int64_t $tmp624 = $tmp622.value;
int64_t $tmp625 = $tmp623 - $tmp624;
panda$core$Int64 $tmp626 = (panda$core$Int64) {$tmp625};
panda$core$Bit $tmp627 = panda$core$Bit$init$builtin_bit(true);
panda$core$Range$LTpanda$core$Int64$GT $tmp628 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(param1, $tmp626, $tmp627);
panda$core$Int64 $tmp629 = $tmp628.min;
*(&local3) = $tmp629;
panda$core$Int64 $tmp630 = $tmp628.max;
panda$core$Bit $tmp631 = $tmp628.inclusive;
bool $tmp632 = $tmp631.value;
panda$core$Int64 $tmp633 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp634 = panda$core$Int64$convert$R$panda$core$UInt64($tmp633);
if ($tmp632) goto block6; else goto block7;
block6:;
int64_t $tmp635 = $tmp629.value;
int64_t $tmp636 = $tmp630.value;
bool $tmp637 = $tmp635 <= $tmp636;
panda$core$Bit $tmp638 = (panda$core$Bit) {$tmp637};
bool $tmp639 = $tmp638.value;
if ($tmp639) goto block3; else goto block4;
block7:;
int64_t $tmp640 = $tmp629.value;
int64_t $tmp641 = $tmp630.value;
bool $tmp642 = $tmp640 < $tmp641;
panda$core$Bit $tmp643 = (panda$core$Bit) {$tmp642};
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block3; else goto block4;
block3:;
// line 300
panda$core$Int64 $tmp645 = *(&local3);
ITable* $tmp646 = ((panda$collections$ListView*) param0)->$class->itable;
while ($tmp646->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp646 = $tmp646->next;
}
$fn648 $tmp647 = $tmp646->methods[0];
panda$core$Object* $tmp649 = $tmp647(((panda$collections$ListView*) param0), $tmp645);
panda$core$Object* $tmp650 = *(&local1);
panda$core$Int8** $tmp651 = &param3->pointer;
panda$core$Int8* $tmp652 = *$tmp651;
panda$core$Object** $tmp653 = &param3->target;
panda$core$Object* $tmp654 = *$tmp653;
bool $tmp655 = $tmp654 != ((panda$core$Object*) NULL);
if ($tmp655) goto block10; else goto block11;
block11:;
panda$core$Bit $tmp657 = (($fn656) $tmp652)($tmp649, $tmp650);
*(&local4) = $tmp657;
goto block12;
block10:;
panda$core$Bit $tmp659 = (($fn658) $tmp652)($tmp654, $tmp649, $tmp650);
*(&local4) = $tmp659;
goto block12;
block12:;
panda$core$Bit $tmp660 = *(&local4);
panda$core$Bit $tmp661 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp660);
bool $tmp662 = $tmp661.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp649);
// unreffing REF($80:panda.collections.ListView.T)
if ($tmp662) goto block8; else goto block9;
block8:;
// line 301
panda$core$Int64 $tmp663 = *(&local3);
panda$core$Int64 $tmp664 = *(&local2);
panda$core$Panda$swap$panda$collections$List$LTpanda$core$Panda$swap$T$GT$panda$core$Int64$panda$core$Int64(param0, $tmp663, $tmp664);
// line 302
panda$core$Int64 $tmp665 = *(&local2);
panda$core$Int64 $tmp666 = (panda$core$Int64) {1};
int64_t $tmp667 = $tmp665.value;
int64_t $tmp668 = $tmp666.value;
int64_t $tmp669 = $tmp667 + $tmp668;
panda$core$Int64 $tmp670 = (panda$core$Int64) {$tmp669};
*(&local2) = $tmp670;
goto block9;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp671 = *(&local3);
int64_t $tmp672 = $tmp630.value;
int64_t $tmp673 = $tmp671.value;
int64_t $tmp674 = $tmp672 - $tmp673;
panda$core$Int64 $tmp675 = (panda$core$Int64) {$tmp674};
panda$core$UInt64 $tmp676 = panda$core$Int64$convert$R$panda$core$UInt64($tmp675);
if ($tmp632) goto block14; else goto block15;
block14:;
uint64_t $tmp677 = $tmp676.value;
uint64_t $tmp678 = $tmp634.value;
bool $tmp679 = $tmp677 >= $tmp678;
panda$core$Bit $tmp680 = (panda$core$Bit) {$tmp679};
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block13; else goto block4;
block15:;
uint64_t $tmp682 = $tmp676.value;
uint64_t $tmp683 = $tmp634.value;
bool $tmp684 = $tmp682 > $tmp683;
panda$core$Bit $tmp685 = (panda$core$Bit) {$tmp684};
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block13; else goto block4;
block13:;
int64_t $tmp687 = $tmp671.value;
int64_t $tmp688 = $tmp633.value;
int64_t $tmp689 = $tmp687 + $tmp688;
panda$core$Int64 $tmp690 = (panda$core$Int64) {$tmp689};
*(&local3) = $tmp690;
goto block3;
block4:;
// line 305
panda$core$Int64 $tmp691 = *(&local2);
panda$core$Panda$swap$panda$collections$List$LTpanda$core$Panda$swap$T$GT$panda$core$Int64$panda$core$Int64(param0, $tmp691, param2);
// line 306
panda$core$Int64 $tmp692 = *(&local2);
panda$core$Int64 $tmp693 = (panda$core$Int64) {1};
int64_t $tmp694 = $tmp692.value;
int64_t $tmp695 = $tmp693.value;
int64_t $tmp696 = $tmp694 - $tmp695;
panda$core$Int64 $tmp697 = (panda$core$Int64) {$tmp696};
panda$core$Panda$sort$panda$collections$List$LTpanda$core$Panda$sort$T$GT$panda$core$Int64$panda$core$Int64$$LPpanda$core$Panda$sort$T$Cpanda$core$Panda$sort$T$RP$EQ$GT$LPpanda$core$Bit$RP(param0, param1, $tmp697, param3);
// line 307
panda$core$Int64 $tmp698 = *(&local2);
panda$core$Int64 $tmp699 = (panda$core$Int64) {1};
int64_t $tmp700 = $tmp698.value;
int64_t $tmp701 = $tmp699.value;
int64_t $tmp702 = $tmp700 + $tmp701;
panda$core$Int64 $tmp703 = (panda$core$Int64) {$tmp702};
panda$core$Panda$sort$panda$collections$List$LTpanda$core$Panda$sort$T$GT$panda$core$Int64$panda$core$Int64$$LPpanda$core$Panda$sort$T$Cpanda$core$Panda$sort$T$RP$EQ$GT$LPpanda$core$Bit$RP(param0, $tmp703, param2, param3);
panda$core$Object* $tmp704 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp704);
// unreffing pivot
*(&local1) = ((panda$core$Object*) NULL);
return;

}
void panda$core$Panda$cleanup(panda$core$Panda* param0) {

// line 10
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$HashMap** $tmp705 = &param0->allocations;
panda$collections$HashMap* $tmp706 = *$tmp705;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp706));
panda$collections$HashMap** $tmp707 = &param0->traces;
panda$collections$HashMap* $tmp708 = *$tmp707;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp708));
return;

}

