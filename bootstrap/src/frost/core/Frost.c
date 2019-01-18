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

typedef frost$collections$Iterator* (*$fn99)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn103)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn108)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn149)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn153)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn158)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn211)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn226)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn301)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn438)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Object* (*$fn520)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn629)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn634)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn638)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef void (*$fn642)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef frost$core$Object* (*$fn665)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn695)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn703)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn705)(frost$core$Object*, frost$core$Object*, frost$core$Object*);

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
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, -6495590796473870699, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, -6495590796473870699, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x2e\x61\x6c\x69\x67\x6e\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x73\x70\x65\x63\x69\x66\x69\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 126, -5104317510844427350, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static frost$core$String $s486 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 8772831143845743696, NULL };

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
frost$core$String* $tmp127 = frost$core$String$convert$R$frost$core$String($tmp126);
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
frost$core$String* $tmp162 = frost$core$String$convert$R$frost$core$String($tmp161);
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

// line 105
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
// unreffing REF($8:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
// unreffing REF($6:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// unreffing REF($4:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
// unreffing REF($1:frost.io.OutputStream)
// line 106
frost$core$System$crash();
return;

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$String* param2) {

// line 111
frost$io$OutputStream* $tmp213 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp214 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s215, param0);
frost$core$String* $tmp216 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp214, &$s217);
frost$core$Int64$wrapper* $tmp218;
$tmp218 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp218->value = param1;
frost$core$String* $tmp219 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp216, ((frost$core$Object*) $tmp218));
frost$core$String* $tmp220 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp219, &$s221);
frost$core$String* $tmp222 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp220, param2);
frost$core$String* $tmp223 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp222, &$s224);
$fn226 $tmp225 = ($fn226) $tmp213->$class->vtable[19];
frost$core$Error* $tmp227 = $tmp225($tmp213, $tmp223);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
// unreffing REF($10:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
// unreffing REF($6:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
// unreffing REF($4:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
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
frost$core$Int32 $tmp228 = (frost$core$Int32) {48};
frost$core$Char32 $tmp229 = frost$core$Char32$init$frost$core$Int32($tmp228);
frost$core$Bit $tmp230 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp229);
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block3; else goto block4;
block3:;
frost$core$Int32 $tmp232 = (frost$core$Int32) {57};
frost$core$Char32 $tmp233 = frost$core$Char32$init$frost$core$Int32($tmp232);
frost$core$Bit $tmp234 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp233);
*(&local0) = $tmp234;
goto block5;
block4:;
*(&local0) = $tmp230;
goto block5;
block5:;
frost$core$Bit $tmp235 = *(&local0);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block1; else goto block2;
block1:;
// line 118
frost$core$UInt64 $tmp237 = frost$core$Char32$convert$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp238 = (frost$core$UInt8) {48};
frost$core$Char8 $tmp239 = frost$core$Char8$init$frost$core$UInt8($tmp238);
frost$core$UInt64 $tmp240 = frost$core$Char8$convert$R$frost$core$UInt64($tmp239);
uint64_t $tmp241 = $tmp237.value;
uint64_t $tmp242 = $tmp240.value;
uint64_t $tmp243 = $tmp241 - $tmp242;
frost$core$UInt64 $tmp244 = (frost$core$UInt64) {$tmp243};
return ((frost$core$UInt64$nullable) { $tmp244, true });
block2:;
// line 120
frost$core$Int32 $tmp245 = (frost$core$Int32) {65};
frost$core$Char32 $tmp246 = frost$core$Char32$init$frost$core$Int32($tmp245);
frost$core$Bit $tmp247 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp246);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block8; else goto block9;
block8:;
frost$core$Int32 $tmp249 = (frost$core$Int32) {90};
frost$core$Char32 $tmp250 = frost$core$Char32$init$frost$core$Int32($tmp249);
frost$core$Bit $tmp251 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp250);
*(&local1) = $tmp251;
goto block10;
block9:;
*(&local1) = $tmp247;
goto block10;
block10:;
frost$core$Bit $tmp252 = *(&local1);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block6; else goto block7;
block6:;
// line 121
frost$core$UInt64 $tmp254 = frost$core$Char32$convert$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp255 = (frost$core$UInt8) {65};
frost$core$Char8 $tmp256 = frost$core$Char8$init$frost$core$UInt8($tmp255);
frost$core$UInt64 $tmp257 = frost$core$Char8$convert$R$frost$core$UInt64($tmp256);
uint64_t $tmp258 = $tmp254.value;
uint64_t $tmp259 = $tmp257.value;
uint64_t $tmp260 = $tmp258 - $tmp259;
frost$core$UInt64 $tmp261 = (frost$core$UInt64) {$tmp260};
frost$core$UInt64 $tmp262 = (frost$core$UInt64) {10};
uint64_t $tmp263 = $tmp261.value;
uint64_t $tmp264 = $tmp262.value;
uint64_t $tmp265 = $tmp263 + $tmp264;
frost$core$UInt64 $tmp266 = (frost$core$UInt64) {$tmp265};
return ((frost$core$UInt64$nullable) { $tmp266, true });
block7:;
// line 123
frost$core$Int32 $tmp267 = (frost$core$Int32) {97};
frost$core$Char32 $tmp268 = frost$core$Char32$init$frost$core$Int32($tmp267);
frost$core$Bit $tmp269 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp268);
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block13; else goto block14;
block13:;
frost$core$Int32 $tmp271 = (frost$core$Int32) {122};
frost$core$Char32 $tmp272 = frost$core$Char32$init$frost$core$Int32($tmp271);
frost$core$Bit $tmp273 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp272);
*(&local2) = $tmp273;
goto block15;
block14:;
*(&local2) = $tmp269;
goto block15;
block15:;
frost$core$Bit $tmp274 = *(&local2);
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block11; else goto block12;
block11:;
// line 124
frost$core$UInt64 $tmp276 = frost$core$Char32$convert$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp277 = (frost$core$UInt8) {97};
frost$core$Char8 $tmp278 = frost$core$Char8$init$frost$core$UInt8($tmp277);
frost$core$UInt64 $tmp279 = frost$core$Char8$convert$R$frost$core$UInt64($tmp278);
uint64_t $tmp280 = $tmp276.value;
uint64_t $tmp281 = $tmp279.value;
uint64_t $tmp282 = $tmp280 - $tmp281;
frost$core$UInt64 $tmp283 = (frost$core$UInt64) {$tmp282};
frost$core$UInt64 $tmp284 = (frost$core$UInt64) {10};
uint64_t $tmp285 = $tmp283.value;
uint64_t $tmp286 = $tmp284.value;
uint64_t $tmp287 = $tmp285 + $tmp286;
frost$core$UInt64 $tmp288 = (frost$core$UInt64) {$tmp287};
return ((frost$core$UInt64$nullable) { $tmp288, true });
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
frost$core$Bit $tmp289 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s290);
bool $tmp291 = $tmp289.value;
if ($tmp291) goto block1; else goto block2;
block1:;
// line 135
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 137
frost$core$UInt64 $tmp292 = (frost$core$UInt64) {0};
*(&local0) = $tmp292;
// line 138
frost$core$UInt64 $tmp293 = frost$core$Int64$convert$R$frost$core$UInt64(param1);
*(&local1) = $tmp293;
// line 139
frost$core$String$Index $tmp294 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local2) = $tmp294;
// line 140
goto block3;
block3:;
frost$core$String$Index $tmp295 = *(&local2);
frost$core$String$Index$wrapper* $tmp296;
$tmp296 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp296->value = $tmp295;
frost$core$String$Index $tmp297 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$wrapper* $tmp298;
$tmp298 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp298->value = $tmp297;
ITable* $tmp299 = ((frost$core$Equatable*) $tmp296)->$class->itable;
while ($tmp299->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp299 = $tmp299->next;
}
$fn301 $tmp300 = $tmp299->methods[1];
frost$core$Bit $tmp302 = $tmp300(((frost$core$Equatable*) $tmp296), ((frost$core$Equatable*) $tmp298));
bool $tmp303 = $tmp302.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp298)));
// unreffing REF($21:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp296)));
// unreffing REF($18:frost.core.Equatable<frost.core.String.Index>)
if ($tmp303) goto block4; else goto block5;
block4:;
// line 141
frost$core$String$Index $tmp304 = *(&local2);
frost$core$Char32 $tmp305 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp304);
frost$core$UInt64$nullable $tmp306 = frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q($tmp305);
*(&local3) = $tmp306;
// line 142
frost$core$UInt64$nullable $tmp307 = *(&local3);
frost$core$Bit $tmp308 = frost$core$Bit$init$builtin_bit(!$tmp307.nonnull);
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block8; else goto block9;
block8:;
*(&local4) = $tmp308;
goto block10;
block9:;
frost$core$UInt64$nullable $tmp310 = *(&local3);
frost$core$Bit $tmp311 = frost$core$Bit$init$builtin_bit($tmp310.nonnull);
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp313 = (frost$core$Int64) {142};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s314, $tmp313, &$s315);
abort(); // unreachable
block11:;
frost$core$UInt64 $tmp316 = *(&local1);
uint64_t $tmp317 = ((frost$core$UInt64) $tmp310.value).value;
uint64_t $tmp318 = $tmp316.value;
bool $tmp319 = $tmp317 >= $tmp318;
frost$core$Bit $tmp320 = (frost$core$Bit) {$tmp319};
*(&local4) = $tmp320;
goto block10;
block10:;
frost$core$Bit $tmp321 = *(&local4);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block6; else goto block7;
block6:;
// line 143
return ((frost$core$UInt64$nullable) { .nonnull = false });
block7:;
// line 145
frost$core$UInt64 $tmp323 = *(&local0);
frost$core$UInt64 $tmp324 = *(&local1);
uint64_t $tmp325 = $tmp323.value;
uint64_t $tmp326 = $tmp324.value;
uint64_t $tmp327 = $tmp325 * $tmp326;
frost$core$UInt64 $tmp328 = (frost$core$UInt64) {$tmp327};
frost$core$UInt64$nullable $tmp329 = *(&local3);
frost$core$Bit $tmp330 = frost$core$Bit$init$builtin_bit($tmp329.nonnull);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp332 = (frost$core$Int64) {145};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s333, $tmp332, &$s334);
abort(); // unreachable
block13:;
uint64_t $tmp335 = $tmp328.value;
uint64_t $tmp336 = ((frost$core$UInt64) $tmp329.value).value;
uint64_t $tmp337 = $tmp335 + $tmp336;
frost$core$UInt64 $tmp338 = (frost$core$UInt64) {$tmp337};
*(&local0) = $tmp338;
// line 146
frost$core$String$Index $tmp339 = *(&local2);
frost$core$String$Index $tmp340 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp339);
*(&local2) = $tmp340;
goto block3;
block5:;
// line 148
frost$core$UInt64 $tmp341 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp341, true });

}
frost$core$String* frost$core$Frost$align$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$Int64 local1;
frost$core$Char32 local2;
// line 174
frost$core$Int64 $tmp342 = frost$core$String$get_length$R$frost$core$Int64(param1);
frost$core$Int64 $tmp343 = (frost$core$Int64) {2};
int64_t $tmp344 = $tmp342.value;
int64_t $tmp345 = $tmp343.value;
bool $tmp346 = $tmp344 >= $tmp345;
frost$core$Bit $tmp347 = (frost$core$Bit) {$tmp346};
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp349 = (frost$core$Int64) {174};
frost$core$String* $tmp350 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s351, param1);
frost$core$String* $tmp352 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp350, &$s353);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s354, $tmp349, $tmp352);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
// unreffing REF($11:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
// unreffing REF($10:frost.core.String)
abort(); // unreachable
block1:;
// line 175
frost$core$String$Index $tmp355 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$String$Index $tmp356 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp355);
*(&local0) = $tmp356;
// line 176
frost$core$String$Index $tmp357 = *(&local0);
frost$core$Char32 $tmp358 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp357);
frost$core$Int32 $tmp359 = (frost$core$Int32) {60};
frost$core$Char32 $tmp360 = frost$core$Char32$init$frost$core$Int32($tmp359);
frost$core$Bit $tmp361 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp358, $tmp360);
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block4; else goto block5;
block5:;
frost$core$Int32 $tmp363 = (frost$core$Int32) {94};
frost$core$Char32 $tmp364 = frost$core$Char32$init$frost$core$Int32($tmp363);
frost$core$Bit $tmp365 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp358, $tmp364);
bool $tmp366 = $tmp365.value;
if ($tmp366) goto block4; else goto block6;
block6:;
frost$core$Int32 $tmp367 = (frost$core$Int32) {62};
frost$core$Char32 $tmp368 = frost$core$Char32$init$frost$core$Int32($tmp367);
frost$core$Bit $tmp369 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp358, $tmp368);
bool $tmp370 = $tmp369.value;
if ($tmp370) goto block4; else goto block7;
block4:;
goto block3;
block7:;
// line 181
frost$core$String$Index $tmp371 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local0) = $tmp371;
goto block3;
block3:;
// line 184
frost$core$String$Index $tmp372 = *(&local0);
frost$core$String$Index $tmp373 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp372);
frost$core$Bit $tmp374 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp375 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp373, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp374);
frost$core$String* $tmp376 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp375);
frost$core$Int64$nullable $tmp377 = frost$core$String$convert$R$frost$core$Int64$Q($tmp376);
frost$core$Bit $tmp378 = frost$core$Bit$init$builtin_bit($tmp377.nonnull);
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp380 = (frost$core$Int64) {184};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s381, $tmp380, &$s382);
abort(); // unreachable
block8:;
*(&local1) = ((frost$core$Int64) $tmp377.value);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
// unreffing REF($53:frost.core.String)
// line 185
// line 186
frost$core$String$Index $tmp383 = *(&local0);
frost$core$String$Index $tmp384 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$Bit $tmp385 = frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit($tmp383, $tmp384);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block10; else goto block12;
block10:;
// line 187
frost$core$Int32 $tmp387 = (frost$core$Int32) {32};
frost$core$Char32 $tmp388 = frost$core$Char32$init$frost$core$Int32($tmp387);
*(&local2) = $tmp388;
goto block11;
block12:;
// line 1
// line 190
frost$core$String$Index $tmp389 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$Char32 $tmp390 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp389);
*(&local2) = $tmp390;
goto block11;
block11:;
// line 192
frost$core$String$Index $tmp391 = *(&local0);
frost$core$Char32 $tmp392 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp391);
frost$core$Int32 $tmp393 = (frost$core$Int32) {60};
frost$core$Char32 $tmp394 = frost$core$Char32$init$frost$core$Int32($tmp393);
frost$core$Bit $tmp395 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp392, $tmp394);
bool $tmp396 = $tmp395.value;
if ($tmp396) goto block14; else goto block15;
block14:;
// line 193
frost$core$Int64 $tmp397 = *(&local1);
frost$core$Char32 $tmp398 = *(&local2);
frost$core$String* $tmp399 = frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, $tmp397, $tmp398);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
// unreffing REF($96:frost.core.String)
return $tmp399;
block15:;
frost$core$Int32 $tmp400 = (frost$core$Int32) {94};
frost$core$Char32 $tmp401 = frost$core$Char32$init$frost$core$Int32($tmp400);
frost$core$Bit $tmp402 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp392, $tmp401);
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block16; else goto block17;
block16:;
// line 194
frost$core$Int64 $tmp404 = *(&local1);
frost$core$Char32 $tmp405 = *(&local2);
frost$core$String* $tmp406 = frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, $tmp404, $tmp405);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// unreffing REF($111:frost.core.String)
return $tmp406;
block17:;
frost$core$Int32 $tmp407 = (frost$core$Int32) {62};
frost$core$Char32 $tmp408 = frost$core$Char32$init$frost$core$Int32($tmp407);
frost$core$Bit $tmp409 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp392, $tmp408);
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block18; else goto block19;
block18:;
// line 195
frost$core$Int64 $tmp411 = *(&local1);
frost$core$Char32 $tmp412 = *(&local2);
frost$core$String* $tmp413 = frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, $tmp411, $tmp412);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
// unreffing REF($126:frost.core.String)
return $tmp413;
block19:;
// line 196
frost$core$Bit $tmp414 = frost$core$Bit$init$builtin_bit(false);
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp416 = (frost$core$Int64) {196};
frost$core$String* $tmp417 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s418, param1);
frost$core$String* $tmp419 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp417, &$s420);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s421, $tmp416, $tmp419);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
// unreffing REF($139:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
// unreffing REF($138:frost.core.String)
abort(); // unreachable
block20:;
goto block13;
block13:;
frost$core$Bit $tmp422 = frost$core$Bit$init$builtin_bit(false);
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp424 = (frost$core$Int64) {173};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s425, $tmp424, &$s426);
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
// line 210
frost$core$String$Index $tmp427 = frost$core$String$get_start$R$frost$core$String$Index(param3);
*(&local0) = $tmp427;
// line 211
frost$core$UInt64 $tmp428 = (frost$core$UInt64) {10};
*(&local1) = $tmp428;
// line 212
frost$collections$ListView* $tmp429 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s430);
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$collections$ListView* $tmp431 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
*(&local2) = $tmp429;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
// unreffing REF($7:frost.collections.ListView<frost.core.Char8>)
// line 213
frost$core$String$Index $tmp432 = *(&local0);
frost$core$String$Index$wrapper* $tmp433;
$tmp433 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp433->value = $tmp432;
frost$core$String$Index $tmp434 = frost$core$String$get_end$R$frost$core$String$Index(param3);
frost$core$String$Index$wrapper* $tmp435;
$tmp435 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp435->value = $tmp434;
ITable* $tmp436 = ((frost$core$Comparable*) $tmp433)->$class->itable;
while ($tmp436->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp436 = $tmp436->next;
}
$fn438 $tmp437 = $tmp436->methods[1];
frost$core$Bit $tmp439 = $tmp437(((frost$core$Comparable*) $tmp433), ((frost$core$Comparable*) $tmp435));
bool $tmp440 = $tmp439.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp435)));
// unreffing REF($23:frost.core.Comparable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp433)));
// unreffing REF($20:frost.core.Comparable<frost.core.String.Index>)
if ($tmp440) goto block1; else goto block2;
block1:;
// line 214
frost$core$String$Index $tmp441 = *(&local0);
frost$core$Char32 $tmp442 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param3, $tmp441);
frost$core$Int32 $tmp443 = (frost$core$Int32) {98};
frost$core$Char32 $tmp444 = frost$core$Char32$init$frost$core$Int32($tmp443);
frost$core$Bit $tmp445 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp442, $tmp444);
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block4; else goto block5;
block5:;
frost$core$Int32 $tmp447 = (frost$core$Int32) {66};
frost$core$Char32 $tmp448 = frost$core$Char32$init$frost$core$Int32($tmp447);
frost$core$Bit $tmp449 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp442, $tmp448);
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block4; else goto block6;
block4:;
// line 216
frost$core$UInt64 $tmp451 = (frost$core$UInt64) {2};
*(&local1) = $tmp451;
goto block3;
block6:;
frost$core$Int32 $tmp452 = (frost$core$Int32) {111};
frost$core$Char32 $tmp453 = frost$core$Char32$init$frost$core$Int32($tmp452);
frost$core$Bit $tmp454 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp442, $tmp453);
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block7; else goto block8;
block8:;
frost$core$Int32 $tmp456 = (frost$core$Int32) {79};
frost$core$Char32 $tmp457 = frost$core$Char32$init$frost$core$Int32($tmp456);
frost$core$Bit $tmp458 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp442, $tmp457);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block7; else goto block9;
block7:;
// line 219
frost$core$UInt64 $tmp460 = (frost$core$UInt64) {8};
*(&local1) = $tmp460;
goto block3;
block9:;
frost$core$Int32 $tmp461 = (frost$core$Int32) {100};
frost$core$Char32 $tmp462 = frost$core$Char32$init$frost$core$Int32($tmp461);
frost$core$Bit $tmp463 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp442, $tmp462);
bool $tmp464 = $tmp463.value;
if ($tmp464) goto block10; else goto block11;
block11:;
frost$core$Int32 $tmp465 = (frost$core$Int32) {68};
frost$core$Char32 $tmp466 = frost$core$Char32$init$frost$core$Int32($tmp465);
frost$core$Bit $tmp467 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp442, $tmp466);
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block10; else goto block12;
block10:;
// line 222
frost$core$UInt64 $tmp469 = (frost$core$UInt64) {10};
*(&local1) = $tmp469;
goto block3;
block12:;
frost$core$Int32 $tmp470 = (frost$core$Int32) {120};
frost$core$Char32 $tmp471 = frost$core$Char32$init$frost$core$Int32($tmp470);
frost$core$Bit $tmp472 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp442, $tmp471);
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block13; else goto block14;
block13:;
// line 225
frost$core$UInt64 $tmp474 = (frost$core$UInt64) {16};
*(&local1) = $tmp474;
goto block3;
block14:;
frost$core$Int32 $tmp475 = (frost$core$Int32) {88};
frost$core$Char32 $tmp476 = frost$core$Char32$init$frost$core$Int32($tmp475);
frost$core$Bit $tmp477 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp442, $tmp476);
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block15; else goto block16;
block15:;
// line 228
frost$core$UInt64 $tmp479 = (frost$core$UInt64) {16};
*(&local1) = $tmp479;
// line 229
frost$collections$ListView* $tmp480 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s481);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$collections$ListView* $tmp482 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
*(&local2) = $tmp480;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
// unreffing REF($97:frost.collections.ListView<frost.core.Char8>)
goto block3;
block16:;
// line 232
frost$core$Bit $tmp483 = frost$core$Bit$init$builtin_bit(false);
bool $tmp484 = $tmp483.value;
if ($tmp484) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp485 = (frost$core$Int64) {232};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s486, $tmp485, &$s487);
abort(); // unreachable
block17:;
goto block3;
block3:;
goto block2;
block2:;
// line 236
// line 237
bool $tmp488 = param0.value;
if ($tmp488) goto block21; else goto block22;
block21:;
frost$core$UInt64 $tmp489 = *(&local1);
frost$core$UInt64 $tmp490 = (frost$core$UInt64) {10};
uint64_t $tmp491 = $tmp489.value;
uint64_t $tmp492 = $tmp490.value;
bool $tmp493 = $tmp491 != $tmp492;
frost$core$Bit $tmp494 = (frost$core$Bit) {$tmp493};
*(&local4) = $tmp494;
goto block23;
block22:;
*(&local4) = param0;
goto block23;
block23:;
frost$core$Bit $tmp495 = *(&local4);
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block19; else goto block24;
block19:;
// line 238
frost$core$Int64 $tmp497 = frost$core$UInt64$convert$R$frost$core$Int64(param1);
frost$core$Int64 $tmp498 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp497);
frost$core$UInt64 $tmp499 = frost$core$Int64$convert$R$frost$core$UInt64($tmp498);
frost$core$UInt64 $tmp500 = frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64($tmp499, param2);
*(&local3) = $tmp500;
goto block20;
block24:;
// line 1
// line 241
*(&local3) = param1;
goto block20;
block20:;
// line 243
frost$core$Int64 $tmp501 = (frost$core$Int64) {64};
*(&local5) = $tmp501;
// line 244
frost$core$Int64 $tmp502 = *(&local5);
int64_t $tmp503 = $tmp502.value;
frost$core$Char8* $tmp504 = ((frost$core$Char8*) frostAlloc($tmp503 * 1));
*(&local6) = $tmp504;
// line 245
frost$core$Int64 $tmp505 = *(&local5);
frost$core$Int64 $tmp506 = (frost$core$Int64) {1};
int64_t $tmp507 = $tmp505.value;
int64_t $tmp508 = $tmp506.value;
int64_t $tmp509 = $tmp507 - $tmp508;
frost$core$Int64 $tmp510 = (frost$core$Int64) {$tmp509};
*(&local7) = $tmp510;
// line 246
goto block25;
block25:;
// line 247
frost$core$Char8* $tmp511 = *(&local6);
frost$core$Int64 $tmp512 = *(&local7);
frost$collections$ListView* $tmp513 = *(&local2);
frost$core$UInt64 $tmp514 = *(&local3);
frost$core$UInt64 $tmp515 = *(&local1);
frost$core$UInt64 $tmp516 = frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64($tmp514, $tmp515);
frost$core$Int64 $tmp517 = frost$core$UInt64$convert$R$frost$core$Int64($tmp516);
ITable* $tmp518 = $tmp513->$class->itable;
while ($tmp518->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp518 = $tmp518->next;
}
$fn520 $tmp519 = $tmp518->methods[0];
frost$core$Object* $tmp521 = $tmp519($tmp513, $tmp517);
int64_t $tmp522 = $tmp512.value;
$tmp511[$tmp522] = ((frost$core$Char8$wrapper*) $tmp521)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp521);
// unreffing REF($173:frost.collections.ListView.T)
// line 248
frost$core$UInt64 $tmp523 = *(&local3);
frost$core$UInt64 $tmp524 = *(&local1);
uint64_t $tmp525 = $tmp523.value;
uint64_t $tmp526 = $tmp524.value;
uint64_t $tmp527 = $tmp525 / $tmp526;
frost$core$UInt64 $tmp528 = (frost$core$UInt64) {$tmp527};
*(&local3) = $tmp528;
// line 249
frost$core$Int64 $tmp529 = *(&local7);
frost$core$Int64 $tmp530 = (frost$core$Int64) {1};
int64_t $tmp531 = $tmp529.value;
int64_t $tmp532 = $tmp530.value;
int64_t $tmp533 = $tmp531 - $tmp532;
frost$core$Int64 $tmp534 = (frost$core$Int64) {$tmp533};
*(&local7) = $tmp534;
goto block26;
block26:;
frost$core$UInt64 $tmp535 = *(&local3);
frost$core$UInt64 $tmp536 = (frost$core$UInt64) {0};
uint64_t $tmp537 = $tmp535.value;
uint64_t $tmp538 = $tmp536.value;
bool $tmp539 = $tmp537 > $tmp538;
frost$core$Bit $tmp540 = (frost$core$Bit) {$tmp539};
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block25; else goto block27;
block27:;
// line 252
bool $tmp542 = param0.value;
if ($tmp542) goto block30; else goto block31;
block30:;
frost$core$UInt64 $tmp543 = *(&local1);
frost$core$UInt64 $tmp544 = (frost$core$UInt64) {10};
frost$core$Bit $tmp545 = frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit($tmp543, $tmp544);
*(&local8) = $tmp545;
goto block32;
block31:;
*(&local8) = param0;
goto block32;
block32:;
frost$core$Bit $tmp546 = *(&local8);
bool $tmp547 = $tmp546.value;
if ($tmp547) goto block28; else goto block29;
block28:;
// line 253
frost$core$Char8* $tmp548 = *(&local6);
frost$core$Int64 $tmp549 = *(&local7);
frost$core$UInt8 $tmp550 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp551 = frost$core$Char8$init$frost$core$UInt8($tmp550);
int64_t $tmp552 = $tmp549.value;
$tmp548[$tmp552] = $tmp551;
// line 254
frost$core$Int64 $tmp553 = *(&local7);
frost$core$Int64 $tmp554 = (frost$core$Int64) {1};
int64_t $tmp555 = $tmp553.value;
int64_t $tmp556 = $tmp554.value;
int64_t $tmp557 = $tmp555 - $tmp556;
frost$core$Int64 $tmp558 = (frost$core$Int64) {$tmp557};
*(&local7) = $tmp558;
goto block29;
block29:;
// line 256
frost$core$Int64 $tmp559 = *(&local7);
frost$core$Int64 $tmp560 = (frost$core$Int64) {1};
int64_t $tmp561 = $tmp559.value;
int64_t $tmp562 = $tmp560.value;
int64_t $tmp563 = $tmp561 + $tmp562;
frost$core$Int64 $tmp564 = (frost$core$Int64) {$tmp563};
*(&local7) = $tmp564;
// line 257
frost$core$Int64 $tmp565 = *(&local5);
frost$core$Int64 $tmp566 = *(&local7);
int64_t $tmp567 = $tmp565.value;
int64_t $tmp568 = $tmp566.value;
int64_t $tmp569 = $tmp567 - $tmp568;
frost$core$Int64 $tmp570 = (frost$core$Int64) {$tmp569};
*(&local9) = $tmp570;
// line 258
frost$core$Int64 $tmp571 = (frost$core$Int64) {0};
frost$core$Int64 $tmp572 = *(&local9);
frost$core$Bit $tmp573 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp574 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp571, $tmp572, $tmp573);
frost$core$Int64 $tmp575 = $tmp574.min;
*(&local10) = $tmp575;
frost$core$Int64 $tmp576 = $tmp574.max;
frost$core$Bit $tmp577 = $tmp574.inclusive;
bool $tmp578 = $tmp577.value;
frost$core$Int64 $tmp579 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp580 = frost$core$Int64$convert$R$frost$core$UInt64($tmp579);
if ($tmp578) goto block36; else goto block37;
block36:;
int64_t $tmp581 = $tmp575.value;
int64_t $tmp582 = $tmp576.value;
bool $tmp583 = $tmp581 <= $tmp582;
frost$core$Bit $tmp584 = (frost$core$Bit) {$tmp583};
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block33; else goto block34;
block37:;
int64_t $tmp586 = $tmp575.value;
int64_t $tmp587 = $tmp576.value;
bool $tmp588 = $tmp586 < $tmp587;
frost$core$Bit $tmp589 = (frost$core$Bit) {$tmp588};
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block33; else goto block34;
block33:;
// line 259
frost$core$Char8* $tmp591 = *(&local6);
frost$core$Int64 $tmp592 = *(&local10);
frost$core$Char8* $tmp593 = *(&local6);
frost$core$Int64 $tmp594 = *(&local10);
frost$core$Int64 $tmp595 = *(&local7);
int64_t $tmp596 = $tmp594.value;
int64_t $tmp597 = $tmp595.value;
int64_t $tmp598 = $tmp596 + $tmp597;
frost$core$Int64 $tmp599 = (frost$core$Int64) {$tmp598};
int64_t $tmp600 = $tmp599.value;
frost$core$Char8 $tmp601 = $tmp593[$tmp600];
int64_t $tmp602 = $tmp592.value;
$tmp591[$tmp602] = $tmp601;
goto block35;
block35:;
frost$core$Int64 $tmp603 = *(&local10);
int64_t $tmp604 = $tmp576.value;
int64_t $tmp605 = $tmp603.value;
int64_t $tmp606 = $tmp604 - $tmp605;
frost$core$Int64 $tmp607 = (frost$core$Int64) {$tmp606};
frost$core$UInt64 $tmp608 = frost$core$Int64$convert$R$frost$core$UInt64($tmp607);
if ($tmp578) goto block39; else goto block40;
block39:;
uint64_t $tmp609 = $tmp608.value;
uint64_t $tmp610 = $tmp580.value;
bool $tmp611 = $tmp609 >= $tmp610;
frost$core$Bit $tmp612 = (frost$core$Bit) {$tmp611};
bool $tmp613 = $tmp612.value;
if ($tmp613) goto block38; else goto block34;
block40:;
uint64_t $tmp614 = $tmp608.value;
uint64_t $tmp615 = $tmp580.value;
bool $tmp616 = $tmp614 > $tmp615;
frost$core$Bit $tmp617 = (frost$core$Bit) {$tmp616};
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block38; else goto block34;
block38:;
int64_t $tmp619 = $tmp603.value;
int64_t $tmp620 = $tmp579.value;
int64_t $tmp621 = $tmp619 + $tmp620;
frost$core$Int64 $tmp622 = (frost$core$Int64) {$tmp621};
*(&local10) = $tmp622;
goto block33;
block34:;
// line 261
frost$core$String* $tmp623 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp624 = *(&local6);
frost$core$Int64 $tmp625 = *(&local9);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp623, $tmp624, $tmp625);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
// unreffing REF($316:frost.core.String)
frost$collections$ListView* $tmp626 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
// unreffing digits
*(&local2) = ((frost$collections$ListView*) NULL);
return $tmp623;

}
void frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(frost$collections$List* param0, frost$core$Int64 param1, frost$core$Int64 param2) {

frost$core$Object* local0 = NULL;
// line 283
ITable* $tmp627 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp627->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp627 = $tmp627->next;
}
$fn629 $tmp628 = $tmp627->methods[0];
frost$core$Object* $tmp630 = $tmp628(((frost$collections$ListView*) param0), param1);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp630);
frost$core$Object* $tmp631 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp631);
*(&local0) = $tmp630;
frost$core$Frost$unref$frost$core$Object$Q($tmp630);
// unreffing REF($4:frost.collections.ListView.T)
// line 284
ITable* $tmp632 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp632->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp632 = $tmp632->next;
}
$fn634 $tmp633 = $tmp632->methods[0];
frost$core$Object* $tmp635 = $tmp633(((frost$collections$ListView*) param0), param2);
ITable* $tmp636 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp636->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp636 = $tmp636->next;
}
$fn638 $tmp637 = $tmp636->methods[0];
$tmp637(((frost$collections$ListWriter*) param0), param1, $tmp635);
frost$core$Frost$unref$frost$core$Object$Q($tmp635);
// unreffing REF($21:frost.collections.ListView.T)
// line 285
frost$core$Object* $tmp639 = *(&local0);
ITable* $tmp640 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp640->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp640 = $tmp640->next;
}
$fn642 $tmp641 = $tmp640->methods[0];
$tmp641(((frost$collections$ListWriter*) param0), param2, $tmp639);
frost$core$Object* $tmp643 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp643);
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
// line 292
int64_t $tmp644 = param1.value;
int64_t $tmp645 = param2.value;
bool $tmp646 = $tmp644 >= $tmp645;
frost$core$Bit $tmp647 = (frost$core$Bit) {$tmp646};
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block1; else goto block2;
block1:;
// line 293
return;
block2:;
// line 295
int64_t $tmp649 = param2.value;
int64_t $tmp650 = param1.value;
int64_t $tmp651 = $tmp649 - $tmp650;
frost$core$Int64 $tmp652 = (frost$core$Int64) {$tmp651};
frost$core$Int64 $tmp653 = (frost$core$Int64) {2};
int64_t $tmp654 = $tmp652.value;
int64_t $tmp655 = $tmp653.value;
int64_t $tmp656 = $tmp654 / $tmp655;
frost$core$Int64 $tmp657 = (frost$core$Int64) {$tmp656};
int64_t $tmp658 = param1.value;
int64_t $tmp659 = $tmp657.value;
int64_t $tmp660 = $tmp658 + $tmp659;
frost$core$Int64 $tmp661 = (frost$core$Int64) {$tmp660};
*(&local0) = $tmp661;
// line 296
frost$core$Int64 $tmp662 = *(&local0);
ITable* $tmp663 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp663->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp663 = $tmp663->next;
}
$fn665 $tmp664 = $tmp663->methods[0];
frost$core$Object* $tmp666 = $tmp664(((frost$collections$ListView*) param0), $tmp662);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp666);
frost$core$Object* $tmp667 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp667);
*(&local1) = $tmp666;
frost$core$Frost$unref$frost$core$Object$Q($tmp666);
// unreffing REF($29:frost.collections.ListView.T)
// line 297
frost$core$Int64 $tmp668 = *(&local0);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, param2, $tmp668);
// line 298
*(&local2) = param1;
// line 299
frost$core$Int64 $tmp669 = (frost$core$Int64) {1};
int64_t $tmp670 = param2.value;
int64_t $tmp671 = $tmp669.value;
int64_t $tmp672 = $tmp670 - $tmp671;
frost$core$Int64 $tmp673 = (frost$core$Int64) {$tmp672};
frost$core$Bit $tmp674 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$Int64$GT $tmp675 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(param1, $tmp673, $tmp674);
frost$core$Int64 $tmp676 = $tmp675.min;
*(&local3) = $tmp676;
frost$core$Int64 $tmp677 = $tmp675.max;
frost$core$Bit $tmp678 = $tmp675.inclusive;
bool $tmp679 = $tmp678.value;
frost$core$Int64 $tmp680 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp681 = frost$core$Int64$convert$R$frost$core$UInt64($tmp680);
if ($tmp679) goto block6; else goto block7;
block6:;
int64_t $tmp682 = $tmp676.value;
int64_t $tmp683 = $tmp677.value;
bool $tmp684 = $tmp682 <= $tmp683;
frost$core$Bit $tmp685 = (frost$core$Bit) {$tmp684};
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block3; else goto block4;
block7:;
int64_t $tmp687 = $tmp676.value;
int64_t $tmp688 = $tmp677.value;
bool $tmp689 = $tmp687 < $tmp688;
frost$core$Bit $tmp690 = (frost$core$Bit) {$tmp689};
bool $tmp691 = $tmp690.value;
if ($tmp691) goto block3; else goto block4;
block3:;
// line 300
frost$core$Int64 $tmp692 = *(&local3);
ITable* $tmp693 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp693->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp693 = $tmp693->next;
}
$fn695 $tmp694 = $tmp693->methods[0];
frost$core$Object* $tmp696 = $tmp694(((frost$collections$ListView*) param0), $tmp692);
frost$core$Object* $tmp697 = *(&local1);
frost$core$Int8** $tmp698 = &param3->pointer;
frost$core$Int8* $tmp699 = *$tmp698;
frost$core$Object** $tmp700 = &param3->target;
frost$core$Object* $tmp701 = *$tmp700;
bool $tmp702 = $tmp701 != ((frost$core$Object*) NULL);
if ($tmp702) goto block10; else goto block11;
block11:;
frost$core$Bit $tmp704 = (($fn703) $tmp699)($tmp696, $tmp697);
*(&local4) = $tmp704;
goto block12;
block10:;
frost$core$Bit $tmp706 = (($fn705) $tmp699)($tmp701, $tmp696, $tmp697);
*(&local4) = $tmp706;
goto block12;
block12:;
frost$core$Bit $tmp707 = *(&local4);
frost$core$Bit $tmp708 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp707);
bool $tmp709 = $tmp708.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp696);
// unreffing REF($80:frost.collections.ListView.T)
if ($tmp709) goto block8; else goto block9;
block8:;
// line 301
frost$core$Int64 $tmp710 = *(&local3);
frost$core$Int64 $tmp711 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp710, $tmp711);
// line 302
frost$core$Int64 $tmp712 = *(&local2);
frost$core$Int64 $tmp713 = (frost$core$Int64) {1};
int64_t $tmp714 = $tmp712.value;
int64_t $tmp715 = $tmp713.value;
int64_t $tmp716 = $tmp714 + $tmp715;
frost$core$Int64 $tmp717 = (frost$core$Int64) {$tmp716};
*(&local2) = $tmp717;
goto block9;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp718 = *(&local3);
int64_t $tmp719 = $tmp677.value;
int64_t $tmp720 = $tmp718.value;
int64_t $tmp721 = $tmp719 - $tmp720;
frost$core$Int64 $tmp722 = (frost$core$Int64) {$tmp721};
frost$core$UInt64 $tmp723 = frost$core$Int64$convert$R$frost$core$UInt64($tmp722);
if ($tmp679) goto block14; else goto block15;
block14:;
uint64_t $tmp724 = $tmp723.value;
uint64_t $tmp725 = $tmp681.value;
bool $tmp726 = $tmp724 >= $tmp725;
frost$core$Bit $tmp727 = (frost$core$Bit) {$tmp726};
bool $tmp728 = $tmp727.value;
if ($tmp728) goto block13; else goto block4;
block15:;
uint64_t $tmp729 = $tmp723.value;
uint64_t $tmp730 = $tmp681.value;
bool $tmp731 = $tmp729 > $tmp730;
frost$core$Bit $tmp732 = (frost$core$Bit) {$tmp731};
bool $tmp733 = $tmp732.value;
if ($tmp733) goto block13; else goto block4;
block13:;
int64_t $tmp734 = $tmp718.value;
int64_t $tmp735 = $tmp680.value;
int64_t $tmp736 = $tmp734 + $tmp735;
frost$core$Int64 $tmp737 = (frost$core$Int64) {$tmp736};
*(&local3) = $tmp737;
goto block3;
block4:;
// line 305
frost$core$Int64 $tmp738 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp738, param2);
// line 306
frost$core$Int64 $tmp739 = *(&local2);
frost$core$Int64 $tmp740 = (frost$core$Int64) {1};
int64_t $tmp741 = $tmp739.value;
int64_t $tmp742 = $tmp740.value;
int64_t $tmp743 = $tmp741 - $tmp742;
frost$core$Int64 $tmp744 = (frost$core$Int64) {$tmp743};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, param1, $tmp744, param3);
// line 307
frost$core$Int64 $tmp745 = *(&local2);
frost$core$Int64 $tmp746 = (frost$core$Int64) {1};
int64_t $tmp747 = $tmp745.value;
int64_t $tmp748 = $tmp746.value;
int64_t $tmp749 = $tmp747 + $tmp748;
frost$core$Int64 $tmp750 = (frost$core$Int64) {$tmp749};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, $tmp750, param2, param3);
frost$core$Object* $tmp751 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp751);
// unreffing pivot
*(&local1) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$cleanup(frost$core$Frost* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp752 = &param0->allocations;
frost$collections$HashMap* $tmp753 = *$tmp752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$collections$HashMap** $tmp754 = &param0->traces;
frost$collections$HashMap* $tmp755 = *$tmp754;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
return;

}

