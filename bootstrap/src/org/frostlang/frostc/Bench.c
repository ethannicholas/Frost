#include "org/frostlang/frostc/Bench.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
#include "frost/time/Timer.h"
#include "org/frostlang/frostc/Compiler/Settings.h"
#include "frost/threads/MessageQueue.h"
#include "frost/io/MemoryOutputStream.h"
#include "org/frostlang/frostc/LLVMCodeGenerator.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/threads/ScopedLock.h"
#include "org/frostlang/frostc/Compiler/Message.h"
#include "frost/core/Frost.h"
#include "frost/io/File.h"
#include "org/frostlang/frostc/Config.h"
#include "frost/collections/Array.h"
#include "frost/collections/ImmutableArray.h"
#include "frost/collections/ListView.h"
#include "frost/core/Bit.h"
#include "frost/io/OutputStream.h"
#include "org/frostlang/frostc/CodeGenerator.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionView.h"
#include "frost/threads/Lock.h"
#include "frost/core/Immutable.h"
#include "frost/io/Console.h"
#include "frost/core/Real64.h"
#include "frost/core/Error.h"
#include "frost/core/MutableString.h"
#include "frost/core/Maybe.h"
#include "frost/core/System.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"


static frost$core$String $s1;
org$frostlang$frostc$Bench$class_type org$frostlang$frostc$Bench$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Bench$cleanup, org$frostlang$frostc$Bench$bench$frost$core$String$frost$core$String$frost$core$Int$frost$core$Int, org$frostlang$frostc$Bench$bench$frost$core$String$frost$core$String, org$frostlang$frostc$Bench$run} };

typedef void (*$fn6)(frost$time$Timer*);
typedef frost$collections$Iterator* (*$fn36)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn40)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn45)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn55)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn69)(frost$collections$CollectionView*);
typedef void (*$fn89)(org$frostlang$frostc$CodeGenerator*);
typedef frost$core$String* (*$fn132)(frost$core$Object*);
typedef frost$core$String* (*$fn140)(frost$core$Object*);
typedef frost$core$String* (*$fn174)(frost$core$Object*);
typedef frost$core$String* (*$fn182)(frost$core$Object*);
typedef frost$core$Real64 (*$fn210)(frost$time$Timer*);
typedef frost$core$String* (*$fn214)(frost$core$Object*);
typedef void (*$fn231)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*, frost$core$Int, frost$core$Int);
typedef void (*$fn237)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*, frost$core$Int, frost$core$Int);
typedef void (*$fn239)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*);
typedef frost$core$String* (*$fn258)(frost$core$Object*);
typedef void (*$fn266)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*);
typedef frost$core$String* (*$fn294)(frost$core$Object*);
typedef void (*$fn324)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x42\x65\x6e\x63\x68", 26, 7935502561105279878, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x66\x61\x6b\x65\x2f\x70\x61\x74\x68\x2f\x42\x65\x6e\x63\x68\x44\x75\x6d\x6d\x79\x2e\x66\x72\x6f\x73\x74", 27, 6552183172853563514, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 107, -867402159131882985, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, -5861202104196742523, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x77\x61\x72\x6e\x69\x6e\x67\x3a\x20", 11, 2890546785777135939, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x65\x6e\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -8597413136814869315, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4f\x30", 3, -2382319437966649185, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4f\x33", 3, -2382318338455020974, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x65\x6c\x6c\x6f", 5, 7201466553693376363, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6d\x61\x69\x6e\x28\x29\x20\x7b\x20\x43\x6f\x6e\x73\x6f\x6c\x65\x2e\x70\x72\x69\x6e\x74\x4c\x69\x6e\x65\x28\x22\x48\x65\x6c\x6c\x6f\x2c\x20\x57\x6f\x72\x6c\x64\x21\x22\x29\x20\x7d", 52, 1470744474518815592, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e\x2f\x74\x65\x73\x74\x2f\x74\x65\x73\x74\x73\x2f\x57\x75\x6d\x70\x75\x73\x2e\x66\x72\x6f\x73\x74", 26, -1641527893991703732, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x65\x6e\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -8597413136814869315, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x75\x6d\x70\x75\x73", 6, 1639335822486632976, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6d\x61\x69\x6e\x28\x29\x20\x7b\x0a", 16, 2825733708493219975, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x43\x6f\x6e\x73\x6f\x6c\x65\x2e\x70\x72\x69\x6e\x74\x4c\x69\x6e\x65\x28\x22", 23, -4489290791127773989, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x29", 2, 561959326539097764, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x67", 3, 1611498228082597561, NULL };

void org$frostlang$frostc$Bench$bench$frost$core$String$frost$core$String$frost$core$Int$frost$core$Int(org$frostlang$frostc$Bench* param0, frost$core$String* param1, frost$core$String* param2, frost$core$Int param3, frost$core$Int param4) {

frost$time$Timer* local0 = NULL;
org$frostlang$frostc$Compiler$Settings* local1 = NULL;
frost$threads$MessageQueue* local2 = NULL;
frost$io$MemoryOutputStream* local3 = NULL;
org$frostlang$frostc$LLVMCodeGenerator* local4 = NULL;
org$frostlang$frostc$Compiler* local5 = NULL;
org$frostlang$frostc$ClassDecl* local6 = NULL;
org$frostlang$frostc$ClassDecl* local7 = NULL;
frost$threads$ScopedLock* local8 = NULL;
org$frostlang$frostc$Compiler$Message* local9 = NULL;
frost$core$String* local10 = NULL;
frost$core$Int local11;
frost$core$Int local12;
frost$core$String* local13 = NULL;
frost$core$String* local14 = NULL;
frost$core$Int local15;
frost$core$Int local16;
frost$core$String* local17 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:7
FROST_ASSERT(32 == sizeof(frost$time$Timer));
frost$time$Timer* $tmp2 = (frost$time$Timer*) frostObjectAlloc(32, (frost$core$Class*) &frost$time$Timer$class);
frost$time$Timer$init($tmp2);
*(&local0) = ((frost$time$Timer*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$time$Timer* $tmp3 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
*(&local0) = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:8
frost$time$Timer* $tmp4 = *(&local0);
$fn6 $tmp5 = ($fn6) $tmp4->$class->vtable[6];
$tmp5($tmp4);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:9
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Compiler$Settings));
org$frostlang$frostc$Compiler$Settings* $tmp7 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp8 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp9 = org$frostlang$frostc$Config$frostSourceDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp8, $tmp9);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp10 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp11 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp10, $tmp11);
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp12 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp13 = org$frostlang$frostc$Config$frostSourceDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp12, $tmp13);
frost$collections$Array$add$frost$collections$Array$T($tmp10, ((frost$core$Object*) $tmp12));
frost$collections$ImmutableArray* $tmp14 = frost$collections$ImmutableArray$from$frost$collections$Array$LTfrost$collections$ImmutableArray$T$GT$R$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$T$GT($tmp10);
frost$core$Bit $tmp15 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int$frost$core$Int$frost$core$Bit($tmp7, $tmp8, ((frost$collections$ListView*) $tmp14), param3, param4, $tmp15);
*(&local1) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
org$frostlang$frostc$Compiler$Settings* $tmp16 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
*(&local1) = $tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:11
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp17 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp17);
*(&local2) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$threads$MessageQueue* $tmp18 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local2) = $tmp17;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:12
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp19 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp19);
*(&local3) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$io$MemoryOutputStream* $tmp20 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
*(&local3) = $tmp19;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:13
FROST_ASSERT(272 == sizeof(org$frostlang$frostc$LLVMCodeGenerator));
org$frostlang$frostc$LLVMCodeGenerator* $tmp21 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(272, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
frost$core$String* $tmp22 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
frost$io$MemoryOutputStream* $tmp23 = *(&local3);
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp21, $tmp22, ((frost$io$OutputStream*) $tmp23));
*(&local4) = ((org$frostlang$frostc$LLVMCodeGenerator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
org$frostlang$frostc$LLVMCodeGenerator* $tmp24 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local4) = $tmp21;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:14
FROST_ASSERT(728 == sizeof(org$frostlang$frostc$Compiler));
org$frostlang$frostc$Compiler* $tmp25 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(728, (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
frost$threads$MessageQueue* $tmp26 = *(&local2);
org$frostlang$frostc$LLVMCodeGenerator* $tmp27 = *(&local4);
org$frostlang$frostc$Compiler$Settings* $tmp28 = *(&local1);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT$org$frostlang$frostc$CodeGenerator$Q$org$frostlang$frostc$Compiler$Settings($tmp25, $tmp26, ((org$frostlang$frostc$CodeGenerator*) $tmp27), $tmp28);
*(&local5) = ((org$frostlang$frostc$Compiler*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
org$frostlang$frostc$Compiler* $tmp29 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local5) = $tmp25;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:15
org$frostlang$frostc$Compiler* $tmp30 = *(&local5);
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp31 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp31, &$s32);
// begin inline call to method org.frostlang.frostc.Compiler.compile(path:frost.io.File, text:frost.core.String) from Bench.frost:15:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6213
frost$collections$ListView* $tmp33 = org$frostlang$frostc$Compiler$scan$frost$io$File$frost$core$String$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT($tmp30, $tmp31, param2);
ITable* $tmp34 = ((frost$collections$Iterable*) $tmp33)->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp34 = $tmp34->next;
}
$fn36 $tmp35 = $tmp34->methods[0];
frost$collections$Iterator* $tmp37 = $tmp35(((frost$collections$Iterable*) $tmp33));
goto block2;
block2:;
ITable* $tmp38 = $tmp37->$class->itable;
while ($tmp38->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp38 = $tmp38->next;
}
$fn40 $tmp39 = $tmp38->methods[0];
frost$core$Bit $tmp41 = $tmp39($tmp37);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block4; else goto block3;
block3:;
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp43 = $tmp37->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp43 = $tmp43->next;
}
$fn45 $tmp44 = $tmp43->methods[1];
frost$core$Object* $tmp46 = $tmp44($tmp37);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp46)));
org$frostlang$frostc$ClassDecl* $tmp47 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local6) = ((org$frostlang$frostc$ClassDecl*) $tmp46);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6214
org$frostlang$frostc$ClassDecl* $tmp48 = *(&local6);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl($tmp30, $tmp48);
frost$core$Frost$unref$frost$core$Object$Q($tmp46);
org$frostlang$frostc$ClassDecl* $tmp49 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block2;
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:16
org$frostlang$frostc$Compiler* $tmp50 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.finish() from Bench.frost:16:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6246
goto block6;
block6:;
frost$collections$Array** $tmp51 = &$tmp50->pendingClasses;
frost$collections$Array* $tmp52 = *$tmp51;
ITable* $tmp53 = ((frost$collections$CollectionView*) $tmp52)->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp53 = $tmp53->next;
}
$fn55 $tmp54 = $tmp53->methods[0];
frost$core$Int $tmp56 = $tmp54(((frost$collections$CollectionView*) $tmp52));
frost$core$Int $tmp57 = (frost$core$Int) {0u};
int64_t $tmp58 = $tmp56.value;
int64_t $tmp59 = $tmp57.value;
bool $tmp60 = $tmp58 > $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6247
frost$collections$Array** $tmp63 = &$tmp50->pendingClasses;
frost$collections$Array* $tmp64 = *$tmp63;
frost$collections$Array** $tmp65 = &$tmp50->pendingClasses;
frost$collections$Array* $tmp66 = *$tmp65;
ITable* $tmp67 = ((frost$collections$CollectionView*) $tmp66)->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp67 = $tmp67->next;
}
$fn69 $tmp68 = $tmp67->methods[0];
frost$core$Int $tmp70 = $tmp68(((frost$collections$CollectionView*) $tmp66));
frost$core$Int $tmp71 = (frost$core$Int) {1u};
int64_t $tmp72 = $tmp70.value;
int64_t $tmp73 = $tmp71.value;
int64_t $tmp74 = $tmp72 - $tmp73;
frost$core$Int $tmp75 = (frost$core$Int) {$tmp74};
frost$core$Object* $tmp76 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp64, $tmp75);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp76)));
org$frostlang$frostc$ClassDecl* $tmp77 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) $tmp76);
frost$core$Frost$unref$frost$core$Object$Q($tmp76);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6248
org$frostlang$frostc$ClassDecl* $tmp78 = *(&local7);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl($tmp50, $tmp78);
org$frostlang$frostc$ClassDecl* $tmp79 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6250
org$frostlang$frostc$CodeGenerator** $tmp80 = &$tmp50->codeGenerator;
org$frostlang$frostc$CodeGenerator* $tmp81 = *$tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81 != NULL};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block9; else goto block10;
block10:;
frost$core$Int $tmp84 = (frost$core$Int) {6250u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s85, $tmp84, &$s86);
abort(); // unreachable
block9:;
ITable* $tmp87 = $tmp81->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class) {
    $tmp87 = $tmp87->next;
}
$fn89 $tmp88 = $tmp87->methods[5];
$tmp88($tmp81);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:17
goto block11;
block11:;
frost$threads$MessageQueue* $tmp90 = *(&local2);
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Bench.frost:17:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp91 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp92 = &$tmp90->lock;
frost$threads$Lock* $tmp93 = *$tmp92;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp91, $tmp93);
*(&local8) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$threads$ScopedLock* $tmp94 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local8) = $tmp91;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp95 = &$tmp90->count;
frost$core$Int $tmp96 = *$tmp95;
frost$threads$ScopedLock* $tmp97 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
*(&local8) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp98 = (frost$core$Int) {0u};
int64_t $tmp99 = $tmp96.value;
int64_t $tmp100 = $tmp98.value;
bool $tmp101 = $tmp99 > $tmp100;
frost$core$Bit $tmp102 = (frost$core$Bit) {$tmp101};
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:18
frost$threads$MessageQueue* $tmp104 = *(&local2);
frost$core$Immutable* $tmp105 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp104);
*(&local9) = ((org$frostlang$frostc$Compiler$Message*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Message*) $tmp105)));
org$frostlang$frostc$Compiler$Message* $tmp106 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local9) = ((org$frostlang$frostc$Compiler$Message*) $tmp105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:19
org$frostlang$frostc$Compiler$Message* $tmp107 = *(&local9);
frost$core$Int* $tmp108 = &$tmp107->$rawValue;
frost$core$Int $tmp109 = *$tmp108;
frost$core$Int $tmp110 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Bench.frost:20:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp111 = $tmp109.value;
int64_t $tmp112 = $tmp110.value;
bool $tmp113 = $tmp111 == $tmp112;
frost$core$Bit $tmp114 = (frost$core$Bit) {$tmp113};
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block17; else goto block18;
block17:;
frost$core$String** $tmp116 = (frost$core$String**) ($tmp107->$data + 0);
frost$core$String* $tmp117 = *$tmp116;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$String* $tmp118 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local10) = $tmp117;
frost$core$Int* $tmp119 = (frost$core$Int*) ($tmp107->$data + 8);
frost$core$Int $tmp120 = *$tmp119;
*(&local11) = $tmp120;
frost$core$Int* $tmp121 = (frost$core$Int*) ($tmp107->$data + 16);
frost$core$Int $tmp122 = *$tmp121;
*(&local12) = $tmp122;
frost$core$String** $tmp123 = (frost$core$String**) ($tmp107->$data + 24);
frost$core$String* $tmp124 = *$tmp123;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
frost$core$String* $tmp125 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local13) = $tmp124;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:21
frost$core$String* $tmp126 = *(&local10);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Bench.frost:21:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$String* $tmp127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp126, &$s128);
frost$core$Int $tmp129 = *(&local11);
frost$core$Int$wrapper* $tmp130;
$tmp130 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp130->value = $tmp129;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:21:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn132 $tmp131 = ($fn132) ((frost$core$Object*) $tmp130)->$class->vtable[0];
frost$core$String* $tmp133 = $tmp131(((frost$core$Object*) $tmp130));
frost$core$String* $tmp134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp127, $tmp133);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$String* $tmp135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp134, &$s136);
frost$core$Int $tmp137 = *(&local12);
frost$core$Int$wrapper* $tmp138;
$tmp138 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp138->value = $tmp137;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:21:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn140 $tmp139 = ($fn140) ((frost$core$Object*) $tmp138)->$class->vtable[0];
frost$core$String* $tmp141 = $tmp139(((frost$core$Object*) $tmp138));
frost$core$String* $tmp142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp135, $tmp141);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
frost$core$String* $tmp143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp142, &$s144);
frost$core$String* $tmp145 = *(&local13);
frost$core$String* $tmp146 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp143, $tmp145);
frost$core$String* $tmp147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp146, &$s148);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Bench.frost:21:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp147);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s149);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$String* $tmp150 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp151 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
*(&local10) = ((frost$core$String*) NULL);
goto block16;
block18:;
frost$core$Int $tmp152 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Bench.frost:23:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp153 = $tmp109.value;
int64_t $tmp154 = $tmp152.value;
bool $tmp155 = $tmp153 == $tmp154;
frost$core$Bit $tmp156 = (frost$core$Bit) {$tmp155};
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block25; else goto block16;
block25:;
frost$core$String** $tmp158 = (frost$core$String**) ($tmp107->$data + 0);
frost$core$String* $tmp159 = *$tmp158;
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
frost$core$String* $tmp160 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
*(&local14) = $tmp159;
frost$core$Int* $tmp161 = (frost$core$Int*) ($tmp107->$data + 8);
frost$core$Int $tmp162 = *$tmp161;
*(&local15) = $tmp162;
frost$core$Int* $tmp163 = (frost$core$Int*) ($tmp107->$data + 16);
frost$core$Int $tmp164 = *$tmp163;
*(&local16) = $tmp164;
frost$core$String** $tmp165 = (frost$core$String**) ($tmp107->$data + 24);
frost$core$String* $tmp166 = *$tmp165;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
frost$core$String* $tmp167 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local17) = $tmp166;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:24
frost$core$String* $tmp168 = *(&local14);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Bench.frost:24:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
frost$core$String* $tmp169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp168, &$s170);
frost$core$Int $tmp171 = *(&local15);
frost$core$Int$wrapper* $tmp172;
$tmp172 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp172->value = $tmp171;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:24:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn174 $tmp173 = ($fn174) ((frost$core$Object*) $tmp172)->$class->vtable[0];
frost$core$String* $tmp175 = $tmp173(((frost$core$Object*) $tmp172));
frost$core$String* $tmp176 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp169, $tmp175);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$String* $tmp177 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp176, &$s178);
frost$core$Int $tmp179 = *(&local16);
frost$core$Int$wrapper* $tmp180;
$tmp180 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp180->value = $tmp179;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:24:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn182 $tmp181 = ($fn182) ((frost$core$Object*) $tmp180)->$class->vtable[0];
frost$core$String* $tmp183 = $tmp181(((frost$core$Object*) $tmp180));
frost$core$String* $tmp184 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp177, $tmp183);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$String* $tmp185 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp184, &$s186);
frost$core$String* $tmp187 = *(&local17);
frost$core$String* $tmp188 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp185, $tmp187);
frost$core$String* $tmp189 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp188, &$s190);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Bench.frost:24:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp189);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s191);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
frost$core$String* $tmp192 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local17) = ((frost$core$String*) NULL);
frost$core$String* $tmp193 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
*(&local14) = ((frost$core$String*) NULL);
goto block16;
block16:;
org$frostlang$frostc$Compiler$Message* $tmp194 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
*(&local9) = ((org$frostlang$frostc$Compiler$Message*) NULL);
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:28
org$frostlang$frostc$Compiler* $tmp195 = *(&local5);
frost$core$Int* $tmp196 = &$tmp195->errorCount;
frost$core$Int $tmp197 = *$tmp196;
frost$core$Int $tmp198 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Bench.frost:28:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp199 = $tmp197.value;
int64_t $tmp200 = $tmp198.value;
bool $tmp201 = $tmp199 == $tmp200;
frost$core$Bit $tmp202 = (frost$core$Bit) {$tmp201};
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block33; else goto block34;
block34:;
frost$core$Int $tmp204 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s205, $tmp204);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:29
// begin inline call to function frost.core.String.get_asString():frost.core.String from Bench.frost:29:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String* $tmp206 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param1, &$s207);
frost$time$Timer* $tmp208 = *(&local0);
$fn210 $tmp209 = ($fn210) $tmp208->$class->vtable[4];
frost$core$Real64 $tmp211 = $tmp209($tmp208);
frost$core$Real64$wrapper* $tmp212;
$tmp212 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp212->value = $tmp211;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:29:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn214 $tmp213 = ($fn214) ((frost$core$Object*) $tmp212)->$class->vtable[0];
frost$core$String* $tmp215 = $tmp213(((frost$core$Object*) $tmp212));
frost$core$String* $tmp216 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp206, $tmp215);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$String* $tmp217 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp216, &$s218);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Bench.frost:29:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp217);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s219);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler* $tmp220 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
*(&local5) = ((org$frostlang$frostc$Compiler*) NULL);
org$frostlang$frostc$LLVMCodeGenerator* $tmp221 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
*(&local4) = ((org$frostlang$frostc$LLVMCodeGenerator*) NULL);
frost$io$MemoryOutputStream* $tmp222 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
*(&local3) = ((frost$io$MemoryOutputStream*) NULL);
frost$threads$MessageQueue* $tmp223 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
*(&local2) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp224 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local1) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
frost$time$Timer* $tmp225 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
*(&local0) = ((frost$time$Timer*) NULL);
return;

}
void org$frostlang$frostc$Bench$bench$frost$core$String$frost$core$String(org$frostlang$frostc$Bench* param0, frost$core$String* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:33
frost$core$String* $tmp226 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param1, &$s227);
frost$core$Int $tmp228 = (frost$core$Int) {0u};
frost$core$Int $tmp229 = (frost$core$Int) {0u};
$fn231 $tmp230 = ($fn231) param0->$class->vtable[2];
$tmp230(param0, $tmp226, param2, $tmp228, $tmp229);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:34
frost$core$String* $tmp232 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param1, &$s233);
frost$core$Int $tmp234 = (frost$core$Int) {3u};
frost$core$Int $tmp235 = (frost$core$Int) {3u};
$fn237 $tmp236 = ($fn237) param0->$class->vtable[2];
$tmp236(param0, $tmp232, param2, $tmp234, $tmp235);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
return;

}
void org$frostlang$frostc$Bench$run(org$frostlang$frostc$Bench* param0) {

frost$core$Error* local0 = NULL;
frost$io$File* local1 = NULL;
frost$core$MutableString* local2 = NULL;
frost$core$Int local3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:38
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:39
$fn239 $tmp238 = ($fn239) param0->$class->vtable[3];
$tmp238(param0, &$s240, &$s241);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:40
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp242 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp243 = org$frostlang$frostc$Config$frostSourceDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp242, $tmp243);
frost$io$File* $tmp244 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp242, &$s245);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$io$File* $tmp246 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local1) = $tmp244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:41
frost$io$File* $tmp247 = *(&local1);
frost$core$Maybe* $tmp248 = frost$io$File$readFully$R$frost$core$Maybe$LTfrost$core$String$GT($tmp247);
frost$core$Int* $tmp249 = &$tmp248->$rawValue;
frost$core$Int $tmp250 = *$tmp249;
int64_t $tmp251 = $tmp250.value;
bool $tmp252 = $tmp251 == 0u;
if ($tmp252) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp253 = (frost$core$Error**) ($tmp248->$data + 0);
frost$core$Error* $tmp254 = *$tmp253;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
*(&local0) = $tmp254;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$io$File* $tmp255 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
*(&local1) = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:50
frost$core$Error* $tmp256 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from Bench.frost:50:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn258 $tmp257 = ($fn258) ((frost$core$Object*) $tmp256)->$class->vtable[0];
frost$core$String* $tmp259 = $tmp257(((frost$core$Object*) $tmp256));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp259);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:51
frost$core$System$crash();
frost$core$Int $tmp260 = (frost$core$Int) {51u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s261, $tmp260, &$s262);
abort(); // unreachable
block3:;
frost$core$Object** $tmp263 = (frost$core$Object**) ($tmp248->$data + 0);
frost$core$Object* $tmp264 = *$tmp263;
$fn266 $tmp265 = ($fn266) param0->$class->vtable[3];
$tmp265(param0, &$s267, ((frost$core$String*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:42
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp268 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp268, &$s269);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$MutableString* $tmp270 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
*(&local2) = $tmp268;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:43
frost$core$Int $tmp271 = (frost$core$Int) {1u};
frost$core$Int $tmp272 = (frost$core$Int) {10000u};
frost$core$Bit $tmp273 = (frost$core$Bit) {true};
frost$core$Range$LTfrost$core$Int$GT $tmp274 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp271, $tmp272, $tmp273);
frost$core$Int $tmp275 = $tmp274.min;
*(&local3) = $tmp275;
frost$core$Int $tmp276 = $tmp274.max;
frost$core$Bit $tmp277 = $tmp274.inclusive;
bool $tmp278 = $tmp277.value;
frost$core$Int $tmp279 = (frost$core$Int) {1u};
if ($tmp278) goto block8; else goto block9;
block8:;
int64_t $tmp280 = $tmp275.value;
int64_t $tmp281 = $tmp276.value;
bool $tmp282 = $tmp280 <= $tmp281;
frost$core$Bit $tmp283 = (frost$core$Bit) {$tmp282};
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block5; else goto block6;
block9:;
int64_t $tmp285 = $tmp275.value;
int64_t $tmp286 = $tmp276.value;
bool $tmp287 = $tmp285 < $tmp286;
frost$core$Bit $tmp288 = (frost$core$Bit) {$tmp287};
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:44
frost$core$MutableString* $tmp290 = *(&local2);
frost$core$Int $tmp291 = *(&local3);
frost$core$Int$wrapper* $tmp292;
$tmp292 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp292->value = $tmp291;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:44:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn294 $tmp293 = ($fn294) ((frost$core$Object*) $tmp292)->$class->vtable[0];
frost$core$String* $tmp295 = $tmp293(((frost$core$Object*) $tmp292));
frost$core$String* $tmp296 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s297, $tmp295);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$core$String* $tmp298 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp296, &$s299);
frost$core$MutableString$append$frost$core$String($tmp290, $tmp298);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$core$Int $tmp300 = *(&local3);
int64_t $tmp301 = $tmp276.value;
int64_t $tmp302 = $tmp300.value;
int64_t $tmp303 = $tmp301 - $tmp302;
frost$core$Int $tmp304 = (frost$core$Int) {$tmp303};
if ($tmp278) goto block12; else goto block13;
block12:;
int64_t $tmp305 = $tmp304.value;
int64_t $tmp306 = $tmp279.value;
bool $tmp307 = $tmp305 >= $tmp306;
frost$core$Bit $tmp308 = (frost$core$Bit) {$tmp307};
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block11; else goto block6;
block13:;
int64_t $tmp310 = $tmp304.value;
int64_t $tmp311 = $tmp279.value;
bool $tmp312 = $tmp310 > $tmp311;
frost$core$Bit $tmp313 = (frost$core$Bit) {$tmp312};
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block11; else goto block6;
block11:;
int64_t $tmp315 = $tmp300.value;
int64_t $tmp316 = $tmp279.value;
int64_t $tmp317 = $tmp315 + $tmp316;
frost$core$Int $tmp318 = (frost$core$Int) {$tmp317};
*(&local3) = $tmp318;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:46
frost$core$MutableString* $tmp319 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp319, &$s320);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:47
frost$core$MutableString* $tmp321 = *(&local2);
frost$core$String* $tmp322 = frost$core$MutableString$finish$R$frost$core$String($tmp321);
$fn324 $tmp323 = ($fn324) param0->$class->vtable[3];
$tmp323(param0, &$s325, $tmp322);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$MutableString* $tmp326 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local2) = ((frost$core$MutableString*) NULL);
frost$io$File* $tmp327 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local1) = ((frost$io$File*) NULL);
frost$core$Error* $tmp328 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$Bench$init(org$frostlang$frostc$Bench* param0) {

return;

}
void org$frostlang$frostc$Bench$cleanup(org$frostlang$frostc$Bench* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:3
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

