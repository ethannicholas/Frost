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
typedef void (*$fn84)(org$frostlang$frostc$CodeGenerator*);
typedef frost$core$String* (*$fn127)(frost$core$Object*);
typedef frost$core$String* (*$fn135)(frost$core$Object*);
typedef frost$core$String* (*$fn169)(frost$core$Object*);
typedef frost$core$String* (*$fn177)(frost$core$Object*);
typedef frost$core$Real64 (*$fn205)(frost$time$Timer*);
typedef frost$core$String* (*$fn209)(frost$core$Object*);
typedef void (*$fn226)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*, frost$core$Int, frost$core$Int);
typedef void (*$fn232)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*, frost$core$Int, frost$core$Int);
typedef void (*$fn234)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*);
typedef frost$core$String* (*$fn253)(frost$core$Object*);
typedef void (*$fn261)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*);
typedef frost$core$String* (*$fn289)(frost$core$Object*);
typedef void (*$fn319)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x42\x65\x6e\x63\x68", 26, 7935502561105279878, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x66\x61\x6b\x65\x2f\x70\x61\x74\x68\x2f\x42\x65\x6e\x63\x68\x44\x75\x6d\x6d\x79\x2e\x66\x72\x6f\x73\x74", 27, 6552183172853563514, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, -5861202104196742523, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x77\x61\x72\x6e\x69\x6e\x67\x3a\x20", 11, 2890546785777135939, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x65\x6e\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -8597413136814869315, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4f\x30", 3, -2382319437966649185, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4f\x33", 3, -2382318338455020974, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x65\x6c\x6c\x6f", 5, 7201466553693376363, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6d\x61\x69\x6e\x28\x29\x20\x7b\x20\x43\x6f\x6e\x73\x6f\x6c\x65\x2e\x70\x72\x69\x6e\x74\x4c\x69\x6e\x65\x28\x22\x48\x65\x6c\x6c\x6f\x2c\x20\x57\x6f\x72\x6c\x64\x21\x22\x29\x20\x7d", 52, 1470744474518815592, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e\x2f\x74\x65\x73\x74\x2f\x74\x65\x73\x74\x73\x2f\x57\x75\x6d\x70\x75\x73\x2e\x66\x72\x6f\x73\x74", 26, -1641527893991703732, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x65\x6e\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -8597413136814869315, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x75\x6d\x70\x75\x73", 6, 1639335822486632976, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6d\x61\x69\x6e\x28\x29\x20\x7b\x0a", 16, 2825733708493219975, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x43\x6f\x6e\x73\x6f\x6c\x65\x2e\x70\x72\x69\x6e\x74\x4c\x69\x6e\x65\x28\x22", 23, -4489290791127773989, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x29", 2, 561959326539097764, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x67", 3, 1611498228082597561, NULL };

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
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT$org$frostlang$frostc$CodeGenerator$org$frostlang$frostc$Compiler$Settings($tmp25, $tmp26, ((org$frostlang$frostc$CodeGenerator*) $tmp27), $tmp28);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6185
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6186
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6218
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6219
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6220
org$frostlang$frostc$ClassDecl* $tmp78 = *(&local7);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl($tmp50, $tmp78);
org$frostlang$frostc$ClassDecl* $tmp79 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6222
org$frostlang$frostc$CodeGenerator** $tmp80 = &$tmp50->codeGenerator;
org$frostlang$frostc$CodeGenerator* $tmp81 = *$tmp80;
ITable* $tmp82 = $tmp81->$class->itable;
while ($tmp82->$class != (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class) {
    $tmp82 = $tmp82->next;
}
$fn84 $tmp83 = $tmp82->methods[5];
$tmp83($tmp81);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:17
goto block9;
block9:;
frost$threads$MessageQueue* $tmp85 = *(&local2);
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Bench.frost:17:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp86 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp87 = &$tmp85->lock;
frost$threads$Lock* $tmp88 = *$tmp87;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp86, $tmp88);
*(&local8) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$threads$ScopedLock* $tmp89 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local8) = $tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp90 = &$tmp85->count;
frost$core$Int $tmp91 = *$tmp90;
frost$threads$ScopedLock* $tmp92 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local8) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp93 = (frost$core$Int) {0u};
int64_t $tmp94 = $tmp91.value;
int64_t $tmp95 = $tmp93.value;
bool $tmp96 = $tmp94 > $tmp95;
frost$core$Bit $tmp97 = (frost$core$Bit) {$tmp96};
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:18
frost$threads$MessageQueue* $tmp99 = *(&local2);
frost$core$Immutable* $tmp100 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp99);
*(&local9) = ((org$frostlang$frostc$Compiler$Message*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Message*) $tmp100)));
org$frostlang$frostc$Compiler$Message* $tmp101 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
*(&local9) = ((org$frostlang$frostc$Compiler$Message*) $tmp100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:19
org$frostlang$frostc$Compiler$Message* $tmp102 = *(&local9);
frost$core$Int* $tmp103 = &$tmp102->$rawValue;
frost$core$Int $tmp104 = *$tmp103;
frost$core$Int $tmp105 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Bench.frost:20:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp106 = $tmp104.value;
int64_t $tmp107 = $tmp105.value;
bool $tmp108 = $tmp106 == $tmp107;
frost$core$Bit $tmp109 = (frost$core$Bit) {$tmp108};
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block15; else goto block16;
block15:;
frost$core$String** $tmp111 = (frost$core$String**) ($tmp102->$data + 0);
frost$core$String* $tmp112 = *$tmp111;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$String* $tmp113 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
*(&local10) = $tmp112;
frost$core$Int* $tmp114 = (frost$core$Int*) ($tmp102->$data + 8);
frost$core$Int $tmp115 = *$tmp114;
*(&local11) = $tmp115;
frost$core$Int* $tmp116 = (frost$core$Int*) ($tmp102->$data + 16);
frost$core$Int $tmp117 = *$tmp116;
*(&local12) = $tmp117;
frost$core$String** $tmp118 = (frost$core$String**) ($tmp102->$data + 24);
frost$core$String* $tmp119 = *$tmp118;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$String* $tmp120 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
*(&local13) = $tmp119;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:21
frost$core$String* $tmp121 = *(&local10);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Bench.frost:21:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$String* $tmp122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp121, &$s123);
frost$core$Int $tmp124 = *(&local11);
frost$core$Int$wrapper* $tmp125;
$tmp125 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp125->value = $tmp124;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:21:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn127 $tmp126 = ($fn127) ((frost$core$Object*) $tmp125)->$class->vtable[0];
frost$core$String* $tmp128 = $tmp126(((frost$core$Object*) $tmp125));
frost$core$String* $tmp129 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp122, $tmp128);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$String* $tmp130 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp129, &$s131);
frost$core$Int $tmp132 = *(&local12);
frost$core$Int$wrapper* $tmp133;
$tmp133 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp133->value = $tmp132;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:21:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn135 $tmp134 = ($fn135) ((frost$core$Object*) $tmp133)->$class->vtable[0];
frost$core$String* $tmp136 = $tmp134(((frost$core$Object*) $tmp133));
frost$core$String* $tmp137 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp130, $tmp136);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$String* $tmp138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp137, &$s139);
frost$core$String* $tmp140 = *(&local13);
frost$core$String* $tmp141 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp138, $tmp140);
frost$core$String* $tmp142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp141, &$s143);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Bench.frost:21:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp142);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$String* $tmp145 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp146 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
*(&local10) = ((frost$core$String*) NULL);
goto block14;
block16:;
frost$core$Int $tmp147 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Bench.frost:23:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp148 = $tmp104.value;
int64_t $tmp149 = $tmp147.value;
bool $tmp150 = $tmp148 == $tmp149;
frost$core$Bit $tmp151 = (frost$core$Bit) {$tmp150};
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block23; else goto block14;
block23:;
frost$core$String** $tmp153 = (frost$core$String**) ($tmp102->$data + 0);
frost$core$String* $tmp154 = *$tmp153;
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$String* $tmp155 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local14) = $tmp154;
frost$core$Int* $tmp156 = (frost$core$Int*) ($tmp102->$data + 8);
frost$core$Int $tmp157 = *$tmp156;
*(&local15) = $tmp157;
frost$core$Int* $tmp158 = (frost$core$Int*) ($tmp102->$data + 16);
frost$core$Int $tmp159 = *$tmp158;
*(&local16) = $tmp159;
frost$core$String** $tmp160 = (frost$core$String**) ($tmp102->$data + 24);
frost$core$String* $tmp161 = *$tmp160;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
frost$core$String* $tmp162 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local17) = $tmp161;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:24
frost$core$String* $tmp163 = *(&local14);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Bench.frost:24:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$core$String* $tmp164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp163, &$s165);
frost$core$Int $tmp166 = *(&local15);
frost$core$Int$wrapper* $tmp167;
$tmp167 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp167->value = $tmp166;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:24:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn169 $tmp168 = ($fn169) ((frost$core$Object*) $tmp167)->$class->vtable[0];
frost$core$String* $tmp170 = $tmp168(((frost$core$Object*) $tmp167));
frost$core$String* $tmp171 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp164, $tmp170);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$String* $tmp172 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp171, &$s173);
frost$core$Int $tmp174 = *(&local16);
frost$core$Int$wrapper* $tmp175;
$tmp175 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp175->value = $tmp174;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:24:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn177 $tmp176 = ($fn177) ((frost$core$Object*) $tmp175)->$class->vtable[0];
frost$core$String* $tmp178 = $tmp176(((frost$core$Object*) $tmp175));
frost$core$String* $tmp179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp172, $tmp178);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$String* $tmp180 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp179, &$s181);
frost$core$String* $tmp182 = *(&local17);
frost$core$String* $tmp183 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp180, $tmp182);
frost$core$String* $tmp184 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp183, &$s185);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Bench.frost:24:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp184);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s186);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$core$String* $tmp187 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
*(&local17) = ((frost$core$String*) NULL);
frost$core$String* $tmp188 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local14) = ((frost$core$String*) NULL);
goto block14;
block14:;
org$frostlang$frostc$Compiler$Message* $tmp189 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local9) = ((org$frostlang$frostc$Compiler$Message*) NULL);
goto block9;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:28
org$frostlang$frostc$Compiler* $tmp190 = *(&local5);
frost$core$Int* $tmp191 = &$tmp190->errorCount;
frost$core$Int $tmp192 = *$tmp191;
frost$core$Int $tmp193 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Bench.frost:28:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp194 = $tmp192.value;
int64_t $tmp195 = $tmp193.value;
bool $tmp196 = $tmp194 == $tmp195;
frost$core$Bit $tmp197 = (frost$core$Bit) {$tmp196};
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block31; else goto block32;
block32:;
frost$core$Int $tmp199 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s200, $tmp199);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:29
// begin inline call to function frost.core.String.get_asString():frost.core.String from Bench.frost:29:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String* $tmp201 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param1, &$s202);
frost$time$Timer* $tmp203 = *(&local0);
$fn205 $tmp204 = ($fn205) $tmp203->$class->vtable[4];
frost$core$Real64 $tmp206 = $tmp204($tmp203);
frost$core$Real64$wrapper* $tmp207;
$tmp207 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp207->value = $tmp206;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:29:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn209 $tmp208 = ($fn209) ((frost$core$Object*) $tmp207)->$class->vtable[0];
frost$core$String* $tmp210 = $tmp208(((frost$core$Object*) $tmp207));
frost$core$String* $tmp211 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp201, $tmp210);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
frost$core$String* $tmp212 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp211, &$s213);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Bench.frost:29:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp212);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s214);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler* $tmp215 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local5) = ((org$frostlang$frostc$Compiler*) NULL);
org$frostlang$frostc$LLVMCodeGenerator* $tmp216 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local4) = ((org$frostlang$frostc$LLVMCodeGenerator*) NULL);
frost$io$MemoryOutputStream* $tmp217 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local3) = ((frost$io$MemoryOutputStream*) NULL);
frost$threads$MessageQueue* $tmp218 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
*(&local2) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp219 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local1) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
frost$time$Timer* $tmp220 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
*(&local0) = ((frost$time$Timer*) NULL);
return;

}
void org$frostlang$frostc$Bench$bench$frost$core$String$frost$core$String(org$frostlang$frostc$Bench* param0, frost$core$String* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:33
frost$core$String* $tmp221 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param1, &$s222);
frost$core$Int $tmp223 = (frost$core$Int) {0u};
frost$core$Int $tmp224 = (frost$core$Int) {0u};
$fn226 $tmp225 = ($fn226) param0->$class->vtable[2];
$tmp225(param0, $tmp221, param2, $tmp223, $tmp224);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:34
frost$core$String* $tmp227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param1, &$s228);
frost$core$Int $tmp229 = (frost$core$Int) {3u};
frost$core$Int $tmp230 = (frost$core$Int) {3u};
$fn232 $tmp231 = ($fn232) param0->$class->vtable[2];
$tmp231(param0, $tmp227, param2, $tmp229, $tmp230);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
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
$fn234 $tmp233 = ($fn234) param0->$class->vtable[3];
$tmp233(param0, &$s235, &$s236);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:40
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp237 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp238 = org$frostlang$frostc$Config$frostSourceDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp237, $tmp238);
frost$io$File* $tmp239 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp237, &$s240);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$io$File* $tmp241 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local1) = $tmp239;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:41
frost$io$File* $tmp242 = *(&local1);
frost$core$Maybe* $tmp243 = frost$io$File$readFully$R$frost$core$Maybe$LTfrost$core$String$GT($tmp242);
frost$core$Int* $tmp244 = &$tmp243->$rawValue;
frost$core$Int $tmp245 = *$tmp244;
int64_t $tmp246 = $tmp245.value;
bool $tmp247 = $tmp246 == 0u;
if ($tmp247) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp248 = (frost$core$Error**) ($tmp243->$data + 0);
frost$core$Error* $tmp249 = *$tmp248;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
*(&local0) = $tmp249;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$io$File* $tmp250 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local1) = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:50
frost$core$Error* $tmp251 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from Bench.frost:50:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn253 $tmp252 = ($fn253) ((frost$core$Object*) $tmp251)->$class->vtable[0];
frost$core$String* $tmp254 = $tmp252(((frost$core$Object*) $tmp251));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp254);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:51
frost$core$System$crash();
frost$core$Int $tmp255 = (frost$core$Int) {51u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s256, $tmp255, &$s257);
abort(); // unreachable
block3:;
frost$core$Object** $tmp258 = (frost$core$Object**) ($tmp243->$data + 0);
frost$core$Object* $tmp259 = *$tmp258;
$fn261 $tmp260 = ($fn261) param0->$class->vtable[3];
$tmp260(param0, &$s262, ((frost$core$String*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:42
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp263 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp263, &$s264);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$MutableString* $tmp265 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local2) = $tmp263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:43
frost$core$Int $tmp266 = (frost$core$Int) {1u};
frost$core$Int $tmp267 = (frost$core$Int) {10000u};
frost$core$Bit $tmp268 = (frost$core$Bit) {true};
frost$core$Range$LTfrost$core$Int$GT $tmp269 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp266, $tmp267, $tmp268);
frost$core$Int $tmp270 = $tmp269.min;
*(&local3) = $tmp270;
frost$core$Int $tmp271 = $tmp269.max;
frost$core$Bit $tmp272 = $tmp269.inclusive;
bool $tmp273 = $tmp272.value;
frost$core$Int $tmp274 = (frost$core$Int) {1u};
if ($tmp273) goto block8; else goto block9;
block8:;
int64_t $tmp275 = $tmp270.value;
int64_t $tmp276 = $tmp271.value;
bool $tmp277 = $tmp275 <= $tmp276;
frost$core$Bit $tmp278 = (frost$core$Bit) {$tmp277};
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block5; else goto block6;
block9:;
int64_t $tmp280 = $tmp270.value;
int64_t $tmp281 = $tmp271.value;
bool $tmp282 = $tmp280 < $tmp281;
frost$core$Bit $tmp283 = (frost$core$Bit) {$tmp282};
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:44
frost$core$MutableString* $tmp285 = *(&local2);
frost$core$Int $tmp286 = *(&local3);
frost$core$Int$wrapper* $tmp287;
$tmp287 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp287->value = $tmp286;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:44:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn289 $tmp288 = ($fn289) ((frost$core$Object*) $tmp287)->$class->vtable[0];
frost$core$String* $tmp290 = $tmp288(((frost$core$Object*) $tmp287));
frost$core$String* $tmp291 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s292, $tmp290);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$core$String* $tmp293 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp291, &$s294);
frost$core$MutableString$append$frost$core$String($tmp285, $tmp293);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
frost$core$Int $tmp295 = *(&local3);
int64_t $tmp296 = $tmp271.value;
int64_t $tmp297 = $tmp295.value;
int64_t $tmp298 = $tmp296 - $tmp297;
frost$core$Int $tmp299 = (frost$core$Int) {$tmp298};
if ($tmp273) goto block12; else goto block13;
block12:;
int64_t $tmp300 = $tmp299.value;
int64_t $tmp301 = $tmp274.value;
bool $tmp302 = $tmp300 >= $tmp301;
frost$core$Bit $tmp303 = (frost$core$Bit) {$tmp302};
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block11; else goto block6;
block13:;
int64_t $tmp305 = $tmp299.value;
int64_t $tmp306 = $tmp274.value;
bool $tmp307 = $tmp305 > $tmp306;
frost$core$Bit $tmp308 = (frost$core$Bit) {$tmp307};
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block11; else goto block6;
block11:;
int64_t $tmp310 = $tmp295.value;
int64_t $tmp311 = $tmp274.value;
int64_t $tmp312 = $tmp310 + $tmp311;
frost$core$Int $tmp313 = (frost$core$Int) {$tmp312};
*(&local3) = $tmp313;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:46
frost$core$MutableString* $tmp314 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp314, &$s315);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:47
frost$core$MutableString* $tmp316 = *(&local2);
frost$core$String* $tmp317 = frost$core$MutableString$finish$R$frost$core$String($tmp316);
$fn319 $tmp318 = ($fn319) param0->$class->vtable[3];
$tmp318(param0, &$s320, $tmp317);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$MutableString* $tmp321 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
*(&local2) = ((frost$core$MutableString*) NULL);
frost$io$File* $tmp322 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local1) = ((frost$io$File*) NULL);
frost$core$Error* $tmp323 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
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

