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

typedef frost$collections$Iterator* (*$fn99)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn103)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn108)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn149)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn153)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn158)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn211)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn227)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn303)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn450)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Object* (*$fn532)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn641)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn646)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn650)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef void (*$fn654)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef frost$core$Object* (*$fn677)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn707)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn715)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn717)(frost$core$Object*, frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, -3824106976344999226, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -7013691163086253143, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2f\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 31, 768544994797342119, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2f\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 31, 768544994797342119, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, -799920339492125719, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 3644790808526678741, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2f\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 38, -87923020846717013, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2f\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 38, -87923020846717013, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 72, 2073186463302734661, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 72, 2073186463302734661, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, -6495590796473870699, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, -6495590796473870699, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s437 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x2e\x61\x6c\x69\x67\x6e\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x73\x70\x65\x63\x69\x66\x69\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 126, -5104317510844427350, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 8772831143845743696, NULL };

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
frost$core$Bit $tmp57 = frost$core$Bit$init$builtin_bit($tmp56.nonnull);
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp59 = (frost$core$Int64) {48};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s60, $tmp59, &$s61);
abort(); // unreachable
block3:;
frost$core$Int64 $tmp62 = (frost$core$Int64) {1};
int64_t $tmp63 = ((frost$core$Int64) $tmp56.value).value;
int64_t $tmp64 = $tmp62.value;
int64_t $tmp65 = $tmp63 + $tmp64;
frost$core$Int64 $tmp66 = (frost$core$Int64) {$tmp65};
frost$core$Int64$wrapper* $tmp67;
$tmp67 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp67->value = $tmp66;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp54, ((frost$collections$Key*) $tmp55), ((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing REF($55:frost.collections.HashMap.V)
frost$core$String* $tmp68 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return;

}
void frost$core$Frost$countDeallocation$frost$core$Class(frost$core$Frost* param0, frost$core$Class* param1) {

frost$core$String* local0 = NULL;
frost$core$Int64$nullable local1;
// line 52
frost$core$String* $tmp69 = frost$core$Frost$allocationName$frost$core$Class$R$frost$core$String(param1);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$String* $tmp70 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local0) = $tmp69;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing REF($1:frost.core.String)
// line 53
frost$collections$HashMap** $tmp71 = &param0->allocations;
frost$collections$HashMap* $tmp72 = *$tmp71;
frost$core$String* $tmp73 = *(&local0);
frost$core$Object* $tmp74 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp72, ((frost$collections$Key*) $tmp73));
*(&local1) = ($tmp74 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp74)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
frost$core$Frost$unref$frost$core$Object$Q($tmp74);
// unreffing REF($18:frost.collections.HashMap.V?)
// line 54
frost$core$Int64$nullable $tmp75 = *(&local1);
frost$core$Bit $tmp76 = frost$core$Bit$init$builtin_bit(!$tmp75.nonnull);
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block1; else goto block2;
block1:;
// line 55
frost$core$Int64 $tmp78 = (frost$core$Int64) {0};
*(&local1) = ((frost$core$Int64$nullable) { $tmp78, true });
goto block2;
block2:;
// line 57
frost$collections$HashMap** $tmp79 = &param0->allocations;
frost$collections$HashMap* $tmp80 = *$tmp79;
frost$core$String* $tmp81 = *(&local0);
frost$core$Int64$nullable $tmp82 = *(&local1);
frost$core$Bit $tmp83 = frost$core$Bit$init$builtin_bit($tmp82.nonnull);
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp85 = (frost$core$Int64) {57};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s86, $tmp85, &$s87);
abort(); // unreachable
block3:;
frost$core$Int64 $tmp88 = (frost$core$Int64) {1};
int64_t $tmp89 = ((frost$core$Int64) $tmp82.value).value;
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89 - $tmp90;
frost$core$Int64 $tmp92 = (frost$core$Int64) {$tmp91};
frost$core$Int64$wrapper* $tmp93;
$tmp93 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp93->value = $tmp92;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp80, ((frost$collections$Key*) $tmp81), ((frost$core$Object*) $tmp93));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// unreffing REF($55:frost.collections.HashMap.V)
frost$core$String* $tmp94 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return;

}
void frost$core$Frost$dumpReport(frost$core$Frost* param0) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// line 61
frost$collections$HashMap** $tmp95 = &param0->allocations;
frost$collections$HashMap* $tmp96 = *$tmp95;
ITable* $tmp97 = ((frost$collections$MapView*) $tmp96)->$class->itable;
while ($tmp97->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp97 = $tmp97->next;
}
$fn99 $tmp98 = $tmp97->methods[3];
frost$collections$Iterator* $tmp100 = $tmp98(((frost$collections$MapView*) $tmp96));
goto block1;
block1:;
ITable* $tmp101 = $tmp100->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp101 = $tmp101->next;
}
$fn103 $tmp102 = $tmp101->methods[0];
frost$core$Bit $tmp104 = $tmp102($tmp100);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$String*) NULL);
ITable* $tmp106 = $tmp100->$class->itable;
while ($tmp106->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp106 = $tmp106->next;
}
$fn108 $tmp107 = $tmp106->methods[1];
frost$core$Object* $tmp109 = $tmp107($tmp100);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp109)));
frost$core$String* $tmp110 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local0) = ((frost$core$String*) $tmp109);
// line 62
frost$collections$HashMap** $tmp111 = &param0->allocations;
frost$collections$HashMap* $tmp112 = *$tmp111;
frost$core$String* $tmp113 = *(&local0);
frost$core$Object* $tmp114 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp112, ((frost$collections$Key*) $tmp113));
frost$core$Bit $tmp115 = frost$core$Bit$init$builtin_bit(($tmp114 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp114)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).nonnull);
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp117 = (frost$core$Int64) {62};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s118, $tmp117, &$s119);
abort(); // unreachable
block6:;
frost$core$Int64 $tmp120 = (frost$core$Int64) {0};
int64_t $tmp121 = ((frost$core$Int64) ($tmp114 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp114)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).value).value;
int64_t $tmp122 = $tmp120.value;
bool $tmp123 = $tmp121 != $tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
bool $tmp125 = $tmp124.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp114);
// unreffing REF($30:frost.collections.HashMap.V?)
if ($tmp125) goto block4; else goto block5;
block4:;
// line 63
frost$core$String* $tmp126 = *(&local0);
frost$core$String* $tmp127 = frost$core$String$get_asString$R$frost$core$String($tmp126);
frost$core$String* $tmp128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp127, &$s129);
frost$collections$HashMap** $tmp130 = &param0->allocations;
frost$collections$HashMap* $tmp131 = *$tmp130;
frost$core$String* $tmp132 = *(&local0);
frost$core$Object* $tmp133 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp131, ((frost$collections$Key*) $tmp132));
frost$core$Bit $tmp134 = frost$core$Bit$init$builtin_bit(($tmp133 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp133)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).nonnull);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp136 = (frost$core$Int64) {63};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s137, $tmp136, &$s138);
abort(); // unreachable
block8:;
frost$core$Object* $tmp139;
if (($tmp133 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp133)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).nonnull) {
    frost$core$Int64$wrapper* $tmp140;
    $tmp140 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp140->value = ((frost$core$Int64) ($tmp133 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp133)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).value);
    $tmp139 = ((frost$core$Object*) $tmp140);
}
else {
    $tmp139 = NULL;
}
frost$core$String* $tmp141 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp128, $tmp139);
frost$core$String* $tmp142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp141, &$s143);
frost$io$Console$printLine$frost$core$String($tmp142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// unreffing REF($70:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
// unreffing REF($69:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp139);
// unreffing REF($68:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q($tmp133);
// unreffing REF($59:frost.collections.HashMap.V?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing REF($53:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
// unreffing REF($52:frost.core.String)
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp109);
// unreffing REF($16:frost.collections.Iterator.T)
frost$core$String* $tmp144 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
// unreffing k
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// unreffing REF($5:frost.collections.Iterator<frost.collections.MapView.K>)
// line 66
frost$collections$HashMap** $tmp145 = &param0->traces;
frost$collections$HashMap* $tmp146 = *$tmp145;
ITable* $tmp147 = ((frost$collections$MapView*) $tmp146)->$class->itable;
while ($tmp147->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp147 = $tmp147->next;
}
$fn149 $tmp148 = $tmp147->methods[3];
frost$collections$Iterator* $tmp150 = $tmp148(((frost$collections$MapView*) $tmp146));
goto block10;
block10:;
ITable* $tmp151 = $tmp150->$class->itable;
while ($tmp151->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp151 = $tmp151->next;
}
$fn153 $tmp152 = $tmp151->methods[0];
frost$core$Bit $tmp154 = $tmp152($tmp150);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block12; else goto block11;
block11:;
*(&local1) = ((frost$core$String*) NULL);
ITable* $tmp156 = $tmp150->$class->itable;
while ($tmp156->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp156 = $tmp156->next;
}
$fn158 $tmp157 = $tmp156->methods[1];
frost$core$Object* $tmp159 = $tmp157($tmp150);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp159)));
frost$core$String* $tmp160 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
*(&local1) = ((frost$core$String*) $tmp159);
// line 67
frost$core$String* $tmp161 = *(&local1);
frost$core$String* $tmp162 = frost$core$String$get_asString$R$frost$core$String($tmp161);
frost$core$String* $tmp163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp162, &$s164);
frost$collections$HashMap** $tmp165 = &param0->traces;
frost$collections$HashMap* $tmp166 = *$tmp165;
frost$core$String* $tmp167 = *(&local1);
frost$core$Object* $tmp168 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp166, ((frost$collections$Key*) $tmp167));
frost$core$Bit $tmp169 = frost$core$Bit$init$builtin_bit(($tmp168 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp168)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).nonnull);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp171 = (frost$core$Int64) {67};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s172, $tmp171, &$s173);
abort(); // unreachable
block13:;
frost$core$Object* $tmp174;
if (($tmp168 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp168)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).nonnull) {
    frost$core$Int64$wrapper* $tmp175;
    $tmp175 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp175->value = ((frost$core$Int64) ($tmp168 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp168)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).value);
    $tmp174 = ((frost$core$Object*) $tmp175);
}
else {
    $tmp174 = NULL;
}
frost$core$String* $tmp176 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp163, $tmp174);
frost$core$String* $tmp177 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp176, &$s178);
frost$io$Console$printLine$frost$core$String($tmp177);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// unreffing REF($147:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
// unreffing REF($146:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp174);
// unreffing REF($145:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q($tmp168);
// unreffing REF($136:frost.collections.HashMap.V?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
// unreffing REF($130:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
// unreffing REF($129:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp159);
// unreffing REF($119:frost.collections.Iterator.T)
frost$core$String* $tmp179 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
// unreffing k
*(&local1) = ((frost$core$String*) NULL);
goto block10;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
// unreffing REF($108:frost.collections.Iterator<frost.collections.MapView.K>)
return;

}
void frost$core$Frost$countTrace$frost$core$String(frost$core$Frost* param0, frost$core$String* param1) {

frost$core$Int64$nullable local0;
// line 84
frost$collections$HashMap** $tmp180 = &param0->traces;
frost$collections$HashMap* $tmp181 = *$tmp180;
frost$core$Object* $tmp182 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp181, ((frost$collections$Key*) param1));
*(&local0) = ($tmp182 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp182)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
frost$core$Frost$unref$frost$core$Object$Q($tmp182);
// unreffing REF($5:frost.collections.HashMap.V?)
// line 85
frost$core$Int64$nullable $tmp183 = *(&local0);
frost$core$Bit $tmp184 = frost$core$Bit$init$builtin_bit(!$tmp183.nonnull);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block1; else goto block2;
block1:;
// line 86
frost$core$Int64 $tmp186 = (frost$core$Int64) {0};
*(&local0) = ((frost$core$Int64$nullable) { $tmp186, true });
goto block2;
block2:;
// line 88
frost$collections$HashMap** $tmp187 = &param0->traces;
frost$collections$HashMap* $tmp188 = *$tmp187;
frost$core$Int64$nullable $tmp189 = *(&local0);
frost$core$Bit $tmp190 = frost$core$Bit$init$builtin_bit($tmp189.nonnull);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp192 = (frost$core$Int64) {88};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s193, $tmp192, &$s194);
abort(); // unreachable
block3:;
frost$core$Int64 $tmp195 = (frost$core$Int64) {1};
int64_t $tmp196 = ((frost$core$Int64) $tmp189.value).value;
int64_t $tmp197 = $tmp195.value;
int64_t $tmp198 = $tmp196 + $tmp197;
frost$core$Int64 $tmp199 = (frost$core$Int64) {$tmp198};
frost$core$Int64$wrapper* $tmp200;
$tmp200 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp200->value = $tmp199;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp188, ((frost$collections$Key*) param1), ((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
// unreffing REF($41:frost.collections.HashMap.V)
return;

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$Error* local0 = NULL;
// line 105
*(&local0) = ((frost$core$Error*) NULL);
// line 106
frost$io$OutputStream* $tmp201 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp202 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s203, param0);
frost$core$String* $tmp204 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp202, &$s205);
frost$core$Int64$wrapper* $tmp206;
$tmp206 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp206->value = param1;
frost$core$String* $tmp207 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp204, ((frost$core$Object*) $tmp206));
frost$core$String* $tmp208 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp207, &$s209);
$fn211 $tmp210 = ($fn211) $tmp201->$class->vtable[19];
frost$core$Error* $tmp212 = $tmp210($tmp201, $tmp208);
// try error check
if ($tmp212 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local0) = $tmp212;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
// unreffing REF($10:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// unreffing REF($6:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
// unreffing REF($3:frost.io.OutputStream)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
// unreffing REF($10:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// unreffing REF($6:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
// unreffing REF($3:frost.io.OutputStream)
goto block2;
block1:;
goto block2;
block2:;
frost$core$Error* $tmp213 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
// unreffing error
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
frost$io$OutputStream* $tmp214 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp215 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s216, param0);
frost$core$String* $tmp217 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp215, &$s218);
frost$core$Int64$wrapper* $tmp219;
$tmp219 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp219->value = param1;
frost$core$String* $tmp220 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp217, ((frost$core$Object*) $tmp219));
frost$core$String* $tmp221 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp220, &$s222);
frost$core$String* $tmp223 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp221, param2);
frost$core$String* $tmp224 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp223, &$s225);
$fn227 $tmp226 = ($fn227) $tmp214->$class->vtable[19];
frost$core$Error* $tmp228 = $tmp226($tmp214, $tmp224);
// try error check
if ($tmp228 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
*(&local0) = $tmp228;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// unreffing REF($12:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// unreffing REF($10:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
// unreffing REF($9:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// unreffing REF($6:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// unreffing REF($3:frost.io.OutputStream)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// unreffing REF($12:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// unreffing REF($10:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
// unreffing REF($9:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// unreffing REF($6:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// unreffing REF($3:frost.io.OutputStream)
goto block2;
block1:;
goto block2;
block2:;
frost$core$Error* $tmp229 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
// unreffing error
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
frost$core$Int32 $tmp230 = (frost$core$Int32) {48};
frost$core$Char32 $tmp231 = frost$core$Char32$init$frost$core$Int32($tmp230);
frost$core$Bit $tmp232 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp231);
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block3; else goto block4;
block3:;
frost$core$Int32 $tmp234 = (frost$core$Int32) {57};
frost$core$Char32 $tmp235 = frost$core$Char32$init$frost$core$Int32($tmp234);
frost$core$Bit $tmp236 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp235);
*(&local0) = $tmp236;
goto block5;
block4:;
*(&local0) = $tmp232;
goto block5;
block5:;
frost$core$Bit $tmp237 = *(&local0);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block1; else goto block2;
block1:;
// line 126
frost$core$UInt64 $tmp239 = frost$core$Char32$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp240 = (frost$core$UInt8) {48};
frost$core$Char8 $tmp241 = frost$core$Char8$init$frost$core$UInt8($tmp240);
frost$core$UInt64 $tmp242 = frost$core$Char8$get_asUInt64$R$frost$core$UInt64($tmp241);
uint64_t $tmp243 = $tmp239.value;
uint64_t $tmp244 = $tmp242.value;
uint64_t $tmp245 = $tmp243 - $tmp244;
frost$core$UInt64 $tmp246 = (frost$core$UInt64) {$tmp245};
return ((frost$core$UInt64$nullable) { $tmp246, true });
block2:;
// line 128
frost$core$Int32 $tmp247 = (frost$core$Int32) {65};
frost$core$Char32 $tmp248 = frost$core$Char32$init$frost$core$Int32($tmp247);
frost$core$Bit $tmp249 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp248);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block8; else goto block9;
block8:;
frost$core$Int32 $tmp251 = (frost$core$Int32) {90};
frost$core$Char32 $tmp252 = frost$core$Char32$init$frost$core$Int32($tmp251);
frost$core$Bit $tmp253 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp252);
*(&local1) = $tmp253;
goto block10;
block9:;
*(&local1) = $tmp249;
goto block10;
block10:;
frost$core$Bit $tmp254 = *(&local1);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block6; else goto block7;
block6:;
// line 129
frost$core$UInt64 $tmp256 = frost$core$Char32$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp257 = (frost$core$UInt8) {65};
frost$core$Char8 $tmp258 = frost$core$Char8$init$frost$core$UInt8($tmp257);
frost$core$UInt64 $tmp259 = frost$core$Char8$get_asUInt64$R$frost$core$UInt64($tmp258);
uint64_t $tmp260 = $tmp256.value;
uint64_t $tmp261 = $tmp259.value;
uint64_t $tmp262 = $tmp260 - $tmp261;
frost$core$UInt64 $tmp263 = (frost$core$UInt64) {$tmp262};
frost$core$UInt64 $tmp264 = (frost$core$UInt64) {10};
uint64_t $tmp265 = $tmp263.value;
uint64_t $tmp266 = $tmp264.value;
uint64_t $tmp267 = $tmp265 + $tmp266;
frost$core$UInt64 $tmp268 = (frost$core$UInt64) {$tmp267};
return ((frost$core$UInt64$nullable) { $tmp268, true });
block7:;
// line 131
frost$core$Int32 $tmp269 = (frost$core$Int32) {97};
frost$core$Char32 $tmp270 = frost$core$Char32$init$frost$core$Int32($tmp269);
frost$core$Bit $tmp271 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp270);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block13; else goto block14;
block13:;
frost$core$Int32 $tmp273 = (frost$core$Int32) {122};
frost$core$Char32 $tmp274 = frost$core$Char32$init$frost$core$Int32($tmp273);
frost$core$Bit $tmp275 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp274);
*(&local2) = $tmp275;
goto block15;
block14:;
*(&local2) = $tmp271;
goto block15;
block15:;
frost$core$Bit $tmp276 = *(&local2);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block11; else goto block12;
block11:;
// line 132
frost$core$UInt64 $tmp278 = frost$core$Char32$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp279 = (frost$core$UInt8) {97};
frost$core$Char8 $tmp280 = frost$core$Char8$init$frost$core$UInt8($tmp279);
frost$core$UInt64 $tmp281 = frost$core$Char8$get_asUInt64$R$frost$core$UInt64($tmp280);
uint64_t $tmp282 = $tmp278.value;
uint64_t $tmp283 = $tmp281.value;
uint64_t $tmp284 = $tmp282 - $tmp283;
frost$core$UInt64 $tmp285 = (frost$core$UInt64) {$tmp284};
frost$core$UInt64 $tmp286 = (frost$core$UInt64) {10};
uint64_t $tmp287 = $tmp285.value;
uint64_t $tmp288 = $tmp286.value;
uint64_t $tmp289 = $tmp287 + $tmp288;
frost$core$UInt64 $tmp290 = (frost$core$UInt64) {$tmp289};
return ((frost$core$UInt64$nullable) { $tmp290, true });
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
frost$core$Bit $tmp291 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s292);
bool $tmp293 = $tmp291.value;
if ($tmp293) goto block1; else goto block2;
block1:;
// line 143
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 145
frost$core$UInt64 $tmp294 = (frost$core$UInt64) {0};
*(&local0) = $tmp294;
// line 146
frost$core$UInt64 $tmp295 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64(param1);
*(&local1) = $tmp295;
// line 147
frost$core$String$Index $tmp296 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local2) = $tmp296;
// line 148
goto block3;
block3:;
frost$core$String$Index $tmp297 = *(&local2);
frost$core$String$Index$wrapper* $tmp298;
$tmp298 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp298->value = $tmp297;
frost$core$String$Index $tmp299 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$wrapper* $tmp300;
$tmp300 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp300->value = $tmp299;
ITable* $tmp301 = ((frost$core$Equatable*) $tmp298)->$class->itable;
while ($tmp301->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp301 = $tmp301->next;
}
$fn303 $tmp302 = $tmp301->methods[1];
frost$core$Bit $tmp304 = $tmp302(((frost$core$Equatable*) $tmp298), ((frost$core$Equatable*) $tmp300));
bool $tmp305 = $tmp304.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp300)));
// unreffing REF($21:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp298)));
// unreffing REF($18:frost.core.Equatable<frost.core.String.Index>)
if ($tmp305) goto block4; else goto block5;
block4:;
// line 149
frost$core$String$Index $tmp306 = *(&local2);
frost$core$Char32 $tmp307 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp306);
frost$core$UInt64$nullable $tmp308 = frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q($tmp307);
*(&local3) = $tmp308;
// line 150
frost$core$UInt64$nullable $tmp309 = *(&local3);
frost$core$Bit $tmp310 = frost$core$Bit$init$builtin_bit(!$tmp309.nonnull);
bool $tmp311 = $tmp310.value;
if ($tmp311) goto block8; else goto block9;
block8:;
*(&local4) = $tmp310;
goto block10;
block9:;
frost$core$UInt64$nullable $tmp312 = *(&local3);
frost$core$Bit $tmp313 = frost$core$Bit$init$builtin_bit($tmp312.nonnull);
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp315 = (frost$core$Int64) {150};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s316, $tmp315, &$s317);
abort(); // unreachable
block11:;
frost$core$UInt64 $tmp318 = *(&local1);
uint64_t $tmp319 = ((frost$core$UInt64) $tmp312.value).value;
uint64_t $tmp320 = $tmp318.value;
bool $tmp321 = $tmp319 >= $tmp320;
frost$core$Bit $tmp322 = (frost$core$Bit) {$tmp321};
*(&local4) = $tmp322;
goto block10;
block10:;
frost$core$Bit $tmp323 = *(&local4);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block6; else goto block7;
block6:;
// line 151
return ((frost$core$UInt64$nullable) { .nonnull = false });
block7:;
// line 153
frost$core$UInt64 $tmp325 = *(&local0);
frost$core$UInt64 $tmp326 = *(&local1);
uint64_t $tmp327 = $tmp325.value;
uint64_t $tmp328 = $tmp326.value;
uint64_t $tmp329 = $tmp327 * $tmp328;
frost$core$UInt64 $tmp330 = (frost$core$UInt64) {$tmp329};
frost$core$UInt64$nullable $tmp331 = *(&local3);
frost$core$Bit $tmp332 = frost$core$Bit$init$builtin_bit($tmp331.nonnull);
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp334 = (frost$core$Int64) {153};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s335, $tmp334, &$s336);
abort(); // unreachable
block13:;
uint64_t $tmp337 = $tmp330.value;
uint64_t $tmp338 = ((frost$core$UInt64) $tmp331.value).value;
uint64_t $tmp339 = $tmp337 + $tmp338;
frost$core$UInt64 $tmp340 = (frost$core$UInt64) {$tmp339};
*(&local0) = $tmp340;
// line 154
frost$core$String$Index $tmp341 = *(&local2);
frost$core$String$Index $tmp342 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp341);
*(&local2) = $tmp342;
goto block3;
block5:;
// line 156
frost$core$UInt64 $tmp343 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp343, true });

}
frost$core$String* frost$core$Frost$align$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$Int64$nullable local1;
frost$core$Char32 local2;
// line 182
frost$core$Int64 $tmp344 = frost$core$String$get_length$R$frost$core$Int64(param1);
frost$core$Int64 $tmp345 = (frost$core$Int64) {2};
int64_t $tmp346 = $tmp344.value;
int64_t $tmp347 = $tmp345.value;
bool $tmp348 = $tmp346 >= $tmp347;
frost$core$Bit $tmp349 = (frost$core$Bit) {$tmp348};
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp351 = (frost$core$Int64) {182};
frost$core$String* $tmp352 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s353, param1);
frost$core$String* $tmp354 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp352, &$s355);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s356, $tmp351, $tmp354);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
// unreffing REF($11:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
// unreffing REF($10:frost.core.String)
abort(); // unreachable
block1:;
// line 183
frost$core$String$Index $tmp357 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$String$Index $tmp358 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp357);
*(&local0) = $tmp358;
// line 184
frost$core$String$Index $tmp359 = *(&local0);
frost$core$Char32 $tmp360 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp359);
frost$core$Int32 $tmp361 = (frost$core$Int32) {60};
frost$core$Char32 $tmp362 = frost$core$Char32$init$frost$core$Int32($tmp361);
frost$core$Bit $tmp363 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp360, $tmp362);
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block4; else goto block5;
block5:;
frost$core$Int32 $tmp365 = (frost$core$Int32) {94};
frost$core$Char32 $tmp366 = frost$core$Char32$init$frost$core$Int32($tmp365);
frost$core$Bit $tmp367 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp360, $tmp366);
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block4; else goto block6;
block6:;
frost$core$Int32 $tmp369 = (frost$core$Int32) {62};
frost$core$Char32 $tmp370 = frost$core$Char32$init$frost$core$Int32($tmp369);
frost$core$Bit $tmp371 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp360, $tmp370);
bool $tmp372 = $tmp371.value;
if ($tmp372) goto block4; else goto block7;
block4:;
goto block3;
block7:;
// line 189
frost$core$String$Index $tmp373 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local0) = $tmp373;
goto block3;
block3:;
// line 192
frost$core$String$Index $tmp374 = *(&local0);
frost$core$String$Index $tmp375 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp374);
frost$core$Bit $tmp376 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp377 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp375, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp376);
frost$core$String* $tmp378 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp377);
frost$core$Int64$nullable $tmp379 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp378);
*(&local1) = $tmp379;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
// unreffing REF($53:frost.core.String)
// line 193
// line 194
frost$core$String$Index $tmp380 = *(&local0);
frost$core$String$Index $tmp381 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$Bit $tmp382 = frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit($tmp380, $tmp381);
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block8; else goto block10;
block8:;
// line 195
frost$core$Int32 $tmp384 = (frost$core$Int32) {32};
frost$core$Char32 $tmp385 = frost$core$Char32$init$frost$core$Int32($tmp384);
*(&local2) = $tmp385;
goto block9;
block10:;
// line 1
// line 198
frost$core$String$Index $tmp386 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$Char32 $tmp387 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp386);
*(&local2) = $tmp387;
goto block9;
block9:;
// line 200
frost$core$String$Index $tmp388 = *(&local0);
frost$core$Char32 $tmp389 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp388);
frost$core$Int32 $tmp390 = (frost$core$Int32) {60};
frost$core$Char32 $tmp391 = frost$core$Char32$init$frost$core$Int32($tmp390);
frost$core$Bit $tmp392 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp389, $tmp391);
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block12; else goto block13;
block12:;
// line 201
frost$core$Int64$nullable $tmp394 = *(&local1);
frost$core$Bit $tmp395 = frost$core$Bit$init$builtin_bit($tmp394.nonnull);
bool $tmp396 = $tmp395.value;
if ($tmp396) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp397 = (frost$core$Int64) {201};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s398, $tmp397, &$s399);
abort(); // unreachable
block14:;
frost$core$Char32 $tmp400 = *(&local2);
frost$core$String* $tmp401 = frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int64) $tmp394.value), $tmp400);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
// unreffing REF($96:frost.core.String)
return $tmp401;
block13:;
frost$core$Int32 $tmp402 = (frost$core$Int32) {94};
frost$core$Char32 $tmp403 = frost$core$Char32$init$frost$core$Int32($tmp402);
frost$core$Bit $tmp404 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp389, $tmp403);
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block16; else goto block17;
block16:;
// line 202
frost$core$Int64$nullable $tmp406 = *(&local1);
frost$core$Bit $tmp407 = frost$core$Bit$init$builtin_bit($tmp406.nonnull);
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp409 = (frost$core$Int64) {202};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s410, $tmp409, &$s411);
abort(); // unreachable
block18:;
frost$core$Char32 $tmp412 = *(&local2);
frost$core$String* $tmp413 = frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int64) $tmp406.value), $tmp412);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
// unreffing REF($119:frost.core.String)
return $tmp413;
block17:;
frost$core$Int32 $tmp414 = (frost$core$Int32) {62};
frost$core$Char32 $tmp415 = frost$core$Char32$init$frost$core$Int32($tmp414);
frost$core$Bit $tmp416 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp389, $tmp415);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block20; else goto block21;
block20:;
// line 203
frost$core$Int64$nullable $tmp418 = *(&local1);
frost$core$Bit $tmp419 = frost$core$Bit$init$builtin_bit($tmp418.nonnull);
bool $tmp420 = $tmp419.value;
if ($tmp420) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp421 = (frost$core$Int64) {203};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s422, $tmp421, &$s423);
abort(); // unreachable
block22:;
frost$core$Char32 $tmp424 = *(&local2);
frost$core$String* $tmp425 = frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int64) $tmp418.value), $tmp424);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
// unreffing REF($142:frost.core.String)
return $tmp425;
block21:;
// line 204
frost$core$Bit $tmp426 = frost$core$Bit$init$builtin_bit(false);
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp428 = (frost$core$Int64) {204};
frost$core$String* $tmp429 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s430, param1);
frost$core$String* $tmp431 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp429, &$s432);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s433, $tmp428, $tmp431);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
// unreffing REF($155:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
// unreffing REF($154:frost.core.String)
abort(); // unreachable
block24:;
goto block11;
block11:;
frost$core$Bit $tmp434 = frost$core$Bit$init$builtin_bit(false);
bool $tmp435 = $tmp434.value;
if ($tmp435) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp436 = (frost$core$Int64) {181};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s437, $tmp436, &$s438);
abort(); // unreachable
block26:;
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
// line 218
frost$core$String$Index $tmp439 = frost$core$String$get_start$R$frost$core$String$Index(param3);
*(&local0) = $tmp439;
// line 219
frost$core$UInt64 $tmp440 = (frost$core$UInt64) {10};
*(&local1) = $tmp440;
// line 220
frost$collections$ListView* $tmp441 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s442);
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$collections$ListView* $tmp443 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
*(&local2) = $tmp441;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
// unreffing REF($7:frost.collections.ListView<frost.core.Char8>)
// line 221
frost$core$String$Index $tmp444 = *(&local0);
frost$core$String$Index$wrapper* $tmp445;
$tmp445 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp445->value = $tmp444;
frost$core$String$Index $tmp446 = frost$core$String$get_end$R$frost$core$String$Index(param3);
frost$core$String$Index$wrapper* $tmp447;
$tmp447 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp447->value = $tmp446;
ITable* $tmp448 = ((frost$core$Comparable*) $tmp445)->$class->itable;
while ($tmp448->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp448 = $tmp448->next;
}
$fn450 $tmp449 = $tmp448->methods[1];
frost$core$Bit $tmp451 = $tmp449(((frost$core$Comparable*) $tmp445), ((frost$core$Comparable*) $tmp447));
bool $tmp452 = $tmp451.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp447)));
// unreffing REF($23:frost.core.Comparable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp445)));
// unreffing REF($20:frost.core.Comparable<frost.core.String.Index>)
if ($tmp452) goto block1; else goto block2;
block1:;
// line 222
frost$core$String$Index $tmp453 = *(&local0);
frost$core$Char32 $tmp454 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param3, $tmp453);
frost$core$Int32 $tmp455 = (frost$core$Int32) {98};
frost$core$Char32 $tmp456 = frost$core$Char32$init$frost$core$Int32($tmp455);
frost$core$Bit $tmp457 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp454, $tmp456);
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block4; else goto block5;
block5:;
frost$core$Int32 $tmp459 = (frost$core$Int32) {66};
frost$core$Char32 $tmp460 = frost$core$Char32$init$frost$core$Int32($tmp459);
frost$core$Bit $tmp461 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp454, $tmp460);
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block4; else goto block6;
block4:;
// line 224
frost$core$UInt64 $tmp463 = (frost$core$UInt64) {2};
*(&local1) = $tmp463;
goto block3;
block6:;
frost$core$Int32 $tmp464 = (frost$core$Int32) {111};
frost$core$Char32 $tmp465 = frost$core$Char32$init$frost$core$Int32($tmp464);
frost$core$Bit $tmp466 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp454, $tmp465);
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block7; else goto block8;
block8:;
frost$core$Int32 $tmp468 = (frost$core$Int32) {79};
frost$core$Char32 $tmp469 = frost$core$Char32$init$frost$core$Int32($tmp468);
frost$core$Bit $tmp470 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp454, $tmp469);
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block7; else goto block9;
block7:;
// line 227
frost$core$UInt64 $tmp472 = (frost$core$UInt64) {8};
*(&local1) = $tmp472;
goto block3;
block9:;
frost$core$Int32 $tmp473 = (frost$core$Int32) {100};
frost$core$Char32 $tmp474 = frost$core$Char32$init$frost$core$Int32($tmp473);
frost$core$Bit $tmp475 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp454, $tmp474);
bool $tmp476 = $tmp475.value;
if ($tmp476) goto block10; else goto block11;
block11:;
frost$core$Int32 $tmp477 = (frost$core$Int32) {68};
frost$core$Char32 $tmp478 = frost$core$Char32$init$frost$core$Int32($tmp477);
frost$core$Bit $tmp479 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp454, $tmp478);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block10; else goto block12;
block10:;
// line 230
frost$core$UInt64 $tmp481 = (frost$core$UInt64) {10};
*(&local1) = $tmp481;
goto block3;
block12:;
frost$core$Int32 $tmp482 = (frost$core$Int32) {120};
frost$core$Char32 $tmp483 = frost$core$Char32$init$frost$core$Int32($tmp482);
frost$core$Bit $tmp484 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp454, $tmp483);
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block13; else goto block14;
block13:;
// line 233
frost$core$UInt64 $tmp486 = (frost$core$UInt64) {16};
*(&local1) = $tmp486;
goto block3;
block14:;
frost$core$Int32 $tmp487 = (frost$core$Int32) {88};
frost$core$Char32 $tmp488 = frost$core$Char32$init$frost$core$Int32($tmp487);
frost$core$Bit $tmp489 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp454, $tmp488);
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block15; else goto block16;
block15:;
// line 236
frost$core$UInt64 $tmp491 = (frost$core$UInt64) {16};
*(&local1) = $tmp491;
// line 237
frost$collections$ListView* $tmp492 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s493);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
frost$collections$ListView* $tmp494 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
*(&local2) = $tmp492;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
// unreffing REF($97:frost.collections.ListView<frost.core.Char8>)
goto block3;
block16:;
// line 240
frost$core$Bit $tmp495 = frost$core$Bit$init$builtin_bit(false);
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp497 = (frost$core$Int64) {240};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s498, $tmp497, &$s499);
abort(); // unreachable
block17:;
goto block3;
block3:;
goto block2;
block2:;
// line 244
// line 245
bool $tmp500 = param0.value;
if ($tmp500) goto block21; else goto block22;
block21:;
frost$core$UInt64 $tmp501 = *(&local1);
frost$core$UInt64 $tmp502 = (frost$core$UInt64) {10};
uint64_t $tmp503 = $tmp501.value;
uint64_t $tmp504 = $tmp502.value;
bool $tmp505 = $tmp503 != $tmp504;
frost$core$Bit $tmp506 = (frost$core$Bit) {$tmp505};
*(&local4) = $tmp506;
goto block23;
block22:;
*(&local4) = param0;
goto block23;
block23:;
frost$core$Bit $tmp507 = *(&local4);
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block19; else goto block24;
block19:;
// line 246
frost$core$Int64 $tmp509 = frost$core$UInt64$get_asInt64$R$frost$core$Int64(param1);
frost$core$Int64 $tmp510 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp509);
frost$core$UInt64 $tmp511 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp510);
frost$core$UInt64 $tmp512 = frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64($tmp511, param2);
*(&local3) = $tmp512;
goto block20;
block24:;
// line 1
// line 249
*(&local3) = param1;
goto block20;
block20:;
// line 251
frost$core$Int64 $tmp513 = (frost$core$Int64) {64};
*(&local5) = $tmp513;
// line 252
frost$core$Int64 $tmp514 = *(&local5);
int64_t $tmp515 = $tmp514.value;
frost$core$Char8* $tmp516 = ((frost$core$Char8*) frostAlloc($tmp515 * 1));
*(&local6) = $tmp516;
// line 253
frost$core$Int64 $tmp517 = *(&local5);
frost$core$Int64 $tmp518 = (frost$core$Int64) {1};
int64_t $tmp519 = $tmp517.value;
int64_t $tmp520 = $tmp518.value;
int64_t $tmp521 = $tmp519 - $tmp520;
frost$core$Int64 $tmp522 = (frost$core$Int64) {$tmp521};
*(&local7) = $tmp522;
// line 254
goto block25;
block25:;
// line 255
frost$core$Char8* $tmp523 = *(&local6);
frost$core$Int64 $tmp524 = *(&local7);
frost$collections$ListView* $tmp525 = *(&local2);
frost$core$UInt64 $tmp526 = *(&local3);
frost$core$UInt64 $tmp527 = *(&local1);
frost$core$UInt64 $tmp528 = frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64($tmp526, $tmp527);
frost$core$Int64 $tmp529 = frost$core$UInt64$get_asInt64$R$frost$core$Int64($tmp528);
ITable* $tmp530 = $tmp525->$class->itable;
while ($tmp530->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp530 = $tmp530->next;
}
$fn532 $tmp531 = $tmp530->methods[0];
frost$core$Object* $tmp533 = $tmp531($tmp525, $tmp529);
int64_t $tmp534 = $tmp524.value;
$tmp523[$tmp534] = ((frost$core$Char8$wrapper*) $tmp533)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp533);
// unreffing REF($173:frost.collections.ListView.T)
// line 256
frost$core$UInt64 $tmp535 = *(&local3);
frost$core$UInt64 $tmp536 = *(&local1);
uint64_t $tmp537 = $tmp535.value;
uint64_t $tmp538 = $tmp536.value;
uint64_t $tmp539 = $tmp537 / $tmp538;
frost$core$UInt64 $tmp540 = (frost$core$UInt64) {$tmp539};
*(&local3) = $tmp540;
// line 257
frost$core$Int64 $tmp541 = *(&local7);
frost$core$Int64 $tmp542 = (frost$core$Int64) {1};
int64_t $tmp543 = $tmp541.value;
int64_t $tmp544 = $tmp542.value;
int64_t $tmp545 = $tmp543 - $tmp544;
frost$core$Int64 $tmp546 = (frost$core$Int64) {$tmp545};
*(&local7) = $tmp546;
goto block26;
block26:;
frost$core$UInt64 $tmp547 = *(&local3);
frost$core$UInt64 $tmp548 = (frost$core$UInt64) {0};
uint64_t $tmp549 = $tmp547.value;
uint64_t $tmp550 = $tmp548.value;
bool $tmp551 = $tmp549 > $tmp550;
frost$core$Bit $tmp552 = (frost$core$Bit) {$tmp551};
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block25; else goto block27;
block27:;
// line 260
bool $tmp554 = param0.value;
if ($tmp554) goto block30; else goto block31;
block30:;
frost$core$UInt64 $tmp555 = *(&local1);
frost$core$UInt64 $tmp556 = (frost$core$UInt64) {10};
frost$core$Bit $tmp557 = frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit($tmp555, $tmp556);
*(&local8) = $tmp557;
goto block32;
block31:;
*(&local8) = param0;
goto block32;
block32:;
frost$core$Bit $tmp558 = *(&local8);
bool $tmp559 = $tmp558.value;
if ($tmp559) goto block28; else goto block29;
block28:;
// line 261
frost$core$Char8* $tmp560 = *(&local6);
frost$core$Int64 $tmp561 = *(&local7);
frost$core$UInt8 $tmp562 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp563 = frost$core$Char8$init$frost$core$UInt8($tmp562);
int64_t $tmp564 = $tmp561.value;
$tmp560[$tmp564] = $tmp563;
// line 262
frost$core$Int64 $tmp565 = *(&local7);
frost$core$Int64 $tmp566 = (frost$core$Int64) {1};
int64_t $tmp567 = $tmp565.value;
int64_t $tmp568 = $tmp566.value;
int64_t $tmp569 = $tmp567 - $tmp568;
frost$core$Int64 $tmp570 = (frost$core$Int64) {$tmp569};
*(&local7) = $tmp570;
goto block29;
block29:;
// line 264
frost$core$Int64 $tmp571 = *(&local7);
frost$core$Int64 $tmp572 = (frost$core$Int64) {1};
int64_t $tmp573 = $tmp571.value;
int64_t $tmp574 = $tmp572.value;
int64_t $tmp575 = $tmp573 + $tmp574;
frost$core$Int64 $tmp576 = (frost$core$Int64) {$tmp575};
*(&local7) = $tmp576;
// line 265
frost$core$Int64 $tmp577 = *(&local5);
frost$core$Int64 $tmp578 = *(&local7);
int64_t $tmp579 = $tmp577.value;
int64_t $tmp580 = $tmp578.value;
int64_t $tmp581 = $tmp579 - $tmp580;
frost$core$Int64 $tmp582 = (frost$core$Int64) {$tmp581};
*(&local9) = $tmp582;
// line 266
frost$core$Int64 $tmp583 = (frost$core$Int64) {0};
frost$core$Int64 $tmp584 = *(&local9);
frost$core$Bit $tmp585 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp586 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp583, $tmp584, $tmp585);
frost$core$Int64 $tmp587 = $tmp586.min;
*(&local10) = $tmp587;
frost$core$Int64 $tmp588 = $tmp586.max;
frost$core$Bit $tmp589 = $tmp586.inclusive;
bool $tmp590 = $tmp589.value;
frost$core$Int64 $tmp591 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp592 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp591);
if ($tmp590) goto block36; else goto block37;
block36:;
int64_t $tmp593 = $tmp587.value;
int64_t $tmp594 = $tmp588.value;
bool $tmp595 = $tmp593 <= $tmp594;
frost$core$Bit $tmp596 = (frost$core$Bit) {$tmp595};
bool $tmp597 = $tmp596.value;
if ($tmp597) goto block33; else goto block34;
block37:;
int64_t $tmp598 = $tmp587.value;
int64_t $tmp599 = $tmp588.value;
bool $tmp600 = $tmp598 < $tmp599;
frost$core$Bit $tmp601 = (frost$core$Bit) {$tmp600};
bool $tmp602 = $tmp601.value;
if ($tmp602) goto block33; else goto block34;
block33:;
// line 267
frost$core$Char8* $tmp603 = *(&local6);
frost$core$Int64 $tmp604 = *(&local10);
frost$core$Char8* $tmp605 = *(&local6);
frost$core$Int64 $tmp606 = *(&local10);
frost$core$Int64 $tmp607 = *(&local7);
int64_t $tmp608 = $tmp606.value;
int64_t $tmp609 = $tmp607.value;
int64_t $tmp610 = $tmp608 + $tmp609;
frost$core$Int64 $tmp611 = (frost$core$Int64) {$tmp610};
int64_t $tmp612 = $tmp611.value;
frost$core$Char8 $tmp613 = $tmp605[$tmp612];
int64_t $tmp614 = $tmp604.value;
$tmp603[$tmp614] = $tmp613;
goto block35;
block35:;
frost$core$Int64 $tmp615 = *(&local10);
int64_t $tmp616 = $tmp588.value;
int64_t $tmp617 = $tmp615.value;
int64_t $tmp618 = $tmp616 - $tmp617;
frost$core$Int64 $tmp619 = (frost$core$Int64) {$tmp618};
frost$core$UInt64 $tmp620 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp619);
if ($tmp590) goto block39; else goto block40;
block39:;
uint64_t $tmp621 = $tmp620.value;
uint64_t $tmp622 = $tmp592.value;
bool $tmp623 = $tmp621 >= $tmp622;
frost$core$Bit $tmp624 = (frost$core$Bit) {$tmp623};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block38; else goto block34;
block40:;
uint64_t $tmp626 = $tmp620.value;
uint64_t $tmp627 = $tmp592.value;
bool $tmp628 = $tmp626 > $tmp627;
frost$core$Bit $tmp629 = (frost$core$Bit) {$tmp628};
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block38; else goto block34;
block38:;
int64_t $tmp631 = $tmp615.value;
int64_t $tmp632 = $tmp591.value;
int64_t $tmp633 = $tmp631 + $tmp632;
frost$core$Int64 $tmp634 = (frost$core$Int64) {$tmp633};
*(&local10) = $tmp634;
goto block33;
block34:;
// line 269
frost$core$String* $tmp635 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp636 = *(&local6);
frost$core$Int64 $tmp637 = *(&local9);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp635, $tmp636, $tmp637);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
// unreffing REF($316:frost.core.String)
frost$collections$ListView* $tmp638 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
// unreffing digits
*(&local2) = ((frost$collections$ListView*) NULL);
return $tmp635;

}
void frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(frost$collections$List* param0, frost$core$Int64 param1, frost$core$Int64 param2) {

frost$core$Object* local0 = NULL;
// line 291
ITable* $tmp639 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp639->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp639 = $tmp639->next;
}
$fn641 $tmp640 = $tmp639->methods[0];
frost$core$Object* $tmp642 = $tmp640(((frost$collections$ListView*) param0), param1);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp642);
frost$core$Object* $tmp643 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp643);
*(&local0) = $tmp642;
frost$core$Frost$unref$frost$core$Object$Q($tmp642);
// unreffing REF($4:frost.collections.ListView.T)
// line 292
ITable* $tmp644 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp644->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp644 = $tmp644->next;
}
$fn646 $tmp645 = $tmp644->methods[0];
frost$core$Object* $tmp647 = $tmp645(((frost$collections$ListView*) param0), param2);
ITable* $tmp648 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp648->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp648 = $tmp648->next;
}
$fn650 $tmp649 = $tmp648->methods[0];
$tmp649(((frost$collections$ListWriter*) param0), param1, $tmp647);
frost$core$Frost$unref$frost$core$Object$Q($tmp647);
// unreffing REF($21:frost.collections.ListView.T)
// line 293
frost$core$Object* $tmp651 = *(&local0);
ITable* $tmp652 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp652->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp652 = $tmp652->next;
}
$fn654 $tmp653 = $tmp652->methods[0];
$tmp653(((frost$collections$ListWriter*) param0), param2, $tmp651);
frost$core$Object* $tmp655 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp655);
// unreffing tmp
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
int64_t $tmp656 = param1.value;
int64_t $tmp657 = param2.value;
bool $tmp658 = $tmp656 >= $tmp657;
frost$core$Bit $tmp659 = (frost$core$Bit) {$tmp658};
bool $tmp660 = $tmp659.value;
if ($tmp660) goto block1; else goto block2;
block1:;
// line 301
return;
block2:;
// line 303
int64_t $tmp661 = param2.value;
int64_t $tmp662 = param1.value;
int64_t $tmp663 = $tmp661 - $tmp662;
frost$core$Int64 $tmp664 = (frost$core$Int64) {$tmp663};
frost$core$Int64 $tmp665 = (frost$core$Int64) {2};
int64_t $tmp666 = $tmp664.value;
int64_t $tmp667 = $tmp665.value;
int64_t $tmp668 = $tmp666 / $tmp667;
frost$core$Int64 $tmp669 = (frost$core$Int64) {$tmp668};
int64_t $tmp670 = param1.value;
int64_t $tmp671 = $tmp669.value;
int64_t $tmp672 = $tmp670 + $tmp671;
frost$core$Int64 $tmp673 = (frost$core$Int64) {$tmp672};
*(&local0) = $tmp673;
// line 304
frost$core$Int64 $tmp674 = *(&local0);
ITable* $tmp675 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp675->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp675 = $tmp675->next;
}
$fn677 $tmp676 = $tmp675->methods[0];
frost$core$Object* $tmp678 = $tmp676(((frost$collections$ListView*) param0), $tmp674);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp678);
frost$core$Object* $tmp679 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp679);
*(&local1) = $tmp678;
frost$core$Frost$unref$frost$core$Object$Q($tmp678);
// unreffing REF($29:frost.collections.ListView.T)
// line 305
frost$core$Int64 $tmp680 = *(&local0);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, param2, $tmp680);
// line 306
*(&local2) = param1;
// line 307
frost$core$Int64 $tmp681 = (frost$core$Int64) {1};
int64_t $tmp682 = param2.value;
int64_t $tmp683 = $tmp681.value;
int64_t $tmp684 = $tmp682 - $tmp683;
frost$core$Int64 $tmp685 = (frost$core$Int64) {$tmp684};
frost$core$Bit $tmp686 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$Int64$GT $tmp687 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(param1, $tmp685, $tmp686);
frost$core$Int64 $tmp688 = $tmp687.min;
*(&local3) = $tmp688;
frost$core$Int64 $tmp689 = $tmp687.max;
frost$core$Bit $tmp690 = $tmp687.inclusive;
bool $tmp691 = $tmp690.value;
frost$core$Int64 $tmp692 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp693 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp692);
if ($tmp691) goto block6; else goto block7;
block6:;
int64_t $tmp694 = $tmp688.value;
int64_t $tmp695 = $tmp689.value;
bool $tmp696 = $tmp694 <= $tmp695;
frost$core$Bit $tmp697 = (frost$core$Bit) {$tmp696};
bool $tmp698 = $tmp697.value;
if ($tmp698) goto block3; else goto block4;
block7:;
int64_t $tmp699 = $tmp688.value;
int64_t $tmp700 = $tmp689.value;
bool $tmp701 = $tmp699 < $tmp700;
frost$core$Bit $tmp702 = (frost$core$Bit) {$tmp701};
bool $tmp703 = $tmp702.value;
if ($tmp703) goto block3; else goto block4;
block3:;
// line 308
frost$core$Int64 $tmp704 = *(&local3);
ITable* $tmp705 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp705->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp705 = $tmp705->next;
}
$fn707 $tmp706 = $tmp705->methods[0];
frost$core$Object* $tmp708 = $tmp706(((frost$collections$ListView*) param0), $tmp704);
frost$core$Object* $tmp709 = *(&local1);
frost$core$Int8** $tmp710 = &param3->pointer;
frost$core$Int8* $tmp711 = *$tmp710;
frost$core$Object** $tmp712 = &param3->target;
frost$core$Object* $tmp713 = *$tmp712;
bool $tmp714 = $tmp713 != ((frost$core$Object*) NULL);
if ($tmp714) goto block10; else goto block11;
block11:;
frost$core$Bit $tmp716 = (($fn715) $tmp711)($tmp708, $tmp709);
*(&local4) = $tmp716;
goto block12;
block10:;
frost$core$Bit $tmp718 = (($fn717) $tmp711)($tmp713, $tmp708, $tmp709);
*(&local4) = $tmp718;
goto block12;
block12:;
frost$core$Bit $tmp719 = *(&local4);
frost$core$Bit $tmp720 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp719);
bool $tmp721 = $tmp720.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp708);
// unreffing REF($80:frost.collections.ListView.T)
if ($tmp721) goto block8; else goto block9;
block8:;
// line 309
frost$core$Int64 $tmp722 = *(&local3);
frost$core$Int64 $tmp723 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp722, $tmp723);
// line 310
frost$core$Int64 $tmp724 = *(&local2);
frost$core$Int64 $tmp725 = (frost$core$Int64) {1};
int64_t $tmp726 = $tmp724.value;
int64_t $tmp727 = $tmp725.value;
int64_t $tmp728 = $tmp726 + $tmp727;
frost$core$Int64 $tmp729 = (frost$core$Int64) {$tmp728};
*(&local2) = $tmp729;
goto block9;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp730 = *(&local3);
int64_t $tmp731 = $tmp689.value;
int64_t $tmp732 = $tmp730.value;
int64_t $tmp733 = $tmp731 - $tmp732;
frost$core$Int64 $tmp734 = (frost$core$Int64) {$tmp733};
frost$core$UInt64 $tmp735 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp734);
if ($tmp691) goto block14; else goto block15;
block14:;
uint64_t $tmp736 = $tmp735.value;
uint64_t $tmp737 = $tmp693.value;
bool $tmp738 = $tmp736 >= $tmp737;
frost$core$Bit $tmp739 = (frost$core$Bit) {$tmp738};
bool $tmp740 = $tmp739.value;
if ($tmp740) goto block13; else goto block4;
block15:;
uint64_t $tmp741 = $tmp735.value;
uint64_t $tmp742 = $tmp693.value;
bool $tmp743 = $tmp741 > $tmp742;
frost$core$Bit $tmp744 = (frost$core$Bit) {$tmp743};
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block13; else goto block4;
block13:;
int64_t $tmp746 = $tmp730.value;
int64_t $tmp747 = $tmp692.value;
int64_t $tmp748 = $tmp746 + $tmp747;
frost$core$Int64 $tmp749 = (frost$core$Int64) {$tmp748};
*(&local3) = $tmp749;
goto block3;
block4:;
// line 313
frost$core$Int64 $tmp750 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp750, param2);
// line 314
frost$core$Int64 $tmp751 = *(&local2);
frost$core$Int64 $tmp752 = (frost$core$Int64) {1};
int64_t $tmp753 = $tmp751.value;
int64_t $tmp754 = $tmp752.value;
int64_t $tmp755 = $tmp753 - $tmp754;
frost$core$Int64 $tmp756 = (frost$core$Int64) {$tmp755};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, param1, $tmp756, param3);
// line 315
frost$core$Int64 $tmp757 = *(&local2);
frost$core$Int64 $tmp758 = (frost$core$Int64) {1};
int64_t $tmp759 = $tmp757.value;
int64_t $tmp760 = $tmp758.value;
int64_t $tmp761 = $tmp759 + $tmp760;
frost$core$Int64 $tmp762 = (frost$core$Int64) {$tmp761};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, $tmp762, param2, param3);
frost$core$Object* $tmp763 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp763);
// unreffing pivot
*(&local1) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$cleanup(frost$core$Frost* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp764 = &param0->allocations;
frost$collections$HashMap* $tmp765 = *$tmp764;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
frost$collections$HashMap** $tmp766 = &param0->traces;
frost$collections$HashMap* $tmp767 = *$tmp766;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
return;

}

