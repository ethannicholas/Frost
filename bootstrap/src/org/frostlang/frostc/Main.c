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
#include "frost/unsafe/Pointer.h"
#include "org/frostlang/frostc/LLVMCodeGenerator.h"
#include "org/frostlang/frostc/HCodeGenerator.h"
#include "org/frostlang/frostc/CCodeGenerator.h"
#include "org/frostlang/frostc/StubCodeGenerator.h"
#include "org/frostlang/frostc/Interpreter.h"
#include "org/frostlang/frostc/HTMLProcessor.h"
#include "frost/threads/Lock.h"
#include "org/frostlang/frostc/Bench.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

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

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e", 25, -3316641479594746667, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x6d\x36\x34", 4, 6043963258232676957, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x66\x50\x49\x43", 5, -3218342706179030910, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x63", 2, 563052241097350273, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x67", 2, 563056639143863117, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x4f", 2, 563012658678734677, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x6c", 2, 563044544515952796, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x6c\x66\x72\x6f\x73\x74", 7, -4044657180966489978, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x6c\x6d", 3, -2354502893290026621, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, -4341477490894522756, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6c\x69\x62", 3, 1317978099017241196, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x6c", 2, 563044544515952796, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x6d\x36\x34", 4, 6043963258232676957, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x66\x50\x49\x43", 5, -3218342706179030910, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x67", 2, 563056639143863117, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x4f", 2, 563012658678734677, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x57\x6e\x6f\x2d\x6f\x76\x65\x72\x72\x69\x64\x65\x2d\x6d\x6f\x64\x75\x6c\x65", 20, -2132269410351424080, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x55\x73\x61\x67\x65\x3a\x20\x66\x72\x6f\x73\x74\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -5336904199903828035, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x66\x72\x6f\x73\x74\x27\x2e", 38, 2414752363581770017, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, -3725874908572553427, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, -8537804258594104524, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x2d\x66\x75\x7a\x7a", 6, -1426593306435499698, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, 2993450520568953317, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -2854313959629863208, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -293442963066226919, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x4f", 2, 563012658678734677, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, -36708640889814861, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, -8241422096120224677, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x53", 2, 562999464539196145, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, -36708640889814861, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, -8229934398630946849, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x66", 2, 563055539632234906, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -8357866846417911189, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -8762049995398847258, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x65\x78\x65", 3, -4390446579619712681, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f", 1, -5808550276084140354, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6c\x6c", 2, 625221927078985221, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x68", 1, -5808546977549255721, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x63", 1, -5808554674130653198, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x68\x74\x6d\x6c", 4, -8607590772689110736, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x73\x74\x75\x62", 4, -5818263582595368203, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x75\x6e", 3, -8524566317707732406, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, -8940199916074753387, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x49", 2, 563006061608965411, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 8483394141060772687, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x20\x6c\x69\x62\x72\x61\x72\x79\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 6787422783208561247, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x6c", 2, 563044544515952796, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x61\x20\x6c\x69\x62\x72\x61\x72\x79\x20\x6e\x61\x6d\x65", 14, 7182621647362798014, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x2d\x72\x6f\x6f\x74", 6, -3260734117535617165, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x61\x20\x70\x61\x74\x68", 6, 1755487887012249427, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x66\x72\x6f\x73\x74", 6, -6268259042323653607, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -540522989212751288, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x73\x74\x75\x62\x73", 5, -7219040758408810062, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 2088835727452422272, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, 1894309652117697527, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 6252797618683371763, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x6f", 2, 565862592818489914, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x6f", 2, 565862592818489914, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x73\x74\x75\x62", 5, -5255104731122465439, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x73\x74\x75\x62", 5, -5255104731122465439, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, 6378635575011181341, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -5478415099818808347, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, -4651943656929293709, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 6252797618683371763, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s338 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s350 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 3928554745973598786, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 107, -867402159131882985, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s388 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, -5861202104196742523, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s397 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a\x20\x77\x61\x72\x6e\x69\x6e\x67\x3a\x20", 11, 2890546785777135939, NULL };
static frost$core$String $s401 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x31\x20\x77\x61\x72\x6e\x69\x6e\x67", 9, -3177307723557508888, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20\x77\x61\x72\x6e\x69\x6e\x67\x73", 9, 8539650515262073630, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 6252797618683371763, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s415 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s428 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x31\x20\x65\x72\x72\x6f\x72", 7, 3639570550927944898, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20\x65\x72\x72\x6f\x72\x73", 7, -1438914547765079724, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x2d\x72\x65\x70\x65\x61\x74", 8, 3780951491120021928, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x2d\x62\x65\x6e\x63\x68", 7, -7026121568011644677, NULL };

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
int64_t _116;
frost$core$MutableMethod* _117;
frost$core$Object* _118;
int64_t* _121;
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
int64_t _175;
frost$core$MutableMethod* _176;
frost$core$Object* _177;
int64_t* _180;
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
_116 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Main$_Closure2$$anonymous1).value;
_117 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_118 = ((frost$core$Object*) _113);
// begin inline call to frost.core.MutableMethod.init(pointer:builtin_int, target:frost.core.Object?) from Main.frost:77:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:30
_121 = &_117->pointer;
*_121 = _116;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:31
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
_175 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Main$_Closure4$$anonymous3).value;
_176 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_177 = ((frost$core$Object*) _172);
// begin inline call to frost.core.MutableMethod.init(pointer:builtin_int, target:frost.core.Object?) from Main.frost:86:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:30
_180 = &_176->pointer;
*_180 = _175;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:31
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
int64_t _46;
frost$core$Method* _47;
int64_t* _50;
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
int64_t _76;
frost$core$Method* _77;
int64_t* _80;
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
_46 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Main$$anonymous5$frost$io$File$R$frost$core$String).value;
_47 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:builtin_int, target:frost.core.Immutable?) from Main.frost:126:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_50 = &_47->pointer;
*_50 = _46;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
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
_76 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Main$$anonymous6$frost$core$String$R$frost$core$String).value;
_77 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:builtin_int, target:frost.core.Immutable?) from Main.frost:127:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_80 = &_77->pointer;
*_80 = _76;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
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
frost$unsafe$Pointer* _1296;
frost$unsafe$Pointer _1297;
int64_t _1298;
frost$core$Int64 _1299;
int64_t _1300;
frost$core$Object* _1301;
frost$core$Object* _1302;
frost$io$File* _1305;
frost$core$String* _1306;
frost$io$File* _1311;
frost$core$String** _1312;
frost$core$String* _1313;
frost$core$String* _1314;
frost$core$Object* _1316;
frost$core$String* _1318;
frost$core$Object* _1319;
frost$core$Object* _1322;
frost$core$Object* _1324;
frost$core$String* _1327;
bool _1328;
frost$core$Bit _1329;
bool _1330;
frost$core$Object* _1333;
frost$core$String* _1335;
frost$core$Object* _1336;
frost$core$Object* _1340;
frost$io$File* _1344;
frost$core$String* _1345;
bool _1346;
frost$core$Bit _1347;
bool _1348;
frost$core$Int _1350;
frost$core$String* _1353;
frost$io$File* _1355;
frost$core$Object* _1356;
frost$core$Object* _1358;
frost$core$String* _1360;
frost$core$Object* _1361;
frost$core$Object* _1365;
frost$io$File* _1368;
bool _1369;
frost$core$Bit _1370;
bool _1371;
frost$core$Int _1373;
frost$io$File* _1376;
frost$core$String* _1379;
frost$core$Object* _1381;
frost$core$String* _1383;
frost$core$Object* _1384;
frost$core$Object* _1387;
frost$core$String* _1390;
frost$core$String$Index$nullable _1391;
frost$core$String$Index$nullable _1394;
bool _1395;
frost$core$Bit _1396;
bool _1397;
frost$core$String* _1400;
frost$core$Object* _1401;
frost$core$String* _1403;
frost$core$Object* _1404;
frost$core$Object* _1408;
frost$core$String* _1412;
frost$core$String$Index$nullable _1413;
frost$core$Bit _1414;
frost$core$Range$LTfrost$core$String$Index$Q$GT _1415;
frost$core$String* _1416;
frost$core$Object* _1417;
frost$core$Object* _1419;
frost$core$String* _1421;
frost$core$Object* _1422;
frost$core$Object* _1426;
frost$core$String* _1429;
frost$core$String* _1430;
frost$io$File* _1431;
frost$core$Object* _1432;
frost$core$Object* _1434;
frost$core$Object* _1436;
frost$core$Object* _1438;
frost$core$String* _1440;
frost$core$Object* _1441;
frost$core$Object* _1444;
frost$io$File* _1446;
frost$core$Object* _1447;
frost$io$File* _1451;
frost$core$Object* _1452;
frost$io$File* _1454;
frost$core$Object* _1455;
frost$core$Object* _1458;
frost$core$Object* _1460;
frost$core$String* _1462;
frost$core$Object* _1463;
org$frostlang$frostc$Main$Format$nullable _1468;
bool _1469;
frost$core$Bit _1470;
bool _1471;
frost$core$Int _1473;
frost$core$Equatable* _1476;
frost$core$Int _1477;
frost$core$Int* _1480;
org$frostlang$frostc$Main$Format _1482;
org$frostlang$frostc$Main$Format _1485;
frost$core$Equatable* _1486;
$fn132 _1487;
frost$core$Bit _1488;
bool _1489;
frost$core$Object* _1490;
frost$core$Object* _1492;
frost$core$Int _1506;
frost$core$Int _1508;
frost$core$Int _1523;
frost$core$Int _1525;
frost$core$Int _1531;
frost$core$Int _1534;
org$frostlang$frostc$Compiler$Settings* _1537;
frost$io$File** _1538;
frost$io$File* _1539;
frost$collections$Array* _1540;
frost$collections$ListView* _1541;
frost$core$Int _1542;
frost$core$Int _1543;
frost$core$Bit _1544;
frost$core$Object* _1547;
org$frostlang$frostc$Compiler$Settings* _1549;
frost$core$Object* _1550;
frost$core$Object* _1553;
frost$core$Object* _1558;
org$frostlang$frostc$CodeGenerator* _1560;
frost$core$Object* _1561;
org$frostlang$frostc$Main$Format$nullable _1565;
bool _1566;
frost$core$Bit _1567;
bool _1568;
frost$core$Int _1570;
org$frostlang$frostc$Main$Format _1573;
frost$core$Int _1574;
frost$core$Int _1575;
int64_t _1578;
int64_t _1579;
bool _1580;
frost$core$Bit _1581;
bool _1583;
frost$core$Int _1585;
int64_t _1588;
int64_t _1589;
bool _1590;
frost$core$Bit _1591;
bool _1593;
frost$core$Int _1595;
int64_t _1598;
int64_t _1599;
bool _1600;
frost$core$Bit _1601;
bool _1603;
org$frostlang$frostc$LLVMCodeGenerator* _1608;
frost$core$String* _1609;
frost$io$File* _1610;
bool _1611;
frost$core$Bit _1612;
bool _1613;
frost$core$Int _1615;
frost$io$File* _1618;
frost$io$File* _1623;
frost$core$String** _1624;
frost$core$String* _1625;
frost$core$String* _1626;
frost$core$Object* _1628;
frost$core$String* _1630;
frost$core$Object* _1631;
frost$core$Object* _1634;
frost$core$Object* _1636;
frost$core$String* _1639;
bool _1640;
frost$core$Bit _1641;
bool _1642;
frost$core$Object* _1645;
frost$core$String* _1647;
frost$core$Object* _1648;
frost$core$Object* _1652;
frost$io$File* _1656;
frost$core$String* _1657;
bool _1658;
frost$core$Bit _1659;
bool _1660;
frost$core$Int _1662;
frost$core$String* _1665;
frost$io$File* _1667;
frost$core$Object* _1668;
frost$core$Object* _1670;
frost$core$String* _1672;
frost$core$Object* _1673;
frost$core$Object* _1677;
frost$io$File* _1680;
bool _1681;
frost$core$Bit _1682;
bool _1683;
frost$core$Int _1685;
frost$io$File* _1688;
frost$core$String* _1691;
frost$core$Object* _1693;
frost$core$String* _1695;
frost$core$Object* _1696;
frost$core$Object* _1699;
frost$core$String* _1702;
frost$core$String$Index$nullable _1703;
frost$core$String$Index$nullable _1706;
bool _1707;
frost$core$Bit _1708;
bool _1709;
frost$core$String* _1712;
frost$core$Object* _1713;
frost$core$String* _1715;
frost$core$Object* _1716;
frost$core$Object* _1720;
frost$core$String* _1724;
frost$core$String$Index$nullable _1725;
frost$core$Bit _1726;
frost$core$Range$LTfrost$core$String$Index$Q$GT _1727;
frost$core$String* _1728;
frost$core$Object* _1729;
frost$core$Object* _1731;
frost$core$String* _1733;
frost$core$Object* _1734;
frost$core$Object* _1738;
frost$core$String* _1741;
frost$core$String* _1742;
frost$io$File* _1743;
frost$core$Object* _1744;
frost$core$Object* _1746;
frost$core$Object* _1748;
frost$core$Object* _1750;
frost$core$String* _1752;
frost$core$Object* _1753;
frost$core$Object* _1756;
frost$io$File* _1758;
frost$core$Object* _1759;
frost$core$Maybe* _1763;
frost$core$Int* _1764;
frost$core$Int _1765;
int64_t _1766;
bool _1767;
frost$core$Error** _1769;
frost$core$Error* _1770;
frost$core$Object* _1771;
frost$core$Object* _1774;
frost$core$Object* _1776;
frost$core$Object* _1778;
frost$core$Object* _1780;
frost$core$Error* _1804;
frost$core$Object* _1805;
$fn133 _1808;
frost$core$String* _1809;
frost$core$Object* _1816;
frost$core$Int _1820;
frost$core$Int _1822;
frost$core$Object** _1783;
frost$core$Object* _1784;
frost$io$OutputStream* _1785;
org$frostlang$frostc$CodeGenerator* _1787;
frost$core$Object* _1788;
org$frostlang$frostc$CodeGenerator* _1790;
frost$core$Object* _1791;
frost$core$Object* _1794;
frost$core$Object* _1796;
frost$core$Object* _1798;
frost$core$Object* _1800;
frost$core$Error* _1825;
frost$core$Object* _1826;
frost$core$Int _1830;
int64_t _1833;
int64_t _1834;
bool _1835;
frost$core$Bit _1836;
bool _1838;
org$frostlang$frostc$HCodeGenerator* _1841;
frost$io$File* _1842;
bool _1843;
frost$core$Bit _1844;
bool _1845;
frost$core$Int _1847;
frost$io$File* _1850;
org$frostlang$frostc$CodeGenerator* _1852;
frost$core$Object* _1853;
org$frostlang$frostc$CodeGenerator* _1855;
frost$core$Object* _1856;
frost$core$Object* _1859;
frost$core$Int _1862;
int64_t _1865;
int64_t _1866;
bool _1867;
frost$core$Bit _1868;
bool _1870;
org$frostlang$frostc$CCodeGenerator* _1873;
frost$io$File* _1874;
bool _1875;
frost$core$Bit _1876;
bool _1877;
frost$core$Int _1879;
frost$io$File* _1882;
org$frostlang$frostc$CodeGenerator* _1884;
frost$core$Object* _1885;
org$frostlang$frostc$CodeGenerator* _1887;
frost$core$Object* _1888;
frost$core$Object* _1891;
frost$core$Int _1894;
int64_t _1897;
int64_t _1898;
bool _1899;
frost$core$Bit _1900;
bool _1902;
org$frostlang$frostc$StubCodeGenerator* _1907;
frost$io$File* _1908;
bool _1909;
frost$core$Bit _1910;
bool _1911;
frost$core$Int _1913;
frost$io$File* _1916;
frost$core$Maybe* _1917;
frost$core$Int* _1918;
frost$core$Int _1919;
int64_t _1920;
bool _1921;
frost$core$Error** _1923;
frost$core$Error* _1924;
frost$core$Object* _1925;
frost$core$Object* _1928;
frost$core$Object* _1930;
frost$core$Error* _1950;
frost$core$Object* _1951;
$fn134 _1954;
frost$core$String* _1955;
frost$core$Object* _1962;
frost$core$Int _1966;
frost$core$Int _1968;
frost$core$Object** _1933;
frost$core$Object* _1934;
frost$io$OutputStream* _1935;
org$frostlang$frostc$CodeGenerator* _1937;
frost$core$Object* _1938;
org$frostlang$frostc$CodeGenerator* _1940;
frost$core$Object* _1941;
frost$core$Object* _1944;
frost$core$Object* _1946;
frost$core$Error* _1971;
frost$core$Object* _1972;
frost$core$Int _1976;
int64_t _1979;
int64_t _1980;
bool _1981;
frost$core$Bit _1982;
bool _1984;
org$frostlang$frostc$Interpreter* _1987;
org$frostlang$frostc$CodeGenerator* _1989;
frost$core$Object* _1990;
org$frostlang$frostc$CodeGenerator* _1992;
frost$core$Object* _1993;
frost$core$Object* _1996;
frost$threads$MessageQueue* _2000;
frost$core$Object* _2003;
frost$threads$MessageQueue* _2005;
frost$core$Object* _2006;
frost$core$Object* _2009;
org$frostlang$frostc$Compiler* _2012;
frost$threads$MessageQueue* _2013;
org$frostlang$frostc$CodeGenerator* _2014;
org$frostlang$frostc$Compiler$Settings* _2015;
frost$core$Object* _2018;
org$frostlang$frostc$Compiler* _2020;
frost$core$Object* _2021;
frost$core$Object* _2024;
org$frostlang$frostc$Main$Format$nullable _2027;
bool _2028;
frost$core$Bit _2029;
bool _2030;
frost$core$Int _2032;
frost$core$Equatable* _2035;
frost$core$Int _2036;
frost$core$Int* _2039;
org$frostlang$frostc$Main$Format _2041;
org$frostlang$frostc$Main$Format _2044;
frost$core$Equatable* _2045;
$fn135 _2046;
frost$core$Bit _2047;
bool _2048;
frost$core$Object* _2049;
frost$core$Object* _2051;
frost$core$String* _2055;
bool _2056;
frost$core$Bit _2057;
bool _2058;
frost$core$String* _2061;
frost$core$Object* _2062;
frost$core$String* _2064;
frost$core$Object* _2065;
org$frostlang$frostc$HTMLProcessor* _2070;
org$frostlang$frostc$Compiler* _2071;
frost$collections$Array* _2073;
frost$core$Int _2074;
frost$core$Int _2076;
int64_t _2077;
int64_t _2078;
bool _2079;
frost$core$Bit _2080;
bool _2081;
frost$collections$CollectionView* _2083;
$fn136 _2084;
frost$core$Int _2085;
int64_t _2086;
int64_t _2087;
bool _2088;
frost$core$Bit _2089;
bool _2090;
frost$core$Int _2092;
frost$unsafe$Pointer* _2096;
frost$unsafe$Pointer _2097;
int64_t _2098;
frost$core$Int64 _2099;
int64_t _2100;
frost$core$Object* _2101;
frost$core$Object* _2102;
frost$io$File* _2105;
frost$io$File* _2106;
bool _2107;
frost$core$Bit _2108;
bool _2109;
frost$core$Int _2111;
frost$io$File* _2114;
frost$core$String* _2115;
bool _2116;
frost$core$Bit _2117;
bool _2118;
frost$core$Int _2120;
frost$core$String* _2123;
$fn137 _2124;
frost$core$Object* _2126;
frost$core$Object* _2128;
org$frostlang$frostc$Compiler* _2131;
frost$core$Object* _2132;
frost$threads$MessageQueue* _2135;
frost$core$Object* _2136;
org$frostlang$frostc$CodeGenerator* _2139;
frost$core$Object* _2140;
org$frostlang$frostc$Compiler$Settings* _2143;
frost$core$Object* _2144;
frost$io$File* _2147;
frost$core$Object* _2148;
frost$core$String* _2151;
frost$core$Object* _2152;
frost$io$File* _2155;
frost$core$Object* _2156;
frost$collections$Array* _2159;
frost$core$Object* _2160;
frost$collections$Array* _2163;
frost$core$Object* _2164;
frost$collections$Array* _2167;
frost$core$Object* _2168;
frost$collections$Array* _2171;
frost$core$Object* _2172;
org$frostlang$frostc$Main$Arguments* _2175;
frost$core$Object* _2176;
frost$core$String* _2181;
bool _2182;
frost$core$Bit _2183;
bool _2184;
frost$core$Int _2197;
frost$core$Int _2199;
frost$collections$Array* _2203;
frost$collections$Iterable* _2204;
$fn138 _2205;
frost$collections$Iterator* _2206;
$fn139 _2208;
frost$core$Bit _2209;
bool _2210;
$fn140 _2213;
frost$core$Object* _2214;
frost$io$File* _2215;
frost$core$Object* _2216;
frost$io$File* _2218;
frost$core$Object* _2219;
org$frostlang$frostc$Compiler* _2223;
frost$io$File* _2224;
frost$collections$ListView* _2225;
frost$collections$Iterable* _2226;
$fn141 _2227;
frost$collections$Iterator* _2228;
$fn142 _2230;
frost$core$Bit _2231;
bool _2232;
$fn143 _2235;
frost$core$Object* _2236;
org$frostlang$frostc$ClassDecl* _2237;
frost$core$Object* _2238;
org$frostlang$frostc$ClassDecl* _2240;
frost$core$Object* _2241;
org$frostlang$frostc$Compiler* _2245;
org$frostlang$frostc$ClassDecl* _2246;
frost$core$Bit _2249;
frost$core$Bit* _2250;
frost$collections$Array** _2253;
frost$collections$Array* _2254;
frost$collections$Iterable* _2255;
$fn144 _2256;
frost$collections$Iterator* _2257;
$fn145 _2259;
frost$core$Bit _2260;
bool _2261;
$fn146 _2264;
frost$core$Object* _2265;
org$frostlang$frostc$ClassDecl* _2266;
frost$core$Object* _2267;
org$frostlang$frostc$ClassDecl* _2269;
frost$core$Object* _2270;
org$frostlang$frostc$ClassDecl* _2274;
frost$core$Bit _2277;
frost$core$Bit* _2278;
frost$collections$Array** _2281;
frost$collections$Array* _2282;
frost$collections$Iterable* _2283;
$fn147 _2284;
frost$collections$Iterator* _2285;
$fn148 _2287;
frost$core$Bit _2288;
bool _2289;
$fn149 _2292;
frost$core$Object* _2293;
org$frostlang$frostc$ClassDecl* _2294;
frost$core$Object* _2295;
org$frostlang$frostc$ClassDecl* _2297;
frost$core$Object* _2298;
org$frostlang$frostc$ClassDecl* _2302;
frost$core$Object* _2304;
org$frostlang$frostc$ClassDecl* _2306;
frost$core$Object* _2307;
frost$core$Object* _2311;
frost$core$Object* _2314;
org$frostlang$frostc$ClassDecl* _2316;
frost$core$Object* _2317;
frost$core$Object* _2321;
frost$core$Object* _2324;
org$frostlang$frostc$ClassDecl* _2326;
frost$core$Object* _2327;
frost$core$Object* _2331;
frost$core$Object* _2333;
frost$core$Object* _2335;
frost$io$File* _2337;
frost$core$Object* _2338;
frost$core$Object* _2342;
frost$collections$Array* _2345;
frost$collections$Iterable* _2346;
$fn150 _2347;
frost$collections$Iterator* _2348;
$fn151 _2350;
frost$core$Bit _2351;
bool _2352;
$fn152 _2355;
frost$core$Object* _2356;
frost$io$File* _2357;
frost$core$Object* _2358;
frost$io$File* _2360;
frost$core$Object* _2361;
org$frostlang$frostc$Compiler* _2365;
frost$io$File* _2366;
frost$core$Object* _2368;
frost$io$File* _2370;
frost$core$Object* _2371;
frost$core$Object* _2375;
org$frostlang$frostc$Main$Format$nullable _2378;
bool _2379;
frost$core$Bit _2380;
bool _2381;
frost$core$Int _2383;
frost$core$Equatable* _2386;
frost$core$Int _2387;
frost$core$Int* _2390;
org$frostlang$frostc$Main$Format _2392;
org$frostlang$frostc$Main$Format _2395;
frost$core$Equatable* _2396;
$fn153 _2397;
frost$core$Bit _2398;
bool _2399;
frost$core$Object* _2400;
frost$core$Object* _2402;
org$frostlang$frostc$CodeGenerator* _2406;
org$frostlang$frostc$Interpreter* _2407;
$fn154 _2408;
org$frostlang$frostc$Compiler* _2411;
frost$core$Object* _2412;
frost$threads$MessageQueue* _2415;
frost$core$Object* _2416;
org$frostlang$frostc$CodeGenerator* _2419;
frost$core$Object* _2420;
org$frostlang$frostc$Compiler$Settings* _2423;
frost$core$Object* _2424;
frost$io$File* _2427;
frost$core$Object* _2428;
frost$core$String* _2431;
frost$core$Object* _2432;
frost$io$File* _2435;
frost$core$Object* _2436;
frost$collections$Array* _2439;
frost$core$Object* _2440;
frost$collections$Array* _2443;
frost$core$Object* _2444;
frost$collections$Array* _2447;
frost$core$Object* _2448;
frost$collections$Array* _2451;
frost$core$Object* _2452;
org$frostlang$frostc$Main$Arguments* _2455;
frost$core$Object* _2456;
org$frostlang$frostc$Compiler* _2461;
frost$collections$Array** _2465;
frost$collections$Array* _2466;
frost$collections$CollectionView* _2467;
$fn155 _2468;
frost$core$Int _2469;
frost$core$Int _2470;
int64_t _2471;
int64_t _2472;
bool _2473;
frost$core$Bit _2474;
bool _2475;
frost$collections$Array** _2478;
frost$collections$Array* _2479;
frost$collections$Array** _2480;
frost$collections$Array* _2481;
frost$collections$CollectionView* _2482;
$fn156 _2483;
frost$core$Int _2484;
frost$core$Int _2485;
int64_t _2486;
int64_t _2487;
int64_t _2488;
frost$core$Int _2489;
frost$core$Object* _2490;
org$frostlang$frostc$ClassDecl* _2491;
frost$core$Object* _2493;
org$frostlang$frostc$ClassDecl* _2495;
frost$core$Object* _2496;
frost$core$Object* _2499;
org$frostlang$frostc$ClassDecl* _2502;
org$frostlang$frostc$ClassDecl* _2504;
frost$core$Object* _2505;
org$frostlang$frostc$CodeGenerator** _2510;
org$frostlang$frostc$CodeGenerator* _2511;
bool _2512;
frost$core$Bit _2513;
bool _2514;
frost$core$Int _2516;
org$frostlang$frostc$CodeGenerator* _2519;
$fn157 _2520;
frost$threads$MessageQueue* _2525;
frost$threads$ScopedLock* _2530;
frost$threads$Lock** _2531;
frost$threads$Lock* _2532;
frost$core$Object* _2535;
frost$threads$ScopedLock* _2537;
frost$core$Object* _2538;
frost$core$Object* _2541;
frost$core$Int* _2544;
frost$core$Int _2545;
frost$threads$ScopedLock* _2546;
frost$core$Object* _2547;
frost$core$Int _2551;
int64_t _2552;
int64_t _2553;
bool _2554;
frost$core$Bit _2555;
bool _2557;
frost$threads$MessageQueue* _2560;
frost$core$Immutable* _2561;
org$frostlang$frostc$Compiler$Message* _2562;
frost$core$Object* _2564;
org$frostlang$frostc$Compiler$Message* _2566;
frost$core$Object* _2567;
frost$core$Object* _2570;
org$frostlang$frostc$Compiler$Message* _2573;
frost$core$Int* _2574;
frost$core$Int _2575;
frost$core$Int _2576;
int64_t _2579;
int64_t _2580;
bool _2581;
frost$core$Bit _2582;
bool _2584;
frost$core$String** _2586;
frost$core$String* _2587;
frost$core$Object* _2589;
frost$core$String* _2591;
frost$core$Object* _2592;
frost$core$Int* _2595;
frost$core$Int _2596;
frost$core$Int* _2598;
frost$core$Int _2599;
frost$core$String** _2601;
frost$core$String* _2602;
frost$core$Object* _2604;
frost$core$String* _2606;
frost$core$Object* _2607;
frost$core$Int _2611;
frost$core$Int _2612;
int64_t _2613;
int64_t _2614;
int64_t _2615;
frost$core$Int _2616;
frost$core$String* _2619;
frost$core$Object* _2622;
frost$core$String* _2625;
frost$core$Int _2626;
frost$core$Object* _2627;
$fn158 _2630;
frost$core$String* _2631;
frost$core$String* _2632;
frost$core$Object* _2633;
frost$core$Object* _2635;
frost$core$Object* _2637;
frost$core$String* _2640;
frost$core$Int _2641;
frost$core$Object* _2642;
$fn159 _2645;
frost$core$String* _2646;
frost$core$String* _2647;
frost$core$Object* _2648;
frost$core$Object* _2650;
frost$core$Object* _2652;
frost$core$String* _2655;
frost$core$String* _2656;
frost$core$String* _2657;
frost$core$String* _2658;
frost$core$Object* _2668;
frost$core$Object* _2670;
frost$core$Object* _2672;
frost$core$Object* _2674;
frost$core$Object* _2676;
frost$core$Object* _2678;
frost$core$Object* _2680;
frost$core$Object* _2682;
frost$core$Object* _2684;
frost$core$Object* _2686;
frost$core$String* _2688;
frost$core$Object* _2689;
frost$core$String* _2692;
frost$core$Object* _2693;
frost$core$Int _2697;
int64_t _2700;
int64_t _2701;
bool _2702;
frost$core$Bit _2703;
bool _2705;
frost$core$String** _2707;
frost$core$String* _2708;
frost$core$Object* _2710;
frost$core$String* _2712;
frost$core$Object* _2713;
frost$core$Int* _2716;
frost$core$Int _2717;
frost$core$Int* _2719;
frost$core$Int _2720;
frost$core$String** _2722;
frost$core$String* _2723;
frost$core$Object* _2725;
frost$core$String* _2727;
frost$core$Object* _2728;
frost$core$Int _2732;
frost$core$Int _2733;
int64_t _2734;
int64_t _2735;
int64_t _2736;
frost$core$Int _2737;
frost$core$String* _2740;
frost$core$Object* _2743;
frost$core$String* _2746;
frost$core$Int _2747;
frost$core$Object* _2748;
$fn160 _2751;
frost$core$String* _2752;
frost$core$String* _2753;
frost$core$Object* _2754;
frost$core$Object* _2756;
frost$core$Object* _2758;
frost$core$String* _2761;
frost$core$Int _2762;
frost$core$Object* _2763;
$fn161 _2766;
frost$core$String* _2767;
frost$core$String* _2768;
frost$core$Object* _2769;
frost$core$Object* _2771;
frost$core$Object* _2773;
frost$core$String* _2776;
frost$core$String* _2777;
frost$core$String* _2778;
frost$core$String* _2779;
frost$core$Object* _2789;
frost$core$Object* _2791;
frost$core$Object* _2793;
frost$core$Object* _2795;
frost$core$Object* _2797;
frost$core$Object* _2799;
frost$core$Object* _2801;
frost$core$Object* _2803;
frost$core$Object* _2805;
frost$core$Object* _2807;
frost$core$String* _2809;
frost$core$Object* _2810;
frost$core$String* _2813;
frost$core$Object* _2814;
org$frostlang$frostc$Compiler$Message* _2818;
frost$core$Object* _2819;
org$frostlang$frostc$Compiler* _2823;
frost$core$Object* _2824;
frost$threads$MessageQueue* _2827;
frost$core$Object* _2828;
org$frostlang$frostc$CodeGenerator* _2831;
frost$core$Object* _2832;
frost$core$Int _2836;
frost$core$Int _2837;
int64_t _2840;
int64_t _2841;
bool _2842;
frost$core$Bit _2843;
bool _2845;
frost$core$Int _2859;
frost$core$Int _2860;
int64_t _2861;
int64_t _2862;
bool _2863;
frost$core$Bit _2864;
bool _2865;
frost$core$Int _2868;
frost$core$String* _2869;
frost$core$String* _2870;
frost$core$Object* _2880;
frost$core$Object* _2882;
frost$core$Int _2887;
frost$core$Int _2888;
int64_t _2891;
int64_t _2892;
bool _2893;
frost$core$Bit _2894;
bool _2896;
org$frostlang$frostc$Main$Format$nullable _2899;
bool _2900;
frost$core$Bit _2901;
bool _2902;
frost$core$Int _2904;
org$frostlang$frostc$Main$Format _2907;
frost$core$Int _2908;
frost$core$Int _2909;
int64_t _2912;
int64_t _2913;
bool _2914;
frost$core$Bit _2915;
bool _2917;
frost$collections$Array* _2920;
frost$collections$Array* _2921;
frost$io$File* _2922;
bool _2923;
frost$core$Bit _2924;
bool _2925;
frost$core$Int _2927;
frost$io$File* _2930;
frost$io$File* _2935;
frost$core$String** _2936;
frost$core$String* _2937;
frost$core$String* _2938;
frost$core$Object* _2940;
frost$core$String* _2942;
frost$core$Object* _2943;
frost$core$Object* _2946;
frost$core$Object* _2948;
frost$core$String* _2951;
bool _2952;
frost$core$Bit _2953;
bool _2954;
frost$core$Object* _2957;
frost$core$String* _2959;
frost$core$Object* _2960;
frost$core$Object* _2964;
frost$io$File* _2968;
frost$core$String* _2969;
bool _2970;
frost$core$Bit _2971;
bool _2972;
frost$core$Int _2974;
frost$core$String* _2977;
frost$io$File* _2979;
frost$core$Object* _2980;
frost$core$Object* _2982;
frost$core$String* _2984;
frost$core$Object* _2985;
frost$core$Object* _2989;
frost$io$File* _2992;
bool _2993;
frost$core$Bit _2994;
bool _2995;
frost$core$Int _2997;
frost$io$File* _3000;
frost$core$String* _3003;
frost$core$Object* _3005;
frost$core$String* _3007;
frost$core$Object* _3008;
frost$core$Object* _3011;
frost$core$String* _3014;
frost$core$String$Index$nullable _3015;
frost$core$String$Index$nullable _3018;
bool _3019;
frost$core$Bit _3020;
bool _3021;
frost$core$String* _3024;
frost$core$Object* _3025;
frost$core$String* _3027;
frost$core$Object* _3028;
frost$core$Object* _3032;
frost$core$String* _3036;
frost$core$String$Index$nullable _3037;
frost$core$Bit _3038;
frost$core$Range$LTfrost$core$String$Index$Q$GT _3039;
frost$core$String* _3040;
frost$core$Object* _3041;
frost$core$Object* _3043;
frost$core$String* _3045;
frost$core$Object* _3046;
frost$core$Object* _3050;
frost$core$String* _3053;
frost$core$String* _3054;
frost$io$File* _3055;
frost$core$Object* _3056;
frost$core$Object* _3058;
frost$core$Object* _3060;
frost$core$Object* _3062;
frost$core$String* _3064;
frost$core$Object* _3065;
frost$core$Object* _3068;
frost$io$File* _3070;
frost$core$Object* _3071;
frost$io$File* _3075;
bool _3076;
frost$core$Bit _3077;
bool _3078;
frost$core$Int _3080;
frost$io$File* _3083;
frost$core$Bit _3084;
org$frostlang$frostc$Compiler$Settings* _3085;
frost$io$File* _3086;
frost$core$Object* _3087;
frost$core$Object* _3089;
frost$core$Int _3092;
int64_t _3095;
int64_t _3096;
bool _3097;
frost$core$Bit _3098;
bool _3100;
frost$io$File* _3103;
bool _3104;
frost$core$Bit _3105;
bool _3106;
frost$core$Int _3108;
frost$io$File* _3111;
frost$io$File* _3116;
frost$core$String** _3117;
frost$core$String* _3118;
frost$core$String* _3119;
frost$core$Object* _3121;
frost$core$String* _3123;
frost$core$Object* _3124;
frost$core$Object* _3127;
frost$core$Object* _3129;
frost$core$String* _3132;
bool _3133;
frost$core$Bit _3134;
bool _3135;
frost$core$Object* _3138;
frost$core$String* _3140;
frost$core$Object* _3141;
frost$core$Object* _3145;
frost$io$File* _3149;
frost$core$String* _3150;
bool _3151;
frost$core$Bit _3152;
bool _3153;
frost$core$Int _3155;
frost$core$String* _3158;
frost$io$File* _3160;
frost$core$Object* _3161;
frost$core$Object* _3163;
frost$core$String* _3165;
frost$core$Object* _3166;
frost$core$Object* _3170;
frost$io$File* _3173;
bool _3174;
frost$core$Bit _3175;
bool _3176;
frost$core$Int _3178;
frost$io$File* _3181;
frost$core$String* _3184;
frost$core$Object* _3186;
frost$core$String* _3188;
frost$core$Object* _3189;
frost$core$Object* _3192;
frost$core$String* _3195;
frost$core$String$Index$nullable _3196;
frost$core$String$Index$nullable _3199;
bool _3200;
frost$core$Bit _3201;
bool _3202;
frost$core$String* _3205;
frost$core$Object* _3206;
frost$core$String* _3208;
frost$core$Object* _3209;
frost$core$Object* _3213;
frost$core$String* _3217;
frost$core$String$Index$nullable _3218;
frost$core$Bit _3219;
frost$core$Range$LTfrost$core$String$Index$Q$GT _3220;
frost$core$String* _3221;
frost$core$Object* _3222;
frost$core$Object* _3224;
frost$core$String* _3226;
frost$core$Object* _3227;
frost$core$Object* _3231;
frost$core$String* _3234;
frost$core$String* _3235;
frost$io$File* _3236;
frost$core$Object* _3237;
frost$core$Object* _3239;
frost$core$Object* _3241;
frost$core$Object* _3243;
frost$core$String* _3245;
frost$core$Object* _3246;
frost$core$Object* _3249;
frost$io$File* _3251;
frost$core$Object* _3252;
frost$io$File* _3256;
bool _3257;
frost$core$Bit _3258;
bool _3259;
frost$core$Int _3261;
frost$io$File* _3264;
frost$core$Bit _3265;
org$frostlang$frostc$Compiler$Settings* _3266;
frost$io$File* _3267;
frost$core$Object* _3268;
frost$core$Object* _3270;
org$frostlang$frostc$Compiler$Settings* _3323;
frost$core$Object* _3324;
frost$io$File* _3327;
frost$core$Object* _3328;
frost$core$String* _3331;
frost$core$Object* _3332;
frost$io$File* _3335;
frost$core$Object* _3336;
frost$collections$Array* _3339;
frost$core$Object* _3340;
frost$collections$Array* _3343;
frost$core$Object* _3344;
frost$collections$Array* _3347;
frost$core$Object* _3348;
frost$collections$Array* _3351;
frost$core$Object* _3352;
org$frostlang$frostc$Main$Arguments* _3355;
frost$core$Object* _3356;
frost$core$Int _3276;
frost$core$Int _3277;
int64_t _3280;
int64_t _3281;
bool _3282;
frost$core$Bit _3283;
bool _3285;
frost$core$Int _3300;
frost$core$String* _3301;
frost$core$String* _3302;
frost$core$Object* _3312;
frost$core$Object* _3314;
frost$core$Int _3318;
frost$core$Int _3320;
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
_1298 = _1297.value;
_1299 = frost$core$Int64$init$frost$core$Int(_1274);
_1300 = _1299.value;
_1301 = ((frost$core$Object**)_1298)[_1300];
_1302 = _1301;
frost$core$Frost$ref$frost$core$Object$Q(_1302);
_1305 = ((frost$io$File*) _1301);
_1306 = *(&local51);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:318:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:184
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:184:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_1311 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1305, &$s296);
_1312 = &_1311->path;
_1313 = *_1312;
_1314 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_1313);
*(&local53) = ((frost$core$String*) NULL);
_1316 = ((frost$core$Object*) _1314);
frost$core$Frost$ref$frost$core$Object$Q(_1316);
_1318 = *(&local53);
_1319 = ((frost$core$Object*) _1318);
frost$core$Frost$unref$frost$core$Object$Q(_1319);
*(&local53) = _1314;
_1322 = ((frost$core$Object*) _1314);
frost$core$Frost$unref$frost$core$Object$Q(_1322);
_1324 = ((frost$core$Object*) _1311);
frost$core$Frost$unref$frost$core$Object$Q(_1324);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_1327 = *(&local53);
_1328 = _1327 == NULL;
_1329 = (frost$core$Bit) {_1328};
_1330 = _1329.value;
if (_1330) goto block175; else goto block176;
block175:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_1333 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1333);
_1335 = *(&local53);
_1336 = ((frost$core$Object*) _1335);
frost$core$Frost$unref$frost$core$Object$Q(_1336);
*(&local53) = ((frost$core$String*) NULL);
*(&local52) = ((frost$io$File*) NULL);
_1340 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1340);
goto block174;
block176:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_1344 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_1345 = *(&local53);
_1346 = _1345 != NULL;
_1347 = (frost$core$Bit) {_1346};
_1348 = _1347.value;
if (_1348) goto block177; else goto block178;
block178:;
_1350 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s297, _1350, &$s298);
abort(); // unreachable
block177:;
_1353 = _1345;
frost$io$File$init$frost$core$String(_1344, _1353);
_1355 = _1344;
_1356 = ((frost$core$Object*) _1355);
frost$core$Frost$ref$frost$core$Object$Q(_1356);
_1358 = ((frost$core$Object*) _1344);
frost$core$Frost$unref$frost$core$Object$Q(_1358);
_1360 = *(&local53);
_1361 = ((frost$core$Object*) _1360);
frost$core$Frost$unref$frost$core$Object$Q(_1361);
*(&local53) = ((frost$core$String*) NULL);
*(&local52) = _1355;
_1365 = ((frost$core$Object*) _1355);
frost$core$Frost$ref$frost$core$Object$Q(_1365);
goto block174;
block174:;
_1368 = *(&local52);
_1369 = _1368 != NULL;
_1370 = (frost$core$Bit) {_1369};
_1371 = _1370.value;
if (_1371) goto block179; else goto block180;
block180:;
_1373 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s299, _1373, &$s300);
abort(); // unreachable
block179:;
_1376 = _1368;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:184:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
_1379 = frost$io$File$get_name$R$frost$core$String(_1305);
*(&local55) = ((frost$core$String*) NULL);
_1381 = ((frost$core$Object*) _1379);
frost$core$Frost$ref$frost$core$Object$Q(_1381);
_1383 = *(&local55);
_1384 = ((frost$core$Object*) _1383);
frost$core$Frost$unref$frost$core$Object$Q(_1384);
*(&local55) = _1379;
_1387 = ((frost$core$Object*) _1379);
frost$core$Frost$unref$frost$core$Object$Q(_1387);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_1390 = *(&local55);
_1391 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_1390, &$s301);
*(&local56) = _1391;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_1394 = *(&local56);
_1395 = !_1394.nonnull;
_1396 = (frost$core$Bit) {_1395};
_1397 = _1396.value;
if (_1397) goto block182; else goto block183;
block182:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_1400 = *(&local55);
_1401 = ((frost$core$Object*) _1400);
frost$core$Frost$ref$frost$core$Object$Q(_1401);
_1403 = *(&local55);
_1404 = ((frost$core$Object*) _1403);
frost$core$Frost$unref$frost$core$Object$Q(_1404);
*(&local55) = ((frost$core$String*) NULL);
*(&local54) = _1400;
_1408 = ((frost$core$Object*) _1400);
frost$core$Frost$ref$frost$core$Object$Q(_1408);
goto block181;
block183:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_1412 = *(&local55);
_1413 = *(&local56);
_1414 = (frost$core$Bit) {false};
_1415 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _1413, _1414);
_1416 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_1412, _1415);
_1417 = ((frost$core$Object*) _1416);
frost$core$Frost$ref$frost$core$Object$Q(_1417);
_1419 = ((frost$core$Object*) _1416);
frost$core$Frost$unref$frost$core$Object$Q(_1419);
_1421 = *(&local55);
_1422 = ((frost$core$Object*) _1421);
frost$core$Frost$unref$frost$core$Object$Q(_1422);
*(&local55) = ((frost$core$String*) NULL);
*(&local54) = _1416;
_1426 = ((frost$core$Object*) _1416);
frost$core$Frost$ref$frost$core$Object$Q(_1426);
goto block181;
block181:;
_1429 = *(&local54);
_1430 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1429, _1306);
_1431 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1376, _1430);
_1432 = ((frost$core$Object*) _1431);
frost$core$Frost$ref$frost$core$Object$Q(_1432);
_1434 = ((frost$core$Object*) _1431);
frost$core$Frost$unref$frost$core$Object$Q(_1434);
_1436 = ((frost$core$Object*) _1430);
frost$core$Frost$unref$frost$core$Object$Q(_1436);
_1438 = ((frost$core$Object*) _1429);
frost$core$Frost$unref$frost$core$Object$Q(_1438);
_1440 = *(&local54);
_1441 = ((frost$core$Object*) _1440);
frost$core$Frost$unref$frost$core$Object$Q(_1441);
*(&local54) = ((frost$core$String*) NULL);
_1444 = ((frost$core$Object*) _1368);
frost$core$Frost$unref$frost$core$Object$Q(_1444);
_1446 = *(&local52);
_1447 = ((frost$core$Object*) _1446);
frost$core$Frost$unref$frost$core$Object$Q(_1447);
*(&local52) = ((frost$io$File*) NULL);
_1451 = _1431;
_1452 = ((frost$core$Object*) _1451);
frost$core$Frost$ref$frost$core$Object$Q(_1452);
_1454 = *(&local5);
_1455 = ((frost$core$Object*) _1454);
frost$core$Frost$unref$frost$core$Object$Q(_1455);
*(&local5) = _1451;
_1458 = ((frost$core$Object*) _1431);
frost$core$Frost$unref$frost$core$Object$Q(_1458);
_1460 = _1301;
frost$core$Frost$unref$frost$core$Object$Q(_1460);
_1462 = *(&local51);
_1463 = ((frost$core$Object*) _1462);
frost$core$Frost$unref$frost$core$Object$Q(_1463);
*(&local51) = ((frost$core$String*) NULL);
goto block140;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:320
_1468 = *(&local8);
_1469 = _1468.nonnull;
_1470 = (frost$core$Bit) {_1469};
_1471 = _1470.value;
if (_1471) goto block187; else goto block188;
block188:;
_1473 = (frost$core$Int) {320u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s302, _1473, &$s303);
abort(); // unreachable
block187:;
frost$core$Equatable* $tmp304;
if (_1468.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp305;
    $tmp305 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp305->value = ((org$frostlang$frostc$Main$Format) _1468.value);
    $tmp304 = ((frost$core$Equatable*) $tmp305);
}
else {
    $tmp304 = NULL;
}
_1476 = $tmp304;
_1477 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:320:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_1480 = &(&local58)->$rawValue;
*_1480 = _1477;
_1482 = *(&local58);
*(&local57) = _1482;
_1485 = *(&local57);
org$frostlang$frostc$Main$Format$wrapper* $tmp306;
$tmp306 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp306->value = _1485;
_1486 = ((frost$core$Equatable*) $tmp306);
ITable* $tmp307 = _1476->$class->itable;
while ($tmp307->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp307 = $tmp307->next;
}
_1487 = $tmp307->methods[0];
_1488 = _1487(_1476, _1486);
_1489 = _1488.value;
_1490 = ((frost$core$Object*) _1486);
frost$core$Frost$unref$frost$core$Object$Q(_1490);
_1492 = ((frost$core$Object*) _1476);
frost$core$Frost$unref$frost$core$Object$Q(_1492);
if (_1489) goto block184; else goto block186;
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
_1506 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1506);
_1508 = (frost$core$Int) {322u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s310, _1508, &$s311);
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
_1523 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1523);
_1525 = (frost$core$Int) {327u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s314, _1525, &$s315);
abort(); // unreachable
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:330
_1531 = (frost$core$Int) {0u};
*(&local59) = _1531;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:331
_1534 = (frost$core$Int) {0u};
*(&local60) = _1534;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:332
_1537 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Settings), (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
_1538 = &param0->frostHome;
_1539 = *_1538;
_1540 = *(&local2);
_1541 = ((frost$collections$ListView*) _1540);
_1542 = *(&local6);
_1543 = *(&local7);
_1544 = *(&local11);
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int$frost$core$Int$frost$core$Bit(_1537, _1539, _1541, _1542, _1543, _1544);
*(&local61) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_1547 = ((frost$core$Object*) _1537);
frost$core$Frost$ref$frost$core$Object$Q(_1547);
_1549 = *(&local61);
_1550 = ((frost$core$Object*) _1549);
frost$core$Frost$unref$frost$core$Object$Q(_1550);
*(&local61) = _1537;
_1553 = ((frost$core$Object*) _1537);
frost$core$Frost$unref$frost$core$Object$Q(_1553);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:335
*(&local62) = ((org$frostlang$frostc$CodeGenerator*) NULL);
_1558 = ((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1558);
_1560 = *(&local62);
_1561 = ((frost$core$Object*) _1560);
frost$core$Frost$unref$frost$core$Object$Q(_1561);
*(&local62) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:336
_1565 = *(&local8);
_1566 = _1565.nonnull;
_1567 = (frost$core$Bit) {_1566};
_1568 = _1567.value;
if (_1568) goto block194; else goto block195;
block195:;
_1570 = (frost$core$Int) {336u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s316, _1570, &$s317);
abort(); // unreachable
block194:;
_1573 = ((org$frostlang$frostc$Main$Format) _1565.value);
_1574 = _1573.$rawValue;
_1575 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:337:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1578 = _1574.value;
_1579 = _1575.value;
_1580 = _1578 == _1579;
_1581 = (frost$core$Bit) {_1580};
_1583 = _1581.value;
if (_1583) goto block197; else goto block198;
block198:;
_1585 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:337:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1588 = _1574.value;
_1589 = _1585.value;
_1590 = _1588 == _1589;
_1591 = (frost$core$Bit) {_1590};
_1593 = _1591.value;
if (_1593) goto block197; else goto block200;
block200:;
_1595 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:337:60
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1598 = _1574.value;
_1599 = _1595.value;
_1600 = _1598 == _1599;
_1601 = (frost$core$Bit) {_1600};
_1603 = _1601.value;
if (_1603) goto block197; else goto block202;
block197:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:338
*(&local63) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:339
_1608 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(sizeof(org$frostlang$frostc$LLVMCodeGenerator), (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
_1609 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
_1610 = *(&local5);
_1611 = _1610 != NULL;
_1612 = (frost$core$Bit) {_1611};
_1613 = _1612.value;
if (_1613) goto block206; else goto block207;
block207:;
_1615 = (frost$core$Int) {340u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s318, _1615, &$s319);
abort(); // unreachable
block206:;
_1618 = _1610;
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:340:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:184
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:184:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_1623 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1618, &$s320);
_1624 = &_1623->path;
_1625 = *_1624;
_1626 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_1625);
*(&local65) = ((frost$core$String*) NULL);
_1628 = ((frost$core$Object*) _1626);
frost$core$Frost$ref$frost$core$Object$Q(_1628);
_1630 = *(&local65);
_1631 = ((frost$core$Object*) _1630);
frost$core$Frost$unref$frost$core$Object$Q(_1631);
*(&local65) = _1626;
_1634 = ((frost$core$Object*) _1626);
frost$core$Frost$unref$frost$core$Object$Q(_1634);
_1636 = ((frost$core$Object*) _1623);
frost$core$Frost$unref$frost$core$Object$Q(_1636);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_1639 = *(&local65);
_1640 = _1639 == NULL;
_1641 = (frost$core$Bit) {_1640};
_1642 = _1641.value;
if (_1642) goto block210; else goto block211;
block210:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_1645 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1645);
_1647 = *(&local65);
_1648 = ((frost$core$Object*) _1647);
frost$core$Frost$unref$frost$core$Object$Q(_1648);
*(&local65) = ((frost$core$String*) NULL);
*(&local64) = ((frost$io$File*) NULL);
_1652 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1652);
goto block209;
block211:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_1656 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_1657 = *(&local65);
_1658 = _1657 != NULL;
_1659 = (frost$core$Bit) {_1658};
_1660 = _1659.value;
if (_1660) goto block212; else goto block213;
block213:;
_1662 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s321, _1662, &$s322);
abort(); // unreachable
block212:;
_1665 = _1657;
frost$io$File$init$frost$core$String(_1656, _1665);
_1667 = _1656;
_1668 = ((frost$core$Object*) _1667);
frost$core$Frost$ref$frost$core$Object$Q(_1668);
_1670 = ((frost$core$Object*) _1656);
frost$core$Frost$unref$frost$core$Object$Q(_1670);
_1672 = *(&local65);
_1673 = ((frost$core$Object*) _1672);
frost$core$Frost$unref$frost$core$Object$Q(_1673);
*(&local65) = ((frost$core$String*) NULL);
*(&local64) = _1667;
_1677 = ((frost$core$Object*) _1667);
frost$core$Frost$ref$frost$core$Object$Q(_1677);
goto block209;
block209:;
_1680 = *(&local64);
_1681 = _1680 != NULL;
_1682 = (frost$core$Bit) {_1681};
_1683 = _1682.value;
if (_1683) goto block214; else goto block215;
block215:;
_1685 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s323, _1685, &$s324);
abort(); // unreachable
block214:;
_1688 = _1680;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:184:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
_1691 = frost$io$File$get_name$R$frost$core$String(_1618);
*(&local67) = ((frost$core$String*) NULL);
_1693 = ((frost$core$Object*) _1691);
frost$core$Frost$ref$frost$core$Object$Q(_1693);
_1695 = *(&local67);
_1696 = ((frost$core$Object*) _1695);
frost$core$Frost$unref$frost$core$Object$Q(_1696);
*(&local67) = _1691;
_1699 = ((frost$core$Object*) _1691);
frost$core$Frost$unref$frost$core$Object$Q(_1699);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_1702 = *(&local67);
_1703 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_1702, &$s325);
*(&local68) = _1703;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_1706 = *(&local68);
_1707 = !_1706.nonnull;
_1708 = (frost$core$Bit) {_1707};
_1709 = _1708.value;
if (_1709) goto block217; else goto block218;
block217:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_1712 = *(&local67);
_1713 = ((frost$core$Object*) _1712);
frost$core$Frost$ref$frost$core$Object$Q(_1713);
_1715 = *(&local67);
_1716 = ((frost$core$Object*) _1715);
frost$core$Frost$unref$frost$core$Object$Q(_1716);
*(&local67) = ((frost$core$String*) NULL);
*(&local66) = _1712;
_1720 = ((frost$core$Object*) _1712);
frost$core$Frost$ref$frost$core$Object$Q(_1720);
goto block216;
block218:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_1724 = *(&local67);
_1725 = *(&local68);
_1726 = (frost$core$Bit) {false};
_1727 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _1725, _1726);
_1728 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_1724, _1727);
_1729 = ((frost$core$Object*) _1728);
frost$core$Frost$ref$frost$core$Object$Q(_1729);
_1731 = ((frost$core$Object*) _1728);
frost$core$Frost$unref$frost$core$Object$Q(_1731);
_1733 = *(&local67);
_1734 = ((frost$core$Object*) _1733);
frost$core$Frost$unref$frost$core$Object$Q(_1734);
*(&local67) = ((frost$core$String*) NULL);
*(&local66) = _1728;
_1738 = ((frost$core$Object*) _1728);
frost$core$Frost$ref$frost$core$Object$Q(_1738);
goto block216;
block216:;
_1741 = *(&local66);
_1742 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1741, &$s326);
_1743 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1688, _1742);
_1744 = ((frost$core$Object*) _1743);
frost$core$Frost$ref$frost$core$Object$Q(_1744);
_1746 = ((frost$core$Object*) _1743);
frost$core$Frost$unref$frost$core$Object$Q(_1746);
_1748 = ((frost$core$Object*) _1742);
frost$core$Frost$unref$frost$core$Object$Q(_1748);
_1750 = ((frost$core$Object*) _1741);
frost$core$Frost$unref$frost$core$Object$Q(_1750);
_1752 = *(&local66);
_1753 = ((frost$core$Object*) _1752);
frost$core$Frost$unref$frost$core$Object$Q(_1753);
*(&local66) = ((frost$core$String*) NULL);
_1756 = ((frost$core$Object*) _1680);
frost$core$Frost$unref$frost$core$Object$Q(_1756);
_1758 = *(&local64);
_1759 = ((frost$core$Object*) _1758);
frost$core$Frost$unref$frost$core$Object$Q(_1759);
*(&local64) = ((frost$io$File*) NULL);
_1763 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(_1743);
_1764 = &_1763->$rawValue;
_1765 = *_1764;
_1766 = _1765.value;
_1767 = _1766 == 0u;
if (_1767) goto block219; else goto block220;
block220:;
_1769 = &_1763->$data.$ERROR.field0;
_1770 = *_1769;
_1771 = ((frost$core$Object*) _1770);
frost$core$Frost$ref$frost$core$Object$Q(_1771);
*(&local63) = _1770;
_1774 = ((frost$core$Object*) _1763);
frost$core$Frost$unref$frost$core$Object$Q(_1774);
_1776 = ((frost$core$Object*) _1743);
frost$core$Frost$unref$frost$core$Object$Q(_1776);
_1778 = ((frost$core$Object*) _1609);
frost$core$Frost$unref$frost$core$Object$Q(_1778);
_1780 = ((frost$core$Object*) _1608);
frost$core$Frost$unref$frost$core$Object$Q(_1780);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:343
_1804 = *(&local63);
_1805 = ((frost$core$Object*) _1804);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:343:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_1808 = ($fn327) _1805->$class->vtable[0];
_1809 = _1808(_1805);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_1809);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_1816 = ((frost$core$Object*) _1809);
frost$core$Frost$unref$frost$core$Object$Q(_1816);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:344
_1820 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1820);
_1822 = (frost$core$Int) {344u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s328, _1822, &$s329);
abort(); // unreachable
block219:;
_1783 = &_1763->$data.$SUCCESS.field0;
_1784 = *_1783;
_1785 = ((frost$io$OutputStream*) _1784);
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream(_1608, _1609, _1785);
_1787 = ((org$frostlang$frostc$CodeGenerator*) _1608);
_1788 = ((frost$core$Object*) _1787);
frost$core$Frost$ref$frost$core$Object$Q(_1788);
_1790 = *(&local62);
_1791 = ((frost$core$Object*) _1790);
frost$core$Frost$unref$frost$core$Object$Q(_1791);
*(&local62) = _1787;
_1794 = ((frost$core$Object*) _1763);
frost$core$Frost$unref$frost$core$Object$Q(_1794);
_1796 = ((frost$core$Object*) _1743);
frost$core$Frost$unref$frost$core$Object$Q(_1796);
_1798 = ((frost$core$Object*) _1609);
frost$core$Frost$unref$frost$core$Object$Q(_1798);
_1800 = ((frost$core$Object*) _1608);
frost$core$Frost$unref$frost$core$Object$Q(_1800);
_1825 = *(&local63);
_1826 = ((frost$core$Object*) _1825);
frost$core$Frost$unref$frost$core$Object$Q(_1826);
*(&local63) = ((frost$core$Error*) NULL);
goto block196;
block202:;
_1830 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:347:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1833 = _1574.value;
_1834 = _1830.value;
_1835 = _1833 == _1834;
_1836 = (frost$core$Bit) {_1835};
_1838 = _1836.value;
if (_1838) goto block223; else goto block224;
block223:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:348
_1841 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(sizeof(org$frostlang$frostc$HCodeGenerator), (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
_1842 = *(&local5);
_1843 = _1842 != NULL;
_1844 = (frost$core$Bit) {_1843};
_1845 = _1844.value;
if (_1845) goto block226; else goto block227;
block227:;
_1847 = (frost$core$Int) {348u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s330, _1847, &$s331);
abort(); // unreachable
block226:;
_1850 = _1842;
org$frostlang$frostc$HCodeGenerator$init$frost$io$File(_1841, _1850);
_1852 = ((org$frostlang$frostc$CodeGenerator*) _1841);
_1853 = ((frost$core$Object*) _1852);
frost$core$Frost$ref$frost$core$Object$Q(_1853);
_1855 = *(&local62);
_1856 = ((frost$core$Object*) _1855);
frost$core$Frost$unref$frost$core$Object$Q(_1856);
*(&local62) = _1852;
_1859 = ((frost$core$Object*) _1841);
frost$core$Frost$unref$frost$core$Object$Q(_1859);
goto block196;
block224:;
_1862 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:350:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1865 = _1574.value;
_1866 = _1862.value;
_1867 = _1865 == _1866;
_1868 = (frost$core$Bit) {_1867};
_1870 = _1868.value;
if (_1870) goto block228; else goto block229;
block228:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:351
_1873 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(sizeof(org$frostlang$frostc$CCodeGenerator), (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
_1874 = *(&local5);
_1875 = _1874 != NULL;
_1876 = (frost$core$Bit) {_1875};
_1877 = _1876.value;
if (_1877) goto block231; else goto block232;
block232:;
_1879 = (frost$core$Int) {351u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s332, _1879, &$s333);
abort(); // unreachable
block231:;
_1882 = _1874;
org$frostlang$frostc$CCodeGenerator$init$frost$io$File(_1873, _1882);
_1884 = ((org$frostlang$frostc$CodeGenerator*) _1873);
_1885 = ((frost$core$Object*) _1884);
frost$core$Frost$ref$frost$core$Object$Q(_1885);
_1887 = *(&local62);
_1888 = ((frost$core$Object*) _1887);
frost$core$Frost$unref$frost$core$Object$Q(_1888);
*(&local62) = _1884;
_1891 = ((frost$core$Object*) _1873);
frost$core$Frost$unref$frost$core$Object$Q(_1891);
goto block196;
block229:;
_1894 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:353:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1897 = _1574.value;
_1898 = _1894.value;
_1899 = _1897 == _1898;
_1900 = (frost$core$Bit) {_1899};
_1902 = _1900.value;
if (_1902) goto block233; else goto block234;
block233:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:354
*(&local69) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:355
_1907 = (org$frostlang$frostc$StubCodeGenerator*) frostObjectAlloc(sizeof(org$frostlang$frostc$StubCodeGenerator), (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$class);
_1908 = *(&local5);
_1909 = _1908 != NULL;
_1910 = (frost$core$Bit) {_1909};
_1911 = _1910.value;
if (_1911) goto block238; else goto block239;
block239:;
_1913 = (frost$core$Int) {355u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s334, _1913, &$s335);
abort(); // unreachable
block238:;
_1916 = _1908;
_1917 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(_1916);
_1918 = &_1917->$rawValue;
_1919 = *_1918;
_1920 = _1919.value;
_1921 = _1920 == 0u;
if (_1921) goto block240; else goto block241;
block241:;
_1923 = &_1917->$data.$ERROR.field0;
_1924 = *_1923;
_1925 = ((frost$core$Object*) _1924);
frost$core$Frost$ref$frost$core$Object$Q(_1925);
*(&local69) = _1924;
_1928 = ((frost$core$Object*) _1917);
frost$core$Frost$unref$frost$core$Object$Q(_1928);
_1930 = ((frost$core$Object*) _1907);
frost$core$Frost$unref$frost$core$Object$Q(_1930);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:358
_1950 = *(&local69);
_1951 = ((frost$core$Object*) _1950);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:358:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_1954 = ($fn336) _1951->$class->vtable[0];
_1955 = _1954(_1951);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_1955);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_1962 = ((frost$core$Object*) _1955);
frost$core$Frost$unref$frost$core$Object$Q(_1962);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:359
_1966 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1966);
_1968 = (frost$core$Int) {359u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s337, _1968, &$s338);
abort(); // unreachable
block240:;
_1933 = &_1917->$data.$SUCCESS.field0;
_1934 = *_1933;
_1935 = ((frost$io$OutputStream*) _1934);
org$frostlang$frostc$StubCodeGenerator$init$frost$io$OutputStream(_1907, _1935);
_1937 = ((org$frostlang$frostc$CodeGenerator*) _1907);
_1938 = ((frost$core$Object*) _1937);
frost$core$Frost$ref$frost$core$Object$Q(_1938);
_1940 = *(&local62);
_1941 = ((frost$core$Object*) _1940);
frost$core$Frost$unref$frost$core$Object$Q(_1941);
*(&local62) = _1937;
_1944 = ((frost$core$Object*) _1917);
frost$core$Frost$unref$frost$core$Object$Q(_1944);
_1946 = ((frost$core$Object*) _1907);
frost$core$Frost$unref$frost$core$Object$Q(_1946);
_1971 = *(&local69);
_1972 = ((frost$core$Object*) _1971);
frost$core$Frost$unref$frost$core$Object$Q(_1972);
*(&local69) = ((frost$core$Error*) NULL);
goto block196;
block234:;
_1976 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:362:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1979 = _1574.value;
_1980 = _1976.value;
_1981 = _1979 == _1980;
_1982 = (frost$core$Bit) {_1981};
_1984 = _1982.value;
if (_1984) goto block244; else goto block196;
block244:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:363
_1987 = (org$frostlang$frostc$Interpreter*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter), (frost$core$Class*) &org$frostlang$frostc$Interpreter$class);
org$frostlang$frostc$Interpreter$init(_1987);
_1989 = ((org$frostlang$frostc$CodeGenerator*) _1987);
_1990 = ((frost$core$Object*) _1989);
frost$core$Frost$ref$frost$core$Object$Q(_1990);
_1992 = *(&local62);
_1993 = ((frost$core$Object*) _1992);
frost$core$Frost$unref$frost$core$Object$Q(_1993);
*(&local62) = _1989;
_1996 = ((frost$core$Object*) _1987);
frost$core$Frost$unref$frost$core$Object$Q(_1996);
goto block196;
block196:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:366
_2000 = (frost$threads$MessageQueue*) frostObjectAlloc(sizeof(frost$threads$MessageQueue), (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init(_2000);
*(&local70) = ((frost$threads$MessageQueue*) NULL);
_2003 = ((frost$core$Object*) _2000);
frost$core$Frost$ref$frost$core$Object$Q(_2003);
_2005 = *(&local70);
_2006 = ((frost$core$Object*) _2005);
frost$core$Frost$unref$frost$core$Object$Q(_2006);
*(&local70) = _2000;
_2009 = ((frost$core$Object*) _2000);
frost$core$Frost$unref$frost$core$Object$Q(_2009);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:367
_2012 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler), (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
_2013 = *(&local70);
_2014 = *(&local62);
_2015 = *(&local61);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT$org$frostlang$frostc$CodeGenerator$Q$org$frostlang$frostc$Compiler$Settings(_2012, _2013, _2014, _2015);
*(&local71) = ((org$frostlang$frostc$Compiler*) NULL);
_2018 = ((frost$core$Object*) _2012);
frost$core$Frost$ref$frost$core$Object$Q(_2018);
_2020 = *(&local71);
_2021 = ((frost$core$Object*) _2020);
frost$core$Frost$unref$frost$core$Object$Q(_2021);
*(&local71) = _2012;
_2024 = ((frost$core$Object*) _2012);
frost$core$Frost$unref$frost$core$Object$Q(_2024);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:368
_2027 = *(&local8);
_2028 = _2027.nonnull;
_2029 = (frost$core$Bit) {_2028};
_2030 = _2029.value;
if (_2030) goto block248; else goto block249;
block249:;
_2032 = (frost$core$Int) {368u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s339, _2032, &$s340);
abort(); // unreachable
block248:;
frost$core$Equatable* $tmp341;
if (_2027.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp342;
    $tmp342 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp342->value = ((org$frostlang$frostc$Main$Format) _2027.value);
    $tmp341 = ((frost$core$Equatable*) $tmp342);
}
else {
    $tmp341 = NULL;
}
_2035 = $tmp341;
_2036 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:368:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_2039 = &(&local73)->$rawValue;
*_2039 = _2036;
_2041 = *(&local73);
*(&local72) = _2041;
_2044 = *(&local72);
org$frostlang$frostc$Main$Format$wrapper* $tmp343;
$tmp343 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp343->value = _2044;
_2045 = ((frost$core$Equatable*) $tmp343);
ITable* $tmp344 = _2035->$class->itable;
while ($tmp344->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp344 = $tmp344->next;
}
_2046 = $tmp344->methods[0];
_2047 = _2046(_2035, _2045);
_2048 = _2047.value;
_2049 = ((frost$core$Object*) _2045);
frost$core$Frost$unref$frost$core$Object$Q(_2049);
_2051 = ((frost$core$Object*) _2035);
frost$core$Frost$unref$frost$core$Object$Q(_2051);
if (_2048) goto block246; else goto block247;
block246:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:369
_2055 = *(&local9);
_2056 = _2055 == NULL;
_2057 = (frost$core$Bit) {_2056};
_2058 = _2057.value;
if (_2058) goto block251; else goto block252;
block251:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:370
_2061 = &$s345;
_2062 = ((frost$core$Object*) _2061);
frost$core$Frost$ref$frost$core$Object$Q(_2062);
_2064 = *(&local9);
_2065 = ((frost$core$Object*) _2064);
frost$core$Frost$unref$frost$core$Object$Q(_2065);
*(&local9) = _2061;
goto block252;
block252:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:372
_2070 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(sizeof(org$frostlang$frostc$HTMLProcessor), (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
_2071 = *(&local71);
org$frostlang$frostc$HTMLProcessor$init$org$frostlang$frostc$Compiler(_2070, _2071);
_2073 = *(&local1);
_2074 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Main.frost:372:56
_2076 = (frost$core$Int) {0u};
_2077 = _2074.value;
_2078 = _2076.value;
_2079 = _2077 >= _2078;
_2080 = (frost$core$Bit) {_2079};
_2081 = _2080.value;
if (_2081) goto block256; else goto block255;
block256:;
_2083 = ((frost$collections$CollectionView*) _2073);
ITable* $tmp346 = _2083->$class->itable;
while ($tmp346->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp346 = $tmp346->next;
}
_2084 = $tmp346->methods[0];
_2085 = _2084(_2083);
_2086 = _2074.value;
_2087 = _2085.value;
_2088 = _2086 < _2087;
_2089 = (frost$core$Bit) {_2088};
_2090 = _2089.value;
if (_2090) goto block254; else goto block255;
block255:;
_2092 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s347, _2092, &$s348);
abort(); // unreachable
block254:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_2096 = &_2073->data;
_2097 = *_2096;
_2098 = _2097.value;
_2099 = frost$core$Int64$init$frost$core$Int(_2074);
_2100 = _2099.value;
_2101 = ((frost$core$Object**)_2098)[_2100];
_2102 = _2101;
frost$core$Frost$ref$frost$core$Object$Q(_2102);
_2105 = ((frost$io$File*) _2101);
_2106 = *(&local5);
_2107 = _2106 != NULL;
_2108 = (frost$core$Bit) {_2107};
_2109 = _2108.value;
if (_2109) goto block257; else goto block258;
block258:;
_2111 = (frost$core$Int) {372u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s349, _2111, &$s350);
abort(); // unreachable
block257:;
_2114 = _2106;
_2115 = *(&local9);
_2116 = _2115 != NULL;
_2117 = (frost$core$Bit) {_2116};
_2118 = _2117.value;
if (_2118) goto block259; else goto block260;
block260:;
_2120 = (frost$core$Int) {372u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s351, _2120, &$s352);
abort(); // unreachable
block259:;
_2123 = _2115;
_2124 = ($fn353) _2070->$class->vtable[3];
_2124(_2070, _2105, _2114, _2123);
_2126 = _2101;
frost$core$Frost$unref$frost$core$Object$Q(_2126);
_2128 = ((frost$core$Object*) _2070);
frost$core$Frost$unref$frost$core$Object$Q(_2128);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:373
_2131 = *(&local71);
_2132 = ((frost$core$Object*) _2131);
frost$core$Frost$unref$frost$core$Object$Q(_2132);
*(&local71) = ((org$frostlang$frostc$Compiler*) NULL);
_2135 = *(&local70);
_2136 = ((frost$core$Object*) _2135);
frost$core$Frost$unref$frost$core$Object$Q(_2136);
*(&local70) = ((frost$threads$MessageQueue*) NULL);
_2139 = *(&local62);
_2140 = ((frost$core$Object*) _2139);
frost$core$Frost$unref$frost$core$Object$Q(_2140);
*(&local62) = ((org$frostlang$frostc$CodeGenerator*) NULL);
_2143 = *(&local61);
_2144 = ((frost$core$Object*) _2143);
frost$core$Frost$unref$frost$core$Object$Q(_2144);
*(&local61) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_2147 = *(&local46);
_2148 = ((frost$core$Object*) _2147);
frost$core$Frost$unref$frost$core$Object$Q(_2148);
*(&local46) = ((frost$io$File*) NULL);
_2151 = *(&local9);
_2152 = ((frost$core$Object*) _2151);
frost$core$Frost$unref$frost$core$Object$Q(_2152);
*(&local9) = ((frost$core$String*) NULL);
_2155 = *(&local5);
_2156 = ((frost$core$Object*) _2155);
frost$core$Frost$unref$frost$core$Object$Q(_2156);
*(&local5) = ((frost$io$File*) NULL);
_2159 = *(&local4);
_2160 = ((frost$core$Object*) _2159);
frost$core$Frost$unref$frost$core$Object$Q(_2160);
*(&local4) = ((frost$collections$Array*) NULL);
_2163 = *(&local3);
_2164 = ((frost$core$Object*) _2163);
frost$core$Frost$unref$frost$core$Object$Q(_2164);
*(&local3) = ((frost$collections$Array*) NULL);
_2167 = *(&local2);
_2168 = ((frost$core$Object*) _2167);
frost$core$Frost$unref$frost$core$Object$Q(_2168);
*(&local2) = ((frost$collections$Array*) NULL);
_2171 = *(&local1);
_2172 = ((frost$core$Object*) _2171);
frost$core$Frost$unref$frost$core$Object$Q(_2172);
*(&local1) = ((frost$collections$Array*) NULL);
_2175 = *(&local0);
_2176 = ((frost$core$Object*) _2175);
frost$core$Frost$unref$frost$core$Object$Q(_2176);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block247:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:375
_2181 = *(&local9);
_2182 = _2181 != NULL;
_2183 = (frost$core$Bit) {_2182};
_2184 = _2183.value;
if (_2184) goto block261; else goto block262;
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
_2197 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_2197);
_2199 = (frost$core$Int) {377u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s356, _2199, &$s357);
abort(); // unreachable
block262:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:379
_2203 = *(&local1);
_2204 = ((frost$collections$Iterable*) _2203);
ITable* $tmp358 = _2204->$class->itable;
while ($tmp358->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp358 = $tmp358->next;
}
_2205 = $tmp358->methods[0];
_2206 = _2205(_2204);
goto block265;
block265:;
ITable* $tmp359 = _2206->$class->itable;
while ($tmp359->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp359 = $tmp359->next;
}
_2208 = $tmp359->methods[0];
_2209 = _2208(_2206);
_2210 = _2209.value;
if (_2210) goto block267; else goto block266;
block266:;
*(&local74) = ((frost$io$File*) NULL);
ITable* $tmp360 = _2206->$class->itable;
while ($tmp360->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp360 = $tmp360->next;
}
_2213 = $tmp360->methods[1];
_2214 = _2213(_2206);
_2215 = ((frost$io$File*) _2214);
_2216 = ((frost$core$Object*) _2215);
frost$core$Frost$ref$frost$core$Object$Q(_2216);
_2218 = *(&local74);
_2219 = ((frost$core$Object*) _2218);
frost$core$Frost$unref$frost$core$Object$Q(_2219);
*(&local74) = _2215;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:380
_2223 = *(&local71);
_2224 = *(&local74);
_2225 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT(_2223, _2224);
_2226 = ((frost$collections$Iterable*) _2225);
ITable* $tmp361 = _2226->$class->itable;
while ($tmp361->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp361 = $tmp361->next;
}
_2227 = $tmp361->methods[0];
_2228 = _2227(_2226);
goto block268;
block268:;
ITable* $tmp362 = _2228->$class->itable;
while ($tmp362->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp362 = $tmp362->next;
}
_2230 = $tmp362->methods[0];
_2231 = _2230(_2228);
_2232 = _2231.value;
if (_2232) goto block270; else goto block269;
block269:;
*(&local75) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp363 = _2228->$class->itable;
while ($tmp363->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp363 = $tmp363->next;
}
_2235 = $tmp363->methods[1];
_2236 = _2235(_2228);
_2237 = ((org$frostlang$frostc$ClassDecl*) _2236);
_2238 = ((frost$core$Object*) _2237);
frost$core$Frost$ref$frost$core$Object$Q(_2238);
_2240 = *(&local75);
_2241 = ((frost$core$Object*) _2240);
frost$core$Frost$unref$frost$core$Object$Q(_2241);
*(&local75) = _2237;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:381
_2245 = *(&local71);
_2246 = *(&local75);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Main.frost:381:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5883
_2249 = (frost$core$Bit) {false};
_2250 = &_2246->external;
*_2250 = _2249;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5884
_2253 = &_2246->classes;
_2254 = *_2253;
_2255 = ((frost$collections$Iterable*) _2254);
ITable* $tmp364 = _2255->$class->itable;
while ($tmp364->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp364 = $tmp364->next;
}
_2256 = $tmp364->methods[0];
_2257 = _2256(_2255);
goto block272;
block272:;
ITable* $tmp365 = _2257->$class->itable;
while ($tmp365->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp365 = $tmp365->next;
}
_2259 = $tmp365->methods[0];
_2260 = _2259(_2257);
_2261 = _2260.value;
if (_2261) goto block274; else goto block273;
block273:;
*(&local76) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp366 = _2257->$class->itable;
while ($tmp366->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp366 = $tmp366->next;
}
_2264 = $tmp366->methods[1];
_2265 = _2264(_2257);
_2266 = ((org$frostlang$frostc$ClassDecl*) _2265);
_2267 = ((frost$core$Object*) _2266);
frost$core$Frost$ref$frost$core$Object$Q(_2267);
_2269 = *(&local76);
_2270 = ((frost$core$Object*) _2269);
frost$core$Frost$unref$frost$core$Object$Q(_2270);
*(&local76) = _2266;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5885
_2274 = *(&local76);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Compiler.frost:5885:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5883
_2277 = (frost$core$Bit) {false};
_2278 = &_2274->external;
*_2278 = _2277;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5884
_2281 = &_2274->classes;
_2282 = *_2281;
_2283 = ((frost$collections$Iterable*) _2282);
ITable* $tmp367 = _2283->$class->itable;
while ($tmp367->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp367 = $tmp367->next;
}
_2284 = $tmp367->methods[0];
_2285 = _2284(_2283);
goto block276;
block276:;
ITable* $tmp368 = _2285->$class->itable;
while ($tmp368->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp368 = $tmp368->next;
}
_2287 = $tmp368->methods[0];
_2288 = _2287(_2285);
_2289 = _2288.value;
if (_2289) goto block278; else goto block277;
block277:;
*(&local77) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp369 = _2285->$class->itable;
while ($tmp369->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp369 = $tmp369->next;
}
_2292 = $tmp369->methods[1];
_2293 = _2292(_2285);
_2294 = ((org$frostlang$frostc$ClassDecl*) _2293);
_2295 = ((frost$core$Object*) _2294);
frost$core$Frost$ref$frost$core$Object$Q(_2295);
_2297 = *(&local77);
_2298 = ((frost$core$Object*) _2297);
frost$core$Frost$unref$frost$core$Object$Q(_2298);
*(&local77) = _2294;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5885
_2302 = *(&local77);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl(_2245, _2302);
_2304 = _2293;
frost$core$Frost$unref$frost$core$Object$Q(_2304);
_2306 = *(&local77);
_2307 = ((frost$core$Object*) _2306);
frost$core$Frost$unref$frost$core$Object$Q(_2307);
*(&local77) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block276;
block278:;
_2311 = ((frost$core$Object*) _2285);
frost$core$Frost$unref$frost$core$Object$Q(_2311);
_2314 = _2265;
frost$core$Frost$unref$frost$core$Object$Q(_2314);
_2316 = *(&local76);
_2317 = ((frost$core$Object*) _2316);
frost$core$Frost$unref$frost$core$Object$Q(_2317);
*(&local76) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block272;
block274:;
_2321 = ((frost$core$Object*) _2257);
frost$core$Frost$unref$frost$core$Object$Q(_2321);
_2324 = _2236;
frost$core$Frost$unref$frost$core$Object$Q(_2324);
_2326 = *(&local75);
_2327 = ((frost$core$Object*) _2326);
frost$core$Frost$unref$frost$core$Object$Q(_2327);
*(&local75) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block268;
block270:;
_2331 = ((frost$core$Object*) _2228);
frost$core$Frost$unref$frost$core$Object$Q(_2331);
_2333 = ((frost$core$Object*) _2225);
frost$core$Frost$unref$frost$core$Object$Q(_2333);
_2335 = _2214;
frost$core$Frost$unref$frost$core$Object$Q(_2335);
_2337 = *(&local74);
_2338 = ((frost$core$Object*) _2337);
frost$core$Frost$unref$frost$core$Object$Q(_2338);
*(&local74) = ((frost$io$File*) NULL);
goto block265;
block267:;
_2342 = ((frost$core$Object*) _2206);
frost$core$Frost$unref$frost$core$Object$Q(_2342);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:384
_2345 = *(&local1);
_2346 = ((frost$collections$Iterable*) _2345);
ITable* $tmp370 = _2346->$class->itable;
while ($tmp370->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp370 = $tmp370->next;
}
_2347 = $tmp370->methods[0];
_2348 = _2347(_2346);
goto block279;
block279:;
ITable* $tmp371 = _2348->$class->itable;
while ($tmp371->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp371 = $tmp371->next;
}
_2350 = $tmp371->methods[0];
_2351 = _2350(_2348);
_2352 = _2351.value;
if (_2352) goto block281; else goto block280;
block280:;
*(&local78) = ((frost$io$File*) NULL);
ITable* $tmp372 = _2348->$class->itable;
while ($tmp372->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp372 = $tmp372->next;
}
_2355 = $tmp372->methods[1];
_2356 = _2355(_2348);
_2357 = ((frost$io$File*) _2356);
_2358 = ((frost$core$Object*) _2357);
frost$core$Frost$ref$frost$core$Object$Q(_2358);
_2360 = *(&local78);
_2361 = ((frost$core$Object*) _2360);
frost$core$Frost$unref$frost$core$Object$Q(_2361);
*(&local78) = _2357;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:385
_2365 = *(&local71);
_2366 = *(&local78);
org$frostlang$frostc$Compiler$compile$frost$io$File(_2365, _2366);
_2368 = _2356;
frost$core$Frost$unref$frost$core$Object$Q(_2368);
_2370 = *(&local78);
_2371 = ((frost$core$Object*) _2370);
frost$core$Frost$unref$frost$core$Object$Q(_2371);
*(&local78) = ((frost$io$File*) NULL);
goto block279;
block281:;
_2375 = ((frost$core$Object*) _2348);
frost$core$Frost$unref$frost$core$Object$Q(_2375);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:387
_2378 = *(&local8);
_2379 = _2378.nonnull;
_2380 = (frost$core$Bit) {_2379};
_2381 = _2380.value;
if (_2381) goto block284; else goto block285;
block285:;
_2383 = (frost$core$Int) {387u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s373, _2383, &$s374);
abort(); // unreachable
block284:;
frost$core$Equatable* $tmp375;
if (_2378.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp376;
    $tmp376 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp376->value = ((org$frostlang$frostc$Main$Format) _2378.value);
    $tmp375 = ((frost$core$Equatable*) $tmp376);
}
else {
    $tmp375 = NULL;
}
_2386 = $tmp375;
_2387 = (frost$core$Int) {7u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:387:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_2390 = &(&local80)->$rawValue;
*_2390 = _2387;
_2392 = *(&local80);
*(&local79) = _2392;
_2395 = *(&local79);
org$frostlang$frostc$Main$Format$wrapper* $tmp377;
$tmp377 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp377->value = _2395;
_2396 = ((frost$core$Equatable*) $tmp377);
ITable* $tmp378 = _2386->$class->itable;
while ($tmp378->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp378 = $tmp378->next;
}
_2397 = $tmp378->methods[0];
_2398 = _2397(_2386, _2396);
_2399 = _2398.value;
_2400 = ((frost$core$Object*) _2396);
frost$core$Frost$unref$frost$core$Object$Q(_2400);
_2402 = ((frost$core$Object*) _2386);
frost$core$Frost$unref$frost$core$Object$Q(_2402);
if (_2399) goto block282; else goto block283;
block282:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:388
_2406 = *(&local62);
_2407 = ((org$frostlang$frostc$Interpreter*) _2406);
_2408 = ($fn379) _2407->$class->vtable[24];
_2408(_2407);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:389
_2411 = *(&local71);
_2412 = ((frost$core$Object*) _2411);
frost$core$Frost$unref$frost$core$Object$Q(_2412);
*(&local71) = ((org$frostlang$frostc$Compiler*) NULL);
_2415 = *(&local70);
_2416 = ((frost$core$Object*) _2415);
frost$core$Frost$unref$frost$core$Object$Q(_2416);
*(&local70) = ((frost$threads$MessageQueue*) NULL);
_2419 = *(&local62);
_2420 = ((frost$core$Object*) _2419);
frost$core$Frost$unref$frost$core$Object$Q(_2420);
*(&local62) = ((org$frostlang$frostc$CodeGenerator*) NULL);
_2423 = *(&local61);
_2424 = ((frost$core$Object*) _2423);
frost$core$Frost$unref$frost$core$Object$Q(_2424);
*(&local61) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_2427 = *(&local46);
_2428 = ((frost$core$Object*) _2427);
frost$core$Frost$unref$frost$core$Object$Q(_2428);
*(&local46) = ((frost$io$File*) NULL);
_2431 = *(&local9);
_2432 = ((frost$core$Object*) _2431);
frost$core$Frost$unref$frost$core$Object$Q(_2432);
*(&local9) = ((frost$core$String*) NULL);
_2435 = *(&local5);
_2436 = ((frost$core$Object*) _2435);
frost$core$Frost$unref$frost$core$Object$Q(_2436);
*(&local5) = ((frost$io$File*) NULL);
_2439 = *(&local4);
_2440 = ((frost$core$Object*) _2439);
frost$core$Frost$unref$frost$core$Object$Q(_2440);
*(&local4) = ((frost$collections$Array*) NULL);
_2443 = *(&local3);
_2444 = ((frost$core$Object*) _2443);
frost$core$Frost$unref$frost$core$Object$Q(_2444);
*(&local3) = ((frost$collections$Array*) NULL);
_2447 = *(&local2);
_2448 = ((frost$core$Object*) _2447);
frost$core$Frost$unref$frost$core$Object$Q(_2448);
*(&local2) = ((frost$collections$Array*) NULL);
_2451 = *(&local1);
_2452 = ((frost$core$Object*) _2451);
frost$core$Frost$unref$frost$core$Object$Q(_2452);
*(&local1) = ((frost$collections$Array*) NULL);
_2455 = *(&local0);
_2456 = ((frost$core$Object*) _2455);
frost$core$Frost$unref$frost$core$Object$Q(_2456);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block283:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:391
_2461 = *(&local71);
// begin inline call to method org.frostlang.frostc.Compiler.finish() from Main.frost:391:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6125
goto block288;
block288:;
_2465 = &_2461->pendingClasses;
_2466 = *_2465;
_2467 = ((frost$collections$CollectionView*) _2466);
ITable* $tmp380 = _2467->$class->itable;
while ($tmp380->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp380 = $tmp380->next;
}
_2468 = $tmp380->methods[0];
_2469 = _2468(_2467);
_2470 = (frost$core$Int) {0u};
_2471 = _2469.value;
_2472 = _2470.value;
_2473 = _2471 > _2472;
_2474 = (frost$core$Bit) {_2473};
_2475 = _2474.value;
if (_2475) goto block289; else goto block290;
block289:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6126
_2478 = &_2461->pendingClasses;
_2479 = *_2478;
_2480 = &_2461->pendingClasses;
_2481 = *_2480;
_2482 = ((frost$collections$CollectionView*) _2481);
ITable* $tmp381 = _2482->$class->itable;
while ($tmp381->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp381 = $tmp381->next;
}
_2483 = $tmp381->methods[0];
_2484 = _2483(_2482);
_2485 = (frost$core$Int) {1u};
_2486 = _2484.value;
_2487 = _2485.value;
_2488 = _2486 - _2487;
_2489 = (frost$core$Int) {_2488};
_2490 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_2479, _2489);
_2491 = ((org$frostlang$frostc$ClassDecl*) _2490);
*(&local81) = ((org$frostlang$frostc$ClassDecl*) NULL);
_2493 = ((frost$core$Object*) _2491);
frost$core$Frost$ref$frost$core$Object$Q(_2493);
_2495 = *(&local81);
_2496 = ((frost$core$Object*) _2495);
frost$core$Frost$unref$frost$core$Object$Q(_2496);
*(&local81) = _2491;
_2499 = _2490;
frost$core$Frost$unref$frost$core$Object$Q(_2499);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6127
_2502 = *(&local81);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl(_2461, _2502);
_2504 = *(&local81);
_2505 = ((frost$core$Object*) _2504);
frost$core$Frost$unref$frost$core$Object$Q(_2505);
*(&local81) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block288;
block290:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6129
_2510 = &_2461->codeGenerator;
_2511 = *_2510;
_2512 = _2511 != NULL;
_2513 = (frost$core$Bit) {_2512};
_2514 = _2513.value;
if (_2514) goto block291; else goto block292;
block292:;
_2516 = (frost$core$Int) {6129u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s382, _2516, &$s383);
abort(); // unreachable
block291:;
_2519 = _2511;
ITable* $tmp384 = _2519->$class->itable;
while ($tmp384->$class != (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class) {
    $tmp384 = $tmp384->next;
}
_2520 = $tmp384->methods[5];
_2520(_2519);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:392
goto block293;
block293:;
_2525 = *(&local70);
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Main.frost:392:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
_2530 = (frost$threads$ScopedLock*) frostObjectAlloc(sizeof(frost$threads$ScopedLock), (frost$core$Class*) &frost$threads$ScopedLock$class);
_2531 = &_2525->lock;
_2532 = *_2531;
frost$threads$ScopedLock$init$frost$threads$Lock(_2530, _2532);
*(&local82) = ((frost$threads$ScopedLock*) NULL);
_2535 = ((frost$core$Object*) _2530);
frost$core$Frost$ref$frost$core$Object$Q(_2535);
_2537 = *(&local82);
_2538 = ((frost$core$Object*) _2537);
frost$core$Frost$unref$frost$core$Object$Q(_2538);
*(&local82) = _2530;
_2541 = ((frost$core$Object*) _2530);
frost$core$Frost$unref$frost$core$Object$Q(_2541);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
_2544 = &_2525->count;
_2545 = *_2544;
_2546 = *(&local82);
_2547 = ((frost$core$Object*) _2546);
frost$core$Frost$unref$frost$core$Object$Q(_2547);
*(&local82) = ((frost$threads$ScopedLock*) NULL);
_2551 = (frost$core$Int) {0u};
_2552 = _2545.value;
_2553 = _2551.value;
_2554 = _2552 > _2553;
_2555 = (frost$core$Bit) {_2554};
_2557 = _2555.value;
if (_2557) goto block294; else goto block295;
block294:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:393
_2560 = *(&local70);
_2561 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(_2560);
_2562 = ((org$frostlang$frostc$Compiler$Message*) _2561);
*(&local83) = ((org$frostlang$frostc$Compiler$Message*) NULL);
_2564 = ((frost$core$Object*) _2562);
frost$core$Frost$ref$frost$core$Object$Q(_2564);
_2566 = *(&local83);
_2567 = ((frost$core$Object*) _2566);
frost$core$Frost$unref$frost$core$Object$Q(_2567);
*(&local83) = _2562;
_2570 = ((frost$core$Object*) _2561);
frost$core$Frost$unref$frost$core$Object$Q(_2570);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:395
_2573 = *(&local83);
_2574 = &_2573->$rawValue;
_2575 = *_2574;
_2576 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:396:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2579 = _2575.value;
_2580 = _2576.value;
_2581 = _2579 == _2580;
_2582 = (frost$core$Bit) {_2581};
_2584 = _2582.value;
if (_2584) goto block299; else goto block300;
block299:;
_2586 = &_2573->$data.$ERROR.field0;
_2587 = *_2586;
*(&local84) = ((frost$core$String*) NULL);
_2589 = ((frost$core$Object*) _2587);
frost$core$Frost$ref$frost$core$Object$Q(_2589);
_2591 = *(&local84);
_2592 = ((frost$core$Object*) _2591);
frost$core$Frost$unref$frost$core$Object$Q(_2592);
*(&local84) = _2587;
_2595 = &_2573->$data.$ERROR.field1;
_2596 = *_2595;
*(&local85) = _2596;
_2598 = &_2573->$data.$ERROR.field2;
_2599 = *_2598;
*(&local86) = _2599;
_2601 = &_2573->$data.$ERROR.field3;
_2602 = *_2601;
*(&local87) = ((frost$core$String*) NULL);
_2604 = ((frost$core$Object*) _2602);
frost$core$Frost$ref$frost$core$Object$Q(_2604);
_2606 = *(&local87);
_2607 = ((frost$core$Object*) _2606);
frost$core$Frost$unref$frost$core$Object$Q(_2607);
*(&local87) = _2602;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:397
_2611 = *(&local59);
_2612 = (frost$core$Int) {1u};
_2613 = _2611.value;
_2614 = _2612.value;
_2615 = _2613 + _2614;
_2616 = (frost$core$Int) {_2615};
*(&local59) = _2616;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:398
_2619 = *(&local84);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:398:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_2622 = ((frost$core$Object*) _2619);
frost$core$Frost$ref$frost$core$Object$Q(_2622);
_2625 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2619, &$s385);
_2626 = *(&local85);
frost$core$Int$wrapper* $tmp386;
$tmp386 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp386->value = _2626;
_2627 = ((frost$core$Object*) $tmp386);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:398:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2630 = ($fn387) _2627->$class->vtable[0];
_2631 = _2630(_2627);
_2632 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2625, _2631);
_2633 = ((frost$core$Object*) _2632);
frost$core$Frost$ref$frost$core$Object$Q(_2633);
_2635 = ((frost$core$Object*) _2632);
frost$core$Frost$unref$frost$core$Object$Q(_2635);
_2637 = ((frost$core$Object*) _2631);
frost$core$Frost$unref$frost$core$Object$Q(_2637);
_2640 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2632, &$s388);
_2641 = *(&local86);
frost$core$Int$wrapper* $tmp389;
$tmp389 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp389->value = _2641;
_2642 = ((frost$core$Object*) $tmp389);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:398:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2645 = ($fn390) _2642->$class->vtable[0];
_2646 = _2645(_2642);
_2647 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2640, _2646);
_2648 = ((frost$core$Object*) _2647);
frost$core$Frost$ref$frost$core$Object$Q(_2648);
_2650 = ((frost$core$Object*) _2647);
frost$core$Frost$unref$frost$core$Object$Q(_2650);
_2652 = ((frost$core$Object*) _2646);
frost$core$Frost$unref$frost$core$Object$Q(_2652);
_2655 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2647, &$s391);
_2656 = *(&local87);
_2657 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2655, _2656);
_2658 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2657, &$s392);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:398:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_2658);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s393);
_2668 = ((frost$core$Object*) _2658);
frost$core$Frost$unref$frost$core$Object$Q(_2668);
_2670 = ((frost$core$Object*) _2657);
frost$core$Frost$unref$frost$core$Object$Q(_2670);
_2672 = ((frost$core$Object*) _2655);
frost$core$Frost$unref$frost$core$Object$Q(_2672);
_2674 = ((frost$core$Object*) _2647);
frost$core$Frost$unref$frost$core$Object$Q(_2674);
_2676 = _2642;
frost$core$Frost$unref$frost$core$Object$Q(_2676);
_2678 = ((frost$core$Object*) _2640);
frost$core$Frost$unref$frost$core$Object$Q(_2678);
_2680 = ((frost$core$Object*) _2632);
frost$core$Frost$unref$frost$core$Object$Q(_2680);
_2682 = _2627;
frost$core$Frost$unref$frost$core$Object$Q(_2682);
_2684 = ((frost$core$Object*) _2625);
frost$core$Frost$unref$frost$core$Object$Q(_2684);
_2686 = ((frost$core$Object*) _2619);
frost$core$Frost$unref$frost$core$Object$Q(_2686);
_2688 = *(&local87);
_2689 = ((frost$core$Object*) _2688);
frost$core$Frost$unref$frost$core$Object$Q(_2689);
*(&local87) = ((frost$core$String*) NULL);
_2692 = *(&local84);
_2693 = ((frost$core$Object*) _2692);
frost$core$Frost$unref$frost$core$Object$Q(_2693);
*(&local84) = ((frost$core$String*) NULL);
goto block298;
block300:;
_2697 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:400:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2700 = _2575.value;
_2701 = _2697.value;
_2702 = _2700 == _2701;
_2703 = (frost$core$Bit) {_2702};
_2705 = _2703.value;
if (_2705) goto block307; else goto block298;
block307:;
_2707 = &_2573->$data.$WARNING.field0;
_2708 = *_2707;
*(&local88) = ((frost$core$String*) NULL);
_2710 = ((frost$core$Object*) _2708);
frost$core$Frost$ref$frost$core$Object$Q(_2710);
_2712 = *(&local88);
_2713 = ((frost$core$Object*) _2712);
frost$core$Frost$unref$frost$core$Object$Q(_2713);
*(&local88) = _2708;
_2716 = &_2573->$data.$WARNING.field1;
_2717 = *_2716;
*(&local89) = _2717;
_2719 = &_2573->$data.$WARNING.field2;
_2720 = *_2719;
*(&local90) = _2720;
_2722 = &_2573->$data.$WARNING.field3;
_2723 = *_2722;
*(&local91) = ((frost$core$String*) NULL);
_2725 = ((frost$core$Object*) _2723);
frost$core$Frost$ref$frost$core$Object$Q(_2725);
_2727 = *(&local91);
_2728 = ((frost$core$Object*) _2727);
frost$core$Frost$unref$frost$core$Object$Q(_2728);
*(&local91) = _2723;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:401
_2732 = *(&local60);
_2733 = (frost$core$Int) {1u};
_2734 = _2732.value;
_2735 = _2733.value;
_2736 = _2734 + _2735;
_2737 = (frost$core$Int) {_2736};
*(&local60) = _2737;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:402
_2740 = *(&local88);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:402:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_2743 = ((frost$core$Object*) _2740);
frost$core$Frost$ref$frost$core$Object$Q(_2743);
_2746 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2740, &$s394);
_2747 = *(&local89);
frost$core$Int$wrapper* $tmp395;
$tmp395 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp395->value = _2747;
_2748 = ((frost$core$Object*) $tmp395);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:402:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2751 = ($fn396) _2748->$class->vtable[0];
_2752 = _2751(_2748);
_2753 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2746, _2752);
_2754 = ((frost$core$Object*) _2753);
frost$core$Frost$ref$frost$core$Object$Q(_2754);
_2756 = ((frost$core$Object*) _2753);
frost$core$Frost$unref$frost$core$Object$Q(_2756);
_2758 = ((frost$core$Object*) _2752);
frost$core$Frost$unref$frost$core$Object$Q(_2758);
_2761 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2753, &$s397);
_2762 = *(&local90);
frost$core$Int$wrapper* $tmp398;
$tmp398 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp398->value = _2762;
_2763 = ((frost$core$Object*) $tmp398);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:402:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2766 = ($fn399) _2763->$class->vtable[0];
_2767 = _2766(_2763);
_2768 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2761, _2767);
_2769 = ((frost$core$Object*) _2768);
frost$core$Frost$ref$frost$core$Object$Q(_2769);
_2771 = ((frost$core$Object*) _2768);
frost$core$Frost$unref$frost$core$Object$Q(_2771);
_2773 = ((frost$core$Object*) _2767);
frost$core$Frost$unref$frost$core$Object$Q(_2773);
_2776 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2768, &$s400);
_2777 = *(&local91);
_2778 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2776, _2777);
_2779 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2778, &$s401);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:402:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_2779);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s402);
_2789 = ((frost$core$Object*) _2779);
frost$core$Frost$unref$frost$core$Object$Q(_2789);
_2791 = ((frost$core$Object*) _2778);
frost$core$Frost$unref$frost$core$Object$Q(_2791);
_2793 = ((frost$core$Object*) _2776);
frost$core$Frost$unref$frost$core$Object$Q(_2793);
_2795 = ((frost$core$Object*) _2768);
frost$core$Frost$unref$frost$core$Object$Q(_2795);
_2797 = _2763;
frost$core$Frost$unref$frost$core$Object$Q(_2797);
_2799 = ((frost$core$Object*) _2761);
frost$core$Frost$unref$frost$core$Object$Q(_2799);
_2801 = ((frost$core$Object*) _2753);
frost$core$Frost$unref$frost$core$Object$Q(_2801);
_2803 = _2748;
frost$core$Frost$unref$frost$core$Object$Q(_2803);
_2805 = ((frost$core$Object*) _2746);
frost$core$Frost$unref$frost$core$Object$Q(_2805);
_2807 = ((frost$core$Object*) _2740);
frost$core$Frost$unref$frost$core$Object$Q(_2807);
_2809 = *(&local91);
_2810 = ((frost$core$Object*) _2809);
frost$core$Frost$unref$frost$core$Object$Q(_2810);
*(&local91) = ((frost$core$String*) NULL);
_2813 = *(&local88);
_2814 = ((frost$core$Object*) _2813);
frost$core$Frost$unref$frost$core$Object$Q(_2814);
*(&local88) = ((frost$core$String*) NULL);
goto block298;
block298:;
_2818 = *(&local83);
_2819 = ((frost$core$Object*) _2818);
frost$core$Frost$unref$frost$core$Object$Q(_2819);
*(&local83) = ((org$frostlang$frostc$Compiler$Message*) NULL);
goto block293;
block295:;
_2823 = *(&local71);
_2824 = ((frost$core$Object*) _2823);
frost$core$Frost$unref$frost$core$Object$Q(_2824);
*(&local71) = ((org$frostlang$frostc$Compiler*) NULL);
_2827 = *(&local70);
_2828 = ((frost$core$Object*) _2827);
frost$core$Frost$unref$frost$core$Object$Q(_2828);
*(&local70) = ((frost$threads$MessageQueue*) NULL);
_2831 = *(&local62);
_2832 = ((frost$core$Object*) _2831);
frost$core$Frost$unref$frost$core$Object$Q(_2832);
*(&local62) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:407
_2836 = *(&local60);
_2837 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:407:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2840 = _2836.value;
_2841 = _2837.value;
_2842 = _2840 == _2841;
_2843 = (frost$core$Bit) {_2842};
_2845 = _2843.value;
if (_2845) goto block314; else goto block316;
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
_2859 = *(&local60);
_2860 = (frost$core$Int) {0u};
_2861 = _2859.value;
_2862 = _2860.value;
_2863 = _2861 > _2862;
_2864 = (frost$core$Bit) {_2863};
_2865 = _2864.value;
if (_2865) goto block320; else goto block321;
block320:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:413
_2868 = *(&local60);
_2869 = frost$core$Int$get_asString$R$frost$core$String(_2868);
_2870 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2869, &$s405);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:413:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_2870);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s406);
_2880 = ((frost$core$Object*) _2870);
frost$core$Frost$unref$frost$core$Object$Q(_2880);
_2882 = ((frost$core$Object*) _2869);
frost$core$Frost$unref$frost$core$Object$Q(_2882);
goto block321;
block321:;
goto block315;
block315:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:415
_2887 = *(&local59);
_2888 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:415:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2891 = _2887.value;
_2892 = _2888.value;
_2893 = _2891 == _2892;
_2894 = (frost$core$Bit) {_2893};
_2896 = _2894.value;
if (_2896) goto block324; else goto block326;
block324:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:416
_2899 = *(&local8);
_2900 = _2899.nonnull;
_2901 = (frost$core$Bit) {_2900};
_2902 = _2901.value;
if (_2902) goto block328; else goto block329;
block329:;
_2904 = (frost$core$Int) {416u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s407, _2904, &$s408);
abort(); // unreachable
block328:;
_2907 = ((org$frostlang$frostc$Main$Format) _2899.value);
_2908 = _2907.$rawValue;
_2909 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:417:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2912 = _2908.value;
_2913 = _2909.value;
_2914 = _2912 == _2913;
_2915 = (frost$core$Bit) {_2914};
_2917 = _2915.value;
if (_2917) goto block331; else goto block332;
block331:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:418
_2920 = *(&local3);
_2921 = *(&local4);
_2922 = *(&local5);
_2923 = _2922 != NULL;
_2924 = (frost$core$Bit) {_2923};
_2925 = _2924.value;
if (_2925) goto block334; else goto block335;
block335:;
_2927 = (frost$core$Int) {418u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s409, _2927, &$s410);
abort(); // unreachable
block334:;
_2930 = _2922;
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:418:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:184
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:184:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_2935 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_2930, &$s411);
_2936 = &_2935->path;
_2937 = *_2936;
_2938 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_2937);
*(&local93) = ((frost$core$String*) NULL);
_2940 = ((frost$core$Object*) _2938);
frost$core$Frost$ref$frost$core$Object$Q(_2940);
_2942 = *(&local93);
_2943 = ((frost$core$Object*) _2942);
frost$core$Frost$unref$frost$core$Object$Q(_2943);
*(&local93) = _2938;
_2946 = ((frost$core$Object*) _2938);
frost$core$Frost$unref$frost$core$Object$Q(_2946);
_2948 = ((frost$core$Object*) _2935);
frost$core$Frost$unref$frost$core$Object$Q(_2948);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_2951 = *(&local93);
_2952 = _2951 == NULL;
_2953 = (frost$core$Bit) {_2952};
_2954 = _2953.value;
if (_2954) goto block338; else goto block339;
block338:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_2957 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_2957);
_2959 = *(&local93);
_2960 = ((frost$core$Object*) _2959);
frost$core$Frost$unref$frost$core$Object$Q(_2960);
*(&local93) = ((frost$core$String*) NULL);
*(&local92) = ((frost$io$File*) NULL);
_2964 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_2964);
goto block337;
block339:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_2968 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_2969 = *(&local93);
_2970 = _2969 != NULL;
_2971 = (frost$core$Bit) {_2970};
_2972 = _2971.value;
if (_2972) goto block340; else goto block341;
block341:;
_2974 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s412, _2974, &$s413);
abort(); // unreachable
block340:;
_2977 = _2969;
frost$io$File$init$frost$core$String(_2968, _2977);
_2979 = _2968;
_2980 = ((frost$core$Object*) _2979);
frost$core$Frost$ref$frost$core$Object$Q(_2980);
_2982 = ((frost$core$Object*) _2968);
frost$core$Frost$unref$frost$core$Object$Q(_2982);
_2984 = *(&local93);
_2985 = ((frost$core$Object*) _2984);
frost$core$Frost$unref$frost$core$Object$Q(_2985);
*(&local93) = ((frost$core$String*) NULL);
*(&local92) = _2979;
_2989 = ((frost$core$Object*) _2979);
frost$core$Frost$ref$frost$core$Object$Q(_2989);
goto block337;
block337:;
_2992 = *(&local92);
_2993 = _2992 != NULL;
_2994 = (frost$core$Bit) {_2993};
_2995 = _2994.value;
if (_2995) goto block342; else goto block343;
block343:;
_2997 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s414, _2997, &$s415);
abort(); // unreachable
block342:;
_3000 = _2992;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:184:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
_3003 = frost$io$File$get_name$R$frost$core$String(_2930);
*(&local95) = ((frost$core$String*) NULL);
_3005 = ((frost$core$Object*) _3003);
frost$core$Frost$ref$frost$core$Object$Q(_3005);
_3007 = *(&local95);
_3008 = ((frost$core$Object*) _3007);
frost$core$Frost$unref$frost$core$Object$Q(_3008);
*(&local95) = _3003;
_3011 = ((frost$core$Object*) _3003);
frost$core$Frost$unref$frost$core$Object$Q(_3011);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_3014 = *(&local95);
_3015 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_3014, &$s416);
*(&local96) = _3015;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_3018 = *(&local96);
_3019 = !_3018.nonnull;
_3020 = (frost$core$Bit) {_3019};
_3021 = _3020.value;
if (_3021) goto block345; else goto block346;
block345:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_3024 = *(&local95);
_3025 = ((frost$core$Object*) _3024);
frost$core$Frost$ref$frost$core$Object$Q(_3025);
_3027 = *(&local95);
_3028 = ((frost$core$Object*) _3027);
frost$core$Frost$unref$frost$core$Object$Q(_3028);
*(&local95) = ((frost$core$String*) NULL);
*(&local94) = _3024;
_3032 = ((frost$core$Object*) _3024);
frost$core$Frost$ref$frost$core$Object$Q(_3032);
goto block344;
block346:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_3036 = *(&local95);
_3037 = *(&local96);
_3038 = (frost$core$Bit) {false};
_3039 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _3037, _3038);
_3040 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_3036, _3039);
_3041 = ((frost$core$Object*) _3040);
frost$core$Frost$ref$frost$core$Object$Q(_3041);
_3043 = ((frost$core$Object*) _3040);
frost$core$Frost$unref$frost$core$Object$Q(_3043);
_3045 = *(&local95);
_3046 = ((frost$core$Object*) _3045);
frost$core$Frost$unref$frost$core$Object$Q(_3046);
*(&local95) = ((frost$core$String*) NULL);
*(&local94) = _3040;
_3050 = ((frost$core$Object*) _3040);
frost$core$Frost$ref$frost$core$Object$Q(_3050);
goto block344;
block344:;
_3053 = *(&local94);
_3054 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3053, &$s417);
_3055 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_3000, _3054);
_3056 = ((frost$core$Object*) _3055);
frost$core$Frost$ref$frost$core$Object$Q(_3056);
_3058 = ((frost$core$Object*) _3055);
frost$core$Frost$unref$frost$core$Object$Q(_3058);
_3060 = ((frost$core$Object*) _3054);
frost$core$Frost$unref$frost$core$Object$Q(_3060);
_3062 = ((frost$core$Object*) _3053);
frost$core$Frost$unref$frost$core$Object$Q(_3062);
_3064 = *(&local94);
_3065 = ((frost$core$Object*) _3064);
frost$core$Frost$unref$frost$core$Object$Q(_3065);
*(&local94) = ((frost$core$String*) NULL);
_3068 = ((frost$core$Object*) _2992);
frost$core$Frost$unref$frost$core$Object$Q(_3068);
_3070 = *(&local92);
_3071 = ((frost$core$Object*) _3070);
frost$core$Frost$unref$frost$core$Object$Q(_3071);
*(&local92) = ((frost$io$File*) NULL);
_3075 = *(&local5);
_3076 = _3075 != NULL;
_3077 = (frost$core$Bit) {_3076};
_3078 = _3077.value;
if (_3078) goto block347; else goto block348;
block348:;
_3080 = (frost$core$Int) {418u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s418, _3080, &$s419);
abort(); // unreachable
block347:;
_3083 = _3075;
_3084 = *(&local10);
_3085 = *(&local61);
_3086 = org$frostlang$frostc$Main$toExecutable$frost$collections$Array$LTfrost$io$File$GT$frost$collections$Array$LTfrost$core$String$GT$frost$io$File$frost$io$File$frost$core$Bit$org$frostlang$frostc$Compiler$Settings$R$frost$io$File(param0, _2920, _2921, _3055, _3083, _3084, _3085);
_3087 = ((frost$core$Object*) _3086);
frost$core$Frost$unref$frost$core$Object$Q(_3087);
_3089 = ((frost$core$Object*) _3055);
frost$core$Frost$unref$frost$core$Object$Q(_3089);
goto block330;
block332:;
_3092 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:421:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3095 = _2908.value;
_3096 = _3092.value;
_3097 = _3095 == _3096;
_3098 = (frost$core$Bit) {_3097};
_3100 = _3098.value;
if (_3100) goto block349; else goto block330;
block349:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:422
_3103 = *(&local5);
_3104 = _3103 != NULL;
_3105 = (frost$core$Bit) {_3104};
_3106 = _3105.value;
if (_3106) goto block351; else goto block352;
block352:;
_3108 = (frost$core$Int) {422u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s420, _3108, &$s421);
abort(); // unreachable
block351:;
_3111 = _3103;
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:422:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:184
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:184:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_3116 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_3111, &$s422);
_3117 = &_3116->path;
_3118 = *_3117;
_3119 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_3118);
*(&local98) = ((frost$core$String*) NULL);
_3121 = ((frost$core$Object*) _3119);
frost$core$Frost$ref$frost$core$Object$Q(_3121);
_3123 = *(&local98);
_3124 = ((frost$core$Object*) _3123);
frost$core$Frost$unref$frost$core$Object$Q(_3124);
*(&local98) = _3119;
_3127 = ((frost$core$Object*) _3119);
frost$core$Frost$unref$frost$core$Object$Q(_3127);
_3129 = ((frost$core$Object*) _3116);
frost$core$Frost$unref$frost$core$Object$Q(_3129);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_3132 = *(&local98);
_3133 = _3132 == NULL;
_3134 = (frost$core$Bit) {_3133};
_3135 = _3134.value;
if (_3135) goto block355; else goto block356;
block355:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_3138 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_3138);
_3140 = *(&local98);
_3141 = ((frost$core$Object*) _3140);
frost$core$Frost$unref$frost$core$Object$Q(_3141);
*(&local98) = ((frost$core$String*) NULL);
*(&local97) = ((frost$io$File*) NULL);
_3145 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_3145);
goto block354;
block356:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_3149 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_3150 = *(&local98);
_3151 = _3150 != NULL;
_3152 = (frost$core$Bit) {_3151};
_3153 = _3152.value;
if (_3153) goto block357; else goto block358;
block358:;
_3155 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s423, _3155, &$s424);
abort(); // unreachable
block357:;
_3158 = _3150;
frost$io$File$init$frost$core$String(_3149, _3158);
_3160 = _3149;
_3161 = ((frost$core$Object*) _3160);
frost$core$Frost$ref$frost$core$Object$Q(_3161);
_3163 = ((frost$core$Object*) _3149);
frost$core$Frost$unref$frost$core$Object$Q(_3163);
_3165 = *(&local98);
_3166 = ((frost$core$Object*) _3165);
frost$core$Frost$unref$frost$core$Object$Q(_3166);
*(&local98) = ((frost$core$String*) NULL);
*(&local97) = _3160;
_3170 = ((frost$core$Object*) _3160);
frost$core$Frost$ref$frost$core$Object$Q(_3170);
goto block354;
block354:;
_3173 = *(&local97);
_3174 = _3173 != NULL;
_3175 = (frost$core$Bit) {_3174};
_3176 = _3175.value;
if (_3176) goto block359; else goto block360;
block360:;
_3178 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s425, _3178, &$s426);
abort(); // unreachable
block359:;
_3181 = _3173;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:184:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
_3184 = frost$io$File$get_name$R$frost$core$String(_3111);
*(&local100) = ((frost$core$String*) NULL);
_3186 = ((frost$core$Object*) _3184);
frost$core$Frost$ref$frost$core$Object$Q(_3186);
_3188 = *(&local100);
_3189 = ((frost$core$Object*) _3188);
frost$core$Frost$unref$frost$core$Object$Q(_3189);
*(&local100) = _3184;
_3192 = ((frost$core$Object*) _3184);
frost$core$Frost$unref$frost$core$Object$Q(_3192);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_3195 = *(&local100);
_3196 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_3195, &$s427);
*(&local101) = _3196;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_3199 = *(&local101);
_3200 = !_3199.nonnull;
_3201 = (frost$core$Bit) {_3200};
_3202 = _3201.value;
if (_3202) goto block362; else goto block363;
block362:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_3205 = *(&local100);
_3206 = ((frost$core$Object*) _3205);
frost$core$Frost$ref$frost$core$Object$Q(_3206);
_3208 = *(&local100);
_3209 = ((frost$core$Object*) _3208);
frost$core$Frost$unref$frost$core$Object$Q(_3209);
*(&local100) = ((frost$core$String*) NULL);
*(&local99) = _3205;
_3213 = ((frost$core$Object*) _3205);
frost$core$Frost$ref$frost$core$Object$Q(_3213);
goto block361;
block363:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_3217 = *(&local100);
_3218 = *(&local101);
_3219 = (frost$core$Bit) {false};
_3220 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _3218, _3219);
_3221 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_3217, _3220);
_3222 = ((frost$core$Object*) _3221);
frost$core$Frost$ref$frost$core$Object$Q(_3222);
_3224 = ((frost$core$Object*) _3221);
frost$core$Frost$unref$frost$core$Object$Q(_3224);
_3226 = *(&local100);
_3227 = ((frost$core$Object*) _3226);
frost$core$Frost$unref$frost$core$Object$Q(_3227);
*(&local100) = ((frost$core$String*) NULL);
*(&local99) = _3221;
_3231 = ((frost$core$Object*) _3221);
frost$core$Frost$ref$frost$core$Object$Q(_3231);
goto block361;
block361:;
_3234 = *(&local99);
_3235 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3234, &$s428);
_3236 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_3181, _3235);
_3237 = ((frost$core$Object*) _3236);
frost$core$Frost$ref$frost$core$Object$Q(_3237);
_3239 = ((frost$core$Object*) _3236);
frost$core$Frost$unref$frost$core$Object$Q(_3239);
_3241 = ((frost$core$Object*) _3235);
frost$core$Frost$unref$frost$core$Object$Q(_3241);
_3243 = ((frost$core$Object*) _3234);
frost$core$Frost$unref$frost$core$Object$Q(_3243);
_3245 = *(&local99);
_3246 = ((frost$core$Object*) _3245);
frost$core$Frost$unref$frost$core$Object$Q(_3246);
*(&local99) = ((frost$core$String*) NULL);
_3249 = ((frost$core$Object*) _3173);
frost$core$Frost$unref$frost$core$Object$Q(_3249);
_3251 = *(&local97);
_3252 = ((frost$core$Object*) _3251);
frost$core$Frost$unref$frost$core$Object$Q(_3252);
*(&local97) = ((frost$io$File*) NULL);
_3256 = *(&local5);
_3257 = _3256 != NULL;
_3258 = (frost$core$Bit) {_3257};
_3259 = _3258.value;
if (_3259) goto block364; else goto block365;
block365:;
_3261 = (frost$core$Int) {422u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s429, _3261, &$s430);
abort(); // unreachable
block364:;
_3264 = _3256;
_3265 = *(&local10);
_3266 = *(&local61);
_3267 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$org$frostlang$frostc$Compiler$Settings$R$frost$io$File(param0, _3236, _3264, _3265, _3266);
_3268 = ((frost$core$Object*) _3267);
frost$core$Frost$unref$frost$core$Object$Q(_3268);
_3270 = ((frost$core$Object*) _3236);
frost$core$Frost$unref$frost$core$Object$Q(_3270);
goto block330;
block330:;
_3323 = *(&local61);
_3324 = ((frost$core$Object*) _3323);
frost$core$Frost$unref$frost$core$Object$Q(_3324);
*(&local61) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_3327 = *(&local46);
_3328 = ((frost$core$Object*) _3327);
frost$core$Frost$unref$frost$core$Object$Q(_3328);
*(&local46) = ((frost$io$File*) NULL);
_3331 = *(&local9);
_3332 = ((frost$core$Object*) _3331);
frost$core$Frost$unref$frost$core$Object$Q(_3332);
*(&local9) = ((frost$core$String*) NULL);
_3335 = *(&local5);
_3336 = ((frost$core$Object*) _3335);
frost$core$Frost$unref$frost$core$Object$Q(_3336);
*(&local5) = ((frost$io$File*) NULL);
_3339 = *(&local4);
_3340 = ((frost$core$Object*) _3339);
frost$core$Frost$unref$frost$core$Object$Q(_3340);
*(&local4) = ((frost$collections$Array*) NULL);
_3343 = *(&local3);
_3344 = ((frost$core$Object*) _3343);
frost$core$Frost$unref$frost$core$Object$Q(_3344);
*(&local3) = ((frost$collections$Array*) NULL);
_3347 = *(&local2);
_3348 = ((frost$core$Object*) _3347);
frost$core$Frost$unref$frost$core$Object$Q(_3348);
*(&local2) = ((frost$collections$Array*) NULL);
_3351 = *(&local1);
_3352 = ((frost$core$Object*) _3351);
frost$core$Frost$unref$frost$core$Object$Q(_3352);
*(&local1) = ((frost$collections$Array*) NULL);
_3355 = *(&local0);
_3356 = ((frost$core$Object*) _3355);
frost$core$Frost$unref$frost$core$Object$Q(_3356);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block326:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:427
_3276 = *(&local59);
_3277 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:427:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3280 = _3276.value;
_3281 = _3277.value;
_3282 = _3280 == _3281;
_3283 = (frost$core$Bit) {_3282};
_3285 = _3283.value;
if (_3285) goto block366; else goto block368;
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
_3300 = *(&local59);
_3301 = frost$core$Int$get_asString$R$frost$core$String(_3300);
_3302 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3301, &$s433);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:433:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_3302);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s434);
_3312 = ((frost$core$Object*) _3302);
frost$core$Frost$unref$frost$core$Object$Q(_3312);
_3314 = ((frost$core$Object*) _3301);
frost$core$Frost$unref$frost$core$Object$Q(_3314);
goto block367;
block367:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:435
_3318 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_3318);
_3320 = (frost$core$Int) {435u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s435, _3320, &$s436);
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

