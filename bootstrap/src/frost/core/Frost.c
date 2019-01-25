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

typedef frost$collections$Iterator* (*$fn87)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn91)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn96)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn127)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn131)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn136)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn179)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn195)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn268)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn378)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Object* (*$fn457)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn565)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn570)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn574)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef void (*$fn578)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef frost$core$Object* (*$fn601)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn631)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn639)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn641)(frost$core$Object*, frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, -3824106976344999226, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -7013691163086253143, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2f\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 31, 768544994797342119, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2f\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 31, 768544994797342119, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, -799920339492125719, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 3644790808526678741, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2f\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 38, -87923020846717013, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2f\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 38, -87923020846717013, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 8772831143845743696, NULL };

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

// line 33
frost$core$String** $tmp15 = &param0->name;
frost$core$String* $tmp16 = *$tmp15;
frost$core$Bit $tmp17 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp16, &$s18);
bool $tmp19 = $tmp17.value;
if ($tmp19) goto block1; else goto block3;
block3:;
frost$core$String** $tmp20 = &param0->name;
frost$core$String* $tmp21 = *$tmp20;
frost$core$Bit $tmp22 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp21, &$s23);
bool $tmp24 = $tmp22.value;
if ($tmp24) goto block1; else goto block2;
block1:;
// line 34
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s25));
return &$s26;
block2:;
// line 36
frost$core$String** $tmp27 = &param0->name;
frost$core$String* $tmp28 = *$tmp27;
frost$core$Bit $tmp29 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp28, &$s30);
bool $tmp31 = $tmp29.value;
if ($tmp31) goto block4; else goto block6;
block6:;
frost$core$String** $tmp32 = &param0->name;
frost$core$String* $tmp33 = *$tmp32;
frost$core$Bit $tmp34 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp33, &$s35);
bool $tmp36 = $tmp34.value;
if ($tmp36) goto block4; else goto block5;
block4:;
// line 37
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s37));
return &$s38;
block5:;
// line 39
frost$core$String** $tmp39 = &param0->name;
frost$core$String* $tmp40 = *$tmp39;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
return $tmp40;

}
void frost$core$Frost$countAllocation$frost$core$Class(frost$core$Frost* param0, frost$core$Class* param1) {

frost$core$String* local0 = NULL;
frost$core$Int64$nullable local1;
// line 43
frost$core$String* $tmp41 = frost$core$Frost$allocationName$frost$core$Class$R$frost$core$String(param1);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$String* $tmp42 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
*(&local0) = $tmp41;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// line 44
frost$collections$HashMap** $tmp43 = &param0->allocations;
frost$collections$HashMap* $tmp44 = *$tmp43;
frost$core$String* $tmp45 = *(&local0);
frost$core$Object* $tmp46 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp44, ((frost$collections$Key*) $tmp45));
*(&local1) = ($tmp46 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp46)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
frost$core$Frost$unref$frost$core$Object$Q($tmp46);
// line 45
frost$core$Int64$nullable $tmp47 = *(&local1);
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit(!$tmp47.nonnull);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block1; else goto block2;
block1:;
// line 46
frost$core$Int64 $tmp50 = (frost$core$Int64) {0};
*(&local1) = ((frost$core$Int64$nullable) { $tmp50, true });
goto block2;
block2:;
// line 48
frost$collections$HashMap** $tmp51 = &param0->allocations;
frost$collections$HashMap* $tmp52 = *$tmp51;
frost$core$String* $tmp53 = *(&local0);
frost$core$Int64$nullable $tmp54 = *(&local1);
frost$core$Int64 $tmp55 = (frost$core$Int64) {1};
int64_t $tmp56 = ((frost$core$Int64) $tmp54.value).value;
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56 + $tmp57;
frost$core$Int64 $tmp59 = (frost$core$Int64) {$tmp58};
frost$core$Int64$wrapper* $tmp60;
$tmp60 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp60->value = $tmp59;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp52, ((frost$collections$Key*) $tmp53), ((frost$core$Object*) $tmp60));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$String* $tmp61 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void frost$core$Frost$countDeallocation$frost$core$Class(frost$core$Frost* param0, frost$core$Class* param1) {

frost$core$String* local0 = NULL;
frost$core$Int64$nullable local1;
// line 52
frost$core$String* $tmp62 = frost$core$Frost$allocationName$frost$core$Class$R$frost$core$String(param1);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$String* $tmp63 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local0) = $tmp62;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// line 53
frost$collections$HashMap** $tmp64 = &param0->allocations;
frost$collections$HashMap* $tmp65 = *$tmp64;
frost$core$String* $tmp66 = *(&local0);
frost$core$Object* $tmp67 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp65, ((frost$collections$Key*) $tmp66));
*(&local1) = ($tmp67 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp67)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
frost$core$Frost$unref$frost$core$Object$Q($tmp67);
// line 54
frost$core$Int64$nullable $tmp68 = *(&local1);
frost$core$Bit $tmp69 = frost$core$Bit$init$builtin_bit(!$tmp68.nonnull);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block1; else goto block2;
block1:;
// line 55
frost$core$Int64 $tmp71 = (frost$core$Int64) {0};
*(&local1) = ((frost$core$Int64$nullable) { $tmp71, true });
goto block2;
block2:;
// line 57
frost$collections$HashMap** $tmp72 = &param0->allocations;
frost$collections$HashMap* $tmp73 = *$tmp72;
frost$core$String* $tmp74 = *(&local0);
frost$core$Int64$nullable $tmp75 = *(&local1);
frost$core$Int64 $tmp76 = (frost$core$Int64) {1};
int64_t $tmp77 = ((frost$core$Int64) $tmp75.value).value;
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77 - $tmp78;
frost$core$Int64 $tmp80 = (frost$core$Int64) {$tmp79};
frost$core$Int64$wrapper* $tmp81;
$tmp81 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp81->value = $tmp80;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp73, ((frost$collections$Key*) $tmp74), ((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$String* $tmp82 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void frost$core$Frost$dumpReport(frost$core$Frost* param0) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// line 61
frost$collections$HashMap** $tmp83 = &param0->allocations;
frost$collections$HashMap* $tmp84 = *$tmp83;
ITable* $tmp85 = ((frost$collections$MapView*) $tmp84)->$class->itable;
while ($tmp85->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp85 = $tmp85->next;
}
$fn87 $tmp86 = $tmp85->methods[3];
frost$collections$Iterator* $tmp88 = $tmp86(((frost$collections$MapView*) $tmp84));
goto block1;
block1:;
ITable* $tmp89 = $tmp88->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[0];
frost$core$Bit $tmp92 = $tmp90($tmp88);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$String*) NULL);
ITable* $tmp94 = $tmp88->$class->itable;
while ($tmp94->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp94 = $tmp94->next;
}
$fn96 $tmp95 = $tmp94->methods[1];
frost$core$Object* $tmp97 = $tmp95($tmp88);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp97)));
frost$core$String* $tmp98 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local0) = ((frost$core$String*) $tmp97);
// line 62
frost$collections$HashMap** $tmp99 = &param0->allocations;
frost$collections$HashMap* $tmp100 = *$tmp99;
frost$core$String* $tmp101 = *(&local0);
frost$core$Object* $tmp102 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp100, ((frost$collections$Key*) $tmp101));
frost$core$Int64 $tmp103 = (frost$core$Int64) {0};
int64_t $tmp104 = ((frost$core$Int64) ($tmp102 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp102)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).value).value;
int64_t $tmp105 = $tmp103.value;
bool $tmp106 = $tmp104 != $tmp105;
frost$core$Bit $tmp107 = (frost$core$Bit) {$tmp106};
bool $tmp108 = $tmp107.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp102);
if ($tmp108) goto block4; else goto block5;
block4:;
// line 63
frost$core$String* $tmp109 = *(&local0);
frost$core$String* $tmp110 = frost$core$String$get_asString$R$frost$core$String($tmp109);
frost$core$String* $tmp111 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp110, &$s112);
frost$collections$HashMap** $tmp113 = &param0->allocations;
frost$collections$HashMap* $tmp114 = *$tmp113;
frost$core$String* $tmp115 = *(&local0);
frost$core$Object* $tmp116 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp114, ((frost$collections$Key*) $tmp115));
frost$core$Object* $tmp117;
if (($tmp116 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp116)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).nonnull) {
    frost$core$Int64$wrapper* $tmp118;
    $tmp118 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp118->value = ((frost$core$Int64) ($tmp116 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp116)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).value);
    $tmp117 = ((frost$core$Object*) $tmp118);
}
else {
    $tmp117 = NULL;
}
frost$core$String* $tmp119 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp111, $tmp117);
frost$core$String* $tmp120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp119, &$s121);
frost$io$Console$printLine$frost$core$String($tmp120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Frost$unref$frost$core$Object$Q($tmp117);
frost$core$Frost$unref$frost$core$Object$Q($tmp116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp97);
frost$core$String* $tmp122 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// line 66
frost$collections$HashMap** $tmp123 = &param0->traces;
frost$collections$HashMap* $tmp124 = *$tmp123;
ITable* $tmp125 = ((frost$collections$MapView*) $tmp124)->$class->itable;
while ($tmp125->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp125 = $tmp125->next;
}
$fn127 $tmp126 = $tmp125->methods[3];
frost$collections$Iterator* $tmp128 = $tmp126(((frost$collections$MapView*) $tmp124));
goto block6;
block6:;
ITable* $tmp129 = $tmp128->$class->itable;
while ($tmp129->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp129 = $tmp129->next;
}
$fn131 $tmp130 = $tmp129->methods[0];
frost$core$Bit $tmp132 = $tmp130($tmp128);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block8; else goto block7;
block7:;
*(&local1) = ((frost$core$String*) NULL);
ITable* $tmp134 = $tmp128->$class->itable;
while ($tmp134->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp134 = $tmp134->next;
}
$fn136 $tmp135 = $tmp134->methods[1];
frost$core$Object* $tmp137 = $tmp135($tmp128);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp137)));
frost$core$String* $tmp138 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local1) = ((frost$core$String*) $tmp137);
// line 67
frost$core$String* $tmp139 = *(&local1);
frost$core$String* $tmp140 = frost$core$String$get_asString$R$frost$core$String($tmp139);
frost$core$String* $tmp141 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp140, &$s142);
frost$collections$HashMap** $tmp143 = &param0->traces;
frost$collections$HashMap* $tmp144 = *$tmp143;
frost$core$String* $tmp145 = *(&local1);
frost$core$Object* $tmp146 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp144, ((frost$collections$Key*) $tmp145));
frost$core$Object* $tmp147;
if (($tmp146 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp146)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).nonnull) {
    frost$core$Int64$wrapper* $tmp148;
    $tmp148 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp148->value = ((frost$core$Int64) ($tmp146 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp146)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).value);
    $tmp147 = ((frost$core$Object*) $tmp148);
}
else {
    $tmp147 = NULL;
}
frost$core$String* $tmp149 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp141, $tmp147);
frost$core$String* $tmp150 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp149, &$s151);
frost$io$Console$printLine$frost$core$String($tmp150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$Frost$unref$frost$core$Object$Q($tmp147);
frost$core$Frost$unref$frost$core$Object$Q($tmp146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q($tmp137);
frost$core$String* $tmp152 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
*(&local1) = ((frost$core$String*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
return;

}
void frost$core$Frost$countTrace$frost$core$String(frost$core$Frost* param0, frost$core$String* param1) {

frost$core$Int64$nullable local0;
// line 84
frost$collections$HashMap** $tmp153 = &param0->traces;
frost$collections$HashMap* $tmp154 = *$tmp153;
frost$core$Object* $tmp155 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp154, ((frost$collections$Key*) param1));
*(&local0) = ($tmp155 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp155)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
frost$core$Frost$unref$frost$core$Object$Q($tmp155);
// line 85
frost$core$Int64$nullable $tmp156 = *(&local0);
frost$core$Bit $tmp157 = frost$core$Bit$init$builtin_bit(!$tmp156.nonnull);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block1; else goto block2;
block1:;
// line 86
frost$core$Int64 $tmp159 = (frost$core$Int64) {0};
*(&local0) = ((frost$core$Int64$nullable) { $tmp159, true });
goto block2;
block2:;
// line 88
frost$collections$HashMap** $tmp160 = &param0->traces;
frost$collections$HashMap* $tmp161 = *$tmp160;
frost$core$Int64$nullable $tmp162 = *(&local0);
frost$core$Int64 $tmp163 = (frost$core$Int64) {1};
int64_t $tmp164 = ((frost$core$Int64) $tmp162.value).value;
int64_t $tmp165 = $tmp163.value;
int64_t $tmp166 = $tmp164 + $tmp165;
frost$core$Int64 $tmp167 = (frost$core$Int64) {$tmp166};
frost$core$Int64$wrapper* $tmp168;
$tmp168 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp168->value = $tmp167;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp161, ((frost$collections$Key*) param1), ((frost$core$Object*) $tmp168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
return;

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$Error* local0 = NULL;
// line 105
*(&local0) = ((frost$core$Error*) NULL);
// line 106
frost$io$OutputStream* $tmp169 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp170 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s171, param0);
frost$core$String* $tmp172 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp170, &$s173);
frost$core$Int64$wrapper* $tmp174;
$tmp174 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp174->value = param1;
frost$core$String* $tmp175 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp172, ((frost$core$Object*) $tmp174));
frost$core$String* $tmp176 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp175, &$s177);
$fn179 $tmp178 = ($fn179) $tmp169->$class->vtable[19];
frost$core$Error* $tmp180 = $tmp178($tmp169, $tmp176);
if ($tmp180 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
*(&local0) = $tmp180;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
goto block2;
block1:;
goto block2;
block2:;
frost$core$Error* $tmp181 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
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
frost$core$Error* $tmp196 = $tmp194($tmp182, $tmp192);
if ($tmp196 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local0) = $tmp196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
goto block2;
block1:;
goto block2;
block2:;
frost$core$Error* $tmp197 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local0) = ((frost$core$Error*) NULL);
// line 120
frost$core$System$crash();
return;

}
frost$core$UInt64$nullable frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q(frost$core$Char32 param0) {

// line 125
frost$core$Int32 $tmp198 = (frost$core$Int32) {48};
frost$core$Char32 $tmp199 = frost$core$Char32$init$frost$core$Int32($tmp198);
frost$core$Bit $tmp200 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp199);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block3; else goto block2;
block3:;
frost$core$Int32 $tmp202 = (frost$core$Int32) {57};
frost$core$Char32 $tmp203 = frost$core$Char32$init$frost$core$Int32($tmp202);
frost$core$Bit $tmp204 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block1; else goto block2;
block1:;
// line 126
frost$core$UInt64 $tmp206 = frost$core$Char32$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp207 = (frost$core$UInt8) {48};
frost$core$Char8 $tmp208 = frost$core$Char8$init$frost$core$UInt8($tmp207);
frost$core$UInt64 $tmp209 = frost$core$Char8$get_asUInt64$R$frost$core$UInt64($tmp208);
uint64_t $tmp210 = $tmp206.value;
uint64_t $tmp211 = $tmp209.value;
uint64_t $tmp212 = $tmp210 - $tmp211;
frost$core$UInt64 $tmp213 = (frost$core$UInt64) {$tmp212};
return ((frost$core$UInt64$nullable) { $tmp213, true });
block2:;
// line 128
frost$core$Int32 $tmp214 = (frost$core$Int32) {65};
frost$core$Char32 $tmp215 = frost$core$Char32$init$frost$core$Int32($tmp214);
frost$core$Bit $tmp216 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp215);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block6; else goto block5;
block6:;
frost$core$Int32 $tmp218 = (frost$core$Int32) {90};
frost$core$Char32 $tmp219 = frost$core$Char32$init$frost$core$Int32($tmp218);
frost$core$Bit $tmp220 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp219);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block4; else goto block5;
block4:;
// line 129
frost$core$UInt64 $tmp222 = frost$core$Char32$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp223 = (frost$core$UInt8) {65};
frost$core$Char8 $tmp224 = frost$core$Char8$init$frost$core$UInt8($tmp223);
frost$core$UInt64 $tmp225 = frost$core$Char8$get_asUInt64$R$frost$core$UInt64($tmp224);
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
block5:;
// line 131
frost$core$Int32 $tmp235 = (frost$core$Int32) {97};
frost$core$Char32 $tmp236 = frost$core$Char32$init$frost$core$Int32($tmp235);
frost$core$Bit $tmp237 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp236);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block9; else goto block8;
block9:;
frost$core$Int32 $tmp239 = (frost$core$Int32) {122};
frost$core$Char32 $tmp240 = frost$core$Char32$init$frost$core$Int32($tmp239);
frost$core$Bit $tmp241 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp240);
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block7; else goto block8;
block7:;
// line 132
frost$core$UInt64 $tmp243 = frost$core$Char32$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp244 = (frost$core$UInt8) {97};
frost$core$Char8 $tmp245 = frost$core$Char8$init$frost$core$UInt8($tmp244);
frost$core$UInt64 $tmp246 = frost$core$Char8$get_asUInt64$R$frost$core$UInt64($tmp245);
uint64_t $tmp247 = $tmp243.value;
uint64_t $tmp248 = $tmp246.value;
uint64_t $tmp249 = $tmp247 - $tmp248;
frost$core$UInt64 $tmp250 = (frost$core$UInt64) {$tmp249};
frost$core$UInt64 $tmp251 = (frost$core$UInt64) {10};
uint64_t $tmp252 = $tmp250.value;
uint64_t $tmp253 = $tmp251.value;
uint64_t $tmp254 = $tmp252 + $tmp253;
frost$core$UInt64 $tmp255 = (frost$core$UInt64) {$tmp254};
return ((frost$core$UInt64$nullable) { $tmp255, true });
block8:;
// line 134
return ((frost$core$UInt64$nullable) { .nonnull = false });

}
frost$core$UInt64$nullable frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64 local0;
frost$core$UInt64 local1;
frost$core$String$Index local2;
frost$core$UInt64$nullable local3;
// line 142
frost$core$Bit $tmp256 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s257);
bool $tmp258 = $tmp256.value;
if ($tmp258) goto block1; else goto block2;
block1:;
// line 143
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 145
frost$core$UInt64 $tmp259 = (frost$core$UInt64) {0};
*(&local0) = $tmp259;
// line 146
frost$core$UInt64 $tmp260 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64(param1);
*(&local1) = $tmp260;
// line 147
frost$core$String$Index $tmp261 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local2) = $tmp261;
// line 148
goto block3;
block3:;
frost$core$String$Index $tmp262 = *(&local2);
frost$core$String$Index$wrapper* $tmp263;
$tmp263 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp263->value = $tmp262;
frost$core$String$Index $tmp264 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$wrapper* $tmp265;
$tmp265 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp265->value = $tmp264;
ITable* $tmp266 = ((frost$core$Equatable*) $tmp263)->$class->itable;
while ($tmp266->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp266 = $tmp266->next;
}
$fn268 $tmp267 = $tmp266->methods[1];
frost$core$Bit $tmp269 = $tmp267(((frost$core$Equatable*) $tmp263), ((frost$core$Equatable*) $tmp265));
bool $tmp270 = $tmp269.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp265)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp263)));
if ($tmp270) goto block4; else goto block5;
block4:;
// line 149
frost$core$String$Index $tmp271 = *(&local2);
frost$core$Char32 $tmp272 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp271);
frost$core$UInt64$nullable $tmp273 = frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q($tmp272);
*(&local3) = $tmp273;
// line 150
frost$core$UInt64$nullable $tmp274 = *(&local3);
frost$core$Bit $tmp275 = frost$core$Bit$init$builtin_bit(!$tmp274.nonnull);
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block6; else goto block8;
block8:;
frost$core$UInt64$nullable $tmp277 = *(&local3);
frost$core$UInt64 $tmp278 = *(&local1);
uint64_t $tmp279 = ((frost$core$UInt64) $tmp277.value).value;
uint64_t $tmp280 = $tmp278.value;
bool $tmp281 = $tmp279 >= $tmp280;
frost$core$Bit $tmp282 = (frost$core$Bit) {$tmp281};
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block6; else goto block7;
block6:;
// line 151
return ((frost$core$UInt64$nullable) { .nonnull = false });
block7:;
// line 153
frost$core$UInt64 $tmp284 = *(&local0);
frost$core$UInt64 $tmp285 = *(&local1);
uint64_t $tmp286 = $tmp284.value;
uint64_t $tmp287 = $tmp285.value;
uint64_t $tmp288 = $tmp286 * $tmp287;
frost$core$UInt64 $tmp289 = (frost$core$UInt64) {$tmp288};
frost$core$UInt64$nullable $tmp290 = *(&local3);
uint64_t $tmp291 = $tmp289.value;
uint64_t $tmp292 = ((frost$core$UInt64) $tmp290.value).value;
uint64_t $tmp293 = $tmp291 + $tmp292;
frost$core$UInt64 $tmp294 = (frost$core$UInt64) {$tmp293};
*(&local0) = $tmp294;
// line 154
frost$core$String$Index $tmp295 = *(&local2);
frost$core$String$Index $tmp296 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp295);
*(&local2) = $tmp296;
goto block3;
block5:;
// line 156
frost$core$UInt64 $tmp297 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp297, true });

}
frost$core$String* frost$core$Frost$align$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$Int64$nullable local1;
frost$core$Char32 local2;
// line 182
frost$core$Int64 $tmp298 = frost$core$String$get_length$R$frost$core$Int64(param1);
frost$core$Int64 $tmp299 = (frost$core$Int64) {2};
int64_t $tmp300 = $tmp298.value;
int64_t $tmp301 = $tmp299.value;
bool $tmp302 = $tmp300 >= $tmp301;
frost$core$Bit $tmp303 = (frost$core$Bit) {$tmp302};
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp305 = (frost$core$Int64) {182};
frost$core$String* $tmp306 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s307, param1);
frost$core$String* $tmp308 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp306, &$s309);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s310, $tmp305, $tmp308);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
abort(); // unreachable
block1:;
// line 183
frost$core$String$Index $tmp311 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$String$Index $tmp312 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp311);
*(&local0) = $tmp312;
// line 184
frost$core$String$Index $tmp313 = *(&local0);
frost$core$Char32 $tmp314 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp313);
frost$core$Int32 $tmp315 = (frost$core$Int32) {60};
frost$core$Char32 $tmp316 = frost$core$Char32$init$frost$core$Int32($tmp315);
frost$core$Bit $tmp317 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp314, $tmp316);
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block4; else goto block5;
block5:;
frost$core$Int32 $tmp319 = (frost$core$Int32) {94};
frost$core$Char32 $tmp320 = frost$core$Char32$init$frost$core$Int32($tmp319);
frost$core$Bit $tmp321 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp314, $tmp320);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block4; else goto block6;
block6:;
frost$core$Int32 $tmp323 = (frost$core$Int32) {62};
frost$core$Char32 $tmp324 = frost$core$Char32$init$frost$core$Int32($tmp323);
frost$core$Bit $tmp325 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp314, $tmp324);
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block4; else goto block7;
block4:;
goto block3;
block7:;
// line 189
frost$core$String$Index $tmp327 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local0) = $tmp327;
goto block3;
block3:;
// line 192
frost$core$String$Index $tmp328 = *(&local0);
frost$core$String$Index $tmp329 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp328);
frost$core$Bit $tmp330 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp331 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp329, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp330);
frost$core$String* $tmp332 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp331);
frost$core$Int64$nullable $tmp333 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp332);
*(&local1) = $tmp333;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
// line 193
// line 194
frost$core$String$Index $tmp334 = *(&local0);
frost$core$String$Index $tmp335 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$Bit $tmp336 = frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit($tmp334, $tmp335);
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block8; else goto block10;
block8:;
// line 195
frost$core$Int32 $tmp338 = (frost$core$Int32) {32};
frost$core$Char32 $tmp339 = frost$core$Char32$init$frost$core$Int32($tmp338);
*(&local2) = $tmp339;
goto block9;
block10:;
// line 1
// line 198
frost$core$String$Index $tmp340 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$Char32 $tmp341 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp340);
*(&local2) = $tmp341;
goto block9;
block9:;
// line 200
frost$core$String$Index $tmp342 = *(&local0);
frost$core$Char32 $tmp343 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp342);
frost$core$Int32 $tmp344 = (frost$core$Int32) {60};
frost$core$Char32 $tmp345 = frost$core$Char32$init$frost$core$Int32($tmp344);
frost$core$Bit $tmp346 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp343, $tmp345);
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block12; else goto block13;
block12:;
// line 201
frost$core$Int64$nullable $tmp348 = *(&local1);
frost$core$Char32 $tmp349 = *(&local2);
frost$core$String* $tmp350 = frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int64) $tmp348.value), $tmp349);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
return $tmp350;
block13:;
frost$core$Int32 $tmp351 = (frost$core$Int32) {94};
frost$core$Char32 $tmp352 = frost$core$Char32$init$frost$core$Int32($tmp351);
frost$core$Bit $tmp353 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp343, $tmp352);
bool $tmp354 = $tmp353.value;
if ($tmp354) goto block14; else goto block15;
block14:;
// line 202
frost$core$Int64$nullable $tmp355 = *(&local1);
frost$core$Char32 $tmp356 = *(&local2);
frost$core$String* $tmp357 = frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int64) $tmp355.value), $tmp356);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
return $tmp357;
block15:;
frost$core$Int32 $tmp358 = (frost$core$Int32) {62};
frost$core$Char32 $tmp359 = frost$core$Char32$init$frost$core$Int32($tmp358);
frost$core$Bit $tmp360 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp343, $tmp359);
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block16; else goto block17;
block16:;
// line 203
frost$core$Int64$nullable $tmp362 = *(&local1);
frost$core$Char32 $tmp363 = *(&local2);
frost$core$String* $tmp364 = frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int64) $tmp362.value), $tmp363);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
return $tmp364;
block17:;
// line 204
frost$core$Int64 $tmp365 = (frost$core$Int64) {204};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s366, $tmp365);
abort(); // unreachable
block11:;
goto block18;
block18:;

}
frost$core$String* frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String(frost$core$Bit param0, frost$core$UInt64 param1, frost$core$UInt64 param2, frost$core$String* param3) {

frost$core$String$Index local0;
frost$core$UInt64 local1;
frost$collections$ListView* local2 = NULL;
frost$core$UInt64 local3;
frost$core$Int64 local4;
frost$core$Char8* local5;
frost$core$Int64 local6;
frost$core$Int64 local7;
frost$core$Int64 local8;
// line 218
frost$core$String$Index $tmp367 = frost$core$String$get_start$R$frost$core$String$Index(param3);
*(&local0) = $tmp367;
// line 219
frost$core$UInt64 $tmp368 = (frost$core$UInt64) {10};
*(&local1) = $tmp368;
// line 220
frost$collections$ListView* $tmp369 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s370);
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$collections$ListView* $tmp371 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
*(&local2) = $tmp369;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// line 221
frost$core$String$Index $tmp372 = *(&local0);
frost$core$String$Index$wrapper* $tmp373;
$tmp373 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp373->value = $tmp372;
frost$core$String$Index $tmp374 = frost$core$String$get_end$R$frost$core$String$Index(param3);
frost$core$String$Index$wrapper* $tmp375;
$tmp375 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp375->value = $tmp374;
ITable* $tmp376 = ((frost$core$Comparable*) $tmp373)->$class->itable;
while ($tmp376->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp376 = $tmp376->next;
}
$fn378 $tmp377 = $tmp376->methods[1];
frost$core$Bit $tmp379 = $tmp377(((frost$core$Comparable*) $tmp373), ((frost$core$Comparable*) $tmp375));
bool $tmp380 = $tmp379.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp375)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp373)));
if ($tmp380) goto block1; else goto block2;
block1:;
// line 222
frost$core$String$Index $tmp381 = *(&local0);
frost$core$Char32 $tmp382 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param3, $tmp381);
frost$core$Int32 $tmp383 = (frost$core$Int32) {98};
frost$core$Char32 $tmp384 = frost$core$Char32$init$frost$core$Int32($tmp383);
frost$core$Bit $tmp385 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp382, $tmp384);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block4; else goto block5;
block5:;
frost$core$Int32 $tmp387 = (frost$core$Int32) {66};
frost$core$Char32 $tmp388 = frost$core$Char32$init$frost$core$Int32($tmp387);
frost$core$Bit $tmp389 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp382, $tmp388);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block4; else goto block6;
block4:;
// line 224
frost$core$UInt64 $tmp391 = (frost$core$UInt64) {2};
*(&local1) = $tmp391;
goto block3;
block6:;
frost$core$Int32 $tmp392 = (frost$core$Int32) {111};
frost$core$Char32 $tmp393 = frost$core$Char32$init$frost$core$Int32($tmp392);
frost$core$Bit $tmp394 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp382, $tmp393);
bool $tmp395 = $tmp394.value;
if ($tmp395) goto block7; else goto block8;
block8:;
frost$core$Int32 $tmp396 = (frost$core$Int32) {79};
frost$core$Char32 $tmp397 = frost$core$Char32$init$frost$core$Int32($tmp396);
frost$core$Bit $tmp398 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp382, $tmp397);
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block7; else goto block9;
block7:;
// line 227
frost$core$UInt64 $tmp400 = (frost$core$UInt64) {8};
*(&local1) = $tmp400;
goto block3;
block9:;
frost$core$Int32 $tmp401 = (frost$core$Int32) {100};
frost$core$Char32 $tmp402 = frost$core$Char32$init$frost$core$Int32($tmp401);
frost$core$Bit $tmp403 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp382, $tmp402);
bool $tmp404 = $tmp403.value;
if ($tmp404) goto block10; else goto block11;
block11:;
frost$core$Int32 $tmp405 = (frost$core$Int32) {68};
frost$core$Char32 $tmp406 = frost$core$Char32$init$frost$core$Int32($tmp405);
frost$core$Bit $tmp407 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp382, $tmp406);
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block10; else goto block12;
block10:;
// line 230
frost$core$UInt64 $tmp409 = (frost$core$UInt64) {10};
*(&local1) = $tmp409;
goto block3;
block12:;
frost$core$Int32 $tmp410 = (frost$core$Int32) {120};
frost$core$Char32 $tmp411 = frost$core$Char32$init$frost$core$Int32($tmp410);
frost$core$Bit $tmp412 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp382, $tmp411);
bool $tmp413 = $tmp412.value;
if ($tmp413) goto block13; else goto block14;
block13:;
// line 233
frost$core$UInt64 $tmp414 = (frost$core$UInt64) {16};
*(&local1) = $tmp414;
goto block3;
block14:;
frost$core$Int32 $tmp415 = (frost$core$Int32) {88};
frost$core$Char32 $tmp416 = frost$core$Char32$init$frost$core$Int32($tmp415);
frost$core$Bit $tmp417 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp382, $tmp416);
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block15; else goto block16;
block15:;
// line 236
frost$core$UInt64 $tmp419 = (frost$core$UInt64) {16};
*(&local1) = $tmp419;
// line 237
frost$collections$ListView* $tmp420 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s421);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$collections$ListView* $tmp422 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
*(&local2) = $tmp420;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
goto block3;
block16:;
// line 240
frost$core$Int64 $tmp423 = (frost$core$Int64) {240};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s424, $tmp423, &$s425);
abort(); // unreachable
block3:;
goto block2;
block2:;
// line 244
// line 245
bool $tmp426 = param0.value;
if ($tmp426) goto block20; else goto block19;
block20:;
frost$core$UInt64 $tmp427 = *(&local1);
frost$core$UInt64 $tmp428 = (frost$core$UInt64) {10};
uint64_t $tmp429 = $tmp427.value;
uint64_t $tmp430 = $tmp428.value;
bool $tmp431 = $tmp429 != $tmp430;
frost$core$Bit $tmp432 = (frost$core$Bit) {$tmp431};
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block17; else goto block19;
block17:;
// line 246
frost$core$Int64 $tmp434 = frost$core$UInt64$get_asInt64$R$frost$core$Int64(param1);
frost$core$Int64 $tmp435 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp434);
frost$core$UInt64 $tmp436 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp435);
frost$core$UInt64 $tmp437 = frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64($tmp436, param2);
*(&local3) = $tmp437;
goto block18;
block19:;
// line 1
// line 249
*(&local3) = param1;
goto block18;
block18:;
// line 251
frost$core$Int64 $tmp438 = (frost$core$Int64) {64};
*(&local4) = $tmp438;
// line 252
frost$core$Int64 $tmp439 = *(&local4);
int64_t $tmp440 = $tmp439.value;
frost$core$Char8* $tmp441 = ((frost$core$Char8*) frostAlloc($tmp440 * 1));
*(&local5) = $tmp441;
// line 253
frost$core$Int64 $tmp442 = *(&local4);
frost$core$Int64 $tmp443 = (frost$core$Int64) {1};
int64_t $tmp444 = $tmp442.value;
int64_t $tmp445 = $tmp443.value;
int64_t $tmp446 = $tmp444 - $tmp445;
frost$core$Int64 $tmp447 = (frost$core$Int64) {$tmp446};
*(&local6) = $tmp447;
// line 254
goto block21;
block21:;
// line 255
frost$core$Char8* $tmp448 = *(&local5);
frost$core$Int64 $tmp449 = *(&local6);
frost$collections$ListView* $tmp450 = *(&local2);
frost$core$UInt64 $tmp451 = *(&local3);
frost$core$UInt64 $tmp452 = *(&local1);
frost$core$UInt64 $tmp453 = frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64($tmp451, $tmp452);
frost$core$Int64 $tmp454 = frost$core$UInt64$get_asInt64$R$frost$core$Int64($tmp453);
ITable* $tmp455 = $tmp450->$class->itable;
while ($tmp455->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp455 = $tmp455->next;
}
$fn457 $tmp456 = $tmp455->methods[0];
frost$core$Object* $tmp458 = $tmp456($tmp450, $tmp454);
int64_t $tmp459 = $tmp449.value;
$tmp448[$tmp459] = ((frost$core$Char8$wrapper*) $tmp458)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp458);
// line 256
frost$core$UInt64 $tmp460 = *(&local3);
frost$core$UInt64 $tmp461 = *(&local1);
uint64_t $tmp462 = $tmp460.value;
uint64_t $tmp463 = $tmp461.value;
uint64_t $tmp464 = $tmp462 / $tmp463;
frost$core$UInt64 $tmp465 = (frost$core$UInt64) {$tmp464};
*(&local3) = $tmp465;
// line 257
frost$core$Int64 $tmp466 = *(&local6);
frost$core$Int64 $tmp467 = (frost$core$Int64) {1};
int64_t $tmp468 = $tmp466.value;
int64_t $tmp469 = $tmp467.value;
int64_t $tmp470 = $tmp468 - $tmp469;
frost$core$Int64 $tmp471 = (frost$core$Int64) {$tmp470};
*(&local6) = $tmp471;
goto block22;
block22:;
frost$core$UInt64 $tmp472 = *(&local3);
frost$core$UInt64 $tmp473 = (frost$core$UInt64) {0};
uint64_t $tmp474 = $tmp472.value;
uint64_t $tmp475 = $tmp473.value;
bool $tmp476 = $tmp474 > $tmp475;
frost$core$Bit $tmp477 = (frost$core$Bit) {$tmp476};
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block21; else goto block23;
block23:;
// line 260
bool $tmp479 = param0.value;
if ($tmp479) goto block26; else goto block25;
block26:;
frost$core$UInt64 $tmp480 = *(&local1);
frost$core$UInt64 $tmp481 = (frost$core$UInt64) {10};
frost$core$Bit $tmp482 = frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit($tmp480, $tmp481);
bool $tmp483 = $tmp482.value;
if ($tmp483) goto block24; else goto block25;
block24:;
// line 261
frost$core$Char8* $tmp484 = *(&local5);
frost$core$Int64 $tmp485 = *(&local6);
frost$core$UInt8 $tmp486 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp487 = frost$core$Char8$init$frost$core$UInt8($tmp486);
int64_t $tmp488 = $tmp485.value;
$tmp484[$tmp488] = $tmp487;
// line 262
frost$core$Int64 $tmp489 = *(&local6);
frost$core$Int64 $tmp490 = (frost$core$Int64) {1};
int64_t $tmp491 = $tmp489.value;
int64_t $tmp492 = $tmp490.value;
int64_t $tmp493 = $tmp491 - $tmp492;
frost$core$Int64 $tmp494 = (frost$core$Int64) {$tmp493};
*(&local6) = $tmp494;
goto block25;
block25:;
// line 264
frost$core$Int64 $tmp495 = *(&local6);
frost$core$Int64 $tmp496 = (frost$core$Int64) {1};
int64_t $tmp497 = $tmp495.value;
int64_t $tmp498 = $tmp496.value;
int64_t $tmp499 = $tmp497 + $tmp498;
frost$core$Int64 $tmp500 = (frost$core$Int64) {$tmp499};
*(&local6) = $tmp500;
// line 265
frost$core$Int64 $tmp501 = *(&local4);
frost$core$Int64 $tmp502 = *(&local6);
int64_t $tmp503 = $tmp501.value;
int64_t $tmp504 = $tmp502.value;
int64_t $tmp505 = $tmp503 - $tmp504;
frost$core$Int64 $tmp506 = (frost$core$Int64) {$tmp505};
*(&local7) = $tmp506;
// line 266
frost$core$Int64 $tmp507 = (frost$core$Int64) {0};
frost$core$Int64 $tmp508 = *(&local7);
frost$core$Bit $tmp509 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp510 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp507, $tmp508, $tmp509);
frost$core$Int64 $tmp511 = $tmp510.min;
*(&local8) = $tmp511;
frost$core$Int64 $tmp512 = $tmp510.max;
frost$core$Bit $tmp513 = $tmp510.inclusive;
bool $tmp514 = $tmp513.value;
frost$core$Int64 $tmp515 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp516 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp515);
if ($tmp514) goto block30; else goto block31;
block30:;
int64_t $tmp517 = $tmp511.value;
int64_t $tmp518 = $tmp512.value;
bool $tmp519 = $tmp517 <= $tmp518;
frost$core$Bit $tmp520 = (frost$core$Bit) {$tmp519};
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block27; else goto block28;
block31:;
int64_t $tmp522 = $tmp511.value;
int64_t $tmp523 = $tmp512.value;
bool $tmp524 = $tmp522 < $tmp523;
frost$core$Bit $tmp525 = (frost$core$Bit) {$tmp524};
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block27; else goto block28;
block27:;
// line 267
frost$core$Char8* $tmp527 = *(&local5);
frost$core$Int64 $tmp528 = *(&local8);
frost$core$Char8* $tmp529 = *(&local5);
frost$core$Int64 $tmp530 = *(&local8);
frost$core$Int64 $tmp531 = *(&local6);
int64_t $tmp532 = $tmp530.value;
int64_t $tmp533 = $tmp531.value;
int64_t $tmp534 = $tmp532 + $tmp533;
frost$core$Int64 $tmp535 = (frost$core$Int64) {$tmp534};
int64_t $tmp536 = $tmp535.value;
frost$core$Char8 $tmp537 = $tmp529[$tmp536];
int64_t $tmp538 = $tmp528.value;
$tmp527[$tmp538] = $tmp537;
goto block29;
block29:;
frost$core$Int64 $tmp539 = *(&local8);
int64_t $tmp540 = $tmp512.value;
int64_t $tmp541 = $tmp539.value;
int64_t $tmp542 = $tmp540 - $tmp541;
frost$core$Int64 $tmp543 = (frost$core$Int64) {$tmp542};
frost$core$UInt64 $tmp544 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp543);
if ($tmp514) goto block33; else goto block34;
block33:;
uint64_t $tmp545 = $tmp544.value;
uint64_t $tmp546 = $tmp516.value;
bool $tmp547 = $tmp545 >= $tmp546;
frost$core$Bit $tmp548 = (frost$core$Bit) {$tmp547};
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block32; else goto block28;
block34:;
uint64_t $tmp550 = $tmp544.value;
uint64_t $tmp551 = $tmp516.value;
bool $tmp552 = $tmp550 > $tmp551;
frost$core$Bit $tmp553 = (frost$core$Bit) {$tmp552};
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block32; else goto block28;
block32:;
int64_t $tmp555 = $tmp539.value;
int64_t $tmp556 = $tmp515.value;
int64_t $tmp557 = $tmp555 + $tmp556;
frost$core$Int64 $tmp558 = (frost$core$Int64) {$tmp557};
*(&local8) = $tmp558;
goto block27;
block28:;
// line 269
frost$core$String* $tmp559 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp560 = *(&local5);
frost$core$Int64 $tmp561 = *(&local7);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp559, $tmp560, $tmp561);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
frost$collections$ListView* $tmp562 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
*(&local2) = ((frost$collections$ListView*) NULL);
return $tmp559;

}
void frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(frost$collections$List* param0, frost$core$Int64 param1, frost$core$Int64 param2) {

frost$core$Object* local0 = NULL;
// line 291
ITable* $tmp563 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp563->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp563 = $tmp563->next;
}
$fn565 $tmp564 = $tmp563->methods[0];
frost$core$Object* $tmp566 = $tmp564(((frost$collections$ListView*) param0), param1);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp566);
frost$core$Object* $tmp567 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp567);
*(&local0) = $tmp566;
frost$core$Frost$unref$frost$core$Object$Q($tmp566);
// line 292
ITable* $tmp568 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp568->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp568 = $tmp568->next;
}
$fn570 $tmp569 = $tmp568->methods[0];
frost$core$Object* $tmp571 = $tmp569(((frost$collections$ListView*) param0), param2);
ITable* $tmp572 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp572->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp572 = $tmp572->next;
}
$fn574 $tmp573 = $tmp572->methods[0];
$tmp573(((frost$collections$ListWriter*) param0), param1, $tmp571);
frost$core$Frost$unref$frost$core$Object$Q($tmp571);
// line 293
frost$core$Object* $tmp575 = *(&local0);
ITable* $tmp576 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp576->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp576 = $tmp576->next;
}
$fn578 $tmp577 = $tmp576->methods[0];
$tmp577(((frost$collections$ListWriter*) param0), param2, $tmp575);
frost$core$Object* $tmp579 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp579);
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
int64_t $tmp580 = param1.value;
int64_t $tmp581 = param2.value;
bool $tmp582 = $tmp580 >= $tmp581;
frost$core$Bit $tmp583 = (frost$core$Bit) {$tmp582};
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block1; else goto block2;
block1:;
// line 301
return;
block2:;
// line 303
int64_t $tmp585 = param2.value;
int64_t $tmp586 = param1.value;
int64_t $tmp587 = $tmp585 - $tmp586;
frost$core$Int64 $tmp588 = (frost$core$Int64) {$tmp587};
frost$core$Int64 $tmp589 = (frost$core$Int64) {2};
int64_t $tmp590 = $tmp588.value;
int64_t $tmp591 = $tmp589.value;
int64_t $tmp592 = $tmp590 / $tmp591;
frost$core$Int64 $tmp593 = (frost$core$Int64) {$tmp592};
int64_t $tmp594 = param1.value;
int64_t $tmp595 = $tmp593.value;
int64_t $tmp596 = $tmp594 + $tmp595;
frost$core$Int64 $tmp597 = (frost$core$Int64) {$tmp596};
*(&local0) = $tmp597;
// line 304
frost$core$Int64 $tmp598 = *(&local0);
ITable* $tmp599 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp599->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp599 = $tmp599->next;
}
$fn601 $tmp600 = $tmp599->methods[0];
frost$core$Object* $tmp602 = $tmp600(((frost$collections$ListView*) param0), $tmp598);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp602);
frost$core$Object* $tmp603 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp603);
*(&local1) = $tmp602;
frost$core$Frost$unref$frost$core$Object$Q($tmp602);
// line 305
frost$core$Int64 $tmp604 = *(&local0);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, param2, $tmp604);
// line 306
*(&local2) = param1;
// line 307
frost$core$Int64 $tmp605 = (frost$core$Int64) {1};
int64_t $tmp606 = param2.value;
int64_t $tmp607 = $tmp605.value;
int64_t $tmp608 = $tmp606 - $tmp607;
frost$core$Int64 $tmp609 = (frost$core$Int64) {$tmp608};
frost$core$Bit $tmp610 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$Int64$GT $tmp611 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(param1, $tmp609, $tmp610);
frost$core$Int64 $tmp612 = $tmp611.min;
*(&local3) = $tmp612;
frost$core$Int64 $tmp613 = $tmp611.max;
frost$core$Bit $tmp614 = $tmp611.inclusive;
bool $tmp615 = $tmp614.value;
frost$core$Int64 $tmp616 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp617 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp616);
if ($tmp615) goto block6; else goto block7;
block6:;
int64_t $tmp618 = $tmp612.value;
int64_t $tmp619 = $tmp613.value;
bool $tmp620 = $tmp618 <= $tmp619;
frost$core$Bit $tmp621 = (frost$core$Bit) {$tmp620};
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block3; else goto block4;
block7:;
int64_t $tmp623 = $tmp612.value;
int64_t $tmp624 = $tmp613.value;
bool $tmp625 = $tmp623 < $tmp624;
frost$core$Bit $tmp626 = (frost$core$Bit) {$tmp625};
bool $tmp627 = $tmp626.value;
if ($tmp627) goto block3; else goto block4;
block3:;
// line 308
frost$core$Int64 $tmp628 = *(&local3);
ITable* $tmp629 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp629->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp629 = $tmp629->next;
}
$fn631 $tmp630 = $tmp629->methods[0];
frost$core$Object* $tmp632 = $tmp630(((frost$collections$ListView*) param0), $tmp628);
frost$core$Object* $tmp633 = *(&local1);
frost$core$Int8** $tmp634 = &param3->pointer;
frost$core$Int8* $tmp635 = *$tmp634;
frost$core$Object** $tmp636 = &param3->target;
frost$core$Object* $tmp637 = *$tmp636;
bool $tmp638 = $tmp637 != ((frost$core$Object*) NULL);
if ($tmp638) goto block10; else goto block11;
block11:;
frost$core$Bit $tmp640 = (($fn639) $tmp635)($tmp632, $tmp633);
*(&local4) = $tmp640;
goto block12;
block10:;
frost$core$Bit $tmp642 = (($fn641) $tmp635)($tmp637, $tmp632, $tmp633);
*(&local4) = $tmp642;
goto block12;
block12:;
frost$core$Bit $tmp643 = *(&local4);
frost$core$Bit $tmp644 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp643);
bool $tmp645 = $tmp644.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp632);
if ($tmp645) goto block8; else goto block9;
block8:;
// line 309
frost$core$Int64 $tmp646 = *(&local3);
frost$core$Int64 $tmp647 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp646, $tmp647);
// line 310
frost$core$Int64 $tmp648 = *(&local2);
frost$core$Int64 $tmp649 = (frost$core$Int64) {1};
int64_t $tmp650 = $tmp648.value;
int64_t $tmp651 = $tmp649.value;
int64_t $tmp652 = $tmp650 + $tmp651;
frost$core$Int64 $tmp653 = (frost$core$Int64) {$tmp652};
*(&local2) = $tmp653;
goto block9;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp654 = *(&local3);
int64_t $tmp655 = $tmp613.value;
int64_t $tmp656 = $tmp654.value;
int64_t $tmp657 = $tmp655 - $tmp656;
frost$core$Int64 $tmp658 = (frost$core$Int64) {$tmp657};
frost$core$UInt64 $tmp659 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp658);
if ($tmp615) goto block14; else goto block15;
block14:;
uint64_t $tmp660 = $tmp659.value;
uint64_t $tmp661 = $tmp617.value;
bool $tmp662 = $tmp660 >= $tmp661;
frost$core$Bit $tmp663 = (frost$core$Bit) {$tmp662};
bool $tmp664 = $tmp663.value;
if ($tmp664) goto block13; else goto block4;
block15:;
uint64_t $tmp665 = $tmp659.value;
uint64_t $tmp666 = $tmp617.value;
bool $tmp667 = $tmp665 > $tmp666;
frost$core$Bit $tmp668 = (frost$core$Bit) {$tmp667};
bool $tmp669 = $tmp668.value;
if ($tmp669) goto block13; else goto block4;
block13:;
int64_t $tmp670 = $tmp654.value;
int64_t $tmp671 = $tmp616.value;
int64_t $tmp672 = $tmp670 + $tmp671;
frost$core$Int64 $tmp673 = (frost$core$Int64) {$tmp672};
*(&local3) = $tmp673;
goto block3;
block4:;
// line 313
frost$core$Int64 $tmp674 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp674, param2);
// line 314
frost$core$Int64 $tmp675 = *(&local2);
frost$core$Int64 $tmp676 = (frost$core$Int64) {1};
int64_t $tmp677 = $tmp675.value;
int64_t $tmp678 = $tmp676.value;
int64_t $tmp679 = $tmp677 - $tmp678;
frost$core$Int64 $tmp680 = (frost$core$Int64) {$tmp679};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, param1, $tmp680, param3);
// line 315
frost$core$Int64 $tmp681 = *(&local2);
frost$core$Int64 $tmp682 = (frost$core$Int64) {1};
int64_t $tmp683 = $tmp681.value;
int64_t $tmp684 = $tmp682.value;
int64_t $tmp685 = $tmp683 + $tmp684;
frost$core$Int64 $tmp686 = (frost$core$Int64) {$tmp685};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, $tmp686, param2, param3);
frost$core$Object* $tmp687 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp687);
*(&local1) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$cleanup(frost$core$Frost* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp688 = &param0->allocations;
frost$collections$HashMap* $tmp689 = *$tmp688;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
frost$collections$HashMap** $tmp690 = &param0->traces;
frost$collections$HashMap* $tmp691 = *$tmp690;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
return;

}

