#include "frost/core/Frost.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Maybe.h"
#include "frost/core/Int64.h"
#include "frost/core/Error.h"
#include "frost/core/Bit.h"
#include "frost/collections/Key.h"
#include "frost/collections/MapView.h"
#include "frost/collections/Iterator.h"
#include "frost/io/Console.h"
#include "frost/io/OutputStream.h"
#include "frost/core/System.h"
#include "frost/core/UInt64.h"
#include "frost/core/Char32.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt8.h"
#include "frost/core/Char8.h"
#include "frost/core/String/Index.h"
#include "frost/core/Equatable.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/collections/ListView.h"
#include "frost/core/Comparable.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/collections/List.h"
#include "frost/collections/ListWriter.h"
#include "frost/core/MutableMethod.h"


static frost$core$String $s1;
frost$core$Frost$class_type frost$core$Frost$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Frost$cleanup, frost$core$Frost$countAllocation$frost$core$Class, frost$core$Frost$countDeallocation$frost$core$Class, frost$core$Frost$dumpReport, frost$core$Frost$countTrace$frost$core$String} };

typedef frost$collections$Iterator* (*$fn89)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn93)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn98)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn129)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn133)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn138)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn181)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn197)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn273)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn390)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Object* (*$fn472)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn581)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn586)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn590)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef void (*$fn594)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef frost$core$Object* (*$fn617)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn647)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn655)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn657)(frost$core$Object*, frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, -3824106976344999226, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -7013691163086253143, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2f\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 31, 768544994797342119, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2f\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 31, 768544994797342119, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, -799920339492125719, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 3644790808526678741, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2f\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 38, -87923020846717013, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2f\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 38, -87923020846717013, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 8772831143845743696, NULL };

void frost$core$Frost$init(frost$core$Frost* param0) {

// line 11
frost$collections$HashMap* $tmp2 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$collections$HashMap** $tmp3 = &param0->allocations;
frost$collections$HashMap* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$HashMap** $tmp5 = &param0->allocations;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// line 13
frost$collections$HashMap* $tmp6 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$HashMap** $tmp7 = &param0->traces;
frost$collections$HashMap* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$HashMap** $tmp9 = &param0->traces;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$Maybe* frost$core$Frost$success$frost$core$Object$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$Object* param0) {

// line 21
frost$core$Maybe* $tmp10 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp11 = (frost$core$Int64) {0};
frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T($tmp10, $tmp11, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
return $tmp10;

}
frost$core$Maybe* frost$core$Frost$error$frost$core$String$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$String* param0) {

// line 27
frost$core$Maybe* $tmp12 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp13 = (frost$core$Int64) {1};
frost$core$Error* $tmp14 = (frost$core$Error*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Error$class);
frost$core$Error$init$frost$core$String($tmp14, param0);
frost$core$Maybe$init$frost$core$Int64$frost$core$Error($tmp12, $tmp13, $tmp14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
return $tmp12;

}
frost$core$String* frost$core$Frost$allocationName$frost$core$Class$R$frost$core$String(frost$core$Class* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
// line 33
frost$core$String** $tmp15 = &param0->name;
frost$core$String* $tmp16 = *$tmp15;
frost$core$Bit $tmp17 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp16, &$s18);
bool $tmp19 = $tmp17.value;
if ($tmp19) goto block3; else goto block4;
block3:;
*(&local0) = $tmp17;
goto block5;
block4:;
frost$core$String** $tmp20 = &param0->name;
frost$core$String* $tmp21 = *$tmp20;
frost$core$Bit $tmp22 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp21, &$s23);
*(&local0) = $tmp22;
goto block5;
block5:;
frost$core$Bit $tmp24 = *(&local0);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block1:;
// line 34
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s26));
return &$s27;
block2:;
// line 36
frost$core$String** $tmp28 = &param0->name;
frost$core$String* $tmp29 = *$tmp28;
frost$core$Bit $tmp30 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp29, &$s31);
bool $tmp32 = $tmp30.value;
if ($tmp32) goto block8; else goto block9;
block8:;
*(&local1) = $tmp30;
goto block10;
block9:;
frost$core$String** $tmp33 = &param0->name;
frost$core$String* $tmp34 = *$tmp33;
frost$core$Bit $tmp35 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp34, &$s36);
*(&local1) = $tmp35;
goto block10;
block10:;
frost$core$Bit $tmp37 = *(&local1);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block6; else goto block7;
block6:;
// line 37
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s39));
return &$s40;
block7:;
// line 39
frost$core$String** $tmp41 = &param0->name;
frost$core$String* $tmp42 = *$tmp41;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
return $tmp42;

}
void frost$core$Frost$countAllocation$frost$core$Class(frost$core$Frost* param0, frost$core$Class* param1) {

frost$core$String* local0 = NULL;
frost$core$Int64$nullable local1;
// line 43
frost$core$String* $tmp43 = frost$core$Frost$allocationName$frost$core$Class$R$frost$core$String(param1);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$String* $tmp44 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local0) = $tmp43;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// line 44
frost$collections$HashMap** $tmp45 = &param0->allocations;
frost$collections$HashMap* $tmp46 = *$tmp45;
frost$core$String* $tmp47 = *(&local0);
frost$core$Object* $tmp48 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp46, ((frost$collections$Key*) $tmp47));
*(&local1) = ($tmp48 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp48)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
frost$core$Frost$unref$frost$core$Object$Q($tmp48);
// line 45
frost$core$Int64$nullable $tmp49 = *(&local1);
frost$core$Bit $tmp50 = frost$core$Bit$init$builtin_bit(!$tmp49.nonnull);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block1; else goto block2;
block1:;
// line 46
frost$core$Int64 $tmp52 = (frost$core$Int64) {0};
*(&local1) = ((frost$core$Int64$nullable) { $tmp52, true });
goto block2;
block2:;
// line 48
frost$collections$HashMap** $tmp53 = &param0->allocations;
frost$collections$HashMap* $tmp54 = *$tmp53;
frost$core$String* $tmp55 = *(&local0);
frost$core$Int64$nullable $tmp56 = *(&local1);
frost$core$Int64 $tmp57 = (frost$core$Int64) {1};
int64_t $tmp58 = ((frost$core$Int64) $tmp56.value).value;
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58 + $tmp59;
frost$core$Int64 $tmp61 = (frost$core$Int64) {$tmp60};
frost$core$Int64$wrapper* $tmp62;
$tmp62 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp62->value = $tmp61;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp54, ((frost$collections$Key*) $tmp55), ((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$String* $tmp63 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void frost$core$Frost$countDeallocation$frost$core$Class(frost$core$Frost* param0, frost$core$Class* param1) {

frost$core$String* local0 = NULL;
frost$core$Int64$nullable local1;
// line 52
frost$core$String* $tmp64 = frost$core$Frost$allocationName$frost$core$Class$R$frost$core$String(param1);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$String* $tmp65 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local0) = $tmp64;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// line 53
frost$collections$HashMap** $tmp66 = &param0->allocations;
frost$collections$HashMap* $tmp67 = *$tmp66;
frost$core$String* $tmp68 = *(&local0);
frost$core$Object* $tmp69 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp67, ((frost$collections$Key*) $tmp68));
*(&local1) = ($tmp69 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp69)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
frost$core$Frost$unref$frost$core$Object$Q($tmp69);
// line 54
frost$core$Int64$nullable $tmp70 = *(&local1);
frost$core$Bit $tmp71 = frost$core$Bit$init$builtin_bit(!$tmp70.nonnull);
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block1; else goto block2;
block1:;
// line 55
frost$core$Int64 $tmp73 = (frost$core$Int64) {0};
*(&local1) = ((frost$core$Int64$nullable) { $tmp73, true });
goto block2;
block2:;
// line 57
frost$collections$HashMap** $tmp74 = &param0->allocations;
frost$collections$HashMap* $tmp75 = *$tmp74;
frost$core$String* $tmp76 = *(&local0);
frost$core$Int64$nullable $tmp77 = *(&local1);
frost$core$Int64 $tmp78 = (frost$core$Int64) {1};
int64_t $tmp79 = ((frost$core$Int64) $tmp77.value).value;
int64_t $tmp80 = $tmp78.value;
int64_t $tmp81 = $tmp79 - $tmp80;
frost$core$Int64 $tmp82 = (frost$core$Int64) {$tmp81};
frost$core$Int64$wrapper* $tmp83;
$tmp83 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp83->value = $tmp82;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp75, ((frost$collections$Key*) $tmp76), ((frost$core$Object*) $tmp83));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$String* $tmp84 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void frost$core$Frost$dumpReport(frost$core$Frost* param0) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// line 61
frost$collections$HashMap** $tmp85 = &param0->allocations;
frost$collections$HashMap* $tmp86 = *$tmp85;
ITable* $tmp87 = ((frost$collections$MapView*) $tmp86)->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp87 = $tmp87->next;
}
$fn89 $tmp88 = $tmp87->methods[3];
frost$collections$Iterator* $tmp90 = $tmp88(((frost$collections$MapView*) $tmp86));
goto block1;
block1:;
ITable* $tmp91 = $tmp90->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[0];
frost$core$Bit $tmp94 = $tmp92($tmp90);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$String*) NULL);
ITable* $tmp96 = $tmp90->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp96 = $tmp96->next;
}
$fn98 $tmp97 = $tmp96->methods[1];
frost$core$Object* $tmp99 = $tmp97($tmp90);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp99)));
frost$core$String* $tmp100 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local0) = ((frost$core$String*) $tmp99);
// line 62
frost$collections$HashMap** $tmp101 = &param0->allocations;
frost$collections$HashMap* $tmp102 = *$tmp101;
frost$core$String* $tmp103 = *(&local0);
frost$core$Object* $tmp104 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp102, ((frost$collections$Key*) $tmp103));
frost$core$Int64 $tmp105 = (frost$core$Int64) {0};
int64_t $tmp106 = ((frost$core$Int64) ($tmp104 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp104)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).value).value;
int64_t $tmp107 = $tmp105.value;
bool $tmp108 = $tmp106 != $tmp107;
frost$core$Bit $tmp109 = (frost$core$Bit) {$tmp108};
bool $tmp110 = $tmp109.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp104);
if ($tmp110) goto block4; else goto block5;
block4:;
// line 63
frost$core$String* $tmp111 = *(&local0);
frost$core$String* $tmp112 = frost$core$String$get_asString$R$frost$core$String($tmp111);
frost$core$String* $tmp113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp112, &$s114);
frost$collections$HashMap** $tmp115 = &param0->allocations;
frost$collections$HashMap* $tmp116 = *$tmp115;
frost$core$String* $tmp117 = *(&local0);
frost$core$Object* $tmp118 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp116, ((frost$collections$Key*) $tmp117));
frost$core$Object* $tmp119;
if (($tmp118 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp118)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).nonnull) {
    frost$core$Int64$wrapper* $tmp120;
    $tmp120 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp120->value = ((frost$core$Int64) ($tmp118 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp118)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).value);
    $tmp119 = ((frost$core$Object*) $tmp120);
}
else {
    $tmp119 = NULL;
}
frost$core$String* $tmp121 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp113, $tmp119);
frost$core$String* $tmp122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp121, &$s123);
frost$io$Console$printLine$frost$core$String($tmp122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q($tmp119);
frost$core$Frost$unref$frost$core$Object$Q($tmp118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp99);
frost$core$String* $tmp124 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// line 66
frost$collections$HashMap** $tmp125 = &param0->traces;
frost$collections$HashMap* $tmp126 = *$tmp125;
ITable* $tmp127 = ((frost$collections$MapView*) $tmp126)->$class->itable;
while ($tmp127->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[3];
frost$collections$Iterator* $tmp130 = $tmp128(((frost$collections$MapView*) $tmp126));
goto block6;
block6:;
ITable* $tmp131 = $tmp130->$class->itable;
while ($tmp131->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp131 = $tmp131->next;
}
$fn133 $tmp132 = $tmp131->methods[0];
frost$core$Bit $tmp134 = $tmp132($tmp130);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block8; else goto block7;
block7:;
*(&local1) = ((frost$core$String*) NULL);
ITable* $tmp136 = $tmp130->$class->itable;
while ($tmp136->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp136 = $tmp136->next;
}
$fn138 $tmp137 = $tmp136->methods[1];
frost$core$Object* $tmp139 = $tmp137($tmp130);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp139)));
frost$core$String* $tmp140 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local1) = ((frost$core$String*) $tmp139);
// line 67
frost$core$String* $tmp141 = *(&local1);
frost$core$String* $tmp142 = frost$core$String$get_asString$R$frost$core$String($tmp141);
frost$core$String* $tmp143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp142, &$s144);
frost$collections$HashMap** $tmp145 = &param0->traces;
frost$collections$HashMap* $tmp146 = *$tmp145;
frost$core$String* $tmp147 = *(&local1);
frost$core$Object* $tmp148 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp146, ((frost$collections$Key*) $tmp147));
frost$core$Object* $tmp149;
if (($tmp148 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp148)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).nonnull) {
    frost$core$Int64$wrapper* $tmp150;
    $tmp150 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp150->value = ((frost$core$Int64) ($tmp148 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp148)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).value);
    $tmp149 = ((frost$core$Object*) $tmp150);
}
else {
    $tmp149 = NULL;
}
frost$core$String* $tmp151 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp143, $tmp149);
frost$core$String* $tmp152 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp151, &$s153);
frost$io$Console$printLine$frost$core$String($tmp152);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$core$Frost$unref$frost$core$Object$Q($tmp149);
frost$core$Frost$unref$frost$core$Object$Q($tmp148);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q($tmp139);
frost$core$String* $tmp154 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local1) = ((frost$core$String*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
return;

}
void frost$core$Frost$countTrace$frost$core$String(frost$core$Frost* param0, frost$core$String* param1) {

frost$core$Int64$nullable local0;
// line 84
frost$collections$HashMap** $tmp155 = &param0->traces;
frost$collections$HashMap* $tmp156 = *$tmp155;
frost$core$Object* $tmp157 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp156, ((frost$collections$Key*) param1));
*(&local0) = ($tmp157 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp157)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
frost$core$Frost$unref$frost$core$Object$Q($tmp157);
// line 85
frost$core$Int64$nullable $tmp158 = *(&local0);
frost$core$Bit $tmp159 = frost$core$Bit$init$builtin_bit(!$tmp158.nonnull);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block1; else goto block2;
block1:;
// line 86
frost$core$Int64 $tmp161 = (frost$core$Int64) {0};
*(&local0) = ((frost$core$Int64$nullable) { $tmp161, true });
goto block2;
block2:;
// line 88
frost$collections$HashMap** $tmp162 = &param0->traces;
frost$collections$HashMap* $tmp163 = *$tmp162;
frost$core$Int64$nullable $tmp164 = *(&local0);
frost$core$Int64 $tmp165 = (frost$core$Int64) {1};
int64_t $tmp166 = ((frost$core$Int64) $tmp164.value).value;
int64_t $tmp167 = $tmp165.value;
int64_t $tmp168 = $tmp166 + $tmp167;
frost$core$Int64 $tmp169 = (frost$core$Int64) {$tmp168};
frost$core$Int64$wrapper* $tmp170;
$tmp170 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp170->value = $tmp169;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp163, ((frost$collections$Key*) param1), ((frost$core$Object*) $tmp170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
return;

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$Error* local0 = NULL;
// line 105
*(&local0) = ((frost$core$Error*) NULL);
// line 106
frost$io$OutputStream* $tmp171 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp172 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s173, param0);
frost$core$String* $tmp174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp172, &$s175);
frost$core$Int64$wrapper* $tmp176;
$tmp176 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp176->value = param1;
frost$core$String* $tmp177 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp174, ((frost$core$Object*) $tmp176));
frost$core$String* $tmp178 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp177, &$s179);
$fn181 $tmp180 = ($fn181) $tmp171->$class->vtable[19];
frost$core$Error* $tmp182 = $tmp180($tmp171, $tmp178);
if ($tmp182 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local0) = $tmp182;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
goto block2;
block1:;
goto block2;
block2:;
frost$core$Error* $tmp183 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local0) = ((frost$core$Error*) NULL);
// line 110
frost$core$System$crash();
return;

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$String* param2) {

frost$core$Error* local0 = NULL;
// line 115
*(&local0) = ((frost$core$Error*) NULL);
// line 116
frost$io$OutputStream* $tmp184 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp185 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s186, param0);
frost$core$String* $tmp187 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp185, &$s188);
frost$core$Int64$wrapper* $tmp189;
$tmp189 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp189->value = param1;
frost$core$String* $tmp190 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp187, ((frost$core$Object*) $tmp189));
frost$core$String* $tmp191 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp190, &$s192);
frost$core$String* $tmp193 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp191, param2);
frost$core$String* $tmp194 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp193, &$s195);
$fn197 $tmp196 = ($fn197) $tmp184->$class->vtable[19];
frost$core$Error* $tmp198 = $tmp196($tmp184, $tmp194);
if ($tmp198 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local0) = $tmp198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
goto block2;
block1:;
goto block2;
block2:;
frost$core$Error* $tmp199 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local0) = ((frost$core$Error*) NULL);
// line 120
frost$core$System$crash();
return;

}
frost$core$UInt64$nullable frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q(frost$core$Char32 param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
// line 125
frost$core$Int32 $tmp200 = (frost$core$Int32) {48};
frost$core$Char32 $tmp201 = frost$core$Char32$init$frost$core$Int32($tmp200);
frost$core$Bit $tmp202 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp201);
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block3; else goto block4;
block3:;
frost$core$Int32 $tmp204 = (frost$core$Int32) {57};
frost$core$Char32 $tmp205 = frost$core$Char32$init$frost$core$Int32($tmp204);
frost$core$Bit $tmp206 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp205);
*(&local0) = $tmp206;
goto block5;
block4:;
*(&local0) = $tmp202;
goto block5;
block5:;
frost$core$Bit $tmp207 = *(&local0);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block1; else goto block2;
block1:;
// line 126
frost$core$UInt64 $tmp209 = frost$core$Char32$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp210 = (frost$core$UInt8) {48};
frost$core$Char8 $tmp211 = frost$core$Char8$init$frost$core$UInt8($tmp210);
frost$core$UInt64 $tmp212 = frost$core$Char8$get_asUInt64$R$frost$core$UInt64($tmp211);
uint64_t $tmp213 = $tmp209.value;
uint64_t $tmp214 = $tmp212.value;
uint64_t $tmp215 = $tmp213 - $tmp214;
frost$core$UInt64 $tmp216 = (frost$core$UInt64) {$tmp215};
return ((frost$core$UInt64$nullable) { $tmp216, true });
block2:;
// line 128
frost$core$Int32 $tmp217 = (frost$core$Int32) {65};
frost$core$Char32 $tmp218 = frost$core$Char32$init$frost$core$Int32($tmp217);
frost$core$Bit $tmp219 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp218);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block8; else goto block9;
block8:;
frost$core$Int32 $tmp221 = (frost$core$Int32) {90};
frost$core$Char32 $tmp222 = frost$core$Char32$init$frost$core$Int32($tmp221);
frost$core$Bit $tmp223 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp222);
*(&local1) = $tmp223;
goto block10;
block9:;
*(&local1) = $tmp219;
goto block10;
block10:;
frost$core$Bit $tmp224 = *(&local1);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block6; else goto block7;
block6:;
// line 129
frost$core$UInt64 $tmp226 = frost$core$Char32$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp227 = (frost$core$UInt8) {65};
frost$core$Char8 $tmp228 = frost$core$Char8$init$frost$core$UInt8($tmp227);
frost$core$UInt64 $tmp229 = frost$core$Char8$get_asUInt64$R$frost$core$UInt64($tmp228);
uint64_t $tmp230 = $tmp226.value;
uint64_t $tmp231 = $tmp229.value;
uint64_t $tmp232 = $tmp230 - $tmp231;
frost$core$UInt64 $tmp233 = (frost$core$UInt64) {$tmp232};
frost$core$UInt64 $tmp234 = (frost$core$UInt64) {10};
uint64_t $tmp235 = $tmp233.value;
uint64_t $tmp236 = $tmp234.value;
uint64_t $tmp237 = $tmp235 + $tmp236;
frost$core$UInt64 $tmp238 = (frost$core$UInt64) {$tmp237};
return ((frost$core$UInt64$nullable) { $tmp238, true });
block7:;
// line 131
frost$core$Int32 $tmp239 = (frost$core$Int32) {97};
frost$core$Char32 $tmp240 = frost$core$Char32$init$frost$core$Int32($tmp239);
frost$core$Bit $tmp241 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp240);
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block13; else goto block14;
block13:;
frost$core$Int32 $tmp243 = (frost$core$Int32) {122};
frost$core$Char32 $tmp244 = frost$core$Char32$init$frost$core$Int32($tmp243);
frost$core$Bit $tmp245 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp244);
*(&local2) = $tmp245;
goto block15;
block14:;
*(&local2) = $tmp241;
goto block15;
block15:;
frost$core$Bit $tmp246 = *(&local2);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block11; else goto block12;
block11:;
// line 132
frost$core$UInt64 $tmp248 = frost$core$Char32$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp249 = (frost$core$UInt8) {97};
frost$core$Char8 $tmp250 = frost$core$Char8$init$frost$core$UInt8($tmp249);
frost$core$UInt64 $tmp251 = frost$core$Char8$get_asUInt64$R$frost$core$UInt64($tmp250);
uint64_t $tmp252 = $tmp248.value;
uint64_t $tmp253 = $tmp251.value;
uint64_t $tmp254 = $tmp252 - $tmp253;
frost$core$UInt64 $tmp255 = (frost$core$UInt64) {$tmp254};
frost$core$UInt64 $tmp256 = (frost$core$UInt64) {10};
uint64_t $tmp257 = $tmp255.value;
uint64_t $tmp258 = $tmp256.value;
uint64_t $tmp259 = $tmp257 + $tmp258;
frost$core$UInt64 $tmp260 = (frost$core$UInt64) {$tmp259};
return ((frost$core$UInt64$nullable) { $tmp260, true });
block12:;
// line 134
return ((frost$core$UInt64$nullable) { .nonnull = false });

}
frost$core$UInt64$nullable frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64 local0;
frost$core$UInt64 local1;
frost$core$String$Index local2;
frost$core$UInt64$nullable local3;
frost$core$Bit local4;
// line 142
frost$core$Bit $tmp261 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s262);
bool $tmp263 = $tmp261.value;
if ($tmp263) goto block1; else goto block2;
block1:;
// line 143
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 145
frost$core$UInt64 $tmp264 = (frost$core$UInt64) {0};
*(&local0) = $tmp264;
// line 146
frost$core$UInt64 $tmp265 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64(param1);
*(&local1) = $tmp265;
// line 147
frost$core$String$Index $tmp266 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local2) = $tmp266;
// line 148
goto block3;
block3:;
frost$core$String$Index $tmp267 = *(&local2);
frost$core$String$Index$wrapper* $tmp268;
$tmp268 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp268->value = $tmp267;
frost$core$String$Index $tmp269 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$wrapper* $tmp270;
$tmp270 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp270->value = $tmp269;
ITable* $tmp271 = ((frost$core$Equatable*) $tmp268)->$class->itable;
while ($tmp271->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp271 = $tmp271->next;
}
$fn273 $tmp272 = $tmp271->methods[1];
frost$core$Bit $tmp274 = $tmp272(((frost$core$Equatable*) $tmp268), ((frost$core$Equatable*) $tmp270));
bool $tmp275 = $tmp274.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp270)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp268)));
if ($tmp275) goto block4; else goto block5;
block4:;
// line 149
frost$core$String$Index $tmp276 = *(&local2);
frost$core$Char32 $tmp277 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp276);
frost$core$UInt64$nullable $tmp278 = frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q($tmp277);
*(&local3) = $tmp278;
// line 150
frost$core$UInt64$nullable $tmp279 = *(&local3);
frost$core$Bit $tmp280 = frost$core$Bit$init$builtin_bit(!$tmp279.nonnull);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block8; else goto block9;
block8:;
*(&local4) = $tmp280;
goto block10;
block9:;
frost$core$UInt64$nullable $tmp282 = *(&local3);
frost$core$UInt64 $tmp283 = *(&local1);
uint64_t $tmp284 = ((frost$core$UInt64) $tmp282.value).value;
uint64_t $tmp285 = $tmp283.value;
bool $tmp286 = $tmp284 >= $tmp285;
frost$core$Bit $tmp287 = (frost$core$Bit) {$tmp286};
*(&local4) = $tmp287;
goto block10;
block10:;
frost$core$Bit $tmp288 = *(&local4);
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block6; else goto block7;
block6:;
// line 151
return ((frost$core$UInt64$nullable) { .nonnull = false });
block7:;
// line 153
frost$core$UInt64 $tmp290 = *(&local0);
frost$core$UInt64 $tmp291 = *(&local1);
uint64_t $tmp292 = $tmp290.value;
uint64_t $tmp293 = $tmp291.value;
uint64_t $tmp294 = $tmp292 * $tmp293;
frost$core$UInt64 $tmp295 = (frost$core$UInt64) {$tmp294};
frost$core$UInt64$nullable $tmp296 = *(&local3);
uint64_t $tmp297 = $tmp295.value;
uint64_t $tmp298 = ((frost$core$UInt64) $tmp296.value).value;
uint64_t $tmp299 = $tmp297 + $tmp298;
frost$core$UInt64 $tmp300 = (frost$core$UInt64) {$tmp299};
*(&local0) = $tmp300;
// line 154
frost$core$String$Index $tmp301 = *(&local2);
frost$core$String$Index $tmp302 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp301);
*(&local2) = $tmp302;
goto block3;
block5:;
// line 156
frost$core$UInt64 $tmp303 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp303, true });

}
frost$core$String* frost$core$Frost$align$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$Int64$nullable local1;
frost$core$Char32 local2;
// line 182
frost$core$Int64 $tmp304 = frost$core$String$get_length$R$frost$core$Int64(param1);
frost$core$Int64 $tmp305 = (frost$core$Int64) {2};
int64_t $tmp306 = $tmp304.value;
int64_t $tmp307 = $tmp305.value;
bool $tmp308 = $tmp306 >= $tmp307;
frost$core$Bit $tmp309 = (frost$core$Bit) {$tmp308};
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp311 = (frost$core$Int64) {182};
frost$core$String* $tmp312 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s313, param1);
frost$core$String* $tmp314 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp312, &$s315);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s316, $tmp311, $tmp314);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
abort(); // unreachable
block1:;
// line 183
frost$core$String$Index $tmp317 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$String$Index $tmp318 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp317);
*(&local0) = $tmp318;
// line 184
frost$core$String$Index $tmp319 = *(&local0);
frost$core$Char32 $tmp320 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp319);
frost$core$Int32 $tmp321 = (frost$core$Int32) {60};
frost$core$Char32 $tmp322 = frost$core$Char32$init$frost$core$Int32($tmp321);
frost$core$Bit $tmp323 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp320, $tmp322);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block4; else goto block5;
block5:;
frost$core$Int32 $tmp325 = (frost$core$Int32) {94};
frost$core$Char32 $tmp326 = frost$core$Char32$init$frost$core$Int32($tmp325);
frost$core$Bit $tmp327 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp320, $tmp326);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block4; else goto block6;
block6:;
frost$core$Int32 $tmp329 = (frost$core$Int32) {62};
frost$core$Char32 $tmp330 = frost$core$Char32$init$frost$core$Int32($tmp329);
frost$core$Bit $tmp331 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp320, $tmp330);
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block4; else goto block7;
block4:;
goto block3;
block7:;
// line 189
frost$core$String$Index $tmp333 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local0) = $tmp333;
goto block3;
block3:;
// line 192
frost$core$String$Index $tmp334 = *(&local0);
frost$core$String$Index $tmp335 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp334);
frost$core$Bit $tmp336 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp337 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp335, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp336);
frost$core$String* $tmp338 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp337);
frost$core$Int64$nullable $tmp339 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp338);
*(&local1) = $tmp339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// line 193
// line 194
frost$core$String$Index $tmp340 = *(&local0);
frost$core$String$Index $tmp341 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$Bit $tmp342 = frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit($tmp340, $tmp341);
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block8; else goto block10;
block8:;
// line 195
frost$core$Int32 $tmp344 = (frost$core$Int32) {32};
frost$core$Char32 $tmp345 = frost$core$Char32$init$frost$core$Int32($tmp344);
*(&local2) = $tmp345;
goto block9;
block10:;
// line 1
// line 198
frost$core$String$Index $tmp346 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$Char32 $tmp347 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp346);
*(&local2) = $tmp347;
goto block9;
block9:;
// line 200
frost$core$String$Index $tmp348 = *(&local0);
frost$core$Char32 $tmp349 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp348);
frost$core$Int32 $tmp350 = (frost$core$Int32) {60};
frost$core$Char32 $tmp351 = frost$core$Char32$init$frost$core$Int32($tmp350);
frost$core$Bit $tmp352 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp349, $tmp351);
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block12; else goto block13;
block12:;
// line 201
frost$core$Int64$nullable $tmp354 = *(&local1);
frost$core$Char32 $tmp355 = *(&local2);
frost$core$String* $tmp356 = frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int64) $tmp354.value), $tmp355);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
return $tmp356;
block13:;
frost$core$Int32 $tmp357 = (frost$core$Int32) {94};
frost$core$Char32 $tmp358 = frost$core$Char32$init$frost$core$Int32($tmp357);
frost$core$Bit $tmp359 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp349, $tmp358);
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block14; else goto block15;
block14:;
// line 202
frost$core$Int64$nullable $tmp361 = *(&local1);
frost$core$Char32 $tmp362 = *(&local2);
frost$core$String* $tmp363 = frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int64) $tmp361.value), $tmp362);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
return $tmp363;
block15:;
frost$core$Int32 $tmp364 = (frost$core$Int32) {62};
frost$core$Char32 $tmp365 = frost$core$Char32$init$frost$core$Int32($tmp364);
frost$core$Bit $tmp366 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp349, $tmp365);
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block16; else goto block17;
block16:;
// line 203
frost$core$Int64$nullable $tmp368 = *(&local1);
frost$core$Char32 $tmp369 = *(&local2);
frost$core$String* $tmp370 = frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int64) $tmp368.value), $tmp369);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
return $tmp370;
block17:;
// line 204
frost$core$Bit $tmp371 = frost$core$Bit$init$builtin_bit(false);
bool $tmp372 = $tmp371.value;
if ($tmp372) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp373 = (frost$core$Int64) {204};
frost$core$String* $tmp374 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s375, param1);
frost$core$String* $tmp376 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp374, &$s377);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s378, $tmp373, $tmp376);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
abort(); // unreachable
block18:;
// line 204
goto block20;
block20:;
goto block20;
block21:;
goto block11;
block11:;
goto block22;
block22:;

}
frost$core$String* frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String(frost$core$Bit param0, frost$core$UInt64 param1, frost$core$UInt64 param2, frost$core$String* param3) {

frost$core$String$Index local0;
frost$core$UInt64 local1;
frost$collections$ListView* local2 = NULL;
frost$core$UInt64 local3;
frost$core$Bit local4;
frost$core$Int64 local5;
frost$core$Char8* local6;
frost$core$Int64 local7;
frost$core$Bit local8;
frost$core$Int64 local9;
frost$core$Int64 local10;
// line 218
frost$core$String$Index $tmp379 = frost$core$String$get_start$R$frost$core$String$Index(param3);
*(&local0) = $tmp379;
// line 219
frost$core$UInt64 $tmp380 = (frost$core$UInt64) {10};
*(&local1) = $tmp380;
// line 220
frost$collections$ListView* $tmp381 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s382);
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
frost$collections$ListView* $tmp383 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local2) = $tmp381;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
// line 221
frost$core$String$Index $tmp384 = *(&local0);
frost$core$String$Index$wrapper* $tmp385;
$tmp385 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp385->value = $tmp384;
frost$core$String$Index $tmp386 = frost$core$String$get_end$R$frost$core$String$Index(param3);
frost$core$String$Index$wrapper* $tmp387;
$tmp387 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp387->value = $tmp386;
ITable* $tmp388 = ((frost$core$Comparable*) $tmp385)->$class->itable;
while ($tmp388->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp388 = $tmp388->next;
}
$fn390 $tmp389 = $tmp388->methods[1];
frost$core$Bit $tmp391 = $tmp389(((frost$core$Comparable*) $tmp385), ((frost$core$Comparable*) $tmp387));
bool $tmp392 = $tmp391.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp387)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp385)));
if ($tmp392) goto block1; else goto block2;
block1:;
// line 222
frost$core$String$Index $tmp393 = *(&local0);
frost$core$Char32 $tmp394 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param3, $tmp393);
frost$core$Int32 $tmp395 = (frost$core$Int32) {98};
frost$core$Char32 $tmp396 = frost$core$Char32$init$frost$core$Int32($tmp395);
frost$core$Bit $tmp397 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp394, $tmp396);
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block4; else goto block5;
block5:;
frost$core$Int32 $tmp399 = (frost$core$Int32) {66};
frost$core$Char32 $tmp400 = frost$core$Char32$init$frost$core$Int32($tmp399);
frost$core$Bit $tmp401 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp394, $tmp400);
bool $tmp402 = $tmp401.value;
if ($tmp402) goto block4; else goto block6;
block4:;
// line 224
frost$core$UInt64 $tmp403 = (frost$core$UInt64) {2};
*(&local1) = $tmp403;
goto block3;
block6:;
frost$core$Int32 $tmp404 = (frost$core$Int32) {111};
frost$core$Char32 $tmp405 = frost$core$Char32$init$frost$core$Int32($tmp404);
frost$core$Bit $tmp406 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp394, $tmp405);
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block7; else goto block8;
block8:;
frost$core$Int32 $tmp408 = (frost$core$Int32) {79};
frost$core$Char32 $tmp409 = frost$core$Char32$init$frost$core$Int32($tmp408);
frost$core$Bit $tmp410 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp394, $tmp409);
bool $tmp411 = $tmp410.value;
if ($tmp411) goto block7; else goto block9;
block7:;
// line 227
frost$core$UInt64 $tmp412 = (frost$core$UInt64) {8};
*(&local1) = $tmp412;
goto block3;
block9:;
frost$core$Int32 $tmp413 = (frost$core$Int32) {100};
frost$core$Char32 $tmp414 = frost$core$Char32$init$frost$core$Int32($tmp413);
frost$core$Bit $tmp415 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp394, $tmp414);
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block10; else goto block11;
block11:;
frost$core$Int32 $tmp417 = (frost$core$Int32) {68};
frost$core$Char32 $tmp418 = frost$core$Char32$init$frost$core$Int32($tmp417);
frost$core$Bit $tmp419 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp394, $tmp418);
bool $tmp420 = $tmp419.value;
if ($tmp420) goto block10; else goto block12;
block10:;
// line 230
frost$core$UInt64 $tmp421 = (frost$core$UInt64) {10};
*(&local1) = $tmp421;
goto block3;
block12:;
frost$core$Int32 $tmp422 = (frost$core$Int32) {120};
frost$core$Char32 $tmp423 = frost$core$Char32$init$frost$core$Int32($tmp422);
frost$core$Bit $tmp424 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp394, $tmp423);
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block13; else goto block14;
block13:;
// line 233
frost$core$UInt64 $tmp426 = (frost$core$UInt64) {16};
*(&local1) = $tmp426;
goto block3;
block14:;
frost$core$Int32 $tmp427 = (frost$core$Int32) {88};
frost$core$Char32 $tmp428 = frost$core$Char32$init$frost$core$Int32($tmp427);
frost$core$Bit $tmp429 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp394, $tmp428);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block15; else goto block16;
block15:;
// line 236
frost$core$UInt64 $tmp431 = (frost$core$UInt64) {16};
*(&local1) = $tmp431;
// line 237
frost$collections$ListView* $tmp432 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s433);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
frost$collections$ListView* $tmp434 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
*(&local2) = $tmp432;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
goto block3;
block16:;
// line 240
frost$core$Bit $tmp435 = frost$core$Bit$init$builtin_bit(false);
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp437 = (frost$core$Int64) {240};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s438, $tmp437, &$s439);
abort(); // unreachable
block17:;
goto block3;
block3:;
goto block2;
block2:;
// line 244
// line 245
bool $tmp440 = param0.value;
if ($tmp440) goto block21; else goto block22;
block21:;
frost$core$UInt64 $tmp441 = *(&local1);
frost$core$UInt64 $tmp442 = (frost$core$UInt64) {10};
uint64_t $tmp443 = $tmp441.value;
uint64_t $tmp444 = $tmp442.value;
bool $tmp445 = $tmp443 != $tmp444;
frost$core$Bit $tmp446 = (frost$core$Bit) {$tmp445};
*(&local4) = $tmp446;
goto block23;
block22:;
*(&local4) = param0;
goto block23;
block23:;
frost$core$Bit $tmp447 = *(&local4);
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block19; else goto block24;
block19:;
// line 246
frost$core$Int64 $tmp449 = frost$core$UInt64$get_asInt64$R$frost$core$Int64(param1);
frost$core$Int64 $tmp450 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp449);
frost$core$UInt64 $tmp451 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp450);
frost$core$UInt64 $tmp452 = frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64($tmp451, param2);
*(&local3) = $tmp452;
goto block20;
block24:;
// line 1
// line 249
*(&local3) = param1;
goto block20;
block20:;
// line 251
frost$core$Int64 $tmp453 = (frost$core$Int64) {64};
*(&local5) = $tmp453;
// line 252
frost$core$Int64 $tmp454 = *(&local5);
int64_t $tmp455 = $tmp454.value;
frost$core$Char8* $tmp456 = ((frost$core$Char8*) frostAlloc($tmp455 * 1));
*(&local6) = $tmp456;
// line 253
frost$core$Int64 $tmp457 = *(&local5);
frost$core$Int64 $tmp458 = (frost$core$Int64) {1};
int64_t $tmp459 = $tmp457.value;
int64_t $tmp460 = $tmp458.value;
int64_t $tmp461 = $tmp459 - $tmp460;
frost$core$Int64 $tmp462 = (frost$core$Int64) {$tmp461};
*(&local7) = $tmp462;
// line 254
goto block25;
block25:;
// line 255
frost$core$Char8* $tmp463 = *(&local6);
frost$core$Int64 $tmp464 = *(&local7);
frost$collections$ListView* $tmp465 = *(&local2);
frost$core$UInt64 $tmp466 = *(&local3);
frost$core$UInt64 $tmp467 = *(&local1);
frost$core$UInt64 $tmp468 = frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64($tmp466, $tmp467);
frost$core$Int64 $tmp469 = frost$core$UInt64$get_asInt64$R$frost$core$Int64($tmp468);
ITable* $tmp470 = $tmp465->$class->itable;
while ($tmp470->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp470 = $tmp470->next;
}
$fn472 $tmp471 = $tmp470->methods[0];
frost$core$Object* $tmp473 = $tmp471($tmp465, $tmp469);
int64_t $tmp474 = $tmp464.value;
$tmp463[$tmp474] = ((frost$core$Char8$wrapper*) $tmp473)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp473);
// line 256
frost$core$UInt64 $tmp475 = *(&local3);
frost$core$UInt64 $tmp476 = *(&local1);
uint64_t $tmp477 = $tmp475.value;
uint64_t $tmp478 = $tmp476.value;
uint64_t $tmp479 = $tmp477 / $tmp478;
frost$core$UInt64 $tmp480 = (frost$core$UInt64) {$tmp479};
*(&local3) = $tmp480;
// line 257
frost$core$Int64 $tmp481 = *(&local7);
frost$core$Int64 $tmp482 = (frost$core$Int64) {1};
int64_t $tmp483 = $tmp481.value;
int64_t $tmp484 = $tmp482.value;
int64_t $tmp485 = $tmp483 - $tmp484;
frost$core$Int64 $tmp486 = (frost$core$Int64) {$tmp485};
*(&local7) = $tmp486;
goto block26;
block26:;
frost$core$UInt64 $tmp487 = *(&local3);
frost$core$UInt64 $tmp488 = (frost$core$UInt64) {0};
uint64_t $tmp489 = $tmp487.value;
uint64_t $tmp490 = $tmp488.value;
bool $tmp491 = $tmp489 > $tmp490;
frost$core$Bit $tmp492 = (frost$core$Bit) {$tmp491};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block25; else goto block27;
block27:;
// line 260
bool $tmp494 = param0.value;
if ($tmp494) goto block30; else goto block31;
block30:;
frost$core$UInt64 $tmp495 = *(&local1);
frost$core$UInt64 $tmp496 = (frost$core$UInt64) {10};
frost$core$Bit $tmp497 = frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit($tmp495, $tmp496);
*(&local8) = $tmp497;
goto block32;
block31:;
*(&local8) = param0;
goto block32;
block32:;
frost$core$Bit $tmp498 = *(&local8);
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block28; else goto block29;
block28:;
// line 261
frost$core$Char8* $tmp500 = *(&local6);
frost$core$Int64 $tmp501 = *(&local7);
frost$core$UInt8 $tmp502 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp503 = frost$core$Char8$init$frost$core$UInt8($tmp502);
int64_t $tmp504 = $tmp501.value;
$tmp500[$tmp504] = $tmp503;
// line 262
frost$core$Int64 $tmp505 = *(&local7);
frost$core$Int64 $tmp506 = (frost$core$Int64) {1};
int64_t $tmp507 = $tmp505.value;
int64_t $tmp508 = $tmp506.value;
int64_t $tmp509 = $tmp507 - $tmp508;
frost$core$Int64 $tmp510 = (frost$core$Int64) {$tmp509};
*(&local7) = $tmp510;
goto block29;
block29:;
// line 264
frost$core$Int64 $tmp511 = *(&local7);
frost$core$Int64 $tmp512 = (frost$core$Int64) {1};
int64_t $tmp513 = $tmp511.value;
int64_t $tmp514 = $tmp512.value;
int64_t $tmp515 = $tmp513 + $tmp514;
frost$core$Int64 $tmp516 = (frost$core$Int64) {$tmp515};
*(&local7) = $tmp516;
// line 265
frost$core$Int64 $tmp517 = *(&local5);
frost$core$Int64 $tmp518 = *(&local7);
int64_t $tmp519 = $tmp517.value;
int64_t $tmp520 = $tmp518.value;
int64_t $tmp521 = $tmp519 - $tmp520;
frost$core$Int64 $tmp522 = (frost$core$Int64) {$tmp521};
*(&local9) = $tmp522;
// line 266
frost$core$Int64 $tmp523 = (frost$core$Int64) {0};
frost$core$Int64 $tmp524 = *(&local9);
frost$core$Bit $tmp525 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp526 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp523, $tmp524, $tmp525);
frost$core$Int64 $tmp527 = $tmp526.min;
*(&local10) = $tmp527;
frost$core$Int64 $tmp528 = $tmp526.max;
frost$core$Bit $tmp529 = $tmp526.inclusive;
bool $tmp530 = $tmp529.value;
frost$core$Int64 $tmp531 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp532 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp531);
if ($tmp530) goto block36; else goto block37;
block36:;
int64_t $tmp533 = $tmp527.value;
int64_t $tmp534 = $tmp528.value;
bool $tmp535 = $tmp533 <= $tmp534;
frost$core$Bit $tmp536 = (frost$core$Bit) {$tmp535};
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block33; else goto block34;
block37:;
int64_t $tmp538 = $tmp527.value;
int64_t $tmp539 = $tmp528.value;
bool $tmp540 = $tmp538 < $tmp539;
frost$core$Bit $tmp541 = (frost$core$Bit) {$tmp540};
bool $tmp542 = $tmp541.value;
if ($tmp542) goto block33; else goto block34;
block33:;
// line 267
frost$core$Char8* $tmp543 = *(&local6);
frost$core$Int64 $tmp544 = *(&local10);
frost$core$Char8* $tmp545 = *(&local6);
frost$core$Int64 $tmp546 = *(&local10);
frost$core$Int64 $tmp547 = *(&local7);
int64_t $tmp548 = $tmp546.value;
int64_t $tmp549 = $tmp547.value;
int64_t $tmp550 = $tmp548 + $tmp549;
frost$core$Int64 $tmp551 = (frost$core$Int64) {$tmp550};
int64_t $tmp552 = $tmp551.value;
frost$core$Char8 $tmp553 = $tmp545[$tmp552];
int64_t $tmp554 = $tmp544.value;
$tmp543[$tmp554] = $tmp553;
goto block35;
block35:;
frost$core$Int64 $tmp555 = *(&local10);
int64_t $tmp556 = $tmp528.value;
int64_t $tmp557 = $tmp555.value;
int64_t $tmp558 = $tmp556 - $tmp557;
frost$core$Int64 $tmp559 = (frost$core$Int64) {$tmp558};
frost$core$UInt64 $tmp560 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp559);
if ($tmp530) goto block39; else goto block40;
block39:;
uint64_t $tmp561 = $tmp560.value;
uint64_t $tmp562 = $tmp532.value;
bool $tmp563 = $tmp561 >= $tmp562;
frost$core$Bit $tmp564 = (frost$core$Bit) {$tmp563};
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block38; else goto block34;
block40:;
uint64_t $tmp566 = $tmp560.value;
uint64_t $tmp567 = $tmp532.value;
bool $tmp568 = $tmp566 > $tmp567;
frost$core$Bit $tmp569 = (frost$core$Bit) {$tmp568};
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block38; else goto block34;
block38:;
int64_t $tmp571 = $tmp555.value;
int64_t $tmp572 = $tmp531.value;
int64_t $tmp573 = $tmp571 + $tmp572;
frost$core$Int64 $tmp574 = (frost$core$Int64) {$tmp573};
*(&local10) = $tmp574;
goto block33;
block34:;
// line 269
frost$core$String* $tmp575 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp576 = *(&local6);
frost$core$Int64 $tmp577 = *(&local9);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp575, $tmp576, $tmp577);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$collections$ListView* $tmp578 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
*(&local2) = ((frost$collections$ListView*) NULL);
return $tmp575;

}
void frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(frost$collections$List* param0, frost$core$Int64 param1, frost$core$Int64 param2) {

frost$core$Object* local0 = NULL;
// line 291
ITable* $tmp579 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp579->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp579 = $tmp579->next;
}
$fn581 $tmp580 = $tmp579->methods[0];
frost$core$Object* $tmp582 = $tmp580(((frost$collections$ListView*) param0), param1);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp582);
frost$core$Object* $tmp583 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp583);
*(&local0) = $tmp582;
frost$core$Frost$unref$frost$core$Object$Q($tmp582);
// line 292
ITable* $tmp584 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp584->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp584 = $tmp584->next;
}
$fn586 $tmp585 = $tmp584->methods[0];
frost$core$Object* $tmp587 = $tmp585(((frost$collections$ListView*) param0), param2);
ITable* $tmp588 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp588->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp588 = $tmp588->next;
}
$fn590 $tmp589 = $tmp588->methods[0];
$tmp589(((frost$collections$ListWriter*) param0), param1, $tmp587);
frost$core$Frost$unref$frost$core$Object$Q($tmp587);
// line 293
frost$core$Object* $tmp591 = *(&local0);
ITable* $tmp592 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp592->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp592 = $tmp592->next;
}
$fn594 $tmp593 = $tmp592->methods[0];
$tmp593(((frost$collections$ListWriter*) param0), param2, $tmp591);
frost$core$Object* $tmp595 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp595);
*(&local0) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$Int64 param1, frost$core$Int64 param2, frost$core$MutableMethod* param3) {

frost$core$Int64 local0;
frost$core$Object* local1 = NULL;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$Bit local4;
// line 300
int64_t $tmp596 = param1.value;
int64_t $tmp597 = param2.value;
bool $tmp598 = $tmp596 >= $tmp597;
frost$core$Bit $tmp599 = (frost$core$Bit) {$tmp598};
bool $tmp600 = $tmp599.value;
if ($tmp600) goto block1; else goto block2;
block1:;
// line 301
return;
block2:;
// line 303
int64_t $tmp601 = param2.value;
int64_t $tmp602 = param1.value;
int64_t $tmp603 = $tmp601 - $tmp602;
frost$core$Int64 $tmp604 = (frost$core$Int64) {$tmp603};
frost$core$Int64 $tmp605 = (frost$core$Int64) {2};
int64_t $tmp606 = $tmp604.value;
int64_t $tmp607 = $tmp605.value;
int64_t $tmp608 = $tmp606 / $tmp607;
frost$core$Int64 $tmp609 = (frost$core$Int64) {$tmp608};
int64_t $tmp610 = param1.value;
int64_t $tmp611 = $tmp609.value;
int64_t $tmp612 = $tmp610 + $tmp611;
frost$core$Int64 $tmp613 = (frost$core$Int64) {$tmp612};
*(&local0) = $tmp613;
// line 304
frost$core$Int64 $tmp614 = *(&local0);
ITable* $tmp615 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp615->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp615 = $tmp615->next;
}
$fn617 $tmp616 = $tmp615->methods[0];
frost$core$Object* $tmp618 = $tmp616(((frost$collections$ListView*) param0), $tmp614);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp618);
frost$core$Object* $tmp619 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp619);
*(&local1) = $tmp618;
frost$core$Frost$unref$frost$core$Object$Q($tmp618);
// line 305
frost$core$Int64 $tmp620 = *(&local0);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, param2, $tmp620);
// line 306
*(&local2) = param1;
// line 307
frost$core$Int64 $tmp621 = (frost$core$Int64) {1};
int64_t $tmp622 = param2.value;
int64_t $tmp623 = $tmp621.value;
int64_t $tmp624 = $tmp622 - $tmp623;
frost$core$Int64 $tmp625 = (frost$core$Int64) {$tmp624};
frost$core$Bit $tmp626 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$Int64$GT $tmp627 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(param1, $tmp625, $tmp626);
frost$core$Int64 $tmp628 = $tmp627.min;
*(&local3) = $tmp628;
frost$core$Int64 $tmp629 = $tmp627.max;
frost$core$Bit $tmp630 = $tmp627.inclusive;
bool $tmp631 = $tmp630.value;
frost$core$Int64 $tmp632 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp633 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp632);
if ($tmp631) goto block6; else goto block7;
block6:;
int64_t $tmp634 = $tmp628.value;
int64_t $tmp635 = $tmp629.value;
bool $tmp636 = $tmp634 <= $tmp635;
frost$core$Bit $tmp637 = (frost$core$Bit) {$tmp636};
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block3; else goto block4;
block7:;
int64_t $tmp639 = $tmp628.value;
int64_t $tmp640 = $tmp629.value;
bool $tmp641 = $tmp639 < $tmp640;
frost$core$Bit $tmp642 = (frost$core$Bit) {$tmp641};
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block3; else goto block4;
block3:;
// line 308
frost$core$Int64 $tmp644 = *(&local3);
ITable* $tmp645 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp645->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp645 = $tmp645->next;
}
$fn647 $tmp646 = $tmp645->methods[0];
frost$core$Object* $tmp648 = $tmp646(((frost$collections$ListView*) param0), $tmp644);
frost$core$Object* $tmp649 = *(&local1);
frost$core$Int8** $tmp650 = &param3->pointer;
frost$core$Int8* $tmp651 = *$tmp650;
frost$core$Object** $tmp652 = &param3->target;
frost$core$Object* $tmp653 = *$tmp652;
bool $tmp654 = $tmp653 != ((frost$core$Object*) NULL);
if ($tmp654) goto block10; else goto block11;
block11:;
frost$core$Bit $tmp656 = (($fn655) $tmp651)($tmp648, $tmp649);
*(&local4) = $tmp656;
goto block12;
block10:;
frost$core$Bit $tmp658 = (($fn657) $tmp651)($tmp653, $tmp648, $tmp649);
*(&local4) = $tmp658;
goto block12;
block12:;
frost$core$Bit $tmp659 = *(&local4);
frost$core$Bit $tmp660 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp659);
bool $tmp661 = $tmp660.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp648);
if ($tmp661) goto block8; else goto block9;
block8:;
// line 309
frost$core$Int64 $tmp662 = *(&local3);
frost$core$Int64 $tmp663 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp662, $tmp663);
// line 310
frost$core$Int64 $tmp664 = *(&local2);
frost$core$Int64 $tmp665 = (frost$core$Int64) {1};
int64_t $tmp666 = $tmp664.value;
int64_t $tmp667 = $tmp665.value;
int64_t $tmp668 = $tmp666 + $tmp667;
frost$core$Int64 $tmp669 = (frost$core$Int64) {$tmp668};
*(&local2) = $tmp669;
goto block9;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp670 = *(&local3);
int64_t $tmp671 = $tmp629.value;
int64_t $tmp672 = $tmp670.value;
int64_t $tmp673 = $tmp671 - $tmp672;
frost$core$Int64 $tmp674 = (frost$core$Int64) {$tmp673};
frost$core$UInt64 $tmp675 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp674);
if ($tmp631) goto block14; else goto block15;
block14:;
uint64_t $tmp676 = $tmp675.value;
uint64_t $tmp677 = $tmp633.value;
bool $tmp678 = $tmp676 >= $tmp677;
frost$core$Bit $tmp679 = (frost$core$Bit) {$tmp678};
bool $tmp680 = $tmp679.value;
if ($tmp680) goto block13; else goto block4;
block15:;
uint64_t $tmp681 = $tmp675.value;
uint64_t $tmp682 = $tmp633.value;
bool $tmp683 = $tmp681 > $tmp682;
frost$core$Bit $tmp684 = (frost$core$Bit) {$tmp683};
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block13; else goto block4;
block13:;
int64_t $tmp686 = $tmp670.value;
int64_t $tmp687 = $tmp632.value;
int64_t $tmp688 = $tmp686 + $tmp687;
frost$core$Int64 $tmp689 = (frost$core$Int64) {$tmp688};
*(&local3) = $tmp689;
goto block3;
block4:;
// line 313
frost$core$Int64 $tmp690 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp690, param2);
// line 314
frost$core$Int64 $tmp691 = *(&local2);
frost$core$Int64 $tmp692 = (frost$core$Int64) {1};
int64_t $tmp693 = $tmp691.value;
int64_t $tmp694 = $tmp692.value;
int64_t $tmp695 = $tmp693 - $tmp694;
frost$core$Int64 $tmp696 = (frost$core$Int64) {$tmp695};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, param1, $tmp696, param3);
// line 315
frost$core$Int64 $tmp697 = *(&local2);
frost$core$Int64 $tmp698 = (frost$core$Int64) {1};
int64_t $tmp699 = $tmp697.value;
int64_t $tmp700 = $tmp698.value;
int64_t $tmp701 = $tmp699 + $tmp700;
frost$core$Int64 $tmp702 = (frost$core$Int64) {$tmp701};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, $tmp702, param2, param3);
frost$core$Object* $tmp703 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp703);
*(&local1) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$cleanup(frost$core$Frost* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp704 = &param0->allocations;
frost$collections$HashMap* $tmp705 = *$tmp704;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$collections$HashMap** $tmp706 = &param0->traces;
frost$collections$HashMap* $tmp707 = *$tmp706;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
return;

}

