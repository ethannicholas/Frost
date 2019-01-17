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
typedef void (*$fn211)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn225)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn299)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn436)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Object* (*$fn518)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn627)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn632)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn636)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef void (*$fn640)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef frost$core$Object* (*$fn663)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn693)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn701)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn703)(frost$core$Object*, frost$core$Object*, frost$core$Object*);

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
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, -6495590796473870699, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, -6495590796473870699, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x2e\x61\x6c\x69\x67\x6e\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x73\x70\x65\x63\x69\x66\x69\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 126, -5104317510844427350, NULL };
static frost$core$String $s428 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 8772831143845743696, NULL };

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
$tmp210($tmp201, $tmp208);
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
frost$io$OutputStream* $tmp212 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp213 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s214, param0);
frost$core$String* $tmp215 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp213, &$s216);
frost$core$Int64$wrapper* $tmp217;
$tmp217 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp217->value = param1;
frost$core$String* $tmp218 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp215, ((frost$core$Object*) $tmp217));
frost$core$String* $tmp219 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp218, &$s220);
frost$core$String* $tmp221 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp219, param2);
frost$core$String* $tmp222 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp221, &$s223);
$fn225 $tmp224 = ($fn225) $tmp212->$class->vtable[19];
$tmp224($tmp212, $tmp222);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// unreffing REF($6:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// unreffing REF($4:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
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
frost$core$Int32 $tmp226 = (frost$core$Int32) {48};
frost$core$Char32 $tmp227 = frost$core$Char32$init$frost$core$Int32($tmp226);
frost$core$Bit $tmp228 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp227);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block3; else goto block4;
block3:;
frost$core$Int32 $tmp230 = (frost$core$Int32) {57};
frost$core$Char32 $tmp231 = frost$core$Char32$init$frost$core$Int32($tmp230);
frost$core$Bit $tmp232 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp231);
*(&local0) = $tmp232;
goto block5;
block4:;
*(&local0) = $tmp228;
goto block5;
block5:;
frost$core$Bit $tmp233 = *(&local0);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block1; else goto block2;
block1:;
// line 118
frost$core$UInt64 $tmp235 = frost$core$Char32$convert$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp236 = (frost$core$UInt8) {48};
frost$core$Char8 $tmp237 = frost$core$Char8$init$frost$core$UInt8($tmp236);
frost$core$UInt64 $tmp238 = frost$core$Char8$convert$R$frost$core$UInt64($tmp237);
uint64_t $tmp239 = $tmp235.value;
uint64_t $tmp240 = $tmp238.value;
uint64_t $tmp241 = $tmp239 - $tmp240;
frost$core$UInt64 $tmp242 = (frost$core$UInt64) {$tmp241};
return ((frost$core$UInt64$nullable) { $tmp242, true });
block2:;
// line 120
frost$core$Int32 $tmp243 = (frost$core$Int32) {65};
frost$core$Char32 $tmp244 = frost$core$Char32$init$frost$core$Int32($tmp243);
frost$core$Bit $tmp245 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp244);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block8; else goto block9;
block8:;
frost$core$Int32 $tmp247 = (frost$core$Int32) {90};
frost$core$Char32 $tmp248 = frost$core$Char32$init$frost$core$Int32($tmp247);
frost$core$Bit $tmp249 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp248);
*(&local1) = $tmp249;
goto block10;
block9:;
*(&local1) = $tmp245;
goto block10;
block10:;
frost$core$Bit $tmp250 = *(&local1);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block6; else goto block7;
block6:;
// line 121
frost$core$UInt64 $tmp252 = frost$core$Char32$convert$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp253 = (frost$core$UInt8) {65};
frost$core$Char8 $tmp254 = frost$core$Char8$init$frost$core$UInt8($tmp253);
frost$core$UInt64 $tmp255 = frost$core$Char8$convert$R$frost$core$UInt64($tmp254);
uint64_t $tmp256 = $tmp252.value;
uint64_t $tmp257 = $tmp255.value;
uint64_t $tmp258 = $tmp256 - $tmp257;
frost$core$UInt64 $tmp259 = (frost$core$UInt64) {$tmp258};
frost$core$UInt64 $tmp260 = (frost$core$UInt64) {10};
uint64_t $tmp261 = $tmp259.value;
uint64_t $tmp262 = $tmp260.value;
uint64_t $tmp263 = $tmp261 + $tmp262;
frost$core$UInt64 $tmp264 = (frost$core$UInt64) {$tmp263};
return ((frost$core$UInt64$nullable) { $tmp264, true });
block7:;
// line 123
frost$core$Int32 $tmp265 = (frost$core$Int32) {97};
frost$core$Char32 $tmp266 = frost$core$Char32$init$frost$core$Int32($tmp265);
frost$core$Bit $tmp267 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp266);
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block13; else goto block14;
block13:;
frost$core$Int32 $tmp269 = (frost$core$Int32) {122};
frost$core$Char32 $tmp270 = frost$core$Char32$init$frost$core$Int32($tmp269);
frost$core$Bit $tmp271 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp270);
*(&local2) = $tmp271;
goto block15;
block14:;
*(&local2) = $tmp267;
goto block15;
block15:;
frost$core$Bit $tmp272 = *(&local2);
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block11; else goto block12;
block11:;
// line 124
frost$core$UInt64 $tmp274 = frost$core$Char32$convert$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp275 = (frost$core$UInt8) {97};
frost$core$Char8 $tmp276 = frost$core$Char8$init$frost$core$UInt8($tmp275);
frost$core$UInt64 $tmp277 = frost$core$Char8$convert$R$frost$core$UInt64($tmp276);
uint64_t $tmp278 = $tmp274.value;
uint64_t $tmp279 = $tmp277.value;
uint64_t $tmp280 = $tmp278 - $tmp279;
frost$core$UInt64 $tmp281 = (frost$core$UInt64) {$tmp280};
frost$core$UInt64 $tmp282 = (frost$core$UInt64) {10};
uint64_t $tmp283 = $tmp281.value;
uint64_t $tmp284 = $tmp282.value;
uint64_t $tmp285 = $tmp283 + $tmp284;
frost$core$UInt64 $tmp286 = (frost$core$UInt64) {$tmp285};
return ((frost$core$UInt64$nullable) { $tmp286, true });
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
frost$core$Bit $tmp287 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s288);
bool $tmp289 = $tmp287.value;
if ($tmp289) goto block1; else goto block2;
block1:;
// line 135
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 137
frost$core$UInt64 $tmp290 = (frost$core$UInt64) {0};
*(&local0) = $tmp290;
// line 138
frost$core$UInt64 $tmp291 = frost$core$Int64$convert$R$frost$core$UInt64(param1);
*(&local1) = $tmp291;
// line 139
frost$core$String$Index $tmp292 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local2) = $tmp292;
// line 140
goto block3;
block3:;
frost$core$String$Index $tmp293 = *(&local2);
frost$core$String$Index$wrapper* $tmp294;
$tmp294 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp294->value = $tmp293;
frost$core$String$Index $tmp295 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$wrapper* $tmp296;
$tmp296 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp296->value = $tmp295;
ITable* $tmp297 = ((frost$core$Equatable*) $tmp294)->$class->itable;
while ($tmp297->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp297 = $tmp297->next;
}
$fn299 $tmp298 = $tmp297->methods[1];
frost$core$Bit $tmp300 = $tmp298(((frost$core$Equatable*) $tmp294), ((frost$core$Equatable*) $tmp296));
bool $tmp301 = $tmp300.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp296)));
// unreffing REF($21:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp294)));
// unreffing REF($18:frost.core.Equatable<frost.core.String.Index>)
if ($tmp301) goto block4; else goto block5;
block4:;
// line 141
frost$core$String$Index $tmp302 = *(&local2);
frost$core$Char32 $tmp303 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp302);
frost$core$UInt64$nullable $tmp304 = frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q($tmp303);
*(&local3) = $tmp304;
// line 142
frost$core$UInt64$nullable $tmp305 = *(&local3);
frost$core$Bit $tmp306 = frost$core$Bit$init$builtin_bit(!$tmp305.nonnull);
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block8; else goto block9;
block8:;
*(&local4) = $tmp306;
goto block10;
block9:;
frost$core$UInt64$nullable $tmp308 = *(&local3);
frost$core$Bit $tmp309 = frost$core$Bit$init$builtin_bit($tmp308.nonnull);
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp311 = (frost$core$Int64) {142};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s312, $tmp311, &$s313);
abort(); // unreachable
block11:;
frost$core$UInt64 $tmp314 = *(&local1);
uint64_t $tmp315 = ((frost$core$UInt64) $tmp308.value).value;
uint64_t $tmp316 = $tmp314.value;
bool $tmp317 = $tmp315 >= $tmp316;
frost$core$Bit $tmp318 = (frost$core$Bit) {$tmp317};
*(&local4) = $tmp318;
goto block10;
block10:;
frost$core$Bit $tmp319 = *(&local4);
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block6; else goto block7;
block6:;
// line 143
return ((frost$core$UInt64$nullable) { .nonnull = false });
block7:;
// line 145
frost$core$UInt64 $tmp321 = *(&local0);
frost$core$UInt64 $tmp322 = *(&local1);
uint64_t $tmp323 = $tmp321.value;
uint64_t $tmp324 = $tmp322.value;
uint64_t $tmp325 = $tmp323 * $tmp324;
frost$core$UInt64 $tmp326 = (frost$core$UInt64) {$tmp325};
frost$core$UInt64$nullable $tmp327 = *(&local3);
frost$core$Bit $tmp328 = frost$core$Bit$init$builtin_bit($tmp327.nonnull);
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp330 = (frost$core$Int64) {145};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s331, $tmp330, &$s332);
abort(); // unreachable
block13:;
uint64_t $tmp333 = $tmp326.value;
uint64_t $tmp334 = ((frost$core$UInt64) $tmp327.value).value;
uint64_t $tmp335 = $tmp333 + $tmp334;
frost$core$UInt64 $tmp336 = (frost$core$UInt64) {$tmp335};
*(&local0) = $tmp336;
// line 146
frost$core$String$Index $tmp337 = *(&local2);
frost$core$String$Index $tmp338 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp337);
*(&local2) = $tmp338;
goto block3;
block5:;
// line 148
frost$core$UInt64 $tmp339 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp339, true });

}
frost$core$String* frost$core$Frost$align$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$Int64 local1;
frost$core$Char32 local2;
// line 174
frost$core$Int64 $tmp340 = frost$core$String$get_length$R$frost$core$Int64(param1);
frost$core$Int64 $tmp341 = (frost$core$Int64) {2};
int64_t $tmp342 = $tmp340.value;
int64_t $tmp343 = $tmp341.value;
bool $tmp344 = $tmp342 >= $tmp343;
frost$core$Bit $tmp345 = (frost$core$Bit) {$tmp344};
bool $tmp346 = $tmp345.value;
if ($tmp346) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp347 = (frost$core$Int64) {174};
frost$core$String* $tmp348 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s349, param1);
frost$core$String* $tmp350 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp348, &$s351);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s352, $tmp347, $tmp350);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
// unreffing REF($11:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
// unreffing REF($10:frost.core.String)
abort(); // unreachable
block1:;
// line 175
frost$core$String$Index $tmp353 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$String$Index $tmp354 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp353);
*(&local0) = $tmp354;
// line 176
frost$core$String$Index $tmp355 = *(&local0);
frost$core$Char32 $tmp356 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp355);
frost$core$Int32 $tmp357 = (frost$core$Int32) {60};
frost$core$Char32 $tmp358 = frost$core$Char32$init$frost$core$Int32($tmp357);
frost$core$Bit $tmp359 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp356, $tmp358);
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block4; else goto block5;
block5:;
frost$core$Int32 $tmp361 = (frost$core$Int32) {94};
frost$core$Char32 $tmp362 = frost$core$Char32$init$frost$core$Int32($tmp361);
frost$core$Bit $tmp363 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp356, $tmp362);
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block4; else goto block6;
block6:;
frost$core$Int32 $tmp365 = (frost$core$Int32) {62};
frost$core$Char32 $tmp366 = frost$core$Char32$init$frost$core$Int32($tmp365);
frost$core$Bit $tmp367 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp356, $tmp366);
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block4; else goto block7;
block4:;
goto block3;
block7:;
// line 181
frost$core$String$Index $tmp369 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local0) = $tmp369;
goto block3;
block3:;
// line 184
frost$core$String$Index $tmp370 = *(&local0);
frost$core$String$Index $tmp371 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp370);
frost$core$Bit $tmp372 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp373 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp371, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp372);
frost$core$String* $tmp374 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp373);
frost$core$Int64$nullable $tmp375 = frost$core$String$convert$R$frost$core$Int64$Q($tmp374);
frost$core$Bit $tmp376 = frost$core$Bit$init$builtin_bit($tmp375.nonnull);
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp378 = (frost$core$Int64) {184};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s379, $tmp378, &$s380);
abort(); // unreachable
block8:;
*(&local1) = ((frost$core$Int64) $tmp375.value);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
// unreffing REF($53:frost.core.String)
// line 185
// line 186
frost$core$String$Index $tmp381 = *(&local0);
frost$core$String$Index $tmp382 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$Bit $tmp383 = frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit($tmp381, $tmp382);
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block10; else goto block12;
block10:;
// line 187
frost$core$Int32 $tmp385 = (frost$core$Int32) {32};
frost$core$Char32 $tmp386 = frost$core$Char32$init$frost$core$Int32($tmp385);
*(&local2) = $tmp386;
goto block11;
block12:;
// line 1
// line 190
frost$core$String$Index $tmp387 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$Char32 $tmp388 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp387);
*(&local2) = $tmp388;
goto block11;
block11:;
// line 192
frost$core$String$Index $tmp389 = *(&local0);
frost$core$Char32 $tmp390 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp389);
frost$core$Int32 $tmp391 = (frost$core$Int32) {60};
frost$core$Char32 $tmp392 = frost$core$Char32$init$frost$core$Int32($tmp391);
frost$core$Bit $tmp393 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp390, $tmp392);
bool $tmp394 = $tmp393.value;
if ($tmp394) goto block14; else goto block15;
block14:;
// line 193
frost$core$Int64 $tmp395 = *(&local1);
frost$core$Char32 $tmp396 = *(&local2);
frost$core$String* $tmp397 = frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, $tmp395, $tmp396);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
// unreffing REF($96:frost.core.String)
return $tmp397;
block15:;
frost$core$Int32 $tmp398 = (frost$core$Int32) {94};
frost$core$Char32 $tmp399 = frost$core$Char32$init$frost$core$Int32($tmp398);
frost$core$Bit $tmp400 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp390, $tmp399);
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block16; else goto block17;
block16:;
// line 194
frost$core$Int64 $tmp402 = *(&local1);
frost$core$Char32 $tmp403 = *(&local2);
frost$core$String* $tmp404 = frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, $tmp402, $tmp403);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
// unreffing REF($111:frost.core.String)
return $tmp404;
block17:;
frost$core$Int32 $tmp405 = (frost$core$Int32) {62};
frost$core$Char32 $tmp406 = frost$core$Char32$init$frost$core$Int32($tmp405);
frost$core$Bit $tmp407 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp390, $tmp406);
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block18; else goto block19;
block18:;
// line 195
frost$core$Int64 $tmp409 = *(&local1);
frost$core$Char32 $tmp410 = *(&local2);
frost$core$String* $tmp411 = frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, $tmp409, $tmp410);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// unreffing REF($126:frost.core.String)
return $tmp411;
block19:;
// line 196
frost$core$Bit $tmp412 = frost$core$Bit$init$builtin_bit(false);
bool $tmp413 = $tmp412.value;
if ($tmp413) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp414 = (frost$core$Int64) {196};
frost$core$String* $tmp415 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s416, param1);
frost$core$String* $tmp417 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp415, &$s418);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s419, $tmp414, $tmp417);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
// unreffing REF($139:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
// unreffing REF($138:frost.core.String)
abort(); // unreachable
block20:;
goto block13;
block13:;
frost$core$Bit $tmp420 = frost$core$Bit$init$builtin_bit(false);
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp422 = (frost$core$Int64) {173};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s423, $tmp422, &$s424);
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
frost$core$String$Index $tmp425 = frost$core$String$get_start$R$frost$core$String$Index(param3);
*(&local0) = $tmp425;
// line 211
frost$core$UInt64 $tmp426 = (frost$core$UInt64) {10};
*(&local1) = $tmp426;
// line 212
frost$collections$ListView* $tmp427 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s428);
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
frost$collections$ListView* $tmp429 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local2) = $tmp427;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
// unreffing REF($7:frost.collections.ListView<frost.core.Char8>)
// line 213
frost$core$String$Index $tmp430 = *(&local0);
frost$core$String$Index$wrapper* $tmp431;
$tmp431 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp431->value = $tmp430;
frost$core$String$Index $tmp432 = frost$core$String$get_end$R$frost$core$String$Index(param3);
frost$core$String$Index$wrapper* $tmp433;
$tmp433 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp433->value = $tmp432;
ITable* $tmp434 = ((frost$core$Comparable*) $tmp431)->$class->itable;
while ($tmp434->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp434 = $tmp434->next;
}
$fn436 $tmp435 = $tmp434->methods[1];
frost$core$Bit $tmp437 = $tmp435(((frost$core$Comparable*) $tmp431), ((frost$core$Comparable*) $tmp433));
bool $tmp438 = $tmp437.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp433)));
// unreffing REF($23:frost.core.Comparable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp431)));
// unreffing REF($20:frost.core.Comparable<frost.core.String.Index>)
if ($tmp438) goto block1; else goto block2;
block1:;
// line 214
frost$core$String$Index $tmp439 = *(&local0);
frost$core$Char32 $tmp440 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param3, $tmp439);
frost$core$Int32 $tmp441 = (frost$core$Int32) {98};
frost$core$Char32 $tmp442 = frost$core$Char32$init$frost$core$Int32($tmp441);
frost$core$Bit $tmp443 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp440, $tmp442);
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block4; else goto block5;
block5:;
frost$core$Int32 $tmp445 = (frost$core$Int32) {66};
frost$core$Char32 $tmp446 = frost$core$Char32$init$frost$core$Int32($tmp445);
frost$core$Bit $tmp447 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp440, $tmp446);
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block4; else goto block6;
block4:;
// line 216
frost$core$UInt64 $tmp449 = (frost$core$UInt64) {2};
*(&local1) = $tmp449;
goto block3;
block6:;
frost$core$Int32 $tmp450 = (frost$core$Int32) {111};
frost$core$Char32 $tmp451 = frost$core$Char32$init$frost$core$Int32($tmp450);
frost$core$Bit $tmp452 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp440, $tmp451);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block7; else goto block8;
block8:;
frost$core$Int32 $tmp454 = (frost$core$Int32) {79};
frost$core$Char32 $tmp455 = frost$core$Char32$init$frost$core$Int32($tmp454);
frost$core$Bit $tmp456 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp440, $tmp455);
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block7; else goto block9;
block7:;
// line 219
frost$core$UInt64 $tmp458 = (frost$core$UInt64) {8};
*(&local1) = $tmp458;
goto block3;
block9:;
frost$core$Int32 $tmp459 = (frost$core$Int32) {100};
frost$core$Char32 $tmp460 = frost$core$Char32$init$frost$core$Int32($tmp459);
frost$core$Bit $tmp461 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp440, $tmp460);
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block10; else goto block11;
block11:;
frost$core$Int32 $tmp463 = (frost$core$Int32) {68};
frost$core$Char32 $tmp464 = frost$core$Char32$init$frost$core$Int32($tmp463);
frost$core$Bit $tmp465 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp440, $tmp464);
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block10; else goto block12;
block10:;
// line 222
frost$core$UInt64 $tmp467 = (frost$core$UInt64) {10};
*(&local1) = $tmp467;
goto block3;
block12:;
frost$core$Int32 $tmp468 = (frost$core$Int32) {120};
frost$core$Char32 $tmp469 = frost$core$Char32$init$frost$core$Int32($tmp468);
frost$core$Bit $tmp470 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp440, $tmp469);
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block13; else goto block14;
block13:;
// line 225
frost$core$UInt64 $tmp472 = (frost$core$UInt64) {16};
*(&local1) = $tmp472;
goto block3;
block14:;
frost$core$Int32 $tmp473 = (frost$core$Int32) {88};
frost$core$Char32 $tmp474 = frost$core$Char32$init$frost$core$Int32($tmp473);
frost$core$Bit $tmp475 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp440, $tmp474);
bool $tmp476 = $tmp475.value;
if ($tmp476) goto block15; else goto block16;
block15:;
// line 228
frost$core$UInt64 $tmp477 = (frost$core$UInt64) {16};
*(&local1) = $tmp477;
// line 229
frost$collections$ListView* $tmp478 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s479);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
frost$collections$ListView* $tmp480 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local2) = $tmp478;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
// unreffing REF($97:frost.collections.ListView<frost.core.Char8>)
goto block3;
block16:;
// line 232
frost$core$Bit $tmp481 = frost$core$Bit$init$builtin_bit(false);
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp483 = (frost$core$Int64) {232};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s484, $tmp483, &$s485);
abort(); // unreachable
block17:;
goto block3;
block3:;
goto block2;
block2:;
// line 236
// line 237
bool $tmp486 = param0.value;
if ($tmp486) goto block21; else goto block22;
block21:;
frost$core$UInt64 $tmp487 = *(&local1);
frost$core$UInt64 $tmp488 = (frost$core$UInt64) {10};
uint64_t $tmp489 = $tmp487.value;
uint64_t $tmp490 = $tmp488.value;
bool $tmp491 = $tmp489 != $tmp490;
frost$core$Bit $tmp492 = (frost$core$Bit) {$tmp491};
*(&local4) = $tmp492;
goto block23;
block22:;
*(&local4) = param0;
goto block23;
block23:;
frost$core$Bit $tmp493 = *(&local4);
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block19; else goto block24;
block19:;
// line 238
frost$core$Int64 $tmp495 = frost$core$UInt64$convert$R$frost$core$Int64(param1);
frost$core$Int64 $tmp496 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp495);
frost$core$UInt64 $tmp497 = frost$core$Int64$convert$R$frost$core$UInt64($tmp496);
frost$core$UInt64 $tmp498 = frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64($tmp497, param2);
*(&local3) = $tmp498;
goto block20;
block24:;
// line 1
// line 241
*(&local3) = param1;
goto block20;
block20:;
// line 243
frost$core$Int64 $tmp499 = (frost$core$Int64) {64};
*(&local5) = $tmp499;
// line 244
frost$core$Int64 $tmp500 = *(&local5);
int64_t $tmp501 = $tmp500.value;
frost$core$Char8* $tmp502 = ((frost$core$Char8*) frostAlloc($tmp501 * 1));
*(&local6) = $tmp502;
// line 245
frost$core$Int64 $tmp503 = *(&local5);
frost$core$Int64 $tmp504 = (frost$core$Int64) {1};
int64_t $tmp505 = $tmp503.value;
int64_t $tmp506 = $tmp504.value;
int64_t $tmp507 = $tmp505 - $tmp506;
frost$core$Int64 $tmp508 = (frost$core$Int64) {$tmp507};
*(&local7) = $tmp508;
// line 246
goto block25;
block25:;
// line 247
frost$core$Char8* $tmp509 = *(&local6);
frost$core$Int64 $tmp510 = *(&local7);
frost$collections$ListView* $tmp511 = *(&local2);
frost$core$UInt64 $tmp512 = *(&local3);
frost$core$UInt64 $tmp513 = *(&local1);
frost$core$UInt64 $tmp514 = frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64($tmp512, $tmp513);
frost$core$Int64 $tmp515 = frost$core$UInt64$convert$R$frost$core$Int64($tmp514);
ITable* $tmp516 = $tmp511->$class->itable;
while ($tmp516->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp516 = $tmp516->next;
}
$fn518 $tmp517 = $tmp516->methods[0];
frost$core$Object* $tmp519 = $tmp517($tmp511, $tmp515);
int64_t $tmp520 = $tmp510.value;
$tmp509[$tmp520] = ((frost$core$Char8$wrapper*) $tmp519)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp519);
// unreffing REF($173:frost.collections.ListView.T)
// line 248
frost$core$UInt64 $tmp521 = *(&local3);
frost$core$UInt64 $tmp522 = *(&local1);
uint64_t $tmp523 = $tmp521.value;
uint64_t $tmp524 = $tmp522.value;
uint64_t $tmp525 = $tmp523 / $tmp524;
frost$core$UInt64 $tmp526 = (frost$core$UInt64) {$tmp525};
*(&local3) = $tmp526;
// line 249
frost$core$Int64 $tmp527 = *(&local7);
frost$core$Int64 $tmp528 = (frost$core$Int64) {1};
int64_t $tmp529 = $tmp527.value;
int64_t $tmp530 = $tmp528.value;
int64_t $tmp531 = $tmp529 - $tmp530;
frost$core$Int64 $tmp532 = (frost$core$Int64) {$tmp531};
*(&local7) = $tmp532;
goto block26;
block26:;
frost$core$UInt64 $tmp533 = *(&local3);
frost$core$UInt64 $tmp534 = (frost$core$UInt64) {0};
uint64_t $tmp535 = $tmp533.value;
uint64_t $tmp536 = $tmp534.value;
bool $tmp537 = $tmp535 > $tmp536;
frost$core$Bit $tmp538 = (frost$core$Bit) {$tmp537};
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block25; else goto block27;
block27:;
// line 252
bool $tmp540 = param0.value;
if ($tmp540) goto block30; else goto block31;
block30:;
frost$core$UInt64 $tmp541 = *(&local1);
frost$core$UInt64 $tmp542 = (frost$core$UInt64) {10};
frost$core$Bit $tmp543 = frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit($tmp541, $tmp542);
*(&local8) = $tmp543;
goto block32;
block31:;
*(&local8) = param0;
goto block32;
block32:;
frost$core$Bit $tmp544 = *(&local8);
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block28; else goto block29;
block28:;
// line 253
frost$core$Char8* $tmp546 = *(&local6);
frost$core$Int64 $tmp547 = *(&local7);
frost$core$UInt8 $tmp548 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp549 = frost$core$Char8$init$frost$core$UInt8($tmp548);
int64_t $tmp550 = $tmp547.value;
$tmp546[$tmp550] = $tmp549;
// line 254
frost$core$Int64 $tmp551 = *(&local7);
frost$core$Int64 $tmp552 = (frost$core$Int64) {1};
int64_t $tmp553 = $tmp551.value;
int64_t $tmp554 = $tmp552.value;
int64_t $tmp555 = $tmp553 - $tmp554;
frost$core$Int64 $tmp556 = (frost$core$Int64) {$tmp555};
*(&local7) = $tmp556;
goto block29;
block29:;
// line 256
frost$core$Int64 $tmp557 = *(&local7);
frost$core$Int64 $tmp558 = (frost$core$Int64) {1};
int64_t $tmp559 = $tmp557.value;
int64_t $tmp560 = $tmp558.value;
int64_t $tmp561 = $tmp559 + $tmp560;
frost$core$Int64 $tmp562 = (frost$core$Int64) {$tmp561};
*(&local7) = $tmp562;
// line 257
frost$core$Int64 $tmp563 = *(&local5);
frost$core$Int64 $tmp564 = *(&local7);
int64_t $tmp565 = $tmp563.value;
int64_t $tmp566 = $tmp564.value;
int64_t $tmp567 = $tmp565 - $tmp566;
frost$core$Int64 $tmp568 = (frost$core$Int64) {$tmp567};
*(&local9) = $tmp568;
// line 258
frost$core$Int64 $tmp569 = (frost$core$Int64) {0};
frost$core$Int64 $tmp570 = *(&local9);
frost$core$Bit $tmp571 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp572 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp569, $tmp570, $tmp571);
frost$core$Int64 $tmp573 = $tmp572.min;
*(&local10) = $tmp573;
frost$core$Int64 $tmp574 = $tmp572.max;
frost$core$Bit $tmp575 = $tmp572.inclusive;
bool $tmp576 = $tmp575.value;
frost$core$Int64 $tmp577 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp578 = frost$core$Int64$convert$R$frost$core$UInt64($tmp577);
if ($tmp576) goto block36; else goto block37;
block36:;
int64_t $tmp579 = $tmp573.value;
int64_t $tmp580 = $tmp574.value;
bool $tmp581 = $tmp579 <= $tmp580;
frost$core$Bit $tmp582 = (frost$core$Bit) {$tmp581};
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block33; else goto block34;
block37:;
int64_t $tmp584 = $tmp573.value;
int64_t $tmp585 = $tmp574.value;
bool $tmp586 = $tmp584 < $tmp585;
frost$core$Bit $tmp587 = (frost$core$Bit) {$tmp586};
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block33; else goto block34;
block33:;
// line 259
frost$core$Char8* $tmp589 = *(&local6);
frost$core$Int64 $tmp590 = *(&local10);
frost$core$Char8* $tmp591 = *(&local6);
frost$core$Int64 $tmp592 = *(&local10);
frost$core$Int64 $tmp593 = *(&local7);
int64_t $tmp594 = $tmp592.value;
int64_t $tmp595 = $tmp593.value;
int64_t $tmp596 = $tmp594 + $tmp595;
frost$core$Int64 $tmp597 = (frost$core$Int64) {$tmp596};
int64_t $tmp598 = $tmp597.value;
frost$core$Char8 $tmp599 = $tmp591[$tmp598];
int64_t $tmp600 = $tmp590.value;
$tmp589[$tmp600] = $tmp599;
goto block35;
block35:;
frost$core$Int64 $tmp601 = *(&local10);
int64_t $tmp602 = $tmp574.value;
int64_t $tmp603 = $tmp601.value;
int64_t $tmp604 = $tmp602 - $tmp603;
frost$core$Int64 $tmp605 = (frost$core$Int64) {$tmp604};
frost$core$UInt64 $tmp606 = frost$core$Int64$convert$R$frost$core$UInt64($tmp605);
if ($tmp576) goto block39; else goto block40;
block39:;
uint64_t $tmp607 = $tmp606.value;
uint64_t $tmp608 = $tmp578.value;
bool $tmp609 = $tmp607 >= $tmp608;
frost$core$Bit $tmp610 = (frost$core$Bit) {$tmp609};
bool $tmp611 = $tmp610.value;
if ($tmp611) goto block38; else goto block34;
block40:;
uint64_t $tmp612 = $tmp606.value;
uint64_t $tmp613 = $tmp578.value;
bool $tmp614 = $tmp612 > $tmp613;
frost$core$Bit $tmp615 = (frost$core$Bit) {$tmp614};
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block38; else goto block34;
block38:;
int64_t $tmp617 = $tmp601.value;
int64_t $tmp618 = $tmp577.value;
int64_t $tmp619 = $tmp617 + $tmp618;
frost$core$Int64 $tmp620 = (frost$core$Int64) {$tmp619};
*(&local10) = $tmp620;
goto block33;
block34:;
// line 261
frost$core$String* $tmp621 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp622 = *(&local6);
frost$core$Int64 $tmp623 = *(&local9);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp621, $tmp622, $tmp623);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
// unreffing REF($316:frost.core.String)
frost$collections$ListView* $tmp624 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
// unreffing digits
*(&local2) = ((frost$collections$ListView*) NULL);
return $tmp621;

}
void frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(frost$collections$List* param0, frost$core$Int64 param1, frost$core$Int64 param2) {

frost$core$Object* local0 = NULL;
// line 283
ITable* $tmp625 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp625->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp625 = $tmp625->next;
}
$fn627 $tmp626 = $tmp625->methods[0];
frost$core$Object* $tmp628 = $tmp626(((frost$collections$ListView*) param0), param1);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp628);
frost$core$Object* $tmp629 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp629);
*(&local0) = $tmp628;
frost$core$Frost$unref$frost$core$Object$Q($tmp628);
// unreffing REF($4:frost.collections.ListView.T)
// line 284
ITable* $tmp630 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp630->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp630 = $tmp630->next;
}
$fn632 $tmp631 = $tmp630->methods[0];
frost$core$Object* $tmp633 = $tmp631(((frost$collections$ListView*) param0), param2);
ITable* $tmp634 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp634->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp634 = $tmp634->next;
}
$fn636 $tmp635 = $tmp634->methods[0];
$tmp635(((frost$collections$ListWriter*) param0), param1, $tmp633);
frost$core$Frost$unref$frost$core$Object$Q($tmp633);
// unreffing REF($21:frost.collections.ListView.T)
// line 285
frost$core$Object* $tmp637 = *(&local0);
ITable* $tmp638 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp638->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp638 = $tmp638->next;
}
$fn640 $tmp639 = $tmp638->methods[0];
$tmp639(((frost$collections$ListWriter*) param0), param2, $tmp637);
frost$core$Object* $tmp641 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp641);
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
int64_t $tmp642 = param1.value;
int64_t $tmp643 = param2.value;
bool $tmp644 = $tmp642 >= $tmp643;
frost$core$Bit $tmp645 = (frost$core$Bit) {$tmp644};
bool $tmp646 = $tmp645.value;
if ($tmp646) goto block1; else goto block2;
block1:;
// line 293
return;
block2:;
// line 295
int64_t $tmp647 = param2.value;
int64_t $tmp648 = param1.value;
int64_t $tmp649 = $tmp647 - $tmp648;
frost$core$Int64 $tmp650 = (frost$core$Int64) {$tmp649};
frost$core$Int64 $tmp651 = (frost$core$Int64) {2};
int64_t $tmp652 = $tmp650.value;
int64_t $tmp653 = $tmp651.value;
int64_t $tmp654 = $tmp652 / $tmp653;
frost$core$Int64 $tmp655 = (frost$core$Int64) {$tmp654};
int64_t $tmp656 = param1.value;
int64_t $tmp657 = $tmp655.value;
int64_t $tmp658 = $tmp656 + $tmp657;
frost$core$Int64 $tmp659 = (frost$core$Int64) {$tmp658};
*(&local0) = $tmp659;
// line 296
frost$core$Int64 $tmp660 = *(&local0);
ITable* $tmp661 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp661->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp661 = $tmp661->next;
}
$fn663 $tmp662 = $tmp661->methods[0];
frost$core$Object* $tmp664 = $tmp662(((frost$collections$ListView*) param0), $tmp660);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp664);
frost$core$Object* $tmp665 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp665);
*(&local1) = $tmp664;
frost$core$Frost$unref$frost$core$Object$Q($tmp664);
// unreffing REF($29:frost.collections.ListView.T)
// line 297
frost$core$Int64 $tmp666 = *(&local0);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, param2, $tmp666);
// line 298
*(&local2) = param1;
// line 299
frost$core$Int64 $tmp667 = (frost$core$Int64) {1};
int64_t $tmp668 = param2.value;
int64_t $tmp669 = $tmp667.value;
int64_t $tmp670 = $tmp668 - $tmp669;
frost$core$Int64 $tmp671 = (frost$core$Int64) {$tmp670};
frost$core$Bit $tmp672 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$Int64$GT $tmp673 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(param1, $tmp671, $tmp672);
frost$core$Int64 $tmp674 = $tmp673.min;
*(&local3) = $tmp674;
frost$core$Int64 $tmp675 = $tmp673.max;
frost$core$Bit $tmp676 = $tmp673.inclusive;
bool $tmp677 = $tmp676.value;
frost$core$Int64 $tmp678 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp679 = frost$core$Int64$convert$R$frost$core$UInt64($tmp678);
if ($tmp677) goto block6; else goto block7;
block6:;
int64_t $tmp680 = $tmp674.value;
int64_t $tmp681 = $tmp675.value;
bool $tmp682 = $tmp680 <= $tmp681;
frost$core$Bit $tmp683 = (frost$core$Bit) {$tmp682};
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block3; else goto block4;
block7:;
int64_t $tmp685 = $tmp674.value;
int64_t $tmp686 = $tmp675.value;
bool $tmp687 = $tmp685 < $tmp686;
frost$core$Bit $tmp688 = (frost$core$Bit) {$tmp687};
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block3; else goto block4;
block3:;
// line 300
frost$core$Int64 $tmp690 = *(&local3);
ITable* $tmp691 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp691->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp691 = $tmp691->next;
}
$fn693 $tmp692 = $tmp691->methods[0];
frost$core$Object* $tmp694 = $tmp692(((frost$collections$ListView*) param0), $tmp690);
frost$core$Object* $tmp695 = *(&local1);
frost$core$Int8** $tmp696 = &param3->pointer;
frost$core$Int8* $tmp697 = *$tmp696;
frost$core$Object** $tmp698 = &param3->target;
frost$core$Object* $tmp699 = *$tmp698;
bool $tmp700 = $tmp699 != ((frost$core$Object*) NULL);
if ($tmp700) goto block10; else goto block11;
block11:;
frost$core$Bit $tmp702 = (($fn701) $tmp697)($tmp694, $tmp695);
*(&local4) = $tmp702;
goto block12;
block10:;
frost$core$Bit $tmp704 = (($fn703) $tmp697)($tmp699, $tmp694, $tmp695);
*(&local4) = $tmp704;
goto block12;
block12:;
frost$core$Bit $tmp705 = *(&local4);
frost$core$Bit $tmp706 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp705);
bool $tmp707 = $tmp706.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp694);
// unreffing REF($80:frost.collections.ListView.T)
if ($tmp707) goto block8; else goto block9;
block8:;
// line 301
frost$core$Int64 $tmp708 = *(&local3);
frost$core$Int64 $tmp709 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp708, $tmp709);
// line 302
frost$core$Int64 $tmp710 = *(&local2);
frost$core$Int64 $tmp711 = (frost$core$Int64) {1};
int64_t $tmp712 = $tmp710.value;
int64_t $tmp713 = $tmp711.value;
int64_t $tmp714 = $tmp712 + $tmp713;
frost$core$Int64 $tmp715 = (frost$core$Int64) {$tmp714};
*(&local2) = $tmp715;
goto block9;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp716 = *(&local3);
int64_t $tmp717 = $tmp675.value;
int64_t $tmp718 = $tmp716.value;
int64_t $tmp719 = $tmp717 - $tmp718;
frost$core$Int64 $tmp720 = (frost$core$Int64) {$tmp719};
frost$core$UInt64 $tmp721 = frost$core$Int64$convert$R$frost$core$UInt64($tmp720);
if ($tmp677) goto block14; else goto block15;
block14:;
uint64_t $tmp722 = $tmp721.value;
uint64_t $tmp723 = $tmp679.value;
bool $tmp724 = $tmp722 >= $tmp723;
frost$core$Bit $tmp725 = (frost$core$Bit) {$tmp724};
bool $tmp726 = $tmp725.value;
if ($tmp726) goto block13; else goto block4;
block15:;
uint64_t $tmp727 = $tmp721.value;
uint64_t $tmp728 = $tmp679.value;
bool $tmp729 = $tmp727 > $tmp728;
frost$core$Bit $tmp730 = (frost$core$Bit) {$tmp729};
bool $tmp731 = $tmp730.value;
if ($tmp731) goto block13; else goto block4;
block13:;
int64_t $tmp732 = $tmp716.value;
int64_t $tmp733 = $tmp678.value;
int64_t $tmp734 = $tmp732 + $tmp733;
frost$core$Int64 $tmp735 = (frost$core$Int64) {$tmp734};
*(&local3) = $tmp735;
goto block3;
block4:;
// line 305
frost$core$Int64 $tmp736 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp736, param2);
// line 306
frost$core$Int64 $tmp737 = *(&local2);
frost$core$Int64 $tmp738 = (frost$core$Int64) {1};
int64_t $tmp739 = $tmp737.value;
int64_t $tmp740 = $tmp738.value;
int64_t $tmp741 = $tmp739 - $tmp740;
frost$core$Int64 $tmp742 = (frost$core$Int64) {$tmp741};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, param1, $tmp742, param3);
// line 307
frost$core$Int64 $tmp743 = *(&local2);
frost$core$Int64 $tmp744 = (frost$core$Int64) {1};
int64_t $tmp745 = $tmp743.value;
int64_t $tmp746 = $tmp744.value;
int64_t $tmp747 = $tmp745 + $tmp746;
frost$core$Int64 $tmp748 = (frost$core$Int64) {$tmp747};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, $tmp748, param2, param3);
frost$core$Object* $tmp749 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp749);
// unreffing pivot
*(&local1) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$cleanup(frost$core$Frost* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp750 = &param0->allocations;
frost$collections$HashMap* $tmp751 = *$tmp750;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
frost$collections$HashMap** $tmp752 = &param0->traces;
frost$collections$HashMap* $tmp753 = *$tmp752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
return;

}

