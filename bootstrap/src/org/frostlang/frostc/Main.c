#include "org/frostlang/frostc/Main.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "frost/io/File.h"
#include "org/frostlang/frostc/Config.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/core/System/Process.h"
#include "frost/core/Error.h"
#include "frost/core/Int.h"
#include "frost/collections/ListView.h"
#include "frost/core/System.h"
#include "frost/core/Maybe.h"
#include "frost/io/Console.h"
#include "frost/io/InputStream.h"
#include "frost/core/String/Index.h"
#include "frost/core/Int64.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/io/OutputStream.h"
#include "org/frostlang/frostc/Main/Arguments.h"
#include "org/frostlang/frostc/Main/Format.h"
#include "org/frostlang/frostc/CodeGenerator.h"
#include "org/frostlang/frostc/Compiler/Settings.h"
#include "frost/threads/MessageQueue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/threads/ScopedLock.h"
#include "org/frostlang/frostc/Compiler/Message.h"
#include "frost/core/Equatable.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/LLVMCodeGenerator.h"
#include "org/frostlang/frostc/HCodeGenerator.h"
#include "org/frostlang/frostc/CCodeGenerator.h"
#include "org/frostlang/frostc/StubCodeGenerator.h"
#include "org/frostlang/frostc/HTMLProcessor.h"
#include "frost/threads/Lock.h"
#include "frost/core/Immutable.h"
#include "org/frostlang/frostc/Bench.h"


static frost$core$String $s1;
org$frostlang$frostc$Main$class_type org$frostlang$frostc$Main$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Main$cleanup, org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File, org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File, org$frostlang$frostc$Main$printUsage$frost$io$OutputStream, org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT} };

typedef frost$core$String* (*$fn44)(frost$core$Object*);
typedef frost$core$String* (*$fn56)(frost$io$InputStream*);
typedef frost$core$String* (*$fn61)(frost$io$InputStream*);
typedef frost$core$String* (*$fn78)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn125)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn129)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn134)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn167)(frost$core$Object*);
typedef frost$core$String* (*$fn265)(frost$core$Object*);
typedef frost$core$String* (*$fn277)(frost$io$InputStream*);
typedef frost$core$String* (*$fn282)(frost$io$InputStream*);
typedef frost$core$String* (*$fn299)(frost$core$Object*);
typedef frost$core$Error* (*$fn321)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn330)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn338)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn347)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn355)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn364)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn388)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn396)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Maybe* (*$fn419)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$String* (*$fn436)(frost$core$Object*);
typedef frost$core$String* (*$fn457)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn500)(frost$core$Object*);
typedef frost$core$String* (*$fn513)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn576)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn648)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn720)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn728)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Bit (*$fn771)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn793)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn820)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn896)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn974)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1080)(frost$core$Object*);
typedef frost$core$String* (*$fn1140)(frost$core$Object*);
typedef frost$core$Bit (*$fn1181)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1201)(frost$collections$CollectionView*);
typedef void (*$fn1229)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1252)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1256)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1261)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1269)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1273)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1278)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1289)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1293)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1298)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1308)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1312)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1317)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1328)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1332)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1337)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn1348)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1362)(frost$collections$CollectionView*);
typedef void (*$fn1382)(org$frostlang$frostc$CodeGenerator*);
typedef frost$core$String* (*$fn1431)(frost$core$Object*);
typedef frost$core$String* (*$fn1439)(frost$core$Object*);
typedef frost$core$String* (*$fn1479)(frost$core$Object*);
typedef frost$core$String* (*$fn1487)(frost$core$Object*);
typedef frost$core$Int (*$fn1697)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1708)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$ListView* (*$fn1719)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$Q$GT);
typedef frost$core$Int (*$fn1723)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1734)(frost$collections$ListView*, frost$core$Int);
typedef void (*$fn1741)(org$frostlang$frostc$Bench*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e", 25, -3316641479594746667, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 6043963258232676957, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, -3218342706179030910, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x63", 2, 563052241097350273, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x67", 2, 563056639143863117, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x66\x72\x6f\x73\x74", 7, -4044657180966489978, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x6d", 3, -2354502893290026621, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, -4341477490894522756, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x69\x62", 3, 1317978099017241196, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c", 2, 563044544515952796, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 6043963258232676957, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, -3218342706179030910, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x67", 2, 563056639143863117, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x66\x72\x6f\x73\x74\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -5336904199903828035, NULL };
static frost$core$String $s327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x66\x72\x6f\x73\x74\x27\x2e", 38, 2414752363581770017, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, -3725874908572553427, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, -8537804258594104524, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s401 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, -1426593306435499698, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, 2993450520568953317, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -2854313959629863208, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -293442963066226919, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s468 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s490 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s509 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4f", 2, 563012658678734677, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, -36708640889814861, NULL };
static frost$core$String $s526 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s539 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s550 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s558 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, -8241422096120224677, NULL };
static frost$core$String $s559 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s562 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s563 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s568 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s569 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x53", 2, 562999464539196145, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, -36708640889814861, NULL };
static frost$core$String $s589 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s613 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s614 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s621 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, -8229934398630946849, NULL };
static frost$core$String $s622 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s625 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s631 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s632 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s635 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66", 2, 563055539632234906, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -8357866846417911189, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s650 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -8762049995398847258, NULL };
static frost$core$String $s654 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x65", 3, -4390446579619712681, NULL };
static frost$core$String $s661 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f", 1, -5808550276084140354, NULL };
static frost$core$String $s668 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6c", 2, 625221927078985221, NULL };
static frost$core$String $s675 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68", 1, -5808546977549255721, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63", 1, -5808554674130653198, NULL };
static frost$core$String $s689 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, -8607590772689110736, NULL };
static frost$core$String $s696 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62", 4, -5818263582595368203, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, -8940199916074753387, NULL };
static frost$core$String $s706 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s707 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s710 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s711 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x69", 2, 563041245981068163, NULL };
static frost$core$String $s722 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 8483394141060772687, NULL };
static frost$core$String $s724 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, -3260734117535617165, NULL };
static frost$core$String $s730 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 1755487887012249427, NULL };
static frost$core$String $s734 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, -6268259042323653607, NULL };
static frost$core$String $s744 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -540522989212751288, NULL };
static frost$core$String $s746 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s747 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s750 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s751 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s760 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s761 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s778 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62\x73", 5, -7219040758408810062, NULL };
static frost$core$String $s786 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 2088835727452422272, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, 1894309652117697527, NULL };
static frost$core$String $s802 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s805 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s832 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 6252797618683371763, NULL };
static frost$core$String $s841 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s843 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 565862592818489914, NULL };
static frost$core$String $s852 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 565862592818489914, NULL };
static frost$core$String $s859 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s861 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s868 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s870 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s877 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, -5255104731122465439, NULL };
static frost$core$String $s879 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, -5255104731122465439, NULL };
static frost$core$String $s880 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, 6378635575011181341, NULL };
static frost$core$String $s881 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s884 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s885 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s904 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s905 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s913 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s927 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s928 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s934 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s935 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s940 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s963 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s964 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s977 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -5478415099818808347, NULL };
static frost$core$String $s978 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s981 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s982 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s983 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, -4651943656929293709, NULL };
static frost$core$String $s984 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s987 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s988 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s996 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s997 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 6252797618683371763, NULL };
static frost$core$String $s1023 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1024 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s1026 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s1040 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s1041 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s1047 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s1048 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s1053 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1067 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s1084 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1085 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s1101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s1115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s1129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s1144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s1170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s1187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s1226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s1243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 3928554745973598786, NULL };
static frost$core$String $s1244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s1378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s1379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 107, -867402159131882985, NULL };
static frost$core$String $s1427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, -5861202104196742523, NULL };
static frost$core$String $s1447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1448 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x77\x61\x72\x6e\x69\x6e\x67\x3a\x20", 11, 2890546785777135939, NULL };
static frost$core$String $s1495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1496 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x77\x61\x72\x6e\x69\x6e\x67", 9, -3177307723557508888, NULL };
static frost$core$String $s1512 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x61\x72\x6e\x69\x6e\x67\x73", 9, 8539650515262073630, NULL };
static frost$core$String $s1524 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1536 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 6252797618683371763, NULL };
static frost$core$String $s1549 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1550 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s1552 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s1566 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s1567 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s1573 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s1574 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s1579 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s1601 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1602 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s1615 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1616 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s1618 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s1632 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s1633 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s1639 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s1640 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s1645 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1659 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s1667 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1668 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s1684 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 3639570550927944898, NULL };
static frost$core$String $s1685 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1689 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, -1438914547765079724, NULL };
static frost$core$String $s1690 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1693 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1694 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s1711 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x65\x70\x65\x61\x74", 8, 3780951491120021928, NULL };
static frost$core$String $s1737 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x62\x65\x6e\x63\x68", 7, -7026121568011644677, NULL };

void org$frostlang$frostc$Main$init(org$frostlang$frostc$Main* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:22
frost$core$Bit $tmp2 = (frost$core$Bit) {false};
frost$core$Bit* $tmp3 = &param0->debug;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:25
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp4 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp5 = org$frostlang$frostc$Config$frostSourceDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp4, $tmp5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$io$File** $tmp6 = &param0->frostHome;
frost$io$File* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$io$File** $tmp8 = &param0->frostHome;
*$tmp8 = $tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
return;

}
frost$io$File* org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(org$frostlang$frostc$Main* param0, frost$io$File* param1, frost$io$File* param2, frost$core$Bit param3) {

frost$collections$Array* local0 = NULL;
frost$core$System$Process* local1 = NULL;
frost$core$Error* local2 = NULL;
frost$core$Int local3;
frost$core$Error* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:61
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp9 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp9);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$collections$Array* $tmp10 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
*(&local0) = $tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:62
frost$collections$Array* $tmp11 = *(&local0);
frost$core$String** $tmp12 = &param1->path;
frost$core$String* $tmp13 = *$tmp12;
frost$collections$Array$add$frost$collections$Array$T($tmp11, ((frost$core$Object*) $tmp13));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:63
frost$collections$Array* $tmp14 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp14, ((frost$core$Object*) &$s15));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:64
frost$collections$Array* $tmp16 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp16, ((frost$core$Object*) &$s17));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:65
frost$collections$Array* $tmp18 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp18, ((frost$core$Object*) &$s19));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:66
frost$core$Bit* $tmp20 = &param0->debug;
frost$core$Bit $tmp21 = *$tmp20;
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:67
frost$collections$Array* $tmp23 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp23, ((frost$core$Object*) &$s24));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:69
frost$collections$Array* $tmp25 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp25, ((frost$core$Object*) &$s26));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:70
frost$collections$Array* $tmp27 = *(&local0);
frost$core$String** $tmp28 = &param2->path;
frost$core$String* $tmp29 = *$tmp28;
frost$collections$Array$add$frost$collections$Array$T($tmp27, ((frost$core$Object*) $tmp29));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:71
*(&local1) = ((frost$core$System$Process*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:72
*(&local2) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:73
frost$io$File** $tmp30 = &param0->clang;
frost$io$File* $tmp31 = *$tmp30;
frost$core$String** $tmp32 = &$tmp31->path;
frost$core$String* $tmp33 = *$tmp32;
frost$collections$Array* $tmp34 = *(&local0);
frost$core$Maybe* $tmp35 = frost$core$System$exec$frost$core$String$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$Maybe$LTfrost$core$System$Process$GT($tmp33, ((frost$collections$ListView*) $tmp34));
frost$core$Int* $tmp36 = &$tmp35->$rawValue;
frost$core$Int $tmp37 = *$tmp36;
int64_t $tmp38 = $tmp37.value;
bool $tmp39 = $tmp38 == 0u;
if ($tmp39) goto block5; else goto block6;
block6:;
frost$core$Error** $tmp40 = (frost$core$Error**) ($tmp35->$data + 0);
frost$core$Error* $tmp41 = *$tmp40;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
*(&local2) = $tmp41;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:78
frost$core$Error* $tmp42 = *(&local2);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:78:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn44 $tmp43 = ($fn44) ((frost$core$Object*) $tmp42)->$class->vtable[0];
frost$core$String* $tmp45 = $tmp43(((frost$core$Object*) $tmp42));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp45);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:79
frost$core$Int $tmp46 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp46);
frost$core$Int $tmp47 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s48, $tmp47, &$s49);
abort(); // unreachable
block5:;
frost$core$Object** $tmp50 = (frost$core$Object**) ($tmp35->$data + 0);
frost$core$Object* $tmp51 = *$tmp50;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$System$Process*) $tmp51)));
frost$core$System$Process* $tmp52 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
*(&local1) = ((frost$core$System$Process*) $tmp51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:74
frost$core$System$Process* $tmp53 = *(&local1);
frost$io$InputStream* $tmp54 = frost$core$System$Process$standardOutput$R$frost$io$InputStream($tmp53);
$fn56 $tmp55 = ($fn56) $tmp54->$class->vtable[14];
frost$core$String* $tmp57 = $tmp55($tmp54);
frost$io$Console$printError$frost$core$String($tmp57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:75
frost$core$System$Process* $tmp58 = *(&local1);
frost$io$InputStream* $tmp59 = frost$core$System$Process$standardError$R$frost$io$InputStream($tmp58);
$fn61 $tmp60 = ($fn61) $tmp59->$class->vtable[14];
frost$core$String* $tmp62 = $tmp60($tmp59);
frost$io$Console$printError$frost$core$String($tmp62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Error* $tmp63 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local2) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:81
frost$core$System$Process* $tmp64 = *(&local1);
frost$core$Int $tmp65;
frost$core$System$Process$waitFor$R$frost$core$Int(&$tmp65, $tmp64);
*(&local3) = $tmp65;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:82
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:82:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp66 = param3.value;
bool $tmp67 = !$tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:83
*(&local4) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:84
frost$core$Error* $tmp70 = frost$io$File$delete$R$frost$core$Error$Q(param1);
if ($tmp70 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70 != NULL};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block16; else goto block17;
block17:;
frost$core$Int $tmp73 = (frost$core$Int) {84u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s74, $tmp73, &$s75);
abort(); // unreachable
block16:;
*(&local4) = $tmp70;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:87
frost$core$Error* $tmp76 = *(&local4);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:87:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn78 $tmp77 = ($fn78) ((frost$core$Object*) $tmp76)->$class->vtable[0];
frost$core$String* $tmp79 = $tmp77(((frost$core$Object*) $tmp76));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp79);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:88
frost$core$Int $tmp80 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp80);
frost$core$Int $tmp81 = (frost$core$Int) {88u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s82, $tmp81, &$s83);
abort(); // unreachable
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Error* $tmp84 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local4) = ((frost$core$Error*) NULL);
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:91
frost$core$Int $tmp85 = *(&local3);
frost$core$Int $tmp86 = (frost$core$Int) {0u};
int64_t $tmp87 = $tmp85.value;
int64_t $tmp88 = $tmp86.value;
bool $tmp89 = $tmp87 != $tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:92
frost$core$Int $tmp92 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp92);
frost$core$Int $tmp93 = (frost$core$Int) {92u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s94, $tmp93, &$s95);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:94
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp96 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local1) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp97 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
*(&local0) = ((frost$collections$Array*) NULL);
return param2;

}
frost$io$File* org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(org$frostlang$frostc$Main* param0, frost$io$File* param1, frost$io$File* param2, frost$core$Bit param3) {

frost$collections$Array* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$String* local2 = NULL;
frost$io$File* local3 = NULL;
frost$io$File* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$String* local6 = NULL;
frost$core$String* local7 = NULL;
frost$core$String$Index$nullable local8;
frost$core$String* local9 = NULL;
frost$core$String$Index$nullable local10;
frost$core$String* local11 = NULL;
frost$core$System$Process* local12 = NULL;
frost$core$Error* local13 = NULL;
frost$core$Int local14;
frost$core$Error* local15 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:98
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp98 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp98);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$collections$Array* $tmp99 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
*(&local0) = $tmp98;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:99
frost$collections$Array* $tmp100 = *(&local0);
frost$core$String** $tmp101 = &param1->path;
frost$core$String* $tmp102 = *$tmp101;
frost$collections$Array$add$frost$collections$Array$T($tmp100, ((frost$core$Object*) $tmp102));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:100
frost$collections$Array* $tmp103 = *(&local0);
frost$core$String* $tmp104 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$core$String* $tmp105 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s106, $tmp104);
frost$core$String* $tmp107 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp105, &$s108);
frost$collections$Array$add$frost$collections$Array$T($tmp103, ((frost$core$Object*) $tmp107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:101
frost$collections$Array* $tmp109 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp109, ((frost$core$Object*) &$s110));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:102
frost$collections$Array* $tmp111 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp111, ((frost$core$Object*) &$s112));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:103
frost$collections$Array* $tmp113 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp113, ((frost$core$Object*) &$s114));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:104
frost$core$String* $tmp115 = org$frostlang$frostc$Config$icuLibraries$R$frost$core$String();
// begin inline call to function frost.core.String.split(delimiter:frost.core.String):frost.collections.Array<frost.core.String> from Main.frost:104:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1378
frost$core$Int64 $tmp116 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp117 = $tmp116.value;
frost$core$Int $tmp118 = (frost$core$Int) {((int64_t) $tmp117)};
frost$collections$Array* $tmp119 = frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT($tmp115, &$s120, $tmp118);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$collections$Array* $tmp121 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local1) = $tmp119;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:105
frost$collections$Array* $tmp122 = *(&local1);
ITable* $tmp123 = ((frost$collections$Iterable*) $tmp122)->$class->itable;
while ($tmp123->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp123 = $tmp123->next;
}
$fn125 $tmp124 = $tmp123->methods[0];
frost$collections$Iterator* $tmp126 = $tmp124(((frost$collections$Iterable*) $tmp122));
goto block3;
block3:;
ITable* $tmp127 = $tmp126->$class->itable;
while ($tmp127->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[0];
frost$core$Bit $tmp130 = $tmp128($tmp126);
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block5; else goto block4;
block4:;
*(&local2) = ((frost$core$String*) NULL);
ITable* $tmp132 = $tmp126->$class->itable;
while ($tmp132->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp132 = $tmp132->next;
}
$fn134 $tmp133 = $tmp132->methods[1];
frost$core$Object* $tmp135 = $tmp133($tmp126);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp135)));
frost$core$String* $tmp136 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local2) = ((frost$core$String*) $tmp135);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:106
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp137 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp138 = *(&local2);
frost$io$File$init$frost$core$String($tmp137, $tmp138);
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$io$File* $tmp139 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
*(&local3) = $tmp137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:107
frost$collections$Array* $tmp140 = *(&local0);
frost$io$File* $tmp141 = *(&local3);
// begin inline call to function frost.io.File.get_parent():frost.io.File? from Main.frost:107:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp142 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp141, &$s143);
frost$core$String** $tmp144 = &$tmp142->path;
frost$core$String* $tmp145 = *$tmp144;
frost$core$String* $tmp146 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp145);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$String* $tmp147 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
*(&local5) = $tmp146;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp148 = *(&local5);
frost$core$Bit $tmp149 = (frost$core$Bit) {$tmp148 == NULL};
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp151 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
*(&local5) = ((frost$core$String*) NULL);
*(&local4) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp152 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp153 = *(&local5);
frost$core$Bit $tmp154 = (frost$core$Bit) {$tmp153 != NULL};
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block9; else goto block10;
block10:;
frost$core$Int $tmp156 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s157, $tmp156, &$s158);
abort(); // unreachable
block9:;
frost$io$File$init$frost$core$String($tmp152, $tmp153);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$String* $tmp159 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local5) = ((frost$core$String*) NULL);
*(&local4) = $tmp152;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
goto block6;
block6:;
frost$io$File* $tmp160 = *(&local4);
frost$core$Bit $tmp161 = (frost$core$Bit) {$tmp160 != NULL};
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block11; else goto block12;
block12:;
frost$core$Int $tmp163 = (frost$core$Int) {107u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s164, $tmp163, &$s165);
abort(); // unreachable
block11:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:107:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn167 $tmp166 = ($fn167) ((frost$core$Object*) $tmp160)->$class->vtable[0];
frost$core$String* $tmp168 = $tmp166(((frost$core$Object*) $tmp160));
frost$core$String* $tmp169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s170, $tmp168);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
frost$collections$Array$add$frost$collections$Array$T($tmp140, ((frost$core$Object*) $tmp169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:108
frost$io$File* $tmp171 = *(&local3);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from Main.frost:108:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
// begin inline call to function frost.io.File.get_name():frost.core.String from File.frost:158:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
frost$core$String** $tmp172 = &$tmp171->path;
frost$core$String* $tmp173 = *$tmp172;
frost$core$String$Index$nullable $tmp174 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp173, &$s175);
*(&local8) = $tmp174;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp176 = *(&local8);
frost$core$Bit $tmp177 = (frost$core$Bit) {$tmp176.nonnull};
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:150
frost$core$String** $tmp179 = &$tmp171->path;
frost$core$String* $tmp180 = *$tmp179;
frost$core$String** $tmp181 = &$tmp171->path;
frost$core$String* $tmp182 = *$tmp181;
frost$core$String$Index$nullable $tmp183 = *(&local8);
frost$core$Bit $tmp184 = (frost$core$Bit) {$tmp183.nonnull};
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block19; else goto block20;
block20:;
frost$core$Int $tmp186 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s187, $tmp186, &$s188);
abort(); // unreachable
block19:;
frost$core$String$Index $tmp189 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp182, ((frost$core$String$Index) $tmp183.value));
frost$core$Bit $tmp190 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp191 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp189, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp190);
frost$core$String* $tmp192 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp180, $tmp191);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local7) = $tmp192;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
goto block15;
block18:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:153
frost$core$String** $tmp193 = &$tmp171->path;
frost$core$String* $tmp194 = *$tmp193;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
*(&local7) = $tmp194;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
goto block15;
block17:;
goto block15;
block15:;
frost$core$String* $tmp195 = *(&local7);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$String* $tmp196 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local9) = $tmp195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp197 = *(&local9);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:159:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
frost$core$String$Index $tmp198 = frost$core$String$get_end$R$frost$core$String$Index($tmp197);
frost$core$String$Index$nullable $tmp199 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp197, &$s200, $tmp198);
*(&local10) = $tmp199;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp201 = *(&local10);
frost$core$Bit $tmp202 = (frost$core$Bit) {!$tmp201.nonnull};
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp204 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$String* $tmp205 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp206 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
*(&local7) = ((frost$core$String*) NULL);
*(&local6) = $tmp204;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
goto block14;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp207 = *(&local9);
frost$core$String$Index$nullable $tmp208 = *(&local10);
frost$core$Bit $tmp209 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp210 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp208, $tmp209);
frost$core$String* $tmp211 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp207, $tmp210);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$String* $tmp212 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp213 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
*(&local7) = ((frost$core$String*) NULL);
*(&local6) = $tmp211;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
goto block14;
block14:;
frost$core$String* $tmp214 = *(&local6);
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$String* $tmp215 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local11) = $tmp214;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:109
frost$core$String* $tmp216 = *(&local11);
frost$core$Bit $tmp217 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp216, &$s218);
bool $tmp219 = $tmp217.value;
if ($tmp219) goto block24; else goto block25;
block25:;
frost$core$Int $tmp220 = (frost$core$Int) {109u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s221, $tmp220);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:110
frost$core$String* $tmp222 = *(&local11);
frost$core$Int $tmp223 = (frost$core$Int) {3u};
frost$core$Bit $tmp224 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp225 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp223, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp224);
frost$core$String* $tmp226 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp222, $tmp225);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$String* $tmp227 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
*(&local11) = $tmp226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:111
frost$collections$Array* $tmp228 = *(&local0);
frost$core$String* $tmp229 = *(&local11);
frost$core$String* $tmp230 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s231, $tmp229);
frost$collections$Array$add$frost$collections$Array$T($tmp228, ((frost$core$Object*) $tmp230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$core$String* $tmp232 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local11) = ((frost$core$String*) NULL);
frost$core$String* $tmp233 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
*(&local6) = ((frost$core$String*) NULL);
frost$io$File* $tmp234 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp235 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp135);
frost$core$String* $tmp236 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local2) = ((frost$core$String*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:113
frost$collections$Array* $tmp237 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp237, ((frost$core$Object*) &$s238));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:114
frost$collections$Array* $tmp239 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp239, ((frost$core$Object*) &$s240));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:115
frost$core$Bit* $tmp241 = &param0->debug;
frost$core$Bit $tmp242 = *$tmp241;
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:116
frost$collections$Array* $tmp244 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp244, ((frost$core$Object*) &$s245));
goto block27;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:118
frost$collections$Array* $tmp246 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp246, ((frost$core$Object*) &$s247));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:119
frost$collections$Array* $tmp248 = *(&local0);
frost$core$String** $tmp249 = &param2->path;
frost$core$String* $tmp250 = *$tmp249;
frost$collections$Array$add$frost$collections$Array$T($tmp248, ((frost$core$Object*) $tmp250));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:120
*(&local12) = ((frost$core$System$Process*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:121
*(&local13) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:122
frost$io$File** $tmp251 = &param0->clang;
frost$io$File* $tmp252 = *$tmp251;
frost$core$String** $tmp253 = &$tmp252->path;
frost$core$String* $tmp254 = *$tmp253;
frost$collections$Array* $tmp255 = *(&local0);
frost$core$Maybe* $tmp256 = frost$core$System$exec$frost$core$String$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$Maybe$LTfrost$core$System$Process$GT($tmp254, ((frost$collections$ListView*) $tmp255));
frost$core$Int* $tmp257 = &$tmp256->$rawValue;
frost$core$Int $tmp258 = *$tmp257;
int64_t $tmp259 = $tmp258.value;
bool $tmp260 = $tmp259 == 0u;
if ($tmp260) goto block30; else goto block31;
block31:;
frost$core$Error** $tmp261 = (frost$core$Error**) ($tmp256->$data + 0);
frost$core$Error* $tmp262 = *$tmp261;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local13) = $tmp262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:127
frost$core$Error* $tmp263 = *(&local13);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:127:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn265 $tmp264 = ($fn265) ((frost$core$Object*) $tmp263)->$class->vtable[0];
frost$core$String* $tmp266 = $tmp264(((frost$core$Object*) $tmp263));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp266);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:128
frost$core$Int $tmp267 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp267);
frost$core$Int $tmp268 = (frost$core$Int) {128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s269, $tmp268, &$s270);
abort(); // unreachable
block30:;
frost$core$Object** $tmp271 = (frost$core$Object**) ($tmp256->$data + 0);
frost$core$Object* $tmp272 = *$tmp271;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$System$Process*) $tmp272)));
frost$core$System$Process* $tmp273 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
*(&local12) = ((frost$core$System$Process*) $tmp272);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:123
frost$core$System$Process* $tmp274 = *(&local12);
frost$io$InputStream* $tmp275 = frost$core$System$Process$standardOutput$R$frost$io$InputStream($tmp274);
$fn277 $tmp276 = ($fn277) $tmp275->$class->vtable[14];
frost$core$String* $tmp278 = $tmp276($tmp275);
frost$io$Console$printError$frost$core$String($tmp278);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:124
frost$core$System$Process* $tmp279 = *(&local12);
frost$io$InputStream* $tmp280 = frost$core$System$Process$standardError$R$frost$io$InputStream($tmp279);
$fn282 $tmp281 = ($fn282) $tmp280->$class->vtable[14];
frost$core$String* $tmp283 = $tmp281($tmp280);
frost$io$Console$printError$frost$core$String($tmp283);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$Error* $tmp284 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local13) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:130
frost$core$System$Process* $tmp285 = *(&local12);
frost$core$Int $tmp286;
frost$core$System$Process$waitFor$R$frost$core$Int(&$tmp286, $tmp285);
*(&local14) = $tmp286;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:131
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:131:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp287 = param3.value;
bool $tmp288 = !$tmp287;
frost$core$Bit $tmp289 = (frost$core$Bit) {$tmp288};
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:132
*(&local15) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:133
frost$core$Error* $tmp291 = frost$io$File$delete$R$frost$core$Error$Q(param1);
if ($tmp291 == NULL) goto block39; else goto block40;
block40:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Bit $tmp292 = (frost$core$Bit) {$tmp291 != NULL};
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block41; else goto block42;
block42:;
frost$core$Int $tmp294 = (frost$core$Int) {133u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s295, $tmp294, &$s296);
abort(); // unreachable
block41:;
*(&local15) = $tmp291;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:136
frost$core$Error* $tmp297 = *(&local15);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:136:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn299 $tmp298 = ($fn299) ((frost$core$Object*) $tmp297)->$class->vtable[0];
frost$core$String* $tmp300 = $tmp298(((frost$core$Object*) $tmp297));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp300);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:137
frost$core$Int $tmp301 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp301);
frost$core$Int $tmp302 = (frost$core$Int) {137u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s303, $tmp302, &$s304);
abort(); // unreachable
block39:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Error* $tmp305 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local15) = ((frost$core$Error*) NULL);
goto block35;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:140
frost$core$Int $tmp306 = *(&local14);
frost$core$Int $tmp307 = (frost$core$Int) {0u};
int64_t $tmp308 = $tmp306.value;
int64_t $tmp309 = $tmp307.value;
bool $tmp310 = $tmp308 != $tmp309;
frost$core$Bit $tmp311 = (frost$core$Bit) {$tmp310};
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:141
frost$core$Int $tmp313 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp313);
frost$core$Int $tmp314 = (frost$core$Int) {141u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s315, $tmp314, &$s316);
abort(); // unreachable
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:143
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp317 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
*(&local12) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp318 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local1) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp319 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local0) = ((frost$collections$Array*) NULL);
return param2;

}
void org$frostlang$frostc$Main$printUsage$frost$io$OutputStream(org$frostlang$frostc$Main* param0, frost$io$OutputStream* param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:147
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:148
$fn321 $tmp320 = ($fn321) param1->$class->vtable[19];
frost$core$Error* $tmp322 = $tmp320(param1, &$s323);
if ($tmp322 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$Bit $tmp324 = (frost$core$Bit) {$tmp322 != NULL};
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block5; else goto block6;
block6:;
frost$core$Int $tmp326 = (frost$core$Int) {148u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s327, $tmp326, &$s328);
abort(); // unreachable
block5:;
*(&local0) = $tmp322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:149
$fn330 $tmp329 = ($fn330) param1->$class->vtable[21];
frost$core$Error* $tmp331 = $tmp329(param1);
if ($tmp331 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Bit $tmp332 = (frost$core$Bit) {$tmp331 != NULL};
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block9; else goto block10;
block10:;
frost$core$Int $tmp334 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s335, $tmp334, &$s336);
abort(); // unreachable
block9:;
*(&local0) = $tmp331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:150
$fn338 $tmp337 = ($fn338) param1->$class->vtable[19];
frost$core$Error* $tmp339 = $tmp337(param1, &$s340);
if ($tmp339 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$Bit $tmp341 = (frost$core$Bit) {$tmp339 != NULL};
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block13; else goto block14;
block14:;
frost$core$Int $tmp343 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s344, $tmp343, &$s345);
abort(); // unreachable
block13:;
*(&local0) = $tmp339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:151
$fn347 $tmp346 = ($fn347) param1->$class->vtable[21];
frost$core$Error* $tmp348 = $tmp346(param1);
if ($tmp348 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
frost$core$Bit $tmp349 = (frost$core$Bit) {$tmp348 != NULL};
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block17; else goto block18;
block18:;
frost$core$Int $tmp351 = (frost$core$Int) {151u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s352, $tmp351, &$s353);
abort(); // unreachable
block17:;
*(&local0) = $tmp348;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:152
$fn355 $tmp354 = ($fn355) param1->$class->vtable[19];
frost$core$Error* $tmp356 = $tmp354(param1, &$s357);
if ($tmp356 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp356 != NULL};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block21; else goto block22;
block22:;
frost$core$Int $tmp360 = (frost$core$Int) {152u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s361, $tmp360, &$s362);
abort(); // unreachable
block21:;
*(&local0) = $tmp356;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
goto block1;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:153
$fn364 $tmp363 = ($fn364) param1->$class->vtable[19];
frost$core$Error* $tmp365 = $tmp363(param1, &$s366);
if ($tmp365 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
frost$core$Bit $tmp367 = (frost$core$Bit) {$tmp365 != NULL};
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block25; else goto block26;
block26:;
frost$core$Int $tmp369 = (frost$core$Int) {153u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s370, $tmp369, &$s371);
abort(); // unreachable
block25:;
*(&local0) = $tmp365;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
frost$core$Error* $tmp372 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:156
frost$core$Int $tmp373 = (frost$core$Int) {156u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s374, $tmp373);
abort(); // unreachable

}
void org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT(org$frostlang$frostc$Main* param0, frost$collections$ListView* param1) {

org$frostlang$frostc$Main$Arguments* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$io$File* local3 = NULL;
frost$core$Int local4;
frost$core$Int local5;
org$frostlang$frostc$Main$Format$nullable local6;
frost$core$String* local7 = NULL;
frost$core$Bit local8;
frost$core$String* local9 = NULL;
frost$core$Error* local10 = NULL;
frost$io$File* local11 = NULL;
frost$core$Error* local12 = NULL;
frost$io$File* local13 = NULL;
frost$core$String* local14 = NULL;
frost$core$String* local15 = NULL;
frost$core$Int$nullable local16;
frost$core$Int64$nullable local17;
frost$core$Int$nullable local18;
frost$core$String* local19 = NULL;
frost$core$Int$nullable local20;
frost$core$Int64$nullable local21;
frost$core$Int$nullable local22;
frost$core$String* local23 = NULL;
org$frostlang$frostc$Main$Format local24;
org$frostlang$frostc$Main$Format local25;
org$frostlang$frostc$Main$Format local26;
org$frostlang$frostc$Main$Format local27;
org$frostlang$frostc$Main$Format local28;
org$frostlang$frostc$Main$Format local29;
org$frostlang$frostc$Main$Format local30;
org$frostlang$frostc$Main$Format local31;
org$frostlang$frostc$Main$Format local32;
org$frostlang$frostc$Main$Format local33;
org$frostlang$frostc$Main$Format local34;
org$frostlang$frostc$Main$Format local35;
org$frostlang$frostc$Main$Format local36;
org$frostlang$frostc$Main$Format local37;
frost$io$File* local38 = NULL;
org$frostlang$frostc$Main$Format local39;
org$frostlang$frostc$Main$Format local40;
frost$io$File* local41 = NULL;
org$frostlang$frostc$Main$Format local42;
org$frostlang$frostc$Main$Format local43;
frost$core$String* local44 = NULL;
frost$io$File* local45 = NULL;
frost$core$String* local46 = NULL;
frost$core$String* local47 = NULL;
frost$core$String* local48 = NULL;
frost$core$String$Index$nullable local49;
org$frostlang$frostc$Main$Format local50;
org$frostlang$frostc$Main$Format local51;
frost$core$Int local52;
frost$core$Int local53;
org$frostlang$frostc$CodeGenerator* local54 = NULL;
frost$core$Error* local55 = NULL;
frost$io$File* local56 = NULL;
frost$core$String* local57 = NULL;
frost$core$String* local58 = NULL;
frost$core$String* local59 = NULL;
frost$core$String$Index$nullable local60;
frost$core$Error* local61 = NULL;
org$frostlang$frostc$Compiler$Settings* local62 = NULL;
frost$threads$MessageQueue* local63 = NULL;
org$frostlang$frostc$Compiler* local64 = NULL;
org$frostlang$frostc$Main$Format local65;
org$frostlang$frostc$Main$Format local66;
frost$io$File* local67 = NULL;
org$frostlang$frostc$ClassDecl* local68 = NULL;
org$frostlang$frostc$ClassDecl* local69 = NULL;
org$frostlang$frostc$ClassDecl* local70 = NULL;
frost$io$File* local71 = NULL;
org$frostlang$frostc$ClassDecl* local72 = NULL;
frost$threads$ScopedLock* local73 = NULL;
org$frostlang$frostc$Compiler$Message* local74 = NULL;
frost$core$String* local75 = NULL;
frost$core$Int local76;
frost$core$Int local77;
frost$core$String* local78 = NULL;
frost$core$String* local79 = NULL;
frost$core$Int local80;
frost$core$Int local81;
frost$core$String* local82 = NULL;
frost$io$File* local83 = NULL;
frost$core$String* local84 = NULL;
frost$core$String* local85 = NULL;
frost$core$String* local86 = NULL;
frost$core$String$Index$nullable local87;
frost$io$File* local88 = NULL;
frost$core$String* local89 = NULL;
frost$core$String* local90 = NULL;
frost$core$String* local91 = NULL;
frost$core$String$Index$nullable local92;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:161
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Main$Arguments));
org$frostlang$frostc$Main$Arguments* $tmp375 = (org$frostlang$frostc$Main$Arguments*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Main$Arguments$class);
org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT($tmp375, param1);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
org$frostlang$frostc$Main$Arguments* $tmp376 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
*(&local0) = $tmp375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:162
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp377 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp377);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$collections$Array* $tmp378 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
*(&local1) = $tmp377;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:163
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp379 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp379);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
frost$collections$Array* $tmp380 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local2) = $tmp379;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:164
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File* $tmp381 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local3) = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:165
frost$core$Int $tmp382 = (frost$core$Int) {3u};
*(&local4) = $tmp382;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:166
frost$core$Int $tmp383 = (frost$core$Int) {3u};
*(&local5) = $tmp383;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:167
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { .nonnull = false });
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:168
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp384 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
*(&local7) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:169
frost$core$Bit $tmp385 = (frost$core$Bit) {true};
*(&local8) = $tmp385;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:170
goto block1;
block1:;
org$frostlang$frostc$Main$Arguments* $tmp386 = *(&local0);
$fn388 $tmp387 = ($fn388) $tmp386->$class->vtable[2];
frost$core$Bit $tmp389 = $tmp387($tmp386);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:170:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp390 = $tmp389.value;
bool $tmp391 = !$tmp390;
frost$core$Bit $tmp392 = (frost$core$Bit) {$tmp391};
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:171
org$frostlang$frostc$Main$Arguments* $tmp394 = *(&local0);
$fn396 $tmp395 = ($fn396) $tmp394->$class->vtable[3];
frost$core$String* $tmp397 = $tmp395($tmp394);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$String* $tmp398 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local9) = $tmp397;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:172
frost$core$String* $tmp399 = *(&local9);
frost$core$Bit $tmp400 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp399, &$s401);
bool $tmp402 = $tmp400.value;
if ($tmp402) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:174
*(&local10) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:175
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp403 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp403, &$s404);
*(&local11) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$io$File* $tmp405 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local11) = $tmp403;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:176
frost$io$InputStream* $tmp406 = frost$io$Console$inputStream$R$frost$io$InputStream();
frost$io$File* $tmp407 = *(&local11);
frost$core$Maybe* $tmp408 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp407);
frost$core$Int* $tmp409 = &$tmp408->$rawValue;
frost$core$Int $tmp410 = *$tmp409;
int64_t $tmp411 = $tmp410.value;
bool $tmp412 = $tmp411 == 0u;
if ($tmp412) goto block10; else goto block11;
block11:;
frost$core$Error** $tmp413 = (frost$core$Error**) ($tmp408->$data + 0);
frost$core$Error* $tmp414 = *$tmp413;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local10) = $tmp414;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
frost$io$File* $tmp415 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local11) = ((frost$io$File*) NULL);
goto block8;
block10:;
frost$core$Object** $tmp416 = (frost$core$Object**) ($tmp408->$data + 0);
frost$core$Object* $tmp417 = *$tmp416;
$fn419 $tmp418 = ($fn419) $tmp406->$class->vtable[17];
frost$core$Maybe* $tmp420 = $tmp418($tmp406, ((frost$io$OutputStream*) $tmp417));
frost$core$Int* $tmp421 = &$tmp420->$rawValue;
frost$core$Int $tmp422 = *$tmp421;
int64_t $tmp423 = $tmp422.value;
bool $tmp424 = $tmp423 == 0u;
if ($tmp424) goto block12; else goto block13;
block13:;
frost$core$Error** $tmp425 = (frost$core$Error**) ($tmp420->$data + 0);
frost$core$Error* $tmp426 = *$tmp425;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
*(&local10) = $tmp426;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
frost$io$File* $tmp427 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local11) = ((frost$io$File*) NULL);
goto block8;
block12:;
frost$core$Object** $tmp428 = (frost$core$Object**) ($tmp420->$data + 0);
frost$core$Object* $tmp429 = *$tmp428;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:177
frost$collections$Array* $tmp430 = *(&local1);
frost$io$File* $tmp431 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp430, ((frost$core$Object*) $tmp431));
frost$io$File* $tmp432 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
*(&local11) = ((frost$io$File*) NULL);
frost$core$Error* $tmp433 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
*(&local10) = ((frost$core$Error*) NULL);
goto block5;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:180
frost$core$Error* $tmp434 = *(&local10);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:180:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn436 $tmp435 = ($fn436) ((frost$core$Object*) $tmp434)->$class->vtable[0];
frost$core$String* $tmp437 = $tmp435(((frost$core$Object*) $tmp434));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp437);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:181
frost$core$Int $tmp438 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp438);
frost$core$Int $tmp439 = (frost$core$Int) {181u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s440, $tmp439, &$s441);
abort(); // unreachable
block7:;
frost$core$Bit $tmp442 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp399, &$s443);
bool $tmp444 = $tmp442.value;
if ($tmp444) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:185
frost$io$File* $tmp445 = *(&local3);
frost$core$Bit $tmp446 = (frost$core$Bit) {$tmp445 != NULL};
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:186
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:186:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s448);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s449);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:187
frost$core$Int $tmp450 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp450);
frost$core$Int $tmp451 = (frost$core$Int) {187u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s452, $tmp451, &$s453);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:189
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp454 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp455 = *(&local0);
$fn457 $tmp456 = ($fn457) $tmp455->$class->vtable[4];
frost$core$String* $tmp458 = $tmp456($tmp455, &$s459);
frost$io$File$init$frost$core$String($tmp454, $tmp458);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$io$File* $tmp460 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
*(&local3) = $tmp454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:190
*(&local12) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:191
frost$io$File* $tmp461 = *(&local3);
frost$core$Bit $tmp462 = (frost$core$Bit) {$tmp461 != NULL};
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block24; else goto block25;
block25:;
frost$core$Int $tmp464 = (frost$core$Int) {191u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s465, $tmp464, &$s466);
abort(); // unreachable
block24:;
// begin inline call to function frost.io.File.get_parent():frost.io.File? from Main.frost:191:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp467 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp461, &$s468);
frost$core$String** $tmp469 = &$tmp467->path;
frost$core$String* $tmp470 = *$tmp469;
frost$core$String* $tmp471 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp470);
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$String* $tmp472 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
*(&local14) = $tmp471;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp473 = *(&local14);
frost$core$Bit $tmp474 = (frost$core$Bit) {$tmp473 == NULL};
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp476 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
*(&local14) = ((frost$core$String*) NULL);
*(&local13) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block26;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp477 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp478 = *(&local14);
frost$core$Bit $tmp479 = (frost$core$Bit) {$tmp478 != NULL};
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block29; else goto block30;
block30:;
frost$core$Int $tmp481 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s482, $tmp481, &$s483);
abort(); // unreachable
block29:;
frost$io$File$init$frost$core$String($tmp477, $tmp478);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
frost$core$String* $tmp484 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
*(&local14) = ((frost$core$String*) NULL);
*(&local13) = $tmp477;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
goto block26;
block26:;
frost$io$File* $tmp485 = *(&local13);
frost$core$Bit $tmp486 = (frost$core$Bit) {$tmp485 != NULL};
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block31; else goto block32;
block32:;
frost$core$Int $tmp488 = (frost$core$Int) {191u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s489, $tmp488, &$s490);
abort(); // unreachable
block31:;
frost$core$Error* $tmp491 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp485);
if ($tmp491 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$Bit $tmp492 = (frost$core$Bit) {$tmp491 != NULL};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block35; else goto block36;
block36:;
frost$core$Int $tmp494 = (frost$core$Int) {191u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s495, $tmp494, &$s496);
abort(); // unreachable
block35:;
*(&local12) = $tmp491;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
frost$io$File* $tmp497 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
*(&local13) = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:194
frost$core$Error* $tmp498 = *(&local12);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:194:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn500 $tmp499 = ($fn500) ((frost$core$Object*) $tmp498)->$class->vtable[0];
frost$core$String* $tmp501 = $tmp499(((frost$core$Object*) $tmp498));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp501);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:195
frost$core$Int $tmp502 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp502);
frost$core$Int $tmp503 = (frost$core$Int) {195u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s504, $tmp503, &$s505);
abort(); // unreachable
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
frost$io$File* $tmp506 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
*(&local13) = ((frost$io$File*) NULL);
frost$core$Error* $tmp507 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
*(&local12) = ((frost$core$Error*) NULL);
goto block5;
block17:;
frost$core$Bit $tmp508 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp399, &$s509);
bool $tmp510 = $tmp508.value;
if ($tmp510) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:199
org$frostlang$frostc$Main$Arguments* $tmp511 = *(&local0);
$fn513 $tmp512 = ($fn513) $tmp511->$class->vtable[4];
frost$core$String* $tmp514 = $tmp512($tmp511, &$s515);
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$core$String* $tmp516 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local15) = $tmp514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:200
frost$core$String* $tmp517 = *(&local15);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Main.frost:200:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp518 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp517);
*(&local17) = $tmp518;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
frost$core$Int64$nullable $tmp519 = *(&local17);
frost$core$Bit $tmp520 = (frost$core$Bit) {$tmp519.nonnull};
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
frost$core$Int64$nullable $tmp522 = *(&local17);
frost$core$Bit $tmp523 = (frost$core$Bit) {$tmp522.nonnull};
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block44; else goto block45;
block45:;
frost$core$Int $tmp525 = (frost$core$Int) {1456u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s526, $tmp525, &$s527);
abort(); // unreachable
block44:;
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp528 = ((frost$core$Int64) $tmp522.value).value;
frost$core$Int $tmp529 = (frost$core$Int) {((int64_t) $tmp528)};
*(&local16) = ((frost$core$Int$nullable) { $tmp529, true });
goto block41;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local16) = ((frost$core$Int$nullable) { .nonnull = false });
goto block41;
block41:;
frost$core$Int$nullable $tmp530 = *(&local16);
*(&local18) = $tmp530;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:201
frost$core$Int$nullable $tmp531 = *(&local18);
frost$core$Bit $tmp532 = (frost$core$Bit) {!$tmp531.nonnull};
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block47; else goto block50;
block50:;
frost$core$Int$nullable $tmp534 = *(&local18);
frost$core$Bit $tmp535 = (frost$core$Bit) {$tmp534.nonnull};
bool $tmp536 = $tmp535.value;
if ($tmp536) goto block51; else goto block52;
block52:;
frost$core$Int $tmp537 = (frost$core$Int) {201u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s538, $tmp537, &$s539);
abort(); // unreachable
block51:;
frost$core$Int $tmp540 = (frost$core$Int) {3u};
int64_t $tmp541 = ((frost$core$Int) $tmp534.value).value;
int64_t $tmp542 = $tmp540.value;
bool $tmp543 = $tmp541 > $tmp542;
frost$core$Bit $tmp544 = (frost$core$Bit) {$tmp543};
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block47; else goto block49;
block49:;
frost$core$Int$nullable $tmp546 = *(&local18);
frost$core$Bit $tmp547 = (frost$core$Bit) {$tmp546.nonnull};
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block53; else goto block54;
block54:;
frost$core$Int $tmp549 = (frost$core$Int) {201u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s550, $tmp549, &$s551);
abort(); // unreachable
block53:;
frost$core$Int $tmp552 = (frost$core$Int) {0u};
int64_t $tmp553 = ((frost$core$Int) $tmp546.value).value;
int64_t $tmp554 = $tmp552.value;
bool $tmp555 = $tmp553 < $tmp554;
frost$core$Bit $tmp556 = (frost$core$Bit) {$tmp555};
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:202
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:202:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s558);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s559);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:203
frost$core$Int $tmp560 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp560);
frost$core$Int $tmp561 = (frost$core$Int) {203u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s562, $tmp561, &$s563);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:205
frost$core$Int$nullable $tmp564 = *(&local18);
frost$core$Bit $tmp565 = (frost$core$Bit) {$tmp564.nonnull};
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block57; else goto block58;
block58:;
frost$core$Int $tmp567 = (frost$core$Int) {205u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s568, $tmp567, &$s569);
abort(); // unreachable
block57:;
*(&local4) = ((frost$core$Int) $tmp564.value);
frost$core$String* $tmp570 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
*(&local15) = ((frost$core$String*) NULL);
goto block5;
block40:;
frost$core$Bit $tmp571 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp399, &$s572);
bool $tmp573 = $tmp571.value;
if ($tmp573) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:208
org$frostlang$frostc$Main$Arguments* $tmp574 = *(&local0);
$fn576 $tmp575 = ($fn576) $tmp574->$class->vtable[4];
frost$core$String* $tmp577 = $tmp575($tmp574, &$s578);
*(&local19) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
frost$core$String* $tmp579 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local19) = $tmp577;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:209
frost$core$String* $tmp580 = *(&local19);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Main.frost:209:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp581 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp580);
*(&local21) = $tmp581;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
frost$core$Int64$nullable $tmp582 = *(&local21);
frost$core$Bit $tmp583 = (frost$core$Bit) {$tmp582.nonnull};
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
frost$core$Int64$nullable $tmp585 = *(&local21);
frost$core$Bit $tmp586 = (frost$core$Bit) {$tmp585.nonnull};
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block64; else goto block65;
block65:;
frost$core$Int $tmp588 = (frost$core$Int) {1456u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s589, $tmp588, &$s590);
abort(); // unreachable
block64:;
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp591 = ((frost$core$Int64) $tmp585.value).value;
frost$core$Int $tmp592 = (frost$core$Int) {((int64_t) $tmp591)};
*(&local20) = ((frost$core$Int$nullable) { $tmp592, true });
goto block61;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local20) = ((frost$core$Int$nullable) { .nonnull = false });
goto block61;
block61:;
frost$core$Int$nullable $tmp593 = *(&local20);
*(&local22) = $tmp593;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:210
frost$core$Int$nullable $tmp594 = *(&local22);
frost$core$Bit $tmp595 = (frost$core$Bit) {!$tmp594.nonnull};
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block67; else goto block70;
block70:;
frost$core$Int$nullable $tmp597 = *(&local22);
frost$core$Bit $tmp598 = (frost$core$Bit) {$tmp597.nonnull};
bool $tmp599 = $tmp598.value;
if ($tmp599) goto block71; else goto block72;
block72:;
frost$core$Int $tmp600 = (frost$core$Int) {210u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s601, $tmp600, &$s602);
abort(); // unreachable
block71:;
frost$core$Int $tmp603 = (frost$core$Int) {3u};
int64_t $tmp604 = ((frost$core$Int) $tmp597.value).value;
int64_t $tmp605 = $tmp603.value;
bool $tmp606 = $tmp604 > $tmp605;
frost$core$Bit $tmp607 = (frost$core$Bit) {$tmp606};
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block67; else goto block69;
block69:;
frost$core$Int$nullable $tmp609 = *(&local22);
frost$core$Bit $tmp610 = (frost$core$Bit) {$tmp609.nonnull};
bool $tmp611 = $tmp610.value;
if ($tmp611) goto block73; else goto block74;
block74:;
frost$core$Int $tmp612 = (frost$core$Int) {210u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s613, $tmp612, &$s614);
abort(); // unreachable
block73:;
frost$core$Int $tmp615 = (frost$core$Int) {0u};
int64_t $tmp616 = ((frost$core$Int) $tmp609.value).value;
int64_t $tmp617 = $tmp615.value;
bool $tmp618 = $tmp616 < $tmp617;
frost$core$Bit $tmp619 = (frost$core$Bit) {$tmp618};
bool $tmp620 = $tmp619.value;
if ($tmp620) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:211
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:211:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s621);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s622);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:212
frost$core$Int $tmp623 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp623);
frost$core$Int $tmp624 = (frost$core$Int) {212u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s625, $tmp624, &$s626);
abort(); // unreachable
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:214
frost$core$Int$nullable $tmp627 = *(&local22);
frost$core$Bit $tmp628 = (frost$core$Bit) {$tmp627.nonnull};
bool $tmp629 = $tmp628.value;
if ($tmp629) goto block77; else goto block78;
block78:;
frost$core$Int $tmp630 = (frost$core$Int) {214u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s631, $tmp630, &$s632);
abort(); // unreachable
block77:;
*(&local5) = ((frost$core$Int) $tmp627.value);
frost$core$String* $tmp633 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
*(&local19) = ((frost$core$String*) NULL);
goto block5;
block60:;
frost$core$Bit $tmp634 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp399, &$s635);
bool $tmp636 = $tmp634.value;
if ($tmp636) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:217
org$frostlang$frostc$Main$Format$nullable $tmp637 = *(&local6);
frost$core$Bit $tmp638 = (frost$core$Bit) {$tmp637.nonnull};
bool $tmp639 = $tmp638.value;
if ($tmp639) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:218
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:218:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s640);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s641);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:219
frost$core$Int $tmp642 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp642);
frost$core$Int $tmp643 = (frost$core$Int) {219u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s644, $tmp643, &$s645);
abort(); // unreachable
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:221
org$frostlang$frostc$Main$Arguments* $tmp646 = *(&local0);
$fn648 $tmp647 = ($fn648) $tmp646->$class->vtable[4];
frost$core$String* $tmp649 = $tmp647($tmp646, &$s650);
*(&local23) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$core$String* $tmp651 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
*(&local23) = $tmp649;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:222
frost$core$String* $tmp652 = *(&local23);
frost$core$Bit $tmp653 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp652, &$s654);
bool $tmp655 = $tmp653.value;
if ($tmp655) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:223
frost$core$Int $tmp656 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:223:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp657 = &(&local25)->$rawValue;
*$tmp657 = $tmp656;
org$frostlang$frostc$Main$Format $tmp658 = *(&local25);
*(&local24) = $tmp658;
org$frostlang$frostc$Main$Format $tmp659 = *(&local24);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp659, true });
goto block85;
block87:;
frost$core$Bit $tmp660 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp652, &$s661);
bool $tmp662 = $tmp660.value;
if ($tmp662) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:224
frost$core$Int $tmp663 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:224:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp664 = &(&local27)->$rawValue;
*$tmp664 = $tmp663;
org$frostlang$frostc$Main$Format $tmp665 = *(&local27);
*(&local26) = $tmp665;
org$frostlang$frostc$Main$Format $tmp666 = *(&local26);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp666, true });
goto block85;
block90:;
frost$core$Bit $tmp667 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp652, &$s668);
bool $tmp669 = $tmp667.value;
if ($tmp669) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:225
frost$core$Int $tmp670 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:225:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp671 = &(&local29)->$rawValue;
*$tmp671 = $tmp670;
org$frostlang$frostc$Main$Format $tmp672 = *(&local29);
*(&local28) = $tmp672;
org$frostlang$frostc$Main$Format $tmp673 = *(&local28);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp673, true });
goto block85;
block93:;
frost$core$Bit $tmp674 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp652, &$s675);
bool $tmp676 = $tmp674.value;
if ($tmp676) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:226
frost$core$Int $tmp677 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:226:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp678 = &(&local31)->$rawValue;
*$tmp678 = $tmp677;
org$frostlang$frostc$Main$Format $tmp679 = *(&local31);
*(&local30) = $tmp679;
org$frostlang$frostc$Main$Format $tmp680 = *(&local30);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp680, true });
goto block85;
block96:;
frost$core$Bit $tmp681 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp652, &$s682);
bool $tmp683 = $tmp681.value;
if ($tmp683) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:227
frost$core$Int $tmp684 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:227:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp685 = &(&local33)->$rawValue;
*$tmp685 = $tmp684;
org$frostlang$frostc$Main$Format $tmp686 = *(&local33);
*(&local32) = $tmp686;
org$frostlang$frostc$Main$Format $tmp687 = *(&local32);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp687, true });
goto block85;
block99:;
frost$core$Bit $tmp688 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp652, &$s689);
bool $tmp690 = $tmp688.value;
if ($tmp690) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:228
frost$core$Int $tmp691 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:228:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp692 = &(&local35)->$rawValue;
*$tmp692 = $tmp691;
org$frostlang$frostc$Main$Format $tmp693 = *(&local35);
*(&local34) = $tmp693;
org$frostlang$frostc$Main$Format $tmp694 = *(&local34);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp694, true });
goto block85;
block102:;
frost$core$Bit $tmp695 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp652, &$s696);
bool $tmp697 = $tmp695.value;
if ($tmp697) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:229
frost$core$Int $tmp698 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:229:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp699 = &(&local37)->$rawValue;
*$tmp699 = $tmp698;
org$frostlang$frostc$Main$Format $tmp700 = *(&local37);
*(&local36) = $tmp700;
org$frostlang$frostc$Main$Format $tmp701 = *(&local36);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp701, true });
goto block85;
block105:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:231
frost$core$String* $tmp702 = *(&local23);
frost$core$String* $tmp703 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s704, $tmp702);
frost$core$String* $tmp705 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp703, &$s706);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:231:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp705);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s707);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:232
frost$core$Int $tmp708 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp708);
frost$core$Int $tmp709 = (frost$core$Int) {232u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s710, $tmp709, &$s711);
abort(); // unreachable
block85:;
frost$core$String* $tmp712 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local23) = ((frost$core$String*) NULL);
goto block5;
block80:;
frost$core$Bit $tmp713 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp399, &$s714);
bool $tmp715 = $tmp713.value;
if ($tmp715) goto block109; else goto block110;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:237
frost$collections$Array* $tmp716 = *(&local2);
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp717 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp718 = *(&local0);
$fn720 $tmp719 = ($fn720) $tmp718->$class->vtable[4];
frost$core$String* $tmp721 = $tmp719($tmp718, &$s722);
frost$io$File$init$frost$core$String($tmp717, $tmp721);
frost$collections$Array$add$frost$collections$Array$T($tmp716, ((frost$core$Object*) $tmp717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
goto block5;
block110:;
frost$core$Bit $tmp723 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp399, &$s724);
bool $tmp725 = $tmp723.value;
if ($tmp725) goto block111; else goto block112;
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:240
org$frostlang$frostc$Main$Arguments* $tmp726 = *(&local0);
$fn728 $tmp727 = ($fn728) $tmp726->$class->vtable[4];
frost$core$String* $tmp729 = $tmp727($tmp726, &$s730);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
frost$core$String* $tmp731 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
*(&local7) = $tmp729;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
goto block5;
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:243
frost$core$String* $tmp732 = *(&local9);
frost$core$Bit $tmp733 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp732, &$s734);
bool $tmp735 = $tmp733.value;
if ($tmp735) goto block113; else goto block115;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:244
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp736 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp737 = *(&local9);
frost$io$File$init$frost$core$String($tmp736, $tmp737);
*(&local38) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
frost$io$File* $tmp738 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local38) = $tmp736;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:245
frost$collections$Array* $tmp739 = *(&local1);
frost$io$File* $tmp740 = *(&local38);
frost$collections$Array$add$frost$collections$Array$T($tmp739, ((frost$core$Object*) $tmp740));
frost$io$File* $tmp741 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local38) = ((frost$io$File*) NULL);
goto block5;
block115:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:248
frost$core$String* $tmp742 = *(&local9);
frost$core$String* $tmp743 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s744, $tmp742);
frost$core$String* $tmp745 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp743, &$s746);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:248:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp745);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s747);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:249
frost$core$Int $tmp748 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp748);
frost$core$Int $tmp749 = (frost$core$Int) {249u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s750, $tmp749, &$s751);
abort(); // unreachable
block5:;
frost$core$String* $tmp752 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local9) = ((frost$core$String*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:254
org$frostlang$frostc$Main$Format$nullable $tmp753 = *(&local6);
frost$core$Bit $tmp754 = (frost$core$Bit) {!$tmp753.nonnull};
bool $tmp755 = $tmp754.value;
if ($tmp755) goto block118; else goto block120;
block120:;
org$frostlang$frostc$Main$Format$nullable $tmp756 = *(&local6);
frost$core$Bit $tmp757 = (frost$core$Bit) {$tmp756.nonnull};
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block121; else goto block122;
block122:;
frost$core$Int $tmp759 = (frost$core$Int) {254u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s760, $tmp759, &$s761);
abort(); // unreachable
block121:;
frost$core$Equatable* $tmp762;
if ($tmp756.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp763;
    $tmp763 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp763->value = ((org$frostlang$frostc$Main$Format) $tmp756.value);
    $tmp762 = ((frost$core$Equatable*) $tmp763);
}
else {
    $tmp762 = NULL;
}
frost$core$Int $tmp764 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:254:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp765 = &(&local40)->$rawValue;
*$tmp765 = $tmp764;
org$frostlang$frostc$Main$Format $tmp766 = *(&local40);
*(&local39) = $tmp766;
org$frostlang$frostc$Main$Format $tmp767 = *(&local39);
org$frostlang$frostc$Main$Format$wrapper* $tmp768;
$tmp768 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp768->value = $tmp767;
ITable* $tmp769 = $tmp762->$class->itable;
while ($tmp769->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp769 = $tmp769->next;
}
$fn771 $tmp770 = $tmp769->methods[1];
frost$core$Bit $tmp772 = $tmp770($tmp762, ((frost$core$Equatable*) $tmp768));
bool $tmp773 = $tmp772.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp768)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
if ($tmp773) goto block118; else goto block119;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:255
frost$collections$Array* $tmp774 = *(&local2);
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp775 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp776 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp775, $tmp776);
frost$io$File* $tmp777 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp775, &$s778);
frost$collections$Array$add$frost$collections$Array$T($tmp774, ((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
goto block119;
block119:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:257
frost$collections$Array* $tmp779 = *(&local2);
frost$io$File** $tmp780 = &param0->frostHome;
frost$io$File* $tmp781 = *$tmp780;
frost$collections$Array$add$frost$collections$Array$T($tmp779, ((frost$core$Object*) $tmp781));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:258
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp782 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp783 = org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp782, $tmp783);
*(&local41) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$io$File* $tmp784 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
*(&local41) = $tmp782;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:259
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp785 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp785, &$s786);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$io$File** $tmp787 = &param0->clang;
frost$io$File* $tmp788 = *$tmp787;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
frost$io$File** $tmp789 = &param0->clang;
*$tmp789 = $tmp785;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:260
frost$collections$Array* $tmp790 = *(&local1);
ITable* $tmp791 = ((frost$collections$CollectionView*) $tmp790)->$class->itable;
while ($tmp791->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp791 = $tmp791->next;
}
$fn793 $tmp792 = $tmp791->methods[0];
frost$core$Int $tmp794 = $tmp792(((frost$collections$CollectionView*) $tmp790));
frost$core$Int $tmp795 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:260:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp796 = $tmp794.value;
int64_t $tmp797 = $tmp795.value;
bool $tmp798 = $tmp796 == $tmp797;
frost$core$Bit $tmp799 = (frost$core$Bit) {$tmp798};
bool $tmp800 = $tmp799.value;
if ($tmp800) goto block124; else goto block125;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:261
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:261:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s801);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s802);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:262
frost$core$Int $tmp803 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp803);
frost$core$Int $tmp804 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s805, $tmp804, &$s806);
abort(); // unreachable
block125:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:264
org$frostlang$frostc$Main$Format$nullable $tmp807 = *(&local6);
frost$core$Bit $tmp808 = (frost$core$Bit) {!$tmp807.nonnull};
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block129; else goto block130;
block129:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:265
frost$core$Int $tmp810 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:265:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp811 = &(&local43)->$rawValue;
*$tmp811 = $tmp810;
org$frostlang$frostc$Main$Format $tmp812 = *(&local43);
*(&local42) = $tmp812;
org$frostlang$frostc$Main$Format $tmp813 = *(&local42);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp813, true });
goto block130;
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:267
frost$io$File* $tmp814 = *(&local3);
frost$core$Bit $tmp815 = (frost$core$Bit) {$tmp814 == NULL};
bool $tmp816 = $tmp815.value;
if ($tmp816) goto block132; else goto block133;
block132:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:268
frost$collections$Array* $tmp817 = *(&local1);
ITable* $tmp818 = ((frost$collections$CollectionView*) $tmp817)->$class->itable;
while ($tmp818->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp818 = $tmp818->next;
}
$fn820 $tmp819 = $tmp818->methods[0];
frost$core$Int $tmp821 = $tmp819(((frost$collections$CollectionView*) $tmp817));
frost$core$Int $tmp822 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:268:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp823 = $tmp821.value;
int64_t $tmp824 = $tmp822.value;
bool $tmp825 = $tmp823 == $tmp824;
frost$core$Bit $tmp826 = (frost$core$Bit) {$tmp825};
bool $tmp827 = $tmp826.value;
if ($tmp827) goto block134; else goto block136;
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:269
*(&local44) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:270
org$frostlang$frostc$Main$Format$nullable $tmp828 = *(&local6);
frost$core$Bit $tmp829 = (frost$core$Bit) {$tmp828.nonnull};
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block138; else goto block139;
block139:;
frost$core$Int $tmp831 = (frost$core$Int) {270u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s832, $tmp831, &$s833);
abort(); // unreachable
block138:;
frost$core$Int $tmp834 = ((org$frostlang$frostc$Main$Format) $tmp828.value).$rawValue;
frost$core$Int $tmp835 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:271:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp836 = $tmp834.value;
int64_t $tmp837 = $tmp835.value;
bool $tmp838 = $tmp836 == $tmp837;
frost$core$Bit $tmp839 = (frost$core$Bit) {$tmp838};
bool $tmp840 = $tmp839.value;
if ($tmp840) goto block141; else goto block142;
block141:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:271
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s841));
frost$core$String* $tmp842 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
*(&local44) = &$s843;
goto block140;
block142:;
frost$core$Int $tmp844 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:272:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp845 = $tmp834.value;
int64_t $tmp846 = $tmp844.value;
bool $tmp847 = $tmp845 == $tmp846;
frost$core$Bit $tmp848 = (frost$core$Bit) {$tmp847};
bool $tmp849 = $tmp848.value;
if ($tmp849) goto block144; else goto block145;
block144:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:272
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s850));
frost$core$String* $tmp851 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
*(&local44) = &$s852;
goto block140;
block145:;
frost$core$Int $tmp853 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:273:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp854 = $tmp834.value;
int64_t $tmp855 = $tmp853.value;
bool $tmp856 = $tmp854 == $tmp855;
frost$core$Bit $tmp857 = (frost$core$Bit) {$tmp856};
bool $tmp858 = $tmp857.value;
if ($tmp858) goto block147; else goto block148;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:273
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s859));
frost$core$String* $tmp860 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
*(&local44) = &$s861;
goto block140;
block148:;
frost$core$Int $tmp862 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:274:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp863 = $tmp834.value;
int64_t $tmp864 = $tmp862.value;
bool $tmp865 = $tmp863 == $tmp864;
frost$core$Bit $tmp866 = (frost$core$Bit) {$tmp865};
bool $tmp867 = $tmp866.value;
if ($tmp867) goto block150; else goto block151;
block150:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:274
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s868));
frost$core$String* $tmp869 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
*(&local44) = &$s870;
goto block140;
block151:;
frost$core$Int $tmp871 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:275:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp872 = $tmp834.value;
int64_t $tmp873 = $tmp871.value;
bool $tmp874 = $tmp872 == $tmp873;
frost$core$Bit $tmp875 = (frost$core$Bit) {$tmp874};
bool $tmp876 = $tmp875.value;
if ($tmp876) goto block153; else goto block154;
block153:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:275
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s877));
frost$core$String* $tmp878 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local44) = &$s879;
goto block140;
block154:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:277
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:277:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s880);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s881);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:279
frost$core$Int $tmp882 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp882);
frost$core$Int $tmp883 = (frost$core$Int) {279u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s884, $tmp883, &$s885);
abort(); // unreachable
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:282
frost$collections$Array* $tmp886 = *(&local1);
frost$core$Int $tmp887 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Main.frost:282:35
frost$core$Int $tmp888 = (frost$core$Int) {0u};
int64_t $tmp889 = $tmp887.value;
int64_t $tmp890 = $tmp888.value;
bool $tmp891 = $tmp889 >= $tmp890;
frost$core$Bit $tmp892 = (frost$core$Bit) {$tmp891};
bool $tmp893 = $tmp892.value;
if ($tmp893) goto block161; else goto block160;
block161:;
ITable* $tmp894 = ((frost$collections$CollectionView*) $tmp886)->$class->itable;
while ($tmp894->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp894 = $tmp894->next;
}
$fn896 $tmp895 = $tmp894->methods[0];
frost$core$Int $tmp897 = $tmp895(((frost$collections$CollectionView*) $tmp886));
int64_t $tmp898 = $tmp887.value;
int64_t $tmp899 = $tmp897.value;
bool $tmp900 = $tmp898 < $tmp899;
frost$core$Bit $tmp901 = (frost$core$Bit) {$tmp900};
bool $tmp902 = $tmp901.value;
if ($tmp902) goto block159; else goto block160;
block160:;
frost$core$Int $tmp903 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s904, $tmp903, &$s905);
abort(); // unreachable
block159:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp906 = &$tmp886->data;
frost$core$Object** $tmp907 = *$tmp906;
frost$core$Int64 $tmp908 = frost$core$Int64$init$frost$core$Int($tmp887);
int64_t $tmp909 = $tmp908.value;
frost$core$Object* $tmp910 = $tmp907[$tmp909];
frost$core$Frost$ref$frost$core$Object$Q($tmp910);
frost$core$String* $tmp911 = *(&local44);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:282:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp912 = frost$io$File$resolve$frost$core$String$R$frost$io$File(((frost$io$File*) $tmp910), &$s913);
frost$core$String** $tmp914 = &$tmp912->path;
frost$core$String* $tmp915 = *$tmp914;
frost$core$String* $tmp916 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp915);
*(&local46) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
frost$core$String* $tmp917 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
*(&local46) = $tmp916;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp918 = *(&local46);
frost$core$Bit $tmp919 = (frost$core$Bit) {$tmp918 == NULL};
bool $tmp920 = $tmp919.value;
if ($tmp920) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp921 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
*(&local46) = ((frost$core$String*) NULL);
*(&local45) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block163;
block165:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp922 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp923 = *(&local46);
frost$core$Bit $tmp924 = (frost$core$Bit) {$tmp923 != NULL};
bool $tmp925 = $tmp924.value;
if ($tmp925) goto block166; else goto block167;
block167:;
frost$core$Int $tmp926 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s927, $tmp926, &$s928);
abort(); // unreachable
block166:;
frost$io$File$init$frost$core$String($tmp922, $tmp923);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
frost$core$String* $tmp929 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
*(&local46) = ((frost$core$String*) NULL);
*(&local45) = $tmp922;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
goto block163;
block163:;
frost$io$File* $tmp930 = *(&local45);
frost$core$Bit $tmp931 = (frost$core$Bit) {$tmp930 != NULL};
bool $tmp932 = $tmp931.value;
if ($tmp932) goto block168; else goto block169;
block169:;
frost$core$Int $tmp933 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s934, $tmp933, &$s935);
abort(); // unreachable
block168:;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp936 = frost$io$File$get_name$R$frost$core$String(((frost$io$File*) $tmp910));
*(&local48) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
frost$core$String* $tmp937 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
*(&local48) = $tmp936;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp938 = *(&local48);
frost$core$String$Index$nullable $tmp939 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp938, &$s940);
*(&local49) = $tmp939;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp941 = *(&local49);
frost$core$Bit $tmp942 = (frost$core$Bit) {!$tmp941.nonnull};
bool $tmp943 = $tmp942.value;
if ($tmp943) goto block171; else goto block172;
block171:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp944 = *(&local48);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
frost$core$String* $tmp945 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
*(&local48) = ((frost$core$String*) NULL);
*(&local47) = $tmp944;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
goto block170;
block172:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp946 = *(&local48);
frost$core$String$Index$nullable $tmp947 = *(&local49);
frost$core$Bit $tmp948 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp949 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp947, $tmp948);
frost$core$String* $tmp950 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp946, $tmp949);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
frost$core$String* $tmp951 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
*(&local48) = ((frost$core$String*) NULL);
*(&local47) = $tmp950;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
goto block170;
block170:;
frost$core$String* $tmp952 = *(&local47);
frost$core$String* $tmp953 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp952, $tmp911);
frost$io$File* $tmp954 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp930, $tmp953);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
frost$core$String* $tmp955 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
frost$io$File* $tmp956 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
*(&local45) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
frost$io$File* $tmp957 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
*(&local3) = $tmp954;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
frost$core$Frost$unref$frost$core$Object$Q($tmp910);
frost$core$String* $tmp958 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
*(&local44) = ((frost$core$String*) NULL);
goto block133;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:284
org$frostlang$frostc$Main$Format$nullable $tmp959 = *(&local6);
frost$core$Bit $tmp960 = (frost$core$Bit) {$tmp959.nonnull};
bool $tmp961 = $tmp960.value;
if ($tmp961) goto block176; else goto block177;
block177:;
frost$core$Int $tmp962 = (frost$core$Int) {284u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s963, $tmp962, &$s964);
abort(); // unreachable
block176:;
frost$core$Equatable* $tmp965;
if ($tmp959.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp966;
    $tmp966 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp966->value = ((org$frostlang$frostc$Main$Format) $tmp959.value);
    $tmp965 = ((frost$core$Equatable*) $tmp966);
}
else {
    $tmp965 = NULL;
}
frost$core$Int $tmp967 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:284:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp968 = &(&local51)->$rawValue;
*$tmp968 = $tmp967;
org$frostlang$frostc$Main$Format $tmp969 = *(&local51);
*(&local50) = $tmp969;
org$frostlang$frostc$Main$Format $tmp970 = *(&local50);
org$frostlang$frostc$Main$Format$wrapper* $tmp971;
$tmp971 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp971->value = $tmp970;
ITable* $tmp972 = $tmp965->$class->itable;
while ($tmp972->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp972 = $tmp972->next;
}
$fn974 $tmp973 = $tmp972->methods[0];
frost$core$Bit $tmp975 = $tmp973($tmp965, ((frost$core$Equatable*) $tmp971));
bool $tmp976 = $tmp975.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp971)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
if ($tmp976) goto block173; else goto block175;
block173:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:285
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:285:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s977);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s978);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:286
frost$core$Int $tmp979 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp979);
frost$core$Int $tmp980 = (frost$core$Int) {286u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s981, $tmp980, &$s982);
abort(); // unreachable
block175:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:289
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:289:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s983);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s984);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:291
frost$core$Int $tmp985 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp985);
frost$core$Int $tmp986 = (frost$core$Int) {291u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s987, $tmp986, &$s988);
abort(); // unreachable
block133:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:294
frost$core$Int $tmp989 = (frost$core$Int) {0u};
*(&local52) = $tmp989;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:295
frost$core$Int $tmp990 = (frost$core$Int) {0u};
*(&local53) = $tmp990;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:297
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) NULL)));
org$frostlang$frostc$CodeGenerator* $tmp991 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:298
org$frostlang$frostc$Main$Format$nullable $tmp992 = *(&local6);
frost$core$Bit $tmp993 = (frost$core$Bit) {$tmp992.nonnull};
bool $tmp994 = $tmp993.value;
if ($tmp994) goto block183; else goto block184;
block184:;
frost$core$Int $tmp995 = (frost$core$Int) {298u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s996, $tmp995, &$s997);
abort(); // unreachable
block183:;
frost$core$Int $tmp998 = ((org$frostlang$frostc$Main$Format) $tmp992.value).$rawValue;
frost$core$Int $tmp999 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:299:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1000 = $tmp998.value;
int64_t $tmp1001 = $tmp999.value;
bool $tmp1002 = $tmp1000 == $tmp1001;
frost$core$Bit $tmp1003 = (frost$core$Bit) {$tmp1002};
bool $tmp1004 = $tmp1003.value;
if ($tmp1004) goto block186; else goto block187;
block187:;
frost$core$Int $tmp1005 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:299:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1006 = $tmp998.value;
int64_t $tmp1007 = $tmp1005.value;
bool $tmp1008 = $tmp1006 == $tmp1007;
frost$core$Bit $tmp1009 = (frost$core$Bit) {$tmp1008};
bool $tmp1010 = $tmp1009.value;
if ($tmp1010) goto block186; else goto block189;
block189:;
frost$core$Int $tmp1011 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:299:60
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1012 = $tmp998.value;
int64_t $tmp1013 = $tmp1011.value;
bool $tmp1014 = $tmp1012 == $tmp1013;
frost$core$Bit $tmp1015 = (frost$core$Bit) {$tmp1014};
bool $tmp1016 = $tmp1015.value;
if ($tmp1016) goto block186; else goto block191;
block186:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:300
*(&local55) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:301
FROST_ASSERT(272 == sizeof(org$frostlang$frostc$LLVMCodeGenerator));
org$frostlang$frostc$LLVMCodeGenerator* $tmp1017 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(272, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
frost$core$String* $tmp1018 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
frost$io$File* $tmp1019 = *(&local3);
frost$core$Bit $tmp1020 = (frost$core$Bit) {$tmp1019 != NULL};
bool $tmp1021 = $tmp1020.value;
if ($tmp1021) goto block195; else goto block196;
block196:;
frost$core$Int $tmp1022 = (frost$core$Int) {302u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1023, $tmp1022, &$s1024);
abort(); // unreachable
block195:;
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:302:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp1025 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1019, &$s1026);
frost$core$String** $tmp1027 = &$tmp1025->path;
frost$core$String* $tmp1028 = *$tmp1027;
frost$core$String* $tmp1029 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp1028);
*(&local57) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
frost$core$String* $tmp1030 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
*(&local57) = $tmp1029;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp1031 = *(&local57);
frost$core$Bit $tmp1032 = (frost$core$Bit) {$tmp1031 == NULL};
bool $tmp1033 = $tmp1032.value;
if ($tmp1033) goto block199; else goto block200;
block199:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp1034 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
*(&local57) = ((frost$core$String*) NULL);
*(&local56) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block198;
block200:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp1035 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp1036 = *(&local57);
frost$core$Bit $tmp1037 = (frost$core$Bit) {$tmp1036 != NULL};
bool $tmp1038 = $tmp1037.value;
if ($tmp1038) goto block201; else goto block202;
block202:;
frost$core$Int $tmp1039 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1040, $tmp1039, &$s1041);
abort(); // unreachable
block201:;
frost$io$File$init$frost$core$String($tmp1035, $tmp1036);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
frost$core$String* $tmp1042 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
*(&local57) = ((frost$core$String*) NULL);
*(&local56) = $tmp1035;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
goto block198;
block198:;
frost$io$File* $tmp1043 = *(&local56);
frost$core$Bit $tmp1044 = (frost$core$Bit) {$tmp1043 != NULL};
bool $tmp1045 = $tmp1044.value;
if ($tmp1045) goto block203; else goto block204;
block204:;
frost$core$Int $tmp1046 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1047, $tmp1046, &$s1048);
abort(); // unreachable
block203:;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp1049 = frost$io$File$get_name$R$frost$core$String($tmp1019);
*(&local59) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
frost$core$String* $tmp1050 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
*(&local59) = $tmp1049;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp1051 = *(&local59);
frost$core$String$Index$nullable $tmp1052 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp1051, &$s1053);
*(&local60) = $tmp1052;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp1054 = *(&local60);
frost$core$Bit $tmp1055 = (frost$core$Bit) {!$tmp1054.nonnull};
bool $tmp1056 = $tmp1055.value;
if ($tmp1056) goto block206; else goto block207;
block206:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp1057 = *(&local59);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
frost$core$String* $tmp1058 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
*(&local59) = ((frost$core$String*) NULL);
*(&local58) = $tmp1057;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
goto block205;
block207:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp1059 = *(&local59);
frost$core$String$Index$nullable $tmp1060 = *(&local60);
frost$core$Bit $tmp1061 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1062 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1060, $tmp1061);
frost$core$String* $tmp1063 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1059, $tmp1062);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
frost$core$String* $tmp1064 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
*(&local59) = ((frost$core$String*) NULL);
*(&local58) = $tmp1063;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
goto block205;
block205:;
frost$core$String* $tmp1065 = *(&local58);
frost$core$String* $tmp1066 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1065, &$s1067);
frost$io$File* $tmp1068 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1043, $tmp1066);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
frost$core$String* $tmp1069 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
*(&local58) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
frost$io$File* $tmp1070 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
*(&local56) = ((frost$io$File*) NULL);
frost$core$Maybe* $tmp1071 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp1068);
frost$core$Int* $tmp1072 = &$tmp1071->$rawValue;
frost$core$Int $tmp1073 = *$tmp1072;
int64_t $tmp1074 = $tmp1073.value;
bool $tmp1075 = $tmp1074 == 0u;
if ($tmp1075) goto block208; else goto block209;
block209:;
frost$core$Error** $tmp1076 = (frost$core$Error**) ($tmp1071->$data + 0);
frost$core$Error* $tmp1077 = *$tmp1076;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
*(&local55) = $tmp1077;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:305
frost$core$Error* $tmp1078 = *(&local55);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:305:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn1080 $tmp1079 = ($fn1080) ((frost$core$Object*) $tmp1078)->$class->vtable[0];
frost$core$String* $tmp1081 = $tmp1079(((frost$core$Object*) $tmp1078));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp1081);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:306
frost$core$Int $tmp1082 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp1082);
frost$core$Int $tmp1083 = (frost$core$Int) {306u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1084, $tmp1083, &$s1085);
abort(); // unreachable
block208:;
frost$core$Object** $tmp1086 = (frost$core$Object**) ($tmp1071->$data + 0);
frost$core$Object* $tmp1087 = *$tmp1086;
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp1017, $tmp1018, ((frost$io$OutputStream*) $tmp1087));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp1017)));
org$frostlang$frostc$CodeGenerator* $tmp1088 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) $tmp1017);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
frost$core$Error* $tmp1089 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
*(&local55) = ((frost$core$Error*) NULL);
goto block185;
block191:;
frost$core$Int $tmp1090 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:309:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1091 = $tmp998.value;
int64_t $tmp1092 = $tmp1090.value;
bool $tmp1093 = $tmp1091 == $tmp1092;
frost$core$Bit $tmp1094 = (frost$core$Bit) {$tmp1093};
bool $tmp1095 = $tmp1094.value;
if ($tmp1095) goto block212; else goto block213;
block212:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:310
FROST_ASSERT(152 == sizeof(org$frostlang$frostc$HCodeGenerator));
org$frostlang$frostc$HCodeGenerator* $tmp1096 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
frost$io$File* $tmp1097 = *(&local3);
frost$core$Bit $tmp1098 = (frost$core$Bit) {$tmp1097 != NULL};
bool $tmp1099 = $tmp1098.value;
if ($tmp1099) goto block215; else goto block216;
block216:;
frost$core$Int $tmp1100 = (frost$core$Int) {310u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1101, $tmp1100, &$s1102);
abort(); // unreachable
block215:;
org$frostlang$frostc$HCodeGenerator$init$frost$io$File($tmp1096, $tmp1097);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp1096)));
org$frostlang$frostc$CodeGenerator* $tmp1103 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) $tmp1096);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
goto block185;
block213:;
frost$core$Int $tmp1104 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:312:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1105 = $tmp998.value;
int64_t $tmp1106 = $tmp1104.value;
bool $tmp1107 = $tmp1105 == $tmp1106;
frost$core$Bit $tmp1108 = (frost$core$Bit) {$tmp1107};
bool $tmp1109 = $tmp1108.value;
if ($tmp1109) goto block217; else goto block218;
block217:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:313
FROST_ASSERT(256 == sizeof(org$frostlang$frostc$CCodeGenerator));
org$frostlang$frostc$CCodeGenerator* $tmp1110 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(256, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
frost$io$File* $tmp1111 = *(&local3);
frost$core$Bit $tmp1112 = (frost$core$Bit) {$tmp1111 != NULL};
bool $tmp1113 = $tmp1112.value;
if ($tmp1113) goto block220; else goto block221;
block221:;
frost$core$Int $tmp1114 = (frost$core$Int) {313u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1115, $tmp1114, &$s1116);
abort(); // unreachable
block220:;
org$frostlang$frostc$CCodeGenerator$init$frost$io$File($tmp1110, $tmp1111);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp1110)));
org$frostlang$frostc$CodeGenerator* $tmp1117 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) $tmp1110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
goto block185;
block218:;
frost$core$Int $tmp1118 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:315:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1119 = $tmp998.value;
int64_t $tmp1120 = $tmp1118.value;
bool $tmp1121 = $tmp1119 == $tmp1120;
frost$core$Bit $tmp1122 = (frost$core$Bit) {$tmp1121};
bool $tmp1123 = $tmp1122.value;
if ($tmp1123) goto block222; else goto block185;
block222:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:316
*(&local61) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:317
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$StubCodeGenerator));
org$frostlang$frostc$StubCodeGenerator* $tmp1124 = (org$frostlang$frostc$StubCodeGenerator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$class);
frost$io$File* $tmp1125 = *(&local3);
frost$core$Bit $tmp1126 = (frost$core$Bit) {$tmp1125 != NULL};
bool $tmp1127 = $tmp1126.value;
if ($tmp1127) goto block226; else goto block227;
block227:;
frost$core$Int $tmp1128 = (frost$core$Int) {317u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1129, $tmp1128, &$s1130);
abort(); // unreachable
block226:;
frost$core$Maybe* $tmp1131 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp1125);
frost$core$Int* $tmp1132 = &$tmp1131->$rawValue;
frost$core$Int $tmp1133 = *$tmp1132;
int64_t $tmp1134 = $tmp1133.value;
bool $tmp1135 = $tmp1134 == 0u;
if ($tmp1135) goto block228; else goto block229;
block229:;
frost$core$Error** $tmp1136 = (frost$core$Error**) ($tmp1131->$data + 0);
frost$core$Error* $tmp1137 = *$tmp1136;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
*(&local61) = $tmp1137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:320
frost$core$Error* $tmp1138 = *(&local61);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:320:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn1140 $tmp1139 = ($fn1140) ((frost$core$Object*) $tmp1138)->$class->vtable[0];
frost$core$String* $tmp1141 = $tmp1139(((frost$core$Object*) $tmp1138));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp1141);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:321
frost$core$Int $tmp1142 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp1142);
frost$core$Int $tmp1143 = (frost$core$Int) {321u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1144, $tmp1143, &$s1145);
abort(); // unreachable
block228:;
frost$core$Object** $tmp1146 = (frost$core$Object**) ($tmp1131->$data + 0);
frost$core$Object* $tmp1147 = *$tmp1146;
org$frostlang$frostc$StubCodeGenerator$init$frost$io$OutputStream($tmp1124, ((frost$io$OutputStream*) $tmp1147));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp1124)));
org$frostlang$frostc$CodeGenerator* $tmp1148 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) $tmp1124);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
frost$core$Error* $tmp1149 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
*(&local61) = ((frost$core$Error*) NULL);
goto block185;
block185:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:325
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Compiler$Settings));
org$frostlang$frostc$Compiler$Settings* $tmp1150 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
frost$io$File** $tmp1151 = &param0->frostHome;
frost$io$File* $tmp1152 = *$tmp1151;
frost$collections$Array* $tmp1153 = *(&local2);
frost$core$Int $tmp1154 = *(&local4);
frost$core$Int $tmp1155 = *(&local5);
frost$core$Bit* $tmp1156 = &param0->debug;
frost$core$Bit $tmp1157 = *$tmp1156;
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1150, $tmp1152, ((frost$collections$ListView*) $tmp1153), $tmp1154, $tmp1155, $tmp1157);
*(&local62) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
org$frostlang$frostc$Compiler$Settings* $tmp1158 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
*(&local62) = $tmp1150;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:327
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp1159 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp1159);
*(&local63) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
frost$threads$MessageQueue* $tmp1160 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
*(&local63) = $tmp1159;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:328
FROST_ASSERT(728 == sizeof(org$frostlang$frostc$Compiler));
org$frostlang$frostc$Compiler* $tmp1161 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(728, (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
frost$threads$MessageQueue* $tmp1162 = *(&local63);
org$frostlang$frostc$CodeGenerator* $tmp1163 = *(&local54);
org$frostlang$frostc$Compiler$Settings* $tmp1164 = *(&local62);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT$org$frostlang$frostc$CodeGenerator$Q$org$frostlang$frostc$Compiler$Settings($tmp1161, $tmp1162, $tmp1163, $tmp1164);
*(&local64) = ((org$frostlang$frostc$Compiler*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
org$frostlang$frostc$Compiler* $tmp1165 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
*(&local64) = $tmp1161;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:329
org$frostlang$frostc$Main$Format$nullable $tmp1166 = *(&local6);
frost$core$Bit $tmp1167 = (frost$core$Bit) {$tmp1166.nonnull};
bool $tmp1168 = $tmp1167.value;
if ($tmp1168) goto block234; else goto block235;
block235:;
frost$core$Int $tmp1169 = (frost$core$Int) {329u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1170, $tmp1169, &$s1171);
abort(); // unreachable
block234:;
frost$core$Equatable* $tmp1172;
if ($tmp1166.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp1173;
    $tmp1173 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp1173->value = ((org$frostlang$frostc$Main$Format) $tmp1166.value);
    $tmp1172 = ((frost$core$Equatable*) $tmp1173);
}
else {
    $tmp1172 = NULL;
}
frost$core$Int $tmp1174 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:329:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp1175 = &(&local66)->$rawValue;
*$tmp1175 = $tmp1174;
org$frostlang$frostc$Main$Format $tmp1176 = *(&local66);
*(&local65) = $tmp1176;
org$frostlang$frostc$Main$Format $tmp1177 = *(&local65);
org$frostlang$frostc$Main$Format$wrapper* $tmp1178;
$tmp1178 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp1178->value = $tmp1177;
ITable* $tmp1179 = $tmp1172->$class->itable;
while ($tmp1179->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1179 = $tmp1179->next;
}
$fn1181 $tmp1180 = $tmp1179->methods[0];
frost$core$Bit $tmp1182 = $tmp1180($tmp1172, ((frost$core$Equatable*) $tmp1178));
bool $tmp1183 = $tmp1182.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1178)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
if ($tmp1183) goto block232; else goto block233;
block232:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:330
frost$core$String* $tmp1184 = *(&local7);
frost$core$Bit $tmp1185 = (frost$core$Bit) {$tmp1184 == NULL};
bool $tmp1186 = $tmp1185.value;
if ($tmp1186) goto block237; else goto block238;
block237:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:331
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1187));
frost$core$String* $tmp1188 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
*(&local7) = &$s1187;
goto block238;
block238:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:333
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$HTMLProcessor));
org$frostlang$frostc$HTMLProcessor* $tmp1189 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
org$frostlang$frostc$Compiler* $tmp1190 = *(&local64);
org$frostlang$frostc$HTMLProcessor$init$org$frostlang$frostc$Compiler($tmp1189, $tmp1190);
frost$collections$Array* $tmp1191 = *(&local1);
frost$core$Int $tmp1192 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Main.frost:333:56
frost$core$Int $tmp1193 = (frost$core$Int) {0u};
int64_t $tmp1194 = $tmp1192.value;
int64_t $tmp1195 = $tmp1193.value;
bool $tmp1196 = $tmp1194 >= $tmp1195;
frost$core$Bit $tmp1197 = (frost$core$Bit) {$tmp1196};
bool $tmp1198 = $tmp1197.value;
if ($tmp1198) goto block242; else goto block241;
block242:;
ITable* $tmp1199 = ((frost$collections$CollectionView*) $tmp1191)->$class->itable;
while ($tmp1199->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1199 = $tmp1199->next;
}
$fn1201 $tmp1200 = $tmp1199->methods[0];
frost$core$Int $tmp1202 = $tmp1200(((frost$collections$CollectionView*) $tmp1191));
int64_t $tmp1203 = $tmp1192.value;
int64_t $tmp1204 = $tmp1202.value;
bool $tmp1205 = $tmp1203 < $tmp1204;
frost$core$Bit $tmp1206 = (frost$core$Bit) {$tmp1205};
bool $tmp1207 = $tmp1206.value;
if ($tmp1207) goto block240; else goto block241;
block241:;
frost$core$Int $tmp1208 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1209, $tmp1208, &$s1210);
abort(); // unreachable
block240:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1211 = &$tmp1191->data;
frost$core$Object** $tmp1212 = *$tmp1211;
frost$core$Int64 $tmp1213 = frost$core$Int64$init$frost$core$Int($tmp1192);
int64_t $tmp1214 = $tmp1213.value;
frost$core$Object* $tmp1215 = $tmp1212[$tmp1214];
frost$core$Frost$ref$frost$core$Object$Q($tmp1215);
frost$io$File* $tmp1216 = *(&local3);
frost$core$Bit $tmp1217 = (frost$core$Bit) {$tmp1216 != NULL};
bool $tmp1218 = $tmp1217.value;
if ($tmp1218) goto block243; else goto block244;
block244:;
frost$core$Int $tmp1219 = (frost$core$Int) {333u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1220, $tmp1219, &$s1221);
abort(); // unreachable
block243:;
frost$core$String* $tmp1222 = *(&local7);
frost$core$Bit $tmp1223 = (frost$core$Bit) {$tmp1222 != NULL};
bool $tmp1224 = $tmp1223.value;
if ($tmp1224) goto block245; else goto block246;
block246:;
frost$core$Int $tmp1225 = (frost$core$Int) {333u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1226, $tmp1225, &$s1227);
abort(); // unreachable
block245:;
$fn1229 $tmp1228 = ($fn1229) $tmp1189->$class->vtable[3];
$tmp1228($tmp1189, ((frost$io$File*) $tmp1215), $tmp1216, $tmp1222);
frost$core$Frost$unref$frost$core$Object$Q($tmp1215);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:334
org$frostlang$frostc$Compiler* $tmp1230 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
*(&local64) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp1231 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
*(&local63) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp1232 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local62) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp1233 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) NULL);
frost$io$File* $tmp1234 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
*(&local41) = ((frost$io$File*) NULL);
frost$core$String* $tmp1235 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp1236 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp1237 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1238 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp1239 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block233:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:336
frost$core$String* $tmp1240 = *(&local7);
frost$core$Bit $tmp1241 = (frost$core$Bit) {$tmp1240 != NULL};
bool $tmp1242 = $tmp1241.value;
if ($tmp1242) goto block247; else goto block248;
block247:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:337
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:337:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s1243);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s1244);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:338
frost$core$Int $tmp1245 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp1245);
frost$core$Int $tmp1246 = (frost$core$Int) {338u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1247, $tmp1246, &$s1248);
abort(); // unreachable
block248:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:340
frost$collections$Array* $tmp1249 = *(&local1);
ITable* $tmp1250 = ((frost$collections$Iterable*) $tmp1249)->$class->itable;
while ($tmp1250->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1250 = $tmp1250->next;
}
$fn1252 $tmp1251 = $tmp1250->methods[0];
frost$collections$Iterator* $tmp1253 = $tmp1251(((frost$collections$Iterable*) $tmp1249));
goto block251;
block251:;
ITable* $tmp1254 = $tmp1253->$class->itable;
while ($tmp1254->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1254 = $tmp1254->next;
}
$fn1256 $tmp1255 = $tmp1254->methods[0];
frost$core$Bit $tmp1257 = $tmp1255($tmp1253);
bool $tmp1258 = $tmp1257.value;
if ($tmp1258) goto block253; else goto block252;
block252:;
*(&local67) = ((frost$io$File*) NULL);
ITable* $tmp1259 = $tmp1253->$class->itable;
while ($tmp1259->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1259 = $tmp1259->next;
}
$fn1261 $tmp1260 = $tmp1259->methods[1];
frost$core$Object* $tmp1262 = $tmp1260($tmp1253);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp1262)));
frost$io$File* $tmp1263 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
*(&local67) = ((frost$io$File*) $tmp1262);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:341
org$frostlang$frostc$Compiler* $tmp1264 = *(&local64);
frost$io$File* $tmp1265 = *(&local67);
frost$collections$ListView* $tmp1266 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT($tmp1264, $tmp1265);
ITable* $tmp1267 = ((frost$collections$Iterable*) $tmp1266)->$class->itable;
while ($tmp1267->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1267 = $tmp1267->next;
}
$fn1269 $tmp1268 = $tmp1267->methods[0];
frost$collections$Iterator* $tmp1270 = $tmp1268(((frost$collections$Iterable*) $tmp1266));
goto block254;
block254:;
ITable* $tmp1271 = $tmp1270->$class->itable;
while ($tmp1271->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1271 = $tmp1271->next;
}
$fn1273 $tmp1272 = $tmp1271->methods[0];
frost$core$Bit $tmp1274 = $tmp1272($tmp1270);
bool $tmp1275 = $tmp1274.value;
if ($tmp1275) goto block256; else goto block255;
block255:;
*(&local68) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1276 = $tmp1270->$class->itable;
while ($tmp1276->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1276 = $tmp1276->next;
}
$fn1278 $tmp1277 = $tmp1276->methods[1];
frost$core$Object* $tmp1279 = $tmp1277($tmp1270);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1279)));
org$frostlang$frostc$ClassDecl* $tmp1280 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
*(&local68) = ((org$frostlang$frostc$ClassDecl*) $tmp1279);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:342
org$frostlang$frostc$Compiler* $tmp1281 = *(&local64);
org$frostlang$frostc$ClassDecl* $tmp1282 = *(&local68);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Main.frost:342:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6009
frost$core$Bit $tmp1283 = (frost$core$Bit) {false};
frost$core$Bit* $tmp1284 = &$tmp1282->external;
*$tmp1284 = $tmp1283;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6010
frost$collections$Array** $tmp1285 = &$tmp1282->classes;
frost$collections$Array* $tmp1286 = *$tmp1285;
ITable* $tmp1287 = ((frost$collections$Iterable*) $tmp1286)->$class->itable;
while ($tmp1287->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1287 = $tmp1287->next;
}
$fn1289 $tmp1288 = $tmp1287->methods[0];
frost$collections$Iterator* $tmp1290 = $tmp1288(((frost$collections$Iterable*) $tmp1286));
goto block258;
block258:;
ITable* $tmp1291 = $tmp1290->$class->itable;
while ($tmp1291->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1291 = $tmp1291->next;
}
$fn1293 $tmp1292 = $tmp1291->methods[0];
frost$core$Bit $tmp1294 = $tmp1292($tmp1290);
bool $tmp1295 = $tmp1294.value;
if ($tmp1295) goto block260; else goto block259;
block259:;
*(&local69) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1296 = $tmp1290->$class->itable;
while ($tmp1296->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1296 = $tmp1296->next;
}
$fn1298 $tmp1297 = $tmp1296->methods[1];
frost$core$Object* $tmp1299 = $tmp1297($tmp1290);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1299)));
org$frostlang$frostc$ClassDecl* $tmp1300 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
*(&local69) = ((org$frostlang$frostc$ClassDecl*) $tmp1299);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6011
org$frostlang$frostc$ClassDecl* $tmp1301 = *(&local69);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Compiler.frost:6011:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6009
frost$core$Bit $tmp1302 = (frost$core$Bit) {false};
frost$core$Bit* $tmp1303 = &$tmp1301->external;
*$tmp1303 = $tmp1302;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6010
frost$collections$Array** $tmp1304 = &$tmp1301->classes;
frost$collections$Array* $tmp1305 = *$tmp1304;
ITable* $tmp1306 = ((frost$collections$Iterable*) $tmp1305)->$class->itable;
while ($tmp1306->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1306 = $tmp1306->next;
}
$fn1308 $tmp1307 = $tmp1306->methods[0];
frost$collections$Iterator* $tmp1309 = $tmp1307(((frost$collections$Iterable*) $tmp1305));
goto block262;
block262:;
ITable* $tmp1310 = $tmp1309->$class->itable;
while ($tmp1310->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1310 = $tmp1310->next;
}
$fn1312 $tmp1311 = $tmp1310->methods[0];
frost$core$Bit $tmp1313 = $tmp1311($tmp1309);
bool $tmp1314 = $tmp1313.value;
if ($tmp1314) goto block264; else goto block263;
block263:;
*(&local70) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1315 = $tmp1309->$class->itable;
while ($tmp1315->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1315 = $tmp1315->next;
}
$fn1317 $tmp1316 = $tmp1315->methods[1];
frost$core$Object* $tmp1318 = $tmp1316($tmp1309);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1318)));
org$frostlang$frostc$ClassDecl* $tmp1319 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
*(&local70) = ((org$frostlang$frostc$ClassDecl*) $tmp1318);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6011
org$frostlang$frostc$ClassDecl* $tmp1320 = *(&local70);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl($tmp1281, $tmp1320);
frost$core$Frost$unref$frost$core$Object$Q($tmp1318);
org$frostlang$frostc$ClassDecl* $tmp1321 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
*(&local70) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block262;
block264:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
frost$core$Frost$unref$frost$core$Object$Q($tmp1299);
org$frostlang$frostc$ClassDecl* $tmp1322 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local69) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block258;
block260:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
frost$core$Frost$unref$frost$core$Object$Q($tmp1279);
org$frostlang$frostc$ClassDecl* $tmp1323 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
*(&local68) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block254;
block256:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
frost$core$Frost$unref$frost$core$Object$Q($tmp1262);
frost$io$File* $tmp1324 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
*(&local67) = ((frost$io$File*) NULL);
goto block251;
block253:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:345
frost$collections$Array* $tmp1325 = *(&local1);
ITable* $tmp1326 = ((frost$collections$Iterable*) $tmp1325)->$class->itable;
while ($tmp1326->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1326 = $tmp1326->next;
}
$fn1328 $tmp1327 = $tmp1326->methods[0];
frost$collections$Iterator* $tmp1329 = $tmp1327(((frost$collections$Iterable*) $tmp1325));
goto block265;
block265:;
ITable* $tmp1330 = $tmp1329->$class->itable;
while ($tmp1330->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1330 = $tmp1330->next;
}
$fn1332 $tmp1331 = $tmp1330->methods[0];
frost$core$Bit $tmp1333 = $tmp1331($tmp1329);
bool $tmp1334 = $tmp1333.value;
if ($tmp1334) goto block267; else goto block266;
block266:;
*(&local71) = ((frost$io$File*) NULL);
ITable* $tmp1335 = $tmp1329->$class->itable;
while ($tmp1335->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1335 = $tmp1335->next;
}
$fn1337 $tmp1336 = $tmp1335->methods[1];
frost$core$Object* $tmp1338 = $tmp1336($tmp1329);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp1338)));
frost$io$File* $tmp1339 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
*(&local71) = ((frost$io$File*) $tmp1338);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:346
org$frostlang$frostc$Compiler* $tmp1340 = *(&local64);
frost$io$File* $tmp1341 = *(&local71);
org$frostlang$frostc$Compiler$compile$frost$io$File($tmp1340, $tmp1341);
frost$core$Frost$unref$frost$core$Object$Q($tmp1338);
frost$io$File* $tmp1342 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
*(&local71) = ((frost$io$File*) NULL);
goto block265;
block267:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:348
org$frostlang$frostc$Compiler* $tmp1343 = *(&local64);
// begin inline call to method org.frostlang.frostc.Compiler.finish() from Main.frost:348:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6246
goto block269;
block269:;
frost$collections$Array** $tmp1344 = &$tmp1343->pendingClasses;
frost$collections$Array* $tmp1345 = *$tmp1344;
ITable* $tmp1346 = ((frost$collections$CollectionView*) $tmp1345)->$class->itable;
while ($tmp1346->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1346 = $tmp1346->next;
}
$fn1348 $tmp1347 = $tmp1346->methods[0];
frost$core$Int $tmp1349 = $tmp1347(((frost$collections$CollectionView*) $tmp1345));
frost$core$Int $tmp1350 = (frost$core$Int) {0u};
int64_t $tmp1351 = $tmp1349.value;
int64_t $tmp1352 = $tmp1350.value;
bool $tmp1353 = $tmp1351 > $tmp1352;
frost$core$Bit $tmp1354 = (frost$core$Bit) {$tmp1353};
bool $tmp1355 = $tmp1354.value;
if ($tmp1355) goto block270; else goto block271;
block270:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6247
frost$collections$Array** $tmp1356 = &$tmp1343->pendingClasses;
frost$collections$Array* $tmp1357 = *$tmp1356;
frost$collections$Array** $tmp1358 = &$tmp1343->pendingClasses;
frost$collections$Array* $tmp1359 = *$tmp1358;
ITable* $tmp1360 = ((frost$collections$CollectionView*) $tmp1359)->$class->itable;
while ($tmp1360->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1360 = $tmp1360->next;
}
$fn1362 $tmp1361 = $tmp1360->methods[0];
frost$core$Int $tmp1363 = $tmp1361(((frost$collections$CollectionView*) $tmp1359));
frost$core$Int $tmp1364 = (frost$core$Int) {1u};
int64_t $tmp1365 = $tmp1363.value;
int64_t $tmp1366 = $tmp1364.value;
int64_t $tmp1367 = $tmp1365 - $tmp1366;
frost$core$Int $tmp1368 = (frost$core$Int) {$tmp1367};
frost$core$Object* $tmp1369 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp1357, $tmp1368);
*(&local72) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1369)));
org$frostlang$frostc$ClassDecl* $tmp1370 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
*(&local72) = ((org$frostlang$frostc$ClassDecl*) $tmp1369);
frost$core$Frost$unref$frost$core$Object$Q($tmp1369);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6248
org$frostlang$frostc$ClassDecl* $tmp1371 = *(&local72);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl($tmp1343, $tmp1371);
org$frostlang$frostc$ClassDecl* $tmp1372 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
*(&local72) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block269;
block271:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6250
org$frostlang$frostc$CodeGenerator** $tmp1373 = &$tmp1343->codeGenerator;
org$frostlang$frostc$CodeGenerator* $tmp1374 = *$tmp1373;
frost$core$Bit $tmp1375 = (frost$core$Bit) {$tmp1374 != NULL};
bool $tmp1376 = $tmp1375.value;
if ($tmp1376) goto block272; else goto block273;
block273:;
frost$core$Int $tmp1377 = (frost$core$Int) {6250u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1378, $tmp1377, &$s1379);
abort(); // unreachable
block272:;
ITable* $tmp1380 = $tmp1374->$class->itable;
while ($tmp1380->$class != (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class) {
    $tmp1380 = $tmp1380->next;
}
$fn1382 $tmp1381 = $tmp1380->methods[5];
$tmp1381($tmp1374);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:349
goto block274;
block274:;
frost$threads$MessageQueue* $tmp1383 = *(&local63);
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Main.frost:349:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1384 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1385 = &$tmp1383->lock;
frost$threads$Lock* $tmp1386 = *$tmp1385;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1384, $tmp1386);
*(&local73) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
frost$threads$ScopedLock* $tmp1387 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1387));
*(&local73) = $tmp1384;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp1388 = &$tmp1383->count;
frost$core$Int $tmp1389 = *$tmp1388;
frost$threads$ScopedLock* $tmp1390 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
*(&local73) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp1391 = (frost$core$Int) {0u};
int64_t $tmp1392 = $tmp1389.value;
int64_t $tmp1393 = $tmp1391.value;
bool $tmp1394 = $tmp1392 > $tmp1393;
frost$core$Bit $tmp1395 = (frost$core$Bit) {$tmp1394};
bool $tmp1396 = $tmp1395.value;
if ($tmp1396) goto block275; else goto block276;
block275:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:350
frost$threads$MessageQueue* $tmp1397 = *(&local63);
frost$core$Immutable* $tmp1398 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp1397);
*(&local74) = ((org$frostlang$frostc$Compiler$Message*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Message*) $tmp1398)));
org$frostlang$frostc$Compiler$Message* $tmp1399 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
*(&local74) = ((org$frostlang$frostc$Compiler$Message*) $tmp1398);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:352
org$frostlang$frostc$Compiler$Message* $tmp1400 = *(&local74);
frost$core$Int* $tmp1401 = &$tmp1400->$rawValue;
frost$core$Int $tmp1402 = *$tmp1401;
frost$core$Int $tmp1403 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:353:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1404 = $tmp1402.value;
int64_t $tmp1405 = $tmp1403.value;
bool $tmp1406 = $tmp1404 == $tmp1405;
frost$core$Bit $tmp1407 = (frost$core$Bit) {$tmp1406};
bool $tmp1408 = $tmp1407.value;
if ($tmp1408) goto block280; else goto block281;
block280:;
frost$core$String** $tmp1409 = (frost$core$String**) ($tmp1400->$data + 0);
frost$core$String* $tmp1410 = *$tmp1409;
*(&local75) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
frost$core$String* $tmp1411 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
*(&local75) = $tmp1410;
frost$core$Int* $tmp1412 = (frost$core$Int*) ($tmp1400->$data + 8);
frost$core$Int $tmp1413 = *$tmp1412;
*(&local76) = $tmp1413;
frost$core$Int* $tmp1414 = (frost$core$Int*) ($tmp1400->$data + 16);
frost$core$Int $tmp1415 = *$tmp1414;
*(&local77) = $tmp1415;
frost$core$String** $tmp1416 = (frost$core$String**) ($tmp1400->$data + 24);
frost$core$String* $tmp1417 = *$tmp1416;
*(&local78) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
frost$core$String* $tmp1418 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
*(&local78) = $tmp1417;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:354
frost$core$Int $tmp1419 = *(&local52);
frost$core$Int $tmp1420 = (frost$core$Int) {1u};
int64_t $tmp1421 = $tmp1419.value;
int64_t $tmp1422 = $tmp1420.value;
int64_t $tmp1423 = $tmp1421 + $tmp1422;
frost$core$Int $tmp1424 = (frost$core$Int) {$tmp1423};
*(&local52) = $tmp1424;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:355
frost$core$String* $tmp1425 = *(&local75);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:355:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
frost$core$String* $tmp1426 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1425, &$s1427);
frost$core$Int $tmp1428 = *(&local76);
frost$core$Int$wrapper* $tmp1429;
$tmp1429 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1429->value = $tmp1428;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:355:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1431 $tmp1430 = ($fn1431) ((frost$core$Object*) $tmp1429)->$class->vtable[0];
frost$core$String* $tmp1432 = $tmp1430(((frost$core$Object*) $tmp1429));
frost$core$String* $tmp1433 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1426, $tmp1432);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
frost$core$String* $tmp1434 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1433, &$s1435);
frost$core$Int $tmp1436 = *(&local77);
frost$core$Int$wrapper* $tmp1437;
$tmp1437 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1437->value = $tmp1436;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:355:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1439 $tmp1438 = ($fn1439) ((frost$core$Object*) $tmp1437)->$class->vtable[0];
frost$core$String* $tmp1440 = $tmp1438(((frost$core$Object*) $tmp1437));
frost$core$String* $tmp1441 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1434, $tmp1440);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
frost$core$String* $tmp1442 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1441, &$s1443);
frost$core$String* $tmp1444 = *(&local78);
frost$core$String* $tmp1445 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1442, $tmp1444);
frost$core$String* $tmp1446 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1445, &$s1447);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:355:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1446);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1448);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
frost$core$String* $tmp1449 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
*(&local78) = ((frost$core$String*) NULL);
frost$core$String* $tmp1450 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
*(&local75) = ((frost$core$String*) NULL);
goto block279;
block281:;
frost$core$Int $tmp1451 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:357:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1452 = $tmp1402.value;
int64_t $tmp1453 = $tmp1451.value;
bool $tmp1454 = $tmp1452 == $tmp1453;
frost$core$Bit $tmp1455 = (frost$core$Bit) {$tmp1454};
bool $tmp1456 = $tmp1455.value;
if ($tmp1456) goto block288; else goto block279;
block288:;
frost$core$String** $tmp1457 = (frost$core$String**) ($tmp1400->$data + 0);
frost$core$String* $tmp1458 = *$tmp1457;
*(&local79) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
frost$core$String* $tmp1459 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
*(&local79) = $tmp1458;
frost$core$Int* $tmp1460 = (frost$core$Int*) ($tmp1400->$data + 8);
frost$core$Int $tmp1461 = *$tmp1460;
*(&local80) = $tmp1461;
frost$core$Int* $tmp1462 = (frost$core$Int*) ($tmp1400->$data + 16);
frost$core$Int $tmp1463 = *$tmp1462;
*(&local81) = $tmp1463;
frost$core$String** $tmp1464 = (frost$core$String**) ($tmp1400->$data + 24);
frost$core$String* $tmp1465 = *$tmp1464;
*(&local82) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
frost$core$String* $tmp1466 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local82) = $tmp1465;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:358
frost$core$Int $tmp1467 = *(&local53);
frost$core$Int $tmp1468 = (frost$core$Int) {1u};
int64_t $tmp1469 = $tmp1467.value;
int64_t $tmp1470 = $tmp1468.value;
int64_t $tmp1471 = $tmp1469 + $tmp1470;
frost$core$Int $tmp1472 = (frost$core$Int) {$tmp1471};
*(&local53) = $tmp1472;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:359
frost$core$String* $tmp1473 = *(&local79);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:359:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
frost$core$String* $tmp1474 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1473, &$s1475);
frost$core$Int $tmp1476 = *(&local80);
frost$core$Int$wrapper* $tmp1477;
$tmp1477 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1477->value = $tmp1476;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:359:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1479 $tmp1478 = ($fn1479) ((frost$core$Object*) $tmp1477)->$class->vtable[0];
frost$core$String* $tmp1480 = $tmp1478(((frost$core$Object*) $tmp1477));
frost$core$String* $tmp1481 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1474, $tmp1480);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
frost$core$String* $tmp1482 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1481, &$s1483);
frost$core$Int $tmp1484 = *(&local81);
frost$core$Int$wrapper* $tmp1485;
$tmp1485 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1485->value = $tmp1484;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:359:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1487 $tmp1486 = ($fn1487) ((frost$core$Object*) $tmp1485)->$class->vtable[0];
frost$core$String* $tmp1488 = $tmp1486(((frost$core$Object*) $tmp1485));
frost$core$String* $tmp1489 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1482, $tmp1488);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
frost$core$String* $tmp1490 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1489, &$s1491);
frost$core$String* $tmp1492 = *(&local82);
frost$core$String* $tmp1493 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1490, $tmp1492);
frost$core$String* $tmp1494 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1493, &$s1495);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:359:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1494);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1496);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
frost$core$String* $tmp1497 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
*(&local82) = ((frost$core$String*) NULL);
frost$core$String* $tmp1498 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
*(&local79) = ((frost$core$String*) NULL);
goto block279;
block279:;
org$frostlang$frostc$Compiler$Message* $tmp1499 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
*(&local74) = ((org$frostlang$frostc$Compiler$Message*) NULL);
goto block274;
block276:;
org$frostlang$frostc$Compiler* $tmp1500 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
*(&local64) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp1501 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
*(&local63) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp1502 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
*(&local62) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp1503 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:364
frost$core$Int $tmp1504 = *(&local53);
frost$core$Int $tmp1505 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:364:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1506 = $tmp1504.value;
int64_t $tmp1507 = $tmp1505.value;
bool $tmp1508 = $tmp1506 == $tmp1507;
frost$core$Bit $tmp1509 = (frost$core$Bit) {$tmp1508};
bool $tmp1510 = $tmp1509.value;
if ($tmp1510) goto block295; else goto block297;
block295:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:366
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:366:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s1511);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1512);
goto block296;
block297:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:368
frost$core$Int $tmp1513 = *(&local53);
frost$core$Int $tmp1514 = (frost$core$Int) {0u};
int64_t $tmp1515 = $tmp1513.value;
int64_t $tmp1516 = $tmp1514.value;
bool $tmp1517 = $tmp1515 > $tmp1516;
frost$core$Bit $tmp1518 = (frost$core$Bit) {$tmp1517};
bool $tmp1519 = $tmp1518.value;
if ($tmp1519) goto block301; else goto block302;
block301:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:370
frost$core$Int $tmp1520 = *(&local53);
frost$core$String* $tmp1521 = frost$core$Int$get_asString$R$frost$core$String($tmp1520);
frost$core$String* $tmp1522 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1521, &$s1523);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:370:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1522);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1524);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
goto block302;
block302:;
goto block296;
block296:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:372
frost$core$Int $tmp1525 = *(&local52);
frost$core$Int $tmp1526 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:372:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1527 = $tmp1525.value;
int64_t $tmp1528 = $tmp1526.value;
bool $tmp1529 = $tmp1527 == $tmp1528;
frost$core$Bit $tmp1530 = (frost$core$Bit) {$tmp1529};
bool $tmp1531 = $tmp1530.value;
if ($tmp1531) goto block305; else goto block307;
block305:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:373
org$frostlang$frostc$Main$Format$nullable $tmp1532 = *(&local6);
frost$core$Bit $tmp1533 = (frost$core$Bit) {$tmp1532.nonnull};
bool $tmp1534 = $tmp1533.value;
if ($tmp1534) goto block309; else goto block310;
block310:;
frost$core$Int $tmp1535 = (frost$core$Int) {373u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1536, $tmp1535, &$s1537);
abort(); // unreachable
block309:;
frost$core$Int $tmp1538 = ((org$frostlang$frostc$Main$Format) $tmp1532.value).$rawValue;
frost$core$Int $tmp1539 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:374:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1540 = $tmp1538.value;
int64_t $tmp1541 = $tmp1539.value;
bool $tmp1542 = $tmp1540 == $tmp1541;
frost$core$Bit $tmp1543 = (frost$core$Bit) {$tmp1542};
bool $tmp1544 = $tmp1543.value;
if ($tmp1544) goto block312; else goto block313;
block312:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:375
frost$io$File* $tmp1545 = *(&local3);
frost$core$Bit $tmp1546 = (frost$core$Bit) {$tmp1545 != NULL};
bool $tmp1547 = $tmp1546.value;
if ($tmp1547) goto block315; else goto block316;
block316:;
frost$core$Int $tmp1548 = (frost$core$Int) {375u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1549, $tmp1548, &$s1550);
abort(); // unreachable
block315:;
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:375:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp1551 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1545, &$s1552);
frost$core$String** $tmp1553 = &$tmp1551->path;
frost$core$String* $tmp1554 = *$tmp1553;
frost$core$String* $tmp1555 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp1554);
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
frost$core$String* $tmp1556 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
*(&local84) = $tmp1555;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp1557 = *(&local84);
frost$core$Bit $tmp1558 = (frost$core$Bit) {$tmp1557 == NULL};
bool $tmp1559 = $tmp1558.value;
if ($tmp1559) goto block319; else goto block320;
block319:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp1560 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
*(&local84) = ((frost$core$String*) NULL);
*(&local83) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block318;
block320:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp1561 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp1562 = *(&local84);
frost$core$Bit $tmp1563 = (frost$core$Bit) {$tmp1562 != NULL};
bool $tmp1564 = $tmp1563.value;
if ($tmp1564) goto block321; else goto block322;
block322:;
frost$core$Int $tmp1565 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1566, $tmp1565, &$s1567);
abort(); // unreachable
block321:;
frost$io$File$init$frost$core$String($tmp1561, $tmp1562);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
frost$core$String* $tmp1568 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
*(&local84) = ((frost$core$String*) NULL);
*(&local83) = $tmp1561;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
goto block318;
block318:;
frost$io$File* $tmp1569 = *(&local83);
frost$core$Bit $tmp1570 = (frost$core$Bit) {$tmp1569 != NULL};
bool $tmp1571 = $tmp1570.value;
if ($tmp1571) goto block323; else goto block324;
block324:;
frost$core$Int $tmp1572 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1573, $tmp1572, &$s1574);
abort(); // unreachable
block323:;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp1575 = frost$io$File$get_name$R$frost$core$String($tmp1545);
*(&local86) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
frost$core$String* $tmp1576 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1576));
*(&local86) = $tmp1575;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp1577 = *(&local86);
frost$core$String$Index$nullable $tmp1578 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp1577, &$s1579);
*(&local87) = $tmp1578;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp1580 = *(&local87);
frost$core$Bit $tmp1581 = (frost$core$Bit) {!$tmp1580.nonnull};
bool $tmp1582 = $tmp1581.value;
if ($tmp1582) goto block326; else goto block327;
block326:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp1583 = *(&local86);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
frost$core$String* $tmp1584 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
*(&local86) = ((frost$core$String*) NULL);
*(&local85) = $tmp1583;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
goto block325;
block327:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp1585 = *(&local86);
frost$core$String$Index$nullable $tmp1586 = *(&local87);
frost$core$Bit $tmp1587 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1588 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1586, $tmp1587);
frost$core$String* $tmp1589 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1585, $tmp1588);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
frost$core$String* $tmp1590 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1590));
*(&local86) = ((frost$core$String*) NULL);
*(&local85) = $tmp1589;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
goto block325;
block325:;
frost$core$String* $tmp1591 = *(&local85);
frost$core$String* $tmp1592 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1591, &$s1593);
frost$io$File* $tmp1594 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1569, $tmp1592);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
frost$core$String* $tmp1595 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
*(&local85) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
frost$io$File* $tmp1596 = *(&local83);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
*(&local83) = ((frost$io$File*) NULL);
frost$io$File* $tmp1597 = *(&local3);
frost$core$Bit $tmp1598 = (frost$core$Bit) {$tmp1597 != NULL};
bool $tmp1599 = $tmp1598.value;
if ($tmp1599) goto block328; else goto block329;
block329:;
frost$core$Int $tmp1600 = (frost$core$Int) {375u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1601, $tmp1600, &$s1602);
abort(); // unreachable
block328:;
frost$core$Bit $tmp1603 = *(&local8);
frost$io$File* $tmp1604 = org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp1594, $tmp1597, $tmp1603);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
goto block311;
block313:;
frost$core$Int $tmp1605 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:377:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1606 = $tmp1538.value;
int64_t $tmp1607 = $tmp1605.value;
bool $tmp1608 = $tmp1606 == $tmp1607;
frost$core$Bit $tmp1609 = (frost$core$Bit) {$tmp1608};
bool $tmp1610 = $tmp1609.value;
if ($tmp1610) goto block330; else goto block311;
block330:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:378
frost$io$File* $tmp1611 = *(&local3);
frost$core$Bit $tmp1612 = (frost$core$Bit) {$tmp1611 != NULL};
bool $tmp1613 = $tmp1612.value;
if ($tmp1613) goto block332; else goto block333;
block333:;
frost$core$Int $tmp1614 = (frost$core$Int) {378u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1615, $tmp1614, &$s1616);
abort(); // unreachable
block332:;
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:378:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp1617 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1611, &$s1618);
frost$core$String** $tmp1619 = &$tmp1617->path;
frost$core$String* $tmp1620 = *$tmp1619;
frost$core$String* $tmp1621 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp1620);
*(&local89) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
frost$core$String* $tmp1622 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1622));
*(&local89) = $tmp1621;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp1623 = *(&local89);
frost$core$Bit $tmp1624 = (frost$core$Bit) {$tmp1623 == NULL};
bool $tmp1625 = $tmp1624.value;
if ($tmp1625) goto block336; else goto block337;
block336:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp1626 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
*(&local89) = ((frost$core$String*) NULL);
*(&local88) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block335;
block337:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp1627 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp1628 = *(&local89);
frost$core$Bit $tmp1629 = (frost$core$Bit) {$tmp1628 != NULL};
bool $tmp1630 = $tmp1629.value;
if ($tmp1630) goto block338; else goto block339;
block339:;
frost$core$Int $tmp1631 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1632, $tmp1631, &$s1633);
abort(); // unreachable
block338:;
frost$io$File$init$frost$core$String($tmp1627, $tmp1628);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
frost$core$String* $tmp1634 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
*(&local89) = ((frost$core$String*) NULL);
*(&local88) = $tmp1627;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
goto block335;
block335:;
frost$io$File* $tmp1635 = *(&local88);
frost$core$Bit $tmp1636 = (frost$core$Bit) {$tmp1635 != NULL};
bool $tmp1637 = $tmp1636.value;
if ($tmp1637) goto block340; else goto block341;
block341:;
frost$core$Int $tmp1638 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1639, $tmp1638, &$s1640);
abort(); // unreachable
block340:;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp1641 = frost$io$File$get_name$R$frost$core$String($tmp1611);
*(&local91) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
frost$core$String* $tmp1642 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
*(&local91) = $tmp1641;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp1643 = *(&local91);
frost$core$String$Index$nullable $tmp1644 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp1643, &$s1645);
*(&local92) = $tmp1644;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp1646 = *(&local92);
frost$core$Bit $tmp1647 = (frost$core$Bit) {!$tmp1646.nonnull};
bool $tmp1648 = $tmp1647.value;
if ($tmp1648) goto block343; else goto block344;
block343:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp1649 = *(&local91);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
frost$core$String* $tmp1650 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
*(&local91) = ((frost$core$String*) NULL);
*(&local90) = $tmp1649;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
goto block342;
block344:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp1651 = *(&local91);
frost$core$String$Index$nullable $tmp1652 = *(&local92);
frost$core$Bit $tmp1653 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1654 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1652, $tmp1653);
frost$core$String* $tmp1655 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1651, $tmp1654);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1655));
frost$core$String* $tmp1656 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1656));
*(&local91) = ((frost$core$String*) NULL);
*(&local90) = $tmp1655;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1655));
goto block342;
block342:;
frost$core$String* $tmp1657 = *(&local90);
frost$core$String* $tmp1658 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1657, &$s1659);
frost$io$File* $tmp1660 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1635, $tmp1658);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
frost$core$String* $tmp1661 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
*(&local90) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
frost$io$File* $tmp1662 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
*(&local88) = ((frost$io$File*) NULL);
frost$io$File* $tmp1663 = *(&local3);
frost$core$Bit $tmp1664 = (frost$core$Bit) {$tmp1663 != NULL};
bool $tmp1665 = $tmp1664.value;
if ($tmp1665) goto block345; else goto block346;
block346:;
frost$core$Int $tmp1666 = (frost$core$Int) {378u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1667, $tmp1666, &$s1668);
abort(); // unreachable
block345:;
frost$core$Bit $tmp1669 = *(&local8);
frost$io$File* $tmp1670 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp1660, $tmp1663, $tmp1669);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1660));
goto block311;
block311:;
frost$io$File* $tmp1671 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
*(&local41) = ((frost$io$File*) NULL);
frost$core$String* $tmp1672 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp1673 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp1674 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1675 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp1676 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1676));
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block307:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:383
frost$core$Int $tmp1677 = *(&local52);
frost$core$Int $tmp1678 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:383:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1679 = $tmp1677.value;
int64_t $tmp1680 = $tmp1678.value;
bool $tmp1681 = $tmp1679 == $tmp1680;
frost$core$Bit $tmp1682 = (frost$core$Bit) {$tmp1681};
bool $tmp1683 = $tmp1682.value;
if ($tmp1683) goto block347; else goto block349;
block347:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:385
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:385:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s1684);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1685);
goto block348;
block349:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:389
frost$core$Int $tmp1686 = *(&local52);
frost$core$String* $tmp1687 = frost$core$Int$get_asString$R$frost$core$String($tmp1686);
frost$core$String* $tmp1688 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1687, &$s1689);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:389:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1688);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1690);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
goto block348;
block348:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:391
frost$core$Int $tmp1691 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp1691);
frost$core$Int $tmp1692 = (frost$core$Int) {391u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1693, $tmp1692, &$s1694);
abort(); // unreachable

}
void frostMain(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:397
ITable* $tmp1695 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp1695->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1695 = $tmp1695->next;
}
$fn1697 $tmp1696 = $tmp1695->methods[0];
frost$core$Int $tmp1698 = $tmp1696(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp1699 = (frost$core$Int) {1u};
int64_t $tmp1700 = $tmp1698.value;
int64_t $tmp1701 = $tmp1699.value;
bool $tmp1702 = $tmp1700 > $tmp1701;
frost$core$Bit $tmp1703 = (frost$core$Bit) {$tmp1702};
bool $tmp1704 = $tmp1703.value;
if ($tmp1704) goto block3; else goto block2;
block3:;
frost$core$Int $tmp1705 = (frost$core$Int) {1u};
ITable* $tmp1706 = param0->$class->itable;
while ($tmp1706->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1706 = $tmp1706->next;
}
$fn1708 $tmp1707 = $tmp1706->methods[0];
frost$core$Object* $tmp1709 = $tmp1707(param0, $tmp1705);
frost$core$Bit $tmp1710 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(((frost$core$String*) $tmp1709), &$s1711);
bool $tmp1712 = $tmp1710.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1709);
if ($tmp1712) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:398
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:399
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Main));
org$frostlang$frostc$Main* $tmp1713 = (org$frostlang$frostc$Main*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp1713);
frost$core$Int $tmp1714 = (frost$core$Int) {1u};
frost$core$Bit $tmp1715 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp1716 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp1714, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp1715);
ITable* $tmp1717 = param0->$class->itable;
while ($tmp1717->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1717 = $tmp1717->next;
}
$fn1719 $tmp1718 = $tmp1717->methods[2];
frost$collections$ListView* $tmp1720 = $tmp1718(param0, $tmp1716);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp1713, $tmp1720);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
goto block4;
block5:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:402
ITable* $tmp1721 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp1721->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1721 = $tmp1721->next;
}
$fn1723 $tmp1722 = $tmp1721->methods[0];
frost$core$Int $tmp1724 = $tmp1722(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp1725 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:402:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1726 = $tmp1724.value;
int64_t $tmp1727 = $tmp1725.value;
bool $tmp1728 = $tmp1726 == $tmp1727;
frost$core$Bit $tmp1729 = (frost$core$Bit) {$tmp1728};
bool $tmp1730 = $tmp1729.value;
if ($tmp1730) goto block8; else goto block7;
block8:;
frost$core$Int $tmp1731 = (frost$core$Int) {1u};
ITable* $tmp1732 = param0->$class->itable;
while ($tmp1732->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1732 = $tmp1732->next;
}
$fn1734 $tmp1733 = $tmp1732->methods[0];
frost$core$Object* $tmp1735 = $tmp1733(param0, $tmp1731);
frost$core$Bit $tmp1736 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(((frost$core$String*) $tmp1735), &$s1737);
bool $tmp1738 = $tmp1736.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1735);
if ($tmp1738) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:403
FROST_ASSERT(16 == sizeof(org$frostlang$frostc$Bench));
org$frostlang$frostc$Bench* $tmp1739 = (org$frostlang$frostc$Bench*) frostObjectAlloc(16, (frost$core$Class*) &org$frostlang$frostc$Bench$class);
org$frostlang$frostc$Bench$init($tmp1739);
$fn1741 $tmp1740 = ($fn1741) $tmp1739->$class->vtable[4];
$tmp1740($tmp1739);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:404
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:406
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Main));
org$frostlang$frostc$Main* $tmp1742 = (org$frostlang$frostc$Main*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp1742);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp1742, param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1742));
return;

}
void org$frostlang$frostc$Main$cleanup(org$frostlang$frostc$Main* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp1743 = &param0->clang;
frost$io$File* $tmp1744 = *$tmp1743;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
frost$io$File** $tmp1745 = &param0->frostHome;
frost$io$File* $tmp1746 = *$tmp1745;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1746));
return;

}

