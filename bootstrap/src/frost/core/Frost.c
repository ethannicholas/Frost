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
typedef frost$core$Bit (*$fn440)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Object* (*$fn522)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn631)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn636)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn640)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef void (*$fn644)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef frost$core$Object* (*$fn667)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn697)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn705)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn707)(frost$core$Object*, frost$core$Object*, frost$core$Object*);

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
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s428 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x2e\x61\x6c\x69\x67\x6e\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x73\x70\x65\x63\x69\x66\x69\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 126, -5104317510844427350, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 8772831143845743696, NULL };

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
frost$core$UInt64 $tmp239 = frost$core$Char32$convert$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp240 = (frost$core$UInt8) {48};
frost$core$Char8 $tmp241 = frost$core$Char8$init$frost$core$UInt8($tmp240);
frost$core$UInt64 $tmp242 = frost$core$Char8$convert$R$frost$core$UInt64($tmp241);
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
frost$core$UInt64 $tmp256 = frost$core$Char32$convert$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp257 = (frost$core$UInt8) {65};
frost$core$Char8 $tmp258 = frost$core$Char8$init$frost$core$UInt8($tmp257);
frost$core$UInt64 $tmp259 = frost$core$Char8$convert$R$frost$core$UInt64($tmp258);
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
frost$core$UInt64 $tmp278 = frost$core$Char32$convert$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp279 = (frost$core$UInt8) {97};
frost$core$Char8 $tmp280 = frost$core$Char8$init$frost$core$UInt8($tmp279);
frost$core$UInt64 $tmp281 = frost$core$Char8$convert$R$frost$core$UInt64($tmp280);
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
frost$core$UInt64 $tmp295 = frost$core$Int64$convert$R$frost$core$UInt64(param1);
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
frost$core$Int64 local1;
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
frost$core$Int64$nullable $tmp379 = frost$core$String$convert$R$frost$core$Int64$Q($tmp378);
frost$core$Bit $tmp380 = frost$core$Bit$init$builtin_bit($tmp379.nonnull);
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp382 = (frost$core$Int64) {192};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s383, $tmp382, &$s384);
abort(); // unreachable
block8:;
*(&local1) = ((frost$core$Int64) $tmp379.value);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
// unreffing REF($53:frost.core.String)
// line 193
// line 194
frost$core$String$Index $tmp385 = *(&local0);
frost$core$String$Index $tmp386 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$Bit $tmp387 = frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit($tmp385, $tmp386);
bool $tmp388 = $tmp387.value;
if ($tmp388) goto block10; else goto block12;
block10:;
// line 195
frost$core$Int32 $tmp389 = (frost$core$Int32) {32};
frost$core$Char32 $tmp390 = frost$core$Char32$init$frost$core$Int32($tmp389);
*(&local2) = $tmp390;
goto block11;
block12:;
// line 1
// line 198
frost$core$String$Index $tmp391 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$Char32 $tmp392 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp391);
*(&local2) = $tmp392;
goto block11;
block11:;
// line 200
frost$core$String$Index $tmp393 = *(&local0);
frost$core$Char32 $tmp394 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp393);
frost$core$Int32 $tmp395 = (frost$core$Int32) {60};
frost$core$Char32 $tmp396 = frost$core$Char32$init$frost$core$Int32($tmp395);
frost$core$Bit $tmp397 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp394, $tmp396);
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block14; else goto block15;
block14:;
// line 201
frost$core$Int64 $tmp399 = *(&local1);
frost$core$Char32 $tmp400 = *(&local2);
frost$core$String* $tmp401 = frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, $tmp399, $tmp400);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
// unreffing REF($96:frost.core.String)
return $tmp401;
block15:;
frost$core$Int32 $tmp402 = (frost$core$Int32) {94};
frost$core$Char32 $tmp403 = frost$core$Char32$init$frost$core$Int32($tmp402);
frost$core$Bit $tmp404 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp394, $tmp403);
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block16; else goto block17;
block16:;
// line 202
frost$core$Int64 $tmp406 = *(&local1);
frost$core$Char32 $tmp407 = *(&local2);
frost$core$String* $tmp408 = frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, $tmp406, $tmp407);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
// unreffing REF($111:frost.core.String)
return $tmp408;
block17:;
frost$core$Int32 $tmp409 = (frost$core$Int32) {62};
frost$core$Char32 $tmp410 = frost$core$Char32$init$frost$core$Int32($tmp409);
frost$core$Bit $tmp411 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp394, $tmp410);
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block18; else goto block19;
block18:;
// line 203
frost$core$Int64 $tmp413 = *(&local1);
frost$core$Char32 $tmp414 = *(&local2);
frost$core$String* $tmp415 = frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, $tmp413, $tmp414);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
// unreffing REF($126:frost.core.String)
return $tmp415;
block19:;
// line 204
frost$core$Bit $tmp416 = frost$core$Bit$init$builtin_bit(false);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp418 = (frost$core$Int64) {204};
frost$core$String* $tmp419 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s420, param1);
frost$core$String* $tmp421 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp419, &$s422);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s423, $tmp418, $tmp421);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
// unreffing REF($139:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
// unreffing REF($138:frost.core.String)
abort(); // unreachable
block20:;
goto block13;
block13:;
frost$core$Bit $tmp424 = frost$core$Bit$init$builtin_bit(false);
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp426 = (frost$core$Int64) {181};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s427, $tmp426, &$s428);
abort(); // unreachable
block22:;
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
frost$core$String$Index $tmp429 = frost$core$String$get_start$R$frost$core$String$Index(param3);
*(&local0) = $tmp429;
// line 219
frost$core$UInt64 $tmp430 = (frost$core$UInt64) {10};
*(&local1) = $tmp430;
// line 220
frost$collections$ListView* $tmp431 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s432);
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$collections$ListView* $tmp433 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
*(&local2) = $tmp431;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
// unreffing REF($7:frost.collections.ListView<frost.core.Char8>)
// line 221
frost$core$String$Index $tmp434 = *(&local0);
frost$core$String$Index$wrapper* $tmp435;
$tmp435 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp435->value = $tmp434;
frost$core$String$Index $tmp436 = frost$core$String$get_end$R$frost$core$String$Index(param3);
frost$core$String$Index$wrapper* $tmp437;
$tmp437 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp437->value = $tmp436;
ITable* $tmp438 = ((frost$core$Comparable*) $tmp435)->$class->itable;
while ($tmp438->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp438 = $tmp438->next;
}
$fn440 $tmp439 = $tmp438->methods[1];
frost$core$Bit $tmp441 = $tmp439(((frost$core$Comparable*) $tmp435), ((frost$core$Comparable*) $tmp437));
bool $tmp442 = $tmp441.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp437)));
// unreffing REF($23:frost.core.Comparable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp435)));
// unreffing REF($20:frost.core.Comparable<frost.core.String.Index>)
if ($tmp442) goto block1; else goto block2;
block1:;
// line 222
frost$core$String$Index $tmp443 = *(&local0);
frost$core$Char32 $tmp444 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param3, $tmp443);
frost$core$Int32 $tmp445 = (frost$core$Int32) {98};
frost$core$Char32 $tmp446 = frost$core$Char32$init$frost$core$Int32($tmp445);
frost$core$Bit $tmp447 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp444, $tmp446);
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block4; else goto block5;
block5:;
frost$core$Int32 $tmp449 = (frost$core$Int32) {66};
frost$core$Char32 $tmp450 = frost$core$Char32$init$frost$core$Int32($tmp449);
frost$core$Bit $tmp451 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp444, $tmp450);
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block4; else goto block6;
block4:;
// line 224
frost$core$UInt64 $tmp453 = (frost$core$UInt64) {2};
*(&local1) = $tmp453;
goto block3;
block6:;
frost$core$Int32 $tmp454 = (frost$core$Int32) {111};
frost$core$Char32 $tmp455 = frost$core$Char32$init$frost$core$Int32($tmp454);
frost$core$Bit $tmp456 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp444, $tmp455);
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block7; else goto block8;
block8:;
frost$core$Int32 $tmp458 = (frost$core$Int32) {79};
frost$core$Char32 $tmp459 = frost$core$Char32$init$frost$core$Int32($tmp458);
frost$core$Bit $tmp460 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp444, $tmp459);
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block7; else goto block9;
block7:;
// line 227
frost$core$UInt64 $tmp462 = (frost$core$UInt64) {8};
*(&local1) = $tmp462;
goto block3;
block9:;
frost$core$Int32 $tmp463 = (frost$core$Int32) {100};
frost$core$Char32 $tmp464 = frost$core$Char32$init$frost$core$Int32($tmp463);
frost$core$Bit $tmp465 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp444, $tmp464);
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block10; else goto block11;
block11:;
frost$core$Int32 $tmp467 = (frost$core$Int32) {68};
frost$core$Char32 $tmp468 = frost$core$Char32$init$frost$core$Int32($tmp467);
frost$core$Bit $tmp469 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp444, $tmp468);
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block10; else goto block12;
block10:;
// line 230
frost$core$UInt64 $tmp471 = (frost$core$UInt64) {10};
*(&local1) = $tmp471;
goto block3;
block12:;
frost$core$Int32 $tmp472 = (frost$core$Int32) {120};
frost$core$Char32 $tmp473 = frost$core$Char32$init$frost$core$Int32($tmp472);
frost$core$Bit $tmp474 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp444, $tmp473);
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block13; else goto block14;
block13:;
// line 233
frost$core$UInt64 $tmp476 = (frost$core$UInt64) {16};
*(&local1) = $tmp476;
goto block3;
block14:;
frost$core$Int32 $tmp477 = (frost$core$Int32) {88};
frost$core$Char32 $tmp478 = frost$core$Char32$init$frost$core$Int32($tmp477);
frost$core$Bit $tmp479 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp444, $tmp478);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block15; else goto block16;
block15:;
// line 236
frost$core$UInt64 $tmp481 = (frost$core$UInt64) {16};
*(&local1) = $tmp481;
// line 237
frost$collections$ListView* $tmp482 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s483);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
frost$collections$ListView* $tmp484 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
*(&local2) = $tmp482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
// unreffing REF($97:frost.collections.ListView<frost.core.Char8>)
goto block3;
block16:;
// line 240
frost$core$Bit $tmp485 = frost$core$Bit$init$builtin_bit(false);
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp487 = (frost$core$Int64) {240};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s488, $tmp487, &$s489);
abort(); // unreachable
block17:;
goto block3;
block3:;
goto block2;
block2:;
// line 244
// line 245
bool $tmp490 = param0.value;
if ($tmp490) goto block21; else goto block22;
block21:;
frost$core$UInt64 $tmp491 = *(&local1);
frost$core$UInt64 $tmp492 = (frost$core$UInt64) {10};
uint64_t $tmp493 = $tmp491.value;
uint64_t $tmp494 = $tmp492.value;
bool $tmp495 = $tmp493 != $tmp494;
frost$core$Bit $tmp496 = (frost$core$Bit) {$tmp495};
*(&local4) = $tmp496;
goto block23;
block22:;
*(&local4) = param0;
goto block23;
block23:;
frost$core$Bit $tmp497 = *(&local4);
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block19; else goto block24;
block19:;
// line 246
frost$core$Int64 $tmp499 = frost$core$UInt64$convert$R$frost$core$Int64(param1);
frost$core$Int64 $tmp500 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp499);
frost$core$UInt64 $tmp501 = frost$core$Int64$convert$R$frost$core$UInt64($tmp500);
frost$core$UInt64 $tmp502 = frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64($tmp501, param2);
*(&local3) = $tmp502;
goto block20;
block24:;
// line 1
// line 249
*(&local3) = param1;
goto block20;
block20:;
// line 251
frost$core$Int64 $tmp503 = (frost$core$Int64) {64};
*(&local5) = $tmp503;
// line 252
frost$core$Int64 $tmp504 = *(&local5);
int64_t $tmp505 = $tmp504.value;
frost$core$Char8* $tmp506 = ((frost$core$Char8*) frostAlloc($tmp505 * 1));
*(&local6) = $tmp506;
// line 253
frost$core$Int64 $tmp507 = *(&local5);
frost$core$Int64 $tmp508 = (frost$core$Int64) {1};
int64_t $tmp509 = $tmp507.value;
int64_t $tmp510 = $tmp508.value;
int64_t $tmp511 = $tmp509 - $tmp510;
frost$core$Int64 $tmp512 = (frost$core$Int64) {$tmp511};
*(&local7) = $tmp512;
// line 254
goto block25;
block25:;
// line 255
frost$core$Char8* $tmp513 = *(&local6);
frost$core$Int64 $tmp514 = *(&local7);
frost$collections$ListView* $tmp515 = *(&local2);
frost$core$UInt64 $tmp516 = *(&local3);
frost$core$UInt64 $tmp517 = *(&local1);
frost$core$UInt64 $tmp518 = frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64($tmp516, $tmp517);
frost$core$Int64 $tmp519 = frost$core$UInt64$convert$R$frost$core$Int64($tmp518);
ITable* $tmp520 = $tmp515->$class->itable;
while ($tmp520->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp520 = $tmp520->next;
}
$fn522 $tmp521 = $tmp520->methods[0];
frost$core$Object* $tmp523 = $tmp521($tmp515, $tmp519);
int64_t $tmp524 = $tmp514.value;
$tmp513[$tmp524] = ((frost$core$Char8$wrapper*) $tmp523)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp523);
// unreffing REF($173:frost.collections.ListView.T)
// line 256
frost$core$UInt64 $tmp525 = *(&local3);
frost$core$UInt64 $tmp526 = *(&local1);
uint64_t $tmp527 = $tmp525.value;
uint64_t $tmp528 = $tmp526.value;
uint64_t $tmp529 = $tmp527 / $tmp528;
frost$core$UInt64 $tmp530 = (frost$core$UInt64) {$tmp529};
*(&local3) = $tmp530;
// line 257
frost$core$Int64 $tmp531 = *(&local7);
frost$core$Int64 $tmp532 = (frost$core$Int64) {1};
int64_t $tmp533 = $tmp531.value;
int64_t $tmp534 = $tmp532.value;
int64_t $tmp535 = $tmp533 - $tmp534;
frost$core$Int64 $tmp536 = (frost$core$Int64) {$tmp535};
*(&local7) = $tmp536;
goto block26;
block26:;
frost$core$UInt64 $tmp537 = *(&local3);
frost$core$UInt64 $tmp538 = (frost$core$UInt64) {0};
uint64_t $tmp539 = $tmp537.value;
uint64_t $tmp540 = $tmp538.value;
bool $tmp541 = $tmp539 > $tmp540;
frost$core$Bit $tmp542 = (frost$core$Bit) {$tmp541};
bool $tmp543 = $tmp542.value;
if ($tmp543) goto block25; else goto block27;
block27:;
// line 260
bool $tmp544 = param0.value;
if ($tmp544) goto block30; else goto block31;
block30:;
frost$core$UInt64 $tmp545 = *(&local1);
frost$core$UInt64 $tmp546 = (frost$core$UInt64) {10};
frost$core$Bit $tmp547 = frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit($tmp545, $tmp546);
*(&local8) = $tmp547;
goto block32;
block31:;
*(&local8) = param0;
goto block32;
block32:;
frost$core$Bit $tmp548 = *(&local8);
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block28; else goto block29;
block28:;
// line 261
frost$core$Char8* $tmp550 = *(&local6);
frost$core$Int64 $tmp551 = *(&local7);
frost$core$UInt8 $tmp552 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp553 = frost$core$Char8$init$frost$core$UInt8($tmp552);
int64_t $tmp554 = $tmp551.value;
$tmp550[$tmp554] = $tmp553;
// line 262
frost$core$Int64 $tmp555 = *(&local7);
frost$core$Int64 $tmp556 = (frost$core$Int64) {1};
int64_t $tmp557 = $tmp555.value;
int64_t $tmp558 = $tmp556.value;
int64_t $tmp559 = $tmp557 - $tmp558;
frost$core$Int64 $tmp560 = (frost$core$Int64) {$tmp559};
*(&local7) = $tmp560;
goto block29;
block29:;
// line 264
frost$core$Int64 $tmp561 = *(&local7);
frost$core$Int64 $tmp562 = (frost$core$Int64) {1};
int64_t $tmp563 = $tmp561.value;
int64_t $tmp564 = $tmp562.value;
int64_t $tmp565 = $tmp563 + $tmp564;
frost$core$Int64 $tmp566 = (frost$core$Int64) {$tmp565};
*(&local7) = $tmp566;
// line 265
frost$core$Int64 $tmp567 = *(&local5);
frost$core$Int64 $tmp568 = *(&local7);
int64_t $tmp569 = $tmp567.value;
int64_t $tmp570 = $tmp568.value;
int64_t $tmp571 = $tmp569 - $tmp570;
frost$core$Int64 $tmp572 = (frost$core$Int64) {$tmp571};
*(&local9) = $tmp572;
// line 266
frost$core$Int64 $tmp573 = (frost$core$Int64) {0};
frost$core$Int64 $tmp574 = *(&local9);
frost$core$Bit $tmp575 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp576 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp573, $tmp574, $tmp575);
frost$core$Int64 $tmp577 = $tmp576.min;
*(&local10) = $tmp577;
frost$core$Int64 $tmp578 = $tmp576.max;
frost$core$Bit $tmp579 = $tmp576.inclusive;
bool $tmp580 = $tmp579.value;
frost$core$Int64 $tmp581 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp582 = frost$core$Int64$convert$R$frost$core$UInt64($tmp581);
if ($tmp580) goto block36; else goto block37;
block36:;
int64_t $tmp583 = $tmp577.value;
int64_t $tmp584 = $tmp578.value;
bool $tmp585 = $tmp583 <= $tmp584;
frost$core$Bit $tmp586 = (frost$core$Bit) {$tmp585};
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block33; else goto block34;
block37:;
int64_t $tmp588 = $tmp577.value;
int64_t $tmp589 = $tmp578.value;
bool $tmp590 = $tmp588 < $tmp589;
frost$core$Bit $tmp591 = (frost$core$Bit) {$tmp590};
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block33; else goto block34;
block33:;
// line 267
frost$core$Char8* $tmp593 = *(&local6);
frost$core$Int64 $tmp594 = *(&local10);
frost$core$Char8* $tmp595 = *(&local6);
frost$core$Int64 $tmp596 = *(&local10);
frost$core$Int64 $tmp597 = *(&local7);
int64_t $tmp598 = $tmp596.value;
int64_t $tmp599 = $tmp597.value;
int64_t $tmp600 = $tmp598 + $tmp599;
frost$core$Int64 $tmp601 = (frost$core$Int64) {$tmp600};
int64_t $tmp602 = $tmp601.value;
frost$core$Char8 $tmp603 = $tmp595[$tmp602];
int64_t $tmp604 = $tmp594.value;
$tmp593[$tmp604] = $tmp603;
goto block35;
block35:;
frost$core$Int64 $tmp605 = *(&local10);
int64_t $tmp606 = $tmp578.value;
int64_t $tmp607 = $tmp605.value;
int64_t $tmp608 = $tmp606 - $tmp607;
frost$core$Int64 $tmp609 = (frost$core$Int64) {$tmp608};
frost$core$UInt64 $tmp610 = frost$core$Int64$convert$R$frost$core$UInt64($tmp609);
if ($tmp580) goto block39; else goto block40;
block39:;
uint64_t $tmp611 = $tmp610.value;
uint64_t $tmp612 = $tmp582.value;
bool $tmp613 = $tmp611 >= $tmp612;
frost$core$Bit $tmp614 = (frost$core$Bit) {$tmp613};
bool $tmp615 = $tmp614.value;
if ($tmp615) goto block38; else goto block34;
block40:;
uint64_t $tmp616 = $tmp610.value;
uint64_t $tmp617 = $tmp582.value;
bool $tmp618 = $tmp616 > $tmp617;
frost$core$Bit $tmp619 = (frost$core$Bit) {$tmp618};
bool $tmp620 = $tmp619.value;
if ($tmp620) goto block38; else goto block34;
block38:;
int64_t $tmp621 = $tmp605.value;
int64_t $tmp622 = $tmp581.value;
int64_t $tmp623 = $tmp621 + $tmp622;
frost$core$Int64 $tmp624 = (frost$core$Int64) {$tmp623};
*(&local10) = $tmp624;
goto block33;
block34:;
// line 269
frost$core$String* $tmp625 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp626 = *(&local6);
frost$core$Int64 $tmp627 = *(&local9);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp625, $tmp626, $tmp627);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
// unreffing REF($316:frost.core.String)
frost$collections$ListView* $tmp628 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
// unreffing digits
*(&local2) = ((frost$collections$ListView*) NULL);
return $tmp625;

}
void frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(frost$collections$List* param0, frost$core$Int64 param1, frost$core$Int64 param2) {

frost$core$Object* local0 = NULL;
// line 291
ITable* $tmp629 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp629->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp629 = $tmp629->next;
}
$fn631 $tmp630 = $tmp629->methods[0];
frost$core$Object* $tmp632 = $tmp630(((frost$collections$ListView*) param0), param1);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp632);
frost$core$Object* $tmp633 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp633);
*(&local0) = $tmp632;
frost$core$Frost$unref$frost$core$Object$Q($tmp632);
// unreffing REF($4:frost.collections.ListView.T)
// line 292
ITable* $tmp634 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp634->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp634 = $tmp634->next;
}
$fn636 $tmp635 = $tmp634->methods[0];
frost$core$Object* $tmp637 = $tmp635(((frost$collections$ListView*) param0), param2);
ITable* $tmp638 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp638->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp638 = $tmp638->next;
}
$fn640 $tmp639 = $tmp638->methods[0];
$tmp639(((frost$collections$ListWriter*) param0), param1, $tmp637);
frost$core$Frost$unref$frost$core$Object$Q($tmp637);
// unreffing REF($21:frost.collections.ListView.T)
// line 293
frost$core$Object* $tmp641 = *(&local0);
ITable* $tmp642 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp642->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp642 = $tmp642->next;
}
$fn644 $tmp643 = $tmp642->methods[0];
$tmp643(((frost$collections$ListWriter*) param0), param2, $tmp641);
frost$core$Object* $tmp645 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp645);
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
int64_t $tmp646 = param1.value;
int64_t $tmp647 = param2.value;
bool $tmp648 = $tmp646 >= $tmp647;
frost$core$Bit $tmp649 = (frost$core$Bit) {$tmp648};
bool $tmp650 = $tmp649.value;
if ($tmp650) goto block1; else goto block2;
block1:;
// line 301
return;
block2:;
// line 303
int64_t $tmp651 = param2.value;
int64_t $tmp652 = param1.value;
int64_t $tmp653 = $tmp651 - $tmp652;
frost$core$Int64 $tmp654 = (frost$core$Int64) {$tmp653};
frost$core$Int64 $tmp655 = (frost$core$Int64) {2};
int64_t $tmp656 = $tmp654.value;
int64_t $tmp657 = $tmp655.value;
int64_t $tmp658 = $tmp656 / $tmp657;
frost$core$Int64 $tmp659 = (frost$core$Int64) {$tmp658};
int64_t $tmp660 = param1.value;
int64_t $tmp661 = $tmp659.value;
int64_t $tmp662 = $tmp660 + $tmp661;
frost$core$Int64 $tmp663 = (frost$core$Int64) {$tmp662};
*(&local0) = $tmp663;
// line 304
frost$core$Int64 $tmp664 = *(&local0);
ITable* $tmp665 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp665->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp665 = $tmp665->next;
}
$fn667 $tmp666 = $tmp665->methods[0];
frost$core$Object* $tmp668 = $tmp666(((frost$collections$ListView*) param0), $tmp664);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp668);
frost$core$Object* $tmp669 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp669);
*(&local1) = $tmp668;
frost$core$Frost$unref$frost$core$Object$Q($tmp668);
// unreffing REF($29:frost.collections.ListView.T)
// line 305
frost$core$Int64 $tmp670 = *(&local0);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, param2, $tmp670);
// line 306
*(&local2) = param1;
// line 307
frost$core$Int64 $tmp671 = (frost$core$Int64) {1};
int64_t $tmp672 = param2.value;
int64_t $tmp673 = $tmp671.value;
int64_t $tmp674 = $tmp672 - $tmp673;
frost$core$Int64 $tmp675 = (frost$core$Int64) {$tmp674};
frost$core$Bit $tmp676 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$Int64$GT $tmp677 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(param1, $tmp675, $tmp676);
frost$core$Int64 $tmp678 = $tmp677.min;
*(&local3) = $tmp678;
frost$core$Int64 $tmp679 = $tmp677.max;
frost$core$Bit $tmp680 = $tmp677.inclusive;
bool $tmp681 = $tmp680.value;
frost$core$Int64 $tmp682 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp683 = frost$core$Int64$convert$R$frost$core$UInt64($tmp682);
if ($tmp681) goto block6; else goto block7;
block6:;
int64_t $tmp684 = $tmp678.value;
int64_t $tmp685 = $tmp679.value;
bool $tmp686 = $tmp684 <= $tmp685;
frost$core$Bit $tmp687 = (frost$core$Bit) {$tmp686};
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block3; else goto block4;
block7:;
int64_t $tmp689 = $tmp678.value;
int64_t $tmp690 = $tmp679.value;
bool $tmp691 = $tmp689 < $tmp690;
frost$core$Bit $tmp692 = (frost$core$Bit) {$tmp691};
bool $tmp693 = $tmp692.value;
if ($tmp693) goto block3; else goto block4;
block3:;
// line 308
frost$core$Int64 $tmp694 = *(&local3);
ITable* $tmp695 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp695->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp695 = $tmp695->next;
}
$fn697 $tmp696 = $tmp695->methods[0];
frost$core$Object* $tmp698 = $tmp696(((frost$collections$ListView*) param0), $tmp694);
frost$core$Object* $tmp699 = *(&local1);
frost$core$Int8** $tmp700 = &param3->pointer;
frost$core$Int8* $tmp701 = *$tmp700;
frost$core$Object** $tmp702 = &param3->target;
frost$core$Object* $tmp703 = *$tmp702;
bool $tmp704 = $tmp703 != ((frost$core$Object*) NULL);
if ($tmp704) goto block10; else goto block11;
block11:;
frost$core$Bit $tmp706 = (($fn705) $tmp701)($tmp698, $tmp699);
*(&local4) = $tmp706;
goto block12;
block10:;
frost$core$Bit $tmp708 = (($fn707) $tmp701)($tmp703, $tmp698, $tmp699);
*(&local4) = $tmp708;
goto block12;
block12:;
frost$core$Bit $tmp709 = *(&local4);
frost$core$Bit $tmp710 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp709);
bool $tmp711 = $tmp710.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp698);
// unreffing REF($80:frost.collections.ListView.T)
if ($tmp711) goto block8; else goto block9;
block8:;
// line 309
frost$core$Int64 $tmp712 = *(&local3);
frost$core$Int64 $tmp713 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp712, $tmp713);
// line 310
frost$core$Int64 $tmp714 = *(&local2);
frost$core$Int64 $tmp715 = (frost$core$Int64) {1};
int64_t $tmp716 = $tmp714.value;
int64_t $tmp717 = $tmp715.value;
int64_t $tmp718 = $tmp716 + $tmp717;
frost$core$Int64 $tmp719 = (frost$core$Int64) {$tmp718};
*(&local2) = $tmp719;
goto block9;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp720 = *(&local3);
int64_t $tmp721 = $tmp679.value;
int64_t $tmp722 = $tmp720.value;
int64_t $tmp723 = $tmp721 - $tmp722;
frost$core$Int64 $tmp724 = (frost$core$Int64) {$tmp723};
frost$core$UInt64 $tmp725 = frost$core$Int64$convert$R$frost$core$UInt64($tmp724);
if ($tmp681) goto block14; else goto block15;
block14:;
uint64_t $tmp726 = $tmp725.value;
uint64_t $tmp727 = $tmp683.value;
bool $tmp728 = $tmp726 >= $tmp727;
frost$core$Bit $tmp729 = (frost$core$Bit) {$tmp728};
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block13; else goto block4;
block15:;
uint64_t $tmp731 = $tmp725.value;
uint64_t $tmp732 = $tmp683.value;
bool $tmp733 = $tmp731 > $tmp732;
frost$core$Bit $tmp734 = (frost$core$Bit) {$tmp733};
bool $tmp735 = $tmp734.value;
if ($tmp735) goto block13; else goto block4;
block13:;
int64_t $tmp736 = $tmp720.value;
int64_t $tmp737 = $tmp682.value;
int64_t $tmp738 = $tmp736 + $tmp737;
frost$core$Int64 $tmp739 = (frost$core$Int64) {$tmp738};
*(&local3) = $tmp739;
goto block3;
block4:;
// line 313
frost$core$Int64 $tmp740 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp740, param2);
// line 314
frost$core$Int64 $tmp741 = *(&local2);
frost$core$Int64 $tmp742 = (frost$core$Int64) {1};
int64_t $tmp743 = $tmp741.value;
int64_t $tmp744 = $tmp742.value;
int64_t $tmp745 = $tmp743 - $tmp744;
frost$core$Int64 $tmp746 = (frost$core$Int64) {$tmp745};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, param1, $tmp746, param3);
// line 315
frost$core$Int64 $tmp747 = *(&local2);
frost$core$Int64 $tmp748 = (frost$core$Int64) {1};
int64_t $tmp749 = $tmp747.value;
int64_t $tmp750 = $tmp748.value;
int64_t $tmp751 = $tmp749 + $tmp750;
frost$core$Int64 $tmp752 = (frost$core$Int64) {$tmp751};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, $tmp752, param2, param3);
frost$core$Object* $tmp753 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp753);
// unreffing pivot
*(&local1) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$cleanup(frost$core$Frost* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp754 = &param0->allocations;
frost$collections$HashMap* $tmp755 = *$tmp754;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
frost$collections$HashMap** $tmp756 = &param0->traces;
frost$collections$HashMap* $tmp757 = *$tmp756;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
return;

}

