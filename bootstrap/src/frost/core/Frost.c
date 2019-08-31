#include "frost/core/Frost.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Maybe.h"
#include "frost/core/Int.h"
#include "frost/core/Error.h"
#include "frost/core/Weak.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/Array.h"
#include "frost/core/Bit.h"
#include "frost/collections/HashKey.h"
#include "frost/collections/Iterable.h"
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
#include "frost/core/Int64.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/collections/ListView.h"
#include "frost/core/String/UTF8List.h"
#include "frost/core/Comparable.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/collections/List.h"
#include "frost/collections/ListWriter.h"
#include "frost/core/MutableMethod.h"


static frost$core$String $s1;
frost$core$Frost$class_type frost$core$Frost$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Frost$cleanup} };

typedef frost$collections$Iterator* (*$fn55)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn59)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn64)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn83)(frost$core$Object*);
typedef frost$core$Error* (*$fn89)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn107)(frost$core$Object*);
typedef frost$core$Error* (*$fn116)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn229)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn271)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn275)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn434)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Object* (*$fn550)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn669)(frost$collections$HashKey*);
typedef frost$core$String* (*$fn680)(frost$core$Object*);
typedef frost$core$Object* (*$fn686)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn691)(frost$collections$ListView*, frost$core$Int);
typedef void (*$fn695)(frost$collections$ListWriter*, frost$core$Int, frost$core$Object*);
typedef void (*$fn699)(frost$collections$ListWriter*, frost$core$Int, frost$core$Object*);
typedef frost$core$Object* (*$fn722)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn751)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn759)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn761)(frost$core$Object*, frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, 4237142976622831502, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3e\x3e", 157, -1998709794346150571, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 121, -6078753381508500794, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3e\x3e", 160, -8532473038477785904, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, 7669895969177076905, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, 7669895969177076905, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3a\x20", 3, 48285155966961582, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -6606133885720023461, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -6606133885720023461, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s415 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 3330193207084279677, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, -1839289420917840067, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 3626147090372997348, NULL };
static frost$core$String $s665 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4b\x65\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x2e\x68\x61\x73\x68\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4b\x65\x79", 114, -2091676814416690762, NULL };
static frost$core$String $s677 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s678 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -5360016314918414915, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s683 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };

void frost$core$Frost$init(frost$core$Frost* param0) {

return;

}
frost$core$Maybe* frost$core$Frost$success$frost$core$Object$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$Object* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:21
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp2 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int $tmp3 = (frost$core$Int) {0u};
frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T($tmp2, $tmp3, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
return $tmp2;

}
frost$core$Maybe* frost$core$Frost$error$frost$core$String$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:27
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp4 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int $tmp5 = (frost$core$Int) {1u};
FROST_ASSERT(24 == sizeof(frost$core$Error));
frost$core$Error* $tmp6 = (frost$core$Error*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Error$class);
frost$core$Error$init$frost$core$String($tmp6, param0);
frost$core$Maybe$init$frost$core$Int$frost$core$Error($tmp4, $tmp5, $tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
return $tmp4;

}
void frost$core$Frost$_addWeakReference$frost$core$Weak$LTfrost$core$Object$GT$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(frost$core$Weak* param0, frost$collections$HashMap* param1) {

frost$core$Int local0;
frost$collections$Array* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:44
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Frost.frost:44:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp7 = &param0->_valid;
frost$core$Bit $tmp8 = *$tmp7;
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block3; else goto block4;
block4:;
frost$core$Int $tmp10 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s11, $tmp10);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp12 = &param0->value;
frost$core$Object* $tmp13 = *$tmp12;
frost$core$Frost$ref$frost$core$Object$Q($tmp13);
frost$core$Int $tmp14;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&$tmp14, $tmp13);
*(&local0) = $tmp14;
frost$core$Frost$unref$frost$core$Object$Q($tmp13);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:45
frost$core$Int $tmp15 = *(&local0);
frost$core$Int$wrapper* $tmp16;
$tmp16 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp16->value = $tmp15;
frost$core$Object* $tmp17 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(param1, ((frost$collections$HashKey*) $tmp16));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) $tmp17)));
frost$collections$Array* $tmp18 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local1) = ((frost$collections$Array*) $tmp17);
frost$core$Frost$unref$frost$core$Object$Q($tmp17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp16)));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:46
frost$collections$Array* $tmp19 = *(&local1);
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19 == NULL};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:47
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp22 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$collections$Array* $tmp23 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
*(&local1) = $tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:48
frost$core$Int $tmp24 = *(&local0);
frost$core$Int$wrapper* $tmp25;
$tmp25 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp25->value = $tmp24;
frost$collections$Array* $tmp26 = *(&local1);
frost$core$Bit $tmp27 = (frost$core$Bit) {$tmp26 != NULL};
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block7; else goto block8;
block8:;
frost$core$Int $tmp29 = (frost$core$Int) {48u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s30, $tmp29, &$s31);
abort(); // unreachable
block7:;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(param1, ((frost$collections$HashKey*) $tmp25), ((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp25)));
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:50
frost$collections$Array* $tmp32 = *(&local1);
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32 != NULL};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block9; else goto block10;
block10:;
frost$core$Int $tmp35 = (frost$core$Int) {50u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s36, $tmp35, &$s37);
abort(); // unreachable
block9:;
frost$collections$Array$add$frost$collections$Array$T($tmp32, ((frost$core$Object*) param0));
frost$collections$Array* $tmp38 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
*(&local1) = ((frost$collections$Array*) NULL);
return;

}
void frost$core$Frost$weakReferentDestroyed$frost$core$Int$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(frost$core$Int param0, frost$collections$HashMap* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Weak* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:55
frost$core$Int$wrapper* $tmp39;
$tmp39 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp39->value = param0;
frost$core$Object* $tmp40 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(param1, ((frost$collections$HashKey*) $tmp39));
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) $tmp40)));
frost$collections$Array* $tmp41 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
*(&local0) = ((frost$collections$Array*) $tmp40);
frost$core$Frost$unref$frost$core$Object$Q($tmp40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp39)));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:56
frost$collections$Array* $tmp42 = *(&local0);
frost$core$Bit $tmp43 = (frost$core$Bit) {$tmp42 != NULL};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block1; else goto block2;
block2:;
frost$core$Int $tmp45 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s46, $tmp45);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:57
frost$collections$Array* $tmp47 = *(&local0);
frost$core$Bit $tmp48 = (frost$core$Bit) {$tmp47 != NULL};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block3; else goto block4;
block4:;
frost$core$Int $tmp50 = (frost$core$Int) {57u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, $tmp50, &$s52);
abort(); // unreachable
block3:;
ITable* $tmp53 = ((frost$collections$Iterable*) $tmp47)->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp53 = $tmp53->next;
}
$fn55 $tmp54 = $tmp53->methods[0];
frost$collections$Iterator* $tmp56 = $tmp54(((frost$collections$Iterable*) $tmp47));
goto block5;
block5:;
ITable* $tmp57 = $tmp56->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[0];
frost$core$Bit $tmp60 = $tmp58($tmp56);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block7; else goto block6;
block6:;
*(&local1) = ((frost$core$Weak*) NULL);
ITable* $tmp62 = $tmp56->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp62 = $tmp62->next;
}
$fn64 $tmp63 = $tmp62->methods[1];
frost$core$Object* $tmp65 = $tmp63($tmp56);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Weak*) $tmp65)));
frost$core$Weak* $tmp66 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local1) = ((frost$core$Weak*) $tmp65);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:58
frost$core$Weak* $tmp67 = *(&local1);
frost$core$Bit $tmp68 = (frost$core$Bit) {false};
frost$core$Bit* $tmp69 = &$tmp67->_valid;
*$tmp69 = $tmp68;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:59
frost$core$Weak* $tmp70 = *(&local1);
frost$core$Object** $tmp71 = &$tmp70->value;
*$tmp71 = ((frost$core$Object*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp65);
frost$core$Weak* $tmp72 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
*(&local1) = ((frost$core$Weak*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:61
frost$core$Int$wrapper* $tmp73;
$tmp73 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp73->value = param0;
frost$collections$HashMap$remove$frost$collections$HashMap$K(param1, ((frost$collections$HashKey*) $tmp73));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashKey*) $tmp73)));
frost$collections$Array* $tmp74 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
frost$collections$HashMap* frost$core$Frost$createWeakReferenceMap$R$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Object$GT$GT() {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:66
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp75 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp75);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
return $tmp75;

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(frost$core$String* param0, frost$core$Int param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:83
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:84
frost$io$OutputStream* $tmp76 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp77 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s78, param0);
frost$core$String* $tmp79 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp77, &$s80);
frost$core$Int$wrapper* $tmp81;
$tmp81 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp81->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Frost.frost:84:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn83 $tmp82 = ($fn83) ((frost$core$Object*) $tmp81)->$class->vtable[0];
frost$core$String* $tmp84 = $tmp82(((frost$core$Object*) $tmp81));
frost$core$String* $tmp85 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp79, $tmp84);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$String* $tmp86 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp85, &$s87);
$fn89 $tmp88 = ($fn89) $tmp76->$class->vtable[19];
frost$core$Error* $tmp90 = $tmp88($tmp76, $tmp86);
if ($tmp90 == NULL) goto block4; else goto block5;
block5:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$Bit $tmp91 = (frost$core$Bit) {$tmp90 != NULL};
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block6; else goto block7;
block7:;
frost$core$Int $tmp93 = (frost$core$Int) {84u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s94, $tmp93, &$s95);
abort(); // unreachable
block6:;
*(&local0) = $tmp90;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
goto block2;
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
goto block2;
block2:;
frost$core$Error* $tmp96 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:88
frost$core$System$crash();
frost$core$Int $tmp97 = (frost$core$Int) {88u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s98, $tmp97, &$s99);
abort(); // unreachable

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(frost$core$String* param0, frost$core$Int param1, frost$core$String* param2) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:93
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:94
frost$io$OutputStream* $tmp100 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s102, param0);
frost$core$String* $tmp103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp101, &$s104);
frost$core$Int$wrapper* $tmp105;
$tmp105 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp105->value = param1;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Frost.frost:94:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn107 $tmp106 = ($fn107) ((frost$core$Object*) $tmp105)->$class->vtable[0];
frost$core$String* $tmp108 = $tmp106(((frost$core$Object*) $tmp105));
frost$core$String* $tmp109 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp103, $tmp108);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$core$String* $tmp110 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp109, &$s111);
frost$core$String* $tmp112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp110, param2);
frost$core$String* $tmp113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp112, &$s114);
$fn116 $tmp115 = ($fn116) $tmp100->$class->vtable[19];
frost$core$Error* $tmp117 = $tmp115($tmp100, $tmp113);
if ($tmp117 == NULL) goto block4; else goto block5;
block5:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$Bit $tmp118 = (frost$core$Bit) {$tmp117 != NULL};
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block6; else goto block7;
block7:;
frost$core$Int $tmp120 = (frost$core$Int) {94u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s121, $tmp120, &$s122);
abort(); // unreachable
block6:;
*(&local0) = $tmp117;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
goto block2;
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
goto block2;
block2:;
frost$core$Error* $tmp123 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:98
frost$core$System$crash();
frost$core$Int $tmp124 = (frost$core$Int) {98u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s125, $tmp124, &$s126);
abort(); // unreachable

}
frost$core$UInt64$nullable frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q(frost$core$Char32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:103
frost$core$Int32 $tmp127 = (frost$core$Int32) {48u};
frost$core$Char32 $tmp128 = frost$core$Char32$init$frost$core$Int32($tmp127);
// begin inline call to function frost.core.Char32.>=(other:frost.core.Char32):frost.core.Bit from Frost.frost:103:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:52
int32_t $tmp129 = param0.value;
int32_t $tmp130 = $tmp128.value;
bool $tmp131 = $tmp129 >= $tmp130;
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block3; else goto block2;
block3:;
frost$core$Int32 $tmp134 = (frost$core$Int32) {57u};
frost$core$Char32 $tmp135 = frost$core$Char32$init$frost$core$Int32($tmp134);
// begin inline call to function frost.core.Char32.<=(other:frost.core.Char32):frost.core.Bit from Frost.frost:103:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:47
int32_t $tmp136 = param0.value;
int32_t $tmp137 = $tmp135.value;
bool $tmp138 = $tmp136 <= $tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:104
// begin inline call to function frost.core.Char32.get_asUInt64():frost.core.UInt64 from Frost.frost:104:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:136
int32_t $tmp141 = param0.value;
frost$core$UInt64 $tmp142 = (frost$core$UInt64) {((uint64_t) $tmp141)};
frost$core$UInt8 $tmp143 = (frost$core$UInt8) {48u};
frost$core$Char8 $tmp144 = frost$core$Char8$init$frost$core$UInt8($tmp143);
// begin inline call to function frost.core.Char8.get_asUInt64():frost.core.UInt64 from Frost.frost:104:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:141
uint8_t $tmp145 = $tmp144.value;
frost$core$UInt64 $tmp146 = (frost$core$UInt64) {((uint64_t) $tmp145)};
uint64_t $tmp147 = $tmp142.value;
uint64_t $tmp148 = $tmp146.value;
uint64_t $tmp149 = $tmp147 - $tmp148;
frost$core$UInt64 $tmp150 = (frost$core$UInt64) {$tmp149};
return ((frost$core$UInt64$nullable) { $tmp150, true });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:106
frost$core$Int32 $tmp151 = (frost$core$Int32) {65u};
frost$core$Char32 $tmp152 = frost$core$Char32$init$frost$core$Int32($tmp151);
// begin inline call to function frost.core.Char32.>=(other:frost.core.Char32):frost.core.Bit from Frost.frost:106:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:52
int32_t $tmp153 = param0.value;
int32_t $tmp154 = $tmp152.value;
bool $tmp155 = $tmp153 >= $tmp154;
frost$core$Bit $tmp156 = (frost$core$Bit) {$tmp155};
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block10; else goto block9;
block10:;
frost$core$Int32 $tmp158 = (frost$core$Int32) {90u};
frost$core$Char32 $tmp159 = frost$core$Char32$init$frost$core$Int32($tmp158);
// begin inline call to function frost.core.Char32.<=(other:frost.core.Char32):frost.core.Bit from Frost.frost:106:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:47
int32_t $tmp160 = param0.value;
int32_t $tmp161 = $tmp159.value;
bool $tmp162 = $tmp160 <= $tmp161;
frost$core$Bit $tmp163 = (frost$core$Bit) {$tmp162};
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:107
// begin inline call to function frost.core.Char32.get_asUInt64():frost.core.UInt64 from Frost.frost:107:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:136
int32_t $tmp165 = param0.value;
frost$core$UInt64 $tmp166 = (frost$core$UInt64) {((uint64_t) $tmp165)};
frost$core$UInt8 $tmp167 = (frost$core$UInt8) {65u};
frost$core$Char8 $tmp168 = frost$core$Char8$init$frost$core$UInt8($tmp167);
// begin inline call to function frost.core.Char8.get_asUInt64():frost.core.UInt64 from Frost.frost:107:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:141
uint8_t $tmp169 = $tmp168.value;
frost$core$UInt64 $tmp170 = (frost$core$UInt64) {((uint64_t) $tmp169)};
uint64_t $tmp171 = $tmp166.value;
uint64_t $tmp172 = $tmp170.value;
uint64_t $tmp173 = $tmp171 - $tmp172;
frost$core$UInt64 $tmp174 = (frost$core$UInt64) {$tmp173};
frost$core$UInt64 $tmp175 = (frost$core$UInt64) {10u};
uint64_t $tmp176 = $tmp174.value;
uint64_t $tmp177 = $tmp175.value;
uint64_t $tmp178 = $tmp176 + $tmp177;
frost$core$UInt64 $tmp179 = (frost$core$UInt64) {$tmp178};
return ((frost$core$UInt64$nullable) { $tmp179, true });
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:109
frost$core$Int32 $tmp180 = (frost$core$Int32) {97u};
frost$core$Char32 $tmp181 = frost$core$Char32$init$frost$core$Int32($tmp180);
// begin inline call to function frost.core.Char32.>=(other:frost.core.Char32):frost.core.Bit from Frost.frost:109:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:52
int32_t $tmp182 = param0.value;
int32_t $tmp183 = $tmp181.value;
bool $tmp184 = $tmp182 >= $tmp183;
frost$core$Bit $tmp185 = (frost$core$Bit) {$tmp184};
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block17; else goto block16;
block17:;
frost$core$Int32 $tmp187 = (frost$core$Int32) {122u};
frost$core$Char32 $tmp188 = frost$core$Char32$init$frost$core$Int32($tmp187);
// begin inline call to function frost.core.Char32.<=(other:frost.core.Char32):frost.core.Bit from Frost.frost:109:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:47
int32_t $tmp189 = param0.value;
int32_t $tmp190 = $tmp188.value;
bool $tmp191 = $tmp189 <= $tmp190;
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191};
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:110
// begin inline call to function frost.core.Char32.get_asUInt64():frost.core.UInt64 from Frost.frost:110:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:136
int32_t $tmp194 = param0.value;
frost$core$UInt64 $tmp195 = (frost$core$UInt64) {((uint64_t) $tmp194)};
frost$core$UInt8 $tmp196 = (frost$core$UInt8) {97u};
frost$core$Char8 $tmp197 = frost$core$Char8$init$frost$core$UInt8($tmp196);
// begin inline call to function frost.core.Char8.get_asUInt64():frost.core.UInt64 from Frost.frost:110:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:141
uint8_t $tmp198 = $tmp197.value;
frost$core$UInt64 $tmp199 = (frost$core$UInt64) {((uint64_t) $tmp198)};
uint64_t $tmp200 = $tmp195.value;
uint64_t $tmp201 = $tmp199.value;
uint64_t $tmp202 = $tmp200 - $tmp201;
frost$core$UInt64 $tmp203 = (frost$core$UInt64) {$tmp202};
frost$core$UInt64 $tmp204 = (frost$core$UInt64) {10u};
uint64_t $tmp205 = $tmp203.value;
uint64_t $tmp206 = $tmp204.value;
uint64_t $tmp207 = $tmp205 + $tmp206;
frost$core$UInt64 $tmp208 = (frost$core$UInt64) {$tmp207};
return ((frost$core$UInt64$nullable) { $tmp208, true });
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:112
return ((frost$core$UInt64$nullable) { .nonnull = false });

}
frost$core$UInt64$nullable frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(frost$core$String* param0, frost$core$Int param1) {

frost$core$UInt64 local0;
frost$core$UInt64 local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$UInt64$nullable local7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:120
frost$core$Bit $tmp209 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s210);
bool $tmp211 = $tmp209.value;
if ($tmp211) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:121
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:123
frost$core$UInt64 $tmp212 = (frost$core$UInt64) {0u};
*(&local0) = $tmp212;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:124
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Frost.frost:124:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
int64_t $tmp213 = param1.value;
frost$core$UInt64 $tmp214 = (frost$core$UInt64) {((uint64_t) $tmp213)};
*(&local1) = $tmp214;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:125
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:125:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp215 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp216 = &(&local3)->value;
*$tmp216 = $tmp215;
frost$core$String$Index $tmp217 = *(&local3);
*(&local2) = $tmp217;
frost$core$String$Index $tmp218 = *(&local2);
*(&local4) = $tmp218;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:126
goto block6;
block6:;
frost$core$String$Index $tmp219 = *(&local4);
frost$core$String$Index$wrapper* $tmp220;
$tmp220 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp220->value = $tmp219;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Frost.frost:126:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp221 = &param0->_length;
frost$core$Int $tmp222 = *$tmp221;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp223 = &(&local6)->value;
*$tmp223 = $tmp222;
frost$core$String$Index $tmp224 = *(&local6);
*(&local5) = $tmp224;
frost$core$String$Index $tmp225 = *(&local5);
frost$core$String$Index$wrapper* $tmp226;
$tmp226 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp226->value = $tmp225;
ITable* $tmp227 = ((frost$core$Equatable*) $tmp220)->$class->itable;
while ($tmp227->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp227 = $tmp227->next;
}
$fn229 $tmp228 = $tmp227->methods[1];
frost$core$Bit $tmp230 = $tmp228(((frost$core$Equatable*) $tmp220), ((frost$core$Equatable*) $tmp226));
bool $tmp231 = $tmp230.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp226)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp220)));
if ($tmp231) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:127
frost$core$String$Index $tmp232 = *(&local4);
frost$core$Char32 $tmp233 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp232);
frost$core$UInt64$nullable $tmp234 = frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q($tmp233);
*(&local7) = $tmp234;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:128
frost$core$UInt64$nullable $tmp235 = *(&local7);
frost$core$Bit $tmp236 = (frost$core$Bit) {!$tmp235.nonnull};
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block11; else goto block13;
block13:;
frost$core$UInt64$nullable $tmp238 = *(&local7);
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238.nonnull};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block14; else goto block15;
block15:;
frost$core$Int $tmp241 = (frost$core$Int) {128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s242, $tmp241, &$s243);
abort(); // unreachable
block14:;
frost$core$UInt64 $tmp244 = *(&local1);
uint64_t $tmp245 = ((frost$core$UInt64) $tmp238.value).value;
uint64_t $tmp246 = $tmp244.value;
bool $tmp247 = $tmp245 >= $tmp246;
frost$core$Bit $tmp248 = (frost$core$Bit) {$tmp247};
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:129
return ((frost$core$UInt64$nullable) { .nonnull = false });
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:131
frost$core$UInt64 $tmp250 = *(&local0);
frost$core$UInt64 $tmp251 = *(&local1);
uint64_t $tmp252 = $tmp250.value;
uint64_t $tmp253 = $tmp251.value;
uint64_t $tmp254 = $tmp252 * $tmp253;
frost$core$UInt64 $tmp255 = (frost$core$UInt64) {$tmp254};
frost$core$UInt64$nullable $tmp256 = *(&local7);
frost$core$Bit $tmp257 = (frost$core$Bit) {$tmp256.nonnull};
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block16; else goto block17;
block17:;
frost$core$Int $tmp259 = (frost$core$Int) {131u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s260, $tmp259, &$s261);
abort(); // unreachable
block16:;
uint64_t $tmp262 = $tmp255.value;
uint64_t $tmp263 = ((frost$core$UInt64) $tmp256.value).value;
uint64_t $tmp264 = $tmp262 + $tmp263;
frost$core$UInt64 $tmp265 = (frost$core$UInt64) {$tmp264};
*(&local0) = $tmp265;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:132
frost$core$String$Index $tmp266 = *(&local4);
frost$core$String$Index $tmp267 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp266);
*(&local4) = $tmp267;
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:134
frost$core$UInt64 $tmp268 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp268, true });

}
frost$core$String* frost$core$Frost$align$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$Int$nullable local5;
frost$core$Int64$nullable local6;
frost$core$Int$nullable local7;
frost$core$Char32 local8;
frost$core$String$Index local9;
frost$core$String$Index local10;
frost$core$String$Index local11;
frost$core$String$Index local12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:160
// begin inline call to function frost.core.String.get_length():frost.core.Int from Frost.frost:160:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp269 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp269->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp269 = $tmp269->next;
}
$fn271 $tmp270 = $tmp269->methods[0];
frost$collections$Iterator* $tmp272 = $tmp270(((frost$collections$Iterable*) param1));
ITable* $tmp273 = $tmp272->$class->itable;
while ($tmp273->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp273 = $tmp273->next;
}
$fn275 $tmp274 = $tmp273->methods[2];
frost$core$Int $tmp276 = $tmp274($tmp272);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Int $tmp277 = (frost$core$Int) {2u};
int64_t $tmp278 = $tmp276.value;
int64_t $tmp279 = $tmp277.value;
bool $tmp280 = $tmp278 >= $tmp279;
frost$core$Bit $tmp281 = (frost$core$Bit) {$tmp280};
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block2; else goto block3;
block3:;
frost$core$Int $tmp283 = (frost$core$Int) {160u};
frost$core$String* $tmp284 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s285, param1);
frost$core$String* $tmp286 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp284, &$s287);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s288, $tmp283, $tmp286);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:161
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:161:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp289 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp290 = &(&local1)->value;
*$tmp290 = $tmp289;
frost$core$String$Index $tmp291 = *(&local1);
*(&local0) = $tmp291;
frost$core$String$Index $tmp292 = *(&local0);
frost$core$String$Index $tmp293 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp292);
*(&local2) = $tmp293;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:162
frost$core$String$Index $tmp294 = *(&local2);
frost$core$Char32 $tmp295 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp294);
frost$core$Int32 $tmp296 = (frost$core$Int32) {60u};
frost$core$Char32 $tmp297 = frost$core$Char32$init$frost$core$Int32($tmp296);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:163:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp298 = $tmp295.value;
int32_t $tmp299 = $tmp297.value;
bool $tmp300 = $tmp298 == $tmp299;
frost$core$Bit $tmp301 = (frost$core$Bit) {$tmp300};
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block7; else goto block8;
block8:;
frost$core$Int32 $tmp303 = (frost$core$Int32) {94u};
frost$core$Char32 $tmp304 = frost$core$Char32$init$frost$core$Int32($tmp303);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:163:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp305 = $tmp295.value;
int32_t $tmp306 = $tmp304.value;
bool $tmp307 = $tmp305 == $tmp306;
frost$core$Bit $tmp308 = (frost$core$Bit) {$tmp307};
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block7; else goto block10;
block10:;
frost$core$Int32 $tmp310 = (frost$core$Int32) {62u};
frost$core$Char32 $tmp311 = frost$core$Char32$init$frost$core$Int32($tmp310);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:163:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp312 = $tmp295.value;
int32_t $tmp313 = $tmp311.value;
bool $tmp314 = $tmp312 == $tmp313;
frost$core$Bit $tmp315 = (frost$core$Bit) {$tmp314};
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block7; else goto block12;
block7:;
goto block6;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:167
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:167:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp317 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp318 = &(&local4)->value;
*$tmp318 = $tmp317;
frost$core$String$Index $tmp319 = *(&local4);
*(&local3) = $tmp319;
frost$core$String$Index $tmp320 = *(&local3);
*(&local2) = $tmp320;
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:170
frost$core$String$Index $tmp321 = *(&local2);
frost$core$String$Index $tmp322 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp321);
frost$core$Bit $tmp323 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp324 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp322, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp323);
frost$core$String* $tmp325 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp324);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Frost.frost:170:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp326 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp325);
*(&local6) = $tmp326;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
frost$core$Int64$nullable $tmp327 = *(&local6);
frost$core$Bit $tmp328 = (frost$core$Bit) {$tmp327.nonnull};
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
frost$core$Int64$nullable $tmp330 = *(&local6);
frost$core$Bit $tmp331 = (frost$core$Bit) {$tmp330.nonnull};
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block19; else goto block20;
block20:;
frost$core$Int $tmp333 = (frost$core$Int) {1456u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s334, $tmp333, &$s335);
abort(); // unreachable
block19:;
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp336 = ((frost$core$Int64) $tmp330.value).value;
frost$core$Int $tmp337 = (frost$core$Int) {((int64_t) $tmp336)};
*(&local5) = ((frost$core$Int$nullable) { $tmp337, true });
goto block16;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local5) = ((frost$core$Int$nullable) { .nonnull = false });
goto block16;
block16:;
frost$core$Int$nullable $tmp338 = *(&local5);
*(&local7) = $tmp338;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:171
frost$core$Int$nullable $tmp339 = *(&local7);
frost$core$Bit $tmp340 = (frost$core$Bit) {$tmp339.nonnull};
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block22; else goto block23;
block23:;
frost$core$Int $tmp342 = (frost$core$Int) {171u};
frost$core$String* $tmp343 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s344, param1);
frost$core$String* $tmp345 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp343, &$s346);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s347, $tmp342, $tmp345);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:172
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:173
frost$core$String$Index $tmp348 = *(&local2);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:173:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp349 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp350 = &(&local10)->value;
*$tmp350 = $tmp349;
frost$core$String$Index $tmp351 = *(&local10);
*(&local9) = $tmp351;
frost$core$String$Index $tmp352 = *(&local9);
// begin inline call to function frost.core.String.Index.=(other:frost.core.String.Index):frost.core.Bit from Frost.frost:173:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:66
frost$core$Int $tmp353 = $tmp348.value;
frost$core$Int $tmp354 = $tmp352.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp355 = $tmp353.value;
int64_t $tmp356 = $tmp354.value;
bool $tmp357 = $tmp355 == $tmp356;
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block24; else goto block26;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:174
frost$core$Int32 $tmp360 = (frost$core$Int32) {32u};
frost$core$Char32 $tmp361 = frost$core$Char32$init$frost$core$Int32($tmp360);
*(&local8) = $tmp361;
goto block25;
block26:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:177
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:177:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp362 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp363 = &(&local12)->value;
*$tmp363 = $tmp362;
frost$core$String$Index $tmp364 = *(&local12);
*(&local11) = $tmp364;
frost$core$String$Index $tmp365 = *(&local11);
frost$core$Char32 $tmp366 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp365);
*(&local8) = $tmp366;
goto block25;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:179
frost$core$String$Index $tmp367 = *(&local2);
frost$core$Char32 $tmp368 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp367);
frost$core$Int32 $tmp369 = (frost$core$Int32) {60u};
frost$core$Char32 $tmp370 = frost$core$Char32$init$frost$core$Int32($tmp369);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:180:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp371 = $tmp368.value;
int32_t $tmp372 = $tmp370.value;
bool $tmp373 = $tmp371 == $tmp372;
frost$core$Bit $tmp374 = (frost$core$Bit) {$tmp373};
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:180
frost$core$Int$nullable $tmp376 = *(&local7);
frost$core$Bit $tmp377 = (frost$core$Bit) {$tmp376.nonnull};
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block37; else goto block38;
block38:;
frost$core$Int $tmp379 = (frost$core$Int) {180u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s380, $tmp379, &$s381);
abort(); // unreachable
block37:;
frost$core$Char32 $tmp382 = *(&local8);
frost$core$String* $tmp383 = frost$core$String$leftAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int) $tmp376.value), $tmp382);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
return $tmp383;
block35:;
frost$core$Int32 $tmp384 = (frost$core$Int32) {94u};
frost$core$Char32 $tmp385 = frost$core$Char32$init$frost$core$Int32($tmp384);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:181:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp386 = $tmp368.value;
int32_t $tmp387 = $tmp385.value;
bool $tmp388 = $tmp386 == $tmp387;
frost$core$Bit $tmp389 = (frost$core$Bit) {$tmp388};
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:181
frost$core$Int$nullable $tmp391 = *(&local7);
frost$core$Bit $tmp392 = (frost$core$Bit) {$tmp391.nonnull};
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block42; else goto block43;
block43:;
frost$core$Int $tmp394 = (frost$core$Int) {181u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s395, $tmp394, &$s396);
abort(); // unreachable
block42:;
frost$core$Char32 $tmp397 = *(&local8);
frost$core$String* $tmp398 = frost$core$String$centerAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int) $tmp391.value), $tmp397);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
return $tmp398;
block40:;
frost$core$Int32 $tmp399 = (frost$core$Int32) {62u};
frost$core$Char32 $tmp400 = frost$core$Char32$init$frost$core$Int32($tmp399);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:182:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp401 = $tmp368.value;
int32_t $tmp402 = $tmp400.value;
bool $tmp403 = $tmp401 == $tmp402;
frost$core$Bit $tmp404 = (frost$core$Bit) {$tmp403};
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:182
frost$core$Int$nullable $tmp406 = *(&local7);
frost$core$Bit $tmp407 = (frost$core$Bit) {$tmp406.nonnull};
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block47; else goto block48;
block48:;
frost$core$Int $tmp409 = (frost$core$Int) {182u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s410, $tmp409, &$s411);
abort(); // unreachable
block47:;
frost$core$Char32 $tmp412 = *(&local8);
frost$core$String* $tmp413 = frost$core$String$rightAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int) $tmp406.value), $tmp412);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
return $tmp413;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:183
frost$core$Int $tmp414 = (frost$core$Int) {183u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s415, $tmp414);
abort(); // unreachable
block33:;
goto block49;
block49:;

}
frost$core$String* frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String(frost$core$Bit param0, frost$core$UInt64 param1, frost$core$UInt64 param2, frost$core$String* param3) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$UInt64 local3;
frost$collections$ListView* local4 = NULL;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$UInt64 local7;
frost$core$Int local8;
frost$core$Char8* local9;
frost$core$Int local10;
frost$core$Int local11;
frost$core$Int local12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:197
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:197:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp416 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp417 = &(&local1)->value;
*$tmp417 = $tmp416;
frost$core$String$Index $tmp418 = *(&local1);
*(&local0) = $tmp418;
frost$core$String$Index $tmp419 = *(&local0);
*(&local2) = $tmp419;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:198
frost$core$UInt64 $tmp420 = (frost$core$UInt64) {10u};
*(&local3) = $tmp420;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:199
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Frost.frost:199:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp421 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp421, &$s422);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp421)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp421)));
frost$collections$ListView* $tmp423 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
*(&local4) = ((frost$collections$ListView*) $tmp421);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp421)));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:200
frost$core$String$Index $tmp424 = *(&local2);
frost$core$String$Index$wrapper* $tmp425;
$tmp425 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp425->value = $tmp424;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Frost.frost:200:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp426 = &param3->_length;
frost$core$Int $tmp427 = *$tmp426;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp428 = &(&local6)->value;
*$tmp428 = $tmp427;
frost$core$String$Index $tmp429 = *(&local6);
*(&local5) = $tmp429;
frost$core$String$Index $tmp430 = *(&local5);
frost$core$String$Index$wrapper* $tmp431;
$tmp431 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp431->value = $tmp430;
ITable* $tmp432 = ((frost$core$Comparable*) $tmp425)->$class->itable;
while ($tmp432->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp432 = $tmp432->next;
}
$fn434 $tmp433 = $tmp432->methods[1];
frost$core$Bit $tmp435 = $tmp433(((frost$core$Comparable*) $tmp425), ((frost$core$Comparable*) $tmp431));
bool $tmp436 = $tmp435.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp431)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp425)));
if ($tmp436) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:201
frost$core$String$Index $tmp437 = *(&local2);
frost$core$Char32 $tmp438 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param3, $tmp437);
frost$core$Int32 $tmp439 = (frost$core$Int32) {98u};
frost$core$Char32 $tmp440 = frost$core$Char32$init$frost$core$Int32($tmp439);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:202:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp441 = $tmp438.value;
int32_t $tmp442 = $tmp440.value;
bool $tmp443 = $tmp441 == $tmp442;
frost$core$Bit $tmp444 = (frost$core$Bit) {$tmp443};
bool $tmp445 = $tmp444.value;
if ($tmp445) goto block9; else goto block10;
block10:;
frost$core$Int32 $tmp446 = (frost$core$Int32) {66u};
frost$core$Char32 $tmp447 = frost$core$Char32$init$frost$core$Int32($tmp446);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:202:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp448 = $tmp438.value;
int32_t $tmp449 = $tmp447.value;
bool $tmp450 = $tmp448 == $tmp449;
frost$core$Bit $tmp451 = (frost$core$Bit) {$tmp450};
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block9; else goto block12;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:203
frost$core$UInt64 $tmp453 = (frost$core$UInt64) {2u};
*(&local3) = $tmp453;
goto block8;
block12:;
frost$core$Int32 $tmp454 = (frost$core$Int32) {111u};
frost$core$Char32 $tmp455 = frost$core$Char32$init$frost$core$Int32($tmp454);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:205:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp456 = $tmp438.value;
int32_t $tmp457 = $tmp455.value;
bool $tmp458 = $tmp456 == $tmp457;
frost$core$Bit $tmp459 = (frost$core$Bit) {$tmp458};
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block14; else goto block15;
block15:;
frost$core$Int32 $tmp461 = (frost$core$Int32) {79u};
frost$core$Char32 $tmp462 = frost$core$Char32$init$frost$core$Int32($tmp461);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:205:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp463 = $tmp438.value;
int32_t $tmp464 = $tmp462.value;
bool $tmp465 = $tmp463 == $tmp464;
frost$core$Bit $tmp466 = (frost$core$Bit) {$tmp465};
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block14; else goto block17;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:206
frost$core$UInt64 $tmp468 = (frost$core$UInt64) {8u};
*(&local3) = $tmp468;
goto block8;
block17:;
frost$core$Int32 $tmp469 = (frost$core$Int32) {100u};
frost$core$Char32 $tmp470 = frost$core$Char32$init$frost$core$Int32($tmp469);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:208:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp471 = $tmp438.value;
int32_t $tmp472 = $tmp470.value;
bool $tmp473 = $tmp471 == $tmp472;
frost$core$Bit $tmp474 = (frost$core$Bit) {$tmp473};
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block19; else goto block20;
block20:;
frost$core$Int32 $tmp476 = (frost$core$Int32) {68u};
frost$core$Char32 $tmp477 = frost$core$Char32$init$frost$core$Int32($tmp476);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:208:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp478 = $tmp438.value;
int32_t $tmp479 = $tmp477.value;
bool $tmp480 = $tmp478 == $tmp479;
frost$core$Bit $tmp481 = (frost$core$Bit) {$tmp480};
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block19; else goto block22;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:209
frost$core$UInt64 $tmp483 = (frost$core$UInt64) {10u};
*(&local3) = $tmp483;
goto block8;
block22:;
frost$core$Int32 $tmp484 = (frost$core$Int32) {120u};
frost$core$Char32 $tmp485 = frost$core$Char32$init$frost$core$Int32($tmp484);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:211:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp486 = $tmp438.value;
int32_t $tmp487 = $tmp485.value;
bool $tmp488 = $tmp486 == $tmp487;
frost$core$Bit $tmp489 = (frost$core$Bit) {$tmp488};
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:212
frost$core$UInt64 $tmp491 = (frost$core$UInt64) {16u};
*(&local3) = $tmp491;
goto block8;
block25:;
frost$core$Int32 $tmp492 = (frost$core$Int32) {88u};
frost$core$Char32 $tmp493 = frost$core$Char32$init$frost$core$Int32($tmp492);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:214:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp494 = $tmp438.value;
int32_t $tmp495 = $tmp493.value;
bool $tmp496 = $tmp494 == $tmp495;
frost$core$Bit $tmp497 = (frost$core$Bit) {$tmp496};
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:215
frost$core$UInt64 $tmp499 = (frost$core$UInt64) {16u};
*(&local3) = $tmp499;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:216
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Frost.frost:216:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp500 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp500, &$s501);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp500)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp500)));
frost$collections$ListView* $tmp502 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local4) = ((frost$collections$ListView*) $tmp500);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp500)));
goto block8;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:219
frost$core$Int $tmp503 = (frost$core$Int) {219u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s504, $tmp503, &$s505);
abort(); // unreachable
block8:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:223
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:224
bool $tmp506 = param0.value;
if ($tmp506) goto block34; else goto block33;
block34:;
frost$core$UInt64 $tmp507 = *(&local3);
frost$core$UInt64 $tmp508 = (frost$core$UInt64) {10u};
uint64_t $tmp509 = $tmp507.value;
uint64_t $tmp510 = $tmp508.value;
bool $tmp511 = $tmp509 != $tmp510;
frost$core$Bit $tmp512 = (frost$core$Bit) {$tmp511};
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block31; else goto block33;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:225
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Frost.frost:225:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp514 = param1.value;
frost$core$Int64 $tmp515 = (frost$core$Int64) {((int64_t) $tmp514)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Frost.frost:225:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
int64_t $tmp516 = $tmp515.value;
int64_t $tmp517 = -$tmp516;
frost$core$Int64 $tmp518 = (frost$core$Int64) {$tmp517};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Frost.frost:225:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp519 = $tmp518.value;
frost$core$UInt64 $tmp520 = (frost$core$UInt64) {((uint64_t) $tmp519)};
// begin inline call to function frost.core.UInt64.&&(other:frost.core.UInt64):frost.core.UInt64 from Frost.frost:225:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:166
uint64_t $tmp521 = $tmp520.value;
uint64_t $tmp522 = param2.value;
uint64_t $tmp523 = $tmp521 & $tmp522;
frost$core$UInt64 $tmp524 = (frost$core$UInt64) {$tmp523};
*(&local7) = $tmp524;
goto block32;
block33:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:228
*(&local7) = param1;
goto block32;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:230
frost$core$Int $tmp525 = (frost$core$Int) {64u};
*(&local8) = $tmp525;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:231
frost$core$Int $tmp526 = *(&local8);
frost$core$Int64 $tmp527 = frost$core$Int64$init$frost$core$Int($tmp526);
int64_t $tmp528 = $tmp527.value;
frost$core$Char8* $tmp529 = ((frost$core$Char8*) frostAlloc($tmp528 * 1));
*(&local9) = $tmp529;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:232
frost$core$Int $tmp530 = *(&local8);
frost$core$Int $tmp531 = (frost$core$Int) {1u};
int64_t $tmp532 = $tmp530.value;
int64_t $tmp533 = $tmp531.value;
int64_t $tmp534 = $tmp532 - $tmp533;
frost$core$Int $tmp535 = (frost$core$Int) {$tmp534};
*(&local10) = $tmp535;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:233
goto block39;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:234
frost$core$Char8* $tmp536 = *(&local9);
frost$core$Int $tmp537 = *(&local10);
frost$core$Int64 $tmp538 = frost$core$Int64$init$frost$core$Int($tmp537);
frost$collections$ListView* $tmp539 = *(&local4);
frost$core$UInt64 $tmp540 = *(&local7);
frost$core$UInt64 $tmp541 = *(&local3);
// begin inline call to function frost.core.UInt64.%(other:frost.core.UInt64):frost.core.UInt64 from Frost.frost:234:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:89
uint64_t $tmp542 = $tmp540.value;
uint64_t $tmp543 = $tmp541.value;
uint64_t $tmp544 = $tmp542 % $tmp543;
frost$core$UInt64 $tmp545 = (frost$core$UInt64) {$tmp544};
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Frost.frost:234:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
uint64_t $tmp546 = $tmp545.value;
frost$core$Int $tmp547 = (frost$core$Int) {((int64_t) $tmp546)};
ITable* $tmp548 = $tmp539->$class->itable;
while ($tmp548->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp548 = $tmp548->next;
}
$fn550 $tmp549 = $tmp548->methods[0];
frost$core$Object* $tmp551 = $tmp549($tmp539, $tmp547);
int64_t $tmp552 = $tmp538.value;
$tmp536[$tmp552] = ((frost$core$Char8$wrapper*) $tmp551)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp551);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:235
frost$core$UInt64 $tmp553 = *(&local7);
frost$core$UInt64 $tmp554 = *(&local3);
uint64_t $tmp555 = $tmp553.value;
uint64_t $tmp556 = $tmp554.value;
uint64_t $tmp557 = $tmp555 / $tmp556;
frost$core$UInt64 $tmp558 = (frost$core$UInt64) {$tmp557};
*(&local7) = $tmp558;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:236
frost$core$Int $tmp559 = *(&local10);
frost$core$Int $tmp560 = (frost$core$Int) {1u};
int64_t $tmp561 = $tmp559.value;
int64_t $tmp562 = $tmp560.value;
int64_t $tmp563 = $tmp561 - $tmp562;
frost$core$Int $tmp564 = (frost$core$Int) {$tmp563};
*(&local10) = $tmp564;
frost$core$UInt64 $tmp565 = *(&local7);
frost$core$UInt64 $tmp566 = (frost$core$UInt64) {0u};
uint64_t $tmp567 = $tmp565.value;
uint64_t $tmp568 = $tmp566.value;
bool $tmp569 = $tmp567 > $tmp568;
frost$core$Bit $tmp570 = (frost$core$Bit) {$tmp569};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block39; else goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:239
bool $tmp572 = param0.value;
if ($tmp572) goto block46; else goto block45;
block46:;
frost$core$UInt64 $tmp573 = *(&local3);
frost$core$UInt64 $tmp574 = (frost$core$UInt64) {10u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from Frost.frost:239:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
uint64_t $tmp575 = $tmp573.value;
uint64_t $tmp576 = $tmp574.value;
bool $tmp577 = $tmp575 == $tmp576;
frost$core$Bit $tmp578 = (frost$core$Bit) {$tmp577};
bool $tmp579 = $tmp578.value;
if ($tmp579) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:240
frost$core$Char8* $tmp580 = *(&local9);
frost$core$Int $tmp581 = *(&local10);
frost$core$Int64 $tmp582 = frost$core$Int64$init$frost$core$Int($tmp581);
frost$core$UInt8 $tmp583 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp584 = frost$core$Char8$init$frost$core$UInt8($tmp583);
int64_t $tmp585 = $tmp582.value;
$tmp580[$tmp585] = $tmp584;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:241
frost$core$Int $tmp586 = *(&local10);
frost$core$Int $tmp587 = (frost$core$Int) {1u};
int64_t $tmp588 = $tmp586.value;
int64_t $tmp589 = $tmp587.value;
int64_t $tmp590 = $tmp588 - $tmp589;
frost$core$Int $tmp591 = (frost$core$Int) {$tmp590};
*(&local10) = $tmp591;
goto block45;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:243
frost$core$Int $tmp592 = *(&local10);
frost$core$Int $tmp593 = (frost$core$Int) {1u};
int64_t $tmp594 = $tmp592.value;
int64_t $tmp595 = $tmp593.value;
int64_t $tmp596 = $tmp594 + $tmp595;
frost$core$Int $tmp597 = (frost$core$Int) {$tmp596};
*(&local10) = $tmp597;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:244
frost$core$Int $tmp598 = *(&local8);
frost$core$Int $tmp599 = *(&local10);
int64_t $tmp600 = $tmp598.value;
int64_t $tmp601 = $tmp599.value;
int64_t $tmp602 = $tmp600 - $tmp601;
frost$core$Int $tmp603 = (frost$core$Int) {$tmp602};
*(&local11) = $tmp603;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:245
frost$core$Int $tmp604 = (frost$core$Int) {0u};
frost$core$Int $tmp605 = *(&local11);
frost$core$Bit $tmp606 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp607 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp604, $tmp605, $tmp606);
frost$core$Int $tmp608 = $tmp607.min;
*(&local12) = $tmp608;
frost$core$Int $tmp609 = $tmp607.max;
frost$core$Bit $tmp610 = $tmp607.inclusive;
bool $tmp611 = $tmp610.value;
frost$core$Int $tmp612 = (frost$core$Int) {1u};
if ($tmp611) goto block51; else goto block52;
block51:;
int64_t $tmp613 = $tmp608.value;
int64_t $tmp614 = $tmp609.value;
bool $tmp615 = $tmp613 <= $tmp614;
frost$core$Bit $tmp616 = (frost$core$Bit) {$tmp615};
bool $tmp617 = $tmp616.value;
if ($tmp617) goto block48; else goto block49;
block52:;
int64_t $tmp618 = $tmp608.value;
int64_t $tmp619 = $tmp609.value;
bool $tmp620 = $tmp618 < $tmp619;
frost$core$Bit $tmp621 = (frost$core$Bit) {$tmp620};
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:246
frost$core$Char8* $tmp623 = *(&local9);
frost$core$Int $tmp624 = *(&local12);
frost$core$Int64 $tmp625 = frost$core$Int64$init$frost$core$Int($tmp624);
frost$core$Char8* $tmp626 = *(&local9);
frost$core$Int $tmp627 = *(&local12);
frost$core$Int $tmp628 = *(&local10);
int64_t $tmp629 = $tmp627.value;
int64_t $tmp630 = $tmp628.value;
int64_t $tmp631 = $tmp629 + $tmp630;
frost$core$Int $tmp632 = (frost$core$Int) {$tmp631};
frost$core$Int64 $tmp633 = frost$core$Int64$init$frost$core$Int($tmp632);
int64_t $tmp634 = $tmp633.value;
frost$core$Char8 $tmp635 = $tmp626[$tmp634];
int64_t $tmp636 = $tmp625.value;
$tmp623[$tmp636] = $tmp635;
frost$core$Int $tmp637 = *(&local12);
int64_t $tmp638 = $tmp609.value;
int64_t $tmp639 = $tmp637.value;
int64_t $tmp640 = $tmp638 - $tmp639;
frost$core$Int $tmp641 = (frost$core$Int) {$tmp640};
if ($tmp611) goto block54; else goto block55;
block54:;
int64_t $tmp642 = $tmp641.value;
int64_t $tmp643 = $tmp612.value;
bool $tmp644 = $tmp642 >= $tmp643;
frost$core$Bit $tmp645 = (frost$core$Bit) {$tmp644};
bool $tmp646 = $tmp645.value;
if ($tmp646) goto block53; else goto block49;
block55:;
int64_t $tmp647 = $tmp641.value;
int64_t $tmp648 = $tmp612.value;
bool $tmp649 = $tmp647 > $tmp648;
frost$core$Bit $tmp650 = (frost$core$Bit) {$tmp649};
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block53; else goto block49;
block53:;
int64_t $tmp652 = $tmp637.value;
int64_t $tmp653 = $tmp612.value;
int64_t $tmp654 = $tmp652 + $tmp653;
frost$core$Int $tmp655 = (frost$core$Int) {$tmp654};
*(&local12) = $tmp655;
goto block48;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:248
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp656 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp657 = *(&local9);
frost$core$Int $tmp658 = *(&local11);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp656, $tmp657, $tmp658);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$collections$ListView* $tmp659 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
*(&local4) = ((frost$collections$ListView*) NULL);
return $tmp656;

}
frost$core$Int frost$core$Frost$hash$frost$collections$HashKey$LTfrost$core$Frost$hash$T$GT$Q$R$frost$core$Int(frost$collections$HashKey* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:253
frost$core$Bit $tmp660 = (frost$core$Bit) {param0 != NULL};
bool $tmp661 = $tmp660.value;
if ($tmp661) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:254
frost$core$Bit $tmp662 = (frost$core$Bit) {param0 != NULL};
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block3; else goto block4;
block4:;
frost$core$Int $tmp664 = (frost$core$Int) {254u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s665, $tmp664, &$s666);
abort(); // unreachable
block3:;
ITable* $tmp667 = param0->$class->itable;
while ($tmp667->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp667 = $tmp667->next;
}
$fn669 $tmp668 = $tmp667->methods[0];
frost$core$Int $tmp670 = $tmp668(param0);
return $tmp670;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:256
frost$core$Int $tmp671 = (frost$core$Int) {0u};
return $tmp671;

}
frost$core$String* frost$core$Frost$string$frost$core$Object$Q$R$frost$core$String(frost$core$Object* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:261
frost$core$Bit $tmp672 = (frost$core$Bit) {param0 != NULL};
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:262
frost$core$Bit $tmp674 = (frost$core$Bit) {param0 != NULL};
bool $tmp675 = $tmp674.value;
if ($tmp675) goto block3; else goto block4;
block4:;
frost$core$Int $tmp676 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s677, $tmp676, &$s678);
abort(); // unreachable
block3:;
$fn680 $tmp679 = ($fn680) param0->$class->vtable[0];
frost$core$String* $tmp681 = $tmp679(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
return $tmp681;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:264
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s682));
return &$s683;

}
void frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int$frost$core$Int(frost$collections$List* param0, frost$core$Int param1, frost$core$Int param2) {

frost$core$Object* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:286
ITable* $tmp684 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp684->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp684 = $tmp684->next;
}
$fn686 $tmp685 = $tmp684->methods[0];
frost$core$Object* $tmp687 = $tmp685(((frost$collections$ListView*) param0), param1);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp687);
frost$core$Object* $tmp688 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp688);
*(&local0) = $tmp687;
frost$core$Frost$unref$frost$core$Object$Q($tmp687);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:287
ITable* $tmp689 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp689->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp689 = $tmp689->next;
}
$fn691 $tmp690 = $tmp689->methods[0];
frost$core$Object* $tmp692 = $tmp690(((frost$collections$ListView*) param0), param2);
ITable* $tmp693 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp693->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp693 = $tmp693->next;
}
$fn695 $tmp694 = $tmp693->methods[0];
$tmp694(((frost$collections$ListWriter*) param0), param1, $tmp692);
frost$core$Frost$unref$frost$core$Object$Q($tmp692);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:288
frost$core$Object* $tmp696 = *(&local0);
ITable* $tmp697 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp697->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp697 = $tmp697->next;
}
$fn699 $tmp698 = $tmp697->methods[0];
$tmp698(((frost$collections$ListWriter*) param0), param2, $tmp696);
frost$core$Object* $tmp700 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp700);
*(&local0) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int$frost$core$Int$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$Int param1, frost$core$Int param2, frost$core$MutableMethod* param3) {

frost$core$Int local0;
frost$core$Object* local1 = NULL;
frost$core$Int local2;
frost$core$Int local3;
frost$core$Bit local4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:295
int64_t $tmp701 = param1.value;
int64_t $tmp702 = param2.value;
bool $tmp703 = $tmp701 >= $tmp702;
frost$core$Bit $tmp704 = (frost$core$Bit) {$tmp703};
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:296
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:298
int64_t $tmp706 = param2.value;
int64_t $tmp707 = param1.value;
int64_t $tmp708 = $tmp706 - $tmp707;
frost$core$Int $tmp709 = (frost$core$Int) {$tmp708};
frost$core$Int $tmp710 = (frost$core$Int) {2u};
int64_t $tmp711 = $tmp709.value;
int64_t $tmp712 = $tmp710.value;
int64_t $tmp713 = $tmp711 / $tmp712;
frost$core$Int $tmp714 = (frost$core$Int) {$tmp713};
int64_t $tmp715 = param1.value;
int64_t $tmp716 = $tmp714.value;
int64_t $tmp717 = $tmp715 + $tmp716;
frost$core$Int $tmp718 = (frost$core$Int) {$tmp717};
*(&local0) = $tmp718;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:299
frost$core$Int $tmp719 = *(&local0);
ITable* $tmp720 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp720->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp720 = $tmp720->next;
}
$fn722 $tmp721 = $tmp720->methods[0];
frost$core$Object* $tmp723 = $tmp721(((frost$collections$ListView*) param0), $tmp719);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp723);
frost$core$Object* $tmp724 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp724);
*(&local1) = $tmp723;
frost$core$Frost$unref$frost$core$Object$Q($tmp723);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:300
frost$core$Int $tmp725 = *(&local0);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int$frost$core$Int(param0, param2, $tmp725);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:301
*(&local2) = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:302
frost$core$Int $tmp726 = (frost$core$Int) {1u};
int64_t $tmp727 = param2.value;
int64_t $tmp728 = $tmp726.value;
int64_t $tmp729 = $tmp727 - $tmp728;
frost$core$Int $tmp730 = (frost$core$Int) {$tmp729};
frost$core$Bit $tmp731 = (frost$core$Bit) {true};
frost$core$Range$LTfrost$core$Int$GT $tmp732 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(param1, $tmp730, $tmp731);
frost$core$Int $tmp733 = $tmp732.min;
*(&local3) = $tmp733;
frost$core$Int $tmp734 = $tmp732.max;
frost$core$Bit $tmp735 = $tmp732.inclusive;
bool $tmp736 = $tmp735.value;
frost$core$Int $tmp737 = (frost$core$Int) {1u};
if ($tmp736) goto block6; else goto block7;
block6:;
int64_t $tmp738 = $tmp733.value;
int64_t $tmp739 = $tmp734.value;
bool $tmp740 = $tmp738 <= $tmp739;
frost$core$Bit $tmp741 = (frost$core$Bit) {$tmp740};
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block3; else goto block4;
block7:;
int64_t $tmp743 = $tmp733.value;
int64_t $tmp744 = $tmp734.value;
bool $tmp745 = $tmp743 < $tmp744;
frost$core$Bit $tmp746 = (frost$core$Bit) {$tmp745};
bool $tmp747 = $tmp746.value;
if ($tmp747) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:303
frost$core$Int $tmp748 = *(&local3);
ITable* $tmp749 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp749->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp749 = $tmp749->next;
}
$fn751 $tmp750 = $tmp749->methods[0];
frost$core$Object* $tmp752 = $tmp750(((frost$collections$ListView*) param0), $tmp748);
frost$core$Object* $tmp753 = *(&local1);
frost$core$Int8** $tmp754 = &param3->pointer;
frost$core$Int8* $tmp755 = *$tmp754;
frost$core$Object** $tmp756 = &param3->target;
frost$core$Object* $tmp757 = *$tmp756;
bool $tmp758 = $tmp757 != ((frost$core$Object*) NULL);
if ($tmp758) goto block10; else goto block11;
block11:;
frost$core$Bit $tmp760 = (($fn759) $tmp755)($tmp752, $tmp753);
*(&local4) = $tmp760;
goto block12;
block10:;
frost$core$Bit $tmp762 = (($fn761) $tmp755)($tmp757, $tmp752, $tmp753);
*(&local4) = $tmp762;
goto block12;
block12:;
frost$core$Bit $tmp763 = *(&local4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Frost.frost:303:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp764 = $tmp763.value;
bool $tmp765 = !$tmp764;
frost$core$Bit $tmp766 = (frost$core$Bit) {$tmp765};
bool $tmp767 = $tmp766.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp752);
if ($tmp767) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:304
frost$core$Int $tmp768 = *(&local3);
frost$core$Int $tmp769 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int$frost$core$Int(param0, $tmp768, $tmp769);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:305
frost$core$Int $tmp770 = *(&local2);
frost$core$Int $tmp771 = (frost$core$Int) {1u};
int64_t $tmp772 = $tmp770.value;
int64_t $tmp773 = $tmp771.value;
int64_t $tmp774 = $tmp772 + $tmp773;
frost$core$Int $tmp775 = (frost$core$Int) {$tmp774};
*(&local2) = $tmp775;
goto block9;
block9:;
frost$core$Int $tmp776 = *(&local3);
int64_t $tmp777 = $tmp734.value;
int64_t $tmp778 = $tmp776.value;
int64_t $tmp779 = $tmp777 - $tmp778;
frost$core$Int $tmp780 = (frost$core$Int) {$tmp779};
if ($tmp736) goto block15; else goto block16;
block15:;
int64_t $tmp781 = $tmp780.value;
int64_t $tmp782 = $tmp737.value;
bool $tmp783 = $tmp781 >= $tmp782;
frost$core$Bit $tmp784 = (frost$core$Bit) {$tmp783};
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block14; else goto block4;
block16:;
int64_t $tmp786 = $tmp780.value;
int64_t $tmp787 = $tmp737.value;
bool $tmp788 = $tmp786 > $tmp787;
frost$core$Bit $tmp789 = (frost$core$Bit) {$tmp788};
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block14; else goto block4;
block14:;
int64_t $tmp791 = $tmp776.value;
int64_t $tmp792 = $tmp737.value;
int64_t $tmp793 = $tmp791 + $tmp792;
frost$core$Int $tmp794 = (frost$core$Int) {$tmp793};
*(&local3) = $tmp794;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:308
frost$core$Int $tmp795 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int$frost$core$Int(param0, $tmp795, param2);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:309
frost$core$Int $tmp796 = *(&local2);
frost$core$Int $tmp797 = (frost$core$Int) {1u};
int64_t $tmp798 = $tmp796.value;
int64_t $tmp799 = $tmp797.value;
int64_t $tmp800 = $tmp798 - $tmp799;
frost$core$Int $tmp801 = (frost$core$Int) {$tmp800};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int$frost$core$Int$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, param1, $tmp801, param3);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:310
frost$core$Int $tmp802 = *(&local2);
frost$core$Int $tmp803 = (frost$core$Int) {1u};
int64_t $tmp804 = $tmp802.value;
int64_t $tmp805 = $tmp803.value;
int64_t $tmp806 = $tmp804 + $tmp805;
frost$core$Int $tmp807 = (frost$core$Int) {$tmp806};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int$frost$core$Int$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, $tmp807, param2, param3);
frost$core$Object* $tmp808 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp808);
*(&local1) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$cleanup(frost$core$Frost* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:10
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

