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
typedef frost$core$Object* (*$fn1390)(frost$core$String*);
typedef frost$core$Object* (*$fn1392)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn1396)(frost$core$Object*);
typedef frost$core$String* (*$fn1409)(frost$core$Object*);
typedef frost$core$Object* (*$fn1468)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn1470)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn1474)(frost$core$Object*);
typedef frost$core$String* (*$fn1735)(frost$core$Object*);
typedef frost$core$Bit (*$fn1743)(frost$core$Comparable*, frost$core$Comparable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -2515322268956876193, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s857 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 99, 4288372049641424221, NULL };
static frost$core$String $s1219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s1220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 99, 4288372049641424221, NULL };
static frost$core$String $s1293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s1384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s1526 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s1578 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s1647 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s1790 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s1791 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x5b\x5d\x3a\x3d\x28\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e\x2c\x20\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 134, 6464499595877147488, NULL };
static frost$core$String $s2066 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s2067 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 99, 4288372049641424221, NULL };
static frost$core$String $s2080 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s2081 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 99, 4288372049641424221, NULL };
static frost$core$String $s2103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s2104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s2122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s2123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s2149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s2150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 99, 4288372049641424221, NULL };
static frost$core$String $s2164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s2165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 99, 4288372049641424221, NULL };
static frost$core$String $s2172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s2173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 99, 4288372049641424221, NULL };
static frost$core$String $s2204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -7613212107470934244, NULL };
static frost$core$String $s2205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x65\x6e\x73\x75\x72\x65\x43\x61\x70\x61\x63\x69\x74\x79\x28\x6e\x65\x77\x53\x69\x7a\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29", 95, 9145576632900143243, NULL };
static frost$core$String $s2328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

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
frost$core$Bit $tmp1380 = (frost$core$Bit) {$tmp1379 != NULL};
bool $tmp1381 = $tmp1380.value;
if ($tmp1381) goto block4; else goto block5;
block5:;
frost$core$Int $tmp1382 = (frost$core$Int) {435u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1383, $tmp1382, &$s1384);
abort(); // unreachable
block4:;
frost$core$Int8** $tmp1385 = &param2->pointer;
frost$core$Int8* $tmp1386 = *$tmp1385;
frost$core$Object** $tmp1387 = &param2->target;
frost$core$Object* $tmp1388 = *$tmp1387;
bool $tmp1389 = $tmp1388 != ((frost$core$Object*) NULL);
if ($tmp1389) goto block6; else goto block7;
block7:;
frost$core$Object* $tmp1391 = (($fn1390) $tmp1386)($tmp1379);
*(&local1) = $tmp1391;
goto block8;
block6:;
frost$core$Object* $tmp1393 = (($fn1392) $tmp1386)($tmp1388, $tmp1379);
*(&local1) = $tmp1393;
goto block8;
block8:;
frost$core$Object* $tmp1394 = *(&local1);
$fn1396 $tmp1395 = ($fn1396) $tmp1394->$class->vtable[0];
frost$core$String* $tmp1397 = $tmp1395($tmp1394);
frost$core$Bit $tmp1398 = (frost$core$Bit) {false};
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1376, param0, $tmp1397, $tmp1398);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
frost$core$Frost$unref$frost$core$Object$Q($tmp1394);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:437
frost$core$Matcher* $tmp1399 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from MutableString.frost:437:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
frost$core$String** $tmp1400 = &$tmp1399->searchText;
frost$core$String* $tmp1401 = *$tmp1400;
frost$core$String$Index* $tmp1402 = &$tmp1399->replacementIndex;
frost$core$String$Index $tmp1403 = *$tmp1402;
frost$core$Bit $tmp1404 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1405 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp1403, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1404);
frost$core$String* $tmp1406 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1401, $tmp1405);
frost$core$MutableString$append$frost$core$String(param0, $tmp1406);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
frost$core$Matcher* $tmp1407 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
void frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(frost$core$MutableString* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$Matcher* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int local2;
frost$core$Object* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:451
$fn1409 $tmp1408 = ($fn1409) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp1410 = $tmp1408(((frost$core$Object*) param0));
frost$core$Matcher* $tmp1411 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, $tmp1410);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
frost$core$Matcher* $tmp1412 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
*(&local0) = $tmp1411;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:452
frost$core$MutableString$clear(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:453
goto block1;
block1:;
frost$core$Matcher* $tmp1413 = *(&local0);
frost$core$Bit $tmp1414 = frost$core$Matcher$find$R$frost$core$Bit($tmp1413);
bool $tmp1415 = $tmp1414.value;
if ($tmp1415) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:454
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1416 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1416);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$collections$Array* $tmp1417 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
*(&local1) = $tmp1416;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:455
frost$core$Int $tmp1418 = (frost$core$Int) {0u};
frost$core$Matcher* $tmp1419 = *(&local0);
frost$core$Int $tmp1420;
frost$core$Matcher$get_groupCount$R$frost$core$Int(&$tmp1420, $tmp1419);
frost$core$Bit $tmp1421 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1422 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1418, $tmp1420, $tmp1421);
frost$core$Int $tmp1423 = $tmp1422.min;
*(&local2) = $tmp1423;
frost$core$Int $tmp1424 = $tmp1422.max;
frost$core$Bit $tmp1425 = $tmp1422.inclusive;
bool $tmp1426 = $tmp1425.value;
frost$core$Int $tmp1427 = (frost$core$Int) {1u};
if ($tmp1426) goto block7; else goto block8;
block7:;
int64_t $tmp1428 = $tmp1423.value;
int64_t $tmp1429 = $tmp1424.value;
bool $tmp1430 = $tmp1428 <= $tmp1429;
frost$core$Bit $tmp1431 = (frost$core$Bit) {$tmp1430};
bool $tmp1432 = $tmp1431.value;
if ($tmp1432) goto block4; else goto block5;
block8:;
int64_t $tmp1433 = $tmp1423.value;
int64_t $tmp1434 = $tmp1424.value;
bool $tmp1435 = $tmp1433 < $tmp1434;
frost$core$Bit $tmp1436 = (frost$core$Bit) {$tmp1435};
bool $tmp1437 = $tmp1436.value;
if ($tmp1437) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:456
frost$collections$Array* $tmp1438 = *(&local1);
frost$core$Matcher* $tmp1439 = *(&local0);
frost$core$Int $tmp1440 = *(&local2);
frost$core$String* $tmp1441 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q($tmp1439, $tmp1440);
frost$collections$Array$add$frost$collections$Array$T($tmp1438, ((frost$core$Object*) $tmp1441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
frost$core$Int $tmp1442 = *(&local2);
int64_t $tmp1443 = $tmp1424.value;
int64_t $tmp1444 = $tmp1442.value;
int64_t $tmp1445 = $tmp1443 - $tmp1444;
frost$core$Int $tmp1446 = (frost$core$Int) {$tmp1445};
if ($tmp1426) goto block10; else goto block11;
block10:;
int64_t $tmp1447 = $tmp1446.value;
int64_t $tmp1448 = $tmp1427.value;
bool $tmp1449 = $tmp1447 >= $tmp1448;
frost$core$Bit $tmp1450 = (frost$core$Bit) {$tmp1449};
bool $tmp1451 = $tmp1450.value;
if ($tmp1451) goto block9; else goto block5;
block11:;
int64_t $tmp1452 = $tmp1446.value;
int64_t $tmp1453 = $tmp1427.value;
bool $tmp1454 = $tmp1452 > $tmp1453;
frost$core$Bit $tmp1455 = (frost$core$Bit) {$tmp1454};
bool $tmp1456 = $tmp1455.value;
if ($tmp1456) goto block9; else goto block5;
block9:;
int64_t $tmp1457 = $tmp1442.value;
int64_t $tmp1458 = $tmp1427.value;
int64_t $tmp1459 = $tmp1457 + $tmp1458;
frost$core$Int $tmp1460 = (frost$core$Int) {$tmp1459};
*(&local2) = $tmp1460;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:458
frost$core$Matcher* $tmp1461 = *(&local0);
frost$collections$Array* $tmp1462 = *(&local1);
frost$core$Int8** $tmp1463 = &param2->pointer;
frost$core$Int8* $tmp1464 = *$tmp1463;
frost$core$Object** $tmp1465 = &param2->target;
frost$core$Object* $tmp1466 = *$tmp1465;
bool $tmp1467 = $tmp1466 != ((frost$core$Object*) NULL);
if ($tmp1467) goto block12; else goto block13;
block13:;
frost$core$Object* $tmp1469 = (($fn1468) $tmp1464)(((frost$collections$ListView*) $tmp1462));
*(&local3) = $tmp1469;
goto block14;
block12:;
frost$core$Object* $tmp1471 = (($fn1470) $tmp1464)($tmp1466, ((frost$collections$ListView*) $tmp1462));
*(&local3) = $tmp1471;
goto block14;
block14:;
frost$core$Object* $tmp1472 = *(&local3);
$fn1474 $tmp1473 = ($fn1474) $tmp1472->$class->vtable[0];
frost$core$String* $tmp1475 = $tmp1473($tmp1472);
frost$core$Bit $tmp1476 = (frost$core$Bit) {false};
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp1461, param0, $tmp1475, $tmp1476);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
frost$core$Frost$unref$frost$core$Object$Q($tmp1472);
frost$collections$Array* $tmp1477 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
*(&local1) = ((frost$collections$Array*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:460
frost$core$Matcher* $tmp1478 = *(&local0);
// begin inline call to method frost.core.Matcher.appendTail(target:frost.core.MutableString) from MutableString.frost:460:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:171
frost$core$String** $tmp1479 = &$tmp1478->searchText;
frost$core$String* $tmp1480 = *$tmp1479;
frost$core$String$Index* $tmp1481 = &$tmp1478->replacementIndex;
frost$core$String$Index $tmp1482 = *$tmp1481;
frost$core$Bit $tmp1483 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1484 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp1482, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1483);
frost$core$String* $tmp1485 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1480, $tmp1484);
frost$core$MutableString$append$frost$core$String(param0, $tmp1485);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1485));
frost$core$Matcher* $tmp1486 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
*(&local0) = ((frost$core$Matcher*) NULL);
return;

}
frost$core$Char32 frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(frost$core$MutableString* param0, frost$core$MutableString$Index param1) {

frost$core$Int local0;
frost$core$Char8 local1;
frost$core$Int32 local2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:467
frost$core$Int $tmp1487 = param1.value;
*(&local0) = $tmp1487;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:468
frost$core$Char8** $tmp1488 = &param0->data;
frost$core$Char8* $tmp1489 = *$tmp1488;
frost$core$Int $tmp1490 = *(&local0);
frost$core$Int64 $tmp1491 = frost$core$Int64$init$frost$core$Int($tmp1490);
int64_t $tmp1492 = $tmp1491.value;
frost$core$Char8 $tmp1493 = $tmp1489[$tmp1492];
*(&local1) = $tmp1493;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:469
frost$core$Char8 $tmp1494 = *(&local1);
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:469:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp1495 = $tmp1494.value;
int32_t $tmp1496 = ((int32_t) $tmp1495) & 255u;
frost$core$Int32 $tmp1497 = (frost$core$Int32) {$tmp1496};
*(&local2) = $tmp1497;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:470
frost$core$Char8 $tmp1498 = *(&local1);
uint8_t $tmp1499 = $tmp1498.value;
int64_t $tmp1500 = ((int64_t) $tmp1499) & 255u;
bool $tmp1501 = $tmp1500 < 192u;
frost$core$Bit $tmp1502 = (frost$core$Bit) {$tmp1501};
bool $tmp1503 = $tmp1502.value;
if ($tmp1503) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:471
frost$core$Int32 $tmp1504 = *(&local2);
frost$core$Char32 $tmp1505 = frost$core$Char32$init$frost$core$Int32($tmp1504);
return $tmp1505;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:473
frost$core$Char8 $tmp1506 = *(&local1);
uint8_t $tmp1507 = $tmp1506.value;
int64_t $tmp1508 = ((int64_t) $tmp1507) & 255u;
bool $tmp1509 = $tmp1508 < 224u;
frost$core$Bit $tmp1510 = (frost$core$Bit) {$tmp1509};
bool $tmp1511 = $tmp1510.value;
if ($tmp1511) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:474
frost$core$Int $tmp1512 = *(&local0);
frost$core$Int $tmp1513 = (frost$core$Int) {1u};
int64_t $tmp1514 = $tmp1512.value;
int64_t $tmp1515 = $tmp1513.value;
int64_t $tmp1516 = $tmp1514 + $tmp1515;
frost$core$Int $tmp1517 = (frost$core$Int) {$tmp1516};
frost$core$Int* $tmp1518 = &param0->_length;
frost$core$Int $tmp1519 = *$tmp1518;
int64_t $tmp1520 = $tmp1517.value;
int64_t $tmp1521 = $tmp1519.value;
bool $tmp1522 = $tmp1520 < $tmp1521;
frost$core$Bit $tmp1523 = (frost$core$Bit) {$tmp1522};
bool $tmp1524 = $tmp1523.value;
if ($tmp1524) goto block6; else goto block7;
block7:;
frost$core$Int $tmp1525 = (frost$core$Int) {474u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1526, $tmp1525);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:475
frost$core$Int32 $tmp1527 = *(&local2);
frost$core$Int32 $tmp1528 = (frost$core$Int32) {1984u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:475:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1529 = $tmp1527.value;
int32_t $tmp1530 = $tmp1528.value;
int32_t $tmp1531 = $tmp1529 & $tmp1530;
frost$core$Int32 $tmp1532 = (frost$core$Int32) {$tmp1531};
frost$core$Char8** $tmp1533 = &param0->data;
frost$core$Char8* $tmp1534 = *$tmp1533;
frost$core$Int $tmp1535 = *(&local0);
frost$core$Int64 $tmp1536 = frost$core$Int64$init$frost$core$Int($tmp1535);
frost$core$Int64 $tmp1537 = (frost$core$Int64) {1u};
int64_t $tmp1538 = $tmp1536.value;
int64_t $tmp1539 = $tmp1537.value;
int64_t $tmp1540 = $tmp1538 + $tmp1539;
frost$core$Int64 $tmp1541 = (frost$core$Int64) {$tmp1540};
int64_t $tmp1542 = $tmp1541.value;
frost$core$Char8 $tmp1543 = $tmp1534[$tmp1542];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:475:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp1544 = $tmp1543.value;
int32_t $tmp1545 = ((int32_t) $tmp1544) & 255u;
frost$core$Int32 $tmp1546 = (frost$core$Int32) {$tmp1545};
frost$core$Int32 $tmp1547 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:475:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1548 = $tmp1546.value;
int32_t $tmp1549 = $tmp1547.value;
int32_t $tmp1550 = $tmp1548 & $tmp1549;
frost$core$Int32 $tmp1551 = (frost$core$Int32) {$tmp1550};
int32_t $tmp1552 = $tmp1532.value;
int32_t $tmp1553 = $tmp1551.value;
int32_t $tmp1554 = $tmp1552 + $tmp1553;
frost$core$Int32 $tmp1555 = (frost$core$Int32) {$tmp1554};
*(&local2) = $tmp1555;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:476
frost$core$Int32 $tmp1556 = *(&local2);
frost$core$Char32 $tmp1557 = frost$core$Char32$init$frost$core$Int32($tmp1556);
return $tmp1557;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:478
frost$core$Char8 $tmp1558 = *(&local1);
uint8_t $tmp1559 = $tmp1558.value;
int64_t $tmp1560 = ((int64_t) $tmp1559) & 255u;
bool $tmp1561 = $tmp1560 < 240u;
frost$core$Bit $tmp1562 = (frost$core$Bit) {$tmp1561};
bool $tmp1563 = $tmp1562.value;
if ($tmp1563) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:479
frost$core$Int $tmp1564 = *(&local0);
frost$core$Int $tmp1565 = (frost$core$Int) {2u};
int64_t $tmp1566 = $tmp1564.value;
int64_t $tmp1567 = $tmp1565.value;
int64_t $tmp1568 = $tmp1566 + $tmp1567;
frost$core$Int $tmp1569 = (frost$core$Int) {$tmp1568};
frost$core$Int* $tmp1570 = &param0->_length;
frost$core$Int $tmp1571 = *$tmp1570;
int64_t $tmp1572 = $tmp1569.value;
int64_t $tmp1573 = $tmp1571.value;
bool $tmp1574 = $tmp1572 < $tmp1573;
frost$core$Bit $tmp1575 = (frost$core$Bit) {$tmp1574};
bool $tmp1576 = $tmp1575.value;
if ($tmp1576) goto block13; else goto block14;
block14:;
frost$core$Int $tmp1577 = (frost$core$Int) {479u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1578, $tmp1577);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:480
frost$core$Int32 $tmp1579 = *(&local2);
frost$core$Int32 $tmp1580 = (frost$core$Int32) {61440u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:480:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1581 = $tmp1579.value;
int32_t $tmp1582 = $tmp1580.value;
int32_t $tmp1583 = $tmp1581 & $tmp1582;
frost$core$Int32 $tmp1584 = (frost$core$Int32) {$tmp1583};
frost$core$Char8** $tmp1585 = &param0->data;
frost$core$Char8* $tmp1586 = *$tmp1585;
frost$core$Int $tmp1587 = *(&local0);
frost$core$Int64 $tmp1588 = frost$core$Int64$init$frost$core$Int($tmp1587);
frost$core$Int64 $tmp1589 = (frost$core$Int64) {1u};
int64_t $tmp1590 = $tmp1588.value;
int64_t $tmp1591 = $tmp1589.value;
int64_t $tmp1592 = $tmp1590 + $tmp1591;
frost$core$Int64 $tmp1593 = (frost$core$Int64) {$tmp1592};
int64_t $tmp1594 = $tmp1593.value;
frost$core$Char8 $tmp1595 = $tmp1586[$tmp1594];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:480:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp1596 = $tmp1595.value;
int32_t $tmp1597 = ((int32_t) $tmp1596) & 255u;
frost$core$Int32 $tmp1598 = (frost$core$Int32) {$tmp1597};
frost$core$Int32 $tmp1599 = (frost$core$Int32) {4032u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:480:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1600 = $tmp1598.value;
int32_t $tmp1601 = $tmp1599.value;
int32_t $tmp1602 = $tmp1600 & $tmp1601;
frost$core$Int32 $tmp1603 = (frost$core$Int32) {$tmp1602};
int32_t $tmp1604 = $tmp1584.value;
int32_t $tmp1605 = $tmp1603.value;
int32_t $tmp1606 = $tmp1604 + $tmp1605;
frost$core$Int32 $tmp1607 = (frost$core$Int32) {$tmp1606};
frost$core$Char8** $tmp1608 = &param0->data;
frost$core$Char8* $tmp1609 = *$tmp1608;
frost$core$Int $tmp1610 = *(&local0);
frost$core$Int64 $tmp1611 = frost$core$Int64$init$frost$core$Int($tmp1610);
frost$core$Int64 $tmp1612 = (frost$core$Int64) {2u};
int64_t $tmp1613 = $tmp1611.value;
int64_t $tmp1614 = $tmp1612.value;
int64_t $tmp1615 = $tmp1613 + $tmp1614;
frost$core$Int64 $tmp1616 = (frost$core$Int64) {$tmp1615};
int64_t $tmp1617 = $tmp1616.value;
frost$core$Char8 $tmp1618 = $tmp1609[$tmp1617];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:481:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp1619 = $tmp1618.value;
int32_t $tmp1620 = ((int32_t) $tmp1619) & 255u;
frost$core$Int32 $tmp1621 = (frost$core$Int32) {$tmp1620};
frost$core$Int32 $tmp1622 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:481:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1623 = $tmp1621.value;
int32_t $tmp1624 = $tmp1622.value;
int32_t $tmp1625 = $tmp1623 & $tmp1624;
frost$core$Int32 $tmp1626 = (frost$core$Int32) {$tmp1625};
int32_t $tmp1627 = $tmp1607.value;
int32_t $tmp1628 = $tmp1626.value;
int32_t $tmp1629 = $tmp1627 + $tmp1628;
frost$core$Int32 $tmp1630 = (frost$core$Int32) {$tmp1629};
*(&local2) = $tmp1630;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:482
frost$core$Int32 $tmp1631 = *(&local2);
frost$core$Char32 $tmp1632 = frost$core$Char32$init$frost$core$Int32($tmp1631);
return $tmp1632;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:484
frost$core$Int $tmp1633 = *(&local0);
frost$core$Int $tmp1634 = (frost$core$Int) {3u};
int64_t $tmp1635 = $tmp1633.value;
int64_t $tmp1636 = $tmp1634.value;
int64_t $tmp1637 = $tmp1635 + $tmp1636;
frost$core$Int $tmp1638 = (frost$core$Int) {$tmp1637};
frost$core$Int* $tmp1639 = &param0->_length;
frost$core$Int $tmp1640 = *$tmp1639;
int64_t $tmp1641 = $tmp1638.value;
int64_t $tmp1642 = $tmp1640.value;
bool $tmp1643 = $tmp1641 < $tmp1642;
frost$core$Bit $tmp1644 = (frost$core$Bit) {$tmp1643};
bool $tmp1645 = $tmp1644.value;
if ($tmp1645) goto block20; else goto block21;
block21:;
frost$core$Int $tmp1646 = (frost$core$Int) {484u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1647, $tmp1646);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:485
frost$core$Int32 $tmp1648 = *(&local2);
frost$core$Int32 $tmp1649 = (frost$core$Int32) {1835008u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:485:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1650 = $tmp1648.value;
int32_t $tmp1651 = $tmp1649.value;
int32_t $tmp1652 = $tmp1650 & $tmp1651;
frost$core$Int32 $tmp1653 = (frost$core$Int32) {$tmp1652};
frost$core$Char8** $tmp1654 = &param0->data;
frost$core$Char8* $tmp1655 = *$tmp1654;
frost$core$Int $tmp1656 = *(&local0);
frost$core$Int64 $tmp1657 = frost$core$Int64$init$frost$core$Int($tmp1656);
frost$core$Int64 $tmp1658 = (frost$core$Int64) {1u};
int64_t $tmp1659 = $tmp1657.value;
int64_t $tmp1660 = $tmp1658.value;
int64_t $tmp1661 = $tmp1659 + $tmp1660;
frost$core$Int64 $tmp1662 = (frost$core$Int64) {$tmp1661};
int64_t $tmp1663 = $tmp1662.value;
frost$core$Char8 $tmp1664 = $tmp1655[$tmp1663];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:485:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp1665 = $tmp1664.value;
int32_t $tmp1666 = ((int32_t) $tmp1665) & 255u;
frost$core$Int32 $tmp1667 = (frost$core$Int32) {$tmp1666};
frost$core$Int32 $tmp1668 = (frost$core$Int32) {258048u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:485:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1669 = $tmp1667.value;
int32_t $tmp1670 = $tmp1668.value;
int32_t $tmp1671 = $tmp1669 & $tmp1670;
frost$core$Int32 $tmp1672 = (frost$core$Int32) {$tmp1671};
int32_t $tmp1673 = $tmp1653.value;
int32_t $tmp1674 = $tmp1672.value;
int32_t $tmp1675 = $tmp1673 + $tmp1674;
frost$core$Int32 $tmp1676 = (frost$core$Int32) {$tmp1675};
frost$core$Char8** $tmp1677 = &param0->data;
frost$core$Char8* $tmp1678 = *$tmp1677;
frost$core$Int $tmp1679 = *(&local0);
frost$core$Int64 $tmp1680 = frost$core$Int64$init$frost$core$Int($tmp1679);
frost$core$Int64 $tmp1681 = (frost$core$Int64) {2u};
int64_t $tmp1682 = $tmp1680.value;
int64_t $tmp1683 = $tmp1681.value;
int64_t $tmp1684 = $tmp1682 + $tmp1683;
frost$core$Int64 $tmp1685 = (frost$core$Int64) {$tmp1684};
int64_t $tmp1686 = $tmp1685.value;
frost$core$Char8 $tmp1687 = $tmp1678[$tmp1686];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:486:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp1688 = $tmp1687.value;
int32_t $tmp1689 = ((int32_t) $tmp1688) & 255u;
frost$core$Int32 $tmp1690 = (frost$core$Int32) {$tmp1689};
frost$core$Int32 $tmp1691 = (frost$core$Int32) {4032u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:486:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1692 = $tmp1690.value;
int32_t $tmp1693 = $tmp1691.value;
int32_t $tmp1694 = $tmp1692 & $tmp1693;
frost$core$Int32 $tmp1695 = (frost$core$Int32) {$tmp1694};
int32_t $tmp1696 = $tmp1676.value;
int32_t $tmp1697 = $tmp1695.value;
int32_t $tmp1698 = $tmp1696 + $tmp1697;
frost$core$Int32 $tmp1699 = (frost$core$Int32) {$tmp1698};
frost$core$Char8** $tmp1700 = &param0->data;
frost$core$Char8* $tmp1701 = *$tmp1700;
frost$core$Int $tmp1702 = *(&local0);
frost$core$Int64 $tmp1703 = frost$core$Int64$init$frost$core$Int($tmp1702);
frost$core$Int64 $tmp1704 = (frost$core$Int64) {3u};
int64_t $tmp1705 = $tmp1703.value;
int64_t $tmp1706 = $tmp1704.value;
int64_t $tmp1707 = $tmp1705 + $tmp1706;
frost$core$Int64 $tmp1708 = (frost$core$Int64) {$tmp1707};
int64_t $tmp1709 = $tmp1708.value;
frost$core$Char8 $tmp1710 = $tmp1701[$tmp1709];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from MutableString.frost:487:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp1711 = $tmp1710.value;
int32_t $tmp1712 = ((int32_t) $tmp1711) & 255u;
frost$core$Int32 $tmp1713 = (frost$core$Int32) {$tmp1712};
frost$core$Int32 $tmp1714 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from MutableString.frost:487:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp1715 = $tmp1713.value;
int32_t $tmp1716 = $tmp1714.value;
int32_t $tmp1717 = $tmp1715 & $tmp1716;
frost$core$Int32 $tmp1718 = (frost$core$Int32) {$tmp1717};
int32_t $tmp1719 = $tmp1699.value;
int32_t $tmp1720 = $tmp1718.value;
int32_t $tmp1721 = $tmp1719 + $tmp1720;
frost$core$Int32 $tmp1722 = (frost$core$Int32) {$tmp1721};
*(&local2) = $tmp1722;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:488
frost$core$Int32 $tmp1723 = *(&local2);
frost$core$Char32 $tmp1724 = frost$core$Char32$init$frost$core$Int32($tmp1723);
return $tmp1724;

}
frost$core$Char32 frost$core$MutableString$$IDX$frost$core$Int$R$frost$core$Char32(frost$core$MutableString* param0, frost$core$Int param1) {

frost$core$MutableString$Index local0;
frost$core$MutableString$Index local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:497
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:497:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp1725 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp1726 = &(&local1)->value;
*$tmp1726 = $tmp1725;
frost$core$MutableString$Index $tmp1727 = *(&local1);
*(&local0) = $tmp1727;
frost$core$MutableString$Index $tmp1728 = *(&local0);
frost$core$MutableString$Index $tmp1729 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index(param0, $tmp1728, param1);
frost$core$Char32 $tmp1730 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32(param0, $tmp1729);
return $tmp1730;

}
void frost$core$MutableString$$IDXEQ$frost$core$MutableString$Index$frost$core$Char32(frost$core$MutableString* param0, frost$core$MutableString$Index param1, frost$core$Char32 param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:502
frost$core$Bit $tmp1731 = (frost$core$Bit) {true};
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp1732 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit(param1, param1, $tmp1731);
frost$core$Char32$wrapper* $tmp1733;
$tmp1733 = (frost$core$Char32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$Char32$wrapperclass);
$tmp1733->value = param2;
$fn1735 $tmp1734 = ($fn1735) ((frost$core$Object*) $tmp1733)->$class->vtable[0];
frost$core$String* $tmp1736 = $tmp1734(((frost$core$Object*) $tmp1733));
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp1732, $tmp1736);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
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
frost$core$MutableString$Index $tmp1737 = param1.max;
frost$core$MutableString$Index$wrapper* $tmp1738;
$tmp1738 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1738->value = $tmp1737;
frost$core$MutableString$Index $tmp1739 = param1.min;
frost$core$MutableString$Index$wrapper* $tmp1740;
$tmp1740 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp1740->value = $tmp1739;
ITable* $tmp1741 = ((frost$core$Comparable*) $tmp1738)->$class->itable;
while ($tmp1741->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp1741 = $tmp1741->next;
}
$fn1743 $tmp1742 = $tmp1741->methods[2];
frost$core$Bit $tmp1744 = $tmp1742(((frost$core$Comparable*) $tmp1738), ((frost$core$Comparable*) $tmp1740));
bool $tmp1745 = $tmp1744.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1740)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp1738)));
if ($tmp1745) goto block3; else goto block2;
block3:;
frost$core$Bit $tmp1746 = param1.inclusive;
bool $tmp1747 = $tmp1746.value;
if ($tmp1747) goto block6; else goto block4;
block6:;
frost$core$MutableString$Index $tmp1748 = param1.min;
frost$core$Int $tmp1749 = $tmp1748.value;
frost$core$Int* $tmp1750 = &param0->_length;
frost$core$Int $tmp1751 = *$tmp1750;
int64_t $tmp1752 = $tmp1749.value;
int64_t $tmp1753 = $tmp1751.value;
bool $tmp1754 = $tmp1752 < $tmp1753;
frost$core$Bit $tmp1755 = (frost$core$Bit) {$tmp1754};
bool $tmp1756 = $tmp1755.value;
if ($tmp1756) goto block5; else goto block4;
block5:;
frost$core$MutableString$Index $tmp1757 = param1.max;
frost$core$Int $tmp1758 = $tmp1757.value;
frost$core$Int* $tmp1759 = &param0->_length;
frost$core$Int $tmp1760 = *$tmp1759;
int64_t $tmp1761 = $tmp1758.value;
int64_t $tmp1762 = $tmp1760.value;
bool $tmp1763 = $tmp1761 < $tmp1762;
frost$core$Bit $tmp1764 = (frost$core$Bit) {$tmp1763};
bool $tmp1765 = $tmp1764.value;
if ($tmp1765) goto block1; else goto block4;
block4:;
frost$core$Bit $tmp1766 = param1.inclusive;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MutableString.frost:508:11
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1767 = $tmp1766.value;
bool $tmp1768 = !$tmp1767;
frost$core$Bit $tmp1769 = (frost$core$Bit) {$tmp1768};
bool $tmp1770 = $tmp1769.value;
if ($tmp1770) goto block8; else goto block2;
block8:;
frost$core$MutableString$Index $tmp1771 = param1.min;
frost$core$Int $tmp1772 = $tmp1771.value;
frost$core$Int* $tmp1773 = &param0->_length;
frost$core$Int $tmp1774 = *$tmp1773;
int64_t $tmp1775 = $tmp1772.value;
int64_t $tmp1776 = $tmp1774.value;
bool $tmp1777 = $tmp1775 <= $tmp1776;
frost$core$Bit $tmp1778 = (frost$core$Bit) {$tmp1777};
bool $tmp1779 = $tmp1778.value;
if ($tmp1779) goto block7; else goto block2;
block7:;
frost$core$MutableString$Index $tmp1780 = param1.max;
frost$core$Int $tmp1781 = $tmp1780.value;
frost$core$Int* $tmp1782 = &param0->_length;
frost$core$Int $tmp1783 = *$tmp1782;
int64_t $tmp1784 = $tmp1781.value;
int64_t $tmp1785 = $tmp1783.value;
bool $tmp1786 = $tmp1784 <= $tmp1785;
frost$core$Bit $tmp1787 = (frost$core$Bit) {$tmp1786};
bool $tmp1788 = $tmp1787.value;
if ($tmp1788) goto block1; else goto block2;
block2:;
frost$core$Int $tmp1789 = (frost$core$Int) {509u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1790, $tmp1789, &$s1791);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:510
frost$core$MutableString$Index $tmp1792 = param1.max;
frost$core$Int $tmp1793 = $tmp1792.value;
*(&local0) = $tmp1793;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:511
frost$core$Bit $tmp1794 = param1.inclusive;
bool $tmp1795 = $tmp1794.value;
if ($tmp1795) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:512
frost$core$Int $tmp1796 = *(&local0);
frost$core$Int $tmp1797 = (frost$core$Int) {1u};
int64_t $tmp1798 = $tmp1796.value;
int64_t $tmp1799 = $tmp1797.value;
int64_t $tmp1800 = $tmp1798 + $tmp1799;
frost$core$Int $tmp1801 = (frost$core$Int) {$tmp1800};
*(&local0) = $tmp1801;
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:514
frost$core$Int $tmp1802 = *(&local0);
frost$core$MutableString$Index $tmp1803 = param1.min;
frost$core$Int $tmp1804 = $tmp1803.value;
int64_t $tmp1805 = $tmp1802.value;
int64_t $tmp1806 = $tmp1804.value;
int64_t $tmp1807 = $tmp1805 - $tmp1806;
frost$core$Int $tmp1808 = (frost$core$Int) {$tmp1807};
*(&local1) = $tmp1808;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:515
frost$core$Int* $tmp1809 = &param0->_length;
frost$core$Int $tmp1810 = *$tmp1809;
frost$core$Int $tmp1811 = *(&local1);
int64_t $tmp1812 = $tmp1810.value;
int64_t $tmp1813 = $tmp1811.value;
int64_t $tmp1814 = $tmp1812 - $tmp1813;
frost$core$Int $tmp1815 = (frost$core$Int) {$tmp1814};
frost$core$Int* $tmp1816 = &param2->_length;
frost$core$Int $tmp1817 = *$tmp1816;
int64_t $tmp1818 = $tmp1815.value;
int64_t $tmp1819 = $tmp1817.value;
int64_t $tmp1820 = $tmp1818 + $tmp1819;
frost$core$Int $tmp1821 = (frost$core$Int) {$tmp1820};
*(&local2) = $tmp1821;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:516
frost$core$Int $tmp1822 = *(&local2);
frost$core$MutableString$ensureCapacity$frost$core$Int(param0, $tmp1822);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:517
frost$core$Int* $tmp1823 = &param2->_length;
frost$core$Int $tmp1824 = *$tmp1823;
frost$core$Int $tmp1825 = *(&local1);
int64_t $tmp1826 = $tmp1824.value;
int64_t $tmp1827 = $tmp1825.value;
int64_t $tmp1828 = $tmp1826 - $tmp1827;
frost$core$Int $tmp1829 = (frost$core$Int) {$tmp1828};
*(&local3) = $tmp1829;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:518
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int from MutableString.frost:518:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:492
frost$core$Int* $tmp1830 = &param2->_length;
frost$core$Int $tmp1831 = *$tmp1830;
frost$core$Int $tmp1832 = *(&local1);
int64_t $tmp1833 = $tmp1831.value;
int64_t $tmp1834 = $tmp1832.value;
bool $tmp1835 = $tmp1833 > $tmp1834;
frost$core$Bit $tmp1836 = (frost$core$Bit) {$tmp1835};
bool $tmp1837 = $tmp1836.value;
if ($tmp1837) goto block12; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:519
frost$core$Int* $tmp1838 = &param0->_length;
frost$core$Int $tmp1839 = *$tmp1838;
frost$core$Int $tmp1840 = (frost$core$Int) {1u};
int64_t $tmp1841 = $tmp1839.value;
int64_t $tmp1842 = $tmp1840.value;
int64_t $tmp1843 = $tmp1841 - $tmp1842;
frost$core$Int $tmp1844 = (frost$core$Int) {$tmp1843};
frost$core$Int $tmp1845 = *(&local0);
frost$core$Int $tmp1846 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp1847 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp1848 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1844, $tmp1845, $tmp1846, $tmp1847);
frost$core$Int $tmp1849 = $tmp1848.start;
*(&local4) = $tmp1849;
frost$core$Int $tmp1850 = $tmp1848.end;
frost$core$Int $tmp1851 = $tmp1848.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from MutableString.frost:519:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp1852 = $tmp1851.value;
int64_t $tmp1853 = -$tmp1852;
frost$core$Int $tmp1854 = (frost$core$Int) {$tmp1853};
frost$core$Bit $tmp1855 = $tmp1848.inclusive;
bool $tmp1856 = $tmp1855.value;
frost$core$Int $tmp1857 = (frost$core$Int) {0u};
int64_t $tmp1858 = $tmp1851.value;
int64_t $tmp1859 = $tmp1857.value;
bool $tmp1860 = $tmp1858 >= $tmp1859;
frost$core$Bit $tmp1861 = (frost$core$Bit) {$tmp1860};
bool $tmp1862 = $tmp1861.value;
if ($tmp1862) goto block20; else goto block21;
block20:;
if ($tmp1856) goto block22; else goto block23;
block22:;
int64_t $tmp1863 = $tmp1849.value;
int64_t $tmp1864 = $tmp1850.value;
bool $tmp1865 = $tmp1863 <= $tmp1864;
frost$core$Bit $tmp1866 = (frost$core$Bit) {$tmp1865};
bool $tmp1867 = $tmp1866.value;
if ($tmp1867) goto block17; else goto block18;
block23:;
int64_t $tmp1868 = $tmp1849.value;
int64_t $tmp1869 = $tmp1850.value;
bool $tmp1870 = $tmp1868 < $tmp1869;
frost$core$Bit $tmp1871 = (frost$core$Bit) {$tmp1870};
bool $tmp1872 = $tmp1871.value;
if ($tmp1872) goto block17; else goto block18;
block21:;
if ($tmp1856) goto block24; else goto block25;
block24:;
int64_t $tmp1873 = $tmp1849.value;
int64_t $tmp1874 = $tmp1850.value;
bool $tmp1875 = $tmp1873 >= $tmp1874;
frost$core$Bit $tmp1876 = (frost$core$Bit) {$tmp1875};
bool $tmp1877 = $tmp1876.value;
if ($tmp1877) goto block17; else goto block18;
block25:;
int64_t $tmp1878 = $tmp1849.value;
int64_t $tmp1879 = $tmp1850.value;
bool $tmp1880 = $tmp1878 > $tmp1879;
frost$core$Bit $tmp1881 = (frost$core$Bit) {$tmp1880};
bool $tmp1882 = $tmp1881.value;
if ($tmp1882) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:520
frost$core$Char8** $tmp1883 = &param0->data;
frost$core$Char8* $tmp1884 = *$tmp1883;
frost$core$Int $tmp1885 = *(&local4);
frost$core$Int $tmp1886 = *(&local3);
int64_t $tmp1887 = $tmp1885.value;
int64_t $tmp1888 = $tmp1886.value;
int64_t $tmp1889 = $tmp1887 + $tmp1888;
frost$core$Int $tmp1890 = (frost$core$Int) {$tmp1889};
frost$core$Int64 $tmp1891 = frost$core$Int64$init$frost$core$Int($tmp1890);
frost$core$Char8** $tmp1892 = &param0->data;
frost$core$Char8* $tmp1893 = *$tmp1892;
frost$core$Int $tmp1894 = *(&local4);
frost$core$Int64 $tmp1895 = frost$core$Int64$init$frost$core$Int($tmp1894);
int64_t $tmp1896 = $tmp1895.value;
frost$core$Char8 $tmp1897 = $tmp1893[$tmp1896];
int64_t $tmp1898 = $tmp1891.value;
$tmp1884[$tmp1898] = $tmp1897;
frost$core$Int $tmp1899 = *(&local4);
if ($tmp1862) goto block27; else goto block28;
block27:;
int64_t $tmp1900 = $tmp1850.value;
int64_t $tmp1901 = $tmp1899.value;
int64_t $tmp1902 = $tmp1900 - $tmp1901;
frost$core$Int $tmp1903 = (frost$core$Int) {$tmp1902};
if ($tmp1856) goto block29; else goto block30;
block29:;
int64_t $tmp1904 = $tmp1903.value;
int64_t $tmp1905 = $tmp1851.value;
bool $tmp1906 = $tmp1904 >= $tmp1905;
frost$core$Bit $tmp1907 = (frost$core$Bit) {$tmp1906};
bool $tmp1908 = $tmp1907.value;
if ($tmp1908) goto block26; else goto block18;
block30:;
int64_t $tmp1909 = $tmp1903.value;
int64_t $tmp1910 = $tmp1851.value;
bool $tmp1911 = $tmp1909 > $tmp1910;
frost$core$Bit $tmp1912 = (frost$core$Bit) {$tmp1911};
bool $tmp1913 = $tmp1912.value;
if ($tmp1913) goto block26; else goto block18;
block28:;
int64_t $tmp1914 = $tmp1899.value;
int64_t $tmp1915 = $tmp1850.value;
int64_t $tmp1916 = $tmp1914 - $tmp1915;
frost$core$Int $tmp1917 = (frost$core$Int) {$tmp1916};
if ($tmp1856) goto block31; else goto block32;
block31:;
int64_t $tmp1918 = $tmp1917.value;
int64_t $tmp1919 = $tmp1854.value;
bool $tmp1920 = $tmp1918 >= $tmp1919;
frost$core$Bit $tmp1921 = (frost$core$Bit) {$tmp1920};
bool $tmp1922 = $tmp1921.value;
if ($tmp1922) goto block26; else goto block18;
block32:;
int64_t $tmp1923 = $tmp1917.value;
int64_t $tmp1924 = $tmp1854.value;
bool $tmp1925 = $tmp1923 > $tmp1924;
frost$core$Bit $tmp1926 = (frost$core$Bit) {$tmp1925};
bool $tmp1927 = $tmp1926.value;
if ($tmp1927) goto block26; else goto block18;
block26:;
int64_t $tmp1928 = $tmp1899.value;
int64_t $tmp1929 = $tmp1851.value;
int64_t $tmp1930 = $tmp1928 + $tmp1929;
frost$core$Int $tmp1931 = (frost$core$Int) {$tmp1930};
*(&local4) = $tmp1931;
goto block17;
block18:;
goto block13;
block14:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:524
frost$core$Int $tmp1932 = *(&local0);
frost$core$Int* $tmp1933 = &param0->_length;
frost$core$Int $tmp1934 = *$tmp1933;
frost$core$Bit $tmp1935 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1936 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1932, $tmp1934, $tmp1935);
frost$core$Int $tmp1937 = $tmp1936.min;
*(&local5) = $tmp1937;
frost$core$Int $tmp1938 = $tmp1936.max;
frost$core$Bit $tmp1939 = $tmp1936.inclusive;
bool $tmp1940 = $tmp1939.value;
frost$core$Int $tmp1941 = (frost$core$Int) {1u};
if ($tmp1940) goto block36; else goto block37;
block36:;
int64_t $tmp1942 = $tmp1937.value;
int64_t $tmp1943 = $tmp1938.value;
bool $tmp1944 = $tmp1942 <= $tmp1943;
frost$core$Bit $tmp1945 = (frost$core$Bit) {$tmp1944};
bool $tmp1946 = $tmp1945.value;
if ($tmp1946) goto block33; else goto block34;
block37:;
int64_t $tmp1947 = $tmp1937.value;
int64_t $tmp1948 = $tmp1938.value;
bool $tmp1949 = $tmp1947 < $tmp1948;
frost$core$Bit $tmp1950 = (frost$core$Bit) {$tmp1949};
bool $tmp1951 = $tmp1950.value;
if ($tmp1951) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:525
frost$core$Char8** $tmp1952 = &param0->data;
frost$core$Char8* $tmp1953 = *$tmp1952;
frost$core$Int $tmp1954 = *(&local5);
frost$core$Int $tmp1955 = *(&local3);
int64_t $tmp1956 = $tmp1954.value;
int64_t $tmp1957 = $tmp1955.value;
int64_t $tmp1958 = $tmp1956 + $tmp1957;
frost$core$Int $tmp1959 = (frost$core$Int) {$tmp1958};
frost$core$Int64 $tmp1960 = frost$core$Int64$init$frost$core$Int($tmp1959);
frost$core$Char8** $tmp1961 = &param0->data;
frost$core$Char8* $tmp1962 = *$tmp1961;
frost$core$Int $tmp1963 = *(&local5);
frost$core$Int64 $tmp1964 = frost$core$Int64$init$frost$core$Int($tmp1963);
int64_t $tmp1965 = $tmp1964.value;
frost$core$Char8 $tmp1966 = $tmp1962[$tmp1965];
int64_t $tmp1967 = $tmp1960.value;
$tmp1953[$tmp1967] = $tmp1966;
frost$core$Int $tmp1968 = *(&local5);
int64_t $tmp1969 = $tmp1938.value;
int64_t $tmp1970 = $tmp1968.value;
int64_t $tmp1971 = $tmp1969 - $tmp1970;
frost$core$Int $tmp1972 = (frost$core$Int) {$tmp1971};
if ($tmp1940) goto block39; else goto block40;
block39:;
int64_t $tmp1973 = $tmp1972.value;
int64_t $tmp1974 = $tmp1941.value;
bool $tmp1975 = $tmp1973 >= $tmp1974;
frost$core$Bit $tmp1976 = (frost$core$Bit) {$tmp1975};
bool $tmp1977 = $tmp1976.value;
if ($tmp1977) goto block38; else goto block34;
block40:;
int64_t $tmp1978 = $tmp1972.value;
int64_t $tmp1979 = $tmp1941.value;
bool $tmp1980 = $tmp1978 > $tmp1979;
frost$core$Bit $tmp1981 = (frost$core$Bit) {$tmp1980};
bool $tmp1982 = $tmp1981.value;
if ($tmp1982) goto block38; else goto block34;
block38:;
int64_t $tmp1983 = $tmp1968.value;
int64_t $tmp1984 = $tmp1941.value;
int64_t $tmp1985 = $tmp1983 + $tmp1984;
frost$core$Int $tmp1986 = (frost$core$Int) {$tmp1985};
*(&local5) = $tmp1986;
goto block33;
block34:;
goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:528
frost$core$Int $tmp1987 = (frost$core$Int) {0u};
frost$core$Int* $tmp1988 = &param2->_length;
frost$core$Int $tmp1989 = *$tmp1988;
frost$core$Bit $tmp1990 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1991 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1987, $tmp1989, $tmp1990);
frost$core$Int $tmp1992 = $tmp1991.min;
*(&local6) = $tmp1992;
frost$core$Int $tmp1993 = $tmp1991.max;
frost$core$Bit $tmp1994 = $tmp1991.inclusive;
bool $tmp1995 = $tmp1994.value;
frost$core$Int $tmp1996 = (frost$core$Int) {1u};
if ($tmp1995) goto block44; else goto block45;
block44:;
int64_t $tmp1997 = $tmp1992.value;
int64_t $tmp1998 = $tmp1993.value;
bool $tmp1999 = $tmp1997 <= $tmp1998;
frost$core$Bit $tmp2000 = (frost$core$Bit) {$tmp1999};
bool $tmp2001 = $tmp2000.value;
if ($tmp2001) goto block41; else goto block42;
block45:;
int64_t $tmp2002 = $tmp1992.value;
int64_t $tmp2003 = $tmp1993.value;
bool $tmp2004 = $tmp2002 < $tmp2003;
frost$core$Bit $tmp2005 = (frost$core$Bit) {$tmp2004};
bool $tmp2006 = $tmp2005.value;
if ($tmp2006) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:529
frost$core$Char8** $tmp2007 = &param0->data;
frost$core$Char8* $tmp2008 = *$tmp2007;
frost$core$MutableString$Index $tmp2009 = param1.min;
frost$core$Int $tmp2010 = $tmp2009.value;
frost$core$Int $tmp2011 = *(&local6);
int64_t $tmp2012 = $tmp2010.value;
int64_t $tmp2013 = $tmp2011.value;
int64_t $tmp2014 = $tmp2012 + $tmp2013;
frost$core$Int $tmp2015 = (frost$core$Int) {$tmp2014};
frost$core$Int64 $tmp2016 = frost$core$Int64$init$frost$core$Int($tmp2015);
frost$core$Char8** $tmp2017 = &param2->data;
frost$core$Char8* $tmp2018 = *$tmp2017;
frost$core$Int $tmp2019 = *(&local6);
frost$core$Int64 $tmp2020 = frost$core$Int64$init$frost$core$Int($tmp2019);
int64_t $tmp2021 = $tmp2020.value;
frost$core$Char8 $tmp2022 = $tmp2018[$tmp2021];
int64_t $tmp2023 = $tmp2016.value;
$tmp2008[$tmp2023] = $tmp2022;
frost$core$Int $tmp2024 = *(&local6);
int64_t $tmp2025 = $tmp1993.value;
int64_t $tmp2026 = $tmp2024.value;
int64_t $tmp2027 = $tmp2025 - $tmp2026;
frost$core$Int $tmp2028 = (frost$core$Int) {$tmp2027};
if ($tmp1995) goto block47; else goto block48;
block47:;
int64_t $tmp2029 = $tmp2028.value;
int64_t $tmp2030 = $tmp1996.value;
bool $tmp2031 = $tmp2029 >= $tmp2030;
frost$core$Bit $tmp2032 = (frost$core$Bit) {$tmp2031};
bool $tmp2033 = $tmp2032.value;
if ($tmp2033) goto block46; else goto block42;
block48:;
int64_t $tmp2034 = $tmp2028.value;
int64_t $tmp2035 = $tmp1996.value;
bool $tmp2036 = $tmp2034 > $tmp2035;
frost$core$Bit $tmp2037 = (frost$core$Bit) {$tmp2036};
bool $tmp2038 = $tmp2037.value;
if ($tmp2038) goto block46; else goto block42;
block46:;
int64_t $tmp2039 = $tmp2024.value;
int64_t $tmp2040 = $tmp1996.value;
int64_t $tmp2041 = $tmp2039 + $tmp2040;
frost$core$Int $tmp2042 = (frost$core$Int) {$tmp2041};
*(&local6) = $tmp2042;
goto block41;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:531
frost$core$Int $tmp2043 = *(&local2);
frost$core$Int* $tmp2044 = &param0->_length;
*$tmp2044 = $tmp2043;
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
frost$core$Int $tmp2045 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2046 = &(&local1)->value;
*$tmp2046 = $tmp2045;
frost$core$MutableString$Index $tmp2047 = *(&local1);
*(&local0) = $tmp2047;
frost$core$MutableString$Index $tmp2048 = *(&local0);
frost$core$Int $tmp2049 = param1.min;
frost$core$MutableString$Index $tmp2050 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index(param0, $tmp2048, $tmp2049);
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:536:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp2051 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2052 = &(&local3)->value;
*$tmp2052 = $tmp2051;
frost$core$MutableString$Index $tmp2053 = *(&local3);
*(&local2) = $tmp2053;
frost$core$MutableString$Index $tmp2054 = *(&local2);
frost$core$Int $tmp2055 = param1.max;
frost$core$MutableString$Index $tmp2056 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index(param0, $tmp2054, $tmp2055);
frost$core$Bit $tmp2057 = param1.inclusive;
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp2058 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp2050, $tmp2056, $tmp2057);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp2058, param2);
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
frost$core$MutableString$Index$nullable $tmp2059 = param1.min;
frost$core$Bit $tmp2060 = (frost$core$Bit) {$tmp2059.nonnull};
bool $tmp2061 = $tmp2060.value;
if ($tmp2061) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:544
frost$core$MutableString$Index$nullable $tmp2062 = param1.min;
frost$core$Bit $tmp2063 = (frost$core$Bit) {$tmp2062.nonnull};
bool $tmp2064 = $tmp2063.value;
if ($tmp2064) goto block4; else goto block5;
block5:;
frost$core$Int $tmp2065 = (frost$core$Int) {544u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2066, $tmp2065, &$s2067);
abort(); // unreachable
block4:;
*(&local0) = ((frost$core$MutableString$Index) $tmp2062.value);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:547
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:547:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp2068 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2069 = &(&local2)->value;
*$tmp2069 = $tmp2068;
frost$core$MutableString$Index $tmp2070 = *(&local2);
*(&local1) = $tmp2070;
frost$core$MutableString$Index $tmp2071 = *(&local1);
*(&local0) = $tmp2071;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:549
frost$core$Bit $tmp2072 = param1.inclusive;
*(&local3) = $tmp2072;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:550
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:551
frost$core$MutableString$Index$nullable $tmp2073 = param1.max;
frost$core$Bit $tmp2074 = (frost$core$Bit) {$tmp2073.nonnull};
bool $tmp2075 = $tmp2074.value;
if ($tmp2075) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:552
frost$core$MutableString$Index$nullable $tmp2076 = param1.max;
frost$core$Bit $tmp2077 = (frost$core$Bit) {$tmp2076.nonnull};
bool $tmp2078 = $tmp2077.value;
if ($tmp2078) goto block11; else goto block12;
block12:;
frost$core$Int $tmp2079 = (frost$core$Int) {552u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2080, $tmp2079, &$s2081);
abort(); // unreachable
block11:;
*(&local4) = ((frost$core$MutableString$Index) $tmp2076.value);
goto block9;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:555
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:555:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:187
frost$core$Int* $tmp2082 = &param0->_length;
frost$core$Int $tmp2083 = *$tmp2082;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2084 = &(&local6)->value;
*$tmp2084 = $tmp2083;
frost$core$MutableString$Index $tmp2085 = *(&local6);
*(&local5) = $tmp2085;
frost$core$MutableString$Index $tmp2086 = *(&local5);
*(&local4) = $tmp2086;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:556
frost$core$Bit $tmp2087 = (frost$core$Bit) {false};
*(&local3) = $tmp2087;
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:558
frost$core$MutableString$Index $tmp2088 = *(&local0);
frost$core$MutableString$Index $tmp2089 = *(&local4);
frost$core$Bit $tmp2090 = *(&local3);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp2091 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp2088, $tmp2089, $tmp2090);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp2091, param2);
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
frost$core$Int$nullable $tmp2092 = param1.min;
frost$core$Bit $tmp2093 = (frost$core$Bit) {$tmp2092.nonnull};
bool $tmp2094 = $tmp2093.value;
if ($tmp2094) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:565
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:565:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp2095 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2096 = &(&local2)->value;
*$tmp2096 = $tmp2095;
frost$core$MutableString$Index $tmp2097 = *(&local2);
*(&local1) = $tmp2097;
frost$core$MutableString$Index $tmp2098 = *(&local1);
frost$core$Int$nullable $tmp2099 = param1.min;
frost$core$Bit $tmp2100 = (frost$core$Bit) {$tmp2099.nonnull};
bool $tmp2101 = $tmp2100.value;
if ($tmp2101) goto block6; else goto block7;
block7:;
frost$core$Int $tmp2102 = (frost$core$Int) {565u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2103, $tmp2102, &$s2104);
abort(); // unreachable
block6:;
frost$core$MutableString$Index $tmp2105 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index(param0, $tmp2098, ((frost$core$Int) $tmp2099.value));
*(&local0) = $tmp2105;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:568
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:568:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp2106 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2107 = &(&local4)->value;
*$tmp2107 = $tmp2106;
frost$core$MutableString$Index $tmp2108 = *(&local4);
*(&local3) = $tmp2108;
frost$core$MutableString$Index $tmp2109 = *(&local3);
*(&local0) = $tmp2109;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:570
frost$core$Bit $tmp2110 = param1.inclusive;
*(&local5) = $tmp2110;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:571
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:572
frost$core$Int$nullable $tmp2111 = param1.max;
frost$core$Bit $tmp2112 = (frost$core$Bit) {$tmp2111.nonnull};
bool $tmp2113 = $tmp2112.value;
if ($tmp2113) goto block10; else goto block12;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:573
// begin inline call to function frost.core.MutableString.get_start():frost.core.MutableString.Index from MutableString.frost:573:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:180
frost$core$Int $tmp2114 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2115 = &(&local8)->value;
*$tmp2115 = $tmp2114;
frost$core$MutableString$Index $tmp2116 = *(&local8);
*(&local7) = $tmp2116;
frost$core$MutableString$Index $tmp2117 = *(&local7);
frost$core$Int$nullable $tmp2118 = param1.max;
frost$core$Bit $tmp2119 = (frost$core$Bit) {$tmp2118.nonnull};
bool $tmp2120 = $tmp2119.value;
if ($tmp2120) goto block15; else goto block16;
block16:;
frost$core$Int $tmp2121 = (frost$core$Int) {573u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2122, $tmp2121, &$s2123);
abort(); // unreachable
block15:;
frost$core$MutableString$Index $tmp2124 = frost$core$MutableString$offset$frost$core$MutableString$Index$frost$core$Int$R$frost$core$MutableString$Index(param0, $tmp2117, ((frost$core$Int) $tmp2118.value));
*(&local6) = $tmp2124;
goto block11;
block12:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:576
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from MutableString.frost:576:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:187
frost$core$Int* $tmp2125 = &param0->_length;
frost$core$Int $tmp2126 = *$tmp2125;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2127 = &(&local10)->value;
*$tmp2127 = $tmp2126;
frost$core$MutableString$Index $tmp2128 = *(&local10);
*(&local9) = $tmp2128;
frost$core$MutableString$Index $tmp2129 = *(&local9);
*(&local6) = $tmp2129;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:577
frost$core$Bit $tmp2130 = (frost$core$Bit) {false};
*(&local5) = $tmp2130;
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:579
frost$core$MutableString$Index $tmp2131 = *(&local0);
frost$core$MutableString$Index $tmp2132 = *(&local6);
frost$core$Bit $tmp2133 = *(&local5);
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp2134 = frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit($tmp2131, $tmp2132, $tmp2133);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$GT$frost$core$String(param0, $tmp2134, param2);
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
frost$core$Int $tmp2135 = (frost$core$Int) {0u};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:180:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2136 = &(&local1)->value;
*$tmp2136 = $tmp2135;
frost$core$MutableString$Index $tmp2137 = *(&local1);
*(&local0) = $tmp2137;
frost$core$MutableString$Index $tmp2138 = *(&local0);
*(&local2) = $tmp2138;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:585
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:586
frost$core$MutableString$Index $tmp2139 = *(&local2);
frost$core$MutableString$Index$nullable $tmp2140 = frost$core$MutableString$indexOf$frost$core$String$frost$core$MutableString$Index$R$frost$core$MutableString$Index$Q(param0, param1, $tmp2139);
*(&local3) = $tmp2140;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:587
frost$core$MutableString$Index$nullable $tmp2141 = *(&local3);
frost$core$Bit $tmp2142 = (frost$core$Bit) {!$tmp2141.nonnull};
bool $tmp2143 = $tmp2142.value;
if ($tmp2143) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:588
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:590
frost$core$MutableString$Index$nullable $tmp2144 = *(&local3);
frost$core$MutableString$Index$nullable $tmp2145 = *(&local3);
frost$core$Bit $tmp2146 = (frost$core$Bit) {$tmp2145.nonnull};
bool $tmp2147 = $tmp2146.value;
if ($tmp2147) goto block7; else goto block8;
block8:;
frost$core$Int $tmp2148 = (frost$core$Int) {590u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2149, $tmp2148, &$s2150);
abort(); // unreachable
block7:;
frost$core$Int $tmp2151 = ((frost$core$MutableString$Index) $tmp2145.value).value;
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int from MutableString.frost:590:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:492
frost$core$Int* $tmp2152 = &param1->_length;
frost$core$Int $tmp2153 = *$tmp2152;
int64_t $tmp2154 = $tmp2151.value;
int64_t $tmp2155 = $tmp2153.value;
int64_t $tmp2156 = $tmp2154 + $tmp2155;
frost$core$Int $tmp2157 = (frost$core$Int) {$tmp2156};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:590:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2158 = &(&local5)->value;
*$tmp2158 = $tmp2157;
frost$core$MutableString$Index $tmp2159 = *(&local5);
*(&local4) = $tmp2159;
frost$core$MutableString$Index $tmp2160 = *(&local4);
frost$core$Bit $tmp2161 = (frost$core$Bit) {((frost$core$MutableString$Index$nullable) { $tmp2160, true }).nonnull};
bool $tmp2162 = $tmp2161.value;
if ($tmp2162) goto block11; else goto block12;
block12:;
frost$core$Int $tmp2163 = (frost$core$Int) {590u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2164, $tmp2163, &$s2165);
abort(); // unreachable
block11:;
frost$core$Bit $tmp2166 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$MutableString$Index$Q$GT $tmp2167 = frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$init$frost$core$MutableString$Index$Q$frost$core$MutableString$Index$Q$frost$core$Bit($tmp2144, ((frost$core$MutableString$Index$nullable) { ((frost$core$MutableString$Index) ((frost$core$MutableString$Index$nullable) { $tmp2160, true }).value), true }), $tmp2166);
frost$core$MutableString$$IDXEQ$frost$core$Range$LTfrost$core$MutableString$Index$Q$GT$frost$core$String(param0, $tmp2167, param2);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:591
frost$core$MutableString$Index$nullable $tmp2168 = *(&local3);
frost$core$Bit $tmp2169 = (frost$core$Bit) {$tmp2168.nonnull};
bool $tmp2170 = $tmp2169.value;
if ($tmp2170) goto block13; else goto block14;
block14:;
frost$core$Int $tmp2171 = (frost$core$Int) {591u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2172, $tmp2171, &$s2173);
abort(); // unreachable
block13:;
frost$core$Int $tmp2174 = ((frost$core$MutableString$Index) $tmp2168.value).value;
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int from MutableString.frost:591:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:492
frost$core$Int* $tmp2175 = &param2->_length;
frost$core$Int $tmp2176 = *$tmp2175;
frost$core$Int $tmp2177 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from MutableString.frost:591:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
int64_t $tmp2178 = $tmp2176.value;
int64_t $tmp2179 = $tmp2177.value;
bool $tmp2180 = $tmp2178 > $tmp2179;
frost$core$Bit $tmp2181 = (frost$core$Bit) {$tmp2180};
bool $tmp2182 = $tmp2181.value;
if ($tmp2182) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
int64_t $tmp2183 = $tmp2176.value;
frost$core$Int $tmp2184 = (frost$core$Int) {$tmp2183};
*(&local6) = $tmp2184;
goto block16;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
int64_t $tmp2185 = $tmp2177.value;
frost$core$Int $tmp2186 = (frost$core$Int) {$tmp2185};
*(&local6) = $tmp2186;
goto block16;
block16:;
frost$core$Int $tmp2187 = *(&local6);
int64_t $tmp2188 = $tmp2174.value;
int64_t $tmp2189 = $tmp2187.value;
int64_t $tmp2190 = $tmp2188 + $tmp2189;
frost$core$Int $tmp2191 = (frost$core$Int) {$tmp2190};
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:591:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp2192 = &(&local8)->value;
*$tmp2192 = $tmp2191;
frost$core$MutableString$Index $tmp2193 = *(&local8);
*(&local7) = $tmp2193;
frost$core$MutableString$Index $tmp2194 = *(&local7);
*(&local2) = $tmp2194;
goto block3;

}
void frost$core$MutableString$ensureCapacity$frost$core$Int(frost$core$MutableString* param0, frost$core$Int param1) {

frost$core$Int local0;
frost$core$Int* $tmp2195 = &param0->maxLength;
frost$core$Int $tmp2196 = *$tmp2195;
frost$core$Int $tmp2197 = (frost$core$Int) {0u};
int64_t $tmp2198 = $tmp2196.value;
int64_t $tmp2199 = $tmp2197.value;
bool $tmp2200 = $tmp2198 > $tmp2199;
frost$core$Bit $tmp2201 = (frost$core$Bit) {$tmp2200};
bool $tmp2202 = $tmp2201.value;
if ($tmp2202) goto block1; else goto block2;
block2:;
frost$core$Int $tmp2203 = (frost$core$Int) {598u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2204, $tmp2203, &$s2205);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:599
frost$core$Int* $tmp2206 = &param0->maxLength;
frost$core$Int $tmp2207 = *$tmp2206;
int64_t $tmp2208 = $tmp2207.value;
int64_t $tmp2209 = param1.value;
bool $tmp2210 = $tmp2208 >= $tmp2209;
frost$core$Bit $tmp2211 = (frost$core$Bit) {$tmp2210};
bool $tmp2212 = $tmp2211.value;
if ($tmp2212) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:600
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:602
frost$core$Int* $tmp2213 = &param0->maxLength;
frost$core$Int $tmp2214 = *$tmp2213;
*(&local0) = $tmp2214;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:603
goto block5;
block5:;
frost$core$Int* $tmp2215 = &param0->maxLength;
frost$core$Int $tmp2216 = *$tmp2215;
int64_t $tmp2217 = $tmp2216.value;
int64_t $tmp2218 = param1.value;
bool $tmp2219 = $tmp2217 < $tmp2218;
frost$core$Bit $tmp2220 = (frost$core$Bit) {$tmp2219};
bool $tmp2221 = $tmp2220.value;
if ($tmp2221) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:604
frost$core$Int* $tmp2222 = &param0->maxLength;
frost$core$Int $tmp2223 = *$tmp2222;
frost$core$Int $tmp2224 = (frost$core$Int) {2u};
int64_t $tmp2225 = $tmp2223.value;
int64_t $tmp2226 = $tmp2224.value;
int64_t $tmp2227 = $tmp2225 * $tmp2226;
frost$core$Int $tmp2228 = (frost$core$Int) {$tmp2227};
frost$core$Int* $tmp2229 = &param0->maxLength;
*$tmp2229 = $tmp2228;
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:606
frost$core$Char8** $tmp2230 = &param0->data;
frost$core$Char8* $tmp2231 = *$tmp2230;
frost$core$Int $tmp2232 = *(&local0);
frost$core$Int64 $tmp2233 = frost$core$Int64$init$frost$core$Int($tmp2232);
frost$core$Int* $tmp2234 = &param0->maxLength;
frost$core$Int $tmp2235 = *$tmp2234;
frost$core$Int64 $tmp2236 = frost$core$Int64$init$frost$core$Int($tmp2235);
int64_t $tmp2237 = $tmp2233.value;
int64_t $tmp2238 = $tmp2236.value;
frost$core$Char8* $tmp2239 = (frost$core$Char8*) frostRealloc($tmp2231, $tmp2237 * 1, $tmp2238 * 1);
frost$core$Char8** $tmp2240 = &param0->data;
*$tmp2240 = $tmp2239;
return;

}
void frost$core$MutableString$clear(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:611
frost$core$Char8** $tmp2241 = &param0->data;
frost$core$Char8* $tmp2242 = *$tmp2241;
frost$core$Int* $tmp2243 = &param0->maxLength;
frost$core$Int $tmp2244 = *$tmp2243;
frost$core$Int64 $tmp2245 = frost$core$Int64$init$frost$core$Int($tmp2244);
frost$core$Int $tmp2246 = (frost$core$Int) {32u};
frost$core$Int64 $tmp2247 = frost$core$Int64$init$frost$core$Int($tmp2246);
int64_t $tmp2248 = $tmp2245.value;
int64_t $tmp2249 = $tmp2247.value;
frost$core$Char8* $tmp2250 = (frost$core$Char8*) frostRealloc($tmp2242, $tmp2248 * 1, $tmp2249 * 1);
frost$core$Char8** $tmp2251 = &param0->data;
*$tmp2251 = $tmp2250;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:612
frost$core$Int $tmp2252 = (frost$core$Int) {0u};
frost$core$Int* $tmp2253 = &param0->_length;
*$tmp2253 = $tmp2252;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:613
frost$core$Int $tmp2254 = (frost$core$Int) {32u};
frost$core$Int* $tmp2255 = &param0->maxLength;
*$tmp2255 = $tmp2254;
return;

}
frost$core$String* frost$core$MutableString$get_asString$R$frost$core$String(frost$core$MutableString* param0) {

frost$core$Char8* local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:622
frost$core$Int* $tmp2256 = &param0->_length;
frost$core$Int $tmp2257 = *$tmp2256;
frost$core$Int64 $tmp2258 = frost$core$Int64$init$frost$core$Int($tmp2257);
int64_t $tmp2259 = $tmp2258.value;
frost$core$Char8* $tmp2260 = ((frost$core$Char8*) frostAlloc($tmp2259 * 1));
*(&local0) = $tmp2260;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:623
frost$core$Int $tmp2261 = (frost$core$Int) {0u};
frost$core$Int* $tmp2262 = &param0->_length;
frost$core$Int $tmp2263 = *$tmp2262;
frost$core$Bit $tmp2264 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2265 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2261, $tmp2263, $tmp2264);
frost$core$Int $tmp2266 = $tmp2265.min;
*(&local1) = $tmp2266;
frost$core$Int $tmp2267 = $tmp2265.max;
frost$core$Bit $tmp2268 = $tmp2265.inclusive;
bool $tmp2269 = $tmp2268.value;
frost$core$Int $tmp2270 = (frost$core$Int) {1u};
if ($tmp2269) goto block4; else goto block5;
block4:;
int64_t $tmp2271 = $tmp2266.value;
int64_t $tmp2272 = $tmp2267.value;
bool $tmp2273 = $tmp2271 <= $tmp2272;
frost$core$Bit $tmp2274 = (frost$core$Bit) {$tmp2273};
bool $tmp2275 = $tmp2274.value;
if ($tmp2275) goto block1; else goto block2;
block5:;
int64_t $tmp2276 = $tmp2266.value;
int64_t $tmp2277 = $tmp2267.value;
bool $tmp2278 = $tmp2276 < $tmp2277;
frost$core$Bit $tmp2279 = (frost$core$Bit) {$tmp2278};
bool $tmp2280 = $tmp2279.value;
if ($tmp2280) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:624
frost$core$Char8* $tmp2281 = *(&local0);
frost$core$Int $tmp2282 = *(&local1);
frost$core$Int64 $tmp2283 = frost$core$Int64$init$frost$core$Int($tmp2282);
frost$core$Char8** $tmp2284 = &param0->data;
frost$core$Char8* $tmp2285 = *$tmp2284;
frost$core$Int $tmp2286 = *(&local1);
frost$core$Int64 $tmp2287 = frost$core$Int64$init$frost$core$Int($tmp2286);
int64_t $tmp2288 = $tmp2287.value;
frost$core$Char8 $tmp2289 = $tmp2285[$tmp2288];
int64_t $tmp2290 = $tmp2283.value;
$tmp2281[$tmp2290] = $tmp2289;
frost$core$Int $tmp2291 = *(&local1);
int64_t $tmp2292 = $tmp2267.value;
int64_t $tmp2293 = $tmp2291.value;
int64_t $tmp2294 = $tmp2292 - $tmp2293;
frost$core$Int $tmp2295 = (frost$core$Int) {$tmp2294};
if ($tmp2269) goto block7; else goto block8;
block7:;
int64_t $tmp2296 = $tmp2295.value;
int64_t $tmp2297 = $tmp2270.value;
bool $tmp2298 = $tmp2296 >= $tmp2297;
frost$core$Bit $tmp2299 = (frost$core$Bit) {$tmp2298};
bool $tmp2300 = $tmp2299.value;
if ($tmp2300) goto block6; else goto block2;
block8:;
int64_t $tmp2301 = $tmp2295.value;
int64_t $tmp2302 = $tmp2270.value;
bool $tmp2303 = $tmp2301 > $tmp2302;
frost$core$Bit $tmp2304 = (frost$core$Bit) {$tmp2303};
bool $tmp2305 = $tmp2304.value;
if ($tmp2305) goto block6; else goto block2;
block6:;
int64_t $tmp2306 = $tmp2291.value;
int64_t $tmp2307 = $tmp2270.value;
int64_t $tmp2308 = $tmp2306 + $tmp2307;
frost$core$Int $tmp2309 = (frost$core$Int) {$tmp2308};
*(&local1) = $tmp2309;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:626
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp2310 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp2311 = *(&local0);
frost$core$Int* $tmp2312 = &param0->_length;
frost$core$Int $tmp2313 = *$tmp2312;
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp2310, $tmp2311, $tmp2313);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2310));
return $tmp2310;

}
frost$core$String* frost$core$MutableString$finish$R$frost$core$String(frost$core$MutableString* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:638
frost$core$Char8** $tmp2314 = &param0->data;
frost$core$Char8* $tmp2315 = *$tmp2314;
frost$core$Int* $tmp2316 = &param0->maxLength;
frost$core$Int $tmp2317 = *$tmp2316;
frost$core$Int64 $tmp2318 = frost$core$Int64$init$frost$core$Int($tmp2317);
frost$core$Int* $tmp2319 = &param0->_length;
frost$core$Int $tmp2320 = *$tmp2319;
frost$core$Int64 $tmp2321 = frost$core$Int64$init$frost$core$Int($tmp2320);
int64_t $tmp2322 = $tmp2318.value;
int64_t $tmp2323 = $tmp2321.value;
frost$core$Char8* $tmp2324 = (frost$core$Char8*) frostRealloc($tmp2315, $tmp2322 * 1, $tmp2323 * 1);
frost$core$Char8** $tmp2325 = &param0->data;
*$tmp2325 = $tmp2324;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:639
frost$core$Int $tmp2326 = (frost$core$Int) {0u};
frost$core$Int* $tmp2327 = &param0->maxLength;
*$tmp2327 = $tmp2326;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:640
frost$core$Class** $tmp2329 = &((frost$core$Object*) &$s2328)->$class;
frost$core$Class* $tmp2330 = *$tmp2329;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
frost$core$Class** $tmp2331 = &((frost$core$Object*) param0)->$class;
frost$core$Class* $tmp2332 = *$tmp2331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
frost$core$Class** $tmp2333 = &((frost$core$Object*) param0)->$class;
*$tmp2333 = $tmp2330;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:641
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) ((frost$core$Object*) param0))));
return ((frost$core$String*) ((frost$core$Object*) param0));

}

