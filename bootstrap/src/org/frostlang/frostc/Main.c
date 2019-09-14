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
typedef frost$core$String* (*$fn42)(frost$io$File*);
typedef frost$core$String* (*$fn44)(frost$core$String*);
typedef frost$core$String* (*$fn55)(frost$core$Object*);
typedef frost$core$String* (*$fn68)(frost$core$Object*);
typedef frost$core$String* (*$fn71)(frost$io$InputStream*);
typedef frost$core$String* (*$fn72)(frost$io$InputStream*);
typedef frost$core$String* (*$fn75)(frost$core$Object*);
typedef frost$core$Error* (*$fn80)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn81)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn82)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn83)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn84)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn85)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn86)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn90)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn93)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn97)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn100)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn104)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn109)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn110)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Maybe* (*$fn111)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$String* (*$fn112)(frost$core$Object*);
typedef frost$core$String* (*$fn113)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn114)(frost$core$Object*);
typedef frost$core$String* (*$fn115)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn116)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn117)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn118)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn119)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn120)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn121)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Bit (*$fn122)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn123)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn124)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn125)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn126)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn127)(frost$core$Object*);
typedef frost$core$String* (*$fn128)(frost$core$Object*);
typedef frost$core$Bit (*$fn129)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn130)(frost$collections$CollectionView*);
typedef void (*$fn131)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn132)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn133)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn134)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn135)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn136)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn137)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn138)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn139)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn140)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn141)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn142)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn143)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn144)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn145)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn146)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn147)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn148)(frost$collections$CollectionView*);
typedef void (*$fn149)(org$frostlang$frostc$CodeGenerator*);
typedef frost$core$String* (*$fn150)(frost$core$Object*);
typedef frost$core$String* (*$fn151)(frost$core$Object*);
typedef frost$core$String* (*$fn152)(frost$core$Object*);
typedef frost$core$String* (*$fn153)(frost$core$Object*);
typedef frost$core$Bit (*$fn154)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn155)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Maybe* (*$fn158)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$String* (*$fn159)(frost$core$Object*);
typedef frost$core$String* (*$fn167)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn178)(frost$core$Object*);
typedef frost$core$String* (*$fn182)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn197)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn216)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn231)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn234)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn237)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn240)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn312)(frost$core$Object*);
typedef frost$core$String* (*$fn321)(frost$core$Object*);
typedef void (*$fn338)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef frost$core$String* (*$fn365)(frost$core$Object*);
typedef frost$core$String* (*$fn368)(frost$core$Object*);
typedef frost$core$String* (*$fn374)(frost$core$Object*);
typedef frost$core$String* (*$fn377)(frost$core$Object*);
typedef frost$core$Int (*$fn415)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn416)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$ListView* (*$fn417)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$Q$GT);
typedef frost$core$Int (*$fn418)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn419)(frost$collections$ListView*, frost$core$Int);
typedef void (*$fn420)(org$frostlang$frostc$Bench*);
typedef void (*$fn428)(org$frostlang$frostc$Bench*);

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
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x66\x72\x6f\x73\x74\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -5336904199903828035, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x66\x72\x6f\x73\x74\x27\x2e", 38, 2414752363581770017, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, -3725874908572553427, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, -8537804258594104524, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, -1426593306435499698, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, 2993450520568953317, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -2854313959629863208, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -293442963066226919, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4f", 2, 563012658678734677, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, -36708640889814861, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, -8241422096120224677, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x53", 2, 562999464539196145, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, -36708640889814861, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, -8229934398630946849, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66", 2, 563055539632234906, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -8357866846417911189, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -8762049995398847258, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x65", 3, -4390446579619712681, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f", 1, -5808550276084140354, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6c", 2, 625221927078985221, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68", 1, -5808546977549255721, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63", 1, -5808554674130653198, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, -8607590772689110736, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62", 4, -5818263582595368203, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, -8940199916074753387, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x49", 2, 563006061608965411, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 8483394141060772687, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x20\x6c\x69\x62\x72\x61\x72\x79\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 6787422783208561247, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c", 2, 563044544515952796, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6c\x69\x62\x72\x61\x72\x79\x20\x6e\x61\x6d\x65", 14, 7182621647362798014, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, -3260734117535617165, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 1755487887012249427, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, -6268259042323653607, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -540522989212751288, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62\x73", 5, -7219040758408810062, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 2088835727452422272, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, 1894309652117697527, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 6252797618683371763, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 565862592818489914, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 565862592818489914, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, -5255104731122465439, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, -5255104731122465439, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, 6378635575011181341, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s276 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -5478415099818808347, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, -4651943656929293709, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 6252797618683371763, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 3928554745973598786, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 107, -867402159131882985, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, -5861202104196742523, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s372 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x77\x61\x72\x6e\x69\x6e\x67\x3a\x20", 11, 2890546785777135939, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x77\x61\x72\x6e\x69\x6e\x67", 9, -3177307723557508888, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x61\x72\x6e\x69\x6e\x67\x73", 9, 8539650515262073630, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 6252797618683371763, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s388 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s397 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s401 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 3639570550927944898, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, -1438914547765079724, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x65\x70\x65\x61\x74", 8, 3780951491120021928, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x62\x65\x6e\x63\x68", 7, -7026121568011644677, NULL };

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:22
_1 = (frost$core$Bit) {false};
_2 = &param0->debug;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:25
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:61
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:62
_14 = *(&local0);
_15 = _14;
_16 = &param1->path;
_17 = *_16;
_18 = ((frost$core$Object*) _17);
frost$collections$Array$add$frost$collections$Array$T(_15, _18);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:63
_21 = *(&local0);
_22 = _21;
_23 = ((frost$core$Object*) &$s6);
frost$collections$Array$add$frost$collections$Array$T(_22, _23);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:64
_26 = *(&local0);
_27 = _26;
_28 = ((frost$core$Object*) &$s7);
frost$collections$Array$add$frost$collections$Array$T(_27, _28);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:65
_31 = *(&local0);
_32 = _31;
_33 = ((frost$core$Object*) &$s8);
frost$collections$Array$add$frost$collections$Array$T(_32, _33);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:66
_36 = &param0->debug;
_37 = *_36;
_38 = _37.value;
if (_38) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:67
_41 = *(&local0);
_42 = _41;
_43 = ((frost$core$Object*) &$s9);
frost$collections$Array$add$frost$collections$Array$T(_42, _43);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:69
_47 = *(&local0);
_48 = _47;
_49 = ((frost$core$Object*) &$s10);
frost$collections$Array$add$frost$collections$Array$T(_48, _49);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:70
_52 = *(&local0);
_53 = _52;
_54 = &param2->path;
_55 = *_54;
_56 = ((frost$core$Object*) _55);
frost$collections$Array$add$frost$collections$Array$T(_53, _56);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:71
*(&local1) = ((frost$core$System$Process*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:72
*(&local2) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:73
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:78
_117 = *(&local2);
_118 = ((frost$core$Object*) _117);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:78:35
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:79
_133 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_133);
_135 = (frost$core$Int) {79u};
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:74
_96 = *(&local1);
_97 = frost$core$System$Process$standardOutput$R$frost$io$InputStream(_96);
_98 = ($fn14) _97->$class->vtable[14];
_99 = _98(_97);
frost$io$Console$printError$frost$core$String(_99);
_101 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_101);
_103 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_103);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:75
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:81
_143 = *(&local1);
frost$core$System$Process$waitFor$R$frost$core$Int(&_144, _143);
*(&local3) = _144;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:82
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:82:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_149 = param3.value;
_150 = !_149;
_151 = (frost$core$Bit) {_150};
_153 = _151.value;
if (_153) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:83
*(&local4) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:84
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
_167 = (frost$core$Int) {84u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _167, &$s17);
abort(); // unreachable
block16:;
_170 = _158;
*(&local4) = _170;
_172 = ((frost$core$Object*) _158);
frost$core$Frost$unref$frost$core$Object$Q(_172);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:87
_179 = *(&local4);
_180 = ((frost$core$Object*) _179);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:87:39
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:88
_195 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_195);
_197 = (frost$core$Int) {88u};
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:91
_206 = *(&local3);
_207 = (frost$core$Int) {0u};
_208 = _206.value;
_209 = _207.value;
_210 = _208 != _209;
_211 = (frost$core$Bit) {_210};
_212 = _211.value;
if (_212) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:92
_215 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_215);
_217 = (frost$core$Int) {92u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, _217, &$s22);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:94
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:105
_1 = ((frost$core$Object*) param0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:105:48
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:106
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:99
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:100
_14 = *(&local0);
_15 = _14;
_16 = &param3->path;
_17 = *_16;
_18 = ((frost$core$Object*) _17);
frost$collections$Array$add$frost$collections$Array$T(_15, _18);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:101
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:102
_35 = *(&local0);
_36 = _35;
_37 = ((frost$core$Object*) &$s39);
frost$collections$Array$add$frost$collections$Array$T(_36, _37);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:103
_40 = *(&local0);
_41 = _40;
_42 = ((frost$core$Object*) &$s40);
frost$collections$Array$add$frost$collections$Array$T(_41, _42);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:104
_45 = *(&local0);
_46 = _45;
_47 = ((frost$core$Object*) &$s41);
frost$collections$Array$add$frost$collections$Array$T(_46, _47);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:105
_50 = *(&local0);
_51 = _50;
_52 = ((frost$collections$CollectionView*) param1);
_53 = ((frost$core$Int8*) org$frostlang$frostc$Main$$anonymous1$frost$io$File$R$frost$core$String);
_54 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Main.frost:105:38
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
ITable* $tmp43 = _52->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp43 = $tmp43->next;
}
_72 = $tmp43->methods[9];
_73 = _72(_52, _71);
_74 = _73;
_75 = ((frost$collections$CollectionView*) _74);
_76 = _75;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_51, _76);
_78 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_78);
_80 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_80);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:106
_83 = *(&local0);
_84 = _83;
_85 = ((frost$collections$CollectionView*) param2);
_86 = ((frost$core$Int8*) org$frostlang$frostc$Main$$anonymous2$frost$core$String$R$frost$core$String);
_87 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Main.frost:106:35
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
ITable* $tmp45 = _85->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
_105 = $tmp45->methods[9];
_106 = _105(_85, _104);
_107 = _106;
_108 = ((frost$collections$CollectionView*) _107);
_109 = _108;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_84, _109);
_111 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_111);
_113 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_113);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:107
_116 = org$frostlang$frostc$Config$icuLibraries$R$frost$core$String();
// begin inline call to function frost.core.String.split(delimiter:frost.core.String):frost.collections.Array<frost.core.String> from Main.frost:107:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1378
_119 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_122 = _119.value;
_123 = ((int64_t) _122);
_124 = (frost$core$Int) {_123};
_126 = frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(_116, &$s46, _124);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:108
_144 = *(&local1);
_145 = ((frost$collections$Iterable*) _144);
_146 = _145;
ITable* $tmp47 = _146->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp47 = $tmp47->next;
}
_147 = $tmp47->methods[0];
_148 = _147(_146);
_149 = _148;
goto block5;
block5:;
_151 = _149;
ITable* $tmp48 = _151->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp48 = $tmp48->next;
}
_152 = $tmp48->methods[0];
_153 = _152(_151);
_154 = _153.value;
if (_154) goto block7; else goto block6;
block6:;
*(&local2) = ((frost$core$String*) NULL);
_157 = _149;
ITable* $tmp49 = _157->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp49 = $tmp49->next;
}
_158 = $tmp49->methods[1];
_159 = _158(_157);
_160 = ((frost$core$String*) _159);
_161 = ((frost$core$Object*) _160);
frost$core$Frost$ref$frost$core$Object$Q(_161);
_163 = *(&local2);
_164 = ((frost$core$Object*) _163);
frost$core$Frost$unref$frost$core$Object$Q(_164);
*(&local2) = _160;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:109
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:110
_181 = *(&local0);
_182 = _181;
_183 = *(&local3);
// begin inline call to function frost.io.File.get_parent():frost.io.File? from Main.frost:110:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_186 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_183, &$s50);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, _225, &$s52);
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
_248 = (frost$core$Int) {110u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s53, _248, &$s54);
abort(); // unreachable
block13:;
_251 = _243;
_252 = ((frost$core$Object*) _251);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:110:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_255 = ($fn55) _252->$class->vtable[0];
_256 = _255(_252);
_257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s56, _256);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:111
_272 = *(&local3);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from Main.frost:111:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
// begin inline call to function frost.io.File.get_name():frost.core.String from File.frost:157:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:147
_277 = &_272->path;
_278 = *_277;
_279 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_278, &$s57);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s58, _297, &$s59);
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
_340 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_336, &$s60, _339);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:112
_398 = *(&local11);
_399 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_398, &$s61);
_400 = _399.value;
if (_400) goto block26; else goto block27;
block27:;
_402 = (frost$core$Int) {112u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s62, _402);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:113
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:114
_421 = *(&local0);
_422 = _421;
_423 = *(&local11);
_424 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s63, _423);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:116
_455 = *(&local0);
_456 = _455;
_457 = ((frost$core$Object*) &$s64);
frost$collections$Array$add$frost$collections$Array$T(_456, _457);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:117
_460 = *(&local0);
_461 = _460;
_462 = ((frost$core$Object*) &$s65);
frost$collections$Array$add$frost$collections$Array$T(_461, _462);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:118
_465 = &param0->debug;
_466 = *_465;
_467 = _466.value;
if (_467) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:119
_470 = *(&local0);
_471 = _470;
_472 = ((frost$core$Object*) &$s66);
frost$collections$Array$add$frost$collections$Array$T(_471, _472);
goto block29;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:121
_476 = *(&local0);
_477 = _476;
_478 = ((frost$core$Object*) &$s67);
frost$collections$Array$add$frost$collections$Array$T(_477, _478);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:122
_481 = *(&local0);
_482 = _481;
_483 = &param4->path;
_484 = *_483;
_485 = ((frost$core$Object*) _484);
frost$collections$Array$add$frost$collections$Array$T(_482, _485);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:123
*(&local12) = ((frost$core$System$Process*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:124
*(&local13) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:125
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:130
_546 = *(&local13);
_547 = ((frost$core$Object*) _546);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:130:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_550 = ($fn68) _547->$class->vtable[0];
_551 = _550(_547);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_551);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_558 = ((frost$core$Object*) _551);
frost$core$Frost$unref$frost$core$Object$Q(_558);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:131
_562 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_562);
_564 = (frost$core$Int) {131u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s69, _564, &$s70);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:126
_525 = *(&local12);
_526 = frost$core$System$Process$standardOutput$R$frost$io$InputStream(_525);
_527 = ($fn71) _526->$class->vtable[14];
_528 = _527(_526);
frost$io$Console$printError$frost$core$String(_528);
_530 = ((frost$core$Object*) _528);
frost$core$Frost$unref$frost$core$Object$Q(_530);
_532 = ((frost$core$Object*) _526);
frost$core$Frost$unref$frost$core$Object$Q(_532);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:127
_535 = *(&local12);
_536 = frost$core$System$Process$standardError$R$frost$io$InputStream(_535);
_537 = ($fn72) _536->$class->vtable[14];
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:133
_572 = *(&local12);
frost$core$System$Process$waitFor$R$frost$core$Int(&_573, _572);
*(&local14) = _573;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:134
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:134:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_578 = param5.value;
_579 = !_578;
_580 = (frost$core$Bit) {_579};
_582 = _580.value;
if (_582) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:135
*(&local15) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:136
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
_596 = (frost$core$Int) {136u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s73, _596, &$s74);
abort(); // unreachable
block43:;
_599 = _587;
*(&local15) = _599;
_601 = ((frost$core$Object*) _587);
frost$core$Frost$unref$frost$core$Object$Q(_601);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:139
_608 = *(&local15);
_609 = ((frost$core$Object*) _608);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:139:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_612 = ($fn75) _609->$class->vtable[0];
_613 = _612(_609);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_613);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_620 = ((frost$core$Object*) _613);
frost$core$Frost$unref$frost$core$Object$Q(_620);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:140
_624 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_624);
_626 = (frost$core$Int) {140u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s76, _626, &$s77);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:143
_635 = *(&local14);
_636 = (frost$core$Int) {0u};
_637 = _635.value;
_638 = _636.value;
_639 = _637 != _638;
_640 = (frost$core$Bit) {_639};
_641 = _640.value;
if (_641) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:144
_644 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_644);
_646 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s78, _646, &$s79);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:146
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
$fn80 _3;
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
$fn81 _24;
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
$fn82 _45;
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
$fn83 _66;
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
$fn84 _87;
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
$fn85 _108;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:150
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:151
_3 = ($fn86) param1->$class->vtable[19];
_4 = _3(param1, &$s87);
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
_13 = (frost$core$Int) {151u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s88, _13, &$s89);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:152
_24 = ($fn90) param1->$class->vtable[21];
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
_34 = (frost$core$Int) {152u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s91, _34, &$s92);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:153
_45 = ($fn93) param1->$class->vtable[19];
_46 = _45(param1, &$s94);
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
_55 = (frost$core$Int) {153u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s95, _55, &$s96);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:154
_66 = ($fn97) param1->$class->vtable[21];
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
_76 = (frost$core$Int) {154u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s98, _76, &$s99);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:155
_87 = ($fn100) param1->$class->vtable[19];
_88 = _87(param1, &$s101);
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
_97 = (frost$core$Int) {155u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s102, _97, &$s103);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:156
_108 = ($fn104) param1->$class->vtable[19];
_109 = _108(param1, &$s105);
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
_118 = (frost$core$Int) {156u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s106, _118, &$s107);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:159
_130 = (frost$core$Int) {159u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s108, _130);
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
frost$io$File* local40 = NULL;
org$frostlang$frostc$Main$Format local41;
org$frostlang$frostc$Main$Format local42;
frost$io$File* local43 = NULL;
org$frostlang$frostc$Main$Format local44;
org$frostlang$frostc$Main$Format local45;
frost$core$String* local46 = NULL;
frost$io$File* local47 = NULL;
frost$core$String* local48 = NULL;
frost$core$String* local49 = NULL;
frost$core$String* local50 = NULL;
frost$core$String$Index$nullable local51;
org$frostlang$frostc$Main$Format local52;
org$frostlang$frostc$Main$Format local53;
frost$core$Int local54;
frost$core$Int local55;
org$frostlang$frostc$CodeGenerator* local56 = NULL;
frost$core$Error* local57 = NULL;
frost$io$File* local58 = NULL;
frost$core$String* local59 = NULL;
frost$core$String* local60 = NULL;
frost$core$String* local61 = NULL;
frost$core$String$Index$nullable local62;
frost$core$Error* local63 = NULL;
org$frostlang$frostc$Compiler$Settings* local64 = NULL;
frost$threads$MessageQueue* local65 = NULL;
org$frostlang$frostc$Compiler* local66 = NULL;
org$frostlang$frostc$Main$Format local67;
org$frostlang$frostc$Main$Format local68;
frost$io$File* local69 = NULL;
org$frostlang$frostc$ClassDecl* local70 = NULL;
org$frostlang$frostc$ClassDecl* local71 = NULL;
org$frostlang$frostc$ClassDecl* local72 = NULL;
frost$io$File* local73 = NULL;
org$frostlang$frostc$ClassDecl* local74 = NULL;
frost$threads$ScopedLock* local75 = NULL;
org$frostlang$frostc$Compiler$Message* local76 = NULL;
frost$core$String* local77 = NULL;
frost$core$Int local78;
frost$core$Int local79;
frost$core$String* local80 = NULL;
frost$core$String* local81 = NULL;
frost$core$Int local82;
frost$core$Int local83;
frost$core$String* local84 = NULL;
frost$io$File* local85 = NULL;
frost$core$String* local86 = NULL;
frost$core$String* local87 = NULL;
frost$core$String* local88 = NULL;
frost$core$String$Index$nullable local89;
frost$io$File* local90 = NULL;
frost$core$String* local91 = NULL;
frost$core$String* local92 = NULL;
frost$core$String* local93 = NULL;
frost$core$String$Index$nullable local94;
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
$fn109 _94;
frost$core$Bit _95;
bool _98;
bool _99;
frost$core$Bit _100;
bool _102;
org$frostlang$frostc$Main$Arguments* _105;
$fn110 _106;
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
$fn111 _163;
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
$fn112 _212;
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
$fn113 _262;
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
$fn114 _393;
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
$fn115 _420;
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
$fn116 _542;
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
$fn117 _686;
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
frost$core$String* _812;
frost$core$String* _813;
frost$core$String* _814;
frost$core$Object* _824;
frost$core$Object* _826;
frost$core$Int _829;
frost$core$Int _831;
frost$core$String* _834;
frost$core$Object* _835;
frost$core$Bit _839;
bool _840;
frost$collections$Array* _843;
frost$collections$Array* _844;
frost$io$File* _845;
org$frostlang$frostc$Main$Arguments* _846;
$fn118 _847;
frost$core$String* _848;
frost$core$Object* _850;
frost$core$Object* _852;
frost$core$Object* _854;
frost$core$Bit _857;
bool _858;
frost$collections$Array* _861;
frost$collections$Array* _862;
frost$io$File* _863;
org$frostlang$frostc$Main$Arguments* _864;
$fn119 _865;
frost$core$String* _866;
frost$core$Object* _868;
frost$core$Object* _870;
frost$core$Object* _872;
frost$core$Bit _875;
bool _876;
frost$collections$Array* _879;
frost$collections$Array* _880;
org$frostlang$frostc$Main$Arguments* _881;
$fn120 _882;
frost$core$String* _883;
frost$core$Object* _884;
frost$core$Object* _886;
frost$core$Bit _889;
bool _890;
org$frostlang$frostc$Main$Arguments* _893;
$fn121 _894;
frost$core$String* _895;
frost$core$String* _896;
frost$core$Object* _897;
frost$core$String* _899;
frost$core$Object* _900;
frost$core$Object* _903;
frost$core$String* _907;
frost$core$Bit _908;
bool _909;
frost$io$File* _912;
frost$core$String* _913;
frost$core$Object* _916;
frost$io$File* _918;
frost$core$Object* _919;
frost$core$Object* _922;
frost$collections$Array* _925;
frost$collections$Array* _926;
frost$io$File* _927;
frost$core$Object* _928;
frost$io$File* _930;
frost$core$Object* _931;
frost$core$String* _937;
frost$core$String* _938;
frost$core$String* _939;
frost$core$Object* _949;
frost$core$Object* _951;
frost$core$Int _954;
frost$core$Int _956;
frost$core$String* _960;
frost$core$Object* _961;
org$frostlang$frostc$Main$Format$nullable _966;
bool _967;
frost$core$Bit _968;
bool _969;
org$frostlang$frostc$Main$Format$nullable _971;
bool _972;
frost$core$Bit _973;
bool _974;
frost$core$Int _976;
frost$core$Equatable* _979;
frost$core$Equatable* _980;
frost$core$Int _981;
frost$core$Int* _984;
org$frostlang$frostc$Main$Format _986;
org$frostlang$frostc$Main$Format _989;
frost$core$Equatable* _990;
$fn122 _991;
frost$core$Bit _992;
bool _993;
frost$core$Object* _994;
frost$core$Object* _996;
frost$collections$Array* _1000;
frost$collections$Array* _1001;
frost$io$File* _1002;
frost$core$String* _1003;
frost$io$File* _1005;
frost$core$Object* _1006;
frost$core$Object* _1008;
frost$core$Object* _1010;
frost$core$Object* _1012;
frost$collections$Array* _1016;
frost$collections$Array* _1017;
frost$io$File** _1018;
frost$io$File* _1019;
frost$core$Object* _1020;
frost$io$File* _1023;
frost$core$String* _1024;
frost$core$Object* _1027;
frost$io$File* _1029;
frost$core$Object* _1030;
frost$core$Object* _1033;
frost$core$Object* _1035;
frost$io$File* _1038;
frost$core$Object* _1040;
frost$io$File** _1042;
frost$io$File* _1043;
frost$core$Object* _1044;
frost$io$File** _1046;
frost$core$Object* _1048;
frost$collections$Array* _1051;
frost$collections$CollectionView* _1052;
$fn123 _1053;
frost$core$Int _1054;
frost$core$Int _1055;
int64_t _1058;
int64_t _1059;
bool _1060;
frost$core$Bit _1061;
bool _1063;
frost$core$Int _1076;
frost$core$Int _1078;
org$frostlang$frostc$Main$Format$nullable _1082;
bool _1083;
frost$core$Bit _1084;
bool _1085;
frost$core$Int _1088;
frost$core$Int* _1091;
org$frostlang$frostc$Main$Format _1093;
org$frostlang$frostc$Main$Format _1096;
org$frostlang$frostc$Main$Format$nullable _1097;
frost$io$File* _1101;
bool _1102;
frost$core$Bit _1103;
bool _1104;
frost$collections$Array* _1107;
frost$collections$CollectionView* _1108;
$fn124 _1109;
frost$core$Int _1110;
frost$core$Int _1111;
int64_t _1114;
int64_t _1115;
bool _1116;
frost$core$Bit _1117;
bool _1119;
org$frostlang$frostc$Main$Format$nullable _1124;
bool _1125;
frost$core$Bit _1126;
bool _1127;
frost$core$Int _1129;
org$frostlang$frostc$Main$Format _1132;
frost$core$Int _1133;
frost$core$Int _1134;
int64_t _1137;
int64_t _1138;
bool _1139;
frost$core$Bit _1140;
bool _1142;
frost$core$Object* _1145;
frost$core$String* _1147;
frost$core$Object* _1148;
frost$core$Int _1152;
int64_t _1155;
int64_t _1156;
bool _1157;
frost$core$Bit _1158;
bool _1160;
frost$core$Object* _1163;
frost$core$String* _1165;
frost$core$Object* _1166;
frost$core$Int _1170;
int64_t _1173;
int64_t _1174;
bool _1175;
frost$core$Bit _1176;
bool _1178;
frost$core$Object* _1181;
frost$core$String* _1183;
frost$core$Object* _1184;
frost$core$Int _1188;
int64_t _1191;
int64_t _1192;
bool _1193;
frost$core$Bit _1194;
bool _1196;
frost$core$Object* _1199;
frost$core$String* _1201;
frost$core$Object* _1202;
frost$core$Int _1206;
int64_t _1209;
int64_t _1210;
bool _1211;
frost$core$Bit _1212;
bool _1214;
frost$core$Object* _1217;
frost$core$String* _1219;
frost$core$Object* _1220;
frost$core$Int _1235;
frost$core$Int _1237;
frost$collections$Array* _1241;
frost$collections$Array* _1242;
frost$core$Int _1243;
frost$core$Int _1245;
int64_t _1246;
int64_t _1247;
bool _1248;
frost$core$Bit _1249;
bool _1250;
frost$collections$CollectionView* _1252;
$fn125 _1253;
frost$core$Int _1254;
int64_t _1255;
int64_t _1256;
bool _1257;
frost$core$Bit _1258;
bool _1259;
frost$core$Int _1261;
frost$core$Object*** _1265;
frost$core$Object** _1266;
frost$core$Int64 _1267;
int64_t _1268;
frost$core$Object* _1269;
frost$core$Object* _1270;
frost$io$File* _1273;
frost$core$String* _1274;
frost$io$File* _1279;
frost$core$String** _1280;
frost$core$String* _1281;
frost$core$String* _1282;
frost$core$Object* _1284;
frost$core$String* _1286;
frost$core$Object* _1287;
frost$core$Object* _1290;
frost$core$Object* _1292;
frost$core$String* _1295;
bool _1296;
frost$core$Bit _1297;
bool _1298;
frost$core$Object* _1301;
frost$core$String* _1303;
frost$core$Object* _1304;
frost$core$Object* _1308;
frost$io$File* _1312;
frost$core$String* _1313;
bool _1314;
frost$core$Bit _1315;
bool _1316;
frost$core$Int _1318;
frost$core$String* _1321;
frost$io$File* _1323;
frost$core$Object* _1324;
frost$core$Object* _1326;
frost$core$String* _1328;
frost$core$Object* _1329;
frost$core$Object* _1333;
frost$io$File* _1336;
bool _1337;
frost$core$Bit _1338;
bool _1339;
frost$core$Int _1341;
frost$io$File* _1344;
frost$core$String* _1347;
frost$core$Object* _1349;
frost$core$String* _1351;
frost$core$Object* _1352;
frost$core$Object* _1355;
frost$core$String* _1358;
frost$core$String$Index$nullable _1359;
frost$core$String$Index$nullable _1362;
bool _1363;
frost$core$Bit _1364;
bool _1365;
frost$core$String* _1368;
frost$core$Object* _1369;
frost$core$String* _1371;
frost$core$Object* _1372;
frost$core$Object* _1376;
frost$core$String* _1380;
frost$core$String$Index$nullable _1381;
frost$core$Bit _1382;
frost$core$Range$LTfrost$core$String$Index$Q$GT _1383;
frost$core$String* _1384;
frost$core$Object* _1385;
frost$core$Object* _1387;
frost$core$String* _1389;
frost$core$Object* _1390;
frost$core$Object* _1394;
frost$core$String* _1397;
frost$core$String* _1398;
frost$io$File* _1399;
frost$core$Object* _1400;
frost$core$Object* _1402;
frost$core$Object* _1404;
frost$core$Object* _1406;
frost$core$String* _1408;
frost$core$Object* _1409;
frost$core$Object* _1412;
frost$io$File* _1414;
frost$core$Object* _1415;
frost$io$File* _1419;
frost$core$Object* _1420;
frost$io$File* _1422;
frost$core$Object* _1423;
frost$core$Object* _1426;
frost$core$Object* _1428;
frost$core$String* _1430;
frost$core$Object* _1431;
org$frostlang$frostc$Main$Format$nullable _1436;
bool _1437;
frost$core$Bit _1438;
bool _1439;
frost$core$Int _1441;
frost$core$Equatable* _1444;
frost$core$Equatable* _1445;
frost$core$Int _1446;
frost$core$Int* _1449;
org$frostlang$frostc$Main$Format _1451;
org$frostlang$frostc$Main$Format _1454;
frost$core$Equatable* _1455;
$fn126 _1456;
frost$core$Bit _1457;
bool _1458;
frost$core$Object* _1459;
frost$core$Object* _1461;
frost$core$Int _1475;
frost$core$Int _1477;
frost$core$Int _1492;
frost$core$Int _1494;
frost$core$Int _1500;
frost$core$Int _1503;
frost$core$Object* _1508;
org$frostlang$frostc$CodeGenerator* _1510;
frost$core$Object* _1511;
org$frostlang$frostc$Main$Format$nullable _1515;
bool _1516;
frost$core$Bit _1517;
bool _1518;
frost$core$Int _1520;
org$frostlang$frostc$Main$Format _1523;
frost$core$Int _1524;
frost$core$Int _1525;
int64_t _1528;
int64_t _1529;
bool _1530;
frost$core$Bit _1531;
bool _1533;
frost$core$Int _1535;
int64_t _1538;
int64_t _1539;
bool _1540;
frost$core$Bit _1541;
bool _1543;
frost$core$Int _1545;
int64_t _1548;
int64_t _1549;
bool _1550;
frost$core$Bit _1551;
bool _1553;
org$frostlang$frostc$LLVMCodeGenerator* _1558;
frost$core$String* _1559;
frost$io$File* _1560;
bool _1561;
frost$core$Bit _1562;
bool _1563;
frost$core$Int _1565;
frost$io$File* _1568;
frost$io$File* _1573;
frost$core$String** _1574;
frost$core$String* _1575;
frost$core$String* _1576;
frost$core$Object* _1578;
frost$core$String* _1580;
frost$core$Object* _1581;
frost$core$Object* _1584;
frost$core$Object* _1586;
frost$core$String* _1589;
bool _1590;
frost$core$Bit _1591;
bool _1592;
frost$core$Object* _1595;
frost$core$String* _1597;
frost$core$Object* _1598;
frost$core$Object* _1602;
frost$io$File* _1606;
frost$core$String* _1607;
bool _1608;
frost$core$Bit _1609;
bool _1610;
frost$core$Int _1612;
frost$core$String* _1615;
frost$io$File* _1617;
frost$core$Object* _1618;
frost$core$Object* _1620;
frost$core$String* _1622;
frost$core$Object* _1623;
frost$core$Object* _1627;
frost$io$File* _1630;
bool _1631;
frost$core$Bit _1632;
bool _1633;
frost$core$Int _1635;
frost$io$File* _1638;
frost$core$String* _1641;
frost$core$Object* _1643;
frost$core$String* _1645;
frost$core$Object* _1646;
frost$core$Object* _1649;
frost$core$String* _1652;
frost$core$String$Index$nullable _1653;
frost$core$String$Index$nullable _1656;
bool _1657;
frost$core$Bit _1658;
bool _1659;
frost$core$String* _1662;
frost$core$Object* _1663;
frost$core$String* _1665;
frost$core$Object* _1666;
frost$core$Object* _1670;
frost$core$String* _1674;
frost$core$String$Index$nullable _1675;
frost$core$Bit _1676;
frost$core$Range$LTfrost$core$String$Index$Q$GT _1677;
frost$core$String* _1678;
frost$core$Object* _1679;
frost$core$Object* _1681;
frost$core$String* _1683;
frost$core$Object* _1684;
frost$core$Object* _1688;
frost$core$String* _1691;
frost$core$String* _1692;
frost$io$File* _1693;
frost$core$Object* _1694;
frost$core$Object* _1696;
frost$core$Object* _1698;
frost$core$Object* _1700;
frost$core$String* _1702;
frost$core$Object* _1703;
frost$core$Object* _1706;
frost$io$File* _1708;
frost$core$Object* _1709;
frost$core$Maybe* _1713;
frost$core$Maybe* _1714;
frost$core$Int* _1715;
frost$core$Int _1716;
int64_t _1717;
bool _1718;
frost$core$Error** _1720;
frost$core$Error* _1721;
frost$core$Object* _1722;
frost$core$Object* _1725;
frost$core$Object* _1727;
frost$core$Object* _1729;
frost$core$Object* _1731;
frost$core$Error* _1755;
frost$core$Object* _1756;
$fn127 _1759;
frost$core$String* _1760;
frost$core$Object* _1767;
frost$core$Int _1771;
frost$core$Int _1773;
frost$core$Object** _1734;
frost$core$Object* _1735;
frost$io$OutputStream* _1736;
org$frostlang$frostc$CodeGenerator* _1738;
frost$core$Object* _1739;
org$frostlang$frostc$CodeGenerator* _1741;
frost$core$Object* _1742;
frost$core$Object* _1745;
frost$core$Object* _1747;
frost$core$Object* _1749;
frost$core$Object* _1751;
frost$core$Error* _1776;
frost$core$Object* _1777;
frost$core$Int _1781;
int64_t _1784;
int64_t _1785;
bool _1786;
frost$core$Bit _1787;
bool _1789;
org$frostlang$frostc$HCodeGenerator* _1792;
frost$io$File* _1793;
bool _1794;
frost$core$Bit _1795;
bool _1796;
frost$core$Int _1798;
frost$io$File* _1801;
org$frostlang$frostc$CodeGenerator* _1803;
frost$core$Object* _1804;
org$frostlang$frostc$CodeGenerator* _1806;
frost$core$Object* _1807;
frost$core$Object* _1810;
frost$core$Int _1813;
int64_t _1816;
int64_t _1817;
bool _1818;
frost$core$Bit _1819;
bool _1821;
org$frostlang$frostc$CCodeGenerator* _1824;
frost$io$File* _1825;
bool _1826;
frost$core$Bit _1827;
bool _1828;
frost$core$Int _1830;
frost$io$File* _1833;
org$frostlang$frostc$CodeGenerator* _1835;
frost$core$Object* _1836;
org$frostlang$frostc$CodeGenerator* _1838;
frost$core$Object* _1839;
frost$core$Object* _1842;
frost$core$Int _1845;
int64_t _1848;
int64_t _1849;
bool _1850;
frost$core$Bit _1851;
bool _1853;
org$frostlang$frostc$StubCodeGenerator* _1858;
frost$io$File* _1859;
bool _1860;
frost$core$Bit _1861;
bool _1862;
frost$core$Int _1864;
frost$io$File* _1867;
frost$core$Maybe* _1868;
frost$core$Maybe* _1869;
frost$core$Int* _1870;
frost$core$Int _1871;
int64_t _1872;
bool _1873;
frost$core$Error** _1875;
frost$core$Error* _1876;
frost$core$Object* _1877;
frost$core$Object* _1880;
frost$core$Object* _1882;
frost$core$Error* _1902;
frost$core$Object* _1903;
$fn128 _1906;
frost$core$String* _1907;
frost$core$Object* _1914;
frost$core$Int _1918;
frost$core$Int _1920;
frost$core$Object** _1885;
frost$core$Object* _1886;
frost$io$OutputStream* _1887;
org$frostlang$frostc$CodeGenerator* _1889;
frost$core$Object* _1890;
org$frostlang$frostc$CodeGenerator* _1892;
frost$core$Object* _1893;
frost$core$Object* _1896;
frost$core$Object* _1898;
frost$core$Error* _1923;
frost$core$Object* _1924;
org$frostlang$frostc$Compiler$Settings* _1929;
frost$io$File** _1930;
frost$io$File* _1931;
frost$collections$Array* _1932;
frost$collections$ListView* _1933;
frost$core$Int _1934;
frost$core$Int _1935;
frost$core$Bit* _1936;
frost$core$Bit _1937;
frost$core$Object* _1940;
org$frostlang$frostc$Compiler$Settings* _1942;
frost$core$Object* _1943;
frost$core$Object* _1946;
frost$threads$MessageQueue* _1949;
frost$threads$MessageQueue* _1950;
frost$core$Object* _1953;
frost$threads$MessageQueue* _1955;
frost$core$Object* _1956;
frost$core$Object* _1959;
org$frostlang$frostc$Compiler* _1962;
frost$threads$MessageQueue* _1963;
org$frostlang$frostc$CodeGenerator* _1964;
org$frostlang$frostc$Compiler$Settings* _1965;
frost$core$Object* _1968;
org$frostlang$frostc$Compiler* _1970;
frost$core$Object* _1971;
frost$core$Object* _1974;
org$frostlang$frostc$Main$Format$nullable _1977;
bool _1978;
frost$core$Bit _1979;
bool _1980;
frost$core$Int _1982;
frost$core$Equatable* _1985;
frost$core$Equatable* _1986;
frost$core$Int _1987;
frost$core$Int* _1990;
org$frostlang$frostc$Main$Format _1992;
org$frostlang$frostc$Main$Format _1995;
frost$core$Equatable* _1996;
$fn129 _1997;
frost$core$Bit _1998;
bool _1999;
frost$core$Object* _2000;
frost$core$Object* _2002;
frost$core$String* _2006;
bool _2007;
frost$core$Bit _2008;
bool _2009;
frost$core$String* _2012;
frost$core$Object* _2013;
frost$core$String* _2015;
frost$core$Object* _2016;
org$frostlang$frostc$HTMLProcessor* _2021;
org$frostlang$frostc$Compiler* _2022;
frost$collections$Array* _2024;
frost$collections$Array* _2025;
frost$core$Int _2026;
frost$core$Int _2028;
int64_t _2029;
int64_t _2030;
bool _2031;
frost$core$Bit _2032;
bool _2033;
frost$collections$CollectionView* _2035;
$fn130 _2036;
frost$core$Int _2037;
int64_t _2038;
int64_t _2039;
bool _2040;
frost$core$Bit _2041;
bool _2042;
frost$core$Int _2044;
frost$core$Object*** _2048;
frost$core$Object** _2049;
frost$core$Int64 _2050;
int64_t _2051;
frost$core$Object* _2052;
frost$core$Object* _2053;
frost$io$File* _2056;
frost$io$File* _2057;
bool _2058;
frost$core$Bit _2059;
bool _2060;
frost$core$Int _2062;
frost$io$File* _2065;
frost$core$String* _2066;
bool _2067;
frost$core$Bit _2068;
bool _2069;
frost$core$Int _2071;
frost$core$String* _2074;
$fn131 _2075;
frost$core$Object* _2077;
frost$core$Object* _2079;
org$frostlang$frostc$Compiler* _2082;
frost$core$Object* _2083;
frost$threads$MessageQueue* _2086;
frost$core$Object* _2087;
org$frostlang$frostc$Compiler$Settings* _2090;
frost$core$Object* _2091;
org$frostlang$frostc$CodeGenerator* _2094;
frost$core$Object* _2095;
frost$io$File* _2098;
frost$core$Object* _2099;
frost$core$String* _2102;
frost$core$Object* _2103;
frost$io$File* _2106;
frost$core$Object* _2107;
frost$collections$Array* _2110;
frost$core$Object* _2111;
frost$collections$Array* _2114;
frost$core$Object* _2115;
frost$collections$Array* _2118;
frost$core$Object* _2119;
frost$collections$Array* _2122;
frost$core$Object* _2123;
org$frostlang$frostc$Main$Arguments* _2126;
frost$core$Object* _2127;
frost$core$String* _2132;
bool _2133;
frost$core$Bit _2134;
bool _2135;
frost$core$Int _2148;
frost$core$Int _2150;
frost$collections$Array* _2154;
frost$collections$Iterable* _2155;
frost$collections$Iterable* _2156;
$fn132 _2157;
frost$collections$Iterator* _2158;
frost$collections$Iterator* _2159;
frost$collections$Iterator* _2161;
$fn133 _2162;
frost$core$Bit _2163;
bool _2164;
frost$collections$Iterator* _2167;
$fn134 _2168;
frost$core$Object* _2169;
frost$io$File* _2170;
frost$core$Object* _2171;
frost$io$File* _2173;
frost$core$Object* _2174;
org$frostlang$frostc$Compiler* _2178;
frost$io$File* _2179;
frost$collections$ListView* _2180;
frost$collections$Iterable* _2181;
frost$collections$Iterable* _2182;
$fn135 _2183;
frost$collections$Iterator* _2184;
frost$collections$Iterator* _2185;
frost$collections$Iterator* _2187;
$fn136 _2188;
frost$core$Bit _2189;
bool _2190;
frost$collections$Iterator* _2193;
$fn137 _2194;
frost$core$Object* _2195;
org$frostlang$frostc$ClassDecl* _2196;
frost$core$Object* _2197;
org$frostlang$frostc$ClassDecl* _2199;
frost$core$Object* _2200;
org$frostlang$frostc$Compiler* _2204;
org$frostlang$frostc$ClassDecl* _2205;
frost$core$Bit _2208;
frost$core$Bit* _2209;
frost$collections$Array** _2212;
frost$collections$Array* _2213;
frost$collections$Iterable* _2214;
frost$collections$Iterable* _2215;
$fn138 _2216;
frost$collections$Iterator* _2217;
frost$collections$Iterator* _2218;
frost$collections$Iterator* _2220;
$fn139 _2221;
frost$core$Bit _2222;
bool _2223;
frost$collections$Iterator* _2226;
$fn140 _2227;
frost$core$Object* _2228;
org$frostlang$frostc$ClassDecl* _2229;
frost$core$Object* _2230;
org$frostlang$frostc$ClassDecl* _2232;
frost$core$Object* _2233;
org$frostlang$frostc$ClassDecl* _2237;
frost$core$Bit _2240;
frost$core$Bit* _2241;
frost$collections$Array** _2244;
frost$collections$Array* _2245;
frost$collections$Iterable* _2246;
frost$collections$Iterable* _2247;
$fn141 _2248;
frost$collections$Iterator* _2249;
frost$collections$Iterator* _2250;
frost$collections$Iterator* _2252;
$fn142 _2253;
frost$core$Bit _2254;
bool _2255;
frost$collections$Iterator* _2258;
$fn143 _2259;
frost$core$Object* _2260;
org$frostlang$frostc$ClassDecl* _2261;
frost$core$Object* _2262;
org$frostlang$frostc$ClassDecl* _2264;
frost$core$Object* _2265;
org$frostlang$frostc$ClassDecl* _2269;
frost$core$Object* _2271;
org$frostlang$frostc$ClassDecl* _2273;
frost$core$Object* _2274;
frost$core$Object* _2278;
frost$core$Object* _2281;
org$frostlang$frostc$ClassDecl* _2283;
frost$core$Object* _2284;
frost$core$Object* _2288;
frost$core$Object* _2291;
org$frostlang$frostc$ClassDecl* _2293;
frost$core$Object* _2294;
frost$core$Object* _2298;
frost$core$Object* _2300;
frost$core$Object* _2302;
frost$io$File* _2304;
frost$core$Object* _2305;
frost$core$Object* _2309;
frost$collections$Array* _2312;
frost$collections$Iterable* _2313;
frost$collections$Iterable* _2314;
$fn144 _2315;
frost$collections$Iterator* _2316;
frost$collections$Iterator* _2317;
frost$collections$Iterator* _2319;
$fn145 _2320;
frost$core$Bit _2321;
bool _2322;
frost$collections$Iterator* _2325;
$fn146 _2326;
frost$core$Object* _2327;
frost$io$File* _2328;
frost$core$Object* _2329;
frost$io$File* _2331;
frost$core$Object* _2332;
org$frostlang$frostc$Compiler* _2336;
frost$io$File* _2337;
frost$core$Object* _2339;
frost$io$File* _2341;
frost$core$Object* _2342;
frost$core$Object* _2346;
org$frostlang$frostc$Compiler* _2349;
frost$collections$Array** _2353;
frost$collections$Array* _2354;
frost$collections$CollectionView* _2355;
$fn147 _2356;
frost$core$Int _2357;
frost$core$Int _2358;
int64_t _2359;
int64_t _2360;
bool _2361;
frost$core$Bit _2362;
bool _2363;
frost$collections$Array** _2366;
frost$collections$Array* _2367;
frost$collections$Array* _2368;
frost$collections$Array** _2369;
frost$collections$Array* _2370;
frost$collections$CollectionView* _2371;
$fn148 _2372;
frost$core$Int _2373;
frost$core$Int _2374;
int64_t _2375;
int64_t _2376;
int64_t _2377;
frost$core$Int _2378;
frost$core$Object* _2379;
org$frostlang$frostc$ClassDecl* _2380;
frost$core$Object* _2382;
org$frostlang$frostc$ClassDecl* _2384;
frost$core$Object* _2385;
frost$core$Object* _2388;
org$frostlang$frostc$ClassDecl* _2391;
org$frostlang$frostc$ClassDecl* _2393;
frost$core$Object* _2394;
org$frostlang$frostc$CodeGenerator** _2399;
org$frostlang$frostc$CodeGenerator* _2400;
bool _2401;
frost$core$Bit _2402;
bool _2403;
frost$core$Int _2405;
org$frostlang$frostc$CodeGenerator* _2408;
$fn149 _2409;
frost$threads$MessageQueue* _2414;
frost$threads$MessageQueue* _2415;
frost$threads$ScopedLock* _2420;
frost$threads$Lock** _2421;
frost$threads$Lock* _2422;
frost$core$Object* _2425;
frost$threads$ScopedLock* _2427;
frost$core$Object* _2428;
frost$core$Object* _2431;
frost$core$Int* _2434;
frost$core$Int _2435;
frost$threads$ScopedLock* _2436;
frost$core$Object* _2437;
frost$core$Int _2441;
int64_t _2442;
int64_t _2443;
bool _2444;
frost$core$Bit _2445;
bool _2447;
frost$threads$MessageQueue* _2450;
frost$threads$MessageQueue* _2451;
frost$core$Immutable* _2452;
org$frostlang$frostc$Compiler$Message* _2453;
frost$core$Object* _2455;
org$frostlang$frostc$Compiler$Message* _2457;
frost$core$Object* _2458;
frost$core$Object* _2461;
org$frostlang$frostc$Compiler$Message* _2464;
frost$core$Int* _2465;
frost$core$Int _2466;
frost$core$Int _2467;
int64_t _2470;
int64_t _2471;
bool _2472;
frost$core$Bit _2473;
bool _2475;
frost$core$String** _2477;
frost$core$String* _2478;
frost$core$Object* _2480;
frost$core$String* _2482;
frost$core$Object* _2483;
frost$core$Int* _2486;
frost$core$Int _2487;
frost$core$Int* _2489;
frost$core$Int _2490;
frost$core$String** _2492;
frost$core$String* _2493;
frost$core$Object* _2495;
frost$core$String* _2497;
frost$core$Object* _2498;
frost$core$Int _2502;
frost$core$Int _2503;
int64_t _2504;
int64_t _2505;
int64_t _2506;
frost$core$Int _2507;
frost$core$String* _2510;
frost$core$Object* _2513;
frost$core$String* _2516;
frost$core$Int _2517;
frost$core$Object* _2518;
$fn150 _2521;
frost$core$String* _2522;
frost$core$String* _2523;
frost$core$Object* _2524;
frost$core$Object* _2526;
frost$core$Object* _2528;
frost$core$String* _2531;
frost$core$Int _2532;
frost$core$Object* _2533;
$fn151 _2536;
frost$core$String* _2537;
frost$core$String* _2538;
frost$core$Object* _2539;
frost$core$Object* _2541;
frost$core$Object* _2543;
frost$core$String* _2546;
frost$core$String* _2547;
frost$core$String* _2548;
frost$core$String* _2549;
frost$core$Object* _2559;
frost$core$Object* _2561;
frost$core$Object* _2563;
frost$core$Object* _2565;
frost$core$Object* _2567;
frost$core$Object* _2569;
frost$core$Object* _2571;
frost$core$Object* _2573;
frost$core$Object* _2575;
frost$core$Object* _2577;
frost$core$String* _2579;
frost$core$Object* _2580;
frost$core$String* _2583;
frost$core$Object* _2584;
frost$core$Int _2588;
int64_t _2591;
int64_t _2592;
bool _2593;
frost$core$Bit _2594;
bool _2596;
frost$core$String** _2598;
frost$core$String* _2599;
frost$core$Object* _2601;
frost$core$String* _2603;
frost$core$Object* _2604;
frost$core$Int* _2607;
frost$core$Int _2608;
frost$core$Int* _2610;
frost$core$Int _2611;
frost$core$String** _2613;
frost$core$String* _2614;
frost$core$Object* _2616;
frost$core$String* _2618;
frost$core$Object* _2619;
frost$core$Int _2623;
frost$core$Int _2624;
int64_t _2625;
int64_t _2626;
int64_t _2627;
frost$core$Int _2628;
frost$core$String* _2631;
frost$core$Object* _2634;
frost$core$String* _2637;
frost$core$Int _2638;
frost$core$Object* _2639;
$fn152 _2642;
frost$core$String* _2643;
frost$core$String* _2644;
frost$core$Object* _2645;
frost$core$Object* _2647;
frost$core$Object* _2649;
frost$core$String* _2652;
frost$core$Int _2653;
frost$core$Object* _2654;
$fn153 _2657;
frost$core$String* _2658;
frost$core$String* _2659;
frost$core$Object* _2660;
frost$core$Object* _2662;
frost$core$Object* _2664;
frost$core$String* _2667;
frost$core$String* _2668;
frost$core$String* _2669;
frost$core$String* _2670;
frost$core$Object* _2680;
frost$core$Object* _2682;
frost$core$Object* _2684;
frost$core$Object* _2686;
frost$core$Object* _2688;
frost$core$Object* _2690;
frost$core$Object* _2692;
frost$core$Object* _2694;
frost$core$Object* _2696;
frost$core$Object* _2698;
frost$core$String* _2700;
frost$core$Object* _2701;
frost$core$String* _2704;
frost$core$Object* _2705;
org$frostlang$frostc$Compiler$Message* _2709;
frost$core$Object* _2710;
org$frostlang$frostc$Compiler* _2714;
frost$core$Object* _2715;
frost$threads$MessageQueue* _2718;
frost$core$Object* _2719;
org$frostlang$frostc$Compiler$Settings* _2722;
frost$core$Object* _2723;
org$frostlang$frostc$CodeGenerator* _2726;
frost$core$Object* _2727;
frost$core$Int _2731;
frost$core$Int _2732;
int64_t _2735;
int64_t _2736;
bool _2737;
frost$core$Bit _2738;
bool _2740;
frost$core$Int _2754;
frost$core$Int _2755;
int64_t _2756;
int64_t _2757;
bool _2758;
frost$core$Bit _2759;
bool _2760;
frost$core$Int _2763;
frost$core$String* _2764;
frost$core$String* _2765;
frost$core$Object* _2775;
frost$core$Object* _2777;
frost$core$Int _2782;
frost$core$Int _2783;
int64_t _2786;
int64_t _2787;
bool _2788;
frost$core$Bit _2789;
bool _2791;
org$frostlang$frostc$Main$Format$nullable _2794;
bool _2795;
frost$core$Bit _2796;
bool _2797;
frost$core$Int _2799;
org$frostlang$frostc$Main$Format _2802;
frost$core$Int _2803;
frost$core$Int _2804;
int64_t _2807;
int64_t _2808;
bool _2809;
frost$core$Bit _2810;
bool _2812;
frost$collections$Array* _2815;
frost$collections$Array* _2816;
frost$io$File* _2817;
bool _2818;
frost$core$Bit _2819;
bool _2820;
frost$core$Int _2822;
frost$io$File* _2825;
frost$io$File* _2830;
frost$core$String** _2831;
frost$core$String* _2832;
frost$core$String* _2833;
frost$core$Object* _2835;
frost$core$String* _2837;
frost$core$Object* _2838;
frost$core$Object* _2841;
frost$core$Object* _2843;
frost$core$String* _2846;
bool _2847;
frost$core$Bit _2848;
bool _2849;
frost$core$Object* _2852;
frost$core$String* _2854;
frost$core$Object* _2855;
frost$core$Object* _2859;
frost$io$File* _2863;
frost$core$String* _2864;
bool _2865;
frost$core$Bit _2866;
bool _2867;
frost$core$Int _2869;
frost$core$String* _2872;
frost$io$File* _2874;
frost$core$Object* _2875;
frost$core$Object* _2877;
frost$core$String* _2879;
frost$core$Object* _2880;
frost$core$Object* _2884;
frost$io$File* _2887;
bool _2888;
frost$core$Bit _2889;
bool _2890;
frost$core$Int _2892;
frost$io$File* _2895;
frost$core$String* _2898;
frost$core$Object* _2900;
frost$core$String* _2902;
frost$core$Object* _2903;
frost$core$Object* _2906;
frost$core$String* _2909;
frost$core$String$Index$nullable _2910;
frost$core$String$Index$nullable _2913;
bool _2914;
frost$core$Bit _2915;
bool _2916;
frost$core$String* _2919;
frost$core$Object* _2920;
frost$core$String* _2922;
frost$core$Object* _2923;
frost$core$Object* _2927;
frost$core$String* _2931;
frost$core$String$Index$nullable _2932;
frost$core$Bit _2933;
frost$core$Range$LTfrost$core$String$Index$Q$GT _2934;
frost$core$String* _2935;
frost$core$Object* _2936;
frost$core$Object* _2938;
frost$core$String* _2940;
frost$core$Object* _2941;
frost$core$Object* _2945;
frost$core$String* _2948;
frost$core$String* _2949;
frost$io$File* _2950;
frost$core$Object* _2951;
frost$core$Object* _2953;
frost$core$Object* _2955;
frost$core$Object* _2957;
frost$core$String* _2959;
frost$core$Object* _2960;
frost$core$Object* _2963;
frost$io$File* _2965;
frost$core$Object* _2966;
frost$io$File* _2970;
bool _2971;
frost$core$Bit _2972;
bool _2973;
frost$core$Int _2975;
frost$io$File* _2978;
frost$core$Bit _2979;
frost$io$File* _2980;
frost$core$Object* _2981;
frost$core$Object* _2983;
frost$core$Int _2986;
int64_t _2989;
int64_t _2990;
bool _2991;
frost$core$Bit _2992;
bool _2994;
frost$io$File* _2997;
bool _2998;
frost$core$Bit _2999;
bool _3000;
frost$core$Int _3002;
frost$io$File* _3005;
frost$io$File* _3010;
frost$core$String** _3011;
frost$core$String* _3012;
frost$core$String* _3013;
frost$core$Object* _3015;
frost$core$String* _3017;
frost$core$Object* _3018;
frost$core$Object* _3021;
frost$core$Object* _3023;
frost$core$String* _3026;
bool _3027;
frost$core$Bit _3028;
bool _3029;
frost$core$Object* _3032;
frost$core$String* _3034;
frost$core$Object* _3035;
frost$core$Object* _3039;
frost$io$File* _3043;
frost$core$String* _3044;
bool _3045;
frost$core$Bit _3046;
bool _3047;
frost$core$Int _3049;
frost$core$String* _3052;
frost$io$File* _3054;
frost$core$Object* _3055;
frost$core$Object* _3057;
frost$core$String* _3059;
frost$core$Object* _3060;
frost$core$Object* _3064;
frost$io$File* _3067;
bool _3068;
frost$core$Bit _3069;
bool _3070;
frost$core$Int _3072;
frost$io$File* _3075;
frost$core$String* _3078;
frost$core$Object* _3080;
frost$core$String* _3082;
frost$core$Object* _3083;
frost$core$Object* _3086;
frost$core$String* _3089;
frost$core$String$Index$nullable _3090;
frost$core$String$Index$nullable _3093;
bool _3094;
frost$core$Bit _3095;
bool _3096;
frost$core$String* _3099;
frost$core$Object* _3100;
frost$core$String* _3102;
frost$core$Object* _3103;
frost$core$Object* _3107;
frost$core$String* _3111;
frost$core$String$Index$nullable _3112;
frost$core$Bit _3113;
frost$core$Range$LTfrost$core$String$Index$Q$GT _3114;
frost$core$String* _3115;
frost$core$Object* _3116;
frost$core$Object* _3118;
frost$core$String* _3120;
frost$core$Object* _3121;
frost$core$Object* _3125;
frost$core$String* _3128;
frost$core$String* _3129;
frost$io$File* _3130;
frost$core$Object* _3131;
frost$core$Object* _3133;
frost$core$Object* _3135;
frost$core$Object* _3137;
frost$core$String* _3139;
frost$core$Object* _3140;
frost$core$Object* _3143;
frost$io$File* _3145;
frost$core$Object* _3146;
frost$io$File* _3150;
bool _3151;
frost$core$Bit _3152;
bool _3153;
frost$core$Int _3155;
frost$io$File* _3158;
frost$core$Bit _3159;
frost$io$File* _3160;
frost$core$Object* _3161;
frost$core$Object* _3163;
frost$io$File* _3216;
frost$core$Object* _3217;
frost$core$String* _3220;
frost$core$Object* _3221;
frost$io$File* _3224;
frost$core$Object* _3225;
frost$collections$Array* _3228;
frost$core$Object* _3229;
frost$collections$Array* _3232;
frost$core$Object* _3233;
frost$collections$Array* _3236;
frost$core$Object* _3237;
frost$collections$Array* _3240;
frost$core$Object* _3241;
org$frostlang$frostc$Main$Arguments* _3244;
frost$core$Object* _3245;
frost$core$Int _3169;
frost$core$Int _3170;
int64_t _3173;
int64_t _3174;
bool _3175;
frost$core$Bit _3176;
bool _3178;
frost$core$Int _3193;
frost$core$String* _3194;
frost$core$String* _3195;
frost$core$Object* _3205;
frost$core$Object* _3207;
frost$core$Int _3211;
frost$core$Int _3213;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:164
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:165
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:166
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:167
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:168
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:169
*(&local5) = ((frost$io$File*) NULL);
_66 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_66);
_68 = *(&local5);
_69 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_69);
*(&local5) = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:170
_73 = (frost$core$Int) {3u};
*(&local6) = _73;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:171
_76 = (frost$core$Int) {3u};
*(&local7) = _76;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:172
*(&local8) = ((org$frostlang$frostc$Main$Format$nullable) { .nonnull = false });
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:173
*(&local9) = ((frost$core$String*) NULL);
_82 = ((frost$core$Object*) ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_82);
_84 = *(&local9);
_85 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_85);
*(&local9) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:174
_89 = (frost$core$Bit) {true};
*(&local10) = _89;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:175
goto block1;
block1:;
_93 = *(&local0);
_94 = ($fn154) _93->$class->vtable[2];
_95 = _94(_93);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:175:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_98 = _95.value;
_99 = !_98;
_100 = (frost$core$Bit) {_99};
_102 = _100.value;
if (_102) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:176
_105 = *(&local0);
_106 = ($fn155) _105->$class->vtable[3];
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:177
_118 = *(&local11);
_119 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_118, &$s156);
_120 = _119.value;
if (_120) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:179
*(&local12) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:180
_125 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String(_125, &$s157);
*(&local13) = ((frost$io$File*) NULL);
_128 = ((frost$core$Object*) _125);
frost$core$Frost$ref$frost$core$Object$Q(_128);
_130 = *(&local13);
_131 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_131);
*(&local13) = _125;
_134 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_134);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:181
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
_163 = ($fn158) _137->$class->vtable[17];
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:182
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:185
_208 = *(&local12);
_209 = ((frost$core$Object*) _208);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:185:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_212 = ($fn159) _209->$class->vtable[0];
_213 = _212(_209);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_213);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_220 = ((frost$core$Object*) _213);
frost$core$Frost$unref$frost$core$Object$Q(_220);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:186
_224 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_224);
_226 = (frost$core$Int) {186u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s160, _226, &$s161);
abort(); // unreachable
block7:;
_234 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_118, &$s162);
_235 = _234.value;
if (_235) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:190
_238 = *(&local5);
_239 = _238 != NULL;
_240 = (frost$core$Bit) {_239};
_241 = _240.value;
if (_241) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:191
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:191:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s163);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s164);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:192
_254 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_254);
_256 = (frost$core$Int) {192u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s165, _256, &$s166);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:194
_260 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_261 = *(&local0);
_262 = ($fn167) _261->$class->vtable[4];
_263 = _262(_261, &$s168);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:195
*(&local14) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:196
_279 = *(&local5);
_280 = _279 != NULL;
_281 = (frost$core$Bit) {_280};
_282 = _281.value;
if (_282) goto block24; else goto block25;
block25:;
_284 = (frost$core$Int) {196u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s169, _284, &$s170);
abort(); // unreachable
block24:;
_287 = _279;
// begin inline call to function frost.io.File.get_parent():frost.io.File? from Main.frost:196:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_290 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_287, &$s171);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s172, _329, &$s173);
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
_352 = (frost$core$Int) {196u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s174, _352, &$s175);
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
_365 = (frost$core$Int) {196u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s176, _365, &$s177);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:199
_389 = *(&local14);
_390 = ((frost$core$Object*) _389);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:199:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_393 = ($fn178) _390->$class->vtable[0];
_394 = _393(_390);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_394);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_401 = ((frost$core$Object*) _394);
frost$core$Frost$unref$frost$core$Object$Q(_401);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:200
_405 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_405);
_407 = (frost$core$Int) {200u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s179, _407, &$s180);
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
_415 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_118, &$s181);
_416 = _415.value;
if (_416) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:204
_419 = *(&local0);
_420 = ($fn182) _419->$class->vtable[4];
_421 = _420(_419, &$s183);
*(&local17) = ((frost$core$String*) NULL);
_423 = ((frost$core$Object*) _421);
frost$core$Frost$ref$frost$core$Object$Q(_423);
_425 = *(&local17);
_426 = ((frost$core$Object*) _425);
frost$core$Frost$unref$frost$core$Object$Q(_426);
*(&local17) = _421;
_429 = ((frost$core$Object*) _421);
frost$core$Frost$unref$frost$core$Object$Q(_429);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:205
_432 = *(&local17);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Main.frost:205:40
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s184, _449, &$s185);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:206
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
_478 = (frost$core$Int) {206u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s186, _478, &$s187);
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
_494 = (frost$core$Int) {206u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s188, _494, &$s189);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:207
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:207:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s190);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s191);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:208
_516 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_516);
_518 = (frost$core$Int) {208u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s192, _518, &$s193);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:210
_522 = *(&local20);
_523 = _522.nonnull;
_524 = (frost$core$Bit) {_523};
_525 = _524.value;
if (_525) goto block57; else goto block58;
block58:;
_527 = (frost$core$Int) {210u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s194, _527, &$s195);
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
_537 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_118, &$s196);
_538 = _537.value;
if (_538) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:213
_541 = *(&local0);
_542 = ($fn197) _541->$class->vtable[4];
_543 = _542(_541, &$s198);
*(&local21) = ((frost$core$String*) NULL);
_545 = ((frost$core$Object*) _543);
frost$core$Frost$ref$frost$core$Object$Q(_545);
_547 = *(&local21);
_548 = ((frost$core$Object*) _547);
frost$core$Frost$unref$frost$core$Object$Q(_548);
*(&local21) = _543;
_551 = ((frost$core$Object*) _543);
frost$core$Frost$unref$frost$core$Object$Q(_551);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:214
_554 = *(&local21);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Main.frost:214:40
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s199, _571, &$s200);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:215
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
_600 = (frost$core$Int) {215u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s201, _600, &$s202);
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
_616 = (frost$core$Int) {215u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s203, _616, &$s204);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:216
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:216:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s205);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s206);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:217
_638 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_638);
_640 = (frost$core$Int) {217u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s207, _640, &$s208);
abort(); // unreachable
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:219
_644 = *(&local24);
_645 = _644.nonnull;
_646 = (frost$core$Bit) {_645};
_647 = _646.value;
if (_647) goto block77; else goto block78;
block78:;
_649 = (frost$core$Int) {219u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s209, _649, &$s210);
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
_659 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_118, &$s211);
_660 = _659.value;
if (_660) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:222
_663 = *(&local8);
_664 = _663.nonnull;
_665 = (frost$core$Bit) {_664};
_666 = _665.value;
if (_666) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:223
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:223:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s212);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s213);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:224
_679 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_679);
_681 = (frost$core$Int) {224u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s214, _681, &$s215);
abort(); // unreachable
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:226
_685 = *(&local0);
_686 = ($fn216) _685->$class->vtable[4];
_687 = _686(_685, &$s217);
*(&local25) = ((frost$core$String*) NULL);
_689 = ((frost$core$Object*) _687);
frost$core$Frost$ref$frost$core$Object$Q(_689);
_691 = *(&local25);
_692 = ((frost$core$Object*) _691);
frost$core$Frost$unref$frost$core$Object$Q(_692);
*(&local25) = _687;
_695 = ((frost$core$Object*) _687);
frost$core$Frost$unref$frost$core$Object$Q(_695);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:227
_698 = *(&local25);
_699 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_698, &$s218);
_700 = _699.value;
if (_700) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:228
_703 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:228:55
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
_715 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_698, &$s219);
_716 = _715.value;
if (_716) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:229
_719 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:229:55
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
_731 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_698, &$s220);
_732 = _731.value;
if (_732) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:230
_735 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:230:55
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
_747 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_698, &$s221);
_748 = _747.value;
if (_748) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:231
_751 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:231:55
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
_763 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_698, &$s222);
_764 = _763.value;
if (_764) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:232
_767 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:232:55
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
_779 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_698, &$s223);
_780 = _779.value;
if (_780) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:233
_783 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:233:55
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
_795 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_698, &$s224);
_796 = _795.value;
if (_796) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:234
_799 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:234:55
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:236
_812 = *(&local25);
_813 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s225, _812);
_814 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_813, &$s226);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:236:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_814);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s227);
_824 = ((frost$core$Object*) _814);
frost$core$Frost$unref$frost$core$Object$Q(_824);
_826 = ((frost$core$Object*) _813);
frost$core$Frost$unref$frost$core$Object$Q(_826);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:237
_829 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_829);
_831 = (frost$core$Int) {237u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s228, _831, &$s229);
abort(); // unreachable
block85:;
_834 = *(&local25);
_835 = ((frost$core$Object*) _834);
frost$core$Frost$unref$frost$core$Object$Q(_835);
*(&local25) = ((frost$core$String*) NULL);
goto block5;
block80:;
_839 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_118, &$s230);
_840 = _839.value;
if (_840) goto block109; else goto block110;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:242
_843 = *(&local2);
_844 = _843;
_845 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_846 = *(&local0);
_847 = ($fn231) _846->$class->vtable[4];
_848 = _847(_846, &$s232);
frost$io$File$init$frost$core$String(_845, _848);
_850 = ((frost$core$Object*) _845);
frost$collections$Array$add$frost$collections$Array$T(_844, _850);
_852 = ((frost$core$Object*) _848);
frost$core$Frost$unref$frost$core$Object$Q(_852);
_854 = ((frost$core$Object*) _845);
frost$core$Frost$unref$frost$core$Object$Q(_854);
goto block5;
block110:;
_857 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_118, &$s233);
_858 = _857.value;
if (_858) goto block111; else goto block112;
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:245
_861 = *(&local3);
_862 = _861;
_863 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_864 = *(&local0);
_865 = ($fn234) _864->$class->vtable[4];
_866 = _865(_864, &$s235);
frost$io$File$init$frost$core$String(_863, _866);
_868 = ((frost$core$Object*) _863);
frost$collections$Array$add$frost$collections$Array$T(_862, _868);
_870 = ((frost$core$Object*) _866);
frost$core$Frost$unref$frost$core$Object$Q(_870);
_872 = ((frost$core$Object*) _863);
frost$core$Frost$unref$frost$core$Object$Q(_872);
goto block5;
block112:;
_875 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_118, &$s236);
_876 = _875.value;
if (_876) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:248
_879 = *(&local4);
_880 = _879;
_881 = *(&local0);
_882 = ($fn237) _881->$class->vtable[4];
_883 = _882(_881, &$s238);
_884 = ((frost$core$Object*) _883);
frost$collections$Array$add$frost$collections$Array$T(_880, _884);
_886 = ((frost$core$Object*) _883);
frost$core$Frost$unref$frost$core$Object$Q(_886);
goto block5;
block114:;
_889 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_118, &$s239);
_890 = _889.value;
if (_890) goto block115; else goto block116;
block115:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:251
_893 = *(&local0);
_894 = ($fn240) _893->$class->vtable[4];
_895 = _894(_893, &$s241);
_896 = _895;
_897 = ((frost$core$Object*) _896);
frost$core$Frost$ref$frost$core$Object$Q(_897);
_899 = *(&local9);
_900 = ((frost$core$Object*) _899);
frost$core$Frost$unref$frost$core$Object$Q(_900);
*(&local9) = _896;
_903 = ((frost$core$Object*) _895);
frost$core$Frost$unref$frost$core$Object$Q(_903);
goto block5;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:254
_907 = *(&local11);
_908 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(_907, &$s242);
_909 = _908.value;
if (_909) goto block117; else goto block119;
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:255
_912 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_913 = *(&local11);
frost$io$File$init$frost$core$String(_912, _913);
*(&local40) = ((frost$io$File*) NULL);
_916 = ((frost$core$Object*) _912);
frost$core$Frost$ref$frost$core$Object$Q(_916);
_918 = *(&local40);
_919 = ((frost$core$Object*) _918);
frost$core$Frost$unref$frost$core$Object$Q(_919);
*(&local40) = _912;
_922 = ((frost$core$Object*) _912);
frost$core$Frost$unref$frost$core$Object$Q(_922);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:256
_925 = *(&local1);
_926 = _925;
_927 = *(&local40);
_928 = ((frost$core$Object*) _927);
frost$collections$Array$add$frost$collections$Array$T(_926, _928);
_930 = *(&local40);
_931 = ((frost$core$Object*) _930);
frost$core$Frost$unref$frost$core$Object$Q(_931);
*(&local40) = ((frost$io$File*) NULL);
goto block5;
block119:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:259
_937 = *(&local11);
_938 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s243, _937);
_939 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_938, &$s244);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:259:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_939);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s245);
_949 = ((frost$core$Object*) _939);
frost$core$Frost$unref$frost$core$Object$Q(_949);
_951 = ((frost$core$Object*) _938);
frost$core$Frost$unref$frost$core$Object$Q(_951);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:260
_954 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_954);
_956 = (frost$core$Int) {260u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s246, _956, &$s247);
abort(); // unreachable
block5:;
_960 = *(&local11);
_961 = ((frost$core$Object*) _960);
frost$core$Frost$unref$frost$core$Object$Q(_961);
*(&local11) = ((frost$core$String*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:265
_966 = *(&local8);
_967 = !_966.nonnull;
_968 = (frost$core$Bit) {_967};
_969 = _968.value;
if (_969) goto block122; else goto block124;
block124:;
_971 = *(&local8);
_972 = _971.nonnull;
_973 = (frost$core$Bit) {_972};
_974 = _973.value;
if (_974) goto block125; else goto block126;
block126:;
_976 = (frost$core$Int) {265u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s248, _976, &$s249);
abort(); // unreachable
block125:;
frost$core$Equatable* $tmp250;
if (_971.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp251;
    $tmp251 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp251->value = ((org$frostlang$frostc$Main$Format) _971.value);
    $tmp250 = ((frost$core$Equatable*) $tmp251);
}
else {
    $tmp250 = NULL;
}
_979 = $tmp250;
_980 = _979;
_981 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:265:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_984 = &(&local42)->$rawValue;
*_984 = _981;
_986 = *(&local42);
*(&local41) = _986;
_989 = *(&local41);
org$frostlang$frostc$Main$Format$wrapper* $tmp252;
$tmp252 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp252->value = _989;
_990 = ((frost$core$Equatable*) $tmp252);
ITable* $tmp253 = _980->$class->itable;
while ($tmp253->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp253 = $tmp253->next;
}
_991 = $tmp253->methods[1];
_992 = _991(_980, _990);
_993 = _992.value;
_994 = ((frost$core$Object*) _990);
frost$core$Frost$unref$frost$core$Object$Q(_994);
_996 = ((frost$core$Object*) _979);
frost$core$Frost$unref$frost$core$Object$Q(_996);
if (_993) goto block122; else goto block123;
block122:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:266
_1000 = *(&local2);
_1001 = _1000;
_1002 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_1003 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$io$File$init$frost$core$String(_1002, _1003);
_1005 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1002, &$s254);
_1006 = ((frost$core$Object*) _1005);
frost$collections$Array$add$frost$collections$Array$T(_1001, _1006);
_1008 = ((frost$core$Object*) _1005);
frost$core$Frost$unref$frost$core$Object$Q(_1008);
_1010 = ((frost$core$Object*) _1003);
frost$core$Frost$unref$frost$core$Object$Q(_1010);
_1012 = ((frost$core$Object*) _1002);
frost$core$Frost$unref$frost$core$Object$Q(_1012);
goto block123;
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:268
_1016 = *(&local2);
_1017 = _1016;
_1018 = &param0->frostHome;
_1019 = *_1018;
_1020 = ((frost$core$Object*) _1019);
frost$collections$Array$add$frost$collections$Array$T(_1017, _1020);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:269
_1023 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_1024 = org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String(_1023, _1024);
*(&local43) = ((frost$io$File*) NULL);
_1027 = ((frost$core$Object*) _1023);
frost$core$Frost$ref$frost$core$Object$Q(_1027);
_1029 = *(&local43);
_1030 = ((frost$core$Object*) _1029);
frost$core$Frost$unref$frost$core$Object$Q(_1030);
*(&local43) = _1023;
_1033 = ((frost$core$Object*) _1024);
frost$core$Frost$unref$frost$core$Object$Q(_1033);
_1035 = ((frost$core$Object*) _1023);
frost$core$Frost$unref$frost$core$Object$Q(_1035);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:270
_1038 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String(_1038, &$s255);
_1040 = ((frost$core$Object*) _1038);
frost$core$Frost$ref$frost$core$Object$Q(_1040);
_1042 = &param0->clang;
_1043 = *_1042;
_1044 = ((frost$core$Object*) _1043);
frost$core$Frost$unref$frost$core$Object$Q(_1044);
_1046 = &param0->clang;
*_1046 = _1038;
_1048 = ((frost$core$Object*) _1038);
frost$core$Frost$unref$frost$core$Object$Q(_1048);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:271
_1051 = *(&local1);
_1052 = ((frost$collections$CollectionView*) _1051);
ITable* $tmp256 = _1052->$class->itable;
while ($tmp256->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp256 = $tmp256->next;
}
_1053 = $tmp256->methods[0];
_1054 = _1053(_1052);
_1055 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:271:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1058 = _1054.value;
_1059 = _1055.value;
_1060 = _1058 == _1059;
_1061 = (frost$core$Bit) {_1060};
_1063 = _1061.value;
if (_1063) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:272
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:272:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s257);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s258);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:273
_1076 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1076);
_1078 = (frost$core$Int) {273u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s259, _1078, &$s260);
abort(); // unreachable
block129:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:275
_1082 = *(&local8);
_1083 = !_1082.nonnull;
_1084 = (frost$core$Bit) {_1083};
_1085 = _1084.value;
if (_1085) goto block133; else goto block134;
block133:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:276
_1088 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:276:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_1091 = &(&local45)->$rawValue;
*_1091 = _1088;
_1093 = *(&local45);
*(&local44) = _1093;
_1096 = *(&local44);
_1097 = ((org$frostlang$frostc$Main$Format$nullable) { _1096, true });
*(&local8) = _1097;
goto block134;
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:278
_1101 = *(&local5);
_1102 = _1101 == NULL;
_1103 = (frost$core$Bit) {_1102};
_1104 = _1103.value;
if (_1104) goto block136; else goto block137;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:279
_1107 = *(&local1);
_1108 = ((frost$collections$CollectionView*) _1107);
ITable* $tmp261 = _1108->$class->itable;
while ($tmp261->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp261 = $tmp261->next;
}
_1109 = $tmp261->methods[0];
_1110 = _1109(_1108);
_1111 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:279:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1114 = _1110.value;
_1115 = _1111.value;
_1116 = _1114 == _1115;
_1117 = (frost$core$Bit) {_1116};
_1119 = _1117.value;
if (_1119) goto block138; else goto block140;
block138:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:280
*(&local46) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:281
_1124 = *(&local8);
_1125 = _1124.nonnull;
_1126 = (frost$core$Bit) {_1125};
_1127 = _1126.value;
if (_1127) goto block142; else goto block143;
block143:;
_1129 = (frost$core$Int) {281u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s262, _1129, &$s263);
abort(); // unreachable
block142:;
_1132 = ((org$frostlang$frostc$Main$Format) _1124.value);
_1133 = _1132.$rawValue;
_1134 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:282:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1137 = _1133.value;
_1138 = _1134.value;
_1139 = _1137 == _1138;
_1140 = (frost$core$Bit) {_1139};
_1142 = _1140.value;
if (_1142) goto block145; else goto block146;
block145:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:282
_1145 = ((frost$core$Object*) &$s264);
frost$core$Frost$ref$frost$core$Object$Q(_1145);
_1147 = *(&local46);
_1148 = ((frost$core$Object*) _1147);
frost$core$Frost$unref$frost$core$Object$Q(_1148);
*(&local46) = &$s265;
goto block144;
block146:;
_1152 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:283:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1155 = _1133.value;
_1156 = _1152.value;
_1157 = _1155 == _1156;
_1158 = (frost$core$Bit) {_1157};
_1160 = _1158.value;
if (_1160) goto block148; else goto block149;
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:283
_1163 = ((frost$core$Object*) &$s266);
frost$core$Frost$ref$frost$core$Object$Q(_1163);
_1165 = *(&local46);
_1166 = ((frost$core$Object*) _1165);
frost$core$Frost$unref$frost$core$Object$Q(_1166);
*(&local46) = &$s267;
goto block144;
block149:;
_1170 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:284:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1173 = _1133.value;
_1174 = _1170.value;
_1175 = _1173 == _1174;
_1176 = (frost$core$Bit) {_1175};
_1178 = _1176.value;
if (_1178) goto block151; else goto block152;
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:284
_1181 = ((frost$core$Object*) &$s268);
frost$core$Frost$ref$frost$core$Object$Q(_1181);
_1183 = *(&local46);
_1184 = ((frost$core$Object*) _1183);
frost$core$Frost$unref$frost$core$Object$Q(_1184);
*(&local46) = &$s269;
goto block144;
block152:;
_1188 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:285:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1191 = _1133.value;
_1192 = _1188.value;
_1193 = _1191 == _1192;
_1194 = (frost$core$Bit) {_1193};
_1196 = _1194.value;
if (_1196) goto block154; else goto block155;
block154:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:285
_1199 = ((frost$core$Object*) &$s270);
frost$core$Frost$ref$frost$core$Object$Q(_1199);
_1201 = *(&local46);
_1202 = ((frost$core$Object*) _1201);
frost$core$Frost$unref$frost$core$Object$Q(_1202);
*(&local46) = &$s271;
goto block144;
block155:;
_1206 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:286:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1209 = _1133.value;
_1210 = _1206.value;
_1211 = _1209 == _1210;
_1212 = (frost$core$Bit) {_1211};
_1214 = _1212.value;
if (_1214) goto block157; else goto block158;
block157:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:286
_1217 = ((frost$core$Object*) &$s272);
frost$core$Frost$ref$frost$core$Object$Q(_1217);
_1219 = *(&local46);
_1220 = ((frost$core$Object*) _1219);
frost$core$Frost$unref$frost$core$Object$Q(_1220);
*(&local46) = &$s273;
goto block144;
block158:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:288
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:288:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s274);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s275);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:290
_1235 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1235);
_1237 = (frost$core$Int) {290u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s276, _1237, &$s277);
abort(); // unreachable
block144:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:293
_1241 = *(&local1);
_1242 = _1241;
_1243 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Main.frost:293:35
_1245 = (frost$core$Int) {0u};
_1246 = _1243.value;
_1247 = _1245.value;
_1248 = _1246 >= _1247;
_1249 = (frost$core$Bit) {_1248};
_1250 = _1249.value;
if (_1250) goto block165; else goto block164;
block165:;
_1252 = ((frost$collections$CollectionView*) _1242);
ITable* $tmp278 = _1252->$class->itable;
while ($tmp278->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp278 = $tmp278->next;
}
_1253 = $tmp278->methods[0];
_1254 = _1253(_1252);
_1255 = _1243.value;
_1256 = _1254.value;
_1257 = _1255 < _1256;
_1258 = (frost$core$Bit) {_1257};
_1259 = _1258.value;
if (_1259) goto block163; else goto block164;
block164:;
_1261 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s279, _1261, &$s280);
abort(); // unreachable
block163:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_1265 = &_1242->data;
_1266 = *_1265;
_1267 = frost$core$Int64$init$frost$core$Int(_1243);
_1268 = _1267.value;
_1269 = _1266[_1268];
_1270 = _1269;
frost$core$Frost$ref$frost$core$Object$Q(_1270);
_1273 = ((frost$io$File*) _1269);
_1274 = *(&local46);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:293:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:184
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:184:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_1279 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1273, &$s281);
_1280 = &_1279->path;
_1281 = *_1280;
_1282 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_1281);
*(&local48) = ((frost$core$String*) NULL);
_1284 = ((frost$core$Object*) _1282);
frost$core$Frost$ref$frost$core$Object$Q(_1284);
_1286 = *(&local48);
_1287 = ((frost$core$Object*) _1286);
frost$core$Frost$unref$frost$core$Object$Q(_1287);
*(&local48) = _1282;
_1290 = ((frost$core$Object*) _1282);
frost$core$Frost$unref$frost$core$Object$Q(_1290);
_1292 = ((frost$core$Object*) _1279);
frost$core$Frost$unref$frost$core$Object$Q(_1292);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_1295 = *(&local48);
_1296 = _1295 == NULL;
_1297 = (frost$core$Bit) {_1296};
_1298 = _1297.value;
if (_1298) goto block168; else goto block169;
block168:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_1301 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1301);
_1303 = *(&local48);
_1304 = ((frost$core$Object*) _1303);
frost$core$Frost$unref$frost$core$Object$Q(_1304);
*(&local48) = ((frost$core$String*) NULL);
*(&local47) = ((frost$io$File*) NULL);
_1308 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1308);
goto block167;
block169:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_1312 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_1313 = *(&local48);
_1314 = _1313 != NULL;
_1315 = (frost$core$Bit) {_1314};
_1316 = _1315.value;
if (_1316) goto block170; else goto block171;
block171:;
_1318 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s282, _1318, &$s283);
abort(); // unreachable
block170:;
_1321 = _1313;
frost$io$File$init$frost$core$String(_1312, _1321);
_1323 = _1312;
_1324 = ((frost$core$Object*) _1323);
frost$core$Frost$ref$frost$core$Object$Q(_1324);
_1326 = ((frost$core$Object*) _1312);
frost$core$Frost$unref$frost$core$Object$Q(_1326);
_1328 = *(&local48);
_1329 = ((frost$core$Object*) _1328);
frost$core$Frost$unref$frost$core$Object$Q(_1329);
*(&local48) = ((frost$core$String*) NULL);
*(&local47) = _1323;
_1333 = ((frost$core$Object*) _1323);
frost$core$Frost$ref$frost$core$Object$Q(_1333);
goto block167;
block167:;
_1336 = *(&local47);
_1337 = _1336 != NULL;
_1338 = (frost$core$Bit) {_1337};
_1339 = _1338.value;
if (_1339) goto block172; else goto block173;
block173:;
_1341 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s284, _1341, &$s285);
abort(); // unreachable
block172:;
_1344 = _1336;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:184:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
_1347 = frost$io$File$get_name$R$frost$core$String(_1273);
*(&local50) = ((frost$core$String*) NULL);
_1349 = ((frost$core$Object*) _1347);
frost$core$Frost$ref$frost$core$Object$Q(_1349);
_1351 = *(&local50);
_1352 = ((frost$core$Object*) _1351);
frost$core$Frost$unref$frost$core$Object$Q(_1352);
*(&local50) = _1347;
_1355 = ((frost$core$Object*) _1347);
frost$core$Frost$unref$frost$core$Object$Q(_1355);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_1358 = *(&local50);
_1359 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_1358, &$s286);
*(&local51) = _1359;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_1362 = *(&local51);
_1363 = !_1362.nonnull;
_1364 = (frost$core$Bit) {_1363};
_1365 = _1364.value;
if (_1365) goto block175; else goto block176;
block175:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_1368 = *(&local50);
_1369 = ((frost$core$Object*) _1368);
frost$core$Frost$ref$frost$core$Object$Q(_1369);
_1371 = *(&local50);
_1372 = ((frost$core$Object*) _1371);
frost$core$Frost$unref$frost$core$Object$Q(_1372);
*(&local50) = ((frost$core$String*) NULL);
*(&local49) = _1368;
_1376 = ((frost$core$Object*) _1368);
frost$core$Frost$ref$frost$core$Object$Q(_1376);
goto block174;
block176:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_1380 = *(&local50);
_1381 = *(&local51);
_1382 = (frost$core$Bit) {false};
_1383 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _1381, _1382);
_1384 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_1380, _1383);
_1385 = ((frost$core$Object*) _1384);
frost$core$Frost$ref$frost$core$Object$Q(_1385);
_1387 = ((frost$core$Object*) _1384);
frost$core$Frost$unref$frost$core$Object$Q(_1387);
_1389 = *(&local50);
_1390 = ((frost$core$Object*) _1389);
frost$core$Frost$unref$frost$core$Object$Q(_1390);
*(&local50) = ((frost$core$String*) NULL);
*(&local49) = _1384;
_1394 = ((frost$core$Object*) _1384);
frost$core$Frost$ref$frost$core$Object$Q(_1394);
goto block174;
block174:;
_1397 = *(&local49);
_1398 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1397, _1274);
_1399 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1344, _1398);
_1400 = ((frost$core$Object*) _1399);
frost$core$Frost$ref$frost$core$Object$Q(_1400);
_1402 = ((frost$core$Object*) _1399);
frost$core$Frost$unref$frost$core$Object$Q(_1402);
_1404 = ((frost$core$Object*) _1398);
frost$core$Frost$unref$frost$core$Object$Q(_1404);
_1406 = ((frost$core$Object*) _1397);
frost$core$Frost$unref$frost$core$Object$Q(_1406);
_1408 = *(&local49);
_1409 = ((frost$core$Object*) _1408);
frost$core$Frost$unref$frost$core$Object$Q(_1409);
*(&local49) = ((frost$core$String*) NULL);
_1412 = ((frost$core$Object*) _1336);
frost$core$Frost$unref$frost$core$Object$Q(_1412);
_1414 = *(&local47);
_1415 = ((frost$core$Object*) _1414);
frost$core$Frost$unref$frost$core$Object$Q(_1415);
*(&local47) = ((frost$io$File*) NULL);
_1419 = _1399;
_1420 = ((frost$core$Object*) _1419);
frost$core$Frost$ref$frost$core$Object$Q(_1420);
_1422 = *(&local5);
_1423 = ((frost$core$Object*) _1422);
frost$core$Frost$unref$frost$core$Object$Q(_1423);
*(&local5) = _1419;
_1426 = ((frost$core$Object*) _1399);
frost$core$Frost$unref$frost$core$Object$Q(_1426);
_1428 = _1269;
frost$core$Frost$unref$frost$core$Object$Q(_1428);
_1430 = *(&local46);
_1431 = ((frost$core$Object*) _1430);
frost$core$Frost$unref$frost$core$Object$Q(_1431);
*(&local46) = ((frost$core$String*) NULL);
goto block137;
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:295
_1436 = *(&local8);
_1437 = _1436.nonnull;
_1438 = (frost$core$Bit) {_1437};
_1439 = _1438.value;
if (_1439) goto block180; else goto block181;
block181:;
_1441 = (frost$core$Int) {295u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s287, _1441, &$s288);
abort(); // unreachable
block180:;
frost$core$Equatable* $tmp289;
if (_1436.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp290;
    $tmp290 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp290->value = ((org$frostlang$frostc$Main$Format) _1436.value);
    $tmp289 = ((frost$core$Equatable*) $tmp290);
}
else {
    $tmp289 = NULL;
}
_1444 = $tmp289;
_1445 = _1444;
_1446 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:295:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_1449 = &(&local53)->$rawValue;
*_1449 = _1446;
_1451 = *(&local53);
*(&local52) = _1451;
_1454 = *(&local52);
org$frostlang$frostc$Main$Format$wrapper* $tmp291;
$tmp291 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp291->value = _1454;
_1455 = ((frost$core$Equatable*) $tmp291);
ITable* $tmp292 = _1445->$class->itable;
while ($tmp292->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp292 = $tmp292->next;
}
_1456 = $tmp292->methods[0];
_1457 = _1456(_1445, _1455);
_1458 = _1457.value;
_1459 = ((frost$core$Object*) _1455);
frost$core$Frost$unref$frost$core$Object$Q(_1459);
_1461 = ((frost$core$Object*) _1444);
frost$core$Frost$unref$frost$core$Object$Q(_1461);
if (_1458) goto block177; else goto block179;
block177:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:296
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:296:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s293);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s294);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:297
_1475 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1475);
_1477 = (frost$core$Int) {297u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s295, _1477, &$s296);
abort(); // unreachable
block179:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:300
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:300:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s297);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s298);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:302
_1492 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1492);
_1494 = (frost$core$Int) {302u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s299, _1494, &$s300);
abort(); // unreachable
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:305
_1500 = (frost$core$Int) {0u};
*(&local54) = _1500;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:306
_1503 = (frost$core$Int) {0u};
*(&local55) = _1503;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:308
*(&local56) = ((org$frostlang$frostc$CodeGenerator*) NULL);
_1508 = ((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1508);
_1510 = *(&local56);
_1511 = ((frost$core$Object*) _1510);
frost$core$Frost$unref$frost$core$Object$Q(_1511);
*(&local56) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:309
_1515 = *(&local8);
_1516 = _1515.nonnull;
_1517 = (frost$core$Bit) {_1516};
_1518 = _1517.value;
if (_1518) goto block187; else goto block188;
block188:;
_1520 = (frost$core$Int) {309u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s301, _1520, &$s302);
abort(); // unreachable
block187:;
_1523 = ((org$frostlang$frostc$Main$Format) _1515.value);
_1524 = _1523.$rawValue;
_1525 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:310:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1528 = _1524.value;
_1529 = _1525.value;
_1530 = _1528 == _1529;
_1531 = (frost$core$Bit) {_1530};
_1533 = _1531.value;
if (_1533) goto block190; else goto block191;
block191:;
_1535 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:310:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1538 = _1524.value;
_1539 = _1535.value;
_1540 = _1538 == _1539;
_1541 = (frost$core$Bit) {_1540};
_1543 = _1541.value;
if (_1543) goto block190; else goto block193;
block193:;
_1545 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:310:60
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1548 = _1524.value;
_1549 = _1545.value;
_1550 = _1548 == _1549;
_1551 = (frost$core$Bit) {_1550};
_1553 = _1551.value;
if (_1553) goto block190; else goto block195;
block190:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:311
*(&local57) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:312
_1558 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(sizeof(org$frostlang$frostc$LLVMCodeGenerator), (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
_1559 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
_1560 = *(&local5);
_1561 = _1560 != NULL;
_1562 = (frost$core$Bit) {_1561};
_1563 = _1562.value;
if (_1563) goto block199; else goto block200;
block200:;
_1565 = (frost$core$Int) {313u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s303, _1565, &$s304);
abort(); // unreachable
block199:;
_1568 = _1560;
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:313:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:184
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:184:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_1573 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1568, &$s305);
_1574 = &_1573->path;
_1575 = *_1574;
_1576 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_1575);
*(&local59) = ((frost$core$String*) NULL);
_1578 = ((frost$core$Object*) _1576);
frost$core$Frost$ref$frost$core$Object$Q(_1578);
_1580 = *(&local59);
_1581 = ((frost$core$Object*) _1580);
frost$core$Frost$unref$frost$core$Object$Q(_1581);
*(&local59) = _1576;
_1584 = ((frost$core$Object*) _1576);
frost$core$Frost$unref$frost$core$Object$Q(_1584);
_1586 = ((frost$core$Object*) _1573);
frost$core$Frost$unref$frost$core$Object$Q(_1586);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_1589 = *(&local59);
_1590 = _1589 == NULL;
_1591 = (frost$core$Bit) {_1590};
_1592 = _1591.value;
if (_1592) goto block203; else goto block204;
block203:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_1595 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1595);
_1597 = *(&local59);
_1598 = ((frost$core$Object*) _1597);
frost$core$Frost$unref$frost$core$Object$Q(_1598);
*(&local59) = ((frost$core$String*) NULL);
*(&local58) = ((frost$io$File*) NULL);
_1602 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1602);
goto block202;
block204:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_1606 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_1607 = *(&local59);
_1608 = _1607 != NULL;
_1609 = (frost$core$Bit) {_1608};
_1610 = _1609.value;
if (_1610) goto block205; else goto block206;
block206:;
_1612 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s306, _1612, &$s307);
abort(); // unreachable
block205:;
_1615 = _1607;
frost$io$File$init$frost$core$String(_1606, _1615);
_1617 = _1606;
_1618 = ((frost$core$Object*) _1617);
frost$core$Frost$ref$frost$core$Object$Q(_1618);
_1620 = ((frost$core$Object*) _1606);
frost$core$Frost$unref$frost$core$Object$Q(_1620);
_1622 = *(&local59);
_1623 = ((frost$core$Object*) _1622);
frost$core$Frost$unref$frost$core$Object$Q(_1623);
*(&local59) = ((frost$core$String*) NULL);
*(&local58) = _1617;
_1627 = ((frost$core$Object*) _1617);
frost$core$Frost$ref$frost$core$Object$Q(_1627);
goto block202;
block202:;
_1630 = *(&local58);
_1631 = _1630 != NULL;
_1632 = (frost$core$Bit) {_1631};
_1633 = _1632.value;
if (_1633) goto block207; else goto block208;
block208:;
_1635 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s308, _1635, &$s309);
abort(); // unreachable
block207:;
_1638 = _1630;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:184:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
_1641 = frost$io$File$get_name$R$frost$core$String(_1568);
*(&local61) = ((frost$core$String*) NULL);
_1643 = ((frost$core$Object*) _1641);
frost$core$Frost$ref$frost$core$Object$Q(_1643);
_1645 = *(&local61);
_1646 = ((frost$core$Object*) _1645);
frost$core$Frost$unref$frost$core$Object$Q(_1646);
*(&local61) = _1641;
_1649 = ((frost$core$Object*) _1641);
frost$core$Frost$unref$frost$core$Object$Q(_1649);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_1652 = *(&local61);
_1653 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_1652, &$s310);
*(&local62) = _1653;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_1656 = *(&local62);
_1657 = !_1656.nonnull;
_1658 = (frost$core$Bit) {_1657};
_1659 = _1658.value;
if (_1659) goto block210; else goto block211;
block210:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_1662 = *(&local61);
_1663 = ((frost$core$Object*) _1662);
frost$core$Frost$ref$frost$core$Object$Q(_1663);
_1665 = *(&local61);
_1666 = ((frost$core$Object*) _1665);
frost$core$Frost$unref$frost$core$Object$Q(_1666);
*(&local61) = ((frost$core$String*) NULL);
*(&local60) = _1662;
_1670 = ((frost$core$Object*) _1662);
frost$core$Frost$ref$frost$core$Object$Q(_1670);
goto block209;
block211:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_1674 = *(&local61);
_1675 = *(&local62);
_1676 = (frost$core$Bit) {false};
_1677 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _1675, _1676);
_1678 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_1674, _1677);
_1679 = ((frost$core$Object*) _1678);
frost$core$Frost$ref$frost$core$Object$Q(_1679);
_1681 = ((frost$core$Object*) _1678);
frost$core$Frost$unref$frost$core$Object$Q(_1681);
_1683 = *(&local61);
_1684 = ((frost$core$Object*) _1683);
frost$core$Frost$unref$frost$core$Object$Q(_1684);
*(&local61) = ((frost$core$String*) NULL);
*(&local60) = _1678;
_1688 = ((frost$core$Object*) _1678);
frost$core$Frost$ref$frost$core$Object$Q(_1688);
goto block209;
block209:;
_1691 = *(&local60);
_1692 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1691, &$s311);
_1693 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1638, _1692);
_1694 = ((frost$core$Object*) _1693);
frost$core$Frost$ref$frost$core$Object$Q(_1694);
_1696 = ((frost$core$Object*) _1693);
frost$core$Frost$unref$frost$core$Object$Q(_1696);
_1698 = ((frost$core$Object*) _1692);
frost$core$Frost$unref$frost$core$Object$Q(_1698);
_1700 = ((frost$core$Object*) _1691);
frost$core$Frost$unref$frost$core$Object$Q(_1700);
_1702 = *(&local60);
_1703 = ((frost$core$Object*) _1702);
frost$core$Frost$unref$frost$core$Object$Q(_1703);
*(&local60) = ((frost$core$String*) NULL);
_1706 = ((frost$core$Object*) _1630);
frost$core$Frost$unref$frost$core$Object$Q(_1706);
_1708 = *(&local58);
_1709 = ((frost$core$Object*) _1708);
frost$core$Frost$unref$frost$core$Object$Q(_1709);
*(&local58) = ((frost$io$File*) NULL);
_1713 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(_1693);
_1714 = _1713;
_1715 = &_1714->$rawValue;
_1716 = *_1715;
_1717 = _1716.value;
_1718 = _1717 == 0u;
if (_1718) goto block212; else goto block213;
block213:;
_1720 = &_1713->$data.$ERROR.field0;
_1721 = *_1720;
_1722 = ((frost$core$Object*) _1721);
frost$core$Frost$ref$frost$core$Object$Q(_1722);
*(&local57) = _1721;
_1725 = ((frost$core$Object*) _1713);
frost$core$Frost$unref$frost$core$Object$Q(_1725);
_1727 = ((frost$core$Object*) _1693);
frost$core$Frost$unref$frost$core$Object$Q(_1727);
_1729 = ((frost$core$Object*) _1559);
frost$core$Frost$unref$frost$core$Object$Q(_1729);
_1731 = ((frost$core$Object*) _1558);
frost$core$Frost$unref$frost$core$Object$Q(_1731);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:316
_1755 = *(&local57);
_1756 = ((frost$core$Object*) _1755);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:316:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_1759 = ($fn312) _1756->$class->vtable[0];
_1760 = _1759(_1756);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_1760);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_1767 = ((frost$core$Object*) _1760);
frost$core$Frost$unref$frost$core$Object$Q(_1767);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:317
_1771 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1771);
_1773 = (frost$core$Int) {317u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s313, _1773, &$s314);
abort(); // unreachable
block212:;
_1734 = &_1713->$data.$SUCCESS.field0;
_1735 = *_1734;
_1736 = ((frost$io$OutputStream*) _1735);
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream(_1558, _1559, _1736);
_1738 = ((org$frostlang$frostc$CodeGenerator*) _1558);
_1739 = ((frost$core$Object*) _1738);
frost$core$Frost$ref$frost$core$Object$Q(_1739);
_1741 = *(&local56);
_1742 = ((frost$core$Object*) _1741);
frost$core$Frost$unref$frost$core$Object$Q(_1742);
*(&local56) = _1738;
_1745 = ((frost$core$Object*) _1713);
frost$core$Frost$unref$frost$core$Object$Q(_1745);
_1747 = ((frost$core$Object*) _1693);
frost$core$Frost$unref$frost$core$Object$Q(_1747);
_1749 = ((frost$core$Object*) _1559);
frost$core$Frost$unref$frost$core$Object$Q(_1749);
_1751 = ((frost$core$Object*) _1558);
frost$core$Frost$unref$frost$core$Object$Q(_1751);
_1776 = *(&local57);
_1777 = ((frost$core$Object*) _1776);
frost$core$Frost$unref$frost$core$Object$Q(_1777);
*(&local57) = ((frost$core$Error*) NULL);
goto block189;
block195:;
_1781 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:320:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1784 = _1524.value;
_1785 = _1781.value;
_1786 = _1784 == _1785;
_1787 = (frost$core$Bit) {_1786};
_1789 = _1787.value;
if (_1789) goto block216; else goto block217;
block216:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:321
_1792 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(sizeof(org$frostlang$frostc$HCodeGenerator), (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
_1793 = *(&local5);
_1794 = _1793 != NULL;
_1795 = (frost$core$Bit) {_1794};
_1796 = _1795.value;
if (_1796) goto block219; else goto block220;
block220:;
_1798 = (frost$core$Int) {321u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s315, _1798, &$s316);
abort(); // unreachable
block219:;
_1801 = _1793;
org$frostlang$frostc$HCodeGenerator$init$frost$io$File(_1792, _1801);
_1803 = ((org$frostlang$frostc$CodeGenerator*) _1792);
_1804 = ((frost$core$Object*) _1803);
frost$core$Frost$ref$frost$core$Object$Q(_1804);
_1806 = *(&local56);
_1807 = ((frost$core$Object*) _1806);
frost$core$Frost$unref$frost$core$Object$Q(_1807);
*(&local56) = _1803;
_1810 = ((frost$core$Object*) _1792);
frost$core$Frost$unref$frost$core$Object$Q(_1810);
goto block189;
block217:;
_1813 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:323:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1816 = _1524.value;
_1817 = _1813.value;
_1818 = _1816 == _1817;
_1819 = (frost$core$Bit) {_1818};
_1821 = _1819.value;
if (_1821) goto block221; else goto block222;
block221:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:324
_1824 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(sizeof(org$frostlang$frostc$CCodeGenerator), (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
_1825 = *(&local5);
_1826 = _1825 != NULL;
_1827 = (frost$core$Bit) {_1826};
_1828 = _1827.value;
if (_1828) goto block224; else goto block225;
block225:;
_1830 = (frost$core$Int) {324u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s317, _1830, &$s318);
abort(); // unreachable
block224:;
_1833 = _1825;
org$frostlang$frostc$CCodeGenerator$init$frost$io$File(_1824, _1833);
_1835 = ((org$frostlang$frostc$CodeGenerator*) _1824);
_1836 = ((frost$core$Object*) _1835);
frost$core$Frost$ref$frost$core$Object$Q(_1836);
_1838 = *(&local56);
_1839 = ((frost$core$Object*) _1838);
frost$core$Frost$unref$frost$core$Object$Q(_1839);
*(&local56) = _1835;
_1842 = ((frost$core$Object*) _1824);
frost$core$Frost$unref$frost$core$Object$Q(_1842);
goto block189;
block222:;
_1845 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:326:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1848 = _1524.value;
_1849 = _1845.value;
_1850 = _1848 == _1849;
_1851 = (frost$core$Bit) {_1850};
_1853 = _1851.value;
if (_1853) goto block226; else goto block189;
block226:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:327
*(&local63) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:328
_1858 = (org$frostlang$frostc$StubCodeGenerator*) frostObjectAlloc(sizeof(org$frostlang$frostc$StubCodeGenerator), (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$class);
_1859 = *(&local5);
_1860 = _1859 != NULL;
_1861 = (frost$core$Bit) {_1860};
_1862 = _1861.value;
if (_1862) goto block230; else goto block231;
block231:;
_1864 = (frost$core$Int) {328u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s319, _1864, &$s320);
abort(); // unreachable
block230:;
_1867 = _1859;
_1868 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(_1867);
_1869 = _1868;
_1870 = &_1869->$rawValue;
_1871 = *_1870;
_1872 = _1871.value;
_1873 = _1872 == 0u;
if (_1873) goto block232; else goto block233;
block233:;
_1875 = &_1868->$data.$ERROR.field0;
_1876 = *_1875;
_1877 = ((frost$core$Object*) _1876);
frost$core$Frost$ref$frost$core$Object$Q(_1877);
*(&local63) = _1876;
_1880 = ((frost$core$Object*) _1868);
frost$core$Frost$unref$frost$core$Object$Q(_1880);
_1882 = ((frost$core$Object*) _1858);
frost$core$Frost$unref$frost$core$Object$Q(_1882);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:331
_1902 = *(&local63);
_1903 = ((frost$core$Object*) _1902);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:331:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_1906 = ($fn321) _1903->$class->vtable[0];
_1907 = _1906(_1903);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_1907);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_1914 = ((frost$core$Object*) _1907);
frost$core$Frost$unref$frost$core$Object$Q(_1914);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:332
_1918 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1918);
_1920 = (frost$core$Int) {332u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s322, _1920, &$s323);
abort(); // unreachable
block232:;
_1885 = &_1868->$data.$SUCCESS.field0;
_1886 = *_1885;
_1887 = ((frost$io$OutputStream*) _1886);
org$frostlang$frostc$StubCodeGenerator$init$frost$io$OutputStream(_1858, _1887);
_1889 = ((org$frostlang$frostc$CodeGenerator*) _1858);
_1890 = ((frost$core$Object*) _1889);
frost$core$Frost$ref$frost$core$Object$Q(_1890);
_1892 = *(&local56);
_1893 = ((frost$core$Object*) _1892);
frost$core$Frost$unref$frost$core$Object$Q(_1893);
*(&local56) = _1889;
_1896 = ((frost$core$Object*) _1868);
frost$core$Frost$unref$frost$core$Object$Q(_1896);
_1898 = ((frost$core$Object*) _1858);
frost$core$Frost$unref$frost$core$Object$Q(_1898);
_1923 = *(&local63);
_1924 = ((frost$core$Object*) _1923);
frost$core$Frost$unref$frost$core$Object$Q(_1924);
*(&local63) = ((frost$core$Error*) NULL);
goto block189;
block189:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:336
_1929 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Settings), (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
_1930 = &param0->frostHome;
_1931 = *_1930;
_1932 = *(&local2);
_1933 = ((frost$collections$ListView*) _1932);
_1934 = *(&local6);
_1935 = *(&local7);
_1936 = &param0->debug;
_1937 = *_1936;
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int$frost$core$Int$frost$core$Bit(_1929, _1931, _1933, _1934, _1935, _1937);
*(&local64) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_1940 = ((frost$core$Object*) _1929);
frost$core$Frost$ref$frost$core$Object$Q(_1940);
_1942 = *(&local64);
_1943 = ((frost$core$Object*) _1942);
frost$core$Frost$unref$frost$core$Object$Q(_1943);
*(&local64) = _1929;
_1946 = ((frost$core$Object*) _1929);
frost$core$Frost$unref$frost$core$Object$Q(_1946);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:338
_1949 = (frost$threads$MessageQueue*) frostObjectAlloc(sizeof(frost$threads$MessageQueue), (frost$core$Class*) &frost$threads$MessageQueue$class);
_1950 = _1949;
frost$threads$MessageQueue$init(_1950);
*(&local65) = ((frost$threads$MessageQueue*) NULL);
_1953 = ((frost$core$Object*) _1949);
frost$core$Frost$ref$frost$core$Object$Q(_1953);
_1955 = *(&local65);
_1956 = ((frost$core$Object*) _1955);
frost$core$Frost$unref$frost$core$Object$Q(_1956);
*(&local65) = _1949;
_1959 = ((frost$core$Object*) _1949);
frost$core$Frost$unref$frost$core$Object$Q(_1959);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:339
_1962 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler), (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
_1963 = *(&local65);
_1964 = *(&local56);
_1965 = *(&local64);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT$org$frostlang$frostc$CodeGenerator$Q$org$frostlang$frostc$Compiler$Settings(_1962, _1963, _1964, _1965);
*(&local66) = ((org$frostlang$frostc$Compiler*) NULL);
_1968 = ((frost$core$Object*) _1962);
frost$core$Frost$ref$frost$core$Object$Q(_1968);
_1970 = *(&local66);
_1971 = ((frost$core$Object*) _1970);
frost$core$Frost$unref$frost$core$Object$Q(_1971);
*(&local66) = _1962;
_1974 = ((frost$core$Object*) _1962);
frost$core$Frost$unref$frost$core$Object$Q(_1974);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:340
_1977 = *(&local8);
_1978 = _1977.nonnull;
_1979 = (frost$core$Bit) {_1978};
_1980 = _1979.value;
if (_1980) goto block238; else goto block239;
block239:;
_1982 = (frost$core$Int) {340u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s324, _1982, &$s325);
abort(); // unreachable
block238:;
frost$core$Equatable* $tmp326;
if (_1977.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp327;
    $tmp327 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp327->value = ((org$frostlang$frostc$Main$Format) _1977.value);
    $tmp326 = ((frost$core$Equatable*) $tmp327);
}
else {
    $tmp326 = NULL;
}
_1985 = $tmp326;
_1986 = _1985;
_1987 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:340:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_1990 = &(&local68)->$rawValue;
*_1990 = _1987;
_1992 = *(&local68);
*(&local67) = _1992;
_1995 = *(&local67);
org$frostlang$frostc$Main$Format$wrapper* $tmp328;
$tmp328 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main$Format$wrapper), (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp328->value = _1995;
_1996 = ((frost$core$Equatable*) $tmp328);
ITable* $tmp329 = _1986->$class->itable;
while ($tmp329->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp329 = $tmp329->next;
}
_1997 = $tmp329->methods[0];
_1998 = _1997(_1986, _1996);
_1999 = _1998.value;
_2000 = ((frost$core$Object*) _1996);
frost$core$Frost$unref$frost$core$Object$Q(_2000);
_2002 = ((frost$core$Object*) _1985);
frost$core$Frost$unref$frost$core$Object$Q(_2002);
if (_1999) goto block236; else goto block237;
block236:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:341
_2006 = *(&local9);
_2007 = _2006 == NULL;
_2008 = (frost$core$Bit) {_2007};
_2009 = _2008.value;
if (_2009) goto block241; else goto block242;
block241:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:342
_2012 = &$s330;
_2013 = ((frost$core$Object*) _2012);
frost$core$Frost$ref$frost$core$Object$Q(_2013);
_2015 = *(&local9);
_2016 = ((frost$core$Object*) _2015);
frost$core$Frost$unref$frost$core$Object$Q(_2016);
*(&local9) = _2012;
goto block242;
block242:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:344
_2021 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(sizeof(org$frostlang$frostc$HTMLProcessor), (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
_2022 = *(&local66);
org$frostlang$frostc$HTMLProcessor$init$org$frostlang$frostc$Compiler(_2021, _2022);
_2024 = *(&local1);
_2025 = _2024;
_2026 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Main.frost:344:56
_2028 = (frost$core$Int) {0u};
_2029 = _2026.value;
_2030 = _2028.value;
_2031 = _2029 >= _2030;
_2032 = (frost$core$Bit) {_2031};
_2033 = _2032.value;
if (_2033) goto block246; else goto block245;
block246:;
_2035 = ((frost$collections$CollectionView*) _2025);
ITable* $tmp331 = _2035->$class->itable;
while ($tmp331->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp331 = $tmp331->next;
}
_2036 = $tmp331->methods[0];
_2037 = _2036(_2035);
_2038 = _2026.value;
_2039 = _2037.value;
_2040 = _2038 < _2039;
_2041 = (frost$core$Bit) {_2040};
_2042 = _2041.value;
if (_2042) goto block244; else goto block245;
block245:;
_2044 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s332, _2044, &$s333);
abort(); // unreachable
block244:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_2048 = &_2025->data;
_2049 = *_2048;
_2050 = frost$core$Int64$init$frost$core$Int(_2026);
_2051 = _2050.value;
_2052 = _2049[_2051];
_2053 = _2052;
frost$core$Frost$ref$frost$core$Object$Q(_2053);
_2056 = ((frost$io$File*) _2052);
_2057 = *(&local5);
_2058 = _2057 != NULL;
_2059 = (frost$core$Bit) {_2058};
_2060 = _2059.value;
if (_2060) goto block247; else goto block248;
block248:;
_2062 = (frost$core$Int) {344u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s334, _2062, &$s335);
abort(); // unreachable
block247:;
_2065 = _2057;
_2066 = *(&local9);
_2067 = _2066 != NULL;
_2068 = (frost$core$Bit) {_2067};
_2069 = _2068.value;
if (_2069) goto block249; else goto block250;
block250:;
_2071 = (frost$core$Int) {344u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s336, _2071, &$s337);
abort(); // unreachable
block249:;
_2074 = _2066;
_2075 = ($fn338) _2021->$class->vtable[3];
_2075(_2021, _2056, _2065, _2074);
_2077 = _2052;
frost$core$Frost$unref$frost$core$Object$Q(_2077);
_2079 = ((frost$core$Object*) _2021);
frost$core$Frost$unref$frost$core$Object$Q(_2079);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:345
_2082 = *(&local66);
_2083 = ((frost$core$Object*) _2082);
frost$core$Frost$unref$frost$core$Object$Q(_2083);
*(&local66) = ((org$frostlang$frostc$Compiler*) NULL);
_2086 = *(&local65);
_2087 = ((frost$core$Object*) _2086);
frost$core$Frost$unref$frost$core$Object$Q(_2087);
*(&local65) = ((frost$threads$MessageQueue*) NULL);
_2090 = *(&local64);
_2091 = ((frost$core$Object*) _2090);
frost$core$Frost$unref$frost$core$Object$Q(_2091);
*(&local64) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_2094 = *(&local56);
_2095 = ((frost$core$Object*) _2094);
frost$core$Frost$unref$frost$core$Object$Q(_2095);
*(&local56) = ((org$frostlang$frostc$CodeGenerator*) NULL);
_2098 = *(&local43);
_2099 = ((frost$core$Object*) _2098);
frost$core$Frost$unref$frost$core$Object$Q(_2099);
*(&local43) = ((frost$io$File*) NULL);
_2102 = *(&local9);
_2103 = ((frost$core$Object*) _2102);
frost$core$Frost$unref$frost$core$Object$Q(_2103);
*(&local9) = ((frost$core$String*) NULL);
_2106 = *(&local5);
_2107 = ((frost$core$Object*) _2106);
frost$core$Frost$unref$frost$core$Object$Q(_2107);
*(&local5) = ((frost$io$File*) NULL);
_2110 = *(&local4);
_2111 = ((frost$core$Object*) _2110);
frost$core$Frost$unref$frost$core$Object$Q(_2111);
*(&local4) = ((frost$collections$Array*) NULL);
_2114 = *(&local3);
_2115 = ((frost$core$Object*) _2114);
frost$core$Frost$unref$frost$core$Object$Q(_2115);
*(&local3) = ((frost$collections$Array*) NULL);
_2118 = *(&local2);
_2119 = ((frost$core$Object*) _2118);
frost$core$Frost$unref$frost$core$Object$Q(_2119);
*(&local2) = ((frost$collections$Array*) NULL);
_2122 = *(&local1);
_2123 = ((frost$core$Object*) _2122);
frost$core$Frost$unref$frost$core$Object$Q(_2123);
*(&local1) = ((frost$collections$Array*) NULL);
_2126 = *(&local0);
_2127 = ((frost$core$Object*) _2126);
frost$core$Frost$unref$frost$core$Object$Q(_2127);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block237:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:347
_2132 = *(&local9);
_2133 = _2132 != NULL;
_2134 = (frost$core$Bit) {_2133};
_2135 = _2134.value;
if (_2135) goto block251; else goto block252;
block251:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:348
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:348:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s339);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s340);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:349
_2148 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_2148);
_2150 = (frost$core$Int) {349u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s341, _2150, &$s342);
abort(); // unreachable
block252:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:351
_2154 = *(&local1);
_2155 = ((frost$collections$Iterable*) _2154);
_2156 = _2155;
ITable* $tmp343 = _2156->$class->itable;
while ($tmp343->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp343 = $tmp343->next;
}
_2157 = $tmp343->methods[0];
_2158 = _2157(_2156);
_2159 = _2158;
goto block255;
block255:;
_2161 = _2159;
ITable* $tmp344 = _2161->$class->itable;
while ($tmp344->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp344 = $tmp344->next;
}
_2162 = $tmp344->methods[0];
_2163 = _2162(_2161);
_2164 = _2163.value;
if (_2164) goto block257; else goto block256;
block256:;
*(&local69) = ((frost$io$File*) NULL);
_2167 = _2159;
ITable* $tmp345 = _2167->$class->itable;
while ($tmp345->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp345 = $tmp345->next;
}
_2168 = $tmp345->methods[1];
_2169 = _2168(_2167);
_2170 = ((frost$io$File*) _2169);
_2171 = ((frost$core$Object*) _2170);
frost$core$Frost$ref$frost$core$Object$Q(_2171);
_2173 = *(&local69);
_2174 = ((frost$core$Object*) _2173);
frost$core$Frost$unref$frost$core$Object$Q(_2174);
*(&local69) = _2170;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:352
_2178 = *(&local66);
_2179 = *(&local69);
_2180 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT(_2178, _2179);
_2181 = ((frost$collections$Iterable*) _2180);
_2182 = _2181;
ITable* $tmp346 = _2182->$class->itable;
while ($tmp346->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp346 = $tmp346->next;
}
_2183 = $tmp346->methods[0];
_2184 = _2183(_2182);
_2185 = _2184;
goto block258;
block258:;
_2187 = _2185;
ITable* $tmp347 = _2187->$class->itable;
while ($tmp347->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp347 = $tmp347->next;
}
_2188 = $tmp347->methods[0];
_2189 = _2188(_2187);
_2190 = _2189.value;
if (_2190) goto block260; else goto block259;
block259:;
*(&local70) = ((org$frostlang$frostc$ClassDecl*) NULL);
_2193 = _2185;
ITable* $tmp348 = _2193->$class->itable;
while ($tmp348->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp348 = $tmp348->next;
}
_2194 = $tmp348->methods[1];
_2195 = _2194(_2193);
_2196 = ((org$frostlang$frostc$ClassDecl*) _2195);
_2197 = ((frost$core$Object*) _2196);
frost$core$Frost$ref$frost$core$Object$Q(_2197);
_2199 = *(&local70);
_2200 = ((frost$core$Object*) _2199);
frost$core$Frost$unref$frost$core$Object$Q(_2200);
*(&local70) = _2196;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:353
_2204 = *(&local66);
_2205 = *(&local70);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Main.frost:353:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5811
_2208 = (frost$core$Bit) {false};
_2209 = &_2205->external;
*_2209 = _2208;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5812
_2212 = &_2205->classes;
_2213 = *_2212;
_2214 = ((frost$collections$Iterable*) _2213);
_2215 = _2214;
ITable* $tmp349 = _2215->$class->itable;
while ($tmp349->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp349 = $tmp349->next;
}
_2216 = $tmp349->methods[0];
_2217 = _2216(_2215);
_2218 = _2217;
goto block262;
block262:;
_2220 = _2218;
ITable* $tmp350 = _2220->$class->itable;
while ($tmp350->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp350 = $tmp350->next;
}
_2221 = $tmp350->methods[0];
_2222 = _2221(_2220);
_2223 = _2222.value;
if (_2223) goto block264; else goto block263;
block263:;
*(&local71) = ((org$frostlang$frostc$ClassDecl*) NULL);
_2226 = _2218;
ITable* $tmp351 = _2226->$class->itable;
while ($tmp351->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp351 = $tmp351->next;
}
_2227 = $tmp351->methods[1];
_2228 = _2227(_2226);
_2229 = ((org$frostlang$frostc$ClassDecl*) _2228);
_2230 = ((frost$core$Object*) _2229);
frost$core$Frost$ref$frost$core$Object$Q(_2230);
_2232 = *(&local71);
_2233 = ((frost$core$Object*) _2232);
frost$core$Frost$unref$frost$core$Object$Q(_2233);
*(&local71) = _2229;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5813
_2237 = *(&local71);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Compiler.frost:5813:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5811
_2240 = (frost$core$Bit) {false};
_2241 = &_2237->external;
*_2241 = _2240;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5812
_2244 = &_2237->classes;
_2245 = *_2244;
_2246 = ((frost$collections$Iterable*) _2245);
_2247 = _2246;
ITable* $tmp352 = _2247->$class->itable;
while ($tmp352->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp352 = $tmp352->next;
}
_2248 = $tmp352->methods[0];
_2249 = _2248(_2247);
_2250 = _2249;
goto block266;
block266:;
_2252 = _2250;
ITable* $tmp353 = _2252->$class->itable;
while ($tmp353->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp353 = $tmp353->next;
}
_2253 = $tmp353->methods[0];
_2254 = _2253(_2252);
_2255 = _2254.value;
if (_2255) goto block268; else goto block267;
block267:;
*(&local72) = ((org$frostlang$frostc$ClassDecl*) NULL);
_2258 = _2250;
ITable* $tmp354 = _2258->$class->itable;
while ($tmp354->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp354 = $tmp354->next;
}
_2259 = $tmp354->methods[1];
_2260 = _2259(_2258);
_2261 = ((org$frostlang$frostc$ClassDecl*) _2260);
_2262 = ((frost$core$Object*) _2261);
frost$core$Frost$ref$frost$core$Object$Q(_2262);
_2264 = *(&local72);
_2265 = ((frost$core$Object*) _2264);
frost$core$Frost$unref$frost$core$Object$Q(_2265);
*(&local72) = _2261;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5813
_2269 = *(&local72);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl(_2204, _2269);
_2271 = _2260;
frost$core$Frost$unref$frost$core$Object$Q(_2271);
_2273 = *(&local72);
_2274 = ((frost$core$Object*) _2273);
frost$core$Frost$unref$frost$core$Object$Q(_2274);
*(&local72) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block266;
block268:;
_2278 = ((frost$core$Object*) _2249);
frost$core$Frost$unref$frost$core$Object$Q(_2278);
_2281 = _2228;
frost$core$Frost$unref$frost$core$Object$Q(_2281);
_2283 = *(&local71);
_2284 = ((frost$core$Object*) _2283);
frost$core$Frost$unref$frost$core$Object$Q(_2284);
*(&local71) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block262;
block264:;
_2288 = ((frost$core$Object*) _2217);
frost$core$Frost$unref$frost$core$Object$Q(_2288);
_2291 = _2195;
frost$core$Frost$unref$frost$core$Object$Q(_2291);
_2293 = *(&local70);
_2294 = ((frost$core$Object*) _2293);
frost$core$Frost$unref$frost$core$Object$Q(_2294);
*(&local70) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block258;
block260:;
_2298 = ((frost$core$Object*) _2184);
frost$core$Frost$unref$frost$core$Object$Q(_2298);
_2300 = ((frost$core$Object*) _2180);
frost$core$Frost$unref$frost$core$Object$Q(_2300);
_2302 = _2169;
frost$core$Frost$unref$frost$core$Object$Q(_2302);
_2304 = *(&local69);
_2305 = ((frost$core$Object*) _2304);
frost$core$Frost$unref$frost$core$Object$Q(_2305);
*(&local69) = ((frost$io$File*) NULL);
goto block255;
block257:;
_2309 = ((frost$core$Object*) _2158);
frost$core$Frost$unref$frost$core$Object$Q(_2309);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:356
_2312 = *(&local1);
_2313 = ((frost$collections$Iterable*) _2312);
_2314 = _2313;
ITable* $tmp355 = _2314->$class->itable;
while ($tmp355->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp355 = $tmp355->next;
}
_2315 = $tmp355->methods[0];
_2316 = _2315(_2314);
_2317 = _2316;
goto block269;
block269:;
_2319 = _2317;
ITable* $tmp356 = _2319->$class->itable;
while ($tmp356->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp356 = $tmp356->next;
}
_2320 = $tmp356->methods[0];
_2321 = _2320(_2319);
_2322 = _2321.value;
if (_2322) goto block271; else goto block270;
block270:;
*(&local73) = ((frost$io$File*) NULL);
_2325 = _2317;
ITable* $tmp357 = _2325->$class->itable;
while ($tmp357->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp357 = $tmp357->next;
}
_2326 = $tmp357->methods[1];
_2327 = _2326(_2325);
_2328 = ((frost$io$File*) _2327);
_2329 = ((frost$core$Object*) _2328);
frost$core$Frost$ref$frost$core$Object$Q(_2329);
_2331 = *(&local73);
_2332 = ((frost$core$Object*) _2331);
frost$core$Frost$unref$frost$core$Object$Q(_2332);
*(&local73) = _2328;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:357
_2336 = *(&local66);
_2337 = *(&local73);
org$frostlang$frostc$Compiler$compile$frost$io$File(_2336, _2337);
_2339 = _2327;
frost$core$Frost$unref$frost$core$Object$Q(_2339);
_2341 = *(&local73);
_2342 = ((frost$core$Object*) _2341);
frost$core$Frost$unref$frost$core$Object$Q(_2342);
*(&local73) = ((frost$io$File*) NULL);
goto block269;
block271:;
_2346 = ((frost$core$Object*) _2316);
frost$core$Frost$unref$frost$core$Object$Q(_2346);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:359
_2349 = *(&local66);
// begin inline call to method org.frostlang.frostc.Compiler.finish() from Main.frost:359:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6049
goto block273;
block273:;
_2353 = &_2349->pendingClasses;
_2354 = *_2353;
_2355 = ((frost$collections$CollectionView*) _2354);
ITable* $tmp358 = _2355->$class->itable;
while ($tmp358->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp358 = $tmp358->next;
}
_2356 = $tmp358->methods[0];
_2357 = _2356(_2355);
_2358 = (frost$core$Int) {0u};
_2359 = _2357.value;
_2360 = _2358.value;
_2361 = _2359 > _2360;
_2362 = (frost$core$Bit) {_2361};
_2363 = _2362.value;
if (_2363) goto block274; else goto block275;
block274:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6050
_2366 = &_2349->pendingClasses;
_2367 = *_2366;
_2368 = _2367;
_2369 = &_2349->pendingClasses;
_2370 = *_2369;
_2371 = ((frost$collections$CollectionView*) _2370);
ITable* $tmp359 = _2371->$class->itable;
while ($tmp359->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp359 = $tmp359->next;
}
_2372 = $tmp359->methods[0];
_2373 = _2372(_2371);
_2374 = (frost$core$Int) {1u};
_2375 = _2373.value;
_2376 = _2374.value;
_2377 = _2375 - _2376;
_2378 = (frost$core$Int) {_2377};
_2379 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_2368, _2378);
_2380 = ((org$frostlang$frostc$ClassDecl*) _2379);
*(&local74) = ((org$frostlang$frostc$ClassDecl*) NULL);
_2382 = ((frost$core$Object*) _2380);
frost$core$Frost$ref$frost$core$Object$Q(_2382);
_2384 = *(&local74);
_2385 = ((frost$core$Object*) _2384);
frost$core$Frost$unref$frost$core$Object$Q(_2385);
*(&local74) = _2380;
_2388 = _2379;
frost$core$Frost$unref$frost$core$Object$Q(_2388);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6051
_2391 = *(&local74);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl(_2349, _2391);
_2393 = *(&local74);
_2394 = ((frost$core$Object*) _2393);
frost$core$Frost$unref$frost$core$Object$Q(_2394);
*(&local74) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block273;
block275:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6053
_2399 = &_2349->codeGenerator;
_2400 = *_2399;
_2401 = _2400 != NULL;
_2402 = (frost$core$Bit) {_2401};
_2403 = _2402.value;
if (_2403) goto block276; else goto block277;
block277:;
_2405 = (frost$core$Int) {6053u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s360, _2405, &$s361);
abort(); // unreachable
block276:;
_2408 = _2400;
ITable* $tmp362 = _2408->$class->itable;
while ($tmp362->$class != (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class) {
    $tmp362 = $tmp362->next;
}
_2409 = $tmp362->methods[5];
_2409(_2408);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:360
goto block278;
block278:;
_2414 = *(&local65);
_2415 = _2414;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Main.frost:360:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
_2420 = (frost$threads$ScopedLock*) frostObjectAlloc(sizeof(frost$threads$ScopedLock), (frost$core$Class*) &frost$threads$ScopedLock$class);
_2421 = &_2415->lock;
_2422 = *_2421;
frost$threads$ScopedLock$init$frost$threads$Lock(_2420, _2422);
*(&local75) = ((frost$threads$ScopedLock*) NULL);
_2425 = ((frost$core$Object*) _2420);
frost$core$Frost$ref$frost$core$Object$Q(_2425);
_2427 = *(&local75);
_2428 = ((frost$core$Object*) _2427);
frost$core$Frost$unref$frost$core$Object$Q(_2428);
*(&local75) = _2420;
_2431 = ((frost$core$Object*) _2420);
frost$core$Frost$unref$frost$core$Object$Q(_2431);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
_2434 = &_2415->count;
_2435 = *_2434;
_2436 = *(&local75);
_2437 = ((frost$core$Object*) _2436);
frost$core$Frost$unref$frost$core$Object$Q(_2437);
*(&local75) = ((frost$threads$ScopedLock*) NULL);
_2441 = (frost$core$Int) {0u};
_2442 = _2435.value;
_2443 = _2441.value;
_2444 = _2442 > _2443;
_2445 = (frost$core$Bit) {_2444};
_2447 = _2445.value;
if (_2447) goto block279; else goto block280;
block279:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:361
_2450 = *(&local65);
_2451 = _2450;
_2452 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(_2451);
_2453 = ((org$frostlang$frostc$Compiler$Message*) _2452);
*(&local76) = ((org$frostlang$frostc$Compiler$Message*) NULL);
_2455 = ((frost$core$Object*) _2453);
frost$core$Frost$ref$frost$core$Object$Q(_2455);
_2457 = *(&local76);
_2458 = ((frost$core$Object*) _2457);
frost$core$Frost$unref$frost$core$Object$Q(_2458);
*(&local76) = _2453;
_2461 = ((frost$core$Object*) _2452);
frost$core$Frost$unref$frost$core$Object$Q(_2461);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:363
_2464 = *(&local76);
_2465 = &_2464->$rawValue;
_2466 = *_2465;
_2467 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:364:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2470 = _2466.value;
_2471 = _2467.value;
_2472 = _2470 == _2471;
_2473 = (frost$core$Bit) {_2472};
_2475 = _2473.value;
if (_2475) goto block284; else goto block285;
block284:;
_2477 = &_2464->$data.$ERROR.field0;
_2478 = *_2477;
*(&local77) = ((frost$core$String*) NULL);
_2480 = ((frost$core$Object*) _2478);
frost$core$Frost$ref$frost$core$Object$Q(_2480);
_2482 = *(&local77);
_2483 = ((frost$core$Object*) _2482);
frost$core$Frost$unref$frost$core$Object$Q(_2483);
*(&local77) = _2478;
_2486 = &_2464->$data.$ERROR.field1;
_2487 = *_2486;
*(&local78) = _2487;
_2489 = &_2464->$data.$ERROR.field2;
_2490 = *_2489;
*(&local79) = _2490;
_2492 = &_2464->$data.$ERROR.field3;
_2493 = *_2492;
*(&local80) = ((frost$core$String*) NULL);
_2495 = ((frost$core$Object*) _2493);
frost$core$Frost$ref$frost$core$Object$Q(_2495);
_2497 = *(&local80);
_2498 = ((frost$core$Object*) _2497);
frost$core$Frost$unref$frost$core$Object$Q(_2498);
*(&local80) = _2493;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:365
_2502 = *(&local54);
_2503 = (frost$core$Int) {1u};
_2504 = _2502.value;
_2505 = _2503.value;
_2506 = _2504 + _2505;
_2507 = (frost$core$Int) {_2506};
*(&local54) = _2507;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:366
_2510 = *(&local77);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:366:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_2513 = ((frost$core$Object*) _2510);
frost$core$Frost$ref$frost$core$Object$Q(_2513);
_2516 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2510, &$s363);
_2517 = *(&local78);
frost$core$Int$wrapper* $tmp364;
$tmp364 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp364->value = _2517;
_2518 = ((frost$core$Object*) $tmp364);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:366:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2521 = ($fn365) _2518->$class->vtable[0];
_2522 = _2521(_2518);
_2523 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2516, _2522);
_2524 = ((frost$core$Object*) _2523);
frost$core$Frost$ref$frost$core$Object$Q(_2524);
_2526 = ((frost$core$Object*) _2523);
frost$core$Frost$unref$frost$core$Object$Q(_2526);
_2528 = ((frost$core$Object*) _2522);
frost$core$Frost$unref$frost$core$Object$Q(_2528);
_2531 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2523, &$s366);
_2532 = *(&local79);
frost$core$Int$wrapper* $tmp367;
$tmp367 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp367->value = _2532;
_2533 = ((frost$core$Object*) $tmp367);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:366:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2536 = ($fn368) _2533->$class->vtable[0];
_2537 = _2536(_2533);
_2538 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2531, _2537);
_2539 = ((frost$core$Object*) _2538);
frost$core$Frost$ref$frost$core$Object$Q(_2539);
_2541 = ((frost$core$Object*) _2538);
frost$core$Frost$unref$frost$core$Object$Q(_2541);
_2543 = ((frost$core$Object*) _2537);
frost$core$Frost$unref$frost$core$Object$Q(_2543);
_2546 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2538, &$s369);
_2547 = *(&local80);
_2548 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2546, _2547);
_2549 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2548, &$s370);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:366:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_2549);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s371);
_2559 = ((frost$core$Object*) _2549);
frost$core$Frost$unref$frost$core$Object$Q(_2559);
_2561 = ((frost$core$Object*) _2548);
frost$core$Frost$unref$frost$core$Object$Q(_2561);
_2563 = ((frost$core$Object*) _2546);
frost$core$Frost$unref$frost$core$Object$Q(_2563);
_2565 = ((frost$core$Object*) _2538);
frost$core$Frost$unref$frost$core$Object$Q(_2565);
_2567 = _2533;
frost$core$Frost$unref$frost$core$Object$Q(_2567);
_2569 = ((frost$core$Object*) _2531);
frost$core$Frost$unref$frost$core$Object$Q(_2569);
_2571 = ((frost$core$Object*) _2523);
frost$core$Frost$unref$frost$core$Object$Q(_2571);
_2573 = _2518;
frost$core$Frost$unref$frost$core$Object$Q(_2573);
_2575 = ((frost$core$Object*) _2516);
frost$core$Frost$unref$frost$core$Object$Q(_2575);
_2577 = ((frost$core$Object*) _2510);
frost$core$Frost$unref$frost$core$Object$Q(_2577);
_2579 = *(&local80);
_2580 = ((frost$core$Object*) _2579);
frost$core$Frost$unref$frost$core$Object$Q(_2580);
*(&local80) = ((frost$core$String*) NULL);
_2583 = *(&local77);
_2584 = ((frost$core$Object*) _2583);
frost$core$Frost$unref$frost$core$Object$Q(_2584);
*(&local77) = ((frost$core$String*) NULL);
goto block283;
block285:;
_2588 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:368:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2591 = _2466.value;
_2592 = _2588.value;
_2593 = _2591 == _2592;
_2594 = (frost$core$Bit) {_2593};
_2596 = _2594.value;
if (_2596) goto block292; else goto block283;
block292:;
_2598 = &_2464->$data.$WARNING.field0;
_2599 = *_2598;
*(&local81) = ((frost$core$String*) NULL);
_2601 = ((frost$core$Object*) _2599);
frost$core$Frost$ref$frost$core$Object$Q(_2601);
_2603 = *(&local81);
_2604 = ((frost$core$Object*) _2603);
frost$core$Frost$unref$frost$core$Object$Q(_2604);
*(&local81) = _2599;
_2607 = &_2464->$data.$WARNING.field1;
_2608 = *_2607;
*(&local82) = _2608;
_2610 = &_2464->$data.$WARNING.field2;
_2611 = *_2610;
*(&local83) = _2611;
_2613 = &_2464->$data.$WARNING.field3;
_2614 = *_2613;
*(&local84) = ((frost$core$String*) NULL);
_2616 = ((frost$core$Object*) _2614);
frost$core$Frost$ref$frost$core$Object$Q(_2616);
_2618 = *(&local84);
_2619 = ((frost$core$Object*) _2618);
frost$core$Frost$unref$frost$core$Object$Q(_2619);
*(&local84) = _2614;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:369
_2623 = *(&local55);
_2624 = (frost$core$Int) {1u};
_2625 = _2623.value;
_2626 = _2624.value;
_2627 = _2625 + _2626;
_2628 = (frost$core$Int) {_2627};
*(&local55) = _2628;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:370
_2631 = *(&local81);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:370:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_2634 = ((frost$core$Object*) _2631);
frost$core$Frost$ref$frost$core$Object$Q(_2634);
_2637 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2631, &$s372);
_2638 = *(&local82);
frost$core$Int$wrapper* $tmp373;
$tmp373 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp373->value = _2638;
_2639 = ((frost$core$Object*) $tmp373);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:370:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2642 = ($fn374) _2639->$class->vtable[0];
_2643 = _2642(_2639);
_2644 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2637, _2643);
_2645 = ((frost$core$Object*) _2644);
frost$core$Frost$ref$frost$core$Object$Q(_2645);
_2647 = ((frost$core$Object*) _2644);
frost$core$Frost$unref$frost$core$Object$Q(_2647);
_2649 = ((frost$core$Object*) _2643);
frost$core$Frost$unref$frost$core$Object$Q(_2649);
_2652 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2644, &$s375);
_2653 = *(&local83);
frost$core$Int$wrapper* $tmp376;
$tmp376 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp376->value = _2653;
_2654 = ((frost$core$Object*) $tmp376);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:370:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2657 = ($fn377) _2654->$class->vtable[0];
_2658 = _2657(_2654);
_2659 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2652, _2658);
_2660 = ((frost$core$Object*) _2659);
frost$core$Frost$ref$frost$core$Object$Q(_2660);
_2662 = ((frost$core$Object*) _2659);
frost$core$Frost$unref$frost$core$Object$Q(_2662);
_2664 = ((frost$core$Object*) _2658);
frost$core$Frost$unref$frost$core$Object$Q(_2664);
_2667 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2659, &$s378);
_2668 = *(&local84);
_2669 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2667, _2668);
_2670 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2669, &$s379);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:370:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_2670);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s380);
_2680 = ((frost$core$Object*) _2670);
frost$core$Frost$unref$frost$core$Object$Q(_2680);
_2682 = ((frost$core$Object*) _2669);
frost$core$Frost$unref$frost$core$Object$Q(_2682);
_2684 = ((frost$core$Object*) _2667);
frost$core$Frost$unref$frost$core$Object$Q(_2684);
_2686 = ((frost$core$Object*) _2659);
frost$core$Frost$unref$frost$core$Object$Q(_2686);
_2688 = _2654;
frost$core$Frost$unref$frost$core$Object$Q(_2688);
_2690 = ((frost$core$Object*) _2652);
frost$core$Frost$unref$frost$core$Object$Q(_2690);
_2692 = ((frost$core$Object*) _2644);
frost$core$Frost$unref$frost$core$Object$Q(_2692);
_2694 = _2639;
frost$core$Frost$unref$frost$core$Object$Q(_2694);
_2696 = ((frost$core$Object*) _2637);
frost$core$Frost$unref$frost$core$Object$Q(_2696);
_2698 = ((frost$core$Object*) _2631);
frost$core$Frost$unref$frost$core$Object$Q(_2698);
_2700 = *(&local84);
_2701 = ((frost$core$Object*) _2700);
frost$core$Frost$unref$frost$core$Object$Q(_2701);
*(&local84) = ((frost$core$String*) NULL);
_2704 = *(&local81);
_2705 = ((frost$core$Object*) _2704);
frost$core$Frost$unref$frost$core$Object$Q(_2705);
*(&local81) = ((frost$core$String*) NULL);
goto block283;
block283:;
_2709 = *(&local76);
_2710 = ((frost$core$Object*) _2709);
frost$core$Frost$unref$frost$core$Object$Q(_2710);
*(&local76) = ((org$frostlang$frostc$Compiler$Message*) NULL);
goto block278;
block280:;
_2714 = *(&local66);
_2715 = ((frost$core$Object*) _2714);
frost$core$Frost$unref$frost$core$Object$Q(_2715);
*(&local66) = ((org$frostlang$frostc$Compiler*) NULL);
_2718 = *(&local65);
_2719 = ((frost$core$Object*) _2718);
frost$core$Frost$unref$frost$core$Object$Q(_2719);
*(&local65) = ((frost$threads$MessageQueue*) NULL);
_2722 = *(&local64);
_2723 = ((frost$core$Object*) _2722);
frost$core$Frost$unref$frost$core$Object$Q(_2723);
*(&local64) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_2726 = *(&local56);
_2727 = ((frost$core$Object*) _2726);
frost$core$Frost$unref$frost$core$Object$Q(_2727);
*(&local56) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:375
_2731 = *(&local55);
_2732 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:375:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2735 = _2731.value;
_2736 = _2732.value;
_2737 = _2735 == _2736;
_2738 = (frost$core$Bit) {_2737};
_2740 = _2738.value;
if (_2740) goto block299; else goto block301;
block299:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:377
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:377:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s381);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s382);
goto block300;
block301:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:379
_2754 = *(&local55);
_2755 = (frost$core$Int) {0u};
_2756 = _2754.value;
_2757 = _2755.value;
_2758 = _2756 > _2757;
_2759 = (frost$core$Bit) {_2758};
_2760 = _2759.value;
if (_2760) goto block305; else goto block306;
block305:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:381
_2763 = *(&local55);
_2764 = frost$core$Int$get_asString$R$frost$core$String(_2763);
_2765 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2764, &$s383);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:381:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_2765);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s384);
_2775 = ((frost$core$Object*) _2765);
frost$core$Frost$unref$frost$core$Object$Q(_2775);
_2777 = ((frost$core$Object*) _2764);
frost$core$Frost$unref$frost$core$Object$Q(_2777);
goto block306;
block306:;
goto block300;
block300:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:383
_2782 = *(&local54);
_2783 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:383:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2786 = _2782.value;
_2787 = _2783.value;
_2788 = _2786 == _2787;
_2789 = (frost$core$Bit) {_2788};
_2791 = _2789.value;
if (_2791) goto block309; else goto block311;
block309:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:384
_2794 = *(&local8);
_2795 = _2794.nonnull;
_2796 = (frost$core$Bit) {_2795};
_2797 = _2796.value;
if (_2797) goto block313; else goto block314;
block314:;
_2799 = (frost$core$Int) {384u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s385, _2799, &$s386);
abort(); // unreachable
block313:;
_2802 = ((org$frostlang$frostc$Main$Format) _2794.value);
_2803 = _2802.$rawValue;
_2804 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:385:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2807 = _2803.value;
_2808 = _2804.value;
_2809 = _2807 == _2808;
_2810 = (frost$core$Bit) {_2809};
_2812 = _2810.value;
if (_2812) goto block316; else goto block317;
block316:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:386
_2815 = *(&local3);
_2816 = *(&local4);
_2817 = *(&local5);
_2818 = _2817 != NULL;
_2819 = (frost$core$Bit) {_2818};
_2820 = _2819.value;
if (_2820) goto block319; else goto block320;
block320:;
_2822 = (frost$core$Int) {386u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s387, _2822, &$s388);
abort(); // unreachable
block319:;
_2825 = _2817;
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:386:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:184
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:184:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_2830 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_2825, &$s389);
_2831 = &_2830->path;
_2832 = *_2831;
_2833 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_2832);
*(&local86) = ((frost$core$String*) NULL);
_2835 = ((frost$core$Object*) _2833);
frost$core$Frost$ref$frost$core$Object$Q(_2835);
_2837 = *(&local86);
_2838 = ((frost$core$Object*) _2837);
frost$core$Frost$unref$frost$core$Object$Q(_2838);
*(&local86) = _2833;
_2841 = ((frost$core$Object*) _2833);
frost$core$Frost$unref$frost$core$Object$Q(_2841);
_2843 = ((frost$core$Object*) _2830);
frost$core$Frost$unref$frost$core$Object$Q(_2843);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_2846 = *(&local86);
_2847 = _2846 == NULL;
_2848 = (frost$core$Bit) {_2847};
_2849 = _2848.value;
if (_2849) goto block323; else goto block324;
block323:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_2852 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_2852);
_2854 = *(&local86);
_2855 = ((frost$core$Object*) _2854);
frost$core$Frost$unref$frost$core$Object$Q(_2855);
*(&local86) = ((frost$core$String*) NULL);
*(&local85) = ((frost$io$File*) NULL);
_2859 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_2859);
goto block322;
block324:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_2863 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_2864 = *(&local86);
_2865 = _2864 != NULL;
_2866 = (frost$core$Bit) {_2865};
_2867 = _2866.value;
if (_2867) goto block325; else goto block326;
block326:;
_2869 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s390, _2869, &$s391);
abort(); // unreachable
block325:;
_2872 = _2864;
frost$io$File$init$frost$core$String(_2863, _2872);
_2874 = _2863;
_2875 = ((frost$core$Object*) _2874);
frost$core$Frost$ref$frost$core$Object$Q(_2875);
_2877 = ((frost$core$Object*) _2863);
frost$core$Frost$unref$frost$core$Object$Q(_2877);
_2879 = *(&local86);
_2880 = ((frost$core$Object*) _2879);
frost$core$Frost$unref$frost$core$Object$Q(_2880);
*(&local86) = ((frost$core$String*) NULL);
*(&local85) = _2874;
_2884 = ((frost$core$Object*) _2874);
frost$core$Frost$ref$frost$core$Object$Q(_2884);
goto block322;
block322:;
_2887 = *(&local85);
_2888 = _2887 != NULL;
_2889 = (frost$core$Bit) {_2888};
_2890 = _2889.value;
if (_2890) goto block327; else goto block328;
block328:;
_2892 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s392, _2892, &$s393);
abort(); // unreachable
block327:;
_2895 = _2887;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:184:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
_2898 = frost$io$File$get_name$R$frost$core$String(_2825);
*(&local88) = ((frost$core$String*) NULL);
_2900 = ((frost$core$Object*) _2898);
frost$core$Frost$ref$frost$core$Object$Q(_2900);
_2902 = *(&local88);
_2903 = ((frost$core$Object*) _2902);
frost$core$Frost$unref$frost$core$Object$Q(_2903);
*(&local88) = _2898;
_2906 = ((frost$core$Object*) _2898);
frost$core$Frost$unref$frost$core$Object$Q(_2906);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_2909 = *(&local88);
_2910 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_2909, &$s394);
*(&local89) = _2910;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_2913 = *(&local89);
_2914 = !_2913.nonnull;
_2915 = (frost$core$Bit) {_2914};
_2916 = _2915.value;
if (_2916) goto block330; else goto block331;
block330:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_2919 = *(&local88);
_2920 = ((frost$core$Object*) _2919);
frost$core$Frost$ref$frost$core$Object$Q(_2920);
_2922 = *(&local88);
_2923 = ((frost$core$Object*) _2922);
frost$core$Frost$unref$frost$core$Object$Q(_2923);
*(&local88) = ((frost$core$String*) NULL);
*(&local87) = _2919;
_2927 = ((frost$core$Object*) _2919);
frost$core$Frost$ref$frost$core$Object$Q(_2927);
goto block329;
block331:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_2931 = *(&local88);
_2932 = *(&local89);
_2933 = (frost$core$Bit) {false};
_2934 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _2932, _2933);
_2935 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_2931, _2934);
_2936 = ((frost$core$Object*) _2935);
frost$core$Frost$ref$frost$core$Object$Q(_2936);
_2938 = ((frost$core$Object*) _2935);
frost$core$Frost$unref$frost$core$Object$Q(_2938);
_2940 = *(&local88);
_2941 = ((frost$core$Object*) _2940);
frost$core$Frost$unref$frost$core$Object$Q(_2941);
*(&local88) = ((frost$core$String*) NULL);
*(&local87) = _2935;
_2945 = ((frost$core$Object*) _2935);
frost$core$Frost$ref$frost$core$Object$Q(_2945);
goto block329;
block329:;
_2948 = *(&local87);
_2949 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2948, &$s395);
_2950 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_2895, _2949);
_2951 = ((frost$core$Object*) _2950);
frost$core$Frost$ref$frost$core$Object$Q(_2951);
_2953 = ((frost$core$Object*) _2950);
frost$core$Frost$unref$frost$core$Object$Q(_2953);
_2955 = ((frost$core$Object*) _2949);
frost$core$Frost$unref$frost$core$Object$Q(_2955);
_2957 = ((frost$core$Object*) _2948);
frost$core$Frost$unref$frost$core$Object$Q(_2957);
_2959 = *(&local87);
_2960 = ((frost$core$Object*) _2959);
frost$core$Frost$unref$frost$core$Object$Q(_2960);
*(&local87) = ((frost$core$String*) NULL);
_2963 = ((frost$core$Object*) _2887);
frost$core$Frost$unref$frost$core$Object$Q(_2963);
_2965 = *(&local85);
_2966 = ((frost$core$Object*) _2965);
frost$core$Frost$unref$frost$core$Object$Q(_2966);
*(&local85) = ((frost$io$File*) NULL);
_2970 = *(&local5);
_2971 = _2970 != NULL;
_2972 = (frost$core$Bit) {_2971};
_2973 = _2972.value;
if (_2973) goto block332; else goto block333;
block333:;
_2975 = (frost$core$Int) {386u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s396, _2975, &$s397);
abort(); // unreachable
block332:;
_2978 = _2970;
_2979 = *(&local10);
_2980 = org$frostlang$frostc$Main$toExecutable$frost$collections$Array$LTfrost$io$File$GT$frost$collections$Array$LTfrost$core$String$GT$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, _2815, _2816, _2950, _2978, _2979);
_2981 = ((frost$core$Object*) _2980);
frost$core$Frost$unref$frost$core$Object$Q(_2981);
_2983 = ((frost$core$Object*) _2950);
frost$core$Frost$unref$frost$core$Object$Q(_2983);
goto block315;
block317:;
_2986 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:389:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2989 = _2803.value;
_2990 = _2986.value;
_2991 = _2989 == _2990;
_2992 = (frost$core$Bit) {_2991};
_2994 = _2992.value;
if (_2994) goto block334; else goto block315;
block334:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:390
_2997 = *(&local5);
_2998 = _2997 != NULL;
_2999 = (frost$core$Bit) {_2998};
_3000 = _2999.value;
if (_3000) goto block336; else goto block337;
block337:;
_3002 = (frost$core$Int) {390u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s398, _3002, &$s399);
abort(); // unreachable
block336:;
_3005 = _2997;
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:390:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:184
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:184:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:139
_3010 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_3005, &$s400);
_3011 = &_3010->path;
_3012 = *_3011;
_3013 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_3012);
*(&local91) = ((frost$core$String*) NULL);
_3015 = ((frost$core$Object*) _3013);
frost$core$Frost$ref$frost$core$Object$Q(_3015);
_3017 = *(&local91);
_3018 = ((frost$core$Object*) _3017);
frost$core$Frost$unref$frost$core$Object$Q(_3018);
*(&local91) = _3013;
_3021 = ((frost$core$Object*) _3013);
frost$core$Frost$unref$frost$core$Object$Q(_3021);
_3023 = ((frost$core$Object*) _3010);
frost$core$Frost$unref$frost$core$Object$Q(_3023);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_3026 = *(&local91);
_3027 = _3026 == NULL;
_3028 = (frost$core$Bit) {_3027};
_3029 = _3028.value;
if (_3029) goto block340; else goto block341;
block340:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_3032 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_3032);
_3034 = *(&local91);
_3035 = ((frost$core$Object*) _3034);
frost$core$Frost$unref$frost$core$Object$Q(_3035);
*(&local91) = ((frost$core$String*) NULL);
*(&local90) = ((frost$io$File*) NULL);
_3039 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_3039);
goto block339;
block341:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:143
_3043 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_3044 = *(&local91);
_3045 = _3044 != NULL;
_3046 = (frost$core$Bit) {_3045};
_3047 = _3046.value;
if (_3047) goto block342; else goto block343;
block343:;
_3049 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s401, _3049, &$s402);
abort(); // unreachable
block342:;
_3052 = _3044;
frost$io$File$init$frost$core$String(_3043, _3052);
_3054 = _3043;
_3055 = ((frost$core$Object*) _3054);
frost$core$Frost$ref$frost$core$Object$Q(_3055);
_3057 = ((frost$core$Object*) _3043);
frost$core$Frost$unref$frost$core$Object$Q(_3057);
_3059 = *(&local91);
_3060 = ((frost$core$Object*) _3059);
frost$core$Frost$unref$frost$core$Object$Q(_3060);
*(&local91) = ((frost$core$String*) NULL);
*(&local90) = _3054;
_3064 = ((frost$core$Object*) _3054);
frost$core$Frost$ref$frost$core$Object$Q(_3064);
goto block339;
block339:;
_3067 = *(&local90);
_3068 = _3067 != NULL;
_3069 = (frost$core$Bit) {_3068};
_3070 = _3069.value;
if (_3070) goto block344; else goto block345;
block345:;
_3072 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s403, _3072, &$s404);
abort(); // unreachable
block344:;
_3075 = _3067;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:184:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:157
_3078 = frost$io$File$get_name$R$frost$core$String(_3005);
*(&local93) = ((frost$core$String*) NULL);
_3080 = ((frost$core$Object*) _3078);
frost$core$Frost$ref$frost$core$Object$Q(_3080);
_3082 = *(&local93);
_3083 = ((frost$core$Object*) _3082);
frost$core$Frost$unref$frost$core$Object$Q(_3083);
*(&local93) = _3078;
_3086 = ((frost$core$Object*) _3078);
frost$core$Frost$unref$frost$core$Object$Q(_3086);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_3089 = *(&local93);
_3090 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_3089, &$s405);
*(&local94) = _3090;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_3093 = *(&local94);
_3094 = !_3093.nonnull;
_3095 = (frost$core$Bit) {_3094};
_3096 = _3095.value;
if (_3096) goto block347; else goto block348;
block347:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_3099 = *(&local93);
_3100 = ((frost$core$Object*) _3099);
frost$core$Frost$ref$frost$core$Object$Q(_3100);
_3102 = *(&local93);
_3103 = ((frost$core$Object*) _3102);
frost$core$Frost$unref$frost$core$Object$Q(_3103);
*(&local93) = ((frost$core$String*) NULL);
*(&local92) = _3099;
_3107 = ((frost$core$Object*) _3099);
frost$core$Frost$ref$frost$core$Object$Q(_3107);
goto block346;
block348:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:162
_3111 = *(&local93);
_3112 = *(&local94);
_3113 = (frost$core$Bit) {false};
_3114 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _3112, _3113);
_3115 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_3111, _3114);
_3116 = ((frost$core$Object*) _3115);
frost$core$Frost$ref$frost$core$Object$Q(_3116);
_3118 = ((frost$core$Object*) _3115);
frost$core$Frost$unref$frost$core$Object$Q(_3118);
_3120 = *(&local93);
_3121 = ((frost$core$Object*) _3120);
frost$core$Frost$unref$frost$core$Object$Q(_3121);
*(&local93) = ((frost$core$String*) NULL);
*(&local92) = _3115;
_3125 = ((frost$core$Object*) _3115);
frost$core$Frost$ref$frost$core$Object$Q(_3125);
goto block346;
block346:;
_3128 = *(&local92);
_3129 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3128, &$s406);
_3130 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_3075, _3129);
_3131 = ((frost$core$Object*) _3130);
frost$core$Frost$ref$frost$core$Object$Q(_3131);
_3133 = ((frost$core$Object*) _3130);
frost$core$Frost$unref$frost$core$Object$Q(_3133);
_3135 = ((frost$core$Object*) _3129);
frost$core$Frost$unref$frost$core$Object$Q(_3135);
_3137 = ((frost$core$Object*) _3128);
frost$core$Frost$unref$frost$core$Object$Q(_3137);
_3139 = *(&local92);
_3140 = ((frost$core$Object*) _3139);
frost$core$Frost$unref$frost$core$Object$Q(_3140);
*(&local92) = ((frost$core$String*) NULL);
_3143 = ((frost$core$Object*) _3067);
frost$core$Frost$unref$frost$core$Object$Q(_3143);
_3145 = *(&local90);
_3146 = ((frost$core$Object*) _3145);
frost$core$Frost$unref$frost$core$Object$Q(_3146);
*(&local90) = ((frost$io$File*) NULL);
_3150 = *(&local5);
_3151 = _3150 != NULL;
_3152 = (frost$core$Bit) {_3151};
_3153 = _3152.value;
if (_3153) goto block349; else goto block350;
block350:;
_3155 = (frost$core$Int) {390u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s407, _3155, &$s408);
abort(); // unreachable
block349:;
_3158 = _3150;
_3159 = *(&local10);
_3160 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, _3130, _3158, _3159);
_3161 = ((frost$core$Object*) _3160);
frost$core$Frost$unref$frost$core$Object$Q(_3161);
_3163 = ((frost$core$Object*) _3130);
frost$core$Frost$unref$frost$core$Object$Q(_3163);
goto block315;
block315:;
_3216 = *(&local43);
_3217 = ((frost$core$Object*) _3216);
frost$core$Frost$unref$frost$core$Object$Q(_3217);
*(&local43) = ((frost$io$File*) NULL);
_3220 = *(&local9);
_3221 = ((frost$core$Object*) _3220);
frost$core$Frost$unref$frost$core$Object$Q(_3221);
*(&local9) = ((frost$core$String*) NULL);
_3224 = *(&local5);
_3225 = ((frost$core$Object*) _3224);
frost$core$Frost$unref$frost$core$Object$Q(_3225);
*(&local5) = ((frost$io$File*) NULL);
_3228 = *(&local4);
_3229 = ((frost$core$Object*) _3228);
frost$core$Frost$unref$frost$core$Object$Q(_3229);
*(&local4) = ((frost$collections$Array*) NULL);
_3232 = *(&local3);
_3233 = ((frost$core$Object*) _3232);
frost$core$Frost$unref$frost$core$Object$Q(_3233);
*(&local3) = ((frost$collections$Array*) NULL);
_3236 = *(&local2);
_3237 = ((frost$core$Object*) _3236);
frost$core$Frost$unref$frost$core$Object$Q(_3237);
*(&local2) = ((frost$collections$Array*) NULL);
_3240 = *(&local1);
_3241 = ((frost$core$Object*) _3240);
frost$core$Frost$unref$frost$core$Object$Q(_3241);
*(&local1) = ((frost$collections$Array*) NULL);
_3244 = *(&local0);
_3245 = ((frost$core$Object*) _3244);
frost$core$Frost$unref$frost$core$Object$Q(_3245);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block311:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:395
_3169 = *(&local54);
_3170 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:395:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3173 = _3169.value;
_3174 = _3170.value;
_3175 = _3173 == _3174;
_3176 = (frost$core$Bit) {_3175};
_3178 = _3176.value;
if (_3178) goto block351; else goto block353;
block351:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:397
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:397:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s409);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s410);
goto block352;
block353:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:401
_3193 = *(&local54);
_3194 = frost$core$Int$get_asString$R$frost$core$String(_3193);
_3195 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3194, &$s411);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:401:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_3195);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s412);
_3205 = ((frost$core$Object*) _3195);
frost$core$Frost$unref$frost$core$Object$Q(_3205);
_3207 = ((frost$core$Object*) _3194);
frost$core$Frost$unref$frost$core$Object$Q(_3207);
goto block352;
block352:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:403
_3211 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_3211);
_3213 = (frost$core$Int) {403u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s413, _3213, &$s414);
abort(); // unreachable

}
void frostMain(frost$collections$ListView* param0) {
printf("startup!\n");
frost$collections$CollectionView* _1;
$fn415 _2;
frost$core$Int _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _9;
frost$collections$ListView* _11;
frost$core$Int _12;
$fn416 _13;
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
$fn417 _31;
frost$collections$ListView* _32;
frost$collections$ListView* _33;
frost$core$Object* _35;
frost$core$Object* _37;
frost$collections$CollectionView* _42;
$fn418 _43;
frost$core$Int _44;
frost$core$Int _45;
int64_t _48;
int64_t _49;
bool _50;
frost$core$Bit _51;
bool _53;
frost$collections$ListView* _55;
frost$core$Int _56;
$fn419 _57;
frost$core$Object* _58;
frost$core$String* _59;
frost$core$Bit _60;
bool _61;
frost$core$Object* _62;
org$frostlang$frostc$Bench* _66;
$fn420 _68;
frost$core$Object* _70;
org$frostlang$frostc$Main* _75;
frost$core$Object* _78;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:409
_1 = ((frost$collections$CollectionView*) param0);
ITable* $tmp421 = _1->$class->itable;
while ($tmp421->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp421 = $tmp421->next;
}
_2 = $tmp421->methods[0];
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
ITable* $tmp422 = _11->$class->itable;
while ($tmp422->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp422 = $tmp422->next;
}
_13 = $tmp422->methods[0];
_14 = _13(_11, _12);
_15 = ((frost$core$String*) _14);
_16 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_15, &$s423);
_17 = _16.value;
_18 = _14;
frost$core$Frost$unref$frost$core$Object$Q(_18);
if (_17) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:410
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:411
_24 = (org$frostlang$frostc$Main*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main), (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init(_24);
_26 = param0;
_27 = (frost$core$Int) {1u};
_28 = ((frost$core$Int$nullable) { _27, true });
_29 = (frost$core$Bit) {false};
_30 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(_28, ((frost$core$Int$nullable) { .nonnull = false }), _29);
ITable* $tmp424 = _26->$class->itable;
while ($tmp424->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp424 = $tmp424->next;
}
_31 = $tmp424->methods[2];
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:414
_42 = ((frost$collections$CollectionView*) param0);
ITable* $tmp425 = _42->$class->itable;
while ($tmp425->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp425 = $tmp425->next;
}
_43 = $tmp425->methods[0];
_44 = _43(_42);
_45 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:414:23
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
ITable* $tmp426 = _55->$class->itable;
while ($tmp426->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp426 = $tmp426->next;
}
_57 = $tmp426->methods[0];
_58 = _57(_55, _56);
_59 = ((frost$core$String*) _58);
_60 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_59, &$s427);
_61 = _60.value;
_62 = _58;
frost$core$Frost$unref$frost$core$Object$Q(_62);
if (_61) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:415
_66 = (org$frostlang$frostc$Bench*) frostObjectAlloc(sizeof(org$frostlang$frostc$Bench), (frost$core$Class*) &org$frostlang$frostc$Bench$class);
org$frostlang$frostc$Bench$init(_66);
_68 = ($fn428) _66->$class->vtable[4];
_68(_66);
_70 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_70);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:416
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:418
_75 = (org$frostlang$frostc$Main*) frostObjectAlloc(sizeof(org$frostlang$frostc$Main), (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init(_75);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT(_75, param0);
_78 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_78);
printf("finish!\n");
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

