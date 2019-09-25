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
#include "frost/unsafe/Pointer.h"
#include "frost/core/String/UTF8List.h"
#include "frost/core/Comparable.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
frost$core$Frost$class_type frost$core$Frost$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Frost$cleanup} };

typedef frost$collections$Iterator* (*$fn10)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn11)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn12)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn21)(frost$core$Object*);
typedef frost$core$Error* (*$fn22)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn26)(frost$core$Object*);
typedef frost$core$Error* (*$fn28)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn33)(frost$core$Object*);
typedef frost$core$Error* (*$fn34)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn38)(frost$core$Object*);
typedef frost$core$Error* (*$fn41)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn46)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn55)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn56)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn74)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Object* (*$fn75)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn84)(frost$collections$HashKey*);
typedef frost$core$String* (*$fn88)(frost$core$Object*);
typedef frost$core$String* (*$fn91)(frost$core$Object*);
typedef frost$core$Bit (*$fn94)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, 4237142976622831502, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3e\x3e", 157, -1998709794346150571, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 121, -6078753381508500794, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3e\x3e", 160, -8532473038477785904, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, 7669895969177076905, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, 7669895969177076905, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29\x3a\x20", 3, 48285155966961582, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -6606133885720023461, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -6606133885720023461, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 3330193207084279677, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, -1839289420917840067, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 3626147090372997348, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x2e\x68\x61\x73\x68\x2e\x54\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4b\x65\x79", 87, -213319421083584948, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -5360016314918414915, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };

void frost$core$Frost$init(void* rawSelf) {
frost$core$Frost* param0 = (frost$core$Frost*) rawSelf;

return;

}
frost$core$Maybe* frost$core$Frost$success$frost$core$Object$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$Object* param0) {

frost$core$Maybe* _1;
frost$core$Int _2;
frost$core$Object* _3;
frost$core$Maybe* _5;
frost$core$Object* _6;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:21
_1 = (frost$core$Maybe*) frostObjectAlloc(sizeof(frost$core$Maybe), (frost$core$Class*) &frost$core$Maybe$class);
_2 = (frost$core$Int) {0u};
_3 = param0;
frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T(_1, _2, _3);
_5 = _1;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_8);
return _5;

}
frost$core$Maybe* frost$core$Frost$error$frost$core$String$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$String* param0) {

frost$core$Maybe* _1;
frost$core$Int _2;
frost$core$Error* _3;
frost$core$Maybe* _6;
frost$core$Object* _7;
frost$core$Object* _9;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:27
_1 = (frost$core$Maybe*) frostObjectAlloc(sizeof(frost$core$Maybe), (frost$core$Class*) &frost$core$Maybe$class);
_2 = (frost$core$Int) {1u};
_3 = (frost$core$Error*) frostObjectAlloc(sizeof(frost$core$Error), (frost$core$Class*) &frost$core$Error$class);
frost$core$Error$init$frost$core$String(_3, param0);
frost$core$Maybe$init$frost$core$Int$frost$core$Error(_1, _2, _3);
_6 = _1;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return _6;

}
void frost$core$Frost$_addWeakReference$frost$core$Weak$LTfrost$core$Object$GT$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(frost$core$Weak* param0, frost$collections$HashMap* param1) {

frost$core$Int local0;
frost$collections$Array* local1 = NULL;
frost$core$Bit* _5;
frost$core$Bit _6;
bool _8;
frost$core$Int _10;
frost$core$Object** _14;
frost$core$Object* _15;
frost$core$Object* _16;
frost$core$Object* _17;
frost$core$Object* _20;
frost$core$Int _21;
frost$core$Object* _23;
frost$core$Int _26;
frost$collections$HashKey* _27;
frost$core$Object* _28;
frost$collections$Array* _29;
frost$core$Object* _31;
frost$collections$Array* _33;
frost$core$Object* _34;
frost$core$Object* _37;
frost$core$Object* _39;
frost$collections$Array* _42;
bool _43;
frost$core$Bit _44;
bool _45;
frost$collections$Array* _48;
frost$collections$Array* _50;
frost$core$Object* _51;
frost$collections$Array* _53;
frost$core$Object* _54;
frost$core$Object* _57;
frost$core$Int _60;
frost$collections$HashKey* _61;
frost$collections$Array* _62;
bool _63;
frost$core$Bit _64;
bool _65;
frost$core$Int _67;
frost$collections$Array* _70;
frost$core$Object* _71;
frost$core$Object* _73;
frost$collections$Array* _77;
bool _78;
frost$core$Bit _79;
bool _80;
frost$core$Int _82;
frost$collections$Array* _85;
frost$core$Object* _86;
frost$collections$Array* _88;
frost$core$Object* _89;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:56
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Frost.frost:56:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_5 = &param0->_valid;
_6 = *_5;
_8 = _6.value;
if (_8) goto block3; else goto block4;
block4:;
_10 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _10, &$s3);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_14 = &param0->value;
_15 = *_14;
_16 = _15;
_17 = _16;
frost$core$Frost$ref$frost$core$Object$Q(_17);
_20 = _16;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&_21, _20);
*(&local0) = _21;
_23 = _16;
frost$core$Frost$unref$frost$core$Object$Q(_23);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:57
_26 = *(&local0);
frost$core$Int$wrapper* $tmp4;
$tmp4 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp4->value = _26;
_27 = ((frost$collections$HashKey*) $tmp4);
_28 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(param1, _27);
_29 = ((frost$collections$Array*) _28);
*(&local1) = ((frost$collections$Array*) NULL);
_31 = ((frost$core$Object*) _29);
frost$core$Frost$ref$frost$core$Object$Q(_31);
_33 = *(&local1);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_34);
*(&local1) = _29;
_37 = _28;
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_39);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:58
_42 = *(&local1);
_43 = _42 == NULL;
_44 = (frost$core$Bit) {_43};
_45 = _44.value;
if (_45) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:59
_48 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_48);
_50 = _48;
_51 = ((frost$core$Object*) _50);
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = *(&local1);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local1) = _50;
_57 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_57);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:60
_60 = *(&local0);
frost$core$Int$wrapper* $tmp5;
$tmp5 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp5->value = _60;
_61 = ((frost$collections$HashKey*) $tmp5);
_62 = *(&local1);
_63 = _62 != NULL;
_64 = (frost$core$Bit) {_63};
_65 = _64.value;
if (_65) goto block7; else goto block8;
block8:;
_67 = (frost$core$Int) {60u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _67, &$s7);
abort(); // unreachable
block7:;
_70 = _62;
_71 = ((frost$core$Object*) _70);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(param1, _61, _71);
_73 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_73);
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:62
_77 = *(&local1);
_78 = _77 != NULL;
_79 = (frost$core$Bit) {_78};
_80 = _79.value;
if (_80) goto block9; else goto block10;
block10:;
_82 = (frost$core$Int) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _82, &$s9);
abort(); // unreachable
block9:;
_85 = _77;
_86 = ((frost$core$Object*) param0);
frost$collections$Array$add$frost$collections$Array$T(_85, _86);
_88 = *(&local1);
_89 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_89);
*(&local1) = ((frost$collections$Array*) NULL);
return;

}
void frost$core$Frost$weakReferentDestroyed$frost$core$Int$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(frost$core$Int param0, frost$collections$HashMap* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Weak* local1 = NULL;
frost$collections$HashKey* _1;
frost$core$Object* _2;
frost$collections$Array* _3;
frost$core$Object* _5;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$core$Object* _11;
frost$core$Object* _13;
frost$collections$Array* _16;
bool _17;
frost$core$Bit _18;
bool _19;
frost$core$Int _21;
frost$collections$Array* _25;
bool _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _30;
frost$collections$Iterable* _33;
$fn10 _34;
frost$collections$Iterator* _35;
$fn11 _37;
frost$core$Bit _38;
bool _39;
$fn12 _42;
frost$core$Object* _43;
frost$core$Weak* _44;
frost$core$Object* _45;
frost$core$Weak* _47;
frost$core$Object* _48;
frost$core$Weak* _52;
frost$core$Bit _53;
frost$core$Bit* _54;
frost$core$Weak* _57;
frost$core$Object* _58;
frost$core$Object** _59;
frost$core$Object* _61;
frost$core$Weak* _63;
frost$core$Object* _64;
frost$core$Object* _68;
frost$collections$HashKey* _71;
frost$core$Object* _73;
frost$collections$Array* _75;
frost$core$Object* _76;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:67
frost$core$Int$wrapper* $tmp13;
$tmp13 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp13->value = param0;
_1 = ((frost$collections$HashKey*) $tmp13);
_2 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(param1, _1);
_3 = ((frost$collections$Array*) _2);
*(&local0) = ((frost$collections$Array*) NULL);
_5 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local0);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = _3;
_11 = _2;
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:68
_16 = *(&local0);
_17 = _16 != NULL;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block1; else goto block2;
block2:;
_21 = (frost$core$Int) {68u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s14, _21);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:69
_25 = *(&local0);
_26 = _25 != NULL;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block3; else goto block4;
block4:;
_30 = (frost$core$Int) {69u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s15, _30, &$s16);
abort(); // unreachable
block3:;
_33 = ((frost$collections$Iterable*) _25);
ITable* $tmp17 = _33->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp17 = $tmp17->next;
}
_34 = $tmp17->methods[0];
_35 = _34(_33);
goto block5;
block5:;
ITable* $tmp18 = _35->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp18 = $tmp18->next;
}
_37 = $tmp18->methods[0];
_38 = _37(_35);
_39 = _38.value;
if (_39) goto block7; else goto block6;
block6:;
*(&local1) = ((frost$core$Weak*) NULL);
ITable* $tmp19 = _35->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp19 = $tmp19->next;
}
_42 = $tmp19->methods[1];
_43 = _42(_35);
_44 = ((frost$core$Weak*) _43);
_45 = ((frost$core$Object*) _44);
frost$core$Frost$ref$frost$core$Object$Q(_45);
_47 = *(&local1);
_48 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_48);
*(&local1) = _44;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:70
_52 = *(&local1);
_53 = (frost$core$Bit) {false};
_54 = &_52->_valid;
*_54 = _53;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:71
_57 = *(&local1);
_58 = ((frost$core$Object*) NULL);
_59 = &_57->value;
*_59 = _58;
_61 = _43;
frost$core$Frost$unref$frost$core$Object$Q(_61);
_63 = *(&local1);
_64 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_64);
*(&local1) = ((frost$core$Weak*) NULL);
goto block5;
block7:;
_68 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_68);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:73
frost$core$Int$wrapper* $tmp20;
$tmp20 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp20->value = param0;
_71 = ((frost$collections$HashKey*) $tmp20);
frost$collections$HashMap$remove$frost$collections$HashMap$K(param1, _71);
_73 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_73);
_75 = *(&local0);
_76 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_76);
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
frost$collections$HashMap* frost$core$Frost$createWeakReferenceMap$R$frost$collections$HashMap$LTfrost$core$Int$Cfrost$collections$Array$LTfrost$core$Object$GT$GT() {

frost$collections$HashMap* _1;
frost$core$Object* _3;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:78
_1 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init(_1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return _1;

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(frost$core$String* param0, frost$core$Int param1) {

frost$core$Error* local0 = NULL;
frost$io$OutputStream* _3;
frost$core$String* _4;
frost$core$String* _5;
frost$core$Object* _6;
$fn21 _9;
frost$core$String* _10;
frost$core$String* _11;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$Object* _16;
frost$core$String* _19;
$fn22 _20;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:95
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:96
_3 = frost$io$Console$errorStream$R$frost$io$OutputStream();
_4 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s23, param0);
_5 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_4, &$s24);
frost$core$Int$wrapper* $tmp25;
$tmp25 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp25->value = param1;
_6 = ((frost$core$Object*) $tmp25);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Frost.frost:96:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_9 = ($fn26) _6->$class->vtable[0];
_10 = _9(_6);
_11 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_5, _10);
_12 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_19 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_11, &$s27);
_20 = ($fn28) _3->$class->vtable[19];
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
_30 = (frost$core$Int) {96u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s29, _30, &$s30);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:100
frost$core$System$crash();
_72 = (frost$core$Int) {100u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s31, _72, &$s32);
abort(); // unreachable

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(frost$core$String* param0, frost$core$Int param1, frost$core$String* param2) {

frost$core$Error* local0 = NULL;
frost$io$OutputStream* _3;
frost$core$String* _4;
frost$core$String* _5;
frost$core$Object* _6;
$fn33 _9;
frost$core$String* _10;
frost$core$String* _11;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$Object* _16;
frost$core$String* _19;
frost$core$String* _20;
frost$core$String* _21;
$fn34 _22;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:105
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:106
_3 = frost$io$Console$errorStream$R$frost$io$OutputStream();
_4 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s35, param0);
_5 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_4, &$s36);
frost$core$Int$wrapper* $tmp37;
$tmp37 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp37->value = param1;
_6 = ((frost$core$Object*) $tmp37);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Frost.frost:106:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_9 = ($fn38) _6->$class->vtable[0];
_10 = _9(_6);
_11 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_5, _10);
_12 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_19 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_11, &$s39);
_20 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_19, param2);
_21 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_20, &$s40);
_22 = ($fn41) _3->$class->vtable[19];
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
_32 = (frost$core$Int) {106u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s42, _32, &$s43);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:110
frost$core$System$crash();
_82 = (frost$core$Int) {110u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s44, _82, &$s45);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:115
_1 = (frost$core$Int32) {48u};
_2 = frost$core$Char32$init$frost$core$Int32(_1);
// begin inline call to function frost.core.Char32.>=(other:frost.core.Char32):frost.core.Bit from Frost.frost:115:14
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
// begin inline call to function frost.core.Char32.<=(other:frost.core.Char32):frost.core.Bit from Frost.frost:115:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:47
_16 = param0.value;
_17 = _13.value;
_18 = _16 <= _17;
_19 = (frost$core$Bit) {_18};
_21 = _19.value;
if (_21) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:116
// begin inline call to function frost.core.Char32.get_asUInt64():frost.core.UInt64 from Frost.frost:116:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:136
_26 = param0.value;
_27 = ((uint64_t) _26);
_28 = (frost$core$UInt64) {_27};
_30 = (frost$core$UInt8) {48u};
_31 = frost$core$Char8$init$frost$core$UInt8(_30);
// begin inline call to function frost.core.Char8.get_asUInt64():frost.core.UInt64 from Frost.frost:116:36
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:118
_45 = (frost$core$Int32) {65u};
_46 = frost$core$Char32$init$frost$core$Int32(_45);
// begin inline call to function frost.core.Char32.>=(other:frost.core.Char32):frost.core.Bit from Frost.frost:118:14
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
// begin inline call to function frost.core.Char32.<=(other:frost.core.Char32):frost.core.Bit from Frost.frost:118:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:47
_60 = param0.value;
_61 = _57.value;
_62 = _60 <= _61;
_63 = (frost$core$Bit) {_62};
_65 = _63.value;
if (_65) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:119
// begin inline call to function frost.core.Char32.get_asUInt64():frost.core.UInt64 from Frost.frost:119:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:136
_70 = param0.value;
_71 = ((uint64_t) _70);
_72 = (frost$core$UInt64) {_71};
_74 = (frost$core$UInt8) {65u};
_75 = frost$core$Char8$init$frost$core$UInt8(_74);
// begin inline call to function frost.core.Char8.get_asUInt64():frost.core.UInt64 from Frost.frost:119:36
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:121
_94 = (frost$core$Int32) {97u};
_95 = frost$core$Char32$init$frost$core$Int32(_94);
// begin inline call to function frost.core.Char32.>=(other:frost.core.Char32):frost.core.Bit from Frost.frost:121:14
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
// begin inline call to function frost.core.Char32.<=(other:frost.core.Char32):frost.core.Bit from Frost.frost:121:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:47
_109 = param0.value;
_110 = _106.value;
_111 = _109 <= _110;
_112 = (frost$core$Bit) {_111};
_114 = _112.value;
if (_114) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:122
// begin inline call to function frost.core.Char32.get_asUInt64():frost.core.UInt64 from Frost.frost:122:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:136
_119 = param0.value;
_120 = ((uint64_t) _119);
_121 = (frost$core$UInt64) {_120};
_123 = (frost$core$UInt8) {97u};
_124 = frost$core$Char8$init$frost$core$UInt8(_123);
// begin inline call to function frost.core.Char8.get_asUInt64():frost.core.UInt64 from Frost.frost:122:36
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:124
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
frost$core$Int* _37;
frost$core$Int _38;
frost$core$Int* _41;
frost$core$String$Index _43;
frost$core$String$Index _46;
frost$core$Equatable* _48;
$fn46 _49;
frost$core$Bit _50;
bool _51;
frost$core$Object* _52;
frost$core$Object* _54;
frost$core$String$Index _58;
frost$core$Char32 _59;
frost$core$UInt64$nullable _60;
frost$core$UInt64$nullable _63;
bool _64;
frost$core$Bit _65;
bool _66;
frost$core$UInt64$nullable _68;
bool _69;
frost$core$Bit _70;
bool _71;
frost$core$Int _73;
frost$core$UInt64 _76;
frost$core$UInt64 _77;
uint64_t _78;
uint64_t _79;
bool _80;
frost$core$Bit _81;
bool _82;
frost$core$UInt64 _87;
frost$core$UInt64 _88;
uint64_t _89;
uint64_t _90;
uint64_t _91;
frost$core$UInt64 _92;
frost$core$UInt64$nullable _93;
bool _94;
frost$core$Bit _95;
bool _96;
frost$core$Int _98;
frost$core$UInt64 _101;
uint64_t _102;
uint64_t _103;
uint64_t _104;
frost$core$UInt64 _105;
frost$core$String$Index _108;
frost$core$String$Index _109;
frost$core$UInt64 _113;
frost$core$UInt64$nullable _114;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:132
_1 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s47);
_2 = _1.value;
if (_2) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:133
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:135
_7 = (frost$core$UInt64) {0u};
*(&local0) = _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:136
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Frost.frost:136:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_12 = param1.value;
_13 = ((uint64_t) _12);
_14 = (frost$core$UInt64) {_13};
*(&local1) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:137
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:137:25
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:138
goto block6;
block6:;
_33 = *(&local4);
frost$core$String$Index$wrapper* $tmp48;
$tmp48 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp48->value = _33;
_34 = ((frost$core$Equatable*) $tmp48);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Frost.frost:138:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_37 = &param0->_length;
_38 = *_37;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_41 = &(&local6)->value;
*_41 = _38;
_43 = *(&local6);
*(&local5) = _43;
_46 = *(&local5);
frost$core$String$Index$wrapper* $tmp49;
$tmp49 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp49->value = _46;
_48 = ((frost$core$Equatable*) $tmp49);
ITable* $tmp50 = _34->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp50 = $tmp50->next;
}
_49 = $tmp50->methods[1];
_50 = _49(_34, _48);
_51 = _50.value;
_52 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_54);
if (_51) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:139
_58 = *(&local4);
_59 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, _58);
_60 = frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q(_59);
*(&local7) = _60;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:140
_63 = *(&local7);
_64 = !_63.nonnull;
_65 = (frost$core$Bit) {_64};
_66 = _65.value;
if (_66) goto block11; else goto block13;
block13:;
_68 = *(&local7);
_69 = _68.nonnull;
_70 = (frost$core$Bit) {_69};
_71 = _70.value;
if (_71) goto block14; else goto block15;
block15:;
_73 = (frost$core$Int) {140u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, _73, &$s52);
abort(); // unreachable
block14:;
_76 = ((frost$core$UInt64) _68.value);
_77 = *(&local1);
_78 = _76.value;
_79 = _77.value;
_80 = _78 >= _79;
_81 = (frost$core$Bit) {_80};
_82 = _81.value;
if (_82) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:141
return ((frost$core$UInt64$nullable) { .nonnull = false });
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:143
_87 = *(&local0);
_88 = *(&local1);
_89 = _87.value;
_90 = _88.value;
_91 = _89 * _90;
_92 = (frost$core$UInt64) {_91};
_93 = *(&local7);
_94 = _93.nonnull;
_95 = (frost$core$Bit) {_94};
_96 = _95.value;
if (_96) goto block16; else goto block17;
block17:;
_98 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s53, _98, &$s54);
abort(); // unreachable
block16:;
_101 = ((frost$core$UInt64) _93.value);
_102 = _92.value;
_103 = _101.value;
_104 = _102 + _103;
_105 = (frost$core$UInt64) {_104};
*(&local0) = _105;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:144
_108 = *(&local4);
_109 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, _108);
*(&local4) = _109;
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:146
_113 = *(&local0);
_114 = ((frost$core$UInt64$nullable) { _113, true });
return _114;

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
$fn55 _4;
frost$collections$Iterator* _5;
$fn56 _6;
frost$core$Int _7;
frost$core$Object* _8;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
bool _16;
frost$core$Int _18;
frost$core$String* _19;
frost$core$String* _20;
frost$core$Object* _22;
frost$core$Object* _24;
frost$core$Int _30;
frost$core$Int* _33;
frost$core$String$Index _35;
frost$core$String$Index _38;
frost$core$String$Index _40;
frost$core$String$Index _43;
frost$core$Char32 _44;
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
frost$core$Int32 _67;
frost$core$Char32 _68;
int32_t _71;
int32_t _72;
bool _73;
frost$core$Bit _74;
bool _76;
frost$core$Int _82;
frost$core$Int* _85;
frost$core$String$Index _87;
frost$core$String$Index _90;
frost$core$String$Index _95;
frost$core$String$Index _96;
frost$core$String$Index$nullable _97;
frost$core$Bit _98;
frost$core$Range$LTfrost$core$String$Index$Q$GT _99;
frost$core$String* _100;
frost$core$Int64$nullable _103;
frost$core$Int64$nullable _106;
bool _107;
frost$core$Bit _108;
bool _109;
frost$core$Int64$nullable _112;
bool _113;
frost$core$Bit _114;
bool _115;
frost$core$Int _117;
frost$core$Int64 _120;
int64_t _123;
int64_t _124;
frost$core$Int _125;
frost$core$Int$nullable _127;
frost$core$Int$nullable _133;
frost$core$Object* _135;
frost$core$Int$nullable _138;
bool _139;
frost$core$Bit _140;
bool _141;
frost$core$Int _143;
frost$core$String* _144;
frost$core$String* _145;
frost$core$Object* _147;
frost$core$Object* _149;
frost$core$String$Index _154;
frost$core$Int _157;
frost$core$Int* _160;
frost$core$String$Index _162;
frost$core$String$Index _165;
frost$core$Int _169;
frost$core$Int _170;
int64_t _173;
int64_t _174;
bool _175;
frost$core$Bit _176;
bool _179;
frost$core$Int32 _182;
frost$core$Char32 _183;
frost$core$Int _190;
frost$core$Int* _193;
frost$core$String$Index _195;
frost$core$String$Index _198;
frost$core$Char32 _200;
frost$core$String$Index _204;
frost$core$Char32 _205;
frost$core$Int32 _206;
frost$core$Char32 _207;
int32_t _210;
int32_t _211;
bool _212;
frost$core$Bit _213;
bool _215;
frost$core$Int$nullable _218;
bool _219;
frost$core$Bit _220;
bool _221;
frost$core$Int _223;
frost$core$Int _226;
frost$core$Char32 _227;
frost$core$String* _228;
frost$core$Object* _229;
frost$core$Object* _231;
frost$core$Int32 _234;
frost$core$Char32 _235;
int32_t _238;
int32_t _239;
bool _240;
frost$core$Bit _241;
bool _243;
frost$core$Int$nullable _246;
bool _247;
frost$core$Bit _248;
bool _249;
frost$core$Int _251;
frost$core$Int _254;
frost$core$Char32 _255;
frost$core$String* _256;
frost$core$Object* _257;
frost$core$Object* _259;
frost$core$Int32 _262;
frost$core$Char32 _263;
int32_t _266;
int32_t _267;
bool _268;
frost$core$Bit _269;
bool _271;
frost$core$Int$nullable _274;
bool _275;
frost$core$Bit _276;
bool _277;
frost$core$Int _279;
frost$core$Int _282;
frost$core$Char32 _283;
frost$core$String* _284;
frost$core$Object* _285;
frost$core$Object* _287;
frost$core$Int _291;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:172
// begin inline call to function frost.core.String.get_length():frost.core.Int from Frost.frost:172:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
_3 = ((frost$collections$Iterable*) param1);
ITable* $tmp57 = _3->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp57 = $tmp57->next;
}
_4 = $tmp57->methods[0];
_5 = _4(_3);
ITable* $tmp58 = _5->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp58 = $tmp58->next;
}
_6 = $tmp58->methods[2];
_7 = _6(_5);
_8 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_11 = (frost$core$Int) {2u};
_12 = _7.value;
_13 = _11.value;
_14 = _12 >= _13;
_15 = (frost$core$Bit) {_14};
_16 = _15.value;
if (_16) goto block2; else goto block3;
block3:;
_18 = (frost$core$Int) {172u};
_19 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s59, param1);
_20 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_19, &$s60);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s61, _18, _20);
_22 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_24);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:173
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:173:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_30 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_33 = &(&local1)->value;
*_33 = _30;
_35 = *(&local1);
*(&local0) = _35;
_38 = *(&local0);
_40 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, _38);
*(&local2) = _40;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:174
_43 = *(&local2);
_44 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, _43);
_45 = (frost$core$Int32) {60u};
_46 = frost$core$Char32$init$frost$core$Int32(_45);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:175:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_49 = _44.value;
_50 = _46.value;
_51 = _49 == _50;
_52 = (frost$core$Bit) {_51};
_54 = _52.value;
if (_54) goto block7; else goto block8;
block8:;
_56 = (frost$core$Int32) {94u};
_57 = frost$core$Char32$init$frost$core$Int32(_56);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:175:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_60 = _44.value;
_61 = _57.value;
_62 = _60 == _61;
_63 = (frost$core$Bit) {_62};
_65 = _63.value;
if (_65) goto block7; else goto block10;
block10:;
_67 = (frost$core$Int32) {62u};
_68 = frost$core$Char32$init$frost$core$Int32(_67);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:175:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_71 = _44.value;
_72 = _68.value;
_73 = _71 == _72;
_74 = (frost$core$Bit) {_73};
_76 = _74.value;
if (_76) goto block7; else goto block12;
block7:;
goto block6;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:179
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:179:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_82 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_85 = &(&local4)->value;
*_85 = _82;
_87 = *(&local4);
*(&local3) = _87;
_90 = *(&local3);
*(&local2) = _90;
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:182
_95 = *(&local2);
_96 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, _95);
_97 = ((frost$core$String$Index$nullable) { _96, true });
_98 = (frost$core$Bit) {false};
_99 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_97, ((frost$core$String$Index$nullable) { .nonnull = false }), _98);
_100 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, _99);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Frost.frost:182:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
_103 = frost$core$String$get_asInt64$R$frost$core$Int64$Q(_100);
*(&local6) = _103;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
_106 = *(&local6);
_107 = _106.nonnull;
_108 = (frost$core$Bit) {_107};
_109 = _108.value;
if (_109) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
_112 = *(&local6);
_113 = _112.nonnull;
_114 = (frost$core$Bit) {_113};
_115 = _114.value;
if (_115) goto block19; else goto block20;
block20:;
_117 = (frost$core$Int) {1456u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s62, _117, &$s63);
abort(); // unreachable
block19:;
_120 = ((frost$core$Int64) _112.value);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_123 = _120.value;
_124 = ((int64_t) _123);
_125 = (frost$core$Int) {_124};
_127 = ((frost$core$Int$nullable) { _125, true });
*(&local5) = _127;
goto block16;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local5) = ((frost$core$Int$nullable) { .nonnull = false });
goto block16;
block16:;
_133 = *(&local5);
*(&local7) = _133;
_135 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_135);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:183
_138 = *(&local7);
_139 = _138.nonnull;
_140 = (frost$core$Bit) {_139};
_141 = _140.value;
if (_141) goto block22; else goto block23;
block23:;
_143 = (frost$core$Int) {183u};
_144 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s64, param1);
_145 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_144, &$s65);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s66, _143, _145);
_147 = ((frost$core$Object*) _145);
frost$core$Frost$unref$frost$core$Object$Q(_147);
_149 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_149);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:184
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:185
_154 = *(&local2);
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:185:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_157 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_160 = &(&local10)->value;
*_160 = _157;
_162 = *(&local10);
*(&local9) = _162;
_165 = *(&local9);
// begin inline call to function frost.core.String.Index.=(other:frost.core.String.Index):frost.core.Bit from Frost.frost:185:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:66
_169 = _154.value;
_170 = _165.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_173 = _169.value;
_174 = _170.value;
_175 = _173 == _174;
_176 = (frost$core$Bit) {_175};
_179 = _176.value;
if (_179) goto block24; else goto block26;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:186
_182 = (frost$core$Int32) {32u};
_183 = frost$core$Char32$init$frost$core$Int32(_182);
*(&local8) = _183;
goto block25;
block26:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:189
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:189:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_190 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_193 = &(&local12)->value;
*_193 = _190;
_195 = *(&local12);
*(&local11) = _195;
_198 = *(&local11);
_200 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, _198);
*(&local8) = _200;
goto block25;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:191
_204 = *(&local2);
_205 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, _204);
_206 = (frost$core$Int32) {60u};
_207 = frost$core$Char32$init$frost$core$Int32(_206);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:192:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_210 = _205.value;
_211 = _207.value;
_212 = _210 == _211;
_213 = (frost$core$Bit) {_212};
_215 = _213.value;
if (_215) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:192
_218 = *(&local7);
_219 = _218.nonnull;
_220 = (frost$core$Bit) {_219};
_221 = _220.value;
if (_221) goto block37; else goto block38;
block38:;
_223 = (frost$core$Int) {192u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s67, _223, &$s68);
abort(); // unreachable
block37:;
_226 = ((frost$core$Int) _218.value);
_227 = *(&local8);
_228 = frost$core$String$leftAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, _226, _227);
_229 = ((frost$core$Object*) _228);
frost$core$Frost$ref$frost$core$Object$Q(_229);
_231 = ((frost$core$Object*) _228);
frost$core$Frost$unref$frost$core$Object$Q(_231);
return _228;
block35:;
_234 = (frost$core$Int32) {94u};
_235 = frost$core$Char32$init$frost$core$Int32(_234);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:193:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_238 = _205.value;
_239 = _235.value;
_240 = _238 == _239;
_241 = (frost$core$Bit) {_240};
_243 = _241.value;
if (_243) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:193
_246 = *(&local7);
_247 = _246.nonnull;
_248 = (frost$core$Bit) {_247};
_249 = _248.value;
if (_249) goto block42; else goto block43;
block43:;
_251 = (frost$core$Int) {193u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s69, _251, &$s70);
abort(); // unreachable
block42:;
_254 = ((frost$core$Int) _246.value);
_255 = *(&local8);
_256 = frost$core$String$centerAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, _254, _255);
_257 = ((frost$core$Object*) _256);
frost$core$Frost$ref$frost$core$Object$Q(_257);
_259 = ((frost$core$Object*) _256);
frost$core$Frost$unref$frost$core$Object$Q(_259);
return _256;
block40:;
_262 = (frost$core$Int32) {62u};
_263 = frost$core$Char32$init$frost$core$Int32(_262);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:194:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_266 = _205.value;
_267 = _263.value;
_268 = _266 == _267;
_269 = (frost$core$Bit) {_268};
_271 = _269.value;
if (_271) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:194
_274 = *(&local7);
_275 = _274.nonnull;
_276 = (frost$core$Bit) {_275};
_277 = _276.value;
if (_277) goto block47; else goto block48;
block48:;
_279 = (frost$core$Int) {194u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s71, _279, &$s72);
abort(); // unreachable
block47:;
_282 = ((frost$core$Int) _274.value);
_283 = *(&local8);
_284 = frost$core$String$rightAlign$frost$core$Int$frost$core$Char32$R$frost$core$String(param0, _282, _283);
_285 = ((frost$core$Object*) _284);
frost$core$Frost$ref$frost$core$Object$Q(_285);
_287 = ((frost$core$Object*) _284);
frost$core$Frost$unref$frost$core$Object$Q(_287);
return _284;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:195
_291 = (frost$core$Int) {195u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s73, _291);
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
frost$unsafe$Pointer local9;
frost$unsafe$Pointer local10;
frost$unsafe$Pointer local11;
frost$core$Int local12;
frost$core$Int local13;
frost$core$Int local14;
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
frost$core$Int* _42;
frost$core$Int _43;
frost$core$Int* _46;
frost$core$String$Index _48;
frost$core$String$Index _51;
frost$core$Comparable* _53;
$fn74 _54;
frost$core$Bit _55;
bool _56;
frost$core$Object* _57;
frost$core$Object* _59;
frost$core$String$Index _63;
frost$core$Char32 _64;
frost$core$Int32 _65;
frost$core$Char32 _66;
int32_t _69;
int32_t _70;
bool _71;
frost$core$Bit _72;
bool _74;
frost$core$Int32 _76;
frost$core$Char32 _77;
int32_t _80;
int32_t _81;
bool _82;
frost$core$Bit _83;
bool _85;
frost$core$UInt64 _88;
frost$core$Int32 _91;
frost$core$Char32 _92;
int32_t _95;
int32_t _96;
bool _97;
frost$core$Bit _98;
bool _100;
frost$core$Int32 _102;
frost$core$Char32 _103;
int32_t _106;
int32_t _107;
bool _108;
frost$core$Bit _109;
bool _111;
frost$core$UInt64 _114;
frost$core$Int32 _117;
frost$core$Char32 _118;
int32_t _121;
int32_t _122;
bool _123;
frost$core$Bit _124;
bool _126;
frost$core$Int32 _128;
frost$core$Char32 _129;
int32_t _132;
int32_t _133;
bool _134;
frost$core$Bit _135;
bool _137;
frost$core$UInt64 _140;
frost$core$Int32 _143;
frost$core$Char32 _144;
int32_t _147;
int32_t _148;
bool _149;
frost$core$Bit _150;
bool _152;
frost$core$UInt64 _155;
frost$core$Int32 _158;
frost$core$Char32 _159;
int32_t _162;
int32_t _163;
bool _164;
frost$core$Bit _165;
bool _167;
frost$core$UInt64 _170;
frost$core$String$UTF8List* _175;
frost$collections$ListView* _177;
frost$core$Object* _178;
frost$core$Object* _180;
frost$core$Object* _183;
frost$collections$ListView* _185;
frost$core$Object* _186;
frost$core$Object* _189;
frost$core$Int _193;
bool _199;
frost$core$UInt64 _201;
frost$core$UInt64 _202;
uint64_t _203;
uint64_t _204;
bool _205;
frost$core$Bit _206;
bool _207;
uint64_t _212;
int64_t _213;
frost$core$Int64 _214;
int64_t _218;
int64_t _219;
frost$core$Int64 _220;
int64_t _224;
uint64_t _225;
frost$core$UInt64 _226;
uint64_t _230;
uint64_t _231;
uint64_t _232;
frost$core$UInt64 _233;
frost$core$Int _242;
frost$core$Int _245;
int64_t _248;
int64_t _249;
int64_t _250;
int64_t* _253;
frost$unsafe$Pointer _255;
frost$unsafe$Pointer _258;
frost$core$Int _262;
frost$core$Int _263;
int64_t _264;
int64_t _265;
int64_t _266;
frost$core$Int _267;
frost$unsafe$Pointer _272;
int64_t _273;
frost$core$Int _274;
frost$core$Int64 _275;
frost$collections$ListView* _276;
frost$core$UInt64 _277;
frost$core$UInt64 _278;
uint64_t _281;
uint64_t _282;
uint64_t _283;
frost$core$UInt64 _284;
uint64_t _288;
int64_t _289;
frost$core$Int _290;
$fn75 _292;
frost$core$Object* _293;
frost$core$Char8 _294;
int64_t _295;
frost$core$Object* _297;
frost$core$UInt64 _300;
frost$core$UInt64 _301;
uint64_t _302;
uint64_t _303;
uint64_t _304;
frost$core$UInt64 _305;
frost$core$Int _308;
frost$core$Int _309;
int64_t _310;
int64_t _311;
int64_t _312;
frost$core$Int _313;
frost$core$UInt64 _316;
frost$core$UInt64 _317;
uint64_t _318;
uint64_t _319;
bool _320;
frost$core$Bit _321;
bool _322;
bool _325;
frost$core$UInt64 _327;
frost$core$UInt64 _328;
uint64_t _331;
uint64_t _332;
bool _333;
frost$core$Bit _334;
bool _336;
frost$unsafe$Pointer _339;
int64_t _340;
frost$core$Int _341;
frost$core$Int64 _342;
frost$core$UInt8 _343;
frost$core$Char8 _344;
int64_t _345;
frost$core$Int _348;
frost$core$Int _349;
int64_t _350;
int64_t _351;
int64_t _352;
frost$core$Int _353;
frost$core$Int _357;
frost$core$Int _358;
int64_t _359;
int64_t _360;
int64_t _361;
frost$core$Int _362;
frost$core$Int _365;
frost$core$Int _366;
int64_t _367;
int64_t _368;
int64_t _369;
frost$core$Int _370;
frost$core$Int _373;
frost$core$Int _374;
frost$core$Bit _375;
frost$core$Range$LTfrost$core$Int$GT _376;
frost$core$Int _377;
frost$core$Int _379;
frost$core$Bit _380;
bool _381;
frost$core$Int _382;
int64_t _384;
int64_t _385;
bool _386;
frost$core$Bit _387;
bool _388;
int64_t _390;
int64_t _391;
bool _392;
frost$core$Bit _393;
bool _394;
frost$unsafe$Pointer _397;
int64_t _398;
frost$core$Int _399;
frost$core$Int64 _400;
frost$unsafe$Pointer _401;
int64_t _402;
frost$core$Int _403;
frost$core$Int _404;
int64_t _405;
int64_t _406;
int64_t _407;
frost$core$Int _408;
frost$core$Int64 _409;
int64_t _410;
frost$core$Char8 _411;
int64_t _412;
frost$core$Int _415;
int64_t _416;
int64_t _417;
int64_t _418;
frost$core$Int _419;
int64_t _421;
int64_t _422;
bool _423;
frost$core$Bit _424;
bool _425;
int64_t _427;
int64_t _428;
bool _429;
frost$core$Bit _430;
bool _431;
int64_t _433;
int64_t _434;
int64_t _435;
frost$core$Int _436;
frost$core$String* _440;
frost$unsafe$Pointer _441;
frost$core$Int _442;
frost$core$Object* _444;
frost$core$Object* _446;
frost$collections$ListView* _448;
frost$core$Object* _449;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:209
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Frost.frost:209:25
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:210
_15 = (frost$core$UInt64) {10u};
*(&local3) = _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:211
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Frost.frost:211:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
_20 = (frost$core$String$UTF8List*) frostObjectAlloc(sizeof(frost$core$String$UTF8List), (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String(_20, &$s76);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:212
_38 = *(&local2);
frost$core$String$Index$wrapper* $tmp77;
$tmp77 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp77->value = _38;
_39 = ((frost$core$Comparable*) $tmp77);
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Frost.frost:212:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_42 = &param3->_length;
_43 = *_42;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_46 = &(&local6)->value;
*_46 = _43;
_48 = *(&local6);
*(&local5) = _48;
_51 = *(&local5);
frost$core$String$Index$wrapper* $tmp78;
$tmp78 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp78->value = _51;
_53 = ((frost$core$Comparable*) $tmp78);
ITable* $tmp79 = _39->$class->itable;
while ($tmp79->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp79 = $tmp79->next;
}
_54 = $tmp79->methods[1];
_55 = _54(_39, _53);
_56 = _55.value;
_57 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_57);
_59 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_59);
if (_56) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:213
_63 = *(&local2);
_64 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param3, _63);
_65 = (frost$core$Int32) {98u};
_66 = frost$core$Char32$init$frost$core$Int32(_65);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:214:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_69 = _64.value;
_70 = _66.value;
_71 = _69 == _70;
_72 = (frost$core$Bit) {_71};
_74 = _72.value;
if (_74) goto block9; else goto block10;
block10:;
_76 = (frost$core$Int32) {66u};
_77 = frost$core$Char32$init$frost$core$Int32(_76);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:214:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_80 = _64.value;
_81 = _77.value;
_82 = _80 == _81;
_83 = (frost$core$Bit) {_82};
_85 = _83.value;
if (_85) goto block9; else goto block12;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:215
_88 = (frost$core$UInt64) {2u};
*(&local3) = _88;
goto block8;
block12:;
_91 = (frost$core$Int32) {111u};
_92 = frost$core$Char32$init$frost$core$Int32(_91);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:217:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_95 = _64.value;
_96 = _92.value;
_97 = _95 == _96;
_98 = (frost$core$Bit) {_97};
_100 = _98.value;
if (_100) goto block14; else goto block15;
block15:;
_102 = (frost$core$Int32) {79u};
_103 = frost$core$Char32$init$frost$core$Int32(_102);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:217:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_106 = _64.value;
_107 = _103.value;
_108 = _106 == _107;
_109 = (frost$core$Bit) {_108};
_111 = _109.value;
if (_111) goto block14; else goto block17;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:218
_114 = (frost$core$UInt64) {8u};
*(&local3) = _114;
goto block8;
block17:;
_117 = (frost$core$Int32) {100u};
_118 = frost$core$Char32$init$frost$core$Int32(_117);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:220:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_121 = _64.value;
_122 = _118.value;
_123 = _121 == _122;
_124 = (frost$core$Bit) {_123};
_126 = _124.value;
if (_126) goto block19; else goto block20;
block20:;
_128 = (frost$core$Int32) {68u};
_129 = frost$core$Char32$init$frost$core$Int32(_128);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:220:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_132 = _64.value;
_133 = _129.value;
_134 = _132 == _133;
_135 = (frost$core$Bit) {_134};
_137 = _135.value;
if (_137) goto block19; else goto block22;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:221
_140 = (frost$core$UInt64) {10u};
*(&local3) = _140;
goto block8;
block22:;
_143 = (frost$core$Int32) {120u};
_144 = frost$core$Char32$init$frost$core$Int32(_143);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:223:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_147 = _64.value;
_148 = _144.value;
_149 = _147 == _148;
_150 = (frost$core$Bit) {_149};
_152 = _150.value;
if (_152) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:224
_155 = (frost$core$UInt64) {16u};
*(&local3) = _155;
goto block8;
block25:;
_158 = (frost$core$Int32) {88u};
_159 = frost$core$Char32$init$frost$core$Int32(_158);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Frost.frost:226:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
_162 = _64.value;
_163 = _159.value;
_164 = _162 == _163;
_165 = (frost$core$Bit) {_164};
_167 = _165.value;
if (_167) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:227
_170 = (frost$core$UInt64) {16u};
*(&local3) = _170;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:228
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from Frost.frost:228:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
_175 = (frost$core$String$UTF8List*) frostObjectAlloc(sizeof(frost$core$String$UTF8List), (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String(_175, &$s80);
_177 = ((frost$collections$ListView*) _175);
_178 = ((frost$core$Object*) _177);
frost$core$Frost$ref$frost$core$Object$Q(_178);
_180 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_180);
_183 = ((frost$core$Object*) _177);
frost$core$Frost$ref$frost$core$Object$Q(_183);
_185 = *(&local4);
_186 = ((frost$core$Object*) _185);
frost$core$Frost$unref$frost$core$Object$Q(_186);
*(&local4) = _177;
_189 = ((frost$core$Object*) _177);
frost$core$Frost$unref$frost$core$Object$Q(_189);
goto block8;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:231
_193 = (frost$core$Int) {231u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s81, _193, &$s82);
abort(); // unreachable
block8:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:235
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:236
_199 = param0.value;
if (_199) goto block34; else goto block33;
block34:;
_201 = *(&local3);
_202 = (frost$core$UInt64) {10u};
_203 = _201.value;
_204 = _202.value;
_205 = _203 != _204;
_206 = (frost$core$Bit) {_205};
_207 = _206.value;
if (_207) goto block31; else goto block33;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:237
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Frost.frost:237:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_212 = param1.value;
_213 = ((int64_t) _212);
_214 = (frost$core$Int64) {_213};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Frost.frost:237:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
_218 = _214.value;
_219 = -_218;
_220 = (frost$core$Int64) {_219};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Frost.frost:237:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
_224 = _220.value;
_225 = ((uint64_t) _224);
_226 = (frost$core$UInt64) {_225};
// begin inline call to function frost.core.UInt64.&&(other:frost.core.UInt64):frost.core.UInt64 from Frost.frost:237:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:166
_230 = _226.value;
_231 = param2.value;
_232 = _230 & _231;
_233 = (frost$core$UInt64) {_232};
*(&local7) = _233;
goto block32;
block33:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:240
*(&local7) = param1;
goto block32;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:242
_242 = (frost$core$Int) {64u};
*(&local8) = _242;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:243
_245 = *(&local8);
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Frost.frost:243:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_248 = _245.value;
_249 = _248 * 1u;
_250 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_249);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_253 = &(&local10)->value;
*_253 = _250;
_255 = *(&local10);
*(&local9) = _255;
_258 = *(&local9);
*(&local11) = _258;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:244
_262 = *(&local8);
_263 = (frost$core$Int) {1u};
_264 = _262.value;
_265 = _263.value;
_266 = _264 - _265;
_267 = (frost$core$Int) {_266};
*(&local12) = _267;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:245
goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:246
_272 = *(&local11);
_273 = _272.value;
_274 = *(&local12);
_275 = frost$core$Int64$init$frost$core$Int(_274);
_276 = *(&local4);
_277 = *(&local7);
_278 = *(&local3);
// begin inline call to function frost.core.UInt64.%(other:frost.core.UInt64):frost.core.UInt64 from Frost.frost:246:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:89
_281 = _277.value;
_282 = _278.value;
_283 = _281 % _282;
_284 = (frost$core$UInt64) {_283};
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Frost.frost:246:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
_288 = _284.value;
_289 = ((int64_t) _288);
_290 = (frost$core$Int) {_289};
ITable* $tmp83 = _276->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp83 = $tmp83->next;
}
_292 = $tmp83->methods[0];
_293 = _292(_276, _290);
_294 = ((frost$core$Char8$wrapper*) _293)->value;
_295 = _275.value;
((frost$core$Char8*)_273)[_295] = _294;
_297 = _293;
frost$core$Frost$unref$frost$core$Object$Q(_297);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:247
_300 = *(&local7);
_301 = *(&local3);
_302 = _300.value;
_303 = _301.value;
_304 = _302 / _303;
_305 = (frost$core$UInt64) {_304};
*(&local7) = _305;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:248
_308 = *(&local12);
_309 = (frost$core$Int) {1u};
_310 = _308.value;
_311 = _309.value;
_312 = _310 - _311;
_313 = (frost$core$Int) {_312};
*(&local12) = _313;
_316 = *(&local7);
_317 = (frost$core$UInt64) {0u};
_318 = _316.value;
_319 = _317.value;
_320 = _318 > _319;
_321 = (frost$core$Bit) {_320};
_322 = _321.value;
if (_322) goto block41; else goto block43;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:251
_325 = param0.value;
if (_325) goto block48; else goto block47;
block48:;
_327 = *(&local3);
_328 = (frost$core$UInt64) {10u};
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from Frost.frost:251:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
_331 = _327.value;
_332 = _328.value;
_333 = _331 == _332;
_334 = (frost$core$Bit) {_333};
_336 = _334.value;
if (_336) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:252
_339 = *(&local11);
_340 = _339.value;
_341 = *(&local12);
_342 = frost$core$Int64$init$frost$core$Int(_341);
_343 = (frost$core$UInt8) {45u};
_344 = frost$core$Char8$init$frost$core$UInt8(_343);
_345 = _342.value;
((frost$core$Char8*)_340)[_345] = _344;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:253
_348 = *(&local12);
_349 = (frost$core$Int) {1u};
_350 = _348.value;
_351 = _349.value;
_352 = _350 - _351;
_353 = (frost$core$Int) {_352};
*(&local12) = _353;
goto block47;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:255
_357 = *(&local12);
_358 = (frost$core$Int) {1u};
_359 = _357.value;
_360 = _358.value;
_361 = _359 + _360;
_362 = (frost$core$Int) {_361};
*(&local12) = _362;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:256
_365 = *(&local8);
_366 = *(&local12);
_367 = _365.value;
_368 = _366.value;
_369 = _367 - _368;
_370 = (frost$core$Int) {_369};
*(&local13) = _370;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:257
_373 = (frost$core$Int) {0u};
_374 = *(&local13);
_375 = (frost$core$Bit) {false};
_376 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_373, _374, _375);
_377 = _376.min;
*(&local14) = _377;
_379 = _376.max;
_380 = _376.inclusive;
_381 = _380.value;
_382 = (frost$core$Int) {1u};
if (_381) goto block53; else goto block54;
block53:;
_384 = _377.value;
_385 = _379.value;
_386 = _384 <= _385;
_387 = (frost$core$Bit) {_386};
_388 = _387.value;
if (_388) goto block50; else goto block51;
block54:;
_390 = _377.value;
_391 = _379.value;
_392 = _390 < _391;
_393 = (frost$core$Bit) {_392};
_394 = _393.value;
if (_394) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:258
_397 = *(&local11);
_398 = _397.value;
_399 = *(&local14);
_400 = frost$core$Int64$init$frost$core$Int(_399);
_401 = *(&local11);
_402 = _401.value;
_403 = *(&local14);
_404 = *(&local12);
_405 = _403.value;
_406 = _404.value;
_407 = _405 + _406;
_408 = (frost$core$Int) {_407};
_409 = frost$core$Int64$init$frost$core$Int(_408);
_410 = _409.value;
_411 = ((frost$core$Char8*)_402)[_410];
_412 = _400.value;
((frost$core$Char8*)_398)[_412] = _411;
_415 = *(&local14);
_416 = _379.value;
_417 = _415.value;
_418 = _416 - _417;
_419 = (frost$core$Int) {_418};
if (_381) goto block56; else goto block57;
block56:;
_421 = _419.value;
_422 = _382.value;
_423 = _421 >= _422;
_424 = (frost$core$Bit) {_423};
_425 = _424.value;
if (_425) goto block55; else goto block51;
block57:;
_427 = _419.value;
_428 = _382.value;
_429 = _427 > _428;
_430 = (frost$core$Bit) {_429};
_431 = _430.value;
if (_431) goto block55; else goto block51;
block55:;
_433 = _415.value;
_434 = _382.value;
_435 = _433 + _434;
_436 = (frost$core$Int) {_435};
*(&local14) = _436;
goto block50;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:260
_440 = (frost$core$String*) frostObjectAlloc(sizeof(frost$core$String), (frost$core$Class*) &frost$core$String$class);
_441 = *(&local11);
_442 = *(&local13);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_440, _441, _442);
_444 = ((frost$core$Object*) _440);
frost$core$Frost$ref$frost$core$Object$Q(_444);
_446 = ((frost$core$Object*) _440);
frost$core$Frost$unref$frost$core$Object$Q(_446);
_448 = *(&local4);
_449 = ((frost$core$Object*) _448);
frost$core$Frost$unref$frost$core$Object$Q(_449);
*(&local4) = ((frost$collections$ListView*) NULL);
return _440;

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
$fn84 _14;
frost$core$Int _15;
frost$core$Int _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:265
_1 = param0 != NULL;
_2 = (frost$core$Bit) {_1};
_3 = _2.value;
if (_3) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:266
_6 = param0 != NULL;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block3; else goto block4;
block4:;
_10 = (frost$core$Int) {266u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s85, _10, &$s86);
abort(); // unreachable
block3:;
_13 = param0;
ITable* $tmp87 = _13->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp87 = $tmp87->next;
}
_14 = $tmp87->methods[0];
_15 = _14(_13);
return _15;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:268
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
$fn88 _14;
frost$core$String* _15;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Object* _22;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:273
_1 = param0 != NULL;
_2 = (frost$core$Bit) {_1};
_3 = _2.value;
if (_3) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:274
_6 = param0 != NULL;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block3; else goto block4;
block4:;
_10 = (frost$core$Int) {274u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s89, _10, &$s90);
abort(); // unreachable
block3:;
_13 = param0;
_14 = ($fn91) _13->$class->vtable[0];
_15 = _14(_13);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_18);
return _15;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:276
_22 = ((frost$core$Object*) &$s92);
frost$core$Frost$ref$frost$core$Object$Q(_22);
return &$s93;

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
$fn94 _22;
frost$core$Bit _23;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:281
_1 = param0 == NULL;
_2 = (frost$core$Bit) {_1};
_3 = _2.value;
if (_3) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:282
_6 = param1 == NULL;
_7 = (frost$core$Bit) {_6};
return _7;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:284
_10 = param1 == NULL;
_11 = (frost$core$Bit) {_10};
_12 = _11.value;
if (_12) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:285
_15 = (frost$core$Bit) {false};
return _15;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:287
_18 = param0;
_19 = _18;
_20 = param1;
_21 = _20;
ITable* $tmp95 = _19->$class->itable;
while ($tmp95->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp95 = $tmp95->next;
}
_22 = $tmp95->methods[0];
_23 = _22(_19, _21);
return _23;

}
void frost$core$Frost$cleanup(void* rawSelf) {
frost$core$Frost* param0 = (frost$core$Frost*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:10
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

