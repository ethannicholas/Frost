#include "panda/core/MutableString.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Char8.h"
#include "panda/core/Bit.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/core/Panda.h"
#include "panda/core/Char32.h"
#include "panda/core/UInt8.h"
#include "panda/core/MutableString/Index.h"
#include "panda/core/Equatable.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Matcher.h"
#include "panda/core/Range.LTpanda/core/MutableString/Index.GT.h"
#include "panda/core/Range.LTpanda/core/MutableString/Index.Q.GT.h"
#include "panda/core/MutableMethod.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int32.h"
#include "panda/core/Comparable.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"


static panda$core$String $s1;
panda$core$MutableString$class_type panda$core$MutableString$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$MutableString$convert$R$panda$core$String, panda$core$MutableString$cleanup, panda$core$MutableString$append$panda$core$Char8, panda$core$MutableString$append$panda$core$Char32, panda$core$MutableString$append$panda$core$String, panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64, panda$core$MutableString$append$panda$core$Object, panda$core$MutableString$get_length$R$panda$core$Int64, panda$core$MutableString$get_byteLength$R$panda$core$Int64, panda$core$MutableString$get_start$R$panda$core$MutableString$Index, panda$core$MutableString$get_end$R$panda$core$MutableString$Index, panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index, panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index, panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index, panda$core$MutableString$indexOf$panda$core$String$R$panda$core$MutableString$Index$Q, panda$core$MutableString$indexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q, panda$core$MutableString$contains$panda$core$Char8$R$panda$core$Bit, panda$core$MutableString$contains$panda$core$String$R$panda$core$Bit, panda$core$MutableString$startsWith$panda$core$String$R$panda$core$Bit, panda$core$MutableString$endsWith$panda$core$String$R$panda$core$Bit, panda$core$MutableString$lastIndexOf$panda$core$String$R$panda$core$MutableString$Index$Q, panda$core$MutableString$lastIndexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q, panda$core$MutableString$matches$panda$core$RegularExpression$R$panda$core$Bit, panda$core$MutableString$contains$panda$core$RegularExpression$R$panda$core$Bit, panda$core$MutableString$trim, panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String, panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit, panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP, panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP, panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32, panda$core$MutableString$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$MutableString$$IDXEQ$panda$core$MutableString$Index$panda$core$Char32, panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String, panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$core$String, panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String, panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String, panda$core$MutableString$replace$panda$core$String$panda$core$String, panda$core$MutableString$ensureCapacity$panda$core$Int64, panda$core$MutableString$clear, panda$core$MutableString$finish$R$panda$core$String} };

typedef panda$core$String* (*$fn459)(panda$core$Object*);
typedef panda$core$Bit (*$fn469)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1200)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1228)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn1273)(panda$core$String*);
typedef panda$core$Object* (*$fn1275)(panda$core$Object*, panda$core$String*);
typedef panda$core$String* (*$fn1279)(panda$core$Object*);
typedef panda$core$Object* (*$fn1344)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn1346)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1350)(panda$core$Object*);
typedef panda$core$Bit (*$fn1570)(panda$core$Comparable*, panda$core$Comparable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static panda$core$String $s812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 99, 1009871428836739909, NULL };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static panda$core$String $s1151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 99, 1009871428836739909, NULL };
static panda$core$String $s1214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static panda$core$String $s1267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s1392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static panda$core$String $s1495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static panda$core$String $s1621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static panda$core$String $s1622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x5b\x5d\x3a\x3d\x28\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e\x2c\x20\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 134, -2152859069647180220, NULL };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static panda$core$String $s1891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 99, 1009871428836739909, NULL };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 99, 1009871428836739909, NULL };
static panda$core$String $s1917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s1930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static panda$core$String $s1931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s1950 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 99, 1009871428836739909, NULL };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static panda$core$String $s1963 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 99, 1009871428836739909, NULL };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static panda$core$String $s1971 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 99, 1009871428836739909, NULL };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 19, -4004145775532106430, NULL };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x65\x6e\x73\x75\x72\x65\x43\x61\x70\x61\x63\x69\x74\x79\x28\x6e\x65\x77\x53\x69\x7a\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 97, -3184186071165599131, NULL };
static panda$core$String $s2107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void panda$core$MutableString$init(panda$core$MutableString* param0) {

// line 67
panda$core$Int64 $tmp2 = (panda$core$Int64) {32};
panda$core$MutableString$init$panda$core$Int64(param0, $tmp2);
return;

}
void panda$core$MutableString$init$panda$core$String(panda$core$MutableString* param0, panda$core$String* param1) {

panda$core$Int64 local0;
// line 71
panda$core$Int64* $tmp3 = &param1->_length;
panda$core$Int64 $tmp4 = *$tmp3;
panda$core$Int64* $tmp5 = &param0->_length;
*$tmp5 = $tmp4;
// line 72
panda$core$Int64* $tmp6 = &param0->_length;
panda$core$Int64 $tmp7 = *$tmp6;
panda$core$Int64 $tmp8 = (panda$core$Int64) {32};
int64_t $tmp9 = $tmp7.value;
int64_t $tmp10 = $tmp8.value;
int64_t $tmp11 = $tmp9 + $tmp10;
panda$core$Int64 $tmp12 = (panda$core$Int64) {$tmp11};
panda$core$Int64* $tmp13 = &param0->maxLength;
*$tmp13 = $tmp12;
// line 73
panda$core$Int64* $tmp14 = &param0->maxLength;
panda$core$Int64 $tmp15 = *$tmp14;
int64_t $tmp16 = $tmp15.value;
panda$core$Char8* $tmp17 = ((panda$core$Char8*) frostAlloc($tmp16 * 1));
panda$core$Char8** $tmp18 = &param0->data;
*$tmp18 = $tmp17;
// line 74
panda$core$Int64 $tmp19 = (panda$core$Int64) {0};
panda$core$Int64* $tmp20 = &param1->_length;
panda$core$Int64 $tmp21 = *$tmp20;
panda$core$Bit $tmp22 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp23 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp19, $tmp21, $tmp22);
panda$core$Int64 $tmp24 = $tmp23.min;
*(&local0) = $tmp24;
panda$core$Int64 $tmp25 = $tmp23.max;
panda$core$Bit $tmp26 = $tmp23.inclusive;
bool $tmp27 = $tmp26.value;
panda$core$Int64 $tmp28 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp29 = panda$core$Int64$convert$R$panda$core$UInt64($tmp28);
if ($tmp27) goto block4; else goto block5;
block4:;
int64_t $tmp30 = $tmp24.value;
int64_t $tmp31 = $tmp25.value;
bool $tmp32 = $tmp30 <= $tmp31;
panda$core$Bit $tmp33 = (panda$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block1; else goto block2;
block5:;
int64_t $tmp35 = $tmp24.value;
int64_t $tmp36 = $tmp25.value;
bool $tmp37 = $tmp35 < $tmp36;
panda$core$Bit $tmp38 = (panda$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block1; else goto block2;
block1:;
// line 75
panda$core$Char8** $tmp40 = &param0->data;
panda$core$Char8* $tmp41 = *$tmp40;
panda$core$Int64 $tmp42 = *(&local0);
panda$core$Char8** $tmp43 = &param1->data;
panda$core$Char8* $tmp44 = *$tmp43;
panda$core$Int64 $tmp45 = *(&local0);
int64_t $tmp46 = $tmp45.value;
panda$core$Char8 $tmp47 = $tmp44[$tmp46];
int64_t $tmp48 = $tmp42.value;
$tmp41[$tmp48] = $tmp47;
goto block3;
block3:;
panda$core$Int64 $tmp49 = *(&local0);
int64_t $tmp50 = $tmp25.value;
int64_t $tmp51 = $tmp49.value;
int64_t $tmp52 = $tmp50 - $tmp51;
panda$core$Int64 $tmp53 = (panda$core$Int64) {$tmp52};
panda$core$UInt64 $tmp54 = panda$core$Int64$convert$R$panda$core$UInt64($tmp53);
if ($tmp27) goto block7; else goto block8;
block7:;
uint64_t $tmp55 = $tmp54.value;
uint64_t $tmp56 = $tmp29.value;
bool $tmp57 = $tmp55 >= $tmp56;
panda$core$Bit $tmp58 = (panda$core$Bit) {$tmp57};
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block6; else goto block2;
block8:;
uint64_t $tmp60 = $tmp54.value;
uint64_t $tmp61 = $tmp29.value;
bool $tmp62 = $tmp60 > $tmp61;
panda$core$Bit $tmp63 = (panda$core$Bit) {$tmp62};
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block6; else goto block2;
block6:;
int64_t $tmp65 = $tmp49.value;
int64_t $tmp66 = $tmp28.value;
int64_t $tmp67 = $tmp65 + $tmp66;
panda$core$Int64 $tmp68 = (panda$core$Int64) {$tmp67};
*(&local0) = $tmp68;
goto block1;
block2:;
return;

}
void panda$core$MutableString$init$panda$core$Int64(panda$core$MutableString* param0, panda$core$Int64 param1) {

// line 80
panda$core$Int64 $tmp69 = (panda$core$Int64) {0};
panda$core$Int64* $tmp70 = &param0->_length;
*$tmp70 = $tmp69;
// line 81
panda$core$Int64* $tmp71 = &param0->maxLength;
*$tmp71 = param1;
// line 82
panda$core$Int64* $tmp72 = &param0->maxLength;
panda$core$Int64 $tmp73 = *$tmp72;
int64_t $tmp74 = $tmp73.value;
panda$core$Char8* $tmp75 = ((panda$core$Char8*) frostAlloc($tmp74 * 1));
panda$core$Char8** $tmp76 = &param0->data;
*$tmp76 = $tmp75;
return;

}
void panda$core$MutableString$cleanup(panda$core$MutableString* param0) {

// line 88
panda$core$Char8** $tmp77 = &param0->data;
panda$core$Char8* $tmp78 = *$tmp77;
frostFree($tmp78);
// line 87
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$String** $tmp79 = &param0->dummy;
panda$core$String* $tmp80 = *$tmp79;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
return;

}
void panda$core$MutableString$append$panda$core$Char8(panda$core$MutableString* param0, panda$core$Char8 param1) {

// line 93
panda$core$Int64* $tmp81 = &param0->_length;
panda$core$Int64 $tmp82 = *$tmp81;
panda$core$Int64 $tmp83 = (panda$core$Int64) {1};
int64_t $tmp84 = $tmp82.value;
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84 + $tmp85;
panda$core$Int64 $tmp87 = (panda$core$Int64) {$tmp86};
panda$core$MutableString$ensureCapacity$panda$core$Int64(param0, $tmp87);
// line 94
panda$core$Char8** $tmp88 = &param0->data;
panda$core$Char8* $tmp89 = *$tmp88;
panda$core$Int64* $tmp90 = &param0->_length;
panda$core$Int64 $tmp91 = *$tmp90;
int64_t $tmp92 = $tmp91.value;
$tmp89[$tmp92] = param1;
// line 95
panda$core$Int64* $tmp93 = &param0->_length;
panda$core$Int64 $tmp94 = *$tmp93;
panda$core$Int64 $tmp95 = (panda$core$Int64) {1};
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96 + $tmp97;
panda$core$Int64 $tmp99 = (panda$core$Int64) {$tmp98};
panda$core$Int64* $tmp100 = &param0->_length;
*$tmp100 = $tmp99;
return;

}
void panda$core$MutableString$append$panda$core$Char32(panda$core$MutableString* param0, panda$core$Char32 param1) {

int32_t local0;
// line 100
int32_t $tmp101 = param1.value;
*(&local0) = $tmp101;
// line 101
int32_t $tmp102 = *(&local0);
bool $tmp103 = $tmp102 < 128;
panda$core$Bit $tmp104 = panda$core$Bit$init$builtin_bit($tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block1; else goto block3;
block1:;
// line 102
panda$core$Int64* $tmp106 = &param0->_length;
panda$core$Int64 $tmp107 = *$tmp106;
panda$core$Int64 $tmp108 = (panda$core$Int64) {1};
int64_t $tmp109 = $tmp107.value;
int64_t $tmp110 = $tmp108.value;
int64_t $tmp111 = $tmp109 + $tmp110;
panda$core$Int64 $tmp112 = (panda$core$Int64) {$tmp111};
panda$core$MutableString$ensureCapacity$panda$core$Int64(param0, $tmp112);
// line 103
panda$core$Char8** $tmp113 = &param0->data;
panda$core$Char8* $tmp114 = *$tmp113;
panda$core$Int64* $tmp115 = &param0->_length;
panda$core$Int64 $tmp116 = *$tmp115;
int32_t $tmp117 = *(&local0);
panda$core$UInt8 $tmp118 = (panda$core$UInt8) {((uint8_t) $tmp117)};
panda$core$Char8 $tmp119 = panda$core$Char8$init$panda$core$UInt8($tmp118);
int64_t $tmp120 = $tmp116.value;
$tmp114[$tmp120] = $tmp119;
// line 104
panda$core$Int64* $tmp121 = &param0->_length;
panda$core$Int64 $tmp122 = *$tmp121;
panda$core$Int64 $tmp123 = (panda$core$Int64) {1};
int64_t $tmp124 = $tmp122.value;
int64_t $tmp125 = $tmp123.value;
int64_t $tmp126 = $tmp124 + $tmp125;
panda$core$Int64 $tmp127 = (panda$core$Int64) {$tmp126};
panda$core$Int64* $tmp128 = &param0->_length;
*$tmp128 = $tmp127;
goto block2;
block3:;
// line 106
int32_t $tmp129 = *(&local0);
bool $tmp130 = $tmp129 < 2048;
panda$core$Bit $tmp131 = panda$core$Bit$init$builtin_bit($tmp130);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block4; else goto block6;
block4:;
// line 107
panda$core$Int64* $tmp133 = &param0->_length;
panda$core$Int64 $tmp134 = *$tmp133;
panda$core$Int64 $tmp135 = (panda$core$Int64) {2};
int64_t $tmp136 = $tmp134.value;
int64_t $tmp137 = $tmp135.value;
int64_t $tmp138 = $tmp136 + $tmp137;
panda$core$Int64 $tmp139 = (panda$core$Int64) {$tmp138};
panda$core$MutableString$ensureCapacity$panda$core$Int64(param0, $tmp139);
// line 108
panda$core$Char8** $tmp140 = &param0->data;
panda$core$Char8* $tmp141 = *$tmp140;
panda$core$Int64* $tmp142 = &param0->_length;
panda$core$Int64 $tmp143 = *$tmp142;
panda$core$Int64 $tmp144 = (panda$core$Int64) {0};
int64_t $tmp145 = $tmp143.value;
int64_t $tmp146 = $tmp144.value;
int64_t $tmp147 = $tmp145 + $tmp146;
panda$core$Int64 $tmp148 = (panda$core$Int64) {$tmp147};
int32_t $tmp149 = *(&local0);
int32_t $tmp150 = $tmp149 >> 6;
int32_t $tmp151 = $tmp150 | 192;
panda$core$UInt8 $tmp152 = (panda$core$UInt8) {((uint8_t) $tmp151)};
panda$core$Char8 $tmp153 = panda$core$Char8$init$panda$core$UInt8($tmp152);
int64_t $tmp154 = $tmp148.value;
$tmp141[$tmp154] = $tmp153;
// line 109
panda$core$Char8** $tmp155 = &param0->data;
panda$core$Char8* $tmp156 = *$tmp155;
panda$core$Int64* $tmp157 = &param0->_length;
panda$core$Int64 $tmp158 = *$tmp157;
panda$core$Int64 $tmp159 = (panda$core$Int64) {1};
int64_t $tmp160 = $tmp158.value;
int64_t $tmp161 = $tmp159.value;
int64_t $tmp162 = $tmp160 + $tmp161;
panda$core$Int64 $tmp163 = (panda$core$Int64) {$tmp162};
int32_t $tmp164 = *(&local0);
int32_t $tmp165 = $tmp164 & 63;
int32_t $tmp166 = $tmp165 | 128;
panda$core$UInt8 $tmp167 = (panda$core$UInt8) {((uint8_t) $tmp166)};
panda$core$Char8 $tmp168 = panda$core$Char8$init$panda$core$UInt8($tmp167);
int64_t $tmp169 = $tmp163.value;
$tmp156[$tmp169] = $tmp168;
// line 110
panda$core$Int64* $tmp170 = &param0->_length;
panda$core$Int64 $tmp171 = *$tmp170;
panda$core$Int64 $tmp172 = (panda$core$Int64) {2};
int64_t $tmp173 = $tmp171.value;
int64_t $tmp174 = $tmp172.value;
int64_t $tmp175 = $tmp173 + $tmp174;
panda$core$Int64 $tmp176 = (panda$core$Int64) {$tmp175};
panda$core$Int64* $tmp177 = &param0->_length;
*$tmp177 = $tmp176;
goto block5;
block6:;
// line 112
int32_t $tmp178 = *(&local0);
bool $tmp179 = $tmp178 < 65536;
panda$core$Bit $tmp180 = panda$core$Bit$init$builtin_bit($tmp179);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block7; else goto block9;
block7:;
// line 113
panda$core$Int64* $tmp182 = &param0->_length;
panda$core$Int64 $tmp183 = *$tmp182;
panda$core$Int64 $tmp184 = (panda$core$Int64) {3};
int64_t $tmp185 = $tmp183.value;
int64_t $tmp186 = $tmp184.value;
int64_t $tmp187 = $tmp185 + $tmp186;
panda$core$Int64 $tmp188 = (panda$core$Int64) {$tmp187};
panda$core$MutableString$ensureCapacity$panda$core$Int64(param0, $tmp188);
// line 114
panda$core$Char8** $tmp189 = &param0->data;
panda$core$Char8* $tmp190 = *$tmp189;
panda$core$Int64* $tmp191 = &param0->_length;
panda$core$Int64 $tmp192 = *$tmp191;
panda$core$Int64 $tmp193 = (panda$core$Int64) {0};
int64_t $tmp194 = $tmp192.value;
int64_t $tmp195 = $tmp193.value;
int64_t $tmp196 = $tmp194 + $tmp195;
panda$core$Int64 $tmp197 = (panda$core$Int64) {$tmp196};
int32_t $tmp198 = *(&local0);
int32_t $tmp199 = $tmp198 >> 12;
int32_t $tmp200 = $tmp199 | 224;
panda$core$UInt8 $tmp201 = (panda$core$UInt8) {((uint8_t) $tmp200)};
panda$core$Char8 $tmp202 = panda$core$Char8$init$panda$core$UInt8($tmp201);
int64_t $tmp203 = $tmp197.value;
$tmp190[$tmp203] = $tmp202;
// line 115
panda$core$Char8** $tmp204 = &param0->data;
panda$core$Char8* $tmp205 = *$tmp204;
panda$core$Int64* $tmp206 = &param0->_length;
panda$core$Int64 $tmp207 = *$tmp206;
panda$core$Int64 $tmp208 = (panda$core$Int64) {1};
int64_t $tmp209 = $tmp207.value;
int64_t $tmp210 = $tmp208.value;
int64_t $tmp211 = $tmp209 + $tmp210;
panda$core$Int64 $tmp212 = (panda$core$Int64) {$tmp211};
int32_t $tmp213 = *(&local0);
int32_t $tmp214 = $tmp213 >> 6;
int32_t $tmp215 = $tmp214 & 63;
int32_t $tmp216 = $tmp215 | 128;
panda$core$UInt8 $tmp217 = (panda$core$UInt8) {((uint8_t) $tmp216)};
panda$core$Char8 $tmp218 = panda$core$Char8$init$panda$core$UInt8($tmp217);
int64_t $tmp219 = $tmp212.value;
$tmp205[$tmp219] = $tmp218;
// line 116
panda$core$Char8** $tmp220 = &param0->data;
panda$core$Char8* $tmp221 = *$tmp220;
panda$core$Int64* $tmp222 = &param0->_length;
panda$core$Int64 $tmp223 = *$tmp222;
panda$core$Int64 $tmp224 = (panda$core$Int64) {2};
int64_t $tmp225 = $tmp223.value;
int64_t $tmp226 = $tmp224.value;
int64_t $tmp227 = $tmp225 + $tmp226;
panda$core$Int64 $tmp228 = (panda$core$Int64) {$tmp227};
int32_t $tmp229 = *(&local0);
int32_t $tmp230 = $tmp229 & 63;
int32_t $tmp231 = $tmp230 | 128;
panda$core$UInt8 $tmp232 = (panda$core$UInt8) {((uint8_t) $tmp231)};
panda$core$Char8 $tmp233 = panda$core$Char8$init$panda$core$UInt8($tmp232);
int64_t $tmp234 = $tmp228.value;
$tmp221[$tmp234] = $tmp233;
// line 117
panda$core$Int64* $tmp235 = &param0->_length;
panda$core$Int64 $tmp236 = *$tmp235;
panda$core$Int64 $tmp237 = (panda$core$Int64) {3};
int64_t $tmp238 = $tmp236.value;
int64_t $tmp239 = $tmp237.value;
int64_t $tmp240 = $tmp238 + $tmp239;
panda$core$Int64 $tmp241 = (panda$core$Int64) {$tmp240};
panda$core$Int64* $tmp242 = &param0->_length;
*$tmp242 = $tmp241;
goto block8;
block9:;
// line 1
// line 120
panda$core$Int64* $tmp243 = &param0->_length;
panda$core$Int64 $tmp244 = *$tmp243;
panda$core$Int64 $tmp245 = (panda$core$Int64) {4};
int64_t $tmp246 = $tmp244.value;
int64_t $tmp247 = $tmp245.value;
int64_t $tmp248 = $tmp246 + $tmp247;
panda$core$Int64 $tmp249 = (panda$core$Int64) {$tmp248};
panda$core$MutableString$ensureCapacity$panda$core$Int64(param0, $tmp249);
// line 121
panda$core$Char8** $tmp250 = &param0->data;
panda$core$Char8* $tmp251 = *$tmp250;
panda$core$Int64* $tmp252 = &param0->_length;
panda$core$Int64 $tmp253 = *$tmp252;
panda$core$Int64 $tmp254 = (panda$core$Int64) {0};
int64_t $tmp255 = $tmp253.value;
int64_t $tmp256 = $tmp254.value;
int64_t $tmp257 = $tmp255 + $tmp256;
panda$core$Int64 $tmp258 = (panda$core$Int64) {$tmp257};
int32_t $tmp259 = *(&local0);
int32_t $tmp260 = $tmp259 >> 18;
int32_t $tmp261 = $tmp260 | 240;
panda$core$UInt8 $tmp262 = (panda$core$UInt8) {((uint8_t) $tmp261)};
panda$core$Char8 $tmp263 = panda$core$Char8$init$panda$core$UInt8($tmp262);
int64_t $tmp264 = $tmp258.value;
$tmp251[$tmp264] = $tmp263;
// line 122
panda$core$Char8** $tmp265 = &param0->data;
panda$core$Char8* $tmp266 = *$tmp265;
panda$core$Int64* $tmp267 = &param0->_length;
panda$core$Int64 $tmp268 = *$tmp267;
panda$core$Int64 $tmp269 = (panda$core$Int64) {1};
int64_t $tmp270 = $tmp268.value;
int64_t $tmp271 = $tmp269.value;
int64_t $tmp272 = $tmp270 + $tmp271;
panda$core$Int64 $tmp273 = (panda$core$Int64) {$tmp272};
int32_t $tmp274 = *(&local0);
int32_t $tmp275 = $tmp274 >> 12;
int32_t $tmp276 = $tmp275 & 63;
int32_t $tmp277 = $tmp276 | 128;
panda$core$UInt8 $tmp278 = (panda$core$UInt8) {((uint8_t) $tmp277)};
panda$core$Char8 $tmp279 = panda$core$Char8$init$panda$core$UInt8($tmp278);
int64_t $tmp280 = $tmp273.value;
$tmp266[$tmp280] = $tmp279;
// line 124
panda$core$Char8** $tmp281 = &param0->data;
panda$core$Char8* $tmp282 = *$tmp281;
panda$core$Int64* $tmp283 = &param0->_length;
panda$core$Int64 $tmp284 = *$tmp283;
panda$core$Int64 $tmp285 = (panda$core$Int64) {2};
int64_t $tmp286 = $tmp284.value;
int64_t $tmp287 = $tmp285.value;
int64_t $tmp288 = $tmp286 + $tmp287;
panda$core$Int64 $tmp289 = (panda$core$Int64) {$tmp288};
int32_t $tmp290 = *(&local0);
int32_t $tmp291 = $tmp290 >> 6;
int32_t $tmp292 = $tmp291 & 63;
int32_t $tmp293 = $tmp292 | 128;
panda$core$UInt8 $tmp294 = (panda$core$UInt8) {((uint8_t) $tmp293)};
panda$core$Char8 $tmp295 = panda$core$Char8$init$panda$core$UInt8($tmp294);
int64_t $tmp296 = $tmp289.value;
$tmp282[$tmp296] = $tmp295;
// line 125
panda$core$Char8** $tmp297 = &param0->data;
panda$core$Char8* $tmp298 = *$tmp297;
panda$core$Int64* $tmp299 = &param0->_length;
panda$core$Int64 $tmp300 = *$tmp299;
panda$core$Int64 $tmp301 = (panda$core$Int64) {3};
int64_t $tmp302 = $tmp300.value;
int64_t $tmp303 = $tmp301.value;
int64_t $tmp304 = $tmp302 + $tmp303;
panda$core$Int64 $tmp305 = (panda$core$Int64) {$tmp304};
int32_t $tmp306 = *(&local0);
int32_t $tmp307 = $tmp306 & 63;
int32_t $tmp308 = $tmp307 | 128;
panda$core$UInt8 $tmp309 = (panda$core$UInt8) {((uint8_t) $tmp308)};
panda$core$Char8 $tmp310 = panda$core$Char8$init$panda$core$UInt8($tmp309);
int64_t $tmp311 = $tmp305.value;
$tmp298[$tmp311] = $tmp310;
// line 126
panda$core$Int64* $tmp312 = &param0->_length;
panda$core$Int64 $tmp313 = *$tmp312;
panda$core$Int64 $tmp314 = (panda$core$Int64) {4};
int64_t $tmp315 = $tmp313.value;
int64_t $tmp316 = $tmp314.value;
int64_t $tmp317 = $tmp315 + $tmp316;
panda$core$Int64 $tmp318 = (panda$core$Int64) {$tmp317};
panda$core$Int64* $tmp319 = &param0->_length;
*$tmp319 = $tmp318;
goto block8;
block8:;
goto block5;
block5:;
goto block2;
block2:;
return;

}
void panda$core$MutableString$append$panda$core$String(panda$core$MutableString* param0, panda$core$String* param1) {

panda$core$Int64 local0;
// line 132
panda$core$Int64* $tmp320 = &param0->_length;
panda$core$Int64 $tmp321 = *$tmp320;
panda$core$Int64* $tmp322 = &param1->_length;
panda$core$Int64 $tmp323 = *$tmp322;
int64_t $tmp324 = $tmp321.value;
int64_t $tmp325 = $tmp323.value;
int64_t $tmp326 = $tmp324 + $tmp325;
panda$core$Int64 $tmp327 = (panda$core$Int64) {$tmp326};
panda$core$MutableString$ensureCapacity$panda$core$Int64(param0, $tmp327);
// line 133
panda$core$Int64 $tmp328 = (panda$core$Int64) {0};
panda$core$Int64* $tmp329 = &param1->_length;
panda$core$Int64 $tmp330 = *$tmp329;
panda$core$Bit $tmp331 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp332 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp328, $tmp330, $tmp331);
panda$core$Int64 $tmp333 = $tmp332.min;
*(&local0) = $tmp333;
panda$core$Int64 $tmp334 = $tmp332.max;
panda$core$Bit $tmp335 = $tmp332.inclusive;
bool $tmp336 = $tmp335.value;
panda$core$Int64 $tmp337 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp338 = panda$core$Int64$convert$R$panda$core$UInt64($tmp337);
if ($tmp336) goto block4; else goto block5;
block4:;
int64_t $tmp339 = $tmp333.value;
int64_t $tmp340 = $tmp334.value;
bool $tmp341 = $tmp339 <= $tmp340;
panda$core$Bit $tmp342 = (panda$core$Bit) {$tmp341};
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block1; else goto block2;
block5:;
int64_t $tmp344 = $tmp333.value;
int64_t $tmp345 = $tmp334.value;
bool $tmp346 = $tmp344 < $tmp345;
panda$core$Bit $tmp347 = (panda$core$Bit) {$tmp346};
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block1; else goto block2;
block1:;
// line 134
panda$core$Char8** $tmp349 = &param0->data;
panda$core$Char8* $tmp350 = *$tmp349;
panda$core$Int64* $tmp351 = &param0->_length;
panda$core$Int64 $tmp352 = *$tmp351;
panda$core$Int64 $tmp353 = *(&local0);
int64_t $tmp354 = $tmp352.value;
int64_t $tmp355 = $tmp353.value;
int64_t $tmp356 = $tmp354 + $tmp355;
panda$core$Int64 $tmp357 = (panda$core$Int64) {$tmp356};
panda$core$Char8** $tmp358 = &param1->data;
panda$core$Char8* $tmp359 = *$tmp358;
panda$core$Int64 $tmp360 = *(&local0);
int64_t $tmp361 = $tmp360.value;
panda$core$Char8 $tmp362 = $tmp359[$tmp361];
int64_t $tmp363 = $tmp357.value;
$tmp350[$tmp363] = $tmp362;
goto block3;
block3:;
panda$core$Int64 $tmp364 = *(&local0);
int64_t $tmp365 = $tmp334.value;
int64_t $tmp366 = $tmp364.value;
int64_t $tmp367 = $tmp365 - $tmp366;
panda$core$Int64 $tmp368 = (panda$core$Int64) {$tmp367};
panda$core$UInt64 $tmp369 = panda$core$Int64$convert$R$panda$core$UInt64($tmp368);
if ($tmp336) goto block7; else goto block8;
block7:;
uint64_t $tmp370 = $tmp369.value;
uint64_t $tmp371 = $tmp338.value;
bool $tmp372 = $tmp370 >= $tmp371;
panda$core$Bit $tmp373 = (panda$core$Bit) {$tmp372};
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block6; else goto block2;
block8:;
uint64_t $tmp375 = $tmp369.value;
uint64_t $tmp376 = $tmp338.value;
bool $tmp377 = $tmp375 > $tmp376;
panda$core$Bit $tmp378 = (panda$core$Bit) {$tmp377};
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block6; else goto block2;
block6:;
int64_t $tmp380 = $tmp364.value;
int64_t $tmp381 = $tmp337.value;
int64_t $tmp382 = $tmp380 + $tmp381;
panda$core$Int64 $tmp383 = (panda$core$Int64) {$tmp382};
*(&local0) = $tmp383;
goto block1;
block2:;
// line 136
panda$core$Int64* $tmp384 = &param0->_length;
panda$core$Int64 $tmp385 = *$tmp384;
panda$core$Int64* $tmp386 = &param1->_length;
panda$core$Int64 $tmp387 = *$tmp386;
int64_t $tmp388 = $tmp385.value;
int64_t $tmp389 = $tmp387.value;
int64_t $tmp390 = $tmp388 + $tmp389;
panda$core$Int64 $tmp391 = (panda$core$Int64) {$tmp390};
panda$core$Int64* $tmp392 = &param0->_length;
*$tmp392 = $tmp391;
return;

}
void panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(panda$core$MutableString* param0, panda$core$Char8* param1, panda$core$Int64 param2) {

panda$core$Int64 local0;
// line 141
panda$core$Int64* $tmp393 = &param0->_length;
panda$core$Int64 $tmp394 = *$tmp393;
int64_t $tmp395 = $tmp394.value;
int64_t $tmp396 = param2.value;
int64_t $tmp397 = $tmp395 + $tmp396;
panda$core$Int64 $tmp398 = (panda$core$Int64) {$tmp397};
panda$core$MutableString$ensureCapacity$panda$core$Int64(param0, $tmp398);
// line 142
panda$core$Int64 $tmp399 = (panda$core$Int64) {0};
panda$core$Bit $tmp400 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp401 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp399, param2, $tmp400);
panda$core$Int64 $tmp402 = $tmp401.min;
*(&local0) = $tmp402;
panda$core$Int64 $tmp403 = $tmp401.max;
panda$core$Bit $tmp404 = $tmp401.inclusive;
bool $tmp405 = $tmp404.value;
panda$core$Int64 $tmp406 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp407 = panda$core$Int64$convert$R$panda$core$UInt64($tmp406);
if ($tmp405) goto block4; else goto block5;
block4:;
int64_t $tmp408 = $tmp402.value;
int64_t $tmp409 = $tmp403.value;
bool $tmp410 = $tmp408 <= $tmp409;
panda$core$Bit $tmp411 = (panda$core$Bit) {$tmp410};
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block1; else goto block2;
block5:;
int64_t $tmp413 = $tmp402.value;
int64_t $tmp414 = $tmp403.value;
bool $tmp415 = $tmp413 < $tmp414;
panda$core$Bit $tmp416 = (panda$core$Bit) {$tmp415};
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block1; else goto block2;
block1:;
// line 143
panda$core$Char8** $tmp418 = &param0->data;
panda$core$Char8* $tmp419 = *$tmp418;
panda$core$Int64* $tmp420 = &param0->_length;
panda$core$Int64 $tmp421 = *$tmp420;
panda$core$Int64 $tmp422 = *(&local0);
int64_t $tmp423 = $tmp421.value;
int64_t $tmp424 = $tmp422.value;
int64_t $tmp425 = $tmp423 + $tmp424;
panda$core$Int64 $tmp426 = (panda$core$Int64) {$tmp425};
panda$core$Int64 $tmp427 = *(&local0);
int64_t $tmp428 = $tmp427.value;
panda$core$Char8 $tmp429 = param1[$tmp428];
int64_t $tmp430 = $tmp426.value;
$tmp419[$tmp430] = $tmp429;
goto block3;
block3:;
panda$core$Int64 $tmp431 = *(&local0);
int64_t $tmp432 = $tmp403.value;
int64_t $tmp433 = $tmp431.value;
int64_t $tmp434 = $tmp432 - $tmp433;
panda$core$Int64 $tmp435 = (panda$core$Int64) {$tmp434};
panda$core$UInt64 $tmp436 = panda$core$Int64$convert$R$panda$core$UInt64($tmp435);
if ($tmp405) goto block7; else goto block8;
block7:;
uint64_t $tmp437 = $tmp436.value;
uint64_t $tmp438 = $tmp407.value;
bool $tmp439 = $tmp437 >= $tmp438;
panda$core$Bit $tmp440 = (panda$core$Bit) {$tmp439};
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block6; else goto block2;
block8:;
uint64_t $tmp442 = $tmp436.value;
uint64_t $tmp443 = $tmp407.value;
bool $tmp444 = $tmp442 > $tmp443;
panda$core$Bit $tmp445 = (panda$core$Bit) {$tmp444};
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block6; else goto block2;
block6:;
int64_t $tmp447 = $tmp431.value;
int64_t $tmp448 = $tmp406.value;
int64_t $tmp449 = $tmp447 + $tmp448;
panda$core$Int64 $tmp450 = (panda$core$Int64) {$tmp449};
*(&local0) = $tmp450;
goto block1;
block2:;
// line 145
panda$core$Int64* $tmp451 = &param0->_length;
panda$core$Int64 $tmp452 = *$tmp451;
int64_t $tmp453 = $tmp452.value;
int64_t $tmp454 = param2.value;
int64_t $tmp455 = $tmp453 + $tmp454;
panda$core$Int64 $tmp456 = (panda$core$Int64) {$tmp455};
panda$core$Int64* $tmp457 = &param0->_length;
*$tmp457 = $tmp456;
return;

}
void panda$core$MutableString$append$panda$core$Object(panda$core$MutableString* param0, panda$core$Object* param1) {

// line 150
$fn459 $tmp458 = ($fn459) param1->$class->vtable[0];
panda$core$String* $tmp460 = $tmp458(param1);
panda$core$MutableString$append$panda$core$String(param0, $tmp460);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp460));
// unreffing REF($2:panda.core.String)
return;

}
panda$core$Int64 panda$core$MutableString$get_length$R$panda$core$Int64(panda$core$MutableString* param0) {

panda$core$Int64 local0;
panda$core$MutableString$Index local1;
// line 160
panda$core$Int64 $tmp461 = (panda$core$Int64) {0};
*(&local0) = $tmp461;
// line 161
panda$core$MutableString$Index $tmp462 = panda$core$MutableString$get_start$R$panda$core$MutableString$Index(param0);
*(&local1) = $tmp462;
// line 162
goto block1;
block1:;
panda$core$MutableString$Index $tmp463 = *(&local1);
panda$core$MutableString$Index$wrapper* $tmp464;
$tmp464 = (panda$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
$tmp464->value = $tmp463;
panda$core$MutableString$Index $tmp465 = panda$core$MutableString$get_end$R$panda$core$MutableString$Index(param0);
panda$core$MutableString$Index$wrapper* $tmp466;
$tmp466 = (panda$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
$tmp466->value = $tmp465;
ITable* $tmp467 = ((panda$core$Equatable*) $tmp464)->$class->itable;
while ($tmp467->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp467 = $tmp467->next;
}
$fn469 $tmp468 = $tmp467->methods[1];
panda$core$Bit $tmp470 = $tmp468(((panda$core$Equatable*) $tmp464), ((panda$core$Equatable*) $tmp466));
bool $tmp471 = $tmp470.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp466)));
// unreffing REF($12:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp464)));
// unreffing REF($9:panda.core.Equatable<panda.core.MutableString.Index>)
if ($tmp471) goto block2; else goto block3;
block2:;
// line 163
panda$core$MutableString$Index $tmp472 = *(&local1);
panda$core$MutableString$Index $tmp473 = panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(param0, $tmp472);
*(&local1) = $tmp473;
// line 164
panda$core$Int64 $tmp474 = *(&local0);
panda$core$Int64 $tmp475 = (panda$core$Int64) {1};
int64_t $tmp476 = $tmp474.value;
int64_t $tmp477 = $tmp475.value;
int64_t $tmp478 = $tmp476 + $tmp477;
panda$core$Int64 $tmp479 = (panda$core$Int64) {$tmp478};
*(&local0) = $tmp479;
goto block1;
block3:;
// line 166
panda$core$Int64 $tmp480 = *(&local0);
return $tmp480;

}
panda$core$Int64 panda$core$MutableString$get_byteLength$R$panda$core$Int64(panda$core$MutableString* param0) {

// line 173
panda$core$Int64* $tmp481 = &param0->_length;
panda$core$Int64 $tmp482 = *$tmp481;
return $tmp482;

}
panda$core$MutableString$Index panda$core$MutableString$get_start$R$panda$core$MutableString$Index(panda$core$MutableString* param0) {

// line 180
panda$core$Int64 $tmp483 = (panda$core$Int64) {0};
panda$core$MutableString$Index $tmp484 = panda$core$MutableString$Index$init$panda$core$Int64($tmp483);
return $tmp484;

}
panda$core$MutableString$Index panda$core$MutableString$get_end$R$panda$core$MutableString$Index(panda$core$MutableString* param0) {

// line 187
panda$core$Int64* $tmp485 = &param0->_length;
panda$core$Int64 $tmp486 = *$tmp485;
panda$core$MutableString$Index $tmp487 = panda$core$MutableString$Index$init$panda$core$Int64($tmp486);
return $tmp487;

}
panda$core$MutableString$Index panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(panda$core$MutableString* param0, panda$core$MutableString$Index param1) {

int64_t local0;
// line 197
panda$core$Int64 $tmp488 = param1.value;
panda$core$Int64* $tmp489 = &param0->_length;
panda$core$Int64 $tmp490 = *$tmp489;
int64_t $tmp491 = $tmp488.value;
int64_t $tmp492 = $tmp490.value;
bool $tmp493 = $tmp491 < $tmp492;
panda$core$Bit $tmp494 = (panda$core$Bit) {$tmp493};
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp496 = (panda$core$Int64) {197};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s497, $tmp496);
abort(); // unreachable
block1:;
// line 198
panda$core$Char8** $tmp498 = &param0->data;
panda$core$Char8* $tmp499 = *$tmp498;
panda$core$Int64 $tmp500 = param1.value;
int64_t $tmp501 = $tmp500.value;
panda$core$Char8 $tmp502 = $tmp499[$tmp501];
uint8_t $tmp503 = $tmp502.value;
int64_t $tmp504 = ((int64_t) $tmp503) & 255;
*(&local0) = $tmp504;
// line 199
int64_t $tmp505 = *(&local0);
bool $tmp506 = $tmp505 >= 240;
panda$core$Bit $tmp507 = panda$core$Bit$init$builtin_bit($tmp506);
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block3; else goto block4;
block3:;
// line 200
panda$core$Int64 $tmp509 = param1.value;
panda$core$Int64 $tmp510 = (panda$core$Int64) {4};
int64_t $tmp511 = $tmp509.value;
int64_t $tmp512 = $tmp510.value;
int64_t $tmp513 = $tmp511 + $tmp512;
panda$core$Int64 $tmp514 = (panda$core$Int64) {$tmp513};
panda$core$MutableString$Index $tmp515 = panda$core$MutableString$Index$init$panda$core$Int64($tmp514);
return $tmp515;
block4:;
// line 202
int64_t $tmp516 = *(&local0);
bool $tmp517 = $tmp516 >= 224;
panda$core$Bit $tmp518 = panda$core$Bit$init$builtin_bit($tmp517);
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block5; else goto block6;
block5:;
// line 203
panda$core$Int64 $tmp520 = param1.value;
panda$core$Int64 $tmp521 = (panda$core$Int64) {3};
int64_t $tmp522 = $tmp520.value;
int64_t $tmp523 = $tmp521.value;
int64_t $tmp524 = $tmp522 + $tmp523;
panda$core$Int64 $tmp525 = (panda$core$Int64) {$tmp524};
panda$core$MutableString$Index $tmp526 = panda$core$MutableString$Index$init$panda$core$Int64($tmp525);
return $tmp526;
block6:;
// line 205
int64_t $tmp527 = *(&local0);
bool $tmp528 = $tmp527 >= 192;
panda$core$Bit $tmp529 = panda$core$Bit$init$builtin_bit($tmp528);
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block7; else goto block8;
block7:;
// line 206
panda$core$Int64 $tmp531 = param1.value;
panda$core$Int64 $tmp532 = (panda$core$Int64) {2};
int64_t $tmp533 = $tmp531.value;
int64_t $tmp534 = $tmp532.value;
int64_t $tmp535 = $tmp533 + $tmp534;
panda$core$Int64 $tmp536 = (panda$core$Int64) {$tmp535};
panda$core$MutableString$Index $tmp537 = panda$core$MutableString$Index$init$panda$core$Int64($tmp536);
return $tmp537;
block8:;
// line 208
panda$core$Int64 $tmp538 = param1.value;
panda$core$Int64 $tmp539 = (panda$core$Int64) {1};
int64_t $tmp540 = $tmp538.value;
int64_t $tmp541 = $tmp539.value;
int64_t $tmp542 = $tmp540 + $tmp541;
panda$core$Int64 $tmp543 = (panda$core$Int64) {$tmp542};
panda$core$MutableString$Index $tmp544 = panda$core$MutableString$Index$init$panda$core$Int64($tmp543);
return $tmp544;

}
panda$core$MutableString$Index panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index(panda$core$MutableString* param0, panda$core$MutableString$Index param1) {

panda$core$Int64 local0;
// line 218
panda$core$Int64 $tmp545 = param1.value;
panda$core$Int64 $tmp546 = (panda$core$Int64) {0};
int64_t $tmp547 = $tmp545.value;
int64_t $tmp548 = $tmp546.value;
bool $tmp549 = $tmp547 > $tmp548;
panda$core$Bit $tmp550 = (panda$core$Bit) {$tmp549};
bool $tmp551 = $tmp550.value;
if ($tmp551) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp552 = (panda$core$Int64) {218};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s553, $tmp552);
abort(); // unreachable
block1:;
// line 219
panda$core$Int64 $tmp554 = param1.value;
panda$core$Int64 $tmp555 = (panda$core$Int64) {1};
int64_t $tmp556 = $tmp554.value;
int64_t $tmp557 = $tmp555.value;
int64_t $tmp558 = $tmp556 - $tmp557;
panda$core$Int64 $tmp559 = (panda$core$Int64) {$tmp558};
*(&local0) = $tmp559;
// line 220
goto block3;
block3:;
panda$core$Char8** $tmp560 = &param0->data;
panda$core$Char8* $tmp561 = *$tmp560;
panda$core$Int64 $tmp562 = *(&local0);
int64_t $tmp563 = $tmp562.value;
panda$core$Char8 $tmp564 = $tmp561[$tmp563];
uint8_t $tmp565 = $tmp564.value;
int64_t $tmp566 = ((int64_t) $tmp565) & 255;
bool $tmp567 = $tmp566 >= 128;
panda$core$Char8** $tmp568 = &param0->data;
panda$core$Char8* $tmp569 = *$tmp568;
panda$core$Int64 $tmp570 = *(&local0);
int64_t $tmp571 = $tmp570.value;
panda$core$Char8 $tmp572 = $tmp569[$tmp571];
uint8_t $tmp573 = $tmp572.value;
int64_t $tmp574 = ((int64_t) $tmp573) & 255;
bool $tmp575 = $tmp574 < 192;
bool $tmp576 = $tmp567 & $tmp575;
panda$core$Bit $tmp577 = panda$core$Bit$init$builtin_bit($tmp576);
bool $tmp578 = $tmp577.value;
if ($tmp578) goto block4; else goto block5;
block4:;
// line 222
panda$core$Int64 $tmp579 = *(&local0);
panda$core$Int64 $tmp580 = (panda$core$Int64) {1};
int64_t $tmp581 = $tmp579.value;
int64_t $tmp582 = $tmp580.value;
int64_t $tmp583 = $tmp581 - $tmp582;
panda$core$Int64 $tmp584 = (panda$core$Int64) {$tmp583};
*(&local0) = $tmp584;
goto block3;
block5:;
// line 224
panda$core$Int64 $tmp585 = *(&local0);
panda$core$MutableString$Index $tmp586 = panda$core$MutableString$Index$init$panda$core$Int64($tmp585);
return $tmp586;

}
panda$core$MutableString$Index panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(panda$core$MutableString* param0, panda$core$MutableString$Index param1, panda$core$Int64 param2) {

panda$core$MutableString$Index local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 234
*(&local0) = param1;
// line 235
panda$core$Int64 $tmp587 = (panda$core$Int64) {0};
int64_t $tmp588 = param2.value;
int64_t $tmp589 = $tmp587.value;
bool $tmp590 = $tmp588 > $tmp589;
panda$core$Bit $tmp591 = (panda$core$Bit) {$tmp590};
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block1; else goto block3;
block1:;
// line 236
panda$core$Int64 $tmp593 = (panda$core$Int64) {0};
panda$core$Bit $tmp594 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp595 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp593, param2, $tmp594);
panda$core$Int64 $tmp596 = $tmp595.min;
*(&local1) = $tmp596;
panda$core$Int64 $tmp597 = $tmp595.max;
panda$core$Bit $tmp598 = $tmp595.inclusive;
bool $tmp599 = $tmp598.value;
panda$core$Int64 $tmp600 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp601 = panda$core$Int64$convert$R$panda$core$UInt64($tmp600);
if ($tmp599) goto block7; else goto block8;
block7:;
int64_t $tmp602 = $tmp596.value;
int64_t $tmp603 = $tmp597.value;
bool $tmp604 = $tmp602 <= $tmp603;
panda$core$Bit $tmp605 = (panda$core$Bit) {$tmp604};
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block4; else goto block5;
block8:;
int64_t $tmp607 = $tmp596.value;
int64_t $tmp608 = $tmp597.value;
bool $tmp609 = $tmp607 < $tmp608;
panda$core$Bit $tmp610 = (panda$core$Bit) {$tmp609};
bool $tmp611 = $tmp610.value;
if ($tmp611) goto block4; else goto block5;
block4:;
// line 237
panda$core$MutableString$Index $tmp612 = *(&local0);
panda$core$MutableString$Index $tmp613 = panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(param0, $tmp612);
*(&local0) = $tmp613;
goto block6;
block6:;
panda$core$Int64 $tmp614 = *(&local1);
int64_t $tmp615 = $tmp597.value;
int64_t $tmp616 = $tmp614.value;
int64_t $tmp617 = $tmp615 - $tmp616;
panda$core$Int64 $tmp618 = (panda$core$Int64) {$tmp617};
panda$core$UInt64 $tmp619 = panda$core$Int64$convert$R$panda$core$UInt64($tmp618);
if ($tmp599) goto block10; else goto block11;
block10:;
uint64_t $tmp620 = $tmp619.value;
uint64_t $tmp621 = $tmp601.value;
bool $tmp622 = $tmp620 >= $tmp621;
panda$core$Bit $tmp623 = (panda$core$Bit) {$tmp622};
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block9; else goto block5;
block11:;
uint64_t $tmp625 = $tmp619.value;
uint64_t $tmp626 = $tmp601.value;
bool $tmp627 = $tmp625 > $tmp626;
panda$core$Bit $tmp628 = (panda$core$Bit) {$tmp627};
bool $tmp629 = $tmp628.value;
if ($tmp629) goto block9; else goto block5;
block9:;
int64_t $tmp630 = $tmp614.value;
int64_t $tmp631 = $tmp600.value;
int64_t $tmp632 = $tmp630 + $tmp631;
panda$core$Int64 $tmp633 = (panda$core$Int64) {$tmp632};
*(&local1) = $tmp633;
goto block4;
block5:;
goto block2;
block3:;
// line 1
// line 241
panda$core$Int64 $tmp634 = (panda$core$Int64) {0};
panda$core$Int64 $tmp635 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp636 = panda$core$Bit$init$builtin_bit(false);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp637 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp634, param2, $tmp635, $tmp636);
panda$core$Int64 $tmp638 = $tmp637.start;
*(&local2) = $tmp638;
panda$core$Int64 $tmp639 = $tmp637.end;
panda$core$Int64 $tmp640 = $tmp637.step;
panda$core$UInt64 $tmp641 = panda$core$Int64$convert$R$panda$core$UInt64($tmp640);
panda$core$Int64 $tmp642 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp640);
panda$core$UInt64 $tmp643 = panda$core$Int64$convert$R$panda$core$UInt64($tmp642);
panda$core$Bit $tmp644 = $tmp637.inclusive;
bool $tmp645 = $tmp644.value;
panda$core$Int64 $tmp646 = (panda$core$Int64) {0};
int64_t $tmp647 = $tmp640.value;
int64_t $tmp648 = $tmp646.value;
bool $tmp649 = $tmp647 >= $tmp648;
panda$core$Bit $tmp650 = (panda$core$Bit) {$tmp649};
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block15; else goto block16;
block15:;
if ($tmp645) goto block17; else goto block18;
block17:;
int64_t $tmp652 = $tmp638.value;
int64_t $tmp653 = $tmp639.value;
bool $tmp654 = $tmp652 <= $tmp653;
panda$core$Bit $tmp655 = (panda$core$Bit) {$tmp654};
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block12; else goto block13;
block18:;
int64_t $tmp657 = $tmp638.value;
int64_t $tmp658 = $tmp639.value;
bool $tmp659 = $tmp657 < $tmp658;
panda$core$Bit $tmp660 = (panda$core$Bit) {$tmp659};
bool $tmp661 = $tmp660.value;
if ($tmp661) goto block12; else goto block13;
block16:;
if ($tmp645) goto block19; else goto block20;
block19:;
int64_t $tmp662 = $tmp638.value;
int64_t $tmp663 = $tmp639.value;
bool $tmp664 = $tmp662 >= $tmp663;
panda$core$Bit $tmp665 = (panda$core$Bit) {$tmp664};
bool $tmp666 = $tmp665.value;
if ($tmp666) goto block12; else goto block13;
block20:;
int64_t $tmp667 = $tmp638.value;
int64_t $tmp668 = $tmp639.value;
bool $tmp669 = $tmp667 > $tmp668;
panda$core$Bit $tmp670 = (panda$core$Bit) {$tmp669};
bool $tmp671 = $tmp670.value;
if ($tmp671) goto block12; else goto block13;
block12:;
// line 242
panda$core$MutableString$Index $tmp672 = *(&local0);
panda$core$MutableString$Index $tmp673 = panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index(param0, $tmp672);
*(&local0) = $tmp673;
goto block14;
block14:;
panda$core$Int64 $tmp674 = *(&local2);
if ($tmp651) goto block22; else goto block23;
block22:;
int64_t $tmp675 = $tmp639.value;
int64_t $tmp676 = $tmp674.value;
int64_t $tmp677 = $tmp675 - $tmp676;
panda$core$Int64 $tmp678 = (panda$core$Int64) {$tmp677};
panda$core$UInt64 $tmp679 = panda$core$Int64$convert$R$panda$core$UInt64($tmp678);
if ($tmp645) goto block24; else goto block25;
block24:;
uint64_t $tmp680 = $tmp679.value;
uint64_t $tmp681 = $tmp641.value;
bool $tmp682 = $tmp680 >= $tmp681;
panda$core$Bit $tmp683 = (panda$core$Bit) {$tmp682};
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block21; else goto block13;
block25:;
uint64_t $tmp685 = $tmp679.value;
uint64_t $tmp686 = $tmp641.value;
bool $tmp687 = $tmp685 > $tmp686;
panda$core$Bit $tmp688 = (panda$core$Bit) {$tmp687};
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block21; else goto block13;
block23:;
int64_t $tmp690 = $tmp674.value;
int64_t $tmp691 = $tmp639.value;
int64_t $tmp692 = $tmp690 - $tmp691;
panda$core$Int64 $tmp693 = (panda$core$Int64) {$tmp692};
panda$core$UInt64 $tmp694 = panda$core$Int64$convert$R$panda$core$UInt64($tmp693);
if ($tmp645) goto block26; else goto block27;
block26:;
uint64_t $tmp695 = $tmp694.value;
uint64_t $tmp696 = $tmp643.value;
bool $tmp697 = $tmp695 >= $tmp696;
panda$core$Bit $tmp698 = (panda$core$Bit) {$tmp697};
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block21; else goto block13;
block27:;
uint64_t $tmp700 = $tmp694.value;
uint64_t $tmp701 = $tmp643.value;
bool $tmp702 = $tmp700 > $tmp701;
panda$core$Bit $tmp703 = (panda$core$Bit) {$tmp702};
bool $tmp704 = $tmp703.value;
if ($tmp704) goto block21; else goto block13;
block21:;
int64_t $tmp705 = $tmp674.value;
int64_t $tmp706 = $tmp640.value;
int64_t $tmp707 = $tmp705 + $tmp706;
panda$core$Int64 $tmp708 = (panda$core$Int64) {$tmp707};
*(&local2) = $tmp708;
goto block12;
block13:;
goto block2;
block2:;
// line 245
panda$core$MutableString$Index $tmp709 = *(&local0);
return $tmp709;

}
panda$core$MutableString$Index$nullable panda$core$MutableString$indexOf$panda$core$String$R$panda$core$MutableString$Index$Q(panda$core$MutableString* param0, panda$core$String* param1) {

// line 256
panda$core$MutableString$Index $tmp710 = panda$core$MutableString$get_start$R$panda$core$MutableString$Index(param0);
panda$core$MutableString$Index$nullable $tmp711 = panda$core$MutableString$indexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(param0, param1, $tmp710);
return $tmp711;

}
panda$core$MutableString$Index$nullable panda$core$MutableString$indexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(panda$core$MutableString* param0, panda$core$String* param1, panda$core$MutableString$Index param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 268
panda$core$Int64* $tmp712 = &param0->_length;
panda$core$Int64 $tmp713 = *$tmp712;
panda$core$Int64* $tmp714 = &param1->_length;
panda$core$Int64 $tmp715 = *$tmp714;
int64_t $tmp716 = $tmp713.value;
int64_t $tmp717 = $tmp715.value;
bool $tmp718 = $tmp716 < $tmp717;
panda$core$Bit $tmp719 = (panda$core$Bit) {$tmp718};
bool $tmp720 = $tmp719.value;
if ($tmp720) goto block1; else goto block2;
block1:;
// line 269
return ((panda$core$MutableString$Index$nullable) { .nonnull = false });
block2:;
// line 271
panda$core$Int64 $tmp721 = param2.value;
panda$core$Int64* $tmp722 = &param0->_length;
panda$core$Int64 $tmp723 = *$tmp722;
panda$core$Int64* $tmp724 = &param1->_length;
panda$core$Int64 $tmp725 = *$tmp724;
int64_t $tmp726 = $tmp723.value;
int64_t $tmp727 = $tmp725.value;
int64_t $tmp728 = $tmp726 - $tmp727;
panda$core$Int64 $tmp729 = (panda$core$Int64) {$tmp728};
panda$core$Bit $tmp730 = panda$core$Bit$init$builtin_bit(true);
panda$core$Range$LTpanda$core$Int64$GT $tmp731 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp721, $tmp729, $tmp730);
panda$core$Int64 $tmp732 = $tmp731.min;
*(&local0) = $tmp732;
panda$core$Int64 $tmp733 = $tmp731.max;
panda$core$Bit $tmp734 = $tmp731.inclusive;
bool $tmp735 = $tmp734.value;
panda$core$Int64 $tmp736 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp737 = panda$core$Int64$convert$R$panda$core$UInt64($tmp736);
if ($tmp735) goto block6; else goto block7;
block6:;
int64_t $tmp738 = $tmp732.value;
int64_t $tmp739 = $tmp733.value;
bool $tmp740 = $tmp738 <= $tmp739;
panda$core$Bit $tmp741 = (panda$core$Bit) {$tmp740};
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block3; else goto block4;
block7:;
int64_t $tmp743 = $tmp732.value;
int64_t $tmp744 = $tmp733.value;
bool $tmp745 = $tmp743 < $tmp744;
panda$core$Bit $tmp746 = (panda$core$Bit) {$tmp745};
bool $tmp747 = $tmp746.value;
if ($tmp747) goto block3; else goto block4;
block3:;
// line 272
panda$core$Int64 $tmp748 = (panda$core$Int64) {0};
panda$core$Int64* $tmp749 = &param1->_length;
panda$core$Int64 $tmp750 = *$tmp749;
panda$core$Bit $tmp751 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp752 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp748, $tmp750, $tmp751);
panda$core$Int64 $tmp753 = $tmp752.min;
*(&local1) = $tmp753;
panda$core$Int64 $tmp754 = $tmp752.max;
panda$core$Bit $tmp755 = $tmp752.inclusive;
bool $tmp756 = $tmp755.value;
panda$core$Int64 $tmp757 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp758 = panda$core$Int64$convert$R$panda$core$UInt64($tmp757);
if ($tmp756) goto block11; else goto block12;
block11:;
int64_t $tmp759 = $tmp753.value;
int64_t $tmp760 = $tmp754.value;
bool $tmp761 = $tmp759 <= $tmp760;
panda$core$Bit $tmp762 = (panda$core$Bit) {$tmp761};
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block8; else goto block9;
block12:;
int64_t $tmp764 = $tmp753.value;
int64_t $tmp765 = $tmp754.value;
bool $tmp766 = $tmp764 < $tmp765;
panda$core$Bit $tmp767 = (panda$core$Bit) {$tmp766};
bool $tmp768 = $tmp767.value;
if ($tmp768) goto block8; else goto block9;
block8:;
// line 273
panda$core$Char8** $tmp769 = &param0->data;
panda$core$Char8* $tmp770 = *$tmp769;
panda$core$Int64 $tmp771 = *(&local0);
panda$core$Int64 $tmp772 = *(&local1);
int64_t $tmp773 = $tmp771.value;
int64_t $tmp774 = $tmp772.value;
int64_t $tmp775 = $tmp773 + $tmp774;
panda$core$Int64 $tmp776 = (panda$core$Int64) {$tmp775};
int64_t $tmp777 = $tmp776.value;
panda$core$Char8 $tmp778 = $tmp770[$tmp777];
panda$core$Char8** $tmp779 = &param1->data;
panda$core$Char8* $tmp780 = *$tmp779;
panda$core$Int64 $tmp781 = *(&local1);
int64_t $tmp782 = $tmp781.value;
panda$core$Char8 $tmp783 = $tmp780[$tmp782];
panda$core$Bit $tmp784 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp778, $tmp783);
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block13; else goto block14;
block13:;
// line 274
goto block5;
block14:;
goto block10;
block10:;
panda$core$Int64 $tmp786 = *(&local1);
int64_t $tmp787 = $tmp754.value;
int64_t $tmp788 = $tmp786.value;
int64_t $tmp789 = $tmp787 - $tmp788;
panda$core$Int64 $tmp790 = (panda$core$Int64) {$tmp789};
panda$core$UInt64 $tmp791 = panda$core$Int64$convert$R$panda$core$UInt64($tmp790);
if ($tmp756) goto block16; else goto block17;
block16:;
uint64_t $tmp792 = $tmp791.value;
uint64_t $tmp793 = $tmp758.value;
bool $tmp794 = $tmp792 >= $tmp793;
panda$core$Bit $tmp795 = (panda$core$Bit) {$tmp794};
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block15; else goto block9;
block17:;
uint64_t $tmp797 = $tmp791.value;
uint64_t $tmp798 = $tmp758.value;
bool $tmp799 = $tmp797 > $tmp798;
panda$core$Bit $tmp800 = (panda$core$Bit) {$tmp799};
bool $tmp801 = $tmp800.value;
if ($tmp801) goto block15; else goto block9;
block15:;
int64_t $tmp802 = $tmp786.value;
int64_t $tmp803 = $tmp757.value;
int64_t $tmp804 = $tmp802 + $tmp803;
panda$core$Int64 $tmp805 = (panda$core$Int64) {$tmp804};
*(&local1) = $tmp805;
goto block8;
block9:;
// line 277
panda$core$Int64 $tmp806 = *(&local0);
panda$core$MutableString$Index $tmp807 = panda$core$MutableString$Index$init$panda$core$Int64($tmp806);
panda$core$Bit $tmp808 = panda$core$Bit$init$builtin_bit(((panda$core$MutableString$Index$nullable) { $tmp807, true }).nonnull);
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp810 = (panda$core$Int64) {1};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s811, $tmp810, &$s812);
abort(); // unreachable
block18:;
return ((panda$core$MutableString$Index$nullable) { ((panda$core$MutableString$Index) ((panda$core$MutableString$Index$nullable) { $tmp807, true }).value), true });
block5:;
panda$core$Int64 $tmp813 = *(&local0);
int64_t $tmp814 = $tmp733.value;
int64_t $tmp815 = $tmp813.value;
int64_t $tmp816 = $tmp814 - $tmp815;
panda$core$Int64 $tmp817 = (panda$core$Int64) {$tmp816};
panda$core$UInt64 $tmp818 = panda$core$Int64$convert$R$panda$core$UInt64($tmp817);
if ($tmp735) goto block21; else goto block22;
block21:;
uint64_t $tmp819 = $tmp818.value;
uint64_t $tmp820 = $tmp737.value;
bool $tmp821 = $tmp819 >= $tmp820;
panda$core$Bit $tmp822 = (panda$core$Bit) {$tmp821};
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block20; else goto block4;
block22:;
uint64_t $tmp824 = $tmp818.value;
uint64_t $tmp825 = $tmp737.value;
bool $tmp826 = $tmp824 > $tmp825;
panda$core$Bit $tmp827 = (panda$core$Bit) {$tmp826};
bool $tmp828 = $tmp827.value;
if ($tmp828) goto block20; else goto block4;
block20:;
int64_t $tmp829 = $tmp813.value;
int64_t $tmp830 = $tmp736.value;
int64_t $tmp831 = $tmp829 + $tmp830;
panda$core$Int64 $tmp832 = (panda$core$Int64) {$tmp831};
*(&local0) = $tmp832;
goto block3;
block4:;
// line 279
return ((panda$core$MutableString$Index$nullable) { .nonnull = false });

}
panda$core$Bit panda$core$MutableString$contains$panda$core$Char8$R$panda$core$Bit(panda$core$MutableString* param0, panda$core$Char8 param1) {

panda$core$Int64 local0;
// line 286
panda$core$Int64 $tmp833 = (panda$core$Int64) {0};
panda$core$Int64* $tmp834 = &param0->_length;
panda$core$Int64 $tmp835 = *$tmp834;
panda$core$Bit $tmp836 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp837 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp833, $tmp835, $tmp836);
panda$core$Int64 $tmp838 = $tmp837.min;
*(&local0) = $tmp838;
panda$core$Int64 $tmp839 = $tmp837.max;
panda$core$Bit $tmp840 = $tmp837.inclusive;
bool $tmp841 = $tmp840.value;
panda$core$Int64 $tmp842 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp843 = panda$core$Int64$convert$R$panda$core$UInt64($tmp842);
if ($tmp841) goto block4; else goto block5;
block4:;
int64_t $tmp844 = $tmp838.value;
int64_t $tmp845 = $tmp839.value;
bool $tmp846 = $tmp844 <= $tmp845;
panda$core$Bit $tmp847 = (panda$core$Bit) {$tmp846};
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block1; else goto block2;
block5:;
int64_t $tmp849 = $tmp838.value;
int64_t $tmp850 = $tmp839.value;
bool $tmp851 = $tmp849 < $tmp850;
panda$core$Bit $tmp852 = (panda$core$Bit) {$tmp851};
bool $tmp853 = $tmp852.value;
if ($tmp853) goto block1; else goto block2;
block1:;
// line 287
panda$core$Char8** $tmp854 = &param0->data;
panda$core$Char8* $tmp855 = *$tmp854;
panda$core$Int64 $tmp856 = *(&local0);
int64_t $tmp857 = $tmp856.value;
panda$core$Char8 $tmp858 = $tmp855[$tmp857];
panda$core$Bit $tmp859 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp858, param1);
bool $tmp860 = $tmp859.value;
if ($tmp860) goto block6; else goto block7;
block6:;
// line 288
panda$core$Bit $tmp861 = panda$core$Bit$init$builtin_bit(true);
return $tmp861;
block7:;
goto block3;
block3:;
panda$core$Int64 $tmp862 = *(&local0);
int64_t $tmp863 = $tmp839.value;
int64_t $tmp864 = $tmp862.value;
int64_t $tmp865 = $tmp863 - $tmp864;
panda$core$Int64 $tmp866 = (panda$core$Int64) {$tmp865};
panda$core$UInt64 $tmp867 = panda$core$Int64$convert$R$panda$core$UInt64($tmp866);
if ($tmp841) goto block9; else goto block10;
block9:;
uint64_t $tmp868 = $tmp867.value;
uint64_t $tmp869 = $tmp843.value;
bool $tmp870 = $tmp868 >= $tmp869;
panda$core$Bit $tmp871 = (panda$core$Bit) {$tmp870};
bool $tmp872 = $tmp871.value;
if ($tmp872) goto block8; else goto block2;
block10:;
uint64_t $tmp873 = $tmp867.value;
uint64_t $tmp874 = $tmp843.value;
bool $tmp875 = $tmp873 > $tmp874;
panda$core$Bit $tmp876 = (panda$core$Bit) {$tmp875};
bool $tmp877 = $tmp876.value;
if ($tmp877) goto block8; else goto block2;
block8:;
int64_t $tmp878 = $tmp862.value;
int64_t $tmp879 = $tmp842.value;
int64_t $tmp880 = $tmp878 + $tmp879;
panda$core$Int64 $tmp881 = (panda$core$Int64) {$tmp880};
*(&local0) = $tmp881;
goto block1;
block2:;
// line 291
panda$core$Bit $tmp882 = panda$core$Bit$init$builtin_bit(false);
return $tmp882;

}
panda$core$Bit panda$core$MutableString$contains$panda$core$String$R$panda$core$Bit(panda$core$MutableString* param0, panda$core$String* param1) {

// line 298
panda$core$MutableString$Index$nullable $tmp883 = panda$core$MutableString$indexOf$panda$core$String$R$panda$core$MutableString$Index$Q(param0, param1);
panda$core$Bit $tmp884 = panda$core$Bit$init$builtin_bit($tmp883.nonnull);
return $tmp884;

}
panda$core$Bit panda$core$MutableString$startsWith$panda$core$String$R$panda$core$Bit(panda$core$MutableString* param0, panda$core$String* param1) {

panda$core$Int64 local0;
// line 302
panda$core$Int64* $tmp885 = &param0->_length;
panda$core$Int64 $tmp886 = *$tmp885;
panda$core$Int64* $tmp887 = &param1->_length;
panda$core$Int64 $tmp888 = *$tmp887;
int64_t $tmp889 = $tmp886.value;
int64_t $tmp890 = $tmp888.value;
bool $tmp891 = $tmp889 < $tmp890;
panda$core$Bit $tmp892 = (panda$core$Bit) {$tmp891};
bool $tmp893 = $tmp892.value;
if ($tmp893) goto block1; else goto block2;
block1:;
// line 303
panda$core$Bit $tmp894 = panda$core$Bit$init$builtin_bit(false);
return $tmp894;
block2:;
// line 305
panda$core$Int64 $tmp895 = (panda$core$Int64) {0};
panda$core$Int64* $tmp896 = &param1->_length;
panda$core$Int64 $tmp897 = *$tmp896;
panda$core$Bit $tmp898 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp899 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp895, $tmp897, $tmp898);
panda$core$Int64 $tmp900 = $tmp899.min;
*(&local0) = $tmp900;
panda$core$Int64 $tmp901 = $tmp899.max;
panda$core$Bit $tmp902 = $tmp899.inclusive;
bool $tmp903 = $tmp902.value;
panda$core$Int64 $tmp904 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp905 = panda$core$Int64$convert$R$panda$core$UInt64($tmp904);
if ($tmp903) goto block6; else goto block7;
block6:;
int64_t $tmp906 = $tmp900.value;
int64_t $tmp907 = $tmp901.value;
bool $tmp908 = $tmp906 <= $tmp907;
panda$core$Bit $tmp909 = (panda$core$Bit) {$tmp908};
bool $tmp910 = $tmp909.value;
if ($tmp910) goto block3; else goto block4;
block7:;
int64_t $tmp911 = $tmp900.value;
int64_t $tmp912 = $tmp901.value;
bool $tmp913 = $tmp911 < $tmp912;
panda$core$Bit $tmp914 = (panda$core$Bit) {$tmp913};
bool $tmp915 = $tmp914.value;
if ($tmp915) goto block3; else goto block4;
block3:;
// line 306
panda$core$Char8** $tmp916 = &param0->data;
panda$core$Char8* $tmp917 = *$tmp916;
panda$core$Int64 $tmp918 = *(&local0);
int64_t $tmp919 = $tmp918.value;
panda$core$Char8 $tmp920 = $tmp917[$tmp919];
panda$core$Char8** $tmp921 = &param1->data;
panda$core$Char8* $tmp922 = *$tmp921;
panda$core$Int64 $tmp923 = *(&local0);
int64_t $tmp924 = $tmp923.value;
panda$core$Char8 $tmp925 = $tmp922[$tmp924];
panda$core$Bit $tmp926 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp920, $tmp925);
bool $tmp927 = $tmp926.value;
if ($tmp927) goto block8; else goto block9;
block8:;
// line 307
panda$core$Bit $tmp928 = panda$core$Bit$init$builtin_bit(false);
return $tmp928;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp929 = *(&local0);
int64_t $tmp930 = $tmp901.value;
int64_t $tmp931 = $tmp929.value;
int64_t $tmp932 = $tmp930 - $tmp931;
panda$core$Int64 $tmp933 = (panda$core$Int64) {$tmp932};
panda$core$UInt64 $tmp934 = panda$core$Int64$convert$R$panda$core$UInt64($tmp933);
if ($tmp903) goto block11; else goto block12;
block11:;
uint64_t $tmp935 = $tmp934.value;
uint64_t $tmp936 = $tmp905.value;
bool $tmp937 = $tmp935 >= $tmp936;
panda$core$Bit $tmp938 = (panda$core$Bit) {$tmp937};
bool $tmp939 = $tmp938.value;
if ($tmp939) goto block10; else goto block4;
block12:;
uint64_t $tmp940 = $tmp934.value;
uint64_t $tmp941 = $tmp905.value;
bool $tmp942 = $tmp940 > $tmp941;
panda$core$Bit $tmp943 = (panda$core$Bit) {$tmp942};
bool $tmp944 = $tmp943.value;
if ($tmp944) goto block10; else goto block4;
block10:;
int64_t $tmp945 = $tmp929.value;
int64_t $tmp946 = $tmp904.value;
int64_t $tmp947 = $tmp945 + $tmp946;
panda$core$Int64 $tmp948 = (panda$core$Int64) {$tmp947};
*(&local0) = $tmp948;
goto block3;
block4:;
// line 310
panda$core$Bit $tmp949 = panda$core$Bit$init$builtin_bit(true);
return $tmp949;

}
panda$core$Bit panda$core$MutableString$endsWith$panda$core$String$R$panda$core$Bit(panda$core$MutableString* param0, panda$core$String* param1) {

panda$core$Int64 local0;
// line 314
panda$core$Int64* $tmp950 = &param0->_length;
panda$core$Int64 $tmp951 = *$tmp950;
panda$core$Int64* $tmp952 = &param1->_length;
panda$core$Int64 $tmp953 = *$tmp952;
int64_t $tmp954 = $tmp951.value;
int64_t $tmp955 = $tmp953.value;
bool $tmp956 = $tmp954 < $tmp955;
panda$core$Bit $tmp957 = (panda$core$Bit) {$tmp956};
bool $tmp958 = $tmp957.value;
if ($tmp958) goto block1; else goto block2;
block1:;
// line 315
panda$core$Bit $tmp959 = panda$core$Bit$init$builtin_bit(false);
return $tmp959;
block2:;
// line 317
panda$core$Int64 $tmp960 = (panda$core$Int64) {0};
panda$core$Int64* $tmp961 = &param1->_length;
panda$core$Int64 $tmp962 = *$tmp961;
panda$core$Bit $tmp963 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp964 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp960, $tmp962, $tmp963);
panda$core$Int64 $tmp965 = $tmp964.min;
*(&local0) = $tmp965;
panda$core$Int64 $tmp966 = $tmp964.max;
panda$core$Bit $tmp967 = $tmp964.inclusive;
bool $tmp968 = $tmp967.value;
panda$core$Int64 $tmp969 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp970 = panda$core$Int64$convert$R$panda$core$UInt64($tmp969);
if ($tmp968) goto block6; else goto block7;
block6:;
int64_t $tmp971 = $tmp965.value;
int64_t $tmp972 = $tmp966.value;
bool $tmp973 = $tmp971 <= $tmp972;
panda$core$Bit $tmp974 = (panda$core$Bit) {$tmp973};
bool $tmp975 = $tmp974.value;
if ($tmp975) goto block3; else goto block4;
block7:;
int64_t $tmp976 = $tmp965.value;
int64_t $tmp977 = $tmp966.value;
bool $tmp978 = $tmp976 < $tmp977;
panda$core$Bit $tmp979 = (panda$core$Bit) {$tmp978};
bool $tmp980 = $tmp979.value;
if ($tmp980) goto block3; else goto block4;
block3:;
// line 318
panda$core$Char8** $tmp981 = &param0->data;
panda$core$Char8* $tmp982 = *$tmp981;
panda$core$Int64* $tmp983 = &param0->_length;
panda$core$Int64 $tmp984 = *$tmp983;
panda$core$Int64* $tmp985 = &param1->_length;
panda$core$Int64 $tmp986 = *$tmp985;
int64_t $tmp987 = $tmp984.value;
int64_t $tmp988 = $tmp986.value;
int64_t $tmp989 = $tmp987 - $tmp988;
panda$core$Int64 $tmp990 = (panda$core$Int64) {$tmp989};
panda$core$Int64 $tmp991 = *(&local0);
int64_t $tmp992 = $tmp990.value;
int64_t $tmp993 = $tmp991.value;
int64_t $tmp994 = $tmp992 + $tmp993;
panda$core$Int64 $tmp995 = (panda$core$Int64) {$tmp994};
int64_t $tmp996 = $tmp995.value;
panda$core$Char8 $tmp997 = $tmp982[$tmp996];
panda$core$Char8** $tmp998 = &param1->data;
panda$core$Char8* $tmp999 = *$tmp998;
panda$core$Int64 $tmp1000 = *(&local0);
int64_t $tmp1001 = $tmp1000.value;
panda$core$Char8 $tmp1002 = $tmp999[$tmp1001];
panda$core$Bit $tmp1003 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp997, $tmp1002);
bool $tmp1004 = $tmp1003.value;
if ($tmp1004) goto block8; else goto block9;
block8:;
// line 319
panda$core$Bit $tmp1005 = panda$core$Bit$init$builtin_bit(false);
return $tmp1005;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp1006 = *(&local0);
int64_t $tmp1007 = $tmp966.value;
int64_t $tmp1008 = $tmp1006.value;
int64_t $tmp1009 = $tmp1007 - $tmp1008;
panda$core$Int64 $tmp1010 = (panda$core$Int64) {$tmp1009};
panda$core$UInt64 $tmp1011 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1010);
if ($tmp968) goto block11; else goto block12;
block11:;
uint64_t $tmp1012 = $tmp1011.value;
uint64_t $tmp1013 = $tmp970.value;
bool $tmp1014 = $tmp1012 >= $tmp1013;
panda$core$Bit $tmp1015 = (panda$core$Bit) {$tmp1014};
bool $tmp1016 = $tmp1015.value;
if ($tmp1016) goto block10; else goto block4;
block12:;
uint64_t $tmp1017 = $tmp1011.value;
uint64_t $tmp1018 = $tmp970.value;
bool $tmp1019 = $tmp1017 > $tmp1018;
panda$core$Bit $tmp1020 = (panda$core$Bit) {$tmp1019};
bool $tmp1021 = $tmp1020.value;
if ($tmp1021) goto block10; else goto block4;
block10:;
int64_t $tmp1022 = $tmp1006.value;
int64_t $tmp1023 = $tmp969.value;
int64_t $tmp1024 = $tmp1022 + $tmp1023;
panda$core$Int64 $tmp1025 = (panda$core$Int64) {$tmp1024};
*(&local0) = $tmp1025;
goto block3;
block4:;
// line 322
panda$core$Bit $tmp1026 = panda$core$Bit$init$builtin_bit(true);
return $tmp1026;

}
panda$core$MutableString$Index$nullable panda$core$MutableString$lastIndexOf$panda$core$String$R$panda$core$MutableString$Index$Q(panda$core$MutableString* param0, panda$core$String* param1) {

// line 333
panda$core$MutableString$Index $tmp1027 = panda$core$MutableString$get_end$R$panda$core$MutableString$Index(param0);
panda$core$MutableString$Index$nullable $tmp1028 = panda$core$MutableString$lastIndexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(param0, param1, $tmp1027);
return $tmp1028;

}
panda$core$MutableString$Index$nullable panda$core$MutableString$lastIndexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(panda$core$MutableString* param0, panda$core$String* param1, panda$core$MutableString$Index param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 345
panda$core$Int64* $tmp1029 = &param0->_length;
panda$core$Int64 $tmp1030 = *$tmp1029;
panda$core$Int64* $tmp1031 = &param1->_length;
panda$core$Int64 $tmp1032 = *$tmp1031;
int64_t $tmp1033 = $tmp1030.value;
int64_t $tmp1034 = $tmp1032.value;
bool $tmp1035 = $tmp1033 < $tmp1034;
panda$core$Bit $tmp1036 = (panda$core$Bit) {$tmp1035};
bool $tmp1037 = $tmp1036.value;
if ($tmp1037) goto block1; else goto block2;
block1:;
// line 346
return ((panda$core$MutableString$Index$nullable) { .nonnull = false });
block2:;
// line 348
panda$core$Int64 $tmp1038 = param2.value;
panda$core$Int64* $tmp1039 = &param0->_length;
panda$core$Int64 $tmp1040 = *$tmp1039;
panda$core$Int64* $tmp1041 = &param1->_length;
panda$core$Int64 $tmp1042 = *$tmp1041;
int64_t $tmp1043 = $tmp1040.value;
int64_t $tmp1044 = $tmp1042.value;
int64_t $tmp1045 = $tmp1043 - $tmp1044;
panda$core$Int64 $tmp1046 = (panda$core$Int64) {$tmp1045};
panda$core$Int64 $tmp1047 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp1038, $tmp1046);
*(&local0) = $tmp1047;
// line 349
panda$core$Int64 $tmp1048 = *(&local0);
panda$core$Int64 $tmp1049 = (panda$core$Int64) {0};
panda$core$Int64 $tmp1050 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp1051 = panda$core$Bit$init$builtin_bit(true);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1052 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1048, $tmp1049, $tmp1050, $tmp1051);
panda$core$Int64 $tmp1053 = $tmp1052.start;
*(&local1) = $tmp1053;
panda$core$Int64 $tmp1054 = $tmp1052.end;
panda$core$Int64 $tmp1055 = $tmp1052.step;
panda$core$UInt64 $tmp1056 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1055);
panda$core$Int64 $tmp1057 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1055);
panda$core$UInt64 $tmp1058 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1057);
panda$core$Bit $tmp1059 = $tmp1052.inclusive;
bool $tmp1060 = $tmp1059.value;
panda$core$Int64 $tmp1061 = (panda$core$Int64) {0};
int64_t $tmp1062 = $tmp1055.value;
int64_t $tmp1063 = $tmp1061.value;
bool $tmp1064 = $tmp1062 >= $tmp1063;
panda$core$Bit $tmp1065 = (panda$core$Bit) {$tmp1064};
bool $tmp1066 = $tmp1065.value;
if ($tmp1066) goto block6; else goto block7;
block6:;
if ($tmp1060) goto block8; else goto block9;
block8:;
int64_t $tmp1067 = $tmp1053.value;
int64_t $tmp1068 = $tmp1054.value;
bool $tmp1069 = $tmp1067 <= $tmp1068;
panda$core$Bit $tmp1070 = (panda$core$Bit) {$tmp1069};
bool $tmp1071 = $tmp1070.value;
if ($tmp1071) goto block3; else goto block4;
block9:;
int64_t $tmp1072 = $tmp1053.value;
int64_t $tmp1073 = $tmp1054.value;
bool $tmp1074 = $tmp1072 < $tmp1073;
panda$core$Bit $tmp1075 = (panda$core$Bit) {$tmp1074};
bool $tmp1076 = $tmp1075.value;
if ($tmp1076) goto block3; else goto block4;
block7:;
if ($tmp1060) goto block10; else goto block11;
block10:;
int64_t $tmp1077 = $tmp1053.value;
int64_t $tmp1078 = $tmp1054.value;
bool $tmp1079 = $tmp1077 >= $tmp1078;
panda$core$Bit $tmp1080 = (panda$core$Bit) {$tmp1079};
bool $tmp1081 = $tmp1080.value;
if ($tmp1081) goto block3; else goto block4;
block11:;
int64_t $tmp1082 = $tmp1053.value;
int64_t $tmp1083 = $tmp1054.value;
bool $tmp1084 = $tmp1082 > $tmp1083;
panda$core$Bit $tmp1085 = (panda$core$Bit) {$tmp1084};
bool $tmp1086 = $tmp1085.value;
if ($tmp1086) goto block3; else goto block4;
block3:;
// line 350
panda$core$Int64 $tmp1087 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1088 = &param1->_length;
panda$core$Int64 $tmp1089 = *$tmp1088;
panda$core$Bit $tmp1090 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1091 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1087, $tmp1089, $tmp1090);
panda$core$Int64 $tmp1092 = $tmp1091.min;
*(&local2) = $tmp1092;
panda$core$Int64 $tmp1093 = $tmp1091.max;
panda$core$Bit $tmp1094 = $tmp1091.inclusive;
bool $tmp1095 = $tmp1094.value;
panda$core$Int64 $tmp1096 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1097 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1096);
if ($tmp1095) goto block15; else goto block16;
block15:;
int64_t $tmp1098 = $tmp1092.value;
int64_t $tmp1099 = $tmp1093.value;
bool $tmp1100 = $tmp1098 <= $tmp1099;
panda$core$Bit $tmp1101 = (panda$core$Bit) {$tmp1100};
bool $tmp1102 = $tmp1101.value;
if ($tmp1102) goto block12; else goto block13;
block16:;
int64_t $tmp1103 = $tmp1092.value;
int64_t $tmp1104 = $tmp1093.value;
bool $tmp1105 = $tmp1103 < $tmp1104;
panda$core$Bit $tmp1106 = (panda$core$Bit) {$tmp1105};
bool $tmp1107 = $tmp1106.value;
if ($tmp1107) goto block12; else goto block13;
block12:;
// line 351
panda$core$Char8** $tmp1108 = &param0->data;
panda$core$Char8* $tmp1109 = *$tmp1108;
panda$core$Int64 $tmp1110 = *(&local1);
panda$core$Int64 $tmp1111 = *(&local2);
int64_t $tmp1112 = $tmp1110.value;
int64_t $tmp1113 = $tmp1111.value;
int64_t $tmp1114 = $tmp1112 + $tmp1113;
panda$core$Int64 $tmp1115 = (panda$core$Int64) {$tmp1114};
int64_t $tmp1116 = $tmp1115.value;
panda$core$Char8 $tmp1117 = $tmp1109[$tmp1116];
panda$core$Char8** $tmp1118 = &param1->data;
panda$core$Char8* $tmp1119 = *$tmp1118;
panda$core$Int64 $tmp1120 = *(&local2);
int64_t $tmp1121 = $tmp1120.value;
panda$core$Char8 $tmp1122 = $tmp1119[$tmp1121];
panda$core$Bit $tmp1123 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp1117, $tmp1122);
bool $tmp1124 = $tmp1123.value;
if ($tmp1124) goto block17; else goto block18;
block17:;
// line 352
goto block5;
block18:;
goto block14;
block14:;
panda$core$Int64 $tmp1125 = *(&local2);
int64_t $tmp1126 = $tmp1093.value;
int64_t $tmp1127 = $tmp1125.value;
int64_t $tmp1128 = $tmp1126 - $tmp1127;
panda$core$Int64 $tmp1129 = (panda$core$Int64) {$tmp1128};
panda$core$UInt64 $tmp1130 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1129);
if ($tmp1095) goto block20; else goto block21;
block20:;
uint64_t $tmp1131 = $tmp1130.value;
uint64_t $tmp1132 = $tmp1097.value;
bool $tmp1133 = $tmp1131 >= $tmp1132;
panda$core$Bit $tmp1134 = (panda$core$Bit) {$tmp1133};
bool $tmp1135 = $tmp1134.value;
if ($tmp1135) goto block19; else goto block13;
block21:;
uint64_t $tmp1136 = $tmp1130.value;
uint64_t $tmp1137 = $tmp1097.value;
bool $tmp1138 = $tmp1136 > $tmp1137;
panda$core$Bit $tmp1139 = (panda$core$Bit) {$tmp1138};
bool $tmp1140 = $tmp1139.value;
if ($tmp1140) goto block19; else goto block13;
block19:;
int64_t $tmp1141 = $tmp1125.value;
int64_t $tmp1142 = $tmp1096.value;
int64_t $tmp1143 = $tmp1141 + $tmp1142;
panda$core$Int64 $tmp1144 = (panda$core$Int64) {$tmp1143};
*(&local2) = $tmp1144;
goto block12;
block13:;
// line 355
panda$core$Int64 $tmp1145 = *(&local1);
panda$core$MutableString$Index $tmp1146 = panda$core$MutableString$Index$init$panda$core$Int64($tmp1145);
panda$core$Bit $tmp1147 = panda$core$Bit$init$builtin_bit(((panda$core$MutableString$Index$nullable) { $tmp1146, true }).nonnull);
bool $tmp1148 = $tmp1147.value;
if ($tmp1148) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp1149 = (panda$core$Int64) {1};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1150, $tmp1149, &$s1151);
abort(); // unreachable
block22:;
return ((panda$core$MutableString$Index$nullable) { ((panda$core$MutableString$Index) ((panda$core$MutableString$Index$nullable) { $tmp1146, true }).value), true });
block5:;
panda$core$Int64 $tmp1152 = *(&local1);
if ($tmp1066) goto block25; else goto block26;
block25:;
int64_t $tmp1153 = $tmp1054.value;
int64_t $tmp1154 = $tmp1152.value;
int64_t $tmp1155 = $tmp1153 - $tmp1154;
panda$core$Int64 $tmp1156 = (panda$core$Int64) {$tmp1155};
panda$core$UInt64 $tmp1157 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1156);
if ($tmp1060) goto block27; else goto block28;
block27:;
uint64_t $tmp1158 = $tmp1157.value;
uint64_t $tmp1159 = $tmp1056.value;
bool $tmp1160 = $tmp1158 >= $tmp1159;
panda$core$Bit $tmp1161 = (panda$core$Bit) {$tmp1160};
bool $tmp1162 = $tmp1161.value;
if ($tmp1162) goto block24; else goto block4;
block28:;
uint64_t $tmp1163 = $tmp1157.value;
uint64_t $tmp1164 = $tmp1056.value;
bool $tmp1165 = $tmp1163 > $tmp1164;
panda$core$Bit $tmp1166 = (panda$core$Bit) {$tmp1165};
bool $tmp1167 = $tmp1166.value;
if ($tmp1167) goto block24; else goto block4;
block26:;
int64_t $tmp1168 = $tmp1152.value;
int64_t $tmp1169 = $tmp1054.value;
int64_t $tmp1170 = $tmp1168 - $tmp1169;
panda$core$Int64 $tmp1171 = (panda$core$Int64) {$tmp1170};
panda$core$UInt64 $tmp1172 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1171);
if ($tmp1060) goto block29; else goto block30;
block29:;
uint64_t $tmp1173 = $tmp1172.value;
uint64_t $tmp1174 = $tmp1058.value;
bool $tmp1175 = $tmp1173 >= $tmp1174;
panda$core$Bit $tmp1176 = (panda$core$Bit) {$tmp1175};
bool $tmp1177 = $tmp1176.value;
if ($tmp1177) goto block24; else goto block4;
block30:;
uint64_t $tmp1178 = $tmp1172.value;
uint64_t $tmp1179 = $tmp1058.value;
bool $tmp1180 = $tmp1178 > $tmp1179;
panda$core$Bit $tmp1181 = (panda$core$Bit) {$tmp1180};
bool $tmp1182 = $tmp1181.value;
if ($tmp1182) goto block24; else goto block4;
block24:;
int64_t $tmp1183 = $tmp1152.value;
int64_t $tmp1184 = $tmp1055.value;
int64_t $tmp1185 = $tmp1183 + $tmp1184;
panda$core$Int64 $tmp1186 = (panda$core$Int64) {$tmp1185};
*(&local1) = $tmp1186;
goto block3;
block4:;
// line 357
return ((panda$core$MutableString$Index$nullable) { .nonnull = false });

}
panda$core$Bit panda$core$MutableString$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$MutableString* param0, panda$core$RegularExpression* param1) {

// line 368
panda$core$String* $tmp1187 = panda$core$MutableString$convert$R$panda$core$String(param0);
panda$core$Matcher* $tmp1188 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, $tmp1187);
panda$core$Bit $tmp1189;
panda$core$Matcher$matches$R$panda$core$Bit(&$tmp1189, $tmp1188);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1188));
// unreffing REF($2:panda.core.Matcher)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1187));
// unreffing REF($1:panda.core.String)
return $tmp1189;

}
panda$core$Bit panda$core$MutableString$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$MutableString* param0, panda$core$RegularExpression* param1) {

// line 379
panda$core$String* $tmp1190 = panda$core$MutableString$convert$R$panda$core$String(param0);
panda$core$Matcher* $tmp1191 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, $tmp1190);
panda$core$Bit $tmp1192 = panda$core$Matcher$find$R$panda$core$Bit($tmp1191);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1191));
// unreffing REF($2:panda.core.Matcher)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1190));
// unreffing REF($1:panda.core.String)
return $tmp1192;

}
void panda$core$MutableString$trim(panda$core$MutableString* param0) {

panda$core$MutableString$Index local0;
panda$core$Bit local1;
panda$core$Bit local2;
// line 384
panda$core$MutableString$Index $tmp1193 = panda$core$MutableString$get_start$R$panda$core$MutableString$Index(param0);
*(&local0) = $tmp1193;
// line 385
goto block1;
block1:;
panda$core$MutableString$Index $tmp1194 = *(&local0);
panda$core$MutableString$Index$wrapper* $tmp1195;
$tmp1195 = (panda$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
$tmp1195->value = $tmp1194;
panda$core$MutableString$Index $tmp1196 = panda$core$MutableString$get_end$R$panda$core$MutableString$Index(param0);
panda$core$MutableString$Index$wrapper* $tmp1197;
$tmp1197 = (panda$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
$tmp1197->value = $tmp1196;
ITable* $tmp1198 = ((panda$core$Equatable*) $tmp1195)->$class->itable;
while ($tmp1198->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1198 = $tmp1198->next;
}
$fn1200 $tmp1199 = $tmp1198->methods[1];
panda$core$Bit $tmp1201 = $tmp1199(((panda$core$Equatable*) $tmp1195), ((panda$core$Equatable*) $tmp1197));
bool $tmp1202 = $tmp1201.value;
if ($tmp1202) goto block4; else goto block5;
block4:;
panda$core$MutableString$Index $tmp1203 = *(&local0);
panda$core$Char32 $tmp1204 = panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32(param0, $tmp1203);
panda$core$Bit $tmp1205 = panda$core$Char32$isWhitespace$R$panda$core$Bit($tmp1204);
*(&local1) = $tmp1205;
goto block6;
block5:;
*(&local1) = $tmp1201;
goto block6;
block6:;
panda$core$Bit $tmp1206 = *(&local1);
bool $tmp1207 = $tmp1206.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1197)));
// unreffing REF($9:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1195)));
// unreffing REF($6:panda.core.Equatable<panda.core.MutableString.Index>)
if ($tmp1207) goto block2; else goto block3;
block2:;
// line 386
panda$core$MutableString$Index $tmp1208 = *(&local0);
panda$core$MutableString$Index $tmp1209 = panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(param0, $tmp1208);
*(&local0) = $tmp1209;
goto block1;
block3:;
// line 388
panda$core$MutableString$Index $tmp1210 = panda$core$MutableString$get_start$R$panda$core$MutableString$Index(param0);
panda$core$MutableString$Index $tmp1211 = *(&local0);
panda$core$Bit $tmp1212 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp1213 = panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit($tmp1210, $tmp1211, $tmp1212);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(param0, $tmp1213, &$s1214);
// line 389
panda$core$Int64* $tmp1215 = &param0->_length;
panda$core$Int64 $tmp1216 = *$tmp1215;
panda$core$Int64 $tmp1217 = (panda$core$Int64) {0};
panda$core$Bit $tmp1218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1216, $tmp1217);
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block7; else goto block8;
block7:;
// line 390
return;
block8:;
// line 392
panda$core$MutableString$Index $tmp1220 = panda$core$MutableString$get_end$R$panda$core$MutableString$Index(param0);
panda$core$MutableString$Index $tmp1221 = panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index(param0, $tmp1220);
*(&local0) = $tmp1221;
// line 393
goto block9;
block9:;
panda$core$MutableString$Index $tmp1222 = *(&local0);
panda$core$MutableString$Index$wrapper* $tmp1223;
$tmp1223 = (panda$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
$tmp1223->value = $tmp1222;
panda$core$MutableString$Index $tmp1224 = panda$core$MutableString$get_start$R$panda$core$MutableString$Index(param0);
panda$core$MutableString$Index$wrapper* $tmp1225;
$tmp1225 = (panda$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
$tmp1225->value = $tmp1224;
ITable* $tmp1226 = ((panda$core$Equatable*) $tmp1223)->$class->itable;
while ($tmp1226->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1226 = $tmp1226->next;
}
$fn1228 $tmp1227 = $tmp1226->methods[1];
panda$core$Bit $tmp1229 = $tmp1227(((panda$core$Equatable*) $tmp1223), ((panda$core$Equatable*) $tmp1225));
bool $tmp1230 = $tmp1229.value;
if ($tmp1230) goto block12; else goto block13;
block12:;
panda$core$MutableString$Index $tmp1231 = *(&local0);
panda$core$Char32 $tmp1232 = panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32(param0, $tmp1231);
panda$core$Bit $tmp1233 = panda$core$Char32$isWhitespace$R$panda$core$Bit($tmp1232);
*(&local2) = $tmp1233;
goto block14;
block13:;
*(&local2) = $tmp1229;
goto block14;
block14:;
panda$core$Bit $tmp1234 = *(&local2);
bool $tmp1235 = $tmp1234.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1225)));
// unreffing REF($60:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1223)));
// unreffing REF($57:panda.core.Equatable<panda.core.MutableString.Index>)
if ($tmp1235) goto block10; else goto block11;
block10:;
// line 394
panda$core$MutableString$Index $tmp1236 = *(&local0);
panda$core$MutableString$Index $tmp1237 = panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index(param0, $tmp1236);
*(&local0) = $tmp1237;
goto block9;
block11:;
// line 396
panda$core$MutableString$Index $tmp1238 = *(&local0);
panda$core$MutableString$Index $tmp1239 = panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(param0, $tmp1238);
panda$core$Bit $tmp1240 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp1241 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { $tmp1239, true }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1240);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param0, $tmp1241, &$s1242);
return;

}
void panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(panda$core$MutableString* param0, panda$core$RegularExpression* param1, panda$core$String* param2) {

// line 401
panda$core$Bit $tmp1243 = panda$core$Bit$init$builtin_bit(true);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit(param0, param1, param2, $tmp1243);
return;

}
void panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit(panda$core$MutableString* param0, panda$core$RegularExpression* param1, panda$core$String* param2, panda$core$Bit param3) {

panda$core$Matcher* local0 = NULL;
// line 406
panda$core$String* $tmp1244 = panda$core$MutableString$convert$R$panda$core$String(param0);
panda$core$Matcher* $tmp1245 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, $tmp1244);
*(&local0) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1245));
panda$core$Matcher* $tmp1246 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1246));
*(&local0) = $tmp1245;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1245));
// unreffing REF($2:panda.core.Matcher)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1244));
// unreffing REF($1:panda.core.String)
// line 407
panda$core$MutableString$clear(param0);
// line 408
goto block1;
block1:;
panda$core$Matcher* $tmp1247 = *(&local0);
panda$core$Bit $tmp1248 = panda$core$Matcher$find$R$panda$core$Bit($tmp1247);
bool $tmp1249 = $tmp1248.value;
if ($tmp1249) goto block2; else goto block3;
block2:;
// line 409
panda$core$Matcher* $tmp1250 = *(&local0);
panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit($tmp1250, param0, param2, param3);
goto block1;
block3:;
// line 411
panda$core$Matcher* $tmp1251 = *(&local0);
panda$core$Matcher$appendTail$panda$core$MutableString($tmp1251, param0);
panda$core$Matcher* $tmp1252 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1252));
// unreffing matcher
*(&local0) = ((panda$core$Matcher*) NULL);
return;

}
void panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP(panda$core$MutableString* param0, panda$core$RegularExpression* param1, panda$core$MutableMethod* param2) {

panda$core$Matcher* local0 = NULL;
panda$core$Object* local1 = NULL;
// line 432
panda$core$String* $tmp1253 = panda$core$MutableString$convert$R$panda$core$String(param0);
panda$core$Matcher* $tmp1254 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, $tmp1253);
*(&local0) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1254));
panda$core$Matcher* $tmp1255 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1255));
*(&local0) = $tmp1254;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1254));
// unreffing REF($2:panda.core.Matcher)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1253));
// unreffing REF($1:panda.core.String)
// line 433
panda$core$MutableString$clear(param0);
// line 434
goto block1;
block1:;
panda$core$Matcher* $tmp1256 = *(&local0);
panda$core$Bit $tmp1257 = panda$core$Matcher$find$R$panda$core$Bit($tmp1256);
bool $tmp1258 = $tmp1257.value;
if ($tmp1258) goto block2; else goto block3;
block2:;
// line 435
panda$core$Matcher* $tmp1259 = *(&local0);
panda$core$Matcher* $tmp1260 = *(&local0);
panda$core$Int64 $tmp1261 = (panda$core$Int64) {0};
panda$core$String* $tmp1262 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q($tmp1260, $tmp1261);
panda$core$Bit $tmp1263 = panda$core$Bit$init$builtin_bit($tmp1262 != NULL);
bool $tmp1264 = $tmp1263.value;
if ($tmp1264) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1265 = (panda$core$Int64) {435};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1266, $tmp1265, &$s1267);
abort(); // unreachable
block4:;
panda$core$Int8** $tmp1268 = &param2->pointer;
panda$core$Int8* $tmp1269 = *$tmp1268;
panda$core$Object** $tmp1270 = &param2->target;
panda$core$Object* $tmp1271 = *$tmp1270;
bool $tmp1272 = $tmp1271 != ((panda$core$Object*) NULL);
if ($tmp1272) goto block6; else goto block7;
block7:;
panda$core$Object* $tmp1274 = (($fn1273) $tmp1269)($tmp1262);
*(&local1) = $tmp1274;
goto block8;
block6:;
panda$core$Object* $tmp1276 = (($fn1275) $tmp1269)($tmp1271, $tmp1262);
*(&local1) = $tmp1276;
goto block8;
block8:;
panda$core$Object* $tmp1277 = *(&local1);
$fn1279 $tmp1278 = ($fn1279) $tmp1277->$class->vtable[0];
panda$core$String* $tmp1280 = $tmp1278($tmp1277);
panda$core$Bit $tmp1281 = panda$core$Bit$init$builtin_bit(false);
panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit($tmp1259, param0, $tmp1280, $tmp1281);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1280));
// unreffing REF($54:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1277);
// unreffing REF($52:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
// unreffing REF($28:panda.core.String?)
goto block1;
block3:;
// line 437
panda$core$Matcher* $tmp1282 = *(&local0);
panda$core$Matcher$appendTail$panda$core$MutableString($tmp1282, param0);
panda$core$Matcher* $tmp1283 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1283));
// unreffing matcher
*(&local0) = ((panda$core$Matcher*) NULL);
return;

}
void panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(panda$core$MutableString* param0, panda$core$RegularExpression* param1, panda$core$MutableMethod* param2) {

panda$core$Matcher* local0 = NULL;
panda$collections$Array* local1 = NULL;
panda$core$Int64 local2;
panda$core$Object* local3 = NULL;
// line 451
panda$core$String* $tmp1284 = panda$core$MutableString$convert$R$panda$core$String(param0);
panda$core$Matcher* $tmp1285 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, $tmp1284);
*(&local0) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1285));
panda$core$Matcher* $tmp1286 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1286));
*(&local0) = $tmp1285;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1285));
// unreffing REF($2:panda.core.Matcher)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1284));
// unreffing REF($1:panda.core.String)
// line 452
panda$core$MutableString$clear(param0);
// line 453
goto block1;
block1:;
panda$core$Matcher* $tmp1287 = *(&local0);
panda$core$Bit $tmp1288 = panda$core$Matcher$find$R$panda$core$Bit($tmp1287);
bool $tmp1289 = $tmp1288.value;
if ($tmp1289) goto block2; else goto block3;
block2:;
// line 454
panda$collections$Array* $tmp1290 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1290);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1290));
panda$collections$Array* $tmp1291 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1291));
*(&local1) = $tmp1290;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1290));
// unreffing REF($25:panda.collections.Array<panda.core.String?>)
// line 455
panda$core$Int64 $tmp1292 = (panda$core$Int64) {0};
panda$core$Matcher* $tmp1293 = *(&local0);
panda$core$Int64 $tmp1294;
panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp1294, $tmp1293);
panda$core$Bit $tmp1295 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1296 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1292, $tmp1294, $tmp1295);
panda$core$Int64 $tmp1297 = $tmp1296.min;
*(&local2) = $tmp1297;
panda$core$Int64 $tmp1298 = $tmp1296.max;
panda$core$Bit $tmp1299 = $tmp1296.inclusive;
bool $tmp1300 = $tmp1299.value;
panda$core$Int64 $tmp1301 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1302 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1301);
if ($tmp1300) goto block7; else goto block8;
block7:;
int64_t $tmp1303 = $tmp1297.value;
int64_t $tmp1304 = $tmp1298.value;
bool $tmp1305 = $tmp1303 <= $tmp1304;
panda$core$Bit $tmp1306 = (panda$core$Bit) {$tmp1305};
bool $tmp1307 = $tmp1306.value;
if ($tmp1307) goto block4; else goto block5;
block8:;
int64_t $tmp1308 = $tmp1297.value;
int64_t $tmp1309 = $tmp1298.value;
bool $tmp1310 = $tmp1308 < $tmp1309;
panda$core$Bit $tmp1311 = (panda$core$Bit) {$tmp1310};
bool $tmp1312 = $tmp1311.value;
if ($tmp1312) goto block4; else goto block5;
block4:;
// line 456
panda$collections$Array* $tmp1313 = *(&local1);
panda$core$Matcher* $tmp1314 = *(&local0);
panda$core$Int64 $tmp1315 = *(&local2);
panda$core$String* $tmp1316 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q($tmp1314, $tmp1315);
panda$collections$Array$add$panda$collections$Array$T($tmp1313, ((panda$core$Object*) $tmp1316));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1316));
// unreffing REF($69:panda.core.String?)
goto block6;
block6:;
panda$core$Int64 $tmp1317 = *(&local2);
int64_t $tmp1318 = $tmp1298.value;
int64_t $tmp1319 = $tmp1317.value;
int64_t $tmp1320 = $tmp1318 - $tmp1319;
panda$core$Int64 $tmp1321 = (panda$core$Int64) {$tmp1320};
panda$core$UInt64 $tmp1322 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1321);
if ($tmp1300) goto block10; else goto block11;
block10:;
uint64_t $tmp1323 = $tmp1322.value;
uint64_t $tmp1324 = $tmp1302.value;
bool $tmp1325 = $tmp1323 >= $tmp1324;
panda$core$Bit $tmp1326 = (panda$core$Bit) {$tmp1325};
bool $tmp1327 = $tmp1326.value;
if ($tmp1327) goto block9; else goto block5;
block11:;
uint64_t $tmp1328 = $tmp1322.value;
uint64_t $tmp1329 = $tmp1302.value;
bool $tmp1330 = $tmp1328 > $tmp1329;
panda$core$Bit $tmp1331 = (panda$core$Bit) {$tmp1330};
bool $tmp1332 = $tmp1331.value;
if ($tmp1332) goto block9; else goto block5;
block9:;
int64_t $tmp1333 = $tmp1317.value;
int64_t $tmp1334 = $tmp1301.value;
int64_t $tmp1335 = $tmp1333 + $tmp1334;
panda$core$Int64 $tmp1336 = (panda$core$Int64) {$tmp1335};
*(&local2) = $tmp1336;
goto block4;
block5:;
// line 458
panda$core$Matcher* $tmp1337 = *(&local0);
panda$collections$Array* $tmp1338 = *(&local1);
panda$core$Int8** $tmp1339 = &param2->pointer;
panda$core$Int8* $tmp1340 = *$tmp1339;
panda$core$Object** $tmp1341 = &param2->target;
panda$core$Object* $tmp1342 = *$tmp1341;
bool $tmp1343 = $tmp1342 != ((panda$core$Object*) NULL);
if ($tmp1343) goto block12; else goto block13;
block13:;
panda$core$Object* $tmp1345 = (($fn1344) $tmp1340)(((panda$collections$ListView*) $tmp1338));
*(&local3) = $tmp1345;
goto block14;
block12:;
panda$core$Object* $tmp1347 = (($fn1346) $tmp1340)($tmp1342, ((panda$collections$ListView*) $tmp1338));
*(&local3) = $tmp1347;
goto block14;
block14:;
panda$core$Object* $tmp1348 = *(&local3);
$fn1350 $tmp1349 = ($fn1350) $tmp1348->$class->vtable[0];
panda$core$String* $tmp1351 = $tmp1349($tmp1348);
panda$core$Bit $tmp1352 = panda$core$Bit$init$builtin_bit(false);
panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit($tmp1337, param0, $tmp1351, $tmp1352);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1351));
// unreffing REF($122:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1348);
// unreffing REF($120:panda.core.Object)
panda$collections$Array* $tmp1353 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1353));
// unreffing groups
*(&local1) = ((panda$collections$Array*) NULL);
goto block1;
block3:;
// line 460
panda$core$Matcher* $tmp1354 = *(&local0);
panda$core$Matcher$appendTail$panda$core$MutableString($tmp1354, param0);
panda$core$Matcher* $tmp1355 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1355));
// unreffing matcher
*(&local0) = ((panda$core$Matcher*) NULL);
return;

}
panda$core$Char32 panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32(panda$core$MutableString* param0, panda$core$MutableString$Index param1) {

panda$core$Int64 local0;
panda$core$Char8 local1;
panda$core$Int32 local2;
// line 467
panda$core$Int64 $tmp1356 = param1.value;
*(&local0) = $tmp1356;
// line 468
panda$core$Char8** $tmp1357 = &param0->data;
panda$core$Char8* $tmp1358 = *$tmp1357;
panda$core$Int64 $tmp1359 = *(&local0);
int64_t $tmp1360 = $tmp1359.value;
panda$core$Char8 $tmp1361 = $tmp1358[$tmp1360];
*(&local1) = $tmp1361;
// line 469
panda$core$Char8 $tmp1362 = *(&local1);
panda$core$Int32 $tmp1363 = panda$core$Char8$convert$R$panda$core$Int32($tmp1362);
*(&local2) = $tmp1363;
// line 470
panda$core$Char8 $tmp1364 = *(&local1);
uint8_t $tmp1365 = $tmp1364.value;
int64_t $tmp1366 = ((int64_t) $tmp1365) & 255;
bool $tmp1367 = $tmp1366 < 192;
panda$core$Bit $tmp1368 = panda$core$Bit$init$builtin_bit($tmp1367);
bool $tmp1369 = $tmp1368.value;
if ($tmp1369) goto block1; else goto block2;
block1:;
// line 471
panda$core$Int32 $tmp1370 = *(&local2);
panda$core$Char32 $tmp1371 = panda$core$Char32$init$panda$core$Int32($tmp1370);
return $tmp1371;
block2:;
// line 473
panda$core$Char8 $tmp1372 = *(&local1);
uint8_t $tmp1373 = $tmp1372.value;
int64_t $tmp1374 = ((int64_t) $tmp1373) & 255;
bool $tmp1375 = $tmp1374 < 224;
panda$core$Bit $tmp1376 = panda$core$Bit$init$builtin_bit($tmp1375);
bool $tmp1377 = $tmp1376.value;
if ($tmp1377) goto block3; else goto block4;
block3:;
// line 474
panda$core$Int64 $tmp1378 = *(&local0);
panda$core$Int64 $tmp1379 = (panda$core$Int64) {1};
int64_t $tmp1380 = $tmp1378.value;
int64_t $tmp1381 = $tmp1379.value;
int64_t $tmp1382 = $tmp1380 + $tmp1381;
panda$core$Int64 $tmp1383 = (panda$core$Int64) {$tmp1382};
panda$core$Int64* $tmp1384 = &param0->_length;
panda$core$Int64 $tmp1385 = *$tmp1384;
int64_t $tmp1386 = $tmp1383.value;
int64_t $tmp1387 = $tmp1385.value;
bool $tmp1388 = $tmp1386 < $tmp1387;
panda$core$Bit $tmp1389 = (panda$core$Bit) {$tmp1388};
bool $tmp1390 = $tmp1389.value;
if ($tmp1390) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp1391 = (panda$core$Int64) {474};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1392, $tmp1391);
abort(); // unreachable
block5:;
// line 475
panda$core$Int32 $tmp1393 = *(&local2);
panda$core$Int32 $tmp1394 = (panda$core$Int32) {31};
panda$core$Int32 $tmp1395 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp1393, $tmp1394);
panda$core$Int32 $tmp1396 = (panda$core$Int32) {6};
panda$core$Int32 $tmp1397 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp1395, $tmp1396);
panda$core$Char8** $tmp1398 = &param0->data;
panda$core$Char8* $tmp1399 = *$tmp1398;
panda$core$Int64 $tmp1400 = *(&local0);
panda$core$Int64 $tmp1401 = (panda$core$Int64) {1};
int64_t $tmp1402 = $tmp1400.value;
int64_t $tmp1403 = $tmp1401.value;
int64_t $tmp1404 = $tmp1402 + $tmp1403;
panda$core$Int64 $tmp1405 = (panda$core$Int64) {$tmp1404};
int64_t $tmp1406 = $tmp1405.value;
panda$core$Char8 $tmp1407 = $tmp1399[$tmp1406];
panda$core$Int32 $tmp1408 = panda$core$Char8$convert$R$panda$core$Int32($tmp1407);
panda$core$Int32 $tmp1409 = (panda$core$Int32) {63};
panda$core$Int32 $tmp1410 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp1408, $tmp1409);
int32_t $tmp1411 = $tmp1397.value;
int32_t $tmp1412 = $tmp1410.value;
int32_t $tmp1413 = $tmp1411 + $tmp1412;
panda$core$Int32 $tmp1414 = (panda$core$Int32) {$tmp1413};
*(&local2) = $tmp1414;
// line 476
panda$core$Int32 $tmp1415 = *(&local2);
panda$core$Char32 $tmp1416 = panda$core$Char32$init$panda$core$Int32($tmp1415);
return $tmp1416;
block4:;
// line 478
panda$core$Char8 $tmp1417 = *(&local1);
uint8_t $tmp1418 = $tmp1417.value;
int64_t $tmp1419 = ((int64_t) $tmp1418) & 255;
bool $tmp1420 = $tmp1419 < 240;
panda$core$Bit $tmp1421 = panda$core$Bit$init$builtin_bit($tmp1420);
bool $tmp1422 = $tmp1421.value;
if ($tmp1422) goto block7; else goto block8;
block7:;
// line 479
panda$core$Int64 $tmp1423 = *(&local0);
panda$core$Int64 $tmp1424 = (panda$core$Int64) {2};
int64_t $tmp1425 = $tmp1423.value;
int64_t $tmp1426 = $tmp1424.value;
int64_t $tmp1427 = $tmp1425 + $tmp1426;
panda$core$Int64 $tmp1428 = (panda$core$Int64) {$tmp1427};
panda$core$Int64* $tmp1429 = &param0->_length;
panda$core$Int64 $tmp1430 = *$tmp1429;
int64_t $tmp1431 = $tmp1428.value;
int64_t $tmp1432 = $tmp1430.value;
bool $tmp1433 = $tmp1431 < $tmp1432;
panda$core$Bit $tmp1434 = (panda$core$Bit) {$tmp1433};
bool $tmp1435 = $tmp1434.value;
if ($tmp1435) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp1436 = (panda$core$Int64) {479};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1437, $tmp1436);
abort(); // unreachable
block9:;
// line 480
panda$core$Int32 $tmp1438 = *(&local2);
panda$core$Int32 $tmp1439 = (panda$core$Int32) {15};
panda$core$Int32 $tmp1440 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp1438, $tmp1439);
panda$core$Int32 $tmp1441 = (panda$core$Int32) {12};
panda$core$Int32 $tmp1442 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp1440, $tmp1441);
panda$core$Char8** $tmp1443 = &param0->data;
panda$core$Char8* $tmp1444 = *$tmp1443;
panda$core$Int64 $tmp1445 = *(&local0);
panda$core$Int64 $tmp1446 = (panda$core$Int64) {1};
int64_t $tmp1447 = $tmp1445.value;
int64_t $tmp1448 = $tmp1446.value;
int64_t $tmp1449 = $tmp1447 + $tmp1448;
panda$core$Int64 $tmp1450 = (panda$core$Int64) {$tmp1449};
int64_t $tmp1451 = $tmp1450.value;
panda$core$Char8 $tmp1452 = $tmp1444[$tmp1451];
panda$core$Int32 $tmp1453 = panda$core$Char8$convert$R$panda$core$Int32($tmp1452);
panda$core$Int32 $tmp1454 = (panda$core$Int32) {63};
panda$core$Int32 $tmp1455 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp1453, $tmp1454);
panda$core$Int32 $tmp1456 = (panda$core$Int32) {6};
panda$core$Int32 $tmp1457 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp1455, $tmp1456);
int32_t $tmp1458 = $tmp1442.value;
int32_t $tmp1459 = $tmp1457.value;
int32_t $tmp1460 = $tmp1458 + $tmp1459;
panda$core$Int32 $tmp1461 = (panda$core$Int32) {$tmp1460};
panda$core$Char8** $tmp1462 = &param0->data;
panda$core$Char8* $tmp1463 = *$tmp1462;
panda$core$Int64 $tmp1464 = *(&local0);
panda$core$Int64 $tmp1465 = (panda$core$Int64) {2};
int64_t $tmp1466 = $tmp1464.value;
int64_t $tmp1467 = $tmp1465.value;
int64_t $tmp1468 = $tmp1466 + $tmp1467;
panda$core$Int64 $tmp1469 = (panda$core$Int64) {$tmp1468};
int64_t $tmp1470 = $tmp1469.value;
panda$core$Char8 $tmp1471 = $tmp1463[$tmp1470];
panda$core$Int32 $tmp1472 = panda$core$Char8$convert$R$panda$core$Int32($tmp1471);
panda$core$Int32 $tmp1473 = (panda$core$Int32) {63};
panda$core$Int32 $tmp1474 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp1472, $tmp1473);
int32_t $tmp1475 = $tmp1461.value;
int32_t $tmp1476 = $tmp1474.value;
int32_t $tmp1477 = $tmp1475 + $tmp1476;
panda$core$Int32 $tmp1478 = (panda$core$Int32) {$tmp1477};
*(&local2) = $tmp1478;
// line 482
panda$core$Int32 $tmp1479 = *(&local2);
panda$core$Char32 $tmp1480 = panda$core$Char32$init$panda$core$Int32($tmp1479);
return $tmp1480;
block8:;
// line 484
panda$core$Int64 $tmp1481 = *(&local0);
panda$core$Int64 $tmp1482 = (panda$core$Int64) {3};
int64_t $tmp1483 = $tmp1481.value;
int64_t $tmp1484 = $tmp1482.value;
int64_t $tmp1485 = $tmp1483 + $tmp1484;
panda$core$Int64 $tmp1486 = (panda$core$Int64) {$tmp1485};
panda$core$Int64* $tmp1487 = &param0->_length;
panda$core$Int64 $tmp1488 = *$tmp1487;
int64_t $tmp1489 = $tmp1486.value;
int64_t $tmp1490 = $tmp1488.value;
bool $tmp1491 = $tmp1489 < $tmp1490;
panda$core$Bit $tmp1492 = (panda$core$Bit) {$tmp1491};
bool $tmp1493 = $tmp1492.value;
if ($tmp1493) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp1494 = (panda$core$Int64) {484};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1495, $tmp1494);
abort(); // unreachable
block11:;
// line 485
panda$core$Int32 $tmp1496 = *(&local2);
panda$core$Int32 $tmp1497 = (panda$core$Int32) {7};
panda$core$Int32 $tmp1498 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp1496, $tmp1497);
panda$core$Int32 $tmp1499 = (panda$core$Int32) {18};
panda$core$Int32 $tmp1500 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp1498, $tmp1499);
panda$core$Char8** $tmp1501 = &param0->data;
panda$core$Char8* $tmp1502 = *$tmp1501;
panda$core$Int64 $tmp1503 = *(&local0);
panda$core$Int64 $tmp1504 = (panda$core$Int64) {1};
int64_t $tmp1505 = $tmp1503.value;
int64_t $tmp1506 = $tmp1504.value;
int64_t $tmp1507 = $tmp1505 + $tmp1506;
panda$core$Int64 $tmp1508 = (panda$core$Int64) {$tmp1507};
int64_t $tmp1509 = $tmp1508.value;
panda$core$Char8 $tmp1510 = $tmp1502[$tmp1509];
panda$core$Int32 $tmp1511 = panda$core$Char8$convert$R$panda$core$Int32($tmp1510);
panda$core$Int32 $tmp1512 = (panda$core$Int32) {63};
panda$core$Int32 $tmp1513 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp1511, $tmp1512);
panda$core$Int32 $tmp1514 = (panda$core$Int32) {12};
panda$core$Int32 $tmp1515 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp1513, $tmp1514);
int32_t $tmp1516 = $tmp1500.value;
int32_t $tmp1517 = $tmp1515.value;
int32_t $tmp1518 = $tmp1516 + $tmp1517;
panda$core$Int32 $tmp1519 = (panda$core$Int32) {$tmp1518};
panda$core$Char8** $tmp1520 = &param0->data;
panda$core$Char8* $tmp1521 = *$tmp1520;
panda$core$Int64 $tmp1522 = *(&local0);
panda$core$Int64 $tmp1523 = (panda$core$Int64) {2};
int64_t $tmp1524 = $tmp1522.value;
int64_t $tmp1525 = $tmp1523.value;
int64_t $tmp1526 = $tmp1524 + $tmp1525;
panda$core$Int64 $tmp1527 = (panda$core$Int64) {$tmp1526};
int64_t $tmp1528 = $tmp1527.value;
panda$core$Char8 $tmp1529 = $tmp1521[$tmp1528];
panda$core$Int32 $tmp1530 = panda$core$Char8$convert$R$panda$core$Int32($tmp1529);
panda$core$Int32 $tmp1531 = (panda$core$Int32) {63};
panda$core$Int32 $tmp1532 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp1530, $tmp1531);
panda$core$Int32 $tmp1533 = (panda$core$Int32) {6};
panda$core$Int32 $tmp1534 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp1532, $tmp1533);
int32_t $tmp1535 = $tmp1519.value;
int32_t $tmp1536 = $tmp1534.value;
int32_t $tmp1537 = $tmp1535 + $tmp1536;
panda$core$Int32 $tmp1538 = (panda$core$Int32) {$tmp1537};
panda$core$Char8** $tmp1539 = &param0->data;
panda$core$Char8* $tmp1540 = *$tmp1539;
panda$core$Int64 $tmp1541 = *(&local0);
panda$core$Int64 $tmp1542 = (panda$core$Int64) {3};
int64_t $tmp1543 = $tmp1541.value;
int64_t $tmp1544 = $tmp1542.value;
int64_t $tmp1545 = $tmp1543 + $tmp1544;
panda$core$Int64 $tmp1546 = (panda$core$Int64) {$tmp1545};
int64_t $tmp1547 = $tmp1546.value;
panda$core$Char8 $tmp1548 = $tmp1540[$tmp1547];
panda$core$Int32 $tmp1549 = panda$core$Char8$convert$R$panda$core$Int32($tmp1548);
panda$core$Int32 $tmp1550 = (panda$core$Int32) {63};
panda$core$Int32 $tmp1551 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp1549, $tmp1550);
int32_t $tmp1552 = $tmp1538.value;
int32_t $tmp1553 = $tmp1551.value;
int32_t $tmp1554 = $tmp1552 + $tmp1553;
panda$core$Int32 $tmp1555 = (panda$core$Int32) {$tmp1554};
*(&local2) = $tmp1555;
// line 488
panda$core$Int32 $tmp1556 = *(&local2);
panda$core$Char32 $tmp1557 = panda$core$Char32$init$panda$core$Int32($tmp1556);
return $tmp1557;

}
panda$core$Char32 panda$core$MutableString$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$MutableString* param0, panda$core$Int64 param1) {

// line 497
panda$core$MutableString$Index $tmp1558 = panda$core$MutableString$get_start$R$panda$core$MutableString$Index(param0);
panda$core$MutableString$Index $tmp1559 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(param0, $tmp1558, param1);
panda$core$Char32 $tmp1560 = panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32(param0, $tmp1559);
return $tmp1560;

}
void panda$core$MutableString$$IDXEQ$panda$core$MutableString$Index$panda$core$Char32(panda$core$MutableString* param0, panda$core$MutableString$Index param1, panda$core$Char32 param2) {

// line 502
panda$core$Bit $tmp1561 = panda$core$Bit$init$builtin_bit(true);
panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp1562 = panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit(param1, param1, $tmp1561);
panda$core$String* $tmp1563 = panda$core$Char32$convert$R$panda$core$String(param2);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(param0, $tmp1562, $tmp1563);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1563));
// unreffing REF($3:panda.core.String)
return;

}
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(panda$core$MutableString* param0, panda$core$Range$LTpanda$core$MutableString$Index$GT param1, panda$core$String* param2) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
panda$core$Bit local5;
panda$core$Int64 local6;
panda$core$Int64 local7;
panda$core$Int64 local8;
panda$core$Int64 local9;
panda$core$Int64 local10;
panda$core$Int64 local11;
panda$core$Int64 local12;
panda$core$MutableString$Index $tmp1564 = param1.max;
panda$core$MutableString$Index$wrapper* $tmp1565;
$tmp1565 = (panda$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
$tmp1565->value = $tmp1564;
panda$core$MutableString$Index $tmp1566 = param1.min;
panda$core$MutableString$Index$wrapper* $tmp1567;
$tmp1567 = (panda$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
$tmp1567->value = $tmp1566;
ITable* $tmp1568 = ((panda$core$Comparable*) $tmp1565)->$class->itable;
while ($tmp1568->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp1568 = $tmp1568->next;
}
$fn1570 $tmp1569 = $tmp1568->methods[2];
panda$core$Bit $tmp1571 = $tmp1569(((panda$core$Comparable*) $tmp1565), ((panda$core$Comparable*) $tmp1567));
bool $tmp1572 = $tmp1571.value;
if ($tmp1572) goto block1; else goto block2;
block1:;
panda$core$Bit $tmp1573 = param1.inclusive;
bool $tmp1574 = $tmp1573.value;
if ($tmp1574) goto block4; else goto block5;
block4:;
panda$core$MutableString$Index $tmp1575 = param1.min;
panda$core$Int64 $tmp1576 = $tmp1575.value;
panda$core$Int64* $tmp1577 = &param0->_length;
panda$core$Int64 $tmp1578 = *$tmp1577;
int64_t $tmp1579 = $tmp1576.value;
int64_t $tmp1580 = $tmp1578.value;
bool $tmp1581 = $tmp1579 < $tmp1580;
panda$core$Bit $tmp1582 = (panda$core$Bit) {$tmp1581};
*(&local3) = $tmp1582;
goto block6;
block5:;
*(&local3) = $tmp1573;
goto block6;
block6:;
panda$core$Bit $tmp1583 = *(&local3);
bool $tmp1584 = $tmp1583.value;
if ($tmp1584) goto block7; else goto block8;
block7:;
panda$core$MutableString$Index $tmp1585 = param1.max;
panda$core$Int64 $tmp1586 = $tmp1585.value;
panda$core$Int64* $tmp1587 = &param0->_length;
panda$core$Int64 $tmp1588 = *$tmp1587;
int64_t $tmp1589 = $tmp1586.value;
int64_t $tmp1590 = $tmp1588.value;
bool $tmp1591 = $tmp1589 < $tmp1590;
panda$core$Bit $tmp1592 = (panda$core$Bit) {$tmp1591};
*(&local2) = $tmp1592;
goto block9;
block8:;
*(&local2) = $tmp1583;
goto block9;
block9:;
panda$core$Bit $tmp1593 = *(&local2);
bool $tmp1594 = $tmp1593.value;
if ($tmp1594) goto block10; else goto block11;
block10:;
*(&local1) = $tmp1593;
goto block12;
block11:;
panda$core$Bit $tmp1595 = param1.inclusive;
panda$core$Bit $tmp1596 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1595);
bool $tmp1597 = $tmp1596.value;
if ($tmp1597) goto block13; else goto block14;
block13:;
panda$core$MutableString$Index $tmp1598 = param1.min;
panda$core$Int64 $tmp1599 = $tmp1598.value;
panda$core$Int64* $tmp1600 = &param0->_length;
panda$core$Int64 $tmp1601 = *$tmp1600;
int64_t $tmp1602 = $tmp1599.value;
int64_t $tmp1603 = $tmp1601.value;
bool $tmp1604 = $tmp1602 <= $tmp1603;
panda$core$Bit $tmp1605 = (panda$core$Bit) {$tmp1604};
*(&local5) = $tmp1605;
goto block15;
block14:;
*(&local5) = $tmp1596;
goto block15;
block15:;
panda$core$Bit $tmp1606 = *(&local5);
bool $tmp1607 = $tmp1606.value;
if ($tmp1607) goto block16; else goto block17;
block16:;
panda$core$MutableString$Index $tmp1608 = param1.max;
panda$core$Int64 $tmp1609 = $tmp1608.value;
panda$core$Int64* $tmp1610 = &param0->_length;
panda$core$Int64 $tmp1611 = *$tmp1610;
int64_t $tmp1612 = $tmp1609.value;
int64_t $tmp1613 = $tmp1611.value;
bool $tmp1614 = $tmp1612 <= $tmp1613;
panda$core$Bit $tmp1615 = (panda$core$Bit) {$tmp1614};
*(&local4) = $tmp1615;
goto block18;
block17:;
*(&local4) = $tmp1606;
goto block18;
block18:;
panda$core$Bit $tmp1616 = *(&local4);
*(&local1) = $tmp1616;
goto block12;
block12:;
panda$core$Bit $tmp1617 = *(&local1);
*(&local0) = $tmp1617;
goto block3;
block2:;
*(&local0) = $tmp1571;
goto block3;
block3:;
panda$core$Bit $tmp1618 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1567)));
// unreffing REF($4:panda.core.Comparable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1565)));
// unreffing REF($1:panda.core.Comparable<panda.core.MutableString.Index>)
bool $tmp1619 = $tmp1618.value;
if ($tmp1619) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp1620 = (panda$core$Int64) {509};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1621, $tmp1620, &$s1622);
abort(); // unreachable
block19:;
// line 510
panda$core$MutableString$Index $tmp1623 = param1.max;
panda$core$Int64 $tmp1624 = $tmp1623.value;
*(&local6) = $tmp1624;
// line 511
panda$core$Bit $tmp1625 = param1.inclusive;
bool $tmp1626 = $tmp1625.value;
if ($tmp1626) goto block21; else goto block22;
block21:;
// line 512
panda$core$Int64 $tmp1627 = *(&local6);
panda$core$Int64 $tmp1628 = (panda$core$Int64) {1};
int64_t $tmp1629 = $tmp1627.value;
int64_t $tmp1630 = $tmp1628.value;
int64_t $tmp1631 = $tmp1629 + $tmp1630;
panda$core$Int64 $tmp1632 = (panda$core$Int64) {$tmp1631};
*(&local6) = $tmp1632;
goto block22;
block22:;
// line 514
panda$core$Int64 $tmp1633 = *(&local6);
panda$core$MutableString$Index $tmp1634 = param1.min;
panda$core$Int64 $tmp1635 = $tmp1634.value;
int64_t $tmp1636 = $tmp1633.value;
int64_t $tmp1637 = $tmp1635.value;
int64_t $tmp1638 = $tmp1636 - $tmp1637;
panda$core$Int64 $tmp1639 = (panda$core$Int64) {$tmp1638};
*(&local7) = $tmp1639;
// line 515
panda$core$Int64* $tmp1640 = &param0->_length;
panda$core$Int64 $tmp1641 = *$tmp1640;
panda$core$Int64 $tmp1642 = *(&local7);
int64_t $tmp1643 = $tmp1641.value;
int64_t $tmp1644 = $tmp1642.value;
int64_t $tmp1645 = $tmp1643 - $tmp1644;
panda$core$Int64 $tmp1646 = (panda$core$Int64) {$tmp1645};
panda$core$Int64* $tmp1647 = &param2->_length;
panda$core$Int64 $tmp1648 = *$tmp1647;
int64_t $tmp1649 = $tmp1646.value;
int64_t $tmp1650 = $tmp1648.value;
int64_t $tmp1651 = $tmp1649 + $tmp1650;
panda$core$Int64 $tmp1652 = (panda$core$Int64) {$tmp1651};
*(&local8) = $tmp1652;
// line 516
panda$core$Int64 $tmp1653 = *(&local8);
panda$core$MutableString$ensureCapacity$panda$core$Int64(param0, $tmp1653);
// line 517
panda$core$Int64* $tmp1654 = &param2->_length;
panda$core$Int64 $tmp1655 = *$tmp1654;
panda$core$Int64 $tmp1656 = *(&local7);
int64_t $tmp1657 = $tmp1655.value;
int64_t $tmp1658 = $tmp1656.value;
int64_t $tmp1659 = $tmp1657 - $tmp1658;
panda$core$Int64 $tmp1660 = (panda$core$Int64) {$tmp1659};
*(&local9) = $tmp1660;
// line 518
panda$core$Int64 $tmp1661 = panda$core$String$get_byteLength$R$panda$core$Int64(param2);
panda$core$Int64 $tmp1662 = *(&local7);
int64_t $tmp1663 = $tmp1661.value;
int64_t $tmp1664 = $tmp1662.value;
bool $tmp1665 = $tmp1663 > $tmp1664;
panda$core$Bit $tmp1666 = (panda$core$Bit) {$tmp1665};
bool $tmp1667 = $tmp1666.value;
if ($tmp1667) goto block23; else goto block25;
block23:;
// line 519
panda$core$Int64* $tmp1668 = &param0->_length;
panda$core$Int64 $tmp1669 = *$tmp1668;
panda$core$Int64 $tmp1670 = (panda$core$Int64) {1};
int64_t $tmp1671 = $tmp1669.value;
int64_t $tmp1672 = $tmp1670.value;
int64_t $tmp1673 = $tmp1671 - $tmp1672;
panda$core$Int64 $tmp1674 = (panda$core$Int64) {$tmp1673};
panda$core$Int64 $tmp1675 = *(&local6);
panda$core$Int64 $tmp1676 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp1677 = panda$core$Bit$init$builtin_bit(true);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1678 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1674, $tmp1675, $tmp1676, $tmp1677);
panda$core$Int64 $tmp1679 = $tmp1678.start;
*(&local10) = $tmp1679;
panda$core$Int64 $tmp1680 = $tmp1678.end;
panda$core$Int64 $tmp1681 = $tmp1678.step;
panda$core$UInt64 $tmp1682 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1681);
panda$core$Int64 $tmp1683 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1681);
panda$core$UInt64 $tmp1684 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1683);
panda$core$Bit $tmp1685 = $tmp1678.inclusive;
bool $tmp1686 = $tmp1685.value;
panda$core$Int64 $tmp1687 = (panda$core$Int64) {0};
int64_t $tmp1688 = $tmp1681.value;
int64_t $tmp1689 = $tmp1687.value;
bool $tmp1690 = $tmp1688 >= $tmp1689;
panda$core$Bit $tmp1691 = (panda$core$Bit) {$tmp1690};
bool $tmp1692 = $tmp1691.value;
if ($tmp1692) goto block29; else goto block30;
block29:;
if ($tmp1686) goto block31; else goto block32;
block31:;
int64_t $tmp1693 = $tmp1679.value;
int64_t $tmp1694 = $tmp1680.value;
bool $tmp1695 = $tmp1693 <= $tmp1694;
panda$core$Bit $tmp1696 = (panda$core$Bit) {$tmp1695};
bool $tmp1697 = $tmp1696.value;
if ($tmp1697) goto block26; else goto block27;
block32:;
int64_t $tmp1698 = $tmp1679.value;
int64_t $tmp1699 = $tmp1680.value;
bool $tmp1700 = $tmp1698 < $tmp1699;
panda$core$Bit $tmp1701 = (panda$core$Bit) {$tmp1700};
bool $tmp1702 = $tmp1701.value;
if ($tmp1702) goto block26; else goto block27;
block30:;
if ($tmp1686) goto block33; else goto block34;
block33:;
int64_t $tmp1703 = $tmp1679.value;
int64_t $tmp1704 = $tmp1680.value;
bool $tmp1705 = $tmp1703 >= $tmp1704;
panda$core$Bit $tmp1706 = (panda$core$Bit) {$tmp1705};
bool $tmp1707 = $tmp1706.value;
if ($tmp1707) goto block26; else goto block27;
block34:;
int64_t $tmp1708 = $tmp1679.value;
int64_t $tmp1709 = $tmp1680.value;
bool $tmp1710 = $tmp1708 > $tmp1709;
panda$core$Bit $tmp1711 = (panda$core$Bit) {$tmp1710};
bool $tmp1712 = $tmp1711.value;
if ($tmp1712) goto block26; else goto block27;
block26:;
// line 520
panda$core$Char8** $tmp1713 = &param0->data;
panda$core$Char8* $tmp1714 = *$tmp1713;
panda$core$Int64 $tmp1715 = *(&local10);
panda$core$Int64 $tmp1716 = *(&local9);
int64_t $tmp1717 = $tmp1715.value;
int64_t $tmp1718 = $tmp1716.value;
int64_t $tmp1719 = $tmp1717 + $tmp1718;
panda$core$Int64 $tmp1720 = (panda$core$Int64) {$tmp1719};
panda$core$Char8** $tmp1721 = &param0->data;
panda$core$Char8* $tmp1722 = *$tmp1721;
panda$core$Int64 $tmp1723 = *(&local10);
int64_t $tmp1724 = $tmp1723.value;
panda$core$Char8 $tmp1725 = $tmp1722[$tmp1724];
int64_t $tmp1726 = $tmp1720.value;
$tmp1714[$tmp1726] = $tmp1725;
goto block28;
block28:;
panda$core$Int64 $tmp1727 = *(&local10);
if ($tmp1692) goto block36; else goto block37;
block36:;
int64_t $tmp1728 = $tmp1680.value;
int64_t $tmp1729 = $tmp1727.value;
int64_t $tmp1730 = $tmp1728 - $tmp1729;
panda$core$Int64 $tmp1731 = (panda$core$Int64) {$tmp1730};
panda$core$UInt64 $tmp1732 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1731);
if ($tmp1686) goto block38; else goto block39;
block38:;
uint64_t $tmp1733 = $tmp1732.value;
uint64_t $tmp1734 = $tmp1682.value;
bool $tmp1735 = $tmp1733 >= $tmp1734;
panda$core$Bit $tmp1736 = (panda$core$Bit) {$tmp1735};
bool $tmp1737 = $tmp1736.value;
if ($tmp1737) goto block35; else goto block27;
block39:;
uint64_t $tmp1738 = $tmp1732.value;
uint64_t $tmp1739 = $tmp1682.value;
bool $tmp1740 = $tmp1738 > $tmp1739;
panda$core$Bit $tmp1741 = (panda$core$Bit) {$tmp1740};
bool $tmp1742 = $tmp1741.value;
if ($tmp1742) goto block35; else goto block27;
block37:;
int64_t $tmp1743 = $tmp1727.value;
int64_t $tmp1744 = $tmp1680.value;
int64_t $tmp1745 = $tmp1743 - $tmp1744;
panda$core$Int64 $tmp1746 = (panda$core$Int64) {$tmp1745};
panda$core$UInt64 $tmp1747 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1746);
if ($tmp1686) goto block40; else goto block41;
block40:;
uint64_t $tmp1748 = $tmp1747.value;
uint64_t $tmp1749 = $tmp1684.value;
bool $tmp1750 = $tmp1748 >= $tmp1749;
panda$core$Bit $tmp1751 = (panda$core$Bit) {$tmp1750};
bool $tmp1752 = $tmp1751.value;
if ($tmp1752) goto block35; else goto block27;
block41:;
uint64_t $tmp1753 = $tmp1747.value;
uint64_t $tmp1754 = $tmp1684.value;
bool $tmp1755 = $tmp1753 > $tmp1754;
panda$core$Bit $tmp1756 = (panda$core$Bit) {$tmp1755};
bool $tmp1757 = $tmp1756.value;
if ($tmp1757) goto block35; else goto block27;
block35:;
int64_t $tmp1758 = $tmp1727.value;
int64_t $tmp1759 = $tmp1681.value;
int64_t $tmp1760 = $tmp1758 + $tmp1759;
panda$core$Int64 $tmp1761 = (panda$core$Int64) {$tmp1760};
*(&local10) = $tmp1761;
goto block26;
block27:;
goto block24;
block25:;
// line 1
// line 524
panda$core$Int64 $tmp1762 = *(&local6);
panda$core$Int64* $tmp1763 = &param0->_length;
panda$core$Int64 $tmp1764 = *$tmp1763;
panda$core$Bit $tmp1765 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1766 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1762, $tmp1764, $tmp1765);
panda$core$Int64 $tmp1767 = $tmp1766.min;
*(&local11) = $tmp1767;
panda$core$Int64 $tmp1768 = $tmp1766.max;
panda$core$Bit $tmp1769 = $tmp1766.inclusive;
bool $tmp1770 = $tmp1769.value;
panda$core$Int64 $tmp1771 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1772 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1771);
if ($tmp1770) goto block45; else goto block46;
block45:;
int64_t $tmp1773 = $tmp1767.value;
int64_t $tmp1774 = $tmp1768.value;
bool $tmp1775 = $tmp1773 <= $tmp1774;
panda$core$Bit $tmp1776 = (panda$core$Bit) {$tmp1775};
bool $tmp1777 = $tmp1776.value;
if ($tmp1777) goto block42; else goto block43;
block46:;
int64_t $tmp1778 = $tmp1767.value;
int64_t $tmp1779 = $tmp1768.value;
bool $tmp1780 = $tmp1778 < $tmp1779;
panda$core$Bit $tmp1781 = (panda$core$Bit) {$tmp1780};
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block42; else goto block43;
block42:;
// line 525
panda$core$Char8** $tmp1783 = &param0->data;
panda$core$Char8* $tmp1784 = *$tmp1783;
panda$core$Int64 $tmp1785 = *(&local11);
panda$core$Int64 $tmp1786 = *(&local9);
int64_t $tmp1787 = $tmp1785.value;
int64_t $tmp1788 = $tmp1786.value;
int64_t $tmp1789 = $tmp1787 + $tmp1788;
panda$core$Int64 $tmp1790 = (panda$core$Int64) {$tmp1789};
panda$core$Char8** $tmp1791 = &param0->data;
panda$core$Char8* $tmp1792 = *$tmp1791;
panda$core$Int64 $tmp1793 = *(&local11);
int64_t $tmp1794 = $tmp1793.value;
panda$core$Char8 $tmp1795 = $tmp1792[$tmp1794];
int64_t $tmp1796 = $tmp1790.value;
$tmp1784[$tmp1796] = $tmp1795;
goto block44;
block44:;
panda$core$Int64 $tmp1797 = *(&local11);
int64_t $tmp1798 = $tmp1768.value;
int64_t $tmp1799 = $tmp1797.value;
int64_t $tmp1800 = $tmp1798 - $tmp1799;
panda$core$Int64 $tmp1801 = (panda$core$Int64) {$tmp1800};
panda$core$UInt64 $tmp1802 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1801);
if ($tmp1770) goto block48; else goto block49;
block48:;
uint64_t $tmp1803 = $tmp1802.value;
uint64_t $tmp1804 = $tmp1772.value;
bool $tmp1805 = $tmp1803 >= $tmp1804;
panda$core$Bit $tmp1806 = (panda$core$Bit) {$tmp1805};
bool $tmp1807 = $tmp1806.value;
if ($tmp1807) goto block47; else goto block43;
block49:;
uint64_t $tmp1808 = $tmp1802.value;
uint64_t $tmp1809 = $tmp1772.value;
bool $tmp1810 = $tmp1808 > $tmp1809;
panda$core$Bit $tmp1811 = (panda$core$Bit) {$tmp1810};
bool $tmp1812 = $tmp1811.value;
if ($tmp1812) goto block47; else goto block43;
block47:;
int64_t $tmp1813 = $tmp1797.value;
int64_t $tmp1814 = $tmp1771.value;
int64_t $tmp1815 = $tmp1813 + $tmp1814;
panda$core$Int64 $tmp1816 = (panda$core$Int64) {$tmp1815};
*(&local11) = $tmp1816;
goto block42;
block43:;
goto block24;
block24:;
// line 528
panda$core$Int64 $tmp1817 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1818 = &param2->_length;
panda$core$Int64 $tmp1819 = *$tmp1818;
panda$core$Bit $tmp1820 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1821 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1817, $tmp1819, $tmp1820);
panda$core$Int64 $tmp1822 = $tmp1821.min;
*(&local12) = $tmp1822;
panda$core$Int64 $tmp1823 = $tmp1821.max;
panda$core$Bit $tmp1824 = $tmp1821.inclusive;
bool $tmp1825 = $tmp1824.value;
panda$core$Int64 $tmp1826 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1827 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1826);
if ($tmp1825) goto block53; else goto block54;
block53:;
int64_t $tmp1828 = $tmp1822.value;
int64_t $tmp1829 = $tmp1823.value;
bool $tmp1830 = $tmp1828 <= $tmp1829;
panda$core$Bit $tmp1831 = (panda$core$Bit) {$tmp1830};
bool $tmp1832 = $tmp1831.value;
if ($tmp1832) goto block50; else goto block51;
block54:;
int64_t $tmp1833 = $tmp1822.value;
int64_t $tmp1834 = $tmp1823.value;
bool $tmp1835 = $tmp1833 < $tmp1834;
panda$core$Bit $tmp1836 = (panda$core$Bit) {$tmp1835};
bool $tmp1837 = $tmp1836.value;
if ($tmp1837) goto block50; else goto block51;
block50:;
// line 529
panda$core$Char8** $tmp1838 = &param0->data;
panda$core$Char8* $tmp1839 = *$tmp1838;
panda$core$MutableString$Index $tmp1840 = param1.min;
panda$core$Int64 $tmp1841 = $tmp1840.value;
panda$core$Int64 $tmp1842 = *(&local12);
int64_t $tmp1843 = $tmp1841.value;
int64_t $tmp1844 = $tmp1842.value;
int64_t $tmp1845 = $tmp1843 + $tmp1844;
panda$core$Int64 $tmp1846 = (panda$core$Int64) {$tmp1845};
panda$core$Char8** $tmp1847 = &param2->data;
panda$core$Char8* $tmp1848 = *$tmp1847;
panda$core$Int64 $tmp1849 = *(&local12);
int64_t $tmp1850 = $tmp1849.value;
panda$core$Char8 $tmp1851 = $tmp1848[$tmp1850];
int64_t $tmp1852 = $tmp1846.value;
$tmp1839[$tmp1852] = $tmp1851;
goto block52;
block52:;
panda$core$Int64 $tmp1853 = *(&local12);
int64_t $tmp1854 = $tmp1823.value;
int64_t $tmp1855 = $tmp1853.value;
int64_t $tmp1856 = $tmp1854 - $tmp1855;
panda$core$Int64 $tmp1857 = (panda$core$Int64) {$tmp1856};
panda$core$UInt64 $tmp1858 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1857);
if ($tmp1825) goto block56; else goto block57;
block56:;
uint64_t $tmp1859 = $tmp1858.value;
uint64_t $tmp1860 = $tmp1827.value;
bool $tmp1861 = $tmp1859 >= $tmp1860;
panda$core$Bit $tmp1862 = (panda$core$Bit) {$tmp1861};
bool $tmp1863 = $tmp1862.value;
if ($tmp1863) goto block55; else goto block51;
block57:;
uint64_t $tmp1864 = $tmp1858.value;
uint64_t $tmp1865 = $tmp1827.value;
bool $tmp1866 = $tmp1864 > $tmp1865;
panda$core$Bit $tmp1867 = (panda$core$Bit) {$tmp1866};
bool $tmp1868 = $tmp1867.value;
if ($tmp1868) goto block55; else goto block51;
block55:;
int64_t $tmp1869 = $tmp1853.value;
int64_t $tmp1870 = $tmp1826.value;
int64_t $tmp1871 = $tmp1869 + $tmp1870;
panda$core$Int64 $tmp1872 = (panda$core$Int64) {$tmp1871};
*(&local12) = $tmp1872;
goto block50;
block51:;
// line 531
panda$core$Int64 $tmp1873 = *(&local8);
panda$core$Int64* $tmp1874 = &param0->_length;
*$tmp1874 = $tmp1873;
return;

}
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$core$String(panda$core$MutableString* param0, panda$core$Range$LTpanda$core$Int64$GT param1, panda$core$String* param2) {

// line 536
panda$core$MutableString$Index $tmp1875 = panda$core$MutableString$get_start$R$panda$core$MutableString$Index(param0);
panda$core$Int64 $tmp1876 = param1.min;
panda$core$MutableString$Index $tmp1877 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(param0, $tmp1875, $tmp1876);
panda$core$MutableString$Index $tmp1878 = panda$core$MutableString$get_start$R$panda$core$MutableString$Index(param0);
panda$core$Int64 $tmp1879 = param1.max;
panda$core$MutableString$Index $tmp1880 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(param0, $tmp1878, $tmp1879);
panda$core$Bit $tmp1881 = param1.inclusive;
panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp1882 = panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit($tmp1877, $tmp1880, $tmp1881);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(param0, $tmp1882, param2);
return;

}
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(panda$core$MutableString* param0, panda$core$Range$LTpanda$core$MutableString$Index$Q$GT param1, panda$core$String* param2) {

panda$core$MutableString$Index local0;
panda$core$Bit local1;
panda$core$MutableString$Index local2;
// line 542
// line 543
panda$core$MutableString$Index$nullable $tmp1883 = param1.min;
panda$core$Bit $tmp1884 = panda$core$Bit$init$builtin_bit($tmp1883.nonnull);
bool $tmp1885 = $tmp1884.value;
if ($tmp1885) goto block1; else goto block3;
block1:;
// line 544
panda$core$MutableString$Index$nullable $tmp1886 = param1.min;
panda$core$Bit $tmp1887 = panda$core$Bit$init$builtin_bit($tmp1886.nonnull);
bool $tmp1888 = $tmp1887.value;
if ($tmp1888) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1889 = (panda$core$Int64) {544};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1890, $tmp1889, &$s1891);
abort(); // unreachable
block4:;
*(&local0) = ((panda$core$MutableString$Index) $tmp1886.value);
goto block2;
block3:;
// line 1
// line 547
panda$core$MutableString$Index $tmp1892 = panda$core$MutableString$get_start$R$panda$core$MutableString$Index(param0);
*(&local0) = $tmp1892;
goto block2;
block2:;
// line 549
panda$core$Bit $tmp1893 = param1.inclusive;
*(&local1) = $tmp1893;
// line 550
// line 551
panda$core$MutableString$Index$nullable $tmp1894 = param1.max;
panda$core$Bit $tmp1895 = panda$core$Bit$init$builtin_bit($tmp1894.nonnull);
bool $tmp1896 = $tmp1895.value;
if ($tmp1896) goto block6; else goto block8;
block6:;
// line 552
panda$core$MutableString$Index$nullable $tmp1897 = param1.max;
panda$core$Bit $tmp1898 = panda$core$Bit$init$builtin_bit($tmp1897.nonnull);
bool $tmp1899 = $tmp1898.value;
if ($tmp1899) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp1900 = (panda$core$Int64) {552};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1901, $tmp1900, &$s1902);
abort(); // unreachable
block9:;
*(&local2) = ((panda$core$MutableString$Index) $tmp1897.value);
goto block7;
block8:;
// line 1
// line 555
panda$core$MutableString$Index $tmp1903 = panda$core$MutableString$get_end$R$panda$core$MutableString$Index(param0);
*(&local2) = $tmp1903;
// line 556
panda$core$Bit $tmp1904 = panda$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1904;
goto block7;
block7:;
// line 558
panda$core$MutableString$Index $tmp1905 = *(&local0);
panda$core$MutableString$Index $tmp1906 = *(&local2);
panda$core$Bit $tmp1907 = *(&local1);
panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp1908 = panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit($tmp1905, $tmp1906, $tmp1907);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(param0, $tmp1908, param2);
return;

}
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(panda$core$MutableString* param0, panda$core$Range$LTpanda$core$Int64$Q$GT param1, panda$core$String* param2) {

panda$core$MutableString$Index local0;
panda$core$Bit local1;
panda$core$MutableString$Index local2;
// line 563
// line 564
panda$core$Int64$nullable $tmp1909 = param1.min;
panda$core$Bit $tmp1910 = panda$core$Bit$init$builtin_bit($tmp1909.nonnull);
bool $tmp1911 = $tmp1910.value;
if ($tmp1911) goto block1; else goto block3;
block1:;
// line 565
panda$core$MutableString$Index $tmp1912 = panda$core$MutableString$get_start$R$panda$core$MutableString$Index(param0);
panda$core$Int64$nullable $tmp1913 = param1.min;
panda$core$Bit $tmp1914 = panda$core$Bit$init$builtin_bit($tmp1913.nonnull);
bool $tmp1915 = $tmp1914.value;
if ($tmp1915) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1916 = (panda$core$Int64) {565};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1917, $tmp1916, &$s1918);
abort(); // unreachable
block4:;
panda$core$MutableString$Index $tmp1919 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(param0, $tmp1912, ((panda$core$Int64) $tmp1913.value));
*(&local0) = $tmp1919;
goto block2;
block3:;
// line 1
// line 568
panda$core$MutableString$Index $tmp1920 = panda$core$MutableString$get_start$R$panda$core$MutableString$Index(param0);
*(&local0) = $tmp1920;
goto block2;
block2:;
// line 570
panda$core$Bit $tmp1921 = param1.inclusive;
*(&local1) = $tmp1921;
// line 571
// line 572
panda$core$Int64$nullable $tmp1922 = param1.max;
panda$core$Bit $tmp1923 = panda$core$Bit$init$builtin_bit($tmp1922.nonnull);
bool $tmp1924 = $tmp1923.value;
if ($tmp1924) goto block6; else goto block8;
block6:;
// line 573
panda$core$MutableString$Index $tmp1925 = panda$core$MutableString$get_start$R$panda$core$MutableString$Index(param0);
panda$core$Int64$nullable $tmp1926 = param1.max;
panda$core$Bit $tmp1927 = panda$core$Bit$init$builtin_bit($tmp1926.nonnull);
bool $tmp1928 = $tmp1927.value;
if ($tmp1928) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp1929 = (panda$core$Int64) {573};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1930, $tmp1929, &$s1931);
abort(); // unreachable
block9:;
panda$core$MutableString$Index $tmp1932 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(param0, $tmp1925, ((panda$core$Int64) $tmp1926.value));
*(&local2) = $tmp1932;
goto block7;
block8:;
// line 1
// line 576
panda$core$MutableString$Index $tmp1933 = panda$core$MutableString$get_end$R$panda$core$MutableString$Index(param0);
*(&local2) = $tmp1933;
// line 577
panda$core$Bit $tmp1934 = panda$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1934;
goto block7;
block7:;
// line 579
panda$core$MutableString$Index $tmp1935 = *(&local0);
panda$core$MutableString$Index $tmp1936 = *(&local2);
panda$core$Bit $tmp1937 = *(&local1);
panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp1938 = panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit($tmp1935, $tmp1936, $tmp1937);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(param0, $tmp1938, param2);
return;

}
void panda$core$MutableString$replace$panda$core$String$panda$core$String(panda$core$MutableString* param0, panda$core$String* param1, panda$core$String* param2) {

panda$core$MutableString$Index local0;
panda$core$MutableString$Index$nullable local1;
// line 584
panda$core$MutableString$Index $tmp1939 = panda$core$MutableString$get_start$R$panda$core$MutableString$Index(param0);
*(&local0) = $tmp1939;
// line 585
goto block1;
block1:;
// line 586
panda$core$MutableString$Index $tmp1940 = *(&local0);
panda$core$MutableString$Index$nullable $tmp1941 = panda$core$MutableString$indexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(param0, param1, $tmp1940);
*(&local1) = $tmp1941;
// line 587
panda$core$MutableString$Index$nullable $tmp1942 = *(&local1);
panda$core$Bit $tmp1943 = panda$core$Bit$init$builtin_bit(!$tmp1942.nonnull);
bool $tmp1944 = $tmp1943.value;
if ($tmp1944) goto block3; else goto block4;
block3:;
// line 588
goto block2;
block4:;
// line 590
panda$core$MutableString$Index$nullable $tmp1945 = *(&local1);
panda$core$MutableString$Index$nullable $tmp1946 = *(&local1);
panda$core$Bit $tmp1947 = panda$core$Bit$init$builtin_bit($tmp1946.nonnull);
bool $tmp1948 = $tmp1947.value;
if ($tmp1948) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp1949 = (panda$core$Int64) {590};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1950, $tmp1949, &$s1951);
abort(); // unreachable
block5:;
panda$core$Int64 $tmp1952 = ((panda$core$MutableString$Index) $tmp1946.value).value;
panda$core$Int64 $tmp1953 = panda$core$String$get_byteLength$R$panda$core$Int64(param1);
int64_t $tmp1954 = $tmp1952.value;
int64_t $tmp1955 = $tmp1953.value;
int64_t $tmp1956 = $tmp1954 + $tmp1955;
panda$core$Int64 $tmp1957 = (panda$core$Int64) {$tmp1956};
panda$core$MutableString$Index $tmp1958 = panda$core$MutableString$Index$init$panda$core$Int64($tmp1957);
panda$core$Bit $tmp1959 = panda$core$Bit$init$builtin_bit(((panda$core$MutableString$Index$nullable) { $tmp1958, true }).nonnull);
bool $tmp1960 = $tmp1959.value;
if ($tmp1960) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp1961 = (panda$core$Int64) {1};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1962, $tmp1961, &$s1963);
abort(); // unreachable
block7:;
panda$core$Bit $tmp1964 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp1965 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit($tmp1945, ((panda$core$MutableString$Index$nullable) { ((panda$core$MutableString$Index) ((panda$core$MutableString$Index$nullable) { $tmp1958, true }).value), true }), $tmp1964);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param0, $tmp1965, param2);
// line 591
panda$core$MutableString$Index$nullable $tmp1966 = *(&local1);
panda$core$Bit $tmp1967 = panda$core$Bit$init$builtin_bit($tmp1966.nonnull);
bool $tmp1968 = $tmp1967.value;
if ($tmp1968) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp1969 = (panda$core$Int64) {591};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1970, $tmp1969, &$s1971);
abort(); // unreachable
block9:;
panda$core$Int64 $tmp1972 = ((panda$core$MutableString$Index) $tmp1966.value).value;
panda$core$Int64 $tmp1973 = panda$core$String$get_byteLength$R$panda$core$Int64(param2);
panda$core$Int64 $tmp1974 = (panda$core$Int64) {1};
panda$core$Int64 $tmp1975 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp1973, $tmp1974);
int64_t $tmp1976 = $tmp1972.value;
int64_t $tmp1977 = $tmp1975.value;
int64_t $tmp1978 = $tmp1976 + $tmp1977;
panda$core$Int64 $tmp1979 = (panda$core$Int64) {$tmp1978};
panda$core$MutableString$Index $tmp1980 = panda$core$MutableString$Index$init$panda$core$Int64($tmp1979);
*(&local0) = $tmp1980;
goto block1;
block2:;
return;

}
void panda$core$MutableString$ensureCapacity$panda$core$Int64(panda$core$MutableString* param0, panda$core$Int64 param1) {

panda$core$Int64 local0;
panda$core$Int64* $tmp1981 = &param0->maxLength;
panda$core$Int64 $tmp1982 = *$tmp1981;
panda$core$Int64 $tmp1983 = (panda$core$Int64) {0};
int64_t $tmp1984 = $tmp1982.value;
int64_t $tmp1985 = $tmp1983.value;
bool $tmp1986 = $tmp1984 > $tmp1985;
panda$core$Bit $tmp1987 = (panda$core$Bit) {$tmp1986};
bool $tmp1988 = $tmp1987.value;
if ($tmp1988) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp1989 = (panda$core$Int64) {598};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1990, $tmp1989, &$s1991);
abort(); // unreachable
block1:;
// line 599
panda$core$Int64* $tmp1992 = &param0->maxLength;
panda$core$Int64 $tmp1993 = *$tmp1992;
int64_t $tmp1994 = $tmp1993.value;
int64_t $tmp1995 = param1.value;
bool $tmp1996 = $tmp1994 >= $tmp1995;
panda$core$Bit $tmp1997 = (panda$core$Bit) {$tmp1996};
bool $tmp1998 = $tmp1997.value;
if ($tmp1998) goto block3; else goto block4;
block3:;
// line 600
return;
block4:;
// line 602
panda$core$Int64* $tmp1999 = &param0->maxLength;
panda$core$Int64 $tmp2000 = *$tmp1999;
*(&local0) = $tmp2000;
// line 603
goto block5;
block5:;
panda$core$Int64* $tmp2001 = &param0->maxLength;
panda$core$Int64 $tmp2002 = *$tmp2001;
int64_t $tmp2003 = $tmp2002.value;
int64_t $tmp2004 = param1.value;
bool $tmp2005 = $tmp2003 < $tmp2004;
panda$core$Bit $tmp2006 = (panda$core$Bit) {$tmp2005};
bool $tmp2007 = $tmp2006.value;
if ($tmp2007) goto block6; else goto block7;
block6:;
// line 604
panda$core$Int64* $tmp2008 = &param0->maxLength;
panda$core$Int64 $tmp2009 = *$tmp2008;
panda$core$Int64 $tmp2010 = (panda$core$Int64) {2};
int64_t $tmp2011 = $tmp2009.value;
int64_t $tmp2012 = $tmp2010.value;
int64_t $tmp2013 = $tmp2011 * $tmp2012;
panda$core$Int64 $tmp2014 = (panda$core$Int64) {$tmp2013};
panda$core$Int64* $tmp2015 = &param0->maxLength;
*$tmp2015 = $tmp2014;
goto block5;
block7:;
// line 606
panda$core$Char8** $tmp2016 = &param0->data;
panda$core$Char8* $tmp2017 = *$tmp2016;
panda$core$Int64 $tmp2018 = *(&local0);
panda$core$Int64* $tmp2019 = &param0->maxLength;
panda$core$Int64 $tmp2020 = *$tmp2019;
int64_t $tmp2021 = $tmp2018.value;
int64_t $tmp2022 = $tmp2020.value;
panda$core$Char8* $tmp2023 = (panda$core$Char8*) frostRealloc($tmp2017, $tmp2021 * 8, $tmp2022 * 8);
panda$core$Char8** $tmp2024 = &param0->data;
*$tmp2024 = $tmp2023;
return;

}
void panda$core$MutableString$clear(panda$core$MutableString* param0) {

// line 611
panda$core$Char8** $tmp2025 = &param0->data;
panda$core$Char8* $tmp2026 = *$tmp2025;
panda$core$Int64* $tmp2027 = &param0->maxLength;
panda$core$Int64 $tmp2028 = *$tmp2027;
panda$core$Int64 $tmp2029 = (panda$core$Int64) {32};
int64_t $tmp2030 = $tmp2028.value;
int64_t $tmp2031 = $tmp2029.value;
panda$core$Char8* $tmp2032 = (panda$core$Char8*) frostRealloc($tmp2026, $tmp2030 * 8, $tmp2031 * 8);
panda$core$Char8** $tmp2033 = &param0->data;
*$tmp2033 = $tmp2032;
// line 612
panda$core$Int64 $tmp2034 = (panda$core$Int64) {0};
panda$core$Int64* $tmp2035 = &param0->_length;
*$tmp2035 = $tmp2034;
// line 613
panda$core$Int64 $tmp2036 = (panda$core$Int64) {32};
panda$core$Int64* $tmp2037 = &param0->maxLength;
*$tmp2037 = $tmp2036;
return;

}
panda$core$String* panda$core$MutableString$convert$R$panda$core$String(panda$core$MutableString* param0) {

panda$core$Char8* local0;
panda$core$Int64 local1;
// line 622
panda$core$Int64* $tmp2038 = &param0->_length;
panda$core$Int64 $tmp2039 = *$tmp2038;
int64_t $tmp2040 = $tmp2039.value;
panda$core$Char8* $tmp2041 = ((panda$core$Char8*) frostAlloc($tmp2040 * 1));
*(&local0) = $tmp2041;
// line 623
panda$core$Int64 $tmp2042 = (panda$core$Int64) {0};
panda$core$Int64* $tmp2043 = &param0->_length;
panda$core$Int64 $tmp2044 = *$tmp2043;
panda$core$Bit $tmp2045 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2046 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2042, $tmp2044, $tmp2045);
panda$core$Int64 $tmp2047 = $tmp2046.min;
*(&local1) = $tmp2047;
panda$core$Int64 $tmp2048 = $tmp2046.max;
panda$core$Bit $tmp2049 = $tmp2046.inclusive;
bool $tmp2050 = $tmp2049.value;
panda$core$Int64 $tmp2051 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2052 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2051);
if ($tmp2050) goto block4; else goto block5;
block4:;
int64_t $tmp2053 = $tmp2047.value;
int64_t $tmp2054 = $tmp2048.value;
bool $tmp2055 = $tmp2053 <= $tmp2054;
panda$core$Bit $tmp2056 = (panda$core$Bit) {$tmp2055};
bool $tmp2057 = $tmp2056.value;
if ($tmp2057) goto block1; else goto block2;
block5:;
int64_t $tmp2058 = $tmp2047.value;
int64_t $tmp2059 = $tmp2048.value;
bool $tmp2060 = $tmp2058 < $tmp2059;
panda$core$Bit $tmp2061 = (panda$core$Bit) {$tmp2060};
bool $tmp2062 = $tmp2061.value;
if ($tmp2062) goto block1; else goto block2;
block1:;
// line 624
panda$core$Char8* $tmp2063 = *(&local0);
panda$core$Int64 $tmp2064 = *(&local1);
panda$core$Char8** $tmp2065 = &param0->data;
panda$core$Char8* $tmp2066 = *$tmp2065;
panda$core$Int64 $tmp2067 = *(&local1);
int64_t $tmp2068 = $tmp2067.value;
panda$core$Char8 $tmp2069 = $tmp2066[$tmp2068];
int64_t $tmp2070 = $tmp2064.value;
$tmp2063[$tmp2070] = $tmp2069;
goto block3;
block3:;
panda$core$Int64 $tmp2071 = *(&local1);
int64_t $tmp2072 = $tmp2048.value;
int64_t $tmp2073 = $tmp2071.value;
int64_t $tmp2074 = $tmp2072 - $tmp2073;
panda$core$Int64 $tmp2075 = (panda$core$Int64) {$tmp2074};
panda$core$UInt64 $tmp2076 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2075);
if ($tmp2050) goto block7; else goto block8;
block7:;
uint64_t $tmp2077 = $tmp2076.value;
uint64_t $tmp2078 = $tmp2052.value;
bool $tmp2079 = $tmp2077 >= $tmp2078;
panda$core$Bit $tmp2080 = (panda$core$Bit) {$tmp2079};
bool $tmp2081 = $tmp2080.value;
if ($tmp2081) goto block6; else goto block2;
block8:;
uint64_t $tmp2082 = $tmp2076.value;
uint64_t $tmp2083 = $tmp2052.value;
bool $tmp2084 = $tmp2082 > $tmp2083;
panda$core$Bit $tmp2085 = (panda$core$Bit) {$tmp2084};
bool $tmp2086 = $tmp2085.value;
if ($tmp2086) goto block6; else goto block2;
block6:;
int64_t $tmp2087 = $tmp2071.value;
int64_t $tmp2088 = $tmp2051.value;
int64_t $tmp2089 = $tmp2087 + $tmp2088;
panda$core$Int64 $tmp2090 = (panda$core$Int64) {$tmp2089};
*(&local1) = $tmp2090;
goto block1;
block2:;
// line 626
panda$core$String* $tmp2091 = (panda$core$String*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp2092 = *(&local0);
panda$core$Int64* $tmp2093 = &param0->_length;
panda$core$Int64 $tmp2094 = *$tmp2093;
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp2091, $tmp2092, $tmp2094);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2091));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2091));
// unreffing REF($69:panda.core.String)
return $tmp2091;

}
panda$core$String* panda$core$MutableString$finish$R$panda$core$String(panda$core$MutableString* param0) {

// line 638
panda$core$Char8** $tmp2095 = &param0->data;
panda$core$Char8* $tmp2096 = *$tmp2095;
panda$core$Int64* $tmp2097 = &param0->maxLength;
panda$core$Int64 $tmp2098 = *$tmp2097;
panda$core$Int64* $tmp2099 = &param0->_length;
panda$core$Int64 $tmp2100 = *$tmp2099;
int64_t $tmp2101 = $tmp2098.value;
int64_t $tmp2102 = $tmp2100.value;
panda$core$Char8* $tmp2103 = (panda$core$Char8*) frostRealloc($tmp2096, $tmp2101 * 8, $tmp2102 * 8);
panda$core$Char8** $tmp2104 = &param0->data;
*$tmp2104 = $tmp2103;
// line 639
panda$core$Int64 $tmp2105 = (panda$core$Int64) {0};
panda$core$Int64* $tmp2106 = &param0->maxLength;
*$tmp2106 = $tmp2105;
// line 640
panda$core$Class** $tmp2108 = &((panda$core$Object*) &$s2107)->$class;
panda$core$Class* $tmp2109 = *$tmp2108;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2109));
panda$core$Class** $tmp2110 = &((panda$core$Object*) param0)->$class;
panda$core$Class* $tmp2111 = *$tmp2110;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2111));
panda$core$Class** $tmp2112 = &((panda$core$Object*) param0)->$class;
*$tmp2112 = $tmp2109;
// line 641
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) ((panda$core$Object*) param0))));
return ((panda$core$String*) ((panda$core$Object*) param0));

}

