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
#include "frost/io/OutputStream.h"
#include "frost/io/Console.h"
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


static frost$core$String $s1;
frost$core$Frost$class_type frost$core$Frost$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Frost$cleanup} };

typedef frost$collections$Iterator* (*$fn9)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn10)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn11)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn20)(frost$core$Object*);
typedef frost$core$Error* (*$fn21)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn25)(frost$core$Object*);
typedef frost$core$Error* (*$fn27)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn32)(frost$core$Object*);
typedef frost$core$Error* (*$fn33)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn37)(frost$core$Object*);
typedef frost$core$Error* (*$fn40)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn45)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn54)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn55)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn73)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Object* (*$fn74)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn83)(frost$collections$HashKey*);
typedef frost$core$String* (*$fn87)(frost$core$Object*);
typedef frost$core$String* (*$fn90)(frost$core$Object*);
typedef frost$core$Bit (*$fn93)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, 4237142976622831502, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3e\x3e", 157, -1998709794346150571, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 121, -6078753381508500794, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3e\x3e", 160, -8532473038477785904, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, 7669895969177076905, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, 7669895969177076905, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3a\x20", 3, 48285155966961582, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -6606133885720023461, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -6606133885720023461, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 3330193207084279677, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, -1839289420917840067, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 3626147090372997348, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x2e\x68\x61\x73\x68\x2e\x54\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4b\x65\x79", 87, -213319421083584948, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -5360016314918414915, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };

void frost$core$Frost$init(frost$core$Frost* param0) {

return;

}
frost$core$Maybe* frost$core$Frost$success$frost$core$Object$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$Object* param0) {

frost$core$Maybe* _1;
frost$core$Maybe* _2;
frost$core$Int _3;
frost$core$Object* _4;
frost$core$Maybe* _6;
frost$core$Object* _7;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:21
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
_1 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
_2 = _1;
_3 = (frost$core$Int) {0u};
_4 = param0;
frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T(_2, _3, _4);
_6 = _1;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return _6;

}
frost$core$Maybe* frost$core$Frost$error$frost$core$String$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$String* param0) {

frost$core$Maybe* _1;
frost$core$Maybe* _2;
frost$core$Int _3;
frost$core$Error* _4;
frost$core$Maybe* _7;
frost$core$Object* _8;
frost$core$Object* _10;
frost$core$Object* _12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:27
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
_1 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
_2 = _1;
_3 = (frost$core$Int) {1u};
FROST_ASSERT(24 == sizeof(frost$core$Error));
_4 = (frost$core$Error*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Error$class);
frost$core$Error$init$frost$core$String(_4, param0);
frost$core$Maybe$init$frost$core$Int$frost$core$Error(_2, _3, _4);
_7 = _1;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
return _7;

}
void frost$core$Frost$_addWeakReference$frost$core$Weak$LTfrost$core$Object$GT$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(frost$core$Weak* param0, frost$collections$HashMap* param1) {

frost$core$Int local0;
frost$collections$Array* local1 = NULL;
frost$core$Weak* _1;
frost$core$Bit* _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$core$Object** _15;
frost$core$Object* _16;
frost$core$Object* _17;
frost$core$Object* _18;
frost$core$Object* _21;
frost$core$Int _22;
frost$core$Object* _24;
frost$collections$HashMap* _27;
frost$core$Int _28;
frost$collections$HashKey* _29;
frost$core$Object* _30;
frost$collections$Array* _31;
frost$core$Object* _33;
frost$collections$Array* _35;
frost$core$Object* _36;
frost$core$Object* _39;
frost$core$Object* _41;
frost$collections$Array* _44;
bool _45;
frost$core$Bit _46;
bool _47;
frost$collections$Array* _50;
frost$collections$Array* _51;
frost$collections$Array* _53;
frost$core$Object* _54;
frost$collections$Array* _56;
frost$core$Object* _57;
frost$core$Object* _60;
frost$collections$HashMap* _63;
frost$core$Int _64;
frost$collections$HashKey* _65;
frost$collections$Array* _66;
bool _67;
frost$core$Bit _68;
bool _69;
frost$core$Int _71;
frost$collections$Array* _74;
frost$core$Object* _75;
frost$core$Object* _77;
frost$collections$Array* _81;
bool _82;
frost$core$Bit _83;
bool _84;
frost$core$Int _86;
frost$collections$Array* _89;
frost$core$Object* _90;
frost$collections$Array* _92;
frost$core$Object* _93;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:44
_1 = param0;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Frost.frost:44:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_6 = &_1->_valid;
_7 = *_6;
_9 = _7.value;
if (_9) goto block3; else goto block4;
block4:;
_11 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2, _11);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_15 = &_1->value;
_16 = *_15;
_17 = _16;
_18 = _17;
frost$core$Frost$ref$frost$core$Object$Q(_18);
_21 = _17;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&_22, _21);
*(&local0) = _22;
_24 = _17;
frost$core$Frost$unref$frost$core$Object$Q(_24);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:45
_27 = param1;
_28 = *(&local0);
frost$core$Int$wrapper* $tmp3;
$tmp3 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp3->value = _28;
_29 = ((frost$collections$HashKey*) $tmp3);
_30 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_27, _29);
_31 = ((frost$collections$Array*) _30);
*(&local1) = ((frost$collections$Array*) NULL);
_33 = ((frost$core$Object*) _31);
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = *(&local1);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
*(&local1) = _31;
_39 = _30;
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_41);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:46
_44 = *(&local1);
_45 = _44 == NULL;
_46 = (frost$core$Bit) {_45};
_47 = _46.value;
if (_47) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:47
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_50 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_51 = _50;
frost$collections$Array$init(_51);
_53 = _50;
_54 = ((frost$core$Object*) _53);
frost$core$Frost$ref$frost$core$Object$Q(_54);
_56 = *(&local1);
_57 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_57);
*(&local1) = _53;
_60 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_60);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:48
_63 = param1;
_64 = *(&local0);
frost$core$Int$wrapper* $tmp4;
$tmp4 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp4->value = _64;
_65 = ((frost$collections$HashKey*) $tmp4);
_66 = *(&local1);
_67 = _66 != NULL;
_68 = (frost$core$Bit) {_67};
_69 = _68.value;
if (_69) goto block7; else goto block8;
block8:;
_71 = (frost$core$Int) {48u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _71, &$s6);
abort(); // unreachable
block7:;
_74 = _66;
_75 = ((frost$core$Object*) _74);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_63, _65, _75);
_77 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_77);
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:50
_81 = *(&local1);
_82 = _81 != NULL;
_83 = (frost$core$Bit) {_82};
_84 = _83.value;
if (_84) goto block9; else goto block10;
block10:;
_86 = (frost$core$Int) {50u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _86, &$s8);
abort(); // unreachable
block9:;
_89 = _81;
_90 = ((frost$core$Object*) param0);
frost$collections$Array$add$frost$collections$Array$T(_89, _90);
_92 = *(&local1);
_93 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_93);
*(&local1) = ((frost$collections$Array*) NULL);
return;

}
void frost$core$Frost$weakReferentDestroyed$frost$core$Int$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(frost$core$Int param0, frost$collections$HashMap* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Weak* local1 = NULL;
frost$collections$HashMap* _1;
frost$collections$HashKey* _2;
frost$core$Object* _3;
frost$collections$Array* _4;
frost$core$Object* _6;
frost$collections$Array* _8;
frost$core$Object* _9;
frost$core$Object* _12;
frost$core$Object* _14;
frost$collections$Array* _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$core$Int _22;
frost$collections$Array* _26;
bool _27;
frost$core$Bit _28;
bool _29;
frost$core$Int _31;
frost$collections$Iterable* _34;
frost$collections$Iterable* _35;
$fn9 _36;
frost$collections$Iterator* _37;
frost$collections$Iterator* _38;
frost$collections$Iterator* _40;
$fn10 _41;
frost$core$Bit _42;
bool _43;
frost$collections$Iterator* _46;
$fn11 _47;
frost$core$Object* _48;
frost$core$Weak* _49;
frost$core$Object* _50;
frost$core$Weak* _52;
frost$core$Object* _53;
frost$core$Weak* _57;
frost$core$Weak* _58;
frost$core$Bit _59;
frost$core$Bit* _60;
frost$core$Weak* _63;
frost$core$Weak* _64;
frost$core$Object* _65;
frost$core$Object** _66;
frost$core$Object* _68;
frost$core$Weak* _70;
frost$core$Object* _71;
frost$core$Object* _75;
frost$collections$HashMap* _78;
frost$collections$HashKey* _79;
frost$core$Object* _81;
frost$collections$Array* _83;
frost$core$Object* _84;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:55
_1 = param1;
frost$core$Int$wrapper* $tmp12;
$tmp12 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp12->value = param0;
_2 = ((frost$collections$HashKey*) $tmp12);
_3 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_1, _2);
_4 = ((frost$collections$Array*) _3);
*(&local0) = ((frost$collections$Array*) NULL);
_6 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = *(&local0);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
*(&local0) = _4;
_12 = _3;
frost$core$Frost$unref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_14);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:56
_17 = *(&local0);
_18 = _17 != NULL;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block1; else goto block2;
block2:;
_22 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s13, _22);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:57
_26 = *(&local0);
_27 = _26 != NULL;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block3; else goto block4;
block4:;
_31 = (frost$core$Int) {57u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _31, &$s15);
abort(); // unreachable
block3:;
_34 = ((frost$collections$Iterable*) _26);
_35 = _34;
ITable* $tmp16 = _35->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp16 = $tmp16->next;
}
_36 = $tmp16->methods[0];
_37 = _36(_35);
_38 = _37;
goto block5;
block5:;
_40 = _38;
ITable* $tmp17 = _40->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp17 = $tmp17->next;
}
_41 = $tmp17->methods[0];
_42 = _41(_40);
_43 = _42.value;
if (_43) goto block7; else goto block6;
block6:;
*(&local1) = ((frost$core$Weak*) NULL);
_46 = _38;
ITable* $tmp18 = _46->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp18 = $tmp18->next;
}
_47 = $tmp18->methods[1];
_48 = _47(_46);
_49 = ((frost$core$Weak*) _48);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = *(&local1);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local1) = _49;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:58
_57 = *(&local1);
_58 = _57;
_59 = (frost$core$Bit) {false};
_60 = &_58->_valid;
*_60 = _59;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:59
_63 = *(&local1);
_64 = _63;
_65 = ((frost$core$Object*) NULL);
_66 = &_64->value;
*_66 = _65;
_68 = _48;
frost$core$Frost$unref$frost$core$Object$Q(_68);
_70 = *(&local1);
_71 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_71);
*(&local1) = ((frost$core$Weak*) NULL);
goto block5;
block7:;
_75 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_75);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:61
_78 = param1;
frost$core$Int$wrapper* $tmp19;
$tmp19 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp19->value = param0;
_79 = ((frost$collections$HashKey*) $tmp19);
frost$collections$HashMap$remove$frost$collections$HashMap$K(_78, _79);
_81 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_81);
_83 = *(&local0);
_84 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_84);
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
frost$collections$HashMap* frost$core$Frost$createWeakReferenceMap$R$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Object$GT$GT() {

frost$collections$HashMap* _1;
frost$collections$HashMap* _2;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:66
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
_1 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
_2 = _1;
frost$collections$HashMap$init(_2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _1;

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(frost$core$String* param0, frost$core$Int param1) {

frost$core$Error* local0 = NULL;
frost$io$OutputStream* _3;
frost$core$String* _4;
frost$core$String* _5;
frost$core$Object* _6;
$fn20 _9;
frost$core$String* _10;
frost$core$String* _11;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$Object* _16;
frost$core$String* _19;
$fn21 _20;
frost$core$Error* _21;
bool _22;
frost$core$Object* _24;
bool _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _30;
frost$core$Error* _33;
frost$core$Object* _35;
frost$core$Object* _37;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$Object* _45;
frost$core$Object* _47;
frost$core$Object* _50;
frost$core$Object* _52;
frost$core$Object* _54;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$Object* _62;
frost$core$Error* _66;
frost$core$Object* _67;
frost$core$Int _72;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:83
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:84
_3 = frost$io$Console$errorStream$R$frost$io$OutputStream();
_4 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s22, param0);
_5 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_4, &$s23);
frost$core$Int$wrapper* $tmp24;
$tmp24 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp24->value = param1;
_6 = ((frost$core$Object*) $tmp24);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Frost.frost:84:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_9 = ($fn25) _6->$class->vtable[0];
_10 = _9(_6);
_11 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_5, _10);
_12 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_19 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_11, &$s26);
_20 = ($fn27) _3->$class->vtable[19];
_21 = _20(_3, _19);
_22 = _21 == NULL;
if (_22) goto block4; else goto block5;
block5:;
_24 = ((frost$core$Object*) _21);
frost$core$Frost$ref$frost$core$Object$Q(_24);
_26 = _21 != NULL;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block6; else goto block7;
block7:;
_30 = (frost$core$Int) {84u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s28, _30, &$s29);
abort(); // unreachable
block6:;
_33 = _21;
*(&local0) = _33;
_35 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_35);
_37 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = _6;
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_47);
goto block2;
block4:;
_50 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_50);
_52 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_54);
_56 = _6;
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_60);
_62 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_62);
goto block2;
block2:;
_66 = *(&local0);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:88
frost$core$System$crash();
_72 = (frost$core$Int) {88u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s30, _72, &$s31);
abort(); // unreachable

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(frost$core$String* param0, frost$core$Int param1, frost$core$String* param2) {

frost$core$Error* local0 = NULL;
frost$io$OutputStream* _3;
frost$core$String* _4;
frost$core$String* _5;
frost$core$Object* _6;
$fn32 _9;
frost$core$String* _10;
frost$core$String* _11;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$Object* _16;
frost$core$String* _19;
frost$core$String* _20;
frost$core$String* _21;
$fn33 _22;
frost$core$Error* _23;
bool _24;
frost$core$Object* _26;
bool _28;
frost$core$Bit _29;
bool _30;
frost$core$Int _32;
frost$core$Error* _35;
frost$core$Object* _37;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$Object* _45;
frost$core$Object* _47;
frost$core$Object* _49;
frost$core$Object* _51;
frost$core$Object* _53;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$Object* _62;
frost$core$Object* _64;
frost$core$Object* _66;
frost$core$Object* _68;
frost$core$Object* _70;
frost$core$Object* _72;
frost$core$Error* _76;
frost$core$Object* _77;
frost$core$Int _82;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:93
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:94
_3 = frost$io$Console$errorStream$R$frost$io$OutputStream();
_4 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s34, param0);
_5 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_4, &$s35);
frost$core$Int$wrapper* $tmp36;
$tmp36 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp36->value = param1;
_6 = ((frost$core$Object*) $tmp36);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Frost.frost:94:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_9 = ($fn37) _6->$class->vtable[0];
_10 = _9(_6);
_11 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_5, _10);
_12 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_19 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_11, &$s38);
_20 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_19, param2);
_21 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_20, &$s39);
_22 = ($fn40) _3->$class->vtable[19];
_23 = _22(_3, _21);
_24 = _23 == NULL;
if (_24) goto block4; else goto block5;
block5:;
_26 = ((frost$core$Object*) _23);
frost$core$Frost$ref$frost$core$Object$Q(_26);
_28 = _23 != NULL;
_29 = (frost$core$Bit) {_28};
_30 = _29.value;
if (_30) goto block6; else goto block7;
block7:;
_32 = (frost$core$Int) {94u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s41, _32, &$s42);
abort(); // unreachable
block6:;
_35 = _23;
*(&local0) = _35;
_37 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = _6;
frost$core$Frost$unref$frost$core$Object$Q(_47);
_49 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_53);
goto block2;
block4:;
_56 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_60);
_62 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_64 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_64);
_66 = _6;
frost$core$Frost$unref$frost$core$Object$Q(_66);
_68 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_68);
_70 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_70);
_72 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_72);
goto block2;
block2:;
_76 = *(&local0);
_77 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_77);
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:98
frost$core$System$crash();
_82 = (frost$core$Int) {98u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s43, _82, &$s44);
abort(); // unreachable

}
frost$core$UInt64$nullable frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q(frost$core$Char32 param0) {

frost$core$Int32 _1;
frost$core$Char32 _2;
int32_t _5;
int32_t _6;
bool _7;
frost$core$Bit _8;
bool _10;
frost$core$Int32 _12;
frost$core$Char32 _13;
int32_t _16;
int32_t _17;
bool _18;
frost$core$Bit _19;
bool _21;
int32_t _26;
uint64_t _27;
frost$core$UInt64 _28;
frost$core$UInt8 _30;
frost$core$Char8 _31;
uint8_t _34;
uint64_t _35;
frost$core$UInt64 _36;
uint64_t _38;
uint64_t _39;
uint64_t _40;
frost$core$UInt64 _41;
frost$core$UInt64$nullable _42;
frost$core$Int32 _45;
frost$core$Char32 _46;
int32_t _49;
int32_t _50;
bool _51;
frost$core$Bit _52;
bool _54;
frost$core$Int32 _56;
frost$core$Char32 _57;
int32_t _60;
int32_t _61;
bool _62;
frost$core$Bit _63;
bool _65;
int32_t _70;
uint64_t _71;
frost$core$UInt64 _72;
frost$core$UInt8 _74;
frost$core$Char8 _75;
uint8_t _78;
uint64_t _79;
frost$core$UInt64 _80;
uint64_t _82;
uint64_t _83;
uint64_t _84;
frost$core$UInt64 _85;
frost$core$UInt64 _86;
uint64_t _87;
uint64_t _88;
uint64_t _89;
frost$core$UInt64 _90;
frost$core$UInt64$nullable _91;
frost$core$Int32 _94;
frost$core$Char32 _95;
int32_t _98;
int32_t _99;
bool _100;
frost$core$Bit _101;
bool _103;
frost$core$Int32 _105;
frost$core$Char32 _106;
int32_t _109;
int32_t _110;
bool _111;
frost$core$Bit _112;
bool _114;
int32_t _119;
uint64_t _120;
frost$core$UInt64 _121;
frost$core$UInt8 _123;
frost$core$Char8 _124;
uint8_t _127;
uint64_t _128;
frost$core$UInt64 _129;
uint64_t _131;
uint64_t _132;
uint64_t _133;
frost$core$UInt64 _134;
frost$core$UInt64 _135;
uint64_t _136;
uint64_t _137;
uint64_t _138;
frost$core$UInt64 _139;
frost$core$UInt64$nullable _140;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:103
_1 = (frost$core$Int32) {48u};
_2 = frost$core$Char32$init$frost$core$Int32(_1);
// begin inline call to function frost.core.Char32.>=(other:frost.core.Char32):frost.core.Bit from Frost.frost:103:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:52
_5 = param0.value;
_6 = _2.value;
_7 = _5 >= _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block3; else goto block2;
block3:;
_12 = (frost$core$Int32) {57u};
_13 = frost$core$Char32$init$frost$core$Int32(_12);
// begin inline call to function frost.core.Char32.<=(other:frost.core.Char32):frost.core.Bit from Frost.frost:103:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:47
_16 = param0.value;
_17 = _13.value;
_18 = _16 <= _17;
_19 = (frost$core$Bit) {_18};
_21 = _19.value;
if (_21) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:104
// begin inline call to function frost.core.Char32.get_asUInt64():frost.core.UInt64 from Frost.frost:104:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:136
_26 = param0.value;
_27 = ((uint64_t) _26);
_28 = (frost$core$UInt64) {_27};
_30 = (frost$core$UInt8) {48u};
_31 = frost$core$Char8$init$frost$core$UInt8(_30);
// begin inline call to function frost.core.Char8.get_asUInt64():frost.core.UInt64 from Frost.frost:104:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:141
_34 = _31.value;
_35 = ((uint64_t) _34);
_36 = (frost$core$UInt64) {_35};
_38 = _28.value;
_39 = _36.value;
_40 = _38 - _39;
_41 = (frost$core$UInt64) {_40};
_42 = ((frost$core$UInt64$nullable) { _41, true });
return _42;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:106
_45 = (frost$core$Int32) {65u};
_46 = frost$core$Char32$init$frost$core$Int32(_45);
// begin inline call to function frost.core.Char32.>=(other:frost.core.Char32):frost.core.Bit from Frost.frost:106:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:52
_49 = param0.value;
_50 = _46.value;
_51 = _49 >= _50;
_52 = (frost$core$Bit) {_51};
_54 = _52.value;
if (_54) goto block10; else goto block9;
block10:;
_56 = (frost$core$Int32) {90u};
_57 = frost$core$Char32$init$frost$core$Int32(_56);
// begin inline call to function frost.core.Char32.<=(other:frost.core.Char32):frost.core.Bit from Frost.frost:106:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:47
_60 = param0.value;
_61 = _57.value;
_62 = _60 <= _61;
_63 = (frost$core$Bit) {_62};
_65 = _63.value;
if (_65) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:107
// begin inline call to function frost.core.Char32.get_asUInt64():frost.core.UInt64 from Frost.frost:107:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:136
_70 = param0.value;
_71 = ((uint64_t) _70);
_72 = (frost$core$UInt64) {_71};
_74 = (frost$core$UInt8) {65u};
_75 = frost$core$Char8$init$frost$core$UInt8(_74);
// begin inline call to function frost.core.Char8.get_asUInt64():frost.core.UInt64 from Frost.frost:107:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:141
_78 = _75.value;
_79 = ((uint64_t) _78);
_80 = (frost$core$UInt64) {_79};
_82 = _72.value;
_83 = _80.value;
_84 = _82 - _83;
_85 = (frost$core$UInt64) {_84};
_86 = (frost$core$UInt64) {10u};
_87 = _85.value;
_88 = _86.value;
_89 = _87 + _88;
_90 = (frost$core$UInt64) {_89};
_91 = ((frost$core$UInt64$nullable) { _90, true });
return _91;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:109
_94 = (frost$core$Int32) {97u};
_95 = frost$core$Char32$init$frost$core$Int32(_94);
// begin inline call to function frost.core.Char32.>=(other:frost.core.Char32):frost.core.Bit from Frost.frost:109:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:52
_98 = param0.value;
_99 = _95.value;
_100 = _98 >= _99;
_101 = (frost$core$Bit) {_100};
_103 = _101.value;
if (_103) goto block17; else goto block16;
block17:;
_105 = (frost$core$Int32) {122u};
_106 = frost$core$Char32$init$frost$core$Int32(_105);
// begin inline call to function frost.core.Char32.<=(other:frost.core.Char32):frost.core.Bit from Frost.frost:109:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:47
_109 = param0.value;
_110 = _106.value;
_111 = _109 <= _110;
_112 = (frost$core$Bit) {_111};
_114 = _112.value;
if (_114) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:110
// begin inline call to function frost.core.Char32.get_asUInt64():frost.core.UInt64 from Frost.frost:110:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:136
_119 = param0.value;
_120 = ((uint64_t) _119);
_121 = (frost$core$UInt64) {_120};
_123 = (frost$core$UInt8) {97u};
_124 = frost$core$Char8$init$frost$core$UInt8(_123);
// begin inline call to function frost.core.Char8.get_asUInt64():frost.core.UInt64 from Frost.frost:110:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:141
_127 = _124.value;
_128 = ((uint64_t) _127);
_129 = (frost$core$UInt64) {_128};
_131 = _121.value;
_132 = _129.value;
_133 = _131 - _132;
_134 = (frost$core$UInt64) {_133};
_135 = (frost$core$UInt64) {10u};
_136 = _134.value;
_137 = _135.value;
_138 = _136 + _137;
_139 = (frost$core$UInt64) {_138};
_140 = ((frost$core$UInt64$nullable) { _139, true });
return _140;
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
frost$core$Bit _1;
bool _2;
frost$core$UInt64 _7;
int64_t _12;
uint64_t _13;
frost$core$UInt64 _14;
frost$core$Int _20;
frost$core$Int* _23;
frost$core$String$Index _25;
frost$core$String$Index _28;
frost$core$String$Index _33;
frost$core$Equatable* _34;
frost$core$Equatable* _35;
frost$core$Int* _38;
frost$core$Int _39;
frost$core$Int* _42;
frost$core$String$Index _44;
frost$core$String$Index _47;
frost$core$Equatable* _49;
$fn45 _50;
frost$core$Bit _51;
bool _52;
frost$core$Object* _53;
frost$core$Object* _55;
frost$core$String$Index _59;
frost$core$Char32 _60;
frost$core$UInt64$nullable _61;
frost$core$UInt64$nullable _64;
bool _65;
frost$core$Bit _66;
bool _67;
frost$core$UInt64$nullable _69;
bool _70;
frost$core$Bit _71;
bool _72;
frost$core$Int _74;
frost$core$UInt64 _77;
frost$core$UInt64 _78;
uint64_t _79;
uint64_t _80;
bool _81;
frost$core$Bit _82;
bool _83;
frost$core$UInt64 _88;
frost$core$UInt64 _89;
uint64_t _90;
uint64_t _91;
uint64_t _92;
frost$core$UInt64 _93;
frost$core$UInt64$nullable _94;
bool _95;
frost$core$Bit _96;
bool _97;
frost$core$Int _99;
frost$core$UInt64 _102;
uint64_t _103;
uint64_t _104;
uint64_t _105;
frost$core$UInt64 _106;
frost$core$String$Index _109;
frost$core$String$Index _110;
frost$core$UInt64 _114;
frost$core$UInt64$nullable _115;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:120
_1 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s46);
_2 = _1.value;
if (_2) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:121
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:123
_7 = (frost$core$UInt64) {0u};
*(&local0) = _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:124
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Frost.frost:124:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_12 = param1.value;
_13 = ((uint64_t) _12);
_14 = (frost$core$UInt64) {_13};
*(&local1) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:125
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:125:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_20 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_23 = &(&local3)->value;
*_23 = _20;
_25 = *(&local3);
*(&local2) = _25;
_28 = *(&local2);
*(&local4) = _28;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:126
goto block6;
block6:;
_33 = *(&local4);
frost$core$String$Index$wrapper* $tmp47;
$tmp47 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp47->value = _33;
_34 = ((frost$core$Equatable*) $tmp47);
_35 = _34;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Frost.frost:126:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_38 = &param0->_length;
_39 = *_38;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_42 = &(&local6)->value;
*_42 = _39;
_44 = *(&local6);
*(&local5) = _44;
_47 = *(&local5);
frost$core$String$Index$wrapper* $tmp48;
$tmp48 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp48->value = _47;
_49 = ((frost$core$Equatable*) $tmp48);
ITable* $tmp49 = _35->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp49 = $tmp49->next;
}
_50 = $tmp49->methods[1];
_51 = _50(_35, _49);
_52 = _51.value;
_53 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_53);
_55 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_55);
if (_52) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:127
_59 = *(&local4);
_60 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, _59);
_61 = frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q(_60);
*(&local7) = _61;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:128
_64 = *(&local7);
_65 = !_64.nonnull;
_66 = (frost$core$Bit) {_65};
_67 = _66.value;
if (_67) goto block11; else goto block13;
block13:;
_69 = *(&local7);
_70 = _69.nonnull;
_71 = (frost$core$Bit) {_70};
_72 = _71.value;
if (_72) goto block14; else goto block15;
block15:;
_74 = (frost$core$Int) {128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s50, _74, &$s51);
abort(); // unreachable
block14:;
_77 = ((frost$core$UInt64) _69.value);
_78 = *(&local1);
_79 = _77.value;
_80 = _78.value;
_81 = _79 >= _80;
_82 = (frost$core$Bit) {_81};
_83 = _82.value;
if (_83) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:129
return ((frost$core$UInt64$nullable) { .nonnull = false });
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:131
_88 = *(&local0);
_89 = *(&local1);
_90 = _88.value;
_91 = _89.value;
_92 = _90 * _91;
_93 = (frost$core$UInt64) {_92};
_94 = *(&local7);
_95 = _94.nonnull;
_96 = (frost$core$Bit) {_95};
_97 = _96.value;
if (_97) goto block16; else goto block17;
block17:;
_99 = (frost$core$Int) {131u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s52, _99, &$s53);
abort(); // unreachable
block16:;
_102 = ((frost$core$UInt64) _94.value);
_103 = _93.value;
_104 = _102.value;
_105 = _103 + _104;
_106 = (frost$core$UInt64) {_105};
*(&local0) = _106;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:132
_109 = *(&local4);
_110 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, _109);
*(&local4) = _110;
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:134
_114 = *(&local0);
_115 = ((frost$core$UInt64$nullable) { _114, true });
return _115;

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
frost$collections$Iterable* _3;
$fn54 _4;
frost$collections$Iterator* _5;
frost$collections$Iterator* _6;
frost$collections$Iterator* _7;
$fn55 _8;
frost$core$Int _9;
frost$core$Object* _10;
frost$core$Int _13;
int64_t _14;
int64_t _15;
bool _16;
frost$core$Bit _17;
bool _18;
frost$core$Int _20;
frost$core$String* _21;
frost$core$String* _22;
frost$core$Object* _24;
frost$core$Object* _26;
frost$core$Int _32;
frost$core$Int* _35;
frost$core$String$Index _37;
frost$core$String$Index _40;
frost$core$String$Index _42;
frost$core$String$Index _45;
frost$core$Char32 _46;
frost$core$Int32 _47;
frost$core$Char32 _48;
int32_t _51;
int32_t _52;
bool _53;
frost$core$Bit _54;
bool _56;
frost$core$Int32 _58;
frost$core$Char32 _59;
int32_t _62;
int32_t _63;
bool _64;
frost$core$Bit _65;
bool _67;
frost$core$Int32 _69;
frost$core$Char32 _70;
int32_t _73;
int32_t _74;
bool _75;
frost$core$Bit _76;
bool _78;
frost$core$Int _84;
frost$core$Int* _87;
frost$core$String$Index _89;
frost$core$String$Index _92;
frost$core$String$Index _97;
frost$core$String$Index _98;
frost$core$String$Index$nullable _99;
frost$core$Bit _100;
frost$core$Range$LTfrost$core$String$Index$Q$GT _101;
frost$core$String* _102;
frost$core$Int64$nullable _105;
frost$core$Int64$nullable _108;
bool _109;
frost$core$Bit _110;
bool _111;
frost$core$Int64$nullable _114;
bool _115;
frost$core$Bit _116;
bool _117;
frost$core$Int _119;
frost$core$Int64 _122;
int64_t _125;
int64_t _126;
frost$core$Int _127;
frost$core$Int$nullable _129;
frost$core$Int$nullable _135;
frost$core$Object* _137;
frost$core$Int$nullable _140;
bool _141;
frost$core$Bit _142;
bool _143;
frost$core$Int _145;
frost$core$String* _146;
frost$core$String* _147;
frost$core$Object* _149;
frost$core$Object* _151;
frost$core$String$Index _156;
frost$core$Int _159;
frost$core$Int* _162;
frost$core$String$Index _164;
frost$core$String$Index _167;
frost$core$Int _171;
frost$core$Int _172;
int64_t _175;
int64_t _176;
bool _177;
frost$core$Bit _178;
bool _181;
frost$core$Int32 _184;
frost$core$Char32 _185;
frost$core$Int _192;
frost$core$Int* _195;
frost$core$String$Index _197;
frost$core$String$Index _200;
frost$core$Char32 _202;
frost$core$String$Index _206;
frost$core$Char32 _207;
frost$core$Int32 _208;
frost$core$Char32 _209;
int32_t _212;
int32_t _213;
bool _214;
frost$core$Bit _215;
bool _217;
frost$core$Int$nullable _220;
bool _221;
frost$core$Bit _222;
bool _223;
frost$core$Int _225;
frost$core$Int _228;
frost$core$Char32 _229;
frost$core$String* _230;
frost$core$Object* _231;
frost$core$Object* _233;
frost$core$Int32 _236;
frost$core$Char32 _237;
int32_t _240;
int32_t _241;
bool _242;
frost$core$Bit _243;
bool _245;
frost$core$Int$nullable _248;
bool _249;
frost$core$Bit _250;
bool _251;
frost$core$Int _253;
frost$core$Int _256;
frost$core$Char32 _257;
frost$core$String* _258;
frost$core$Object* _259;
frost$core$Object* _261;
frost$core$Int32 _264;
frost$core$Char32 _265;
int32_t _268;
int32_t _269;
bool _270;
frost$core$Bit _271;
bool _273;
frost$core$Int$nullable _276;
bool _277;
frost$core$Bit _278;
bool _279;
frost$core$Int _281;
frost$core$Int _284;
frost$core$Char32 _285;
frost$core$String* _286;
frost$core$Object* _287;
frost$core$Object* _289;
frost$core$Int _293;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:160
// begin inline call to function frost.core.String.get_length():frost.core.Int from Frost.frost:160:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_3 = ((frost$collections$Iterable*) param1);
ITable* $tmp56 = _3->$class->itable;
while ($tmp56->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp56 = $tmp56->next;
}
_4 = $tmp56->methods[0];
_5 = _4(_3);
_6 = _5;
_7 = _6;
ITable* $tmp57 = _7->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp57 = $tmp57->next;
}
_8 = $tmp57->methods[2];
_9 = _8(_7);
_10 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_10);
_13 = (frost$core$Int) {2u};
_14 = _9.value;
_15 = _13.value;
_16 = _14 >= _15;
_17 = (frost$core$Bit) {_16};
_18 = _17.value;
if (_18) goto block2; else goto block3;
block3:;
_20 = (frost$core$Int) {160u};
_21 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s58, param1);
_22 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_21, &$s59);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s60, _20, _22);
_24 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_26);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:161
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:161:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_32 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_35 = &(&local1)->value;
*_35 = _32;
_37 = *(&local1);
*(&local0) = _37;
_40 = *(&local0);
_42 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, _40);
*(&local2) = _42;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:162
_45 = *(&local2);
_46 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, _45);
_47 = (frost$core$Int32) {60u};
_48 = frost$core$Char32$init$frost$core$Int32(_47);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:163:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_51 = _46.value;
_52 = _48.value;
_53 = _51 == _52;
_54 = (frost$core$Bit) {_53};
_56 = _54.value;
if (_56) goto block7; else goto block8;
block8:;
_58 = (frost$core$Int32) {94u};
_59 = frost$core$Char32$init$frost$core$Int32(_58);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:163:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_62 = _46.value;
_63 = _59.value;
_64 = _62 == _63;
_65 = (frost$core$Bit) {_64};
_67 = _65.value;
if (_67) goto block7; else goto block10;
block10:;
_69 = (frost$core$Int32) {62u};
_70 = frost$core$Char32$init$frost$core$Int32(_69);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:163:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_73 = _46.value;
_74 = _70.value;
_75 = _73 == _74;
_76 = (frost$core$Bit) {_75};
_78 = _76.value;
if (_78) goto block7; else goto block12;
block7:;
goto block6;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:167
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:167:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_84 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_87 = &(&local4)->value;
*_87 = _84;
_89 = *(&local4);
*(&local3) = _89;
_92 = *(&local3);
*(&local2) = _92;
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:170
_97 = *(&local2);
_98 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, _97);
_99 = ((frost$core$String$Index$nullable) { _98, true });
_100 = (frost$core$Bit) {false};
_101 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_99, ((frost$core$String$Index$nullable) { .nonnull = false }), _100);
_102 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, _101);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Frost.frost:170:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
_105 = frost$core$String$get_asInt64$R$frost$core$Int64$Q(_102);
*(&local6) = _105;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
_108 = *(&local6);
_109 = _108.nonnull;
_110 = (frost$core$Bit) {_109};
_111 = _110.value;
if (_111) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
_114 = *(&local6);
_115 = _114.nonnull;
_116 = (frost$core$Bit) {_115};
_117 = _116.value;
if (_117) goto block19; else goto block20;
block20:;
_119 = (frost$core$Int) {1456u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s61, _119, &$s62);
abort(); // unreachable
block19:;
_122 = ((frost$core$Int64) _114.value);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_125 = _122.value;
_126 = ((int64_t) _125);
_127 = (frost$core$Int) {_126};
_129 = ((frost$core$Int$nullable) { _127, true });
*(&local5) = _129;
goto block16;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local5) = ((frost$core$Int$nullable) { .nonnull = false });
goto block16;
block16:;
_135 = *(&local5);
*(&local7) = _135;
_137 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_137);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:171
_140 = *(&local7);
_141 = _140.nonnull;
_142 = (frost$core$Bit) {_141};
_143 = _142.value;
if (_143) goto block22; else goto block23;
block23:;
_145 = (frost$core$Int) {171u};
_146 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s63, param1);
_147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_146, &$s64);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s65, _145, _147);
_149 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_149);
_151 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_151);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:172
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:173
_156 = *(&local2);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:173:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_159 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_162 = &(&local10)->value;
*_162 = _159;
_164 = *(&local10);
*(&local9) = _164;
_167 = *(&local9);
// begin inline call to function frost.core.String.Index.=(other:frost.core.String.Index):frost.core.Bit from Frost.frost:173:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:66
_171 = _156.value;
_172 = _167.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_175 = _171.value;
_176 = _172.value;
_177 = _175 == _176;
_178 = (frost$core$Bit) {_177};
_181 = _178.value;
if (_181) goto block24; else goto block26;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:174
_184 = (frost$core$Int32) {32u};
_185 = frost$core$Char32$init$frost$core$Int32(_184);
*(&local8) = _185;
goto block25;
block26:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:177
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:177:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_192 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_195 = &(&local12)->value;
*_195 = _192;
_197 = *(&local12);
*(&local11) = _197;
_200 = *(&local11);
_202 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, _200);
*(&local8) = _202;
goto block25;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:179
_206 = *(&local2);
_207 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, _206);
_208 = (frost$core$Int32) {60u};
_209 = frost$core$Char32$init$frost$core$Int32(_208);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:180:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_212 = _207.value;
_213 = _209.value;
_214 = _212 == _213;
_215 = (frost$core$Bit) {_214};
_217 = _215.value;
if (_217) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:180
_220 = *(&local7);
_221 = _220.nonnull;
_222 = (frost$core$Bit) {_221};
_223 = _222.value;
if (_223) goto block37; else goto block38;
block38:;
_225 = (frost$core$Int) {180u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s66, _225, &$s67);
abort(); // unreachable
block37:;
_228 = ((frost$core$Int) _220.value);
_229 = *(&local8);
_230 = frost$core$String$leftAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, _228, _229);
_231 = ((frost$core$Object*) _230);
frost$core$Frost$ref$frost$core$Object$Q(_231);
_233 = ((frost$core$Object*) _230);
frost$core$Frost$unref$frost$core$Object$Q(_233);
return _230;
block35:;
_236 = (frost$core$Int32) {94u};
_237 = frost$core$Char32$init$frost$core$Int32(_236);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:181:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_240 = _207.value;
_241 = _237.value;
_242 = _240 == _241;
_243 = (frost$core$Bit) {_242};
_245 = _243.value;
if (_245) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:181
_248 = *(&local7);
_249 = _248.nonnull;
_250 = (frost$core$Bit) {_249};
_251 = _250.value;
if (_251) goto block42; else goto block43;
block43:;
_253 = (frost$core$Int) {181u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s68, _253, &$s69);
abort(); // unreachable
block42:;
_256 = ((frost$core$Int) _248.value);
_257 = *(&local8);
_258 = frost$core$String$centerAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, _256, _257);
_259 = ((frost$core$Object*) _258);
frost$core$Frost$ref$frost$core$Object$Q(_259);
_261 = ((frost$core$Object*) _258);
frost$core$Frost$unref$frost$core$Object$Q(_261);
return _258;
block40:;
_264 = (frost$core$Int32) {62u};
_265 = frost$core$Char32$init$frost$core$Int32(_264);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:182:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_268 = _207.value;
_269 = _265.value;
_270 = _268 == _269;
_271 = (frost$core$Bit) {_270};
_273 = _271.value;
if (_273) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:182
_276 = *(&local7);
_277 = _276.nonnull;
_278 = (frost$core$Bit) {_277};
_279 = _278.value;
if (_279) goto block47; else goto block48;
block48:;
_281 = (frost$core$Int) {182u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s70, _281, &$s71);
abort(); // unreachable
block47:;
_284 = ((frost$core$Int) _276.value);
_285 = *(&local8);
_286 = frost$core$String$rightAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, _284, _285);
_287 = ((frost$core$Object*) _286);
frost$core$Frost$ref$frost$core$Object$Q(_287);
_289 = ((frost$core$Object*) _286);
frost$core$Frost$unref$frost$core$Object$Q(_289);
return _286;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:183
_293 = (frost$core$Int) {183u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s72, _293);
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
frost$core$Int _3;
frost$core$Int* _6;
frost$core$String$Index _8;
frost$core$String$Index _11;
frost$core$UInt64 _15;
frost$core$String$UTF8List* _20;
frost$collections$ListView* _22;
frost$core$Object* _23;
frost$core$Object* _25;
frost$core$Object* _29;
frost$collections$ListView* _31;
frost$core$Object* _32;
frost$core$Object* _35;
frost$core$String$Index _38;
frost$core$Comparable* _39;
frost$core$Comparable* _40;
frost$core$Int* _43;
frost$core$Int _44;
frost$core$Int* _47;
frost$core$String$Index _49;
frost$core$String$Index _52;
frost$core$Comparable* _54;
$fn73 _55;
frost$core$Bit _56;
bool _57;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$String$Index _64;
frost$core$Char32 _65;
frost$core$Int32 _66;
frost$core$Char32 _67;
int32_t _70;
int32_t _71;
bool _72;
frost$core$Bit _73;
bool _75;
frost$core$Int32 _77;
frost$core$Char32 _78;
int32_t _81;
int32_t _82;
bool _83;
frost$core$Bit _84;
bool _86;
frost$core$UInt64 _89;
frost$core$Int32 _92;
frost$core$Char32 _93;
int32_t _96;
int32_t _97;
bool _98;
frost$core$Bit _99;
bool _101;
frost$core$Int32 _103;
frost$core$Char32 _104;
int32_t _107;
int32_t _108;
bool _109;
frost$core$Bit _110;
bool _112;
frost$core$UInt64 _115;
frost$core$Int32 _118;
frost$core$Char32 _119;
int32_t _122;
int32_t _123;
bool _124;
frost$core$Bit _125;
bool _127;
frost$core$Int32 _129;
frost$core$Char32 _130;
int32_t _133;
int32_t _134;
bool _135;
frost$core$Bit _136;
bool _138;
frost$core$UInt64 _141;
frost$core$Int32 _144;
frost$core$Char32 _145;
int32_t _148;
int32_t _149;
bool _150;
frost$core$Bit _151;
bool _153;
frost$core$UInt64 _156;
frost$core$Int32 _159;
frost$core$Char32 _160;
int32_t _163;
int32_t _164;
bool _165;
frost$core$Bit _166;
bool _168;
frost$core$UInt64 _171;
frost$core$String$UTF8List* _176;
frost$collections$ListView* _178;
frost$core$Object* _179;
frost$core$Object* _181;
frost$core$Object* _184;
frost$collections$ListView* _186;
frost$core$Object* _187;
frost$core$Object* _190;
frost$core$Int _194;
bool _200;
frost$core$UInt64 _202;
frost$core$UInt64 _203;
uint64_t _204;
uint64_t _205;
bool _206;
frost$core$Bit _207;
bool _208;
uint64_t _213;
int64_t _214;
frost$core$Int64 _215;
int64_t _219;
int64_t _220;
frost$core$Int64 _221;
int64_t _225;
uint64_t _226;
frost$core$UInt64 _227;
uint64_t _231;
uint64_t _232;
uint64_t _233;
frost$core$UInt64 _234;
frost$core$Int _243;
frost$core$Int _246;
frost$core$Int64 _247;
int64_t _248;
frost$core$Char8* _249;
frost$core$Int _252;
frost$core$Int _253;
int64_t _254;
int64_t _255;
int64_t _256;
frost$core$Int _257;
frost$core$Char8* _262;
frost$core$Int _263;
frost$core$Int64 _264;
frost$collections$ListView* _265;
frost$collections$ListView* _266;
frost$core$UInt64 _267;
frost$core$UInt64 _268;
uint64_t _271;
uint64_t _272;
uint64_t _273;
frost$core$UInt64 _274;
uint64_t _278;
int64_t _279;
frost$core$Int _280;
$fn74 _282;
frost$core$Object* _283;
frost$core$Char8 _284;
int64_t _285;
frost$core$Object* _287;
frost$core$UInt64 _290;
frost$core$UInt64 _291;
uint64_t _292;
uint64_t _293;
uint64_t _294;
frost$core$UInt64 _295;
frost$core$Int _298;
frost$core$Int _299;
int64_t _300;
int64_t _301;
int64_t _302;
frost$core$Int _303;
frost$core$UInt64 _306;
frost$core$UInt64 _307;
uint64_t _308;
uint64_t _309;
bool _310;
frost$core$Bit _311;
bool _312;
bool _315;
frost$core$UInt64 _317;
frost$core$UInt64 _318;
uint64_t _321;
uint64_t _322;
bool _323;
frost$core$Bit _324;
bool _326;
frost$core$Char8* _329;
frost$core$Int _330;
frost$core$Int64 _331;
frost$core$UInt8 _332;
frost$core$Char8 _333;
int64_t _334;
frost$core$Int _337;
frost$core$Int _338;
int64_t _339;
int64_t _340;
int64_t _341;
frost$core$Int _342;
frost$core$Int _346;
frost$core$Int _347;
int64_t _348;
int64_t _349;
int64_t _350;
frost$core$Int _351;
frost$core$Int _354;
frost$core$Int _355;
int64_t _356;
int64_t _357;
int64_t _358;
frost$core$Int _359;
frost$core$Int _362;
frost$core$Int _363;
frost$core$Bit _364;
frost$core$Range$LTfrost$core$Int$GT _365;
frost$core$Int _366;
frost$core$Int _368;
frost$core$Bit _369;
bool _370;
frost$core$Int _371;
int64_t _373;
int64_t _374;
bool _375;
frost$core$Bit _376;
bool _377;
int64_t _379;
int64_t _380;
bool _381;
frost$core$Bit _382;
bool _383;
frost$core$Char8* _386;
frost$core$Int _387;
frost$core$Int64 _388;
frost$core$Char8* _389;
frost$core$Int _390;
frost$core$Int _391;
int64_t _392;
int64_t _393;
int64_t _394;
frost$core$Int _395;
frost$core$Int64 _396;
int64_t _397;
frost$core$Char8 _398;
int64_t _399;
frost$core$Int _402;
int64_t _403;
int64_t _404;
int64_t _405;
frost$core$Int _406;
int64_t _408;
int64_t _409;
bool _410;
frost$core$Bit _411;
bool _412;
int64_t _414;
int64_t _415;
bool _416;
frost$core$Bit _417;
bool _418;
int64_t _420;
int64_t _421;
int64_t _422;
frost$core$Int _423;
frost$core$String* _427;
frost$core$Char8* _428;
frost$core$Int _429;
frost$core$Object* _431;
frost$core$Object* _433;
frost$collections$ListView* _435;
frost$core$Object* _436;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:197
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:197:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_3 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_6 = &(&local1)->value;
*_6 = _3;
_8 = *(&local1);
*(&local0) = _8;
_11 = *(&local0);
*(&local2) = _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:198
_15 = (frost$core$UInt64) {10u};
*(&local3) = _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:199
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Frost.frost:199:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
_20 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String(_20, &$s75);
_22 = ((frost$collections$ListView*) _20);
_23 = ((frost$core$Object*) _22);
frost$core$Frost$ref$frost$core$Object$Q(_23);
_25 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_25);
*(&local4) = ((frost$collections$ListView*) NULL);
_29 = ((frost$core$Object*) _22);
frost$core$Frost$ref$frost$core$Object$Q(_29);
_31 = *(&local4);
_32 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_32);
*(&local4) = _22;
_35 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_35);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:200
_38 = *(&local2);
frost$core$String$Index$wrapper* $tmp76;
$tmp76 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp76->value = _38;
_39 = ((frost$core$Comparable*) $tmp76);
_40 = _39;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Frost.frost:200:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_43 = &param3->_length;
_44 = *_43;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_47 = &(&local6)->value;
*_47 = _44;
_49 = *(&local6);
*(&local5) = _49;
_52 = *(&local5);
frost$core$String$Index$wrapper* $tmp77;
$tmp77 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp77->value = _52;
_54 = ((frost$core$Comparable*) $tmp77);
ITable* $tmp78 = _40->$class->itable;
while ($tmp78->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp78 = $tmp78->next;
}
_55 = $tmp78->methods[1];
_56 = _55(_40, _54);
_57 = _56.value;
_58 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_60);
if (_57) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:201
_64 = *(&local2);
_65 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param3, _64);
_66 = (frost$core$Int32) {98u};
_67 = frost$core$Char32$init$frost$core$Int32(_66);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:202:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_70 = _65.value;
_71 = _67.value;
_72 = _70 == _71;
_73 = (frost$core$Bit) {_72};
_75 = _73.value;
if (_75) goto block9; else goto block10;
block10:;
_77 = (frost$core$Int32) {66u};
_78 = frost$core$Char32$init$frost$core$Int32(_77);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:202:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_81 = _65.value;
_82 = _78.value;
_83 = _81 == _82;
_84 = (frost$core$Bit) {_83};
_86 = _84.value;
if (_86) goto block9; else goto block12;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:203
_89 = (frost$core$UInt64) {2u};
*(&local3) = _89;
goto block8;
block12:;
_92 = (frost$core$Int32) {111u};
_93 = frost$core$Char32$init$frost$core$Int32(_92);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:205:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_96 = _65.value;
_97 = _93.value;
_98 = _96 == _97;
_99 = (frost$core$Bit) {_98};
_101 = _99.value;
if (_101) goto block14; else goto block15;
block15:;
_103 = (frost$core$Int32) {79u};
_104 = frost$core$Char32$init$frost$core$Int32(_103);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:205:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_107 = _65.value;
_108 = _104.value;
_109 = _107 == _108;
_110 = (frost$core$Bit) {_109};
_112 = _110.value;
if (_112) goto block14; else goto block17;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:206
_115 = (frost$core$UInt64) {8u};
*(&local3) = _115;
goto block8;
block17:;
_118 = (frost$core$Int32) {100u};
_119 = frost$core$Char32$init$frost$core$Int32(_118);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:208:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_122 = _65.value;
_123 = _119.value;
_124 = _122 == _123;
_125 = (frost$core$Bit) {_124};
_127 = _125.value;
if (_127) goto block19; else goto block20;
block20:;
_129 = (frost$core$Int32) {68u};
_130 = frost$core$Char32$init$frost$core$Int32(_129);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:208:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_133 = _65.value;
_134 = _130.value;
_135 = _133 == _134;
_136 = (frost$core$Bit) {_135};
_138 = _136.value;
if (_138) goto block19; else goto block22;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:209
_141 = (frost$core$UInt64) {10u};
*(&local3) = _141;
goto block8;
block22:;
_144 = (frost$core$Int32) {120u};
_145 = frost$core$Char32$init$frost$core$Int32(_144);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:211:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_148 = _65.value;
_149 = _145.value;
_150 = _148 == _149;
_151 = (frost$core$Bit) {_150};
_153 = _151.value;
if (_153) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:212
_156 = (frost$core$UInt64) {16u};
*(&local3) = _156;
goto block8;
block25:;
_159 = (frost$core$Int32) {88u};
_160 = frost$core$Char32$init$frost$core$Int32(_159);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:214:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_163 = _65.value;
_164 = _160.value;
_165 = _163 == _164;
_166 = (frost$core$Bit) {_165};
_168 = _166.value;
if (_168) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:215
_171 = (frost$core$UInt64) {16u};
*(&local3) = _171;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:216
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Frost.frost:216:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
_176 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String(_176, &$s79);
_178 = ((frost$collections$ListView*) _176);
_179 = ((frost$core$Object*) _178);
frost$core$Frost$ref$frost$core$Object$Q(_179);
_181 = ((frost$core$Object*) _176);
frost$core$Frost$unref$frost$core$Object$Q(_181);
_184 = ((frost$core$Object*) _178);
frost$core$Frost$ref$frost$core$Object$Q(_184);
_186 = *(&local4);
_187 = ((frost$core$Object*) _186);
frost$core$Frost$unref$frost$core$Object$Q(_187);
*(&local4) = _178;
_190 = ((frost$core$Object*) _178);
frost$core$Frost$unref$frost$core$Object$Q(_190);
goto block8;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:219
_194 = (frost$core$Int) {219u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s80, _194, &$s81);
abort(); // unreachable
block8:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:223
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:224
_200 = param0.value;
if (_200) goto block34; else goto block33;
block34:;
_202 = *(&local3);
_203 = (frost$core$UInt64) {10u};
_204 = _202.value;
_205 = _203.value;
_206 = _204 != _205;
_207 = (frost$core$Bit) {_206};
_208 = _207.value;
if (_208) goto block31; else goto block33;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:225
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Frost.frost:225:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_213 = param1.value;
_214 = ((int64_t) _213);
_215 = (frost$core$Int64) {_214};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Frost.frost:225:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
_219 = _215.value;
_220 = -_219;
_221 = (frost$core$Int64) {_220};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Frost.frost:225:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
_225 = _221.value;
_226 = ((uint64_t) _225);
_227 = (frost$core$UInt64) {_226};
// begin inline call to function frost.core.UInt64.&&(other:frost.core.UInt64):frost.core.UInt64 from Frost.frost:225:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:166
_231 = _227.value;
_232 = param2.value;
_233 = _231 & _232;
_234 = (frost$core$UInt64) {_233};
*(&local7) = _234;
goto block32;
block33:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:228
*(&local7) = param1;
goto block32;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:230
_243 = (frost$core$Int) {64u};
*(&local8) = _243;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:231
_246 = *(&local8);
_247 = frost$core$Int64$init$frost$core$Int(_246);
_248 = _247.value;
_249 = ((frost$core$Char8*) frostAlloc(_248 * 1));
*(&local9) = _249;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:232
_252 = *(&local8);
_253 = (frost$core$Int) {1u};
_254 = _252.value;
_255 = _253.value;
_256 = _254 - _255;
_257 = (frost$core$Int) {_256};
*(&local10) = _257;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:233
goto block39;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:234
_262 = *(&local9);
_263 = *(&local10);
_264 = frost$core$Int64$init$frost$core$Int(_263);
_265 = *(&local4);
_266 = _265;
_267 = *(&local7);
_268 = *(&local3);
// begin inline call to function frost.core.UInt64.%(other:frost.core.UInt64):frost.core.UInt64 from Frost.frost:234:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:89
_271 = _267.value;
_272 = _268.value;
_273 = _271 % _272;
_274 = (frost$core$UInt64) {_273};
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Frost.frost:234:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
_278 = _274.value;
_279 = ((int64_t) _278);
_280 = (frost$core$Int) {_279};
ITable* $tmp82 = _266->$class->itable;
while ($tmp82->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp82 = $tmp82->next;
}
_282 = $tmp82->methods[0];
_283 = _282(_266, _280);
_284 = ((frost$core$Char8$wrapper*) _283)->value;
_285 = _264.value;
_262[_285] = _284;
_287 = _283;
frost$core$Frost$unref$frost$core$Object$Q(_287);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:235
_290 = *(&local7);
_291 = *(&local3);
_292 = _290.value;
_293 = _291.value;
_294 = _292 / _293;
_295 = (frost$core$UInt64) {_294};
*(&local7) = _295;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:236
_298 = *(&local10);
_299 = (frost$core$Int) {1u};
_300 = _298.value;
_301 = _299.value;
_302 = _300 - _301;
_303 = (frost$core$Int) {_302};
*(&local10) = _303;
_306 = *(&local7);
_307 = (frost$core$UInt64) {0u};
_308 = _306.value;
_309 = _307.value;
_310 = _308 > _309;
_311 = (frost$core$Bit) {_310};
_312 = _311.value;
if (_312) goto block39; else goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:239
_315 = param0.value;
if (_315) goto block46; else goto block45;
block46:;
_317 = *(&local3);
_318 = (frost$core$UInt64) {10u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from Frost.frost:239:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
_321 = _317.value;
_322 = _318.value;
_323 = _321 == _322;
_324 = (frost$core$Bit) {_323};
_326 = _324.value;
if (_326) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:240
_329 = *(&local9);
_330 = *(&local10);
_331 = frost$core$Int64$init$frost$core$Int(_330);
_332 = (frost$core$UInt8) {45u};
_333 = frost$core$Char8$init$frost$core$UInt8(_332);
_334 = _331.value;
_329[_334] = _333;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:241
_337 = *(&local10);
_338 = (frost$core$Int) {1u};
_339 = _337.value;
_340 = _338.value;
_341 = _339 - _340;
_342 = (frost$core$Int) {_341};
*(&local10) = _342;
goto block45;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:243
_346 = *(&local10);
_347 = (frost$core$Int) {1u};
_348 = _346.value;
_349 = _347.value;
_350 = _348 + _349;
_351 = (frost$core$Int) {_350};
*(&local10) = _351;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:244
_354 = *(&local8);
_355 = *(&local10);
_356 = _354.value;
_357 = _355.value;
_358 = _356 - _357;
_359 = (frost$core$Int) {_358};
*(&local11) = _359;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:245
_362 = (frost$core$Int) {0u};
_363 = *(&local11);
_364 = (frost$core$Bit) {false};
_365 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_362, _363, _364);
_366 = _365.min;
*(&local12) = _366;
_368 = _365.max;
_369 = _365.inclusive;
_370 = _369.value;
_371 = (frost$core$Int) {1u};
if (_370) goto block51; else goto block52;
block51:;
_373 = _366.value;
_374 = _368.value;
_375 = _373 <= _374;
_376 = (frost$core$Bit) {_375};
_377 = _376.value;
if (_377) goto block48; else goto block49;
block52:;
_379 = _366.value;
_380 = _368.value;
_381 = _379 < _380;
_382 = (frost$core$Bit) {_381};
_383 = _382.value;
if (_383) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:246
_386 = *(&local9);
_387 = *(&local12);
_388 = frost$core$Int64$init$frost$core$Int(_387);
_389 = *(&local9);
_390 = *(&local12);
_391 = *(&local10);
_392 = _390.value;
_393 = _391.value;
_394 = _392 + _393;
_395 = (frost$core$Int) {_394};
_396 = frost$core$Int64$init$frost$core$Int(_395);
_397 = _396.value;
_398 = _389[_397];
_399 = _388.value;
_386[_399] = _398;
_402 = *(&local12);
_403 = _368.value;
_404 = _402.value;
_405 = _403 - _404;
_406 = (frost$core$Int) {_405};
if (_370) goto block54; else goto block55;
block54:;
_408 = _406.value;
_409 = _371.value;
_410 = _408 >= _409;
_411 = (frost$core$Bit) {_410};
_412 = _411.value;
if (_412) goto block53; else goto block49;
block55:;
_414 = _406.value;
_415 = _371.value;
_416 = _414 > _415;
_417 = (frost$core$Bit) {_416};
_418 = _417.value;
if (_418) goto block53; else goto block49;
block53:;
_420 = _402.value;
_421 = _371.value;
_422 = _420 + _421;
_423 = (frost$core$Int) {_422};
*(&local12) = _423;
goto block48;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:248
FROST_ASSERT(48 == sizeof(frost$core$String));
_427 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
_428 = *(&local9);
_429 = *(&local11);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_427, _428, _429);
_431 = ((frost$core$Object*) _427);
frost$core$Frost$ref$frost$core$Object$Q(_431);
_433 = ((frost$core$Object*) _427);
frost$core$Frost$unref$frost$core$Object$Q(_433);
_435 = *(&local4);
_436 = ((frost$core$Object*) _435);
frost$core$Frost$unref$frost$core$Object$Q(_436);
*(&local4) = ((frost$collections$ListView*) NULL);
return _427;

}
frost$core$Int frost$core$Frost$hash$frost$core$Frost$hash$T$Q$R$frost$core$Int(frost$collections$HashKey* param0) {

bool _1;
frost$core$Bit _2;
bool _3;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$Int _10;
frost$collections$HashKey* _13;
$fn83 _14;
frost$core$Int _15;
frost$core$Int _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:253
_1 = param0 != NULL;
_2 = (frost$core$Bit) {_1};
_3 = _2.value;
if (_3) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:254
_6 = param0 != NULL;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block3; else goto block4;
block4:;
_10 = (frost$core$Int) {254u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s84, _10, &$s85);
abort(); // unreachable
block3:;
_13 = param0;
ITable* $tmp86 = _13->$class->itable;
while ($tmp86->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp86 = $tmp86->next;
}
_14 = $tmp86->methods[0];
_15 = _14(_13);
return _15;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:256
_18 = (frost$core$Int) {0u};
return _18;

}
frost$core$String* frost$core$Frost$string$frost$core$Object$Q$R$frost$core$String(frost$core$Object* param0) {

bool _1;
frost$core$Bit _2;
bool _3;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$Int _10;
frost$core$Object* _13;
$fn87 _14;
frost$core$String* _15;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Object* _22;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:261
_1 = param0 != NULL;
_2 = (frost$core$Bit) {_1};
_3 = _2.value;
if (_3) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:262
_6 = param0 != NULL;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block3; else goto block4;
block4:;
_10 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s88, _10, &$s89);
abort(); // unreachable
block3:;
_13 = param0;
_14 = ($fn90) _13->$class->vtable[0];
_15 = _14(_13);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_18);
return _15;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:264
_22 = ((frost$core$Object*) &$s91);
frost$core$Frost$ref$frost$core$Object$Q(_22);
return &$s92;

}
frost$core$Bit frost$core$Frost$equal$frost$core$Frost$equal$T$Q$frost$core$Frost$equal$T$Q$R$frost$core$Bit(frost$core$Equatable* param0, frost$core$Equatable* param1) {

bool _1;
frost$core$Bit _2;
bool _3;
bool _6;
frost$core$Bit _7;
bool _10;
frost$core$Bit _11;
bool _12;
frost$core$Bit _15;
frost$core$Equatable* _18;
frost$core$Equatable* _19;
frost$core$Equatable* _20;
frost$core$Equatable* _21;
$fn93 _22;
frost$core$Bit _23;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:269
_1 = param0 == NULL;
_2 = (frost$core$Bit) {_1};
_3 = _2.value;
if (_3) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:270
_6 = param1 == NULL;
_7 = (frost$core$Bit) {_6};
return _7;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:272
_10 = param1 == NULL;
_11 = (frost$core$Bit) {_10};
_12 = _11.value;
if (_12) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:273
_15 = (frost$core$Bit) {false};
return _15;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:275
_18 = param0;
_19 = _18;
_20 = param1;
_21 = _20;
ITable* $tmp94 = _19->$class->itable;
while ($tmp94->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp94 = $tmp94->next;
}
_22 = $tmp94->methods[0];
_23 = _22(_19, _21);
return _23;

}
void frost$core$Frost$cleanup(frost$core$Frost* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:10
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

