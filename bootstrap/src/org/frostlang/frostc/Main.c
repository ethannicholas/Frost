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
typedef frost$core$String* (*$fn162)(frost$core$Object*);
typedef frost$core$String* (*$fn255)(frost$core$Object*);
typedef frost$core$String* (*$fn267)(frost$io$InputStream*);
typedef frost$core$String* (*$fn272)(frost$io$InputStream*);
typedef frost$core$String* (*$fn289)(frost$core$Object*);
typedef frost$core$Error* (*$fn311)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn320)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn328)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn337)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn345)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn354)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn378)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn386)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Maybe* (*$fn409)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$String* (*$fn426)(frost$core$Object*);
typedef frost$core$String* (*$fn447)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn480)(frost$core$Object*);
typedef frost$core$String* (*$fn493)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn536)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn588)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn660)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn668)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Bit (*$fn706)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn728)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn755)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn826)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn894)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn984)(frost$core$Object*);
typedef frost$core$String* (*$fn1029)(frost$core$Object*);
typedef frost$core$Bit (*$fn1067)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn1087)(frost$collections$CollectionView*);
typedef void (*$fn1105)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1128)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1132)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1137)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1145)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1149)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1154)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1165)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1169)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1174)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1184)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1188)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1193)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1204)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1208)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1213)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn1224)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1238)(frost$collections$CollectionView*);
typedef void (*$fn1253)(org$frostlang$frostc$CodeGenerator*);
typedef frost$core$String* (*$fn1302)(frost$core$Object*);
typedef frost$core$String* (*$fn1310)(frost$core$Object*);
typedef frost$core$String* (*$fn1350)(frost$core$Object*);
typedef frost$core$String* (*$fn1358)(frost$core$Object*);
typedef frost$core$Int (*$fn1533)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1544)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$ListView* (*$fn1555)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$Q$GT);
typedef frost$core$Int (*$fn1559)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1570)(frost$collections$ListView*, frost$core$Int);
typedef void (*$fn1577)(org$frostlang$frostc$Bench*);

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
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x69\x62", 3, 1317978099017241196, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c", 2, 563044544515952796, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 6043963258232676957, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, -3218342706179030910, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x67", 2, 563056639143863117, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x66\x72\x6f\x73\x74\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -5336904199903828035, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x66\x72\x6f\x73\x74\x27\x2e", 38, 2414752363581770017, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, -3725874908572553427, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, -8537804258594104524, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, -1426593306435499698, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, 2993450520568953317, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -2854313959629863208, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -293442963066226919, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s470 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s476 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4f", 2, 563012658678734677, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, -36708640889814861, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, -8241422096120224677, NULL };
static frost$core$String $s524 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x53", 2, 562999464539196145, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, -36708640889814861, NULL };
static frost$core$String $s566 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, -8229934398630946849, NULL };
static frost$core$String $s567 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66", 2, 563055539632234906, NULL };
static frost$core$String $s580 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -8357866846417911189, NULL };
static frost$core$String $s581 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s585 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -8762049995398847258, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x65", 3, -4390446579619712681, NULL };
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f", 1, -5808550276084140354, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6c", 2, 625221927078985221, NULL };
static frost$core$String $s615 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68", 1, -5808546977549255721, NULL };
static frost$core$String $s622 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63", 1, -5808554674130653198, NULL };
static frost$core$String $s629 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, -8607590772689110736, NULL };
static frost$core$String $s636 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62", 4, -5818263582595368203, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, -8940199916074753387, NULL };
static frost$core$String $s646 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s647 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s650 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s651 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s654 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x69", 2, 563041245981068163, NULL };
static frost$core$String $s662 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 8483394141060772687, NULL };
static frost$core$String $s664 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, -3260734117535617165, NULL };
static frost$core$String $s670 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 1755487887012249427, NULL };
static frost$core$String $s674 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, -6268259042323653607, NULL };
static frost$core$String $s684 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -540522989212751288, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s687 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s690 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s713 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62\x73", 5, -7219040758408810062, NULL };
static frost$core$String $s721 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 2088835727452422272, NULL };
static frost$core$String $s736 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, 1894309652117697527, NULL };
static frost$core$String $s737 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s740 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s741 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s771 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s773 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s780 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 565862592818489914, NULL };
static frost$core$String $s782 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 565862592818489914, NULL };
static frost$core$String $s789 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s791 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s798 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s800 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s807 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, -5255104731122465439, NULL };
static frost$core$String $s809 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, -5255104731122465439, NULL };
static frost$core$String $s810 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, 6378635575011181341, NULL };
static frost$core$String $s811 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s814 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s834 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s835 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s843 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s859 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s897 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -5478415099818808347, NULL };
static frost$core$String $s898 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s901 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s902 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s903 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, -4651943656929293709, NULL };
static frost$core$String $s904 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s907 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s908 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s935 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s951 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s952 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s957 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s971 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s988 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s989 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s1033 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1034 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s1040 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1073 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1095 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1096 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 3928554745973598786, NULL };
static frost$core$String $s1120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s1298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, -5861202104196742523, NULL };
static frost$core$String $s1318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1346 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1362 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x77\x61\x72\x6e\x69\x6e\x67\x3a\x20", 11, 2890546785777135939, NULL };
static frost$core$String $s1366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1367 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x77\x61\x72\x6e\x69\x6e\x67", 9, -3177307723557508888, NULL };
static frost$core$String $s1383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x61\x72\x6e\x69\x6e\x67\x73", 9, 8539650515262073630, NULL };
static frost$core$String $s1395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s1429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s1430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s1435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s1464 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s1480 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s1481 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s1486 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1500 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s1520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 3639570550927944898, NULL };
static frost$core$String $s1521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1525 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, -1438914547765079724, NULL };
static frost$core$String $s1526 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1529 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s1530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s1547 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x65\x70\x65\x61\x74", 8, 3780951491120021928, NULL };
static frost$core$String $s1573 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x62\x65\x6e\x63\x68", 7, -7026121568011644677, NULL };

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
frost$io$File$init$frost$core$String($tmp152, $tmp153);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$String* $tmp154 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local5) = ((frost$core$String*) NULL);
*(&local4) = $tmp152;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
goto block6;
block6:;
frost$io$File* $tmp155 = *(&local4);
frost$core$Bit $tmp156 = (frost$core$Bit) {$tmp155 != NULL};
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block9; else goto block10;
block10:;
frost$core$Int $tmp158 = (frost$core$Int) {107u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s159, $tmp158, &$s160);
abort(); // unreachable
block9:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:107:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn162 $tmp161 = ($fn162) ((frost$core$Object*) $tmp155)->$class->vtable[0];
frost$core$String* $tmp163 = $tmp161(((frost$core$Object*) $tmp155));
frost$core$String* $tmp164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s165, $tmp163);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$collections$Array$add$frost$collections$Array$T($tmp140, ((frost$core$Object*) $tmp164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:108
frost$io$File* $tmp166 = *(&local3);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from Main.frost:108:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
// begin inline call to function frost.io.File.get_name():frost.core.String from File.frost:158:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
frost$core$String** $tmp167 = &$tmp166->path;
frost$core$String* $tmp168 = *$tmp167;
frost$core$String$Index$nullable $tmp169 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp168, &$s170);
*(&local8) = $tmp169;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp171 = *(&local8);
frost$core$Bit $tmp172 = (frost$core$Bit) {$tmp171.nonnull};
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block14; else goto block16;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:150
frost$core$String** $tmp174 = &$tmp166->path;
frost$core$String* $tmp175 = *$tmp174;
frost$core$String** $tmp176 = &$tmp166->path;
frost$core$String* $tmp177 = *$tmp176;
frost$core$String$Index$nullable $tmp178 = *(&local8);
frost$core$String$Index $tmp179 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp177, ((frost$core$String$Index) $tmp178.value));
frost$core$Bit $tmp180 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp181 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp179, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp180);
frost$core$String* $tmp182 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp175, $tmp181);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local7) = $tmp182;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
goto block13;
block16:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:153
frost$core$String** $tmp183 = &$tmp166->path;
frost$core$String* $tmp184 = *$tmp183;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local7) = $tmp184;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
goto block13;
block15:;
goto block13;
block13:;
frost$core$String* $tmp185 = *(&local7);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$String* $tmp186 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local9) = $tmp185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp187 = *(&local9);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:159:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
frost$core$String$Index $tmp188 = frost$core$String$get_end$R$frost$core$String$Index($tmp187);
frost$core$String$Index$nullable $tmp189 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp187, &$s190, $tmp188);
*(&local10) = $tmp189;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp191 = *(&local10);
frost$core$Bit $tmp192 = (frost$core$Bit) {!$tmp191.nonnull};
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp194 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$String* $tmp195 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp196 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local7) = ((frost$core$String*) NULL);
*(&local6) = $tmp194;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
goto block12;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp197 = *(&local9);
frost$core$String$Index$nullable $tmp198 = *(&local10);
frost$core$Bit $tmp199 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp200 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp198, $tmp199);
frost$core$String* $tmp201 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp197, $tmp200);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$String* $tmp202 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp203 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
*(&local7) = ((frost$core$String*) NULL);
*(&local6) = $tmp201;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
goto block12;
block12:;
frost$core$String* $tmp204 = *(&local6);
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$String* $tmp205 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local11) = $tmp204;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:109
frost$core$String* $tmp206 = *(&local11);
frost$core$Bit $tmp207 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp206, &$s208);
bool $tmp209 = $tmp207.value;
if ($tmp209) goto block20; else goto block21;
block21:;
frost$core$Int $tmp210 = (frost$core$Int) {109u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s211, $tmp210);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:110
frost$core$String* $tmp212 = *(&local11);
frost$core$Int $tmp213 = (frost$core$Int) {3u};
frost$core$Bit $tmp214 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp215 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp213, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp214);
frost$core$String* $tmp216 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp212, $tmp215);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$String* $tmp217 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local11) = $tmp216;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:111
frost$collections$Array* $tmp218 = *(&local0);
frost$core$String* $tmp219 = *(&local11);
frost$core$String* $tmp220 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s221, $tmp219);
frost$collections$Array$add$frost$collections$Array$T($tmp218, ((frost$core$Object*) $tmp220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$core$String* $tmp222 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
*(&local11) = ((frost$core$String*) NULL);
frost$core$String* $tmp223 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
*(&local6) = ((frost$core$String*) NULL);
frost$io$File* $tmp224 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp225 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp135);
frost$core$String* $tmp226 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local2) = ((frost$core$String*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:113
frost$collections$Array* $tmp227 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp227, ((frost$core$Object*) &$s228));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:114
frost$collections$Array* $tmp229 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp229, ((frost$core$Object*) &$s230));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:115
frost$core$Bit* $tmp231 = &param0->debug;
frost$core$Bit $tmp232 = *$tmp231;
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:116
frost$collections$Array* $tmp234 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp234, ((frost$core$Object*) &$s235));
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:118
frost$collections$Array* $tmp236 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp236, ((frost$core$Object*) &$s237));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:119
frost$collections$Array* $tmp238 = *(&local0);
frost$core$String** $tmp239 = &param2->path;
frost$core$String* $tmp240 = *$tmp239;
frost$collections$Array$add$frost$collections$Array$T($tmp238, ((frost$core$Object*) $tmp240));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:120
*(&local12) = ((frost$core$System$Process*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:121
*(&local13) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:122
frost$io$File** $tmp241 = &param0->clang;
frost$io$File* $tmp242 = *$tmp241;
frost$core$String** $tmp243 = &$tmp242->path;
frost$core$String* $tmp244 = *$tmp243;
frost$collections$Array* $tmp245 = *(&local0);
frost$core$Maybe* $tmp246 = frost$core$System$exec$frost$core$String$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$Maybe$LTfrost$core$System$Process$GT($tmp244, ((frost$collections$ListView*) $tmp245));
frost$core$Int* $tmp247 = &$tmp246->$rawValue;
frost$core$Int $tmp248 = *$tmp247;
int64_t $tmp249 = $tmp248.value;
bool $tmp250 = $tmp249 == 0u;
if ($tmp250) goto block26; else goto block27;
block27:;
frost$core$Error** $tmp251 = (frost$core$Error**) ($tmp246->$data + 0);
frost$core$Error* $tmp252 = *$tmp251;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
*(&local13) = $tmp252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:127
frost$core$Error* $tmp253 = *(&local13);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:127:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn255 $tmp254 = ($fn255) ((frost$core$Object*) $tmp253)->$class->vtable[0];
frost$core$String* $tmp256 = $tmp254(((frost$core$Object*) $tmp253));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp256);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:128
frost$core$Int $tmp257 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp257);
frost$core$Int $tmp258 = (frost$core$Int) {128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s259, $tmp258, &$s260);
abort(); // unreachable
block26:;
frost$core$Object** $tmp261 = (frost$core$Object**) ($tmp246->$data + 0);
frost$core$Object* $tmp262 = *$tmp261;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$System$Process*) $tmp262)));
frost$core$System$Process* $tmp263 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local12) = ((frost$core$System$Process*) $tmp262);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:123
frost$core$System$Process* $tmp264 = *(&local12);
frost$io$InputStream* $tmp265 = frost$core$System$Process$standardOutput$R$frost$io$InputStream($tmp264);
$fn267 $tmp266 = ($fn267) $tmp265->$class->vtable[14];
frost$core$String* $tmp268 = $tmp266($tmp265);
frost$io$Console$printError$frost$core$String($tmp268);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:124
frost$core$System$Process* $tmp269 = *(&local12);
frost$io$InputStream* $tmp270 = frost$core$System$Process$standardError$R$frost$io$InputStream($tmp269);
$fn272 $tmp271 = ($fn272) $tmp270->$class->vtable[14];
frost$core$String* $tmp273 = $tmp271($tmp270);
frost$io$Console$printError$frost$core$String($tmp273);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Error* $tmp274 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local13) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:130
frost$core$System$Process* $tmp275 = *(&local12);
frost$core$Int $tmp276;
frost$core$System$Process$waitFor$R$frost$core$Int(&$tmp276, $tmp275);
*(&local14) = $tmp276;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:131
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:131:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp277 = param3.value;
bool $tmp278 = !$tmp277;
frost$core$Bit $tmp279 = (frost$core$Bit) {$tmp278};
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:132
*(&local15) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:133
frost$core$Error* $tmp281 = frost$io$File$delete$R$frost$core$Error$Q(param1);
if ($tmp281 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Bit $tmp282 = (frost$core$Bit) {$tmp281 != NULL};
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block37; else goto block38;
block38:;
frost$core$Int $tmp284 = (frost$core$Int) {133u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s285, $tmp284, &$s286);
abort(); // unreachable
block37:;
*(&local15) = $tmp281;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:136
frost$core$Error* $tmp287 = *(&local15);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:136:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn289 $tmp288 = ($fn289) ((frost$core$Object*) $tmp287)->$class->vtable[0];
frost$core$String* $tmp290 = $tmp288(((frost$core$Object*) $tmp287));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp290);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:137
frost$core$Int $tmp291 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp291);
frost$core$Int $tmp292 = (frost$core$Int) {137u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s293, $tmp292, &$s294);
abort(); // unreachable
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Error* $tmp295 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local15) = ((frost$core$Error*) NULL);
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:140
frost$core$Int $tmp296 = *(&local14);
frost$core$Int $tmp297 = (frost$core$Int) {0u};
int64_t $tmp298 = $tmp296.value;
int64_t $tmp299 = $tmp297.value;
bool $tmp300 = $tmp298 != $tmp299;
frost$core$Bit $tmp301 = (frost$core$Bit) {$tmp300};
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:141
frost$core$Int $tmp303 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp303);
frost$core$Int $tmp304 = (frost$core$Int) {141u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s305, $tmp304, &$s306);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:143
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp307 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
*(&local12) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp308 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local1) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp309 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local0) = ((frost$collections$Array*) NULL);
return param2;

}
void org$frostlang$frostc$Main$printUsage$frost$io$OutputStream(org$frostlang$frostc$Main* param0, frost$io$OutputStream* param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:147
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:148
$fn311 $tmp310 = ($fn311) param1->$class->vtable[19];
frost$core$Error* $tmp312 = $tmp310(param1, &$s313);
if ($tmp312 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
frost$core$Bit $tmp314 = (frost$core$Bit) {$tmp312 != NULL};
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block5; else goto block6;
block6:;
frost$core$Int $tmp316 = (frost$core$Int) {148u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s317, $tmp316, &$s318);
abort(); // unreachable
block5:;
*(&local0) = $tmp312;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:149
$fn320 $tmp319 = ($fn320) param1->$class->vtable[21];
frost$core$Error* $tmp321 = $tmp319(param1);
if ($tmp321 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$core$Bit $tmp322 = (frost$core$Bit) {$tmp321 != NULL};
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block9; else goto block10;
block10:;
frost$core$Int $tmp324 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s325, $tmp324, &$s326);
abort(); // unreachable
block9:;
*(&local0) = $tmp321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:150
$fn328 $tmp327 = ($fn328) param1->$class->vtable[19];
frost$core$Error* $tmp329 = $tmp327(param1, &$s330);
if ($tmp329 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$core$Bit $tmp331 = (frost$core$Bit) {$tmp329 != NULL};
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block13; else goto block14;
block14:;
frost$core$Int $tmp333 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s334, $tmp333, &$s335);
abort(); // unreachable
block13:;
*(&local0) = $tmp329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:151
$fn337 $tmp336 = ($fn337) param1->$class->vtable[21];
frost$core$Error* $tmp338 = $tmp336(param1);
if ($tmp338 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Bit $tmp339 = (frost$core$Bit) {$tmp338 != NULL};
bool $tmp340 = $tmp339.value;
if ($tmp340) goto block17; else goto block18;
block18:;
frost$core$Int $tmp341 = (frost$core$Int) {151u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s342, $tmp341, &$s343);
abort(); // unreachable
block17:;
*(&local0) = $tmp338;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:152
$fn345 $tmp344 = ($fn345) param1->$class->vtable[19];
frost$core$Error* $tmp346 = $tmp344(param1, &$s347);
if ($tmp346 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Bit $tmp348 = (frost$core$Bit) {$tmp346 != NULL};
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block21; else goto block22;
block22:;
frost$core$Int $tmp350 = (frost$core$Int) {152u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s351, $tmp350, &$s352);
abort(); // unreachable
block21:;
*(&local0) = $tmp346;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
goto block1;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:153
$fn354 $tmp353 = ($fn354) param1->$class->vtable[19];
frost$core$Error* $tmp355 = $tmp353(param1, &$s356);
if ($tmp355 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$core$Bit $tmp357 = (frost$core$Bit) {$tmp355 != NULL};
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block25; else goto block26;
block26:;
frost$core$Int $tmp359 = (frost$core$Int) {153u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s360, $tmp359, &$s361);
abort(); // unreachable
block25:;
*(&local0) = $tmp355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$core$Error* $tmp362 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:156
frost$core$Int $tmp363 = (frost$core$Int) {156u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s364, $tmp363);
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
org$frostlang$frostc$Main$Arguments* $tmp365 = (org$frostlang$frostc$Main$Arguments*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Main$Arguments$class);
org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT($tmp365, param1);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
org$frostlang$frostc$Main$Arguments* $tmp366 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
*(&local0) = $tmp365;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:162
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp367 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp367);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
frost$collections$Array* $tmp368 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
*(&local1) = $tmp367;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:163
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp369 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp369);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$collections$Array* $tmp370 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local2) = $tmp369;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:164
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File* $tmp371 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
*(&local3) = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:165
frost$core$Int $tmp372 = (frost$core$Int) {3u};
*(&local4) = $tmp372;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:166
frost$core$Int $tmp373 = (frost$core$Int) {3u};
*(&local5) = $tmp373;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:167
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { .nonnull = false });
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:168
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp374 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
*(&local7) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:169
frost$core$Bit $tmp375 = (frost$core$Bit) {true};
*(&local8) = $tmp375;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:170
goto block1;
block1:;
org$frostlang$frostc$Main$Arguments* $tmp376 = *(&local0);
$fn378 $tmp377 = ($fn378) $tmp376->$class->vtable[2];
frost$core$Bit $tmp379 = $tmp377($tmp376);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:170:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp380 = $tmp379.value;
bool $tmp381 = !$tmp380;
frost$core$Bit $tmp382 = (frost$core$Bit) {$tmp381};
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:171
org$frostlang$frostc$Main$Arguments* $tmp384 = *(&local0);
$fn386 $tmp385 = ($fn386) $tmp384->$class->vtable[3];
frost$core$String* $tmp387 = $tmp385($tmp384);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$String* $tmp388 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
*(&local9) = $tmp387;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:172
frost$core$String* $tmp389 = *(&local9);
frost$core$Bit $tmp390 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp389, &$s391);
bool $tmp392 = $tmp390.value;
if ($tmp392) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:174
*(&local10) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:175
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp393 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp393, &$s394);
*(&local11) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$io$File* $tmp395 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local11) = $tmp393;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:176
frost$io$InputStream* $tmp396 = frost$io$Console$inputStream$R$frost$io$InputStream();
frost$io$File* $tmp397 = *(&local11);
frost$core$Maybe* $tmp398 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp397);
frost$core$Int* $tmp399 = &$tmp398->$rawValue;
frost$core$Int $tmp400 = *$tmp399;
int64_t $tmp401 = $tmp400.value;
bool $tmp402 = $tmp401 == 0u;
if ($tmp402) goto block10; else goto block11;
block11:;
frost$core$Error** $tmp403 = (frost$core$Error**) ($tmp398->$data + 0);
frost$core$Error* $tmp404 = *$tmp403;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local10) = $tmp404;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$io$File* $tmp405 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local11) = ((frost$io$File*) NULL);
goto block8;
block10:;
frost$core$Object** $tmp406 = (frost$core$Object**) ($tmp398->$data + 0);
frost$core$Object* $tmp407 = *$tmp406;
$fn409 $tmp408 = ($fn409) $tmp396->$class->vtable[17];
frost$core$Maybe* $tmp410 = $tmp408($tmp396, ((frost$io$OutputStream*) $tmp407));
frost$core$Int* $tmp411 = &$tmp410->$rawValue;
frost$core$Int $tmp412 = *$tmp411;
int64_t $tmp413 = $tmp412.value;
bool $tmp414 = $tmp413 == 0u;
if ($tmp414) goto block12; else goto block13;
block13:;
frost$core$Error** $tmp415 = (frost$core$Error**) ($tmp410->$data + 0);
frost$core$Error* $tmp416 = *$tmp415;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
*(&local10) = $tmp416;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$io$File* $tmp417 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
*(&local11) = ((frost$io$File*) NULL);
goto block8;
block12:;
frost$core$Object** $tmp418 = (frost$core$Object**) ($tmp410->$data + 0);
frost$core$Object* $tmp419 = *$tmp418;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:177
frost$collections$Array* $tmp420 = *(&local1);
frost$io$File* $tmp421 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp420, ((frost$core$Object*) $tmp421));
frost$io$File* $tmp422 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
*(&local11) = ((frost$io$File*) NULL);
frost$core$Error* $tmp423 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
*(&local10) = ((frost$core$Error*) NULL);
goto block5;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:180
frost$core$Error* $tmp424 = *(&local10);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:180:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn426 $tmp425 = ($fn426) ((frost$core$Object*) $tmp424)->$class->vtable[0];
frost$core$String* $tmp427 = $tmp425(((frost$core$Object*) $tmp424));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp427);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:181
frost$core$Int $tmp428 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp428);
frost$core$Int $tmp429 = (frost$core$Int) {181u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s430, $tmp429, &$s431);
abort(); // unreachable
block7:;
frost$core$Bit $tmp432 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp389, &$s433);
bool $tmp434 = $tmp432.value;
if ($tmp434) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:185
frost$io$File* $tmp435 = *(&local3);
frost$core$Bit $tmp436 = (frost$core$Bit) {$tmp435 != NULL};
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:186
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:186:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s438);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s439);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:187
frost$core$Int $tmp440 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp440);
frost$core$Int $tmp441 = (frost$core$Int) {187u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s442, $tmp441, &$s443);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:189
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp444 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp445 = *(&local0);
$fn447 $tmp446 = ($fn447) $tmp445->$class->vtable[4];
frost$core$String* $tmp448 = $tmp446($tmp445, &$s449);
frost$io$File$init$frost$core$String($tmp444, $tmp448);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$io$File* $tmp450 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local3) = $tmp444;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:190
*(&local12) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:191
frost$io$File* $tmp451 = *(&local3);
// begin inline call to function frost.io.File.get_parent():frost.io.File? from Main.frost:191:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp452 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp451, &$s453);
frost$core$String** $tmp454 = &$tmp452->path;
frost$core$String* $tmp455 = *$tmp454;
frost$core$String* $tmp456 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp455);
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
frost$core$String* $tmp457 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local14) = $tmp456;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp458 = *(&local14);
frost$core$Bit $tmp459 = (frost$core$Bit) {$tmp458 == NULL};
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp461 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local14) = ((frost$core$String*) NULL);
*(&local13) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block24;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp462 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp463 = *(&local14);
frost$io$File$init$frost$core$String($tmp462, $tmp463);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$String* $tmp464 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local14) = ((frost$core$String*) NULL);
*(&local13) = $tmp462;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
goto block24;
block24:;
frost$io$File* $tmp465 = *(&local13);
frost$core$Bit $tmp466 = (frost$core$Bit) {$tmp465 != NULL};
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block27; else goto block28;
block28:;
frost$core$Int $tmp468 = (frost$core$Int) {191u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s469, $tmp468, &$s470);
abort(); // unreachable
block27:;
frost$core$Error* $tmp471 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp465);
if ($tmp471 == NULL) goto block29; else goto block30;
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$Bit $tmp472 = (frost$core$Bit) {$tmp471 != NULL};
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block31; else goto block32;
block32:;
frost$core$Int $tmp474 = (frost$core$Int) {191u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s475, $tmp474, &$s476);
abort(); // unreachable
block31:;
*(&local12) = $tmp471;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$io$File* $tmp477 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
*(&local13) = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:194
frost$core$Error* $tmp478 = *(&local12);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:194:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn480 $tmp479 = ($fn480) ((frost$core$Object*) $tmp478)->$class->vtable[0];
frost$core$String* $tmp481 = $tmp479(((frost$core$Object*) $tmp478));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp481);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:195
frost$core$Int $tmp482 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp482);
frost$core$Int $tmp483 = (frost$core$Int) {195u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s484, $tmp483, &$s485);
abort(); // unreachable
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$io$File* $tmp486 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
*(&local13) = ((frost$io$File*) NULL);
frost$core$Error* $tmp487 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
*(&local12) = ((frost$core$Error*) NULL);
goto block5;
block17:;
frost$core$Bit $tmp488 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp389, &$s489);
bool $tmp490 = $tmp488.value;
if ($tmp490) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:199
org$frostlang$frostc$Main$Arguments* $tmp491 = *(&local0);
$fn493 $tmp492 = ($fn493) $tmp491->$class->vtable[4];
frost$core$String* $tmp494 = $tmp492($tmp491, &$s495);
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$String* $tmp496 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
*(&local15) = $tmp494;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:200
frost$core$String* $tmp497 = *(&local15);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Main.frost:200:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp498 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp497);
*(&local17) = $tmp498;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
frost$core$Int64$nullable $tmp499 = *(&local17);
frost$core$Bit $tmp500 = (frost$core$Bit) {$tmp499.nonnull};
bool $tmp501 = $tmp500.value;
if ($tmp501) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
frost$core$Int64$nullable $tmp502 = *(&local17);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp503 = ((frost$core$Int64) $tmp502.value).value;
frost$core$Int $tmp504 = (frost$core$Int) {((int64_t) $tmp503)};
*(&local16) = ((frost$core$Int$nullable) { $tmp504, true });
goto block37;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local16) = ((frost$core$Int$nullable) { .nonnull = false });
goto block37;
block37:;
frost$core$Int$nullable $tmp505 = *(&local16);
*(&local18) = $tmp505;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:201
frost$core$Int$nullable $tmp506 = *(&local18);
frost$core$Bit $tmp507 = (frost$core$Bit) {!$tmp506.nonnull};
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block41; else goto block44;
block44:;
frost$core$Int$nullable $tmp509 = *(&local18);
frost$core$Int $tmp510 = (frost$core$Int) {3u};
int64_t $tmp511 = ((frost$core$Int) $tmp509.value).value;
int64_t $tmp512 = $tmp510.value;
bool $tmp513 = $tmp511 > $tmp512;
frost$core$Bit $tmp514 = (frost$core$Bit) {$tmp513};
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block41; else goto block43;
block43:;
frost$core$Int$nullable $tmp516 = *(&local18);
frost$core$Int $tmp517 = (frost$core$Int) {0u};
int64_t $tmp518 = ((frost$core$Int) $tmp516.value).value;
int64_t $tmp519 = $tmp517.value;
bool $tmp520 = $tmp518 < $tmp519;
frost$core$Bit $tmp521 = (frost$core$Bit) {$tmp520};
bool $tmp522 = $tmp521.value;
if ($tmp522) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:202
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:202:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s523);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s524);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:203
frost$core$Int $tmp525 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp525);
frost$core$Int $tmp526 = (frost$core$Int) {203u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s527, $tmp526, &$s528);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:205
frost$core$Int$nullable $tmp529 = *(&local18);
*(&local4) = ((frost$core$Int) $tmp529.value);
frost$core$String* $tmp530 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local15) = ((frost$core$String*) NULL);
goto block5;
block36:;
frost$core$Bit $tmp531 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp389, &$s532);
bool $tmp533 = $tmp531.value;
if ($tmp533) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:208
org$frostlang$frostc$Main$Arguments* $tmp534 = *(&local0);
$fn536 $tmp535 = ($fn536) $tmp534->$class->vtable[4];
frost$core$String* $tmp537 = $tmp535($tmp534, &$s538);
*(&local19) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$core$String* $tmp539 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
*(&local19) = $tmp537;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:209
frost$core$String* $tmp540 = *(&local19);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Main.frost:209:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp541 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp540);
*(&local21) = $tmp541;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
frost$core$Int64$nullable $tmp542 = *(&local21);
frost$core$Bit $tmp543 = (frost$core$Bit) {$tmp542.nonnull};
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
frost$core$Int64$nullable $tmp545 = *(&local21);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp546 = ((frost$core$Int64) $tmp545.value).value;
frost$core$Int $tmp547 = (frost$core$Int) {((int64_t) $tmp546)};
*(&local20) = ((frost$core$Int$nullable) { $tmp547, true });
goto block49;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local20) = ((frost$core$Int$nullable) { .nonnull = false });
goto block49;
block49:;
frost$core$Int$nullable $tmp548 = *(&local20);
*(&local22) = $tmp548;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:210
frost$core$Int$nullable $tmp549 = *(&local22);
frost$core$Bit $tmp550 = (frost$core$Bit) {!$tmp549.nonnull};
bool $tmp551 = $tmp550.value;
if ($tmp551) goto block53; else goto block56;
block56:;
frost$core$Int$nullable $tmp552 = *(&local22);
frost$core$Int $tmp553 = (frost$core$Int) {3u};
int64_t $tmp554 = ((frost$core$Int) $tmp552.value).value;
int64_t $tmp555 = $tmp553.value;
bool $tmp556 = $tmp554 > $tmp555;
frost$core$Bit $tmp557 = (frost$core$Bit) {$tmp556};
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block53; else goto block55;
block55:;
frost$core$Int$nullable $tmp559 = *(&local22);
frost$core$Int $tmp560 = (frost$core$Int) {0u};
int64_t $tmp561 = ((frost$core$Int) $tmp559.value).value;
int64_t $tmp562 = $tmp560.value;
bool $tmp563 = $tmp561 < $tmp562;
frost$core$Bit $tmp564 = (frost$core$Bit) {$tmp563};
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:211
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:211:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s566);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s567);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:212
frost$core$Int $tmp568 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp568);
frost$core$Int $tmp569 = (frost$core$Int) {212u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s570, $tmp569, &$s571);
abort(); // unreachable
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:214
frost$core$Int$nullable $tmp572 = *(&local22);
*(&local5) = ((frost$core$Int) $tmp572.value);
frost$core$String* $tmp573 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
*(&local19) = ((frost$core$String*) NULL);
goto block5;
block48:;
frost$core$Bit $tmp574 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp389, &$s575);
bool $tmp576 = $tmp574.value;
if ($tmp576) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:217
org$frostlang$frostc$Main$Format$nullable $tmp577 = *(&local6);
frost$core$Bit $tmp578 = (frost$core$Bit) {$tmp577.nonnull};
bool $tmp579 = $tmp578.value;
if ($tmp579) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:218
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:218:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s580);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s581);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:219
frost$core$Int $tmp582 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp582);
frost$core$Int $tmp583 = (frost$core$Int) {219u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s584, $tmp583, &$s585);
abort(); // unreachable
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:221
org$frostlang$frostc$Main$Arguments* $tmp586 = *(&local0);
$fn588 $tmp587 = ($fn588) $tmp586->$class->vtable[4];
frost$core$String* $tmp589 = $tmp587($tmp586, &$s590);
*(&local23) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
frost$core$String* $tmp591 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local23) = $tmp589;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:222
frost$core$String* $tmp592 = *(&local23);
frost$core$Bit $tmp593 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp592, &$s594);
bool $tmp595 = $tmp593.value;
if ($tmp595) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:223
frost$core$Int $tmp596 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:223:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp597 = &(&local25)->$rawValue;
*$tmp597 = $tmp596;
org$frostlang$frostc$Main$Format $tmp598 = *(&local25);
*(&local24) = $tmp598;
org$frostlang$frostc$Main$Format $tmp599 = *(&local24);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp599, true });
goto block65;
block67:;
frost$core$Bit $tmp600 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp592, &$s601);
bool $tmp602 = $tmp600.value;
if ($tmp602) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:224
frost$core$Int $tmp603 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:224:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp604 = &(&local27)->$rawValue;
*$tmp604 = $tmp603;
org$frostlang$frostc$Main$Format $tmp605 = *(&local27);
*(&local26) = $tmp605;
org$frostlang$frostc$Main$Format $tmp606 = *(&local26);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp606, true });
goto block65;
block70:;
frost$core$Bit $tmp607 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp592, &$s608);
bool $tmp609 = $tmp607.value;
if ($tmp609) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:225
frost$core$Int $tmp610 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:225:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp611 = &(&local29)->$rawValue;
*$tmp611 = $tmp610;
org$frostlang$frostc$Main$Format $tmp612 = *(&local29);
*(&local28) = $tmp612;
org$frostlang$frostc$Main$Format $tmp613 = *(&local28);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp613, true });
goto block65;
block73:;
frost$core$Bit $tmp614 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp592, &$s615);
bool $tmp616 = $tmp614.value;
if ($tmp616) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:226
frost$core$Int $tmp617 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:226:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp618 = &(&local31)->$rawValue;
*$tmp618 = $tmp617;
org$frostlang$frostc$Main$Format $tmp619 = *(&local31);
*(&local30) = $tmp619;
org$frostlang$frostc$Main$Format $tmp620 = *(&local30);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp620, true });
goto block65;
block76:;
frost$core$Bit $tmp621 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp592, &$s622);
bool $tmp623 = $tmp621.value;
if ($tmp623) goto block78; else goto block79;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:227
frost$core$Int $tmp624 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:227:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp625 = &(&local33)->$rawValue;
*$tmp625 = $tmp624;
org$frostlang$frostc$Main$Format $tmp626 = *(&local33);
*(&local32) = $tmp626;
org$frostlang$frostc$Main$Format $tmp627 = *(&local32);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp627, true });
goto block65;
block79:;
frost$core$Bit $tmp628 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp592, &$s629);
bool $tmp630 = $tmp628.value;
if ($tmp630) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:228
frost$core$Int $tmp631 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:228:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp632 = &(&local35)->$rawValue;
*$tmp632 = $tmp631;
org$frostlang$frostc$Main$Format $tmp633 = *(&local35);
*(&local34) = $tmp633;
org$frostlang$frostc$Main$Format $tmp634 = *(&local34);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp634, true });
goto block65;
block82:;
frost$core$Bit $tmp635 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp592, &$s636);
bool $tmp637 = $tmp635.value;
if ($tmp637) goto block84; else goto block85;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:229
frost$core$Int $tmp638 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:229:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp639 = &(&local37)->$rawValue;
*$tmp639 = $tmp638;
org$frostlang$frostc$Main$Format $tmp640 = *(&local37);
*(&local36) = $tmp640;
org$frostlang$frostc$Main$Format $tmp641 = *(&local36);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp641, true });
goto block65;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:231
frost$core$String* $tmp642 = *(&local23);
frost$core$String* $tmp643 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s644, $tmp642);
frost$core$String* $tmp645 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp643, &$s646);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:231:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp645);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s647);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:232
frost$core$Int $tmp648 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp648);
frost$core$Int $tmp649 = (frost$core$Int) {232u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s650, $tmp649, &$s651);
abort(); // unreachable
block65:;
frost$core$String* $tmp652 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local23) = ((frost$core$String*) NULL);
goto block5;
block60:;
frost$core$Bit $tmp653 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp389, &$s654);
bool $tmp655 = $tmp653.value;
if ($tmp655) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:237
frost$collections$Array* $tmp656 = *(&local2);
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp657 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp658 = *(&local0);
$fn660 $tmp659 = ($fn660) $tmp658->$class->vtable[4];
frost$core$String* $tmp661 = $tmp659($tmp658, &$s662);
frost$io$File$init$frost$core$String($tmp657, $tmp661);
frost$collections$Array$add$frost$collections$Array$T($tmp656, ((frost$core$Object*) $tmp657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
goto block5;
block90:;
frost$core$Bit $tmp663 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp389, &$s664);
bool $tmp665 = $tmp663.value;
if ($tmp665) goto block91; else goto block92;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:240
org$frostlang$frostc$Main$Arguments* $tmp666 = *(&local0);
$fn668 $tmp667 = ($fn668) $tmp666->$class->vtable[4];
frost$core$String* $tmp669 = $tmp667($tmp666, &$s670);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
frost$core$String* $tmp671 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
*(&local7) = $tmp669;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
goto block5;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:243
frost$core$String* $tmp672 = *(&local9);
frost$core$Bit $tmp673 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp672, &$s674);
bool $tmp675 = $tmp673.value;
if ($tmp675) goto block93; else goto block95;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:244
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp676 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp677 = *(&local9);
frost$io$File$init$frost$core$String($tmp676, $tmp677);
*(&local38) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
frost$io$File* $tmp678 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
*(&local38) = $tmp676;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:245
frost$collections$Array* $tmp679 = *(&local1);
frost$io$File* $tmp680 = *(&local38);
frost$collections$Array$add$frost$collections$Array$T($tmp679, ((frost$core$Object*) $tmp680));
frost$io$File* $tmp681 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
*(&local38) = ((frost$io$File*) NULL);
goto block5;
block95:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:248
frost$core$String* $tmp682 = *(&local9);
frost$core$String* $tmp683 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s684, $tmp682);
frost$core$String* $tmp685 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp683, &$s686);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:248:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp685);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s687);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:249
frost$core$Int $tmp688 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp688);
frost$core$Int $tmp689 = (frost$core$Int) {249u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s690, $tmp689, &$s691);
abort(); // unreachable
block5:;
frost$core$String* $tmp692 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
*(&local9) = ((frost$core$String*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:254
org$frostlang$frostc$Main$Format$nullable $tmp693 = *(&local6);
frost$core$Bit $tmp694 = (frost$core$Bit) {!$tmp693.nonnull};
bool $tmp695 = $tmp694.value;
if ($tmp695) goto block98; else goto block100;
block100:;
org$frostlang$frostc$Main$Format$nullable $tmp696 = *(&local6);
frost$core$Equatable* $tmp697;
if ($tmp696.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp698;
    $tmp698 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp698->value = ((org$frostlang$frostc$Main$Format) $tmp696.value);
    $tmp697 = ((frost$core$Equatable*) $tmp698);
}
else {
    $tmp697 = NULL;
}
frost$core$Int $tmp699 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:254:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp700 = &(&local40)->$rawValue;
*$tmp700 = $tmp699;
org$frostlang$frostc$Main$Format $tmp701 = *(&local40);
*(&local39) = $tmp701;
org$frostlang$frostc$Main$Format $tmp702 = *(&local39);
org$frostlang$frostc$Main$Format$wrapper* $tmp703;
$tmp703 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp703->value = $tmp702;
ITable* $tmp704 = $tmp697->$class->itable;
while ($tmp704->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp704 = $tmp704->next;
}
$fn706 $tmp705 = $tmp704->methods[1];
frost$core$Bit $tmp707 = $tmp705($tmp697, ((frost$core$Equatable*) $tmp703));
bool $tmp708 = $tmp707.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp703)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
if ($tmp708) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:255
frost$collections$Array* $tmp709 = *(&local2);
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp710 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp711 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp710, $tmp711);
frost$io$File* $tmp712 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp710, &$s713);
frost$collections$Array$add$frost$collections$Array$T($tmp709, ((frost$core$Object*) $tmp712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
goto block99;
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:257
frost$collections$Array* $tmp714 = *(&local2);
frost$io$File** $tmp715 = &param0->frostHome;
frost$io$File* $tmp716 = *$tmp715;
frost$collections$Array$add$frost$collections$Array$T($tmp714, ((frost$core$Object*) $tmp716));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:258
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp717 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp718 = org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp717, $tmp718);
*(&local41) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
frost$io$File* $tmp719 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
*(&local41) = $tmp717;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:259
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp720 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp720, &$s721);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$io$File** $tmp722 = &param0->clang;
frost$io$File* $tmp723 = *$tmp722;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
frost$io$File** $tmp724 = &param0->clang;
*$tmp724 = $tmp720;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:260
frost$collections$Array* $tmp725 = *(&local1);
ITable* $tmp726 = ((frost$collections$CollectionView*) $tmp725)->$class->itable;
while ($tmp726->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp726 = $tmp726->next;
}
$fn728 $tmp727 = $tmp726->methods[0];
frost$core$Int $tmp729 = $tmp727(((frost$collections$CollectionView*) $tmp725));
frost$core$Int $tmp730 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:260:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp731 = $tmp729.value;
int64_t $tmp732 = $tmp730.value;
bool $tmp733 = $tmp731 == $tmp732;
frost$core$Bit $tmp734 = (frost$core$Bit) {$tmp733};
bool $tmp735 = $tmp734.value;
if ($tmp735) goto block102; else goto block103;
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:261
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:261:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s736);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s737);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:262
frost$core$Int $tmp738 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp738);
frost$core$Int $tmp739 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s740, $tmp739, &$s741);
abort(); // unreachable
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:264
org$frostlang$frostc$Main$Format$nullable $tmp742 = *(&local6);
frost$core$Bit $tmp743 = (frost$core$Bit) {!$tmp742.nonnull};
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:265
frost$core$Int $tmp745 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:265:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp746 = &(&local43)->$rawValue;
*$tmp746 = $tmp745;
org$frostlang$frostc$Main$Format $tmp747 = *(&local43);
*(&local42) = $tmp747;
org$frostlang$frostc$Main$Format $tmp748 = *(&local42);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp748, true });
goto block108;
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:267
frost$io$File* $tmp749 = *(&local3);
frost$core$Bit $tmp750 = (frost$core$Bit) {$tmp749 == NULL};
bool $tmp751 = $tmp750.value;
if ($tmp751) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:268
frost$collections$Array* $tmp752 = *(&local1);
ITable* $tmp753 = ((frost$collections$CollectionView*) $tmp752)->$class->itable;
while ($tmp753->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp753 = $tmp753->next;
}
$fn755 $tmp754 = $tmp753->methods[0];
frost$core$Int $tmp756 = $tmp754(((frost$collections$CollectionView*) $tmp752));
frost$core$Int $tmp757 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:268:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp758 = $tmp756.value;
int64_t $tmp759 = $tmp757.value;
bool $tmp760 = $tmp758 == $tmp759;
frost$core$Bit $tmp761 = (frost$core$Bit) {$tmp760};
bool $tmp762 = $tmp761.value;
if ($tmp762) goto block112; else goto block114;
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:269
*(&local44) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:270
org$frostlang$frostc$Main$Format$nullable $tmp763 = *(&local6);
frost$core$Int $tmp764 = ((org$frostlang$frostc$Main$Format) $tmp763.value).$rawValue;
frost$core$Int $tmp765 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:271:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp766 = $tmp764.value;
int64_t $tmp767 = $tmp765.value;
bool $tmp768 = $tmp766 == $tmp767;
frost$core$Bit $tmp769 = (frost$core$Bit) {$tmp768};
bool $tmp770 = $tmp769.value;
if ($tmp770) goto block117; else goto block118;
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:271
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s771));
frost$core$String* $tmp772 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
*(&local44) = &$s773;
goto block116;
block118:;
frost$core$Int $tmp774 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:272:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp775 = $tmp764.value;
int64_t $tmp776 = $tmp774.value;
bool $tmp777 = $tmp775 == $tmp776;
frost$core$Bit $tmp778 = (frost$core$Bit) {$tmp777};
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block120; else goto block121;
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:272
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s780));
frost$core$String* $tmp781 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
*(&local44) = &$s782;
goto block116;
block121:;
frost$core$Int $tmp783 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:273:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp784 = $tmp764.value;
int64_t $tmp785 = $tmp783.value;
bool $tmp786 = $tmp784 == $tmp785;
frost$core$Bit $tmp787 = (frost$core$Bit) {$tmp786};
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block123; else goto block124;
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:273
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s789));
frost$core$String* $tmp790 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
*(&local44) = &$s791;
goto block116;
block124:;
frost$core$Int $tmp792 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:274:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp793 = $tmp764.value;
int64_t $tmp794 = $tmp792.value;
bool $tmp795 = $tmp793 == $tmp794;
frost$core$Bit $tmp796 = (frost$core$Bit) {$tmp795};
bool $tmp797 = $tmp796.value;
if ($tmp797) goto block126; else goto block127;
block126:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:274
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s798));
frost$core$String* $tmp799 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
*(&local44) = &$s800;
goto block116;
block127:;
frost$core$Int $tmp801 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:275:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp802 = $tmp764.value;
int64_t $tmp803 = $tmp801.value;
bool $tmp804 = $tmp802 == $tmp803;
frost$core$Bit $tmp805 = (frost$core$Bit) {$tmp804};
bool $tmp806 = $tmp805.value;
if ($tmp806) goto block129; else goto block130;
block129:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:275
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s807));
frost$core$String* $tmp808 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
*(&local44) = &$s809;
goto block116;
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:277
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:277:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s810);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s811);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:279
frost$core$Int $tmp812 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp812);
frost$core$Int $tmp813 = (frost$core$Int) {279u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s814, $tmp813, &$s815);
abort(); // unreachable
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:282
frost$collections$Array* $tmp816 = *(&local1);
frost$core$Int $tmp817 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Main.frost:282:35
frost$core$Int $tmp818 = (frost$core$Int) {0u};
int64_t $tmp819 = $tmp817.value;
int64_t $tmp820 = $tmp818.value;
bool $tmp821 = $tmp819 >= $tmp820;
frost$core$Bit $tmp822 = (frost$core$Bit) {$tmp821};
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block137; else goto block136;
block137:;
ITable* $tmp824 = ((frost$collections$CollectionView*) $tmp816)->$class->itable;
while ($tmp824->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp824 = $tmp824->next;
}
$fn826 $tmp825 = $tmp824->methods[0];
frost$core$Int $tmp827 = $tmp825(((frost$collections$CollectionView*) $tmp816));
int64_t $tmp828 = $tmp817.value;
int64_t $tmp829 = $tmp827.value;
bool $tmp830 = $tmp828 < $tmp829;
frost$core$Bit $tmp831 = (frost$core$Bit) {$tmp830};
bool $tmp832 = $tmp831.value;
if ($tmp832) goto block135; else goto block136;
block136:;
frost$core$Int $tmp833 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s834, $tmp833, &$s835);
abort(); // unreachable
block135:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp836 = &$tmp816->data;
frost$core$Object** $tmp837 = *$tmp836;
frost$core$Int64 $tmp838 = frost$core$Int64$init$frost$core$Int($tmp817);
int64_t $tmp839 = $tmp838.value;
frost$core$Object* $tmp840 = $tmp837[$tmp839];
frost$core$Frost$ref$frost$core$Object$Q($tmp840);
frost$core$String* $tmp841 = *(&local44);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:282:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp842 = frost$io$File$resolve$frost$core$String$R$frost$io$File(((frost$io$File*) $tmp840), &$s843);
frost$core$String** $tmp844 = &$tmp842->path;
frost$core$String* $tmp845 = *$tmp844;
frost$core$String* $tmp846 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp845);
*(&local46) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
frost$core$String* $tmp847 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local46) = $tmp846;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp848 = *(&local46);
frost$core$Bit $tmp849 = (frost$core$Bit) {$tmp848 == NULL};
bool $tmp850 = $tmp849.value;
if ($tmp850) goto block140; else goto block141;
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp851 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
*(&local46) = ((frost$core$String*) NULL);
*(&local45) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block139;
block141:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp852 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp853 = *(&local46);
frost$io$File$init$frost$core$String($tmp852, $tmp853);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$core$String* $tmp854 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
*(&local46) = ((frost$core$String*) NULL);
*(&local45) = $tmp852;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
goto block139;
block139:;
frost$io$File* $tmp855 = *(&local45);
frost$core$Bit $tmp856 = (frost$core$Bit) {$tmp855 != NULL};
bool $tmp857 = $tmp856.value;
if ($tmp857) goto block142; else goto block143;
block143:;
frost$core$Int $tmp858 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s859, $tmp858, &$s860);
abort(); // unreachable
block142:;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp861 = frost$io$File$get_name$R$frost$core$String(((frost$io$File*) $tmp840));
*(&local48) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
frost$core$String* $tmp862 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local48) = $tmp861;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp863 = *(&local48);
frost$core$String$Index$nullable $tmp864 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp863, &$s865);
*(&local49) = $tmp864;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp866 = *(&local49);
frost$core$Bit $tmp867 = (frost$core$Bit) {!$tmp866.nonnull};
bool $tmp868 = $tmp867.value;
if ($tmp868) goto block145; else goto block146;
block145:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp869 = *(&local48);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
frost$core$String* $tmp870 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local48) = ((frost$core$String*) NULL);
*(&local47) = $tmp869;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
goto block144;
block146:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp871 = *(&local48);
frost$core$String$Index$nullable $tmp872 = *(&local49);
frost$core$Bit $tmp873 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp874 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp872, $tmp873);
frost$core$String* $tmp875 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp871, $tmp874);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
frost$core$String* $tmp876 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
*(&local48) = ((frost$core$String*) NULL);
*(&local47) = $tmp875;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
goto block144;
block144:;
frost$core$String* $tmp877 = *(&local47);
frost$core$String* $tmp878 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp877, $tmp841);
frost$io$File* $tmp879 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp855, $tmp878);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
frost$core$String* $tmp880 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
frost$io$File* $tmp881 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
*(&local45) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
frost$io$File* $tmp882 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
*(&local3) = $tmp879;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
frost$core$Frost$unref$frost$core$Object$Q($tmp840);
frost$core$String* $tmp883 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
*(&local44) = ((frost$core$String*) NULL);
goto block111;
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:284
org$frostlang$frostc$Main$Format$nullable $tmp884 = *(&local6);
frost$core$Equatable* $tmp885;
if ($tmp884.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp886;
    $tmp886 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp886->value = ((org$frostlang$frostc$Main$Format) $tmp884.value);
    $tmp885 = ((frost$core$Equatable*) $tmp886);
}
else {
    $tmp885 = NULL;
}
frost$core$Int $tmp887 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:284:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp888 = &(&local51)->$rawValue;
*$tmp888 = $tmp887;
org$frostlang$frostc$Main$Format $tmp889 = *(&local51);
*(&local50) = $tmp889;
org$frostlang$frostc$Main$Format $tmp890 = *(&local50);
org$frostlang$frostc$Main$Format$wrapper* $tmp891;
$tmp891 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp891->value = $tmp890;
ITable* $tmp892 = $tmp885->$class->itable;
while ($tmp892->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp892 = $tmp892->next;
}
$fn894 $tmp893 = $tmp892->methods[0];
frost$core$Bit $tmp895 = $tmp893($tmp885, ((frost$core$Equatable*) $tmp891));
bool $tmp896 = $tmp895.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp891)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
if ($tmp896) goto block147; else goto block149;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:285
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:285:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s897);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s898);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:286
frost$core$Int $tmp899 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp899);
frost$core$Int $tmp900 = (frost$core$Int) {286u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s901, $tmp900, &$s902);
abort(); // unreachable
block149:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:289
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:289:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s903);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s904);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:291
frost$core$Int $tmp905 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp905);
frost$core$Int $tmp906 = (frost$core$Int) {291u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s907, $tmp906, &$s908);
abort(); // unreachable
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:294
frost$core$Int $tmp909 = (frost$core$Int) {0u};
*(&local52) = $tmp909;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:295
frost$core$Int $tmp910 = (frost$core$Int) {0u};
*(&local53) = $tmp910;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:297
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:298
org$frostlang$frostc$Main$Format$nullable $tmp911 = *(&local6);
frost$core$Int $tmp912 = ((org$frostlang$frostc$Main$Format) $tmp911.value).$rawValue;
frost$core$Int $tmp913 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:299:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp914 = $tmp912.value;
int64_t $tmp915 = $tmp913.value;
bool $tmp916 = $tmp914 == $tmp915;
frost$core$Bit $tmp917 = (frost$core$Bit) {$tmp916};
bool $tmp918 = $tmp917.value;
if ($tmp918) goto block156; else goto block157;
block157:;
frost$core$Int $tmp919 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:299:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp920 = $tmp912.value;
int64_t $tmp921 = $tmp919.value;
bool $tmp922 = $tmp920 == $tmp921;
frost$core$Bit $tmp923 = (frost$core$Bit) {$tmp922};
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block156; else goto block159;
block159:;
frost$core$Int $tmp925 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:299:60
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp926 = $tmp912.value;
int64_t $tmp927 = $tmp925.value;
bool $tmp928 = $tmp926 == $tmp927;
frost$core$Bit $tmp929 = (frost$core$Bit) {$tmp928};
bool $tmp930 = $tmp929.value;
if ($tmp930) goto block156; else goto block161;
block156:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:300
*(&local55) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:301
FROST_ASSERT(272 == sizeof(org$frostlang$frostc$LLVMCodeGenerator));
org$frostlang$frostc$LLVMCodeGenerator* $tmp931 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(272, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
frost$core$String* $tmp932 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
frost$io$File* $tmp933 = *(&local3);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:302:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp934 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp933, &$s935);
frost$core$String** $tmp936 = &$tmp934->path;
frost$core$String* $tmp937 = *$tmp936;
frost$core$String* $tmp938 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp937);
*(&local57) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
frost$core$String* $tmp939 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
*(&local57) = $tmp938;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp940 = *(&local57);
frost$core$Bit $tmp941 = (frost$core$Bit) {$tmp940 == NULL};
bool $tmp942 = $tmp941.value;
if ($tmp942) goto block167; else goto block168;
block167:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp943 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
*(&local57) = ((frost$core$String*) NULL);
*(&local56) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block166;
block168:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp944 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp945 = *(&local57);
frost$io$File$init$frost$core$String($tmp944, $tmp945);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
frost$core$String* $tmp946 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
*(&local57) = ((frost$core$String*) NULL);
*(&local56) = $tmp944;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
goto block166;
block166:;
frost$io$File* $tmp947 = *(&local56);
frost$core$Bit $tmp948 = (frost$core$Bit) {$tmp947 != NULL};
bool $tmp949 = $tmp948.value;
if ($tmp949) goto block169; else goto block170;
block170:;
frost$core$Int $tmp950 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s951, $tmp950, &$s952);
abort(); // unreachable
block169:;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp953 = frost$io$File$get_name$R$frost$core$String($tmp933);
*(&local59) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
frost$core$String* $tmp954 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
*(&local59) = $tmp953;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp955 = *(&local59);
frost$core$String$Index$nullable $tmp956 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp955, &$s957);
*(&local60) = $tmp956;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp958 = *(&local60);
frost$core$Bit $tmp959 = (frost$core$Bit) {!$tmp958.nonnull};
bool $tmp960 = $tmp959.value;
if ($tmp960) goto block172; else goto block173;
block172:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp961 = *(&local59);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
frost$core$String* $tmp962 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
*(&local59) = ((frost$core$String*) NULL);
*(&local58) = $tmp961;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
goto block171;
block173:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp963 = *(&local59);
frost$core$String$Index$nullable $tmp964 = *(&local60);
frost$core$Bit $tmp965 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp966 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp964, $tmp965);
frost$core$String* $tmp967 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp963, $tmp966);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
frost$core$String* $tmp968 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
*(&local59) = ((frost$core$String*) NULL);
*(&local58) = $tmp967;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
goto block171;
block171:;
frost$core$String* $tmp969 = *(&local58);
frost$core$String* $tmp970 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp969, &$s971);
frost$io$File* $tmp972 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp947, $tmp970);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
frost$core$String* $tmp973 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
*(&local58) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
frost$io$File* $tmp974 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
*(&local56) = ((frost$io$File*) NULL);
frost$core$Maybe* $tmp975 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp972);
frost$core$Int* $tmp976 = &$tmp975->$rawValue;
frost$core$Int $tmp977 = *$tmp976;
int64_t $tmp978 = $tmp977.value;
bool $tmp979 = $tmp978 == 0u;
if ($tmp979) goto block174; else goto block175;
block175:;
frost$core$Error** $tmp980 = (frost$core$Error**) ($tmp975->$data + 0);
frost$core$Error* $tmp981 = *$tmp980;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
*(&local55) = $tmp981;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:305
frost$core$Error* $tmp982 = *(&local55);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:305:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn984 $tmp983 = ($fn984) ((frost$core$Object*) $tmp982)->$class->vtable[0];
frost$core$String* $tmp985 = $tmp983(((frost$core$Object*) $tmp982));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp985);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:306
frost$core$Int $tmp986 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp986);
frost$core$Int $tmp987 = (frost$core$Int) {306u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s988, $tmp987, &$s989);
abort(); // unreachable
block174:;
frost$core$Object** $tmp990 = (frost$core$Object**) ($tmp975->$data + 0);
frost$core$Object* $tmp991 = *$tmp990;
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp931, $tmp932, ((frost$io$OutputStream*) $tmp991));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp931)));
org$frostlang$frostc$CodeGenerator* $tmp992 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) $tmp931);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
frost$core$Error* $tmp993 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
*(&local55) = ((frost$core$Error*) NULL);
goto block155;
block161:;
frost$core$Int $tmp994 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:309:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp995 = $tmp912.value;
int64_t $tmp996 = $tmp994.value;
bool $tmp997 = $tmp995 == $tmp996;
frost$core$Bit $tmp998 = (frost$core$Bit) {$tmp997};
bool $tmp999 = $tmp998.value;
if ($tmp999) goto block178; else goto block179;
block178:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:310
FROST_ASSERT(152 == sizeof(org$frostlang$frostc$HCodeGenerator));
org$frostlang$frostc$HCodeGenerator* $tmp1000 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
frost$io$File* $tmp1001 = *(&local3);
org$frostlang$frostc$HCodeGenerator$init$frost$io$File($tmp1000, $tmp1001);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp1000)));
org$frostlang$frostc$CodeGenerator* $tmp1002 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) $tmp1000);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
goto block155;
block179:;
frost$core$Int $tmp1003 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:312:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1004 = $tmp912.value;
int64_t $tmp1005 = $tmp1003.value;
bool $tmp1006 = $tmp1004 == $tmp1005;
frost$core$Bit $tmp1007 = (frost$core$Bit) {$tmp1006};
bool $tmp1008 = $tmp1007.value;
if ($tmp1008) goto block181; else goto block182;
block181:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:313
FROST_ASSERT(256 == sizeof(org$frostlang$frostc$CCodeGenerator));
org$frostlang$frostc$CCodeGenerator* $tmp1009 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(256, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
frost$io$File* $tmp1010 = *(&local3);
org$frostlang$frostc$CCodeGenerator$init$frost$io$File($tmp1009, $tmp1010);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp1009)));
org$frostlang$frostc$CodeGenerator* $tmp1011 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) $tmp1009);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
goto block155;
block182:;
frost$core$Int $tmp1012 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:315:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1013 = $tmp912.value;
int64_t $tmp1014 = $tmp1012.value;
bool $tmp1015 = $tmp1013 == $tmp1014;
frost$core$Bit $tmp1016 = (frost$core$Bit) {$tmp1015};
bool $tmp1017 = $tmp1016.value;
if ($tmp1017) goto block184; else goto block185;
block184:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:316
*(&local61) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:317
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$StubCodeGenerator));
org$frostlang$frostc$StubCodeGenerator* $tmp1018 = (org$frostlang$frostc$StubCodeGenerator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$class);
frost$io$File* $tmp1019 = *(&local3);
frost$core$Maybe* $tmp1020 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp1019);
frost$core$Int* $tmp1021 = &$tmp1020->$rawValue;
frost$core$Int $tmp1022 = *$tmp1021;
int64_t $tmp1023 = $tmp1022.value;
bool $tmp1024 = $tmp1023 == 0u;
if ($tmp1024) goto block189; else goto block190;
block190:;
frost$core$Error** $tmp1025 = (frost$core$Error**) ($tmp1020->$data + 0);
frost$core$Error* $tmp1026 = *$tmp1025;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
*(&local61) = $tmp1026;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:320
frost$core$Error* $tmp1027 = *(&local61);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:320:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn1029 $tmp1028 = ($fn1029) ((frost$core$Object*) $tmp1027)->$class->vtable[0];
frost$core$String* $tmp1030 = $tmp1028(((frost$core$Object*) $tmp1027));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp1030);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:321
frost$core$Int $tmp1031 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp1031);
frost$core$Int $tmp1032 = (frost$core$Int) {321u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1033, $tmp1032, &$s1034);
abort(); // unreachable
block189:;
frost$core$Object** $tmp1035 = (frost$core$Object**) ($tmp1020->$data + 0);
frost$core$Object* $tmp1036 = *$tmp1035;
org$frostlang$frostc$StubCodeGenerator$init$frost$io$OutputStream($tmp1018, ((frost$io$OutputStream*) $tmp1036));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp1018)));
org$frostlang$frostc$CodeGenerator* $tmp1037 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) $tmp1018);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
frost$core$Error* $tmp1038 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
*(&local61) = ((frost$core$Error*) NULL);
goto block155;
block185:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:325
frost$core$Int $tmp1039 = (frost$core$Int) {325u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1040, $tmp1039);
abort(); // unreachable
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:328
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Compiler$Settings));
org$frostlang$frostc$Compiler$Settings* $tmp1041 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
frost$io$File** $tmp1042 = &param0->frostHome;
frost$io$File* $tmp1043 = *$tmp1042;
frost$collections$Array* $tmp1044 = *(&local2);
frost$core$Int $tmp1045 = *(&local4);
frost$core$Int $tmp1046 = *(&local5);
frost$core$Bit* $tmp1047 = &param0->debug;
frost$core$Bit $tmp1048 = *$tmp1047;
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1041, $tmp1043, ((frost$collections$ListView*) $tmp1044), $tmp1045, $tmp1046, $tmp1048);
*(&local62) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
org$frostlang$frostc$Compiler$Settings* $tmp1049 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
*(&local62) = $tmp1041;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:330
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp1050 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp1050);
*(&local63) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
frost$threads$MessageQueue* $tmp1051 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
*(&local63) = $tmp1050;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:331
FROST_ASSERT(728 == sizeof(org$frostlang$frostc$Compiler));
org$frostlang$frostc$Compiler* $tmp1052 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(728, (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
frost$threads$MessageQueue* $tmp1053 = *(&local63);
org$frostlang$frostc$CodeGenerator* $tmp1054 = *(&local54);
org$frostlang$frostc$Compiler$Settings* $tmp1055 = *(&local62);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT$org$frostlang$frostc$CodeGenerator$org$frostlang$frostc$Compiler$Settings($tmp1052, $tmp1053, $tmp1054, $tmp1055);
*(&local64) = ((org$frostlang$frostc$Compiler*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
org$frostlang$frostc$Compiler* $tmp1056 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
*(&local64) = $tmp1052;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:332
org$frostlang$frostc$Main$Format$nullable $tmp1057 = *(&local6);
frost$core$Equatable* $tmp1058;
if ($tmp1057.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp1059;
    $tmp1059 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp1059->value = ((org$frostlang$frostc$Main$Format) $tmp1057.value);
    $tmp1058 = ((frost$core$Equatable*) $tmp1059);
}
else {
    $tmp1058 = NULL;
}
frost$core$Int $tmp1060 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:332:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp1061 = &(&local66)->$rawValue;
*$tmp1061 = $tmp1060;
org$frostlang$frostc$Main$Format $tmp1062 = *(&local66);
*(&local65) = $tmp1062;
org$frostlang$frostc$Main$Format $tmp1063 = *(&local65);
org$frostlang$frostc$Main$Format$wrapper* $tmp1064;
$tmp1064 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp1064->value = $tmp1063;
ITable* $tmp1065 = $tmp1058->$class->itable;
while ($tmp1065->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1065 = $tmp1065->next;
}
$fn1067 $tmp1066 = $tmp1065->methods[0];
frost$core$Bit $tmp1068 = $tmp1066($tmp1058, ((frost$core$Equatable*) $tmp1064));
bool $tmp1069 = $tmp1068.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1064)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
if ($tmp1069) goto block193; else goto block194;
block193:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:333
frost$core$String* $tmp1070 = *(&local7);
frost$core$Bit $tmp1071 = (frost$core$Bit) {$tmp1070 == NULL};
bool $tmp1072 = $tmp1071.value;
if ($tmp1072) goto block196; else goto block197;
block196:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:334
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1073));
frost$core$String* $tmp1074 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
*(&local7) = &$s1073;
goto block197;
block197:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:336
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$HTMLProcessor));
org$frostlang$frostc$HTMLProcessor* $tmp1075 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
org$frostlang$frostc$Compiler* $tmp1076 = *(&local64);
org$frostlang$frostc$HTMLProcessor$init$org$frostlang$frostc$Compiler($tmp1075, $tmp1076);
frost$collections$Array* $tmp1077 = *(&local1);
frost$core$Int $tmp1078 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Main.frost:336:56
frost$core$Int $tmp1079 = (frost$core$Int) {0u};
int64_t $tmp1080 = $tmp1078.value;
int64_t $tmp1081 = $tmp1079.value;
bool $tmp1082 = $tmp1080 >= $tmp1081;
frost$core$Bit $tmp1083 = (frost$core$Bit) {$tmp1082};
bool $tmp1084 = $tmp1083.value;
if ($tmp1084) goto block201; else goto block200;
block201:;
ITable* $tmp1085 = ((frost$collections$CollectionView*) $tmp1077)->$class->itable;
while ($tmp1085->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1085 = $tmp1085->next;
}
$fn1087 $tmp1086 = $tmp1085->methods[0];
frost$core$Int $tmp1088 = $tmp1086(((frost$collections$CollectionView*) $tmp1077));
int64_t $tmp1089 = $tmp1078.value;
int64_t $tmp1090 = $tmp1088.value;
bool $tmp1091 = $tmp1089 < $tmp1090;
frost$core$Bit $tmp1092 = (frost$core$Bit) {$tmp1091};
bool $tmp1093 = $tmp1092.value;
if ($tmp1093) goto block199; else goto block200;
block200:;
frost$core$Int $tmp1094 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1095, $tmp1094, &$s1096);
abort(); // unreachable
block199:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1097 = &$tmp1077->data;
frost$core$Object** $tmp1098 = *$tmp1097;
frost$core$Int64 $tmp1099 = frost$core$Int64$init$frost$core$Int($tmp1078);
int64_t $tmp1100 = $tmp1099.value;
frost$core$Object* $tmp1101 = $tmp1098[$tmp1100];
frost$core$Frost$ref$frost$core$Object$Q($tmp1101);
frost$io$File* $tmp1102 = *(&local3);
frost$core$String* $tmp1103 = *(&local7);
$fn1105 $tmp1104 = ($fn1105) $tmp1075->$class->vtable[3];
$tmp1104($tmp1075, ((frost$io$File*) $tmp1101), $tmp1102, $tmp1103);
frost$core$Frost$unref$frost$core$Object$Q($tmp1101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:337
org$frostlang$frostc$Compiler* $tmp1106 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
*(&local64) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp1107 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
*(&local63) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp1108 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
*(&local62) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp1109 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) NULL);
frost$io$File* $tmp1110 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
*(&local41) = ((frost$io$File*) NULL);
frost$core$String* $tmp1111 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp1112 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp1113 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1114 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp1115 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block194:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:339
frost$core$String* $tmp1116 = *(&local7);
frost$core$Bit $tmp1117 = (frost$core$Bit) {$tmp1116 != NULL};
bool $tmp1118 = $tmp1117.value;
if ($tmp1118) goto block202; else goto block203;
block202:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:340
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:340:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s1119);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s1120);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:341
frost$core$Int $tmp1121 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp1121);
frost$core$Int $tmp1122 = (frost$core$Int) {341u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1123, $tmp1122, &$s1124);
abort(); // unreachable
block203:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:343
frost$collections$Array* $tmp1125 = *(&local1);
ITable* $tmp1126 = ((frost$collections$Iterable*) $tmp1125)->$class->itable;
while ($tmp1126->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1126 = $tmp1126->next;
}
$fn1128 $tmp1127 = $tmp1126->methods[0];
frost$collections$Iterator* $tmp1129 = $tmp1127(((frost$collections$Iterable*) $tmp1125));
goto block206;
block206:;
ITable* $tmp1130 = $tmp1129->$class->itable;
while ($tmp1130->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1130 = $tmp1130->next;
}
$fn1132 $tmp1131 = $tmp1130->methods[0];
frost$core$Bit $tmp1133 = $tmp1131($tmp1129);
bool $tmp1134 = $tmp1133.value;
if ($tmp1134) goto block208; else goto block207;
block207:;
*(&local67) = ((frost$io$File*) NULL);
ITable* $tmp1135 = $tmp1129->$class->itable;
while ($tmp1135->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1135 = $tmp1135->next;
}
$fn1137 $tmp1136 = $tmp1135->methods[1];
frost$core$Object* $tmp1138 = $tmp1136($tmp1129);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp1138)));
frost$io$File* $tmp1139 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
*(&local67) = ((frost$io$File*) $tmp1138);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:344
org$frostlang$frostc$Compiler* $tmp1140 = *(&local64);
frost$io$File* $tmp1141 = *(&local67);
frost$collections$ListView* $tmp1142 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT($tmp1140, $tmp1141);
ITable* $tmp1143 = ((frost$collections$Iterable*) $tmp1142)->$class->itable;
while ($tmp1143->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1143 = $tmp1143->next;
}
$fn1145 $tmp1144 = $tmp1143->methods[0];
frost$collections$Iterator* $tmp1146 = $tmp1144(((frost$collections$Iterable*) $tmp1142));
goto block209;
block209:;
ITable* $tmp1147 = $tmp1146->$class->itable;
while ($tmp1147->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1147 = $tmp1147->next;
}
$fn1149 $tmp1148 = $tmp1147->methods[0];
frost$core$Bit $tmp1150 = $tmp1148($tmp1146);
bool $tmp1151 = $tmp1150.value;
if ($tmp1151) goto block211; else goto block210;
block210:;
*(&local68) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1152 = $tmp1146->$class->itable;
while ($tmp1152->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1152 = $tmp1152->next;
}
$fn1154 $tmp1153 = $tmp1152->methods[1];
frost$core$Object* $tmp1155 = $tmp1153($tmp1146);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1155)));
org$frostlang$frostc$ClassDecl* $tmp1156 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
*(&local68) = ((org$frostlang$frostc$ClassDecl*) $tmp1155);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:345
org$frostlang$frostc$Compiler* $tmp1157 = *(&local64);
org$frostlang$frostc$ClassDecl* $tmp1158 = *(&local68);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Main.frost:345:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6006
frost$core$Bit $tmp1159 = (frost$core$Bit) {false};
frost$core$Bit* $tmp1160 = &$tmp1158->external;
*$tmp1160 = $tmp1159;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6007
frost$collections$Array** $tmp1161 = &$tmp1158->classes;
frost$collections$Array* $tmp1162 = *$tmp1161;
ITable* $tmp1163 = ((frost$collections$Iterable*) $tmp1162)->$class->itable;
while ($tmp1163->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1163 = $tmp1163->next;
}
$fn1165 $tmp1164 = $tmp1163->methods[0];
frost$collections$Iterator* $tmp1166 = $tmp1164(((frost$collections$Iterable*) $tmp1162));
goto block213;
block213:;
ITable* $tmp1167 = $tmp1166->$class->itable;
while ($tmp1167->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1167 = $tmp1167->next;
}
$fn1169 $tmp1168 = $tmp1167->methods[0];
frost$core$Bit $tmp1170 = $tmp1168($tmp1166);
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block215; else goto block214;
block214:;
*(&local69) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1172 = $tmp1166->$class->itable;
while ($tmp1172->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1172 = $tmp1172->next;
}
$fn1174 $tmp1173 = $tmp1172->methods[1];
frost$core$Object* $tmp1175 = $tmp1173($tmp1166);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1175)));
org$frostlang$frostc$ClassDecl* $tmp1176 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
*(&local69) = ((org$frostlang$frostc$ClassDecl*) $tmp1175);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6008
org$frostlang$frostc$ClassDecl* $tmp1177 = *(&local69);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Compiler.frost:6008:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6006
frost$core$Bit $tmp1178 = (frost$core$Bit) {false};
frost$core$Bit* $tmp1179 = &$tmp1177->external;
*$tmp1179 = $tmp1178;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6007
frost$collections$Array** $tmp1180 = &$tmp1177->classes;
frost$collections$Array* $tmp1181 = *$tmp1180;
ITable* $tmp1182 = ((frost$collections$Iterable*) $tmp1181)->$class->itable;
while ($tmp1182->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1182 = $tmp1182->next;
}
$fn1184 $tmp1183 = $tmp1182->methods[0];
frost$collections$Iterator* $tmp1185 = $tmp1183(((frost$collections$Iterable*) $tmp1181));
goto block217;
block217:;
ITable* $tmp1186 = $tmp1185->$class->itable;
while ($tmp1186->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1186 = $tmp1186->next;
}
$fn1188 $tmp1187 = $tmp1186->methods[0];
frost$core$Bit $tmp1189 = $tmp1187($tmp1185);
bool $tmp1190 = $tmp1189.value;
if ($tmp1190) goto block219; else goto block218;
block218:;
*(&local70) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1191 = $tmp1185->$class->itable;
while ($tmp1191->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1191 = $tmp1191->next;
}
$fn1193 $tmp1192 = $tmp1191->methods[1];
frost$core$Object* $tmp1194 = $tmp1192($tmp1185);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1194)));
org$frostlang$frostc$ClassDecl* $tmp1195 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
*(&local70) = ((org$frostlang$frostc$ClassDecl*) $tmp1194);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6008
org$frostlang$frostc$ClassDecl* $tmp1196 = *(&local70);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl($tmp1157, $tmp1196);
frost$core$Frost$unref$frost$core$Object$Q($tmp1194);
org$frostlang$frostc$ClassDecl* $tmp1197 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
*(&local70) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block217;
block219:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
frost$core$Frost$unref$frost$core$Object$Q($tmp1175);
org$frostlang$frostc$ClassDecl* $tmp1198 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
*(&local69) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block213;
block215:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$core$Frost$unref$frost$core$Object$Q($tmp1155);
org$frostlang$frostc$ClassDecl* $tmp1199 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
*(&local68) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block209;
block211:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
frost$core$Frost$unref$frost$core$Object$Q($tmp1138);
frost$io$File* $tmp1200 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
*(&local67) = ((frost$io$File*) NULL);
goto block206;
block208:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:348
frost$collections$Array* $tmp1201 = *(&local1);
ITable* $tmp1202 = ((frost$collections$Iterable*) $tmp1201)->$class->itable;
while ($tmp1202->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1202 = $tmp1202->next;
}
$fn1204 $tmp1203 = $tmp1202->methods[0];
frost$collections$Iterator* $tmp1205 = $tmp1203(((frost$collections$Iterable*) $tmp1201));
goto block220;
block220:;
ITable* $tmp1206 = $tmp1205->$class->itable;
while ($tmp1206->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1206 = $tmp1206->next;
}
$fn1208 $tmp1207 = $tmp1206->methods[0];
frost$core$Bit $tmp1209 = $tmp1207($tmp1205);
bool $tmp1210 = $tmp1209.value;
if ($tmp1210) goto block222; else goto block221;
block221:;
*(&local71) = ((frost$io$File*) NULL);
ITable* $tmp1211 = $tmp1205->$class->itable;
while ($tmp1211->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1211 = $tmp1211->next;
}
$fn1213 $tmp1212 = $tmp1211->methods[1];
frost$core$Object* $tmp1214 = $tmp1212($tmp1205);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp1214)));
frost$io$File* $tmp1215 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
*(&local71) = ((frost$io$File*) $tmp1214);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:349
org$frostlang$frostc$Compiler* $tmp1216 = *(&local64);
frost$io$File* $tmp1217 = *(&local71);
org$frostlang$frostc$Compiler$compile$frost$io$File($tmp1216, $tmp1217);
frost$core$Frost$unref$frost$core$Object$Q($tmp1214);
frost$io$File* $tmp1218 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
*(&local71) = ((frost$io$File*) NULL);
goto block220;
block222:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:351
org$frostlang$frostc$Compiler* $tmp1219 = *(&local64);
// begin inline call to method org.frostlang.frostc.Compiler.finish() from Main.frost:351:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6243
goto block224;
block224:;
frost$collections$Array** $tmp1220 = &$tmp1219->pendingClasses;
frost$collections$Array* $tmp1221 = *$tmp1220;
ITable* $tmp1222 = ((frost$collections$CollectionView*) $tmp1221)->$class->itable;
while ($tmp1222->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1222 = $tmp1222->next;
}
$fn1224 $tmp1223 = $tmp1222->methods[0];
frost$core$Int $tmp1225 = $tmp1223(((frost$collections$CollectionView*) $tmp1221));
frost$core$Int $tmp1226 = (frost$core$Int) {0u};
int64_t $tmp1227 = $tmp1225.value;
int64_t $tmp1228 = $tmp1226.value;
bool $tmp1229 = $tmp1227 > $tmp1228;
frost$core$Bit $tmp1230 = (frost$core$Bit) {$tmp1229};
bool $tmp1231 = $tmp1230.value;
if ($tmp1231) goto block225; else goto block226;
block225:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6244
frost$collections$Array** $tmp1232 = &$tmp1219->pendingClasses;
frost$collections$Array* $tmp1233 = *$tmp1232;
frost$collections$Array** $tmp1234 = &$tmp1219->pendingClasses;
frost$collections$Array* $tmp1235 = *$tmp1234;
ITable* $tmp1236 = ((frost$collections$CollectionView*) $tmp1235)->$class->itable;
while ($tmp1236->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1236 = $tmp1236->next;
}
$fn1238 $tmp1237 = $tmp1236->methods[0];
frost$core$Int $tmp1239 = $tmp1237(((frost$collections$CollectionView*) $tmp1235));
frost$core$Int $tmp1240 = (frost$core$Int) {1u};
int64_t $tmp1241 = $tmp1239.value;
int64_t $tmp1242 = $tmp1240.value;
int64_t $tmp1243 = $tmp1241 - $tmp1242;
frost$core$Int $tmp1244 = (frost$core$Int) {$tmp1243};
frost$core$Object* $tmp1245 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp1233, $tmp1244);
*(&local72) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1245)));
org$frostlang$frostc$ClassDecl* $tmp1246 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
*(&local72) = ((org$frostlang$frostc$ClassDecl*) $tmp1245);
frost$core$Frost$unref$frost$core$Object$Q($tmp1245);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6245
org$frostlang$frostc$ClassDecl* $tmp1247 = *(&local72);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl($tmp1219, $tmp1247);
org$frostlang$frostc$ClassDecl* $tmp1248 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
*(&local72) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block224;
block226:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6247
org$frostlang$frostc$CodeGenerator** $tmp1249 = &$tmp1219->codeGenerator;
org$frostlang$frostc$CodeGenerator* $tmp1250 = *$tmp1249;
ITable* $tmp1251 = $tmp1250->$class->itable;
while ($tmp1251->$class != (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class) {
    $tmp1251 = $tmp1251->next;
}
$fn1253 $tmp1252 = $tmp1251->methods[5];
$tmp1252($tmp1250);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:352
goto block227;
block227:;
frost$threads$MessageQueue* $tmp1254 = *(&local63);
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Main.frost:352:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1255 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1256 = &$tmp1254->lock;
frost$threads$Lock* $tmp1257 = *$tmp1256;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1255, $tmp1257);
*(&local73) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
frost$threads$ScopedLock* $tmp1258 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
*(&local73) = $tmp1255;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp1259 = &$tmp1254->count;
frost$core$Int $tmp1260 = *$tmp1259;
frost$threads$ScopedLock* $tmp1261 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
*(&local73) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp1262 = (frost$core$Int) {0u};
int64_t $tmp1263 = $tmp1260.value;
int64_t $tmp1264 = $tmp1262.value;
bool $tmp1265 = $tmp1263 > $tmp1264;
frost$core$Bit $tmp1266 = (frost$core$Bit) {$tmp1265};
bool $tmp1267 = $tmp1266.value;
if ($tmp1267) goto block228; else goto block229;
block228:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:353
frost$threads$MessageQueue* $tmp1268 = *(&local63);
frost$core$Immutable* $tmp1269 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp1268);
*(&local74) = ((org$frostlang$frostc$Compiler$Message*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Message*) $tmp1269)));
org$frostlang$frostc$Compiler$Message* $tmp1270 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
*(&local74) = ((org$frostlang$frostc$Compiler$Message*) $tmp1269);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:355
org$frostlang$frostc$Compiler$Message* $tmp1271 = *(&local74);
frost$core$Int* $tmp1272 = &$tmp1271->$rawValue;
frost$core$Int $tmp1273 = *$tmp1272;
frost$core$Int $tmp1274 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:356:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1275 = $tmp1273.value;
int64_t $tmp1276 = $tmp1274.value;
bool $tmp1277 = $tmp1275 == $tmp1276;
frost$core$Bit $tmp1278 = (frost$core$Bit) {$tmp1277};
bool $tmp1279 = $tmp1278.value;
if ($tmp1279) goto block233; else goto block234;
block233:;
frost$core$String** $tmp1280 = (frost$core$String**) ($tmp1271->$data + 0);
frost$core$String* $tmp1281 = *$tmp1280;
*(&local75) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
frost$core$String* $tmp1282 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
*(&local75) = $tmp1281;
frost$core$Int* $tmp1283 = (frost$core$Int*) ($tmp1271->$data + 8);
frost$core$Int $tmp1284 = *$tmp1283;
*(&local76) = $tmp1284;
frost$core$Int* $tmp1285 = (frost$core$Int*) ($tmp1271->$data + 16);
frost$core$Int $tmp1286 = *$tmp1285;
*(&local77) = $tmp1286;
frost$core$String** $tmp1287 = (frost$core$String**) ($tmp1271->$data + 24);
frost$core$String* $tmp1288 = *$tmp1287;
*(&local78) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
frost$core$String* $tmp1289 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
*(&local78) = $tmp1288;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:357
frost$core$Int $tmp1290 = *(&local52);
frost$core$Int $tmp1291 = (frost$core$Int) {1u};
int64_t $tmp1292 = $tmp1290.value;
int64_t $tmp1293 = $tmp1291.value;
int64_t $tmp1294 = $tmp1292 + $tmp1293;
frost$core$Int $tmp1295 = (frost$core$Int) {$tmp1294};
*(&local52) = $tmp1295;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:358
frost$core$String* $tmp1296 = *(&local75);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:358:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
frost$core$String* $tmp1297 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1296, &$s1298);
frost$core$Int $tmp1299 = *(&local76);
frost$core$Int$wrapper* $tmp1300;
$tmp1300 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1300->value = $tmp1299;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:358:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1302 $tmp1301 = ($fn1302) ((frost$core$Object*) $tmp1300)->$class->vtable[0];
frost$core$String* $tmp1303 = $tmp1301(((frost$core$Object*) $tmp1300));
frost$core$String* $tmp1304 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1297, $tmp1303);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
frost$core$String* $tmp1305 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1304, &$s1306);
frost$core$Int $tmp1307 = *(&local77);
frost$core$Int$wrapper* $tmp1308;
$tmp1308 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1308->value = $tmp1307;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:358:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1310 $tmp1309 = ($fn1310) ((frost$core$Object*) $tmp1308)->$class->vtable[0];
frost$core$String* $tmp1311 = $tmp1309(((frost$core$Object*) $tmp1308));
frost$core$String* $tmp1312 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1305, $tmp1311);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
frost$core$String* $tmp1313 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1312, &$s1314);
frost$core$String* $tmp1315 = *(&local78);
frost$core$String* $tmp1316 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1313, $tmp1315);
frost$core$String* $tmp1317 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1316, &$s1318);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:358:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1317);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1319);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
frost$core$String* $tmp1320 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
*(&local78) = ((frost$core$String*) NULL);
frost$core$String* $tmp1321 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
*(&local75) = ((frost$core$String*) NULL);
goto block232;
block234:;
frost$core$Int $tmp1322 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:360:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1323 = $tmp1273.value;
int64_t $tmp1324 = $tmp1322.value;
bool $tmp1325 = $tmp1323 == $tmp1324;
frost$core$Bit $tmp1326 = (frost$core$Bit) {$tmp1325};
bool $tmp1327 = $tmp1326.value;
if ($tmp1327) goto block241; else goto block232;
block241:;
frost$core$String** $tmp1328 = (frost$core$String**) ($tmp1271->$data + 0);
frost$core$String* $tmp1329 = *$tmp1328;
*(&local79) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
frost$core$String* $tmp1330 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
*(&local79) = $tmp1329;
frost$core$Int* $tmp1331 = (frost$core$Int*) ($tmp1271->$data + 8);
frost$core$Int $tmp1332 = *$tmp1331;
*(&local80) = $tmp1332;
frost$core$Int* $tmp1333 = (frost$core$Int*) ($tmp1271->$data + 16);
frost$core$Int $tmp1334 = *$tmp1333;
*(&local81) = $tmp1334;
frost$core$String** $tmp1335 = (frost$core$String**) ($tmp1271->$data + 24);
frost$core$String* $tmp1336 = *$tmp1335;
*(&local82) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
frost$core$String* $tmp1337 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local82) = $tmp1336;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:361
frost$core$Int $tmp1338 = *(&local53);
frost$core$Int $tmp1339 = (frost$core$Int) {1u};
int64_t $tmp1340 = $tmp1338.value;
int64_t $tmp1341 = $tmp1339.value;
int64_t $tmp1342 = $tmp1340 + $tmp1341;
frost$core$Int $tmp1343 = (frost$core$Int) {$tmp1342};
*(&local53) = $tmp1343;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:362
frost$core$String* $tmp1344 = *(&local79);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:362:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
frost$core$String* $tmp1345 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1344, &$s1346);
frost$core$Int $tmp1347 = *(&local80);
frost$core$Int$wrapper* $tmp1348;
$tmp1348 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1348->value = $tmp1347;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:362:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1350 $tmp1349 = ($fn1350) ((frost$core$Object*) $tmp1348)->$class->vtable[0];
frost$core$String* $tmp1351 = $tmp1349(((frost$core$Object*) $tmp1348));
frost$core$String* $tmp1352 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1345, $tmp1351);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
frost$core$String* $tmp1353 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1352, &$s1354);
frost$core$Int $tmp1355 = *(&local81);
frost$core$Int$wrapper* $tmp1356;
$tmp1356 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1356->value = $tmp1355;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:362:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1358 $tmp1357 = ($fn1358) ((frost$core$Object*) $tmp1356)->$class->vtable[0];
frost$core$String* $tmp1359 = $tmp1357(((frost$core$Object*) $tmp1356));
frost$core$String* $tmp1360 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1353, $tmp1359);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
frost$core$String* $tmp1361 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1360, &$s1362);
frost$core$String* $tmp1363 = *(&local82);
frost$core$String* $tmp1364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1361, $tmp1363);
frost$core$String* $tmp1365 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1364, &$s1366);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:362:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1365);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1367);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
frost$core$String* $tmp1368 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
*(&local82) = ((frost$core$String*) NULL);
frost$core$String* $tmp1369 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
*(&local79) = ((frost$core$String*) NULL);
goto block232;
block232:;
org$frostlang$frostc$Compiler$Message* $tmp1370 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
*(&local74) = ((org$frostlang$frostc$Compiler$Message*) NULL);
goto block227;
block229:;
org$frostlang$frostc$Compiler* $tmp1371 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
*(&local64) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp1372 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
*(&local63) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp1373 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
*(&local62) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp1374 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:367
frost$core$Int $tmp1375 = *(&local53);
frost$core$Int $tmp1376 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:367:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1377 = $tmp1375.value;
int64_t $tmp1378 = $tmp1376.value;
bool $tmp1379 = $tmp1377 == $tmp1378;
frost$core$Bit $tmp1380 = (frost$core$Bit) {$tmp1379};
bool $tmp1381 = $tmp1380.value;
if ($tmp1381) goto block248; else goto block250;
block248:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:369
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:369:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s1382);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1383);
goto block249;
block250:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:371
frost$core$Int $tmp1384 = *(&local53);
frost$core$Int $tmp1385 = (frost$core$Int) {0u};
int64_t $tmp1386 = $tmp1384.value;
int64_t $tmp1387 = $tmp1385.value;
bool $tmp1388 = $tmp1386 > $tmp1387;
frost$core$Bit $tmp1389 = (frost$core$Bit) {$tmp1388};
bool $tmp1390 = $tmp1389.value;
if ($tmp1390) goto block254; else goto block255;
block254:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:373
frost$core$Int $tmp1391 = *(&local53);
frost$core$String* $tmp1392 = frost$core$Int$get_asString$R$frost$core$String($tmp1391);
frost$core$String* $tmp1393 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1392, &$s1394);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:373:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1393);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1395);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
goto block255;
block255:;
goto block249;
block249:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:375
frost$core$Int $tmp1396 = *(&local52);
frost$core$Int $tmp1397 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:375:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1398 = $tmp1396.value;
int64_t $tmp1399 = $tmp1397.value;
bool $tmp1400 = $tmp1398 == $tmp1399;
frost$core$Bit $tmp1401 = (frost$core$Bit) {$tmp1400};
bool $tmp1402 = $tmp1401.value;
if ($tmp1402) goto block258; else goto block260;
block258:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:376
org$frostlang$frostc$Main$Format$nullable $tmp1403 = *(&local6);
frost$core$Int $tmp1404 = ((org$frostlang$frostc$Main$Format) $tmp1403.value).$rawValue;
frost$core$Int $tmp1405 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:377:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1406 = $tmp1404.value;
int64_t $tmp1407 = $tmp1405.value;
bool $tmp1408 = $tmp1406 == $tmp1407;
frost$core$Bit $tmp1409 = (frost$core$Bit) {$tmp1408};
bool $tmp1410 = $tmp1409.value;
if ($tmp1410) goto block263; else goto block264;
block263:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:378
frost$io$File* $tmp1411 = *(&local3);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:378:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp1412 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1411, &$s1413);
frost$core$String** $tmp1414 = &$tmp1412->path;
frost$core$String* $tmp1415 = *$tmp1414;
frost$core$String* $tmp1416 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp1415);
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$core$String* $tmp1417 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
*(&local84) = $tmp1416;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp1418 = *(&local84);
frost$core$Bit $tmp1419 = (frost$core$Bit) {$tmp1418 == NULL};
bool $tmp1420 = $tmp1419.value;
if ($tmp1420) goto block268; else goto block269;
block268:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp1421 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
*(&local84) = ((frost$core$String*) NULL);
*(&local83) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block267;
block269:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp1422 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp1423 = *(&local84);
frost$io$File$init$frost$core$String($tmp1422, $tmp1423);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
frost$core$String* $tmp1424 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
*(&local84) = ((frost$core$String*) NULL);
*(&local83) = $tmp1422;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
goto block267;
block267:;
frost$io$File* $tmp1425 = *(&local83);
frost$core$Bit $tmp1426 = (frost$core$Bit) {$tmp1425 != NULL};
bool $tmp1427 = $tmp1426.value;
if ($tmp1427) goto block270; else goto block271;
block271:;
frost$core$Int $tmp1428 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1429, $tmp1428, &$s1430);
abort(); // unreachable
block270:;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp1431 = frost$io$File$get_name$R$frost$core$String($tmp1411);
*(&local86) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$String* $tmp1432 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
*(&local86) = $tmp1431;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp1433 = *(&local86);
frost$core$String$Index$nullable $tmp1434 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp1433, &$s1435);
*(&local87) = $tmp1434;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp1436 = *(&local87);
frost$core$Bit $tmp1437 = (frost$core$Bit) {!$tmp1436.nonnull};
bool $tmp1438 = $tmp1437.value;
if ($tmp1438) goto block273; else goto block274;
block273:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp1439 = *(&local86);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
frost$core$String* $tmp1440 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
*(&local86) = ((frost$core$String*) NULL);
*(&local85) = $tmp1439;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
goto block272;
block274:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp1441 = *(&local86);
frost$core$String$Index$nullable $tmp1442 = *(&local87);
frost$core$Bit $tmp1443 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1444 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1442, $tmp1443);
frost$core$String* $tmp1445 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1441, $tmp1444);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
frost$core$String* $tmp1446 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
*(&local86) = ((frost$core$String*) NULL);
*(&local85) = $tmp1445;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
goto block272;
block272:;
frost$core$String* $tmp1447 = *(&local85);
frost$core$String* $tmp1448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1447, &$s1449);
frost$io$File* $tmp1450 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1425, $tmp1448);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
frost$core$String* $tmp1451 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
*(&local85) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
frost$io$File* $tmp1452 = *(&local83);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
*(&local83) = ((frost$io$File*) NULL);
frost$io$File* $tmp1453 = *(&local3);
frost$core$Bit $tmp1454 = *(&local8);
frost$io$File* $tmp1455 = org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp1450, $tmp1453, $tmp1454);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
goto block262;
block264:;
frost$core$Int $tmp1456 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:380:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1457 = $tmp1404.value;
int64_t $tmp1458 = $tmp1456.value;
bool $tmp1459 = $tmp1457 == $tmp1458;
frost$core$Bit $tmp1460 = (frost$core$Bit) {$tmp1459};
bool $tmp1461 = $tmp1460.value;
if ($tmp1461) goto block275; else goto block262;
block275:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:381
frost$io$File* $tmp1462 = *(&local3);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:381:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp1463 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1462, &$s1464);
frost$core$String** $tmp1465 = &$tmp1463->path;
frost$core$String* $tmp1466 = *$tmp1465;
frost$core$String* $tmp1467 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp1466);
*(&local89) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
frost$core$String* $tmp1468 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
*(&local89) = $tmp1467;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp1469 = *(&local89);
frost$core$Bit $tmp1470 = (frost$core$Bit) {$tmp1469 == NULL};
bool $tmp1471 = $tmp1470.value;
if ($tmp1471) goto block279; else goto block280;
block279:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp1472 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
*(&local89) = ((frost$core$String*) NULL);
*(&local88) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block278;
block280:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp1473 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp1474 = *(&local89);
frost$io$File$init$frost$core$String($tmp1473, $tmp1474);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
frost$core$String* $tmp1475 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
*(&local89) = ((frost$core$String*) NULL);
*(&local88) = $tmp1473;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
goto block278;
block278:;
frost$io$File* $tmp1476 = *(&local88);
frost$core$Bit $tmp1477 = (frost$core$Bit) {$tmp1476 != NULL};
bool $tmp1478 = $tmp1477.value;
if ($tmp1478) goto block281; else goto block282;
block282:;
frost$core$Int $tmp1479 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1480, $tmp1479, &$s1481);
abort(); // unreachable
block281:;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp1482 = frost$io$File$get_name$R$frost$core$String($tmp1462);
*(&local91) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
frost$core$String* $tmp1483 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
*(&local91) = $tmp1482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp1484 = *(&local91);
frost$core$String$Index$nullable $tmp1485 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp1484, &$s1486);
*(&local92) = $tmp1485;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp1487 = *(&local92);
frost$core$Bit $tmp1488 = (frost$core$Bit) {!$tmp1487.nonnull};
bool $tmp1489 = $tmp1488.value;
if ($tmp1489) goto block284; else goto block285;
block284:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp1490 = *(&local91);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
frost$core$String* $tmp1491 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
*(&local91) = ((frost$core$String*) NULL);
*(&local90) = $tmp1490;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
goto block283;
block285:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp1492 = *(&local91);
frost$core$String$Index$nullable $tmp1493 = *(&local92);
frost$core$Bit $tmp1494 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1495 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1493, $tmp1494);
frost$core$String* $tmp1496 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1492, $tmp1495);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
frost$core$String* $tmp1497 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
*(&local91) = ((frost$core$String*) NULL);
*(&local90) = $tmp1496;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
goto block283;
block283:;
frost$core$String* $tmp1498 = *(&local90);
frost$core$String* $tmp1499 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1498, &$s1500);
frost$io$File* $tmp1501 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1476, $tmp1499);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
frost$core$String* $tmp1502 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
*(&local90) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
frost$io$File* $tmp1503 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
*(&local88) = ((frost$io$File*) NULL);
frost$io$File* $tmp1504 = *(&local3);
frost$core$Bit $tmp1505 = *(&local8);
frost$io$File* $tmp1506 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp1501, $tmp1504, $tmp1505);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1506));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
goto block262;
block262:;
frost$io$File* $tmp1507 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
*(&local41) = ((frost$io$File*) NULL);
frost$core$String* $tmp1508 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp1509 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp1510 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1510));
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1511 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1511));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp1512 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block260:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:386
frost$core$Int $tmp1513 = *(&local52);
frost$core$Int $tmp1514 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:386:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1515 = $tmp1513.value;
int64_t $tmp1516 = $tmp1514.value;
bool $tmp1517 = $tmp1515 == $tmp1516;
frost$core$Bit $tmp1518 = (frost$core$Bit) {$tmp1517};
bool $tmp1519 = $tmp1518.value;
if ($tmp1519) goto block286; else goto block288;
block286:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:388
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:388:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s1520);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1521);
goto block287;
block288:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:392
frost$core$Int $tmp1522 = *(&local52);
frost$core$String* $tmp1523 = frost$core$Int$get_asString$R$frost$core$String($tmp1522);
frost$core$String* $tmp1524 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1523, &$s1525);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:392:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1524);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1526);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
goto block287;
block287:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:394
frost$core$Int $tmp1527 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp1527);
frost$core$Int $tmp1528 = (frost$core$Int) {394u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1529, $tmp1528, &$s1530);
abort(); // unreachable

}
void frostMain(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:400
ITable* $tmp1531 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp1531->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1531 = $tmp1531->next;
}
$fn1533 $tmp1532 = $tmp1531->methods[0];
frost$core$Int $tmp1534 = $tmp1532(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp1535 = (frost$core$Int) {1u};
int64_t $tmp1536 = $tmp1534.value;
int64_t $tmp1537 = $tmp1535.value;
bool $tmp1538 = $tmp1536 > $tmp1537;
frost$core$Bit $tmp1539 = (frost$core$Bit) {$tmp1538};
bool $tmp1540 = $tmp1539.value;
if ($tmp1540) goto block3; else goto block2;
block3:;
frost$core$Int $tmp1541 = (frost$core$Int) {1u};
ITable* $tmp1542 = param0->$class->itable;
while ($tmp1542->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1542 = $tmp1542->next;
}
$fn1544 $tmp1543 = $tmp1542->methods[0];
frost$core$Object* $tmp1545 = $tmp1543(param0, $tmp1541);
frost$core$Bit $tmp1546 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(((frost$core$String*) $tmp1545), &$s1547);
bool $tmp1548 = $tmp1546.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1545);
if ($tmp1548) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:401
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:402
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Main));
org$frostlang$frostc$Main* $tmp1549 = (org$frostlang$frostc$Main*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp1549);
frost$core$Int $tmp1550 = (frost$core$Int) {1u};
frost$core$Bit $tmp1551 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp1552 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp1550, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp1551);
ITable* $tmp1553 = param0->$class->itable;
while ($tmp1553->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1553 = $tmp1553->next;
}
$fn1555 $tmp1554 = $tmp1553->methods[2];
frost$collections$ListView* $tmp1556 = $tmp1554(param0, $tmp1552);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp1549, $tmp1556);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1549));
goto block4;
block5:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:405
ITable* $tmp1557 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp1557->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1557 = $tmp1557->next;
}
$fn1559 $tmp1558 = $tmp1557->methods[0];
frost$core$Int $tmp1560 = $tmp1558(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp1561 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:405:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1562 = $tmp1560.value;
int64_t $tmp1563 = $tmp1561.value;
bool $tmp1564 = $tmp1562 == $tmp1563;
frost$core$Bit $tmp1565 = (frost$core$Bit) {$tmp1564};
bool $tmp1566 = $tmp1565.value;
if ($tmp1566) goto block8; else goto block7;
block8:;
frost$core$Int $tmp1567 = (frost$core$Int) {1u};
ITable* $tmp1568 = param0->$class->itable;
while ($tmp1568->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1568 = $tmp1568->next;
}
$fn1570 $tmp1569 = $tmp1568->methods[0];
frost$core$Object* $tmp1571 = $tmp1569(param0, $tmp1567);
frost$core$Bit $tmp1572 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(((frost$core$String*) $tmp1571), &$s1573);
bool $tmp1574 = $tmp1572.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1571);
if ($tmp1574) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:406
FROST_ASSERT(16 == sizeof(org$frostlang$frostc$Bench));
org$frostlang$frostc$Bench* $tmp1575 = (org$frostlang$frostc$Bench*) frostObjectAlloc(16, (frost$core$Class*) &org$frostlang$frostc$Bench$class);
org$frostlang$frostc$Bench$init($tmp1575);
$fn1577 $tmp1576 = ($fn1577) $tmp1575->$class->vtable[4];
$tmp1576($tmp1575);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:407
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:409
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Main));
org$frostlang$frostc$Main* $tmp1578 = (org$frostlang$frostc$Main*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp1578);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp1578, param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
return;

}
void org$frostlang$frostc$Main$cleanup(org$frostlang$frostc$Main* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp1579 = &param0->clang;
frost$io$File* $tmp1580 = *$tmp1579;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
frost$io$File** $tmp1581 = &param0->frostHome;
frost$io$File* $tmp1582 = *$tmp1581;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
return;

}

