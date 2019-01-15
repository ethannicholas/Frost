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
frost$core$Frost$class_type frost$core$Frost$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, frost$core$Frost$cleanup, frost$core$Frost$countAllocation$frost$core$Class, frost$core$Frost$countDeallocation$frost$core$Class, frost$core$Frost$dumpReport, frost$core$Frost$countTrace$frost$core$String} };

typedef frost$collections$Iterator* (*$fn89)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn93)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn98)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn129)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn133)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn138)(frost$collections$Iterator*);
typedef void (*$fn181)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn195)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn269)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn391)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Object* (*$fn473)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn582)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn587)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn591)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef void (*$fn595)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef frost$core$Object* (*$fn618)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn648)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn656)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn658)(frost$core$Object*, frost$core$Object*, frost$core$Object*);

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
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x2e\x61\x6c\x69\x67\x6e\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x73\x70\x65\x63\x69\x66\x69\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 126, -5104317510844427350, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 8772831143845743696, NULL };

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
// unreffing REF($1:frost.collections.HashMap<frost.core.String, frost.core.Int64>)
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
// unreffing REF($16:frost.collections.HashMap<frost.core.String, frost.core.Int64>)
return;

}
frost$core$Maybe* frost$core$Frost$success$frost$core$Object$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$Object* param0) {

// line 21
frost$core$Maybe* $tmp10 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp11 = (frost$core$Int64) {0};
frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T($tmp10, $tmp11, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
// unreffing REF($1:frost.core.Maybe<frost.core.Object>)
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
// unreffing REF($4:frost.core.Error)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
// unreffing REF($1:frost.core.Maybe<frost.core.Object>)
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
// unreffing REF($1:frost.core.String)
// line 44
frost$collections$HashMap** $tmp45 = &param0->allocations;
frost$collections$HashMap* $tmp46 = *$tmp45;
frost$core$String* $tmp47 = *(&local0);
frost$core$Object* $tmp48 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp46, ((frost$collections$Key*) $tmp47));
*(&local1) = ($tmp48 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp48)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
frost$core$Frost$unref$frost$core$Object$Q($tmp48);
// unreffing REF($18:frost.collections.HashMap.V?)
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
// unreffing REF($48:frost.collections.HashMap.V)
frost$core$String* $tmp63 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// unreffing name
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
// unreffing REF($1:frost.core.String)
// line 53
frost$collections$HashMap** $tmp66 = &param0->allocations;
frost$collections$HashMap* $tmp67 = *$tmp66;
frost$core$String* $tmp68 = *(&local0);
frost$core$Object* $tmp69 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp67, ((frost$collections$Key*) $tmp68));
*(&local1) = ($tmp69 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp69)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
frost$core$Frost$unref$frost$core$Object$Q($tmp69);
// unreffing REF($18:frost.collections.HashMap.V?)
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
// unreffing REF($48:frost.collections.HashMap.V)
frost$core$String* $tmp84 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// unreffing name
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
// unreffing REF($30:frost.collections.HashMap.V?)
if ($tmp110) goto block4; else goto block5;
block4:;
// line 63
frost$core$String* $tmp111 = *(&local0);
frost$core$String* $tmp112 = frost$core$String$convert$R$frost$core$String($tmp111);
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
// unreffing REF($56:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing REF($55:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp119);
// unreffing REF($54:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q($tmp118);
// unreffing REF($52:frost.collections.HashMap.V?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// unreffing REF($46:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing REF($45:frost.core.String)
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp99);
// unreffing REF($16:frost.collections.Iterator.T)
frost$core$String* $tmp124 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// unreffing k
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing REF($5:frost.collections.Iterator<frost.collections.MapView.K>)
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
frost$core$String* $tmp142 = frost$core$String$convert$R$frost$core$String($tmp141);
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
// unreffing REF($126:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
// unreffing REF($125:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp149);
// unreffing REF($124:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q($tmp148);
// unreffing REF($122:frost.collections.HashMap.V?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
// unreffing REF($116:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// unreffing REF($115:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp139);
// unreffing REF($105:frost.collections.Iterator.T)
frost$core$String* $tmp154 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
// unreffing k
*(&local1) = ((frost$core$String*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// unreffing REF($94:frost.collections.Iterator<frost.collections.MapView.K>)
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
// unreffing REF($5:frost.collections.HashMap.V?)
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
// unreffing REF($34:frost.collections.HashMap.V)
return;

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(frost$core$String* param0, frost$core$Int64 param1) {

// line 105
frost$io$OutputStream* $tmp171 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp172 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s173, param0);
frost$core$String* $tmp174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp172, &$s175);
frost$core$Int64$wrapper* $tmp176;
$tmp176 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp176->value = param1;
frost$core$String* $tmp177 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp174, ((frost$core$Object*) $tmp176));
frost$core$String* $tmp178 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp177, &$s179);
$fn181 $tmp180 = ($fn181) $tmp171->$class->vtable[19];
$tmp180($tmp171, $tmp178);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
// unreffing REF($6:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
// unreffing REF($4:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
// unreffing REF($1:frost.io.OutputStream)
// line 106
frost$core$System$crash();
return;

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$String* param2) {

// line 111
frost$io$OutputStream* $tmp182 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp183 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s184, param0);
frost$core$String* $tmp185 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp183, &$s186);
frost$core$Int64$wrapper* $tmp187;
$tmp187 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp187->value = param1;
frost$core$String* $tmp188 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp185, ((frost$core$Object*) $tmp187));
frost$core$String* $tmp189 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp188, &$s190);
frost$core$String* $tmp191 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp189, param2);
frost$core$String* $tmp192 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp191, &$s193);
$fn195 $tmp194 = ($fn195) $tmp182->$class->vtable[19];
$tmp194($tmp182, $tmp192);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
// unreffing REF($6:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
// unreffing REF($4:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// unreffing REF($1:frost.io.OutputStream)
// line 112
frost$core$System$crash();
return;

}
frost$core$UInt64$nullable frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q(frost$core$Char32 param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
// line 117
frost$core$Int32 $tmp196 = (frost$core$Int32) {48};
frost$core$Char32 $tmp197 = frost$core$Char32$init$frost$core$Int32($tmp196);
frost$core$Bit $tmp198 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp197);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block3; else goto block4;
block3:;
frost$core$Int32 $tmp200 = (frost$core$Int32) {57};
frost$core$Char32 $tmp201 = frost$core$Char32$init$frost$core$Int32($tmp200);
frost$core$Bit $tmp202 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp201);
*(&local0) = $tmp202;
goto block5;
block4:;
*(&local0) = $tmp198;
goto block5;
block5:;
frost$core$Bit $tmp203 = *(&local0);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block1; else goto block2;
block1:;
// line 118
frost$core$UInt64 $tmp205 = frost$core$Char32$convert$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp206 = (frost$core$UInt8) {48};
frost$core$Char8 $tmp207 = frost$core$Char8$init$frost$core$UInt8($tmp206);
frost$core$UInt64 $tmp208 = frost$core$Char8$convert$R$frost$core$UInt64($tmp207);
uint64_t $tmp209 = $tmp205.value;
uint64_t $tmp210 = $tmp208.value;
uint64_t $tmp211 = $tmp209 - $tmp210;
frost$core$UInt64 $tmp212 = (frost$core$UInt64) {$tmp211};
return ((frost$core$UInt64$nullable) { $tmp212, true });
block2:;
// line 120
frost$core$Int32 $tmp213 = (frost$core$Int32) {65};
frost$core$Char32 $tmp214 = frost$core$Char32$init$frost$core$Int32($tmp213);
frost$core$Bit $tmp215 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp214);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block8; else goto block9;
block8:;
frost$core$Int32 $tmp217 = (frost$core$Int32) {90};
frost$core$Char32 $tmp218 = frost$core$Char32$init$frost$core$Int32($tmp217);
frost$core$Bit $tmp219 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp218);
*(&local1) = $tmp219;
goto block10;
block9:;
*(&local1) = $tmp215;
goto block10;
block10:;
frost$core$Bit $tmp220 = *(&local1);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block6; else goto block7;
block6:;
// line 121
frost$core$UInt64 $tmp222 = frost$core$Char32$convert$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp223 = (frost$core$UInt8) {65};
frost$core$Char8 $tmp224 = frost$core$Char8$init$frost$core$UInt8($tmp223);
frost$core$UInt64 $tmp225 = frost$core$Char8$convert$R$frost$core$UInt64($tmp224);
uint64_t $tmp226 = $tmp222.value;
uint64_t $tmp227 = $tmp225.value;
uint64_t $tmp228 = $tmp226 - $tmp227;
frost$core$UInt64 $tmp229 = (frost$core$UInt64) {$tmp228};
frost$core$UInt64 $tmp230 = (frost$core$UInt64) {10};
uint64_t $tmp231 = $tmp229.value;
uint64_t $tmp232 = $tmp230.value;
uint64_t $tmp233 = $tmp231 + $tmp232;
frost$core$UInt64 $tmp234 = (frost$core$UInt64) {$tmp233};
return ((frost$core$UInt64$nullable) { $tmp234, true });
block7:;
// line 123
frost$core$Int32 $tmp235 = (frost$core$Int32) {97};
frost$core$Char32 $tmp236 = frost$core$Char32$init$frost$core$Int32($tmp235);
frost$core$Bit $tmp237 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp236);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block13; else goto block14;
block13:;
frost$core$Int32 $tmp239 = (frost$core$Int32) {122};
frost$core$Char32 $tmp240 = frost$core$Char32$init$frost$core$Int32($tmp239);
frost$core$Bit $tmp241 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp240);
*(&local2) = $tmp241;
goto block15;
block14:;
*(&local2) = $tmp237;
goto block15;
block15:;
frost$core$Bit $tmp242 = *(&local2);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block11; else goto block12;
block11:;
// line 124
frost$core$UInt64 $tmp244 = frost$core$Char32$convert$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp245 = (frost$core$UInt8) {97};
frost$core$Char8 $tmp246 = frost$core$Char8$init$frost$core$UInt8($tmp245);
frost$core$UInt64 $tmp247 = frost$core$Char8$convert$R$frost$core$UInt64($tmp246);
uint64_t $tmp248 = $tmp244.value;
uint64_t $tmp249 = $tmp247.value;
uint64_t $tmp250 = $tmp248 - $tmp249;
frost$core$UInt64 $tmp251 = (frost$core$UInt64) {$tmp250};
frost$core$UInt64 $tmp252 = (frost$core$UInt64) {10};
uint64_t $tmp253 = $tmp251.value;
uint64_t $tmp254 = $tmp252.value;
uint64_t $tmp255 = $tmp253 + $tmp254;
frost$core$UInt64 $tmp256 = (frost$core$UInt64) {$tmp255};
return ((frost$core$UInt64$nullable) { $tmp256, true });
block12:;
// line 126
return ((frost$core$UInt64$nullable) { .nonnull = false });

}
frost$core$UInt64$nullable frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64 local0;
frost$core$UInt64 local1;
frost$core$String$Index local2;
frost$core$UInt64$nullable local3;
frost$core$Bit local4;
// line 134
frost$core$Bit $tmp257 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s258);
bool $tmp259 = $tmp257.value;
if ($tmp259) goto block1; else goto block2;
block1:;
// line 135
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 137
frost$core$UInt64 $tmp260 = (frost$core$UInt64) {0};
*(&local0) = $tmp260;
// line 138
frost$core$UInt64 $tmp261 = frost$core$Int64$convert$R$frost$core$UInt64(param1);
*(&local1) = $tmp261;
// line 139
frost$core$String$Index $tmp262 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local2) = $tmp262;
// line 140
goto block3;
block3:;
frost$core$String$Index $tmp263 = *(&local2);
frost$core$String$Index$wrapper* $tmp264;
$tmp264 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp264->value = $tmp263;
frost$core$String$Index $tmp265 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$wrapper* $tmp266;
$tmp266 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp266->value = $tmp265;
ITable* $tmp267 = ((frost$core$Equatable*) $tmp264)->$class->itable;
while ($tmp267->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp267 = $tmp267->next;
}
$fn269 $tmp268 = $tmp267->methods[1];
frost$core$Bit $tmp270 = $tmp268(((frost$core$Equatable*) $tmp264), ((frost$core$Equatable*) $tmp266));
bool $tmp271 = $tmp270.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp266)));
// unreffing REF($21:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp264)));
// unreffing REF($18:frost.core.Equatable<frost.core.String.Index>)
if ($tmp271) goto block4; else goto block5;
block4:;
// line 141
frost$core$String$Index $tmp272 = *(&local2);
frost$core$Char32 $tmp273 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp272);
frost$core$UInt64$nullable $tmp274 = frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q($tmp273);
*(&local3) = $tmp274;
// line 142
frost$core$UInt64$nullable $tmp275 = *(&local3);
frost$core$Bit $tmp276 = frost$core$Bit$init$builtin_bit(!$tmp275.nonnull);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block8; else goto block9;
block8:;
*(&local4) = $tmp276;
goto block10;
block9:;
frost$core$UInt64$nullable $tmp278 = *(&local3);
frost$core$UInt64 $tmp279 = *(&local1);
uint64_t $tmp280 = ((frost$core$UInt64) $tmp278.value).value;
uint64_t $tmp281 = $tmp279.value;
bool $tmp282 = $tmp280 >= $tmp281;
frost$core$Bit $tmp283 = (frost$core$Bit) {$tmp282};
*(&local4) = $tmp283;
goto block10;
block10:;
frost$core$Bit $tmp284 = *(&local4);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block6; else goto block7;
block6:;
// line 143
return ((frost$core$UInt64$nullable) { .nonnull = false });
block7:;
// line 145
frost$core$UInt64 $tmp286 = *(&local0);
frost$core$UInt64 $tmp287 = *(&local1);
uint64_t $tmp288 = $tmp286.value;
uint64_t $tmp289 = $tmp287.value;
uint64_t $tmp290 = $tmp288 * $tmp289;
frost$core$UInt64 $tmp291 = (frost$core$UInt64) {$tmp290};
frost$core$UInt64$nullable $tmp292 = *(&local3);
uint64_t $tmp293 = $tmp291.value;
uint64_t $tmp294 = ((frost$core$UInt64) $tmp292.value).value;
uint64_t $tmp295 = $tmp293 + $tmp294;
frost$core$UInt64 $tmp296 = (frost$core$UInt64) {$tmp295};
*(&local0) = $tmp296;
// line 146
frost$core$String$Index $tmp297 = *(&local2);
frost$core$String$Index $tmp298 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp297);
*(&local2) = $tmp298;
goto block3;
block5:;
// line 148
frost$core$UInt64 $tmp299 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp299, true });

}
frost$core$String* frost$core$Frost$align$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$Int64 local1;
frost$core$Char32 local2;
// line 174
frost$core$Int64 $tmp300 = frost$core$String$get_length$R$frost$core$Int64(param1);
frost$core$Int64 $tmp301 = (frost$core$Int64) {2};
int64_t $tmp302 = $tmp300.value;
int64_t $tmp303 = $tmp301.value;
bool $tmp304 = $tmp302 >= $tmp303;
frost$core$Bit $tmp305 = (frost$core$Bit) {$tmp304};
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp307 = (frost$core$Int64) {174};
frost$core$String* $tmp308 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s309, param1);
frost$core$String* $tmp310 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp308, &$s311);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s312, $tmp307, $tmp310);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
// unreffing REF($11:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// unreffing REF($10:frost.core.String)
abort(); // unreachable
block1:;
// line 175
frost$core$String$Index $tmp313 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$String$Index $tmp314 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp313);
*(&local0) = $tmp314;
// line 176
frost$core$String$Index $tmp315 = *(&local0);
frost$core$Char32 $tmp316 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp315);
frost$core$Int32 $tmp317 = (frost$core$Int32) {60};
frost$core$Char32 $tmp318 = frost$core$Char32$init$frost$core$Int32($tmp317);
frost$core$Bit $tmp319 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp316, $tmp318);
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block4; else goto block5;
block5:;
frost$core$Int32 $tmp321 = (frost$core$Int32) {94};
frost$core$Char32 $tmp322 = frost$core$Char32$init$frost$core$Int32($tmp321);
frost$core$Bit $tmp323 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp316, $tmp322);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block4; else goto block6;
block6:;
frost$core$Int32 $tmp325 = (frost$core$Int32) {62};
frost$core$Char32 $tmp326 = frost$core$Char32$init$frost$core$Int32($tmp325);
frost$core$Bit $tmp327 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp316, $tmp326);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block4; else goto block7;
block4:;
goto block3;
block7:;
// line 181
frost$core$String$Index $tmp329 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local0) = $tmp329;
goto block3;
block3:;
// line 184
frost$core$String$Index $tmp330 = *(&local0);
frost$core$String$Index $tmp331 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp330);
frost$core$Bit $tmp332 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp333 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp331, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp332);
frost$core$String* $tmp334 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp333);
frost$core$Int64$nullable $tmp335 = frost$core$String$convert$R$frost$core$Int64$Q($tmp334);
*(&local1) = ((frost$core$Int64) $tmp335.value);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
// unreffing REF($53:frost.core.String)
// line 185
// line 186
frost$core$String$Index $tmp336 = *(&local0);
frost$core$String$Index $tmp337 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$Bit $tmp338 = frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit($tmp336, $tmp337);
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block8; else goto block10;
block8:;
// line 187
frost$core$Int32 $tmp340 = (frost$core$Int32) {32};
frost$core$Char32 $tmp341 = frost$core$Char32$init$frost$core$Int32($tmp340);
*(&local2) = $tmp341;
goto block9;
block10:;
// line 1
// line 190
frost$core$String$Index $tmp342 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$Char32 $tmp343 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp342);
*(&local2) = $tmp343;
goto block9;
block9:;
// line 192
frost$core$String$Index $tmp344 = *(&local0);
frost$core$Char32 $tmp345 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp344);
frost$core$Int32 $tmp346 = (frost$core$Int32) {60};
frost$core$Char32 $tmp347 = frost$core$Char32$init$frost$core$Int32($tmp346);
frost$core$Bit $tmp348 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp345, $tmp347);
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block12; else goto block13;
block12:;
// line 193
frost$core$Int64 $tmp350 = *(&local1);
frost$core$Char32 $tmp351 = *(&local2);
frost$core$String* $tmp352 = frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, $tmp350, $tmp351);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
// unreffing REF($89:frost.core.String)
return $tmp352;
block13:;
frost$core$Int32 $tmp353 = (frost$core$Int32) {94};
frost$core$Char32 $tmp354 = frost$core$Char32$init$frost$core$Int32($tmp353);
frost$core$Bit $tmp355 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp345, $tmp354);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block14; else goto block15;
block14:;
// line 194
frost$core$Int64 $tmp357 = *(&local1);
frost$core$Char32 $tmp358 = *(&local2);
frost$core$String* $tmp359 = frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, $tmp357, $tmp358);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
// unreffing REF($104:frost.core.String)
return $tmp359;
block15:;
frost$core$Int32 $tmp360 = (frost$core$Int32) {62};
frost$core$Char32 $tmp361 = frost$core$Char32$init$frost$core$Int32($tmp360);
frost$core$Bit $tmp362 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp345, $tmp361);
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block16; else goto block17;
block16:;
// line 195
frost$core$Int64 $tmp364 = *(&local1);
frost$core$Char32 $tmp365 = *(&local2);
frost$core$String* $tmp366 = frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, $tmp364, $tmp365);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// unreffing REF($119:frost.core.String)
return $tmp366;
block17:;
// line 196
frost$core$Bit $tmp367 = frost$core$Bit$init$builtin_bit(false);
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp369 = (frost$core$Int64) {196};
frost$core$String* $tmp370 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s371, param1);
frost$core$String* $tmp372 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp370, &$s373);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s374, $tmp369, $tmp372);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
// unreffing REF($132:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
// unreffing REF($131:frost.core.String)
abort(); // unreachable
block18:;
goto block11;
block11:;
frost$core$Bit $tmp375 = frost$core$Bit$init$builtin_bit(false);
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp377 = (frost$core$Int64) {173};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s378, $tmp377, &$s379);
abort(); // unreachable
block20:;
abort(); // unreachable

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
// line 210
frost$core$String$Index $tmp380 = frost$core$String$get_start$R$frost$core$String$Index(param3);
*(&local0) = $tmp380;
// line 211
frost$core$UInt64 $tmp381 = (frost$core$UInt64) {10};
*(&local1) = $tmp381;
// line 212
frost$collections$ListView* $tmp382 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s383);
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$collections$ListView* $tmp384 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
*(&local2) = $tmp382;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
// unreffing REF($7:frost.collections.ListView<frost.core.Char8>)
// line 213
frost$core$String$Index $tmp385 = *(&local0);
frost$core$String$Index$wrapper* $tmp386;
$tmp386 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp386->value = $tmp385;
frost$core$String$Index $tmp387 = frost$core$String$get_end$R$frost$core$String$Index(param3);
frost$core$String$Index$wrapper* $tmp388;
$tmp388 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp388->value = $tmp387;
ITable* $tmp389 = ((frost$core$Comparable*) $tmp386)->$class->itable;
while ($tmp389->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp389 = $tmp389->next;
}
$fn391 $tmp390 = $tmp389->methods[1];
frost$core$Bit $tmp392 = $tmp390(((frost$core$Comparable*) $tmp386), ((frost$core$Comparable*) $tmp388));
bool $tmp393 = $tmp392.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp388)));
// unreffing REF($23:frost.core.Comparable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp386)));
// unreffing REF($20:frost.core.Comparable<frost.core.String.Index>)
if ($tmp393) goto block1; else goto block2;
block1:;
// line 214
frost$core$String$Index $tmp394 = *(&local0);
frost$core$Char32 $tmp395 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param3, $tmp394);
frost$core$Int32 $tmp396 = (frost$core$Int32) {98};
frost$core$Char32 $tmp397 = frost$core$Char32$init$frost$core$Int32($tmp396);
frost$core$Bit $tmp398 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp395, $tmp397);
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block4; else goto block5;
block5:;
frost$core$Int32 $tmp400 = (frost$core$Int32) {66};
frost$core$Char32 $tmp401 = frost$core$Char32$init$frost$core$Int32($tmp400);
frost$core$Bit $tmp402 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp395, $tmp401);
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block4; else goto block6;
block4:;
// line 216
frost$core$UInt64 $tmp404 = (frost$core$UInt64) {2};
*(&local1) = $tmp404;
goto block3;
block6:;
frost$core$Int32 $tmp405 = (frost$core$Int32) {111};
frost$core$Char32 $tmp406 = frost$core$Char32$init$frost$core$Int32($tmp405);
frost$core$Bit $tmp407 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp395, $tmp406);
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block7; else goto block8;
block8:;
frost$core$Int32 $tmp409 = (frost$core$Int32) {79};
frost$core$Char32 $tmp410 = frost$core$Char32$init$frost$core$Int32($tmp409);
frost$core$Bit $tmp411 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp395, $tmp410);
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block7; else goto block9;
block7:;
// line 219
frost$core$UInt64 $tmp413 = (frost$core$UInt64) {8};
*(&local1) = $tmp413;
goto block3;
block9:;
frost$core$Int32 $tmp414 = (frost$core$Int32) {100};
frost$core$Char32 $tmp415 = frost$core$Char32$init$frost$core$Int32($tmp414);
frost$core$Bit $tmp416 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp395, $tmp415);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block10; else goto block11;
block11:;
frost$core$Int32 $tmp418 = (frost$core$Int32) {68};
frost$core$Char32 $tmp419 = frost$core$Char32$init$frost$core$Int32($tmp418);
frost$core$Bit $tmp420 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp395, $tmp419);
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block10; else goto block12;
block10:;
// line 222
frost$core$UInt64 $tmp422 = (frost$core$UInt64) {10};
*(&local1) = $tmp422;
goto block3;
block12:;
frost$core$Int32 $tmp423 = (frost$core$Int32) {120};
frost$core$Char32 $tmp424 = frost$core$Char32$init$frost$core$Int32($tmp423);
frost$core$Bit $tmp425 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp395, $tmp424);
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block13; else goto block14;
block13:;
// line 225
frost$core$UInt64 $tmp427 = (frost$core$UInt64) {16};
*(&local1) = $tmp427;
goto block3;
block14:;
frost$core$Int32 $tmp428 = (frost$core$Int32) {88};
frost$core$Char32 $tmp429 = frost$core$Char32$init$frost$core$Int32($tmp428);
frost$core$Bit $tmp430 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp395, $tmp429);
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block15; else goto block16;
block15:;
// line 228
frost$core$UInt64 $tmp432 = (frost$core$UInt64) {16};
*(&local1) = $tmp432;
// line 229
frost$collections$ListView* $tmp433 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s434);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$collections$ListView* $tmp435 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
*(&local2) = $tmp433;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
// unreffing REF($97:frost.collections.ListView<frost.core.Char8>)
goto block3;
block16:;
// line 232
frost$core$Bit $tmp436 = frost$core$Bit$init$builtin_bit(false);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp438 = (frost$core$Int64) {232};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s439, $tmp438, &$s440);
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
frost$core$UInt64 $tmp442 = *(&local1);
frost$core$UInt64 $tmp443 = (frost$core$UInt64) {10};
uint64_t $tmp444 = $tmp442.value;
uint64_t $tmp445 = $tmp443.value;
bool $tmp446 = $tmp444 != $tmp445;
frost$core$Bit $tmp447 = (frost$core$Bit) {$tmp446};
*(&local4) = $tmp447;
goto block23;
block22:;
*(&local4) = param0;
goto block23;
block23:;
frost$core$Bit $tmp448 = *(&local4);
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block19; else goto block24;
block19:;
// line 238
frost$core$Int64 $tmp450 = frost$core$UInt64$convert$R$frost$core$Int64(param1);
frost$core$Int64 $tmp451 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp450);
frost$core$UInt64 $tmp452 = frost$core$Int64$convert$R$frost$core$UInt64($tmp451);
frost$core$UInt64 $tmp453 = frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64($tmp452, param2);
*(&local3) = $tmp453;
goto block20;
block24:;
// line 1
// line 241
*(&local3) = param1;
goto block20;
block20:;
// line 243
frost$core$Int64 $tmp454 = (frost$core$Int64) {64};
*(&local5) = $tmp454;
// line 244
frost$core$Int64 $tmp455 = *(&local5);
int64_t $tmp456 = $tmp455.value;
frost$core$Char8* $tmp457 = ((frost$core$Char8*) frostZAlloc($tmp456 * 1));
*(&local6) = $tmp457;
// line 245
frost$core$Int64 $tmp458 = *(&local5);
frost$core$Int64 $tmp459 = (frost$core$Int64) {1};
int64_t $tmp460 = $tmp458.value;
int64_t $tmp461 = $tmp459.value;
int64_t $tmp462 = $tmp460 - $tmp461;
frost$core$Int64 $tmp463 = (frost$core$Int64) {$tmp462};
*(&local7) = $tmp463;
// line 246
goto block25;
block25:;
// line 247
frost$core$Char8* $tmp464 = *(&local6);
frost$core$Int64 $tmp465 = *(&local7);
frost$collections$ListView* $tmp466 = *(&local2);
frost$core$UInt64 $tmp467 = *(&local3);
frost$core$UInt64 $tmp468 = *(&local1);
frost$core$UInt64 $tmp469 = frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64($tmp467, $tmp468);
frost$core$Int64 $tmp470 = frost$core$UInt64$convert$R$frost$core$Int64($tmp469);
ITable* $tmp471 = $tmp466->$class->itable;
while ($tmp471->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp471 = $tmp471->next;
}
$fn473 $tmp472 = $tmp471->methods[0];
frost$core$Object* $tmp474 = $tmp472($tmp466, $tmp470);
int64_t $tmp475 = $tmp465.value;
$tmp464[$tmp475] = ((frost$core$Char8$wrapper*) $tmp474)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp474);
// unreffing REF($173:frost.collections.ListView.T)
// line 248
frost$core$UInt64 $tmp476 = *(&local3);
frost$core$UInt64 $tmp477 = *(&local1);
uint64_t $tmp478 = $tmp476.value;
uint64_t $tmp479 = $tmp477.value;
uint64_t $tmp480 = $tmp478 / $tmp479;
frost$core$UInt64 $tmp481 = (frost$core$UInt64) {$tmp480};
*(&local3) = $tmp481;
// line 249
frost$core$Int64 $tmp482 = *(&local7);
frost$core$Int64 $tmp483 = (frost$core$Int64) {1};
int64_t $tmp484 = $tmp482.value;
int64_t $tmp485 = $tmp483.value;
int64_t $tmp486 = $tmp484 - $tmp485;
frost$core$Int64 $tmp487 = (frost$core$Int64) {$tmp486};
*(&local7) = $tmp487;
goto block26;
block26:;
frost$core$UInt64 $tmp488 = *(&local3);
frost$core$UInt64 $tmp489 = (frost$core$UInt64) {0};
uint64_t $tmp490 = $tmp488.value;
uint64_t $tmp491 = $tmp489.value;
bool $tmp492 = $tmp490 > $tmp491;
frost$core$Bit $tmp493 = (frost$core$Bit) {$tmp492};
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block25; else goto block27;
block27:;
// line 252
bool $tmp495 = param0.value;
if ($tmp495) goto block30; else goto block31;
block30:;
frost$core$UInt64 $tmp496 = *(&local1);
frost$core$UInt64 $tmp497 = (frost$core$UInt64) {10};
frost$core$Bit $tmp498 = frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit($tmp496, $tmp497);
*(&local8) = $tmp498;
goto block32;
block31:;
*(&local8) = param0;
goto block32;
block32:;
frost$core$Bit $tmp499 = *(&local8);
bool $tmp500 = $tmp499.value;
if ($tmp500) goto block28; else goto block29;
block28:;
// line 253
frost$core$Char8* $tmp501 = *(&local6);
frost$core$Int64 $tmp502 = *(&local7);
frost$core$UInt8 $tmp503 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp504 = frost$core$Char8$init$frost$core$UInt8($tmp503);
int64_t $tmp505 = $tmp502.value;
$tmp501[$tmp505] = $tmp504;
// line 254
frost$core$Int64 $tmp506 = *(&local7);
frost$core$Int64 $tmp507 = (frost$core$Int64) {1};
int64_t $tmp508 = $tmp506.value;
int64_t $tmp509 = $tmp507.value;
int64_t $tmp510 = $tmp508 - $tmp509;
frost$core$Int64 $tmp511 = (frost$core$Int64) {$tmp510};
*(&local7) = $tmp511;
goto block29;
block29:;
// line 256
frost$core$Int64 $tmp512 = *(&local7);
frost$core$Int64 $tmp513 = (frost$core$Int64) {1};
int64_t $tmp514 = $tmp512.value;
int64_t $tmp515 = $tmp513.value;
int64_t $tmp516 = $tmp514 + $tmp515;
frost$core$Int64 $tmp517 = (frost$core$Int64) {$tmp516};
*(&local7) = $tmp517;
// line 257
frost$core$Int64 $tmp518 = *(&local5);
frost$core$Int64 $tmp519 = *(&local7);
int64_t $tmp520 = $tmp518.value;
int64_t $tmp521 = $tmp519.value;
int64_t $tmp522 = $tmp520 - $tmp521;
frost$core$Int64 $tmp523 = (frost$core$Int64) {$tmp522};
*(&local9) = $tmp523;
// line 258
frost$core$Int64 $tmp524 = (frost$core$Int64) {0};
frost$core$Int64 $tmp525 = *(&local9);
frost$core$Bit $tmp526 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp527 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp524, $tmp525, $tmp526);
frost$core$Int64 $tmp528 = $tmp527.min;
*(&local10) = $tmp528;
frost$core$Int64 $tmp529 = $tmp527.max;
frost$core$Bit $tmp530 = $tmp527.inclusive;
bool $tmp531 = $tmp530.value;
frost$core$Int64 $tmp532 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp533 = frost$core$Int64$convert$R$frost$core$UInt64($tmp532);
if ($tmp531) goto block36; else goto block37;
block36:;
int64_t $tmp534 = $tmp528.value;
int64_t $tmp535 = $tmp529.value;
bool $tmp536 = $tmp534 <= $tmp535;
frost$core$Bit $tmp537 = (frost$core$Bit) {$tmp536};
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block33; else goto block34;
block37:;
int64_t $tmp539 = $tmp528.value;
int64_t $tmp540 = $tmp529.value;
bool $tmp541 = $tmp539 < $tmp540;
frost$core$Bit $tmp542 = (frost$core$Bit) {$tmp541};
bool $tmp543 = $tmp542.value;
if ($tmp543) goto block33; else goto block34;
block33:;
// line 259
frost$core$Char8* $tmp544 = *(&local6);
frost$core$Int64 $tmp545 = *(&local10);
frost$core$Char8* $tmp546 = *(&local6);
frost$core$Int64 $tmp547 = *(&local10);
frost$core$Int64 $tmp548 = *(&local7);
int64_t $tmp549 = $tmp547.value;
int64_t $tmp550 = $tmp548.value;
int64_t $tmp551 = $tmp549 + $tmp550;
frost$core$Int64 $tmp552 = (frost$core$Int64) {$tmp551};
int64_t $tmp553 = $tmp552.value;
frost$core$Char8 $tmp554 = $tmp546[$tmp553];
int64_t $tmp555 = $tmp545.value;
$tmp544[$tmp555] = $tmp554;
goto block35;
block35:;
frost$core$Int64 $tmp556 = *(&local10);
int64_t $tmp557 = $tmp529.value;
int64_t $tmp558 = $tmp556.value;
int64_t $tmp559 = $tmp557 - $tmp558;
frost$core$Int64 $tmp560 = (frost$core$Int64) {$tmp559};
frost$core$UInt64 $tmp561 = frost$core$Int64$convert$R$frost$core$UInt64($tmp560);
if ($tmp531) goto block39; else goto block40;
block39:;
uint64_t $tmp562 = $tmp561.value;
uint64_t $tmp563 = $tmp533.value;
bool $tmp564 = $tmp562 >= $tmp563;
frost$core$Bit $tmp565 = (frost$core$Bit) {$tmp564};
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block38; else goto block34;
block40:;
uint64_t $tmp567 = $tmp561.value;
uint64_t $tmp568 = $tmp533.value;
bool $tmp569 = $tmp567 > $tmp568;
frost$core$Bit $tmp570 = (frost$core$Bit) {$tmp569};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block38; else goto block34;
block38:;
int64_t $tmp572 = $tmp556.value;
int64_t $tmp573 = $tmp532.value;
int64_t $tmp574 = $tmp572 + $tmp573;
frost$core$Int64 $tmp575 = (frost$core$Int64) {$tmp574};
*(&local10) = $tmp575;
goto block33;
block34:;
// line 261
frost$core$String* $tmp576 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp577 = *(&local6);
frost$core$Int64 $tmp578 = *(&local9);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp576, $tmp577, $tmp578);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
// unreffing REF($316:frost.core.String)
frost$collections$ListView* $tmp579 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
// unreffing digits
*(&local2) = ((frost$collections$ListView*) NULL);
return $tmp576;

}
void frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(frost$collections$List* param0, frost$core$Int64 param1, frost$core$Int64 param2) {

frost$core$Object* local0 = NULL;
// line 283
ITable* $tmp580 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp580->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp580 = $tmp580->next;
}
$fn582 $tmp581 = $tmp580->methods[0];
frost$core$Object* $tmp583 = $tmp581(((frost$collections$ListView*) param0), param1);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp583);
frost$core$Object* $tmp584 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp584);
*(&local0) = $tmp583;
frost$core$Frost$unref$frost$core$Object$Q($tmp583);
// unreffing REF($4:frost.collections.ListView.T)
// line 284
ITable* $tmp585 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp585->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp585 = $tmp585->next;
}
$fn587 $tmp586 = $tmp585->methods[0];
frost$core$Object* $tmp588 = $tmp586(((frost$collections$ListView*) param0), param2);
ITable* $tmp589 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp589->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp589 = $tmp589->next;
}
$fn591 $tmp590 = $tmp589->methods[0];
$tmp590(((frost$collections$ListWriter*) param0), param1, $tmp588);
frost$core$Frost$unref$frost$core$Object$Q($tmp588);
// unreffing REF($21:frost.collections.ListView.T)
// line 285
frost$core$Object* $tmp592 = *(&local0);
ITable* $tmp593 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp593->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp593 = $tmp593->next;
}
$fn595 $tmp594 = $tmp593->methods[0];
$tmp594(((frost$collections$ListWriter*) param0), param2, $tmp592);
frost$core$Object* $tmp596 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp596);
// unreffing tmp
*(&local0) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$Int64 param1, frost$core$Int64 param2, frost$core$MutableMethod* param3) {

frost$core$Int64 local0;
frost$core$Object* local1 = NULL;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$Bit local4;
// line 292
int64_t $tmp597 = param1.value;
int64_t $tmp598 = param2.value;
bool $tmp599 = $tmp597 >= $tmp598;
frost$core$Bit $tmp600 = (frost$core$Bit) {$tmp599};
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
frost$core$Int64 $tmp605 = (frost$core$Int64) {$tmp604};
frost$core$Int64 $tmp606 = (frost$core$Int64) {2};
int64_t $tmp607 = $tmp605.value;
int64_t $tmp608 = $tmp606.value;
int64_t $tmp609 = $tmp607 / $tmp608;
frost$core$Int64 $tmp610 = (frost$core$Int64) {$tmp609};
int64_t $tmp611 = param1.value;
int64_t $tmp612 = $tmp610.value;
int64_t $tmp613 = $tmp611 + $tmp612;
frost$core$Int64 $tmp614 = (frost$core$Int64) {$tmp613};
*(&local0) = $tmp614;
// line 296
frost$core$Int64 $tmp615 = *(&local0);
ITable* $tmp616 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp616->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp616 = $tmp616->next;
}
$fn618 $tmp617 = $tmp616->methods[0];
frost$core$Object* $tmp619 = $tmp617(((frost$collections$ListView*) param0), $tmp615);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp619);
frost$core$Object* $tmp620 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp620);
*(&local1) = $tmp619;
frost$core$Frost$unref$frost$core$Object$Q($tmp619);
// unreffing REF($29:frost.collections.ListView.T)
// line 297
frost$core$Int64 $tmp621 = *(&local0);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, param2, $tmp621);
// line 298
*(&local2) = param1;
// line 299
frost$core$Int64 $tmp622 = (frost$core$Int64) {1};
int64_t $tmp623 = param2.value;
int64_t $tmp624 = $tmp622.value;
int64_t $tmp625 = $tmp623 - $tmp624;
frost$core$Int64 $tmp626 = (frost$core$Int64) {$tmp625};
frost$core$Bit $tmp627 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$Int64$GT $tmp628 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(param1, $tmp626, $tmp627);
frost$core$Int64 $tmp629 = $tmp628.min;
*(&local3) = $tmp629;
frost$core$Int64 $tmp630 = $tmp628.max;
frost$core$Bit $tmp631 = $tmp628.inclusive;
bool $tmp632 = $tmp631.value;
frost$core$Int64 $tmp633 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp634 = frost$core$Int64$convert$R$frost$core$UInt64($tmp633);
if ($tmp632) goto block6; else goto block7;
block6:;
int64_t $tmp635 = $tmp629.value;
int64_t $tmp636 = $tmp630.value;
bool $tmp637 = $tmp635 <= $tmp636;
frost$core$Bit $tmp638 = (frost$core$Bit) {$tmp637};
bool $tmp639 = $tmp638.value;
if ($tmp639) goto block3; else goto block4;
block7:;
int64_t $tmp640 = $tmp629.value;
int64_t $tmp641 = $tmp630.value;
bool $tmp642 = $tmp640 < $tmp641;
frost$core$Bit $tmp643 = (frost$core$Bit) {$tmp642};
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block3; else goto block4;
block3:;
// line 300
frost$core$Int64 $tmp645 = *(&local3);
ITable* $tmp646 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp646->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp646 = $tmp646->next;
}
$fn648 $tmp647 = $tmp646->methods[0];
frost$core$Object* $tmp649 = $tmp647(((frost$collections$ListView*) param0), $tmp645);
frost$core$Object* $tmp650 = *(&local1);
frost$core$Int8** $tmp651 = &param3->pointer;
frost$core$Int8* $tmp652 = *$tmp651;
frost$core$Object** $tmp653 = &param3->target;
frost$core$Object* $tmp654 = *$tmp653;
bool $tmp655 = $tmp654 != ((frost$core$Object*) NULL);
if ($tmp655) goto block10; else goto block11;
block11:;
frost$core$Bit $tmp657 = (($fn656) $tmp652)($tmp649, $tmp650);
*(&local4) = $tmp657;
goto block12;
block10:;
frost$core$Bit $tmp659 = (($fn658) $tmp652)($tmp654, $tmp649, $tmp650);
*(&local4) = $tmp659;
goto block12;
block12:;
frost$core$Bit $tmp660 = *(&local4);
frost$core$Bit $tmp661 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp660);
bool $tmp662 = $tmp661.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp649);
// unreffing REF($80:frost.collections.ListView.T)
if ($tmp662) goto block8; else goto block9;
block8:;
// line 301
frost$core$Int64 $tmp663 = *(&local3);
frost$core$Int64 $tmp664 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp663, $tmp664);
// line 302
frost$core$Int64 $tmp665 = *(&local2);
frost$core$Int64 $tmp666 = (frost$core$Int64) {1};
int64_t $tmp667 = $tmp665.value;
int64_t $tmp668 = $tmp666.value;
int64_t $tmp669 = $tmp667 + $tmp668;
frost$core$Int64 $tmp670 = (frost$core$Int64) {$tmp669};
*(&local2) = $tmp670;
goto block9;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp671 = *(&local3);
int64_t $tmp672 = $tmp630.value;
int64_t $tmp673 = $tmp671.value;
int64_t $tmp674 = $tmp672 - $tmp673;
frost$core$Int64 $tmp675 = (frost$core$Int64) {$tmp674};
frost$core$UInt64 $tmp676 = frost$core$Int64$convert$R$frost$core$UInt64($tmp675);
if ($tmp632) goto block14; else goto block15;
block14:;
uint64_t $tmp677 = $tmp676.value;
uint64_t $tmp678 = $tmp634.value;
bool $tmp679 = $tmp677 >= $tmp678;
frost$core$Bit $tmp680 = (frost$core$Bit) {$tmp679};
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block13; else goto block4;
block15:;
uint64_t $tmp682 = $tmp676.value;
uint64_t $tmp683 = $tmp634.value;
bool $tmp684 = $tmp682 > $tmp683;
frost$core$Bit $tmp685 = (frost$core$Bit) {$tmp684};
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block13; else goto block4;
block13:;
int64_t $tmp687 = $tmp671.value;
int64_t $tmp688 = $tmp633.value;
int64_t $tmp689 = $tmp687 + $tmp688;
frost$core$Int64 $tmp690 = (frost$core$Int64) {$tmp689};
*(&local3) = $tmp690;
goto block3;
block4:;
// line 305
frost$core$Int64 $tmp691 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp691, param2);
// line 306
frost$core$Int64 $tmp692 = *(&local2);
frost$core$Int64 $tmp693 = (frost$core$Int64) {1};
int64_t $tmp694 = $tmp692.value;
int64_t $tmp695 = $tmp693.value;
int64_t $tmp696 = $tmp694 - $tmp695;
frost$core$Int64 $tmp697 = (frost$core$Int64) {$tmp696};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$GT$LPfrost$core$Bit$RP(param0, param1, $tmp697, param3);
// line 307
frost$core$Int64 $tmp698 = *(&local2);
frost$core$Int64 $tmp699 = (frost$core$Int64) {1};
int64_t $tmp700 = $tmp698.value;
int64_t $tmp701 = $tmp699.value;
int64_t $tmp702 = $tmp700 + $tmp701;
frost$core$Int64 $tmp703 = (frost$core$Int64) {$tmp702};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$GT$LPfrost$core$Bit$RP(param0, $tmp703, param2, param3);
frost$core$Object* $tmp704 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp704);
// unreffing pivot
*(&local1) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$cleanup(frost$core$Frost* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp705 = &param0->allocations;
frost$collections$HashMap* $tmp706 = *$tmp705;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
frost$collections$HashMap** $tmp707 = &param0->traces;
frost$collections$HashMap* $tmp708 = *$tmp707;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
return;

}

