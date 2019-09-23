#include "org/frostlang/frostc/Main.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/io/File.h"
#include "org/frostlang/frostc/Config.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Compiler/Settings.h"
#include "frost/collections/Array.h"
#include "frost/core/System/Process.h"
#include "frost/core/Error.h"
#include "frost/threads/Thread.h"
#include "frost/core/Int.h"
#include "frost/collections/ListView.h"
#include "frost/core/Maybe.h"
#include "org/frostlang/frostc/Main/_Closure2.h"
#include "frost/core/MutableMethod.h"
#include "org/frostlang/frostc/Main/_Closure4.h"
#include "frost/core/System.h"
#include "frost/io/Console.h"
#include "frost/core/String/Index.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/Int64.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/io/InputStream.h"
#include "frost/io/OutputStream.h"
#include "org/frostlang/frostc/Main/Arguments.h"
#include "org/frostlang/frostc/Main/Format.h"
#include "org/frostlang/frostc/CodeGenerator.h"
#include "frost/threads/MessageQueue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/threads/ScopedLock.h"
#include "org/frostlang/frostc/Compiler/Message.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/LLVMCodeGenerator.h"
#include "org/frostlang/frostc/HCodeGenerator.h"
#include "org/frostlang/frostc/CCodeGenerator.h"
#include "org/frostlang/frostc/StubCodeGenerator.h"
#include "org/frostlang/frostc/Interpreter.h"
#include "org/frostlang/frostc/HTMLProcessor.h"
#include "frost/threads/Lock.h"
#include "org/frostlang/frostc/Bench.h"


static frost$core$String $s1;
org$frostlang$frostc$Main$class_type org$frostlang$frostc$Main$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Main$cleanup, org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$org$frostlang$frostc$Compiler$Settings$R$frost$io$File, org$frostlang$frostc$Main$toExecutable$frost$collections$Array$LTfrost$io$File$GT$frost$collections$Array$LTfrost$core$String$GT$frost$io$File$frost$io$File$frost$core$Bit$org$frostlang$frostc$Compiler$Settings$R$frost$io$File, org$frostlang$frostc$Main$printUsage$frost$io$OutputStream, org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn10)(frost$core$Object*);
typedef frost$core$String* (*$fn14)(frost$core$Object*);
typedef frost$core$String* (*$fn19)(frost$core$Object*);
typedef frost$core$String* (*$fn24)(frost$core$Object*);
typedef frost$core$String* (*$fn25)(frost$core$Object*);
typedef frost$collections$Array* (*$fn28)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$collections$Array* (*$fn29)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn30)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn31)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn32)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn33)(frost$core$Object*);
typedef frost$core$String* (*$fn34)(frost$core$Object*);
typedef frost$core$String* (*$fn35)(frost$core$Object*);
typedef frost$core$String* (*$fn36)(frost$io$InputStream*);
typedef frost$core$String* (*$fn37)(frost$io$InputStream*);
typedef frost$core$String* (*$fn38)(frost$core$Object*);
typedef frost$core$String* (*$fn55)(frost$core$Object*);
typedef frost$core$String* (*$fn68)(frost$core$Object*);
typedef frost$core$String* (*$fn73)(frost$core$Object*);
typedef frost$core$String* (*$fn76)(frost$io$InputStream*);
typedef frost$core$String* (*$fn77)(frost$io$InputStream*);
typedef frost$core$String* (*$fn80)(frost$core$Object*);
typedef frost$core$Error* (*$fn85)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn86)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn87)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn88)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn89)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn90)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn91)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn95)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn98)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn102)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn105)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn109)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn114)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn115)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Maybe* (*$fn116)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$String* (*$fn117)(frost$core$Object*);
typedef frost$core$String* (*$fn118)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn119)(frost$core$Object*);
typedef frost$core$String* (*$fn120)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn121)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn122)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn123)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn124)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn125)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn126)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Bit (*$fn127)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn128)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn129)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn130)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn131)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn132)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn133)(frost$core$Object*);
typedef frost$core$String* (*$fn134)(frost$core$Object*);
typedef frost$core$Bit (*$fn135)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn136)(frost$collections$CollectionView*);
typedef void (*$fn137)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn138)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn139)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn140)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn141)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn142)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn143)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn144)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn145)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn146)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn147)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn148)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn149)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn150)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn151)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn152)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn153)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn154)(org$frostlang$frostc$Interpreter*);
typedef frost$core$Int (*$fn155)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn156)(frost$collections$CollectionView*);
typedef void (*$fn157)(org$frostlang$frostc$CodeGenerator*);
typedef frost$core$String* (*$fn158)(frost$core$Object*);
typedef frost$core$String* (*$fn159)(frost$core$Object*);
typedef frost$core$String* (*$fn160)(frost$core$Object*);
typedef frost$core$String* (*$fn161)(frost$core$Object*);
typedef frost$core$Bit (*$fn162)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn163)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Maybe* (*$fn166)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$String* (*$fn167)(frost$core$Object*);
typedef frost$core$String* (*$fn175)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn186)(frost$core$Object*);
typedef frost$core$String* (*$fn190)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn205)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn224)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn240)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn243)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn246)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn249)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn327)(frost$core$Object*);
typedef frost$core$String* (*$fn336)(frost$core$Object*);
typedef void (*$fn353)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef void (*$fn379)(org$frostlang$frostc$Interpreter*);
typedef frost$core$String* (*$fn387)(frost$core$Object*);
typedef frost$core$String* (*$fn390)(frost$core$Object*);
typedef frost$core$String* (*$fn396)(frost$core$Object*);
typedef frost$core$String* (*$fn399)(frost$core$Object*);
typedef frost$core$Int (*$fn437)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn438)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$ListView* (*$fn439)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$Q$GT);
typedef frost$core$Int (*$fn440)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn441)(frost$collections$ListView*, frost$core$Int);
typedef void (*$fn442)(org$frostlang$frostc$Bench*);
typedef void (*$fn450)(org$frostlang$frostc$Bench*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e", 25, -3316641479594746667, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 6043963258232676957, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, -3218342706179030910, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x63", 2, 563052241097350273, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x67", 2, 563056639143863117, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4f", 2, 563012658678734677, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c", 2, 563044544515952796, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x66\x72\x6f\x73\x74", 7, -4044657180966489978, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x6d", 3, -2354502893290026621, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, -4341477490894522756, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x69\x62", 3, 1317978099017241196, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c", 2, 563044544515952796, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 6043963258232676957, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, -3218342706179030910, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x67", 2, 563056639143863117, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4f", 2, 563012658678734677, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x57\x6e\x6f\x2d\x6f\x76\x65\x72\x72\x69\x64\x65\x2d\x6d\x6f\x64\x75\x6c\x65", 20, -2132269410351424080, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x66\x72\x6f\x73\x74\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -5336904199903828035, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x66\x72\x6f\x73\x74\x27\x2e", 38, 2414752363581770017, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, -3725874908572553427, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, -8537804258594104524, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, -1426593306435499698, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, 2993450520568953317, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -2854313959629863208, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -293442963066226919, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4f", 2, 563012658678734677, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, -36708640889814861, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, -8241422096120224677, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x53", 2, 562999464539196145, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, -36708640889814861, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, -8229934398630946849, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66", 2, 563055539632234906, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -8357866846417911189, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -8762049995398847258, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x65", 3, -4390446579619712681, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f", 1, -5808550276084140354, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6c", 2, 625221927078985221, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68", 1, -5808546977549255721, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63", 1, -5808554674130653198, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, -8607590772689110736, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62", 4, -5818263582595368203, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x75\x6e", 3, -8524566317707732406, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, -8940199916074753387, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x49", 2, 563006061608965411, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 8483394141060772687, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x20\x6c\x69\x62\x72\x61\x72\x79\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 6787422783208561247, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c", 2, 563044544515952796, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6c\x69\x62\x72\x61\x72\x79\x20\x6e\x61\x6d\x65", 14, 7182621647362798014, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, -3260734117535617165, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 1755487887012249427, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, -6268259042323653607, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -540522989212751288, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62\x73", 5, -7219040758408810062, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 2088835727452422272, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, 1894309652117697527, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 6252797618683371763, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 565862592818489914, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 565862592818489914, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, -5255104731122465439, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, -5255104731122465439, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, 6378635575011181341, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -5478415099818808347, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, -4651943656929293709, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 6252797618683371763, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s338 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s350 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 3928554745973598786, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 107, -867402159131882985, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s388 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, -5861202104196742523, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s397 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x77\x61\x72\x6e\x69\x6e\x67\x3a\x20", 11, 2890546785777135939, NULL };
static frost$core$String $s401 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x77\x61\x72\x6e\x69\x6e\x67", 9, -3177307723557508888, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x61\x72\x6e\x69\x6e\x67\x73", 9, 8539650515262073630, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 6252797618683371763, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s415 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s428 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 3639570550927944898, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, -1438914547765079724, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x65\x70\x65\x61\x74", 8, 3780951491120021928, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x62\x65\x6e\x63\x68", 7, -7026121568011644677, NULL };

void org$frostlang$frostc$Main$init(void* rawSelf) {
org$frostlang$frostc$Main* param0 = (org$frostlang$frostc$Main*) rawSelf;

frost$io$File* _1;
frost$core$String* _2;
frost$core$Object* _4;
frost$io$File** _6;
frost$io$File* _7;
frost$core$Object* _8;
frost$io$File** _10;
frost$core$Object* _12;
frost$core$Object* _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:25
_1 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_2 = org$frostlang$frostc$Config$frostSourceDir$R$frost$core$String();
frost$io$File$init$frost$core$String(_1, _2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->frostHome;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->frostHome;
*_10 = _1;
_12 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_14);
return;

}
frost$io$File* org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$org$frostlang$frostc$Compiler$Settings$R$frost$io$File(void* rawSelf, frost$io$File* param1, frost$io$File* param2, frost$core$Bit param3, org$frostlang$frostc$Compiler$Settings* param4) {
org$frostlang$frostc$Main* param0 = (org$frostlang$frostc$Main*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$System$Process* local1 = NULL;
frost$core$Error* local2 = NULL;
frost$threads$Thread* local3 = NULL;
frost$threads$Thread* local4 = NULL;
frost$threads$Thread* local5 = NULL;
frost$threads$Thread* local6 = NULL;
frost$core$Int local7;
frost$core$Error* local8 = NULL;
frost$collections$Array* _1;
frost$core$Object* _4;
frost$collections$Array* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$collections$Array* _13;
frost$core$String** _14;
frost$core$String* _15;
frost$core$Object* _16;
frost$collections$Array* _19;
frost$core$Object* _20;
frost$collections$Array* _23;
frost$core$Object* _24;
frost$collections$Array* _27;
frost$core$Object* _28;
frost$core$Bit* _31;
frost$core$Bit _32;
bool _33;
frost$collections$Array* _36;
frost$core$Object* _37;
frost$collections$Array* _41;
frost$core$Int* _42;
frost$core$Int _43;
frost$core$Object* _44;
$fn2 _47;
frost$core$String* _48;
frost$core$String* _49;
frost$core$Object* _50;
frost$core$Object* _52;
frost$core$Object* _54;
frost$core$String* _57;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$Object* _62;
frost$core$Object* _64;
frost$collections$Array* _67;
frost$core$Object* _68;
frost$collections$Array* _71;
frost$core$String** _72;
frost$core$String* _73;
frost$core$Object* _74;
frost$io$File** _81;
frost$io$File* _82;
frost$core$String** _83;
frost$core$String* _84;
frost$collections$Array* _85;
frost$collections$ListView* _86;
frost$core$Maybe* _87;
frost$core$Int* _88;
frost$core$Int _89;
int64_t _90;
bool _91;
frost$core$Error** _93;
frost$core$Error* _94;
frost$core$Object* _95;
frost$core$Object* _98;
frost$core$Error* _246;
frost$core$Object* _247;
$fn3 _250;
frost$core$String* _251;
frost$core$Object* _258;
frost$core$Int _262;
frost$core$Int _264;
frost$core$Object** _101;
frost$core$Object* _102;
frost$core$System$Process* _103;
frost$core$Object* _104;
frost$core$System$Process* _106;
frost$core$Object* _107;
frost$core$Object* _110;
org$frostlang$frostc$Main$_Closure2* _113;
frost$core$System$Process* _114;
frost$core$Int8* _116;
frost$core$MutableMethod* _117;
frost$core$Object* _118;
frost$core$Int8** _121;
frost$core$Object** _125;
frost$core$Object* _126;
frost$core$Object** _128;
frost$core$MutableMethod* _131;
frost$threads$Thread* _134;
frost$core$Object* _138;
frost$threads$Thread* _140;
frost$core$Object* _141;
frost$core$Object* _144;
frost$threads$Thread* _147;
frost$threads$Thread* _150;
frost$core$Object* _151;
frost$threads$Thread* _153;
frost$core$Object* _154;
frost$core$Object* _159;
frost$threads$Thread* _161;
frost$core$Object* _162;
frost$core$Object* _165;
frost$core$Object* _167;
frost$core$Object* _169;
org$frostlang$frostc$Main$_Closure4* _172;
frost$core$System$Process* _173;
frost$core$Int8* _175;
frost$core$MutableMethod* _176;
frost$core$Object* _177;
frost$core$Int8** _180;
frost$core$Object** _184;
frost$core$Object* _185;
frost$core$Object** _187;
frost$core$MutableMethod* _190;
frost$threads$Thread* _193;
frost$core$Object* _197;
frost$threads$Thread* _199;
frost$core$Object* _200;
frost$core$Object* _203;
frost$threads$Thread* _206;
frost$threads$Thread* _209;
frost$core$Object* _210;
frost$threads$Thread* _212;
frost$core$Object* _213;
frost$core$Object* _218;
frost$threads$Thread* _220;
frost$core$Object* _221;
frost$core$Object* _224;
frost$core$Object* _226;
frost$core$Object* _228;
frost$threads$Thread* _231;
frost$threads$Thread* _234;
frost$threads$Thread* _236;
frost$core$Object* _237;
frost$threads$Thread* _240;
frost$core$Object* _241;
frost$core$Error* _267;
frost$core$Object* _268;
frost$core$System$Process* _272;
frost$core$Int _273;
bool _278;
bool _279;
frost$core$Bit _280;
bool _282;
frost$core$Error* _287;
bool _288;
frost$core$Object* _290;
bool _292;
frost$core$Bit _293;
bool _294;
frost$core$Int _296;
frost$core$Error* _299;
frost$core$Object* _301;
frost$core$Error* _308;
frost$core$Object* _309;
$fn4 _312;
frost$core$String* _313;
frost$core$Object* _320;
frost$core$Int _324;
frost$core$Int _326;
frost$core$Object* _304;
frost$core$Error* _329;
frost$core$Object* _330;
frost$core$Int _335;
frost$core$Int _336;
int64_t _337;
int64_t _338;
bool _339;
frost$core$Bit _340;
bool _341;
frost$core$Int _344;
frost$core$Int _346;
frost$core$Object* _350;
frost$core$System$Process* _352;
frost$core$Object* _353;
frost$collections$Array* _356;
frost$core$Object* _357;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:62
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_1);
*(&local0) = ((frost$collections$Array*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:63
_13 = *(&local0);
_14 = &param1->path;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
frost$collections$Array$add$frost$collections$Array$T(_13, _16);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:64
_19 = *(&local0);
_20 = ((frost$core$Object*) &$s5);
frost$collections$Array$add$frost$collections$Array$T(_19, _20);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:65
_23 = *(&local0);
_24 = ((frost$core$Object*) &$s6);
frost$collections$Array$add$frost$collections$Array$T(_23, _24);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:66
_27 = *(&local0);
_28 = ((frost$core$Object*) &$s7);
frost$collections$Array$add$frost$collections$Array$T(_27, _28);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:67
_31 = &param4->debug;
_32 = *_31;
_33 = _32.value;
if (_33) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:68
_36 = *(&local0);
_37 = ((frost$core$Object*) &$s8);
frost$collections$Array$add$frost$collections$Array$T(_36, _37);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:70
_41 = *(&local0);
_42 = &param4->optimizationLevel;
_43 = *_42;
frost$core$Int$wrapper* $tmp9;
$tmp9 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp9->value = _43;
_44 = ((frost$core$Object*) $tmp9);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:70:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_47 = ($fn10) _44->$class->vtable[0];
_48 = _47(_44);
_49 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s11, _48);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_54);
_57 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_49, &$s12);
_58 = ((frost$core$Object*) _57);
frost$collections$Array$add$frost$collections$Array$T(_41, _58);
_60 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_60);
_62 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_64 = _44;
frost$core$Frost$unref$frost$core$Object$Q(_64);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:71
_67 = *(&local0);
_68 = ((frost$core$Object*) &$s13);
frost$collections$Array$add$frost$collections$Array$T(_67, _68);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:72
_71 = *(&local0);
_72 = &param2->path;
_73 = *_72;
_74 = ((frost$core$Object*) _73);
frost$collections$Array$add$frost$collections$Array$T(_71, _74);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:73
*(&local1) = ((frost$core$System$Process*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:74
*(&local2) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:75
_81 = &param0->clang;
_82 = *_81;
_83 = &_82->path;
_84 = *_83;
_85 = *(&local0);
_86 = ((frost$collections$ListView*) _85);
_87 = frost$core$System$exec$frost$core$String$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$Maybe$LTfrost$core$System$Process$GT(_84, _86);
_88 = &_87->$rawValue;
_89 = *_88;
_90 = _89.value;
_91 = _90 == 0u;
if (_91) goto block6; else goto block7;
block7:;
_93 = &_87->$data.$ERROR.field0;
_94 = *_93;
_95 = ((frost$core$Object*) _94);
frost$core$Frost$ref$frost$core$Object$Q(_95);
*(&local2) = _94;
_98 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_98);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:99
_246 = *(&local2);
_247 = ((frost$core$Object*) _246);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:99:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_250 = ($fn14) _247->$class->vtable[0];
_251 = _250(_247);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_251);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_258 = ((frost$core$Object*) _251);
frost$core$Frost$unref$frost$core$Object$Q(_258);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:100
_262 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_262);
_264 = (frost$core$Int) {100u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s15, _264, &$s16);
abort(); // unreachable
block6:;
_101 = &_87->$data.$SUCCESS.field0;
_102 = *_101;
_103 = ((frost$core$System$Process*) _102);
_104 = ((frost$core$Object*) _103);
frost$core$Frost$ref$frost$core$Object$Q(_104);
_106 = *(&local1);
_107 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_107);
*(&local1) = _103;
_110 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_110);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:77
_113 = (org$frostlang$frostc$Main$_Closure2*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$_Closure2), (frost$core$Class*) &org$frostlang$frostc$Main$_Closure2$class);
_114 = *(&local1);
org$frostlang$frostc$Main$_Closure2$init$frost$core$System$Process(_113, _114);
_116 = ((frost$core$Int8*) org$frostlang$frostc$Main$_Closure2$$anonymous1);
_117 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_118 = ((frost$core$Object*) _113);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Main.frost:77:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_121 = &_117->pointer;
*_121 = _116;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_118);
_125 = &_117->target;
_126 = *_125;
frost$core$Frost$unref$frost$core$Object$Q(_126);
_128 = &_117->target;
*_128 = _118;
_131 = _117;
// begin inline call to method frost.threads.Thread.unsafeStart(run:()=&>()):frost.threads.Thread from Main.frost:77:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:64
_134 = (frost$threads$Thread*) frostObjectAlloc(sizeof(frost$threads$Thread), (frost$core$Class*) &frost$threads$Thread$class);
// begin inline call to frost.threads.Thread.init() from Thread.frost:64:29
*(&local3) = ((frost$threads$Thread*) NULL);
_138 = ((frost$core$Object*) _134);
frost$core$Frost$ref$frost$core$Object$Q(_138);
_140 = *(&local3);
_141 = ((frost$core$Object*) _140);
frost$core$Frost$unref$frost$core$Object$Q(_141);
*(&local3) = _134;
_144 = ((frost$core$Object*) _134);
frost$core$Frost$unref$frost$core$Object$Q(_144);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:65
_147 = *(&local3);
frost$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(_147, _131, true);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:66
_150 = *(&local3);
_151 = ((frost$core$Object*) _150);
frost$core$Frost$ref$frost$core$Object$Q(_151);
_153 = *(&local3);
_154 = ((frost$core$Object*) _153);
frost$core$Frost$unref$frost$core$Object$Q(_154);
*(&local3) = ((frost$threads$Thread*) NULL);
*(&local4) = ((frost$threads$Thread*) NULL);
_159 = ((frost$core$Object*) _150);
frost$core$Frost$ref$frost$core$Object$Q(_159);
_161 = *(&local4);
_162 = ((frost$core$Object*) _161);
frost$core$Frost$unref$frost$core$Object$Q(_162);
*(&local4) = _150;
_165 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_165);
_167 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_167);
_169 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_169);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:86
_172 = (org$frostlang$frostc$Main$_Closure4*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$_Closure4), (frost$core$Class*) &org$frostlang$frostc$Main$_Closure4$class);
_173 = *(&local1);
org$frostlang$frostc$Main$_Closure4$init$frost$core$System$Process(_172, _173);
_175 = ((frost$core$Int8*) org$frostlang$frostc$Main$_Closure4$$anonymous3);
_176 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_177 = ((frost$core$Object*) _172);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Main.frost:86:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_180 = &_176->pointer;
*_180 = _175;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_177);
_184 = &_176->target;
_185 = *_184;
frost$core$Frost$unref$frost$core$Object$Q(_185);
_187 = &_176->target;
*_187 = _177;
_190 = _176;
// begin inline call to method frost.threads.Thread.unsafeStart(run:()=&>()):frost.threads.Thread from Main.frost:86:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:64
_193 = (frost$threads$Thread*) frostObjectAlloc(sizeof(frost$threads$Thread), (frost$core$Class*) &frost$threads$Thread$class);
// begin inline call to frost.threads.Thread.init() from Thread.frost:64:29
*(&local5) = ((frost$threads$Thread*) NULL);
_197 = ((frost$core$Object*) _193);
frost$core$Frost$ref$frost$core$Object$Q(_197);
_199 = *(&local5);
_200 = ((frost$core$Object*) _199);
frost$core$Frost$unref$frost$core$Object$Q(_200);
*(&local5) = _193;
_203 = ((frost$core$Object*) _193);
frost$core$Frost$unref$frost$core$Object$Q(_203);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:65
_206 = *(&local5);
frost$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(_206, _190, true);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:66
_209 = *(&local5);
_210 = ((frost$core$Object*) _209);
frost$core$Frost$ref$frost$core$Object$Q(_210);
_212 = *(&local5);
_213 = ((frost$core$Object*) _212);
frost$core$Frost$unref$frost$core$Object$Q(_213);
*(&local5) = ((frost$threads$Thread*) NULL);
*(&local6) = ((frost$threads$Thread*) NULL);
_218 = ((frost$core$Object*) _209);
frost$core$Frost$ref$frost$core$Object$Q(_218);
_220 = *(&local6);
_221 = ((frost$core$Object*) _220);
frost$core$Frost$unref$frost$core$Object$Q(_221);
*(&local6) = _209;
_224 = ((frost$core$Object*) _209);
frost$core$Frost$unref$frost$core$Object$Q(_224);
_226 = ((frost$core$Object*) _176);
frost$core$Frost$unref$frost$core$Object$Q(_226);
_228 = ((frost$core$Object*) _172);
frost$core$Frost$unref$frost$core$Object$Q(_228);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:95
_231 = *(&local4);
frost$threads$Thread$waitFor(_231);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:96
_234 = *(&local6);
frost$threads$Thread$waitFor(_234);
_236 = *(&local6);
_237 = ((frost$core$Object*) _236);
frost$core$Frost$unref$frost$core$Object$Q(_237);
*(&local6) = ((frost$threads$Thread*) NULL);
_240 = *(&local4);
_241 = ((frost$core$Object*) _240);
frost$core$Frost$unref$frost$core$Object$Q(_241);
*(&local4) = ((frost$threads$Thread*) NULL);
_267 = *(&local2);
_268 = ((frost$core$Object*) _267);
frost$core$Frost$unref$frost$core$Object$Q(_268);
*(&local2) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:102
_272 = *(&local1);
frost$core$System$Process$waitFor$R$frost$core$Int(&_273, _272);
*(&local7) = _273;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:103
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:103:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_278 = param3.value;
_279 = !_278;
_280 = (frost$core$Bit) {_279};
_282 = _280.value;
if (_282) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:104
*(&local8) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:105
_287 = frost$io$File$delete$R$frost$core$Error$Q(param1);
_288 = _287 == NULL;
if (_288) goto block21; else goto block22;
block22:;
_290 = ((frost$core$Object*) _287);
frost$core$Frost$ref$frost$core$Object$Q(_290);
_292 = _287 != NULL;
_293 = (frost$core$Bit) {_292};
_294 = _293.value;
if (_294) goto block23; else goto block24;
block24:;
_296 = (frost$core$Int) {105u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s17, _296, &$s18);
abort(); // unreachable
block23:;
_299 = _287;
*(&local8) = _299;
_301 = ((frost$core$Object*) _287);
frost$core$Frost$unref$frost$core$Object$Q(_301);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:108
_308 = *(&local8);
_309 = ((frost$core$Object*) _308);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:108:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_312 = ($fn19) _309->$class->vtable[0];
_313 = _312(_309);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_313);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_320 = ((frost$core$Object*) _313);
frost$core$Frost$unref$frost$core$Object$Q(_320);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:109
_324 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_324);
_326 = (frost$core$Int) {109u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s20, _326, &$s21);
abort(); // unreachable
block21:;
_304 = ((frost$core$Object*) _287);
frost$core$Frost$unref$frost$core$Object$Q(_304);
_329 = *(&local8);
_330 = ((frost$core$Object*) _329);
frost$core$Frost$unref$frost$core$Object$Q(_330);
*(&local8) = ((frost$core$Error*) NULL);
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:112
_335 = *(&local7);
_336 = (frost$core$Int) {0u};
_337 = _335.value;
_338 = _336.value;
_339 = _337 != _338;
_340 = (frost$core$Bit) {_339};
_341 = _340.value;
if (_341) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:113
_344 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_344);
_346 = (frost$core$Int) {113u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _346, &$s23);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:115
_350 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_350);
_352 = *(&local1);
_353 = ((frost$core$Object*) _352);
frost$core$Frost$unref$frost$core$Object$Q(_353);
*(&local1) = ((frost$core$System$Process*) NULL);
_356 = *(&local0);
_357 = ((frost$core$Object*) _356);
frost$core$Frost$unref$frost$core$Object$Q(_357);
*(&local0) = ((frost$collections$Array*) NULL);
return param2;

}
frost$core$String* org$frostlang$frostc$Main$$anonymous5$frost$io$File$R$frost$core$String(frost$io$File* param0) {

frost$core$Object* _1;
$fn24 _4;
frost$core$String* _5;
frost$core$String* _6;
frost$core$Object* _7;
frost$core$Object* _9;
frost$core$Object* _11;
frost$core$Object* _14;
frost$core$Object* _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:126
_1 = ((frost$core$Object*) param0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:126:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_4 = ($fn25) _1->$class->vtable[0];
_5 = _4(_1);
_6 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s26, _5);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_14 = ((frost$core$Object*) _6);
frost$core$Frost$ref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_16);
return _6;

}
frost$core$String* org$frostlang$frostc$Main$$anonymous6$frost$core$String$R$frost$core$String(frost$core$String* param0) {

frost$core$String* _1;
frost$core$Object* _2;
frost$core$Object* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:127
_1 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s27, param0);
_2 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_4);
return _1;

}
frost$io$File* org$frostlang$frostc$Main$toExecutable$frost$collections$Array$LTfrost$io$File$GT$frost$collections$Array$LTfrost$core$String$GT$frost$io$File$frost$io$File$frost$core$Bit$org$frostlang$frostc$Compiler$Settings$R$frost$io$File(void* rawSelf, frost$collections$Array* param1, frost$collections$Array* param2, frost$io$File* param3, frost$io$File* param4, frost$core$Bit param5, org$frostlang$frostc$Compiler$Settings* param6) {
org$frostlang$frostc$Main* param0 = (org$frostlang$frostc$Main*) rawSelf;

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
frost$collections$Array* _1;
frost$core$Object* _4;
frost$collections$Array* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$collections$Array* _13;
frost$core$String** _14;
frost$core$String* _15;
frost$core$Object* _16;
frost$collections$Array* _19;
frost$core$String* _20;
frost$core$String* _21;
frost$core$String* _22;
frost$core$Object* _23;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$Object* _29;
frost$collections$Array* _32;
frost$core$Object* _33;
frost$collections$Array* _36;
frost$core$Object* _37;
frost$collections$Array* _40;
frost$core$Object* _41;
frost$collections$Array* _44;
frost$collections$CollectionView* _45;
frost$core$Int8* _46;
frost$core$Method* _47;
frost$core$Int8** _50;
frost$core$Object* _53;
frost$core$Immutable** _55;
frost$core$Immutable* _56;
frost$core$Object* _57;
frost$core$Immutable** _59;
frost$core$Method* _62;
frost$core$MutableMethod* _63;
frost$core$MutableMethod* _64;
$fn28 _65;
frost$collections$Array* _66;
frost$collections$CollectionView* _67;
frost$core$Object* _69;
frost$core$Object* _71;
frost$collections$Array* _74;
frost$collections$CollectionView* _75;
frost$core$Int8* _76;
frost$core$Method* _77;
frost$core$Int8** _80;
frost$core$Object* _83;
frost$core$Immutable** _85;
frost$core$Immutable* _86;
frost$core$Object* _87;
frost$core$Immutable** _89;
frost$core$Method* _92;
frost$core$MutableMethod* _93;
frost$core$MutableMethod* _94;
$fn29 _95;
frost$collections$Array* _96;
frost$collections$CollectionView* _97;
frost$core$Object* _99;
frost$core$Object* _101;
frost$core$String* _104;
frost$core$Int64 _107;
int64_t _110;
int64_t _111;
frost$core$Int _112;
frost$collections$Array* _114;
frost$core$Object* _115;
frost$core$Object* _117;
frost$core$Object* _121;
frost$collections$Array* _123;
frost$core$Object* _124;
frost$core$Object* _127;
frost$core$Object* _129;
frost$collections$Array* _132;
frost$collections$Iterable* _133;
$fn30 _134;
frost$collections$Iterator* _135;
$fn31 _137;
frost$core$Bit _138;
bool _139;
$fn32 _142;
frost$core$Object* _143;
frost$core$String* _144;
frost$core$Object* _145;
frost$core$String* _147;
frost$core$Object* _148;
frost$io$File* _152;
frost$core$String* _153;
frost$core$Object* _156;
frost$io$File* _158;
frost$core$Object* _159;
frost$core$Object* _162;
frost$collections$Array* _165;
frost$io$File* _166;
frost$io$File* _169;
frost$core$String** _170;
frost$core$String* _171;
frost$core$String* _172;
frost$core$Object* _174;
frost$core$String* _176;
frost$core$Object* _177;
frost$core$Object* _180;
frost$core$Object* _182;
frost$core$String* _185;
bool _186;
frost$core$Bit _187;
bool _188;
frost$core$Object* _191;
frost$core$String* _193;
frost$core$Object* _194;
frost$core$Object* _198;
frost$io$File* _202;
frost$core$String* _203;
bool _204;
frost$core$Bit _205;
bool _206;
frost$core$Int _208;
frost$core$String* _211;
frost$io$File* _213;
frost$core$Object* _214;
frost$core$Object* _216;
frost$core$String* _218;
frost$core$Object* _219;
frost$core$Object* _223;
frost$io$File* _226;
bool _227;
frost$core$Bit _228;
bool _229;
frost$core$Int _231;
frost$io$File* _234;
frost$core$Object* _235;
$fn33 _238;
frost$core$String* _239;
frost$core$String* _240;
frost$core$Object* _241;
frost$core$Object* _243;
frost$core$Object* _245;
frost$core$Object* _248;
frost$core$Object* _250;
frost$core$Object* _252;
frost$io$File* _255;
frost$core$String** _260;
frost$core$String* _261;
frost$core$String$Index$nullable _262;
frost$core$String$Index$nullable _265;
bool _266;
frost$core$Bit _267;
bool _268;
frost$core$String** _271;
frost$core$String* _272;
frost$core$String** _273;
frost$core$String* _274;
frost$core$String$Index$nullable _275;
bool _276;
frost$core$Bit _277;
bool _278;
frost$core$Int _280;
frost$core$String$Index _283;
frost$core$String$Index _284;
frost$core$String$Index$nullable _285;
frost$core$Bit _286;
frost$core$Range$LTfrost$core$String$Index$Q$GT _287;
frost$core$String* _288;
frost$core$Object* _289;
frost$core$Object* _291;
frost$core$Object* _294;
frost$core$String** _299;
frost$core$String* _300;
frost$core$Object* _301;
frost$core$Object* _304;
frost$core$String* _308;
frost$core$Object* _310;
frost$core$String* _312;
frost$core$Object* _313;
frost$core$Object* _316;
frost$core$String* _319;
frost$core$String$Index _322;
frost$core$String$Index$nullable _323;
frost$core$String$Index$nullable _327;
bool _328;
frost$core$Bit _329;
bool _330;
frost$core$String* _333;
frost$core$Object* _334;
frost$core$String* _336;
frost$core$Object* _337;
frost$core$String* _340;
frost$core$Object* _341;
frost$core$Object* _345;
frost$core$String* _349;
frost$core$String$Index$nullable _350;
frost$core$Bit _351;
frost$core$Range$LTfrost$core$String$Index$Q$GT _352;
frost$core$String* _353;
frost$core$Object* _354;
frost$core$Object* _356;
frost$core$String* _358;
frost$core$Object* _359;
frost$core$String* _362;
frost$core$Object* _363;
frost$core$Object* _367;
frost$core$String* _370;
frost$core$Object* _372;
frost$core$String* _374;
frost$core$Object* _375;
frost$core$Object* _378;
frost$core$String* _381;
frost$core$Bit _382;
bool _383;
frost$core$Int _385;
frost$core$String* _389;
frost$core$Int _390;
frost$core$Int$nullable _391;
frost$core$Bit _392;
frost$core$Range$LTfrost$core$Int$Q$GT _393;
frost$core$String* _394;
frost$core$Object* _395;
frost$core$String* _397;
frost$core$Object* _398;
frost$core$Object* _401;
frost$collections$Array* _404;
frost$core$String* _405;
frost$core$String* _406;
frost$core$Object* _407;
frost$core$Object* _409;
frost$core$String* _411;
frost$core$Object* _412;
frost$core$String* _415;
frost$core$Object* _416;
frost$io$File* _419;
frost$core$Object* _420;
frost$io$File* _423;
frost$core$Object* _424;
frost$core$Object* _427;
frost$core$String* _429;
frost$core$Object* _430;
frost$core$Object* _434;
frost$collections$Array* _437;
frost$core$Object* _438;
frost$collections$Array* _441;
frost$core$Object* _442;
frost$core$Bit* _445;
frost$core$Bit _446;
bool _447;
frost$collections$Array* _450;
frost$core$Object* _451;
frost$collections$Array* _455;
frost$core$Int* _456;
frost$core$Int _457;
frost$core$Object* _458;
$fn34 _461;
frost$core$String* _462;
frost$core$String* _463;
frost$core$Object* _464;
frost$core$Object* _466;
frost$core$Object* _468;
frost$core$String* _471;
frost$core$Object* _472;
frost$core$Object* _474;
frost$core$Object* _476;
frost$core$Object* _478;
frost$collections$Array* _481;
frost$core$Object* _482;
frost$collections$Array* _485;
frost$core$Object* _486;
frost$collections$Array* _489;
frost$core$String** _490;
frost$core$String* _491;
frost$core$Object* _492;
frost$io$File** _499;
frost$io$File* _500;
frost$core$String** _501;
frost$core$String* _502;
frost$collections$Array* _503;
frost$collections$ListView* _504;
frost$core$Maybe* _505;
frost$core$Int* _506;
frost$core$Int _507;
int64_t _508;
bool _509;
frost$core$Error** _511;
frost$core$Error* _512;
frost$core$Object* _513;
frost$core$Object* _516;
frost$core$Error* _552;
frost$core$Object* _553;
$fn35 _556;
frost$core$String* _557;
frost$core$Object* _564;
frost$core$Int _568;
frost$core$Int _570;
frost$core$Object** _519;
frost$core$Object* _520;
frost$core$System$Process* _521;
frost$core$Object* _522;
frost$core$System$Process* _524;
frost$core$Object* _525;
frost$core$Object* _528;
frost$core$System$Process* _531;
frost$io$InputStream* _532;
$fn36 _533;
frost$core$String* _534;
frost$core$Object* _536;
frost$core$Object* _538;
frost$core$System$Process* _541;
frost$io$InputStream* _542;
$fn37 _543;
frost$core$String* _544;
frost$core$Object* _546;
frost$core$Object* _548;
frost$core$Error* _573;
frost$core$Object* _574;
frost$core$System$Process* _578;
frost$core$Int _579;
bool _584;
bool _585;
frost$core$Bit _586;
bool _588;
frost$core$Error* _593;
bool _594;
frost$core$Object* _596;
bool _598;
frost$core$Bit _599;
bool _600;
frost$core$Int _602;
frost$core$Error* _605;
frost$core$Object* _607;
frost$core$Error* _614;
frost$core$Object* _615;
$fn38 _618;
frost$core$String* _619;
frost$core$Object* _626;
frost$core$Int _630;
frost$core$Int _632;
frost$core$Object* _610;
frost$core$Error* _635;
frost$core$Object* _636;
frost$core$Int _641;
frost$core$Int _642;
int64_t _643;
int64_t _644;
bool _645;
frost$core$Bit _646;
bool _647;
frost$core$Int _650;
frost$core$Int _652;
frost$core$Object* _656;
frost$core$System$Process* _658;
frost$core$Object* _659;
frost$collections$Array* _662;
frost$core$Object* _663;
frost$collections$Array* _666;
frost$core$Object* _667;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:120
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_1);
*(&local0) = ((frost$collections$Array*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:121
_13 = *(&local0);
_14 = &param3->path;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
frost$collections$Array$add$frost$collections$Array$T(_13, _16);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:122
_19 = *(&local0);
_20 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
_21 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s39, _20);
_22 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_21, &$s40);
_23 = ((frost$core$Object*) _22);
frost$collections$Array$add$frost$collections$Array$T(_19, _23);
_25 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_29);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:123
_32 = *(&local0);
_33 = ((frost$core$Object*) &$s41);
frost$collections$Array$add$frost$collections$Array$T(_32, _33);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:124
_36 = *(&local0);
_37 = ((frost$core$Object*) &$s42);
frost$collections$Array$add$frost$collections$Array$T(_36, _37);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:125
_40 = *(&local0);
_41 = ((frost$core$Object*) &$s43);
frost$collections$Array$add$frost$collections$Array$T(_40, _41);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:126
_44 = *(&local0);
_45 = ((frost$collections$CollectionView*) param1);
_46 = ((frost$core$Int8*) org$frostlang$frostc$Main$$anonymous5$frost$io$File$R$frost$core$String);
_47 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Main.frost:126:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_50 = &_47->pointer;
*_50 = _46;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_53 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_53);
_55 = &_47->target;
_56 = *_55;
_57 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_57);
_59 = &_47->target;
*_59 = ((frost$core$Immutable*) NULL);
_62 = _47;
_63 = ((frost$core$MutableMethod*) _62);
_64 = _63;
ITable* $tmp44 = _45->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp44 = $tmp44->next;
}
_65 = $tmp44->methods[9];
_66 = _65(_45, _64);
_67 = ((frost$collections$CollectionView*) _66);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_44, _67);
_69 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_71);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:127
_74 = *(&local0);
_75 = ((frost$collections$CollectionView*) param2);
_76 = ((frost$core$Int8*) org$frostlang$frostc$Main$$anonymous6$frost$core$String$R$frost$core$String);
_77 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Main.frost:127:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_80 = &_77->pointer;
*_80 = _76;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_83 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_83);
_85 = &_77->target;
_86 = *_85;
_87 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_87);
_89 = &_77->target;
*_89 = ((frost$core$Immutable*) NULL);
_92 = _77;
_93 = ((frost$core$MutableMethod*) _92);
_94 = _93;
ITable* $tmp45 = _75->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
_95 = $tmp45->methods[9];
_96 = _95(_75, _94);
_97 = ((frost$collections$CollectionView*) _96);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_74, _97);
_99 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_99);
_101 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_101);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:128
_104 = org$frostlang$frostc$Config$icuLibraries$R$frost$core$String();
// begin inline call to function frost.core.String.split(delimiter:frost.core.String):frost.collections.Array<frost.core.String> from Main.frost:128:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1378
_107 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_110 = _107.value;
_111 = ((int64_t) _110);
_112 = (frost$core$Int) {_111};
_114 = frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(_104, &$s46, _112);
_115 = ((frost$core$Object*) _114);
frost$core$Frost$ref$frost$core$Object$Q(_115);
_117 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_117);
*(&local1) = ((frost$collections$Array*) NULL);
_121 = ((frost$core$Object*) _114);
frost$core$Frost$ref$frost$core$Object$Q(_121);
_123 = *(&local1);
_124 = ((frost$core$Object*) _123);
frost$core$Frost$unref$frost$core$Object$Q(_124);
*(&local1) = _114;
_127 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_127);
_129 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_129);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:129
_132 = *(&local1);
_133 = ((frost$collections$Iterable*) _132);
ITable* $tmp47 = _133->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp47 = $tmp47->next;
}
_134 = $tmp47->methods[0];
_135 = _134(_133);
goto block5;
block5:;
ITable* $tmp48 = _135->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp48 = $tmp48->next;
}
_137 = $tmp48->methods[0];
_138 = _137(_135);
_139 = _138.value;
if (_139) goto block7; else goto block6;
block6:;
*(&local2) = ((frost$core$String*) NULL);
ITable* $tmp49 = _135->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp49 = $tmp49->next;
}
_142 = $tmp49->methods[1];
_143 = _142(_135);
_144 = ((frost$core$String*) _143);
_145 = ((frost$core$Object*) _144);
frost$core$Frost$ref$frost$core$Object$Q(_145);
_147 = *(&local2);
_148 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_148);
*(&local2) = _144;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:130
_152 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_153 = *(&local2);
frost$io$File$init$frost$core$String(_152, _153);
*(&local3) = ((frost$io$File*) NULL);
_156 = ((frost$core$Object*) _152);
frost$core$Frost$ref$frost$core$Object$Q(_156);
_158 = *(&local3);
_159 = ((frost$core$Object*) _158);
frost$core$Frost$unref$frost$core$Object$Q(_159);
*(&local3) = _152;
_162 = ((frost$core$Object*) _152);
frost$core$Frost$unref$frost$core$Object$Q(_162);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:131
_165 = *(&local0);
_166 = *(&local3);
// begin inline call to function frost.io.File.get_parent():frost.io.File? from Main.frost:131:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_169 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_166, &$s50);
_170 = &_169->path;
_171 = *_170;
_172 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_171);
*(&local5) = ((frost$core$String*) NULL);
_174 = ((frost$core$Object*) _172);
frost$core$Frost$ref$frost$core$Object$Q(_174);
_176 = *(&local5);
_177 = ((frost$core$Object*) _176);
frost$core$Frost$unref$frost$core$Object$Q(_177);
*(&local5) = _172;
_180 = ((frost$core$Object*) _172);
frost$core$Frost$unref$frost$core$Object$Q(_180);
_182 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_182);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_185 = *(&local5);
_186 = _185 == NULL;
_187 = (frost$core$Bit) {_186};
_188 = _187.value;
if (_188) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_191 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_191);
_193 = *(&local5);
_194 = ((frost$core$Object*) _193);
frost$core$Frost$unref$frost$core$Object$Q(_194);
*(&local5) = ((frost$core$String*) NULL);
*(&local4) = ((frost$io$File*) NULL);
_198 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_198);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_202 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_203 = *(&local5);
_204 = _203 != NULL;
_205 = (frost$core$Bit) {_204};
_206 = _205.value;
if (_206) goto block11; else goto block12;
block12:;
_208 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, _208, &$s52);
abort(); // unreachable
block11:;
_211 = _203;
frost$io$File$init$frost$core$String(_202, _211);
_213 = _202;
_214 = ((frost$core$Object*) _213);
frost$core$Frost$ref$frost$core$Object$Q(_214);
_216 = ((frost$core$Object*) _202);
frost$core$Frost$unref$frost$core$Object$Q(_216);
_218 = *(&local5);
_219 = ((frost$core$Object*) _218);
frost$core$Frost$unref$frost$core$Object$Q(_219);
*(&local5) = ((frost$core$String*) NULL);
*(&local4) = _213;
_223 = ((frost$core$Object*) _213);
frost$core$Frost$ref$frost$core$Object$Q(_223);
goto block8;
block8:;
_226 = *(&local4);
_227 = _226 != NULL;
_228 = (frost$core$Bit) {_227};
_229 = _228.value;
if (_229) goto block13; else goto block14;
block14:;
_231 = (frost$core$Int) {131u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s53, _231, &$s54);
abort(); // unreachable
block13:;
_234 = _226;
_235 = ((frost$core$Object*) _234);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:131:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_238 = ($fn55) _235->$class->vtable[0];
_239 = _238(_235);
_240 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s56, _239);
_241 = ((frost$core$Object*) _240);
frost$core$Frost$ref$frost$core$Object$Q(_241);
_243 = ((frost$core$Object*) _240);
frost$core$Frost$unref$frost$core$Object$Q(_243);
_245 = ((frost$core$Object*) _239);
frost$core$Frost$unref$frost$core$Object$Q(_245);
_248 = ((frost$core$Object*) _240);
frost$collections$Array$add$frost$collections$Array$T(_165, _248);
_250 = ((frost$core$Object*) _240);
frost$core$Frost$unref$frost$core$Object$Q(_250);
_252 = ((frost$core$Object*) _226);
frost$core$Frost$unref$frost$core$Object$Q(_252);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:132
_255 = *(&local3);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from Main.frost:132:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
// begin inline call to function frost.io.File.get_name():frost.core.String from File.frost:157:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:147
_260 = &_255->path;
_261 = *_260;
_262 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_261, &$s57);
*(&local8) = _262;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
_265 = *(&local8);
_266 = _265.nonnull;
_267 = (frost$core$Bit) {_266};
_268 = _267.value;
if (_268) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
_271 = &_255->path;
_272 = *_271;
_273 = &_255->path;
_274 = *_273;
_275 = *(&local8);
_276 = _275.nonnull;
_277 = (frost$core$Bit) {_276};
_278 = _277.value;
if (_278) goto block21; else goto block22;
block22:;
_280 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s58, _280, &$s59);
abort(); // unreachable
block21:;
_283 = ((frost$core$String$Index) _275.value);
_284 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_274, _283);
_285 = ((frost$core$String$Index$nullable) { _284, true });
_286 = (frost$core$Bit) {false};
_287 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_285, ((frost$core$String$Index$nullable) { .nonnull = false }), _286);
_288 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_272, _287);
_289 = ((frost$core$Object*) _288);
frost$core$Frost$ref$frost$core$Object$Q(_289);
_291 = ((frost$core$Object*) _288);
frost$core$Frost$unref$frost$core$Object$Q(_291);
*(&local7) = _288;
_294 = ((frost$core$Object*) _288);
frost$core$Frost$ref$frost$core$Object$Q(_294);
goto block17;
block20:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:152
_299 = &_255->path;
_300 = *_299;
_301 = ((frost$core$Object*) _300);
frost$core$Frost$ref$frost$core$Object$Q(_301);
*(&local7) = _300;
_304 = ((frost$core$Object*) _300);
frost$core$Frost$ref$frost$core$Object$Q(_304);
goto block17;
block19:;
goto block17;
block17:;
_308 = *(&local7);
*(&local9) = ((frost$core$String*) NULL);
_310 = ((frost$core$Object*) _308);
frost$core$Frost$ref$frost$core$Object$Q(_310);
_312 = *(&local9);
_313 = ((frost$core$Object*) _312);
frost$core$Frost$unref$frost$core$Object$Q(_313);
*(&local9) = _308;
_316 = ((frost$core$Object*) _308);
frost$core$Frost$unref$frost$core$Object$Q(_316);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_319 = *(&local9);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:158:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
_322 = frost$core$String$get_end$R$frost$core$String$Index(_319);
_323 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_319, &$s60, _322);
*(&local10) = _323;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_327 = *(&local10);
_328 = !_327.nonnull;
_329 = (frost$core$Bit) {_328};
_330 = _329.value;
if (_330) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_333 = *(&local9);
_334 = ((frost$core$Object*) _333);
frost$core$Frost$ref$frost$core$Object$Q(_334);
_336 = *(&local9);
_337 = ((frost$core$Object*) _336);
frost$core$Frost$unref$frost$core$Object$Q(_337);
*(&local9) = ((frost$core$String*) NULL);
_340 = *(&local7);
_341 = ((frost$core$Object*) _340);
frost$core$Frost$unref$frost$core$Object$Q(_341);
*(&local7) = ((frost$core$String*) NULL);
*(&local6) = _333;
_345 = ((frost$core$Object*) _333);
frost$core$Frost$ref$frost$core$Object$Q(_345);
goto block16;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_349 = *(&local9);
_350 = *(&local10);
_351 = (frost$core$Bit) {false};
_352 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _350, _351);
_353 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_349, _352);
_354 = ((frost$core$Object*) _353);
frost$core$Frost$ref$frost$core$Object$Q(_354);
_356 = ((frost$core$Object*) _353);
frost$core$Frost$unref$frost$core$Object$Q(_356);
_358 = *(&local9);
_359 = ((frost$core$Object*) _358);
frost$core$Frost$unref$frost$core$Object$Q(_359);
*(&local9) = ((frost$core$String*) NULL);
_362 = *(&local7);
_363 = ((frost$core$Object*) _362);
frost$core$Frost$unref$frost$core$Object$Q(_363);
*(&local7) = ((frost$core$String*) NULL);
*(&local6) = _353;
_367 = ((frost$core$Object*) _353);
frost$core$Frost$ref$frost$core$Object$Q(_367);
goto block16;
block16:;
_370 = *(&local6);
*(&local11) = ((frost$core$String*) NULL);
_372 = ((frost$core$Object*) _370);
frost$core$Frost$ref$frost$core$Object$Q(_372);
_374 = *(&local11);
_375 = ((frost$core$Object*) _374);
frost$core$Frost$unref$frost$core$Object$Q(_375);
*(&local11) = _370;
_378 = ((frost$core$Object*) _370);
frost$core$Frost$unref$frost$core$Object$Q(_378);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:133
_381 = *(&local11);
_382 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_381, &$s61);
_383 = _382.value;
if (_383) goto block26; else goto block27;
block27:;
_385 = (frost$core$Int) {133u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s62, _385);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:134
_389 = *(&local11);
_390 = (frost$core$Int) {3u};
_391 = ((frost$core$Int$nullable) { _390, true });
_392 = (frost$core$Bit) {false};
_393 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(_391, ((frost$core$Int$nullable) { .nonnull = false }), _392);
_394 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String(_389, _393);
_395 = ((frost$core$Object*) _394);
frost$core$Frost$ref$frost$core$Object$Q(_395);
_397 = *(&local11);
_398 = ((frost$core$Object*) _397);
frost$core$Frost$unref$frost$core$Object$Q(_398);
*(&local11) = _394;
_401 = ((frost$core$Object*) _394);
frost$core$Frost$unref$frost$core$Object$Q(_401);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:135
_404 = *(&local0);
_405 = *(&local11);
_406 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s63, _405);
_407 = ((frost$core$Object*) _406);
frost$collections$Array$add$frost$collections$Array$T(_404, _407);
_409 = ((frost$core$Object*) _406);
frost$core$Frost$unref$frost$core$Object$Q(_409);
_411 = *(&local11);
_412 = ((frost$core$Object*) _411);
frost$core$Frost$unref$frost$core$Object$Q(_412);
*(&local11) = ((frost$core$String*) NULL);
_415 = *(&local6);
_416 = ((frost$core$Object*) _415);
frost$core$Frost$unref$frost$core$Object$Q(_416);
*(&local6) = ((frost$core$String*) NULL);
_419 = *(&local4);
_420 = ((frost$core$Object*) _419);
frost$core$Frost$unref$frost$core$Object$Q(_420);
*(&local4) = ((frost$io$File*) NULL);
_423 = *(&local3);
_424 = ((frost$core$Object*) _423);
frost$core$Frost$unref$frost$core$Object$Q(_424);
*(&local3) = ((frost$io$File*) NULL);
_427 = _143;
frost$core$Frost$unref$frost$core$Object$Q(_427);
_429 = *(&local2);
_430 = ((frost$core$Object*) _429);
frost$core$Frost$unref$frost$core$Object$Q(_430);
*(&local2) = ((frost$core$String*) NULL);
goto block5;
block7:;
_434 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_434);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:137
_437 = *(&local0);
_438 = ((frost$core$Object*) &$s64);
frost$collections$Array$add$frost$collections$Array$T(_437, _438);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:138
_441 = *(&local0);
_442 = ((frost$core$Object*) &$s65);
frost$collections$Array$add$frost$collections$Array$T(_441, _442);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:139
_445 = &param6->debug;
_446 = *_445;
_447 = _446.value;
if (_447) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:140
_450 = *(&local0);
_451 = ((frost$core$Object*) &$s66);
frost$collections$Array$add$frost$collections$Array$T(_450, _451);
goto block29;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:142
_455 = *(&local0);
_456 = &param6->optimizationLevel;
_457 = *_456;
frost$core$Int$wrapper* $tmp67;
$tmp67 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp67->value = _457;
_458 = ((frost$core$Object*) $tmp67);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:142:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_461 = ($fn68) _458->$class->vtable[0];
_462 = _461(_458);
_463 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s69, _462);
_464 = ((frost$core$Object*) _463);
frost$core$Frost$ref$frost$core$Object$Q(_464);
_466 = ((frost$core$Object*) _463);
frost$core$Frost$unref$frost$core$Object$Q(_466);
_468 = ((frost$core$Object*) _462);
frost$core$Frost$unref$frost$core$Object$Q(_468);
_471 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_463, &$s70);
_472 = ((frost$core$Object*) _471);
frost$collections$Array$add$frost$collections$Array$T(_455, _472);
_474 = ((frost$core$Object*) _471);
frost$core$Frost$unref$frost$core$Object$Q(_474);
_476 = ((frost$core$Object*) _463);
frost$core$Frost$unref$frost$core$Object$Q(_476);
_478 = _458;
frost$core$Frost$unref$frost$core$Object$Q(_478);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:143
_481 = *(&local0);
_482 = ((frost$core$Object*) &$s71);
frost$collections$Array$add$frost$collections$Array$T(_481, _482);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:144
_485 = *(&local0);
_486 = ((frost$core$Object*) &$s72);
frost$collections$Array$add$frost$collections$Array$T(_485, _486);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:145
_489 = *(&local0);
_490 = &param4->path;
_491 = *_490;
_492 = ((frost$core$Object*) _491);
frost$collections$Array$add$frost$collections$Array$T(_489, _492);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:146
*(&local12) = ((frost$core$System$Process*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:147
*(&local13) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:148
_499 = &param0->clang;
_500 = *_499;
_501 = &_500->path;
_502 = *_501;
_503 = *(&local0);
_504 = ((frost$collections$ListView*) _503);
_505 = frost$core$System$exec$frost$core$String$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$Maybe$LTfrost$core$System$Process$GT(_502, _504);
_506 = &_505->$rawValue;
_507 = *_506;
_508 = _507.value;
_509 = _508 == 0u;
if (_509) goto block33; else goto block34;
block34:;
_511 = &_505->$data.$ERROR.field0;
_512 = *_511;
_513 = ((frost$core$Object*) _512);
frost$core$Frost$ref$frost$core$Object$Q(_513);
*(&local13) = _512;
_516 = ((frost$core$Object*) _505);
frost$core$Frost$unref$frost$core$Object$Q(_516);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:153
_552 = *(&local13);
_553 = ((frost$core$Object*) _552);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:153:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_556 = ($fn73) _553->$class->vtable[0];
_557 = _556(_553);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_557);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_564 = ((frost$core$Object*) _557);
frost$core$Frost$unref$frost$core$Object$Q(_564);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:154
_568 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_568);
_570 = (frost$core$Int) {154u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s74, _570, &$s75);
abort(); // unreachable
block33:;
_519 = &_505->$data.$SUCCESS.field0;
_520 = *_519;
_521 = ((frost$core$System$Process*) _520);
_522 = ((frost$core$Object*) _521);
frost$core$Frost$ref$frost$core$Object$Q(_522);
_524 = *(&local12);
_525 = ((frost$core$Object*) _524);
frost$core$Frost$unref$frost$core$Object$Q(_525);
*(&local12) = _521;
_528 = ((frost$core$Object*) _505);
frost$core$Frost$unref$frost$core$Object$Q(_528);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:149
_531 = *(&local12);
_532 = frost$core$System$Process$standardOutput$R$frost$io$InputStream(_531);
_533 = ($fn76) _532->$class->vtable[14];
_534 = _533(_532);
frost$io$Console$printError$frost$core$String(_534);
_536 = ((frost$core$Object*) _534);
frost$core$Frost$unref$frost$core$Object$Q(_536);
_538 = ((frost$core$Object*) _532);
frost$core$Frost$unref$frost$core$Object$Q(_538);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:150
_541 = *(&local12);
_542 = frost$core$System$Process$standardError$R$frost$io$InputStream(_541);
_543 = ($fn77) _542->$class->vtable[14];
_544 = _543(_542);
frost$io$Console$printError$frost$core$String(_544);
_546 = ((frost$core$Object*) _544);
frost$core$Frost$unref$frost$core$Object$Q(_546);
_548 = ((frost$core$Object*) _542);
frost$core$Frost$unref$frost$core$Object$Q(_548);
_573 = *(&local13);
_574 = ((frost$core$Object*) _573);
frost$core$Frost$unref$frost$core$Object$Q(_574);
*(&local13) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:156
_578 = *(&local12);
frost$core$System$Process$waitFor$R$frost$core$Int(&_579, _578);
*(&local14) = _579;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:157
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:157:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_584 = param5.value;
_585 = !_584;
_586 = (frost$core$Bit) {_585};
_588 = _586.value;
if (_588) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:158
*(&local15) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:159
_593 = frost$io$File$delete$R$frost$core$Error$Q(param3);
_594 = _593 == NULL;
if (_594) goto block42; else goto block43;
block43:;
_596 = ((frost$core$Object*) _593);
frost$core$Frost$ref$frost$core$Object$Q(_596);
_598 = _593 != NULL;
_599 = (frost$core$Bit) {_598};
_600 = _599.value;
if (_600) goto block44; else goto block45;
block45:;
_602 = (frost$core$Int) {159u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s78, _602, &$s79);
abort(); // unreachable
block44:;
_605 = _593;
*(&local15) = _605;
_607 = ((frost$core$Object*) _593);
frost$core$Frost$unref$frost$core$Object$Q(_607);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:162
_614 = *(&local15);
_615 = ((frost$core$Object*) _614);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:162:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_618 = ($fn80) _615->$class->vtable[0];
_619 = _618(_615);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_619);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_626 = ((frost$core$Object*) _619);
frost$core$Frost$unref$frost$core$Object$Q(_626);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:163
_630 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_630);
_632 = (frost$core$Int) {163u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s81, _632, &$s82);
abort(); // unreachable
block42:;
_610 = ((frost$core$Object*) _593);
frost$core$Frost$unref$frost$core$Object$Q(_610);
_635 = *(&local15);
_636 = ((frost$core$Object*) _635);
frost$core$Frost$unref$frost$core$Object$Q(_636);
*(&local15) = ((frost$core$Error*) NULL);
goto block38;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:166
_641 = *(&local14);
_642 = (frost$core$Int) {0u};
_643 = _641.value;
_644 = _642.value;
_645 = _643 != _644;
_646 = (frost$core$Bit) {_645};
_647 = _646.value;
if (_647) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:167
_650 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_650);
_652 = (frost$core$Int) {167u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s83, _652, &$s84);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:169
_656 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_656);
_658 = *(&local12);
_659 = ((frost$core$Object*) _658);
frost$core$Frost$unref$frost$core$Object$Q(_659);
*(&local12) = ((frost$core$System$Process*) NULL);
_662 = *(&local1);
_663 = ((frost$core$Object*) _662);
frost$core$Frost$unref$frost$core$Object$Q(_663);
*(&local1) = ((frost$collections$Array*) NULL);
_666 = *(&local0);
_667 = ((frost$core$Object*) _666);
frost$core$Frost$unref$frost$core$Object$Q(_667);
*(&local0) = ((frost$collections$Array*) NULL);
return param4;

}
void org$frostlang$frostc$Main$printUsage$frost$io$OutputStream(void* rawSelf, frost$io$OutputStream* param1) {
org$frostlang$frostc$Main* param0 = (org$frostlang$frostc$Main*) rawSelf;

frost$core$Error* local0 = NULL;
$fn85 _3;
frost$core$Error* _4;
bool _5;
frost$core$Object* _7;
bool _9;
frost$core$Bit _10;
bool _11;
frost$core$Int _13;
frost$core$Error* _16;
frost$core$Object* _18;
frost$core$Object* _21;
$fn86 _24;
frost$core$Error* _25;
bool _26;
frost$core$Object* _28;
bool _30;
frost$core$Bit _31;
bool _32;
frost$core$Int _34;
frost$core$Error* _37;
frost$core$Object* _39;
frost$core$Object* _42;
$fn87 _45;
frost$core$Error* _46;
bool _47;
frost$core$Object* _49;
bool _51;
frost$core$Bit _52;
bool _53;
frost$core$Int _55;
frost$core$Error* _58;
frost$core$Object* _60;
frost$core$Object* _63;
$fn88 _66;
frost$core$Error* _67;
bool _68;
frost$core$Object* _70;
bool _72;
frost$core$Bit _73;
bool _74;
frost$core$Int _76;
frost$core$Error* _79;
frost$core$Object* _81;
frost$core$Object* _84;
$fn89 _87;
frost$core$Error* _88;
bool _89;
frost$core$Object* _91;
bool _93;
frost$core$Bit _94;
bool _95;
frost$core$Int _97;
frost$core$Error* _100;
frost$core$Object* _102;
frost$core$Object* _105;
$fn90 _108;
frost$core$Error* _109;
bool _110;
frost$core$Object* _112;
bool _114;
frost$core$Bit _115;
bool _116;
frost$core$Int _118;
frost$core$Error* _121;
frost$core$Object* _123;
frost$core$Object* _126;
frost$core$Error* _133;
frost$core$Object* _134;
frost$core$Int _130;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:173
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:174
_3 = ($fn91) param1->$class->vtable[19];
_4 = _3(param1, &$s92);
_5 = _4 == NULL;
if (_5) goto block3; else goto block4;
block4:;
_7 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = _4 != NULL;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block5; else goto block6;
block6:;
_13 = (frost$core$Int) {174u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s93, _13, &$s94);
abort(); // unreachable
block5:;
_16 = _4;
*(&local0) = _16;
_18 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_18);
goto block1;
block3:;
_21 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_21);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:175
_24 = ($fn95) param1->$class->vtable[21];
_25 = _24(param1);
_26 = _25 == NULL;
if (_26) goto block7; else goto block8;
block8:;
_28 = ((frost$core$Object*) _25);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = _25 != NULL;
_31 = (frost$core$Bit) {_30};
_32 = _31.value;
if (_32) goto block9; else goto block10;
block10:;
_34 = (frost$core$Int) {175u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s96, _34, &$s97);
abort(); // unreachable
block9:;
_37 = _25;
*(&local0) = _37;
_39 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_39);
goto block1;
block7:;
_42 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_42);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:176
_45 = ($fn98) param1->$class->vtable[19];
_46 = _45(param1, &$s99);
_47 = _46 == NULL;
if (_47) goto block11; else goto block12;
block12:;
_49 = ((frost$core$Object*) _46);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = _46 != NULL;
_52 = (frost$core$Bit) {_51};
_53 = _52.value;
if (_53) goto block13; else goto block14;
block14:;
_55 = (frost$core$Int) {176u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s100, _55, &$s101);
abort(); // unreachable
block13:;
_58 = _46;
*(&local0) = _58;
_60 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_60);
goto block1;
block11:;
_63 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_63);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:177
_66 = ($fn102) param1->$class->vtable[21];
_67 = _66(param1);
_68 = _67 == NULL;
if (_68) goto block15; else goto block16;
block16:;
_70 = ((frost$core$Object*) _67);
frost$core$Frost$ref$frost$core$Object$Q(_70);
_72 = _67 != NULL;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block17; else goto block18;
block18:;
_76 = (frost$core$Int) {177u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s103, _76, &$s104);
abort(); // unreachable
block17:;
_79 = _67;
*(&local0) = _79;
_81 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_81);
goto block1;
block15:;
_84 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_84);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:178
_87 = ($fn105) param1->$class->vtable[19];
_88 = _87(param1, &$s106);
_89 = _88 == NULL;
if (_89) goto block19; else goto block20;
block20:;
_91 = ((frost$core$Object*) _88);
frost$core$Frost$ref$frost$core$Object$Q(_91);
_93 = _88 != NULL;
_94 = (frost$core$Bit) {_93};
_95 = _94.value;
if (_95) goto block21; else goto block22;
block22:;
_97 = (frost$core$Int) {178u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s107, _97, &$s108);
abort(); // unreachable
block21:;
_100 = _88;
*(&local0) = _100;
_102 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_102);
goto block1;
block19:;
_105 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_105);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:179
_108 = ($fn109) param1->$class->vtable[19];
_109 = _108(param1, &$s110);
_110 = _109 == NULL;
if (_110) goto block23; else goto block24;
block24:;
_112 = ((frost$core$Object*) _109);
frost$core$Frost$ref$frost$core$Object$Q(_112);
_114 = _109 != NULL;
_115 = (frost$core$Bit) {_114};
_116 = _115.value;
if (_116) goto block25; else goto block26;
block26:;
_118 = (frost$core$Int) {179u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s111, _118, &$s112);
abort(); // unreachable
block25:;
_121 = _109;
*(&local0) = _121;
_123 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_123);
goto block1;
block23:;
_126 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_126);
_133 = *(&local0);
_134 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_134);
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:182
_130 = (frost$core$Int) {182u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s113, _130);
abort(); // unreachable

}
void org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT(void* rawSelf, frost$collections$ListView* param1) {
org$frostlang$frostc$Main* param0 = (org$frostlang$frostc$Main*) rawSelf;

org$frostlang$frostc$Main$Arguments* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$collections$Array* local3 = NULL;
frost$collections$Array* local4 = NULL;
frost$io$File* local5 = NULL;
frost$core$Int local6;
frost$core$Int local7;
org$frostlang$frostc$Main$Format$nullable local8;
frost$core$String* local9 = NULL;
frost$core$Bit local10;
frost$core$Bit local11;
frost$core$String* local12 = NULL;
frost$core$Error* local13 = NULL;
frost$io$File* local14 = NULL;
frost$core$Error* local15 = NULL;
frost$io$File* local16 = NULL;
frost$core$String* local17 = NULL;
frost$core$String* local18 = NULL;
frost$core$Int$nullable local19;
frost$core$Int64$nullable local20;
frost$core$Int$nullable local21;
frost$core$String* local22 = NULL;
frost$core$Int$nullable local23;
frost$core$Int64$nullable local24;
frost$core$Int$nullable local25;
frost$core$String* local26 = NULL;
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
org$frostlang$frostc$Main$Format local38;
org$frostlang$frostc$Main$Format local39;
org$frostlang$frostc$Main$Format local40;
org$frostlang$frostc$Main$Format local41;
org$frostlang$frostc$Main$Format local42;
frost$io$File* local43 = NULL;
org$frostlang$frostc$Main$Format local44;
org$frostlang$frostc$Main$Format local45;
frost$io$File* local46 = NULL;
org$frostlang$frostc$Main$Format local47;
org$frostlang$frostc$Main$Format local48;
org$frostlang$frostc$Main$Format local49;
org$frostlang$frostc$Main$Format local50;
frost$core$String* local51 = NULL;
frost$io$File* local52 = NULL;
frost$core$String* local53 = NULL;
frost$core$String* local54 = NULL;
frost$core$String* local55 = NULL;
frost$core$String$Index$nullable local56;
org$frostlang$frostc$Main$Format local57;
org$frostlang$frostc$Main$Format local58;
frost$core$Int local59;
frost$core$Int local60;
org$frostlang$frostc$Compiler$Settings* local61 = NULL;
org$frostlang$frostc$CodeGenerator* local62 = NULL;
frost$core$Error* local63 = NULL;
frost$io$File* local64 = NULL;
frost$core$String* local65 = NULL;
frost$core$String* local66 = NULL;
frost$core$String* local67 = NULL;
frost$core$String$Index$nullable local68;
frost$core$Error* local69 = NULL;
frost$threads$MessageQueue* local70 = NULL;
org$frostlang$frostc$Compiler* local71 = NULL;
org$frostlang$frostc$Main$Format local72;
org$frostlang$frostc$Main$Format local73;
frost$io$File* local74 = NULL;
org$frostlang$frostc$ClassDecl* local75 = NULL;
org$frostlang$frostc$ClassDecl* local76 = NULL;
org$frostlang$frostc$ClassDecl* local77 = NULL;
frost$io$File* local78 = NULL;
org$frostlang$frostc$Main$Format local79;
org$frostlang$frostc$Main$Format local80;
org$frostlang$frostc$ClassDecl* local81 = NULL;
frost$threads$ScopedLock* local82 = NULL;
org$frostlang$frostc$Compiler$Message* local83 = NULL;
frost$core$String* local84 = NULL;
frost$core$Int local85;
frost$core$Int local86;
frost$core$String* local87 = NULL;
frost$core$String* local88 = NULL;
frost$core$Int local89;
frost$core$Int local90;
frost$core$String* local91 = NULL;
frost$io$File* local92 = NULL;
frost$core$String* local93 = NULL;
frost$core$String* local94 = NULL;
frost$core$String* local95 = NULL;
frost$core$String$Index$nullable local96;
frost$io$File* local97 = NULL;
frost$core$String* local98 = NULL;
frost$core$String* local99 = NULL;
frost$core$String* local100 = NULL;
frost$core$String$Index$nullable local101;
org$frostlang$frostc$Main$Arguments* _1;
frost$core$Object* _4;
org$frostlang$frostc$Main$Arguments* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$collections$Array* _13;
frost$core$Object* _16;
frost$collections$Array* _18;
frost$core$Object* _19;
frost$core$Object* _22;
frost$collections$Array* _25;
frost$core$Object* _28;
frost$collections$Array* _30;
frost$core$Object* _31;
frost$core$Object* _34;
frost$collections$Array* _37;
frost$core$Object* _40;
frost$collections$Array* _42;
frost$core$Object* _43;
frost$core$Object* _46;
frost$collections$Array* _49;
frost$core$Object* _52;
frost$collections$Array* _54;
frost$core$Object* _55;
frost$core$Object* _58;
frost$core$Object* _62;
frost$io$File* _64;
frost$core$Object* _65;
frost$core$Int _69;
frost$core$Int _72;
frost$core$Object* _78;
frost$core$String* _80;
frost$core$Object* _81;
frost$core$Bit _85;
frost$core$Bit _88;
org$frostlang$frostc$Main$Arguments* _92;
$fn114 _93;
frost$core$Bit _94;
bool _97;
bool _98;
frost$core$Bit _99;
bool _101;
org$frostlang$frostc$Main$Arguments* _104;
$fn115 _105;
frost$core$String* _106;
frost$core$Object* _108;
frost$core$String* _110;
frost$core$Object* _111;
frost$core$Object* _114;
frost$core$String* _117;
frost$core$Bit _118;
bool _119;
frost$io$File* _124;
frost$core$Object* _127;
frost$io$File* _129;
frost$core$Object* _130;
frost$core$Object* _133;
frost$io$InputStream* _136;
frost$io$File* _137;
frost$core$Maybe* _138;
frost$core$Int* _139;
frost$core$Int _140;
int64_t _141;
bool _142;
frost$core$Error** _144;
frost$core$Error* _145;
frost$core$Object* _146;
frost$core$Object* _149;
frost$core$Object* _151;
frost$io$File* _153;
frost$core$Object* _154;
frost$core$Object** _158;
frost$core$Object* _159;
frost$io$OutputStream* _160;
$fn116 _161;
frost$core$Maybe* _162;
frost$core$Int* _163;
frost$core$Int _164;
int64_t _165;
bool _166;
frost$core$Error** _168;
frost$core$Error* _169;
frost$core$Object* _170;
frost$core$Object* _173;
frost$core$Object* _175;
frost$core$Object* _177;
frost$io$File* _179;
frost$core$Object* _180;
frost$core$Object** _184;
frost$core$Object* _185;
frost$core$Int _186;
frost$core$Object* _187;
frost$core$Object* _189;
frost$core$Object* _191;
frost$collections$Array* _194;
frost$io$File* _195;
frost$core$Object* _196;
frost$io$File* _198;
frost$core$Object* _199;
frost$core$Error* _225;
frost$core$Object* _226;
frost$core$Error* _204;
frost$core$Object* _205;
$fn117 _208;
frost$core$String* _209;
frost$core$Object* _216;
frost$core$Int _220;
frost$core$Int _222;
frost$core$Bit _230;
bool _231;
frost$io$File* _234;
bool _235;
frost$core$Bit _236;
bool _237;
frost$core$Int _250;
frost$core$Int _252;
frost$io$File* _256;
org$frostlang$frostc$Main$Arguments* _257;
$fn118 _258;
frost$core$String* _259;
frost$io$File* _261;
frost$core$Object* _262;
frost$io$File* _264;
frost$core$Object* _265;
frost$core$Object* _268;
frost$core$Object* _270;
frost$io$File* _275;
bool _276;
frost$core$Bit _277;
bool _278;
frost$core$Int _280;
frost$io$File* _283;
frost$io$File* _286;
frost$core$String** _287;
frost$core$String* _288;
frost$core$String* _289;
frost$core$Object* _291;
frost$core$String* _293;
frost$core$Object* _294;
frost$core$Object* _297;
frost$core$Object* _299;
frost$core$String* _302;
bool _303;
frost$core$Bit _304;
bool _305;
frost$core$Object* _308;
frost$core$String* _310;
frost$core$Object* _311;
frost$core$Object* _315;
frost$io$File* _319;
frost$core$String* _320;
bool _321;
frost$core$Bit _322;
bool _323;
frost$core$Int _325;
frost$core$String* _328;
frost$io$File* _330;
frost$core$Object* _331;
frost$core$Object* _333;
frost$core$String* _335;
frost$core$Object* _336;
frost$core$Object* _340;
frost$io$File* _343;
bool _344;
frost$core$Bit _345;
bool _346;
frost$core$Int _348;
frost$io$File* _351;
frost$core$Error* _352;
bool _353;
frost$core$Object* _355;
bool _357;
frost$core$Bit _358;
bool _359;
frost$core$Int _361;
frost$core$Error* _364;
frost$core$Object* _366;
frost$core$Object* _368;
frost$io$File* _370;
frost$core$Object* _371;
frost$core$Error* _385;
frost$core$Object* _386;
$fn119 _389;
frost$core$String* _390;
frost$core$Object* _397;
frost$core$Int _401;
frost$core$Int _403;
frost$core$Object* _375;
frost$core$Object* _377;
frost$io$File* _379;
frost$core$Object* _380;
frost$core$Error* _406;
frost$core$Object* _407;
frost$core$Bit _411;
bool _412;
org$frostlang$frostc$Main$Arguments* _415;
$fn120 _416;
frost$core$String* _417;
frost$core$Object* _419;
frost$core$String* _421;
frost$core$Object* _422;
frost$core$Object* _425;
frost$core$String* _428;
frost$core$Int64$nullable _431;
frost$core$Int64$nullable _434;
bool _435;
frost$core$Bit _436;
bool _437;
frost$core$Int64$nullable _440;
bool _441;
frost$core$Bit _442;
bool _443;
frost$core$Int _445;
frost$core$Int64 _448;
int64_t _451;
int64_t _452;
frost$core$Int _453;
frost$core$Int$nullable _455;
frost$core$Int$nullable _461;
frost$core$Int$nullable _464;
bool _465;
frost$core$Bit _466;
bool _467;
frost$core$Int$nullable _469;
bool _470;
frost$core$Bit _471;
bool _472;
frost$core$Int _474;
frost$core$Int _477;
frost$core$Int _478;
int64_t _479;
int64_t _480;
bool _481;
frost$core$Bit _482;
bool _483;
frost$core$Int$nullable _485;
bool _486;
frost$core$Bit _487;
bool _488;
frost$core$Int _490;
frost$core$Int _493;
frost$core$Int _494;
int64_t _495;
int64_t _496;
bool _497;
frost$core$Bit _498;
bool _499;
frost$core$Int _512;
frost$core$Int _514;
frost$core$Int$nullable _518;
bool _519;
frost$core$Bit _520;
bool _521;
frost$core$Int _523;
frost$core$Int _526;
frost$core$String* _528;
frost$core$Object* _529;
frost$core$Bit _533;
bool _534;
org$frostlang$frostc$Main$Arguments* _537;
$fn121 _538;
frost$core$String* _539;
frost$core$Object* _541;
frost$core$String* _543;
frost$core$Object* _544;
frost$core$Object* _547;
frost$core$String* _550;
frost$core$Int64$nullable _553;
frost$core$Int64$nullable _556;
bool _557;
frost$core$Bit _558;
bool _559;
frost$core$Int64$nullable _562;
bool _563;
frost$core$Bit _564;
bool _565;
frost$core$Int _567;
frost$core$Int64 _570;
int64_t _573;
int64_t _574;
frost$core$Int _575;
frost$core$Int$nullable _577;
frost$core$Int$nullable _583;
frost$core$Int$nullable _586;
bool _587;
frost$core$Bit _588;
bool _589;
frost$core$Int$nullable _591;
bool _592;
frost$core$Bit _593;
bool _594;
frost$core$Int _596;
frost$core$Int _599;
frost$core$Int _600;
int64_t _601;
int64_t _602;
bool _603;
frost$core$Bit _604;
bool _605;
frost$core$Int$nullable _607;
bool _608;
frost$core$Bit _609;
bool _610;
frost$core$Int _612;
frost$core$Int _615;
frost$core$Int _616;
int64_t _617;
int64_t _618;
bool _619;
frost$core$Bit _620;
bool _621;
frost$core$Int _634;
frost$core$Int _636;
frost$core$Int$nullable _640;
bool _641;
frost$core$Bit _642;
bool _643;
frost$core$Int _645;
frost$core$Int _648;
frost$core$String* _650;
frost$core$Object* _651;
frost$core$Bit _655;
bool _656;
org$frostlang$frostc$Main$Format$nullable _659;
bool _660;
frost$core$Bit _661;
bool _662;
frost$core$Int _675;
frost$core$Int _677;
org$frostlang$frostc$Main$Arguments* _681;
$fn122 _682;
frost$core$String* _683;
frost$core$Object* _685;
frost$core$String* _687;
frost$core$Object* _688;
frost$core$Object* _691;
frost$core$String* _694;
frost$core$Bit _695;
bool _696;
frost$core$Int _699;
frost$core$Int* _702;
org$frostlang$frostc$Main$Format _704;
org$frostlang$frostc$Main$Format _707;
org$frostlang$frostc$Main$Format$nullable _708;
frost$core$Bit _711;
bool _712;
frost$core$Int _715;
frost$core$Int* _718;
org$frostlang$frostc$Main$Format _720;
org$frostlang$frostc$Main$Format _723;
org$frostlang$frostc$Main$Format$nullable _724;
frost$core$Bit _727;
bool _728;
frost$core$Int _731;
frost$core$Int* _734;
org$frostlang$frostc$Main$Format _736;
org$frostlang$frostc$Main$Format _739;
org$frostlang$frostc$Main$Format$nullable _740;
frost$core$Bit _743;
bool _744;
frost$core$Int _747;
frost$core$Int* _750;
org$frostlang$frostc$Main$Format _752;
org$frostlang$frostc$Main$Format _755;
org$frostlang$frostc$Main$Format$nullable _756;
frost$core$Bit _759;
bool _760;
frost$core$Int _763;
frost$core$Int* _766;
org$frostlang$frostc$Main$Format _768;
org$frostlang$frostc$Main$Format _771;
org$frostlang$frostc$Main$Format$nullable _772;
frost$core$Bit _775;
bool _776;
frost$core$Int _779;
frost$core$Int* _782;
org$frostlang$frostc$Main$Format _784;
org$frostlang$frostc$Main$Format _787;
org$frostlang$frostc$Main$Format$nullable _788;
frost$core$Bit _791;
bool _792;
frost$core$Int _795;
frost$core$Int* _798;
org$frostlang$frostc$Main$Format _800;
org$frostlang$frostc$Main$Format _803;
org$frostlang$frostc$Main$Format$nullable _804;
frost$core$Bit _807;
bool _808;
frost$core$Int _811;
frost$core$Int* _814;
org$frostlang$frostc$Main$Format _816;
org$frostlang$frostc$Main$Format _819;
org$frostlang$frostc$Main$Format$nullable _820;
frost$core$String* _824;
frost$core$String* _825;
frost$core$String* _826;
frost$core$Object* _836;
frost$core$Object* _838;
frost$core$Int _841;
frost$core$Int _843;
frost$core$String* _846;
frost$core$Object* _847;
frost$core$Bit _851;
bool _852;
frost$collections$Array* _855;
frost$io$File* _856;
org$frostlang$frostc$Main$Arguments* _857;
$fn123 _858;
frost$core$String* _859;
frost$core$Object* _861;
frost$core$Object* _863;
frost$core$Object* _865;
frost$core$Bit _868;
bool _869;
frost$collections$Array* _872;
frost$io$File* _873;
org$frostlang$frostc$Main$Arguments* _874;
$fn124 _875;
frost$core$String* _876;
frost$core$Object* _878;
frost$core$Object* _880;
frost$core$Object* _882;
frost$core$Bit _885;
bool _886;
frost$collections$Array* _889;
org$frostlang$frostc$Main$Arguments* _890;
$fn125 _891;
frost$core$String* _892;
frost$core$Object* _893;
frost$core$Object* _895;
frost$core$Bit _898;
bool _899;
org$frostlang$frostc$Main$Arguments* _902;
$fn126 _903;
frost$core$String* _904;
frost$core$String* _905;
frost$core$Object* _906;
frost$core$String* _908;
frost$core$Object* _909;
frost$core$Object* _912;
frost$core$String* _916;
frost$core$Bit _917;
bool _918;
frost$io$File* _921;
frost$core$String* _922;
frost$core$Object* _925;
frost$io$File* _927;
frost$core$Object* _928;
frost$core$Object* _931;
frost$collections$Array* _934;
frost$io$File* _935;
frost$core$Object* _936;
frost$io$File* _938;
frost$core$Object* _939;
frost$core$String* _945;
frost$core$String* _946;
frost$core$String* _947;
frost$core$Object* _957;
frost$core$Object* _959;
frost$core$Int _962;
frost$core$Int _964;
frost$core$String* _968;
frost$core$Object* _969;
org$frostlang$frostc$Main$Format$nullable _974;
bool _975;
frost$core$Bit _976;
bool _977;
org$frostlang$frostc$Main$Format$nullable _979;
bool _980;
frost$core$Bit _981;
bool _982;
frost$core$Int _984;
frost$core$Equatable* _987;
frost$core$Int _988;
frost$core$Int* _991;
org$frostlang$frostc$Main$Format _993;
org$frostlang$frostc$Main$Format _996;
frost$core$Equatable* _997;
$fn127 _998;
frost$core$Bit _999;
bool _1000;
frost$core$Object* _1001;
frost$core$Object* _1003;
frost$collections$Array* _1007;
frost$io$File* _1008;
frost$core$String* _1009;
frost$io$File* _1011;
frost$core$Object* _1012;
frost$core$Object* _1014;
frost$core$Object* _1016;
frost$core$Object* _1018;
frost$collections$Array* _1022;
frost$io$File** _1023;
frost$io$File* _1024;
frost$core$Object* _1025;
frost$io$File* _1028;
frost$core$String* _1029;
frost$core$Object* _1032;
frost$io$File* _1034;
frost$core$Object* _1035;
frost$core$Object* _1038;
frost$core$Object* _1040;
frost$io$File* _1043;
frost$core$Object* _1045;
frost$io$File** _1047;
frost$io$File* _1048;
frost$core$Object* _1049;
frost$io$File** _1051;
frost$core$Object* _1053;
frost$collections$Array* _1056;
frost$collections$CollectionView* _1057;
$fn128 _1058;
frost$core$Int _1059;
frost$core$Int _1060;
int64_t _1063;
int64_t _1064;
bool _1065;
frost$core$Bit _1066;
bool _1068;
frost$core$Int _1081;
frost$core$Int _1083;
org$frostlang$frostc$Main$Format$nullable _1087;
bool _1088;
frost$core$Bit _1089;
bool _1090;
frost$core$Int _1093;
frost$core$Int* _1096;
org$frostlang$frostc$Main$Format _1098;
org$frostlang$frostc$Main$Format _1101;
org$frostlang$frostc$Main$Format$nullable _1102;
frost$io$File* _1106;
bool _1107;
frost$core$Bit _1108;
bool _1109;
org$frostlang$frostc$Main$Format$nullable _1111;
bool _1112;
frost$core$Bit _1113;
bool _1114;
frost$core$Int _1116;
frost$core$Equatable* _1119;
frost$core$Int _1120;
frost$core$Int* _1123;
org$frostlang$frostc$Main$Format _1125;
org$frostlang$frostc$Main$Format _1128;
frost$core$Equatable* _1129;
$fn129 _1130;
frost$core$Bit _1131;
bool _1132;
frost$core$Object* _1133;
frost$core$Object* _1135;
frost$collections$Array* _1139;
frost$collections$CollectionView* _1140;
$fn130 _1141;
frost$core$Int _1142;
frost$core$Int _1143;
int64_t _1146;
int64_t _1147;
bool _1148;
frost$core$Bit _1149;
bool _1151;
org$frostlang$frostc$Main$Format$nullable _1156;
bool _1157;
frost$core$Bit _1158;
bool _1159;
frost$core$Int _1161;
org$frostlang$frostc$Main$Format _1164;
frost$core$Int _1165;
frost$core$Int _1166;
int64_t _1169;
int64_t _1170;
bool _1171;
frost$core$Bit _1172;
bool _1174;
frost$core$Object* _1177;
frost$core$String* _1179;
frost$core$Object* _1180;
frost$core$Int _1184;
int64_t _1187;
int64_t _1188;
bool _1189;
frost$core$Bit _1190;
bool _1192;
frost$core$Object* _1195;
frost$core$String* _1197;
frost$core$Object* _1198;
frost$core$Int _1202;
int64_t _1205;
int64_t _1206;
bool _1207;
frost$core$Bit _1208;
bool _1210;
frost$core$Object* _1213;
frost$core$String* _1215;
frost$core$Object* _1216;
frost$core$Int _1220;
int64_t _1223;
int64_t _1224;
bool _1225;
frost$core$Bit _1226;
bool _1228;
frost$core$Object* _1231;
frost$core$String* _1233;
frost$core$Object* _1234;
frost$core$Int _1238;
int64_t _1241;
int64_t _1242;
bool _1243;
frost$core$Bit _1244;
bool _1246;
frost$core$Object* _1249;
frost$core$String* _1251;
frost$core$Object* _1252;
frost$core$Int _1267;
frost$core$Int _1269;
frost$collections$Array* _1273;
frost$core$Int _1274;
frost$core$Int _1276;
int64_t _1277;
int64_t _1278;
bool _1279;
frost$core$Bit _1280;
bool _1281;
frost$collections$CollectionView* _1283;
$fn131 _1284;
frost$core$Int _1285;
int64_t _1286;
int64_t _1287;
bool _1288;
frost$core$Bit _1289;
bool _1290;
frost$core$Int _1292;
frost$core$Object*** _1296;
frost$core$Object** _1297;
frost$core$Int64 _1298;
int64_t _1299;
frost$core$Object* _1300;
frost$core$Object* _1301;
frost$io$File* _1304;
frost$core$String* _1305;
frost$io$File* _1310;
frost$core$String** _1311;
frost$core$String* _1312;
frost$core$String* _1313;
frost$core$Object* _1315;
frost$core$String* _1317;
frost$core$Object* _1318;
frost$core$Object* _1321;
frost$core$Object* _1323;
frost$core$String* _1326;
bool _1327;
frost$core$Bit _1328;
bool _1329;
frost$core$Object* _1332;
frost$core$String* _1334;
frost$core$Object* _1335;
frost$core$Object* _1339;
frost$io$File* _1343;
frost$core$String* _1344;
bool _1345;
frost$core$Bit _1346;
bool _1347;
frost$core$Int _1349;
frost$core$String* _1352;
frost$io$File* _1354;
frost$core$Object* _1355;
frost$core$Object* _1357;
frost$core$String* _1359;
frost$core$Object* _1360;
frost$core$Object* _1364;
frost$io$File* _1367;
bool _1368;
frost$core$Bit _1369;
bool _1370;
frost$core$Int _1372;
frost$io$File* _1375;
frost$core$String* _1378;
frost$core$Object* _1380;
frost$core$String* _1382;
frost$core$Object* _1383;
frost$core$Object* _1386;
frost$core$String* _1389;
frost$core$String$Index$nullable _1390;
frost$core$String$Index$nullable _1393;
bool _1394;
frost$core$Bit _1395;
bool _1396;
frost$core$String* _1399;
frost$core$Object* _1400;
frost$core$String* _1402;
frost$core$Object* _1403;
frost$core$Object* _1407;
frost$core$String* _1411;
frost$core$String$Index$nullable _1412;
frost$core$Bit _1413;
frost$core$Range$LTfrost$core$String$Index$Q$GT _1414;
frost$core$String* _1415;
frost$core$Object* _1416;
frost$core$Object* _1418;
frost$core$String* _1420;
frost$core$Object* _1421;
frost$core$Object* _1425;
frost$core$String* _1428;
frost$core$String* _1429;
frost$io$File* _1430;
frost$core$Object* _1431;
frost$core$Object* _1433;
frost$core$Object* _1435;
frost$core$Object* _1437;
frost$core$String* _1439;
frost$core$Object* _1440;
frost$core$Object* _1443;
frost$io$File* _1445;
frost$core$Object* _1446;
frost$io$File* _1450;
frost$core$Object* _1451;
frost$io$File* _1453;
frost$core$Object* _1454;
frost$core$Object* _1457;
frost$core$Object* _1459;
frost$core$String* _1461;
frost$core$Object* _1462;
org$frostlang$frostc$Main$Format$nullable _1467;
bool _1468;
frost$core$Bit _1469;
bool _1470;
frost$core$Int _1472;
frost$core$Equatable* _1475;
frost$core$Int _1476;
frost$core$Int* _1479;
org$frostlang$frostc$Main$Format _1481;
org$frostlang$frostc$Main$Format _1484;
frost$core$Equatable* _1485;
$fn132 _1486;
frost$core$Bit _1487;
bool _1488;
frost$core$Object* _1489;
frost$core$Object* _1491;
frost$core$Int _1505;
frost$core$Int _1507;
frost$core$Int _1522;
frost$core$Int _1524;
frost$core$Int _1530;
frost$core$Int _1533;
org$frostlang$frostc$Compiler$Settings* _1536;
frost$io$File** _1537;
frost$io$File* _1538;
frost$collections$Array* _1539;
frost$collections$ListView* _1540;
frost$core$Int _1541;
frost$core$Int _1542;
frost$core$Bit _1543;
frost$core$Object* _1546;
org$frostlang$frostc$Compiler$Settings* _1548;
frost$core$Object* _1549;
frost$core$Object* _1552;
frost$core$Object* _1557;
org$frostlang$frostc$CodeGenerator* _1559;
frost$core$Object* _1560;
org$frostlang$frostc$Main$Format$nullable _1564;
bool _1565;
frost$core$Bit _1566;
bool _1567;
frost$core$Int _1569;
org$frostlang$frostc$Main$Format _1572;
frost$core$Int _1573;
frost$core$Int _1574;
int64_t _1577;
int64_t _1578;
bool _1579;
frost$core$Bit _1580;
bool _1582;
frost$core$Int _1584;
int64_t _1587;
int64_t _1588;
bool _1589;
frost$core$Bit _1590;
bool _1592;
frost$core$Int _1594;
int64_t _1597;
int64_t _1598;
bool _1599;
frost$core$Bit _1600;
bool _1602;
org$frostlang$frostc$LLVMCodeGenerator* _1607;
frost$core$String* _1608;
frost$io$File* _1609;
bool _1610;
frost$core$Bit _1611;
bool _1612;
frost$core$Int _1614;
frost$io$File* _1617;
frost$io$File* _1622;
frost$core$String** _1623;
frost$core$String* _1624;
frost$core$String* _1625;
frost$core$Object* _1627;
frost$core$String* _1629;
frost$core$Object* _1630;
frost$core$Object* _1633;
frost$core$Object* _1635;
frost$core$String* _1638;
bool _1639;
frost$core$Bit _1640;
bool _1641;
frost$core$Object* _1644;
frost$core$String* _1646;
frost$core$Object* _1647;
frost$core$Object* _1651;
frost$io$File* _1655;
frost$core$String* _1656;
bool _1657;
frost$core$Bit _1658;
bool _1659;
frost$core$Int _1661;
frost$core$String* _1664;
frost$io$File* _1666;
frost$core$Object* _1667;
frost$core$Object* _1669;
frost$core$String* _1671;
frost$core$Object* _1672;
frost$core$Object* _1676;
frost$io$File* _1679;
bool _1680;
frost$core$Bit _1681;
bool _1682;
frost$core$Int _1684;
frost$io$File* _1687;
frost$core$String* _1690;
frost$core$Object* _1692;
frost$core$String* _1694;
frost$core$Object* _1695;
frost$core$Object* _1698;
frost$core$String* _1701;
frost$core$String$Index$nullable _1702;
frost$core$String$Index$nullable _1705;
bool _1706;
frost$core$Bit _1707;
bool _1708;
frost$core$String* _1711;
frost$core$Object* _1712;
frost$core$String* _1714;
frost$core$Object* _1715;
frost$core$Object* _1719;
frost$core$String* _1723;
frost$core$String$Index$nullable _1724;
frost$core$Bit _1725;
frost$core$Range$LTfrost$core$String$Index$Q$GT _1726;
frost$core$String* _1727;
frost$core$Object* _1728;
frost$core$Object* _1730;
frost$core$String* _1732;
frost$core$Object* _1733;
frost$core$Object* _1737;
frost$core$String* _1740;
frost$core$String* _1741;
frost$io$File* _1742;
frost$core$Object* _1743;
frost$core$Object* _1745;
frost$core$Object* _1747;
frost$core$Object* _1749;
frost$core$String* _1751;
frost$core$Object* _1752;
frost$core$Object* _1755;
frost$io$File* _1757;
frost$core$Object* _1758;
frost$core$Maybe* _1762;
frost$core$Int* _1763;
frost$core$Int _1764;
int64_t _1765;
bool _1766;
frost$core$Error** _1768;
frost$core$Error* _1769;
frost$core$Object* _1770;
frost$core$Object* _1773;
frost$core$Object* _1775;
frost$core$Object* _1777;
frost$core$Object* _1779;
frost$core$Error* _1803;
frost$core$Object* _1804;
$fn133 _1807;
frost$core$String* _1808;
frost$core$Object* _1815;
frost$core$Int _1819;
frost$core$Int _1821;
frost$core$Object** _1782;
frost$core$Object* _1783;
frost$io$OutputStream* _1784;
org$frostlang$frostc$CodeGenerator* _1786;
frost$core$Object* _1787;
org$frostlang$frostc$CodeGenerator* _1789;
frost$core$Object* _1790;
frost$core$Object* _1793;
frost$core$Object* _1795;
frost$core$Object* _1797;
frost$core$Object* _1799;
frost$core$Error* _1824;
frost$core$Object* _1825;
frost$core$Int _1829;
int64_t _1832;
int64_t _1833;
bool _1834;
frost$core$Bit _1835;
bool _1837;
org$frostlang$frostc$HCodeGenerator* _1840;
frost$io$File* _1841;
bool _1842;
frost$core$Bit _1843;
bool _1844;
frost$core$Int _1846;
frost$io$File* _1849;
org$frostlang$frostc$CodeGenerator* _1851;
frost$core$Object* _1852;
org$frostlang$frostc$CodeGenerator* _1854;
frost$core$Object* _1855;
frost$core$Object* _1858;
frost$core$Int _1861;
int64_t _1864;
int64_t _1865;
bool _1866;
frost$core$Bit _1867;
bool _1869;
org$frostlang$frostc$CCodeGenerator* _1872;
frost$io$File* _1873;
bool _1874;
frost$core$Bit _1875;
bool _1876;
frost$core$Int _1878;
frost$io$File* _1881;
org$frostlang$frostc$CodeGenerator* _1883;
frost$core$Object* _1884;
org$frostlang$frostc$CodeGenerator* _1886;
frost$core$Object* _1887;
frost$core$Object* _1890;
frost$core$Int _1893;
int64_t _1896;
int64_t _1897;
bool _1898;
frost$core$Bit _1899;
bool _1901;
org$frostlang$frostc$StubCodeGenerator* _1906;
frost$io$File* _1907;
bool _1908;
frost$core$Bit _1909;
bool _1910;
frost$core$Int _1912;
frost$io$File* _1915;
frost$core$Maybe* _1916;
frost$core$Int* _1917;
frost$core$Int _1918;
int64_t _1919;
bool _1920;
frost$core$Error** _1922;
frost$core$Error* _1923;
frost$core$Object* _1924;
frost$core$Object* _1927;
frost$core$Object* _1929;
frost$core$Error* _1949;
frost$core$Object* _1950;
$fn134 _1953;
frost$core$String* _1954;
frost$core$Object* _1961;
frost$core$Int _1965;
frost$core$Int _1967;
frost$core$Object** _1932;
frost$core$Object* _1933;
frost$io$OutputStream* _1934;
org$frostlang$frostc$CodeGenerator* _1936;
frost$core$Object* _1937;
org$frostlang$frostc$CodeGenerator* _1939;
frost$core$Object* _1940;
frost$core$Object* _1943;
frost$core$Object* _1945;
frost$core$Error* _1970;
frost$core$Object* _1971;
frost$core$Int _1975;
int64_t _1978;
int64_t _1979;
bool _1980;
frost$core$Bit _1981;
bool _1983;
org$frostlang$frostc$Interpreter* _1986;
org$frostlang$frostc$CodeGenerator* _1988;
frost$core$Object* _1989;
org$frostlang$frostc$CodeGenerator* _1991;
frost$core$Object* _1992;
frost$core$Object* _1995;
frost$threads$MessageQueue* _1999;
frost$core$Object* _2002;
frost$threads$MessageQueue* _2004;
frost$core$Object* _2005;
frost$core$Object* _2008;
org$frostlang$frostc$Compiler* _2011;
frost$threads$MessageQueue* _2012;
org$frostlang$frostc$CodeGenerator* _2013;
org$frostlang$frostc$Compiler$Settings* _2014;
frost$core$Object* _2017;
org$frostlang$frostc$Compiler* _2019;
frost$core$Object* _2020;
frost$core$Object* _2023;
org$frostlang$frostc$Main$Format$nullable _2026;
bool _2027;
frost$core$Bit _2028;
bool _2029;
frost$core$Int _2031;
frost$core$Equatable* _2034;
frost$core$Int _2035;
frost$core$Int* _2038;
org$frostlang$frostc$Main$Format _2040;
org$frostlang$frostc$Main$Format _2043;
frost$core$Equatable* _2044;
$fn135 _2045;
frost$core$Bit _2046;
bool _2047;
frost$core$Object* _2048;
frost$core$Object* _2050;
frost$core$String* _2054;
bool _2055;
frost$core$Bit _2056;
bool _2057;
frost$core$String* _2060;
frost$core$Object* _2061;
frost$core$String* _2063;
frost$core$Object* _2064;
org$frostlang$frostc$HTMLProcessor* _2069;
org$frostlang$frostc$Compiler* _2070;
frost$collections$Array* _2072;
frost$core$Int _2073;
frost$core$Int _2075;
int64_t _2076;
int64_t _2077;
bool _2078;
frost$core$Bit _2079;
bool _2080;
frost$collections$CollectionView* _2082;
$fn136 _2083;
frost$core$Int _2084;
int64_t _2085;
int64_t _2086;
bool _2087;
frost$core$Bit _2088;
bool _2089;
frost$core$Int _2091;
frost$core$Object*** _2095;
frost$core$Object** _2096;
frost$core$Int64 _2097;
int64_t _2098;
frost$core$Object* _2099;
frost$core$Object* _2100;
frost$io$File* _2103;
frost$io$File* _2104;
bool _2105;
frost$core$Bit _2106;
bool _2107;
frost$core$Int _2109;
frost$io$File* _2112;
frost$core$String* _2113;
bool _2114;
frost$core$Bit _2115;
bool _2116;
frost$core$Int _2118;
frost$core$String* _2121;
$fn137 _2122;
frost$core$Object* _2124;
frost$core$Object* _2126;
org$frostlang$frostc$Compiler* _2129;
frost$core$Object* _2130;
frost$threads$MessageQueue* _2133;
frost$core$Object* _2134;
org$frostlang$frostc$CodeGenerator* _2137;
frost$core$Object* _2138;
org$frostlang$frostc$Compiler$Settings* _2141;
frost$core$Object* _2142;
frost$io$File* _2145;
frost$core$Object* _2146;
frost$core$String* _2149;
frost$core$Object* _2150;
frost$io$File* _2153;
frost$core$Object* _2154;
frost$collections$Array* _2157;
frost$core$Object* _2158;
frost$collections$Array* _2161;
frost$core$Object* _2162;
frost$collections$Array* _2165;
frost$core$Object* _2166;
frost$collections$Array* _2169;
frost$core$Object* _2170;
org$frostlang$frostc$Main$Arguments* _2173;
frost$core$Object* _2174;
frost$core$String* _2179;
bool _2180;
frost$core$Bit _2181;
bool _2182;
frost$core$Int _2195;
frost$core$Int _2197;
frost$collections$Array* _2201;
frost$collections$Iterable* _2202;
$fn138 _2203;
frost$collections$Iterator* _2204;
$fn139 _2206;
frost$core$Bit _2207;
bool _2208;
$fn140 _2211;
frost$core$Object* _2212;
frost$io$File* _2213;
frost$core$Object* _2214;
frost$io$File* _2216;
frost$core$Object* _2217;
org$frostlang$frostc$Compiler* _2221;
frost$io$File* _2222;
frost$collections$ListView* _2223;
frost$collections$Iterable* _2224;
$fn141 _2225;
frost$collections$Iterator* _2226;
$fn142 _2228;
frost$core$Bit _2229;
bool _2230;
$fn143 _2233;
frost$core$Object* _2234;
org$frostlang$frostc$ClassDecl* _2235;
frost$core$Object* _2236;
org$frostlang$frostc$ClassDecl* _2238;
frost$core$Object* _2239;
org$frostlang$frostc$Compiler* _2243;
org$frostlang$frostc$ClassDecl* _2244;
frost$core$Bit _2247;
frost$core$Bit* _2248;
frost$collections$Array** _2251;
frost$collections$Array* _2252;
frost$collections$Iterable* _2253;
$fn144 _2254;
frost$collections$Iterator* _2255;
$fn145 _2257;
frost$core$Bit _2258;
bool _2259;
$fn146 _2262;
frost$core$Object* _2263;
org$frostlang$frostc$ClassDecl* _2264;
frost$core$Object* _2265;
org$frostlang$frostc$ClassDecl* _2267;
frost$core$Object* _2268;
org$frostlang$frostc$ClassDecl* _2272;
frost$core$Bit _2275;
frost$core$Bit* _2276;
frost$collections$Array** _2279;
frost$collections$Array* _2280;
frost$collections$Iterable* _2281;
$fn147 _2282;
frost$collections$Iterator* _2283;
$fn148 _2285;
frost$core$Bit _2286;
bool _2287;
$fn149 _2290;
frost$core$Object* _2291;
org$frostlang$frostc$ClassDecl* _2292;
frost$core$Object* _2293;
org$frostlang$frostc$ClassDecl* _2295;
frost$core$Object* _2296;
org$frostlang$frostc$ClassDecl* _2300;
frost$core$Object* _2302;
org$frostlang$frostc$ClassDecl* _2304;
frost$core$Object* _2305;
frost$core$Object* _2309;
frost$core$Object* _2312;
org$frostlang$frostc$ClassDecl* _2314;
frost$core$Object* _2315;
frost$core$Object* _2319;
frost$core$Object* _2322;
org$frostlang$frostc$ClassDecl* _2324;
frost$core$Object* _2325;
frost$core$Object* _2329;
frost$core$Object* _2331;
frost$core$Object* _2333;
frost$io$File* _2335;
frost$core$Object* _2336;
frost$core$Object* _2340;
frost$collections$Array* _2343;
frost$collections$Iterable* _2344;
$fn150 _2345;
frost$collections$Iterator* _2346;
$fn151 _2348;
frost$core$Bit _2349;
bool _2350;
$fn152 _2353;
frost$core$Object* _2354;
frost$io$File* _2355;
frost$core$Object* _2356;
frost$io$File* _2358;
frost$core$Object* _2359;
org$frostlang$frostc$Compiler* _2363;
frost$io$File* _2364;
frost$core$Object* _2366;
frost$io$File* _2368;
frost$core$Object* _2369;
frost$core$Object* _2373;
org$frostlang$frostc$Main$Format$nullable _2376;
bool _2377;
frost$core$Bit _2378;
bool _2379;
frost$core$Int _2381;
frost$core$Equatable* _2384;
frost$core$Int _2385;
frost$core$Int* _2388;
org$frostlang$frostc$Main$Format _2390;
org$frostlang$frostc$Main$Format _2393;
frost$core$Equatable* _2394;
$fn153 _2395;
frost$core$Bit _2396;
bool _2397;
frost$core$Object* _2398;
frost$core$Object* _2400;
org$frostlang$frostc$CodeGenerator* _2404;
org$frostlang$frostc$Interpreter* _2405;
$fn154 _2406;
org$frostlang$frostc$Compiler* _2409;
frost$core$Object* _2410;
frost$threads$MessageQueue* _2413;
frost$core$Object* _2414;
org$frostlang$frostc$CodeGenerator* _2417;
frost$core$Object* _2418;
org$frostlang$frostc$Compiler$Settings* _2421;
frost$core$Object* _2422;
frost$io$File* _2425;
frost$core$Object* _2426;
frost$core$String* _2429;
frost$core$Object* _2430;
frost$io$File* _2433;
frost$core$Object* _2434;
frost$collections$Array* _2437;
frost$core$Object* _2438;
frost$collections$Array* _2441;
frost$core$Object* _2442;
frost$collections$Array* _2445;
frost$core$Object* _2446;
frost$collections$Array* _2449;
frost$core$Object* _2450;
org$frostlang$frostc$Main$Arguments* _2453;
frost$core$Object* _2454;
org$frostlang$frostc$Compiler* _2459;
frost$collections$Array** _2463;
frost$collections$Array* _2464;
frost$collections$CollectionView* _2465;
$fn155 _2466;
frost$core$Int _2467;
frost$core$Int _2468;
int64_t _2469;
int64_t _2470;
bool _2471;
frost$core$Bit _2472;
bool _2473;
frost$collections$Array** _2476;
frost$collections$Array* _2477;
frost$collections$Array** _2478;
frost$collections$Array* _2479;
frost$collections$CollectionView* _2480;
$fn156 _2481;
frost$core$Int _2482;
frost$core$Int _2483;
int64_t _2484;
int64_t _2485;
int64_t _2486;
frost$core$Int _2487;
frost$core$Object* _2488;
org$frostlang$frostc$ClassDecl* _2489;
frost$core$Object* _2491;
org$frostlang$frostc$ClassDecl* _2493;
frost$core$Object* _2494;
frost$core$Object* _2497;
org$frostlang$frostc$ClassDecl* _2500;
org$frostlang$frostc$ClassDecl* _2502;
frost$core$Object* _2503;
org$frostlang$frostc$CodeGenerator** _2508;
org$frostlang$frostc$CodeGenerator* _2509;
bool _2510;
frost$core$Bit _2511;
bool _2512;
frost$core$Int _2514;
org$frostlang$frostc$CodeGenerator* _2517;
$fn157 _2518;
frost$threads$MessageQueue* _2523;
frost$threads$ScopedLock* _2528;
frost$threads$Lock** _2529;
frost$threads$Lock* _2530;
frost$core$Object* _2533;
frost$threads$ScopedLock* _2535;
frost$core$Object* _2536;
frost$core$Object* _2539;
frost$core$Int* _2542;
frost$core$Int _2543;
frost$threads$ScopedLock* _2544;
frost$core$Object* _2545;
frost$core$Int _2549;
int64_t _2550;
int64_t _2551;
bool _2552;
frost$core$Bit _2553;
bool _2555;
frost$threads$MessageQueue* _2558;
frost$core$Immutable* _2559;
org$frostlang$frostc$Compiler$Message* _2560;
frost$core$Object* _2562;
org$frostlang$frostc$Compiler$Message* _2564;
frost$core$Object* _2565;
frost$core$Object* _2568;
org$frostlang$frostc$Compiler$Message* _2571;
frost$core$Int* _2572;
frost$core$Int _2573;
frost$core$Int _2574;
int64_t _2577;
int64_t _2578;
bool _2579;
frost$core$Bit _2580;
bool _2582;
frost$core$String** _2584;
frost$core$String* _2585;
frost$core$Object* _2587;
frost$core$String* _2589;
frost$core$Object* _2590;
frost$core$Int* _2593;
frost$core$Int _2594;
frost$core$Int* _2596;
frost$core$Int _2597;
frost$core$String** _2599;
frost$core$String* _2600;
frost$core$Object* _2602;
frost$core$String* _2604;
frost$core$Object* _2605;
frost$core$Int _2609;
frost$core$Int _2610;
int64_t _2611;
int64_t _2612;
int64_t _2613;
frost$core$Int _2614;
frost$core$String* _2617;
frost$core$Object* _2620;
frost$core$String* _2623;
frost$core$Int _2624;
frost$core$Object* _2625;
$fn158 _2628;
frost$core$String* _2629;
frost$core$String* _2630;
frost$core$Object* _2631;
frost$core$Object* _2633;
frost$core$Object* _2635;
frost$core$String* _2638;
frost$core$Int _2639;
frost$core$Object* _2640;
$fn159 _2643;
frost$core$String* _2644;
frost$core$String* _2645;
frost$core$Object* _2646;
frost$core$Object* _2648;
frost$core$Object* _2650;
frost$core$String* _2653;
frost$core$String* _2654;
frost$core$String* _2655;
frost$core$String* _2656;
frost$core$Object* _2666;
frost$core$Object* _2668;
frost$core$Object* _2670;
frost$core$Object* _2672;
frost$core$Object* _2674;
frost$core$Object* _2676;
frost$core$Object* _2678;
frost$core$Object* _2680;
frost$core$Object* _2682;
frost$core$Object* _2684;
frost$core$String* _2686;
frost$core$Object* _2687;
frost$core$String* _2690;
frost$core$Object* _2691;
frost$core$Int _2695;
int64_t _2698;
int64_t _2699;
bool _2700;
frost$core$Bit _2701;
bool _2703;
frost$core$String** _2705;
frost$core$String* _2706;
frost$core$Object* _2708;
frost$core$String* _2710;
frost$core$Object* _2711;
frost$core$Int* _2714;
frost$core$Int _2715;
frost$core$Int* _2717;
frost$core$Int _2718;
frost$core$String** _2720;
frost$core$String* _2721;
frost$core$Object* _2723;
frost$core$String* _2725;
frost$core$Object* _2726;
frost$core$Int _2730;
frost$core$Int _2731;
int64_t _2732;
int64_t _2733;
int64_t _2734;
frost$core$Int _2735;
frost$core$String* _2738;
frost$core$Object* _2741;
frost$core$String* _2744;
frost$core$Int _2745;
frost$core$Object* _2746;
$fn160 _2749;
frost$core$String* _2750;
frost$core$String* _2751;
frost$core$Object* _2752;
frost$core$Object* _2754;
frost$core$Object* _2756;
frost$core$String* _2759;
frost$core$Int _2760;
frost$core$Object* _2761;
$fn161 _2764;
frost$core$String* _2765;
frost$core$String* _2766;
frost$core$Object* _2767;
frost$core$Object* _2769;
frost$core$Object* _2771;
frost$core$String* _2774;
frost$core$String* _2775;
frost$core$String* _2776;
frost$core$String* _2777;
frost$core$Object* _2787;
frost$core$Object* _2789;
frost$core$Object* _2791;
frost$core$Object* _2793;
frost$core$Object* _2795;
frost$core$Object* _2797;
frost$core$Object* _2799;
frost$core$Object* _2801;
frost$core$Object* _2803;
frost$core$Object* _2805;
frost$core$String* _2807;
frost$core$Object* _2808;
frost$core$String* _2811;
frost$core$Object* _2812;
org$frostlang$frostc$Compiler$Message* _2816;
frost$core$Object* _2817;
org$frostlang$frostc$Compiler* _2821;
frost$core$Object* _2822;
frost$threads$MessageQueue* _2825;
frost$core$Object* _2826;
org$frostlang$frostc$CodeGenerator* _2829;
frost$core$Object* _2830;
frost$core$Int _2834;
frost$core$Int _2835;
int64_t _2838;
int64_t _2839;
bool _2840;
frost$core$Bit _2841;
bool _2843;
frost$core$Int _2857;
frost$core$Int _2858;
int64_t _2859;
int64_t _2860;
bool _2861;
frost$core$Bit _2862;
bool _2863;
frost$core$Int _2866;
frost$core$String* _2867;
frost$core$String* _2868;
frost$core$Object* _2878;
frost$core$Object* _2880;
frost$core$Int _2885;
frost$core$Int _2886;
int64_t _2889;
int64_t _2890;
bool _2891;
frost$core$Bit _2892;
bool _2894;
org$frostlang$frostc$Main$Format$nullable _2897;
bool _2898;
frost$core$Bit _2899;
bool _2900;
frost$core$Int _2902;
org$frostlang$frostc$Main$Format _2905;
frost$core$Int _2906;
frost$core$Int _2907;
int64_t _2910;
int64_t _2911;
bool _2912;
frost$core$Bit _2913;
bool _2915;
frost$collections$Array* _2918;
frost$collections$Array* _2919;
frost$io$File* _2920;
bool _2921;
frost$core$Bit _2922;
bool _2923;
frost$core$Int _2925;
frost$io$File* _2928;
frost$io$File* _2933;
frost$core$String** _2934;
frost$core$String* _2935;
frost$core$String* _2936;
frost$core$Object* _2938;
frost$core$String* _2940;
frost$core$Object* _2941;
frost$core$Object* _2944;
frost$core$Object* _2946;
frost$core$String* _2949;
bool _2950;
frost$core$Bit _2951;
bool _2952;
frost$core$Object* _2955;
frost$core$String* _2957;
frost$core$Object* _2958;
frost$core$Object* _2962;
frost$io$File* _2966;
frost$core$String* _2967;
bool _2968;
frost$core$Bit _2969;
bool _2970;
frost$core$Int _2972;
frost$core$String* _2975;
frost$io$File* _2977;
frost$core$Object* _2978;
frost$core$Object* _2980;
frost$core$String* _2982;
frost$core$Object* _2983;
frost$core$Object* _2987;
frost$io$File* _2990;
bool _2991;
frost$core$Bit _2992;
bool _2993;
frost$core$Int _2995;
frost$io$File* _2998;
frost$core$String* _3001;
frost$core$Object* _3003;
frost$core$String* _3005;
frost$core$Object* _3006;
frost$core$Object* _3009;
frost$core$String* _3012;
frost$core$String$Index$nullable _3013;
frost$core$String$Index$nullable _3016;
bool _3017;
frost$core$Bit _3018;
bool _3019;
frost$core$String* _3022;
frost$core$Object* _3023;
frost$core$String* _3025;
frost$core$Object* _3026;
frost$core$Object* _3030;
frost$core$String* _3034;
frost$core$String$Index$nullable _3035;
frost$core$Bit _3036;
frost$core$Range$LTfrost$core$String$Index$Q$GT _3037;
frost$core$String* _3038;
frost$core$Object* _3039;
frost$core$Object* _3041;
frost$core$String* _3043;
frost$core$Object* _3044;
frost$core$Object* _3048;
frost$core$String* _3051;
frost$core$String* _3052;
frost$io$File* _3053;
frost$core$Object* _3054;
frost$core$Object* _3056;
frost$core$Object* _3058;
frost$core$Object* _3060;
frost$core$String* _3062;
frost$core$Object* _3063;
frost$core$Object* _3066;
frost$io$File* _3068;
frost$core$Object* _3069;
frost$io$File* _3073;
bool _3074;
frost$core$Bit _3075;
bool _3076;
frost$core$Int _3078;
frost$io$File* _3081;
frost$core$Bit _3082;
org$frostlang$frostc$Compiler$Settings* _3083;
frost$io$File* _3084;
frost$core$Object* _3085;
frost$core$Object* _3087;
frost$core$Int _3090;
int64_t _3093;
int64_t _3094;
bool _3095;
frost$core$Bit _3096;
bool _3098;
frost$io$File* _3101;
bool _3102;
frost$core$Bit _3103;
bool _3104;
frost$core$Int _3106;
frost$io$File* _3109;
frost$io$File* _3114;
frost$core$String** _3115;
frost$core$String* _3116;
frost$core$String* _3117;
frost$core$Object* _3119;
frost$core$String* _3121;
frost$core$Object* _3122;
frost$core$Object* _3125;
frost$core$Object* _3127;
frost$core$String* _3130;
bool _3131;
frost$core$Bit _3132;
bool _3133;
frost$core$Object* _3136;
frost$core$String* _3138;
frost$core$Object* _3139;
frost$core$Object* _3143;
frost$io$File* _3147;
frost$core$String* _3148;
bool _3149;
frost$core$Bit _3150;
bool _3151;
frost$core$Int _3153;
frost$core$String* _3156;
frost$io$File* _3158;
frost$core$Object* _3159;
frost$core$Object* _3161;
frost$core$String* _3163;
frost$core$Object* _3164;
frost$core$Object* _3168;
frost$io$File* _3171;
bool _3172;
frost$core$Bit _3173;
bool _3174;
frost$core$Int _3176;
frost$io$File* _3179;
frost$core$String* _3182;
frost$core$Object* _3184;
frost$core$String* _3186;
frost$core$Object* _3187;
frost$core$Object* _3190;
frost$core$String* _3193;
frost$core$String$Index$nullable _3194;
frost$core$String$Index$nullable _3197;
bool _3198;
frost$core$Bit _3199;
bool _3200;
frost$core$String* _3203;
frost$core$Object* _3204;
frost$core$String* _3206;
frost$core$Object* _3207;
frost$core$Object* _3211;
frost$core$String* _3215;
frost$core$String$Index$nullable _3216;
frost$core$Bit _3217;
frost$core$Range$LTfrost$core$String$Index$Q$GT _3218;
frost$core$String* _3219;
frost$core$Object* _3220;
frost$core$Object* _3222;
frost$core$String* _3224;
frost$core$Object* _3225;
frost$core$Object* _3229;
frost$core$String* _3232;
frost$core$String* _3233;
frost$io$File* _3234;
frost$core$Object* _3235;
frost$core$Object* _3237;
frost$core$Object* _3239;
frost$core$Object* _3241;
frost$core$String* _3243;
frost$core$Object* _3244;
frost$core$Object* _3247;
frost$io$File* _3249;
frost$core$Object* _3250;
frost$io$File* _3254;
bool _3255;
frost$core$Bit _3256;
bool _3257;
frost$core$Int _3259;
frost$io$File* _3262;
frost$core$Bit _3263;
org$frostlang$frostc$Compiler$Settings* _3264;
frost$io$File* _3265;
frost$core$Object* _3266;
frost$core$Object* _3268;
org$frostlang$frostc$Compiler$Settings* _3321;
frost$core$Object* _3322;
frost$io$File* _3325;
frost$core$Object* _3326;
frost$core$String* _3329;
frost$core$Object* _3330;
frost$io$File* _3333;
frost$core$Object* _3334;
frost$collections$Array* _3337;
frost$core$Object* _3338;
frost$collections$Array* _3341;
frost$core$Object* _3342;
frost$collections$Array* _3345;
frost$core$Object* _3346;
frost$collections$Array* _3349;
frost$core$Object* _3350;
org$frostlang$frostc$Main$Arguments* _3353;
frost$core$Object* _3354;
frost$core$Int _3274;
frost$core$Int _3275;
int64_t _3278;
int64_t _3279;
bool _3280;
frost$core$Bit _3281;
bool _3283;
frost$core$Int _3298;
frost$core$String* _3299;
frost$core$String* _3300;
frost$core$Object* _3310;
frost$core$Object* _3312;
frost$core$Int _3316;
frost$core$Int _3318;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:187
_1 = (org$frostlang$frostc$Main$Arguments*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Arguments), (frost$core$Class*) &org$frostlang$frostc$Main$Arguments$class);
org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT(_1, param1);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:188
_13 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_13);
*(&local1) = ((frost$collections$Array*) NULL);
_16 = ((frost$core$Object*) _13);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local1);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local1) = _13;
_22 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_22);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:189
_25 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_25);
*(&local2) = ((frost$collections$Array*) NULL);
_28 = ((frost$core$Object*) _25);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = *(&local2);
_31 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_31);
*(&local2) = _25;
_34 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_34);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:190
_37 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_37);
*(&local3) = ((frost$collections$Array*) NULL);
_40 = ((frost$core$Object*) _37);
frost$core$Frost$ref$frost$core$Object$Q(_40);
_42 = *(&local3);
_43 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_43);
*(&local3) = _37;
_46 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_46);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:191
_49 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_49);
*(&local4) = ((frost$collections$Array*) NULL);
_52 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_52);
_54 = *(&local4);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
*(&local4) = _49;
_58 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_58);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:192
*(&local5) = ((frost$io$File*) NULL);
_62 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_62);
_64 = *(&local5);
_65 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_65);
*(&local5) = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:193
_69 = (frost$core$Int) {3u};
*(&local6) = _69;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:194
_72 = (frost$core$Int) {3u};
*(&local7) = _72;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:195
*(&local8) = ((org$frostlang$frostc$Main$Format$nullable) { .nonnull = false });
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:196
*(&local9) = ((frost$core$String*) NULL);
_78 = ((frost$core$Object*) ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_78);
_80 = *(&local9);
_81 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_81);
*(&local9) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:197
_85 = (frost$core$Bit) {true};
*(&local10) = _85;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:198
_88 = (frost$core$Bit) {true};
*(&local11) = _88;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:199
goto block1;
block1:;
_92 = *(&local0);
_93 = ($fn162) _92->$class->vtable[2];
_94 = _93(_92);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:199:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_97 = _94.value;
_98 = !_97;
_99 = (frost$core$Bit) {_98};
_101 = _99.value;
if (_101) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:200
_104 = *(&local0);
_105 = ($fn163) _104->$class->vtable[3];
_106 = _105(_104);
*(&local12) = ((frost$core$String*) NULL);
_108 = ((frost$core$Object*) _106);
frost$core$Frost$ref$frost$core$Object$Q(_108);
_110 = *(&local12);
_111 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_111);
*(&local12) = _106;
_114 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_114);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:201
_117 = *(&local12);
_118 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_117, &$s164);
_119 = _118.value;
if (_119) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:203
*(&local13) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:204
_124 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String(_124, &$s165);
*(&local14) = ((frost$io$File*) NULL);
_127 = ((frost$core$Object*) _124);
frost$core$Frost$ref$frost$core$Object$Q(_127);
_129 = *(&local14);
_130 = ((frost$core$Object*) _129);
frost$core$Frost$unref$frost$core$Object$Q(_130);
*(&local14) = _124;
_133 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_133);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:205
_136 = frost$io$Console$inputStream$R$frost$io$InputStream();
_137 = *(&local14);
_138 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(_137);
_139 = &_138->$rawValue;
_140 = *_139;
_141 = _140.value;
_142 = _141 == 0u;
if (_142) goto block10; else goto block11;
block11:;
_144 = &_138->$data.$ERROR.field0;
_145 = *_144;
_146 = ((frost$core$Object*) _145);
frost$core$Frost$ref$frost$core$Object$Q(_146);
*(&local13) = _145;
_149 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_149);
_151 = ((frost$core$Object*) _136);
frost$core$Frost$unref$frost$core$Object$Q(_151);
_153 = *(&local14);
_154 = ((frost$core$Object*) _153);
frost$core$Frost$unref$frost$core$Object$Q(_154);
*(&local14) = ((frost$io$File*) NULL);
goto block8;
block10:;
_158 = &_138->$data.$SUCCESS.field0;
_159 = *_158;
_160 = ((frost$io$OutputStream*) _159);
_161 = ($fn166) _136->$class->vtable[17];
_162 = _161(_136, _160);
_163 = &_162->$rawValue;
_164 = *_163;
_165 = _164.value;
_166 = _165 == 0u;
if (_166) goto block12; else goto block13;
block13:;
_168 = &_162->$data.$ERROR.field0;
_169 = *_168;
_170 = ((frost$core$Object*) _169);
frost$core$Frost$ref$frost$core$Object$Q(_170);
*(&local13) = _169;
_173 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_173);
_175 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_175);
_177 = ((frost$core$Object*) _136);
frost$core$Frost$unref$frost$core$Object$Q(_177);
_179 = *(&local14);
_180 = ((frost$core$Object*) _179);
frost$core$Frost$unref$frost$core$Object$Q(_180);
*(&local14) = ((frost$io$File*) NULL);
goto block8;
block12:;
_184 = &_162->$data.$SUCCESS.field0;
_185 = *_184;
_186 = ((frost$core$Int$wrapper*) _185)->value;
_187 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_187);
_189 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_189);
_191 = ((frost$core$Object*) _136);
frost$core$Frost$unref$frost$core$Object$Q(_191);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:206
_194 = *(&local1);
_195 = *(&local14);
_196 = ((frost$core$Object*) _195);
frost$collections$Array$add$frost$collections$Array$T(_194, _196);
_198 = *(&local14);
_199 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_199);
*(&local14) = ((frost$io$File*) NULL);
_225 = *(&local13);
_226 = ((frost$core$Object*) _225);
frost$core$Frost$unref$frost$core$Object$Q(_226);
*(&local13) = ((frost$core$Error*) NULL);
goto block5;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:209
_204 = *(&local13);
_205 = ((frost$core$Object*) _204);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:209:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_208 = ($fn167) _205->$class->vtable[0];
_209 = _208(_205);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_209);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_216 = ((frost$core$Object*) _209);
frost$core$Frost$unref$frost$core$Object$Q(_216);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:210
_220 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_220);
_222 = (frost$core$Int) {210u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s168, _222, &$s169);
abort(); // unreachable
block7:;
_230 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_117, &$s170);
_231 = _230.value;
if (_231) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:214
_234 = *(&local5);
_235 = _234 != NULL;
_236 = (frost$core$Bit) {_235};
_237 = _236.value;
if (_237) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:215
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:215:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s171);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s172);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:216
_250 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_250);
_252 = (frost$core$Int) {216u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s173, _252, &$s174);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:218
_256 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_257 = *(&local0);
_258 = ($fn175) _257->$class->vtable[4];
_259 = _258(_257, &$s176);
frost$io$File$init$frost$core$String(_256, _259);
_261 = _256;
_262 = ((frost$core$Object*) _261);
frost$core$Frost$ref$frost$core$Object$Q(_262);
_264 = *(&local5);
_265 = ((frost$core$Object*) _264);
frost$core$Frost$unref$frost$core$Object$Q(_265);
*(&local5) = _261;
_268 = ((frost$core$Object*) _259);
frost$core$Frost$unref$frost$core$Object$Q(_268);
_270 = ((frost$core$Object*) _256);
frost$core$Frost$unref$frost$core$Object$Q(_270);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:219
*(&local15) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:220
_275 = *(&local5);
_276 = _275 != NULL;
_277 = (frost$core$Bit) {_276};
_278 = _277.value;
if (_278) goto block24; else goto block25;
block25:;
_280 = (frost$core$Int) {220u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s177, _280, &$s178);
abort(); // unreachable
block24:;
_283 = _275;
// begin inline call to function frost.io.File.get_parent():frost.io.File? from Main.frost:220:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_286 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_283, &$s179);
_287 = &_286->path;
_288 = *_287;
_289 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_288);
*(&local17) = ((frost$core$String*) NULL);
_291 = ((frost$core$Object*) _289);
frost$core$Frost$ref$frost$core$Object$Q(_291);
_293 = *(&local17);
_294 = ((frost$core$Object*) _293);
frost$core$Frost$unref$frost$core$Object$Q(_294);
*(&local17) = _289;
_297 = ((frost$core$Object*) _289);
frost$core$Frost$unref$frost$core$Object$Q(_297);
_299 = ((frost$core$Object*) _286);
frost$core$Frost$unref$frost$core$Object$Q(_299);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_302 = *(&local17);
_303 = _302 == NULL;
_304 = (frost$core$Bit) {_303};
_305 = _304.value;
if (_305) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_308 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_308);
_310 = *(&local17);
_311 = ((frost$core$Object*) _310);
frost$core$Frost$unref$frost$core$Object$Q(_311);
*(&local17) = ((frost$core$String*) NULL);
*(&local16) = ((frost$io$File*) NULL);
_315 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_315);
goto block26;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_319 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_320 = *(&local17);
_321 = _320 != NULL;
_322 = (frost$core$Bit) {_321};
_323 = _322.value;
if (_323) goto block29; else goto block30;
block30:;
_325 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s180, _325, &$s181);
abort(); // unreachable
block29:;
_328 = _320;
frost$io$File$init$frost$core$String(_319, _328);
_330 = _319;
_331 = ((frost$core$Object*) _330);
frost$core$Frost$ref$frost$core$Object$Q(_331);
_333 = ((frost$core$Object*) _319);
frost$core$Frost$unref$frost$core$Object$Q(_333);
_335 = *(&local17);
_336 = ((frost$core$Object*) _335);
frost$core$Frost$unref$frost$core$Object$Q(_336);
*(&local17) = ((frost$core$String*) NULL);
*(&local16) = _330;
_340 = ((frost$core$Object*) _330);
frost$core$Frost$ref$frost$core$Object$Q(_340);
goto block26;
block26:;
_343 = *(&local16);
_344 = _343 != NULL;
_345 = (frost$core$Bit) {_344};
_346 = _345.value;
if (_346) goto block31; else goto block32;
block32:;
_348 = (frost$core$Int) {220u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s182, _348, &$s183);
abort(); // unreachable
block31:;
_351 = _343;
_352 = frost$io$File$createDirectories$R$frost$core$Error$Q(_351);
_353 = _352 == NULL;
if (_353) goto block33; else goto block34;
block34:;
_355 = ((frost$core$Object*) _352);
frost$core$Frost$ref$frost$core$Object$Q(_355);
_357 = _352 != NULL;
_358 = (frost$core$Bit) {_357};
_359 = _358.value;
if (_359) goto block35; else goto block36;
block36:;
_361 = (frost$core$Int) {220u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s184, _361, &$s185);
abort(); // unreachable
block35:;
_364 = _352;
*(&local15) = _364;
_366 = ((frost$core$Object*) _352);
frost$core$Frost$unref$frost$core$Object$Q(_366);
_368 = ((frost$core$Object*) _343);
frost$core$Frost$unref$frost$core$Object$Q(_368);
_370 = *(&local16);
_371 = ((frost$core$Object*) _370);
frost$core$Frost$unref$frost$core$Object$Q(_371);
*(&local16) = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:223
_385 = *(&local15);
_386 = ((frost$core$Object*) _385);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:223:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_389 = ($fn186) _386->$class->vtable[0];
_390 = _389(_386);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_390);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_397 = ((frost$core$Object*) _390);
frost$core$Frost$unref$frost$core$Object$Q(_397);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:224
_401 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_401);
_403 = (frost$core$Int) {224u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s187, _403, &$s188);
abort(); // unreachable
block33:;
_375 = ((frost$core$Object*) _352);
frost$core$Frost$unref$frost$core$Object$Q(_375);
_377 = ((frost$core$Object*) _343);
frost$core$Frost$unref$frost$core$Object$Q(_377);
_379 = *(&local16);
_380 = ((frost$core$Object*) _379);
frost$core$Frost$unref$frost$core$Object$Q(_380);
*(&local16) = ((frost$io$File*) NULL);
_406 = *(&local15);
_407 = ((frost$core$Object*) _406);
frost$core$Frost$unref$frost$core$Object$Q(_407);
*(&local15) = ((frost$core$Error*) NULL);
goto block5;
block17:;
_411 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_117, &$s189);
_412 = _411.value;
if (_412) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:228
_415 = *(&local0);
_416 = ($fn190) _415->$class->vtable[4];
_417 = _416(_415, &$s191);
*(&local18) = ((frost$core$String*) NULL);
_419 = ((frost$core$Object*) _417);
frost$core$Frost$ref$frost$core$Object$Q(_419);
_421 = *(&local18);
_422 = ((frost$core$Object*) _421);
frost$core$Frost$unref$frost$core$Object$Q(_422);
*(&local18) = _417;
_425 = ((frost$core$Object*) _417);
frost$core$Frost$unref$frost$core$Object$Q(_425);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:229
_428 = *(&local18);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Main.frost:229:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
_431 = frost$core$String$get_asInt64$R$frost$core$Int64$Q(_428);
*(&local20) = _431;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
_434 = *(&local20);
_435 = _434.nonnull;
_436 = (frost$core$Bit) {_435};
_437 = _436.value;
if (_437) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
_440 = *(&local20);
_441 = _440.nonnull;
_442 = (frost$core$Bit) {_441};
_443 = _442.value;
if (_443) goto block44; else goto block45;
block45:;
_445 = (frost$core$Int) {1456u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s192, _445, &$s193);
abort(); // unreachable
block44:;
_448 = ((frost$core$Int64) _440.value);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_451 = _448.value;
_452 = ((int64_t) _451);
_453 = (frost$core$Int) {_452};
_455 = ((frost$core$Int$nullable) { _453, true });
*(&local19) = _455;
goto block41;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local19) = ((frost$core$Int$nullable) { .nonnull = false });
goto block41;
block41:;
_461 = *(&local19);
*(&local21) = _461;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:230
_464 = *(&local21);
_465 = !_464.nonnull;
_466 = (frost$core$Bit) {_465};
_467 = _466.value;
if (_467) goto block47; else goto block50;
block50:;
_469 = *(&local21);
_470 = _469.nonnull;
_471 = (frost$core$Bit) {_470};
_472 = _471.value;
if (_472) goto block51; else goto block52;
block52:;
_474 = (frost$core$Int) {230u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s194, _474, &$s195);
abort(); // unreachable
block51:;
_477 = ((frost$core$Int) _469.value);
_478 = (frost$core$Int) {3u};
_479 = _477.value;
_480 = _478.value;
_481 = _479 > _480;
_482 = (frost$core$Bit) {_481};
_483 = _482.value;
if (_483) goto block47; else goto block49;
block49:;
_485 = *(&local21);
_486 = _485.nonnull;
_487 = (frost$core$Bit) {_486};
_488 = _487.value;
if (_488) goto block53; else goto block54;
block54:;
_490 = (frost$core$Int) {230u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s196, _490, &$s197);
abort(); // unreachable
block53:;
_493 = ((frost$core$Int) _485.value);
_494 = (frost$core$Int) {0u};
_495 = _493.value;
_496 = _494.value;
_497 = _495 < _496;
_498 = (frost$core$Bit) {_497};
_499 = _498.value;
if (_499) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:231
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:231:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s198);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s199);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:232
_512 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_512);
_514 = (frost$core$Int) {232u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s200, _514, &$s201);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:234
_518 = *(&local21);
_519 = _518.nonnull;
_520 = (frost$core$Bit) {_519};
_521 = _520.value;
if (_521) goto block57; else goto block58;
block58:;
_523 = (frost$core$Int) {234u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s202, _523, &$s203);
abort(); // unreachable
block57:;
_526 = ((frost$core$Int) _518.value);
*(&local6) = _526;
_528 = *(&local18);
_529 = ((frost$core$Object*) _528);
frost$core$Frost$unref$frost$core$Object$Q(_529);
*(&local18) = ((frost$core$String*) NULL);
goto block5;
block40:;
_533 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_117, &$s204);
_534 = _533.value;
if (_534) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:237
_537 = *(&local0);
_538 = ($fn205) _537->$class->vtable[4];
_539 = _538(_537, &$s206);
*(&local22) = ((frost$core$String*) NULL);
_541 = ((frost$core$Object*) _539);
frost$core$Frost$ref$frost$core$Object$Q(_541);
_543 = *(&local22);
_544 = ((frost$core$Object*) _543);
frost$core$Frost$unref$frost$core$Object$Q(_544);
*(&local22) = _539;
_547 = ((frost$core$Object*) _539);
frost$core$Frost$unref$frost$core$Object$Q(_547);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:238
_550 = *(&local22);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Main.frost:238:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
_553 = frost$core$String$get_asInt64$R$frost$core$Int64$Q(_550);
*(&local24) = _553;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
_556 = *(&local24);
_557 = _556.nonnull;
_558 = (frost$core$Bit) {_557};
_559 = _558.value;
if (_559) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
_562 = *(&local24);
_563 = _562.nonnull;
_564 = (frost$core$Bit) {_563};
_565 = _564.value;
if (_565) goto block64; else goto block65;
block65:;
_567 = (frost$core$Int) {1456u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s207, _567, &$s208);
abort(); // unreachable
block64:;
_570 = ((frost$core$Int64) _562.value);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_573 = _570.value;
_574 = ((int64_t) _573);
_575 = (frost$core$Int) {_574};
_577 = ((frost$core$Int$nullable) { _575, true });
*(&local23) = _577;
goto block61;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local23) = ((frost$core$Int$nullable) { .nonnull = false });
goto block61;
block61:;
_583 = *(&local23);
*(&local25) = _583;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:239
_586 = *(&local25);
_587 = !_586.nonnull;
_588 = (frost$core$Bit) {_587};
_589 = _588.value;
if (_589) goto block67; else goto block70;
block70:;
_591 = *(&local25);
_592 = _591.nonnull;
_593 = (frost$core$Bit) {_592};
_594 = _593.value;
if (_594) goto block71; else goto block72;
block72:;
_596 = (frost$core$Int) {239u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s209, _596, &$s210);
abort(); // unreachable
block71:;
_599 = ((frost$core$Int) _591.value);
_600 = (frost$core$Int) {3u};
_601 = _599.value;
_602 = _600.value;
_603 = _601 > _602;
_604 = (frost$core$Bit) {_603};
_605 = _604.value;
if (_605) goto block67; else goto block69;
block69:;
_607 = *(&local25);
_608 = _607.nonnull;
_609 = (frost$core$Bit) {_608};
_610 = _609.value;
if (_610) goto block73; else goto block74;
block74:;
_612 = (frost$core$Int) {239u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s211, _612, &$s212);
abort(); // unreachable
block73:;
_615 = ((frost$core$Int) _607.value);
_616 = (frost$core$Int) {0u};
_617 = _615.value;
_618 = _616.value;
_619 = _617 < _618;
_620 = (frost$core$Bit) {_619};
_621 = _620.value;
if (_621) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:240
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:240:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s213);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s214);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:241
_634 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_634);
_636 = (frost$core$Int) {241u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s215, _636, &$s216);
abort(); // unreachable
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:243
_640 = *(&local25);
_641 = _640.nonnull;
_642 = (frost$core$Bit) {_641};
_643 = _642.value;
if (_643) goto block77; else goto block78;
block78:;
_645 = (frost$core$Int) {243u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s217, _645, &$s218);
abort(); // unreachable
block77:;
_648 = ((frost$core$Int) _640.value);
*(&local7) = _648;
_650 = *(&local22);
_651 = ((frost$core$Object*) _650);
frost$core$Frost$unref$frost$core$Object$Q(_651);
*(&local22) = ((frost$core$String*) NULL);
goto block5;
block60:;
_655 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_117, &$s219);
_656 = _655.value;
if (_656) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:246
_659 = *(&local8);
_660 = _659.nonnull;
_661 = (frost$core$Bit) {_660};
_662 = _661.value;
if (_662) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:247
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:247:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s220);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s221);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:248
_675 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_675);
_677 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s222, _677, &$s223);
abort(); // unreachable
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:250
_681 = *(&local0);
_682 = ($fn224) _681->$class->vtable[4];
_683 = _682(_681, &$s225);
*(&local26) = ((frost$core$String*) NULL);
_685 = ((frost$core$Object*) _683);
frost$core$Frost$ref$frost$core$Object$Q(_685);
_687 = *(&local26);
_688 = ((frost$core$Object*) _687);
frost$core$Frost$unref$frost$core$Object$Q(_688);
*(&local26) = _683;
_691 = ((frost$core$Object*) _683);
frost$core$Frost$unref$frost$core$Object$Q(_691);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:251
_694 = *(&local26);
_695 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_694, &$s226);
_696 = _695.value;
if (_696) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:252
_699 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:252:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_702 = &(&local28)->$rawValue;
*_702 = _699;
_704 = *(&local28);
*(&local27) = _704;
_707 = *(&local27);
_708 = ((org$frostlang$frostc$Main$Format$nullable) { _707, true });
*(&local8) = _708;
goto block85;
block87:;
_711 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_694, &$s227);
_712 = _711.value;
if (_712) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:253
_715 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:253:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_718 = &(&local30)->$rawValue;
*_718 = _715;
_720 = *(&local30);
*(&local29) = _720;
_723 = *(&local29);
_724 = ((org$frostlang$frostc$Main$Format$nullable) { _723, true });
*(&local8) = _724;
goto block85;
block90:;
_727 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_694, &$s228);
_728 = _727.value;
if (_728) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:254
_731 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:254:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_734 = &(&local32)->$rawValue;
*_734 = _731;
_736 = *(&local32);
*(&local31) = _736;
_739 = *(&local31);
_740 = ((org$frostlang$frostc$Main$Format$nullable) { _739, true });
*(&local8) = _740;
goto block85;
block93:;
_743 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_694, &$s229);
_744 = _743.value;
if (_744) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:255
_747 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:255:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_750 = &(&local34)->$rawValue;
*_750 = _747;
_752 = *(&local34);
*(&local33) = _752;
_755 = *(&local33);
_756 = ((org$frostlang$frostc$Main$Format$nullable) { _755, true });
*(&local8) = _756;
goto block85;
block96:;
_759 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_694, &$s230);
_760 = _759.value;
if (_760) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:256
_763 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:256:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_766 = &(&local36)->$rawValue;
*_766 = _763;
_768 = *(&local36);
*(&local35) = _768;
_771 = *(&local35);
_772 = ((org$frostlang$frostc$Main$Format$nullable) { _771, true });
*(&local8) = _772;
goto block85;
block99:;
_775 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_694, &$s231);
_776 = _775.value;
if (_776) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:257
_779 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:257:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_782 = &(&local38)->$rawValue;
*_782 = _779;
_784 = *(&local38);
*(&local37) = _784;
_787 = *(&local37);
_788 = ((org$frostlang$frostc$Main$Format$nullable) { _787, true });
*(&local8) = _788;
goto block85;
block102:;
_791 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_694, &$s232);
_792 = _791.value;
if (_792) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:258
_795 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:258:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_798 = &(&local40)->$rawValue;
*_798 = _795;
_800 = *(&local40);
*(&local39) = _800;
_803 = *(&local39);
_804 = ((org$frostlang$frostc$Main$Format$nullable) { _803, true });
*(&local8) = _804;
goto block85;
block105:;
_807 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_694, &$s233);
_808 = _807.value;
if (_808) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:259
_811 = (frost$core$Int) {7u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:259:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_814 = &(&local42)->$rawValue;
*_814 = _811;
_816 = *(&local42);
*(&local41) = _816;
_819 = *(&local41);
_820 = ((org$frostlang$frostc$Main$Format$nullable) { _819, true });
*(&local8) = _820;
goto block85;
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:261
_824 = *(&local26);
_825 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s234, _824);
_826 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_825, &$s235);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:261:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_826);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s236);
_836 = ((frost$core$Object*) _826);
frost$core$Frost$unref$frost$core$Object$Q(_836);
_838 = ((frost$core$Object*) _825);
frost$core$Frost$unref$frost$core$Object$Q(_838);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:262
_841 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_841);
_843 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s237, _843, &$s238);
abort(); // unreachable
block85:;
_846 = *(&local26);
_847 = ((frost$core$Object*) _846);
frost$core$Frost$unref$frost$core$Object$Q(_847);
*(&local26) = ((frost$core$String*) NULL);
goto block5;
block80:;
_851 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_117, &$s239);
_852 = _851.value;
if (_852) goto block112; else goto block113;
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:267
_855 = *(&local2);
_856 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_857 = *(&local0);
_858 = ($fn240) _857->$class->vtable[4];
_859 = _858(_857, &$s241);
frost$io$File$init$frost$core$String(_856, _859);
_861 = ((frost$core$Object*) _856);
frost$collections$Array$add$frost$collections$Array$T(_855, _861);
_863 = ((frost$core$Object*) _859);
frost$core$Frost$unref$frost$core$Object$Q(_863);
_865 = ((frost$core$Object*) _856);
frost$core$Frost$unref$frost$core$Object$Q(_865);
goto block5;
block113:;
_868 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_117, &$s242);
_869 = _868.value;
if (_869) goto block114; else goto block115;
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:270
_872 = *(&local3);
_873 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_874 = *(&local0);
_875 = ($fn243) _874->$class->vtable[4];
_876 = _875(_874, &$s244);
frost$io$File$init$frost$core$String(_873, _876);
_878 = ((frost$core$Object*) _873);
frost$collections$Array$add$frost$collections$Array$T(_872, _878);
_880 = ((frost$core$Object*) _876);
frost$core$Frost$unref$frost$core$Object$Q(_880);
_882 = ((frost$core$Object*) _873);
frost$core$Frost$unref$frost$core$Object$Q(_882);
goto block5;
block115:;
_885 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_117, &$s245);
_886 = _885.value;
if (_886) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:273
_889 = *(&local4);
_890 = *(&local0);
_891 = ($fn246) _890->$class->vtable[4];
_892 = _891(_890, &$s247);
_893 = ((frost$core$Object*) _892);
frost$collections$Array$add$frost$collections$Array$T(_889, _893);
_895 = ((frost$core$Object*) _892);
frost$core$Frost$unref$frost$core$Object$Q(_895);
goto block5;
block117:;
_898 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_117, &$s248);
_899 = _898.value;
if (_899) goto block118; else goto block119;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:276
_902 = *(&local0);
_903 = ($fn249) _902->$class->vtable[4];
_904 = _903(_902, &$s250);
_905 = _904;
_906 = ((frost$core$Object*) _905);
frost$core$Frost$ref$frost$core$Object$Q(_906);
_908 = *(&local9);
_909 = ((frost$core$Object*) _908);
frost$core$Frost$unref$frost$core$Object$Q(_909);
*(&local9) = _905;
_912 = ((frost$core$Object*) _904);
frost$core$Frost$unref$frost$core$Object$Q(_912);
goto block5;
block119:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:279
_916 = *(&local12);
_917 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(_916, &$s251);
_918 = _917.value;
if (_918) goto block120; else goto block122;
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:280
_921 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_922 = *(&local12);
frost$io$File$init$frost$core$String(_921, _922);
*(&local43) = ((frost$io$File*) NULL);
_925 = ((frost$core$Object*) _921);
frost$core$Frost$ref$frost$core$Object$Q(_925);
_927 = *(&local43);
_928 = ((frost$core$Object*) _927);
frost$core$Frost$unref$frost$core$Object$Q(_928);
*(&local43) = _921;
_931 = ((frost$core$Object*) _921);
frost$core$Frost$unref$frost$core$Object$Q(_931);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:281
_934 = *(&local1);
_935 = *(&local43);
_936 = ((frost$core$Object*) _935);
frost$collections$Array$add$frost$collections$Array$T(_934, _936);
_938 = *(&local43);
_939 = ((frost$core$Object*) _938);
frost$core$Frost$unref$frost$core$Object$Q(_939);
*(&local43) = ((frost$io$File*) NULL);
goto block5;
block122:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:284
_945 = *(&local12);
_946 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s252, _945);
_947 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_946, &$s253);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:284:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_947);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s254);
_957 = ((frost$core$Object*) _947);
frost$core$Frost$unref$frost$core$Object$Q(_957);
_959 = ((frost$core$Object*) _946);
frost$core$Frost$unref$frost$core$Object$Q(_959);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:285
_962 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_962);
_964 = (frost$core$Int) {285u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s255, _964, &$s256);
abort(); // unreachable
block5:;
_968 = *(&local12);
_969 = ((frost$core$Object*) _968);
frost$core$Frost$unref$frost$core$Object$Q(_969);
*(&local12) = ((frost$core$String*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:290
_974 = *(&local8);
_975 = !_974.nonnull;
_976 = (frost$core$Bit) {_975};
_977 = _976.value;
if (_977) goto block125; else goto block127;
block127:;
_979 = *(&local8);
_980 = _979.nonnull;
_981 = (frost$core$Bit) {_980};
_982 = _981.value;
if (_982) goto block128; else goto block129;
block129:;
_984 = (frost$core$Int) {290u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s257, _984, &$s258);
abort(); // unreachable
block128:;
frost$core$Equatable* $tmp259;
if (_979.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp260;
    $tmp260 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp260->value = ((org$frostlang$frostc$Main$Format) _979.value);
    $tmp259 = ((frost$core$Equatable*) $tmp260);
}
else {
    $tmp259 = NULL;
}
_987 = $tmp259;
_988 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:290:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_991 = &(&local45)->$rawValue;
*_991 = _988;
_993 = *(&local45);
*(&local44) = _993;
_996 = *(&local44);
org$frostlang$frostc$Main$Format$wrapper* $tmp261;
$tmp261 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp261->value = _996;
_997 = ((frost$core$Equatable*) $tmp261);
ITable* $tmp262 = _987->$class->itable;
while ($tmp262->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp262 = $tmp262->next;
}
_998 = $tmp262->methods[1];
_999 = _998(_987, _997);
_1000 = _999.value;
_1001 = ((frost$core$Object*) _997);
frost$core$Frost$unref$frost$core$Object$Q(_1001);
_1003 = ((frost$core$Object*) _987);
frost$core$Frost$unref$frost$core$Object$Q(_1003);
if (_1000) goto block125; else goto block126;
block125:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:291
_1007 = *(&local2);
_1008 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_1009 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$io$File$init$frost$core$String(_1008, _1009);
_1011 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1008, &$s263);
_1012 = ((frost$core$Object*) _1011);
frost$collections$Array$add$frost$collections$Array$T(_1007, _1012);
_1014 = ((frost$core$Object*) _1011);
frost$core$Frost$unref$frost$core$Object$Q(_1014);
_1016 = ((frost$core$Object*) _1009);
frost$core$Frost$unref$frost$core$Object$Q(_1016);
_1018 = ((frost$core$Object*) _1008);
frost$core$Frost$unref$frost$core$Object$Q(_1018);
goto block126;
block126:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:293
_1022 = *(&local2);
_1023 = &param0->frostHome;
_1024 = *_1023;
_1025 = ((frost$core$Object*) _1024);
frost$collections$Array$add$frost$collections$Array$T(_1022, _1025);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:294
_1028 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_1029 = org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String(_1028, _1029);
*(&local46) = ((frost$io$File*) NULL);
_1032 = ((frost$core$Object*) _1028);
frost$core$Frost$ref$frost$core$Object$Q(_1032);
_1034 = *(&local46);
_1035 = ((frost$core$Object*) _1034);
frost$core$Frost$unref$frost$core$Object$Q(_1035);
*(&local46) = _1028;
_1038 = ((frost$core$Object*) _1029);
frost$core$Frost$unref$frost$core$Object$Q(_1038);
_1040 = ((frost$core$Object*) _1028);
frost$core$Frost$unref$frost$core$Object$Q(_1040);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:295
_1043 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String(_1043, &$s264);
_1045 = ((frost$core$Object*) _1043);
frost$core$Frost$ref$frost$core$Object$Q(_1045);
_1047 = &param0->clang;
_1048 = *_1047;
_1049 = ((frost$core$Object*) _1048);
frost$core$Frost$unref$frost$core$Object$Q(_1049);
_1051 = &param0->clang;
*_1051 = _1043;
_1053 = ((frost$core$Object*) _1043);
frost$core$Frost$unref$frost$core$Object$Q(_1053);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:296
_1056 = *(&local1);
_1057 = ((frost$collections$CollectionView*) _1056);
ITable* $tmp265 = _1057->$class->itable;
while ($tmp265->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp265 = $tmp265->next;
}
_1058 = $tmp265->methods[0];
_1059 = _1058(_1057);
_1060 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:296:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1063 = _1059.value;
_1064 = _1060.value;
_1065 = _1063 == _1064;
_1066 = (frost$core$Bit) {_1065};
_1068 = _1066.value;
if (_1068) goto block131; else goto block132;
block131:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:297
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:297:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s266);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s267);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:298
_1081 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1081);
_1083 = (frost$core$Int) {298u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s268, _1083, &$s269);
abort(); // unreachable
block132:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:300
_1087 = *(&local8);
_1088 = !_1087.nonnull;
_1089 = (frost$core$Bit) {_1088};
_1090 = _1089.value;
if (_1090) goto block136; else goto block137;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:301
_1093 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:301:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_1096 = &(&local48)->$rawValue;
*_1096 = _1093;
_1098 = *(&local48);
*(&local47) = _1098;
_1101 = *(&local47);
_1102 = ((org$frostlang$frostc$Main$Format$nullable) { _1101, true });
*(&local8) = _1102;
goto block137;
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:303
_1106 = *(&local5);
_1107 = _1106 == NULL;
_1108 = (frost$core$Bit) {_1107};
_1109 = _1108.value;
if (_1109) goto block141; else goto block140;
block141:;
_1111 = *(&local8);
_1112 = _1111.nonnull;
_1113 = (frost$core$Bit) {_1112};
_1114 = _1113.value;
if (_1114) goto block142; else goto block143;
block143:;
_1116 = (frost$core$Int) {303u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s270, _1116, &$s271);
abort(); // unreachable
block142:;
frost$core$Equatable* $tmp272;
if (_1111.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp273;
    $tmp273 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp273->value = ((org$frostlang$frostc$Main$Format) _1111.value);
    $tmp272 = ((frost$core$Equatable*) $tmp273);
}
else {
    $tmp272 = NULL;
}
_1119 = $tmp272;
_1120 = (frost$core$Int) {7u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:303:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_1123 = &(&local50)->$rawValue;
*_1123 = _1120;
_1125 = *(&local50);
*(&local49) = _1125;
_1128 = *(&local49);
org$frostlang$frostc$Main$Format$wrapper* $tmp274;
$tmp274 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp274->value = _1128;
_1129 = ((frost$core$Equatable*) $tmp274);
ITable* $tmp275 = _1119->$class->itable;
while ($tmp275->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp275 = $tmp275->next;
}
_1130 = $tmp275->methods[1];
_1131 = _1130(_1119, _1129);
_1132 = _1131.value;
_1133 = ((frost$core$Object*) _1129);
frost$core$Frost$unref$frost$core$Object$Q(_1133);
_1135 = ((frost$core$Object*) _1119);
frost$core$Frost$unref$frost$core$Object$Q(_1135);
if (_1132) goto block139; else goto block140;
block139:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:304
_1139 = *(&local1);
_1140 = ((frost$collections$CollectionView*) _1139);
ITable* $tmp276 = _1140->$class->itable;
while ($tmp276->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp276 = $tmp276->next;
}
_1141 = $tmp276->methods[0];
_1142 = _1141(_1140);
_1143 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:304:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1146 = _1142.value;
_1147 = _1143.value;
_1148 = _1146 == _1147;
_1149 = (frost$core$Bit) {_1148};
_1151 = _1149.value;
if (_1151) goto block145; else goto block147;
block145:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:305
*(&local51) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:306
_1156 = *(&local8);
_1157 = _1156.nonnull;
_1158 = (frost$core$Bit) {_1157};
_1159 = _1158.value;
if (_1159) goto block149; else goto block150;
block150:;
_1161 = (frost$core$Int) {306u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s277, _1161, &$s278);
abort(); // unreachable
block149:;
_1164 = ((org$frostlang$frostc$Main$Format) _1156.value);
_1165 = _1164.$rawValue;
_1166 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:307:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1169 = _1165.value;
_1170 = _1166.value;
_1171 = _1169 == _1170;
_1172 = (frost$core$Bit) {_1171};
_1174 = _1172.value;
if (_1174) goto block152; else goto block153;
block152:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:307
_1177 = ((frost$core$Object*) &$s279);
frost$core$Frost$ref$frost$core$Object$Q(_1177);
_1179 = *(&local51);
_1180 = ((frost$core$Object*) _1179);
frost$core$Frost$unref$frost$core$Object$Q(_1180);
*(&local51) = &$s280;
goto block151;
block153:;
_1184 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:308:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1187 = _1165.value;
_1188 = _1184.value;
_1189 = _1187 == _1188;
_1190 = (frost$core$Bit) {_1189};
_1192 = _1190.value;
if (_1192) goto block155; else goto block156;
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:308
_1195 = ((frost$core$Object*) &$s281);
frost$core$Frost$ref$frost$core$Object$Q(_1195);
_1197 = *(&local51);
_1198 = ((frost$core$Object*) _1197);
frost$core$Frost$unref$frost$core$Object$Q(_1198);
*(&local51) = &$s282;
goto block151;
block156:;
_1202 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:309:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1205 = _1165.value;
_1206 = _1202.value;
_1207 = _1205 == _1206;
_1208 = (frost$core$Bit) {_1207};
_1210 = _1208.value;
if (_1210) goto block158; else goto block159;
block158:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:309
_1213 = ((frost$core$Object*) &$s283);
frost$core$Frost$ref$frost$core$Object$Q(_1213);
_1215 = *(&local51);
_1216 = ((frost$core$Object*) _1215);
frost$core$Frost$unref$frost$core$Object$Q(_1216);
*(&local51) = &$s284;
goto block151;
block159:;
_1220 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:310:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1223 = _1165.value;
_1224 = _1220.value;
_1225 = _1223 == _1224;
_1226 = (frost$core$Bit) {_1225};
_1228 = _1226.value;
if (_1228) goto block161; else goto block162;
block161:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:310
_1231 = ((frost$core$Object*) &$s285);
frost$core$Frost$ref$frost$core$Object$Q(_1231);
_1233 = *(&local51);
_1234 = ((frost$core$Object*) _1233);
frost$core$Frost$unref$frost$core$Object$Q(_1234);
*(&local51) = &$s286;
goto block151;
block162:;
_1238 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:311:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1241 = _1165.value;
_1242 = _1238.value;
_1243 = _1241 == _1242;
_1244 = (frost$core$Bit) {_1243};
_1246 = _1244.value;
if (_1246) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:311
_1249 = ((frost$core$Object*) &$s287);
frost$core$Frost$ref$frost$core$Object$Q(_1249);
_1251 = *(&local51);
_1252 = ((frost$core$Object*) _1251);
frost$core$Frost$unref$frost$core$Object$Q(_1252);
*(&local51) = &$s288;
goto block151;
block165:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:313
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:313:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s289);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s290);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:315
_1267 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1267);
_1269 = (frost$core$Int) {315u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s291, _1269, &$s292);
abort(); // unreachable
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:318
_1273 = *(&local1);
_1274 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Main.frost:318:35
_1276 = (frost$core$Int) {0u};
_1277 = _1274.value;
_1278 = _1276.value;
_1279 = _1277 >= _1278;
_1280 = (frost$core$Bit) {_1279};
_1281 = _1280.value;
if (_1281) goto block172; else goto block171;
block172:;
_1283 = ((frost$collections$CollectionView*) _1273);
ITable* $tmp293 = _1283->$class->itable;
while ($tmp293->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp293 = $tmp293->next;
}
_1284 = $tmp293->methods[0];
_1285 = _1284(_1283);
_1286 = _1274.value;
_1287 = _1285.value;
_1288 = _1286 < _1287;
_1289 = (frost$core$Bit) {_1288};
_1290 = _1289.value;
if (_1290) goto block170; else goto block171;
block171:;
_1292 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s294, _1292, &$s295);
abort(); // unreachable
block170:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_1296 = &_1273->data;
_1297 = *_1296;
_1298 = frost$core$Int64$init$frost$core$Int(_1274);
_1299 = _1298.value;
_1300 = _1297[_1299];
_1301 = _1300;
frost$core$Frost$ref$frost$core$Object$Q(_1301);
_1304 = ((frost$io$File*) _1300);
_1305 = *(&local51);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:318:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:184
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:184:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_1310 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1304, &$s296);
_1311 = &_1310->path;
_1312 = *_1311;
_1313 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_1312);
*(&local53) = ((frost$core$String*) NULL);
_1315 = ((frost$core$Object*) _1313);
frost$core$Frost$ref$frost$core$Object$Q(_1315);
_1317 = *(&local53);
_1318 = ((frost$core$Object*) _1317);
frost$core$Frost$unref$frost$core$Object$Q(_1318);
*(&local53) = _1313;
_1321 = ((frost$core$Object*) _1313);
frost$core$Frost$unref$frost$core$Object$Q(_1321);
_1323 = ((frost$core$Object*) _1310);
frost$core$Frost$unref$frost$core$Object$Q(_1323);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_1326 = *(&local53);
_1327 = _1326 == NULL;
_1328 = (frost$core$Bit) {_1327};
_1329 = _1328.value;
if (_1329) goto block175; else goto block176;
block175:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_1332 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1332);
_1334 = *(&local53);
_1335 = ((frost$core$Object*) _1334);
frost$core$Frost$unref$frost$core$Object$Q(_1335);
*(&local53) = ((frost$core$String*) NULL);
*(&local52) = ((frost$io$File*) NULL);
_1339 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1339);
goto block174;
block176:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_1343 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_1344 = *(&local53);
_1345 = _1344 != NULL;
_1346 = (frost$core$Bit) {_1345};
_1347 = _1346.value;
if (_1347) goto block177; else goto block178;
block178:;
_1349 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s297, _1349, &$s298);
abort(); // unreachable
block177:;
_1352 = _1344;
frost$io$File$init$frost$core$String(_1343, _1352);
_1354 = _1343;
_1355 = ((frost$core$Object*) _1354);
frost$core$Frost$ref$frost$core$Object$Q(_1355);
_1357 = ((frost$core$Object*) _1343);
frost$core$Frost$unref$frost$core$Object$Q(_1357);
_1359 = *(&local53);
_1360 = ((frost$core$Object*) _1359);
frost$core$Frost$unref$frost$core$Object$Q(_1360);
*(&local53) = ((frost$core$String*) NULL);
*(&local52) = _1354;
_1364 = ((frost$core$Object*) _1354);
frost$core$Frost$ref$frost$core$Object$Q(_1364);
goto block174;
block174:;
_1367 = *(&local52);
_1368 = _1367 != NULL;
_1369 = (frost$core$Bit) {_1368};
_1370 = _1369.value;
if (_1370) goto block179; else goto block180;
block180:;
_1372 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s299, _1372, &$s300);
abort(); // unreachable
block179:;
_1375 = _1367;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:184:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
_1378 = frost$io$File$get_name$R$frost$core$String(_1304);
*(&local55) = ((frost$core$String*) NULL);
_1380 = ((frost$core$Object*) _1378);
frost$core$Frost$ref$frost$core$Object$Q(_1380);
_1382 = *(&local55);
_1383 = ((frost$core$Object*) _1382);
frost$core$Frost$unref$frost$core$Object$Q(_1383);
*(&local55) = _1378;
_1386 = ((frost$core$Object*) _1378);
frost$core$Frost$unref$frost$core$Object$Q(_1386);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_1389 = *(&local55);
_1390 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_1389, &$s301);
*(&local56) = _1390;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_1393 = *(&local56);
_1394 = !_1393.nonnull;
_1395 = (frost$core$Bit) {_1394};
_1396 = _1395.value;
if (_1396) goto block182; else goto block183;
block182:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_1399 = *(&local55);
_1400 = ((frost$core$Object*) _1399);
frost$core$Frost$ref$frost$core$Object$Q(_1400);
_1402 = *(&local55);
_1403 = ((frost$core$Object*) _1402);
frost$core$Frost$unref$frost$core$Object$Q(_1403);
*(&local55) = ((frost$core$String*) NULL);
*(&local54) = _1399;
_1407 = ((frost$core$Object*) _1399);
frost$core$Frost$ref$frost$core$Object$Q(_1407);
goto block181;
block183:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_1411 = *(&local55);
_1412 = *(&local56);
_1413 = (frost$core$Bit) {false};
_1414 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _1412, _1413);
_1415 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_1411, _1414);
_1416 = ((frost$core$Object*) _1415);
frost$core$Frost$ref$frost$core$Object$Q(_1416);
_1418 = ((frost$core$Object*) _1415);
frost$core$Frost$unref$frost$core$Object$Q(_1418);
_1420 = *(&local55);
_1421 = ((frost$core$Object*) _1420);
frost$core$Frost$unref$frost$core$Object$Q(_1421);
*(&local55) = ((frost$core$String*) NULL);
*(&local54) = _1415;
_1425 = ((frost$core$Object*) _1415);
frost$core$Frost$ref$frost$core$Object$Q(_1425);
goto block181;
block181:;
_1428 = *(&local54);
_1429 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1428, _1305);
_1430 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1375, _1429);
_1431 = ((frost$core$Object*) _1430);
frost$core$Frost$ref$frost$core$Object$Q(_1431);
_1433 = ((frost$core$Object*) _1430);
frost$core$Frost$unref$frost$core$Object$Q(_1433);
_1435 = ((frost$core$Object*) _1429);
frost$core$Frost$unref$frost$core$Object$Q(_1435);
_1437 = ((frost$core$Object*) _1428);
frost$core$Frost$unref$frost$core$Object$Q(_1437);
_1439 = *(&local54);
_1440 = ((frost$core$Object*) _1439);
frost$core$Frost$unref$frost$core$Object$Q(_1440);
*(&local54) = ((frost$core$String*) NULL);
_1443 = ((frost$core$Object*) _1367);
frost$core$Frost$unref$frost$core$Object$Q(_1443);
_1445 = *(&local52);
_1446 = ((frost$core$Object*) _1445);
frost$core$Frost$unref$frost$core$Object$Q(_1446);
*(&local52) = ((frost$io$File*) NULL);
_1450 = _1430;
_1451 = ((frost$core$Object*) _1450);
frost$core$Frost$ref$frost$core$Object$Q(_1451);
_1453 = *(&local5);
_1454 = ((frost$core$Object*) _1453);
frost$core$Frost$unref$frost$core$Object$Q(_1454);
*(&local5) = _1450;
_1457 = ((frost$core$Object*) _1430);
frost$core$Frost$unref$frost$core$Object$Q(_1457);
_1459 = _1300;
frost$core$Frost$unref$frost$core$Object$Q(_1459);
_1461 = *(&local51);
_1462 = ((frost$core$Object*) _1461);
frost$core$Frost$unref$frost$core$Object$Q(_1462);
*(&local51) = ((frost$core$String*) NULL);
goto block140;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:320
_1467 = *(&local8);
_1468 = _1467.nonnull;
_1469 = (frost$core$Bit) {_1468};
_1470 = _1469.value;
if (_1470) goto block187; else goto block188;
block188:;
_1472 = (frost$core$Int) {320u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s302, _1472, &$s303);
abort(); // unreachable
block187:;
frost$core$Equatable* $tmp304;
if (_1467.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp305;
    $tmp305 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp305->value = ((org$frostlang$frostc$Main$Format) _1467.value);
    $tmp304 = ((frost$core$Equatable*) $tmp305);
}
else {
    $tmp304 = NULL;
}
_1475 = $tmp304;
_1476 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:320:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_1479 = &(&local58)->$rawValue;
*_1479 = _1476;
_1481 = *(&local58);
*(&local57) = _1481;
_1484 = *(&local57);
org$frostlang$frostc$Main$Format$wrapper* $tmp306;
$tmp306 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp306->value = _1484;
_1485 = ((frost$core$Equatable*) $tmp306);
ITable* $tmp307 = _1475->$class->itable;
while ($tmp307->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp307 = $tmp307->next;
}
_1486 = $tmp307->methods[0];
_1487 = _1486(_1475, _1485);
_1488 = _1487.value;
_1489 = ((frost$core$Object*) _1485);
frost$core$Frost$unref$frost$core$Object$Q(_1489);
_1491 = ((frost$core$Object*) _1475);
frost$core$Frost$unref$frost$core$Object$Q(_1491);
if (_1488) goto block184; else goto block186;
block184:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:321
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:321:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s308);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s309);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:322
_1505 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1505);
_1507 = (frost$core$Int) {322u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s310, _1507, &$s311);
abort(); // unreachable
block186:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:325
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:325:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s312);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s313);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:327
_1522 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1522);
_1524 = (frost$core$Int) {327u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s314, _1524, &$s315);
abort(); // unreachable
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:330
_1530 = (frost$core$Int) {0u};
*(&local59) = _1530;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:331
_1533 = (frost$core$Int) {0u};
*(&local60) = _1533;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:332
_1536 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Settings), (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
_1537 = &param0->frostHome;
_1538 = *_1537;
_1539 = *(&local2);
_1540 = ((frost$collections$ListView*) _1539);
_1541 = *(&local6);
_1542 = *(&local7);
_1543 = *(&local11);
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int$frost$core$Int$frost$core$Bit(_1536, _1538, _1540, _1541, _1542, _1543);
*(&local61) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_1546 = ((frost$core$Object*) _1536);
frost$core$Frost$ref$frost$core$Object$Q(_1546);
_1548 = *(&local61);
_1549 = ((frost$core$Object*) _1548);
frost$core$Frost$unref$frost$core$Object$Q(_1549);
*(&local61) = _1536;
_1552 = ((frost$core$Object*) _1536);
frost$core$Frost$unref$frost$core$Object$Q(_1552);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:335
*(&local62) = ((org$frostlang$frostc$CodeGenerator*) NULL);
_1557 = ((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1557);
_1559 = *(&local62);
_1560 = ((frost$core$Object*) _1559);
frost$core$Frost$unref$frost$core$Object$Q(_1560);
*(&local62) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:336
_1564 = *(&local8);
_1565 = _1564.nonnull;
_1566 = (frost$core$Bit) {_1565};
_1567 = _1566.value;
if (_1567) goto block194; else goto block195;
block195:;
_1569 = (frost$core$Int) {336u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s316, _1569, &$s317);
abort(); // unreachable
block194:;
_1572 = ((org$frostlang$frostc$Main$Format) _1564.value);
_1573 = _1572.$rawValue;
_1574 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:337:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1577 = _1573.value;
_1578 = _1574.value;
_1579 = _1577 == _1578;
_1580 = (frost$core$Bit) {_1579};
_1582 = _1580.value;
if (_1582) goto block197; else goto block198;
block198:;
_1584 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:337:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1587 = _1573.value;
_1588 = _1584.value;
_1589 = _1587 == _1588;
_1590 = (frost$core$Bit) {_1589};
_1592 = _1590.value;
if (_1592) goto block197; else goto block200;
block200:;
_1594 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:337:60
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1597 = _1573.value;
_1598 = _1594.value;
_1599 = _1597 == _1598;
_1600 = (frost$core$Bit) {_1599};
_1602 = _1600.value;
if (_1602) goto block197; else goto block202;
block197:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:338
*(&local63) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:339
_1607 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(sizeof(org$frostlang$frostc$LLVMCodeGenerator), (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
_1608 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
_1609 = *(&local5);
_1610 = _1609 != NULL;
_1611 = (frost$core$Bit) {_1610};
_1612 = _1611.value;
if (_1612) goto block206; else goto block207;
block207:;
_1614 = (frost$core$Int) {340u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s318, _1614, &$s319);
abort(); // unreachable
block206:;
_1617 = _1609;
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:340:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:184
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:184:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_1622 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1617, &$s320);
_1623 = &_1622->path;
_1624 = *_1623;
_1625 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_1624);
*(&local65) = ((frost$core$String*) NULL);
_1627 = ((frost$core$Object*) _1625);
frost$core$Frost$ref$frost$core$Object$Q(_1627);
_1629 = *(&local65);
_1630 = ((frost$core$Object*) _1629);
frost$core$Frost$unref$frost$core$Object$Q(_1630);
*(&local65) = _1625;
_1633 = ((frost$core$Object*) _1625);
frost$core$Frost$unref$frost$core$Object$Q(_1633);
_1635 = ((frost$core$Object*) _1622);
frost$core$Frost$unref$frost$core$Object$Q(_1635);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_1638 = *(&local65);
_1639 = _1638 == NULL;
_1640 = (frost$core$Bit) {_1639};
_1641 = _1640.value;
if (_1641) goto block210; else goto block211;
block210:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_1644 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1644);
_1646 = *(&local65);
_1647 = ((frost$core$Object*) _1646);
frost$core$Frost$unref$frost$core$Object$Q(_1647);
*(&local65) = ((frost$core$String*) NULL);
*(&local64) = ((frost$io$File*) NULL);
_1651 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1651);
goto block209;
block211:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_1655 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_1656 = *(&local65);
_1657 = _1656 != NULL;
_1658 = (frost$core$Bit) {_1657};
_1659 = _1658.value;
if (_1659) goto block212; else goto block213;
block213:;
_1661 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s321, _1661, &$s322);
abort(); // unreachable
block212:;
_1664 = _1656;
frost$io$File$init$frost$core$String(_1655, _1664);
_1666 = _1655;
_1667 = ((frost$core$Object*) _1666);
frost$core$Frost$ref$frost$core$Object$Q(_1667);
_1669 = ((frost$core$Object*) _1655);
frost$core$Frost$unref$frost$core$Object$Q(_1669);
_1671 = *(&local65);
_1672 = ((frost$core$Object*) _1671);
frost$core$Frost$unref$frost$core$Object$Q(_1672);
*(&local65) = ((frost$core$String*) NULL);
*(&local64) = _1666;
_1676 = ((frost$core$Object*) _1666);
frost$core$Frost$ref$frost$core$Object$Q(_1676);
goto block209;
block209:;
_1679 = *(&local64);
_1680 = _1679 != NULL;
_1681 = (frost$core$Bit) {_1680};
_1682 = _1681.value;
if (_1682) goto block214; else goto block215;
block215:;
_1684 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s323, _1684, &$s324);
abort(); // unreachable
block214:;
_1687 = _1679;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:184:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
_1690 = frost$io$File$get_name$R$frost$core$String(_1617);
*(&local67) = ((frost$core$String*) NULL);
_1692 = ((frost$core$Object*) _1690);
frost$core$Frost$ref$frost$core$Object$Q(_1692);
_1694 = *(&local67);
_1695 = ((frost$core$Object*) _1694);
frost$core$Frost$unref$frost$core$Object$Q(_1695);
*(&local67) = _1690;
_1698 = ((frost$core$Object*) _1690);
frost$core$Frost$unref$frost$core$Object$Q(_1698);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_1701 = *(&local67);
_1702 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_1701, &$s325);
*(&local68) = _1702;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_1705 = *(&local68);
_1706 = !_1705.nonnull;
_1707 = (frost$core$Bit) {_1706};
_1708 = _1707.value;
if (_1708) goto block217; else goto block218;
block217:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_1711 = *(&local67);
_1712 = ((frost$core$Object*) _1711);
frost$core$Frost$ref$frost$core$Object$Q(_1712);
_1714 = *(&local67);
_1715 = ((frost$core$Object*) _1714);
frost$core$Frost$unref$frost$core$Object$Q(_1715);
*(&local67) = ((frost$core$String*) NULL);
*(&local66) = _1711;
_1719 = ((frost$core$Object*) _1711);
frost$core$Frost$ref$frost$core$Object$Q(_1719);
goto block216;
block218:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_1723 = *(&local67);
_1724 = *(&local68);
_1725 = (frost$core$Bit) {false};
_1726 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _1724, _1725);
_1727 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_1723, _1726);
_1728 = ((frost$core$Object*) _1727);
frost$core$Frost$ref$frost$core$Object$Q(_1728);
_1730 = ((frost$core$Object*) _1727);
frost$core$Frost$unref$frost$core$Object$Q(_1730);
_1732 = *(&local67);
_1733 = ((frost$core$Object*) _1732);
frost$core$Frost$unref$frost$core$Object$Q(_1733);
*(&local67) = ((frost$core$String*) NULL);
*(&local66) = _1727;
_1737 = ((frost$core$Object*) _1727);
frost$core$Frost$ref$frost$core$Object$Q(_1737);
goto block216;
block216:;
_1740 = *(&local66);
_1741 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1740, &$s326);
_1742 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1687, _1741);
_1743 = ((frost$core$Object*) _1742);
frost$core$Frost$ref$frost$core$Object$Q(_1743);
_1745 = ((frost$core$Object*) _1742);
frost$core$Frost$unref$frost$core$Object$Q(_1745);
_1747 = ((frost$core$Object*) _1741);
frost$core$Frost$unref$frost$core$Object$Q(_1747);
_1749 = ((frost$core$Object*) _1740);
frost$core$Frost$unref$frost$core$Object$Q(_1749);
_1751 = *(&local66);
_1752 = ((frost$core$Object*) _1751);
frost$core$Frost$unref$frost$core$Object$Q(_1752);
*(&local66) = ((frost$core$String*) NULL);
_1755 = ((frost$core$Object*) _1679);
frost$core$Frost$unref$frost$core$Object$Q(_1755);
_1757 = *(&local64);
_1758 = ((frost$core$Object*) _1757);
frost$core$Frost$unref$frost$core$Object$Q(_1758);
*(&local64) = ((frost$io$File*) NULL);
_1762 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(_1742);
_1763 = &_1762->$rawValue;
_1764 = *_1763;
_1765 = _1764.value;
_1766 = _1765 == 0u;
if (_1766) goto block219; else goto block220;
block220:;
_1768 = &_1762->$data.$ERROR.field0;
_1769 = *_1768;
_1770 = ((frost$core$Object*) _1769);
frost$core$Frost$ref$frost$core$Object$Q(_1770);
*(&local63) = _1769;
_1773 = ((frost$core$Object*) _1762);
frost$core$Frost$unref$frost$core$Object$Q(_1773);
_1775 = ((frost$core$Object*) _1742);
frost$core$Frost$unref$frost$core$Object$Q(_1775);
_1777 = ((frost$core$Object*) _1608);
frost$core$Frost$unref$frost$core$Object$Q(_1777);
_1779 = ((frost$core$Object*) _1607);
frost$core$Frost$unref$frost$core$Object$Q(_1779);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:343
_1803 = *(&local63);
_1804 = ((frost$core$Object*) _1803);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:343:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_1807 = ($fn327) _1804->$class->vtable[0];
_1808 = _1807(_1804);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_1808);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_1815 = ((frost$core$Object*) _1808);
frost$core$Frost$unref$frost$core$Object$Q(_1815);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:344
_1819 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1819);
_1821 = (frost$core$Int) {344u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s328, _1821, &$s329);
abort(); // unreachable
block219:;
_1782 = &_1762->$data.$SUCCESS.field0;
_1783 = *_1782;
_1784 = ((frost$io$OutputStream*) _1783);
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream(_1607, _1608, _1784);
_1786 = ((org$frostlang$frostc$CodeGenerator*) _1607);
_1787 = ((frost$core$Object*) _1786);
frost$core$Frost$ref$frost$core$Object$Q(_1787);
_1789 = *(&local62);
_1790 = ((frost$core$Object*) _1789);
frost$core$Frost$unref$frost$core$Object$Q(_1790);
*(&local62) = _1786;
_1793 = ((frost$core$Object*) _1762);
frost$core$Frost$unref$frost$core$Object$Q(_1793);
_1795 = ((frost$core$Object*) _1742);
frost$core$Frost$unref$frost$core$Object$Q(_1795);
_1797 = ((frost$core$Object*) _1608);
frost$core$Frost$unref$frost$core$Object$Q(_1797);
_1799 = ((frost$core$Object*) _1607);
frost$core$Frost$unref$frost$core$Object$Q(_1799);
_1824 = *(&local63);
_1825 = ((frost$core$Object*) _1824);
frost$core$Frost$unref$frost$core$Object$Q(_1825);
*(&local63) = ((frost$core$Error*) NULL);
goto block196;
block202:;
_1829 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:347:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1832 = _1573.value;
_1833 = _1829.value;
_1834 = _1832 == _1833;
_1835 = (frost$core$Bit) {_1834};
_1837 = _1835.value;
if (_1837) goto block223; else goto block224;
block223:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:348
_1840 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(sizeof(org$frostlang$frostc$HCodeGenerator), (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
_1841 = *(&local5);
_1842 = _1841 != NULL;
_1843 = (frost$core$Bit) {_1842};
_1844 = _1843.value;
if (_1844) goto block226; else goto block227;
block227:;
_1846 = (frost$core$Int) {348u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s330, _1846, &$s331);
abort(); // unreachable
block226:;
_1849 = _1841;
org$frostlang$frostc$HCodeGenerator$init$frost$io$File(_1840, _1849);
_1851 = ((org$frostlang$frostc$CodeGenerator*) _1840);
_1852 = ((frost$core$Object*) _1851);
frost$core$Frost$ref$frost$core$Object$Q(_1852);
_1854 = *(&local62);
_1855 = ((frost$core$Object*) _1854);
frost$core$Frost$unref$frost$core$Object$Q(_1855);
*(&local62) = _1851;
_1858 = ((frost$core$Object*) _1840);
frost$core$Frost$unref$frost$core$Object$Q(_1858);
goto block196;
block224:;
_1861 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:350:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1864 = _1573.value;
_1865 = _1861.value;
_1866 = _1864 == _1865;
_1867 = (frost$core$Bit) {_1866};
_1869 = _1867.value;
if (_1869) goto block228; else goto block229;
block228:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:351
_1872 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(sizeof(org$frostlang$frostc$CCodeGenerator), (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
_1873 = *(&local5);
_1874 = _1873 != NULL;
_1875 = (frost$core$Bit) {_1874};
_1876 = _1875.value;
if (_1876) goto block231; else goto block232;
block232:;
_1878 = (frost$core$Int) {351u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s332, _1878, &$s333);
abort(); // unreachable
block231:;
_1881 = _1873;
org$frostlang$frostc$CCodeGenerator$init$frost$io$File(_1872, _1881);
_1883 = ((org$frostlang$frostc$CodeGenerator*) _1872);
_1884 = ((frost$core$Object*) _1883);
frost$core$Frost$ref$frost$core$Object$Q(_1884);
_1886 = *(&local62);
_1887 = ((frost$core$Object*) _1886);
frost$core$Frost$unref$frost$core$Object$Q(_1887);
*(&local62) = _1883;
_1890 = ((frost$core$Object*) _1872);
frost$core$Frost$unref$frost$core$Object$Q(_1890);
goto block196;
block229:;
_1893 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:353:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1896 = _1573.value;
_1897 = _1893.value;
_1898 = _1896 == _1897;
_1899 = (frost$core$Bit) {_1898};
_1901 = _1899.value;
if (_1901) goto block233; else goto block234;
block233:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:354
*(&local69) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:355
_1906 = (org$frostlang$frostc$StubCodeGenerator*) frostObjectAlloc(sizeof(org$frostlang$frostc$StubCodeGenerator), (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$class);
_1907 = *(&local5);
_1908 = _1907 != NULL;
_1909 = (frost$core$Bit) {_1908};
_1910 = _1909.value;
if (_1910) goto block238; else goto block239;
block239:;
_1912 = (frost$core$Int) {355u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s334, _1912, &$s335);
abort(); // unreachable
block238:;
_1915 = _1907;
_1916 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(_1915);
_1917 = &_1916->$rawValue;
_1918 = *_1917;
_1919 = _1918.value;
_1920 = _1919 == 0u;
if (_1920) goto block240; else goto block241;
block241:;
_1922 = &_1916->$data.$ERROR.field0;
_1923 = *_1922;
_1924 = ((frost$core$Object*) _1923);
frost$core$Frost$ref$frost$core$Object$Q(_1924);
*(&local69) = _1923;
_1927 = ((frost$core$Object*) _1916);
frost$core$Frost$unref$frost$core$Object$Q(_1927);
_1929 = ((frost$core$Object*) _1906);
frost$core$Frost$unref$frost$core$Object$Q(_1929);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:358
_1949 = *(&local69);
_1950 = ((frost$core$Object*) _1949);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:358:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_1953 = ($fn336) _1950->$class->vtable[0];
_1954 = _1953(_1950);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_1954);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_1961 = ((frost$core$Object*) _1954);
frost$core$Frost$unref$frost$core$Object$Q(_1961);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:359
_1965 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1965);
_1967 = (frost$core$Int) {359u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s337, _1967, &$s338);
abort(); // unreachable
block240:;
_1932 = &_1916->$data.$SUCCESS.field0;
_1933 = *_1932;
_1934 = ((frost$io$OutputStream*) _1933);
org$frostlang$frostc$StubCodeGenerator$init$frost$io$OutputStream(_1906, _1934);
_1936 = ((org$frostlang$frostc$CodeGenerator*) _1906);
_1937 = ((frost$core$Object*) _1936);
frost$core$Frost$ref$frost$core$Object$Q(_1937);
_1939 = *(&local62);
_1940 = ((frost$core$Object*) _1939);
frost$core$Frost$unref$frost$core$Object$Q(_1940);
*(&local62) = _1936;
_1943 = ((frost$core$Object*) _1916);
frost$core$Frost$unref$frost$core$Object$Q(_1943);
_1945 = ((frost$core$Object*) _1906);
frost$core$Frost$unref$frost$core$Object$Q(_1945);
_1970 = *(&local69);
_1971 = ((frost$core$Object*) _1970);
frost$core$Frost$unref$frost$core$Object$Q(_1971);
*(&local69) = ((frost$core$Error*) NULL);
goto block196;
block234:;
_1975 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:362:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1978 = _1573.value;
_1979 = _1975.value;
_1980 = _1978 == _1979;
_1981 = (frost$core$Bit) {_1980};
_1983 = _1981.value;
if (_1983) goto block244; else goto block196;
block244:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:363
_1986 = (org$frostlang$frostc$Interpreter*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter), (frost$core$Class*) &org$frostlang$frostc$Interpreter$class);
org$frostlang$frostc$Interpreter$init(_1986);
_1988 = ((org$frostlang$frostc$CodeGenerator*) _1986);
_1989 = ((frost$core$Object*) _1988);
frost$core$Frost$ref$frost$core$Object$Q(_1989);
_1991 = *(&local62);
_1992 = ((frost$core$Object*) _1991);
frost$core$Frost$unref$frost$core$Object$Q(_1992);
*(&local62) = _1988;
_1995 = ((frost$core$Object*) _1986);
frost$core$Frost$unref$frost$core$Object$Q(_1995);
goto block196;
block196:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:366
_1999 = (frost$threads$MessageQueue*) frostObjectAlloc(sizeof(frost$threads$MessageQueue), (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init(_1999);
*(&local70) = ((frost$threads$MessageQueue*) NULL);
_2002 = ((frost$core$Object*) _1999);
frost$core$Frost$ref$frost$core$Object$Q(_2002);
_2004 = *(&local70);
_2005 = ((frost$core$Object*) _2004);
frost$core$Frost$unref$frost$core$Object$Q(_2005);
*(&local70) = _1999;
_2008 = ((frost$core$Object*) _1999);
frost$core$Frost$unref$frost$core$Object$Q(_2008);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:367
_2011 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler), (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
_2012 = *(&local70);
_2013 = *(&local62);
_2014 = *(&local61);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT$org$frostlang$frostc$CodeGenerator$Q$org$frostlang$frostc$Compiler$Settings(_2011, _2012, _2013, _2014);
*(&local71) = ((org$frostlang$frostc$Compiler*) NULL);
_2017 = ((frost$core$Object*) _2011);
frost$core$Frost$ref$frost$core$Object$Q(_2017);
_2019 = *(&local71);
_2020 = ((frost$core$Object*) _2019);
frost$core$Frost$unref$frost$core$Object$Q(_2020);
*(&local71) = _2011;
_2023 = ((frost$core$Object*) _2011);
frost$core$Frost$unref$frost$core$Object$Q(_2023);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:368
_2026 = *(&local8);
_2027 = _2026.nonnull;
_2028 = (frost$core$Bit) {_2027};
_2029 = _2028.value;
if (_2029) goto block248; else goto block249;
block249:;
_2031 = (frost$core$Int) {368u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s339, _2031, &$s340);
abort(); // unreachable
block248:;
frost$core$Equatable* $tmp341;
if (_2026.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp342;
    $tmp342 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp342->value = ((org$frostlang$frostc$Main$Format) _2026.value);
    $tmp341 = ((frost$core$Equatable*) $tmp342);
}
else {
    $tmp341 = NULL;
}
_2034 = $tmp341;
_2035 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:368:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_2038 = &(&local73)->$rawValue;
*_2038 = _2035;
_2040 = *(&local73);
*(&local72) = _2040;
_2043 = *(&local72);
org$frostlang$frostc$Main$Format$wrapper* $tmp343;
$tmp343 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp343->value = _2043;
_2044 = ((frost$core$Equatable*) $tmp343);
ITable* $tmp344 = _2034->$class->itable;
while ($tmp344->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp344 = $tmp344->next;
}
_2045 = $tmp344->methods[0];
_2046 = _2045(_2034, _2044);
_2047 = _2046.value;
_2048 = ((frost$core$Object*) _2044);
frost$core$Frost$unref$frost$core$Object$Q(_2048);
_2050 = ((frost$core$Object*) _2034);
frost$core$Frost$unref$frost$core$Object$Q(_2050);
if (_2047) goto block246; else goto block247;
block246:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:369
_2054 = *(&local9);
_2055 = _2054 == NULL;
_2056 = (frost$core$Bit) {_2055};
_2057 = _2056.value;
if (_2057) goto block251; else goto block252;
block251:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:370
_2060 = &$s345;
_2061 = ((frost$core$Object*) _2060);
frost$core$Frost$ref$frost$core$Object$Q(_2061);
_2063 = *(&local9);
_2064 = ((frost$core$Object*) _2063);
frost$core$Frost$unref$frost$core$Object$Q(_2064);
*(&local9) = _2060;
goto block252;
block252:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:372
_2069 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(sizeof(org$frostlang$frostc$HTMLProcessor), (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
_2070 = *(&local71);
org$frostlang$frostc$HTMLProcessor$init$org$frostlang$frostc$Compiler(_2069, _2070);
_2072 = *(&local1);
_2073 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Main.frost:372:56
_2075 = (frost$core$Int) {0u};
_2076 = _2073.value;
_2077 = _2075.value;
_2078 = _2076 >= _2077;
_2079 = (frost$core$Bit) {_2078};
_2080 = _2079.value;
if (_2080) goto block256; else goto block255;
block256:;
_2082 = ((frost$collections$CollectionView*) _2072);
ITable* $tmp346 = _2082->$class->itable;
while ($tmp346->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp346 = $tmp346->next;
}
_2083 = $tmp346->methods[0];
_2084 = _2083(_2082);
_2085 = _2073.value;
_2086 = _2084.value;
_2087 = _2085 < _2086;
_2088 = (frost$core$Bit) {_2087};
_2089 = _2088.value;
if (_2089) goto block254; else goto block255;
block255:;
_2091 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s347, _2091, &$s348);
abort(); // unreachable
block254:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_2095 = &_2072->data;
_2096 = *_2095;
_2097 = frost$core$Int64$init$frost$core$Int(_2073);
_2098 = _2097.value;
_2099 = _2096[_2098];
_2100 = _2099;
frost$core$Frost$ref$frost$core$Object$Q(_2100);
_2103 = ((frost$io$File*) _2099);
_2104 = *(&local5);
_2105 = _2104 != NULL;
_2106 = (frost$core$Bit) {_2105};
_2107 = _2106.value;
if (_2107) goto block257; else goto block258;
block258:;
_2109 = (frost$core$Int) {372u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s349, _2109, &$s350);
abort(); // unreachable
block257:;
_2112 = _2104;
_2113 = *(&local9);
_2114 = _2113 != NULL;
_2115 = (frost$core$Bit) {_2114};
_2116 = _2115.value;
if (_2116) goto block259; else goto block260;
block260:;
_2118 = (frost$core$Int) {372u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s351, _2118, &$s352);
abort(); // unreachable
block259:;
_2121 = _2113;
_2122 = ($fn353) _2069->$class->vtable[3];
_2122(_2069, _2103, _2112, _2121);
_2124 = _2099;
frost$core$Frost$unref$frost$core$Object$Q(_2124);
_2126 = ((frost$core$Object*) _2069);
frost$core$Frost$unref$frost$core$Object$Q(_2126);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:373
_2129 = *(&local71);
_2130 = ((frost$core$Object*) _2129);
frost$core$Frost$unref$frost$core$Object$Q(_2130);
*(&local71) = ((org$frostlang$frostc$Compiler*) NULL);
_2133 = *(&local70);
_2134 = ((frost$core$Object*) _2133);
frost$core$Frost$unref$frost$core$Object$Q(_2134);
*(&local70) = ((frost$threads$MessageQueue*) NULL);
_2137 = *(&local62);
_2138 = ((frost$core$Object*) _2137);
frost$core$Frost$unref$frost$core$Object$Q(_2138);
*(&local62) = ((org$frostlang$frostc$CodeGenerator*) NULL);
_2141 = *(&local61);
_2142 = ((frost$core$Object*) _2141);
frost$core$Frost$unref$frost$core$Object$Q(_2142);
*(&local61) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_2145 = *(&local46);
_2146 = ((frost$core$Object*) _2145);
frost$core$Frost$unref$frost$core$Object$Q(_2146);
*(&local46) = ((frost$io$File*) NULL);
_2149 = *(&local9);
_2150 = ((frost$core$Object*) _2149);
frost$core$Frost$unref$frost$core$Object$Q(_2150);
*(&local9) = ((frost$core$String*) NULL);
_2153 = *(&local5);
_2154 = ((frost$core$Object*) _2153);
frost$core$Frost$unref$frost$core$Object$Q(_2154);
*(&local5) = ((frost$io$File*) NULL);
_2157 = *(&local4);
_2158 = ((frost$core$Object*) _2157);
frost$core$Frost$unref$frost$core$Object$Q(_2158);
*(&local4) = ((frost$collections$Array*) NULL);
_2161 = *(&local3);
_2162 = ((frost$core$Object*) _2161);
frost$core$Frost$unref$frost$core$Object$Q(_2162);
*(&local3) = ((frost$collections$Array*) NULL);
_2165 = *(&local2);
_2166 = ((frost$core$Object*) _2165);
frost$core$Frost$unref$frost$core$Object$Q(_2166);
*(&local2) = ((frost$collections$Array*) NULL);
_2169 = *(&local1);
_2170 = ((frost$core$Object*) _2169);
frost$core$Frost$unref$frost$core$Object$Q(_2170);
*(&local1) = ((frost$collections$Array*) NULL);
_2173 = *(&local0);
_2174 = ((frost$core$Object*) _2173);
frost$core$Frost$unref$frost$core$Object$Q(_2174);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block247:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:375
_2179 = *(&local9);
_2180 = _2179 != NULL;
_2181 = (frost$core$Bit) {_2180};
_2182 = _2181.value;
if (_2182) goto block261; else goto block262;
block261:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:376
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:376:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s354);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s355);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:377
_2195 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_2195);
_2197 = (frost$core$Int) {377u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s356, _2197, &$s357);
abort(); // unreachable
block262:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:379
_2201 = *(&local1);
_2202 = ((frost$collections$Iterable*) _2201);
ITable* $tmp358 = _2202->$class->itable;
while ($tmp358->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp358 = $tmp358->next;
}
_2203 = $tmp358->methods[0];
_2204 = _2203(_2202);
goto block265;
block265:;
ITable* $tmp359 = _2204->$class->itable;
while ($tmp359->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp359 = $tmp359->next;
}
_2206 = $tmp359->methods[0];
_2207 = _2206(_2204);
_2208 = _2207.value;
if (_2208) goto block267; else goto block266;
block266:;
*(&local74) = ((frost$io$File*) NULL);
ITable* $tmp360 = _2204->$class->itable;
while ($tmp360->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp360 = $tmp360->next;
}
_2211 = $tmp360->methods[1];
_2212 = _2211(_2204);
_2213 = ((frost$io$File*) _2212);
_2214 = ((frost$core$Object*) _2213);
frost$core$Frost$ref$frost$core$Object$Q(_2214);
_2216 = *(&local74);
_2217 = ((frost$core$Object*) _2216);
frost$core$Frost$unref$frost$core$Object$Q(_2217);
*(&local74) = _2213;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:380
_2221 = *(&local71);
_2222 = *(&local74);
_2223 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT(_2221, _2222);
_2224 = ((frost$collections$Iterable*) _2223);
ITable* $tmp361 = _2224->$class->itable;
while ($tmp361->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp361 = $tmp361->next;
}
_2225 = $tmp361->methods[0];
_2226 = _2225(_2224);
goto block268;
block268:;
ITable* $tmp362 = _2226->$class->itable;
while ($tmp362->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp362 = $tmp362->next;
}
_2228 = $tmp362->methods[0];
_2229 = _2228(_2226);
_2230 = _2229.value;
if (_2230) goto block270; else goto block269;
block269:;
*(&local75) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp363 = _2226->$class->itable;
while ($tmp363->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp363 = $tmp363->next;
}
_2233 = $tmp363->methods[1];
_2234 = _2233(_2226);
_2235 = ((org$frostlang$frostc$ClassDecl*) _2234);
_2236 = ((frost$core$Object*) _2235);
frost$core$Frost$ref$frost$core$Object$Q(_2236);
_2238 = *(&local75);
_2239 = ((frost$core$Object*) _2238);
frost$core$Frost$unref$frost$core$Object$Q(_2239);
*(&local75) = _2235;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:381
_2243 = *(&local71);
_2244 = *(&local75);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Main.frost:381:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5892
_2247 = (frost$core$Bit) {false};
_2248 = &_2244->external;
*_2248 = _2247;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5893
_2251 = &_2244->classes;
_2252 = *_2251;
_2253 = ((frost$collections$Iterable*) _2252);
ITable* $tmp364 = _2253->$class->itable;
while ($tmp364->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp364 = $tmp364->next;
}
_2254 = $tmp364->methods[0];
_2255 = _2254(_2253);
goto block272;
block272:;
ITable* $tmp365 = _2255->$class->itable;
while ($tmp365->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp365 = $tmp365->next;
}
_2257 = $tmp365->methods[0];
_2258 = _2257(_2255);
_2259 = _2258.value;
if (_2259) goto block274; else goto block273;
block273:;
*(&local76) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp366 = _2255->$class->itable;
while ($tmp366->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp366 = $tmp366->next;
}
_2262 = $tmp366->methods[1];
_2263 = _2262(_2255);
_2264 = ((org$frostlang$frostc$ClassDecl*) _2263);
_2265 = ((frost$core$Object*) _2264);
frost$core$Frost$ref$frost$core$Object$Q(_2265);
_2267 = *(&local76);
_2268 = ((frost$core$Object*) _2267);
frost$core$Frost$unref$frost$core$Object$Q(_2268);
*(&local76) = _2264;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5894
_2272 = *(&local76);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Compiler.frost:5894:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5892
_2275 = (frost$core$Bit) {false};
_2276 = &_2272->external;
*_2276 = _2275;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5893
_2279 = &_2272->classes;
_2280 = *_2279;
_2281 = ((frost$collections$Iterable*) _2280);
ITable* $tmp367 = _2281->$class->itable;
while ($tmp367->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp367 = $tmp367->next;
}
_2282 = $tmp367->methods[0];
_2283 = _2282(_2281);
goto block276;
block276:;
ITable* $tmp368 = _2283->$class->itable;
while ($tmp368->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp368 = $tmp368->next;
}
_2285 = $tmp368->methods[0];
_2286 = _2285(_2283);
_2287 = _2286.value;
if (_2287) goto block278; else goto block277;
block277:;
*(&local77) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp369 = _2283->$class->itable;
while ($tmp369->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp369 = $tmp369->next;
}
_2290 = $tmp369->methods[1];
_2291 = _2290(_2283);
_2292 = ((org$frostlang$frostc$ClassDecl*) _2291);
_2293 = ((frost$core$Object*) _2292);
frost$core$Frost$ref$frost$core$Object$Q(_2293);
_2295 = *(&local77);
_2296 = ((frost$core$Object*) _2295);
frost$core$Frost$unref$frost$core$Object$Q(_2296);
*(&local77) = _2292;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5894
_2300 = *(&local77);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl(_2243, _2300);
_2302 = _2291;
frost$core$Frost$unref$frost$core$Object$Q(_2302);
_2304 = *(&local77);
_2305 = ((frost$core$Object*) _2304);
frost$core$Frost$unref$frost$core$Object$Q(_2305);
*(&local77) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block276;
block278:;
_2309 = ((frost$core$Object*) _2283);
frost$core$Frost$unref$frost$core$Object$Q(_2309);
_2312 = _2263;
frost$core$Frost$unref$frost$core$Object$Q(_2312);
_2314 = *(&local76);
_2315 = ((frost$core$Object*) _2314);
frost$core$Frost$unref$frost$core$Object$Q(_2315);
*(&local76) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block272;
block274:;
_2319 = ((frost$core$Object*) _2255);
frost$core$Frost$unref$frost$core$Object$Q(_2319);
_2322 = _2234;
frost$core$Frost$unref$frost$core$Object$Q(_2322);
_2324 = *(&local75);
_2325 = ((frost$core$Object*) _2324);
frost$core$Frost$unref$frost$core$Object$Q(_2325);
*(&local75) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block268;
block270:;
_2329 = ((frost$core$Object*) _2226);
frost$core$Frost$unref$frost$core$Object$Q(_2329);
_2331 = ((frost$core$Object*) _2223);
frost$core$Frost$unref$frost$core$Object$Q(_2331);
_2333 = _2212;
frost$core$Frost$unref$frost$core$Object$Q(_2333);
_2335 = *(&local74);
_2336 = ((frost$core$Object*) _2335);
frost$core$Frost$unref$frost$core$Object$Q(_2336);
*(&local74) = ((frost$io$File*) NULL);
goto block265;
block267:;
_2340 = ((frost$core$Object*) _2204);
frost$core$Frost$unref$frost$core$Object$Q(_2340);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:384
_2343 = *(&local1);
_2344 = ((frost$collections$Iterable*) _2343);
ITable* $tmp370 = _2344->$class->itable;
while ($tmp370->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp370 = $tmp370->next;
}
_2345 = $tmp370->methods[0];
_2346 = _2345(_2344);
goto block279;
block279:;
ITable* $tmp371 = _2346->$class->itable;
while ($tmp371->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp371 = $tmp371->next;
}
_2348 = $tmp371->methods[0];
_2349 = _2348(_2346);
_2350 = _2349.value;
if (_2350) goto block281; else goto block280;
block280:;
*(&local78) = ((frost$io$File*) NULL);
ITable* $tmp372 = _2346->$class->itable;
while ($tmp372->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp372 = $tmp372->next;
}
_2353 = $tmp372->methods[1];
_2354 = _2353(_2346);
_2355 = ((frost$io$File*) _2354);
_2356 = ((frost$core$Object*) _2355);
frost$core$Frost$ref$frost$core$Object$Q(_2356);
_2358 = *(&local78);
_2359 = ((frost$core$Object*) _2358);
frost$core$Frost$unref$frost$core$Object$Q(_2359);
*(&local78) = _2355;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:385
_2363 = *(&local71);
_2364 = *(&local78);
org$frostlang$frostc$Compiler$compile$frost$io$File(_2363, _2364);
_2366 = _2354;
frost$core$Frost$unref$frost$core$Object$Q(_2366);
_2368 = *(&local78);
_2369 = ((frost$core$Object*) _2368);
frost$core$Frost$unref$frost$core$Object$Q(_2369);
*(&local78) = ((frost$io$File*) NULL);
goto block279;
block281:;
_2373 = ((frost$core$Object*) _2346);
frost$core$Frost$unref$frost$core$Object$Q(_2373);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:387
_2376 = *(&local8);
_2377 = _2376.nonnull;
_2378 = (frost$core$Bit) {_2377};
_2379 = _2378.value;
if (_2379) goto block284; else goto block285;
block285:;
_2381 = (frost$core$Int) {387u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s373, _2381, &$s374);
abort(); // unreachable
block284:;
frost$core$Equatable* $tmp375;
if (_2376.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp376;
    $tmp376 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp376->value = ((org$frostlang$frostc$Main$Format) _2376.value);
    $tmp375 = ((frost$core$Equatable*) $tmp376);
}
else {
    $tmp375 = NULL;
}
_2384 = $tmp375;
_2385 = (frost$core$Int) {7u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:387:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_2388 = &(&local80)->$rawValue;
*_2388 = _2385;
_2390 = *(&local80);
*(&local79) = _2390;
_2393 = *(&local79);
org$frostlang$frostc$Main$Format$wrapper* $tmp377;
$tmp377 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp377->value = _2393;
_2394 = ((frost$core$Equatable*) $tmp377);
ITable* $tmp378 = _2384->$class->itable;
while ($tmp378->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp378 = $tmp378->next;
}
_2395 = $tmp378->methods[0];
_2396 = _2395(_2384, _2394);
_2397 = _2396.value;
_2398 = ((frost$core$Object*) _2394);
frost$core$Frost$unref$frost$core$Object$Q(_2398);
_2400 = ((frost$core$Object*) _2384);
frost$core$Frost$unref$frost$core$Object$Q(_2400);
if (_2397) goto block282; else goto block283;
block282:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:388
_2404 = *(&local62);
_2405 = ((org$frostlang$frostc$Interpreter*) _2404);
_2406 = ($fn379) _2405->$class->vtable[24];
_2406(_2405);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:389
_2409 = *(&local71);
_2410 = ((frost$core$Object*) _2409);
frost$core$Frost$unref$frost$core$Object$Q(_2410);
*(&local71) = ((org$frostlang$frostc$Compiler*) NULL);
_2413 = *(&local70);
_2414 = ((frost$core$Object*) _2413);
frost$core$Frost$unref$frost$core$Object$Q(_2414);
*(&local70) = ((frost$threads$MessageQueue*) NULL);
_2417 = *(&local62);
_2418 = ((frost$core$Object*) _2417);
frost$core$Frost$unref$frost$core$Object$Q(_2418);
*(&local62) = ((org$frostlang$frostc$CodeGenerator*) NULL);
_2421 = *(&local61);
_2422 = ((frost$core$Object*) _2421);
frost$core$Frost$unref$frost$core$Object$Q(_2422);
*(&local61) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_2425 = *(&local46);
_2426 = ((frost$core$Object*) _2425);
frost$core$Frost$unref$frost$core$Object$Q(_2426);
*(&local46) = ((frost$io$File*) NULL);
_2429 = *(&local9);
_2430 = ((frost$core$Object*) _2429);
frost$core$Frost$unref$frost$core$Object$Q(_2430);
*(&local9) = ((frost$core$String*) NULL);
_2433 = *(&local5);
_2434 = ((frost$core$Object*) _2433);
frost$core$Frost$unref$frost$core$Object$Q(_2434);
*(&local5) = ((frost$io$File*) NULL);
_2437 = *(&local4);
_2438 = ((frost$core$Object*) _2437);
frost$core$Frost$unref$frost$core$Object$Q(_2438);
*(&local4) = ((frost$collections$Array*) NULL);
_2441 = *(&local3);
_2442 = ((frost$core$Object*) _2441);
frost$core$Frost$unref$frost$core$Object$Q(_2442);
*(&local3) = ((frost$collections$Array*) NULL);
_2445 = *(&local2);
_2446 = ((frost$core$Object*) _2445);
frost$core$Frost$unref$frost$core$Object$Q(_2446);
*(&local2) = ((frost$collections$Array*) NULL);
_2449 = *(&local1);
_2450 = ((frost$core$Object*) _2449);
frost$core$Frost$unref$frost$core$Object$Q(_2450);
*(&local1) = ((frost$collections$Array*) NULL);
_2453 = *(&local0);
_2454 = ((frost$core$Object*) _2453);
frost$core$Frost$unref$frost$core$Object$Q(_2454);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block283:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:391
_2459 = *(&local71);
// begin inline call to method org.frostlang.frostc.Compiler.finish() from Main.frost:391:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6134
goto block288;
block288:;
_2463 = &_2459->pendingClasses;
_2464 = *_2463;
_2465 = ((frost$collections$CollectionView*) _2464);
ITable* $tmp380 = _2465->$class->itable;
while ($tmp380->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp380 = $tmp380->next;
}
_2466 = $tmp380->methods[0];
_2467 = _2466(_2465);
_2468 = (frost$core$Int) {0u};
_2469 = _2467.value;
_2470 = _2468.value;
_2471 = _2469 > _2470;
_2472 = (frost$core$Bit) {_2471};
_2473 = _2472.value;
if (_2473) goto block289; else goto block290;
block289:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6135
_2476 = &_2459->pendingClasses;
_2477 = *_2476;
_2478 = &_2459->pendingClasses;
_2479 = *_2478;
_2480 = ((frost$collections$CollectionView*) _2479);
ITable* $tmp381 = _2480->$class->itable;
while ($tmp381->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp381 = $tmp381->next;
}
_2481 = $tmp381->methods[0];
_2482 = _2481(_2480);
_2483 = (frost$core$Int) {1u};
_2484 = _2482.value;
_2485 = _2483.value;
_2486 = _2484 - _2485;
_2487 = (frost$core$Int) {_2486};
_2488 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_2477, _2487);
_2489 = ((org$frostlang$frostc$ClassDecl*) _2488);
*(&local81) = ((org$frostlang$frostc$ClassDecl*) NULL);
_2491 = ((frost$core$Object*) _2489);
frost$core$Frost$ref$frost$core$Object$Q(_2491);
_2493 = *(&local81);
_2494 = ((frost$core$Object*) _2493);
frost$core$Frost$unref$frost$core$Object$Q(_2494);
*(&local81) = _2489;
_2497 = _2488;
frost$core$Frost$unref$frost$core$Object$Q(_2497);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6136
_2500 = *(&local81);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl(_2459, _2500);
_2502 = *(&local81);
_2503 = ((frost$core$Object*) _2502);
frost$core$Frost$unref$frost$core$Object$Q(_2503);
*(&local81) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block288;
block290:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6138
_2508 = &_2459->codeGenerator;
_2509 = *_2508;
_2510 = _2509 != NULL;
_2511 = (frost$core$Bit) {_2510};
_2512 = _2511.value;
if (_2512) goto block291; else goto block292;
block292:;
_2514 = (frost$core$Int) {6138u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s382, _2514, &$s383);
abort(); // unreachable
block291:;
_2517 = _2509;
ITable* $tmp384 = _2517->$class->itable;
while ($tmp384->$class != (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class) {
    $tmp384 = $tmp384->next;
}
_2518 = $tmp384->methods[5];
_2518(_2517);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:392
goto block293;
block293:;
_2523 = *(&local70);
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Main.frost:392:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
_2528 = (frost$threads$ScopedLock*) frostObjectAlloc(sizeof(frost$threads$ScopedLock), (frost$core$Class*) &frost$threads$ScopedLock$class);
_2529 = &_2523->lock;
_2530 = *_2529;
frost$threads$ScopedLock$init$frost$threads$Lock(_2528, _2530);
*(&local82) = ((frost$threads$ScopedLock*) NULL);
_2533 = ((frost$core$Object*) _2528);
frost$core$Frost$ref$frost$core$Object$Q(_2533);
_2535 = *(&local82);
_2536 = ((frost$core$Object*) _2535);
frost$core$Frost$unref$frost$core$Object$Q(_2536);
*(&local82) = _2528;
_2539 = ((frost$core$Object*) _2528);
frost$core$Frost$unref$frost$core$Object$Q(_2539);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
_2542 = &_2523->count;
_2543 = *_2542;
_2544 = *(&local82);
_2545 = ((frost$core$Object*) _2544);
frost$core$Frost$unref$frost$core$Object$Q(_2545);
*(&local82) = ((frost$threads$ScopedLock*) NULL);
_2549 = (frost$core$Int) {0u};
_2550 = _2543.value;
_2551 = _2549.value;
_2552 = _2550 > _2551;
_2553 = (frost$core$Bit) {_2552};
_2555 = _2553.value;
if (_2555) goto block294; else goto block295;
block294:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:393
_2558 = *(&local70);
_2559 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(_2558);
_2560 = ((org$frostlang$frostc$Compiler$Message*) _2559);
*(&local83) = ((org$frostlang$frostc$Compiler$Message*) NULL);
_2562 = ((frost$core$Object*) _2560);
frost$core$Frost$ref$frost$core$Object$Q(_2562);
_2564 = *(&local83);
_2565 = ((frost$core$Object*) _2564);
frost$core$Frost$unref$frost$core$Object$Q(_2565);
*(&local83) = _2560;
_2568 = ((frost$core$Object*) _2559);
frost$core$Frost$unref$frost$core$Object$Q(_2568);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:395
_2571 = *(&local83);
_2572 = &_2571->$rawValue;
_2573 = *_2572;
_2574 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:396:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2577 = _2573.value;
_2578 = _2574.value;
_2579 = _2577 == _2578;
_2580 = (frost$core$Bit) {_2579};
_2582 = _2580.value;
if (_2582) goto block299; else goto block300;
block299:;
_2584 = &_2571->$data.$ERROR.field0;
_2585 = *_2584;
*(&local84) = ((frost$core$String*) NULL);
_2587 = ((frost$core$Object*) _2585);
frost$core$Frost$ref$frost$core$Object$Q(_2587);
_2589 = *(&local84);
_2590 = ((frost$core$Object*) _2589);
frost$core$Frost$unref$frost$core$Object$Q(_2590);
*(&local84) = _2585;
_2593 = &_2571->$data.$ERROR.field1;
_2594 = *_2593;
*(&local85) = _2594;
_2596 = &_2571->$data.$ERROR.field2;
_2597 = *_2596;
*(&local86) = _2597;
_2599 = &_2571->$data.$ERROR.field3;
_2600 = *_2599;
*(&local87) = ((frost$core$String*) NULL);
_2602 = ((frost$core$Object*) _2600);
frost$core$Frost$ref$frost$core$Object$Q(_2602);
_2604 = *(&local87);
_2605 = ((frost$core$Object*) _2604);
frost$core$Frost$unref$frost$core$Object$Q(_2605);
*(&local87) = _2600;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:397
_2609 = *(&local59);
_2610 = (frost$core$Int) {1u};
_2611 = _2609.value;
_2612 = _2610.value;
_2613 = _2611 + _2612;
_2614 = (frost$core$Int) {_2613};
*(&local59) = _2614;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:398
_2617 = *(&local84);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:398:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_2620 = ((frost$core$Object*) _2617);
frost$core$Frost$ref$frost$core$Object$Q(_2620);
_2623 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2617, &$s385);
_2624 = *(&local85);
frost$core$Int$wrapper* $tmp386;
$tmp386 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp386->value = _2624;
_2625 = ((frost$core$Object*) $tmp386);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:398:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2628 = ($fn387) _2625->$class->vtable[0];
_2629 = _2628(_2625);
_2630 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2623, _2629);
_2631 = ((frost$core$Object*) _2630);
frost$core$Frost$ref$frost$core$Object$Q(_2631);
_2633 = ((frost$core$Object*) _2630);
frost$core$Frost$unref$frost$core$Object$Q(_2633);
_2635 = ((frost$core$Object*) _2629);
frost$core$Frost$unref$frost$core$Object$Q(_2635);
_2638 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2630, &$s388);
_2639 = *(&local86);
frost$core$Int$wrapper* $tmp389;
$tmp389 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp389->value = _2639;
_2640 = ((frost$core$Object*) $tmp389);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:398:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2643 = ($fn390) _2640->$class->vtable[0];
_2644 = _2643(_2640);
_2645 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2638, _2644);
_2646 = ((frost$core$Object*) _2645);
frost$core$Frost$ref$frost$core$Object$Q(_2646);
_2648 = ((frost$core$Object*) _2645);
frost$core$Frost$unref$frost$core$Object$Q(_2648);
_2650 = ((frost$core$Object*) _2644);
frost$core$Frost$unref$frost$core$Object$Q(_2650);
_2653 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2645, &$s391);
_2654 = *(&local87);
_2655 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2653, _2654);
_2656 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2655, &$s392);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:398:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_2656);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s393);
_2666 = ((frost$core$Object*) _2656);
frost$core$Frost$unref$frost$core$Object$Q(_2666);
_2668 = ((frost$core$Object*) _2655);
frost$core$Frost$unref$frost$core$Object$Q(_2668);
_2670 = ((frost$core$Object*) _2653);
frost$core$Frost$unref$frost$core$Object$Q(_2670);
_2672 = ((frost$core$Object*) _2645);
frost$core$Frost$unref$frost$core$Object$Q(_2672);
_2674 = _2640;
frost$core$Frost$unref$frost$core$Object$Q(_2674);
_2676 = ((frost$core$Object*) _2638);
frost$core$Frost$unref$frost$core$Object$Q(_2676);
_2678 = ((frost$core$Object*) _2630);
frost$core$Frost$unref$frost$core$Object$Q(_2678);
_2680 = _2625;
frost$core$Frost$unref$frost$core$Object$Q(_2680);
_2682 = ((frost$core$Object*) _2623);
frost$core$Frost$unref$frost$core$Object$Q(_2682);
_2684 = ((frost$core$Object*) _2617);
frost$core$Frost$unref$frost$core$Object$Q(_2684);
_2686 = *(&local87);
_2687 = ((frost$core$Object*) _2686);
frost$core$Frost$unref$frost$core$Object$Q(_2687);
*(&local87) = ((frost$core$String*) NULL);
_2690 = *(&local84);
_2691 = ((frost$core$Object*) _2690);
frost$core$Frost$unref$frost$core$Object$Q(_2691);
*(&local84) = ((frost$core$String*) NULL);
goto block298;
block300:;
_2695 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:400:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2698 = _2573.value;
_2699 = _2695.value;
_2700 = _2698 == _2699;
_2701 = (frost$core$Bit) {_2700};
_2703 = _2701.value;
if (_2703) goto block307; else goto block298;
block307:;
_2705 = &_2571->$data.$WARNING.field0;
_2706 = *_2705;
*(&local88) = ((frost$core$String*) NULL);
_2708 = ((frost$core$Object*) _2706);
frost$core$Frost$ref$frost$core$Object$Q(_2708);
_2710 = *(&local88);
_2711 = ((frost$core$Object*) _2710);
frost$core$Frost$unref$frost$core$Object$Q(_2711);
*(&local88) = _2706;
_2714 = &_2571->$data.$WARNING.field1;
_2715 = *_2714;
*(&local89) = _2715;
_2717 = &_2571->$data.$WARNING.field2;
_2718 = *_2717;
*(&local90) = _2718;
_2720 = &_2571->$data.$WARNING.field3;
_2721 = *_2720;
*(&local91) = ((frost$core$String*) NULL);
_2723 = ((frost$core$Object*) _2721);
frost$core$Frost$ref$frost$core$Object$Q(_2723);
_2725 = *(&local91);
_2726 = ((frost$core$Object*) _2725);
frost$core$Frost$unref$frost$core$Object$Q(_2726);
*(&local91) = _2721;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:401
_2730 = *(&local60);
_2731 = (frost$core$Int) {1u};
_2732 = _2730.value;
_2733 = _2731.value;
_2734 = _2732 + _2733;
_2735 = (frost$core$Int) {_2734};
*(&local60) = _2735;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:402
_2738 = *(&local88);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:402:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_2741 = ((frost$core$Object*) _2738);
frost$core$Frost$ref$frost$core$Object$Q(_2741);
_2744 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2738, &$s394);
_2745 = *(&local89);
frost$core$Int$wrapper* $tmp395;
$tmp395 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp395->value = _2745;
_2746 = ((frost$core$Object*) $tmp395);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:402:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2749 = ($fn396) _2746->$class->vtable[0];
_2750 = _2749(_2746);
_2751 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2744, _2750);
_2752 = ((frost$core$Object*) _2751);
frost$core$Frost$ref$frost$core$Object$Q(_2752);
_2754 = ((frost$core$Object*) _2751);
frost$core$Frost$unref$frost$core$Object$Q(_2754);
_2756 = ((frost$core$Object*) _2750);
frost$core$Frost$unref$frost$core$Object$Q(_2756);
_2759 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2751, &$s397);
_2760 = *(&local90);
frost$core$Int$wrapper* $tmp398;
$tmp398 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp398->value = _2760;
_2761 = ((frost$core$Object*) $tmp398);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:402:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2764 = ($fn399) _2761->$class->vtable[0];
_2765 = _2764(_2761);
_2766 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2759, _2765);
_2767 = ((frost$core$Object*) _2766);
frost$core$Frost$ref$frost$core$Object$Q(_2767);
_2769 = ((frost$core$Object*) _2766);
frost$core$Frost$unref$frost$core$Object$Q(_2769);
_2771 = ((frost$core$Object*) _2765);
frost$core$Frost$unref$frost$core$Object$Q(_2771);
_2774 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2766, &$s400);
_2775 = *(&local91);
_2776 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2774, _2775);
_2777 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2776, &$s401);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:402:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_2777);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s402);
_2787 = ((frost$core$Object*) _2777);
frost$core$Frost$unref$frost$core$Object$Q(_2787);
_2789 = ((frost$core$Object*) _2776);
frost$core$Frost$unref$frost$core$Object$Q(_2789);
_2791 = ((frost$core$Object*) _2774);
frost$core$Frost$unref$frost$core$Object$Q(_2791);
_2793 = ((frost$core$Object*) _2766);
frost$core$Frost$unref$frost$core$Object$Q(_2793);
_2795 = _2761;
frost$core$Frost$unref$frost$core$Object$Q(_2795);
_2797 = ((frost$core$Object*) _2759);
frost$core$Frost$unref$frost$core$Object$Q(_2797);
_2799 = ((frost$core$Object*) _2751);
frost$core$Frost$unref$frost$core$Object$Q(_2799);
_2801 = _2746;
frost$core$Frost$unref$frost$core$Object$Q(_2801);
_2803 = ((frost$core$Object*) _2744);
frost$core$Frost$unref$frost$core$Object$Q(_2803);
_2805 = ((frost$core$Object*) _2738);
frost$core$Frost$unref$frost$core$Object$Q(_2805);
_2807 = *(&local91);
_2808 = ((frost$core$Object*) _2807);
frost$core$Frost$unref$frost$core$Object$Q(_2808);
*(&local91) = ((frost$core$String*) NULL);
_2811 = *(&local88);
_2812 = ((frost$core$Object*) _2811);
frost$core$Frost$unref$frost$core$Object$Q(_2812);
*(&local88) = ((frost$core$String*) NULL);
goto block298;
block298:;
_2816 = *(&local83);
_2817 = ((frost$core$Object*) _2816);
frost$core$Frost$unref$frost$core$Object$Q(_2817);
*(&local83) = ((org$frostlang$frostc$Compiler$Message*) NULL);
goto block293;
block295:;
_2821 = *(&local71);
_2822 = ((frost$core$Object*) _2821);
frost$core$Frost$unref$frost$core$Object$Q(_2822);
*(&local71) = ((org$frostlang$frostc$Compiler*) NULL);
_2825 = *(&local70);
_2826 = ((frost$core$Object*) _2825);
frost$core$Frost$unref$frost$core$Object$Q(_2826);
*(&local70) = ((frost$threads$MessageQueue*) NULL);
_2829 = *(&local62);
_2830 = ((frost$core$Object*) _2829);
frost$core$Frost$unref$frost$core$Object$Q(_2830);
*(&local62) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:407
_2834 = *(&local60);
_2835 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:407:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2838 = _2834.value;
_2839 = _2835.value;
_2840 = _2838 == _2839;
_2841 = (frost$core$Bit) {_2840};
_2843 = _2841.value;
if (_2843) goto block314; else goto block316;
block314:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:409
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:409:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s403);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s404);
goto block315;
block316:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:411
_2857 = *(&local60);
_2858 = (frost$core$Int) {0u};
_2859 = _2857.value;
_2860 = _2858.value;
_2861 = _2859 > _2860;
_2862 = (frost$core$Bit) {_2861};
_2863 = _2862.value;
if (_2863) goto block320; else goto block321;
block320:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:413
_2866 = *(&local60);
_2867 = frost$core$Int$get_asString$R$frost$core$String(_2866);
_2868 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2867, &$s405);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:413:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_2868);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s406);
_2878 = ((frost$core$Object*) _2868);
frost$core$Frost$unref$frost$core$Object$Q(_2878);
_2880 = ((frost$core$Object*) _2867);
frost$core$Frost$unref$frost$core$Object$Q(_2880);
goto block321;
block321:;
goto block315;
block315:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:415
_2885 = *(&local59);
_2886 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:415:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2889 = _2885.value;
_2890 = _2886.value;
_2891 = _2889 == _2890;
_2892 = (frost$core$Bit) {_2891};
_2894 = _2892.value;
if (_2894) goto block324; else goto block326;
block324:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:416
_2897 = *(&local8);
_2898 = _2897.nonnull;
_2899 = (frost$core$Bit) {_2898};
_2900 = _2899.value;
if (_2900) goto block328; else goto block329;
block329:;
_2902 = (frost$core$Int) {416u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s407, _2902, &$s408);
abort(); // unreachable
block328:;
_2905 = ((org$frostlang$frostc$Main$Format) _2897.value);
_2906 = _2905.$rawValue;
_2907 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:417:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2910 = _2906.value;
_2911 = _2907.value;
_2912 = _2910 == _2911;
_2913 = (frost$core$Bit) {_2912};
_2915 = _2913.value;
if (_2915) goto block331; else goto block332;
block331:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:418
_2918 = *(&local3);
_2919 = *(&local4);
_2920 = *(&local5);
_2921 = _2920 != NULL;
_2922 = (frost$core$Bit) {_2921};
_2923 = _2922.value;
if (_2923) goto block334; else goto block335;
block335:;
_2925 = (frost$core$Int) {418u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s409, _2925, &$s410);
abort(); // unreachable
block334:;
_2928 = _2920;
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:418:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:184
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:184:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_2933 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_2928, &$s411);
_2934 = &_2933->path;
_2935 = *_2934;
_2936 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_2935);
*(&local93) = ((frost$core$String*) NULL);
_2938 = ((frost$core$Object*) _2936);
frost$core$Frost$ref$frost$core$Object$Q(_2938);
_2940 = *(&local93);
_2941 = ((frost$core$Object*) _2940);
frost$core$Frost$unref$frost$core$Object$Q(_2941);
*(&local93) = _2936;
_2944 = ((frost$core$Object*) _2936);
frost$core$Frost$unref$frost$core$Object$Q(_2944);
_2946 = ((frost$core$Object*) _2933);
frost$core$Frost$unref$frost$core$Object$Q(_2946);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_2949 = *(&local93);
_2950 = _2949 == NULL;
_2951 = (frost$core$Bit) {_2950};
_2952 = _2951.value;
if (_2952) goto block338; else goto block339;
block338:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_2955 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_2955);
_2957 = *(&local93);
_2958 = ((frost$core$Object*) _2957);
frost$core$Frost$unref$frost$core$Object$Q(_2958);
*(&local93) = ((frost$core$String*) NULL);
*(&local92) = ((frost$io$File*) NULL);
_2962 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_2962);
goto block337;
block339:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_2966 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_2967 = *(&local93);
_2968 = _2967 != NULL;
_2969 = (frost$core$Bit) {_2968};
_2970 = _2969.value;
if (_2970) goto block340; else goto block341;
block341:;
_2972 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s412, _2972, &$s413);
abort(); // unreachable
block340:;
_2975 = _2967;
frost$io$File$init$frost$core$String(_2966, _2975);
_2977 = _2966;
_2978 = ((frost$core$Object*) _2977);
frost$core$Frost$ref$frost$core$Object$Q(_2978);
_2980 = ((frost$core$Object*) _2966);
frost$core$Frost$unref$frost$core$Object$Q(_2980);
_2982 = *(&local93);
_2983 = ((frost$core$Object*) _2982);
frost$core$Frost$unref$frost$core$Object$Q(_2983);
*(&local93) = ((frost$core$String*) NULL);
*(&local92) = _2977;
_2987 = ((frost$core$Object*) _2977);
frost$core$Frost$ref$frost$core$Object$Q(_2987);
goto block337;
block337:;
_2990 = *(&local92);
_2991 = _2990 != NULL;
_2992 = (frost$core$Bit) {_2991};
_2993 = _2992.value;
if (_2993) goto block342; else goto block343;
block343:;
_2995 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s414, _2995, &$s415);
abort(); // unreachable
block342:;
_2998 = _2990;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:184:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
_3001 = frost$io$File$get_name$R$frost$core$String(_2928);
*(&local95) = ((frost$core$String*) NULL);
_3003 = ((frost$core$Object*) _3001);
frost$core$Frost$ref$frost$core$Object$Q(_3003);
_3005 = *(&local95);
_3006 = ((frost$core$Object*) _3005);
frost$core$Frost$unref$frost$core$Object$Q(_3006);
*(&local95) = _3001;
_3009 = ((frost$core$Object*) _3001);
frost$core$Frost$unref$frost$core$Object$Q(_3009);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_3012 = *(&local95);
_3013 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_3012, &$s416);
*(&local96) = _3013;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_3016 = *(&local96);
_3017 = !_3016.nonnull;
_3018 = (frost$core$Bit) {_3017};
_3019 = _3018.value;
if (_3019) goto block345; else goto block346;
block345:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_3022 = *(&local95);
_3023 = ((frost$core$Object*) _3022);
frost$core$Frost$ref$frost$core$Object$Q(_3023);
_3025 = *(&local95);
_3026 = ((frost$core$Object*) _3025);
frost$core$Frost$unref$frost$core$Object$Q(_3026);
*(&local95) = ((frost$core$String*) NULL);
*(&local94) = _3022;
_3030 = ((frost$core$Object*) _3022);
frost$core$Frost$ref$frost$core$Object$Q(_3030);
goto block344;
block346:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_3034 = *(&local95);
_3035 = *(&local96);
_3036 = (frost$core$Bit) {false};
_3037 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _3035, _3036);
_3038 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_3034, _3037);
_3039 = ((frost$core$Object*) _3038);
frost$core$Frost$ref$frost$core$Object$Q(_3039);
_3041 = ((frost$core$Object*) _3038);
frost$core$Frost$unref$frost$core$Object$Q(_3041);
_3043 = *(&local95);
_3044 = ((frost$core$Object*) _3043);
frost$core$Frost$unref$frost$core$Object$Q(_3044);
*(&local95) = ((frost$core$String*) NULL);
*(&local94) = _3038;
_3048 = ((frost$core$Object*) _3038);
frost$core$Frost$ref$frost$core$Object$Q(_3048);
goto block344;
block344:;
_3051 = *(&local94);
_3052 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3051, &$s417);
_3053 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_2998, _3052);
_3054 = ((frost$core$Object*) _3053);
frost$core$Frost$ref$frost$core$Object$Q(_3054);
_3056 = ((frost$core$Object*) _3053);
frost$core$Frost$unref$frost$core$Object$Q(_3056);
_3058 = ((frost$core$Object*) _3052);
frost$core$Frost$unref$frost$core$Object$Q(_3058);
_3060 = ((frost$core$Object*) _3051);
frost$core$Frost$unref$frost$core$Object$Q(_3060);
_3062 = *(&local94);
_3063 = ((frost$core$Object*) _3062);
frost$core$Frost$unref$frost$core$Object$Q(_3063);
*(&local94) = ((frost$core$String*) NULL);
_3066 = ((frost$core$Object*) _2990);
frost$core$Frost$unref$frost$core$Object$Q(_3066);
_3068 = *(&local92);
_3069 = ((frost$core$Object*) _3068);
frost$core$Frost$unref$frost$core$Object$Q(_3069);
*(&local92) = ((frost$io$File*) NULL);
_3073 = *(&local5);
_3074 = _3073 != NULL;
_3075 = (frost$core$Bit) {_3074};
_3076 = _3075.value;
if (_3076) goto block347; else goto block348;
block348:;
_3078 = (frost$core$Int) {418u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s418, _3078, &$s419);
abort(); // unreachable
block347:;
_3081 = _3073;
_3082 = *(&local10);
_3083 = *(&local61);
_3084 = org$frostlang$frostc$Main$toExecutable$frost$collections$Array$LTfrost$io$File$GT$frost$collections$Array$LTfrost$core$String$GT$frost$io$File$frost$io$File$frost$core$Bit$org$frostlang$frostc$Compiler$Settings$R$frost$io$File(param0, _2918, _2919, _3053, _3081, _3082, _3083);
_3085 = ((frost$core$Object*) _3084);
frost$core$Frost$unref$frost$core$Object$Q(_3085);
_3087 = ((frost$core$Object*) _3053);
frost$core$Frost$unref$frost$core$Object$Q(_3087);
goto block330;
block332:;
_3090 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:421:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3093 = _2906.value;
_3094 = _3090.value;
_3095 = _3093 == _3094;
_3096 = (frost$core$Bit) {_3095};
_3098 = _3096.value;
if (_3098) goto block349; else goto block330;
block349:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:422
_3101 = *(&local5);
_3102 = _3101 != NULL;
_3103 = (frost$core$Bit) {_3102};
_3104 = _3103.value;
if (_3104) goto block351; else goto block352;
block352:;
_3106 = (frost$core$Int) {422u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s420, _3106, &$s421);
abort(); // unreachable
block351:;
_3109 = _3101;
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:422:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:184
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:184:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_3114 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_3109, &$s422);
_3115 = &_3114->path;
_3116 = *_3115;
_3117 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_3116);
*(&local98) = ((frost$core$String*) NULL);
_3119 = ((frost$core$Object*) _3117);
frost$core$Frost$ref$frost$core$Object$Q(_3119);
_3121 = *(&local98);
_3122 = ((frost$core$Object*) _3121);
frost$core$Frost$unref$frost$core$Object$Q(_3122);
*(&local98) = _3117;
_3125 = ((frost$core$Object*) _3117);
frost$core$Frost$unref$frost$core$Object$Q(_3125);
_3127 = ((frost$core$Object*) _3114);
frost$core$Frost$unref$frost$core$Object$Q(_3127);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_3130 = *(&local98);
_3131 = _3130 == NULL;
_3132 = (frost$core$Bit) {_3131};
_3133 = _3132.value;
if (_3133) goto block355; else goto block356;
block355:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_3136 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_3136);
_3138 = *(&local98);
_3139 = ((frost$core$Object*) _3138);
frost$core$Frost$unref$frost$core$Object$Q(_3139);
*(&local98) = ((frost$core$String*) NULL);
*(&local97) = ((frost$io$File*) NULL);
_3143 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_3143);
goto block354;
block356:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_3147 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_3148 = *(&local98);
_3149 = _3148 != NULL;
_3150 = (frost$core$Bit) {_3149};
_3151 = _3150.value;
if (_3151) goto block357; else goto block358;
block358:;
_3153 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s423, _3153, &$s424);
abort(); // unreachable
block357:;
_3156 = _3148;
frost$io$File$init$frost$core$String(_3147, _3156);
_3158 = _3147;
_3159 = ((frost$core$Object*) _3158);
frost$core$Frost$ref$frost$core$Object$Q(_3159);
_3161 = ((frost$core$Object*) _3147);
frost$core$Frost$unref$frost$core$Object$Q(_3161);
_3163 = *(&local98);
_3164 = ((frost$core$Object*) _3163);
frost$core$Frost$unref$frost$core$Object$Q(_3164);
*(&local98) = ((frost$core$String*) NULL);
*(&local97) = _3158;
_3168 = ((frost$core$Object*) _3158);
frost$core$Frost$ref$frost$core$Object$Q(_3168);
goto block354;
block354:;
_3171 = *(&local97);
_3172 = _3171 != NULL;
_3173 = (frost$core$Bit) {_3172};
_3174 = _3173.value;
if (_3174) goto block359; else goto block360;
block360:;
_3176 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s425, _3176, &$s426);
abort(); // unreachable
block359:;
_3179 = _3171;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:184:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
_3182 = frost$io$File$get_name$R$frost$core$String(_3109);
*(&local100) = ((frost$core$String*) NULL);
_3184 = ((frost$core$Object*) _3182);
frost$core$Frost$ref$frost$core$Object$Q(_3184);
_3186 = *(&local100);
_3187 = ((frost$core$Object*) _3186);
frost$core$Frost$unref$frost$core$Object$Q(_3187);
*(&local100) = _3182;
_3190 = ((frost$core$Object*) _3182);
frost$core$Frost$unref$frost$core$Object$Q(_3190);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_3193 = *(&local100);
_3194 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_3193, &$s427);
*(&local101) = _3194;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_3197 = *(&local101);
_3198 = !_3197.nonnull;
_3199 = (frost$core$Bit) {_3198};
_3200 = _3199.value;
if (_3200) goto block362; else goto block363;
block362:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_3203 = *(&local100);
_3204 = ((frost$core$Object*) _3203);
frost$core$Frost$ref$frost$core$Object$Q(_3204);
_3206 = *(&local100);
_3207 = ((frost$core$Object*) _3206);
frost$core$Frost$unref$frost$core$Object$Q(_3207);
*(&local100) = ((frost$core$String*) NULL);
*(&local99) = _3203;
_3211 = ((frost$core$Object*) _3203);
frost$core$Frost$ref$frost$core$Object$Q(_3211);
goto block361;
block363:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_3215 = *(&local100);
_3216 = *(&local101);
_3217 = (frost$core$Bit) {false};
_3218 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _3216, _3217);
_3219 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_3215, _3218);
_3220 = ((frost$core$Object*) _3219);
frost$core$Frost$ref$frost$core$Object$Q(_3220);
_3222 = ((frost$core$Object*) _3219);
frost$core$Frost$unref$frost$core$Object$Q(_3222);
_3224 = *(&local100);
_3225 = ((frost$core$Object*) _3224);
frost$core$Frost$unref$frost$core$Object$Q(_3225);
*(&local100) = ((frost$core$String*) NULL);
*(&local99) = _3219;
_3229 = ((frost$core$Object*) _3219);
frost$core$Frost$ref$frost$core$Object$Q(_3229);
goto block361;
block361:;
_3232 = *(&local99);
_3233 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3232, &$s428);
_3234 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_3179, _3233);
_3235 = ((frost$core$Object*) _3234);
frost$core$Frost$ref$frost$core$Object$Q(_3235);
_3237 = ((frost$core$Object*) _3234);
frost$core$Frost$unref$frost$core$Object$Q(_3237);
_3239 = ((frost$core$Object*) _3233);
frost$core$Frost$unref$frost$core$Object$Q(_3239);
_3241 = ((frost$core$Object*) _3232);
frost$core$Frost$unref$frost$core$Object$Q(_3241);
_3243 = *(&local99);
_3244 = ((frost$core$Object*) _3243);
frost$core$Frost$unref$frost$core$Object$Q(_3244);
*(&local99) = ((frost$core$String*) NULL);
_3247 = ((frost$core$Object*) _3171);
frost$core$Frost$unref$frost$core$Object$Q(_3247);
_3249 = *(&local97);
_3250 = ((frost$core$Object*) _3249);
frost$core$Frost$unref$frost$core$Object$Q(_3250);
*(&local97) = ((frost$io$File*) NULL);
_3254 = *(&local5);
_3255 = _3254 != NULL;
_3256 = (frost$core$Bit) {_3255};
_3257 = _3256.value;
if (_3257) goto block364; else goto block365;
block365:;
_3259 = (frost$core$Int) {422u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s429, _3259, &$s430);
abort(); // unreachable
block364:;
_3262 = _3254;
_3263 = *(&local10);
_3264 = *(&local61);
_3265 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$org$frostlang$frostc$Compiler$Settings$R$frost$io$File(param0, _3234, _3262, _3263, _3264);
_3266 = ((frost$core$Object*) _3265);
frost$core$Frost$unref$frost$core$Object$Q(_3266);
_3268 = ((frost$core$Object*) _3234);
frost$core$Frost$unref$frost$core$Object$Q(_3268);
goto block330;
block330:;
_3321 = *(&local61);
_3322 = ((frost$core$Object*) _3321);
frost$core$Frost$unref$frost$core$Object$Q(_3322);
*(&local61) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_3325 = *(&local46);
_3326 = ((frost$core$Object*) _3325);
frost$core$Frost$unref$frost$core$Object$Q(_3326);
*(&local46) = ((frost$io$File*) NULL);
_3329 = *(&local9);
_3330 = ((frost$core$Object*) _3329);
frost$core$Frost$unref$frost$core$Object$Q(_3330);
*(&local9) = ((frost$core$String*) NULL);
_3333 = *(&local5);
_3334 = ((frost$core$Object*) _3333);
frost$core$Frost$unref$frost$core$Object$Q(_3334);
*(&local5) = ((frost$io$File*) NULL);
_3337 = *(&local4);
_3338 = ((frost$core$Object*) _3337);
frost$core$Frost$unref$frost$core$Object$Q(_3338);
*(&local4) = ((frost$collections$Array*) NULL);
_3341 = *(&local3);
_3342 = ((frost$core$Object*) _3341);
frost$core$Frost$unref$frost$core$Object$Q(_3342);
*(&local3) = ((frost$collections$Array*) NULL);
_3345 = *(&local2);
_3346 = ((frost$core$Object*) _3345);
frost$core$Frost$unref$frost$core$Object$Q(_3346);
*(&local2) = ((frost$collections$Array*) NULL);
_3349 = *(&local1);
_3350 = ((frost$core$Object*) _3349);
frost$core$Frost$unref$frost$core$Object$Q(_3350);
*(&local1) = ((frost$collections$Array*) NULL);
_3353 = *(&local0);
_3354 = ((frost$core$Object*) _3353);
frost$core$Frost$unref$frost$core$Object$Q(_3354);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block326:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:427
_3274 = *(&local59);
_3275 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:427:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3278 = _3274.value;
_3279 = _3275.value;
_3280 = _3278 == _3279;
_3281 = (frost$core$Bit) {_3280};
_3283 = _3281.value;
if (_3283) goto block366; else goto block368;
block366:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:429
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:429:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s431);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s432);
goto block367;
block368:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:433
_3298 = *(&local59);
_3299 = frost$core$Int$get_asString$R$frost$core$String(_3298);
_3300 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3299, &$s433);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:433:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_3300);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s434);
_3310 = ((frost$core$Object*) _3300);
frost$core$Frost$unref$frost$core$Object$Q(_3310);
_3312 = ((frost$core$Object*) _3299);
frost$core$Frost$unref$frost$core$Object$Q(_3312);
goto block367;
block367:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:435
_3316 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_3316);
_3318 = (frost$core$Int) {435u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s435, _3318, &$s436);
abort(); // unreachable

}
void frostMain(frost$collections$ListView* param0) {

frost$collections$CollectionView* _1;
$fn437 _2;
frost$core$Int _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _9;
frost$core$Int _11;
$fn438 _12;
frost$core$Object* _13;
frost$core$String* _14;
frost$core$Bit _15;
bool _16;
frost$core$Object* _17;
org$frostlang$frostc$Main* _23;
frost$core$Int _25;
frost$core$Int$nullable _26;
frost$core$Bit _27;
frost$core$Range$LTfrost$core$Int$Q$GT _28;
$fn439 _29;
frost$collections$ListView* _30;
frost$core$Object* _32;
frost$core$Object* _34;
frost$collections$CollectionView* _39;
$fn440 _40;
frost$core$Int _41;
frost$core$Int _42;
int64_t _45;
int64_t _46;
bool _47;
frost$core$Bit _48;
bool _50;
frost$core$Int _52;
$fn441 _53;
frost$core$Object* _54;
frost$core$String* _55;
frost$core$Bit _56;
bool _57;
frost$core$Object* _58;
org$frostlang$frostc$Bench* _62;
$fn442 _64;
frost$core$Object* _66;
org$frostlang$frostc$Main* _71;
frost$core$Object* _74;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:441
_1 = ((frost$collections$CollectionView*) param0);
ITable* $tmp443 = _1->$class->itable;
while ($tmp443->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp443 = $tmp443->next;
}
_2 = $tmp443->methods[0];
_3 = _2(_1);
_4 = (frost$core$Int) {1u};
_5 = _3.value;
_6 = _4.value;
_7 = _5 > _6;
_8 = (frost$core$Bit) {_7};
_9 = _8.value;
if (_9) goto block3; else goto block2;
block3:;
_11 = (frost$core$Int) {1u};
ITable* $tmp444 = param0->$class->itable;
while ($tmp444->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp444 = $tmp444->next;
}
_12 = $tmp444->methods[0];
_13 = _12(param0, _11);
_14 = ((frost$core$String*) _13);
_15 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_14, &$s445);
_16 = _15.value;
_17 = _13;
frost$core$Frost$unref$frost$core$Object$Q(_17);
if (_16) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:442
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:443
_23 = (org$frostlang$frostc$Main*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main), (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init(_23);
_25 = (frost$core$Int) {1u};
_26 = ((frost$core$Int$nullable) { _25, true });
_27 = (frost$core$Bit) {false};
_28 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(_26, ((frost$core$Int$nullable) { .nonnull = false }), _27);
ITable* $tmp446 = param0->$class->itable;
while ($tmp446->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp446 = $tmp446->next;
}
_29 = $tmp446->methods[2];
_30 = _29(param0, _28);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT(_23, _30);
_32 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_34);
goto block4;
block5:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:446
_39 = ((frost$collections$CollectionView*) param0);
ITable* $tmp447 = _39->$class->itable;
while ($tmp447->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp447 = $tmp447->next;
}
_40 = $tmp447->methods[0];
_41 = _40(_39);
_42 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:446:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_45 = _41.value;
_46 = _42.value;
_47 = _45 == _46;
_48 = (frost$core$Bit) {_47};
_50 = _48.value;
if (_50) goto block8; else goto block7;
block8:;
_52 = (frost$core$Int) {1u};
ITable* $tmp448 = param0->$class->itable;
while ($tmp448->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp448 = $tmp448->next;
}
_53 = $tmp448->methods[0];
_54 = _53(param0, _52);
_55 = ((frost$core$String*) _54);
_56 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_55, &$s449);
_57 = _56.value;
_58 = _54;
frost$core$Frost$unref$frost$core$Object$Q(_58);
if (_57) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:447
_62 = (org$frostlang$frostc$Bench*) frostObjectAlloc(sizeof(org$frostlang$frostc$Bench), (frost$core$Class*) &org$frostlang$frostc$Bench$class);
org$frostlang$frostc$Bench$init(_62);
_64 = ($fn450) _62->$class->vtable[4];
_64(_62);
_66 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_66);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:448
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:450
_71 = (org$frostlang$frostc$Main*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main), (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init(_71);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT(_71, param0);
_74 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_74);
return;

}
void org$frostlang$frostc$Main$cleanup(void* rawSelf) {
org$frostlang$frostc$Main* param0 = (org$frostlang$frostc$Main*) rawSelf;

frost$core$Object* _1;
frost$io$File** _3;
frost$io$File* _4;
frost$core$Object* _5;
frost$io$File** _7;
frost$io$File* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:9
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->clang;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->frostHome;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}

