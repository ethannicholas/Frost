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
#include "frost/core/Maybe.h"
#include "frost/io/InputStream.h"
#include "frost/core/System.h"
#include "frost/io/Console.h"
#include "frost/core/String/Index.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/MutableMethod.h"
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
#include "org/frostlang/frostc/LLVMCodeGenerator.h"
#include "org/frostlang/frostc/HCodeGenerator.h"
#include "org/frostlang/frostc/CCodeGenerator.h"
#include "org/frostlang/frostc/StubCodeGenerator.h"
#include "org/frostlang/frostc/Interpreter.h"
#include "org/frostlang/frostc/HTMLProcessor.h"
#include "frost/threads/Lock.h"
#include "org/frostlang/frostc/Bench.h"


static frost$core$String $s1;
org$frostlang$frostc$Main$class_type org$frostlang$frostc$Main$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Main$cleanup, org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File, org$frostlang$frostc$Main$toExecutable$frost$collections$Array$LTfrost$io$File$GT$frost$collections$Array$LTfrost$core$String$GT$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File, org$frostlang$frostc$Main$printUsage$frost$io$OutputStream, org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn3)(frost$io$InputStream*);
typedef frost$core$String* (*$fn4)(frost$io$InputStream*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);
typedef frost$core$String* (*$fn11)(frost$core$Object*);
typedef frost$core$String* (*$fn14)(frost$io$InputStream*);
typedef frost$core$String* (*$fn15)(frost$io$InputStream*);
typedef frost$core$String* (*$fn18)(frost$core$Object*);
typedef frost$core$String* (*$fn23)(frost$core$Object*);
typedef frost$core$String* (*$fn24)(frost$core$Object*);
typedef frost$collections$Array* (*$fn27)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$collections$Array* (*$fn28)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn29)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn30)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn31)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn32)(frost$core$Object*);
typedef frost$core$String* (*$fn33)(frost$core$Object*);
typedef frost$core$String* (*$fn34)(frost$io$InputStream*);
typedef frost$core$String* (*$fn35)(frost$io$InputStream*);
typedef frost$core$String* (*$fn36)(frost$core$Object*);
typedef frost$core$String* (*$fn53)(frost$core$Object*);
typedef frost$core$String* (*$fn66)(frost$core$Object*);
typedef frost$core$String* (*$fn69)(frost$io$InputStream*);
typedef frost$core$String* (*$fn70)(frost$io$InputStream*);
typedef frost$core$String* (*$fn73)(frost$core$Object*);
typedef frost$core$Error* (*$fn78)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn79)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn80)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn81)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn82)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn83)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn84)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn88)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn91)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn95)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn98)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn102)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn107)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn108)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Maybe* (*$fn109)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$String* (*$fn110)(frost$core$Object*);
typedef frost$core$String* (*$fn111)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn112)(frost$core$Object*);
typedef frost$core$String* (*$fn113)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn114)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn115)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn116)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn117)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn118)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn119)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Bit (*$fn120)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn121)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn122)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn123)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn124)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn125)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn126)(frost$core$Object*);
typedef frost$core$String* (*$fn127)(frost$core$Object*);
typedef frost$core$Bit (*$fn128)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn129)(frost$collections$CollectionView*);
typedef void (*$fn130)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn131)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn132)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn133)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn134)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn135)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn136)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn137)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn138)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn139)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn140)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn141)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn142)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn143)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn144)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn145)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn146)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn147)(org$frostlang$frostc$Interpreter*);
typedef frost$core$Int (*$fn148)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn149)(frost$collections$CollectionView*);
typedef void (*$fn150)(org$frostlang$frostc$CodeGenerator*);
typedef frost$core$String* (*$fn151)(frost$core$Object*);
typedef frost$core$String* (*$fn152)(frost$core$Object*);
typedef frost$core$String* (*$fn153)(frost$core$Object*);
typedef frost$core$String* (*$fn154)(frost$core$Object*);
typedef frost$core$Bit (*$fn155)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn156)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Maybe* (*$fn159)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$String* (*$fn160)(frost$core$Object*);
typedef frost$core$String* (*$fn168)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn179)(frost$core$Object*);
typedef frost$core$String* (*$fn183)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn198)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn217)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn233)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn236)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn239)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn242)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn320)(frost$core$Object*);
typedef frost$core$String* (*$fn329)(frost$core$Object*);
typedef void (*$fn346)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef void (*$fn372)(org$frostlang$frostc$Interpreter*);
typedef frost$core$String* (*$fn380)(frost$core$Object*);
typedef frost$core$String* (*$fn383)(frost$core$Object*);
typedef frost$core$String* (*$fn389)(frost$core$Object*);
typedef frost$core$String* (*$fn392)(frost$core$Object*);
typedef frost$core$Int (*$fn430)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn431)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$ListView* (*$fn432)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$Q$GT);
typedef frost$core$Int (*$fn433)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn434)(frost$collections$ListView*, frost$core$Int);
typedef void (*$fn435)(org$frostlang$frostc$Bench*);
typedef void (*$fn443)(org$frostlang$frostc$Bench*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e", 25, -3316641479594746667, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 6043963258232676957, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, -3218342706179030910, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x63", 2, 563052241097350273, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x67", 2, 563056639143863117, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c", 2, 563044544515952796, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x66\x72\x6f\x73\x74", 7, -4044657180966489978, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x6d", 3, -2354502893290026621, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, -4341477490894522756, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x69\x62", 3, 1317978099017241196, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c", 2, 563044544515952796, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 6043963258232676957, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, -3218342706179030910, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x67", 2, 563056639143863117, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x66\x72\x6f\x73\x74\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -5336904199903828035, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x66\x72\x6f\x73\x74\x27\x2e", 38, 2414752363581770017, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, -3725874908572553427, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, -8537804258594104524, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, -1426593306435499698, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, 2993450520568953317, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -2854313959629863208, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -293442963066226919, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4f", 2, 563012658678734677, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, -36708640889814861, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, -8241422096120224677, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x53", 2, 562999464539196145, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, -36708640889814861, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, -8229934398630946849, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66", 2, 563055539632234906, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -8357866846417911189, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -8762049995398847258, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x65", 3, -4390446579619712681, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f", 1, -5808550276084140354, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6c", 2, 625221927078985221, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68", 1, -5808546977549255721, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63", 1, -5808554674130653198, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, -8607590772689110736, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62", 4, -5818263582595368203, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x75\x6e", 3, -8524566317707732406, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, -8940199916074753387, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x49", 2, 563006061608965411, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 8483394141060772687, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x20\x6c\x69\x62\x72\x61\x72\x79\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 6787422783208561247, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c", 2, 563044544515952796, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6c\x69\x62\x72\x61\x72\x79\x20\x6e\x61\x6d\x65", 14, 7182621647362798014, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, -3260734117535617165, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 1755487887012249427, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, -6268259042323653607, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -540522989212751288, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62\x73", 5, -7219040758408810062, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 2088835727452422272, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, 1894309652117697527, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 6252797618683371763, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 565862592818489914, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 565862592818489914, NULL };
static frost$core$String $s276 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, -5255104731122465439, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, -5255104731122465439, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, 6378635575011181341, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -5478415099818808347, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, -4651943656929293709, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 6252797618683371763, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s338 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 3928554745973598786, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s350 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s367 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 107, -867402159131882985, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, -5861202104196742523, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x77\x61\x72\x6e\x69\x6e\x67\x3a\x20", 11, 2890546785777135939, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x77\x61\x72\x6e\x69\x6e\x67", 9, -3177307723557508888, NULL };
static frost$core$String $s397 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x61\x72\x6e\x69\x6e\x67\x73", 9, 8539650515262073630, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s401 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 6252797618683371763, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s415 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 3639570550927944898, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, -1438914547765079724, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s428 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x65\x70\x65\x61\x74", 8, 3780951491120021928, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x62\x65\x6e\x63\x68", 7, -7026121568011644677, NULL };

void org$frostlang$frostc$Main$init(void* rawSelf) {
org$frostlang$frostc$Main* param0 = (org$frostlang$frostc$Main*) rawSelf;

frost$core$Bit _1;
frost$core$Bit* _2;
frost$io$File* _5;
frost$core$String* _6;
frost$core$Object* _8;
frost$io$File** _10;
frost$io$File* _11;
frost$core$Object* _12;
frost$io$File** _14;
frost$core$Object* _16;
frost$core$Object* _18;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:23
_1 = (frost$core$Bit) {false};
_2 = &param0->debug;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:26
_5 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_6 = org$frostlang$frostc$Config$frostSourceDir$R$frost$core$String();
frost$io$File$init$frost$core$String(_5, _6);
_8 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = &param0->frostHome;
_11 = *_10;
_12 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_14 = &param0->frostHome;
*_14 = _5;
_16 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_18);
return;

}
frost$io$File* org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(void* rawSelf, frost$io$File* param1, frost$io$File* param2, frost$core$Bit param3) {
org$frostlang$frostc$Main* param0 = (org$frostlang$frostc$Main*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$System$Process* local1 = NULL;
frost$core$Error* local2 = NULL;
frost$core$Int local3;
frost$core$Error* local4 = NULL;
frost$collections$Array* _1;
frost$collections$Array* _2;
frost$core$Object* _5;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$core$Object* _11;
frost$collections$Array* _14;
frost$collections$Array* _15;
frost$core$String** _16;
frost$core$String* _17;
frost$core$Object* _18;
frost$collections$Array* _21;
frost$collections$Array* _22;
frost$core$Object* _23;
frost$collections$Array* _26;
frost$collections$Array* _27;
frost$core$Object* _28;
frost$collections$Array* _31;
frost$collections$Array* _32;
frost$core$Object* _33;
frost$core$Bit* _36;
frost$core$Bit _37;
bool _38;
frost$collections$Array* _41;
frost$collections$Array* _42;
frost$core$Object* _43;
frost$collections$Array* _47;
frost$collections$Array* _48;
frost$core$Object* _49;
frost$collections$Array* _52;
frost$collections$Array* _53;
frost$core$String** _54;
frost$core$String* _55;
frost$core$Object* _56;
frost$io$File** _63;
frost$io$File* _64;
frost$core$String** _65;
frost$core$String* _66;
frost$collections$Array* _67;
frost$collections$ListView* _68;
frost$core$Maybe* _69;
frost$core$Maybe* _70;
frost$core$Int* _71;
frost$core$Int _72;
int64_t _73;
bool _74;
frost$core$Error** _76;
frost$core$Error* _77;
frost$core$Object* _78;
frost$core$Object* _81;
frost$core$Error* _117;
frost$core$Object* _118;
$fn2 _121;
frost$core$String* _122;
frost$core$Object* _129;
frost$core$Int _133;
frost$core$Int _135;
frost$core$Object** _84;
frost$core$Object* _85;
frost$core$System$Process* _86;
frost$core$Object* _87;
frost$core$System$Process* _89;
frost$core$Object* _90;
frost$core$Object* _93;
frost$core$System$Process* _96;
frost$io$InputStream* _97;
$fn3 _98;
frost$core$String* _99;
frost$core$Object* _101;
frost$core$Object* _103;
frost$core$System$Process* _106;
frost$io$InputStream* _107;
$fn4 _108;
frost$core$String* _109;
frost$core$Object* _111;
frost$core$Object* _113;
frost$core$Error* _138;
frost$core$Object* _139;
frost$core$System$Process* _143;
frost$core$Int _144;
bool _149;
bool _150;
frost$core$Bit _151;
bool _153;
frost$core$Error* _158;
bool _159;
frost$core$Object* _161;
bool _163;
frost$core$Bit _164;
bool _165;
frost$core$Int _167;
frost$core$Error* _170;
frost$core$Object* _172;
frost$core$Error* _179;
frost$core$Object* _180;
$fn5 _183;
frost$core$String* _184;
frost$core$Object* _191;
frost$core$Int _195;
frost$core$Int _197;
frost$core$Object* _175;
frost$core$Error* _200;
frost$core$Object* _201;
frost$core$Int _206;
frost$core$Int _207;
int64_t _208;
int64_t _209;
bool _210;
frost$core$Bit _211;
bool _212;
frost$core$Int _215;
frost$core$Int _217;
frost$core$Object* _221;
frost$core$System$Process* _223;
frost$core$Object* _224;
frost$collections$Array* _227;
frost$core$Object* _228;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:62
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_2 = _1;
frost$collections$Array$init(_2);
*(&local0) = ((frost$collections$Array*) NULL);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local0);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:63
_14 = *(&local0);
_15 = _14;
_16 = &param1->path;
_17 = *_16;
_18 = ((frost$core$Object*) _17);
frost$collections$Array$add$frost$collections$Array$T(_15, _18);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:64
_21 = *(&local0);
_22 = _21;
_23 = ((frost$core$Object*) &$s6);
frost$collections$Array$add$frost$collections$Array$T(_22, _23);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:65
_26 = *(&local0);
_27 = _26;
_28 = ((frost$core$Object*) &$s7);
frost$collections$Array$add$frost$collections$Array$T(_27, _28);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:66
_31 = *(&local0);
_32 = _31;
_33 = ((frost$core$Object*) &$s8);
frost$collections$Array$add$frost$collections$Array$T(_32, _33);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:67
_36 = &param0->debug;
_37 = *_36;
_38 = _37.value;
if (_38) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:68
_41 = *(&local0);
_42 = _41;
_43 = ((frost$core$Object*) &$s9);
frost$collections$Array$add$frost$collections$Array$T(_42, _43);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:70
_47 = *(&local0);
_48 = _47;
_49 = ((frost$core$Object*) &$s10);
frost$collections$Array$add$frost$collections$Array$T(_48, _49);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:71
_52 = *(&local0);
_53 = _52;
_54 = &param2->path;
_55 = *_54;
_56 = ((frost$core$Object*) _55);
frost$collections$Array$add$frost$collections$Array$T(_53, _56);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:72
*(&local1) = ((frost$core$System$Process*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:73
*(&local2) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:74
_63 = &param0->clang;
_64 = *_63;
_65 = &_64->path;
_66 = *_65;
_67 = *(&local0);
_68 = ((frost$collections$ListView*) _67);
_69 = frost$core$System$exec$frost$core$String$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$Maybe$LTfrost$core$System$Process$GT(_66, _68);
_70 = _69;
_71 = &_70->$rawValue;
_72 = *_71;
_73 = _72.value;
_74 = _73 == 0u;
if (_74) goto block5; else goto block6;
block6:;
_76 = &_69->$data.$ERROR.field0;
_77 = *_76;
_78 = ((frost$core$Object*) _77);
frost$core$Frost$ref$frost$core$Object$Q(_78);
*(&local2) = _77;
_81 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_81);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:79
_117 = *(&local2);
_118 = ((frost$core$Object*) _117);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:79:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_121 = ($fn11) _118->$class->vtable[0];
_122 = _121(_118);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_122);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_129 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_129);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:80
_133 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_133);
_135 = (frost$core$Int) {80u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s12, _135, &$s13);
abort(); // unreachable
block5:;
_84 = &_69->$data.$SUCCESS.field0;
_85 = *_84;
_86 = ((frost$core$System$Process*) _85);
_87 = ((frost$core$Object*) _86);
frost$core$Frost$ref$frost$core$Object$Q(_87);
_89 = *(&local1);
_90 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_90);
*(&local1) = _86;
_93 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_93);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:75
_96 = *(&local1);
_97 = frost$core$System$Process$standardOutput$R$frost$io$InputStream(_96);
_98 = ($fn14) _97->$class->vtable[14];
_99 = _98(_97);
frost$io$Console$printError$frost$core$String(_99);
_101 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_101);
_103 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_103);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:76
_106 = *(&local1);
_107 = frost$core$System$Process$standardError$R$frost$io$InputStream(_106);
_108 = ($fn15) _107->$class->vtable[14];
_109 = _108(_107);
frost$io$Console$printError$frost$core$String(_109);
_111 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_111);
_113 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_113);
_138 = *(&local2);
_139 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_139);
*(&local2) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:82
_143 = *(&local1);
frost$core$System$Process$waitFor$R$frost$core$Int(&_144, _143);
*(&local3) = _144;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:83
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:83:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_149 = param3.value;
_150 = !_149;
_151 = (frost$core$Bit) {_150};
_153 = _151.value;
if (_153) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:84
*(&local4) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:85
_158 = frost$io$File$delete$R$frost$core$Error$Q(param1);
_159 = _158 == NULL;
if (_159) goto block14; else goto block15;
block15:;
_161 = ((frost$core$Object*) _158);
frost$core$Frost$ref$frost$core$Object$Q(_161);
_163 = _158 != NULL;
_164 = (frost$core$Bit) {_163};
_165 = _164.value;
if (_165) goto block16; else goto block17;
block17:;
_167 = (frost$core$Int) {85u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _167, &$s17);
abort(); // unreachable
block16:;
_170 = _158;
*(&local4) = _170;
_172 = ((frost$core$Object*) _158);
frost$core$Frost$unref$frost$core$Object$Q(_172);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:88
_179 = *(&local4);
_180 = ((frost$core$Object*) _179);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:88:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_183 = ($fn18) _180->$class->vtable[0];
_184 = _183(_180);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_184);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_191 = ((frost$core$Object*) _184);
frost$core$Frost$unref$frost$core$Object$Q(_191);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:89
_195 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_195);
_197 = (frost$core$Int) {89u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s19, _197, &$s20);
abort(); // unreachable
block14:;
_175 = ((frost$core$Object*) _158);
frost$core$Frost$unref$frost$core$Object$Q(_175);
_200 = *(&local4);
_201 = ((frost$core$Object*) _200);
frost$core$Frost$unref$frost$core$Object$Q(_201);
*(&local4) = ((frost$core$Error*) NULL);
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:92
_206 = *(&local3);
_207 = (frost$core$Int) {0u};
_208 = _206.value;
_209 = _207.value;
_210 = _208 != _209;
_211 = (frost$core$Bit) {_210};
_212 = _211.value;
if (_212) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:93
_215 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_215);
_217 = (frost$core$Int) {93u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, _217, &$s22);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:95
_221 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_221);
_223 = *(&local1);
_224 = ((frost$core$Object*) _223);
frost$core$Frost$unref$frost$core$Object$Q(_224);
*(&local1) = ((frost$core$System$Process*) NULL);
_227 = *(&local0);
_228 = ((frost$core$Object*) _227);
frost$core$Frost$unref$frost$core$Object$Q(_228);
*(&local0) = ((frost$collections$Array*) NULL);
return param2;

}
frost$core$String* org$frostlang$frostc$Main$$anonymous1$frost$io$File$R$frost$core$String(frost$io$File* param0) {

frost$core$Object* _1;
$fn23 _4;
frost$core$String* _5;
frost$core$String* _6;
frost$core$Object* _7;
frost$core$Object* _9;
frost$core$Object* _11;
frost$core$Object* _14;
frost$core$Object* _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:106
_1 = ((frost$core$Object*) param0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:106:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_4 = ($fn24) _1->$class->vtable[0];
_5 = _4(_1);
_6 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s25, _5);
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
frost$core$String* org$frostlang$frostc$Main$$anonymous2$frost$core$String$R$frost$core$String(frost$core$String* param0) {

frost$core$String* _1;
frost$core$Object* _2;
frost$core$Object* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:107
_1 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s26, param0);
_2 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_4);
return _1;

}
frost$io$File* org$frostlang$frostc$Main$toExecutable$frost$collections$Array$LTfrost$io$File$GT$frost$collections$Array$LTfrost$core$String$GT$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(void* rawSelf, frost$collections$Array* param1, frost$collections$Array* param2, frost$io$File* param3, frost$io$File* param4, frost$core$Bit param5) {
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
frost$collections$Array* _2;
frost$core$Object* _5;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$core$Object* _11;
frost$collections$Array* _14;
frost$collections$Array* _15;
frost$core$String** _16;
frost$core$String* _17;
frost$core$Object* _18;
frost$collections$Array* _21;
frost$collections$Array* _22;
frost$core$String* _23;
frost$core$String* _24;
frost$core$String* _25;
frost$core$Object* _26;
frost$core$Object* _28;
frost$core$Object* _30;
frost$core$Object* _32;
frost$collections$Array* _35;
frost$collections$Array* _36;
frost$core$Object* _37;
frost$collections$Array* _40;
frost$collections$Array* _41;
frost$core$Object* _42;
frost$collections$Array* _45;
frost$collections$Array* _46;
frost$core$Object* _47;
frost$collections$Array* _50;
frost$collections$Array* _51;
frost$collections$CollectionView* _52;
frost$core$Int8* _53;
frost$core$Method* _54;
frost$core$Int8** _57;
frost$core$Object* _60;
frost$core$Immutable** _62;
frost$core$Immutable* _63;
frost$core$Object* _64;
frost$core$Immutable** _66;
frost$core$Method* _69;
frost$core$MutableMethod* _70;
frost$core$MutableMethod* _71;
$fn27 _72;
frost$collections$Array* _73;
frost$collections$Array* _74;
frost$collections$CollectionView* _75;
frost$collections$CollectionView* _76;
frost$core$Object* _78;
frost$core$Object* _80;
frost$collections$Array* _83;
frost$collections$Array* _84;
frost$collections$CollectionView* _85;
frost$core$Int8* _86;
frost$core$Method* _87;
frost$core$Int8** _90;
frost$core$Object* _93;
frost$core$Immutable** _95;
frost$core$Immutable* _96;
frost$core$Object* _97;
frost$core$Immutable** _99;
frost$core$Method* _102;
frost$core$MutableMethod* _103;
frost$core$MutableMethod* _104;
$fn28 _105;
frost$collections$Array* _106;
frost$collections$Array* _107;
frost$collections$CollectionView* _108;
frost$collections$CollectionView* _109;
frost$core$Object* _111;
frost$core$Object* _113;
frost$core$String* _116;
frost$core$Int64 _119;
int64_t _122;
int64_t _123;
frost$core$Int _124;
frost$collections$Array* _126;
frost$core$Object* _127;
frost$core$Object* _129;
frost$core$Object* _133;
frost$collections$Array* _135;
frost$core$Object* _136;
frost$core$Object* _139;
frost$core$Object* _141;
frost$collections$Array* _144;
frost$collections$Iterable* _145;
frost$collections$Iterable* _146;
$fn29 _147;
frost$collections$Iterator* _148;
frost$collections$Iterator* _149;
frost$collections$Iterator* _151;
$fn30 _152;
frost$core$Bit _153;
bool _154;
frost$collections$Iterator* _157;
$fn31 _158;
frost$core$Object* _159;
frost$core$String* _160;
frost$core$Object* _161;
frost$core$String* _163;
frost$core$Object* _164;
frost$io$File* _168;
frost$core$String* _169;
frost$core$Object* _172;
frost$io$File* _174;
frost$core$Object* _175;
frost$core$Object* _178;
frost$collections$Array* _181;
frost$collections$Array* _182;
frost$io$File* _183;
frost$io$File* _186;
frost$core$String** _187;
frost$core$String* _188;
frost$core$String* _189;
frost$core$Object* _191;
frost$core$String* _193;
frost$core$Object* _194;
frost$core$Object* _197;
frost$core$Object* _199;
frost$core$String* _202;
bool _203;
frost$core$Bit _204;
bool _205;
frost$core$Object* _208;
frost$core$String* _210;
frost$core$Object* _211;
frost$core$Object* _215;
frost$io$File* _219;
frost$core$String* _220;
bool _221;
frost$core$Bit _222;
bool _223;
frost$core$Int _225;
frost$core$String* _228;
frost$io$File* _230;
frost$core$Object* _231;
frost$core$Object* _233;
frost$core$String* _235;
frost$core$Object* _236;
frost$core$Object* _240;
frost$io$File* _243;
bool _244;
frost$core$Bit _245;
bool _246;
frost$core$Int _248;
frost$io$File* _251;
frost$core$Object* _252;
$fn32 _255;
frost$core$String* _256;
frost$core$String* _257;
frost$core$Object* _258;
frost$core$Object* _260;
frost$core$Object* _262;
frost$core$Object* _265;
frost$core$Object* _267;
frost$core$Object* _269;
frost$io$File* _272;
frost$core$String** _277;
frost$core$String* _278;
frost$core$String$Index$nullable _279;
frost$core$String$Index$nullable _282;
bool _283;
frost$core$Bit _284;
bool _285;
frost$core$String** _288;
frost$core$String* _289;
frost$core$String** _290;
frost$core$String* _291;
frost$core$String$Index$nullable _292;
bool _293;
frost$core$Bit _294;
bool _295;
frost$core$Int _297;
frost$core$String$Index _300;
frost$core$String$Index _301;
frost$core$String$Index$nullable _302;
frost$core$Bit _303;
frost$core$Range$LTfrost$core$String$Index$Q$GT _304;
frost$core$String* _305;
frost$core$Object* _306;
frost$core$Object* _308;
frost$core$Object* _311;
frost$core$String** _316;
frost$core$String* _317;
frost$core$Object* _318;
frost$core$Object* _321;
frost$core$String* _325;
frost$core$Object* _327;
frost$core$String* _329;
frost$core$Object* _330;
frost$core$Object* _333;
frost$core$String* _336;
frost$core$String$Index _339;
frost$core$String$Index$nullable _340;
frost$core$String$Index$nullable _344;
bool _345;
frost$core$Bit _346;
bool _347;
frost$core$String* _350;
frost$core$Object* _351;
frost$core$String* _353;
frost$core$Object* _354;
frost$core$String* _357;
frost$core$Object* _358;
frost$core$Object* _362;
frost$core$String* _366;
frost$core$String$Index$nullable _367;
frost$core$Bit _368;
frost$core$Range$LTfrost$core$String$Index$Q$GT _369;
frost$core$String* _370;
frost$core$Object* _371;
frost$core$Object* _373;
frost$core$String* _375;
frost$core$Object* _376;
frost$core$String* _379;
frost$core$Object* _380;
frost$core$Object* _384;
frost$core$String* _387;
frost$core$Object* _389;
frost$core$String* _391;
frost$core$Object* _392;
frost$core$Object* _395;
frost$core$String* _398;
frost$core$Bit _399;
bool _400;
frost$core$Int _402;
frost$core$String* _406;
frost$core$Int _407;
frost$core$Int$nullable _408;
frost$core$Bit _409;
frost$core$Range$LTfrost$core$Int$Q$GT _410;
frost$core$String* _411;
frost$core$Object* _412;
frost$core$String* _414;
frost$core$Object* _415;
frost$core$Object* _418;
frost$collections$Array* _421;
frost$collections$Array* _422;
frost$core$String* _423;
frost$core$String* _424;
frost$core$Object* _425;
frost$core$Object* _427;
frost$core$String* _429;
frost$core$Object* _430;
frost$core$String* _433;
frost$core$Object* _434;
frost$io$File* _437;
frost$core$Object* _438;
frost$io$File* _441;
frost$core$Object* _442;
frost$core$Object* _445;
frost$core$String* _447;
frost$core$Object* _448;
frost$core$Object* _452;
frost$collections$Array* _455;
frost$collections$Array* _456;
frost$core$Object* _457;
frost$collections$Array* _460;
frost$collections$Array* _461;
frost$core$Object* _462;
frost$core$Bit* _465;
frost$core$Bit _466;
bool _467;
frost$collections$Array* _470;
frost$collections$Array* _471;
frost$core$Object* _472;
frost$collections$Array* _476;
frost$collections$Array* _477;
frost$core$Object* _478;
frost$collections$Array* _481;
frost$collections$Array* _482;
frost$core$String** _483;
frost$core$String* _484;
frost$core$Object* _485;
frost$io$File** _492;
frost$io$File* _493;
frost$core$String** _494;
frost$core$String* _495;
frost$collections$Array* _496;
frost$collections$ListView* _497;
frost$core$Maybe* _498;
frost$core$Maybe* _499;
frost$core$Int* _500;
frost$core$Int _501;
int64_t _502;
bool _503;
frost$core$Error** _505;
frost$core$Error* _506;
frost$core$Object* _507;
frost$core$Object* _510;
frost$core$Error* _546;
frost$core$Object* _547;
$fn33 _550;
frost$core$String* _551;
frost$core$Object* _558;
frost$core$Int _562;
frost$core$Int _564;
frost$core$Object** _513;
frost$core$Object* _514;
frost$core$System$Process* _515;
frost$core$Object* _516;
frost$core$System$Process* _518;
frost$core$Object* _519;
frost$core$Object* _522;
frost$core$System$Process* _525;
frost$io$InputStream* _526;
$fn34 _527;
frost$core$String* _528;
frost$core$Object* _530;
frost$core$Object* _532;
frost$core$System$Process* _535;
frost$io$InputStream* _536;
$fn35 _537;
frost$core$String* _538;
frost$core$Object* _540;
frost$core$Object* _542;
frost$core$Error* _567;
frost$core$Object* _568;
frost$core$System$Process* _572;
frost$core$Int _573;
bool _578;
bool _579;
frost$core$Bit _580;
bool _582;
frost$core$Error* _587;
bool _588;
frost$core$Object* _590;
bool _592;
frost$core$Bit _593;
bool _594;
frost$core$Int _596;
frost$core$Error* _599;
frost$core$Object* _601;
frost$core$Error* _608;
frost$core$Object* _609;
$fn36 _612;
frost$core$String* _613;
frost$core$Object* _620;
frost$core$Int _624;
frost$core$Int _626;
frost$core$Object* _604;
frost$core$Error* _629;
frost$core$Object* _630;
frost$core$Int _635;
frost$core$Int _636;
int64_t _637;
int64_t _638;
bool _639;
frost$core$Bit _640;
bool _641;
frost$core$Int _644;
frost$core$Int _646;
frost$core$Object* _650;
frost$core$System$Process* _652;
frost$core$Object* _653;
frost$collections$Array* _656;
frost$core$Object* _657;
frost$collections$Array* _660;
frost$core$Object* _661;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:100
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_2 = _1;
frost$collections$Array$init(_2);
*(&local0) = ((frost$collections$Array*) NULL);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local0);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:101
_14 = *(&local0);
_15 = _14;
_16 = &param3->path;
_17 = *_16;
_18 = ((frost$core$Object*) _17);
frost$collections$Array$add$frost$collections$Array$T(_15, _18);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:102
_21 = *(&local0);
_22 = _21;
_23 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
_24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s37, _23);
_25 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_24, &$s38);
_26 = ((frost$core$Object*) _25);
frost$collections$Array$add$frost$collections$Array$T(_22, _26);
_28 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_28);
_30 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_32);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:103
_35 = *(&local0);
_36 = _35;
_37 = ((frost$core$Object*) &$s39);
frost$collections$Array$add$frost$collections$Array$T(_36, _37);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:104
_40 = *(&local0);
_41 = _40;
_42 = ((frost$core$Object*) &$s40);
frost$collections$Array$add$frost$collections$Array$T(_41, _42);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:105
_45 = *(&local0);
_46 = _45;
_47 = ((frost$core$Object*) &$s41);
frost$collections$Array$add$frost$collections$Array$T(_46, _47);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:106
_50 = *(&local0);
_51 = _50;
_52 = ((frost$collections$CollectionView*) param1);
_53 = ((frost$core$Int8*) org$frostlang$frostc$Main$$anonymous1$frost$io$File$R$frost$core$String);
_54 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Main.frost:106:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_57 = &_54->pointer;
*_57 = _53;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_60 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_60);
_62 = &_54->target;
_63 = *_62;
_64 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_64);
_66 = &_54->target;
*_66 = ((frost$core$Immutable*) NULL);
_69 = _54;
_70 = ((frost$core$MutableMethod*) _69);
_71 = _70;
ITable* $tmp42 = _52->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp42 = $tmp42->next;
}
_72 = $tmp42->methods[9];
_73 = _72(_52, _71);
_74 = _73;
_75 = ((frost$collections$CollectionView*) _74);
_76 = _75;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_51, _76);
_78 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_78);
_80 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_80);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:107
_83 = *(&local0);
_84 = _83;
_85 = ((frost$collections$CollectionView*) param2);
_86 = ((frost$core$Int8*) org$frostlang$frostc$Main$$anonymous2$frost$core$String$R$frost$core$String);
_87 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Main.frost:107:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_90 = &_87->pointer;
*_90 = _86;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_93 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_93);
_95 = &_87->target;
_96 = *_95;
_97 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_97);
_99 = &_87->target;
*_99 = ((frost$core$Immutable*) NULL);
_102 = _87;
_103 = ((frost$core$MutableMethod*) _102);
_104 = _103;
ITable* $tmp43 = _85->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp43 = $tmp43->next;
}
_105 = $tmp43->methods[9];
_106 = _105(_85, _104);
_107 = _106;
_108 = ((frost$collections$CollectionView*) _107);
_109 = _108;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_84, _109);
_111 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_111);
_113 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_113);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:108
_116 = org$frostlang$frostc$Config$icuLibraries$R$frost$core$String();
// begin inline call to function frost.core.String.split(delimiter:frost.core.String):frost.collections.Array<frost.core.String> from Main.frost:108:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1378
_119 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_122 = _119.value;
_123 = ((int64_t) _122);
_124 = (frost$core$Int) {_123};
_126 = frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(_116, &$s44, _124);
_127 = ((frost$core$Object*) _126);
frost$core$Frost$ref$frost$core$Object$Q(_127);
_129 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_129);
*(&local1) = ((frost$collections$Array*) NULL);
_133 = ((frost$core$Object*) _126);
frost$core$Frost$ref$frost$core$Object$Q(_133);
_135 = *(&local1);
_136 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_136);
*(&local1) = _126;
_139 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_139);
_141 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_141);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:109
_144 = *(&local1);
_145 = ((frost$collections$Iterable*) _144);
_146 = _145;
ITable* $tmp45 = _146->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp45 = $tmp45->next;
}
_147 = $tmp45->methods[0];
_148 = _147(_146);
_149 = _148;
goto block5;
block5:;
_151 = _149;
ITable* $tmp46 = _151->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp46 = $tmp46->next;
}
_152 = $tmp46->methods[0];
_153 = _152(_151);
_154 = _153.value;
if (_154) goto block7; else goto block6;
block6:;
*(&local2) = ((frost$core$String*) NULL);
_157 = _149;
ITable* $tmp47 = _157->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp47 = $tmp47->next;
}
_158 = $tmp47->methods[1];
_159 = _158(_157);
_160 = ((frost$core$String*) _159);
_161 = ((frost$core$Object*) _160);
frost$core$Frost$ref$frost$core$Object$Q(_161);
_163 = *(&local2);
_164 = ((frost$core$Object*) _163);
frost$core$Frost$unref$frost$core$Object$Q(_164);
*(&local2) = _160;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:110
_168 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_169 = *(&local2);
frost$io$File$init$frost$core$String(_168, _169);
*(&local3) = ((frost$io$File*) NULL);
_172 = ((frost$core$Object*) _168);
frost$core$Frost$ref$frost$core$Object$Q(_172);
_174 = *(&local3);
_175 = ((frost$core$Object*) _174);
frost$core$Frost$unref$frost$core$Object$Q(_175);
*(&local3) = _168;
_178 = ((frost$core$Object*) _168);
frost$core$Frost$unref$frost$core$Object$Q(_178);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:111
_181 = *(&local0);
_182 = _181;
_183 = *(&local3);
// begin inline call to function frost.io.File.get_parent():frost.io.File? from Main.frost:111:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_186 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_183, &$s48);
_187 = &_186->path;
_188 = *_187;
_189 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_188);
*(&local5) = ((frost$core$String*) NULL);
_191 = ((frost$core$Object*) _189);
frost$core$Frost$ref$frost$core$Object$Q(_191);
_193 = *(&local5);
_194 = ((frost$core$Object*) _193);
frost$core$Frost$unref$frost$core$Object$Q(_194);
*(&local5) = _189;
_197 = ((frost$core$Object*) _189);
frost$core$Frost$unref$frost$core$Object$Q(_197);
_199 = ((frost$core$Object*) _186);
frost$core$Frost$unref$frost$core$Object$Q(_199);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_202 = *(&local5);
_203 = _202 == NULL;
_204 = (frost$core$Bit) {_203};
_205 = _204.value;
if (_205) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_208 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_208);
_210 = *(&local5);
_211 = ((frost$core$Object*) _210);
frost$core$Frost$unref$frost$core$Object$Q(_211);
*(&local5) = ((frost$core$String*) NULL);
*(&local4) = ((frost$io$File*) NULL);
_215 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_215);
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_219 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_220 = *(&local5);
_221 = _220 != NULL;
_222 = (frost$core$Bit) {_221};
_223 = _222.value;
if (_223) goto block11; else goto block12;
block12:;
_225 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s49, _225, &$s50);
abort(); // unreachable
block11:;
_228 = _220;
frost$io$File$init$frost$core$String(_219, _228);
_230 = _219;
_231 = ((frost$core$Object*) _230);
frost$core$Frost$ref$frost$core$Object$Q(_231);
_233 = ((frost$core$Object*) _219);
frost$core$Frost$unref$frost$core$Object$Q(_233);
_235 = *(&local5);
_236 = ((frost$core$Object*) _235);
frost$core$Frost$unref$frost$core$Object$Q(_236);
*(&local5) = ((frost$core$String*) NULL);
*(&local4) = _230;
_240 = ((frost$core$Object*) _230);
frost$core$Frost$ref$frost$core$Object$Q(_240);
goto block8;
block8:;
_243 = *(&local4);
_244 = _243 != NULL;
_245 = (frost$core$Bit) {_244};
_246 = _245.value;
if (_246) goto block13; else goto block14;
block14:;
_248 = (frost$core$Int) {111u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, _248, &$s52);
abort(); // unreachable
block13:;
_251 = _243;
_252 = ((frost$core$Object*) _251);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:111:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_255 = ($fn53) _252->$class->vtable[0];
_256 = _255(_252);
_257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s54, _256);
_258 = ((frost$core$Object*) _257);
frost$core$Frost$ref$frost$core$Object$Q(_258);
_260 = ((frost$core$Object*) _257);
frost$core$Frost$unref$frost$core$Object$Q(_260);
_262 = ((frost$core$Object*) _256);
frost$core$Frost$unref$frost$core$Object$Q(_262);
_265 = ((frost$core$Object*) _257);
frost$collections$Array$add$frost$collections$Array$T(_182, _265);
_267 = ((frost$core$Object*) _257);
frost$core$Frost$unref$frost$core$Object$Q(_267);
_269 = ((frost$core$Object*) _243);
frost$core$Frost$unref$frost$core$Object$Q(_269);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:112
_272 = *(&local3);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from Main.frost:112:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
// begin inline call to function frost.io.File.get_name():frost.core.String from File.frost:157:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:147
_277 = &_272->path;
_278 = *_277;
_279 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_278, &$s55);
*(&local8) = _279;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
_282 = *(&local8);
_283 = _282.nonnull;
_284 = (frost$core$Bit) {_283};
_285 = _284.value;
if (_285) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
_288 = &_272->path;
_289 = *_288;
_290 = &_272->path;
_291 = *_290;
_292 = *(&local8);
_293 = _292.nonnull;
_294 = (frost$core$Bit) {_293};
_295 = _294.value;
if (_295) goto block21; else goto block22;
block22:;
_297 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s56, _297, &$s57);
abort(); // unreachable
block21:;
_300 = ((frost$core$String$Index) _292.value);
_301 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_291, _300);
_302 = ((frost$core$String$Index$nullable) { _301, true });
_303 = (frost$core$Bit) {false};
_304 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_302, ((frost$core$String$Index$nullable) { .nonnull = false }), _303);
_305 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_289, _304);
_306 = ((frost$core$Object*) _305);
frost$core$Frost$ref$frost$core$Object$Q(_306);
_308 = ((frost$core$Object*) _305);
frost$core$Frost$unref$frost$core$Object$Q(_308);
*(&local7) = _305;
_311 = ((frost$core$Object*) _305);
frost$core$Frost$ref$frost$core$Object$Q(_311);
goto block17;
block20:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:152
_316 = &_272->path;
_317 = *_316;
_318 = ((frost$core$Object*) _317);
frost$core$Frost$ref$frost$core$Object$Q(_318);
*(&local7) = _317;
_321 = ((frost$core$Object*) _317);
frost$core$Frost$ref$frost$core$Object$Q(_321);
goto block17;
block19:;
goto block17;
block17:;
_325 = *(&local7);
*(&local9) = ((frost$core$String*) NULL);
_327 = ((frost$core$Object*) _325);
frost$core$Frost$ref$frost$core$Object$Q(_327);
_329 = *(&local9);
_330 = ((frost$core$Object*) _329);
frost$core$Frost$unref$frost$core$Object$Q(_330);
*(&local9) = _325;
_333 = ((frost$core$Object*) _325);
frost$core$Frost$unref$frost$core$Object$Q(_333);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_336 = *(&local9);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:158:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
_339 = frost$core$String$get_end$R$frost$core$String$Index(_336);
_340 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_336, &$s58, _339);
*(&local10) = _340;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_344 = *(&local10);
_345 = !_344.nonnull;
_346 = (frost$core$Bit) {_345};
_347 = _346.value;
if (_347) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_350 = *(&local9);
_351 = ((frost$core$Object*) _350);
frost$core$Frost$ref$frost$core$Object$Q(_351);
_353 = *(&local9);
_354 = ((frost$core$Object*) _353);
frost$core$Frost$unref$frost$core$Object$Q(_354);
*(&local9) = ((frost$core$String*) NULL);
_357 = *(&local7);
_358 = ((frost$core$Object*) _357);
frost$core$Frost$unref$frost$core$Object$Q(_358);
*(&local7) = ((frost$core$String*) NULL);
*(&local6) = _350;
_362 = ((frost$core$Object*) _350);
frost$core$Frost$ref$frost$core$Object$Q(_362);
goto block16;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_366 = *(&local9);
_367 = *(&local10);
_368 = (frost$core$Bit) {false};
_369 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _367, _368);
_370 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_366, _369);
_371 = ((frost$core$Object*) _370);
frost$core$Frost$ref$frost$core$Object$Q(_371);
_373 = ((frost$core$Object*) _370);
frost$core$Frost$unref$frost$core$Object$Q(_373);
_375 = *(&local9);
_376 = ((frost$core$Object*) _375);
frost$core$Frost$unref$frost$core$Object$Q(_376);
*(&local9) = ((frost$core$String*) NULL);
_379 = *(&local7);
_380 = ((frost$core$Object*) _379);
frost$core$Frost$unref$frost$core$Object$Q(_380);
*(&local7) = ((frost$core$String*) NULL);
*(&local6) = _370;
_384 = ((frost$core$Object*) _370);
frost$core$Frost$ref$frost$core$Object$Q(_384);
goto block16;
block16:;
_387 = *(&local6);
*(&local11) = ((frost$core$String*) NULL);
_389 = ((frost$core$Object*) _387);
frost$core$Frost$ref$frost$core$Object$Q(_389);
_391 = *(&local11);
_392 = ((frost$core$Object*) _391);
frost$core$Frost$unref$frost$core$Object$Q(_392);
*(&local11) = _387;
_395 = ((frost$core$Object*) _387);
frost$core$Frost$unref$frost$core$Object$Q(_395);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:113
_398 = *(&local11);
_399 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_398, &$s59);
_400 = _399.value;
if (_400) goto block26; else goto block27;
block27:;
_402 = (frost$core$Int) {113u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s60, _402);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:114
_406 = *(&local11);
_407 = (frost$core$Int) {3u};
_408 = ((frost$core$Int$nullable) { _407, true });
_409 = (frost$core$Bit) {false};
_410 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(_408, ((frost$core$Int$nullable) { .nonnull = false }), _409);
_411 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String(_406, _410);
_412 = ((frost$core$Object*) _411);
frost$core$Frost$ref$frost$core$Object$Q(_412);
_414 = *(&local11);
_415 = ((frost$core$Object*) _414);
frost$core$Frost$unref$frost$core$Object$Q(_415);
*(&local11) = _411;
_418 = ((frost$core$Object*) _411);
frost$core$Frost$unref$frost$core$Object$Q(_418);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:115
_421 = *(&local0);
_422 = _421;
_423 = *(&local11);
_424 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s61, _423);
_425 = ((frost$core$Object*) _424);
frost$collections$Array$add$frost$collections$Array$T(_422, _425);
_427 = ((frost$core$Object*) _424);
frost$core$Frost$unref$frost$core$Object$Q(_427);
_429 = *(&local11);
_430 = ((frost$core$Object*) _429);
frost$core$Frost$unref$frost$core$Object$Q(_430);
*(&local11) = ((frost$core$String*) NULL);
_433 = *(&local6);
_434 = ((frost$core$Object*) _433);
frost$core$Frost$unref$frost$core$Object$Q(_434);
*(&local6) = ((frost$core$String*) NULL);
_437 = *(&local4);
_438 = ((frost$core$Object*) _437);
frost$core$Frost$unref$frost$core$Object$Q(_438);
*(&local4) = ((frost$io$File*) NULL);
_441 = *(&local3);
_442 = ((frost$core$Object*) _441);
frost$core$Frost$unref$frost$core$Object$Q(_442);
*(&local3) = ((frost$io$File*) NULL);
_445 = _159;
frost$core$Frost$unref$frost$core$Object$Q(_445);
_447 = *(&local2);
_448 = ((frost$core$Object*) _447);
frost$core$Frost$unref$frost$core$Object$Q(_448);
*(&local2) = ((frost$core$String*) NULL);
goto block5;
block7:;
_452 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_452);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:117
_455 = *(&local0);
_456 = _455;
_457 = ((frost$core$Object*) &$s62);
frost$collections$Array$add$frost$collections$Array$T(_456, _457);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:118
_460 = *(&local0);
_461 = _460;
_462 = ((frost$core$Object*) &$s63);
frost$collections$Array$add$frost$collections$Array$T(_461, _462);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:119
_465 = &param0->debug;
_466 = *_465;
_467 = _466.value;
if (_467) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:120
_470 = *(&local0);
_471 = _470;
_472 = ((frost$core$Object*) &$s64);
frost$collections$Array$add$frost$collections$Array$T(_471, _472);
goto block29;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:122
_476 = *(&local0);
_477 = _476;
_478 = ((frost$core$Object*) &$s65);
frost$collections$Array$add$frost$collections$Array$T(_477, _478);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:123
_481 = *(&local0);
_482 = _481;
_483 = &param4->path;
_484 = *_483;
_485 = ((frost$core$Object*) _484);
frost$collections$Array$add$frost$collections$Array$T(_482, _485);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:124
*(&local12) = ((frost$core$System$Process*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:125
*(&local13) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:126
_492 = &param0->clang;
_493 = *_492;
_494 = &_493->path;
_495 = *_494;
_496 = *(&local0);
_497 = ((frost$collections$ListView*) _496);
_498 = frost$core$System$exec$frost$core$String$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$Maybe$LTfrost$core$System$Process$GT(_495, _497);
_499 = _498;
_500 = &_499->$rawValue;
_501 = *_500;
_502 = _501.value;
_503 = _502 == 0u;
if (_503) goto block32; else goto block33;
block33:;
_505 = &_498->$data.$ERROR.field0;
_506 = *_505;
_507 = ((frost$core$Object*) _506);
frost$core$Frost$ref$frost$core$Object$Q(_507);
*(&local13) = _506;
_510 = ((frost$core$Object*) _498);
frost$core$Frost$unref$frost$core$Object$Q(_510);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:131
_546 = *(&local13);
_547 = ((frost$core$Object*) _546);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:131:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_550 = ($fn66) _547->$class->vtable[0];
_551 = _550(_547);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_551);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_558 = ((frost$core$Object*) _551);
frost$core$Frost$unref$frost$core$Object$Q(_558);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:132
_562 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_562);
_564 = (frost$core$Int) {132u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s67, _564, &$s68);
abort(); // unreachable
block32:;
_513 = &_498->$data.$SUCCESS.field0;
_514 = *_513;
_515 = ((frost$core$System$Process*) _514);
_516 = ((frost$core$Object*) _515);
frost$core$Frost$ref$frost$core$Object$Q(_516);
_518 = *(&local12);
_519 = ((frost$core$Object*) _518);
frost$core$Frost$unref$frost$core$Object$Q(_519);
*(&local12) = _515;
_522 = ((frost$core$Object*) _498);
frost$core$Frost$unref$frost$core$Object$Q(_522);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:127
_525 = *(&local12);
_526 = frost$core$System$Process$standardOutput$R$frost$io$InputStream(_525);
_527 = ($fn69) _526->$class->vtable[14];
_528 = _527(_526);
frost$io$Console$printError$frost$core$String(_528);
_530 = ((frost$core$Object*) _528);
frost$core$Frost$unref$frost$core$Object$Q(_530);
_532 = ((frost$core$Object*) _526);
frost$core$Frost$unref$frost$core$Object$Q(_532);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:128
_535 = *(&local12);
_536 = frost$core$System$Process$standardError$R$frost$io$InputStream(_535);
_537 = ($fn70) _536->$class->vtable[14];
_538 = _537(_536);
frost$io$Console$printError$frost$core$String(_538);
_540 = ((frost$core$Object*) _538);
frost$core$Frost$unref$frost$core$Object$Q(_540);
_542 = ((frost$core$Object*) _536);
frost$core$Frost$unref$frost$core$Object$Q(_542);
_567 = *(&local13);
_568 = ((frost$core$Object*) _567);
frost$core$Frost$unref$frost$core$Object$Q(_568);
*(&local13) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:134
_572 = *(&local12);
frost$core$System$Process$waitFor$R$frost$core$Int(&_573, _572);
*(&local14) = _573;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:135
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:135:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_578 = param5.value;
_579 = !_578;
_580 = (frost$core$Bit) {_579};
_582 = _580.value;
if (_582) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:136
*(&local15) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:137
_587 = frost$io$File$delete$R$frost$core$Error$Q(param3);
_588 = _587 == NULL;
if (_588) goto block41; else goto block42;
block42:;
_590 = ((frost$core$Object*) _587);
frost$core$Frost$ref$frost$core$Object$Q(_590);
_592 = _587 != NULL;
_593 = (frost$core$Bit) {_592};
_594 = _593.value;
if (_594) goto block43; else goto block44;
block44:;
_596 = (frost$core$Int) {137u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s71, _596, &$s72);
abort(); // unreachable
block43:;
_599 = _587;
*(&local15) = _599;
_601 = ((frost$core$Object*) _587);
frost$core$Frost$unref$frost$core$Object$Q(_601);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:140
_608 = *(&local15);
_609 = ((frost$core$Object*) _608);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:140:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_612 = ($fn73) _609->$class->vtable[0];
_613 = _612(_609);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_613);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_620 = ((frost$core$Object*) _613);
frost$core$Frost$unref$frost$core$Object$Q(_620);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:141
_624 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_624);
_626 = (frost$core$Int) {141u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s74, _626, &$s75);
abort(); // unreachable
block41:;
_604 = ((frost$core$Object*) _587);
frost$core$Frost$unref$frost$core$Object$Q(_604);
_629 = *(&local15);
_630 = ((frost$core$Object*) _629);
frost$core$Frost$unref$frost$core$Object$Q(_630);
*(&local15) = ((frost$core$Error*) NULL);
goto block37;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:144
_635 = *(&local14);
_636 = (frost$core$Int) {0u};
_637 = _635.value;
_638 = _636.value;
_639 = _637 != _638;
_640 = (frost$core$Bit) {_639};
_641 = _640.value;
if (_641) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:145
_644 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_644);
_646 = (frost$core$Int) {145u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s76, _646, &$s77);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:147
_650 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_650);
_652 = *(&local12);
_653 = ((frost$core$Object*) _652);
frost$core$Frost$unref$frost$core$Object$Q(_653);
*(&local12) = ((frost$core$System$Process*) NULL);
_656 = *(&local1);
_657 = ((frost$core$Object*) _656);
frost$core$Frost$unref$frost$core$Object$Q(_657);
*(&local1) = ((frost$collections$Array*) NULL);
_660 = *(&local0);
_661 = ((frost$core$Object*) _660);
frost$core$Frost$unref$frost$core$Object$Q(_661);
*(&local0) = ((frost$collections$Array*) NULL);
return param4;

}
void org$frostlang$frostc$Main$printUsage$frost$io$OutputStream(void* rawSelf, frost$io$OutputStream* param1) {
org$frostlang$frostc$Main* param0 = (org$frostlang$frostc$Main*) rawSelf;

frost$core$Error* local0 = NULL;
$fn78 _3;
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
$fn79 _24;
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
$fn80 _45;
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
$fn81 _66;
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
$fn82 _87;
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
$fn83 _108;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:151
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:152
_3 = ($fn84) param1->$class->vtable[19];
_4 = _3(param1, &$s85);
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
_13 = (frost$core$Int) {152u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s86, _13, &$s87);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:153
_24 = ($fn88) param1->$class->vtable[21];
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
_34 = (frost$core$Int) {153u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s89, _34, &$s90);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:154
_45 = ($fn91) param1->$class->vtable[19];
_46 = _45(param1, &$s92);
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
_55 = (frost$core$Int) {154u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s93, _55, &$s94);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:155
_66 = ($fn95) param1->$class->vtable[21];
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
_76 = (frost$core$Int) {155u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s96, _76, &$s97);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:156
_87 = ($fn98) param1->$class->vtable[19];
_88 = _87(param1, &$s99);
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
_97 = (frost$core$Int) {156u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s100, _97, &$s101);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:157
_108 = ($fn102) param1->$class->vtable[19];
_109 = _108(param1, &$s103);
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
_118 = (frost$core$Int) {157u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s104, _118, &$s105);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:160
_130 = (frost$core$Int) {160u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s106, _130);
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
frost$core$String* local11 = NULL;
frost$core$Error* local12 = NULL;
frost$io$File* local13 = NULL;
frost$core$Error* local14 = NULL;
frost$io$File* local15 = NULL;
frost$core$String* local16 = NULL;
frost$core$String* local17 = NULL;
frost$core$Int$nullable local18;
frost$core$Int64$nullable local19;
frost$core$Int$nullable local20;
frost$core$String* local21 = NULL;
frost$core$Int$nullable local22;
frost$core$Int64$nullable local23;
frost$core$Int$nullable local24;
frost$core$String* local25 = NULL;
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
org$frostlang$frostc$Main$Format local38;
org$frostlang$frostc$Main$Format local39;
org$frostlang$frostc$Main$Format local40;
org$frostlang$frostc$Main$Format local41;
frost$io$File* local42 = NULL;
org$frostlang$frostc$Main$Format local43;
org$frostlang$frostc$Main$Format local44;
frost$io$File* local45 = NULL;
org$frostlang$frostc$Main$Format local46;
org$frostlang$frostc$Main$Format local47;
org$frostlang$frostc$Main$Format local48;
org$frostlang$frostc$Main$Format local49;
frost$core$String* local50 = NULL;
frost$io$File* local51 = NULL;
frost$core$String* local52 = NULL;
frost$core$String* local53 = NULL;
frost$core$String* local54 = NULL;
frost$core$String$Index$nullable local55;
org$frostlang$frostc$Main$Format local56;
org$frostlang$frostc$Main$Format local57;
frost$core$Int local58;
frost$core$Int local59;
org$frostlang$frostc$CodeGenerator* local60 = NULL;
frost$core$Error* local61 = NULL;
frost$io$File* local62 = NULL;
frost$core$String* local63 = NULL;
frost$core$String* local64 = NULL;
frost$core$String* local65 = NULL;
frost$core$String$Index$nullable local66;
frost$core$Error* local67 = NULL;
org$frostlang$frostc$Compiler$Settings* local68 = NULL;
frost$threads$MessageQueue* local69 = NULL;
org$frostlang$frostc$Compiler* local70 = NULL;
org$frostlang$frostc$Main$Format local71;
org$frostlang$frostc$Main$Format local72;
frost$io$File* local73 = NULL;
org$frostlang$frostc$ClassDecl* local74 = NULL;
org$frostlang$frostc$ClassDecl* local75 = NULL;
org$frostlang$frostc$ClassDecl* local76 = NULL;
frost$io$File* local77 = NULL;
org$frostlang$frostc$Main$Format local78;
org$frostlang$frostc$Main$Format local79;
org$frostlang$frostc$ClassDecl* local80 = NULL;
frost$threads$ScopedLock* local81 = NULL;
org$frostlang$frostc$Compiler$Message* local82 = NULL;
frost$core$String* local83 = NULL;
frost$core$Int local84;
frost$core$Int local85;
frost$core$String* local86 = NULL;
frost$core$String* local87 = NULL;
frost$core$Int local88;
frost$core$Int local89;
frost$core$String* local90 = NULL;
frost$io$File* local91 = NULL;
frost$core$String* local92 = NULL;
frost$core$String* local93 = NULL;
frost$core$String* local94 = NULL;
frost$core$String$Index$nullable local95;
frost$io$File* local96 = NULL;
frost$core$String* local97 = NULL;
frost$core$String* local98 = NULL;
frost$core$String* local99 = NULL;
frost$core$String$Index$nullable local100;
org$frostlang$frostc$Main$Arguments* _1;
frost$core$Object* _4;
org$frostlang$frostc$Main$Arguments* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$collections$Array* _13;
frost$collections$Array* _14;
frost$core$Object* _17;
frost$collections$Array* _19;
frost$core$Object* _20;
frost$core$Object* _23;
frost$collections$Array* _26;
frost$collections$Array* _27;
frost$core$Object* _30;
frost$collections$Array* _32;
frost$core$Object* _33;
frost$core$Object* _36;
frost$collections$Array* _39;
frost$collections$Array* _40;
frost$core$Object* _43;
frost$collections$Array* _45;
frost$core$Object* _46;
frost$core$Object* _49;
frost$collections$Array* _52;
frost$collections$Array* _53;
frost$core$Object* _56;
frost$collections$Array* _58;
frost$core$Object* _59;
frost$core$Object* _62;
frost$core$Object* _66;
frost$io$File* _68;
frost$core$Object* _69;
frost$core$Int _73;
frost$core$Int _76;
frost$core$Object* _82;
frost$core$String* _84;
frost$core$Object* _85;
frost$core$Bit _89;
org$frostlang$frostc$Main$Arguments* _93;
$fn107 _94;
frost$core$Bit _95;
bool _98;
bool _99;
frost$core$Bit _100;
bool _102;
org$frostlang$frostc$Main$Arguments* _105;
$fn108 _106;
frost$core$String* _107;
frost$core$Object* _109;
frost$core$String* _111;
frost$core$Object* _112;
frost$core$Object* _115;
frost$core$String* _118;
frost$core$Bit _119;
bool _120;
frost$io$File* _125;
frost$core$Object* _128;
frost$io$File* _130;
frost$core$Object* _131;
frost$core$Object* _134;
frost$io$InputStream* _137;
frost$io$File* _138;
frost$core$Maybe* _139;
frost$core$Maybe* _140;
frost$core$Int* _141;
frost$core$Int _142;
int64_t _143;
bool _144;
frost$core$Error** _146;
frost$core$Error* _147;
frost$core$Object* _148;
frost$core$Object* _151;
frost$core$Object* _153;
frost$io$File* _155;
frost$core$Object* _156;
frost$core$Object** _160;
frost$core$Object* _161;
frost$io$OutputStream* _162;
$fn109 _163;
frost$core$Maybe* _164;
frost$core$Maybe* _165;
frost$core$Int* _166;
frost$core$Int _167;
int64_t _168;
bool _169;
frost$core$Error** _171;
frost$core$Error* _172;
frost$core$Object* _173;
frost$core$Object* _176;
frost$core$Object* _178;
frost$core$Object* _180;
frost$io$File* _182;
frost$core$Object* _183;
frost$core$Object** _187;
frost$core$Object* _188;
frost$core$Int _189;
frost$core$Object* _190;
frost$core$Object* _192;
frost$core$Object* _194;
frost$collections$Array* _197;
frost$collections$Array* _198;
frost$io$File* _199;
frost$core$Object* _200;
frost$io$File* _202;
frost$core$Object* _203;
frost$core$Error* _229;
frost$core$Object* _230;
frost$core$Error* _208;
frost$core$Object* _209;
$fn110 _212;
frost$core$String* _213;
frost$core$Object* _220;
frost$core$Int _224;
frost$core$Int _226;
frost$core$Bit _234;
bool _235;
frost$io$File* _238;
bool _239;
frost$core$Bit _240;
bool _241;
frost$core$Int _254;
frost$core$Int _256;
frost$io$File* _260;
org$frostlang$frostc$Main$Arguments* _261;
$fn111 _262;
frost$core$String* _263;
frost$io$File* _265;
frost$core$Object* _266;
frost$io$File* _268;
frost$core$Object* _269;
frost$core$Object* _272;
frost$core$Object* _274;
frost$io$File* _279;
bool _280;
frost$core$Bit _281;
bool _282;
frost$core$Int _284;
frost$io$File* _287;
frost$io$File* _290;
frost$core$String** _291;
frost$core$String* _292;
frost$core$String* _293;
frost$core$Object* _295;
frost$core$String* _297;
frost$core$Object* _298;
frost$core$Object* _301;
frost$core$Object* _303;
frost$core$String* _306;
bool _307;
frost$core$Bit _308;
bool _309;
frost$core$Object* _312;
frost$core$String* _314;
frost$core$Object* _315;
frost$core$Object* _319;
frost$io$File* _323;
frost$core$String* _324;
bool _325;
frost$core$Bit _326;
bool _327;
frost$core$Int _329;
frost$core$String* _332;
frost$io$File* _334;
frost$core$Object* _335;
frost$core$Object* _337;
frost$core$String* _339;
frost$core$Object* _340;
frost$core$Object* _344;
frost$io$File* _347;
bool _348;
frost$core$Bit _349;
bool _350;
frost$core$Int _352;
frost$io$File* _355;
frost$core$Error* _356;
bool _357;
frost$core$Object* _359;
bool _361;
frost$core$Bit _362;
bool _363;
frost$core$Int _365;
frost$core$Error* _368;
frost$core$Object* _370;
frost$core$Object* _372;
frost$io$File* _374;
frost$core$Object* _375;
frost$core$Error* _389;
frost$core$Object* _390;
$fn112 _393;
frost$core$String* _394;
frost$core$Object* _401;
frost$core$Int _405;
frost$core$Int _407;
frost$core$Object* _379;
frost$core$Object* _381;
frost$io$File* _383;
frost$core$Object* _384;
frost$core$Error* _410;
frost$core$Object* _411;
frost$core$Bit _415;
bool _416;
org$frostlang$frostc$Main$Arguments* _419;
$fn113 _420;
frost$core$String* _421;
frost$core$Object* _423;
frost$core$String* _425;
frost$core$Object* _426;
frost$core$Object* _429;
frost$core$String* _432;
frost$core$Int64$nullable _435;
frost$core$Int64$nullable _438;
bool _439;
frost$core$Bit _440;
bool _441;
frost$core$Int64$nullable _444;
bool _445;
frost$core$Bit _446;
bool _447;
frost$core$Int _449;
frost$core$Int64 _452;
int64_t _455;
int64_t _456;
frost$core$Int _457;
frost$core$Int$nullable _459;
frost$core$Int$nullable _465;
frost$core$Int$nullable _468;
bool _469;
frost$core$Bit _470;
bool _471;
frost$core$Int$nullable _473;
bool _474;
frost$core$Bit _475;
bool _476;
frost$core$Int _478;
frost$core$Int _481;
frost$core$Int _482;
int64_t _483;
int64_t _484;
bool _485;
frost$core$Bit _486;
bool _487;
frost$core$Int$nullable _489;
bool _490;
frost$core$Bit _491;
bool _492;
frost$core$Int _494;
frost$core$Int _497;
frost$core$Int _498;
int64_t _499;
int64_t _500;
bool _501;
frost$core$Bit _502;
bool _503;
frost$core$Int _516;
frost$core$Int _518;
frost$core$Int$nullable _522;
bool _523;
frost$core$Bit _524;
bool _525;
frost$core$Int _527;
frost$core$Int _530;
frost$core$String* _532;
frost$core$Object* _533;
frost$core$Bit _537;
bool _538;
org$frostlang$frostc$Main$Arguments* _541;
$fn114 _542;
frost$core$String* _543;
frost$core$Object* _545;
frost$core$String* _547;
frost$core$Object* _548;
frost$core$Object* _551;
frost$core$String* _554;
frost$core$Int64$nullable _557;
frost$core$Int64$nullable _560;
bool _561;
frost$core$Bit _562;
bool _563;
frost$core$Int64$nullable _566;
bool _567;
frost$core$Bit _568;
bool _569;
frost$core$Int _571;
frost$core$Int64 _574;
int64_t _577;
int64_t _578;
frost$core$Int _579;
frost$core$Int$nullable _581;
frost$core$Int$nullable _587;
frost$core$Int$nullable _590;
bool _591;
frost$core$Bit _592;
bool _593;
frost$core$Int$nullable _595;
bool _596;
frost$core$Bit _597;
bool _598;
frost$core$Int _600;
frost$core$Int _603;
frost$core$Int _604;
int64_t _605;
int64_t _606;
bool _607;
frost$core$Bit _608;
bool _609;
frost$core$Int$nullable _611;
bool _612;
frost$core$Bit _613;
bool _614;
frost$core$Int _616;
frost$core$Int _619;
frost$core$Int _620;
int64_t _621;
int64_t _622;
bool _623;
frost$core$Bit _624;
bool _625;
frost$core$Int _638;
frost$core$Int _640;
frost$core$Int$nullable _644;
bool _645;
frost$core$Bit _646;
bool _647;
frost$core$Int _649;
frost$core$Int _652;
frost$core$String* _654;
frost$core$Object* _655;
frost$core$Bit _659;
bool _660;
org$frostlang$frostc$Main$Format$nullable _663;
bool _664;
frost$core$Bit _665;
bool _666;
frost$core$Int _679;
frost$core$Int _681;
org$frostlang$frostc$Main$Arguments* _685;
$fn115 _686;
frost$core$String* _687;
frost$core$Object* _689;
frost$core$String* _691;
frost$core$Object* _692;
frost$core$Object* _695;
frost$core$String* _698;
frost$core$Bit _699;
bool _700;
frost$core$Int _703;
frost$core$Int* _706;
org$frostlang$frostc$Main$Format _708;
org$frostlang$frostc$Main$Format _711;
org$frostlang$frostc$Main$Format$nullable _712;
frost$core$Bit _715;
bool _716;
frost$core$Int _719;
frost$core$Int* _722;
org$frostlang$frostc$Main$Format _724;
org$frostlang$frostc$Main$Format _727;
org$frostlang$frostc$Main$Format$nullable _728;
frost$core$Bit _731;
bool _732;
frost$core$Int _735;
frost$core$Int* _738;
org$frostlang$frostc$Main$Format _740;
org$frostlang$frostc$Main$Format _743;
org$frostlang$frostc$Main$Format$nullable _744;
frost$core$Bit _747;
bool _748;
frost$core$Int _751;
frost$core$Int* _754;
org$frostlang$frostc$Main$Format _756;
org$frostlang$frostc$Main$Format _759;
org$frostlang$frostc$Main$Format$nullable _760;
frost$core$Bit _763;
bool _764;
frost$core$Int _767;
frost$core$Int* _770;
org$frostlang$frostc$Main$Format _772;
org$frostlang$frostc$Main$Format _775;
org$frostlang$frostc$Main$Format$nullable _776;
frost$core$Bit _779;
bool _780;
frost$core$Int _783;
frost$core$Int* _786;
org$frostlang$frostc$Main$Format _788;
org$frostlang$frostc$Main$Format _791;
org$frostlang$frostc$Main$Format$nullable _792;
frost$core$Bit _795;
bool _796;
frost$core$Int _799;
frost$core$Int* _802;
org$frostlang$frostc$Main$Format _804;
org$frostlang$frostc$Main$Format _807;
org$frostlang$frostc$Main$Format$nullable _808;
frost$core$Bit _811;
bool _812;
frost$core$Int _815;
frost$core$Int* _818;
org$frostlang$frostc$Main$Format _820;
org$frostlang$frostc$Main$Format _823;
org$frostlang$frostc$Main$Format$nullable _824;
frost$core$String* _828;
frost$core$String* _829;
frost$core$String* _830;
frost$core$Object* _840;
frost$core$Object* _842;
frost$core$Int _845;
frost$core$Int _847;
frost$core$String* _850;
frost$core$Object* _851;
frost$core$Bit _855;
bool _856;
frost$collections$Array* _859;
frost$collections$Array* _860;
frost$io$File* _861;
org$frostlang$frostc$Main$Arguments* _862;
$fn116 _863;
frost$core$String* _864;
frost$core$Object* _866;
frost$core$Object* _868;
frost$core$Object* _870;
frost$core$Bit _873;
bool _874;
frost$collections$Array* _877;
frost$collections$Array* _878;
frost$io$File* _879;
org$frostlang$frostc$Main$Arguments* _880;
$fn117 _881;
frost$core$String* _882;
frost$core$Object* _884;
frost$core$Object* _886;
frost$core$Object* _888;
frost$core$Bit _891;
bool _892;
frost$collections$Array* _895;
frost$collections$Array* _896;
org$frostlang$frostc$Main$Arguments* _897;
$fn118 _898;
frost$core$String* _899;
frost$core$Object* _900;
frost$core$Object* _902;
frost$core$Bit _905;
bool _906;
org$frostlang$frostc$Main$Arguments* _909;
$fn119 _910;
frost$core$String* _911;
frost$core$String* _912;
frost$core$Object* _913;
frost$core$String* _915;
frost$core$Object* _916;
frost$core$Object* _919;
frost$core$String* _923;
frost$core$Bit _924;
bool _925;
frost$io$File* _928;
frost$core$String* _929;
frost$core$Object* _932;
frost$io$File* _934;
frost$core$Object* _935;
frost$core$Object* _938;
frost$collections$Array* _941;
frost$collections$Array* _942;
frost$io$File* _943;
frost$core$Object* _944;
frost$io$File* _946;
frost$core$Object* _947;
frost$core$String* _953;
frost$core$String* _954;
frost$core$String* _955;
frost$core$Object* _965;
frost$core$Object* _967;
frost$core$Int _970;
frost$core$Int _972;
frost$core$String* _976;
frost$core$Object* _977;
org$frostlang$frostc$Main$Format$nullable _982;
bool _983;
frost$core$Bit _984;
bool _985;
org$frostlang$frostc$Main$Format$nullable _987;
bool _988;
frost$core$Bit _989;
bool _990;
frost$core$Int _992;
frost$core$Equatable* _995;
frost$core$Equatable* _996;
frost$core$Int _997;
frost$core$Int* _1000;
org$frostlang$frostc$Main$Format _1002;
org$frostlang$frostc$Main$Format _1005;
frost$core$Equatable* _1006;
$fn120 _1007;
frost$core$Bit _1008;
bool _1009;
frost$core$Object* _1010;
frost$core$Object* _1012;
frost$collections$Array* _1016;
frost$collections$Array* _1017;
frost$io$File* _1018;
frost$core$String* _1019;
frost$io$File* _1021;
frost$core$Object* _1022;
frost$core$Object* _1024;
frost$core$Object* _1026;
frost$core$Object* _1028;
frost$collections$Array* _1032;
frost$collections$Array* _1033;
frost$io$File** _1034;
frost$io$File* _1035;
frost$core$Object* _1036;
frost$io$File* _1039;
frost$core$String* _1040;
frost$core$Object* _1043;
frost$io$File* _1045;
frost$core$Object* _1046;
frost$core$Object* _1049;
frost$core$Object* _1051;
frost$io$File* _1054;
frost$core$Object* _1056;
frost$io$File** _1058;
frost$io$File* _1059;
frost$core$Object* _1060;
frost$io$File** _1062;
frost$core$Object* _1064;
frost$collections$Array* _1067;
frost$collections$CollectionView* _1068;
$fn121 _1069;
frost$core$Int _1070;
frost$core$Int _1071;
int64_t _1074;
int64_t _1075;
bool _1076;
frost$core$Bit _1077;
bool _1079;
frost$core$Int _1092;
frost$core$Int _1094;
org$frostlang$frostc$Main$Format$nullable _1098;
bool _1099;
frost$core$Bit _1100;
bool _1101;
frost$core$Int _1104;
frost$core$Int* _1107;
org$frostlang$frostc$Main$Format _1109;
org$frostlang$frostc$Main$Format _1112;
org$frostlang$frostc$Main$Format$nullable _1113;
frost$io$File* _1117;
bool _1118;
frost$core$Bit _1119;
bool _1120;
org$frostlang$frostc$Main$Format$nullable _1122;
bool _1123;
frost$core$Bit _1124;
bool _1125;
frost$core$Int _1127;
frost$core$Equatable* _1130;
frost$core$Equatable* _1131;
frost$core$Int _1132;
frost$core$Int* _1135;
org$frostlang$frostc$Main$Format _1137;
org$frostlang$frostc$Main$Format _1140;
frost$core$Equatable* _1141;
$fn122 _1142;
frost$core$Bit _1143;
bool _1144;
frost$core$Object* _1145;
frost$core$Object* _1147;
frost$collections$Array* _1151;
frost$collections$CollectionView* _1152;
$fn123 _1153;
frost$core$Int _1154;
frost$core$Int _1155;
int64_t _1158;
int64_t _1159;
bool _1160;
frost$core$Bit _1161;
bool _1163;
org$frostlang$frostc$Main$Format$nullable _1168;
bool _1169;
frost$core$Bit _1170;
bool _1171;
frost$core$Int _1173;
org$frostlang$frostc$Main$Format _1176;
frost$core$Int _1177;
frost$core$Int _1178;
int64_t _1181;
int64_t _1182;
bool _1183;
frost$core$Bit _1184;
bool _1186;
frost$core$Object* _1189;
frost$core$String* _1191;
frost$core$Object* _1192;
frost$core$Int _1196;
int64_t _1199;
int64_t _1200;
bool _1201;
frost$core$Bit _1202;
bool _1204;
frost$core$Object* _1207;
frost$core$String* _1209;
frost$core$Object* _1210;
frost$core$Int _1214;
int64_t _1217;
int64_t _1218;
bool _1219;
frost$core$Bit _1220;
bool _1222;
frost$core$Object* _1225;
frost$core$String* _1227;
frost$core$Object* _1228;
frost$core$Int _1232;
int64_t _1235;
int64_t _1236;
bool _1237;
frost$core$Bit _1238;
bool _1240;
frost$core$Object* _1243;
frost$core$String* _1245;
frost$core$Object* _1246;
frost$core$Int _1250;
int64_t _1253;
int64_t _1254;
bool _1255;
frost$core$Bit _1256;
bool _1258;
frost$core$Object* _1261;
frost$core$String* _1263;
frost$core$Object* _1264;
frost$core$Int _1279;
frost$core$Int _1281;
frost$collections$Array* _1285;
frost$collections$Array* _1286;
frost$core$Int _1287;
frost$core$Int _1289;
int64_t _1290;
int64_t _1291;
bool _1292;
frost$core$Bit _1293;
bool _1294;
frost$collections$CollectionView* _1296;
$fn124 _1297;
frost$core$Int _1298;
int64_t _1299;
int64_t _1300;
bool _1301;
frost$core$Bit _1302;
bool _1303;
frost$core$Int _1305;
frost$core$Object*** _1309;
frost$core$Object** _1310;
frost$core$Int64 _1311;
int64_t _1312;
frost$core$Object* _1313;
frost$core$Object* _1314;
frost$io$File* _1317;
frost$core$String* _1318;
frost$io$File* _1323;
frost$core$String** _1324;
frost$core$String* _1325;
frost$core$String* _1326;
frost$core$Object* _1328;
frost$core$String* _1330;
frost$core$Object* _1331;
frost$core$Object* _1334;
frost$core$Object* _1336;
frost$core$String* _1339;
bool _1340;
frost$core$Bit _1341;
bool _1342;
frost$core$Object* _1345;
frost$core$String* _1347;
frost$core$Object* _1348;
frost$core$Object* _1352;
frost$io$File* _1356;
frost$core$String* _1357;
bool _1358;
frost$core$Bit _1359;
bool _1360;
frost$core$Int _1362;
frost$core$String* _1365;
frost$io$File* _1367;
frost$core$Object* _1368;
frost$core$Object* _1370;
frost$core$String* _1372;
frost$core$Object* _1373;
frost$core$Object* _1377;
frost$io$File* _1380;
bool _1381;
frost$core$Bit _1382;
bool _1383;
frost$core$Int _1385;
frost$io$File* _1388;
frost$core$String* _1391;
frost$core$Object* _1393;
frost$core$String* _1395;
frost$core$Object* _1396;
frost$core$Object* _1399;
frost$core$String* _1402;
frost$core$String$Index$nullable _1403;
frost$core$String$Index$nullable _1406;
bool _1407;
frost$core$Bit _1408;
bool _1409;
frost$core$String* _1412;
frost$core$Object* _1413;
frost$core$String* _1415;
frost$core$Object* _1416;
frost$core$Object* _1420;
frost$core$String* _1424;
frost$core$String$Index$nullable _1425;
frost$core$Bit _1426;
frost$core$Range$LTfrost$core$String$Index$Q$GT _1427;
frost$core$String* _1428;
frost$core$Object* _1429;
frost$core$Object* _1431;
frost$core$String* _1433;
frost$core$Object* _1434;
frost$core$Object* _1438;
frost$core$String* _1441;
frost$core$String* _1442;
frost$io$File* _1443;
frost$core$Object* _1444;
frost$core$Object* _1446;
frost$core$Object* _1448;
frost$core$Object* _1450;
frost$core$String* _1452;
frost$core$Object* _1453;
frost$core$Object* _1456;
frost$io$File* _1458;
frost$core$Object* _1459;
frost$io$File* _1463;
frost$core$Object* _1464;
frost$io$File* _1466;
frost$core$Object* _1467;
frost$core$Object* _1470;
frost$core$Object* _1472;
frost$core$String* _1474;
frost$core$Object* _1475;
org$frostlang$frostc$Main$Format$nullable _1480;
bool _1481;
frost$core$Bit _1482;
bool _1483;
frost$core$Int _1485;
frost$core$Equatable* _1488;
frost$core$Equatable* _1489;
frost$core$Int _1490;
frost$core$Int* _1493;
org$frostlang$frostc$Main$Format _1495;
org$frostlang$frostc$Main$Format _1498;
frost$core$Equatable* _1499;
$fn125 _1500;
frost$core$Bit _1501;
bool _1502;
frost$core$Object* _1503;
frost$core$Object* _1505;
frost$core$Int _1519;
frost$core$Int _1521;
frost$core$Int _1536;
frost$core$Int _1538;
frost$core$Int _1544;
frost$core$Int _1547;
frost$core$Object* _1552;
org$frostlang$frostc$CodeGenerator* _1554;
frost$core$Object* _1555;
org$frostlang$frostc$Main$Format$nullable _1559;
bool _1560;
frost$core$Bit _1561;
bool _1562;
frost$core$Int _1564;
org$frostlang$frostc$Main$Format _1567;
frost$core$Int _1568;
frost$core$Int _1569;
int64_t _1572;
int64_t _1573;
bool _1574;
frost$core$Bit _1575;
bool _1577;
frost$core$Int _1579;
int64_t _1582;
int64_t _1583;
bool _1584;
frost$core$Bit _1585;
bool _1587;
frost$core$Int _1589;
int64_t _1592;
int64_t _1593;
bool _1594;
frost$core$Bit _1595;
bool _1597;
org$frostlang$frostc$LLVMCodeGenerator* _1602;
frost$core$String* _1603;
frost$io$File* _1604;
bool _1605;
frost$core$Bit _1606;
bool _1607;
frost$core$Int _1609;
frost$io$File* _1612;
frost$io$File* _1617;
frost$core$String** _1618;
frost$core$String* _1619;
frost$core$String* _1620;
frost$core$Object* _1622;
frost$core$String* _1624;
frost$core$Object* _1625;
frost$core$Object* _1628;
frost$core$Object* _1630;
frost$core$String* _1633;
bool _1634;
frost$core$Bit _1635;
bool _1636;
frost$core$Object* _1639;
frost$core$String* _1641;
frost$core$Object* _1642;
frost$core$Object* _1646;
frost$io$File* _1650;
frost$core$String* _1651;
bool _1652;
frost$core$Bit _1653;
bool _1654;
frost$core$Int _1656;
frost$core$String* _1659;
frost$io$File* _1661;
frost$core$Object* _1662;
frost$core$Object* _1664;
frost$core$String* _1666;
frost$core$Object* _1667;
frost$core$Object* _1671;
frost$io$File* _1674;
bool _1675;
frost$core$Bit _1676;
bool _1677;
frost$core$Int _1679;
frost$io$File* _1682;
frost$core$String* _1685;
frost$core$Object* _1687;
frost$core$String* _1689;
frost$core$Object* _1690;
frost$core$Object* _1693;
frost$core$String* _1696;
frost$core$String$Index$nullable _1697;
frost$core$String$Index$nullable _1700;
bool _1701;
frost$core$Bit _1702;
bool _1703;
frost$core$String* _1706;
frost$core$Object* _1707;
frost$core$String* _1709;
frost$core$Object* _1710;
frost$core$Object* _1714;
frost$core$String* _1718;
frost$core$String$Index$nullable _1719;
frost$core$Bit _1720;
frost$core$Range$LTfrost$core$String$Index$Q$GT _1721;
frost$core$String* _1722;
frost$core$Object* _1723;
frost$core$Object* _1725;
frost$core$String* _1727;
frost$core$Object* _1728;
frost$core$Object* _1732;
frost$core$String* _1735;
frost$core$String* _1736;
frost$io$File* _1737;
frost$core$Object* _1738;
frost$core$Object* _1740;
frost$core$Object* _1742;
frost$core$Object* _1744;
frost$core$String* _1746;
frost$core$Object* _1747;
frost$core$Object* _1750;
frost$io$File* _1752;
frost$core$Object* _1753;
frost$core$Maybe* _1757;
frost$core$Maybe* _1758;
frost$core$Int* _1759;
frost$core$Int _1760;
int64_t _1761;
bool _1762;
frost$core$Error** _1764;
frost$core$Error* _1765;
frost$core$Object* _1766;
frost$core$Object* _1769;
frost$core$Object* _1771;
frost$core$Object* _1773;
frost$core$Object* _1775;
frost$core$Error* _1799;
frost$core$Object* _1800;
$fn126 _1803;
frost$core$String* _1804;
frost$core$Object* _1811;
frost$core$Int _1815;
frost$core$Int _1817;
frost$core$Object** _1778;
frost$core$Object* _1779;
frost$io$OutputStream* _1780;
org$frostlang$frostc$CodeGenerator* _1782;
frost$core$Object* _1783;
org$frostlang$frostc$CodeGenerator* _1785;
frost$core$Object* _1786;
frost$core$Object* _1789;
frost$core$Object* _1791;
frost$core$Object* _1793;
frost$core$Object* _1795;
frost$core$Error* _1820;
frost$core$Object* _1821;
frost$core$Int _1825;
int64_t _1828;
int64_t _1829;
bool _1830;
frost$core$Bit _1831;
bool _1833;
org$frostlang$frostc$HCodeGenerator* _1836;
frost$io$File* _1837;
bool _1838;
frost$core$Bit _1839;
bool _1840;
frost$core$Int _1842;
frost$io$File* _1845;
org$frostlang$frostc$CodeGenerator* _1847;
frost$core$Object* _1848;
org$frostlang$frostc$CodeGenerator* _1850;
frost$core$Object* _1851;
frost$core$Object* _1854;
frost$core$Int _1857;
int64_t _1860;
int64_t _1861;
bool _1862;
frost$core$Bit _1863;
bool _1865;
org$frostlang$frostc$CCodeGenerator* _1868;
frost$io$File* _1869;
bool _1870;
frost$core$Bit _1871;
bool _1872;
frost$core$Int _1874;
frost$io$File* _1877;
org$frostlang$frostc$CodeGenerator* _1879;
frost$core$Object* _1880;
org$frostlang$frostc$CodeGenerator* _1882;
frost$core$Object* _1883;
frost$core$Object* _1886;
frost$core$Int _1889;
int64_t _1892;
int64_t _1893;
bool _1894;
frost$core$Bit _1895;
bool _1897;
org$frostlang$frostc$StubCodeGenerator* _1902;
frost$io$File* _1903;
bool _1904;
frost$core$Bit _1905;
bool _1906;
frost$core$Int _1908;
frost$io$File* _1911;
frost$core$Maybe* _1912;
frost$core$Maybe* _1913;
frost$core$Int* _1914;
frost$core$Int _1915;
int64_t _1916;
bool _1917;
frost$core$Error** _1919;
frost$core$Error* _1920;
frost$core$Object* _1921;
frost$core$Object* _1924;
frost$core$Object* _1926;
frost$core$Error* _1946;
frost$core$Object* _1947;
$fn127 _1950;
frost$core$String* _1951;
frost$core$Object* _1958;
frost$core$Int _1962;
frost$core$Int _1964;
frost$core$Object** _1929;
frost$core$Object* _1930;
frost$io$OutputStream* _1931;
org$frostlang$frostc$CodeGenerator* _1933;
frost$core$Object* _1934;
org$frostlang$frostc$CodeGenerator* _1936;
frost$core$Object* _1937;
frost$core$Object* _1940;
frost$core$Object* _1942;
frost$core$Error* _1967;
frost$core$Object* _1968;
frost$core$Int _1972;
int64_t _1975;
int64_t _1976;
bool _1977;
frost$core$Bit _1978;
bool _1980;
org$frostlang$frostc$Interpreter* _1983;
org$frostlang$frostc$CodeGenerator* _1985;
frost$core$Object* _1986;
org$frostlang$frostc$CodeGenerator* _1988;
frost$core$Object* _1989;
frost$core$Object* _1992;
org$frostlang$frostc$Compiler$Settings* _1996;
frost$io$File** _1997;
frost$io$File* _1998;
frost$collections$Array* _1999;
frost$collections$ListView* _2000;
frost$core$Int _2001;
frost$core$Int _2002;
frost$core$Bit* _2003;
frost$core$Bit _2004;
frost$core$Object* _2007;
org$frostlang$frostc$Compiler$Settings* _2009;
frost$core$Object* _2010;
frost$core$Object* _2013;
frost$threads$MessageQueue* _2016;
frost$threads$MessageQueue* _2017;
frost$core$Object* _2020;
frost$threads$MessageQueue* _2022;
frost$core$Object* _2023;
frost$core$Object* _2026;
org$frostlang$frostc$Compiler* _2029;
frost$threads$MessageQueue* _2030;
org$frostlang$frostc$CodeGenerator* _2031;
org$frostlang$frostc$Compiler$Settings* _2032;
frost$core$Object* _2035;
org$frostlang$frostc$Compiler* _2037;
frost$core$Object* _2038;
frost$core$Object* _2041;
org$frostlang$frostc$Main$Format$nullable _2044;
bool _2045;
frost$core$Bit _2046;
bool _2047;
frost$core$Int _2049;
frost$core$Equatable* _2052;
frost$core$Equatable* _2053;
frost$core$Int _2054;
frost$core$Int* _2057;
org$frostlang$frostc$Main$Format _2059;
org$frostlang$frostc$Main$Format _2062;
frost$core$Equatable* _2063;
$fn128 _2064;
frost$core$Bit _2065;
bool _2066;
frost$core$Object* _2067;
frost$core$Object* _2069;
frost$core$String* _2073;
bool _2074;
frost$core$Bit _2075;
bool _2076;
frost$core$String* _2079;
frost$core$Object* _2080;
frost$core$String* _2082;
frost$core$Object* _2083;
org$frostlang$frostc$HTMLProcessor* _2088;
org$frostlang$frostc$Compiler* _2089;
frost$collections$Array* _2091;
frost$collections$Array* _2092;
frost$core$Int _2093;
frost$core$Int _2095;
int64_t _2096;
int64_t _2097;
bool _2098;
frost$core$Bit _2099;
bool _2100;
frost$collections$CollectionView* _2102;
$fn129 _2103;
frost$core$Int _2104;
int64_t _2105;
int64_t _2106;
bool _2107;
frost$core$Bit _2108;
bool _2109;
frost$core$Int _2111;
frost$core$Object*** _2115;
frost$core$Object** _2116;
frost$core$Int64 _2117;
int64_t _2118;
frost$core$Object* _2119;
frost$core$Object* _2120;
frost$io$File* _2123;
frost$io$File* _2124;
bool _2125;
frost$core$Bit _2126;
bool _2127;
frost$core$Int _2129;
frost$io$File* _2132;
frost$core$String* _2133;
bool _2134;
frost$core$Bit _2135;
bool _2136;
frost$core$Int _2138;
frost$core$String* _2141;
$fn130 _2142;
frost$core$Object* _2144;
frost$core$Object* _2146;
org$frostlang$frostc$Compiler* _2149;
frost$core$Object* _2150;
frost$threads$MessageQueue* _2153;
frost$core$Object* _2154;
org$frostlang$frostc$Compiler$Settings* _2157;
frost$core$Object* _2158;
org$frostlang$frostc$CodeGenerator* _2161;
frost$core$Object* _2162;
frost$io$File* _2165;
frost$core$Object* _2166;
frost$core$String* _2169;
frost$core$Object* _2170;
frost$io$File* _2173;
frost$core$Object* _2174;
frost$collections$Array* _2177;
frost$core$Object* _2178;
frost$collections$Array* _2181;
frost$core$Object* _2182;
frost$collections$Array* _2185;
frost$core$Object* _2186;
frost$collections$Array* _2189;
frost$core$Object* _2190;
org$frostlang$frostc$Main$Arguments* _2193;
frost$core$Object* _2194;
frost$core$String* _2199;
bool _2200;
frost$core$Bit _2201;
bool _2202;
frost$core$Int _2215;
frost$core$Int _2217;
frost$collections$Array* _2221;
frost$collections$Iterable* _2222;
frost$collections$Iterable* _2223;
$fn131 _2224;
frost$collections$Iterator* _2225;
frost$collections$Iterator* _2226;
frost$collections$Iterator* _2228;
$fn132 _2229;
frost$core$Bit _2230;
bool _2231;
frost$collections$Iterator* _2234;
$fn133 _2235;
frost$core$Object* _2236;
frost$io$File* _2237;
frost$core$Object* _2238;
frost$io$File* _2240;
frost$core$Object* _2241;
org$frostlang$frostc$Compiler* _2245;
frost$io$File* _2246;
frost$collections$ListView* _2247;
frost$collections$Iterable* _2248;
frost$collections$Iterable* _2249;
$fn134 _2250;
frost$collections$Iterator* _2251;
frost$collections$Iterator* _2252;
frost$collections$Iterator* _2254;
$fn135 _2255;
frost$core$Bit _2256;
bool _2257;
frost$collections$Iterator* _2260;
$fn136 _2261;
frost$core$Object* _2262;
org$frostlang$frostc$ClassDecl* _2263;
frost$core$Object* _2264;
org$frostlang$frostc$ClassDecl* _2266;
frost$core$Object* _2267;
org$frostlang$frostc$Compiler* _2271;
org$frostlang$frostc$ClassDecl* _2272;
frost$core$Bit _2275;
frost$core$Bit* _2276;
frost$collections$Array** _2279;
frost$collections$Array* _2280;
frost$collections$Iterable* _2281;
frost$collections$Iterable* _2282;
$fn137 _2283;
frost$collections$Iterator* _2284;
frost$collections$Iterator* _2285;
frost$collections$Iterator* _2287;
$fn138 _2288;
frost$core$Bit _2289;
bool _2290;
frost$collections$Iterator* _2293;
$fn139 _2294;
frost$core$Object* _2295;
org$frostlang$frostc$ClassDecl* _2296;
frost$core$Object* _2297;
org$frostlang$frostc$ClassDecl* _2299;
frost$core$Object* _2300;
org$frostlang$frostc$ClassDecl* _2304;
frost$core$Bit _2307;
frost$core$Bit* _2308;
frost$collections$Array** _2311;
frost$collections$Array* _2312;
frost$collections$Iterable* _2313;
frost$collections$Iterable* _2314;
$fn140 _2315;
frost$collections$Iterator* _2316;
frost$collections$Iterator* _2317;
frost$collections$Iterator* _2319;
$fn141 _2320;
frost$core$Bit _2321;
bool _2322;
frost$collections$Iterator* _2325;
$fn142 _2326;
frost$core$Object* _2327;
org$frostlang$frostc$ClassDecl* _2328;
frost$core$Object* _2329;
org$frostlang$frostc$ClassDecl* _2331;
frost$core$Object* _2332;
org$frostlang$frostc$ClassDecl* _2336;
frost$core$Object* _2338;
org$frostlang$frostc$ClassDecl* _2340;
frost$core$Object* _2341;
frost$core$Object* _2345;
frost$core$Object* _2348;
org$frostlang$frostc$ClassDecl* _2350;
frost$core$Object* _2351;
frost$core$Object* _2355;
frost$core$Object* _2358;
org$frostlang$frostc$ClassDecl* _2360;
frost$core$Object* _2361;
frost$core$Object* _2365;
frost$core$Object* _2367;
frost$core$Object* _2369;
frost$io$File* _2371;
frost$core$Object* _2372;
frost$core$Object* _2376;
frost$collections$Array* _2379;
frost$collections$Iterable* _2380;
frost$collections$Iterable* _2381;
$fn143 _2382;
frost$collections$Iterator* _2383;
frost$collections$Iterator* _2384;
frost$collections$Iterator* _2386;
$fn144 _2387;
frost$core$Bit _2388;
bool _2389;
frost$collections$Iterator* _2392;
$fn145 _2393;
frost$core$Object* _2394;
frost$io$File* _2395;
frost$core$Object* _2396;
frost$io$File* _2398;
frost$core$Object* _2399;
org$frostlang$frostc$Compiler* _2403;
frost$io$File* _2404;
frost$core$Object* _2406;
frost$io$File* _2408;
frost$core$Object* _2409;
frost$core$Object* _2413;
org$frostlang$frostc$Main$Format$nullable _2416;
bool _2417;
frost$core$Bit _2418;
bool _2419;
frost$core$Int _2421;
frost$core$Equatable* _2424;
frost$core$Equatable* _2425;
frost$core$Int _2426;
frost$core$Int* _2429;
org$frostlang$frostc$Main$Format _2431;
org$frostlang$frostc$Main$Format _2434;
frost$core$Equatable* _2435;
$fn146 _2436;
frost$core$Bit _2437;
bool _2438;
frost$core$Object* _2439;
frost$core$Object* _2441;
org$frostlang$frostc$CodeGenerator* _2445;
org$frostlang$frostc$Interpreter* _2446;
$fn147 _2447;
org$frostlang$frostc$Compiler* _2450;
frost$core$Object* _2451;
frost$threads$MessageQueue* _2454;
frost$core$Object* _2455;
org$frostlang$frostc$Compiler$Settings* _2458;
frost$core$Object* _2459;
org$frostlang$frostc$CodeGenerator* _2462;
frost$core$Object* _2463;
frost$io$File* _2466;
frost$core$Object* _2467;
frost$core$String* _2470;
frost$core$Object* _2471;
frost$io$File* _2474;
frost$core$Object* _2475;
frost$collections$Array* _2478;
frost$core$Object* _2479;
frost$collections$Array* _2482;
frost$core$Object* _2483;
frost$collections$Array* _2486;
frost$core$Object* _2487;
frost$collections$Array* _2490;
frost$core$Object* _2491;
org$frostlang$frostc$Main$Arguments* _2494;
frost$core$Object* _2495;
org$frostlang$frostc$Compiler* _2500;
frost$collections$Array** _2504;
frost$collections$Array* _2505;
frost$collections$CollectionView* _2506;
$fn148 _2507;
frost$core$Int _2508;
frost$core$Int _2509;
int64_t _2510;
int64_t _2511;
bool _2512;
frost$core$Bit _2513;
bool _2514;
frost$collections$Array** _2517;
frost$collections$Array* _2518;
frost$collections$Array* _2519;
frost$collections$Array** _2520;
frost$collections$Array* _2521;
frost$collections$CollectionView* _2522;
$fn149 _2523;
frost$core$Int _2524;
frost$core$Int _2525;
int64_t _2526;
int64_t _2527;
int64_t _2528;
frost$core$Int _2529;
frost$core$Object* _2530;
org$frostlang$frostc$ClassDecl* _2531;
frost$core$Object* _2533;
org$frostlang$frostc$ClassDecl* _2535;
frost$core$Object* _2536;
frost$core$Object* _2539;
org$frostlang$frostc$ClassDecl* _2542;
org$frostlang$frostc$ClassDecl* _2544;
frost$core$Object* _2545;
org$frostlang$frostc$CodeGenerator** _2550;
org$frostlang$frostc$CodeGenerator* _2551;
bool _2552;
frost$core$Bit _2553;
bool _2554;
frost$core$Int _2556;
org$frostlang$frostc$CodeGenerator* _2559;
$fn150 _2560;
frost$threads$MessageQueue* _2565;
frost$threads$MessageQueue* _2566;
frost$threads$ScopedLock* _2571;
frost$threads$Lock** _2572;
frost$threads$Lock* _2573;
frost$core$Object* _2576;
frost$threads$ScopedLock* _2578;
frost$core$Object* _2579;
frost$core$Object* _2582;
frost$core$Int* _2585;
frost$core$Int _2586;
frost$threads$ScopedLock* _2587;
frost$core$Object* _2588;
frost$core$Int _2592;
int64_t _2593;
int64_t _2594;
bool _2595;
frost$core$Bit _2596;
bool _2598;
frost$threads$MessageQueue* _2601;
frost$threads$MessageQueue* _2602;
frost$core$Immutable* _2603;
org$frostlang$frostc$Compiler$Message* _2604;
frost$core$Object* _2606;
org$frostlang$frostc$Compiler$Message* _2608;
frost$core$Object* _2609;
frost$core$Object* _2612;
org$frostlang$frostc$Compiler$Message* _2615;
frost$core$Int* _2616;
frost$core$Int _2617;
frost$core$Int _2618;
int64_t _2621;
int64_t _2622;
bool _2623;
frost$core$Bit _2624;
bool _2626;
frost$core$String** _2628;
frost$core$String* _2629;
frost$core$Object* _2631;
frost$core$String* _2633;
frost$core$Object* _2634;
frost$core$Int* _2637;
frost$core$Int _2638;
frost$core$Int* _2640;
frost$core$Int _2641;
frost$core$String** _2643;
frost$core$String* _2644;
frost$core$Object* _2646;
frost$core$String* _2648;
frost$core$Object* _2649;
frost$core$Int _2653;
frost$core$Int _2654;
int64_t _2655;
int64_t _2656;
int64_t _2657;
frost$core$Int _2658;
frost$core$String* _2661;
frost$core$Object* _2664;
frost$core$String* _2667;
frost$core$Int _2668;
frost$core$Object* _2669;
$fn151 _2672;
frost$core$String* _2673;
frost$core$String* _2674;
frost$core$Object* _2675;
frost$core$Object* _2677;
frost$core$Object* _2679;
frost$core$String* _2682;
frost$core$Int _2683;
frost$core$Object* _2684;
$fn152 _2687;
frost$core$String* _2688;
frost$core$String* _2689;
frost$core$Object* _2690;
frost$core$Object* _2692;
frost$core$Object* _2694;
frost$core$String* _2697;
frost$core$String* _2698;
frost$core$String* _2699;
frost$core$String* _2700;
frost$core$Object* _2710;
frost$core$Object* _2712;
frost$core$Object* _2714;
frost$core$Object* _2716;
frost$core$Object* _2718;
frost$core$Object* _2720;
frost$core$Object* _2722;
frost$core$Object* _2724;
frost$core$Object* _2726;
frost$core$Object* _2728;
frost$core$String* _2730;
frost$core$Object* _2731;
frost$core$String* _2734;
frost$core$Object* _2735;
frost$core$Int _2739;
int64_t _2742;
int64_t _2743;
bool _2744;
frost$core$Bit _2745;
bool _2747;
frost$core$String** _2749;
frost$core$String* _2750;
frost$core$Object* _2752;
frost$core$String* _2754;
frost$core$Object* _2755;
frost$core$Int* _2758;
frost$core$Int _2759;
frost$core$Int* _2761;
frost$core$Int _2762;
frost$core$String** _2764;
frost$core$String* _2765;
frost$core$Object* _2767;
frost$core$String* _2769;
frost$core$Object* _2770;
frost$core$Int _2774;
frost$core$Int _2775;
int64_t _2776;
int64_t _2777;
int64_t _2778;
frost$core$Int _2779;
frost$core$String* _2782;
frost$core$Object* _2785;
frost$core$String* _2788;
frost$core$Int _2789;
frost$core$Object* _2790;
$fn153 _2793;
frost$core$String* _2794;
frost$core$String* _2795;
frost$core$Object* _2796;
frost$core$Object* _2798;
frost$core$Object* _2800;
frost$core$String* _2803;
frost$core$Int _2804;
frost$core$Object* _2805;
$fn154 _2808;
frost$core$String* _2809;
frost$core$String* _2810;
frost$core$Object* _2811;
frost$core$Object* _2813;
frost$core$Object* _2815;
frost$core$String* _2818;
frost$core$String* _2819;
frost$core$String* _2820;
frost$core$String* _2821;
frost$core$Object* _2831;
frost$core$Object* _2833;
frost$core$Object* _2835;
frost$core$Object* _2837;
frost$core$Object* _2839;
frost$core$Object* _2841;
frost$core$Object* _2843;
frost$core$Object* _2845;
frost$core$Object* _2847;
frost$core$Object* _2849;
frost$core$String* _2851;
frost$core$Object* _2852;
frost$core$String* _2855;
frost$core$Object* _2856;
org$frostlang$frostc$Compiler$Message* _2860;
frost$core$Object* _2861;
org$frostlang$frostc$Compiler* _2865;
frost$core$Object* _2866;
frost$threads$MessageQueue* _2869;
frost$core$Object* _2870;
org$frostlang$frostc$Compiler$Settings* _2873;
frost$core$Object* _2874;
org$frostlang$frostc$CodeGenerator* _2877;
frost$core$Object* _2878;
frost$core$Int _2882;
frost$core$Int _2883;
int64_t _2886;
int64_t _2887;
bool _2888;
frost$core$Bit _2889;
bool _2891;
frost$core$Int _2905;
frost$core$Int _2906;
int64_t _2907;
int64_t _2908;
bool _2909;
frost$core$Bit _2910;
bool _2911;
frost$core$Int _2914;
frost$core$String* _2915;
frost$core$String* _2916;
frost$core$Object* _2926;
frost$core$Object* _2928;
frost$core$Int _2933;
frost$core$Int _2934;
int64_t _2937;
int64_t _2938;
bool _2939;
frost$core$Bit _2940;
bool _2942;
org$frostlang$frostc$Main$Format$nullable _2945;
bool _2946;
frost$core$Bit _2947;
bool _2948;
frost$core$Int _2950;
org$frostlang$frostc$Main$Format _2953;
frost$core$Int _2954;
frost$core$Int _2955;
int64_t _2958;
int64_t _2959;
bool _2960;
frost$core$Bit _2961;
bool _2963;
frost$collections$Array* _2966;
frost$collections$Array* _2967;
frost$io$File* _2968;
bool _2969;
frost$core$Bit _2970;
bool _2971;
frost$core$Int _2973;
frost$io$File* _2976;
frost$io$File* _2981;
frost$core$String** _2982;
frost$core$String* _2983;
frost$core$String* _2984;
frost$core$Object* _2986;
frost$core$String* _2988;
frost$core$Object* _2989;
frost$core$Object* _2992;
frost$core$Object* _2994;
frost$core$String* _2997;
bool _2998;
frost$core$Bit _2999;
bool _3000;
frost$core$Object* _3003;
frost$core$String* _3005;
frost$core$Object* _3006;
frost$core$Object* _3010;
frost$io$File* _3014;
frost$core$String* _3015;
bool _3016;
frost$core$Bit _3017;
bool _3018;
frost$core$Int _3020;
frost$core$String* _3023;
frost$io$File* _3025;
frost$core$Object* _3026;
frost$core$Object* _3028;
frost$core$String* _3030;
frost$core$Object* _3031;
frost$core$Object* _3035;
frost$io$File* _3038;
bool _3039;
frost$core$Bit _3040;
bool _3041;
frost$core$Int _3043;
frost$io$File* _3046;
frost$core$String* _3049;
frost$core$Object* _3051;
frost$core$String* _3053;
frost$core$Object* _3054;
frost$core$Object* _3057;
frost$core$String* _3060;
frost$core$String$Index$nullable _3061;
frost$core$String$Index$nullable _3064;
bool _3065;
frost$core$Bit _3066;
bool _3067;
frost$core$String* _3070;
frost$core$Object* _3071;
frost$core$String* _3073;
frost$core$Object* _3074;
frost$core$Object* _3078;
frost$core$String* _3082;
frost$core$String$Index$nullable _3083;
frost$core$Bit _3084;
frost$core$Range$LTfrost$core$String$Index$Q$GT _3085;
frost$core$String* _3086;
frost$core$Object* _3087;
frost$core$Object* _3089;
frost$core$String* _3091;
frost$core$Object* _3092;
frost$core$Object* _3096;
frost$core$String* _3099;
frost$core$String* _3100;
frost$io$File* _3101;
frost$core$Object* _3102;
frost$core$Object* _3104;
frost$core$Object* _3106;
frost$core$Object* _3108;
frost$core$String* _3110;
frost$core$Object* _3111;
frost$core$Object* _3114;
frost$io$File* _3116;
frost$core$Object* _3117;
frost$io$File* _3121;
bool _3122;
frost$core$Bit _3123;
bool _3124;
frost$core$Int _3126;
frost$io$File* _3129;
frost$core$Bit _3130;
frost$io$File* _3131;
frost$core$Object* _3132;
frost$core$Object* _3134;
frost$core$Int _3137;
int64_t _3140;
int64_t _3141;
bool _3142;
frost$core$Bit _3143;
bool _3145;
frost$io$File* _3148;
bool _3149;
frost$core$Bit _3150;
bool _3151;
frost$core$Int _3153;
frost$io$File* _3156;
frost$io$File* _3161;
frost$core$String** _3162;
frost$core$String* _3163;
frost$core$String* _3164;
frost$core$Object* _3166;
frost$core$String* _3168;
frost$core$Object* _3169;
frost$core$Object* _3172;
frost$core$Object* _3174;
frost$core$String* _3177;
bool _3178;
frost$core$Bit _3179;
bool _3180;
frost$core$Object* _3183;
frost$core$String* _3185;
frost$core$Object* _3186;
frost$core$Object* _3190;
frost$io$File* _3194;
frost$core$String* _3195;
bool _3196;
frost$core$Bit _3197;
bool _3198;
frost$core$Int _3200;
frost$core$String* _3203;
frost$io$File* _3205;
frost$core$Object* _3206;
frost$core$Object* _3208;
frost$core$String* _3210;
frost$core$Object* _3211;
frost$core$Object* _3215;
frost$io$File* _3218;
bool _3219;
frost$core$Bit _3220;
bool _3221;
frost$core$Int _3223;
frost$io$File* _3226;
frost$core$String* _3229;
frost$core$Object* _3231;
frost$core$String* _3233;
frost$core$Object* _3234;
frost$core$Object* _3237;
frost$core$String* _3240;
frost$core$String$Index$nullable _3241;
frost$core$String$Index$nullable _3244;
bool _3245;
frost$core$Bit _3246;
bool _3247;
frost$core$String* _3250;
frost$core$Object* _3251;
frost$core$String* _3253;
frost$core$Object* _3254;
frost$core$Object* _3258;
frost$core$String* _3262;
frost$core$String$Index$nullable _3263;
frost$core$Bit _3264;
frost$core$Range$LTfrost$core$String$Index$Q$GT _3265;
frost$core$String* _3266;
frost$core$Object* _3267;
frost$core$Object* _3269;
frost$core$String* _3271;
frost$core$Object* _3272;
frost$core$Object* _3276;
frost$core$String* _3279;
frost$core$String* _3280;
frost$io$File* _3281;
frost$core$Object* _3282;
frost$core$Object* _3284;
frost$core$Object* _3286;
frost$core$Object* _3288;
frost$core$String* _3290;
frost$core$Object* _3291;
frost$core$Object* _3294;
frost$io$File* _3296;
frost$core$Object* _3297;
frost$io$File* _3301;
bool _3302;
frost$core$Bit _3303;
bool _3304;
frost$core$Int _3306;
frost$io$File* _3309;
frost$core$Bit _3310;
frost$io$File* _3311;
frost$core$Object* _3312;
frost$core$Object* _3314;
frost$io$File* _3367;
frost$core$Object* _3368;
frost$core$String* _3371;
frost$core$Object* _3372;
frost$io$File* _3375;
frost$core$Object* _3376;
frost$collections$Array* _3379;
frost$core$Object* _3380;
frost$collections$Array* _3383;
frost$core$Object* _3384;
frost$collections$Array* _3387;
frost$core$Object* _3388;
frost$collections$Array* _3391;
frost$core$Object* _3392;
org$frostlang$frostc$Main$Arguments* _3395;
frost$core$Object* _3396;
frost$core$Int _3320;
frost$core$Int _3321;
int64_t _3324;
int64_t _3325;
bool _3326;
frost$core$Bit _3327;
bool _3329;
frost$core$Int _3344;
frost$core$String* _3345;
frost$core$String* _3346;
frost$core$Object* _3356;
frost$core$Object* _3358;
frost$core$Int _3362;
frost$core$Int _3364;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:165
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:166
_13 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_14 = _13;
frost$collections$Array$init(_14);
*(&local1) = ((frost$collections$Array*) NULL);
_17 = ((frost$core$Object*) _13);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local1);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local1) = _13;
_23 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_23);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:167
_26 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_27 = _26;
frost$collections$Array$init(_27);
*(&local2) = ((frost$collections$Array*) NULL);
_30 = ((frost$core$Object*) _26);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = *(&local2);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local2) = _26;
_36 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_36);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:168
_39 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_40 = _39;
frost$collections$Array$init(_40);
*(&local3) = ((frost$collections$Array*) NULL);
_43 = ((frost$core$Object*) _39);
frost$core$Frost$ref$frost$core$Object$Q(_43);
_45 = *(&local3);
_46 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_46);
*(&local3) = _39;
_49 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_49);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:169
_52 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_53 = _52;
frost$collections$Array$init(_53);
*(&local4) = ((frost$collections$Array*) NULL);
_56 = ((frost$core$Object*) _52);
frost$core$Frost$ref$frost$core$Object$Q(_56);
_58 = *(&local4);
_59 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_59);
*(&local4) = _52;
_62 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_62);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:170
*(&local5) = ((frost$io$File*) NULL);
_66 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_66);
_68 = *(&local5);
_69 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_69);
*(&local5) = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:171
_73 = (frost$core$Int) {3u};
*(&local6) = _73;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:172
_76 = (frost$core$Int) {3u};
*(&local7) = _76;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:173
*(&local8) = ((org$frostlang$frostc$Main$Format$nullable) { .nonnull = false });
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:174
*(&local9) = ((frost$core$String*) NULL);
_82 = ((frost$core$Object*) ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_82);
_84 = *(&local9);
_85 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_85);
*(&local9) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:175
_89 = (frost$core$Bit) {true};
*(&local10) = _89;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:176
goto block1;
block1:;
_93 = *(&local0);
_94 = ($fn155) _93->$class->vtable[2];
_95 = _94(_93);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:176:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_98 = _95.value;
_99 = !_98;
_100 = (frost$core$Bit) {_99};
_102 = _100.value;
if (_102) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:177
_105 = *(&local0);
_106 = ($fn156) _105->$class->vtable[3];
_107 = _106(_105);
*(&local11) = ((frost$core$String*) NULL);
_109 = ((frost$core$Object*) _107);
frost$core$Frost$ref$frost$core$Object$Q(_109);
_111 = *(&local11);
_112 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_112);
*(&local11) = _107;
_115 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_115);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:178
_118 = *(&local11);
_119 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_118, &$s157);
_120 = _119.value;
if (_120) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:180
*(&local12) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:181
_125 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String(_125, &$s158);
*(&local13) = ((frost$io$File*) NULL);
_128 = ((frost$core$Object*) _125);
frost$core$Frost$ref$frost$core$Object$Q(_128);
_130 = *(&local13);
_131 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_131);
*(&local13) = _125;
_134 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_134);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:182
_137 = frost$io$Console$inputStream$R$frost$io$InputStream();
_138 = *(&local13);
_139 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(_138);
_140 = _139;
_141 = &_140->$rawValue;
_142 = *_141;
_143 = _142.value;
_144 = _143 == 0u;
if (_144) goto block10; else goto block11;
block11:;
_146 = &_139->$data.$ERROR.field0;
_147 = *_146;
_148 = ((frost$core$Object*) _147);
frost$core$Frost$ref$frost$core$Object$Q(_148);
*(&local12) = _147;
_151 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_151);
_153 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_153);
_155 = *(&local13);
_156 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_156);
*(&local13) = ((frost$io$File*) NULL);
goto block8;
block10:;
_160 = &_139->$data.$SUCCESS.field0;
_161 = *_160;
_162 = ((frost$io$OutputStream*) _161);
_163 = ($fn159) _137->$class->vtable[17];
_164 = _163(_137, _162);
_165 = _164;
_166 = &_165->$rawValue;
_167 = *_166;
_168 = _167.value;
_169 = _168 == 0u;
if (_169) goto block12; else goto block13;
block13:;
_171 = &_164->$data.$ERROR.field0;
_172 = *_171;
_173 = ((frost$core$Object*) _172);
frost$core$Frost$ref$frost$core$Object$Q(_173);
*(&local12) = _172;
_176 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_176);
_178 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_178);
_180 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_180);
_182 = *(&local13);
_183 = ((frost$core$Object*) _182);
frost$core$Frost$unref$frost$core$Object$Q(_183);
*(&local13) = ((frost$io$File*) NULL);
goto block8;
block12:;
_187 = &_164->$data.$SUCCESS.field0;
_188 = *_187;
_189 = ((frost$core$Int$wrapper*) _188)->value;
_190 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_190);
_192 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_192);
_194 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_194);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:183
_197 = *(&local1);
_198 = _197;
_199 = *(&local13);
_200 = ((frost$core$Object*) _199);
frost$collections$Array$add$frost$collections$Array$T(_198, _200);
_202 = *(&local13);
_203 = ((frost$core$Object*) _202);
frost$core$Frost$unref$frost$core$Object$Q(_203);
*(&local13) = ((frost$io$File*) NULL);
_229 = *(&local12);
_230 = ((frost$core$Object*) _229);
frost$core$Frost$unref$frost$core$Object$Q(_230);
*(&local12) = ((frost$core$Error*) NULL);
goto block5;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:186
_208 = *(&local12);
_209 = ((frost$core$Object*) _208);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:186:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_212 = ($fn160) _209->$class->vtable[0];
_213 = _212(_209);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_213);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_220 = ((frost$core$Object*) _213);
frost$core$Frost$unref$frost$core$Object$Q(_220);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:187
_224 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_224);
_226 = (frost$core$Int) {187u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s161, _226, &$s162);
abort(); // unreachable
block7:;
_234 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_118, &$s163);
_235 = _234.value;
if (_235) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:191
_238 = *(&local5);
_239 = _238 != NULL;
_240 = (frost$core$Bit) {_239};
_241 = _240.value;
if (_241) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:192
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:192:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s164);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s165);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:193
_254 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_254);
_256 = (frost$core$Int) {193u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s166, _256, &$s167);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:195
_260 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_261 = *(&local0);
_262 = ($fn168) _261->$class->vtable[4];
_263 = _262(_261, &$s169);
frost$io$File$init$frost$core$String(_260, _263);
_265 = _260;
_266 = ((frost$core$Object*) _265);
frost$core$Frost$ref$frost$core$Object$Q(_266);
_268 = *(&local5);
_269 = ((frost$core$Object*) _268);
frost$core$Frost$unref$frost$core$Object$Q(_269);
*(&local5) = _265;
_272 = ((frost$core$Object*) _263);
frost$core$Frost$unref$frost$core$Object$Q(_272);
_274 = ((frost$core$Object*) _260);
frost$core$Frost$unref$frost$core$Object$Q(_274);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:196
*(&local14) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:197
_279 = *(&local5);
_280 = _279 != NULL;
_281 = (frost$core$Bit) {_280};
_282 = _281.value;
if (_282) goto block24; else goto block25;
block25:;
_284 = (frost$core$Int) {197u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s170, _284, &$s171);
abort(); // unreachable
block24:;
_287 = _279;
// begin inline call to function frost.io.File.get_parent():frost.io.File? from Main.frost:197:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_290 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_287, &$s172);
_291 = &_290->path;
_292 = *_291;
_293 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_292);
*(&local16) = ((frost$core$String*) NULL);
_295 = ((frost$core$Object*) _293);
frost$core$Frost$ref$frost$core$Object$Q(_295);
_297 = *(&local16);
_298 = ((frost$core$Object*) _297);
frost$core$Frost$unref$frost$core$Object$Q(_298);
*(&local16) = _293;
_301 = ((frost$core$Object*) _293);
frost$core$Frost$unref$frost$core$Object$Q(_301);
_303 = ((frost$core$Object*) _290);
frost$core$Frost$unref$frost$core$Object$Q(_303);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_306 = *(&local16);
_307 = _306 == NULL;
_308 = (frost$core$Bit) {_307};
_309 = _308.value;
if (_309) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_312 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_312);
_314 = *(&local16);
_315 = ((frost$core$Object*) _314);
frost$core$Frost$unref$frost$core$Object$Q(_315);
*(&local16) = ((frost$core$String*) NULL);
*(&local15) = ((frost$io$File*) NULL);
_319 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_319);
goto block26;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_323 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_324 = *(&local16);
_325 = _324 != NULL;
_326 = (frost$core$Bit) {_325};
_327 = _326.value;
if (_327) goto block29; else goto block30;
block30:;
_329 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s173, _329, &$s174);
abort(); // unreachable
block29:;
_332 = _324;
frost$io$File$init$frost$core$String(_323, _332);
_334 = _323;
_335 = ((frost$core$Object*) _334);
frost$core$Frost$ref$frost$core$Object$Q(_335);
_337 = ((frost$core$Object*) _323);
frost$core$Frost$unref$frost$core$Object$Q(_337);
_339 = *(&local16);
_340 = ((frost$core$Object*) _339);
frost$core$Frost$unref$frost$core$Object$Q(_340);
*(&local16) = ((frost$core$String*) NULL);
*(&local15) = _334;
_344 = ((frost$core$Object*) _334);
frost$core$Frost$ref$frost$core$Object$Q(_344);
goto block26;
block26:;
_347 = *(&local15);
_348 = _347 != NULL;
_349 = (frost$core$Bit) {_348};
_350 = _349.value;
if (_350) goto block31; else goto block32;
block32:;
_352 = (frost$core$Int) {197u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s175, _352, &$s176);
abort(); // unreachable
block31:;
_355 = _347;
_356 = frost$io$File$createDirectories$R$frost$core$Error$Q(_355);
_357 = _356 == NULL;
if (_357) goto block33; else goto block34;
block34:;
_359 = ((frost$core$Object*) _356);
frost$core$Frost$ref$frost$core$Object$Q(_359);
_361 = _356 != NULL;
_362 = (frost$core$Bit) {_361};
_363 = _362.value;
if (_363) goto block35; else goto block36;
block36:;
_365 = (frost$core$Int) {197u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s177, _365, &$s178);
abort(); // unreachable
block35:;
_368 = _356;
*(&local14) = _368;
_370 = ((frost$core$Object*) _356);
frost$core$Frost$unref$frost$core$Object$Q(_370);
_372 = ((frost$core$Object*) _347);
frost$core$Frost$unref$frost$core$Object$Q(_372);
_374 = *(&local15);
_375 = ((frost$core$Object*) _374);
frost$core$Frost$unref$frost$core$Object$Q(_375);
*(&local15) = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:200
_389 = *(&local14);
_390 = ((frost$core$Object*) _389);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:200:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_393 = ($fn179) _390->$class->vtable[0];
_394 = _393(_390);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_394);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_401 = ((frost$core$Object*) _394);
frost$core$Frost$unref$frost$core$Object$Q(_401);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:201
_405 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_405);
_407 = (frost$core$Int) {201u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s180, _407, &$s181);
abort(); // unreachable
block33:;
_379 = ((frost$core$Object*) _356);
frost$core$Frost$unref$frost$core$Object$Q(_379);
_381 = ((frost$core$Object*) _347);
frost$core$Frost$unref$frost$core$Object$Q(_381);
_383 = *(&local15);
_384 = ((frost$core$Object*) _383);
frost$core$Frost$unref$frost$core$Object$Q(_384);
*(&local15) = ((frost$io$File*) NULL);
_410 = *(&local14);
_411 = ((frost$core$Object*) _410);
frost$core$Frost$unref$frost$core$Object$Q(_411);
*(&local14) = ((frost$core$Error*) NULL);
goto block5;
block17:;
_415 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_118, &$s182);
_416 = _415.value;
if (_416) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:205
_419 = *(&local0);
_420 = ($fn183) _419->$class->vtable[4];
_421 = _420(_419, &$s184);
*(&local17) = ((frost$core$String*) NULL);
_423 = ((frost$core$Object*) _421);
frost$core$Frost$ref$frost$core$Object$Q(_423);
_425 = *(&local17);
_426 = ((frost$core$Object*) _425);
frost$core$Frost$unref$frost$core$Object$Q(_426);
*(&local17) = _421;
_429 = ((frost$core$Object*) _421);
frost$core$Frost$unref$frost$core$Object$Q(_429);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:206
_432 = *(&local17);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Main.frost:206:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
_435 = frost$core$String$get_asInt64$R$frost$core$Int64$Q(_432);
*(&local19) = _435;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
_438 = *(&local19);
_439 = _438.nonnull;
_440 = (frost$core$Bit) {_439};
_441 = _440.value;
if (_441) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
_444 = *(&local19);
_445 = _444.nonnull;
_446 = (frost$core$Bit) {_445};
_447 = _446.value;
if (_447) goto block44; else goto block45;
block45:;
_449 = (frost$core$Int) {1456u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s185, _449, &$s186);
abort(); // unreachable
block44:;
_452 = ((frost$core$Int64) _444.value);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_455 = _452.value;
_456 = ((int64_t) _455);
_457 = (frost$core$Int) {_456};
_459 = ((frost$core$Int$nullable) { _457, true });
*(&local18) = _459;
goto block41;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local18) = ((frost$core$Int$nullable) { .nonnull = false });
goto block41;
block41:;
_465 = *(&local18);
*(&local20) = _465;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:207
_468 = *(&local20);
_469 = !_468.nonnull;
_470 = (frost$core$Bit) {_469};
_471 = _470.value;
if (_471) goto block47; else goto block50;
block50:;
_473 = *(&local20);
_474 = _473.nonnull;
_475 = (frost$core$Bit) {_474};
_476 = _475.value;
if (_476) goto block51; else goto block52;
block52:;
_478 = (frost$core$Int) {207u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s187, _478, &$s188);
abort(); // unreachable
block51:;
_481 = ((frost$core$Int) _473.value);
_482 = (frost$core$Int) {3u};
_483 = _481.value;
_484 = _482.value;
_485 = _483 > _484;
_486 = (frost$core$Bit) {_485};
_487 = _486.value;
if (_487) goto block47; else goto block49;
block49:;
_489 = *(&local20);
_490 = _489.nonnull;
_491 = (frost$core$Bit) {_490};
_492 = _491.value;
if (_492) goto block53; else goto block54;
block54:;
_494 = (frost$core$Int) {207u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s189, _494, &$s190);
abort(); // unreachable
block53:;
_497 = ((frost$core$Int) _489.value);
_498 = (frost$core$Int) {0u};
_499 = _497.value;
_500 = _498.value;
_501 = _499 < _500;
_502 = (frost$core$Bit) {_501};
_503 = _502.value;
if (_503) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:208
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:208:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s191);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s192);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:209
_516 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_516);
_518 = (frost$core$Int) {209u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s193, _518, &$s194);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:211
_522 = *(&local20);
_523 = _522.nonnull;
_524 = (frost$core$Bit) {_523};
_525 = _524.value;
if (_525) goto block57; else goto block58;
block58:;
_527 = (frost$core$Int) {211u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s195, _527, &$s196);
abort(); // unreachable
block57:;
_530 = ((frost$core$Int) _522.value);
*(&local6) = _530;
_532 = *(&local17);
_533 = ((frost$core$Object*) _532);
frost$core$Frost$unref$frost$core$Object$Q(_533);
*(&local17) = ((frost$core$String*) NULL);
goto block5;
block40:;
_537 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_118, &$s197);
_538 = _537.value;
if (_538) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:214
_541 = *(&local0);
_542 = ($fn198) _541->$class->vtable[4];
_543 = _542(_541, &$s199);
*(&local21) = ((frost$core$String*) NULL);
_545 = ((frost$core$Object*) _543);
frost$core$Frost$ref$frost$core$Object$Q(_545);
_547 = *(&local21);
_548 = ((frost$core$Object*) _547);
frost$core$Frost$unref$frost$core$Object$Q(_548);
*(&local21) = _543;
_551 = ((frost$core$Object*) _543);
frost$core$Frost$unref$frost$core$Object$Q(_551);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:215
_554 = *(&local21);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Main.frost:215:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
_557 = frost$core$String$get_asInt64$R$frost$core$Int64$Q(_554);
*(&local23) = _557;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
_560 = *(&local23);
_561 = _560.nonnull;
_562 = (frost$core$Bit) {_561};
_563 = _562.value;
if (_563) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
_566 = *(&local23);
_567 = _566.nonnull;
_568 = (frost$core$Bit) {_567};
_569 = _568.value;
if (_569) goto block64; else goto block65;
block65:;
_571 = (frost$core$Int) {1456u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s200, _571, &$s201);
abort(); // unreachable
block64:;
_574 = ((frost$core$Int64) _566.value);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_577 = _574.value;
_578 = ((int64_t) _577);
_579 = (frost$core$Int) {_578};
_581 = ((frost$core$Int$nullable) { _579, true });
*(&local22) = _581;
goto block61;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local22) = ((frost$core$Int$nullable) { .nonnull = false });
goto block61;
block61:;
_587 = *(&local22);
*(&local24) = _587;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:216
_590 = *(&local24);
_591 = !_590.nonnull;
_592 = (frost$core$Bit) {_591};
_593 = _592.value;
if (_593) goto block67; else goto block70;
block70:;
_595 = *(&local24);
_596 = _595.nonnull;
_597 = (frost$core$Bit) {_596};
_598 = _597.value;
if (_598) goto block71; else goto block72;
block72:;
_600 = (frost$core$Int) {216u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s202, _600, &$s203);
abort(); // unreachable
block71:;
_603 = ((frost$core$Int) _595.value);
_604 = (frost$core$Int) {3u};
_605 = _603.value;
_606 = _604.value;
_607 = _605 > _606;
_608 = (frost$core$Bit) {_607};
_609 = _608.value;
if (_609) goto block67; else goto block69;
block69:;
_611 = *(&local24);
_612 = _611.nonnull;
_613 = (frost$core$Bit) {_612};
_614 = _613.value;
if (_614) goto block73; else goto block74;
block74:;
_616 = (frost$core$Int) {216u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s204, _616, &$s205);
abort(); // unreachable
block73:;
_619 = ((frost$core$Int) _611.value);
_620 = (frost$core$Int) {0u};
_621 = _619.value;
_622 = _620.value;
_623 = _621 < _622;
_624 = (frost$core$Bit) {_623};
_625 = _624.value;
if (_625) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:217
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:217:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s206);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s207);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:218
_638 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_638);
_640 = (frost$core$Int) {218u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s208, _640, &$s209);
abort(); // unreachable
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:220
_644 = *(&local24);
_645 = _644.nonnull;
_646 = (frost$core$Bit) {_645};
_647 = _646.value;
if (_647) goto block77; else goto block78;
block78:;
_649 = (frost$core$Int) {220u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s210, _649, &$s211);
abort(); // unreachable
block77:;
_652 = ((frost$core$Int) _644.value);
*(&local7) = _652;
_654 = *(&local21);
_655 = ((frost$core$Object*) _654);
frost$core$Frost$unref$frost$core$Object$Q(_655);
*(&local21) = ((frost$core$String*) NULL);
goto block5;
block60:;
_659 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_118, &$s212);
_660 = _659.value;
if (_660) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:223
_663 = *(&local8);
_664 = _663.nonnull;
_665 = (frost$core$Bit) {_664};
_666 = _665.value;
if (_666) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:224
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:224:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s213);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s214);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:225
_679 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_679);
_681 = (frost$core$Int) {225u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s215, _681, &$s216);
abort(); // unreachable
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:227
_685 = *(&local0);
_686 = ($fn217) _685->$class->vtable[4];
_687 = _686(_685, &$s218);
*(&local25) = ((frost$core$String*) NULL);
_689 = ((frost$core$Object*) _687);
frost$core$Frost$ref$frost$core$Object$Q(_689);
_691 = *(&local25);
_692 = ((frost$core$Object*) _691);
frost$core$Frost$unref$frost$core$Object$Q(_692);
*(&local25) = _687;
_695 = ((frost$core$Object*) _687);
frost$core$Frost$unref$frost$core$Object$Q(_695);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:228
_698 = *(&local25);
_699 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_698, &$s219);
_700 = _699.value;
if (_700) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:229
_703 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:229:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_706 = &(&local27)->$rawValue;
*_706 = _703;
_708 = *(&local27);
*(&local26) = _708;
_711 = *(&local26);
_712 = ((org$frostlang$frostc$Main$Format$nullable) { _711, true });
*(&local8) = _712;
goto block85;
block87:;
_715 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_698, &$s220);
_716 = _715.value;
if (_716) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:230
_719 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:230:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_722 = &(&local29)->$rawValue;
*_722 = _719;
_724 = *(&local29);
*(&local28) = _724;
_727 = *(&local28);
_728 = ((org$frostlang$frostc$Main$Format$nullable) { _727, true });
*(&local8) = _728;
goto block85;
block90:;
_731 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_698, &$s221);
_732 = _731.value;
if (_732) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:231
_735 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:231:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_738 = &(&local31)->$rawValue;
*_738 = _735;
_740 = *(&local31);
*(&local30) = _740;
_743 = *(&local30);
_744 = ((org$frostlang$frostc$Main$Format$nullable) { _743, true });
*(&local8) = _744;
goto block85;
block93:;
_747 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_698, &$s222);
_748 = _747.value;
if (_748) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:232
_751 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:232:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_754 = &(&local33)->$rawValue;
*_754 = _751;
_756 = *(&local33);
*(&local32) = _756;
_759 = *(&local32);
_760 = ((org$frostlang$frostc$Main$Format$nullable) { _759, true });
*(&local8) = _760;
goto block85;
block96:;
_763 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_698, &$s223);
_764 = _763.value;
if (_764) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:233
_767 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:233:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_770 = &(&local35)->$rawValue;
*_770 = _767;
_772 = *(&local35);
*(&local34) = _772;
_775 = *(&local34);
_776 = ((org$frostlang$frostc$Main$Format$nullable) { _775, true });
*(&local8) = _776;
goto block85;
block99:;
_779 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_698, &$s224);
_780 = _779.value;
if (_780) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:234
_783 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:234:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_786 = &(&local37)->$rawValue;
*_786 = _783;
_788 = *(&local37);
*(&local36) = _788;
_791 = *(&local36);
_792 = ((org$frostlang$frostc$Main$Format$nullable) { _791, true });
*(&local8) = _792;
goto block85;
block102:;
_795 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_698, &$s225);
_796 = _795.value;
if (_796) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:235
_799 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:235:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_802 = &(&local39)->$rawValue;
*_802 = _799;
_804 = *(&local39);
*(&local38) = _804;
_807 = *(&local38);
_808 = ((org$frostlang$frostc$Main$Format$nullable) { _807, true });
*(&local8) = _808;
goto block85;
block105:;
_811 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_698, &$s226);
_812 = _811.value;
if (_812) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:236
_815 = (frost$core$Int) {7u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:236:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_818 = &(&local41)->$rawValue;
*_818 = _815;
_820 = *(&local41);
*(&local40) = _820;
_823 = *(&local40);
_824 = ((org$frostlang$frostc$Main$Format$nullable) { _823, true });
*(&local8) = _824;
goto block85;
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:238
_828 = *(&local25);
_829 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s227, _828);
_830 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_829, &$s228);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:238:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_830);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s229);
_840 = ((frost$core$Object*) _830);
frost$core$Frost$unref$frost$core$Object$Q(_840);
_842 = ((frost$core$Object*) _829);
frost$core$Frost$unref$frost$core$Object$Q(_842);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:239
_845 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_845);
_847 = (frost$core$Int) {239u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s230, _847, &$s231);
abort(); // unreachable
block85:;
_850 = *(&local25);
_851 = ((frost$core$Object*) _850);
frost$core$Frost$unref$frost$core$Object$Q(_851);
*(&local25) = ((frost$core$String*) NULL);
goto block5;
block80:;
_855 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_118, &$s232);
_856 = _855.value;
if (_856) goto block112; else goto block113;
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:244
_859 = *(&local2);
_860 = _859;
_861 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_862 = *(&local0);
_863 = ($fn233) _862->$class->vtable[4];
_864 = _863(_862, &$s234);
frost$io$File$init$frost$core$String(_861, _864);
_866 = ((frost$core$Object*) _861);
frost$collections$Array$add$frost$collections$Array$T(_860, _866);
_868 = ((frost$core$Object*) _864);
frost$core$Frost$unref$frost$core$Object$Q(_868);
_870 = ((frost$core$Object*) _861);
frost$core$Frost$unref$frost$core$Object$Q(_870);
goto block5;
block113:;
_873 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_118, &$s235);
_874 = _873.value;
if (_874) goto block114; else goto block115;
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:247
_877 = *(&local3);
_878 = _877;
_879 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_880 = *(&local0);
_881 = ($fn236) _880->$class->vtable[4];
_882 = _881(_880, &$s237);
frost$io$File$init$frost$core$String(_879, _882);
_884 = ((frost$core$Object*) _879);
frost$collections$Array$add$frost$collections$Array$T(_878, _884);
_886 = ((frost$core$Object*) _882);
frost$core$Frost$unref$frost$core$Object$Q(_886);
_888 = ((frost$core$Object*) _879);
frost$core$Frost$unref$frost$core$Object$Q(_888);
goto block5;
block115:;
_891 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_118, &$s238);
_892 = _891.value;
if (_892) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:250
_895 = *(&local4);
_896 = _895;
_897 = *(&local0);
_898 = ($fn239) _897->$class->vtable[4];
_899 = _898(_897, &$s240);
_900 = ((frost$core$Object*) _899);
frost$collections$Array$add$frost$collections$Array$T(_896, _900);
_902 = ((frost$core$Object*) _899);
frost$core$Frost$unref$frost$core$Object$Q(_902);
goto block5;
block117:;
_905 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_118, &$s241);
_906 = _905.value;
if (_906) goto block118; else goto block119;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:253
_909 = *(&local0);
_910 = ($fn242) _909->$class->vtable[4];
_911 = _910(_909, &$s243);
_912 = _911;
_913 = ((frost$core$Object*) _912);
frost$core$Frost$ref$frost$core$Object$Q(_913);
_915 = *(&local9);
_916 = ((frost$core$Object*) _915);
frost$core$Frost$unref$frost$core$Object$Q(_916);
*(&local9) = _912;
_919 = ((frost$core$Object*) _911);
frost$core$Frost$unref$frost$core$Object$Q(_919);
goto block5;
block119:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:256
_923 = *(&local11);
_924 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(_923, &$s244);
_925 = _924.value;
if (_925) goto block120; else goto block122;
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:257
_928 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_929 = *(&local11);
frost$io$File$init$frost$core$String(_928, _929);
*(&local42) = ((frost$io$File*) NULL);
_932 = ((frost$core$Object*) _928);
frost$core$Frost$ref$frost$core$Object$Q(_932);
_934 = *(&local42);
_935 = ((frost$core$Object*) _934);
frost$core$Frost$unref$frost$core$Object$Q(_935);
*(&local42) = _928;
_938 = ((frost$core$Object*) _928);
frost$core$Frost$unref$frost$core$Object$Q(_938);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:258
_941 = *(&local1);
_942 = _941;
_943 = *(&local42);
_944 = ((frost$core$Object*) _943);
frost$collections$Array$add$frost$collections$Array$T(_942, _944);
_946 = *(&local42);
_947 = ((frost$core$Object*) _946);
frost$core$Frost$unref$frost$core$Object$Q(_947);
*(&local42) = ((frost$io$File*) NULL);
goto block5;
block122:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:261
_953 = *(&local11);
_954 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s245, _953);
_955 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_954, &$s246);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:261:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_955);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s247);
_965 = ((frost$core$Object*) _955);
frost$core$Frost$unref$frost$core$Object$Q(_965);
_967 = ((frost$core$Object*) _954);
frost$core$Frost$unref$frost$core$Object$Q(_967);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:262
_970 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_970);
_972 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s248, _972, &$s249);
abort(); // unreachable
block5:;
_976 = *(&local11);
_977 = ((frost$core$Object*) _976);
frost$core$Frost$unref$frost$core$Object$Q(_977);
*(&local11) = ((frost$core$String*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:267
_982 = *(&local8);
_983 = !_982.nonnull;
_984 = (frost$core$Bit) {_983};
_985 = _984.value;
if (_985) goto block125; else goto block127;
block127:;
_987 = *(&local8);
_988 = _987.nonnull;
_989 = (frost$core$Bit) {_988};
_990 = _989.value;
if (_990) goto block128; else goto block129;
block129:;
_992 = (frost$core$Int) {267u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s250, _992, &$s251);
abort(); // unreachable
block128:;
frost$core$Equatable* $tmp252;
if (_987.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp253;
    $tmp253 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp253->value = ((org$frostlang$frostc$Main$Format) _987.value);
    $tmp252 = ((frost$core$Equatable*) $tmp253);
}
else {
    $tmp252 = NULL;
}
_995 = $tmp252;
_996 = _995;
_997 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:267:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_1000 = &(&local44)->$rawValue;
*_1000 = _997;
_1002 = *(&local44);
*(&local43) = _1002;
_1005 = *(&local43);
org$frostlang$frostc$Main$Format$wrapper* $tmp254;
$tmp254 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp254->value = _1005;
_1006 = ((frost$core$Equatable*) $tmp254);
ITable* $tmp255 = _996->$class->itable;
while ($tmp255->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp255 = $tmp255->next;
}
_1007 = $tmp255->methods[1];
_1008 = _1007(_996, _1006);
_1009 = _1008.value;
_1010 = ((frost$core$Object*) _1006);
frost$core$Frost$unref$frost$core$Object$Q(_1010);
_1012 = ((frost$core$Object*) _995);
frost$core$Frost$unref$frost$core$Object$Q(_1012);
if (_1009) goto block125; else goto block126;
block125:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:268
_1016 = *(&local2);
_1017 = _1016;
_1018 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_1019 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$io$File$init$frost$core$String(_1018, _1019);
_1021 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1018, &$s256);
_1022 = ((frost$core$Object*) _1021);
frost$collections$Array$add$frost$collections$Array$T(_1017, _1022);
_1024 = ((frost$core$Object*) _1021);
frost$core$Frost$unref$frost$core$Object$Q(_1024);
_1026 = ((frost$core$Object*) _1019);
frost$core$Frost$unref$frost$core$Object$Q(_1026);
_1028 = ((frost$core$Object*) _1018);
frost$core$Frost$unref$frost$core$Object$Q(_1028);
goto block126;
block126:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:270
_1032 = *(&local2);
_1033 = _1032;
_1034 = &param0->frostHome;
_1035 = *_1034;
_1036 = ((frost$core$Object*) _1035);
frost$collections$Array$add$frost$collections$Array$T(_1033, _1036);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:271
_1039 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_1040 = org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String(_1039, _1040);
*(&local45) = ((frost$io$File*) NULL);
_1043 = ((frost$core$Object*) _1039);
frost$core$Frost$ref$frost$core$Object$Q(_1043);
_1045 = *(&local45);
_1046 = ((frost$core$Object*) _1045);
frost$core$Frost$unref$frost$core$Object$Q(_1046);
*(&local45) = _1039;
_1049 = ((frost$core$Object*) _1040);
frost$core$Frost$unref$frost$core$Object$Q(_1049);
_1051 = ((frost$core$Object*) _1039);
frost$core$Frost$unref$frost$core$Object$Q(_1051);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:272
_1054 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String(_1054, &$s257);
_1056 = ((frost$core$Object*) _1054);
frost$core$Frost$ref$frost$core$Object$Q(_1056);
_1058 = &param0->clang;
_1059 = *_1058;
_1060 = ((frost$core$Object*) _1059);
frost$core$Frost$unref$frost$core$Object$Q(_1060);
_1062 = &param0->clang;
*_1062 = _1054;
_1064 = ((frost$core$Object*) _1054);
frost$core$Frost$unref$frost$core$Object$Q(_1064);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:273
_1067 = *(&local1);
_1068 = ((frost$collections$CollectionView*) _1067);
ITable* $tmp258 = _1068->$class->itable;
while ($tmp258->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp258 = $tmp258->next;
}
_1069 = $tmp258->methods[0];
_1070 = _1069(_1068);
_1071 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:273:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1074 = _1070.value;
_1075 = _1071.value;
_1076 = _1074 == _1075;
_1077 = (frost$core$Bit) {_1076};
_1079 = _1077.value;
if (_1079) goto block131; else goto block132;
block131:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:274
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:274:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s259);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s260);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:275
_1092 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1092);
_1094 = (frost$core$Int) {275u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s261, _1094, &$s262);
abort(); // unreachable
block132:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:277
_1098 = *(&local8);
_1099 = !_1098.nonnull;
_1100 = (frost$core$Bit) {_1099};
_1101 = _1100.value;
if (_1101) goto block136; else goto block137;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:278
_1104 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:278:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_1107 = &(&local47)->$rawValue;
*_1107 = _1104;
_1109 = *(&local47);
*(&local46) = _1109;
_1112 = *(&local46);
_1113 = ((org$frostlang$frostc$Main$Format$nullable) { _1112, true });
*(&local8) = _1113;
goto block137;
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:280
_1117 = *(&local5);
_1118 = _1117 == NULL;
_1119 = (frost$core$Bit) {_1118};
_1120 = _1119.value;
if (_1120) goto block141; else goto block140;
block141:;
_1122 = *(&local8);
_1123 = _1122.nonnull;
_1124 = (frost$core$Bit) {_1123};
_1125 = _1124.value;
if (_1125) goto block142; else goto block143;
block143:;
_1127 = (frost$core$Int) {280u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s263, _1127, &$s264);
abort(); // unreachable
block142:;
frost$core$Equatable* $tmp265;
if (_1122.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp266;
    $tmp266 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp266->value = ((org$frostlang$frostc$Main$Format) _1122.value);
    $tmp265 = ((frost$core$Equatable*) $tmp266);
}
else {
    $tmp265 = NULL;
}
_1130 = $tmp265;
_1131 = _1130;
_1132 = (frost$core$Int) {7u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:280:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_1135 = &(&local49)->$rawValue;
*_1135 = _1132;
_1137 = *(&local49);
*(&local48) = _1137;
_1140 = *(&local48);
org$frostlang$frostc$Main$Format$wrapper* $tmp267;
$tmp267 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp267->value = _1140;
_1141 = ((frost$core$Equatable*) $tmp267);
ITable* $tmp268 = _1131->$class->itable;
while ($tmp268->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp268 = $tmp268->next;
}
_1142 = $tmp268->methods[1];
_1143 = _1142(_1131, _1141);
_1144 = _1143.value;
_1145 = ((frost$core$Object*) _1141);
frost$core$Frost$unref$frost$core$Object$Q(_1145);
_1147 = ((frost$core$Object*) _1130);
frost$core$Frost$unref$frost$core$Object$Q(_1147);
if (_1144) goto block139; else goto block140;
block139:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:281
_1151 = *(&local1);
_1152 = ((frost$collections$CollectionView*) _1151);
ITable* $tmp269 = _1152->$class->itable;
while ($tmp269->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp269 = $tmp269->next;
}
_1153 = $tmp269->methods[0];
_1154 = _1153(_1152);
_1155 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:281:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1158 = _1154.value;
_1159 = _1155.value;
_1160 = _1158 == _1159;
_1161 = (frost$core$Bit) {_1160};
_1163 = _1161.value;
if (_1163) goto block145; else goto block147;
block145:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:282
*(&local50) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:283
_1168 = *(&local8);
_1169 = _1168.nonnull;
_1170 = (frost$core$Bit) {_1169};
_1171 = _1170.value;
if (_1171) goto block149; else goto block150;
block150:;
_1173 = (frost$core$Int) {283u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s270, _1173, &$s271);
abort(); // unreachable
block149:;
_1176 = ((org$frostlang$frostc$Main$Format) _1168.value);
_1177 = _1176.$rawValue;
_1178 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:284:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1181 = _1177.value;
_1182 = _1178.value;
_1183 = _1181 == _1182;
_1184 = (frost$core$Bit) {_1183};
_1186 = _1184.value;
if (_1186) goto block152; else goto block153;
block152:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:284
_1189 = ((frost$core$Object*) &$s272);
frost$core$Frost$ref$frost$core$Object$Q(_1189);
_1191 = *(&local50);
_1192 = ((frost$core$Object*) _1191);
frost$core$Frost$unref$frost$core$Object$Q(_1192);
*(&local50) = &$s273;
goto block151;
block153:;
_1196 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:285:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1199 = _1177.value;
_1200 = _1196.value;
_1201 = _1199 == _1200;
_1202 = (frost$core$Bit) {_1201};
_1204 = _1202.value;
if (_1204) goto block155; else goto block156;
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:285
_1207 = ((frost$core$Object*) &$s274);
frost$core$Frost$ref$frost$core$Object$Q(_1207);
_1209 = *(&local50);
_1210 = ((frost$core$Object*) _1209);
frost$core$Frost$unref$frost$core$Object$Q(_1210);
*(&local50) = &$s275;
goto block151;
block156:;
_1214 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:286:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1217 = _1177.value;
_1218 = _1214.value;
_1219 = _1217 == _1218;
_1220 = (frost$core$Bit) {_1219};
_1222 = _1220.value;
if (_1222) goto block158; else goto block159;
block158:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:286
_1225 = ((frost$core$Object*) &$s276);
frost$core$Frost$ref$frost$core$Object$Q(_1225);
_1227 = *(&local50);
_1228 = ((frost$core$Object*) _1227);
frost$core$Frost$unref$frost$core$Object$Q(_1228);
*(&local50) = &$s277;
goto block151;
block159:;
_1232 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:287:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1235 = _1177.value;
_1236 = _1232.value;
_1237 = _1235 == _1236;
_1238 = (frost$core$Bit) {_1237};
_1240 = _1238.value;
if (_1240) goto block161; else goto block162;
block161:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:287
_1243 = ((frost$core$Object*) &$s278);
frost$core$Frost$ref$frost$core$Object$Q(_1243);
_1245 = *(&local50);
_1246 = ((frost$core$Object*) _1245);
frost$core$Frost$unref$frost$core$Object$Q(_1246);
*(&local50) = &$s279;
goto block151;
block162:;
_1250 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:288:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1253 = _1177.value;
_1254 = _1250.value;
_1255 = _1253 == _1254;
_1256 = (frost$core$Bit) {_1255};
_1258 = _1256.value;
if (_1258) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:288
_1261 = ((frost$core$Object*) &$s280);
frost$core$Frost$ref$frost$core$Object$Q(_1261);
_1263 = *(&local50);
_1264 = ((frost$core$Object*) _1263);
frost$core$Frost$unref$frost$core$Object$Q(_1264);
*(&local50) = &$s281;
goto block151;
block165:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:290
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:290:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s282);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s283);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:292
_1279 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1279);
_1281 = (frost$core$Int) {292u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s284, _1281, &$s285);
abort(); // unreachable
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:295
_1285 = *(&local1);
_1286 = _1285;
_1287 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Main.frost:295:35
_1289 = (frost$core$Int) {0u};
_1290 = _1287.value;
_1291 = _1289.value;
_1292 = _1290 >= _1291;
_1293 = (frost$core$Bit) {_1292};
_1294 = _1293.value;
if (_1294) goto block172; else goto block171;
block172:;
_1296 = ((frost$collections$CollectionView*) _1286);
ITable* $tmp286 = _1296->$class->itable;
while ($tmp286->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp286 = $tmp286->next;
}
_1297 = $tmp286->methods[0];
_1298 = _1297(_1296);
_1299 = _1287.value;
_1300 = _1298.value;
_1301 = _1299 < _1300;
_1302 = (frost$core$Bit) {_1301};
_1303 = _1302.value;
if (_1303) goto block170; else goto block171;
block171:;
_1305 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s287, _1305, &$s288);
abort(); // unreachable
block170:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_1309 = &_1286->data;
_1310 = *_1309;
_1311 = frost$core$Int64$init$frost$core$Int(_1287);
_1312 = _1311.value;
_1313 = _1310[_1312];
_1314 = _1313;
frost$core$Frost$ref$frost$core$Object$Q(_1314);
_1317 = ((frost$io$File*) _1313);
_1318 = *(&local50);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:295:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:184
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:184:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_1323 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1317, &$s289);
_1324 = &_1323->path;
_1325 = *_1324;
_1326 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_1325);
*(&local52) = ((frost$core$String*) NULL);
_1328 = ((frost$core$Object*) _1326);
frost$core$Frost$ref$frost$core$Object$Q(_1328);
_1330 = *(&local52);
_1331 = ((frost$core$Object*) _1330);
frost$core$Frost$unref$frost$core$Object$Q(_1331);
*(&local52) = _1326;
_1334 = ((frost$core$Object*) _1326);
frost$core$Frost$unref$frost$core$Object$Q(_1334);
_1336 = ((frost$core$Object*) _1323);
frost$core$Frost$unref$frost$core$Object$Q(_1336);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_1339 = *(&local52);
_1340 = _1339 == NULL;
_1341 = (frost$core$Bit) {_1340};
_1342 = _1341.value;
if (_1342) goto block175; else goto block176;
block175:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_1345 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1345);
_1347 = *(&local52);
_1348 = ((frost$core$Object*) _1347);
frost$core$Frost$unref$frost$core$Object$Q(_1348);
*(&local52) = ((frost$core$String*) NULL);
*(&local51) = ((frost$io$File*) NULL);
_1352 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1352);
goto block174;
block176:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_1356 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_1357 = *(&local52);
_1358 = _1357 != NULL;
_1359 = (frost$core$Bit) {_1358};
_1360 = _1359.value;
if (_1360) goto block177; else goto block178;
block178:;
_1362 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s290, _1362, &$s291);
abort(); // unreachable
block177:;
_1365 = _1357;
frost$io$File$init$frost$core$String(_1356, _1365);
_1367 = _1356;
_1368 = ((frost$core$Object*) _1367);
frost$core$Frost$ref$frost$core$Object$Q(_1368);
_1370 = ((frost$core$Object*) _1356);
frost$core$Frost$unref$frost$core$Object$Q(_1370);
_1372 = *(&local52);
_1373 = ((frost$core$Object*) _1372);
frost$core$Frost$unref$frost$core$Object$Q(_1373);
*(&local52) = ((frost$core$String*) NULL);
*(&local51) = _1367;
_1377 = ((frost$core$Object*) _1367);
frost$core$Frost$ref$frost$core$Object$Q(_1377);
goto block174;
block174:;
_1380 = *(&local51);
_1381 = _1380 != NULL;
_1382 = (frost$core$Bit) {_1381};
_1383 = _1382.value;
if (_1383) goto block179; else goto block180;
block180:;
_1385 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s292, _1385, &$s293);
abort(); // unreachable
block179:;
_1388 = _1380;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:184:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
_1391 = frost$io$File$get_name$R$frost$core$String(_1317);
*(&local54) = ((frost$core$String*) NULL);
_1393 = ((frost$core$Object*) _1391);
frost$core$Frost$ref$frost$core$Object$Q(_1393);
_1395 = *(&local54);
_1396 = ((frost$core$Object*) _1395);
frost$core$Frost$unref$frost$core$Object$Q(_1396);
*(&local54) = _1391;
_1399 = ((frost$core$Object*) _1391);
frost$core$Frost$unref$frost$core$Object$Q(_1399);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_1402 = *(&local54);
_1403 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_1402, &$s294);
*(&local55) = _1403;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_1406 = *(&local55);
_1407 = !_1406.nonnull;
_1408 = (frost$core$Bit) {_1407};
_1409 = _1408.value;
if (_1409) goto block182; else goto block183;
block182:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_1412 = *(&local54);
_1413 = ((frost$core$Object*) _1412);
frost$core$Frost$ref$frost$core$Object$Q(_1413);
_1415 = *(&local54);
_1416 = ((frost$core$Object*) _1415);
frost$core$Frost$unref$frost$core$Object$Q(_1416);
*(&local54) = ((frost$core$String*) NULL);
*(&local53) = _1412;
_1420 = ((frost$core$Object*) _1412);
frost$core$Frost$ref$frost$core$Object$Q(_1420);
goto block181;
block183:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_1424 = *(&local54);
_1425 = *(&local55);
_1426 = (frost$core$Bit) {false};
_1427 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _1425, _1426);
_1428 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_1424, _1427);
_1429 = ((frost$core$Object*) _1428);
frost$core$Frost$ref$frost$core$Object$Q(_1429);
_1431 = ((frost$core$Object*) _1428);
frost$core$Frost$unref$frost$core$Object$Q(_1431);
_1433 = *(&local54);
_1434 = ((frost$core$Object*) _1433);
frost$core$Frost$unref$frost$core$Object$Q(_1434);
*(&local54) = ((frost$core$String*) NULL);
*(&local53) = _1428;
_1438 = ((frost$core$Object*) _1428);
frost$core$Frost$ref$frost$core$Object$Q(_1438);
goto block181;
block181:;
_1441 = *(&local53);
_1442 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1441, _1318);
_1443 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1388, _1442);
_1444 = ((frost$core$Object*) _1443);
frost$core$Frost$ref$frost$core$Object$Q(_1444);
_1446 = ((frost$core$Object*) _1443);
frost$core$Frost$unref$frost$core$Object$Q(_1446);
_1448 = ((frost$core$Object*) _1442);
frost$core$Frost$unref$frost$core$Object$Q(_1448);
_1450 = ((frost$core$Object*) _1441);
frost$core$Frost$unref$frost$core$Object$Q(_1450);
_1452 = *(&local53);
_1453 = ((frost$core$Object*) _1452);
frost$core$Frost$unref$frost$core$Object$Q(_1453);
*(&local53) = ((frost$core$String*) NULL);
_1456 = ((frost$core$Object*) _1380);
frost$core$Frost$unref$frost$core$Object$Q(_1456);
_1458 = *(&local51);
_1459 = ((frost$core$Object*) _1458);
frost$core$Frost$unref$frost$core$Object$Q(_1459);
*(&local51) = ((frost$io$File*) NULL);
_1463 = _1443;
_1464 = ((frost$core$Object*) _1463);
frost$core$Frost$ref$frost$core$Object$Q(_1464);
_1466 = *(&local5);
_1467 = ((frost$core$Object*) _1466);
frost$core$Frost$unref$frost$core$Object$Q(_1467);
*(&local5) = _1463;
_1470 = ((frost$core$Object*) _1443);
frost$core$Frost$unref$frost$core$Object$Q(_1470);
_1472 = _1313;
frost$core$Frost$unref$frost$core$Object$Q(_1472);
_1474 = *(&local50);
_1475 = ((frost$core$Object*) _1474);
frost$core$Frost$unref$frost$core$Object$Q(_1475);
*(&local50) = ((frost$core$String*) NULL);
goto block140;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:297
_1480 = *(&local8);
_1481 = _1480.nonnull;
_1482 = (frost$core$Bit) {_1481};
_1483 = _1482.value;
if (_1483) goto block187; else goto block188;
block188:;
_1485 = (frost$core$Int) {297u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s295, _1485, &$s296);
abort(); // unreachable
block187:;
frost$core$Equatable* $tmp297;
if (_1480.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp298;
    $tmp298 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp298->value = ((org$frostlang$frostc$Main$Format) _1480.value);
    $tmp297 = ((frost$core$Equatable*) $tmp298);
}
else {
    $tmp297 = NULL;
}
_1488 = $tmp297;
_1489 = _1488;
_1490 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:297:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_1493 = &(&local57)->$rawValue;
*_1493 = _1490;
_1495 = *(&local57);
*(&local56) = _1495;
_1498 = *(&local56);
org$frostlang$frostc$Main$Format$wrapper* $tmp299;
$tmp299 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp299->value = _1498;
_1499 = ((frost$core$Equatable*) $tmp299);
ITable* $tmp300 = _1489->$class->itable;
while ($tmp300->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp300 = $tmp300->next;
}
_1500 = $tmp300->methods[0];
_1501 = _1500(_1489, _1499);
_1502 = _1501.value;
_1503 = ((frost$core$Object*) _1499);
frost$core$Frost$unref$frost$core$Object$Q(_1503);
_1505 = ((frost$core$Object*) _1488);
frost$core$Frost$unref$frost$core$Object$Q(_1505);
if (_1502) goto block184; else goto block186;
block184:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:298
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:298:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s301);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s302);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:299
_1519 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1519);
_1521 = (frost$core$Int) {299u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s303, _1521, &$s304);
abort(); // unreachable
block186:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:302
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:302:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s305);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s306);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:304
_1536 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1536);
_1538 = (frost$core$Int) {304u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s307, _1538, &$s308);
abort(); // unreachable
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:307
_1544 = (frost$core$Int) {0u};
*(&local58) = _1544;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:308
_1547 = (frost$core$Int) {0u};
*(&local59) = _1547;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:310
*(&local60) = ((org$frostlang$frostc$CodeGenerator*) NULL);
_1552 = ((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1552);
_1554 = *(&local60);
_1555 = ((frost$core$Object*) _1554);
frost$core$Frost$unref$frost$core$Object$Q(_1555);
*(&local60) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:311
_1559 = *(&local8);
_1560 = _1559.nonnull;
_1561 = (frost$core$Bit) {_1560};
_1562 = _1561.value;
if (_1562) goto block194; else goto block195;
block195:;
_1564 = (frost$core$Int) {311u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s309, _1564, &$s310);
abort(); // unreachable
block194:;
_1567 = ((org$frostlang$frostc$Main$Format) _1559.value);
_1568 = _1567.$rawValue;
_1569 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:312:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1572 = _1568.value;
_1573 = _1569.value;
_1574 = _1572 == _1573;
_1575 = (frost$core$Bit) {_1574};
_1577 = _1575.value;
if (_1577) goto block197; else goto block198;
block198:;
_1579 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:312:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1582 = _1568.value;
_1583 = _1579.value;
_1584 = _1582 == _1583;
_1585 = (frost$core$Bit) {_1584};
_1587 = _1585.value;
if (_1587) goto block197; else goto block200;
block200:;
_1589 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:312:60
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1592 = _1568.value;
_1593 = _1589.value;
_1594 = _1592 == _1593;
_1595 = (frost$core$Bit) {_1594};
_1597 = _1595.value;
if (_1597) goto block197; else goto block202;
block197:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:313
*(&local61) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:314
_1602 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(sizeof(org$frostlang$frostc$LLVMCodeGenerator), (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
_1603 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
_1604 = *(&local5);
_1605 = _1604 != NULL;
_1606 = (frost$core$Bit) {_1605};
_1607 = _1606.value;
if (_1607) goto block206; else goto block207;
block207:;
_1609 = (frost$core$Int) {315u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s311, _1609, &$s312);
abort(); // unreachable
block206:;
_1612 = _1604;
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:315:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:184
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:184:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_1617 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1612, &$s313);
_1618 = &_1617->path;
_1619 = *_1618;
_1620 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_1619);
*(&local63) = ((frost$core$String*) NULL);
_1622 = ((frost$core$Object*) _1620);
frost$core$Frost$ref$frost$core$Object$Q(_1622);
_1624 = *(&local63);
_1625 = ((frost$core$Object*) _1624);
frost$core$Frost$unref$frost$core$Object$Q(_1625);
*(&local63) = _1620;
_1628 = ((frost$core$Object*) _1620);
frost$core$Frost$unref$frost$core$Object$Q(_1628);
_1630 = ((frost$core$Object*) _1617);
frost$core$Frost$unref$frost$core$Object$Q(_1630);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_1633 = *(&local63);
_1634 = _1633 == NULL;
_1635 = (frost$core$Bit) {_1634};
_1636 = _1635.value;
if (_1636) goto block210; else goto block211;
block210:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_1639 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1639);
_1641 = *(&local63);
_1642 = ((frost$core$Object*) _1641);
frost$core$Frost$unref$frost$core$Object$Q(_1642);
*(&local63) = ((frost$core$String*) NULL);
*(&local62) = ((frost$io$File*) NULL);
_1646 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1646);
goto block209;
block211:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_1650 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_1651 = *(&local63);
_1652 = _1651 != NULL;
_1653 = (frost$core$Bit) {_1652};
_1654 = _1653.value;
if (_1654) goto block212; else goto block213;
block213:;
_1656 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s314, _1656, &$s315);
abort(); // unreachable
block212:;
_1659 = _1651;
frost$io$File$init$frost$core$String(_1650, _1659);
_1661 = _1650;
_1662 = ((frost$core$Object*) _1661);
frost$core$Frost$ref$frost$core$Object$Q(_1662);
_1664 = ((frost$core$Object*) _1650);
frost$core$Frost$unref$frost$core$Object$Q(_1664);
_1666 = *(&local63);
_1667 = ((frost$core$Object*) _1666);
frost$core$Frost$unref$frost$core$Object$Q(_1667);
*(&local63) = ((frost$core$String*) NULL);
*(&local62) = _1661;
_1671 = ((frost$core$Object*) _1661);
frost$core$Frost$ref$frost$core$Object$Q(_1671);
goto block209;
block209:;
_1674 = *(&local62);
_1675 = _1674 != NULL;
_1676 = (frost$core$Bit) {_1675};
_1677 = _1676.value;
if (_1677) goto block214; else goto block215;
block215:;
_1679 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s316, _1679, &$s317);
abort(); // unreachable
block214:;
_1682 = _1674;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:184:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
_1685 = frost$io$File$get_name$R$frost$core$String(_1612);
*(&local65) = ((frost$core$String*) NULL);
_1687 = ((frost$core$Object*) _1685);
frost$core$Frost$ref$frost$core$Object$Q(_1687);
_1689 = *(&local65);
_1690 = ((frost$core$Object*) _1689);
frost$core$Frost$unref$frost$core$Object$Q(_1690);
*(&local65) = _1685;
_1693 = ((frost$core$Object*) _1685);
frost$core$Frost$unref$frost$core$Object$Q(_1693);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_1696 = *(&local65);
_1697 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_1696, &$s318);
*(&local66) = _1697;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_1700 = *(&local66);
_1701 = !_1700.nonnull;
_1702 = (frost$core$Bit) {_1701};
_1703 = _1702.value;
if (_1703) goto block217; else goto block218;
block217:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_1706 = *(&local65);
_1707 = ((frost$core$Object*) _1706);
frost$core$Frost$ref$frost$core$Object$Q(_1707);
_1709 = *(&local65);
_1710 = ((frost$core$Object*) _1709);
frost$core$Frost$unref$frost$core$Object$Q(_1710);
*(&local65) = ((frost$core$String*) NULL);
*(&local64) = _1706;
_1714 = ((frost$core$Object*) _1706);
frost$core$Frost$ref$frost$core$Object$Q(_1714);
goto block216;
block218:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_1718 = *(&local65);
_1719 = *(&local66);
_1720 = (frost$core$Bit) {false};
_1721 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _1719, _1720);
_1722 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_1718, _1721);
_1723 = ((frost$core$Object*) _1722);
frost$core$Frost$ref$frost$core$Object$Q(_1723);
_1725 = ((frost$core$Object*) _1722);
frost$core$Frost$unref$frost$core$Object$Q(_1725);
_1727 = *(&local65);
_1728 = ((frost$core$Object*) _1727);
frost$core$Frost$unref$frost$core$Object$Q(_1728);
*(&local65) = ((frost$core$String*) NULL);
*(&local64) = _1722;
_1732 = ((frost$core$Object*) _1722);
frost$core$Frost$ref$frost$core$Object$Q(_1732);
goto block216;
block216:;
_1735 = *(&local64);
_1736 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1735, &$s319);
_1737 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1682, _1736);
_1738 = ((frost$core$Object*) _1737);
frost$core$Frost$ref$frost$core$Object$Q(_1738);
_1740 = ((frost$core$Object*) _1737);
frost$core$Frost$unref$frost$core$Object$Q(_1740);
_1742 = ((frost$core$Object*) _1736);
frost$core$Frost$unref$frost$core$Object$Q(_1742);
_1744 = ((frost$core$Object*) _1735);
frost$core$Frost$unref$frost$core$Object$Q(_1744);
_1746 = *(&local64);
_1747 = ((frost$core$Object*) _1746);
frost$core$Frost$unref$frost$core$Object$Q(_1747);
*(&local64) = ((frost$core$String*) NULL);
_1750 = ((frost$core$Object*) _1674);
frost$core$Frost$unref$frost$core$Object$Q(_1750);
_1752 = *(&local62);
_1753 = ((frost$core$Object*) _1752);
frost$core$Frost$unref$frost$core$Object$Q(_1753);
*(&local62) = ((frost$io$File*) NULL);
_1757 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(_1737);
_1758 = _1757;
_1759 = &_1758->$rawValue;
_1760 = *_1759;
_1761 = _1760.value;
_1762 = _1761 == 0u;
if (_1762) goto block219; else goto block220;
block220:;
_1764 = &_1757->$data.$ERROR.field0;
_1765 = *_1764;
_1766 = ((frost$core$Object*) _1765);
frost$core$Frost$ref$frost$core$Object$Q(_1766);
*(&local61) = _1765;
_1769 = ((frost$core$Object*) _1757);
frost$core$Frost$unref$frost$core$Object$Q(_1769);
_1771 = ((frost$core$Object*) _1737);
frost$core$Frost$unref$frost$core$Object$Q(_1771);
_1773 = ((frost$core$Object*) _1603);
frost$core$Frost$unref$frost$core$Object$Q(_1773);
_1775 = ((frost$core$Object*) _1602);
frost$core$Frost$unref$frost$core$Object$Q(_1775);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:318
_1799 = *(&local61);
_1800 = ((frost$core$Object*) _1799);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:318:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_1803 = ($fn320) _1800->$class->vtable[0];
_1804 = _1803(_1800);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_1804);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_1811 = ((frost$core$Object*) _1804);
frost$core$Frost$unref$frost$core$Object$Q(_1811);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:319
_1815 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1815);
_1817 = (frost$core$Int) {319u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s321, _1817, &$s322);
abort(); // unreachable
block219:;
_1778 = &_1757->$data.$SUCCESS.field0;
_1779 = *_1778;
_1780 = ((frost$io$OutputStream*) _1779);
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream(_1602, _1603, _1780);
_1782 = ((org$frostlang$frostc$CodeGenerator*) _1602);
_1783 = ((frost$core$Object*) _1782);
frost$core$Frost$ref$frost$core$Object$Q(_1783);
_1785 = *(&local60);
_1786 = ((frost$core$Object*) _1785);
frost$core$Frost$unref$frost$core$Object$Q(_1786);
*(&local60) = _1782;
_1789 = ((frost$core$Object*) _1757);
frost$core$Frost$unref$frost$core$Object$Q(_1789);
_1791 = ((frost$core$Object*) _1737);
frost$core$Frost$unref$frost$core$Object$Q(_1791);
_1793 = ((frost$core$Object*) _1603);
frost$core$Frost$unref$frost$core$Object$Q(_1793);
_1795 = ((frost$core$Object*) _1602);
frost$core$Frost$unref$frost$core$Object$Q(_1795);
_1820 = *(&local61);
_1821 = ((frost$core$Object*) _1820);
frost$core$Frost$unref$frost$core$Object$Q(_1821);
*(&local61) = ((frost$core$Error*) NULL);
goto block196;
block202:;
_1825 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:322:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1828 = _1568.value;
_1829 = _1825.value;
_1830 = _1828 == _1829;
_1831 = (frost$core$Bit) {_1830};
_1833 = _1831.value;
if (_1833) goto block223; else goto block224;
block223:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:323
_1836 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(sizeof(org$frostlang$frostc$HCodeGenerator), (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
_1837 = *(&local5);
_1838 = _1837 != NULL;
_1839 = (frost$core$Bit) {_1838};
_1840 = _1839.value;
if (_1840) goto block226; else goto block227;
block227:;
_1842 = (frost$core$Int) {323u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s323, _1842, &$s324);
abort(); // unreachable
block226:;
_1845 = _1837;
org$frostlang$frostc$HCodeGenerator$init$frost$io$File(_1836, _1845);
_1847 = ((org$frostlang$frostc$CodeGenerator*) _1836);
_1848 = ((frost$core$Object*) _1847);
frost$core$Frost$ref$frost$core$Object$Q(_1848);
_1850 = *(&local60);
_1851 = ((frost$core$Object*) _1850);
frost$core$Frost$unref$frost$core$Object$Q(_1851);
*(&local60) = _1847;
_1854 = ((frost$core$Object*) _1836);
frost$core$Frost$unref$frost$core$Object$Q(_1854);
goto block196;
block224:;
_1857 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:325:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1860 = _1568.value;
_1861 = _1857.value;
_1862 = _1860 == _1861;
_1863 = (frost$core$Bit) {_1862};
_1865 = _1863.value;
if (_1865) goto block228; else goto block229;
block228:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:326
_1868 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(sizeof(org$frostlang$frostc$CCodeGenerator), (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
_1869 = *(&local5);
_1870 = _1869 != NULL;
_1871 = (frost$core$Bit) {_1870};
_1872 = _1871.value;
if (_1872) goto block231; else goto block232;
block232:;
_1874 = (frost$core$Int) {326u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s325, _1874, &$s326);
abort(); // unreachable
block231:;
_1877 = _1869;
org$frostlang$frostc$CCodeGenerator$init$frost$io$File(_1868, _1877);
_1879 = ((org$frostlang$frostc$CodeGenerator*) _1868);
_1880 = ((frost$core$Object*) _1879);
frost$core$Frost$ref$frost$core$Object$Q(_1880);
_1882 = *(&local60);
_1883 = ((frost$core$Object*) _1882);
frost$core$Frost$unref$frost$core$Object$Q(_1883);
*(&local60) = _1879;
_1886 = ((frost$core$Object*) _1868);
frost$core$Frost$unref$frost$core$Object$Q(_1886);
goto block196;
block229:;
_1889 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:328:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1892 = _1568.value;
_1893 = _1889.value;
_1894 = _1892 == _1893;
_1895 = (frost$core$Bit) {_1894};
_1897 = _1895.value;
if (_1897) goto block233; else goto block234;
block233:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:329
*(&local67) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:330
_1902 = (org$frostlang$frostc$StubCodeGenerator*) frostObjectAlloc(sizeof(org$frostlang$frostc$StubCodeGenerator), (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$class);
_1903 = *(&local5);
_1904 = _1903 != NULL;
_1905 = (frost$core$Bit) {_1904};
_1906 = _1905.value;
if (_1906) goto block238; else goto block239;
block239:;
_1908 = (frost$core$Int) {330u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s327, _1908, &$s328);
abort(); // unreachable
block238:;
_1911 = _1903;
_1912 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(_1911);
_1913 = _1912;
_1914 = &_1913->$rawValue;
_1915 = *_1914;
_1916 = _1915.value;
_1917 = _1916 == 0u;
if (_1917) goto block240; else goto block241;
block241:;
_1919 = &_1912->$data.$ERROR.field0;
_1920 = *_1919;
_1921 = ((frost$core$Object*) _1920);
frost$core$Frost$ref$frost$core$Object$Q(_1921);
*(&local67) = _1920;
_1924 = ((frost$core$Object*) _1912);
frost$core$Frost$unref$frost$core$Object$Q(_1924);
_1926 = ((frost$core$Object*) _1902);
frost$core$Frost$unref$frost$core$Object$Q(_1926);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:333
_1946 = *(&local67);
_1947 = ((frost$core$Object*) _1946);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:333:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_1950 = ($fn329) _1947->$class->vtable[0];
_1951 = _1950(_1947);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_1951);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_1958 = ((frost$core$Object*) _1951);
frost$core$Frost$unref$frost$core$Object$Q(_1958);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:334
_1962 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1962);
_1964 = (frost$core$Int) {334u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s330, _1964, &$s331);
abort(); // unreachable
block240:;
_1929 = &_1912->$data.$SUCCESS.field0;
_1930 = *_1929;
_1931 = ((frost$io$OutputStream*) _1930);
org$frostlang$frostc$StubCodeGenerator$init$frost$io$OutputStream(_1902, _1931);
_1933 = ((org$frostlang$frostc$CodeGenerator*) _1902);
_1934 = ((frost$core$Object*) _1933);
frost$core$Frost$ref$frost$core$Object$Q(_1934);
_1936 = *(&local60);
_1937 = ((frost$core$Object*) _1936);
frost$core$Frost$unref$frost$core$Object$Q(_1937);
*(&local60) = _1933;
_1940 = ((frost$core$Object*) _1912);
frost$core$Frost$unref$frost$core$Object$Q(_1940);
_1942 = ((frost$core$Object*) _1902);
frost$core$Frost$unref$frost$core$Object$Q(_1942);
_1967 = *(&local67);
_1968 = ((frost$core$Object*) _1967);
frost$core$Frost$unref$frost$core$Object$Q(_1968);
*(&local67) = ((frost$core$Error*) NULL);
goto block196;
block234:;
_1972 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:337:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1975 = _1568.value;
_1976 = _1972.value;
_1977 = _1975 == _1976;
_1978 = (frost$core$Bit) {_1977};
_1980 = _1978.value;
if (_1980) goto block244; else goto block196;
block244:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:338
_1983 = (org$frostlang$frostc$Interpreter*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter), (frost$core$Class*) &org$frostlang$frostc$Interpreter$class);
org$frostlang$frostc$Interpreter$init(_1983);
_1985 = ((org$frostlang$frostc$CodeGenerator*) _1983);
_1986 = ((frost$core$Object*) _1985);
frost$core$Frost$ref$frost$core$Object$Q(_1986);
_1988 = *(&local60);
_1989 = ((frost$core$Object*) _1988);
frost$core$Frost$unref$frost$core$Object$Q(_1989);
*(&local60) = _1985;
_1992 = ((frost$core$Object*) _1983);
frost$core$Frost$unref$frost$core$Object$Q(_1992);
goto block196;
block196:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:341
_1996 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Settings), (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
_1997 = &param0->frostHome;
_1998 = *_1997;
_1999 = *(&local2);
_2000 = ((frost$collections$ListView*) _1999);
_2001 = *(&local6);
_2002 = *(&local7);
_2003 = &param0->debug;
_2004 = *_2003;
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int$frost$core$Int$frost$core$Bit(_1996, _1998, _2000, _2001, _2002, _2004);
*(&local68) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_2007 = ((frost$core$Object*) _1996);
frost$core$Frost$ref$frost$core$Object$Q(_2007);
_2009 = *(&local68);
_2010 = ((frost$core$Object*) _2009);
frost$core$Frost$unref$frost$core$Object$Q(_2010);
*(&local68) = _1996;
_2013 = ((frost$core$Object*) _1996);
frost$core$Frost$unref$frost$core$Object$Q(_2013);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:343
_2016 = (frost$threads$MessageQueue*) frostObjectAlloc(sizeof(frost$threads$MessageQueue), (frost$core$Class*) &frost$threads$MessageQueue$class);
_2017 = _2016;
frost$threads$MessageQueue$init(_2017);
*(&local69) = ((frost$threads$MessageQueue*) NULL);
_2020 = ((frost$core$Object*) _2016);
frost$core$Frost$ref$frost$core$Object$Q(_2020);
_2022 = *(&local69);
_2023 = ((frost$core$Object*) _2022);
frost$core$Frost$unref$frost$core$Object$Q(_2023);
*(&local69) = _2016;
_2026 = ((frost$core$Object*) _2016);
frost$core$Frost$unref$frost$core$Object$Q(_2026);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:344
_2029 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler), (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
_2030 = *(&local69);
_2031 = *(&local60);
_2032 = *(&local68);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT$org$frostlang$frostc$CodeGenerator$Q$org$frostlang$frostc$Compiler$Settings(_2029, _2030, _2031, _2032);
*(&local70) = ((org$frostlang$frostc$Compiler*) NULL);
_2035 = ((frost$core$Object*) _2029);
frost$core$Frost$ref$frost$core$Object$Q(_2035);
_2037 = *(&local70);
_2038 = ((frost$core$Object*) _2037);
frost$core$Frost$unref$frost$core$Object$Q(_2038);
*(&local70) = _2029;
_2041 = ((frost$core$Object*) _2029);
frost$core$Frost$unref$frost$core$Object$Q(_2041);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:345
_2044 = *(&local8);
_2045 = _2044.nonnull;
_2046 = (frost$core$Bit) {_2045};
_2047 = _2046.value;
if (_2047) goto block248; else goto block249;
block249:;
_2049 = (frost$core$Int) {345u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s332, _2049, &$s333);
abort(); // unreachable
block248:;
frost$core$Equatable* $tmp334;
if (_2044.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp335;
    $tmp335 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp335->value = ((org$frostlang$frostc$Main$Format) _2044.value);
    $tmp334 = ((frost$core$Equatable*) $tmp335);
}
else {
    $tmp334 = NULL;
}
_2052 = $tmp334;
_2053 = _2052;
_2054 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:345:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_2057 = &(&local72)->$rawValue;
*_2057 = _2054;
_2059 = *(&local72);
*(&local71) = _2059;
_2062 = *(&local71);
org$frostlang$frostc$Main$Format$wrapper* $tmp336;
$tmp336 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp336->value = _2062;
_2063 = ((frost$core$Equatable*) $tmp336);
ITable* $tmp337 = _2053->$class->itable;
while ($tmp337->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp337 = $tmp337->next;
}
_2064 = $tmp337->methods[0];
_2065 = _2064(_2053, _2063);
_2066 = _2065.value;
_2067 = ((frost$core$Object*) _2063);
frost$core$Frost$unref$frost$core$Object$Q(_2067);
_2069 = ((frost$core$Object*) _2052);
frost$core$Frost$unref$frost$core$Object$Q(_2069);
if (_2066) goto block246; else goto block247;
block246:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:346
_2073 = *(&local9);
_2074 = _2073 == NULL;
_2075 = (frost$core$Bit) {_2074};
_2076 = _2075.value;
if (_2076) goto block251; else goto block252;
block251:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:347
_2079 = &$s338;
_2080 = ((frost$core$Object*) _2079);
frost$core$Frost$ref$frost$core$Object$Q(_2080);
_2082 = *(&local9);
_2083 = ((frost$core$Object*) _2082);
frost$core$Frost$unref$frost$core$Object$Q(_2083);
*(&local9) = _2079;
goto block252;
block252:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:349
_2088 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(sizeof(org$frostlang$frostc$HTMLProcessor), (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
_2089 = *(&local70);
org$frostlang$frostc$HTMLProcessor$init$org$frostlang$frostc$Compiler(_2088, _2089);
_2091 = *(&local1);
_2092 = _2091;
_2093 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Main.frost:349:56
_2095 = (frost$core$Int) {0u};
_2096 = _2093.value;
_2097 = _2095.value;
_2098 = _2096 >= _2097;
_2099 = (frost$core$Bit) {_2098};
_2100 = _2099.value;
if (_2100) goto block256; else goto block255;
block256:;
_2102 = ((frost$collections$CollectionView*) _2092);
ITable* $tmp339 = _2102->$class->itable;
while ($tmp339->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp339 = $tmp339->next;
}
_2103 = $tmp339->methods[0];
_2104 = _2103(_2102);
_2105 = _2093.value;
_2106 = _2104.value;
_2107 = _2105 < _2106;
_2108 = (frost$core$Bit) {_2107};
_2109 = _2108.value;
if (_2109) goto block254; else goto block255;
block255:;
_2111 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s340, _2111, &$s341);
abort(); // unreachable
block254:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_2115 = &_2092->data;
_2116 = *_2115;
_2117 = frost$core$Int64$init$frost$core$Int(_2093);
_2118 = _2117.value;
_2119 = _2116[_2118];
_2120 = _2119;
frost$core$Frost$ref$frost$core$Object$Q(_2120);
_2123 = ((frost$io$File*) _2119);
_2124 = *(&local5);
_2125 = _2124 != NULL;
_2126 = (frost$core$Bit) {_2125};
_2127 = _2126.value;
if (_2127) goto block257; else goto block258;
block258:;
_2129 = (frost$core$Int) {349u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s342, _2129, &$s343);
abort(); // unreachable
block257:;
_2132 = _2124;
_2133 = *(&local9);
_2134 = _2133 != NULL;
_2135 = (frost$core$Bit) {_2134};
_2136 = _2135.value;
if (_2136) goto block259; else goto block260;
block260:;
_2138 = (frost$core$Int) {349u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s344, _2138, &$s345);
abort(); // unreachable
block259:;
_2141 = _2133;
_2142 = ($fn346) _2088->$class->vtable[3];
_2142(_2088, _2123, _2132, _2141);
_2144 = _2119;
frost$core$Frost$unref$frost$core$Object$Q(_2144);
_2146 = ((frost$core$Object*) _2088);
frost$core$Frost$unref$frost$core$Object$Q(_2146);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:350
_2149 = *(&local70);
_2150 = ((frost$core$Object*) _2149);
frost$core$Frost$unref$frost$core$Object$Q(_2150);
*(&local70) = ((org$frostlang$frostc$Compiler*) NULL);
_2153 = *(&local69);
_2154 = ((frost$core$Object*) _2153);
frost$core$Frost$unref$frost$core$Object$Q(_2154);
*(&local69) = ((frost$threads$MessageQueue*) NULL);
_2157 = *(&local68);
_2158 = ((frost$core$Object*) _2157);
frost$core$Frost$unref$frost$core$Object$Q(_2158);
*(&local68) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_2161 = *(&local60);
_2162 = ((frost$core$Object*) _2161);
frost$core$Frost$unref$frost$core$Object$Q(_2162);
*(&local60) = ((org$frostlang$frostc$CodeGenerator*) NULL);
_2165 = *(&local45);
_2166 = ((frost$core$Object*) _2165);
frost$core$Frost$unref$frost$core$Object$Q(_2166);
*(&local45) = ((frost$io$File*) NULL);
_2169 = *(&local9);
_2170 = ((frost$core$Object*) _2169);
frost$core$Frost$unref$frost$core$Object$Q(_2170);
*(&local9) = ((frost$core$String*) NULL);
_2173 = *(&local5);
_2174 = ((frost$core$Object*) _2173);
frost$core$Frost$unref$frost$core$Object$Q(_2174);
*(&local5) = ((frost$io$File*) NULL);
_2177 = *(&local4);
_2178 = ((frost$core$Object*) _2177);
frost$core$Frost$unref$frost$core$Object$Q(_2178);
*(&local4) = ((frost$collections$Array*) NULL);
_2181 = *(&local3);
_2182 = ((frost$core$Object*) _2181);
frost$core$Frost$unref$frost$core$Object$Q(_2182);
*(&local3) = ((frost$collections$Array*) NULL);
_2185 = *(&local2);
_2186 = ((frost$core$Object*) _2185);
frost$core$Frost$unref$frost$core$Object$Q(_2186);
*(&local2) = ((frost$collections$Array*) NULL);
_2189 = *(&local1);
_2190 = ((frost$core$Object*) _2189);
frost$core$Frost$unref$frost$core$Object$Q(_2190);
*(&local1) = ((frost$collections$Array*) NULL);
_2193 = *(&local0);
_2194 = ((frost$core$Object*) _2193);
frost$core$Frost$unref$frost$core$Object$Q(_2194);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block247:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:352
_2199 = *(&local9);
_2200 = _2199 != NULL;
_2201 = (frost$core$Bit) {_2200};
_2202 = _2201.value;
if (_2202) goto block261; else goto block262;
block261:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:353
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:353:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s347);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s348);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:354
_2215 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_2215);
_2217 = (frost$core$Int) {354u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s349, _2217, &$s350);
abort(); // unreachable
block262:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:356
_2221 = *(&local1);
_2222 = ((frost$collections$Iterable*) _2221);
_2223 = _2222;
ITable* $tmp351 = _2223->$class->itable;
while ($tmp351->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp351 = $tmp351->next;
}
_2224 = $tmp351->methods[0];
_2225 = _2224(_2223);
_2226 = _2225;
goto block265;
block265:;
_2228 = _2226;
ITable* $tmp352 = _2228->$class->itable;
while ($tmp352->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp352 = $tmp352->next;
}
_2229 = $tmp352->methods[0];
_2230 = _2229(_2228);
_2231 = _2230.value;
if (_2231) goto block267; else goto block266;
block266:;
*(&local73) = ((frost$io$File*) NULL);
_2234 = _2226;
ITable* $tmp353 = _2234->$class->itable;
while ($tmp353->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp353 = $tmp353->next;
}
_2235 = $tmp353->methods[1];
_2236 = _2235(_2234);
_2237 = ((frost$io$File*) _2236);
_2238 = ((frost$core$Object*) _2237);
frost$core$Frost$ref$frost$core$Object$Q(_2238);
_2240 = *(&local73);
_2241 = ((frost$core$Object*) _2240);
frost$core$Frost$unref$frost$core$Object$Q(_2241);
*(&local73) = _2237;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:357
_2245 = *(&local70);
_2246 = *(&local73);
_2247 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT(_2245, _2246);
_2248 = ((frost$collections$Iterable*) _2247);
_2249 = _2248;
ITable* $tmp354 = _2249->$class->itable;
while ($tmp354->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp354 = $tmp354->next;
}
_2250 = $tmp354->methods[0];
_2251 = _2250(_2249);
_2252 = _2251;
goto block268;
block268:;
_2254 = _2252;
ITable* $tmp355 = _2254->$class->itable;
while ($tmp355->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp355 = $tmp355->next;
}
_2255 = $tmp355->methods[0];
_2256 = _2255(_2254);
_2257 = _2256.value;
if (_2257) goto block270; else goto block269;
block269:;
*(&local74) = ((org$frostlang$frostc$ClassDecl*) NULL);
_2260 = _2252;
ITable* $tmp356 = _2260->$class->itable;
while ($tmp356->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp356 = $tmp356->next;
}
_2261 = $tmp356->methods[1];
_2262 = _2261(_2260);
_2263 = ((org$frostlang$frostc$ClassDecl*) _2262);
_2264 = ((frost$core$Object*) _2263);
frost$core$Frost$ref$frost$core$Object$Q(_2264);
_2266 = *(&local74);
_2267 = ((frost$core$Object*) _2266);
frost$core$Frost$unref$frost$core$Object$Q(_2267);
*(&local74) = _2263;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:358
_2271 = *(&local70);
_2272 = *(&local74);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Main.frost:358:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5811
_2275 = (frost$core$Bit) {false};
_2276 = &_2272->external;
*_2276 = _2275;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5812
_2279 = &_2272->classes;
_2280 = *_2279;
_2281 = ((frost$collections$Iterable*) _2280);
_2282 = _2281;
ITable* $tmp357 = _2282->$class->itable;
while ($tmp357->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp357 = $tmp357->next;
}
_2283 = $tmp357->methods[0];
_2284 = _2283(_2282);
_2285 = _2284;
goto block272;
block272:;
_2287 = _2285;
ITable* $tmp358 = _2287->$class->itable;
while ($tmp358->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp358 = $tmp358->next;
}
_2288 = $tmp358->methods[0];
_2289 = _2288(_2287);
_2290 = _2289.value;
if (_2290) goto block274; else goto block273;
block273:;
*(&local75) = ((org$frostlang$frostc$ClassDecl*) NULL);
_2293 = _2285;
ITable* $tmp359 = _2293->$class->itable;
while ($tmp359->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp359 = $tmp359->next;
}
_2294 = $tmp359->methods[1];
_2295 = _2294(_2293);
_2296 = ((org$frostlang$frostc$ClassDecl*) _2295);
_2297 = ((frost$core$Object*) _2296);
frost$core$Frost$ref$frost$core$Object$Q(_2297);
_2299 = *(&local75);
_2300 = ((frost$core$Object*) _2299);
frost$core$Frost$unref$frost$core$Object$Q(_2300);
*(&local75) = _2296;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5813
_2304 = *(&local75);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Compiler.frost:5813:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5811
_2307 = (frost$core$Bit) {false};
_2308 = &_2304->external;
*_2308 = _2307;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5812
_2311 = &_2304->classes;
_2312 = *_2311;
_2313 = ((frost$collections$Iterable*) _2312);
_2314 = _2313;
ITable* $tmp360 = _2314->$class->itable;
while ($tmp360->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp360 = $tmp360->next;
}
_2315 = $tmp360->methods[0];
_2316 = _2315(_2314);
_2317 = _2316;
goto block276;
block276:;
_2319 = _2317;
ITable* $tmp361 = _2319->$class->itable;
while ($tmp361->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp361 = $tmp361->next;
}
_2320 = $tmp361->methods[0];
_2321 = _2320(_2319);
_2322 = _2321.value;
if (_2322) goto block278; else goto block277;
block277:;
*(&local76) = ((org$frostlang$frostc$ClassDecl*) NULL);
_2325 = _2317;
ITable* $tmp362 = _2325->$class->itable;
while ($tmp362->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp362 = $tmp362->next;
}
_2326 = $tmp362->methods[1];
_2327 = _2326(_2325);
_2328 = ((org$frostlang$frostc$ClassDecl*) _2327);
_2329 = ((frost$core$Object*) _2328);
frost$core$Frost$ref$frost$core$Object$Q(_2329);
_2331 = *(&local76);
_2332 = ((frost$core$Object*) _2331);
frost$core$Frost$unref$frost$core$Object$Q(_2332);
*(&local76) = _2328;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5813
_2336 = *(&local76);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl(_2271, _2336);
_2338 = _2327;
frost$core$Frost$unref$frost$core$Object$Q(_2338);
_2340 = *(&local76);
_2341 = ((frost$core$Object*) _2340);
frost$core$Frost$unref$frost$core$Object$Q(_2341);
*(&local76) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block276;
block278:;
_2345 = ((frost$core$Object*) _2316);
frost$core$Frost$unref$frost$core$Object$Q(_2345);
_2348 = _2295;
frost$core$Frost$unref$frost$core$Object$Q(_2348);
_2350 = *(&local75);
_2351 = ((frost$core$Object*) _2350);
frost$core$Frost$unref$frost$core$Object$Q(_2351);
*(&local75) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block272;
block274:;
_2355 = ((frost$core$Object*) _2284);
frost$core$Frost$unref$frost$core$Object$Q(_2355);
_2358 = _2262;
frost$core$Frost$unref$frost$core$Object$Q(_2358);
_2360 = *(&local74);
_2361 = ((frost$core$Object*) _2360);
frost$core$Frost$unref$frost$core$Object$Q(_2361);
*(&local74) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block268;
block270:;
_2365 = ((frost$core$Object*) _2251);
frost$core$Frost$unref$frost$core$Object$Q(_2365);
_2367 = ((frost$core$Object*) _2247);
frost$core$Frost$unref$frost$core$Object$Q(_2367);
_2369 = _2236;
frost$core$Frost$unref$frost$core$Object$Q(_2369);
_2371 = *(&local73);
_2372 = ((frost$core$Object*) _2371);
frost$core$Frost$unref$frost$core$Object$Q(_2372);
*(&local73) = ((frost$io$File*) NULL);
goto block265;
block267:;
_2376 = ((frost$core$Object*) _2225);
frost$core$Frost$unref$frost$core$Object$Q(_2376);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:361
_2379 = *(&local1);
_2380 = ((frost$collections$Iterable*) _2379);
_2381 = _2380;
ITable* $tmp363 = _2381->$class->itable;
while ($tmp363->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp363 = $tmp363->next;
}
_2382 = $tmp363->methods[0];
_2383 = _2382(_2381);
_2384 = _2383;
goto block279;
block279:;
_2386 = _2384;
ITable* $tmp364 = _2386->$class->itable;
while ($tmp364->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp364 = $tmp364->next;
}
_2387 = $tmp364->methods[0];
_2388 = _2387(_2386);
_2389 = _2388.value;
if (_2389) goto block281; else goto block280;
block280:;
*(&local77) = ((frost$io$File*) NULL);
_2392 = _2384;
ITable* $tmp365 = _2392->$class->itable;
while ($tmp365->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp365 = $tmp365->next;
}
_2393 = $tmp365->methods[1];
_2394 = _2393(_2392);
_2395 = ((frost$io$File*) _2394);
_2396 = ((frost$core$Object*) _2395);
frost$core$Frost$ref$frost$core$Object$Q(_2396);
_2398 = *(&local77);
_2399 = ((frost$core$Object*) _2398);
frost$core$Frost$unref$frost$core$Object$Q(_2399);
*(&local77) = _2395;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:362
_2403 = *(&local70);
_2404 = *(&local77);
org$frostlang$frostc$Compiler$compile$frost$io$File(_2403, _2404);
_2406 = _2394;
frost$core$Frost$unref$frost$core$Object$Q(_2406);
_2408 = *(&local77);
_2409 = ((frost$core$Object*) _2408);
frost$core$Frost$unref$frost$core$Object$Q(_2409);
*(&local77) = ((frost$io$File*) NULL);
goto block279;
block281:;
_2413 = ((frost$core$Object*) _2383);
frost$core$Frost$unref$frost$core$Object$Q(_2413);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:364
_2416 = *(&local8);
_2417 = _2416.nonnull;
_2418 = (frost$core$Bit) {_2417};
_2419 = _2418.value;
if (_2419) goto block284; else goto block285;
block285:;
_2421 = (frost$core$Int) {364u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s366, _2421, &$s367);
abort(); // unreachable
block284:;
frost$core$Equatable* $tmp368;
if (_2416.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp369;
    $tmp369 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp369->value = ((org$frostlang$frostc$Main$Format) _2416.value);
    $tmp368 = ((frost$core$Equatable*) $tmp369);
}
else {
    $tmp368 = NULL;
}
_2424 = $tmp368;
_2425 = _2424;
_2426 = (frost$core$Int) {7u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:364:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_2429 = &(&local79)->$rawValue;
*_2429 = _2426;
_2431 = *(&local79);
*(&local78) = _2431;
_2434 = *(&local78);
org$frostlang$frostc$Main$Format$wrapper* $tmp370;
$tmp370 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp370->value = _2434;
_2435 = ((frost$core$Equatable*) $tmp370);
ITable* $tmp371 = _2425->$class->itable;
while ($tmp371->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp371 = $tmp371->next;
}
_2436 = $tmp371->methods[0];
_2437 = _2436(_2425, _2435);
_2438 = _2437.value;
_2439 = ((frost$core$Object*) _2435);
frost$core$Frost$unref$frost$core$Object$Q(_2439);
_2441 = ((frost$core$Object*) _2424);
frost$core$Frost$unref$frost$core$Object$Q(_2441);
if (_2438) goto block282; else goto block283;
block282:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:365
_2445 = *(&local60);
_2446 = ((org$frostlang$frostc$Interpreter*) _2445);
_2447 = ($fn372) _2446->$class->vtable[18];
_2447(_2446);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:366
_2450 = *(&local70);
_2451 = ((frost$core$Object*) _2450);
frost$core$Frost$unref$frost$core$Object$Q(_2451);
*(&local70) = ((org$frostlang$frostc$Compiler*) NULL);
_2454 = *(&local69);
_2455 = ((frost$core$Object*) _2454);
frost$core$Frost$unref$frost$core$Object$Q(_2455);
*(&local69) = ((frost$threads$MessageQueue*) NULL);
_2458 = *(&local68);
_2459 = ((frost$core$Object*) _2458);
frost$core$Frost$unref$frost$core$Object$Q(_2459);
*(&local68) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_2462 = *(&local60);
_2463 = ((frost$core$Object*) _2462);
frost$core$Frost$unref$frost$core$Object$Q(_2463);
*(&local60) = ((org$frostlang$frostc$CodeGenerator*) NULL);
_2466 = *(&local45);
_2467 = ((frost$core$Object*) _2466);
frost$core$Frost$unref$frost$core$Object$Q(_2467);
*(&local45) = ((frost$io$File*) NULL);
_2470 = *(&local9);
_2471 = ((frost$core$Object*) _2470);
frost$core$Frost$unref$frost$core$Object$Q(_2471);
*(&local9) = ((frost$core$String*) NULL);
_2474 = *(&local5);
_2475 = ((frost$core$Object*) _2474);
frost$core$Frost$unref$frost$core$Object$Q(_2475);
*(&local5) = ((frost$io$File*) NULL);
_2478 = *(&local4);
_2479 = ((frost$core$Object*) _2478);
frost$core$Frost$unref$frost$core$Object$Q(_2479);
*(&local4) = ((frost$collections$Array*) NULL);
_2482 = *(&local3);
_2483 = ((frost$core$Object*) _2482);
frost$core$Frost$unref$frost$core$Object$Q(_2483);
*(&local3) = ((frost$collections$Array*) NULL);
_2486 = *(&local2);
_2487 = ((frost$core$Object*) _2486);
frost$core$Frost$unref$frost$core$Object$Q(_2487);
*(&local2) = ((frost$collections$Array*) NULL);
_2490 = *(&local1);
_2491 = ((frost$core$Object*) _2490);
frost$core$Frost$unref$frost$core$Object$Q(_2491);
*(&local1) = ((frost$collections$Array*) NULL);
_2494 = *(&local0);
_2495 = ((frost$core$Object*) _2494);
frost$core$Frost$unref$frost$core$Object$Q(_2495);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block283:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:368
_2500 = *(&local70);
// begin inline call to method org.frostlang.frostc.Compiler.finish() from Main.frost:368:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6049
goto block288;
block288:;
_2504 = &_2500->pendingClasses;
_2505 = *_2504;
_2506 = ((frost$collections$CollectionView*) _2505);
ITable* $tmp373 = _2506->$class->itable;
while ($tmp373->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp373 = $tmp373->next;
}
_2507 = $tmp373->methods[0];
_2508 = _2507(_2506);
_2509 = (frost$core$Int) {0u};
_2510 = _2508.value;
_2511 = _2509.value;
_2512 = _2510 > _2511;
_2513 = (frost$core$Bit) {_2512};
_2514 = _2513.value;
if (_2514) goto block289; else goto block290;
block289:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6050
_2517 = &_2500->pendingClasses;
_2518 = *_2517;
_2519 = _2518;
_2520 = &_2500->pendingClasses;
_2521 = *_2520;
_2522 = ((frost$collections$CollectionView*) _2521);
ITable* $tmp374 = _2522->$class->itable;
while ($tmp374->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp374 = $tmp374->next;
}
_2523 = $tmp374->methods[0];
_2524 = _2523(_2522);
_2525 = (frost$core$Int) {1u};
_2526 = _2524.value;
_2527 = _2525.value;
_2528 = _2526 - _2527;
_2529 = (frost$core$Int) {_2528};
_2530 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_2519, _2529);
_2531 = ((org$frostlang$frostc$ClassDecl*) _2530);
*(&local80) = ((org$frostlang$frostc$ClassDecl*) NULL);
_2533 = ((frost$core$Object*) _2531);
frost$core$Frost$ref$frost$core$Object$Q(_2533);
_2535 = *(&local80);
_2536 = ((frost$core$Object*) _2535);
frost$core$Frost$unref$frost$core$Object$Q(_2536);
*(&local80) = _2531;
_2539 = _2530;
frost$core$Frost$unref$frost$core$Object$Q(_2539);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6051
_2542 = *(&local80);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl(_2500, _2542);
_2544 = *(&local80);
_2545 = ((frost$core$Object*) _2544);
frost$core$Frost$unref$frost$core$Object$Q(_2545);
*(&local80) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block288;
block290:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6053
_2550 = &_2500->codeGenerator;
_2551 = *_2550;
_2552 = _2551 != NULL;
_2553 = (frost$core$Bit) {_2552};
_2554 = _2553.value;
if (_2554) goto block291; else goto block292;
block292:;
_2556 = (frost$core$Int) {6053u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s375, _2556, &$s376);
abort(); // unreachable
block291:;
_2559 = _2551;
ITable* $tmp377 = _2559->$class->itable;
while ($tmp377->$class != (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class) {
    $tmp377 = $tmp377->next;
}
_2560 = $tmp377->methods[5];
_2560(_2559);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:369
goto block293;
block293:;
_2565 = *(&local69);
_2566 = _2565;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Main.frost:369:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
_2571 = (frost$threads$ScopedLock*) frostObjectAlloc(sizeof(frost$threads$ScopedLock), (frost$core$Class*) &frost$threads$ScopedLock$class);
_2572 = &_2566->lock;
_2573 = *_2572;
frost$threads$ScopedLock$init$frost$threads$Lock(_2571, _2573);
*(&local81) = ((frost$threads$ScopedLock*) NULL);
_2576 = ((frost$core$Object*) _2571);
frost$core$Frost$ref$frost$core$Object$Q(_2576);
_2578 = *(&local81);
_2579 = ((frost$core$Object*) _2578);
frost$core$Frost$unref$frost$core$Object$Q(_2579);
*(&local81) = _2571;
_2582 = ((frost$core$Object*) _2571);
frost$core$Frost$unref$frost$core$Object$Q(_2582);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
_2585 = &_2566->count;
_2586 = *_2585;
_2587 = *(&local81);
_2588 = ((frost$core$Object*) _2587);
frost$core$Frost$unref$frost$core$Object$Q(_2588);
*(&local81) = ((frost$threads$ScopedLock*) NULL);
_2592 = (frost$core$Int) {0u};
_2593 = _2586.value;
_2594 = _2592.value;
_2595 = _2593 > _2594;
_2596 = (frost$core$Bit) {_2595};
_2598 = _2596.value;
if (_2598) goto block294; else goto block295;
block294:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:370
_2601 = *(&local69);
_2602 = _2601;
_2603 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(_2602);
_2604 = ((org$frostlang$frostc$Compiler$Message*) _2603);
*(&local82) = ((org$frostlang$frostc$Compiler$Message*) NULL);
_2606 = ((frost$core$Object*) _2604);
frost$core$Frost$ref$frost$core$Object$Q(_2606);
_2608 = *(&local82);
_2609 = ((frost$core$Object*) _2608);
frost$core$Frost$unref$frost$core$Object$Q(_2609);
*(&local82) = _2604;
_2612 = ((frost$core$Object*) _2603);
frost$core$Frost$unref$frost$core$Object$Q(_2612);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:372
_2615 = *(&local82);
_2616 = &_2615->$rawValue;
_2617 = *_2616;
_2618 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:373:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2621 = _2617.value;
_2622 = _2618.value;
_2623 = _2621 == _2622;
_2624 = (frost$core$Bit) {_2623};
_2626 = _2624.value;
if (_2626) goto block299; else goto block300;
block299:;
_2628 = &_2615->$data.$ERROR.field0;
_2629 = *_2628;
*(&local83) = ((frost$core$String*) NULL);
_2631 = ((frost$core$Object*) _2629);
frost$core$Frost$ref$frost$core$Object$Q(_2631);
_2633 = *(&local83);
_2634 = ((frost$core$Object*) _2633);
frost$core$Frost$unref$frost$core$Object$Q(_2634);
*(&local83) = _2629;
_2637 = &_2615->$data.$ERROR.field1;
_2638 = *_2637;
*(&local84) = _2638;
_2640 = &_2615->$data.$ERROR.field2;
_2641 = *_2640;
*(&local85) = _2641;
_2643 = &_2615->$data.$ERROR.field3;
_2644 = *_2643;
*(&local86) = ((frost$core$String*) NULL);
_2646 = ((frost$core$Object*) _2644);
frost$core$Frost$ref$frost$core$Object$Q(_2646);
_2648 = *(&local86);
_2649 = ((frost$core$Object*) _2648);
frost$core$Frost$unref$frost$core$Object$Q(_2649);
*(&local86) = _2644;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:374
_2653 = *(&local58);
_2654 = (frost$core$Int) {1u};
_2655 = _2653.value;
_2656 = _2654.value;
_2657 = _2655 + _2656;
_2658 = (frost$core$Int) {_2657};
*(&local58) = _2658;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:375
_2661 = *(&local83);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:375:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_2664 = ((frost$core$Object*) _2661);
frost$core$Frost$ref$frost$core$Object$Q(_2664);
_2667 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2661, &$s378);
_2668 = *(&local84);
frost$core$Int$wrapper* $tmp379;
$tmp379 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp379->value = _2668;
_2669 = ((frost$core$Object*) $tmp379);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:375:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2672 = ($fn380) _2669->$class->vtable[0];
_2673 = _2672(_2669);
_2674 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2667, _2673);
_2675 = ((frost$core$Object*) _2674);
frost$core$Frost$ref$frost$core$Object$Q(_2675);
_2677 = ((frost$core$Object*) _2674);
frost$core$Frost$unref$frost$core$Object$Q(_2677);
_2679 = ((frost$core$Object*) _2673);
frost$core$Frost$unref$frost$core$Object$Q(_2679);
_2682 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2674, &$s381);
_2683 = *(&local85);
frost$core$Int$wrapper* $tmp382;
$tmp382 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp382->value = _2683;
_2684 = ((frost$core$Object*) $tmp382);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:375:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2687 = ($fn383) _2684->$class->vtable[0];
_2688 = _2687(_2684);
_2689 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2682, _2688);
_2690 = ((frost$core$Object*) _2689);
frost$core$Frost$ref$frost$core$Object$Q(_2690);
_2692 = ((frost$core$Object*) _2689);
frost$core$Frost$unref$frost$core$Object$Q(_2692);
_2694 = ((frost$core$Object*) _2688);
frost$core$Frost$unref$frost$core$Object$Q(_2694);
_2697 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2689, &$s384);
_2698 = *(&local86);
_2699 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2697, _2698);
_2700 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2699, &$s385);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:375:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_2700);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s386);
_2710 = ((frost$core$Object*) _2700);
frost$core$Frost$unref$frost$core$Object$Q(_2710);
_2712 = ((frost$core$Object*) _2699);
frost$core$Frost$unref$frost$core$Object$Q(_2712);
_2714 = ((frost$core$Object*) _2697);
frost$core$Frost$unref$frost$core$Object$Q(_2714);
_2716 = ((frost$core$Object*) _2689);
frost$core$Frost$unref$frost$core$Object$Q(_2716);
_2718 = _2684;
frost$core$Frost$unref$frost$core$Object$Q(_2718);
_2720 = ((frost$core$Object*) _2682);
frost$core$Frost$unref$frost$core$Object$Q(_2720);
_2722 = ((frost$core$Object*) _2674);
frost$core$Frost$unref$frost$core$Object$Q(_2722);
_2724 = _2669;
frost$core$Frost$unref$frost$core$Object$Q(_2724);
_2726 = ((frost$core$Object*) _2667);
frost$core$Frost$unref$frost$core$Object$Q(_2726);
_2728 = ((frost$core$Object*) _2661);
frost$core$Frost$unref$frost$core$Object$Q(_2728);
_2730 = *(&local86);
_2731 = ((frost$core$Object*) _2730);
frost$core$Frost$unref$frost$core$Object$Q(_2731);
*(&local86) = ((frost$core$String*) NULL);
_2734 = *(&local83);
_2735 = ((frost$core$Object*) _2734);
frost$core$Frost$unref$frost$core$Object$Q(_2735);
*(&local83) = ((frost$core$String*) NULL);
goto block298;
block300:;
_2739 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:377:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2742 = _2617.value;
_2743 = _2739.value;
_2744 = _2742 == _2743;
_2745 = (frost$core$Bit) {_2744};
_2747 = _2745.value;
if (_2747) goto block307; else goto block298;
block307:;
_2749 = &_2615->$data.$WARNING.field0;
_2750 = *_2749;
*(&local87) = ((frost$core$String*) NULL);
_2752 = ((frost$core$Object*) _2750);
frost$core$Frost$ref$frost$core$Object$Q(_2752);
_2754 = *(&local87);
_2755 = ((frost$core$Object*) _2754);
frost$core$Frost$unref$frost$core$Object$Q(_2755);
*(&local87) = _2750;
_2758 = &_2615->$data.$WARNING.field1;
_2759 = *_2758;
*(&local88) = _2759;
_2761 = &_2615->$data.$WARNING.field2;
_2762 = *_2761;
*(&local89) = _2762;
_2764 = &_2615->$data.$WARNING.field3;
_2765 = *_2764;
*(&local90) = ((frost$core$String*) NULL);
_2767 = ((frost$core$Object*) _2765);
frost$core$Frost$ref$frost$core$Object$Q(_2767);
_2769 = *(&local90);
_2770 = ((frost$core$Object*) _2769);
frost$core$Frost$unref$frost$core$Object$Q(_2770);
*(&local90) = _2765;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:378
_2774 = *(&local59);
_2775 = (frost$core$Int) {1u};
_2776 = _2774.value;
_2777 = _2775.value;
_2778 = _2776 + _2777;
_2779 = (frost$core$Int) {_2778};
*(&local59) = _2779;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:379
_2782 = *(&local87);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:379:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_2785 = ((frost$core$Object*) _2782);
frost$core$Frost$ref$frost$core$Object$Q(_2785);
_2788 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2782, &$s387);
_2789 = *(&local88);
frost$core$Int$wrapper* $tmp388;
$tmp388 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp388->value = _2789;
_2790 = ((frost$core$Object*) $tmp388);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:379:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2793 = ($fn389) _2790->$class->vtable[0];
_2794 = _2793(_2790);
_2795 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2788, _2794);
_2796 = ((frost$core$Object*) _2795);
frost$core$Frost$ref$frost$core$Object$Q(_2796);
_2798 = ((frost$core$Object*) _2795);
frost$core$Frost$unref$frost$core$Object$Q(_2798);
_2800 = ((frost$core$Object*) _2794);
frost$core$Frost$unref$frost$core$Object$Q(_2800);
_2803 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2795, &$s390);
_2804 = *(&local89);
frost$core$Int$wrapper* $tmp391;
$tmp391 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp391->value = _2804;
_2805 = ((frost$core$Object*) $tmp391);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:379:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2808 = ($fn392) _2805->$class->vtable[0];
_2809 = _2808(_2805);
_2810 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2803, _2809);
_2811 = ((frost$core$Object*) _2810);
frost$core$Frost$ref$frost$core$Object$Q(_2811);
_2813 = ((frost$core$Object*) _2810);
frost$core$Frost$unref$frost$core$Object$Q(_2813);
_2815 = ((frost$core$Object*) _2809);
frost$core$Frost$unref$frost$core$Object$Q(_2815);
_2818 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2810, &$s393);
_2819 = *(&local90);
_2820 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2818, _2819);
_2821 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2820, &$s394);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:379:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_2821);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s395);
_2831 = ((frost$core$Object*) _2821);
frost$core$Frost$unref$frost$core$Object$Q(_2831);
_2833 = ((frost$core$Object*) _2820);
frost$core$Frost$unref$frost$core$Object$Q(_2833);
_2835 = ((frost$core$Object*) _2818);
frost$core$Frost$unref$frost$core$Object$Q(_2835);
_2837 = ((frost$core$Object*) _2810);
frost$core$Frost$unref$frost$core$Object$Q(_2837);
_2839 = _2805;
frost$core$Frost$unref$frost$core$Object$Q(_2839);
_2841 = ((frost$core$Object*) _2803);
frost$core$Frost$unref$frost$core$Object$Q(_2841);
_2843 = ((frost$core$Object*) _2795);
frost$core$Frost$unref$frost$core$Object$Q(_2843);
_2845 = _2790;
frost$core$Frost$unref$frost$core$Object$Q(_2845);
_2847 = ((frost$core$Object*) _2788);
frost$core$Frost$unref$frost$core$Object$Q(_2847);
_2849 = ((frost$core$Object*) _2782);
frost$core$Frost$unref$frost$core$Object$Q(_2849);
_2851 = *(&local90);
_2852 = ((frost$core$Object*) _2851);
frost$core$Frost$unref$frost$core$Object$Q(_2852);
*(&local90) = ((frost$core$String*) NULL);
_2855 = *(&local87);
_2856 = ((frost$core$Object*) _2855);
frost$core$Frost$unref$frost$core$Object$Q(_2856);
*(&local87) = ((frost$core$String*) NULL);
goto block298;
block298:;
_2860 = *(&local82);
_2861 = ((frost$core$Object*) _2860);
frost$core$Frost$unref$frost$core$Object$Q(_2861);
*(&local82) = ((org$frostlang$frostc$Compiler$Message*) NULL);
goto block293;
block295:;
_2865 = *(&local70);
_2866 = ((frost$core$Object*) _2865);
frost$core$Frost$unref$frost$core$Object$Q(_2866);
*(&local70) = ((org$frostlang$frostc$Compiler*) NULL);
_2869 = *(&local69);
_2870 = ((frost$core$Object*) _2869);
frost$core$Frost$unref$frost$core$Object$Q(_2870);
*(&local69) = ((frost$threads$MessageQueue*) NULL);
_2873 = *(&local68);
_2874 = ((frost$core$Object*) _2873);
frost$core$Frost$unref$frost$core$Object$Q(_2874);
*(&local68) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_2877 = *(&local60);
_2878 = ((frost$core$Object*) _2877);
frost$core$Frost$unref$frost$core$Object$Q(_2878);
*(&local60) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:384
_2882 = *(&local59);
_2883 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:384:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2886 = _2882.value;
_2887 = _2883.value;
_2888 = _2886 == _2887;
_2889 = (frost$core$Bit) {_2888};
_2891 = _2889.value;
if (_2891) goto block314; else goto block316;
block314:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:386
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:386:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s396);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s397);
goto block315;
block316:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:388
_2905 = *(&local59);
_2906 = (frost$core$Int) {0u};
_2907 = _2905.value;
_2908 = _2906.value;
_2909 = _2907 > _2908;
_2910 = (frost$core$Bit) {_2909};
_2911 = _2910.value;
if (_2911) goto block320; else goto block321;
block320:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:390
_2914 = *(&local59);
_2915 = frost$core$Int$get_asString$R$frost$core$String(_2914);
_2916 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2915, &$s398);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:390:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_2916);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s399);
_2926 = ((frost$core$Object*) _2916);
frost$core$Frost$unref$frost$core$Object$Q(_2926);
_2928 = ((frost$core$Object*) _2915);
frost$core$Frost$unref$frost$core$Object$Q(_2928);
goto block321;
block321:;
goto block315;
block315:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:392
_2933 = *(&local58);
_2934 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:392:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2937 = _2933.value;
_2938 = _2934.value;
_2939 = _2937 == _2938;
_2940 = (frost$core$Bit) {_2939};
_2942 = _2940.value;
if (_2942) goto block324; else goto block326;
block324:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:393
_2945 = *(&local8);
_2946 = _2945.nonnull;
_2947 = (frost$core$Bit) {_2946};
_2948 = _2947.value;
if (_2948) goto block328; else goto block329;
block329:;
_2950 = (frost$core$Int) {393u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s400, _2950, &$s401);
abort(); // unreachable
block328:;
_2953 = ((org$frostlang$frostc$Main$Format) _2945.value);
_2954 = _2953.$rawValue;
_2955 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:394:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2958 = _2954.value;
_2959 = _2955.value;
_2960 = _2958 == _2959;
_2961 = (frost$core$Bit) {_2960};
_2963 = _2961.value;
if (_2963) goto block331; else goto block332;
block331:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:395
_2966 = *(&local3);
_2967 = *(&local4);
_2968 = *(&local5);
_2969 = _2968 != NULL;
_2970 = (frost$core$Bit) {_2969};
_2971 = _2970.value;
if (_2971) goto block334; else goto block335;
block335:;
_2973 = (frost$core$Int) {395u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s402, _2973, &$s403);
abort(); // unreachable
block334:;
_2976 = _2968;
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:395:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:184
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:184:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_2981 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_2976, &$s404);
_2982 = &_2981->path;
_2983 = *_2982;
_2984 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_2983);
*(&local92) = ((frost$core$String*) NULL);
_2986 = ((frost$core$Object*) _2984);
frost$core$Frost$ref$frost$core$Object$Q(_2986);
_2988 = *(&local92);
_2989 = ((frost$core$Object*) _2988);
frost$core$Frost$unref$frost$core$Object$Q(_2989);
*(&local92) = _2984;
_2992 = ((frost$core$Object*) _2984);
frost$core$Frost$unref$frost$core$Object$Q(_2992);
_2994 = ((frost$core$Object*) _2981);
frost$core$Frost$unref$frost$core$Object$Q(_2994);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_2997 = *(&local92);
_2998 = _2997 == NULL;
_2999 = (frost$core$Bit) {_2998};
_3000 = _2999.value;
if (_3000) goto block338; else goto block339;
block338:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_3003 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_3003);
_3005 = *(&local92);
_3006 = ((frost$core$Object*) _3005);
frost$core$Frost$unref$frost$core$Object$Q(_3006);
*(&local92) = ((frost$core$String*) NULL);
*(&local91) = ((frost$io$File*) NULL);
_3010 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_3010);
goto block337;
block339:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_3014 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_3015 = *(&local92);
_3016 = _3015 != NULL;
_3017 = (frost$core$Bit) {_3016};
_3018 = _3017.value;
if (_3018) goto block340; else goto block341;
block341:;
_3020 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s405, _3020, &$s406);
abort(); // unreachable
block340:;
_3023 = _3015;
frost$io$File$init$frost$core$String(_3014, _3023);
_3025 = _3014;
_3026 = ((frost$core$Object*) _3025);
frost$core$Frost$ref$frost$core$Object$Q(_3026);
_3028 = ((frost$core$Object*) _3014);
frost$core$Frost$unref$frost$core$Object$Q(_3028);
_3030 = *(&local92);
_3031 = ((frost$core$Object*) _3030);
frost$core$Frost$unref$frost$core$Object$Q(_3031);
*(&local92) = ((frost$core$String*) NULL);
*(&local91) = _3025;
_3035 = ((frost$core$Object*) _3025);
frost$core$Frost$ref$frost$core$Object$Q(_3035);
goto block337;
block337:;
_3038 = *(&local91);
_3039 = _3038 != NULL;
_3040 = (frost$core$Bit) {_3039};
_3041 = _3040.value;
if (_3041) goto block342; else goto block343;
block343:;
_3043 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s407, _3043, &$s408);
abort(); // unreachable
block342:;
_3046 = _3038;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:184:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
_3049 = frost$io$File$get_name$R$frost$core$String(_2976);
*(&local94) = ((frost$core$String*) NULL);
_3051 = ((frost$core$Object*) _3049);
frost$core$Frost$ref$frost$core$Object$Q(_3051);
_3053 = *(&local94);
_3054 = ((frost$core$Object*) _3053);
frost$core$Frost$unref$frost$core$Object$Q(_3054);
*(&local94) = _3049;
_3057 = ((frost$core$Object*) _3049);
frost$core$Frost$unref$frost$core$Object$Q(_3057);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_3060 = *(&local94);
_3061 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_3060, &$s409);
*(&local95) = _3061;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_3064 = *(&local95);
_3065 = !_3064.nonnull;
_3066 = (frost$core$Bit) {_3065};
_3067 = _3066.value;
if (_3067) goto block345; else goto block346;
block345:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_3070 = *(&local94);
_3071 = ((frost$core$Object*) _3070);
frost$core$Frost$ref$frost$core$Object$Q(_3071);
_3073 = *(&local94);
_3074 = ((frost$core$Object*) _3073);
frost$core$Frost$unref$frost$core$Object$Q(_3074);
*(&local94) = ((frost$core$String*) NULL);
*(&local93) = _3070;
_3078 = ((frost$core$Object*) _3070);
frost$core$Frost$ref$frost$core$Object$Q(_3078);
goto block344;
block346:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_3082 = *(&local94);
_3083 = *(&local95);
_3084 = (frost$core$Bit) {false};
_3085 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _3083, _3084);
_3086 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_3082, _3085);
_3087 = ((frost$core$Object*) _3086);
frost$core$Frost$ref$frost$core$Object$Q(_3087);
_3089 = ((frost$core$Object*) _3086);
frost$core$Frost$unref$frost$core$Object$Q(_3089);
_3091 = *(&local94);
_3092 = ((frost$core$Object*) _3091);
frost$core$Frost$unref$frost$core$Object$Q(_3092);
*(&local94) = ((frost$core$String*) NULL);
*(&local93) = _3086;
_3096 = ((frost$core$Object*) _3086);
frost$core$Frost$ref$frost$core$Object$Q(_3096);
goto block344;
block344:;
_3099 = *(&local93);
_3100 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3099, &$s410);
_3101 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_3046, _3100);
_3102 = ((frost$core$Object*) _3101);
frost$core$Frost$ref$frost$core$Object$Q(_3102);
_3104 = ((frost$core$Object*) _3101);
frost$core$Frost$unref$frost$core$Object$Q(_3104);
_3106 = ((frost$core$Object*) _3100);
frost$core$Frost$unref$frost$core$Object$Q(_3106);
_3108 = ((frost$core$Object*) _3099);
frost$core$Frost$unref$frost$core$Object$Q(_3108);
_3110 = *(&local93);
_3111 = ((frost$core$Object*) _3110);
frost$core$Frost$unref$frost$core$Object$Q(_3111);
*(&local93) = ((frost$core$String*) NULL);
_3114 = ((frost$core$Object*) _3038);
frost$core$Frost$unref$frost$core$Object$Q(_3114);
_3116 = *(&local91);
_3117 = ((frost$core$Object*) _3116);
frost$core$Frost$unref$frost$core$Object$Q(_3117);
*(&local91) = ((frost$io$File*) NULL);
_3121 = *(&local5);
_3122 = _3121 != NULL;
_3123 = (frost$core$Bit) {_3122};
_3124 = _3123.value;
if (_3124) goto block347; else goto block348;
block348:;
_3126 = (frost$core$Int) {395u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s411, _3126, &$s412);
abort(); // unreachable
block347:;
_3129 = _3121;
_3130 = *(&local10);
_3131 = org$frostlang$frostc$Main$toExecutable$frost$collections$Array$LTfrost$io$File$GT$frost$collections$Array$LTfrost$core$String$GT$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, _2966, _2967, _3101, _3129, _3130);
_3132 = ((frost$core$Object*) _3131);
frost$core$Frost$unref$frost$core$Object$Q(_3132);
_3134 = ((frost$core$Object*) _3101);
frost$core$Frost$unref$frost$core$Object$Q(_3134);
goto block330;
block332:;
_3137 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:398:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3140 = _2954.value;
_3141 = _3137.value;
_3142 = _3140 == _3141;
_3143 = (frost$core$Bit) {_3142};
_3145 = _3143.value;
if (_3145) goto block349; else goto block330;
block349:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:399
_3148 = *(&local5);
_3149 = _3148 != NULL;
_3150 = (frost$core$Bit) {_3149};
_3151 = _3150.value;
if (_3151) goto block351; else goto block352;
block352:;
_3153 = (frost$core$Int) {399u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s413, _3153, &$s414);
abort(); // unreachable
block351:;
_3156 = _3148;
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:399:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:184
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:184:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_3161 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_3156, &$s415);
_3162 = &_3161->path;
_3163 = *_3162;
_3164 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_3163);
*(&local97) = ((frost$core$String*) NULL);
_3166 = ((frost$core$Object*) _3164);
frost$core$Frost$ref$frost$core$Object$Q(_3166);
_3168 = *(&local97);
_3169 = ((frost$core$Object*) _3168);
frost$core$Frost$unref$frost$core$Object$Q(_3169);
*(&local97) = _3164;
_3172 = ((frost$core$Object*) _3164);
frost$core$Frost$unref$frost$core$Object$Q(_3172);
_3174 = ((frost$core$Object*) _3161);
frost$core$Frost$unref$frost$core$Object$Q(_3174);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_3177 = *(&local97);
_3178 = _3177 == NULL;
_3179 = (frost$core$Bit) {_3178};
_3180 = _3179.value;
if (_3180) goto block355; else goto block356;
block355:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_3183 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_3183);
_3185 = *(&local97);
_3186 = ((frost$core$Object*) _3185);
frost$core$Frost$unref$frost$core$Object$Q(_3186);
*(&local97) = ((frost$core$String*) NULL);
*(&local96) = ((frost$io$File*) NULL);
_3190 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_3190);
goto block354;
block356:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_3194 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_3195 = *(&local97);
_3196 = _3195 != NULL;
_3197 = (frost$core$Bit) {_3196};
_3198 = _3197.value;
if (_3198) goto block357; else goto block358;
block358:;
_3200 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s416, _3200, &$s417);
abort(); // unreachable
block357:;
_3203 = _3195;
frost$io$File$init$frost$core$String(_3194, _3203);
_3205 = _3194;
_3206 = ((frost$core$Object*) _3205);
frost$core$Frost$ref$frost$core$Object$Q(_3206);
_3208 = ((frost$core$Object*) _3194);
frost$core$Frost$unref$frost$core$Object$Q(_3208);
_3210 = *(&local97);
_3211 = ((frost$core$Object*) _3210);
frost$core$Frost$unref$frost$core$Object$Q(_3211);
*(&local97) = ((frost$core$String*) NULL);
*(&local96) = _3205;
_3215 = ((frost$core$Object*) _3205);
frost$core$Frost$ref$frost$core$Object$Q(_3215);
goto block354;
block354:;
_3218 = *(&local96);
_3219 = _3218 != NULL;
_3220 = (frost$core$Bit) {_3219};
_3221 = _3220.value;
if (_3221) goto block359; else goto block360;
block360:;
_3223 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s418, _3223, &$s419);
abort(); // unreachable
block359:;
_3226 = _3218;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:184:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
_3229 = frost$io$File$get_name$R$frost$core$String(_3156);
*(&local99) = ((frost$core$String*) NULL);
_3231 = ((frost$core$Object*) _3229);
frost$core$Frost$ref$frost$core$Object$Q(_3231);
_3233 = *(&local99);
_3234 = ((frost$core$Object*) _3233);
frost$core$Frost$unref$frost$core$Object$Q(_3234);
*(&local99) = _3229;
_3237 = ((frost$core$Object*) _3229);
frost$core$Frost$unref$frost$core$Object$Q(_3237);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_3240 = *(&local99);
_3241 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_3240, &$s420);
*(&local100) = _3241;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_3244 = *(&local100);
_3245 = !_3244.nonnull;
_3246 = (frost$core$Bit) {_3245};
_3247 = _3246.value;
if (_3247) goto block362; else goto block363;
block362:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_3250 = *(&local99);
_3251 = ((frost$core$Object*) _3250);
frost$core$Frost$ref$frost$core$Object$Q(_3251);
_3253 = *(&local99);
_3254 = ((frost$core$Object*) _3253);
frost$core$Frost$unref$frost$core$Object$Q(_3254);
*(&local99) = ((frost$core$String*) NULL);
*(&local98) = _3250;
_3258 = ((frost$core$Object*) _3250);
frost$core$Frost$ref$frost$core$Object$Q(_3258);
goto block361;
block363:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_3262 = *(&local99);
_3263 = *(&local100);
_3264 = (frost$core$Bit) {false};
_3265 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _3263, _3264);
_3266 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_3262, _3265);
_3267 = ((frost$core$Object*) _3266);
frost$core$Frost$ref$frost$core$Object$Q(_3267);
_3269 = ((frost$core$Object*) _3266);
frost$core$Frost$unref$frost$core$Object$Q(_3269);
_3271 = *(&local99);
_3272 = ((frost$core$Object*) _3271);
frost$core$Frost$unref$frost$core$Object$Q(_3272);
*(&local99) = ((frost$core$String*) NULL);
*(&local98) = _3266;
_3276 = ((frost$core$Object*) _3266);
frost$core$Frost$ref$frost$core$Object$Q(_3276);
goto block361;
block361:;
_3279 = *(&local98);
_3280 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3279, &$s421);
_3281 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_3226, _3280);
_3282 = ((frost$core$Object*) _3281);
frost$core$Frost$ref$frost$core$Object$Q(_3282);
_3284 = ((frost$core$Object*) _3281);
frost$core$Frost$unref$frost$core$Object$Q(_3284);
_3286 = ((frost$core$Object*) _3280);
frost$core$Frost$unref$frost$core$Object$Q(_3286);
_3288 = ((frost$core$Object*) _3279);
frost$core$Frost$unref$frost$core$Object$Q(_3288);
_3290 = *(&local98);
_3291 = ((frost$core$Object*) _3290);
frost$core$Frost$unref$frost$core$Object$Q(_3291);
*(&local98) = ((frost$core$String*) NULL);
_3294 = ((frost$core$Object*) _3218);
frost$core$Frost$unref$frost$core$Object$Q(_3294);
_3296 = *(&local96);
_3297 = ((frost$core$Object*) _3296);
frost$core$Frost$unref$frost$core$Object$Q(_3297);
*(&local96) = ((frost$io$File*) NULL);
_3301 = *(&local5);
_3302 = _3301 != NULL;
_3303 = (frost$core$Bit) {_3302};
_3304 = _3303.value;
if (_3304) goto block364; else goto block365;
block365:;
_3306 = (frost$core$Int) {399u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s422, _3306, &$s423);
abort(); // unreachable
block364:;
_3309 = _3301;
_3310 = *(&local10);
_3311 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, _3281, _3309, _3310);
_3312 = ((frost$core$Object*) _3311);
frost$core$Frost$unref$frost$core$Object$Q(_3312);
_3314 = ((frost$core$Object*) _3281);
frost$core$Frost$unref$frost$core$Object$Q(_3314);
goto block330;
block330:;
_3367 = *(&local45);
_3368 = ((frost$core$Object*) _3367);
frost$core$Frost$unref$frost$core$Object$Q(_3368);
*(&local45) = ((frost$io$File*) NULL);
_3371 = *(&local9);
_3372 = ((frost$core$Object*) _3371);
frost$core$Frost$unref$frost$core$Object$Q(_3372);
*(&local9) = ((frost$core$String*) NULL);
_3375 = *(&local5);
_3376 = ((frost$core$Object*) _3375);
frost$core$Frost$unref$frost$core$Object$Q(_3376);
*(&local5) = ((frost$io$File*) NULL);
_3379 = *(&local4);
_3380 = ((frost$core$Object*) _3379);
frost$core$Frost$unref$frost$core$Object$Q(_3380);
*(&local4) = ((frost$collections$Array*) NULL);
_3383 = *(&local3);
_3384 = ((frost$core$Object*) _3383);
frost$core$Frost$unref$frost$core$Object$Q(_3384);
*(&local3) = ((frost$collections$Array*) NULL);
_3387 = *(&local2);
_3388 = ((frost$core$Object*) _3387);
frost$core$Frost$unref$frost$core$Object$Q(_3388);
*(&local2) = ((frost$collections$Array*) NULL);
_3391 = *(&local1);
_3392 = ((frost$core$Object*) _3391);
frost$core$Frost$unref$frost$core$Object$Q(_3392);
*(&local1) = ((frost$collections$Array*) NULL);
_3395 = *(&local0);
_3396 = ((frost$core$Object*) _3395);
frost$core$Frost$unref$frost$core$Object$Q(_3396);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block326:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:404
_3320 = *(&local58);
_3321 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:404:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3324 = _3320.value;
_3325 = _3321.value;
_3326 = _3324 == _3325;
_3327 = (frost$core$Bit) {_3326};
_3329 = _3327.value;
if (_3329) goto block366; else goto block368;
block366:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:406
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:406:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s424);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s425);
goto block367;
block368:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:410
_3344 = *(&local58);
_3345 = frost$core$Int$get_asString$R$frost$core$String(_3344);
_3346 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3345, &$s426);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:410:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_3346);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s427);
_3356 = ((frost$core$Object*) _3346);
frost$core$Frost$unref$frost$core$Object$Q(_3356);
_3358 = ((frost$core$Object*) _3345);
frost$core$Frost$unref$frost$core$Object$Q(_3358);
goto block367;
block367:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:412
_3362 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_3362);
_3364 = (frost$core$Int) {412u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s428, _3364, &$s429);
abort(); // unreachable

}
void frostMain(frost$collections$ListView* param0) {

frost$collections$CollectionView* _1;
$fn430 _2;
frost$core$Int _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _9;
frost$collections$ListView* _11;
frost$core$Int _12;
$fn431 _13;
frost$core$Object* _14;
frost$core$String* _15;
frost$core$Bit _16;
bool _17;
frost$core$Object* _18;
org$frostlang$frostc$Main* _24;
frost$collections$ListView* _26;
frost$core$Int _27;
frost$core$Int$nullable _28;
frost$core$Bit _29;
frost$core$Range$LTfrost$core$Int$Q$GT _30;
$fn432 _31;
frost$collections$ListView* _32;
frost$collections$ListView* _33;
frost$core$Object* _35;
frost$core$Object* _37;
frost$collections$CollectionView* _42;
$fn433 _43;
frost$core$Int _44;
frost$core$Int _45;
int64_t _48;
int64_t _49;
bool _50;
frost$core$Bit _51;
bool _53;
frost$collections$ListView* _55;
frost$core$Int _56;
$fn434 _57;
frost$core$Object* _58;
frost$core$String* _59;
frost$core$Bit _60;
bool _61;
frost$core$Object* _62;
org$frostlang$frostc$Bench* _66;
$fn435 _68;
frost$core$Object* _70;
org$frostlang$frostc$Main* _75;
frost$core$Object* _78;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:418
_1 = ((frost$collections$CollectionView*) param0);
ITable* $tmp436 = _1->$class->itable;
while ($tmp436->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp436 = $tmp436->next;
}
_2 = $tmp436->methods[0];
_3 = _2(_1);
_4 = (frost$core$Int) {1u};
_5 = _3.value;
_6 = _4.value;
_7 = _5 > _6;
_8 = (frost$core$Bit) {_7};
_9 = _8.value;
if (_9) goto block3; else goto block2;
block3:;
_11 = param0;
_12 = (frost$core$Int) {1u};
ITable* $tmp437 = _11->$class->itable;
while ($tmp437->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp437 = $tmp437->next;
}
_13 = $tmp437->methods[0];
_14 = _13(_11, _12);
_15 = ((frost$core$String*) _14);
_16 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_15, &$s438);
_17 = _16.value;
_18 = _14;
frost$core$Frost$unref$frost$core$Object$Q(_18);
if (_17) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:419
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:420
_24 = (org$frostlang$frostc$Main*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main), (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init(_24);
_26 = param0;
_27 = (frost$core$Int) {1u};
_28 = ((frost$core$Int$nullable) { _27, true });
_29 = (frost$core$Bit) {false};
_30 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(_28, ((frost$core$Int$nullable) { .nonnull = false }), _29);
ITable* $tmp439 = _26->$class->itable;
while ($tmp439->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp439 = $tmp439->next;
}
_31 = $tmp439->methods[2];
_32 = _31(_26, _30);
_33 = _32;
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT(_24, _33);
_35 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_35);
_37 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_37);
goto block4;
block5:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:423
_42 = ((frost$collections$CollectionView*) param0);
ITable* $tmp440 = _42->$class->itable;
while ($tmp440->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp440 = $tmp440->next;
}
_43 = $tmp440->methods[0];
_44 = _43(_42);
_45 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:423:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_48 = _44.value;
_49 = _45.value;
_50 = _48 == _49;
_51 = (frost$core$Bit) {_50};
_53 = _51.value;
if (_53) goto block8; else goto block7;
block8:;
_55 = param0;
_56 = (frost$core$Int) {1u};
ITable* $tmp441 = _55->$class->itable;
while ($tmp441->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp441 = $tmp441->next;
}
_57 = $tmp441->methods[0];
_58 = _57(_55, _56);
_59 = ((frost$core$String*) _58);
_60 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_59, &$s442);
_61 = _60.value;
_62 = _58;
frost$core$Frost$unref$frost$core$Object$Q(_62);
if (_61) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:424
_66 = (org$frostlang$frostc$Bench*) frostObjectAlloc(sizeof(org$frostlang$frostc$Bench), (frost$core$Class*) &org$frostlang$frostc$Bench$class);
org$frostlang$frostc$Bench$init(_66);
_68 = ($fn443) _66->$class->vtable[4];
_68(_66);
_70 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_70);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:425
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:427
_75 = (org$frostlang$frostc$Main*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main), (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init(_75);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT(_75, param0);
_78 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_78);
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

