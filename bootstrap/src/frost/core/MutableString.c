#include "frost/core/MutableString.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
#include "frost/core/Int64.h"
#include "frost/core/Char8.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Frost.h"
#include "frost/core/Char32.h"
#include "frost/core/UInt8.h"
#include "frost/core/MutableString/Index.h"
#include "frost/core/Equatable.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Matcher.h"
#include "frost/core/Range.LTfrost/core/MutableString/Index.GT.h"
#include "frost/core/Range.LTfrost/core/MutableString/Index.Q.GT.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Array.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int32.h"
#include "frost/core/Comparable.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"


static frost$core$String $s1;
frost$core$MutableString$class_type frost$core$MutableString$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$MutableString$get_asString$R$frost$core$String, frost$core$MutableString$cleanup, frost$core$MutableString$append$frost$core$Char8, frost$core$MutableString$append$frost$core$Char32, frost$core$MutableString$append$frost$core$String, frost$core$MutableString$append$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int, frost$core$MutableString$append$frost$core$Object, frost$core$MutableString$get_length$R$frost$core$Int, frost$core$MutableString$get_byteLength$R$frost$core$Int, frost$core$MutableString$get_start$R$frost$core$MutableString$Index, frost$core$MutableString$get_end$R$frost$core$MutableString$Index, frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index, frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index, frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index, frost$core$MutableString$indexOf$frost$core$String$R$frost$core$MutableString$Index$Q, frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q, frost$core$MutableString$contains$frost$core$Char8$R$frost$core$Bit, frost$core$MutableString$contains$frost$core$String$R$frost$core$Bit, frost$core$MutableString$startsWith$frost$core$String$R$frost$core$Bit, frost$core$MutableString$endsWith$frost$core$String$R$frost$core$Bit, frost$core$MutableString$lastIndexOf$frost$core$String$R$frost$core$MutableString$Index$Q, frost$core$MutableString$lastIndexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q, frost$core$MutableString$matches$frost$core$RegularExpression$R$frost$core$Bit, frost$core$MutableString$contains$frost$core$RegularExpression$R$frost$core$Bit, frost$core$MutableString$trim, frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String, frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit, frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP, frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP, frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32, frost$core$MutableString$$IDX$frost$core$Int$R$frost$core$Char32, frost$core$MutableString$$IDXEQ$frost$core$MutableString$Index$frost$core$Char32, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int$GT$frost$core$String, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String, frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int$Q$GT$frost$core$String, frost$core$MutableString$replace$frost$core$String$frost$core$String, frost$core$MutableString$ensureCapacity$frost$core$Int, frost$core$MutableString$clear, frost$core$MutableString$finish$R$frost$core$String} };

typedef frost$core$String* (*$fn472)(frost$core$Object*);
typedef frost$core$Bit (*$fn489)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1254)(frost$core$Object*);
typedef frost$core$String* (*$fn1259)(frost$core$Object*);
typedef frost$core$Bit (*$fn1277)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1317)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1333)(frost$core$Object*);
typedef frost$core$String* (*$fn1351)(frost$core$Object*);
typedef frost$core$String* (*$fn1369)(frost$core$Object*);
typedef frost$core$Object* (*$fn1385)(frost$core$String*);
typedef frost$core$Object* (*$fn1387)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn1391)(frost$core$Object*);
typedef frost$core$String* (*$fn1404)(frost$core$Object*);
typedef frost$core$Object* (*$fn1463)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn1465)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1469)(frost$core$Object*);
typedef frost$core$String* (*$fn1730)(frost$core$Object*);
typedef frost$core$Bit (*$fn1738)(frost$core$Comparable*, frost$core$Comparable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -2515322268956876193, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s857 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 99, 4288372049641424221, NULL };
static frost$core$String $s1219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s1220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 99, 4288372049641424221, NULL };
static frost$core$String $s1293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s1573 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s1642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s1785 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s1786 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x5b\x5d\x3a\x3d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e\x2c\x20\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 134, 6464499595877147488, NULL };
static frost$core$String $s2134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s2135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 99, 4288372049641424221, NULL };
static frost$core$String $s2169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s2170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x65\x6e\x73\x75\x72\x65\x43\x61\x70\x61\x63\x69\x74\x79\x28\x6e\x65\x77\x53\x69\x7a\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29", 95, 9145576632900143243, NULL };
static frost$core$String $s2293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

void frost$core$MutableString$init(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:67
frost$core$Int $tmp2 = (frost$core$Int) {32u};
frost$core$MutableString$init$frost$core$Int(param0, $tmp2);
return;

}
void frost$core$MutableString$init$frost$core$String(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:71
frost$core$Int* $tmp3 = &param1->_length;
frost$core$Int $tmp4 = *$tmp3;
frost$core$Int* $tmp5 = &param0->_length;
*$tmp5 = $tmp4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:72
frost$core$Int* $tmp6 = &param0->_length;
frost$core$Int $tmp7 = *$tmp6;
frost$core$Int $tmp8 = (frost$core$Int) {32u};
int64_t $tmp9 = $tmp7.value;
int64_t $tmp10 = $tmp8.value;
int64_t $tmp11 = $tmp9 + $tmp10;
frost$core$Int $tmp12 = (frost$core$Int) {$tmp11};
frost$core$Int* $tmp13 = &param0->maxLength;
*$tmp13 = $tmp12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:73
frost$core$Int* $tmp14 = &param0->maxLength;
frost$core$Int $tmp15 = *$tmp14;
frost$core$Int64 $tmp16 = frost$core$Int64$init$frost$core$Int($tmp15);
int64_t $tmp17 = $tmp16.value;
frost$core$Char8* $tmp18 = ((frost$core$Char8*) frostAlloc($tmp17 * 1));
frost$core$Char8** $tmp19 = &param0->data;
*$tmp19 = $tmp18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:74
frost$core$Int $tmp20 = (frost$core$Int) {0u};
frost$core$Int* $tmp21 = &param1->_length;
frost$core$Int $tmp22 = *$tmp21;
frost$core$Bit $tmp23 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp24 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp20, $tmp22, $tmp23);
frost$core$Int $tmp25 = $tmp24.min;
*(&local0) = $tmp25;
frost$core$Int $tmp26 = $tmp24.max;
frost$core$Bit $tmp27 = $tmp24.inclusive;
bool $tmp28 = $tmp27.value;
frost$core$Int $tmp29 = (frost$core$Int) {1u};
if ($tmp28) goto block4; else goto block5;
block4:;
int64_t $tmp30 = $tmp25.value;
int64_t $tmp31 = $tmp26.value;
bool $tmp32 = $tmp30 <= $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block1; else goto block2;
block5:;
int64_t $tmp35 = $tmp25.value;
int64_t $tmp36 = $tmp26.value;
bool $tmp37 = $tmp35 < $tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:75
frost$core$Char8** $tmp40 = &param0->data;
frost$core$Char8* $tmp41 = *$tmp40;
frost$core$Int $tmp42 = *(&local0);
frost$core$Int64 $tmp43 = frost$core$Int64$init$frost$core$Int($tmp42);
frost$core$Char8** $tmp44 = &param1->data;
frost$core$Char8* $tmp45 = *$tmp44;
frost$core$Int $tmp46 = *(&local0);
frost$core$Int64 $tmp47 = frost$core$Int64$init$frost$core$Int($tmp46);
int64_t $tmp48 = $tmp47.value;
frost$core$Char8 $tmp49 = $tmp45[$tmp48];
int64_t $tmp50 = $tmp43.value;
$tmp41[$tmp50] = $tmp49;
frost$core$Int $tmp51 = *(&local0);
int64_t $tmp52 = $tmp26.value;
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52 - $tmp53;
frost$core$Int $tmp55 = (frost$core$Int) {$tmp54};
if ($tmp28) goto block7; else goto block8;
block7:;
int64_t $tmp56 = $tmp55.value;
int64_t $tmp57 = $tmp29.value;
bool $tmp58 = $tmp56 >= $tmp57;
frost$core$Bit $tmp59 = (frost$core$Bit) {$tmp58};
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block6; else goto block2;
block8:;
int64_t $tmp61 = $tmp55.value;
int64_t $tmp62 = $tmp29.value;
bool $tmp63 = $tmp61 > $tmp62;
frost$core$Bit $tmp64 = (frost$core$Bit) {$tmp63};
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block6; else goto block2;
block6:;
int64_t $tmp66 = $tmp51.value;
int64_t $tmp67 = $tmp29.value;
int64_t $tmp68 = $tmp66 + $tmp67;
frost$core$Int $tmp69 = (frost$core$Int) {$tmp68};
*(&local0) = $tmp69;
goto block1;
block2:;
return;

}
void frost$core$MutableString$init$frost$core$Int(frost$core$MutableString* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:80
frost$core$Int $tmp70 = (frost$core$Int) {0u};
frost$core$Int* $tmp71 = &param0->_length;
*$tmp71 = $tmp70;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:81
frost$core$Int* $tmp72 = &param0->maxLength;
*$tmp72 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:82
frost$core$Int* $tmp73 = &param0->maxLength;
frost$core$Int $tmp74 = *$tmp73;
frost$core$Int64 $tmp75 = frost$core$Int64$init$frost$core$Int($tmp74);
int64_t $tmp76 = $tmp75.value;
frost$core$Char8* $tmp77 = ((frost$core$Char8*) frostAlloc($tmp76 * 1));
frost$core$Char8** $tmp78 = &param0->data;
*$tmp78 = $tmp77;
return;

}
void frost$core$MutableString$cleanup(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:88
frost$core$Char8** $tmp79 = &param0->data;
frost$core$Char8* $tmp80 = *$tmp79;
frostFree($tmp80);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:87
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp81 = &param0->dummy;
frost$core$String* $tmp82 = *$tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
return;

}
void frost$core$MutableString$append$frost$core$Char8(frost$core$MutableString* param0, frost$core$Char8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:93
frost$core$Int* $tmp83 = &param0->_length;
frost$core$Int $tmp84 = *$tmp83;
frost$core$Int $tmp85 = (frost$core$Int) {1u};
int64_t $tmp86 = $tmp84.value;
int64_t $tmp87 = $tmp85.value;
int64_t $tmp88 = $tmp86 + $tmp87;
frost$core$Int $tmp89 = (frost$core$Int) {$tmp88};
frost$core$MutableString$ensureCapacity$frost$core$Int(param0, $tmp89);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:94
frost$core$Char8** $tmp90 = &param0->data;
frost$core$Char8* $tmp91 = *$tmp90;
frost$core$Int* $tmp92 = &param0->_length;
frost$core$Int $tmp93 = *$tmp92;
frost$core$Int64 $tmp94 = frost$core$Int64$init$frost$core$Int($tmp93);
int64_t $tmp95 = $tmp94.value;
$tmp91[$tmp95] = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:95
frost$core$Int* $tmp96 = &param0->_length;
frost$core$Int $tmp97 = *$tmp96;
frost$core$Int $tmp98 = (frost$core$Int) {1u};
int64_t $tmp99 = $tmp97.value;
int64_t $tmp100 = $tmp98.value;
int64_t $tmp101 = $tmp99 + $tmp100;
frost$core$Int $tmp102 = (frost$core$Int) {$tmp101};
frost$core$Int* $tmp103 = &param0->_length;
*$tmp103 = $tmp102;
return;

}
void frost$core$MutableString$append$frost$core$Char32(frost$core$MutableString* param0, frost$core$Char32 param1) {

int32_t local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:100
int32_t $tmp104 = param1.value;
*(&local0) = $tmp104;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:101
int32_t $tmp105 = *(&local0);
bool $tmp106 = $tmp105 < 128u;
frost$core$Bit $tmp107 = (frost$core$Bit) {$tmp106};
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:102
frost$core$Int* $tmp109 = &param0->_length;
frost$core$Int $tmp110 = *$tmp109;
frost$core$Int $tmp111 = (frost$core$Int) {1u};
int64_t $tmp112 = $tmp110.value;
int64_t $tmp113 = $tmp111.value;
int64_t $tmp114 = $tmp112 + $tmp113;
frost$core$Int $tmp115 = (frost$core$Int) {$tmp114};
frost$core$MutableString$ensureCapacity$frost$core$Int(param0, $tmp115);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:103
frost$core$Char8** $tmp116 = &param0->data;
frost$core$Char8* $tmp117 = *$tmp116;
frost$core$Int* $tmp118 = &param0->_length;
frost$core$Int $tmp119 = *$tmp118;
frost$core$Int64 $tmp120 = frost$core$Int64$init$frost$core$Int($tmp119);
int32_t $tmp121 = *(&local0);
frost$core$UInt8 $tmp122 = (frost$core$UInt8) {((uint8_t) $tmp121)};
frost$core$Char8 $tmp123 = frost$core$Char8$init$frost$core$UInt8($tmp122);
int64_t $tmp124 = $tmp120.value;
$tmp117[$tmp124] = $tmp123;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:104
frost$core$Int* $tmp125 = &param0->_length;
frost$core$Int $tmp126 = *$tmp125;
frost$core$Int $tmp127 = (frost$core$Int) {1u};
int64_t $tmp128 = $tmp126.value;
int64_t $tmp129 = $tmp127.value;
int64_t $tmp130 = $tmp128 + $tmp129;
frost$core$Int $tmp131 = (frost$core$Int) {$tmp130};
frost$core$Int* $tmp132 = &param0->_length;
*$tmp132 = $tmp131;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:106
int32_t $tmp133 = *(&local0);
bool $tmp134 = $tmp133 < 2048u;
frost$core$Bit $tmp135 = (frost$core$Bit) {$tmp134};
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:107
frost$core$Int* $tmp137 = &param0->_length;
frost$core$Int $tmp138 = *$tmp137;
frost$core$Int $tmp139 = (frost$core$Int) {2u};
int64_t $tmp140 = $tmp138.value;
int64_t $tmp141 = $tmp139.value;
int64_t $tmp142 = $tmp140 + $tmp141;
frost$core$Int $tmp143 = (frost$core$Int) {$tmp142};
frost$core$MutableString$ensureCapacity$frost$core$Int(param0, $tmp143);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:108
frost$core$Char8** $tmp144 = &param0->data;
frost$core$Char8* $tmp145 = *$tmp144;
frost$core$Int* $tmp146 = &param0->_length;
frost$core$Int $tmp147 = *$tmp146;
frost$core$Int64 $tmp148 = frost$core$Int64$init$frost$core$Int($tmp147);
frost$core$Int64 $tmp149 = (frost$core$Int64) {0u};
int64_t $tmp150 = $tmp148.value;
int64_t $tmp151 = $tmp149.value;
int64_t $tmp152 = $tmp150 + $tmp151;
frost$core$Int64 $tmp153 = (frost$core$Int64) {$tmp152};
int32_t $tmp154 = *(&local0);
int32_t $tmp155 = $tmp154 >> 6u;
int32_t $tmp156 = $tmp155 | 192u;
frost$core$UInt8 $tmp157 = (frost$core$UInt8) {((uint8_t) $tmp156)};
frost$core$Char8 $tmp158 = frost$core$Char8$init$frost$core$UInt8($tmp157);
int64_t $tmp159 = $tmp153.value;
$tmp145[$tmp159] = $tmp158;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:109
frost$core$Char8** $tmp160 = &param0->data;
frost$core$Char8* $tmp161 = *$tmp160;
frost$core$Int* $tmp162 = &param0->_length;
frost$core$Int $tmp163 = *$tmp162;
frost$core$Int64 $tmp164 = frost$core$Int64$init$frost$core$Int($tmp163);
frost$core$Int64 $tmp165 = (frost$core$Int64) {1u};
int64_t $tmp166 = $tmp164.value;
int64_t $tmp167 = $tmp165.value;
int64_t $tmp168 = $tmp166 + $tmp167;
frost$core$Int64 $tmp169 = (frost$core$Int64) {$tmp168};
int32_t $tmp170 = *(&local0);
int32_t $tmp171 = $tmp170 & 63u;
int32_t $tmp172 = $tmp171 | 128u;
frost$core$UInt8 $tmp173 = (frost$core$UInt8) {((uint8_t) $tmp172)};
frost$core$Char8 $tmp174 = frost$core$Char8$init$frost$core$UInt8($tmp173);
int64_t $tmp175 = $tmp169.value;
$tmp161[$tmp175] = $tmp174;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:110
frost$core$Int* $tmp176 = &param0->_length;
frost$core$Int $tmp177 = *$tmp176;
frost$core$Int $tmp178 = (frost$core$Int) {2u};
int64_t $tmp179 = $tmp177.value;
int64_t $tmp180 = $tmp178.value;
int64_t $tmp181 = $tmp179 + $tmp180;
frost$core$Int $tmp182 = (frost$core$Int) {$tmp181};
frost$core$Int* $tmp183 = &param0->_length;
*$tmp183 = $tmp182;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:112
int32_t $tmp184 = *(&local0);
bool $tmp185 = $tmp184 < 65536u;
frost$core$Bit $tmp186 = (frost$core$Bit) {$tmp185};
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:113
frost$core$Int* $tmp188 = &param0->_length;
frost$core$Int $tmp189 = *$tmp188;
frost$core$Int $tmp190 = (frost$core$Int) {3u};
int64_t $tmp191 = $tmp189.value;
int64_t $tmp192 = $tmp190.value;
int64_t $tmp193 = $tmp191 + $tmp192;
frost$core$Int $tmp194 = (frost$core$Int) {$tmp193};
frost$core$MutableString$ensureCapacity$frost$core$Int(param0, $tmp194);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:114
frost$core$Char8** $tmp195 = &param0->data;
frost$core$Char8* $tmp196 = *$tmp195;
frost$core$Int* $tmp197 = &param0->_length;
frost$core$Int $tmp198 = *$tmp197;
frost$core$Int64 $tmp199 = frost$core$Int64$init$frost$core$Int($tmp198);
frost$core$Int64 $tmp200 = (frost$core$Int64) {0u};
int64_t $tmp201 = $tmp199.value;
int64_t $tmp202 = $tmp200.value;
int64_t $tmp203 = $tmp201 + $tmp202;
frost$core$Int64 $tmp204 = (frost$core$Int64) {$tmp203};
int32_t $tmp205 = *(&local0);
int32_t $tmp206 = $tmp205 >> 12u;
int32_t $tmp207 = $tmp206 | 224u;
frost$core$UInt8 $tmp208 = (frost$core$UInt8) {((uint8_t) $tmp207)};
frost$core$Char8 $tmp209 = frost$core$Char8$init$frost$core$UInt8($tmp208);
int64_t $tmp210 = $tmp204.value;
$tmp196[$tmp210] = $tmp209;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:115
frost$core$Char8** $tmp211 = &param0->data;
frost$core$Char8* $tmp212 = *$tmp211;
frost$core$Int* $tmp213 = &param0->_length;
frost$core$Int $tmp214 = *$tmp213;
frost$core$Int64 $tmp215 = frost$core$Int64$init$frost$core$Int($tmp214);
frost$core$Int64 $tmp216 = (frost$core$Int64) {1u};
int64_t $tmp217 = $tmp215.value;
int64_t $tmp218 = $tmp216.value;
int64_t $tmp219 = $tmp217 + $tmp218;
frost$core$Int64 $tmp220 = (frost$core$Int64) {$tmp219};
int32_t $tmp221 = *(&local0);
int32_t $tmp222 = $tmp221 >> 6u;
int32_t $tmp223 = $tmp222 & 63u;
int32_t $tmp224 = $tmp223 | 128u;
frost$core$UInt8 $tmp225 = (frost$core$UInt8) {((uint8_t) $tmp224)};
frost$core$Char8 $tmp226 = frost$core$Char8$init$frost$core$UInt8($tmp225);
int64_t $tmp227 = $tmp220.value;
$tmp212[$tmp227] = $tmp226;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:116
frost$core$Char8** $tmp228 = &param0->data;
frost$core$Char8* $tmp229 = *$tmp228;
frost$core$Int* $tmp230 = &param0->_length;
frost$core$Int $tmp231 = *$tmp230;
frost$core$Int64 $tmp232 = frost$core$Int64$init$frost$core$Int($tmp231);
frost$core$Int64 $tmp233 = (frost$core$Int64) {2u};
int64_t $tmp234 = $tmp232.value;
int64_t $tmp235 = $tmp233.value;
int64_t $tmp236 = $tmp234 + $tmp235;
frost$core$Int64 $tmp237 = (frost$core$Int64) {$tmp236};
int32_t $tmp238 = *(&local0);
int32_t $tmp239 = $tmp238 & 63u;
int32_t $tmp240 = $tmp239 | 128u;
frost$core$UInt8 $tmp241 = (frost$core$UInt8) {((uint8_t) $tmp240)};
frost$core$Char8 $tmp242 = frost$core$Char8$init$frost$core$UInt8($tmp241);
int64_t $tmp243 = $tmp237.value;
$tmp229[$tmp243] = $tmp242;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:117
frost$core$Int* $tmp244 = &param0->_length;
frost$core$Int $tmp245 = *$tmp244;
frost$core$Int $tmp246 = (frost$core$Int) {3u};
int64_t $tmp247 = $tmp245.value;
int64_t $tmp248 = $tmp246.value;
int64_t $tmp249 = $tmp247 + $tmp248;
frost$core$Int $tmp250 = (frost$core$Int) {$tmp249};
frost$core$Int* $tmp251 = &param0->_length;
*$tmp251 = $tmp250;
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:120
frost$core$Int* $tmp252 = &param0->_length;
frost$core$Int $tmp253 = *$tmp252;
frost$core$Int $tmp254 = (frost$core$Int) {4u};
int64_t $tmp255 = $tmp253.value;
int64_t $tmp256 = $tmp254.value;
int64_t $tmp257 = $tmp255 + $tmp256;
frost$core$Int $tmp258 = (frost$core$Int) {$tmp257};
frost$core$MutableString$ensureCapacity$frost$core$Int(param0, $tmp258);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:121
frost$core$Char8** $tmp259 = &param0->data;
frost$core$Char8* $tmp260 = *$tmp259;
frost$core$Int* $tmp261 = &param0->_length;
frost$core$Int $tmp262 = *$tmp261;
frost$core$Int64 $tmp263 = frost$core$Int64$init$frost$core$Int($tmp262);
frost$core$Int64 $tmp264 = (frost$core$Int64) {0u};
int64_t $tmp265 = $tmp263.value;
int64_t $tmp266 = $tmp264.value;
int64_t $tmp267 = $tmp265 + $tmp266;
frost$core$Int64 $tmp268 = (frost$core$Int64) {$tmp267};
int32_t $tmp269 = *(&local0);
int32_t $tmp270 = $tmp269 >> 18u;
int32_t $tmp271 = $tmp270 | 240u;
frost$core$UInt8 $tmp272 = (frost$core$UInt8) {((uint8_t) $tmp271)};
frost$core$Char8 $tmp273 = frost$core$Char8$init$frost$core$UInt8($tmp272);
int64_t $tmp274 = $tmp268.value;
$tmp260[$tmp274] = $tmp273;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:122
frost$core$Char8** $tmp275 = &param0->data;
frost$core$Char8* $tmp276 = *$tmp275;
frost$core$Int* $tmp277 = &param0->_length;
frost$core$Int $tmp278 = *$tmp277;
frost$core$Int64 $tmp279 = frost$core$Int64$init$frost$core$Int($tmp278);
frost$core$Int64 $tmp280 = (frost$core$Int64) {1u};
int64_t $tmp281 = $tmp279.value;
int64_t $tmp282 = $tmp280.value;
int64_t $tmp283 = $tmp281 + $tmp282;
frost$core$Int64 $tmp284 = (frost$core$Int64) {$tmp283};
int32_t $tmp285 = *(&local0);
int32_t $tmp286 = $tmp285 >> 12u;
int32_t $tmp287 = $tmp286 & 63u;
int32_t $tmp288 = $tmp287 | 128u;
frost$core$UInt8 $tmp289 = (frost$core$UInt8) {((uint8_t) $tmp288)};
frost$core$Char8 $tmp290 = frost$core$Char8$init$frost$core$UInt8($tmp289);
int64_t $tmp291 = $tmp284.value;
$tmp276[$tmp291] = $tmp290;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:124
frost$core$Char8** $tmp292 = &param0->data;
frost$core$Char8* $tmp293 = *$tmp292;
frost$core$Int* $tmp294 = &param0->_length;
frost$core$Int $tmp295 = *$tmp294;
frost$core$Int64 $tmp296 = frost$core$Int64$init$frost$core$Int($tmp295);
frost$core$Int64 $tmp297 = (frost$core$Int64) {2u};
int64_t $tmp298 = $tmp296.value;
int64_t $tmp299 = $tmp297.value;
int64_t $tmp300 = $tmp298 + $tmp299;
frost$core$Int64 $tmp301 = (frost$core$Int64) {$tmp300};
int32_t $tmp302 = *(&local0);
int32_t $tmp303 = $tmp302 >> 6u;
int32_t $tmp304 = $tmp303 & 63u;
int32_t $tmp305 = $tmp304 | 128u;
frost$core$UInt8 $tmp306 = (frost$core$UInt8) {((uint8_t) $tmp305)};
frost$core$Char8 $tmp307 = frost$core$Char8$init$frost$core$UInt8($tmp306);
int64_t $tmp308 = $tmp301.value;
$tmp293[$tmp308] = $tmp307;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:125
frost$core$Char8** $tmp309 = &param0->data;
frost$core$Char8* $tmp310 = *$tmp309;
frost$core$Int* $tmp311 = &param0->_length;
frost$core$Int $tmp312 = *$tmp311;
frost$core$Int64 $tmp313 = frost$core$Int64$init$frost$core$Int($tmp312);
frost$core$Int64 $tmp314 = (frost$core$Int64) {3u};
int64_t $tmp315 = $tmp313.value;
int64_t $tmp316 = $tmp314.value;
int64_t $tmp317 = $tmp315 + $tmp316;
frost$core$Int64 $tmp318 = (frost$core$Int64) {$tmp317};
int32_t $tmp319 = *(&local0);
int32_t $tmp320 = $tmp319 & 63u;
int32_t $tmp321 = $tmp320 | 128u;
frost$core$UInt8 $tmp322 = (frost$core$UInt8) {((uint8_t) $tmp321)};
frost$core$Char8 $tmp323 = frost$core$Char8$init$frost$core$UInt8($tmp322);
int64_t $tmp324 = $tmp318.value;
$tmp310[$tmp324] = $tmp323;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:126
frost$core$Int* $tmp325 = &param0->_length;
frost$core$Int $tmp326 = *$tmp325;
frost$core$Int $tmp327 = (frost$core$Int) {4u};
int64_t $tmp328 = $tmp326.value;
int64_t $tmp329 = $tmp327.value;
int64_t $tmp330 = $tmp328 + $tmp329;
frost$core$Int $tmp331 = (frost$core$Int) {$tmp330};
frost$core$Int* $tmp332 = &param0->_length;
*$tmp332 = $tmp331;
goto block8;
block8:;
goto block5;
block5:;
goto block2;
block2:;
return;

}
void frost$core$MutableString$append$frost$core$String(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:132
frost$core$Int* $tmp333 = &param0->_length;
frost$core$Int $tmp334 = *$tmp333;
frost$core$Int* $tmp335 = &param1->_length;
frost$core$Int $tmp336 = *$tmp335;
int64_t $tmp337 = $tmp334.value;
int64_t $tmp338 = $tmp336.value;
int64_t $tmp339 = $tmp337 + $tmp338;
frost$core$Int $tmp340 = (frost$core$Int) {$tmp339};
frost$core$MutableString$ensureCapacity$frost$core$Int(param0, $tmp340);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:133
frost$core$Int $tmp341 = (frost$core$Int) {0u};
frost$core$Int* $tmp342 = &param1->_length;
frost$core$Int $tmp343 = *$tmp342;
frost$core$Bit $tmp344 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp345 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp341, $tmp343, $tmp344);
frost$core$Int $tmp346 = $tmp345.min;
*(&local0) = $tmp346;
frost$core$Int $tmp347 = $tmp345.max;
frost$core$Bit $tmp348 = $tmp345.inclusive;
bool $tmp349 = $tmp348.value;
frost$core$Int $tmp350 = (frost$core$Int) {1u};
if ($tmp349) goto block4; else goto block5;
block4:;
int64_t $tmp351 = $tmp346.value;
int64_t $tmp352 = $tmp347.value;
bool $tmp353 = $tmp351 <= $tmp352;
frost$core$Bit $tmp354 = (frost$core$Bit) {$tmp353};
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block1; else goto block2;
block5:;
int64_t $tmp356 = $tmp346.value;
int64_t $tmp357 = $tmp347.value;
bool $tmp358 = $tmp356 < $tmp357;
frost$core$Bit $tmp359 = (frost$core$Bit) {$tmp358};
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:134
frost$core$Char8** $tmp361 = &param0->data;
frost$core$Char8* $tmp362 = *$tmp361;
frost$core$Int* $tmp363 = &param0->_length;
frost$core$Int $tmp364 = *$tmp363;
frost$core$Int $tmp365 = *(&local0);
int64_t $tmp366 = $tmp364.value;
int64_t $tmp367 = $tmp365.value;
int64_t $tmp368 = $tmp366 + $tmp367;
frost$core$Int $tmp369 = (frost$core$Int) {$tmp368};
frost$core$Int64 $tmp370 = frost$core$Int64$init$frost$core$Int($tmp369);
frost$core$Char8** $tmp371 = &param1->data;
frost$core$Char8* $tmp372 = *$tmp371;
frost$core$Int $tmp373 = *(&local0);
frost$core$Int64 $tmp374 = frost$core$Int64$init$frost$core$Int($tmp373);
int64_t $tmp375 = $tmp374.value;
frost$core$Char8 $tmp376 = $tmp372[$tmp375];
int64_t $tmp377 = $tmp370.value;
$tmp362[$tmp377] = $tmp376;
frost$core$Int $tmp378 = *(&local0);
int64_t $tmp379 = $tmp347.value;
int64_t $tmp380 = $tmp378.value;
int64_t $tmp381 = $tmp379 - $tmp380;
frost$core$Int $tmp382 = (frost$core$Int) {$tmp381};
if ($tmp349) goto block7; else goto block8;
block7:;
int64_t $tmp383 = $tmp382.value;
int64_t $tmp384 = $tmp350.value;
bool $tmp385 = $tmp383 >= $tmp384;
frost$core$Bit $tmp386 = (frost$core$Bit) {$tmp385};
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block6; else goto block2;
block8:;
int64_t $tmp388 = $tmp382.value;
int64_t $tmp389 = $tmp350.value;
bool $tmp390 = $tmp388 > $tmp389;
frost$core$Bit $tmp391 = (frost$core$Bit) {$tmp390};
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block6; else goto block2;
block6:;
int64_t $tmp393 = $tmp378.value;
int64_t $tmp394 = $tmp350.value;
int64_t $tmp395 = $tmp393 + $tmp394;
frost$core$Int $tmp396 = (frost$core$Int) {$tmp395};
*(&local0) = $tmp396;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:136
frost$core$Int* $tmp397 = &param0->_length;
frost$core$Int $tmp398 = *$tmp397;
frost$core$Int* $tmp399 = &param1->_length;
frost$core$Int $tmp400 = *$tmp399;
int64_t $tmp401 = $tmp398.value;
int64_t $tmp402 = $tmp400.value;
int64_t $tmp403 = $tmp401 + $tmp402;
frost$core$Int $tmp404 = (frost$core$Int) {$tmp403};
frost$core$Int* $tmp405 = &param0->_length;
*$tmp405 = $tmp404;
return;

}
void frost$core$MutableString$append$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(frost$core$MutableString* param0, frost$core$Char8* param1, frost$core$Int param2) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:141
frost$core$Int* $tmp406 = &param0->_length;
frost$core$Int $tmp407 = *$tmp406;
int64_t $tmp408 = $tmp407.value;
int64_t $tmp409 = param2.value;
int64_t $tmp410 = $tmp408 + $tmp409;
frost$core$Int $tmp411 = (frost$core$Int) {$tmp410};
frost$core$MutableString$ensureCapacity$frost$core$Int(param0, $tmp411);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:142
frost$core$Int $tmp412 = (frost$core$Int) {0u};
frost$core$Bit $tmp413 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp414 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp412, param2, $tmp413);
frost$core$Int $tmp415 = $tmp414.min;
*(&local0) = $tmp415;
frost$core$Int $tmp416 = $tmp414.max;
frost$core$Bit $tmp417 = $tmp414.inclusive;
bool $tmp418 = $tmp417.value;
frost$core$Int $tmp419 = (frost$core$Int) {1u};
if ($tmp418) goto block4; else goto block5;
block4:;
int64_t $tmp420 = $tmp415.value;
int64_t $tmp421 = $tmp416.value;
bool $tmp422 = $tmp420 <= $tmp421;
frost$core$Bit $tmp423 = (frost$core$Bit) {$tmp422};
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block1; else goto block2;
block5:;
int64_t $tmp425 = $tmp415.value;
int64_t $tmp426 = $tmp416.value;
bool $tmp427 = $tmp425 < $tmp426;
frost$core$Bit $tmp428 = (frost$core$Bit) {$tmp427};
bool $tmp429 = $tmp428.value;
if ($tmp429) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:143
frost$core$Char8** $tmp430 = &param0->data;
frost$core$Char8* $tmp431 = *$tmp430;
frost$core$Int* $tmp432 = &param0->_length;
frost$core$Int $tmp433 = *$tmp432;
frost$core$Int $tmp434 = *(&local0);
int64_t $tmp435 = $tmp433.value;
int64_t $tmp436 = $tmp434.value;
int64_t $tmp437 = $tmp435 + $tmp436;
frost$core$Int $tmp438 = (frost$core$Int) {$tmp437};
frost$core$Int64 $tmp439 = frost$core$Int64$init$frost$core$Int($tmp438);
frost$core$Int $tmp440 = *(&local0);
frost$core$Int64 $tmp441 = frost$core$Int64$init$frost$core$Int($tmp440);
int64_t $tmp442 = $tmp441.value;
frost$core$Char8 $tmp443 = param1[$tmp442];
int64_t $tmp444 = $tmp439.value;
$tmp431[$tmp444] = $tmp443;
frost$core$Int $tmp445 = *(&local0);
int64_t $tmp446 = $tmp416.value;
int64_t $tmp447 = $tmp445.value;
int64_t $tmp448 = $tmp446 - $tmp447;
frost$core$Int $tmp449 = (frost$core$Int) {$tmp448};
if ($tmp418) goto block7; else goto block8;
block7:;
int64_t $tmp450 = $tmp449.value;
int64_t $tmp451 = $tmp419.value;
bool $tmp452 = $tmp450 >= $tmp451;
frost$core$Bit $tmp453 = (frost$core$Bit) {$tmp452};
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block6; else goto block2;
block8:;
int64_t $tmp455 = $tmp449.value;
int64_t $tmp456 = $tmp419.value;
bool $tmp457 = $tmp455 > $tmp456;
frost$core$Bit $tmp458 = (frost$core$Bit) {$tmp457};
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block6; else goto block2;
block6:;
int64_t $tmp460 = $tmp445.value;
int64_t $tmp461 = $tmp419.value;
int64_t $tmp462 = $tmp460 + $tmp461;
frost$core$Int $tmp463 = (frost$core$Int) {$tmp462};
*(&local0) = $tmp463;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:145
frost$core$Int* $tmp464 = &param0->_length;
frost$core$Int $tmp465 = *$tmp464;
int64_t $tmp466 = $tmp465.value;
int64_t $tmp467 = param2.value;
int64_t $tmp468 = $tmp466 + $tmp467;
frost$core$Int $tmp469 = (frost$core$Int) {$tmp468};
frost$core$Int* $tmp470 = &param0->_length;
*$tmp470 = $tmp469;
return;

}
void frost$core$MutableString$append$frost$core$Object(frost$core$MutableString* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn472 $tmp471 = ($fn472) param1->$class->vtable[0];
frost$core$String* $tmp473 = $tmp471(param1);
frost$core$MutableString$append$frost$core$String(param0, $tmp473);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
return;

}
frost$core$Int frost$core$MutableString$get_length$R$frost$core$Int(frost$core$MutableString* param0) {

frost$core$Int local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index local3;
frost$core$MutableString$Index local4;
frost$core$MutableString$Index local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:160
frost$core$Int $tmp474 = (frost$core$Int) {0u};
*(&local0) = $tmp474;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:161
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:161:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp475 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp476 = &(&local2)->value;
*$tmp476 = $tmp475;
frost$core$MutableString$Index $tmp477 = *(&local2);
*(&local1) = $tmp477;
frost$core$MutableString$Index $tmp478 = *(&local1);
*(&local3) = $tmp478;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:162
goto block3;
block3:;
frost$core$MutableString$Index $tmp479 = *(&local3);
frost$core$MutableString$Index$wrapper* $tmp480;
$tmp480 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp480->value = $tmp479;
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:162:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:187
frost$core$Int* $tmp481 = &param0->_length;
frost$core$Int $tmp482 = *$tmp481;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp483 = &(&local5)->value;
*$tmp483 = $tmp482;
frost$core$MutableString$Index $tmp484 = *(&local5);
*(&local4) = $tmp484;
frost$core$MutableString$Index $tmp485 = *(&local4);
frost$core$MutableString$Index$wrapper* $tmp486;
$tmp486 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp486->value = $tmp485;
ITable* $tmp487 = ((frost$core$Equatable*) $tmp480)->$class->itable;
while ($tmp487->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp487 = $tmp487->next;
}
$fn489 $tmp488 = $tmp487->methods[1];
frost$core$Bit $tmp490 = $tmp488(((frost$core$Equatable*) $tmp480), ((frost$core$Equatable*) $tmp486));
bool $tmp491 = $tmp490.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp486)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp480)));
if ($tmp491) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:163
frost$core$MutableString$Index $tmp492 = *(&local3);
frost$core$MutableString$Index $tmp493 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp492);
*(&local3) = $tmp493;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:164
frost$core$Int $tmp494 = *(&local0);
frost$core$Int $tmp495 = (frost$core$Int) {1u};
int64_t $tmp496 = $tmp494.value;
int64_t $tmp497 = $tmp495.value;
int64_t $tmp498 = $tmp496 + $tmp497;
frost$core$Int $tmp499 = (frost$core$Int) {$tmp498};
*(&local0) = $tmp499;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:166
frost$core$Int $tmp500 = *(&local0);
return $tmp500;

}
frost$core$Int frost$core$MutableString$get_byteLength$R$frost$core$Int(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:173
frost$core$Int* $tmp501 = &param0->_length;
frost$core$Int $tmp502 = *$tmp501;
return $tmp502;

}
frost$core$MutableString$Index frost$core$MutableString$get_start$R$frost$core$MutableString$Index(frost$core$MutableString* param0) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp503 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp504 = &(&local1)->value;
*$tmp504 = $tmp503;
frost$core$MutableString$Index $tmp505 = *(&local1);
*(&local0) = $tmp505;
frost$core$MutableString$Index $tmp506 = *(&local0);
return $tmp506;

}
frost$core$MutableString$Index frost$core$MutableString$get_end$R$frost$core$MutableString$Index(frost$core$MutableString* param0) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:187
frost$core$Int* $tmp507 = &param0->_length;
frost$core$Int $tmp508 = *$tmp507;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp509 = &(&local1)->value;
*$tmp509 = $tmp508;
frost$core$MutableString$Index $tmp510 = *(&local1);
*(&local0) = $tmp510;
frost$core$MutableString$Index $tmp511 = *(&local0);
return $tmp511;

}
frost$core$MutableString$Index frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(frost$core$MutableString* param0, frost$core$MutableString$Index param1) {

int64_t local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index local3;
frost$core$MutableString$Index local4;
frost$core$MutableString$Index local5;
frost$core$MutableString$Index local6;
frost$core$MutableString$Index local7;
frost$core$MutableString$Index local8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:197
frost$core$Int $tmp512 = param1.value;
frost$core$Int* $tmp513 = &param0->_length;
frost$core$Int $tmp514 = *$tmp513;
int64_t $tmp515 = $tmp512.value;
int64_t $tmp516 = $tmp514.value;
bool $tmp517 = $tmp515 < $tmp516;
frost$core$Bit $tmp518 = (frost$core$Bit) {$tmp517};
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block1; else goto block2;
block2:;
frost$core$Int $tmp520 = (frost$core$Int) {197u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s521, $tmp520);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:198
frost$core$Char8** $tmp522 = &param0->data;
frost$core$Char8* $tmp523 = *$tmp522;
frost$core$Int $tmp524 = param1.value;
frost$core$Int64 $tmp525 = frost$core$Int64$init$frost$core$Int($tmp524);
int64_t $tmp526 = $tmp525.value;
frost$core$Char8 $tmp527 = $tmp523[$tmp526];
uint8_t $tmp528 = $tmp527.value;
int64_t $tmp529 = ((int64_t) $tmp528) & 255u;
*(&local0) = $tmp529;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:199
int64_t $tmp530 = *(&local0);
bool $tmp531 = $tmp530 >= 240u;
frost$core$Bit $tmp532 = (frost$core$Bit) {$tmp531};
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:200
frost$core$Int $tmp534 = param1.value;
frost$core$Int $tmp535 = (frost$core$Int) {4u};
int64_t $tmp536 = $tmp534.value;
int64_t $tmp537 = $tmp535.value;
int64_t $tmp538 = $tmp536 + $tmp537;
frost$core$Int $tmp539 = (frost$core$Int) {$tmp538};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:200:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp540 = &(&local2)->value;
*$tmp540 = $tmp539;
frost$core$MutableString$Index $tmp541 = *(&local2);
*(&local1) = $tmp541;
frost$core$MutableString$Index $tmp542 = *(&local1);
return $tmp542;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:202
int64_t $tmp543 = *(&local0);
bool $tmp544 = $tmp543 >= 224u;
frost$core$Bit $tmp545 = (frost$core$Bit) {$tmp544};
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:203
frost$core$Int $tmp547 = param1.value;
frost$core$Int $tmp548 = (frost$core$Int) {3u};
int64_t $tmp549 = $tmp547.value;
int64_t $tmp550 = $tmp548.value;
int64_t $tmp551 = $tmp549 + $tmp550;
frost$core$Int $tmp552 = (frost$core$Int) {$tmp551};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:203:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp553 = &(&local4)->value;
*$tmp553 = $tmp552;
frost$core$MutableString$Index $tmp554 = *(&local4);
*(&local3) = $tmp554;
frost$core$MutableString$Index $tmp555 = *(&local3);
return $tmp555;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:205
int64_t $tmp556 = *(&local0);
bool $tmp557 = $tmp556 >= 192u;
frost$core$Bit $tmp558 = (frost$core$Bit) {$tmp557};
bool $tmp559 = $tmp558.value;
if ($tmp559) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:206
frost$core$Int $tmp560 = param1.value;
frost$core$Int $tmp561 = (frost$core$Int) {2u};
int64_t $tmp562 = $tmp560.value;
int64_t $tmp563 = $tmp561.value;
int64_t $tmp564 = $tmp562 + $tmp563;
frost$core$Int $tmp565 = (frost$core$Int) {$tmp564};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:206:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp566 = &(&local6)->value;
*$tmp566 = $tmp565;
frost$core$MutableString$Index $tmp567 = *(&local6);
*(&local5) = $tmp567;
frost$core$MutableString$Index $tmp568 = *(&local5);
return $tmp568;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:208
frost$core$Int $tmp569 = param1.value;
frost$core$Int $tmp570 = (frost$core$Int) {1u};
int64_t $tmp571 = $tmp569.value;
int64_t $tmp572 = $tmp570.value;
int64_t $tmp573 = $tmp571 + $tmp572;
frost$core$Int $tmp574 = (frost$core$Int) {$tmp573};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:208:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp575 = &(&local8)->value;
*$tmp575 = $tmp574;
frost$core$MutableString$Index $tmp576 = *(&local8);
*(&local7) = $tmp576;
frost$core$MutableString$Index $tmp577 = *(&local7);
return $tmp577;

}
frost$core$MutableString$Index frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(frost$core$MutableString* param0, frost$core$MutableString$Index param1) {

frost$core$Int local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:218
frost$core$Int $tmp578 = param1.value;
frost$core$Int $tmp579 = (frost$core$Int) {0u};
int64_t $tmp580 = $tmp578.value;
int64_t $tmp581 = $tmp579.value;
bool $tmp582 = $tmp580 > $tmp581;
frost$core$Bit $tmp583 = (frost$core$Bit) {$tmp582};
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block1; else goto block2;
block2:;
frost$core$Int $tmp585 = (frost$core$Int) {218u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s586, $tmp585);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:219
frost$core$Int $tmp587 = param1.value;
frost$core$Int $tmp588 = (frost$core$Int) {1u};
int64_t $tmp589 = $tmp587.value;
int64_t $tmp590 = $tmp588.value;
int64_t $tmp591 = $tmp589 - $tmp590;
frost$core$Int $tmp592 = (frost$core$Int) {$tmp591};
*(&local0) = $tmp592;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:220
goto block3;
block3:;
frost$core$Char8** $tmp593 = &param0->data;
frost$core$Char8* $tmp594 = *$tmp593;
frost$core$Int $tmp595 = *(&local0);
frost$core$Int64 $tmp596 = frost$core$Int64$init$frost$core$Int($tmp595);
int64_t $tmp597 = $tmp596.value;
frost$core$Char8 $tmp598 = $tmp594[$tmp597];
uint8_t $tmp599 = $tmp598.value;
int64_t $tmp600 = ((int64_t) $tmp599) & 255u;
bool $tmp601 = $tmp600 >= 128u;
frost$core$Bit $tmp602 = (frost$core$Bit) {$tmp601};
bool $tmp603 = $tmp602.value;
if ($tmp603) goto block6; else goto block5;
block6:;
frost$core$Char8** $tmp604 = &param0->data;
frost$core$Char8* $tmp605 = *$tmp604;
frost$core$Int $tmp606 = *(&local0);
frost$core$Int64 $tmp607 = frost$core$Int64$init$frost$core$Int($tmp606);
int64_t $tmp608 = $tmp607.value;
frost$core$Char8 $tmp609 = $tmp605[$tmp608];
uint8_t $tmp610 = $tmp609.value;
int64_t $tmp611 = ((int64_t) $tmp610) & 255u;
bool $tmp612 = $tmp611 < 192u;
frost$core$Bit $tmp613 = (frost$core$Bit) {$tmp612};
bool $tmp614 = $tmp613.value;
if ($tmp614) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:222
frost$core$Int $tmp615 = *(&local0);
frost$core$Int $tmp616 = (frost$core$Int) {1u};
int64_t $tmp617 = $tmp615.value;
int64_t $tmp618 = $tmp616.value;
int64_t $tmp619 = $tmp617 - $tmp618;
frost$core$Int $tmp620 = (frost$core$Int) {$tmp619};
*(&local0) = $tmp620;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:224
frost$core$Int $tmp621 = *(&local0);
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:224:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp622 = &(&local2)->value;
*$tmp622 = $tmp621;
frost$core$MutableString$Index $tmp623 = *(&local2);
*(&local1) = $tmp623;
frost$core$MutableString$Index $tmp624 = *(&local1);
return $tmp624;

}
frost$core$MutableString$Index frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index(frost$core$MutableString* param0, frost$core$MutableString$Index param1, frost$core$Int param2) {

frost$core$MutableString$Index local0;
frost$core$Int local1;
frost$core$Int local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:234
*(&local0) = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:235
frost$core$Int $tmp625 = (frost$core$Int) {0u};
int64_t $tmp626 = param2.value;
int64_t $tmp627 = $tmp625.value;
bool $tmp628 = $tmp626 > $tmp627;
frost$core$Bit $tmp629 = (frost$core$Bit) {$tmp628};
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:236
frost$core$Int $tmp631 = (frost$core$Int) {0u};
frost$core$Bit $tmp632 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp633 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp631, param2, $tmp632);
frost$core$Int $tmp634 = $tmp633.min;
*(&local1) = $tmp634;
frost$core$Int $tmp635 = $tmp633.max;
frost$core$Bit $tmp636 = $tmp633.inclusive;
bool $tmp637 = $tmp636.value;
frost$core$Int $tmp638 = (frost$core$Int) {1u};
if ($tmp637) goto block7; else goto block8;
block7:;
int64_t $tmp639 = $tmp634.value;
int64_t $tmp640 = $tmp635.value;
bool $tmp641 = $tmp639 <= $tmp640;
frost$core$Bit $tmp642 = (frost$core$Bit) {$tmp641};
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block4; else goto block5;
block8:;
int64_t $tmp644 = $tmp634.value;
int64_t $tmp645 = $tmp635.value;
bool $tmp646 = $tmp644 < $tmp645;
frost$core$Bit $tmp647 = (frost$core$Bit) {$tmp646};
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:237
frost$core$MutableString$Index $tmp649 = *(&local0);
frost$core$MutableString$Index $tmp650 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp649);
*(&local0) = $tmp650;
frost$core$Int $tmp651 = *(&local1);
int64_t $tmp652 = $tmp635.value;
int64_t $tmp653 = $tmp651.value;
int64_t $tmp654 = $tmp652 - $tmp653;
frost$core$Int $tmp655 = (frost$core$Int) {$tmp654};
if ($tmp637) goto block10; else goto block11;
block10:;
int64_t $tmp656 = $tmp655.value;
int64_t $tmp657 = $tmp638.value;
bool $tmp658 = $tmp656 >= $tmp657;
frost$core$Bit $tmp659 = (frost$core$Bit) {$tmp658};
bool $tmp660 = $tmp659.value;
if ($tmp660) goto block9; else goto block5;
block11:;
int64_t $tmp661 = $tmp655.value;
int64_t $tmp662 = $tmp638.value;
bool $tmp663 = $tmp661 > $tmp662;
frost$core$Bit $tmp664 = (frost$core$Bit) {$tmp663};
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block9; else goto block5;
block9:;
int64_t $tmp666 = $tmp651.value;
int64_t $tmp667 = $tmp638.value;
int64_t $tmp668 = $tmp666 + $tmp667;
frost$core$Int $tmp669 = (frost$core$Int) {$tmp668};
*(&local1) = $tmp669;
goto block4;
block5:;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:241
frost$core$Int $tmp670 = (frost$core$Int) {0u};
frost$core$Int $tmp671 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp672 = (frost$core$Bit) {false};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp673 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp670, param2, $tmp671, $tmp672);
frost$core$Int $tmp674 = $tmp673.start;
*(&local2) = $tmp674;
frost$core$Int $tmp675 = $tmp673.end;
frost$core$Int $tmp676 = $tmp673.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from MutableString.frost:241:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp677 = $tmp676.value;
int64_t $tmp678 = -$tmp677;
frost$core$Int $tmp679 = (frost$core$Int) {$tmp678};
frost$core$Bit $tmp680 = $tmp673.inclusive;
bool $tmp681 = $tmp680.value;
frost$core$Int $tmp682 = (frost$core$Int) {0u};
int64_t $tmp683 = $tmp676.value;
int64_t $tmp684 = $tmp682.value;
bool $tmp685 = $tmp683 >= $tmp684;
frost$core$Bit $tmp686 = (frost$core$Bit) {$tmp685};
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block16; else goto block17;
block16:;
if ($tmp681) goto block18; else goto block19;
block18:;
int64_t $tmp688 = $tmp674.value;
int64_t $tmp689 = $tmp675.value;
bool $tmp690 = $tmp688 <= $tmp689;
frost$core$Bit $tmp691 = (frost$core$Bit) {$tmp690};
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block13; else goto block14;
block19:;
int64_t $tmp693 = $tmp674.value;
int64_t $tmp694 = $tmp675.value;
bool $tmp695 = $tmp693 < $tmp694;
frost$core$Bit $tmp696 = (frost$core$Bit) {$tmp695};
bool $tmp697 = $tmp696.value;
if ($tmp697) goto block13; else goto block14;
block17:;
if ($tmp681) goto block20; else goto block21;
block20:;
int64_t $tmp698 = $tmp674.value;
int64_t $tmp699 = $tmp675.value;
bool $tmp700 = $tmp698 >= $tmp699;
frost$core$Bit $tmp701 = (frost$core$Bit) {$tmp700};
bool $tmp702 = $tmp701.value;
if ($tmp702) goto block13; else goto block14;
block21:;
int64_t $tmp703 = $tmp674.value;
int64_t $tmp704 = $tmp675.value;
bool $tmp705 = $tmp703 > $tmp704;
frost$core$Bit $tmp706 = (frost$core$Bit) {$tmp705};
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:242
frost$core$MutableString$Index $tmp708 = *(&local0);
frost$core$MutableString$Index $tmp709 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp708);
*(&local0) = $tmp709;
frost$core$Int $tmp710 = *(&local2);
if ($tmp687) goto block23; else goto block24;
block23:;
int64_t $tmp711 = $tmp675.value;
int64_t $tmp712 = $tmp710.value;
int64_t $tmp713 = $tmp711 - $tmp712;
frost$core$Int $tmp714 = (frost$core$Int) {$tmp713};
if ($tmp681) goto block25; else goto block26;
block25:;
int64_t $tmp715 = $tmp714.value;
int64_t $tmp716 = $tmp676.value;
bool $tmp717 = $tmp715 >= $tmp716;
frost$core$Bit $tmp718 = (frost$core$Bit) {$tmp717};
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block22; else goto block14;
block26:;
int64_t $tmp720 = $tmp714.value;
int64_t $tmp721 = $tmp676.value;
bool $tmp722 = $tmp720 > $tmp721;
frost$core$Bit $tmp723 = (frost$core$Bit) {$tmp722};
bool $tmp724 = $tmp723.value;
if ($tmp724) goto block22; else goto block14;
block24:;
int64_t $tmp725 = $tmp710.value;
int64_t $tmp726 = $tmp675.value;
int64_t $tmp727 = $tmp725 - $tmp726;
frost$core$Int $tmp728 = (frost$core$Int) {$tmp727};
if ($tmp681) goto block27; else goto block28;
block27:;
int64_t $tmp729 = $tmp728.value;
int64_t $tmp730 = $tmp679.value;
bool $tmp731 = $tmp729 >= $tmp730;
frost$core$Bit $tmp732 = (frost$core$Bit) {$tmp731};
bool $tmp733 = $tmp732.value;
if ($tmp733) goto block22; else goto block14;
block28:;
int64_t $tmp734 = $tmp728.value;
int64_t $tmp735 = $tmp679.value;
bool $tmp736 = $tmp734 > $tmp735;
frost$core$Bit $tmp737 = (frost$core$Bit) {$tmp736};
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block22; else goto block14;
block22:;
int64_t $tmp739 = $tmp710.value;
int64_t $tmp740 = $tmp676.value;
int64_t $tmp741 = $tmp739 + $tmp740;
frost$core$Int $tmp742 = (frost$core$Int) {$tmp741};
*(&local2) = $tmp742;
goto block13;
block14:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:245
frost$core$MutableString$Index $tmp743 = *(&local0);
return $tmp743;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$indexOf$frost$core$String$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:256
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:256:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp744 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp745 = &(&local1)->value;
*$tmp745 = $tmp744;
frost$core$MutableString$Index $tmp746 = *(&local1);
*(&local0) = $tmp746;
frost$core$MutableString$Index $tmp747 = *(&local0);
frost$core$MutableString$Index$nullable $tmp748 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp747);
return $tmp748;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1, frost$core$MutableString$Index param2) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:268
frost$core$Int* $tmp749 = &param0->_length;
frost$core$Int $tmp750 = *$tmp749;
frost$core$Int* $tmp751 = &param1->_length;
frost$core$Int $tmp752 = *$tmp751;
int64_t $tmp753 = $tmp750.value;
int64_t $tmp754 = $tmp752.value;
bool $tmp755 = $tmp753 < $tmp754;
frost$core$Bit $tmp756 = (frost$core$Bit) {$tmp755};
bool $tmp757 = $tmp756.value;
if ($tmp757) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:269
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:271
frost$core$Int $tmp758 = param2.value;
frost$core$Int* $tmp759 = &param0->_length;
frost$core$Int $tmp760 = *$tmp759;
frost$core$Int* $tmp761 = &param1->_length;
frost$core$Int $tmp762 = *$tmp761;
int64_t $tmp763 = $tmp760.value;
int64_t $tmp764 = $tmp762.value;
int64_t $tmp765 = $tmp763 - $tmp764;
frost$core$Int $tmp766 = (frost$core$Int) {$tmp765};
frost$core$Bit $tmp767 = (frost$core$Bit) {true};
frost$core$Range$LTfrost$core$Int$GT $tmp768 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp758, $tmp766, $tmp767);
frost$core$Int $tmp769 = $tmp768.min;
*(&local0) = $tmp769;
frost$core$Int $tmp770 = $tmp768.max;
frost$core$Bit $tmp771 = $tmp768.inclusive;
bool $tmp772 = $tmp771.value;
frost$core$Int $tmp773 = (frost$core$Int) {1u};
if ($tmp772) goto block6; else goto block7;
block6:;
int64_t $tmp774 = $tmp769.value;
int64_t $tmp775 = $tmp770.value;
bool $tmp776 = $tmp774 <= $tmp775;
frost$core$Bit $tmp777 = (frost$core$Bit) {$tmp776};
bool $tmp778 = $tmp777.value;
if ($tmp778) goto block3; else goto block4;
block7:;
int64_t $tmp779 = $tmp769.value;
int64_t $tmp780 = $tmp770.value;
bool $tmp781 = $tmp779 < $tmp780;
frost$core$Bit $tmp782 = (frost$core$Bit) {$tmp781};
bool $tmp783 = $tmp782.value;
if ($tmp783) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:272
frost$core$Int $tmp784 = (frost$core$Int) {0u};
frost$core$Int* $tmp785 = &param1->_length;
frost$core$Int $tmp786 = *$tmp785;
frost$core$Bit $tmp787 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp788 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp784, $tmp786, $tmp787);
frost$core$Int $tmp789 = $tmp788.min;
*(&local1) = $tmp789;
frost$core$Int $tmp790 = $tmp788.max;
frost$core$Bit $tmp791 = $tmp788.inclusive;
bool $tmp792 = $tmp791.value;
frost$core$Int $tmp793 = (frost$core$Int) {1u};
if ($tmp792) goto block11; else goto block12;
block11:;
int64_t $tmp794 = $tmp789.value;
int64_t $tmp795 = $tmp790.value;
bool $tmp796 = $tmp794 <= $tmp795;
frost$core$Bit $tmp797 = (frost$core$Bit) {$tmp796};
bool $tmp798 = $tmp797.value;
if ($tmp798) goto block8; else goto block9;
block12:;
int64_t $tmp799 = $tmp789.value;
int64_t $tmp800 = $tmp790.value;
bool $tmp801 = $tmp799 < $tmp800;
frost$core$Bit $tmp802 = (frost$core$Bit) {$tmp801};
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:273
frost$core$Char8** $tmp804 = &param0->data;
frost$core$Char8* $tmp805 = *$tmp804;
frost$core$Int $tmp806 = *(&local0);
frost$core$Int $tmp807 = *(&local1);
int64_t $tmp808 = $tmp806.value;
int64_t $tmp809 = $tmp807.value;
int64_t $tmp810 = $tmp808 + $tmp809;
frost$core$Int $tmp811 = (frost$core$Int) {$tmp810};
frost$core$Int64 $tmp812 = frost$core$Int64$init$frost$core$Int($tmp811);
int64_t $tmp813 = $tmp812.value;
frost$core$Char8 $tmp814 = $tmp805[$tmp813];
frost$core$Char8** $tmp815 = &param1->data;
frost$core$Char8* $tmp816 = *$tmp815;
frost$core$Int $tmp817 = *(&local1);
frost$core$Int64 $tmp818 = frost$core$Int64$init$frost$core$Int($tmp817);
int64_t $tmp819 = $tmp818.value;
frost$core$Char8 $tmp820 = $tmp816[$tmp819];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from MutableString.frost:273:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
uint8_t $tmp821 = $tmp814.value;
uint8_t $tmp822 = $tmp820.value;
bool $tmp823 = $tmp821 != $tmp822;
frost$core$Bit $tmp824 = (frost$core$Bit) {$tmp823};
bool $tmp825 = $tmp824.value;
if ($tmp825) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:274
frost$core$Int $tmp826 = *(&local0);
int64_t $tmp827 = $tmp770.value;
int64_t $tmp828 = $tmp826.value;
int64_t $tmp829 = $tmp827 - $tmp828;
frost$core$Int $tmp830 = (frost$core$Int) {$tmp829};
if ($tmp772) goto block23; else goto block24;
block14:;
frost$core$Int $tmp831 = *(&local1);
int64_t $tmp832 = $tmp790.value;
int64_t $tmp833 = $tmp831.value;
int64_t $tmp834 = $tmp832 - $tmp833;
frost$core$Int $tmp835 = (frost$core$Int) {$tmp834};
if ($tmp792) goto block17; else goto block18;
block17:;
int64_t $tmp836 = $tmp835.value;
int64_t $tmp837 = $tmp793.value;
bool $tmp838 = $tmp836 >= $tmp837;
frost$core$Bit $tmp839 = (frost$core$Bit) {$tmp838};
bool $tmp840 = $tmp839.value;
if ($tmp840) goto block16; else goto block9;
block18:;
int64_t $tmp841 = $tmp835.value;
int64_t $tmp842 = $tmp793.value;
bool $tmp843 = $tmp841 > $tmp842;
frost$core$Bit $tmp844 = (frost$core$Bit) {$tmp843};
bool $tmp845 = $tmp844.value;
if ($tmp845) goto block16; else goto block9;
block16:;
int64_t $tmp846 = $tmp831.value;
int64_t $tmp847 = $tmp793.value;
int64_t $tmp848 = $tmp846 + $tmp847;
frost$core$Int $tmp849 = (frost$core$Int) {$tmp848};
*(&local1) = $tmp849;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:277
frost$core$Int $tmp850 = *(&local0);
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:277:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp851 = &(&local3)->value;
*$tmp851 = $tmp850;
frost$core$MutableString$Index $tmp852 = *(&local3);
*(&local2) = $tmp852;
frost$core$MutableString$Index $tmp853 = *(&local2);
frost$core$Bit $tmp854 = (frost$core$Bit) {((frost$core$MutableString$Index$nullable) { $tmp853, true }).nonnull};
bool $tmp855 = $tmp854.value;
if ($tmp855) goto block20; else goto block21;
block21:;
frost$core$Int $tmp856 = (frost$core$Int) {277u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s857, $tmp856, &$s858);
abort(); // unreachable
block20:;
return ((frost$core$MutableString$Index$nullable) { ((frost$core$MutableString$Index) ((frost$core$MutableString$Index$nullable) { $tmp853, true }).value), true });
block23:;
int64_t $tmp859 = $tmp830.value;
int64_t $tmp860 = $tmp773.value;
bool $tmp861 = $tmp859 >= $tmp860;
frost$core$Bit $tmp862 = (frost$core$Bit) {$tmp861};
bool $tmp863 = $tmp862.value;
if ($tmp863) goto block22; else goto block4;
block24:;
int64_t $tmp864 = $tmp830.value;
int64_t $tmp865 = $tmp773.value;
bool $tmp866 = $tmp864 > $tmp865;
frost$core$Bit $tmp867 = (frost$core$Bit) {$tmp866};
bool $tmp868 = $tmp867.value;
if ($tmp868) goto block22; else goto block4;
block22:;
int64_t $tmp869 = $tmp826.value;
int64_t $tmp870 = $tmp773.value;
int64_t $tmp871 = $tmp869 + $tmp870;
frost$core$Int $tmp872 = (frost$core$Int) {$tmp871};
*(&local0) = $tmp872;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:279
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$MutableString$contains$frost$core$Char8$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$Char8 param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:286
frost$core$Int $tmp873 = (frost$core$Int) {0u};
frost$core$Int* $tmp874 = &param0->_length;
frost$core$Int $tmp875 = *$tmp874;
frost$core$Bit $tmp876 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp877 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp873, $tmp875, $tmp876);
frost$core$Int $tmp878 = $tmp877.min;
*(&local0) = $tmp878;
frost$core$Int $tmp879 = $tmp877.max;
frost$core$Bit $tmp880 = $tmp877.inclusive;
bool $tmp881 = $tmp880.value;
frost$core$Int $tmp882 = (frost$core$Int) {1u};
if ($tmp881) goto block4; else goto block5;
block4:;
int64_t $tmp883 = $tmp878.value;
int64_t $tmp884 = $tmp879.value;
bool $tmp885 = $tmp883 <= $tmp884;
frost$core$Bit $tmp886 = (frost$core$Bit) {$tmp885};
bool $tmp887 = $tmp886.value;
if ($tmp887) goto block1; else goto block2;
block5:;
int64_t $tmp888 = $tmp878.value;
int64_t $tmp889 = $tmp879.value;
bool $tmp890 = $tmp888 < $tmp889;
frost$core$Bit $tmp891 = (frost$core$Bit) {$tmp890};
bool $tmp892 = $tmp891.value;
if ($tmp892) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:287
frost$core$Char8** $tmp893 = &param0->data;
frost$core$Char8* $tmp894 = *$tmp893;
frost$core$Int $tmp895 = *(&local0);
frost$core$Int64 $tmp896 = frost$core$Int64$init$frost$core$Int($tmp895);
int64_t $tmp897 = $tmp896.value;
frost$core$Char8 $tmp898 = $tmp894[$tmp897];
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from MutableString.frost:287:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp899 = $tmp898.value;
uint8_t $tmp900 = param1.value;
bool $tmp901 = $tmp899 == $tmp900;
frost$core$Bit $tmp902 = (frost$core$Bit) {$tmp901};
bool $tmp903 = $tmp902.value;
if ($tmp903) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:288
frost$core$Bit $tmp904 = (frost$core$Bit) {true};
return $tmp904;
block7:;
frost$core$Int $tmp905 = *(&local0);
int64_t $tmp906 = $tmp879.value;
int64_t $tmp907 = $tmp905.value;
int64_t $tmp908 = $tmp906 - $tmp907;
frost$core$Int $tmp909 = (frost$core$Int) {$tmp908};
if ($tmp881) goto block10; else goto block11;
block10:;
int64_t $tmp910 = $tmp909.value;
int64_t $tmp911 = $tmp882.value;
bool $tmp912 = $tmp910 >= $tmp911;
frost$core$Bit $tmp913 = (frost$core$Bit) {$tmp912};
bool $tmp914 = $tmp913.value;
if ($tmp914) goto block9; else goto block2;
block11:;
int64_t $tmp915 = $tmp909.value;
int64_t $tmp916 = $tmp882.value;
bool $tmp917 = $tmp915 > $tmp916;
frost$core$Bit $tmp918 = (frost$core$Bit) {$tmp917};
bool $tmp919 = $tmp918.value;
if ($tmp919) goto block9; else goto block2;
block9:;
int64_t $tmp920 = $tmp905.value;
int64_t $tmp921 = $tmp882.value;
int64_t $tmp922 = $tmp920 + $tmp921;
frost$core$Int $tmp923 = (frost$core$Int) {$tmp922};
*(&local0) = $tmp923;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:291
frost$core$Bit $tmp924 = (frost$core$Bit) {false};
return $tmp924;

}
frost$core$Bit frost$core$MutableString$contains$frost$core$String$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:298
// begin inline call to function frost.core.MutableString.indexOf(s:frost.core.String):frost.core.MutableString.Index? from MutableString.frost:298:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:256
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:256:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp925 = (frost$core$Int) {0u};
frost$core$MutableString$Index $tmp926 = frost$core$MutableString$Index$init$frost$core$Int($tmp925);
frost$core$MutableString$Index$nullable $tmp927 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp926);
frost$core$Bit $tmp928 = (frost$core$Bit) {$tmp927.nonnull};
return $tmp928;

}
frost$core$Bit frost$core$MutableString$startsWith$frost$core$String$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:302
frost$core$Int* $tmp929 = &param0->_length;
frost$core$Int $tmp930 = *$tmp929;
frost$core$Int* $tmp931 = &param1->_length;
frost$core$Int $tmp932 = *$tmp931;
int64_t $tmp933 = $tmp930.value;
int64_t $tmp934 = $tmp932.value;
bool $tmp935 = $tmp933 < $tmp934;
frost$core$Bit $tmp936 = (frost$core$Bit) {$tmp935};
bool $tmp937 = $tmp936.value;
if ($tmp937) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:303
frost$core$Bit $tmp938 = (frost$core$Bit) {false};
return $tmp938;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:305
frost$core$Int $tmp939 = (frost$core$Int) {0u};
frost$core$Int* $tmp940 = &param1->_length;
frost$core$Int $tmp941 = *$tmp940;
frost$core$Bit $tmp942 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp943 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp939, $tmp941, $tmp942);
frost$core$Int $tmp944 = $tmp943.min;
*(&local0) = $tmp944;
frost$core$Int $tmp945 = $tmp943.max;
frost$core$Bit $tmp946 = $tmp943.inclusive;
bool $tmp947 = $tmp946.value;
frost$core$Int $tmp948 = (frost$core$Int) {1u};
if ($tmp947) goto block6; else goto block7;
block6:;
int64_t $tmp949 = $tmp944.value;
int64_t $tmp950 = $tmp945.value;
bool $tmp951 = $tmp949 <= $tmp950;
frost$core$Bit $tmp952 = (frost$core$Bit) {$tmp951};
bool $tmp953 = $tmp952.value;
if ($tmp953) goto block3; else goto block4;
block7:;
int64_t $tmp954 = $tmp944.value;
int64_t $tmp955 = $tmp945.value;
bool $tmp956 = $tmp954 < $tmp955;
frost$core$Bit $tmp957 = (frost$core$Bit) {$tmp956};
bool $tmp958 = $tmp957.value;
if ($tmp958) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:306
frost$core$Char8** $tmp959 = &param0->data;
frost$core$Char8* $tmp960 = *$tmp959;
frost$core$Int $tmp961 = *(&local0);
frost$core$Int64 $tmp962 = frost$core$Int64$init$frost$core$Int($tmp961);
int64_t $tmp963 = $tmp962.value;
frost$core$Char8 $tmp964 = $tmp960[$tmp963];
frost$core$Char8** $tmp965 = &param1->data;
frost$core$Char8* $tmp966 = *$tmp965;
frost$core$Int $tmp967 = *(&local0);
frost$core$Int64 $tmp968 = frost$core$Int64$init$frost$core$Int($tmp967);
int64_t $tmp969 = $tmp968.value;
frost$core$Char8 $tmp970 = $tmp966[$tmp969];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from MutableString.frost:306:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
uint8_t $tmp971 = $tmp964.value;
uint8_t $tmp972 = $tmp970.value;
bool $tmp973 = $tmp971 != $tmp972;
frost$core$Bit $tmp974 = (frost$core$Bit) {$tmp973};
bool $tmp975 = $tmp974.value;
if ($tmp975) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:307
frost$core$Bit $tmp976 = (frost$core$Bit) {false};
return $tmp976;
block9:;
frost$core$Int $tmp977 = *(&local0);
int64_t $tmp978 = $tmp945.value;
int64_t $tmp979 = $tmp977.value;
int64_t $tmp980 = $tmp978 - $tmp979;
frost$core$Int $tmp981 = (frost$core$Int) {$tmp980};
if ($tmp947) goto block12; else goto block13;
block12:;
int64_t $tmp982 = $tmp981.value;
int64_t $tmp983 = $tmp948.value;
bool $tmp984 = $tmp982 >= $tmp983;
frost$core$Bit $tmp985 = (frost$core$Bit) {$tmp984};
bool $tmp986 = $tmp985.value;
if ($tmp986) goto block11; else goto block4;
block13:;
int64_t $tmp987 = $tmp981.value;
int64_t $tmp988 = $tmp948.value;
bool $tmp989 = $tmp987 > $tmp988;
frost$core$Bit $tmp990 = (frost$core$Bit) {$tmp989};
bool $tmp991 = $tmp990.value;
if ($tmp991) goto block11; else goto block4;
block11:;
int64_t $tmp992 = $tmp977.value;
int64_t $tmp993 = $tmp948.value;
int64_t $tmp994 = $tmp992 + $tmp993;
frost$core$Int $tmp995 = (frost$core$Int) {$tmp994};
*(&local0) = $tmp995;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:310
frost$core$Bit $tmp996 = (frost$core$Bit) {true};
return $tmp996;

}
frost$core$Bit frost$core$MutableString$endsWith$frost$core$String$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:314
frost$core$Int* $tmp997 = &param0->_length;
frost$core$Int $tmp998 = *$tmp997;
frost$core$Int* $tmp999 = &param1->_length;
frost$core$Int $tmp1000 = *$tmp999;
int64_t $tmp1001 = $tmp998.value;
int64_t $tmp1002 = $tmp1000.value;
bool $tmp1003 = $tmp1001 < $tmp1002;
frost$core$Bit $tmp1004 = (frost$core$Bit) {$tmp1003};
bool $tmp1005 = $tmp1004.value;
if ($tmp1005) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:315
frost$core$Bit $tmp1006 = (frost$core$Bit) {false};
return $tmp1006;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:317
frost$core$Int $tmp1007 = (frost$core$Int) {0u};
frost$core$Int* $tmp1008 = &param1->_length;
frost$core$Int $tmp1009 = *$tmp1008;
frost$core$Bit $tmp1010 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1011 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1007, $tmp1009, $tmp1010);
frost$core$Int $tmp1012 = $tmp1011.min;
*(&local0) = $tmp1012;
frost$core$Int $tmp1013 = $tmp1011.max;
frost$core$Bit $tmp1014 = $tmp1011.inclusive;
bool $tmp1015 = $tmp1014.value;
frost$core$Int $tmp1016 = (frost$core$Int) {1u};
if ($tmp1015) goto block6; else goto block7;
block6:;
int64_t $tmp1017 = $tmp1012.value;
int64_t $tmp1018 = $tmp1013.value;
bool $tmp1019 = $tmp1017 <= $tmp1018;
frost$core$Bit $tmp1020 = (frost$core$Bit) {$tmp1019};
bool $tmp1021 = $tmp1020.value;
if ($tmp1021) goto block3; else goto block4;
block7:;
int64_t $tmp1022 = $tmp1012.value;
int64_t $tmp1023 = $tmp1013.value;
bool $tmp1024 = $tmp1022 < $tmp1023;
frost$core$Bit $tmp1025 = (frost$core$Bit) {$tmp1024};
bool $tmp1026 = $tmp1025.value;
if ($tmp1026) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:318
frost$core$Char8** $tmp1027 = &param0->data;
frost$core$Char8* $tmp1028 = *$tmp1027;
frost$core$Int* $tmp1029 = &param0->_length;
frost$core$Int $tmp1030 = *$tmp1029;
frost$core$Int* $tmp1031 = &param1->_length;
frost$core$Int $tmp1032 = *$tmp1031;
int64_t $tmp1033 = $tmp1030.value;
int64_t $tmp1034 = $tmp1032.value;
int64_t $tmp1035 = $tmp1033 - $tmp1034;
frost$core$Int $tmp1036 = (frost$core$Int) {$tmp1035};
frost$core$Int $tmp1037 = *(&local0);
int64_t $tmp1038 = $tmp1036.value;
int64_t $tmp1039 = $tmp1037.value;
int64_t $tmp1040 = $tmp1038 + $tmp1039;
frost$core$Int $tmp1041 = (frost$core$Int) {$tmp1040};
frost$core$Int64 $tmp1042 = frost$core$Int64$init$frost$core$Int($tmp1041);
int64_t $tmp1043 = $tmp1042.value;
frost$core$Char8 $tmp1044 = $tmp1028[$tmp1043];
frost$core$Char8** $tmp1045 = &param1->data;
frost$core$Char8* $tmp1046 = *$tmp1045;
frost$core$Int $tmp1047 = *(&local0);
frost$core$Int64 $tmp1048 = frost$core$Int64$init$frost$core$Int($tmp1047);
int64_t $tmp1049 = $tmp1048.value;
frost$core$Char8 $tmp1050 = $tmp1046[$tmp1049];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from MutableString.frost:318:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
uint8_t $tmp1051 = $tmp1044.value;
uint8_t $tmp1052 = $tmp1050.value;
bool $tmp1053 = $tmp1051 != $tmp1052;
frost$core$Bit $tmp1054 = (frost$core$Bit) {$tmp1053};
bool $tmp1055 = $tmp1054.value;
if ($tmp1055) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:319
frost$core$Bit $tmp1056 = (frost$core$Bit) {false};
return $tmp1056;
block9:;
frost$core$Int $tmp1057 = *(&local0);
int64_t $tmp1058 = $tmp1013.value;
int64_t $tmp1059 = $tmp1057.value;
int64_t $tmp1060 = $tmp1058 - $tmp1059;
frost$core$Int $tmp1061 = (frost$core$Int) {$tmp1060};
if ($tmp1015) goto block12; else goto block13;
block12:;
int64_t $tmp1062 = $tmp1061.value;
int64_t $tmp1063 = $tmp1016.value;
bool $tmp1064 = $tmp1062 >= $tmp1063;
frost$core$Bit $tmp1065 = (frost$core$Bit) {$tmp1064};
bool $tmp1066 = $tmp1065.value;
if ($tmp1066) goto block11; else goto block4;
block13:;
int64_t $tmp1067 = $tmp1061.value;
int64_t $tmp1068 = $tmp1016.value;
bool $tmp1069 = $tmp1067 > $tmp1068;
frost$core$Bit $tmp1070 = (frost$core$Bit) {$tmp1069};
bool $tmp1071 = $tmp1070.value;
if ($tmp1071) goto block11; else goto block4;
block11:;
int64_t $tmp1072 = $tmp1057.value;
int64_t $tmp1073 = $tmp1016.value;
int64_t $tmp1074 = $tmp1072 + $tmp1073;
frost$core$Int $tmp1075 = (frost$core$Int) {$tmp1074};
*(&local0) = $tmp1075;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:322
frost$core$Bit $tmp1076 = (frost$core$Bit) {true};
return $tmp1076;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$lastIndexOf$frost$core$String$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:333
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:333:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:187
frost$core$Int* $tmp1077 = &param0->_length;
frost$core$Int $tmp1078 = *$tmp1077;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp1079 = &(&local1)->value;
*$tmp1079 = $tmp1078;
frost$core$MutableString$Index $tmp1080 = *(&local1);
*(&local0) = $tmp1080;
frost$core$MutableString$Index $tmp1081 = *(&local0);
frost$core$MutableString$Index$nullable $tmp1082 = frost$core$MutableString$lastIndexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp1081);
return $tmp1082;

}
frost$core$MutableString$Index$nullable frost$core$MutableString$lastIndexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(frost$core$MutableString* param0, frost$core$String* param1, frost$core$MutableString$Index param2) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Int local3;
frost$core$MutableString$Index local4;
frost$core$MutableString$Index local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:345
frost$core$Int* $tmp1083 = &param0->_length;
frost$core$Int $tmp1084 = *$tmp1083;
frost$core$Int* $tmp1085 = &param1->_length;
frost$core$Int $tmp1086 = *$tmp1085;
int64_t $tmp1087 = $tmp1084.value;
int64_t $tmp1088 = $tmp1086.value;
bool $tmp1089 = $tmp1087 < $tmp1088;
frost$core$Bit $tmp1090 = (frost$core$Bit) {$tmp1089};
bool $tmp1091 = $tmp1090.value;
if ($tmp1091) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:346
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:348
frost$core$Int $tmp1092 = param2.value;
frost$core$Int* $tmp1093 = &param0->_length;
frost$core$Int $tmp1094 = *$tmp1093;
frost$core$Int* $tmp1095 = &param1->_length;
frost$core$Int $tmp1096 = *$tmp1095;
int64_t $tmp1097 = $tmp1094.value;
int64_t $tmp1098 = $tmp1096.value;
int64_t $tmp1099 = $tmp1097 - $tmp1098;
frost$core$Int $tmp1100 = (frost$core$Int) {$tmp1099};
// begin inline call to function frost.core.Int.min(other:frost.core.Int):frost.core.Int from MutableString.frost:348:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:776
int64_t $tmp1101 = $tmp1092.value;
int64_t $tmp1102 = $tmp1100.value;
bool $tmp1103 = $tmp1101 < $tmp1102;
frost$core$Bit $tmp1104 = (frost$core$Bit) {$tmp1103};
bool $tmp1105 = $tmp1104.value;
if ($tmp1105) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:777
int64_t $tmp1106 = $tmp1092.value;
frost$core$Int $tmp1107 = (frost$core$Int) {$tmp1106};
*(&local0) = $tmp1107;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:779
int64_t $tmp1108 = $tmp1100.value;
frost$core$Int $tmp1109 = (frost$core$Int) {$tmp1108};
*(&local0) = $tmp1109;
goto block3;
block3:;
frost$core$Int $tmp1110 = *(&local0);
*(&local1) = $tmp1110;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:349
frost$core$Int $tmp1111 = *(&local1);
frost$core$Int $tmp1112 = (frost$core$Int) {0u};
frost$core$Int $tmp1113 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp1114 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp1115 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1111, $tmp1112, $tmp1113, $tmp1114);
frost$core$Int $tmp1116 = $tmp1115.start;
*(&local2) = $tmp1116;
frost$core$Int $tmp1117 = $tmp1115.end;
frost$core$Int $tmp1118 = $tmp1115.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from MutableString.frost:349:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp1119 = $tmp1118.value;
int64_t $tmp1120 = -$tmp1119;
frost$core$Int $tmp1121 = (frost$core$Int) {$tmp1120};
frost$core$Bit $tmp1122 = $tmp1115.inclusive;
bool $tmp1123 = $tmp1122.value;
frost$core$Int $tmp1124 = (frost$core$Int) {0u};
int64_t $tmp1125 = $tmp1118.value;
int64_t $tmp1126 = $tmp1124.value;
bool $tmp1127 = $tmp1125 >= $tmp1126;
frost$core$Bit $tmp1128 = (frost$core$Bit) {$tmp1127};
bool $tmp1129 = $tmp1128.value;
if ($tmp1129) goto block10; else goto block11;
block10:;
if ($tmp1123) goto block12; else goto block13;
block12:;
int64_t $tmp1130 = $tmp1116.value;
int64_t $tmp1131 = $tmp1117.value;
bool $tmp1132 = $tmp1130 <= $tmp1131;
frost$core$Bit $tmp1133 = (frost$core$Bit) {$tmp1132};
bool $tmp1134 = $tmp1133.value;
if ($tmp1134) goto block7; else goto block8;
block13:;
int64_t $tmp1135 = $tmp1116.value;
int64_t $tmp1136 = $tmp1117.value;
bool $tmp1137 = $tmp1135 < $tmp1136;
frost$core$Bit $tmp1138 = (frost$core$Bit) {$tmp1137};
bool $tmp1139 = $tmp1138.value;
if ($tmp1139) goto block7; else goto block8;
block11:;
if ($tmp1123) goto block14; else goto block15;
block14:;
int64_t $tmp1140 = $tmp1116.value;
int64_t $tmp1141 = $tmp1117.value;
bool $tmp1142 = $tmp1140 >= $tmp1141;
frost$core$Bit $tmp1143 = (frost$core$Bit) {$tmp1142};
bool $tmp1144 = $tmp1143.value;
if ($tmp1144) goto block7; else goto block8;
block15:;
int64_t $tmp1145 = $tmp1116.value;
int64_t $tmp1146 = $tmp1117.value;
bool $tmp1147 = $tmp1145 > $tmp1146;
frost$core$Bit $tmp1148 = (frost$core$Bit) {$tmp1147};
bool $tmp1149 = $tmp1148.value;
if ($tmp1149) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:350
frost$core$Int $tmp1150 = (frost$core$Int) {0u};
frost$core$Int* $tmp1151 = &param1->_length;
frost$core$Int $tmp1152 = *$tmp1151;
frost$core$Bit $tmp1153 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1154 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1150, $tmp1152, $tmp1153);
frost$core$Int $tmp1155 = $tmp1154.min;
*(&local3) = $tmp1155;
frost$core$Int $tmp1156 = $tmp1154.max;
frost$core$Bit $tmp1157 = $tmp1154.inclusive;
bool $tmp1158 = $tmp1157.value;
frost$core$Int $tmp1159 = (frost$core$Int) {1u};
if ($tmp1158) goto block19; else goto block20;
block19:;
int64_t $tmp1160 = $tmp1155.value;
int64_t $tmp1161 = $tmp1156.value;
bool $tmp1162 = $tmp1160 <= $tmp1161;
frost$core$Bit $tmp1163 = (frost$core$Bit) {$tmp1162};
bool $tmp1164 = $tmp1163.value;
if ($tmp1164) goto block16; else goto block17;
block20:;
int64_t $tmp1165 = $tmp1155.value;
int64_t $tmp1166 = $tmp1156.value;
bool $tmp1167 = $tmp1165 < $tmp1166;
frost$core$Bit $tmp1168 = (frost$core$Bit) {$tmp1167};
bool $tmp1169 = $tmp1168.value;
if ($tmp1169) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:351
frost$core$Char8** $tmp1170 = &param0->data;
frost$core$Char8* $tmp1171 = *$tmp1170;
frost$core$Int $tmp1172 = *(&local2);
frost$core$Int $tmp1173 = *(&local3);
int64_t $tmp1174 = $tmp1172.value;
int64_t $tmp1175 = $tmp1173.value;
int64_t $tmp1176 = $tmp1174 + $tmp1175;
frost$core$Int $tmp1177 = (frost$core$Int) {$tmp1176};
frost$core$Int64 $tmp1178 = frost$core$Int64$init$frost$core$Int($tmp1177);
int64_t $tmp1179 = $tmp1178.value;
frost$core$Char8 $tmp1180 = $tmp1171[$tmp1179];
frost$core$Char8** $tmp1181 = &param1->data;
frost$core$Char8* $tmp1182 = *$tmp1181;
frost$core$Int $tmp1183 = *(&local3);
frost$core$Int64 $tmp1184 = frost$core$Int64$init$frost$core$Int($tmp1183);
int64_t $tmp1185 = $tmp1184.value;
frost$core$Char8 $tmp1186 = $tmp1182[$tmp1185];
// begin inline call to function frost.core.Char8.!=(other:frost.core.Char8):frost.core.Bit from MutableString.frost:351:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:31
uint8_t $tmp1187 = $tmp1180.value;
uint8_t $tmp1188 = $tmp1186.value;
bool $tmp1189 = $tmp1187 != $tmp1188;
frost$core$Bit $tmp1190 = (frost$core$Bit) {$tmp1189};
bool $tmp1191 = $tmp1190.value;
if ($tmp1191) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:352
frost$core$Int $tmp1192 = *(&local2);
if ($tmp1129) goto block31; else goto block32;
block22:;
frost$core$Int $tmp1193 = *(&local3);
int64_t $tmp1194 = $tmp1156.value;
int64_t $tmp1195 = $tmp1193.value;
int64_t $tmp1196 = $tmp1194 - $tmp1195;
frost$core$Int $tmp1197 = (frost$core$Int) {$tmp1196};
if ($tmp1158) goto block25; else goto block26;
block25:;
int64_t $tmp1198 = $tmp1197.value;
int64_t $tmp1199 = $tmp1159.value;
bool $tmp1200 = $tmp1198 >= $tmp1199;
frost$core$Bit $tmp1201 = (frost$core$Bit) {$tmp1200};
bool $tmp1202 = $tmp1201.value;
if ($tmp1202) goto block24; else goto block17;
block26:;
int64_t $tmp1203 = $tmp1197.value;
int64_t $tmp1204 = $tmp1159.value;
bool $tmp1205 = $tmp1203 > $tmp1204;
frost$core$Bit $tmp1206 = (frost$core$Bit) {$tmp1205};
bool $tmp1207 = $tmp1206.value;
if ($tmp1207) goto block24; else goto block17;
block24:;
int64_t $tmp1208 = $tmp1193.value;
int64_t $tmp1209 = $tmp1159.value;
int64_t $tmp1210 = $tmp1208 + $tmp1209;
frost$core$Int $tmp1211 = (frost$core$Int) {$tmp1210};
*(&local3) = $tmp1211;
goto block16;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:355
frost$core$Int $tmp1212 = *(&local2);
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:355:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp1213 = &(&local5)->value;
*$tmp1213 = $tmp1212;
frost$core$MutableString$Index $tmp1214 = *(&local5);
*(&local4) = $tmp1214;
frost$core$MutableString$Index $tmp1215 = *(&local4);
frost$core$Bit $tmp1216 = (frost$core$Bit) {((frost$core$MutableString$Index$nullable) { $tmp1215, true }).nonnull};
bool $tmp1217 = $tmp1216.value;
if ($tmp1217) goto block28; else goto block29;
block29:;
frost$core$Int $tmp1218 = (frost$core$Int) {355u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1219, $tmp1218, &$s1220);
abort(); // unreachable
block28:;
return ((frost$core$MutableString$Index$nullable) { ((frost$core$MutableString$Index) ((frost$core$MutableString$Index$nullable) { $tmp1215, true }).value), true });
block31:;
int64_t $tmp1221 = $tmp1117.value;
int64_t $tmp1222 = $tmp1192.value;
int64_t $tmp1223 = $tmp1221 - $tmp1222;
frost$core$Int $tmp1224 = (frost$core$Int) {$tmp1223};
if ($tmp1123) goto block33; else goto block34;
block33:;
int64_t $tmp1225 = $tmp1224.value;
int64_t $tmp1226 = $tmp1118.value;
bool $tmp1227 = $tmp1225 >= $tmp1226;
frost$core$Bit $tmp1228 = (frost$core$Bit) {$tmp1227};
bool $tmp1229 = $tmp1228.value;
if ($tmp1229) goto block30; else goto block8;
block34:;
int64_t $tmp1230 = $tmp1224.value;
int64_t $tmp1231 = $tmp1118.value;
bool $tmp1232 = $tmp1230 > $tmp1231;
frost$core$Bit $tmp1233 = (frost$core$Bit) {$tmp1232};
bool $tmp1234 = $tmp1233.value;
if ($tmp1234) goto block30; else goto block8;
block32:;
int64_t $tmp1235 = $tmp1192.value;
int64_t $tmp1236 = $tmp1117.value;
int64_t $tmp1237 = $tmp1235 - $tmp1236;
frost$core$Int $tmp1238 = (frost$core$Int) {$tmp1237};
if ($tmp1123) goto block35; else goto block36;
block35:;
int64_t $tmp1239 = $tmp1238.value;
int64_t $tmp1240 = $tmp1121.value;
bool $tmp1241 = $tmp1239 >= $tmp1240;
frost$core$Bit $tmp1242 = (frost$core$Bit) {$tmp1241};
bool $tmp1243 = $tmp1242.value;
if ($tmp1243) goto block30; else goto block8;
block36:;
int64_t $tmp1244 = $tmp1238.value;
int64_t $tmp1245 = $tmp1121.value;
bool $tmp1246 = $tmp1244 > $tmp1245;
frost$core$Bit $tmp1247 = (frost$core$Bit) {$tmp1246};
bool $tmp1248 = $tmp1247.value;
if ($tmp1248) goto block30; else goto block8;
block30:;
int64_t $tmp1249 = $tmp1192.value;
int64_t $tmp1250 = $tmp1118.value;
int64_t $tmp1251 = $tmp1249 + $tmp1250;
frost$core$Int $tmp1252 = (frost$core$Int) {$tmp1251};
*(&local2) = $tmp1252;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:357
return ((frost$core$MutableString$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$MutableString$matches$frost$core$RegularExpression$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$RegularExpression* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:368
$fn1254 $tmp1253 = ($fn1254) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1255 = $tmp1253(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1256 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1255);
frost$core$Bit $tmp1257;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp1257, $tmp1256);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
return $tmp1257;

}
frost$core$Bit frost$core$MutableString$contains$frost$core$RegularExpression$R$frost$core$Bit(frost$core$MutableString* param0, frost$core$RegularExpression* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:379
$fn1259 $tmp1258 = ($fn1259) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1260 = $tmp1258(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1261 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1260);
frost$core$Bit $tmp1262 = frost$core$Matcher$find$R$frost$core$Bit($tmp1261);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
return $tmp1262;

}
void frost$core$MutableString$trim(frost$core$MutableString* param0) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index local3;
frost$core$MutableString$Index local4;
frost$core$MutableString$Index local5;
frost$core$MutableString$Index local6;
frost$core$MutableString$Index local7;
frost$core$MutableString$Index local8;
frost$core$MutableString$Index local9;
frost$core$MutableString$Index local10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:384
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:384:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp1263 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp1264 = &(&local1)->value;
*$tmp1264 = $tmp1263;
frost$core$MutableString$Index $tmp1265 = *(&local1);
*(&local0) = $tmp1265;
frost$core$MutableString$Index $tmp1266 = *(&local0);
*(&local2) = $tmp1266;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:385
goto block3;
block3:;
frost$core$MutableString$Index $tmp1267 = *(&local2);
frost$core$MutableString$Index$wrapper* $tmp1268;
$tmp1268 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1268->value = $tmp1267;
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:385:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:187
frost$core$Int* $tmp1269 = &param0->_length;
frost$core$Int $tmp1270 = *$tmp1269;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp1271 = &(&local4)->value;
*$tmp1271 = $tmp1270;
frost$core$MutableString$Index $tmp1272 = *(&local4);
*(&local3) = $tmp1272;
frost$core$MutableString$Index $tmp1273 = *(&local3);
frost$core$MutableString$Index$wrapper* $tmp1274;
$tmp1274 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1274->value = $tmp1273;
ITable* $tmp1275 = ((frost$core$Equatable*) $tmp1268)->$class->itable;
while ($tmp1275->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1275 = $tmp1275->next;
}
$fn1277 $tmp1276 = $tmp1275->methods[1];
frost$core$Bit $tmp1278 = $tmp1276(((frost$core$Equatable*) $tmp1268), ((frost$core$Equatable*) $tmp1274));
bool $tmp1279 = $tmp1278.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1274)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1268)));
if ($tmp1279) goto block6; else goto block5;
block6:;
frost$core$MutableString$Index $tmp1280 = *(&local2);
frost$core$Char32 $tmp1281 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(param0, $tmp1280);
frost$core$Bit $tmp1282 = frost$core$Char32$isWhitespace$R$frost$core$Bit($tmp1281);
bool $tmp1283 = $tmp1282.value;
if ($tmp1283) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:386
frost$core$MutableString$Index $tmp1284 = *(&local2);
frost$core$MutableString$Index $tmp1285 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1284);
*(&local2) = $tmp1285;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:388
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:388:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp1286 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp1287 = &(&local6)->value;
*$tmp1287 = $tmp1286;
frost$core$MutableString$Index $tmp1288 = *(&local6);
*(&local5) = $tmp1288;
frost$core$MutableString$Index $tmp1289 = *(&local5);
frost$core$MutableString$Index $tmp1290 = *(&local2);
frost$core$Bit $tmp1291 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1292 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp1289, $tmp1290, $tmp1291);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1292, &$s1293);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:389
frost$core$Int* $tmp1294 = &param0->_length;
frost$core$Int $tmp1295 = *$tmp1294;
frost$core$Int $tmp1296 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MutableString.frost:389:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1297 = $tmp1295.value;
int64_t $tmp1298 = $tmp1296.value;
bool $tmp1299 = $tmp1297 == $tmp1298;
frost$core$Bit $tmp1300 = (frost$core$Bit) {$tmp1299};
bool $tmp1301 = $tmp1300.value;
if ($tmp1301) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:390
return;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:392
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:392:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:187
frost$core$Int* $tmp1302 = &param0->_length;
frost$core$Int $tmp1303 = *$tmp1302;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp1304 = &(&local8)->value;
*$tmp1304 = $tmp1303;
frost$core$MutableString$Index $tmp1305 = *(&local8);
*(&local7) = $tmp1305;
frost$core$MutableString$Index $tmp1306 = *(&local7);
frost$core$MutableString$Index $tmp1307 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1306);
*(&local2) = $tmp1307;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:393
goto block16;
block16:;
frost$core$MutableString$Index $tmp1308 = *(&local2);
frost$core$MutableString$Index$wrapper* $tmp1309;
$tmp1309 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1309->value = $tmp1308;
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:393:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp1310 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp1311 = &(&local10)->value;
*$tmp1311 = $tmp1310;
frost$core$MutableString$Index $tmp1312 = *(&local10);
*(&local9) = $tmp1312;
frost$core$MutableString$Index $tmp1313 = *(&local9);
frost$core$MutableString$Index$wrapper* $tmp1314;
$tmp1314 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1314->value = $tmp1313;
ITable* $tmp1315 = ((frost$core$Equatable*) $tmp1309)->$class->itable;
while ($tmp1315->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1315 = $tmp1315->next;
}
$fn1317 $tmp1316 = $tmp1315->methods[1];
frost$core$Bit $tmp1318 = $tmp1316(((frost$core$Equatable*) $tmp1309), ((frost$core$Equatable*) $tmp1314));
bool $tmp1319 = $tmp1318.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1314)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1309)));
if ($tmp1319) goto block19; else goto block18;
block19:;
frost$core$MutableString$Index $tmp1320 = *(&local2);
frost$core$Char32 $tmp1321 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(param0, $tmp1320);
frost$core$Bit $tmp1322 = frost$core$Char32$isWhitespace$R$frost$core$Bit($tmp1321);
bool $tmp1323 = $tmp1322.value;
if ($tmp1323) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:394
frost$core$MutableString$Index $tmp1324 = *(&local2);
frost$core$MutableString$Index $tmp1325 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1324);
*(&local2) = $tmp1325;
goto block16;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:396
frost$core$MutableString$Index $tmp1326 = *(&local2);
frost$core$MutableString$Index $tmp1327 = frost$core$MutableString$next$frost$core$MutableString$Index$R$frost$core$MutableString$Index(param0, $tmp1326);
frost$core$Bit $tmp1328 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp1329 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit(((frost$core$MutableString$Index$nullable) { $tmp1327, true }), ((frost$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1328);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param0, $tmp1329, &$s1330);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$String* param2) {

frost$core$Matcher* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
frost$core$Bit $tmp1331 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn1333 $tmp1332 = ($fn1333) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1334 = $tmp1332(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1335 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1334);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
frost$core$Matcher* $tmp1336 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
*(&local0) = $tmp1335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block2;
block2:;
frost$core$Matcher* $tmp1337 = *(&local0);
frost$core$Bit $tmp1338 = frost$core$Matcher$find$R$frost$core$Bit($tmp1337);
bool $tmp1339 = $tmp1338.value;
if ($tmp1339) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp1340 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1340, param0, param2, $tmp1331);
goto block2;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp1341 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from MutableString.frost:411:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
frost$core$String** $tmp1342 = &$tmp1341->searchText;
frost$core$String* $tmp1343 = *$tmp1342;
frost$core$String$Index* $tmp1344 = &$tmp1341->replacementIndex;
frost$core$String$Index $tmp1345 = *$tmp1344;
frost$core$Bit $tmp1346 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1347 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp1345, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1346);
frost$core$String* $tmp1348 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1343, $tmp1347);
frost$core$MutableString$append$frost$core$String(param0, $tmp1348);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
frost$core$Matcher* $tmp1349 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$String* param2, frost$core$Bit param3) {

frost$core$Matcher* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
$fn1351 $tmp1350 = ($fn1351) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1352 = $tmp1350(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1353 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1352);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
frost$core$Matcher* $tmp1354 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
*(&local0) = $tmp1353;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block1;
block1:;
frost$core$Matcher* $tmp1355 = *(&local0);
frost$core$Bit $tmp1356 = frost$core$Matcher$find$R$frost$core$Bit($tmp1355);
bool $tmp1357 = $tmp1356.value;
if ($tmp1357) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
frost$core$Matcher* $tmp1358 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1358, param0, param2, param3);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
frost$core$Matcher* $tmp1359 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from MutableString.frost:411:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
frost$core$String** $tmp1360 = &$tmp1359->searchText;
frost$core$String* $tmp1361 = *$tmp1360;
frost$core$String$Index* $tmp1362 = &$tmp1359->replacementIndex;
frost$core$String$Index $tmp1363 = *$tmp1362;
frost$core$Bit $tmp1364 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1365 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp1363, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1364);
frost$core$String* $tmp1366 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1361, $tmp1365);
frost$core$MutableString$append$frost$core$String(param0, $tmp1366);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
frost$core$Matcher* $tmp1367 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$Matcher* local0 = NULL;
frost$core$Object* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:432
$fn1369 $tmp1368 = ($fn1369) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1370 = $tmp1368(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1371 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1370);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
frost$core$Matcher* $tmp1372 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
*(&local0) = $tmp1371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:433
frost$core$MutableString$clear(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:434
goto block1;
block1:;
frost$core$Matcher* $tmp1373 = *(&local0);
frost$core$Bit $tmp1374 = frost$core$Matcher$find$R$frost$core$Bit($tmp1373);
bool $tmp1375 = $tmp1374.value;
if ($tmp1375) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:435
frost$core$Matcher* $tmp1376 = *(&local0);
frost$core$Matcher* $tmp1377 = *(&local0);
frost$core$Int $tmp1378 = (frost$core$Int) {0u};
frost$core$String* $tmp1379 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q($tmp1377, $tmp1378);
frost$core$Int8** $tmp1380 = &param2->pointer;
frost$core$Int8* $tmp1381 = *$tmp1380;
frost$core$Object** $tmp1382 = &param2->target;
frost$core$Object* $tmp1383 = *$tmp1382;
bool $tmp1384 = $tmp1383 != ((frost$core$Object*) NULL);
if ($tmp1384) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp1386 = (($fn1385) $tmp1381)($tmp1379);
*(&local1) = $tmp1386;
goto block6;
block4:;
frost$core$Object* $tmp1388 = (($fn1387) $tmp1381)($tmp1383, $tmp1379);
*(&local1) = $tmp1388;
goto block6;
block6:;
frost$core$Object* $tmp1389 = *(&local1);
$fn1391 $tmp1390 = ($fn1391) $tmp1389->$class->vtable[0];
frost$core$String* $tmp1392 = $tmp1390($tmp1389);
frost$core$Bit $tmp1393 = (frost$core$Bit) {false};
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1376, param0, $tmp1392, $tmp1393);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
frost$core$Frost$unref$frost$core$Object$Q($tmp1389);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:437
frost$core$Matcher* $tmp1394 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from MutableString.frost:437:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
frost$core$String** $tmp1395 = &$tmp1394->searchText;
frost$core$String* $tmp1396 = *$tmp1395;
frost$core$String$Index* $tmp1397 = &$tmp1394->replacementIndex;
frost$core$String$Index $tmp1398 = *$tmp1397;
frost$core$Bit $tmp1399 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1400 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp1398, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1399);
frost$core$String* $tmp1401 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1396, $tmp1400);
frost$core$MutableString$append$frost$core$String(param0, $tmp1401);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
frost$core$Matcher* $tmp1402 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$Matcher* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int local2;
frost$core$Object* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:451
$fn1404 $tmp1403 = ($fn1404) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1405 = $tmp1403(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1406 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1405);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
frost$core$Matcher* $tmp1407 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
*(&local0) = $tmp1406;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:452
frost$core$MutableString$clear(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:453
goto block1;
block1:;
frost$core$Matcher* $tmp1408 = *(&local0);
frost$core$Bit $tmp1409 = frost$core$Matcher$find$R$frost$core$Bit($tmp1408);
bool $tmp1410 = $tmp1409.value;
if ($tmp1410) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:454
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1411 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1411);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
frost$collections$Array* $tmp1412 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
*(&local1) = $tmp1411;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:455
frost$core$Int $tmp1413 = (frost$core$Int) {0u};
frost$core$Matcher* $tmp1414 = *(&local0);
frost$core$Int $tmp1415;
frost$core$Matcher$get_groupCount$R$frost$core$Int(&$tmp1415, $tmp1414);
frost$core$Bit $tmp1416 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1417 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1413, $tmp1415, $tmp1416);
frost$core$Int $tmp1418 = $tmp1417.min;
*(&local2) = $tmp1418;
frost$core$Int $tmp1419 = $tmp1417.max;
frost$core$Bit $tmp1420 = $tmp1417.inclusive;
bool $tmp1421 = $tmp1420.value;
frost$core$Int $tmp1422 = (frost$core$Int) {1u};
if ($tmp1421) goto block7; else goto block8;
block7:;
int64_t $tmp1423 = $tmp1418.value;
int64_t $tmp1424 = $tmp1419.value;
bool $tmp1425 = $tmp1423 <= $tmp1424;
frost$core$Bit $tmp1426 = (frost$core$Bit) {$tmp1425};
bool $tmp1427 = $tmp1426.value;
if ($tmp1427) goto block4; else goto block5;
block8:;
int64_t $tmp1428 = $tmp1418.value;
int64_t $tmp1429 = $tmp1419.value;
bool $tmp1430 = $tmp1428 < $tmp1429;
frost$core$Bit $tmp1431 = (frost$core$Bit) {$tmp1430};
bool $tmp1432 = $tmp1431.value;
if ($tmp1432) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:456
frost$collections$Array* $tmp1433 = *(&local1);
frost$core$Matcher* $tmp1434 = *(&local0);
frost$core$Int $tmp1435 = *(&local2);
frost$core$String* $tmp1436 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q($tmp1434, $tmp1435);
frost$collections$Array$add$frost$collections$Array$T($tmp1433, ((frost$core$Object*) $tmp1436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
frost$core$Int $tmp1437 = *(&local2);
int64_t $tmp1438 = $tmp1419.value;
int64_t $tmp1439 = $tmp1437.value;
int64_t $tmp1440 = $tmp1438 - $tmp1439;
frost$core$Int $tmp1441 = (frost$core$Int) {$tmp1440};
if ($tmp1421) goto block10; else goto block11;
block10:;
int64_t $tmp1442 = $tmp1441.value;
int64_t $tmp1443 = $tmp1422.value;
bool $tmp1444 = $tmp1442 >= $tmp1443;
frost$core$Bit $tmp1445 = (frost$core$Bit) {$tmp1444};
bool $tmp1446 = $tmp1445.value;
if ($tmp1446) goto block9; else goto block5;
block11:;
int64_t $tmp1447 = $tmp1441.value;
int64_t $tmp1448 = $tmp1422.value;
bool $tmp1449 = $tmp1447 > $tmp1448;
frost$core$Bit $tmp1450 = (frost$core$Bit) {$tmp1449};
bool $tmp1451 = $tmp1450.value;
if ($tmp1451) goto block9; else goto block5;
block9:;
int64_t $tmp1452 = $tmp1437.value;
int64_t $tmp1453 = $tmp1422.value;
int64_t $tmp1454 = $tmp1452 + $tmp1453;
frost$core$Int $tmp1455 = (frost$core$Int) {$tmp1454};
*(&local2) = $tmp1455;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:458
frost$core$Matcher* $tmp1456 = *(&local0);
frost$collections$Array* $tmp1457 = *(&local1);
frost$core$Int8** $tmp1458 = &param2->pointer;
frost$core$Int8* $tmp1459 = *$tmp1458;
frost$core$Object** $tmp1460 = &param2->target;
frost$core$Object* $tmp1461 = *$tmp1460;
bool $tmp1462 = $tmp1461 != ((frost$core$Object*) NULL);
if ($tmp1462) goto block12; else goto block13;
block13:;
frost$core$Object* $tmp1464 = (($fn1463) $tmp1459)(((frost$collections$ListView*) $tmp1457));
*(&local3) = $tmp1464;
goto block14;
block12:;
frost$core$Object* $tmp1466 = (($fn1465) $tmp1459)($tmp1461, ((frost$collections$ListView*) $tmp1457));
*(&local3) = $tmp1466;
goto block14;
block14:;
frost$core$Object* $tmp1467 = *(&local3);
$fn1469 $tmp1468 = ($fn1469) $tmp1467->$class->vtable[0];
frost$core$String* $tmp1470 = $tmp1468($tmp1467);
frost$core$Bit $tmp1471 = (frost$core$Bit) {false};
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1456, param0, $tmp1470, $tmp1471);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
frost$core$Frost$unref$frost$core$Object$Q($tmp1467);
frost$collections$Array* $tmp1472 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
*(&local1) = ((frost$collections$Array*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:460
frost$core$Matcher* $tmp1473 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from MutableString.frost:460:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
frost$core$String** $tmp1474 = &$tmp1473->searchText;
frost$core$String* $tmp1475 = *$tmp1474;
frost$core$String$Index* $tmp1476 = &$tmp1473->replacementIndex;
frost$core$String$Index $tmp1477 = *$tmp1476;
frost$core$Bit $tmp1478 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1479 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp1477, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1478);
frost$core$String* $tmp1480 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1475, $tmp1479);
frost$core$MutableString$append$frost$core$String(param0, $tmp1480);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
frost$core$Matcher* $tmp1481 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
frost$core$Char32 frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(frost$core$MutableString* param0, frost$core$MutableString$Index param1) {

frost$core$Int local0;
frost$core$Char8 local1;
frost$core$Int32 local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:467
frost$core$Int $tmp1482 = param1.value;
*(&local0) = $tmp1482;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:468
frost$core$Char8** $tmp1483 = &param0->data;
frost$core$Char8* $tmp1484 = *$tmp1483;
frost$core$Int $tmp1485 = *(&local0);
frost$core$Int64 $tmp1486 = frost$core$Int64$init$frost$core$Int($tmp1485);
int64_t $tmp1487 = $tmp1486.value;
frost$core$Char8 $tmp1488 = $tmp1484[$tmp1487];
*(&local1) = $tmp1488;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:469
frost$core$Char8 $tmp1489 = *(&local1);
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:469:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp1490 = $tmp1489.value;
int32_t $tmp1491 = ((int32_t) $tmp1490) & 255u;
frost$core$Int32 $tmp1492 = (frost$core$Int32) {$tmp1491};
*(&local2) = $tmp1492;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:470
frost$core$Char8 $tmp1493 = *(&local1);
uint8_t $tmp1494 = $tmp1493.value;
int64_t $tmp1495 = ((int64_t) $tmp1494) & 255u;
bool $tmp1496 = $tmp1495 < 192u;
frost$core$Bit $tmp1497 = (frost$core$Bit) {$tmp1496};
bool $tmp1498 = $tmp1497.value;
if ($tmp1498) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:471
frost$core$Int32 $tmp1499 = *(&local2);
frost$core$Char32 $tmp1500 = frost$core$Char32$init$frost$core$Int32($tmp1499);
return $tmp1500;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:473
frost$core$Char8 $tmp1501 = *(&local1);
uint8_t $tmp1502 = $tmp1501.value;
int64_t $tmp1503 = ((int64_t) $tmp1502) & 255u;
bool $tmp1504 = $tmp1503 < 224u;
frost$core$Bit $tmp1505 = (frost$core$Bit) {$tmp1504};
bool $tmp1506 = $tmp1505.value;
if ($tmp1506) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:474
frost$core$Int $tmp1507 = *(&local0);
frost$core$Int $tmp1508 = (frost$core$Int) {1u};
int64_t $tmp1509 = $tmp1507.value;
int64_t $tmp1510 = $tmp1508.value;
int64_t $tmp1511 = $tmp1509 + $tmp1510;
frost$core$Int $tmp1512 = (frost$core$Int) {$tmp1511};
frost$core$Int* $tmp1513 = &param0->_length;
frost$core$Int $tmp1514 = *$tmp1513;
int64_t $tmp1515 = $tmp1512.value;
int64_t $tmp1516 = $tmp1514.value;
bool $tmp1517 = $tmp1515 < $tmp1516;
frost$core$Bit $tmp1518 = (frost$core$Bit) {$tmp1517};
bool $tmp1519 = $tmp1518.value;
if ($tmp1519) goto block6; else goto block7;
block7:;
frost$core$Int $tmp1520 = (frost$core$Int) {474u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1521, $tmp1520);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:475
frost$core$Int32 $tmp1522 = *(&local2);
frost$core$Int32 $tmp1523 = (frost$core$Int32) {1984u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:475:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1524 = $tmp1522.value;
int32_t $tmp1525 = $tmp1523.value;
int32_t $tmp1526 = $tmp1524 & $tmp1525;
frost$core$Int32 $tmp1527 = (frost$core$Int32) {$tmp1526};
frost$core$Char8** $tmp1528 = &param0->data;
frost$core$Char8* $tmp1529 = *$tmp1528;
frost$core$Int $tmp1530 = *(&local0);
frost$core$Int64 $tmp1531 = frost$core$Int64$init$frost$core$Int($tmp1530);
frost$core$Int64 $tmp1532 = (frost$core$Int64) {1u};
int64_t $tmp1533 = $tmp1531.value;
int64_t $tmp1534 = $tmp1532.value;
int64_t $tmp1535 = $tmp1533 + $tmp1534;
frost$core$Int64 $tmp1536 = (frost$core$Int64) {$tmp1535};
int64_t $tmp1537 = $tmp1536.value;
frost$core$Char8 $tmp1538 = $tmp1529[$tmp1537];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:475:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp1539 = $tmp1538.value;
int32_t $tmp1540 = ((int32_t) $tmp1539) & 255u;
frost$core$Int32 $tmp1541 = (frost$core$Int32) {$tmp1540};
frost$core$Int32 $tmp1542 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:475:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1543 = $tmp1541.value;
int32_t $tmp1544 = $tmp1542.value;
int32_t $tmp1545 = $tmp1543 & $tmp1544;
frost$core$Int32 $tmp1546 = (frost$core$Int32) {$tmp1545};
int32_t $tmp1547 = $tmp1527.value;
int32_t $tmp1548 = $tmp1546.value;
int32_t $tmp1549 = $tmp1547 + $tmp1548;
frost$core$Int32 $tmp1550 = (frost$core$Int32) {$tmp1549};
*(&local2) = $tmp1550;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:476
frost$core$Int32 $tmp1551 = *(&local2);
frost$core$Char32 $tmp1552 = frost$core$Char32$init$frost$core$Int32($tmp1551);
return $tmp1552;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:478
frost$core$Char8 $tmp1553 = *(&local1);
uint8_t $tmp1554 = $tmp1553.value;
int64_t $tmp1555 = ((int64_t) $tmp1554) & 255u;
bool $tmp1556 = $tmp1555 < 240u;
frost$core$Bit $tmp1557 = (frost$core$Bit) {$tmp1556};
bool $tmp1558 = $tmp1557.value;
if ($tmp1558) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:479
frost$core$Int $tmp1559 = *(&local0);
frost$core$Int $tmp1560 = (frost$core$Int) {2u};
int64_t $tmp1561 = $tmp1559.value;
int64_t $tmp1562 = $tmp1560.value;
int64_t $tmp1563 = $tmp1561 + $tmp1562;
frost$core$Int $tmp1564 = (frost$core$Int) {$tmp1563};
frost$core$Int* $tmp1565 = &param0->_length;
frost$core$Int $tmp1566 = *$tmp1565;
int64_t $tmp1567 = $tmp1564.value;
int64_t $tmp1568 = $tmp1566.value;
bool $tmp1569 = $tmp1567 < $tmp1568;
frost$core$Bit $tmp1570 = (frost$core$Bit) {$tmp1569};
bool $tmp1571 = $tmp1570.value;
if ($tmp1571) goto block13; else goto block14;
block14:;
frost$core$Int $tmp1572 = (frost$core$Int) {479u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1573, $tmp1572);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:480
frost$core$Int32 $tmp1574 = *(&local2);
frost$core$Int32 $tmp1575 = (frost$core$Int32) {61440u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:480:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1576 = $tmp1574.value;
int32_t $tmp1577 = $tmp1575.value;
int32_t $tmp1578 = $tmp1576 & $tmp1577;
frost$core$Int32 $tmp1579 = (frost$core$Int32) {$tmp1578};
frost$core$Char8** $tmp1580 = &param0->data;
frost$core$Char8* $tmp1581 = *$tmp1580;
frost$core$Int $tmp1582 = *(&local0);
frost$core$Int64 $tmp1583 = frost$core$Int64$init$frost$core$Int($tmp1582);
frost$core$Int64 $tmp1584 = (frost$core$Int64) {1u};
int64_t $tmp1585 = $tmp1583.value;
int64_t $tmp1586 = $tmp1584.value;
int64_t $tmp1587 = $tmp1585 + $tmp1586;
frost$core$Int64 $tmp1588 = (frost$core$Int64) {$tmp1587};
int64_t $tmp1589 = $tmp1588.value;
frost$core$Char8 $tmp1590 = $tmp1581[$tmp1589];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:480:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp1591 = $tmp1590.value;
int32_t $tmp1592 = ((int32_t) $tmp1591) & 255u;
frost$core$Int32 $tmp1593 = (frost$core$Int32) {$tmp1592};
frost$core$Int32 $tmp1594 = (frost$core$Int32) {4032u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:480:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1595 = $tmp1593.value;
int32_t $tmp1596 = $tmp1594.value;
int32_t $tmp1597 = $tmp1595 & $tmp1596;
frost$core$Int32 $tmp1598 = (frost$core$Int32) {$tmp1597};
int32_t $tmp1599 = $tmp1579.value;
int32_t $tmp1600 = $tmp1598.value;
int32_t $tmp1601 = $tmp1599 + $tmp1600;
frost$core$Int32 $tmp1602 = (frost$core$Int32) {$tmp1601};
frost$core$Char8** $tmp1603 = &param0->data;
frost$core$Char8* $tmp1604 = *$tmp1603;
frost$core$Int $tmp1605 = *(&local0);
frost$core$Int64 $tmp1606 = frost$core$Int64$init$frost$core$Int($tmp1605);
frost$core$Int64 $tmp1607 = (frost$core$Int64) {2u};
int64_t $tmp1608 = $tmp1606.value;
int64_t $tmp1609 = $tmp1607.value;
int64_t $tmp1610 = $tmp1608 + $tmp1609;
frost$core$Int64 $tmp1611 = (frost$core$Int64) {$tmp1610};
int64_t $tmp1612 = $tmp1611.value;
frost$core$Char8 $tmp1613 = $tmp1604[$tmp1612];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:481:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp1614 = $tmp1613.value;
int32_t $tmp1615 = ((int32_t) $tmp1614) & 255u;
frost$core$Int32 $tmp1616 = (frost$core$Int32) {$tmp1615};
frost$core$Int32 $tmp1617 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:481:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1618 = $tmp1616.value;
int32_t $tmp1619 = $tmp1617.value;
int32_t $tmp1620 = $tmp1618 & $tmp1619;
frost$core$Int32 $tmp1621 = (frost$core$Int32) {$tmp1620};
int32_t $tmp1622 = $tmp1602.value;
int32_t $tmp1623 = $tmp1621.value;
int32_t $tmp1624 = $tmp1622 + $tmp1623;
frost$core$Int32 $tmp1625 = (frost$core$Int32) {$tmp1624};
*(&local2) = $tmp1625;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:482
frost$core$Int32 $tmp1626 = *(&local2);
frost$core$Char32 $tmp1627 = frost$core$Char32$init$frost$core$Int32($tmp1626);
return $tmp1627;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:484
frost$core$Int $tmp1628 = *(&local0);
frost$core$Int $tmp1629 = (frost$core$Int) {3u};
int64_t $tmp1630 = $tmp1628.value;
int64_t $tmp1631 = $tmp1629.value;
int64_t $tmp1632 = $tmp1630 + $tmp1631;
frost$core$Int $tmp1633 = (frost$core$Int) {$tmp1632};
frost$core$Int* $tmp1634 = &param0->_length;
frost$core$Int $tmp1635 = *$tmp1634;
int64_t $tmp1636 = $tmp1633.value;
int64_t $tmp1637 = $tmp1635.value;
bool $tmp1638 = $tmp1636 < $tmp1637;
frost$core$Bit $tmp1639 = (frost$core$Bit) {$tmp1638};
bool $tmp1640 = $tmp1639.value;
if ($tmp1640) goto block20; else goto block21;
block21:;
frost$core$Int $tmp1641 = (frost$core$Int) {484u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1642, $tmp1641);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:485
frost$core$Int32 $tmp1643 = *(&local2);
frost$core$Int32 $tmp1644 = (frost$core$Int32) {1835008u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:485:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1645 = $tmp1643.value;
int32_t $tmp1646 = $tmp1644.value;
int32_t $tmp1647 = $tmp1645 & $tmp1646;
frost$core$Int32 $tmp1648 = (frost$core$Int32) {$tmp1647};
frost$core$Char8** $tmp1649 = &param0->data;
frost$core$Char8* $tmp1650 = *$tmp1649;
frost$core$Int $tmp1651 = *(&local0);
frost$core$Int64 $tmp1652 = frost$core$Int64$init$frost$core$Int($tmp1651);
frost$core$Int64 $tmp1653 = (frost$core$Int64) {1u};
int64_t $tmp1654 = $tmp1652.value;
int64_t $tmp1655 = $tmp1653.value;
int64_t $tmp1656 = $tmp1654 + $tmp1655;
frost$core$Int64 $tmp1657 = (frost$core$Int64) {$tmp1656};
int64_t $tmp1658 = $tmp1657.value;
frost$core$Char8 $tmp1659 = $tmp1650[$tmp1658];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:485:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp1660 = $tmp1659.value;
int32_t $tmp1661 = ((int32_t) $tmp1660) & 255u;
frost$core$Int32 $tmp1662 = (frost$core$Int32) {$tmp1661};
frost$core$Int32 $tmp1663 = (frost$core$Int32) {258048u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:485:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1664 = $tmp1662.value;
int32_t $tmp1665 = $tmp1663.value;
int32_t $tmp1666 = $tmp1664 & $tmp1665;
frost$core$Int32 $tmp1667 = (frost$core$Int32) {$tmp1666};
int32_t $tmp1668 = $tmp1648.value;
int32_t $tmp1669 = $tmp1667.value;
int32_t $tmp1670 = $tmp1668 + $tmp1669;
frost$core$Int32 $tmp1671 = (frost$core$Int32) {$tmp1670};
frost$core$Char8** $tmp1672 = &param0->data;
frost$core$Char8* $tmp1673 = *$tmp1672;
frost$core$Int $tmp1674 = *(&local0);
frost$core$Int64 $tmp1675 = frost$core$Int64$init$frost$core$Int($tmp1674);
frost$core$Int64 $tmp1676 = (frost$core$Int64) {2u};
int64_t $tmp1677 = $tmp1675.value;
int64_t $tmp1678 = $tmp1676.value;
int64_t $tmp1679 = $tmp1677 + $tmp1678;
frost$core$Int64 $tmp1680 = (frost$core$Int64) {$tmp1679};
int64_t $tmp1681 = $tmp1680.value;
frost$core$Char8 $tmp1682 = $tmp1673[$tmp1681];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:486:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp1683 = $tmp1682.value;
int32_t $tmp1684 = ((int32_t) $tmp1683) & 255u;
frost$core$Int32 $tmp1685 = (frost$core$Int32) {$tmp1684};
frost$core$Int32 $tmp1686 = (frost$core$Int32) {4032u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:486:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1687 = $tmp1685.value;
int32_t $tmp1688 = $tmp1686.value;
int32_t $tmp1689 = $tmp1687 & $tmp1688;
frost$core$Int32 $tmp1690 = (frost$core$Int32) {$tmp1689};
int32_t $tmp1691 = $tmp1671.value;
int32_t $tmp1692 = $tmp1690.value;
int32_t $tmp1693 = $tmp1691 + $tmp1692;
frost$core$Int32 $tmp1694 = (frost$core$Int32) {$tmp1693};
frost$core$Char8** $tmp1695 = &param0->data;
frost$core$Char8* $tmp1696 = *$tmp1695;
frost$core$Int $tmp1697 = *(&local0);
frost$core$Int64 $tmp1698 = frost$core$Int64$init$frost$core$Int($tmp1697);
frost$core$Int64 $tmp1699 = (frost$core$Int64) {3u};
int64_t $tmp1700 = $tmp1698.value;
int64_t $tmp1701 = $tmp1699.value;
int64_t $tmp1702 = $tmp1700 + $tmp1701;
frost$core$Int64 $tmp1703 = (frost$core$Int64) {$tmp1702};
int64_t $tmp1704 = $tmp1703.value;
frost$core$Char8 $tmp1705 = $tmp1696[$tmp1704];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:487:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp1706 = $tmp1705.value;
int32_t $tmp1707 = ((int32_t) $tmp1706) & 255u;
frost$core$Int32 $tmp1708 = (frost$core$Int32) {$tmp1707};
frost$core$Int32 $tmp1709 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:487:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1710 = $tmp1708.value;
int32_t $tmp1711 = $tmp1709.value;
int32_t $tmp1712 = $tmp1710 & $tmp1711;
frost$core$Int32 $tmp1713 = (frost$core$Int32) {$tmp1712};
int32_t $tmp1714 = $tmp1694.value;
int32_t $tmp1715 = $tmp1713.value;
int32_t $tmp1716 = $tmp1714 + $tmp1715;
frost$core$Int32 $tmp1717 = (frost$core$Int32) {$tmp1716};
*(&local2) = $tmp1717;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:488
frost$core$Int32 $tmp1718 = *(&local2);
frost$core$Char32 $tmp1719 = frost$core$Char32$init$frost$core$Int32($tmp1718);
return $tmp1719;

}
frost$core$Char32 frost$core$MutableString$$IDX$frost$core$Int$R$frost$core$Char32(frost$core$MutableString* param0, frost$core$Int param1) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:497
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:497:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp1720 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp1721 = &(&local1)->value;
*$tmp1721 = $tmp1720;
frost$core$MutableString$Index $tmp1722 = *(&local1);
*(&local0) = $tmp1722;
frost$core$MutableString$Index $tmp1723 = *(&local0);
frost$core$MutableString$Index $tmp1724 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index(param0, $tmp1723, param1);
frost$core$Char32 $tmp1725 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(param0, $tmp1724);
return $tmp1725;

}
void frost$core$MutableString$$IDXEQ$frost$core$MutableString$Index$frost$core$Char32(frost$core$MutableString* param0, frost$core$MutableString$Index param1, frost$core$Char32 param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:502
frost$core$Bit $tmp1726 = (frost$core$Bit) {true};
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1727 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit(param1, param1, $tmp1726);
frost$core$Char32$wrapper* $tmp1728;
$tmp1728 = (frost$core$Char32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$Char32$wrapperclass);
$tmp1728->value = param2;
$fn1730 $tmp1729 = ($fn1730) ((frost$core$Object*) $tmp1728)->$class->vtable[0];
frost$core$String* $tmp1731 = $tmp1729(((frost$core$Object*) $tmp1728));
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1727, $tmp1731);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$MutableString$Index$GT param1, frost$core$String* param2) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Int local3;
frost$core$Int local4;
frost$core$Int local5;
frost$core$Int local6;
frost$core$MutableString$Index $tmp1732 = param1.max;
frost$core$MutableString$Index$wrapper* $tmp1733;
$tmp1733 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1733->value = $tmp1732;
frost$core$MutableString$Index $tmp1734 = param1.min;
frost$core$MutableString$Index$wrapper* $tmp1735;
$tmp1735 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1735->value = $tmp1734;
ITable* $tmp1736 = ((frost$core$Comparable*) $tmp1733)->$class->itable;
while ($tmp1736->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1736 = $tmp1736->next;
}
$fn1738 $tmp1737 = $tmp1736->methods[2];
frost$core$Bit $tmp1739 = $tmp1737(((frost$core$Comparable*) $tmp1733), ((frost$core$Comparable*) $tmp1735));
bool $tmp1740 = $tmp1739.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1735)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1733)));
if ($tmp1740) goto block3; else goto block2;
block3:;
frost$core$Bit $tmp1741 = param1.inclusive;
bool $tmp1742 = $tmp1741.value;
if ($tmp1742) goto block6; else goto block4;
block6:;
frost$core$MutableString$Index $tmp1743 = param1.min;
frost$core$Int $tmp1744 = $tmp1743.value;
frost$core$Int* $tmp1745 = &param0->_length;
frost$core$Int $tmp1746 = *$tmp1745;
int64_t $tmp1747 = $tmp1744.value;
int64_t $tmp1748 = $tmp1746.value;
bool $tmp1749 = $tmp1747 < $tmp1748;
frost$core$Bit $tmp1750 = (frost$core$Bit) {$tmp1749};
bool $tmp1751 = $tmp1750.value;
if ($tmp1751) goto block5; else goto block4;
block5:;
frost$core$MutableString$Index $tmp1752 = param1.max;
frost$core$Int $tmp1753 = $tmp1752.value;
frost$core$Int* $tmp1754 = &param0->_length;
frost$core$Int $tmp1755 = *$tmp1754;
int64_t $tmp1756 = $tmp1753.value;
int64_t $tmp1757 = $tmp1755.value;
bool $tmp1758 = $tmp1756 < $tmp1757;
frost$core$Bit $tmp1759 = (frost$core$Bit) {$tmp1758};
bool $tmp1760 = $tmp1759.value;
if ($tmp1760) goto block1; else goto block4;
block4:;
frost$core$Bit $tmp1761 = param1.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MutableString.frost:508:11
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1762 = $tmp1761.value;
bool $tmp1763 = !$tmp1762;
frost$core$Bit $tmp1764 = (frost$core$Bit) {$tmp1763};
bool $tmp1765 = $tmp1764.value;
if ($tmp1765) goto block8; else goto block2;
block8:;
frost$core$MutableString$Index $tmp1766 = param1.min;
frost$core$Int $tmp1767 = $tmp1766.value;
frost$core$Int* $tmp1768 = &param0->_length;
frost$core$Int $tmp1769 = *$tmp1768;
int64_t $tmp1770 = $tmp1767.value;
int64_t $tmp1771 = $tmp1769.value;
bool $tmp1772 = $tmp1770 <= $tmp1771;
frost$core$Bit $tmp1773 = (frost$core$Bit) {$tmp1772};
bool $tmp1774 = $tmp1773.value;
if ($tmp1774) goto block7; else goto block2;
block7:;
frost$core$MutableString$Index $tmp1775 = param1.max;
frost$core$Int $tmp1776 = $tmp1775.value;
frost$core$Int* $tmp1777 = &param0->_length;
frost$core$Int $tmp1778 = *$tmp1777;
int64_t $tmp1779 = $tmp1776.value;
int64_t $tmp1780 = $tmp1778.value;
bool $tmp1781 = $tmp1779 <= $tmp1780;
frost$core$Bit $tmp1782 = (frost$core$Bit) {$tmp1781};
bool $tmp1783 = $tmp1782.value;
if ($tmp1783) goto block1; else goto block2;
block2:;
frost$core$Int $tmp1784 = (frost$core$Int) {509u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1785, $tmp1784, &$s1786);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:510
frost$core$MutableString$Index $tmp1787 = param1.max;
frost$core$Int $tmp1788 = $tmp1787.value;
*(&local0) = $tmp1788;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:511
frost$core$Bit $tmp1789 = param1.inclusive;
bool $tmp1790 = $tmp1789.value;
if ($tmp1790) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:512
frost$core$Int $tmp1791 = *(&local0);
frost$core$Int $tmp1792 = (frost$core$Int) {1u};
int64_t $tmp1793 = $tmp1791.value;
int64_t $tmp1794 = $tmp1792.value;
int64_t $tmp1795 = $tmp1793 + $tmp1794;
frost$core$Int $tmp1796 = (frost$core$Int) {$tmp1795};
*(&local0) = $tmp1796;
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:514
frost$core$Int $tmp1797 = *(&local0);
frost$core$MutableString$Index $tmp1798 = param1.min;
frost$core$Int $tmp1799 = $tmp1798.value;
int64_t $tmp1800 = $tmp1797.value;
int64_t $tmp1801 = $tmp1799.value;
int64_t $tmp1802 = $tmp1800 - $tmp1801;
frost$core$Int $tmp1803 = (frost$core$Int) {$tmp1802};
*(&local1) = $tmp1803;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:515
frost$core$Int* $tmp1804 = &param0->_length;
frost$core$Int $tmp1805 = *$tmp1804;
frost$core$Int $tmp1806 = *(&local1);
int64_t $tmp1807 = $tmp1805.value;
int64_t $tmp1808 = $tmp1806.value;
int64_t $tmp1809 = $tmp1807 - $tmp1808;
frost$core$Int $tmp1810 = (frost$core$Int) {$tmp1809};
frost$core$Int* $tmp1811 = &param2->_length;
frost$core$Int $tmp1812 = *$tmp1811;
int64_t $tmp1813 = $tmp1810.value;
int64_t $tmp1814 = $tmp1812.value;
int64_t $tmp1815 = $tmp1813 + $tmp1814;
frost$core$Int $tmp1816 = (frost$core$Int) {$tmp1815};
*(&local2) = $tmp1816;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:516
frost$core$Int $tmp1817 = *(&local2);
frost$core$MutableString$ensureCapacity$frost$core$Int(param0, $tmp1817);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:517
frost$core$Int* $tmp1818 = &param2->_length;
frost$core$Int $tmp1819 = *$tmp1818;
frost$core$Int $tmp1820 = *(&local1);
int64_t $tmp1821 = $tmp1819.value;
int64_t $tmp1822 = $tmp1820.value;
int64_t $tmp1823 = $tmp1821 - $tmp1822;
frost$core$Int $tmp1824 = (frost$core$Int) {$tmp1823};
*(&local3) = $tmp1824;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:518
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int from MutableString.frost:518:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:492
frost$core$Int* $tmp1825 = &param2->_length;
frost$core$Int $tmp1826 = *$tmp1825;
frost$core$Int $tmp1827 = *(&local1);
int64_t $tmp1828 = $tmp1826.value;
int64_t $tmp1829 = $tmp1827.value;
bool $tmp1830 = $tmp1828 > $tmp1829;
frost$core$Bit $tmp1831 = (frost$core$Bit) {$tmp1830};
bool $tmp1832 = $tmp1831.value;
if ($tmp1832) goto block12; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:519
frost$core$Int* $tmp1833 = &param0->_length;
frost$core$Int $tmp1834 = *$tmp1833;
frost$core$Int $tmp1835 = (frost$core$Int) {1u};
int64_t $tmp1836 = $tmp1834.value;
int64_t $tmp1837 = $tmp1835.value;
int64_t $tmp1838 = $tmp1836 - $tmp1837;
frost$core$Int $tmp1839 = (frost$core$Int) {$tmp1838};
frost$core$Int $tmp1840 = *(&local0);
frost$core$Int $tmp1841 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp1842 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp1843 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1839, $tmp1840, $tmp1841, $tmp1842);
frost$core$Int $tmp1844 = $tmp1843.start;
*(&local4) = $tmp1844;
frost$core$Int $tmp1845 = $tmp1843.end;
frost$core$Int $tmp1846 = $tmp1843.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from MutableString.frost:519:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp1847 = $tmp1846.value;
int64_t $tmp1848 = -$tmp1847;
frost$core$Int $tmp1849 = (frost$core$Int) {$tmp1848};
frost$core$Bit $tmp1850 = $tmp1843.inclusive;
bool $tmp1851 = $tmp1850.value;
frost$core$Int $tmp1852 = (frost$core$Int) {0u};
int64_t $tmp1853 = $tmp1846.value;
int64_t $tmp1854 = $tmp1852.value;
bool $tmp1855 = $tmp1853 >= $tmp1854;
frost$core$Bit $tmp1856 = (frost$core$Bit) {$tmp1855};
bool $tmp1857 = $tmp1856.value;
if ($tmp1857) goto block20; else goto block21;
block20:;
if ($tmp1851) goto block22; else goto block23;
block22:;
int64_t $tmp1858 = $tmp1844.value;
int64_t $tmp1859 = $tmp1845.value;
bool $tmp1860 = $tmp1858 <= $tmp1859;
frost$core$Bit $tmp1861 = (frost$core$Bit) {$tmp1860};
bool $tmp1862 = $tmp1861.value;
if ($tmp1862) goto block17; else goto block18;
block23:;
int64_t $tmp1863 = $tmp1844.value;
int64_t $tmp1864 = $tmp1845.value;
bool $tmp1865 = $tmp1863 < $tmp1864;
frost$core$Bit $tmp1866 = (frost$core$Bit) {$tmp1865};
bool $tmp1867 = $tmp1866.value;
if ($tmp1867) goto block17; else goto block18;
block21:;
if ($tmp1851) goto block24; else goto block25;
block24:;
int64_t $tmp1868 = $tmp1844.value;
int64_t $tmp1869 = $tmp1845.value;
bool $tmp1870 = $tmp1868 >= $tmp1869;
frost$core$Bit $tmp1871 = (frost$core$Bit) {$tmp1870};
bool $tmp1872 = $tmp1871.value;
if ($tmp1872) goto block17; else goto block18;
block25:;
int64_t $tmp1873 = $tmp1844.value;
int64_t $tmp1874 = $tmp1845.value;
bool $tmp1875 = $tmp1873 > $tmp1874;
frost$core$Bit $tmp1876 = (frost$core$Bit) {$tmp1875};
bool $tmp1877 = $tmp1876.value;
if ($tmp1877) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:520
frost$core$Char8** $tmp1878 = &param0->data;
frost$core$Char8* $tmp1879 = *$tmp1878;
frost$core$Int $tmp1880 = *(&local4);
frost$core$Int $tmp1881 = *(&local3);
int64_t $tmp1882 = $tmp1880.value;
int64_t $tmp1883 = $tmp1881.value;
int64_t $tmp1884 = $tmp1882 + $tmp1883;
frost$core$Int $tmp1885 = (frost$core$Int) {$tmp1884};
frost$core$Int64 $tmp1886 = frost$core$Int64$init$frost$core$Int($tmp1885);
frost$core$Char8** $tmp1887 = &param0->data;
frost$core$Char8* $tmp1888 = *$tmp1887;
frost$core$Int $tmp1889 = *(&local4);
frost$core$Int64 $tmp1890 = frost$core$Int64$init$frost$core$Int($tmp1889);
int64_t $tmp1891 = $tmp1890.value;
frost$core$Char8 $tmp1892 = $tmp1888[$tmp1891];
int64_t $tmp1893 = $tmp1886.value;
$tmp1879[$tmp1893] = $tmp1892;
frost$core$Int $tmp1894 = *(&local4);
if ($tmp1857) goto block27; else goto block28;
block27:;
int64_t $tmp1895 = $tmp1845.value;
int64_t $tmp1896 = $tmp1894.value;
int64_t $tmp1897 = $tmp1895 - $tmp1896;
frost$core$Int $tmp1898 = (frost$core$Int) {$tmp1897};
if ($tmp1851) goto block29; else goto block30;
block29:;
int64_t $tmp1899 = $tmp1898.value;
int64_t $tmp1900 = $tmp1846.value;
bool $tmp1901 = $tmp1899 >= $tmp1900;
frost$core$Bit $tmp1902 = (frost$core$Bit) {$tmp1901};
bool $tmp1903 = $tmp1902.value;
if ($tmp1903) goto block26; else goto block18;
block30:;
int64_t $tmp1904 = $tmp1898.value;
int64_t $tmp1905 = $tmp1846.value;
bool $tmp1906 = $tmp1904 > $tmp1905;
frost$core$Bit $tmp1907 = (frost$core$Bit) {$tmp1906};
bool $tmp1908 = $tmp1907.value;
if ($tmp1908) goto block26; else goto block18;
block28:;
int64_t $tmp1909 = $tmp1894.value;
int64_t $tmp1910 = $tmp1845.value;
int64_t $tmp1911 = $tmp1909 - $tmp1910;
frost$core$Int $tmp1912 = (frost$core$Int) {$tmp1911};
if ($tmp1851) goto block31; else goto block32;
block31:;
int64_t $tmp1913 = $tmp1912.value;
int64_t $tmp1914 = $tmp1849.value;
bool $tmp1915 = $tmp1913 >= $tmp1914;
frost$core$Bit $tmp1916 = (frost$core$Bit) {$tmp1915};
bool $tmp1917 = $tmp1916.value;
if ($tmp1917) goto block26; else goto block18;
block32:;
int64_t $tmp1918 = $tmp1912.value;
int64_t $tmp1919 = $tmp1849.value;
bool $tmp1920 = $tmp1918 > $tmp1919;
frost$core$Bit $tmp1921 = (frost$core$Bit) {$tmp1920};
bool $tmp1922 = $tmp1921.value;
if ($tmp1922) goto block26; else goto block18;
block26:;
int64_t $tmp1923 = $tmp1894.value;
int64_t $tmp1924 = $tmp1846.value;
int64_t $tmp1925 = $tmp1923 + $tmp1924;
frost$core$Int $tmp1926 = (frost$core$Int) {$tmp1925};
*(&local4) = $tmp1926;
goto block17;
block18:;
goto block13;
block14:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:524
frost$core$Int $tmp1927 = *(&local0);
frost$core$Int* $tmp1928 = &param0->_length;
frost$core$Int $tmp1929 = *$tmp1928;
frost$core$Bit $tmp1930 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1931 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1927, $tmp1929, $tmp1930);
frost$core$Int $tmp1932 = $tmp1931.min;
*(&local5) = $tmp1932;
frost$core$Int $tmp1933 = $tmp1931.max;
frost$core$Bit $tmp1934 = $tmp1931.inclusive;
bool $tmp1935 = $tmp1934.value;
frost$core$Int $tmp1936 = (frost$core$Int) {1u};
if ($tmp1935) goto block36; else goto block37;
block36:;
int64_t $tmp1937 = $tmp1932.value;
int64_t $tmp1938 = $tmp1933.value;
bool $tmp1939 = $tmp1937 <= $tmp1938;
frost$core$Bit $tmp1940 = (frost$core$Bit) {$tmp1939};
bool $tmp1941 = $tmp1940.value;
if ($tmp1941) goto block33; else goto block34;
block37:;
int64_t $tmp1942 = $tmp1932.value;
int64_t $tmp1943 = $tmp1933.value;
bool $tmp1944 = $tmp1942 < $tmp1943;
frost$core$Bit $tmp1945 = (frost$core$Bit) {$tmp1944};
bool $tmp1946 = $tmp1945.value;
if ($tmp1946) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:525
frost$core$Char8** $tmp1947 = &param0->data;
frost$core$Char8* $tmp1948 = *$tmp1947;
frost$core$Int $tmp1949 = *(&local5);
frost$core$Int $tmp1950 = *(&local3);
int64_t $tmp1951 = $tmp1949.value;
int64_t $tmp1952 = $tmp1950.value;
int64_t $tmp1953 = $tmp1951 + $tmp1952;
frost$core$Int $tmp1954 = (frost$core$Int) {$tmp1953};
frost$core$Int64 $tmp1955 = frost$core$Int64$init$frost$core$Int($tmp1954);
frost$core$Char8** $tmp1956 = &param0->data;
frost$core$Char8* $tmp1957 = *$tmp1956;
frost$core$Int $tmp1958 = *(&local5);
frost$core$Int64 $tmp1959 = frost$core$Int64$init$frost$core$Int($tmp1958);
int64_t $tmp1960 = $tmp1959.value;
frost$core$Char8 $tmp1961 = $tmp1957[$tmp1960];
int64_t $tmp1962 = $tmp1955.value;
$tmp1948[$tmp1962] = $tmp1961;
frost$core$Int $tmp1963 = *(&local5);
int64_t $tmp1964 = $tmp1933.value;
int64_t $tmp1965 = $tmp1963.value;
int64_t $tmp1966 = $tmp1964 - $tmp1965;
frost$core$Int $tmp1967 = (frost$core$Int) {$tmp1966};
if ($tmp1935) goto block39; else goto block40;
block39:;
int64_t $tmp1968 = $tmp1967.value;
int64_t $tmp1969 = $tmp1936.value;
bool $tmp1970 = $tmp1968 >= $tmp1969;
frost$core$Bit $tmp1971 = (frost$core$Bit) {$tmp1970};
bool $tmp1972 = $tmp1971.value;
if ($tmp1972) goto block38; else goto block34;
block40:;
int64_t $tmp1973 = $tmp1967.value;
int64_t $tmp1974 = $tmp1936.value;
bool $tmp1975 = $tmp1973 > $tmp1974;
frost$core$Bit $tmp1976 = (frost$core$Bit) {$tmp1975};
bool $tmp1977 = $tmp1976.value;
if ($tmp1977) goto block38; else goto block34;
block38:;
int64_t $tmp1978 = $tmp1963.value;
int64_t $tmp1979 = $tmp1936.value;
int64_t $tmp1980 = $tmp1978 + $tmp1979;
frost$core$Int $tmp1981 = (frost$core$Int) {$tmp1980};
*(&local5) = $tmp1981;
goto block33;
block34:;
goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:528
frost$core$Int $tmp1982 = (frost$core$Int) {0u};
frost$core$Int* $tmp1983 = &param2->_length;
frost$core$Int $tmp1984 = *$tmp1983;
frost$core$Bit $tmp1985 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1986 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1982, $tmp1984, $tmp1985);
frost$core$Int $tmp1987 = $tmp1986.min;
*(&local6) = $tmp1987;
frost$core$Int $tmp1988 = $tmp1986.max;
frost$core$Bit $tmp1989 = $tmp1986.inclusive;
bool $tmp1990 = $tmp1989.value;
frost$core$Int $tmp1991 = (frost$core$Int) {1u};
if ($tmp1990) goto block44; else goto block45;
block44:;
int64_t $tmp1992 = $tmp1987.value;
int64_t $tmp1993 = $tmp1988.value;
bool $tmp1994 = $tmp1992 <= $tmp1993;
frost$core$Bit $tmp1995 = (frost$core$Bit) {$tmp1994};
bool $tmp1996 = $tmp1995.value;
if ($tmp1996) goto block41; else goto block42;
block45:;
int64_t $tmp1997 = $tmp1987.value;
int64_t $tmp1998 = $tmp1988.value;
bool $tmp1999 = $tmp1997 < $tmp1998;
frost$core$Bit $tmp2000 = (frost$core$Bit) {$tmp1999};
bool $tmp2001 = $tmp2000.value;
if ($tmp2001) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:529
frost$core$Char8** $tmp2002 = &param0->data;
frost$core$Char8* $tmp2003 = *$tmp2002;
frost$core$MutableString$Index $tmp2004 = param1.min;
frost$core$Int $tmp2005 = $tmp2004.value;
frost$core$Int $tmp2006 = *(&local6);
int64_t $tmp2007 = $tmp2005.value;
int64_t $tmp2008 = $tmp2006.value;
int64_t $tmp2009 = $tmp2007 + $tmp2008;
frost$core$Int $tmp2010 = (frost$core$Int) {$tmp2009};
frost$core$Int64 $tmp2011 = frost$core$Int64$init$frost$core$Int($tmp2010);
frost$core$Char8** $tmp2012 = &param2->data;
frost$core$Char8* $tmp2013 = *$tmp2012;
frost$core$Int $tmp2014 = *(&local6);
frost$core$Int64 $tmp2015 = frost$core$Int64$init$frost$core$Int($tmp2014);
int64_t $tmp2016 = $tmp2015.value;
frost$core$Char8 $tmp2017 = $tmp2013[$tmp2016];
int64_t $tmp2018 = $tmp2011.value;
$tmp2003[$tmp2018] = $tmp2017;
frost$core$Int $tmp2019 = *(&local6);
int64_t $tmp2020 = $tmp1988.value;
int64_t $tmp2021 = $tmp2019.value;
int64_t $tmp2022 = $tmp2020 - $tmp2021;
frost$core$Int $tmp2023 = (frost$core$Int) {$tmp2022};
if ($tmp1990) goto block47; else goto block48;
block47:;
int64_t $tmp2024 = $tmp2023.value;
int64_t $tmp2025 = $tmp1991.value;
bool $tmp2026 = $tmp2024 >= $tmp2025;
frost$core$Bit $tmp2027 = (frost$core$Bit) {$tmp2026};
bool $tmp2028 = $tmp2027.value;
if ($tmp2028) goto block46; else goto block42;
block48:;
int64_t $tmp2029 = $tmp2023.value;
int64_t $tmp2030 = $tmp1991.value;
bool $tmp2031 = $tmp2029 > $tmp2030;
frost$core$Bit $tmp2032 = (frost$core$Bit) {$tmp2031};
bool $tmp2033 = $tmp2032.value;
if ($tmp2033) goto block46; else goto block42;
block46:;
int64_t $tmp2034 = $tmp2019.value;
int64_t $tmp2035 = $tmp1991.value;
int64_t $tmp2036 = $tmp2034 + $tmp2035;
frost$core$Int $tmp2037 = (frost$core$Int) {$tmp2036};
*(&local6) = $tmp2037;
goto block41;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:531
frost$core$Int $tmp2038 = *(&local2);
frost$core$Int* $tmp2039 = &param0->_length;
*$tmp2039 = $tmp2038;
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$Int$GT param1, frost$core$String* param2) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:536
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:536:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp2040 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2041 = &(&local1)->value;
*$tmp2041 = $tmp2040;
frost$core$MutableString$Index $tmp2042 = *(&local1);
*(&local0) = $tmp2042;
frost$core$MutableString$Index $tmp2043 = *(&local0);
frost$core$Int $tmp2044 = param1.min;
frost$core$MutableString$Index $tmp2045 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index(param0, $tmp2043, $tmp2044);
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:536:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp2046 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2047 = &(&local3)->value;
*$tmp2047 = $tmp2046;
frost$core$MutableString$Index $tmp2048 = *(&local3);
*(&local2) = $tmp2048;
frost$core$MutableString$Index $tmp2049 = *(&local2);
frost$core$Int $tmp2050 = param1.max;
frost$core$MutableString$Index $tmp2051 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index(param0, $tmp2049, $tmp2050);
frost$core$Bit $tmp2052 = param1.inclusive;
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp2053 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp2045, $tmp2051, $tmp2052);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp2053, param2);
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$MutableString$Index$Q$GT param1, frost$core$String* param2) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
frost$core$Bit local3;
frost$core$MutableString$Index local4;
frost$core$MutableString$Index local5;
frost$core$MutableString$Index local6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:542
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:543
frost$core$MutableString$Index$nullable $tmp2054 = param1.min;
frost$core$Bit $tmp2055 = (frost$core$Bit) {$tmp2054.nonnull};
bool $tmp2056 = $tmp2055.value;
if ($tmp2056) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:544
frost$core$MutableString$Index$nullable $tmp2057 = param1.min;
*(&local0) = ((frost$core$MutableString$Index) $tmp2057.value);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:547
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:547:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp2058 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2059 = &(&local2)->value;
*$tmp2059 = $tmp2058;
frost$core$MutableString$Index $tmp2060 = *(&local2);
*(&local1) = $tmp2060;
frost$core$MutableString$Index $tmp2061 = *(&local1);
*(&local0) = $tmp2061;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:549
frost$core$Bit $tmp2062 = param1.inclusive;
*(&local3) = $tmp2062;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:550
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:551
frost$core$MutableString$Index$nullable $tmp2063 = param1.max;
frost$core$Bit $tmp2064 = (frost$core$Bit) {$tmp2063.nonnull};
bool $tmp2065 = $tmp2064.value;
if ($tmp2065) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:552
frost$core$MutableString$Index$nullable $tmp2066 = param1.max;
*(&local4) = ((frost$core$MutableString$Index) $tmp2066.value);
goto block7;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:555
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:555:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:187
frost$core$Int* $tmp2067 = &param0->_length;
frost$core$Int $tmp2068 = *$tmp2067;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2069 = &(&local6)->value;
*$tmp2069 = $tmp2068;
frost$core$MutableString$Index $tmp2070 = *(&local6);
*(&local5) = $tmp2070;
frost$core$MutableString$Index $tmp2071 = *(&local5);
*(&local4) = $tmp2071;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:556
frost$core$Bit $tmp2072 = (frost$core$Bit) {false};
*(&local3) = $tmp2072;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:558
frost$core$MutableString$Index $tmp2073 = *(&local0);
frost$core$MutableString$Index $tmp2074 = *(&local4);
frost$core$Bit $tmp2075 = *(&local3);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp2076 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp2073, $tmp2074, $tmp2075);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp2076, param2);
return;

}
void frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$Int$Q$GT$frost$core$String(frost$core$MutableString* param0, frost$core$Range$LTfrost$core$Int$Q$GT param1, frost$core$String* param2) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index local3;
frost$core$MutableString$Index local4;
frost$core$Bit local5;
frost$core$MutableString$Index local6;
frost$core$MutableString$Index local7;
frost$core$MutableString$Index local8;
frost$core$MutableString$Index local9;
frost$core$MutableString$Index local10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:563
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:564
frost$core$Int$nullable $tmp2077 = param1.min;
frost$core$Bit $tmp2078 = (frost$core$Bit) {$tmp2077.nonnull};
bool $tmp2079 = $tmp2078.value;
if ($tmp2079) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:565
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:565:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp2080 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2081 = &(&local2)->value;
*$tmp2081 = $tmp2080;
frost$core$MutableString$Index $tmp2082 = *(&local2);
*(&local1) = $tmp2082;
frost$core$MutableString$Index $tmp2083 = *(&local1);
frost$core$Int$nullable $tmp2084 = param1.min;
frost$core$MutableString$Index $tmp2085 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index(param0, $tmp2083, ((frost$core$Int) $tmp2084.value));
*(&local0) = $tmp2085;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:568
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:568:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp2086 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2087 = &(&local4)->value;
*$tmp2087 = $tmp2086;
frost$core$MutableString$Index $tmp2088 = *(&local4);
*(&local3) = $tmp2088;
frost$core$MutableString$Index $tmp2089 = *(&local3);
*(&local0) = $tmp2089;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:570
frost$core$Bit $tmp2090 = param1.inclusive;
*(&local5) = $tmp2090;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:571
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:572
frost$core$Int$nullable $tmp2091 = param1.max;
frost$core$Bit $tmp2092 = (frost$core$Bit) {$tmp2091.nonnull};
bool $tmp2093 = $tmp2092.value;
if ($tmp2093) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:573
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:573:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp2094 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2095 = &(&local8)->value;
*$tmp2095 = $tmp2094;
frost$core$MutableString$Index $tmp2096 = *(&local8);
*(&local7) = $tmp2096;
frost$core$MutableString$Index $tmp2097 = *(&local7);
frost$core$Int$nullable $tmp2098 = param1.max;
frost$core$MutableString$Index $tmp2099 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index(param0, $tmp2097, ((frost$core$Int) $tmp2098.value));
*(&local6) = $tmp2099;
goto block9;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:576
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:576:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:187
frost$core$Int* $tmp2100 = &param0->_length;
frost$core$Int $tmp2101 = *$tmp2100;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2102 = &(&local10)->value;
*$tmp2102 = $tmp2101;
frost$core$MutableString$Index $tmp2103 = *(&local10);
*(&local9) = $tmp2103;
frost$core$MutableString$Index $tmp2104 = *(&local9);
*(&local6) = $tmp2104;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:577
frost$core$Bit $tmp2105 = (frost$core$Bit) {false};
*(&local5) = $tmp2105;
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:579
frost$core$MutableString$Index $tmp2106 = *(&local0);
frost$core$MutableString$Index $tmp2107 = *(&local6);
frost$core$Bit $tmp2108 = *(&local5);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp2109 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp2106, $tmp2107, $tmp2108);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp2109, param2);
return;

}
void frost$core$MutableString$replace$frost$core$String$frost$core$String(frost$core$MutableString* param0, frost$core$String* param1, frost$core$String* param2) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index$nullable local3;
frost$core$MutableString$Index local4;
frost$core$MutableString$Index local5;
frost$core$Int local6;
frost$core$MutableString$Index local7;
frost$core$MutableString$Index local8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:584
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:584:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp2110 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2111 = &(&local1)->value;
*$tmp2111 = $tmp2110;
frost$core$MutableString$Index $tmp2112 = *(&local1);
*(&local0) = $tmp2112;
frost$core$MutableString$Index $tmp2113 = *(&local0);
*(&local2) = $tmp2113;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:585
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:586
frost$core$MutableString$Index $tmp2114 = *(&local2);
frost$core$MutableString$Index$nullable $tmp2115 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp2114);
*(&local3) = $tmp2115;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:587
frost$core$MutableString$Index$nullable $tmp2116 = *(&local3);
frost$core$Bit $tmp2117 = (frost$core$Bit) {!$tmp2116.nonnull};
bool $tmp2118 = $tmp2117.value;
if ($tmp2118) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:588
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:590
frost$core$MutableString$Index$nullable $tmp2119 = *(&local3);
frost$core$MutableString$Index$nullable $tmp2120 = *(&local3);
frost$core$Int $tmp2121 = ((frost$core$MutableString$Index) $tmp2120.value).value;
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int from MutableString.frost:590:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:492
frost$core$Int* $tmp2122 = &param1->_length;
frost$core$Int $tmp2123 = *$tmp2122;
int64_t $tmp2124 = $tmp2121.value;
int64_t $tmp2125 = $tmp2123.value;
int64_t $tmp2126 = $tmp2124 + $tmp2125;
frost$core$Int $tmp2127 = (frost$core$Int) {$tmp2126};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:590:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2128 = &(&local5)->value;
*$tmp2128 = $tmp2127;
frost$core$MutableString$Index $tmp2129 = *(&local5);
*(&local4) = $tmp2129;
frost$core$MutableString$Index $tmp2130 = *(&local4);
frost$core$Bit $tmp2131 = (frost$core$Bit) {((frost$core$MutableString$Index$nullable) { $tmp2130, true }).nonnull};
bool $tmp2132 = $tmp2131.value;
if ($tmp2132) goto block9; else goto block10;
block10:;
frost$core$Int $tmp2133 = (frost$core$Int) {590u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2134, $tmp2133, &$s2135);
abort(); // unreachable
block9:;
frost$core$Bit $tmp2136 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp2137 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit($tmp2119, ((frost$core$MutableString$Index$nullable) { ((frost$core$MutableString$Index) ((frost$core$MutableString$Index$nullable) { $tmp2130, true }).value), true }), $tmp2136);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param0, $tmp2137, param2);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:591
frost$core$MutableString$Index$nullable $tmp2138 = *(&local3);
frost$core$Int $tmp2139 = ((frost$core$MutableString$Index) $tmp2138.value).value;
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int from MutableString.frost:591:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:492
frost$core$Int* $tmp2140 = &param2->_length;
frost$core$Int $tmp2141 = *$tmp2140;
frost$core$Int $tmp2142 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from MutableString.frost:591:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
int64_t $tmp2143 = $tmp2141.value;
int64_t $tmp2144 = $tmp2142.value;
bool $tmp2145 = $tmp2143 > $tmp2144;
frost$core$Bit $tmp2146 = (frost$core$Bit) {$tmp2145};
bool $tmp2147 = $tmp2146.value;
if ($tmp2147) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
int64_t $tmp2148 = $tmp2141.value;
frost$core$Int $tmp2149 = (frost$core$Int) {$tmp2148};
*(&local6) = $tmp2149;
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
int64_t $tmp2150 = $tmp2142.value;
frost$core$Int $tmp2151 = (frost$core$Int) {$tmp2150};
*(&local6) = $tmp2151;
goto block12;
block12:;
frost$core$Int $tmp2152 = *(&local6);
int64_t $tmp2153 = $tmp2139.value;
int64_t $tmp2154 = $tmp2152.value;
int64_t $tmp2155 = $tmp2153 + $tmp2154;
frost$core$Int $tmp2156 = (frost$core$Int) {$tmp2155};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:591:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2157 = &(&local8)->value;
*$tmp2157 = $tmp2156;
frost$core$MutableString$Index $tmp2158 = *(&local8);
*(&local7) = $tmp2158;
frost$core$MutableString$Index $tmp2159 = *(&local7);
*(&local2) = $tmp2159;
goto block3;

}
void frost$core$MutableString$ensureCapacity$frost$core$Int(frost$core$MutableString* param0, frost$core$Int param1) {

frost$core$Int local0;
frost$core$Int* $tmp2160 = &param0->maxLength;
frost$core$Int $tmp2161 = *$tmp2160;
frost$core$Int $tmp2162 = (frost$core$Int) {0u};
int64_t $tmp2163 = $tmp2161.value;
int64_t $tmp2164 = $tmp2162.value;
bool $tmp2165 = $tmp2163 > $tmp2164;
frost$core$Bit $tmp2166 = (frost$core$Bit) {$tmp2165};
bool $tmp2167 = $tmp2166.value;
if ($tmp2167) goto block1; else goto block2;
block2:;
frost$core$Int $tmp2168 = (frost$core$Int) {598u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2169, $tmp2168, &$s2170);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:599
frost$core$Int* $tmp2171 = &param0->maxLength;
frost$core$Int $tmp2172 = *$tmp2171;
int64_t $tmp2173 = $tmp2172.value;
int64_t $tmp2174 = param1.value;
bool $tmp2175 = $tmp2173 >= $tmp2174;
frost$core$Bit $tmp2176 = (frost$core$Bit) {$tmp2175};
bool $tmp2177 = $tmp2176.value;
if ($tmp2177) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:600
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:602
frost$core$Int* $tmp2178 = &param0->maxLength;
frost$core$Int $tmp2179 = *$tmp2178;
*(&local0) = $tmp2179;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:603
goto block5;
block5:;
frost$core$Int* $tmp2180 = &param0->maxLength;
frost$core$Int $tmp2181 = *$tmp2180;
int64_t $tmp2182 = $tmp2181.value;
int64_t $tmp2183 = param1.value;
bool $tmp2184 = $tmp2182 < $tmp2183;
frost$core$Bit $tmp2185 = (frost$core$Bit) {$tmp2184};
bool $tmp2186 = $tmp2185.value;
if ($tmp2186) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:604
frost$core$Int* $tmp2187 = &param0->maxLength;
frost$core$Int $tmp2188 = *$tmp2187;
frost$core$Int $tmp2189 = (frost$core$Int) {2u};
int64_t $tmp2190 = $tmp2188.value;
int64_t $tmp2191 = $tmp2189.value;
int64_t $tmp2192 = $tmp2190 * $tmp2191;
frost$core$Int $tmp2193 = (frost$core$Int) {$tmp2192};
frost$core$Int* $tmp2194 = &param0->maxLength;
*$tmp2194 = $tmp2193;
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:606
frost$core$Char8** $tmp2195 = &param0->data;
frost$core$Char8* $tmp2196 = *$tmp2195;
frost$core$Int $tmp2197 = *(&local0);
frost$core$Int64 $tmp2198 = frost$core$Int64$init$frost$core$Int($tmp2197);
frost$core$Int* $tmp2199 = &param0->maxLength;
frost$core$Int $tmp2200 = *$tmp2199;
frost$core$Int64 $tmp2201 = frost$core$Int64$init$frost$core$Int($tmp2200);
int64_t $tmp2202 = $tmp2198.value;
int64_t $tmp2203 = $tmp2201.value;
frost$core$Char8* $tmp2204 = (frost$core$Char8*) frostRealloc($tmp2196, $tmp2202 * 1, $tmp2203 * 1);
frost$core$Char8** $tmp2205 = &param0->data;
*$tmp2205 = $tmp2204;
return;

}
void frost$core$MutableString$clear(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:611
frost$core$Char8** $tmp2206 = &param0->data;
frost$core$Char8* $tmp2207 = *$tmp2206;
frost$core$Int* $tmp2208 = &param0->maxLength;
frost$core$Int $tmp2209 = *$tmp2208;
frost$core$Int64 $tmp2210 = frost$core$Int64$init$frost$core$Int($tmp2209);
frost$core$Int $tmp2211 = (frost$core$Int) {32u};
frost$core$Int64 $tmp2212 = frost$core$Int64$init$frost$core$Int($tmp2211);
int64_t $tmp2213 = $tmp2210.value;
int64_t $tmp2214 = $tmp2212.value;
frost$core$Char8* $tmp2215 = (frost$core$Char8*) frostRealloc($tmp2207, $tmp2213 * 1, $tmp2214 * 1);
frost$core$Char8** $tmp2216 = &param0->data;
*$tmp2216 = $tmp2215;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:612
frost$core$Int $tmp2217 = (frost$core$Int) {0u};
frost$core$Int* $tmp2218 = &param0->_length;
*$tmp2218 = $tmp2217;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:613
frost$core$Int $tmp2219 = (frost$core$Int) {32u};
frost$core$Int* $tmp2220 = &param0->maxLength;
*$tmp2220 = $tmp2219;
return;

}
frost$core$String* frost$core$MutableString$get_asString$R$frost$core$String(frost$core$MutableString* param0) {

frost$core$Char8* local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:622
frost$core$Int* $tmp2221 = &param0->_length;
frost$core$Int $tmp2222 = *$tmp2221;
frost$core$Int64 $tmp2223 = frost$core$Int64$init$frost$core$Int($tmp2222);
int64_t $tmp2224 = $tmp2223.value;
frost$core$Char8* $tmp2225 = ((frost$core$Char8*) frostAlloc($tmp2224 * 1));
*(&local0) = $tmp2225;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:623
frost$core$Int $tmp2226 = (frost$core$Int) {0u};
frost$core$Int* $tmp2227 = &param0->_length;
frost$core$Int $tmp2228 = *$tmp2227;
frost$core$Bit $tmp2229 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2230 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2226, $tmp2228, $tmp2229);
frost$core$Int $tmp2231 = $tmp2230.min;
*(&local1) = $tmp2231;
frost$core$Int $tmp2232 = $tmp2230.max;
frost$core$Bit $tmp2233 = $tmp2230.inclusive;
bool $tmp2234 = $tmp2233.value;
frost$core$Int $tmp2235 = (frost$core$Int) {1u};
if ($tmp2234) goto block4; else goto block5;
block4:;
int64_t $tmp2236 = $tmp2231.value;
int64_t $tmp2237 = $tmp2232.value;
bool $tmp2238 = $tmp2236 <= $tmp2237;
frost$core$Bit $tmp2239 = (frost$core$Bit) {$tmp2238};
bool $tmp2240 = $tmp2239.value;
if ($tmp2240) goto block1; else goto block2;
block5:;
int64_t $tmp2241 = $tmp2231.value;
int64_t $tmp2242 = $tmp2232.value;
bool $tmp2243 = $tmp2241 < $tmp2242;
frost$core$Bit $tmp2244 = (frost$core$Bit) {$tmp2243};
bool $tmp2245 = $tmp2244.value;
if ($tmp2245) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:624
frost$core$Char8* $tmp2246 = *(&local0);
frost$core$Int $tmp2247 = *(&local1);
frost$core$Int64 $tmp2248 = frost$core$Int64$init$frost$core$Int($tmp2247);
frost$core$Char8** $tmp2249 = &param0->data;
frost$core$Char8* $tmp2250 = *$tmp2249;
frost$core$Int $tmp2251 = *(&local1);
frost$core$Int64 $tmp2252 = frost$core$Int64$init$frost$core$Int($tmp2251);
int64_t $tmp2253 = $tmp2252.value;
frost$core$Char8 $tmp2254 = $tmp2250[$tmp2253];
int64_t $tmp2255 = $tmp2248.value;
$tmp2246[$tmp2255] = $tmp2254;
frost$core$Int $tmp2256 = *(&local1);
int64_t $tmp2257 = $tmp2232.value;
int64_t $tmp2258 = $tmp2256.value;
int64_t $tmp2259 = $tmp2257 - $tmp2258;
frost$core$Int $tmp2260 = (frost$core$Int) {$tmp2259};
if ($tmp2234) goto block7; else goto block8;
block7:;
int64_t $tmp2261 = $tmp2260.value;
int64_t $tmp2262 = $tmp2235.value;
bool $tmp2263 = $tmp2261 >= $tmp2262;
frost$core$Bit $tmp2264 = (frost$core$Bit) {$tmp2263};
bool $tmp2265 = $tmp2264.value;
if ($tmp2265) goto block6; else goto block2;
block8:;
int64_t $tmp2266 = $tmp2260.value;
int64_t $tmp2267 = $tmp2235.value;
bool $tmp2268 = $tmp2266 > $tmp2267;
frost$core$Bit $tmp2269 = (frost$core$Bit) {$tmp2268};
bool $tmp2270 = $tmp2269.value;
if ($tmp2270) goto block6; else goto block2;
block6:;
int64_t $tmp2271 = $tmp2256.value;
int64_t $tmp2272 = $tmp2235.value;
int64_t $tmp2273 = $tmp2271 + $tmp2272;
frost$core$Int $tmp2274 = (frost$core$Int) {$tmp2273};
*(&local1) = $tmp2274;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:626
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp2275 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp2276 = *(&local0);
frost$core$Int* $tmp2277 = &param0->_length;
frost$core$Int $tmp2278 = *$tmp2277;
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp2275, $tmp2276, $tmp2278);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
return $tmp2275;

}
frost$core$String* frost$core$MutableString$finish$R$frost$core$String(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:638
frost$core$Char8** $tmp2279 = &param0->data;
frost$core$Char8* $tmp2280 = *$tmp2279;
frost$core$Int* $tmp2281 = &param0->maxLength;
frost$core$Int $tmp2282 = *$tmp2281;
frost$core$Int64 $tmp2283 = frost$core$Int64$init$frost$core$Int($tmp2282);
frost$core$Int* $tmp2284 = &param0->_length;
frost$core$Int $tmp2285 = *$tmp2284;
frost$core$Int64 $tmp2286 = frost$core$Int64$init$frost$core$Int($tmp2285);
int64_t $tmp2287 = $tmp2283.value;
int64_t $tmp2288 = $tmp2286.value;
frost$core$Char8* $tmp2289 = (frost$core$Char8*) frostRealloc($tmp2280, $tmp2287 * 1, $tmp2288 * 1);
frost$core$Char8** $tmp2290 = &param0->data;
*$tmp2290 = $tmp2289;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:639
frost$core$Int $tmp2291 = (frost$core$Int) {0u};
frost$core$Int* $tmp2292 = &param0->maxLength;
*$tmp2292 = $tmp2291;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:640
frost$core$Class** $tmp2294 = &((frost$core$Object*) &$s2293)->$class;
frost$core$Class* $tmp2295 = *$tmp2294;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
frost$core$Class** $tmp2296 = &((frost$core$Object*) param0)->$class;
frost$core$Class* $tmp2297 = *$tmp2296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2297));
frost$core$Class** $tmp2298 = &((frost$core$Object*) param0)->$class;
*$tmp2298 = $tmp2295;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:641
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) ((frost$core$Object*) param0))));
return ((frost$core$String*) ((frost$core$Object*) param0));

}

