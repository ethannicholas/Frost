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
typedef panda$core$Bit (*$fn124)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn129)(panda$collections$Iterator*);
typedef void (*$fn172)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn186)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn260)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn382)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Object* (*$fn460)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2f\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 31, 1503042479218620573, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2f\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 31, 1503042479218620573, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2f\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 38, 4390673133021255337, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2f\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 38, 4390673133021255337, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61\x2e\x61\x6c\x69\x67\x6e\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x73\x70\x65\x63\x69\x66\x69\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 126, -635296898711655152, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x2e\x70\x61\x6e\x64\x61", 11, -6001131757839596893, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 8772831143845743696, NULL };

void panda$core$Panda$init(panda$core$Panda* param0) {

// line 11
panda$collections$HashMap* $tmp2 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp2);
panda$collections$HashMap** $tmp3 = &param0->allocations;
panda$collections$HashMap* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$collections$HashMap** $tmp5 = &param0->allocations;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// line 13
panda$collections$HashMap* $tmp6 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp6);
panda$collections$HashMap** $tmp7 = &param0->traces;
panda$collections$HashMap* $tmp8 = *$tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$collections$HashMap** $tmp9 = &param0->traces;
*$tmp9 = $tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
return;

}
panda$core$Maybe* panda$core$Panda$success$panda$core$Object$R$panda$core$Maybe$LTpanda$core$Object$GT$Q(panda$core$Object* param0) {

// line 21
panda$core$Maybe* $tmp10 = (panda$core$Maybe*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Maybe$class);
panda$core$Int64 $tmp11 = (panda$core$Int64) {0};
panda$core$Maybe$init$panda$core$Int64$panda$core$Maybe$T($tmp10, $tmp11, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
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
if ($tmp19) goto block1; else goto block2;
block1:;
*(&local0) = $tmp17;
goto block3;
block2:;
panda$core$String** $tmp20 = &param0->name;
panda$core$String* $tmp21 = *$tmp20;
panda$core$Bit $tmp22 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp21, &$s23);
*(&local0) = $tmp22;
goto block3;
block3:;
panda$core$Bit $tmp24 = *(&local0);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block4; else goto block5;
block4:;
// line 34
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s26));
return &$s27;
block5:;
// line 36
panda$core$String** $tmp28 = &param0->name;
panda$core$String* $tmp29 = *$tmp28;
panda$core$Bit $tmp30 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp29, &$s31);
bool $tmp32 = $tmp30.value;
if ($tmp32) goto block6; else goto block7;
block6:;
*(&local1) = $tmp30;
goto block8;
block7:;
panda$core$String** $tmp33 = &param0->name;
panda$core$String* $tmp34 = *$tmp33;
panda$core$Bit $tmp35 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp34, &$s36);
*(&local1) = $tmp35;
goto block8;
block8:;
panda$core$Bit $tmp37 = *(&local1);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block9; else goto block10;
block9:;
// line 37
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s39));
return &$s40;
block10:;
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
panda$core$String* $tmp44 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
*(&local0) = $tmp43;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// line 44
panda$collections$HashMap** $tmp45 = &param0->allocations;
panda$collections$HashMap* $tmp46 = *$tmp45;
panda$core$String* $tmp47 = *(&local0);
panda$core$Object* $tmp48 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp46, ((panda$collections$Key*) $tmp47));
*(&local1) = ($tmp48 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp48)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
panda$core$Panda$unref$panda$core$Object$Q($tmp48);
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
panda$core$Int64$nullable $tmp55 = *(&local1);
panda$core$Int64 $tmp56 = (panda$core$Int64) {1};
int64_t $tmp57 = ((panda$core$Int64) $tmp55.value).value;
int64_t $tmp58 = $tmp56.value;
int64_t $tmp59 = $tmp57 + $tmp58;
panda$core$Int64 $tmp60 = (panda$core$Int64) {$tmp59};
panda$core$String* $tmp61 = *(&local0);
panda$core$Int64$wrapper* $tmp62;
$tmp62 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp62->value = ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp60, true }).value);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp54, ((panda$collections$Key*) $tmp61), ((panda$core$Object*) $tmp62));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
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
panda$core$String* $tmp65 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
*(&local0) = $tmp64;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// line 53
panda$collections$HashMap** $tmp66 = &param0->allocations;
panda$collections$HashMap* $tmp67 = *$tmp66;
panda$core$String* $tmp68 = *(&local0);
panda$core$Object* $tmp69 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp67, ((panda$collections$Key*) $tmp68));
*(&local1) = ($tmp69 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp69)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
panda$core$Panda$unref$panda$core$Object$Q($tmp69);
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
panda$core$Int64$nullable $tmp76 = *(&local1);
panda$core$Int64 $tmp77 = (panda$core$Int64) {1};
int64_t $tmp78 = ((panda$core$Int64) $tmp76.value).value;
int64_t $tmp79 = $tmp77.value;
int64_t $tmp80 = $tmp78 - $tmp79;
panda$core$Int64 $tmp81 = (panda$core$Int64) {$tmp80};
panda$core$String* $tmp82 = *(&local0);
panda$core$Int64$wrapper* $tmp83;
$tmp83 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp83->value = ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp81, true }).value);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp75, ((panda$collections$Key*) $tmp82), ((panda$core$Object*) $tmp83));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
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
panda$core$String* $tmp97 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp96)));
*(&local0) = ((panda$core$String*) $tmp96);
// line 62
panda$collections$HashMap** $tmp98 = &param0->allocations;
panda$collections$HashMap* $tmp99 = *$tmp98;
panda$core$String* $tmp100 = *(&local0);
panda$core$Object* $tmp101 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp99, ((panda$collections$Key*) $tmp100));
panda$core$Int64 $tmp102 = (panda$core$Int64) {0};
panda$core$Bit $tmp103 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) ($tmp101 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp101)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value), $tmp102);
panda$core$Panda$unref$panda$core$Object$Q($tmp101);
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block4; else goto block5;
block4:;
// line 63
panda$core$String* $tmp105 = *(&local0);
panda$core$String* $tmp106 = panda$core$String$convert$R$panda$core$String($tmp105);
panda$core$String* $tmp107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp106, &$s108);
panda$collections$HashMap** $tmp109 = &param0->allocations;
panda$collections$HashMap* $tmp110 = *$tmp109;
panda$core$String* $tmp111 = *(&local0);
panda$core$Object* $tmp112 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp110, ((panda$collections$Key*) $tmp111));
panda$core$Object* $tmp113;
if (($tmp112 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp112)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).nonnull) {
    panda$core$Int64$wrapper* $tmp114;
    $tmp114 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp114->value = ((panda$core$Int64) ($tmp112 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp112)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value);
    $tmp113 = ((panda$core$Object*) $tmp114);
}
else {
    $tmp113 = NULL;
}
panda$core$String* $tmp115 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp107, $tmp113);
panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp115, &$s117);
panda$io$Console$printLine$panda$core$String($tmp116);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
panda$core$Panda$unref$panda$core$Object$Q($tmp112);
panda$core$Panda$unref$panda$core$Object$Q($tmp113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
goto block5;
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp96);
panda$core$String* $tmp118 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
// unreffing k
*(&local0) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// line 66
panda$collections$HashMap** $tmp119 = &param0->traces;
panda$collections$HashMap* $tmp120 = *$tmp119;
panda$collections$Iterator* $tmp121 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT($tmp120);
goto block6;
block6:;
ITable* $tmp122 = $tmp121->$class->itable;
while ($tmp122->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp122 = $tmp122->next;
}
$fn124 $tmp123 = $tmp122->methods[0];
panda$core$Bit $tmp125 = $tmp123($tmp121);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block8; else goto block7;
block7:;
*(&local1) = ((panda$core$String*) NULL);
ITable* $tmp127 = $tmp121->$class->itable;
while ($tmp127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[1];
panda$core$Object* $tmp130 = $tmp128($tmp121);
panda$core$String* $tmp131 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp130)));
*(&local1) = ((panda$core$String*) $tmp130);
// line 67
panda$core$String* $tmp132 = *(&local1);
panda$core$String* $tmp133 = panda$core$String$convert$R$panda$core$String($tmp132);
panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp133, &$s135);
panda$collections$HashMap** $tmp136 = &param0->traces;
panda$collections$HashMap* $tmp137 = *$tmp136;
panda$core$String* $tmp138 = *(&local1);
panda$core$Object* $tmp139 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp137, ((panda$collections$Key*) $tmp138));
panda$core$Object* $tmp140;
if (($tmp139 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp139)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).nonnull) {
    panda$core$Int64$wrapper* $tmp141;
    $tmp141 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp141->value = ((panda$core$Int64) ($tmp139 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp139)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 }).value);
    $tmp140 = ((panda$core$Object*) $tmp141);
}
else {
    $tmp140 = NULL;
}
panda$core$String* $tmp142 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp134, $tmp140);
panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp142, &$s144);
panda$io$Console$printLine$panda$core$String($tmp143);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
panda$core$Panda$unref$panda$core$Object$Q($tmp139);
panda$core$Panda$unref$panda$core$Object$Q($tmp140);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp143));
panda$core$Panda$unref$panda$core$Object$Q($tmp130);
panda$core$String* $tmp145 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
// unreffing k
*(&local1) = ((panda$core$String*) NULL);
goto block6;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
return;

}
void panda$core$Panda$countTrace$panda$core$String(panda$core$Panda* param0, panda$core$String* param1) {

panda$core$Int64$nullable local0;
// line 84
panda$collections$HashMap** $tmp146 = &param0->traces;
panda$collections$HashMap* $tmp147 = *$tmp146;
panda$core$Object* $tmp148 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp147, ((panda$collections$Key*) param1));
*(&local0) = ($tmp148 != NULL ? ((panda$core$Int64$nullable) { ((panda$core$Int64$wrapper*) $tmp148)->value, true }) : (panda$core$Int64$nullable) { .nonnull = 0 });
panda$core$Panda$unref$panda$core$Object$Q($tmp148);
// line 85
panda$core$Int64$nullable $tmp149 = *(&local0);
panda$core$Bit $tmp150 = panda$core$Bit$init$builtin_bit(!$tmp149.nonnull);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block1; else goto block2;
block1:;
// line 86
panda$core$Int64 $tmp152 = (panda$core$Int64) {0};
*(&local0) = ((panda$core$Int64$nullable) { $tmp152, true });
goto block2;
block2:;
// line 88
panda$collections$HashMap** $tmp153 = &param0->traces;
panda$collections$HashMap* $tmp154 = *$tmp153;
panda$core$Int64$nullable $tmp155 = *(&local0);
panda$core$Int64 $tmp156 = (panda$core$Int64) {1};
int64_t $tmp157 = ((panda$core$Int64) $tmp155.value).value;
int64_t $tmp158 = $tmp156.value;
int64_t $tmp159 = $tmp157 + $tmp158;
panda$core$Int64 $tmp160 = (panda$core$Int64) {$tmp159};
panda$core$Int64$wrapper* $tmp161;
$tmp161 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp161->value = ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp160, true }).value);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp154, ((panda$collections$Key*) param1), ((panda$core$Object*) $tmp161));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
return;

}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(panda$core$String* param0, panda$core$Int64 param1) {

// line 105
panda$io$OutputStream* $tmp162 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$String* $tmp163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s164, param0);
panda$core$String* $tmp165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp163, &$s166);
panda$core$Int64$wrapper* $tmp167;
$tmp167 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp167->value = param1;
panda$core$String* $tmp168 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp165, ((panda$core$Object*) $tmp167));
panda$core$String* $tmp169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp168, &$s170);
$fn172 $tmp171 = ($fn172) $tmp162->$class->vtable[19];
$tmp171($tmp162, $tmp169);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp162));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
// line 106
panda$core$System$crash();
return;

}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(panda$core$String* param0, panda$core$Int64 param1, panda$core$String* param2) {

// line 111
panda$io$OutputStream* $tmp173 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$String* $tmp174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s175, param0);
panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp174, &$s177);
panda$core$Int64$wrapper* $tmp178;
$tmp178 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp178->value = param1;
panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp176, ((panda$core$Object*) $tmp178));
panda$core$String* $tmp180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp179, &$s181);
panda$core$String* $tmp182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp180, param2);
panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp182, &$s184);
$fn186 $tmp185 = ($fn186) $tmp173->$class->vtable[19];
$tmp185($tmp173, $tmp183);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
// line 112
panda$core$System$crash();
return;

}
panda$core$UInt64$nullable panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q(panda$core$Char32 param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
// line 117
panda$core$Int32 $tmp187 = (panda$core$Int32) {48};
panda$core$Char32 $tmp188 = panda$core$Char32$init$panda$core$Int32($tmp187);
panda$core$Bit $tmp189 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(param0, $tmp188);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block1; else goto block2;
block1:;
panda$core$Int32 $tmp191 = (panda$core$Int32) {57};
panda$core$Char32 $tmp192 = panda$core$Char32$init$panda$core$Int32($tmp191);
panda$core$Bit $tmp193 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(param0, $tmp192);
*(&local0) = $tmp193;
goto block3;
block2:;
*(&local0) = $tmp189;
goto block3;
block3:;
panda$core$Bit $tmp194 = *(&local0);
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block4; else goto block5;
block4:;
// line 118
panda$core$UInt64 $tmp196 = panda$core$Char32$convert$R$panda$core$UInt64(param0);
panda$core$UInt8 $tmp197 = (panda$core$UInt8) {48};
panda$core$Char8 $tmp198 = panda$core$Char8$init$panda$core$UInt8($tmp197);
panda$core$UInt64 $tmp199 = panda$core$Char8$convert$R$panda$core$UInt64($tmp198);
uint64_t $tmp200 = $tmp196.value;
uint64_t $tmp201 = $tmp199.value;
uint64_t $tmp202 = $tmp200 - $tmp201;
panda$core$UInt64 $tmp203 = (panda$core$UInt64) {$tmp202};
return ((panda$core$UInt64$nullable) { $tmp203, true });
block5:;
// line 120
panda$core$Int32 $tmp204 = (panda$core$Int32) {65};
panda$core$Char32 $tmp205 = panda$core$Char32$init$panda$core$Int32($tmp204);
panda$core$Bit $tmp206 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(param0, $tmp205);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block6; else goto block7;
block6:;
panda$core$Int32 $tmp208 = (panda$core$Int32) {90};
panda$core$Char32 $tmp209 = panda$core$Char32$init$panda$core$Int32($tmp208);
panda$core$Bit $tmp210 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(param0, $tmp209);
*(&local1) = $tmp210;
goto block8;
block7:;
*(&local1) = $tmp206;
goto block8;
block8:;
panda$core$Bit $tmp211 = *(&local1);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block9; else goto block10;
block9:;
// line 121
panda$core$UInt64 $tmp213 = panda$core$Char32$convert$R$panda$core$UInt64(param0);
panda$core$UInt8 $tmp214 = (panda$core$UInt8) {65};
panda$core$Char8 $tmp215 = panda$core$Char8$init$panda$core$UInt8($tmp214);
panda$core$UInt64 $tmp216 = panda$core$Char8$convert$R$panda$core$UInt64($tmp215);
uint64_t $tmp217 = $tmp213.value;
uint64_t $tmp218 = $tmp216.value;
uint64_t $tmp219 = $tmp217 - $tmp218;
panda$core$UInt64 $tmp220 = (panda$core$UInt64) {$tmp219};
panda$core$UInt64 $tmp221 = (panda$core$UInt64) {10};
uint64_t $tmp222 = $tmp220.value;
uint64_t $tmp223 = $tmp221.value;
uint64_t $tmp224 = $tmp222 + $tmp223;
panda$core$UInt64 $tmp225 = (panda$core$UInt64) {$tmp224};
return ((panda$core$UInt64$nullable) { $tmp225, true });
block10:;
// line 123
panda$core$Int32 $tmp226 = (panda$core$Int32) {97};
panda$core$Char32 $tmp227 = panda$core$Char32$init$panda$core$Int32($tmp226);
panda$core$Bit $tmp228 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(param0, $tmp227);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block11; else goto block12;
block11:;
panda$core$Int32 $tmp230 = (panda$core$Int32) {122};
panda$core$Char32 $tmp231 = panda$core$Char32$init$panda$core$Int32($tmp230);
panda$core$Bit $tmp232 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(param0, $tmp231);
*(&local2) = $tmp232;
goto block13;
block12:;
*(&local2) = $tmp228;
goto block13;
block13:;
panda$core$Bit $tmp233 = *(&local2);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block14; else goto block15;
block14:;
// line 124
panda$core$UInt64 $tmp235 = panda$core$Char32$convert$R$panda$core$UInt64(param0);
panda$core$UInt8 $tmp236 = (panda$core$UInt8) {97};
panda$core$Char8 $tmp237 = panda$core$Char8$init$panda$core$UInt8($tmp236);
panda$core$UInt64 $tmp238 = panda$core$Char8$convert$R$panda$core$UInt64($tmp237);
uint64_t $tmp239 = $tmp235.value;
uint64_t $tmp240 = $tmp238.value;
uint64_t $tmp241 = $tmp239 - $tmp240;
panda$core$UInt64 $tmp242 = (panda$core$UInt64) {$tmp241};
panda$core$UInt64 $tmp243 = (panda$core$UInt64) {10};
uint64_t $tmp244 = $tmp242.value;
uint64_t $tmp245 = $tmp243.value;
uint64_t $tmp246 = $tmp244 + $tmp245;
panda$core$UInt64 $tmp247 = (panda$core$UInt64) {$tmp246};
return ((panda$core$UInt64$nullable) { $tmp247, true });
block15:;
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
panda$core$Bit $tmp248 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param0, &$s249);
bool $tmp250 = $tmp248.value;
if ($tmp250) goto block1; else goto block2;
block1:;
// line 135
return ((panda$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 137
panda$core$UInt64 $tmp251 = (panda$core$UInt64) {0};
*(&local0) = $tmp251;
// line 138
panda$core$UInt64 $tmp252 = panda$core$Int64$convert$R$panda$core$UInt64(param1);
*(&local1) = $tmp252;
// line 139
panda$core$String$Index $tmp253 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local2) = $tmp253;
// line 140
goto block3;
block3:;
panda$core$String$Index $tmp254 = *(&local2);
panda$core$String$Index$wrapper* $tmp255;
$tmp255 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp255->value = $tmp254;
panda$core$String$Index $tmp256 = panda$core$String$get_end$R$panda$core$String$Index(param0);
panda$core$String$Index$wrapper* $tmp257;
$tmp257 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp257->value = $tmp256;
ITable* $tmp258 = ((panda$core$Equatable*) $tmp255)->$class->itable;
while ($tmp258->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp258 = $tmp258->next;
}
$fn260 $tmp259 = $tmp258->methods[1];
panda$core$Bit $tmp261 = $tmp259(((panda$core$Equatable*) $tmp255), ((panda$core$Equatable*) $tmp257));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp255)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp257)));
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block4; else goto block5;
block4:;
// line 141
panda$core$String$Index $tmp263 = *(&local2);
panda$core$Char32 $tmp264 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param0, $tmp263);
panda$core$UInt64$nullable $tmp265 = panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q($tmp264);
*(&local3) = $tmp265;
// line 142
panda$core$UInt64$nullable $tmp266 = *(&local3);
panda$core$Bit $tmp267 = panda$core$Bit$init$builtin_bit(!$tmp266.nonnull);
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block6; else goto block7;
block6:;
*(&local4) = $tmp267;
goto block8;
block7:;
panda$core$UInt64$nullable $tmp269 = *(&local3);
panda$core$UInt64 $tmp270 = *(&local1);
uint64_t $tmp271 = ((panda$core$UInt64) $tmp269.value).value;
uint64_t $tmp272 = $tmp270.value;
bool $tmp273 = $tmp271 >= $tmp272;
panda$core$Bit $tmp274 = (panda$core$Bit) {$tmp273};
*(&local4) = $tmp274;
goto block8;
block8:;
panda$core$Bit $tmp275 = *(&local4);
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block9; else goto block10;
block9:;
// line 143
return ((panda$core$UInt64$nullable) { .nonnull = false });
block10:;
// line 145
panda$core$UInt64 $tmp277 = *(&local0);
panda$core$UInt64 $tmp278 = *(&local1);
uint64_t $tmp279 = $tmp277.value;
uint64_t $tmp280 = $tmp278.value;
uint64_t $tmp281 = $tmp279 * $tmp280;
panda$core$UInt64 $tmp282 = (panda$core$UInt64) {$tmp281};
panda$core$UInt64$nullable $tmp283 = *(&local3);
uint64_t $tmp284 = $tmp282.value;
uint64_t $tmp285 = ((panda$core$UInt64) $tmp283.value).value;
uint64_t $tmp286 = $tmp284 + $tmp285;
panda$core$UInt64 $tmp287 = (panda$core$UInt64) {$tmp286};
*(&local0) = $tmp287;
// line 146
panda$core$String$Index $tmp288 = *(&local2);
panda$core$String$Index $tmp289 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp288);
*(&local2) = $tmp289;
goto block3;
block5:;
// line 148
panda$core$UInt64 $tmp290 = *(&local0);
return ((panda$core$UInt64$nullable) { $tmp290, true });

}
panda$core$String* panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$String* param1) {

panda$core$String$Index local0;
panda$core$Int64 local1;
panda$core$Char32 local2;
// line 174
panda$core$Int64 $tmp291 = panda$core$String$get_length$R$panda$core$Int64(param1);
panda$core$Int64 $tmp292 = (panda$core$Int64) {2};
int64_t $tmp293 = $tmp291.value;
int64_t $tmp294 = $tmp292.value;
bool $tmp295 = $tmp293 >= $tmp294;
panda$core$Bit $tmp296 = (panda$core$Bit) {$tmp295};
bool $tmp297 = $tmp296.value;
if ($tmp297) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp298 = (panda$core$Int64) {174};
panda$core$String* $tmp299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s300, param1);
panda$core$String* $tmp301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp299, &$s302);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s303, $tmp298, $tmp301);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
abort(); // unreachable
block1:;
// line 175
panda$core$String$Index $tmp304 = panda$core$String$get_start$R$panda$core$String$Index(param1);
panda$core$String$Index $tmp305 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param1, $tmp304);
*(&local0) = $tmp305;
// line 176
panda$core$String$Index $tmp306 = *(&local0);
panda$core$Char32 $tmp307 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param1, $tmp306);
panda$core$Int32 $tmp308 = (panda$core$Int32) {60};
panda$core$Char32 $tmp309 = panda$core$Char32$init$panda$core$Int32($tmp308);
panda$core$Bit $tmp310 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp307, $tmp309);
bool $tmp311 = $tmp310.value;
if ($tmp311) goto block4; else goto block5;
block5:;
panda$core$Int32 $tmp312 = (panda$core$Int32) {94};
panda$core$Char32 $tmp313 = panda$core$Char32$init$panda$core$Int32($tmp312);
panda$core$Bit $tmp314 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp307, $tmp313);
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block4; else goto block6;
block6:;
panda$core$Int32 $tmp316 = (panda$core$Int32) {62};
panda$core$Char32 $tmp317 = panda$core$Char32$init$panda$core$Int32($tmp316);
panda$core$Bit $tmp318 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp307, $tmp317);
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block4; else goto block7;
block4:;
goto block3;
block7:;
// line 179
panda$core$String$Index $tmp320 = panda$core$String$get_start$R$panda$core$String$Index(param1);
*(&local0) = $tmp320;
goto block3;
block3:;
// line 181
panda$core$String$Index $tmp321 = *(&local0);
panda$core$String$Index $tmp322 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param1, $tmp321);
panda$core$Bit $tmp323 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp324 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp322, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp323);
panda$core$String* $tmp325 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param1, $tmp324);
panda$core$Int64$nullable $tmp326 = panda$core$String$convert$R$panda$core$Int64$Q($tmp325);
*(&local1) = ((panda$core$Int64) $tmp326.value);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
// line 182
// line 183
panda$core$String$Index $tmp327 = *(&local0);
panda$core$String$Index $tmp328 = panda$core$String$get_start$R$panda$core$String$Index(param1);
panda$core$Bit $tmp329 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit($tmp327, $tmp328);
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block8; else goto block10;
block8:;
// line 184
panda$core$Int32 $tmp331 = (panda$core$Int32) {32};
panda$core$Char32 $tmp332 = panda$core$Char32$init$panda$core$Int32($tmp331);
*(&local2) = $tmp332;
goto block9;
block10:;
// line 1
// line 187
panda$core$String$Index $tmp333 = panda$core$String$get_start$R$panda$core$String$Index(param1);
panda$core$Char32 $tmp334 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param1, $tmp333);
*(&local2) = $tmp334;
goto block9;
block9:;
// line 189
panda$core$String$Index $tmp335 = *(&local0);
panda$core$Char32 $tmp336 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param1, $tmp335);
panda$core$Int32 $tmp337 = (panda$core$Int32) {60};
panda$core$Char32 $tmp338 = panda$core$Char32$init$panda$core$Int32($tmp337);
panda$core$Bit $tmp339 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp336, $tmp338);
bool $tmp340 = $tmp339.value;
if ($tmp340) goto block12; else goto block13;
block12:;
// line 190
panda$core$Int64 $tmp341 = *(&local1);
panda$core$Char32 $tmp342 = *(&local2);
panda$core$String* $tmp343 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, $tmp341, $tmp342);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
return $tmp343;
block13:;
panda$core$Int32 $tmp344 = (panda$core$Int32) {94};
panda$core$Char32 $tmp345 = panda$core$Char32$init$panda$core$Int32($tmp344);
panda$core$Bit $tmp346 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp336, $tmp345);
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block14; else goto block15;
block14:;
// line 191
panda$core$Int64 $tmp348 = *(&local1);
panda$core$Char32 $tmp349 = *(&local2);
panda$core$String* $tmp350 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, $tmp348, $tmp349);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
return $tmp350;
block15:;
panda$core$Int32 $tmp351 = (panda$core$Int32) {62};
panda$core$Char32 $tmp352 = panda$core$Char32$init$panda$core$Int32($tmp351);
panda$core$Bit $tmp353 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp336, $tmp352);
bool $tmp354 = $tmp353.value;
if ($tmp354) goto block16; else goto block17;
block16:;
// line 192
panda$core$Int64 $tmp355 = *(&local1);
panda$core$Char32 $tmp356 = *(&local2);
panda$core$String* $tmp357 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, $tmp355, $tmp356);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp357));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp357));
return $tmp357;
block17:;
// line 194
panda$core$Bit $tmp358 = panda$core$Bit$init$builtin_bit(false);
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp360 = (panda$core$Int64) {194};
panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s362, param1);
panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp361, &$s364);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s365, $tmp360, $tmp363);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp363));
abort(); // unreachable
block18:;
goto block11;
block11:;
panda$core$Bit $tmp366 = panda$core$Bit$init$builtin_bit(false);
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp368 = (panda$core$Int64) {173};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s369, $tmp368, &$s370);
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
// line 208
panda$core$String$Index $tmp371 = panda$core$String$get_start$R$panda$core$String$Index(param3);
*(&local0) = $tmp371;
// line 209
panda$core$UInt64 $tmp372 = (panda$core$UInt64) {10};
*(&local1) = $tmp372;
// line 210
panda$collections$ListView* $tmp373 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s374);
*(&local2) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp375 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp375));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
*(&local2) = $tmp373;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
// line 211
panda$core$String$Index $tmp376 = *(&local0);
panda$core$String$Index$wrapper* $tmp377;
$tmp377 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp377->value = $tmp376;
panda$core$String$Index $tmp378 = panda$core$String$get_end$R$panda$core$String$Index(param3);
panda$core$String$Index$wrapper* $tmp379;
$tmp379 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp379->value = $tmp378;
ITable* $tmp380 = ((panda$core$Comparable*) $tmp377)->$class->itable;
while ($tmp380->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp380 = $tmp380->next;
}
$fn382 $tmp381 = $tmp380->methods[1];
panda$core$Bit $tmp383 = $tmp381(((panda$core$Comparable*) $tmp377), ((panda$core$Comparable*) $tmp379));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp377)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp379)));
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block1; else goto block2;
block1:;
// line 212
panda$core$String$Index $tmp385 = *(&local0);
panda$core$Char32 $tmp386 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param3, $tmp385);
panda$core$Int32 $tmp387 = (panda$core$Int32) {98};
panda$core$Char32 $tmp388 = panda$core$Char32$init$panda$core$Int32($tmp387);
panda$core$Bit $tmp389 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp386, $tmp388);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block4; else goto block5;
block5:;
panda$core$Int32 $tmp391 = (panda$core$Int32) {66};
panda$core$Char32 $tmp392 = panda$core$Char32$init$panda$core$Int32($tmp391);
panda$core$Bit $tmp393 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp386, $tmp392);
bool $tmp394 = $tmp393.value;
if ($tmp394) goto block4; else goto block6;
block4:;
// line 214
panda$core$UInt64 $tmp395 = (panda$core$UInt64) {2};
*(&local1) = $tmp395;
goto block3;
block6:;
panda$core$Int32 $tmp396 = (panda$core$Int32) {111};
panda$core$Char32 $tmp397 = panda$core$Char32$init$panda$core$Int32($tmp396);
panda$core$Bit $tmp398 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp386, $tmp397);
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block7; else goto block8;
block8:;
panda$core$Int32 $tmp400 = (panda$core$Int32) {79};
panda$core$Char32 $tmp401 = panda$core$Char32$init$panda$core$Int32($tmp400);
panda$core$Bit $tmp402 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp386, $tmp401);
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block7; else goto block9;
block7:;
// line 216
panda$core$UInt64 $tmp404 = (panda$core$UInt64) {8};
*(&local1) = $tmp404;
goto block3;
block9:;
panda$core$Int32 $tmp405 = (panda$core$Int32) {100};
panda$core$Char32 $tmp406 = panda$core$Char32$init$panda$core$Int32($tmp405);
panda$core$Bit $tmp407 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp386, $tmp406);
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block10; else goto block11;
block11:;
panda$core$Int32 $tmp409 = (panda$core$Int32) {68};
panda$core$Char32 $tmp410 = panda$core$Char32$init$panda$core$Int32($tmp409);
panda$core$Bit $tmp411 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp386, $tmp410);
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block10; else goto block12;
block10:;
// line 218
panda$core$UInt64 $tmp413 = (panda$core$UInt64) {10};
*(&local1) = $tmp413;
goto block3;
block12:;
panda$core$Int32 $tmp414 = (panda$core$Int32) {120};
panda$core$Char32 $tmp415 = panda$core$Char32$init$panda$core$Int32($tmp414);
panda$core$Bit $tmp416 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp386, $tmp415);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block13; else goto block14;
block13:;
// line 220
panda$core$UInt64 $tmp418 = (panda$core$UInt64) {16};
*(&local1) = $tmp418;
goto block3;
block14:;
panda$core$Int32 $tmp419 = (panda$core$Int32) {88};
panda$core$Char32 $tmp420 = panda$core$Char32$init$panda$core$Int32($tmp419);
panda$core$Bit $tmp421 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp386, $tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block15; else goto block16;
block15:;
// line 222
panda$core$UInt64 $tmp423 = (panda$core$UInt64) {16};
*(&local1) = $tmp423;
// line 223
panda$collections$ListView* $tmp424 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s425);
panda$collections$ListView* $tmp426 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
*(&local2) = $tmp424;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
goto block3;
block16:;
// line 225
panda$core$Bit $tmp427 = panda$core$Bit$init$builtin_bit(false);
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp429 = (panda$core$Int64) {225};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s430, $tmp429, &$s431);
abort(); // unreachable
block17:;
goto block3;
block3:;
goto block2;
block2:;
// line 228
// line 229
bool $tmp432 = param0.value;
if ($tmp432) goto block19; else goto block20;
block19:;
panda$core$UInt64 $tmp433 = *(&local1);
panda$core$UInt64 $tmp434 = (panda$core$UInt64) {10};
panda$core$Bit $tmp435 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp433, $tmp434);
*(&local4) = $tmp435;
goto block21;
block20:;
*(&local4) = param0;
goto block21;
block21:;
panda$core$Bit $tmp436 = *(&local4);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block22; else goto block24;
block22:;
// line 230
panda$core$Int64 $tmp438 = panda$core$UInt64$convert$R$panda$core$Int64(param1);
panda$core$Int64 $tmp439 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp438);
panda$core$UInt64 $tmp440 = panda$core$Int64$convert$R$panda$core$UInt64($tmp439);
panda$core$UInt64 $tmp441 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64($tmp440, param2);
*(&local3) = $tmp441;
goto block23;
block24:;
// line 1
// line 233
*(&local3) = param1;
goto block23;
block23:;
// line 235
panda$core$Int64 $tmp442 = (panda$core$Int64) {64};
*(&local5) = $tmp442;
// line 236
panda$core$Int64 $tmp443 = *(&local5);
int64_t $tmp444 = $tmp443.value;
panda$core$Char8* $tmp445 = ((panda$core$Char8*) pandaZAlloc($tmp444 * 1));
*(&local6) = $tmp445;
// line 237
panda$core$Int64 $tmp446 = *(&local5);
panda$core$Int64 $tmp447 = (panda$core$Int64) {1};
int64_t $tmp448 = $tmp446.value;
int64_t $tmp449 = $tmp447.value;
int64_t $tmp450 = $tmp448 - $tmp449;
panda$core$Int64 $tmp451 = (panda$core$Int64) {$tmp450};
*(&local7) = $tmp451;
// line 238
goto block25;
block25:;
// line 239
panda$core$Char8* $tmp452 = *(&local6);
panda$collections$ListView* $tmp453 = *(&local2);
panda$core$UInt64 $tmp454 = *(&local3);
panda$core$UInt64 $tmp455 = *(&local1);
panda$core$UInt64 $tmp456 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64($tmp454, $tmp455);
panda$core$Int64 $tmp457 = panda$core$UInt64$convert$R$panda$core$Int64($tmp456);
ITable* $tmp458 = $tmp453->$class->itable;
while ($tmp458->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp458 = $tmp458->next;
}
$fn460 $tmp459 = $tmp458->methods[0];
panda$core$Object* $tmp461 = $tmp459($tmp453, $tmp457);
panda$core$Int64 $tmp462 = *(&local7);
int64_t $tmp463 = $tmp462.value;
$tmp452[$tmp463] = ((panda$core$Char8$wrapper*) $tmp461)->value;
panda$core$Panda$unref$panda$core$Object$Q($tmp461);
// line 240
panda$core$UInt64 $tmp464 = *(&local3);
panda$core$UInt64 $tmp465 = *(&local1);
uint64_t $tmp466 = $tmp464.value;
uint64_t $tmp467 = $tmp465.value;
uint64_t $tmp468 = $tmp466 / $tmp467;
panda$core$UInt64 $tmp469 = (panda$core$UInt64) {$tmp468};
*(&local3) = $tmp469;
// line 241
panda$core$Int64 $tmp470 = *(&local7);
panda$core$Int64 $tmp471 = (panda$core$Int64) {1};
int64_t $tmp472 = $tmp470.value;
int64_t $tmp473 = $tmp471.value;
int64_t $tmp474 = $tmp472 - $tmp473;
panda$core$Int64 $tmp475 = (panda$core$Int64) {$tmp474};
*(&local7) = $tmp475;
goto block26;
block26:;
panda$core$UInt64 $tmp476 = *(&local3);
panda$core$UInt64 $tmp477 = (panda$core$UInt64) {0};
uint64_t $tmp478 = $tmp476.value;
uint64_t $tmp479 = $tmp477.value;
bool $tmp480 = $tmp478 > $tmp479;
panda$core$Bit $tmp481 = (panda$core$Bit) {$tmp480};
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block25; else goto block27;
block27:;
// line 244
bool $tmp483 = param0.value;
if ($tmp483) goto block28; else goto block29;
block28:;
panda$core$UInt64 $tmp484 = *(&local1);
panda$core$UInt64 $tmp485 = (panda$core$UInt64) {10};
panda$core$Bit $tmp486 = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit($tmp484, $tmp485);
*(&local8) = $tmp486;
goto block30;
block29:;
*(&local8) = param0;
goto block30;
block30:;
panda$core$Bit $tmp487 = *(&local8);
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block31; else goto block32;
block31:;
// line 245
panda$core$Char8* $tmp489 = *(&local6);
panda$core$UInt8 $tmp490 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp491 = panda$core$Char8$init$panda$core$UInt8($tmp490);
panda$core$Int64 $tmp492 = *(&local7);
int64_t $tmp493 = $tmp492.value;
$tmp489[$tmp493] = $tmp491;
// line 246
panda$core$Int64 $tmp494 = *(&local7);
panda$core$Int64 $tmp495 = (panda$core$Int64) {1};
int64_t $tmp496 = $tmp494.value;
int64_t $tmp497 = $tmp495.value;
int64_t $tmp498 = $tmp496 - $tmp497;
panda$core$Int64 $tmp499 = (panda$core$Int64) {$tmp498};
*(&local7) = $tmp499;
goto block32;
block32:;
// line 248
panda$core$Int64 $tmp500 = *(&local7);
panda$core$Int64 $tmp501 = (panda$core$Int64) {1};
int64_t $tmp502 = $tmp500.value;
int64_t $tmp503 = $tmp501.value;
int64_t $tmp504 = $tmp502 + $tmp503;
panda$core$Int64 $tmp505 = (panda$core$Int64) {$tmp504};
*(&local7) = $tmp505;
// line 249
panda$core$Int64 $tmp506 = *(&local5);
panda$core$Int64 $tmp507 = *(&local7);
int64_t $tmp508 = $tmp506.value;
int64_t $tmp509 = $tmp507.value;
int64_t $tmp510 = $tmp508 - $tmp509;
panda$core$Int64 $tmp511 = (panda$core$Int64) {$tmp510};
*(&local9) = $tmp511;
// line 250
panda$core$Int64 $tmp512 = (panda$core$Int64) {0};
panda$core$Int64 $tmp513 = *(&local9);
panda$core$Bit $tmp514 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp515 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp512, $tmp513, $tmp514);
panda$core$Int64 $tmp516 = $tmp515.min;
*(&local10) = $tmp516;
panda$core$Int64 $tmp517 = $tmp515.max;
panda$core$Bit $tmp518 = $tmp515.inclusive;
bool $tmp519 = $tmp518.value;
panda$core$Int64 $tmp520 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp521 = panda$core$Int64$convert$R$panda$core$UInt64($tmp520);
if ($tmp519) goto block36; else goto block37;
block36:;
int64_t $tmp522 = $tmp516.value;
int64_t $tmp523 = $tmp517.value;
bool $tmp524 = $tmp522 <= $tmp523;
panda$core$Bit $tmp525 = (panda$core$Bit) {$tmp524};
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block33; else goto block34;
block37:;
int64_t $tmp527 = $tmp516.value;
int64_t $tmp528 = $tmp517.value;
bool $tmp529 = $tmp527 < $tmp528;
panda$core$Bit $tmp530 = (panda$core$Bit) {$tmp529};
bool $tmp531 = $tmp530.value;
if ($tmp531) goto block33; else goto block34;
block33:;
// line 251
panda$core$Char8* $tmp532 = *(&local6);
panda$core$Char8* $tmp533 = *(&local6);
panda$core$Int64 $tmp534 = *(&local10);
panda$core$Int64 $tmp535 = *(&local7);
int64_t $tmp536 = $tmp534.value;
int64_t $tmp537 = $tmp535.value;
int64_t $tmp538 = $tmp536 + $tmp537;
panda$core$Int64 $tmp539 = (panda$core$Int64) {$tmp538};
int64_t $tmp540 = $tmp539.value;
panda$core$Char8 $tmp541 = $tmp533[$tmp540];
panda$core$Int64 $tmp542 = *(&local10);
int64_t $tmp543 = $tmp542.value;
$tmp532[$tmp543] = $tmp541;
goto block35;
block35:;
panda$core$Int64 $tmp544 = *(&local10);
int64_t $tmp545 = $tmp517.value;
int64_t $tmp546 = $tmp544.value;
int64_t $tmp547 = $tmp545 - $tmp546;
panda$core$Int64 $tmp548 = (panda$core$Int64) {$tmp547};
panda$core$UInt64 $tmp549 = panda$core$Int64$convert$R$panda$core$UInt64($tmp548);
if ($tmp519) goto block39; else goto block40;
block39:;
uint64_t $tmp550 = $tmp549.value;
uint64_t $tmp551 = $tmp521.value;
bool $tmp552 = $tmp550 >= $tmp551;
panda$core$Bit $tmp553 = (panda$core$Bit) {$tmp552};
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block38; else goto block34;
block40:;
uint64_t $tmp555 = $tmp549.value;
uint64_t $tmp556 = $tmp521.value;
bool $tmp557 = $tmp555 > $tmp556;
panda$core$Bit $tmp558 = (panda$core$Bit) {$tmp557};
bool $tmp559 = $tmp558.value;
if ($tmp559) goto block38; else goto block34;
block38:;
int64_t $tmp560 = $tmp544.value;
int64_t $tmp561 = $tmp520.value;
int64_t $tmp562 = $tmp560 + $tmp561;
panda$core$Int64 $tmp563 = (panda$core$Int64) {$tmp562};
*(&local10) = $tmp563;
goto block33;
block34:;
// line 253
panda$core$String* $tmp564 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp565 = *(&local6);
panda$core$Int64 $tmp566 = *(&local9);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp564, $tmp565, $tmp566);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
panda$collections$ListView* $tmp567 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
// unreffing digits
*(&local2) = ((panda$collections$ListView*) NULL);
return $tmp564;

}
void panda$core$Panda$cleanup(panda$core$Panda* param0) {

panda$collections$HashMap** $tmp568 = &param0->allocations;
panda$collections$HashMap* $tmp569 = *$tmp568;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp569));
panda$collections$HashMap** $tmp570 = &param0->traces;
panda$collections$HashMap* $tmp571 = *$tmp570;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
return;

}

