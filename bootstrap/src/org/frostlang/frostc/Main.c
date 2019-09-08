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

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn3)(frost$io$InputStream*);
typedef frost$core$String* (*$fn4)(frost$io$InputStream*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);
typedef frost$core$String* (*$fn11)(frost$core$Object*);
typedef frost$core$String* (*$fn14)(frost$io$InputStream*);
typedef frost$core$String* (*$fn15)(frost$io$InputStream*);
typedef frost$core$String* (*$fn18)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn23)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn24)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn25)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn26)(frost$core$Object*);
typedef frost$core$String* (*$fn27)(frost$core$Object*);
typedef frost$core$String* (*$fn28)(frost$io$InputStream*);
typedef frost$core$String* (*$fn29)(frost$io$InputStream*);
typedef frost$core$String* (*$fn30)(frost$core$Object*);
typedef frost$core$String* (*$fn45)(frost$core$Object*);
typedef frost$core$String* (*$fn58)(frost$core$Object*);
typedef frost$core$String* (*$fn61)(frost$io$InputStream*);
typedef frost$core$String* (*$fn62)(frost$io$InputStream*);
typedef frost$core$String* (*$fn65)(frost$core$Object*);
typedef frost$core$Error* (*$fn70)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn71)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn72)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn73)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn74)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn75)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn76)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn80)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn83)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn87)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn90)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn94)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn99)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn100)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Maybe* (*$fn101)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$String* (*$fn102)(frost$core$Object*);
typedef frost$core$String* (*$fn103)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn104)(frost$core$Object*);
typedef frost$core$String* (*$fn105)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn106)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn107)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn108)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn109)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Bit (*$fn110)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn111)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn112)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn113)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn114)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn115)(frost$core$Object*);
typedef frost$core$String* (*$fn116)(frost$core$Object*);
typedef frost$core$Bit (*$fn117)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn118)(frost$collections$CollectionView*);
typedef void (*$fn119)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn120)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn121)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn122)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn123)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn124)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn125)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn126)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn127)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn128)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn129)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn130)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn131)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn132)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn133)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn134)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn135)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn136)(frost$collections$CollectionView*);
typedef void (*$fn137)(org$frostlang$frostc$CodeGenerator*);
typedef frost$core$String* (*$fn138)(frost$core$Object*);
typedef frost$core$String* (*$fn139)(frost$core$Object*);
typedef frost$core$String* (*$fn140)(frost$core$Object*);
typedef frost$core$String* (*$fn141)(frost$core$Object*);
typedef frost$core$Bit (*$fn142)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn143)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Maybe* (*$fn146)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$String* (*$fn147)(frost$core$Object*);
typedef frost$core$String* (*$fn155)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn166)(frost$core$Object*);
typedef frost$core$String* (*$fn170)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn185)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn204)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn219)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn222)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn294)(frost$core$Object*);
typedef frost$core$String* (*$fn303)(frost$core$Object*);
typedef void (*$fn320)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef frost$core$String* (*$fn347)(frost$core$Object*);
typedef frost$core$String* (*$fn350)(frost$core$Object*);
typedef frost$core$String* (*$fn356)(frost$core$Object*);
typedef frost$core$String* (*$fn359)(frost$core$Object*);
typedef frost$core$Int (*$fn397)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn398)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$ListView* (*$fn399)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$Q$GT);
typedef frost$core$Int (*$fn400)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn401)(frost$collections$ListView*, frost$core$Int);
typedef void (*$fn402)(org$frostlang$frostc$Bench*);
typedef void (*$fn410)(org$frostlang$frostc$Bench*);

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
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x66\x72\x6f\x73\x74", 7, -4044657180966489978, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x6d", 3, -2354502893290026621, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, -4341477490894522756, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x69\x62", 3, 1317978099017241196, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c", 2, 563044544515952796, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 6043963258232676957, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, -3218342706179030910, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x67", 2, 563056639143863117, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x66\x72\x6f\x73\x74\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -5336904199903828035, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x66\x72\x6f\x73\x74\x27\x2e", 38, 2414752363581770017, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, -3725874908572553427, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, -8537804258594104524, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, -1426593306435499698, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, 2993450520568953317, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -2854313959629863208, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -293442963066226919, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4f", 2, 563012658678734677, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, -36708640889814861, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, -8241422096120224677, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x53", 2, 562999464539196145, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, -36708640889814861, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, -8229934398630946849, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66", 2, 563055539632234906, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -8357866846417911189, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -8762049995398847258, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x65", 3, -4390446579619712681, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f", 1, -5808550276084140354, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6c", 2, 625221927078985221, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68", 1, -5808546977549255721, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63", 1, -5808554674130653198, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, -8607590772689110736, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62", 4, -5818263582595368203, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, -8940199916074753387, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x69", 2, 563041245981068163, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 8483394141060772687, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, -3260734117535617165, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 1755487887012249427, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, -6268259042323653607, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -540522989212751288, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62\x73", 5, -7219040758408810062, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 2088835727452422272, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, 1894309652117697527, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 6252797618683371763, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 565862592818489914, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 565862592818489914, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, -5255104731122465439, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, -5255104731122465439, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, 6378635575011181341, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -5478415099818808347, NULL };
static frost$core$String $s276 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, -4651943656929293709, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 6252797618683371763, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, 7987826434129205590, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 3928554745973598786, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 107, -867402159131882985, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, -5861202104196742523, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x77\x61\x72\x6e\x69\x6e\x67\x3a\x20", 11, 2890546785777135939, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x77\x61\x72\x6e\x69\x6e\x67", 9, -3177307723557508888, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x61\x72\x6e\x69\x6e\x67\x73", 9, 8539650515262073630, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s367 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 6252797618683371763, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s372 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s388 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, -123751612459244079, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 3639570550927944898, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, -1438914547765079724, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x65\x70\x65\x61\x74", 8, 3780951491120021928, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x62\x65\x6e\x63\x68", 7, -7026121568011644677, NULL };

void org$frostlang$frostc$Main$init(org$frostlang$frostc$Main* param0) {

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
FROST_ASSERT(24 == sizeof(frost$io$File));
_5 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
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
frost$io$File* org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(org$frostlang$frostc$Main* param0, frost$io$File* param1, frost$io$File* param2, frost$core$Bit param3) {

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
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_1 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
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
_76 = (frost$core$Error**) (_69->$data + 0);
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
_84 = (frost$core$Object**) (_69->$data + 0);
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
frost$core$String* _50;
frost$core$Int64 _53;
int64_t _56;
int64_t _57;
frost$core$Int _58;
frost$collections$Array* _60;
frost$core$Object* _61;
frost$core$Object* _63;
frost$core$Object* _67;
frost$collections$Array* _69;
frost$core$Object* _70;
frost$core$Object* _73;
frost$core$Object* _75;
frost$collections$Array* _78;
frost$collections$Iterable* _79;
frost$collections$Iterable* _80;
$fn23 _81;
frost$collections$Iterator* _82;
frost$collections$Iterator* _83;
frost$collections$Iterator* _85;
$fn24 _86;
frost$core$Bit _87;
bool _88;
frost$collections$Iterator* _91;
$fn25 _92;
frost$core$Object* _93;
frost$core$String* _94;
frost$core$Object* _95;
frost$core$String* _97;
frost$core$Object* _98;
frost$io$File* _102;
frost$core$String* _103;
frost$core$Object* _106;
frost$io$File* _108;
frost$core$Object* _109;
frost$core$Object* _112;
frost$collections$Array* _115;
frost$collections$Array* _116;
frost$io$File* _117;
frost$io$File* _120;
frost$core$String** _121;
frost$core$String* _122;
frost$core$String* _123;
frost$core$Object* _125;
frost$core$String* _127;
frost$core$Object* _128;
frost$core$Object* _131;
frost$core$Object* _133;
frost$core$String* _136;
bool _137;
frost$core$Bit _138;
bool _139;
frost$core$Object* _142;
frost$core$String* _144;
frost$core$Object* _145;
frost$core$Object* _149;
frost$io$File* _153;
frost$core$String* _154;
bool _155;
frost$core$Bit _156;
bool _157;
frost$core$Int _159;
frost$core$String* _162;
frost$io$File* _164;
frost$core$Object* _165;
frost$core$Object* _167;
frost$core$String* _169;
frost$core$Object* _170;
frost$core$Object* _174;
frost$io$File* _177;
bool _178;
frost$core$Bit _179;
bool _180;
frost$core$Int _182;
frost$io$File* _185;
frost$core$Object* _186;
$fn26 _189;
frost$core$String* _190;
frost$core$String* _191;
frost$core$Object* _192;
frost$core$Object* _194;
frost$core$Object* _196;
frost$core$Object* _199;
frost$core$Object* _201;
frost$core$Object* _203;
frost$io$File* _206;
frost$core$String** _211;
frost$core$String* _212;
frost$core$String$Index$nullable _213;
frost$core$String$Index$nullable _216;
bool _217;
frost$core$Bit _218;
bool _219;
frost$core$String** _222;
frost$core$String* _223;
frost$core$String** _224;
frost$core$String* _225;
frost$core$String$Index$nullable _226;
bool _227;
frost$core$Bit _228;
bool _229;
frost$core$Int _231;
frost$core$String$Index _234;
frost$core$String$Index _235;
frost$core$String$Index$nullable _236;
frost$core$Bit _237;
frost$core$Range$LTfrost$core$String$Index$Q$GT _238;
frost$core$String* _239;
frost$core$Object* _240;
frost$core$Object* _242;
frost$core$Object* _245;
frost$core$String** _250;
frost$core$String* _251;
frost$core$Object* _252;
frost$core$Object* _255;
frost$core$String* _259;
frost$core$Object* _261;
frost$core$String* _263;
frost$core$Object* _264;
frost$core$Object* _267;
frost$core$String* _270;
frost$core$String$Index _273;
frost$core$String$Index$nullable _274;
frost$core$String$Index$nullable _278;
bool _279;
frost$core$Bit _280;
bool _281;
frost$core$String* _284;
frost$core$Object* _285;
frost$core$String* _287;
frost$core$Object* _288;
frost$core$String* _291;
frost$core$Object* _292;
frost$core$Object* _296;
frost$core$String* _300;
frost$core$String$Index$nullable _301;
frost$core$Bit _302;
frost$core$Range$LTfrost$core$String$Index$Q$GT _303;
frost$core$String* _304;
frost$core$Object* _305;
frost$core$Object* _307;
frost$core$String* _309;
frost$core$Object* _310;
frost$core$String* _313;
frost$core$Object* _314;
frost$core$Object* _318;
frost$core$String* _321;
frost$core$Object* _323;
frost$core$String* _325;
frost$core$Object* _326;
frost$core$Object* _329;
frost$core$String* _332;
frost$core$Bit _333;
bool _334;
frost$core$Int _336;
frost$core$String* _340;
frost$core$Int _341;
frost$core$Int$nullable _342;
frost$core$Bit _343;
frost$core$Range$LTfrost$core$Int$Q$GT _344;
frost$core$String* _345;
frost$core$Object* _346;
frost$core$String* _348;
frost$core$Object* _349;
frost$core$Object* _352;
frost$collections$Array* _355;
frost$collections$Array* _356;
frost$core$String* _357;
frost$core$String* _358;
frost$core$Object* _359;
frost$core$Object* _361;
frost$core$String* _363;
frost$core$Object* _364;
frost$core$String* _367;
frost$core$Object* _368;
frost$io$File* _371;
frost$core$Object* _372;
frost$io$File* _375;
frost$core$Object* _376;
frost$core$Object* _379;
frost$core$String* _381;
frost$core$Object* _382;
frost$core$Object* _386;
frost$collections$Array* _389;
frost$collections$Array* _390;
frost$core$Object* _391;
frost$collections$Array* _394;
frost$collections$Array* _395;
frost$core$Object* _396;
frost$core$Bit* _399;
frost$core$Bit _400;
bool _401;
frost$collections$Array* _404;
frost$collections$Array* _405;
frost$core$Object* _406;
frost$collections$Array* _410;
frost$collections$Array* _411;
frost$core$Object* _412;
frost$collections$Array* _415;
frost$collections$Array* _416;
frost$core$String** _417;
frost$core$String* _418;
frost$core$Object* _419;
frost$io$File** _426;
frost$io$File* _427;
frost$core$String** _428;
frost$core$String* _429;
frost$collections$Array* _430;
frost$collections$ListView* _431;
frost$core$Maybe* _432;
frost$core$Maybe* _433;
frost$core$Int* _434;
frost$core$Int _435;
int64_t _436;
bool _437;
frost$core$Error** _439;
frost$core$Error* _440;
frost$core$Object* _441;
frost$core$Object* _444;
frost$core$Error* _480;
frost$core$Object* _481;
$fn27 _484;
frost$core$String* _485;
frost$core$Object* _492;
frost$core$Int _496;
frost$core$Int _498;
frost$core$Object** _447;
frost$core$Object* _448;
frost$core$System$Process* _449;
frost$core$Object* _450;
frost$core$System$Process* _452;
frost$core$Object* _453;
frost$core$Object* _456;
frost$core$System$Process* _459;
frost$io$InputStream* _460;
$fn28 _461;
frost$core$String* _462;
frost$core$Object* _464;
frost$core$Object* _466;
frost$core$System$Process* _469;
frost$io$InputStream* _470;
$fn29 _471;
frost$core$String* _472;
frost$core$Object* _474;
frost$core$Object* _476;
frost$core$Error* _501;
frost$core$Object* _502;
frost$core$System$Process* _506;
frost$core$Int _507;
bool _512;
bool _513;
frost$core$Bit _514;
bool _516;
frost$core$Error* _521;
bool _522;
frost$core$Object* _524;
bool _526;
frost$core$Bit _527;
bool _528;
frost$core$Int _530;
frost$core$Error* _533;
frost$core$Object* _535;
frost$core$Error* _542;
frost$core$Object* _543;
$fn30 _546;
frost$core$String* _547;
frost$core$Object* _554;
frost$core$Int _558;
frost$core$Int _560;
frost$core$Object* _538;
frost$core$Error* _563;
frost$core$Object* _564;
frost$core$Int _569;
frost$core$Int _570;
int64_t _571;
int64_t _572;
bool _573;
frost$core$Bit _574;
bool _575;
frost$core$Int _578;
frost$core$Int _580;
frost$core$Object* _584;
frost$core$System$Process* _586;
frost$core$Object* _587;
frost$collections$Array* _590;
frost$core$Object* _591;
frost$collections$Array* _594;
frost$core$Object* _595;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:98
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_1 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:99
_14 = *(&local0);
_15 = _14;
_16 = &param1->path;
_17 = *_16;
_18 = ((frost$core$Object*) _17);
frost$collections$Array$add$frost$collections$Array$T(_15, _18);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:100
_21 = *(&local0);
_22 = _21;
_23 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
_24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s31, _23);
_25 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_24, &$s32);
_26 = ((frost$core$Object*) _25);
frost$collections$Array$add$frost$collections$Array$T(_22, _26);
_28 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_28);
_30 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_32);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:101
_35 = *(&local0);
_36 = _35;
_37 = ((frost$core$Object*) &$s33);
frost$collections$Array$add$frost$collections$Array$T(_36, _37);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:102
_40 = *(&local0);
_41 = _40;
_42 = ((frost$core$Object*) &$s34);
frost$collections$Array$add$frost$collections$Array$T(_41, _42);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:103
_45 = *(&local0);
_46 = _45;
_47 = ((frost$core$Object*) &$s35);
frost$collections$Array$add$frost$collections$Array$T(_46, _47);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:104
_50 = org$frostlang$frostc$Config$icuLibraries$R$frost$core$String();
// begin inline call to function frost.core.String.split(delimiter:frost.core.String):frost.collections.Array<frost.core.String> from Main.frost:104:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1378
_53 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_56 = _53.value;
_57 = ((int64_t) _56);
_58 = (frost$core$Int) {_57};
_60 = frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(_50, &$s36, _58);
_61 = ((frost$core$Object*) _60);
frost$core$Frost$ref$frost$core$Object$Q(_61);
_63 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_63);
*(&local1) = ((frost$collections$Array*) NULL);
_67 = ((frost$core$Object*) _60);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = *(&local1);
_70 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_70);
*(&local1) = _60;
_73 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_73);
_75 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_75);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:105
_78 = *(&local1);
_79 = ((frost$collections$Iterable*) _78);
_80 = _79;
ITable* $tmp37 = _80->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp37 = $tmp37->next;
}
_81 = $tmp37->methods[0];
_82 = _81(_80);
_83 = _82;
goto block3;
block3:;
_85 = _83;
ITable* $tmp38 = _85->$class->itable;
while ($tmp38->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp38 = $tmp38->next;
}
_86 = $tmp38->methods[0];
_87 = _86(_85);
_88 = _87.value;
if (_88) goto block5; else goto block4;
block4:;
*(&local2) = ((frost$core$String*) NULL);
_91 = _83;
ITable* $tmp39 = _91->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp39 = $tmp39->next;
}
_92 = $tmp39->methods[1];
_93 = _92(_91);
_94 = ((frost$core$String*) _93);
_95 = ((frost$core$Object*) _94);
frost$core$Frost$ref$frost$core$Object$Q(_95);
_97 = *(&local2);
_98 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_98);
*(&local2) = _94;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:106
FROST_ASSERT(24 == sizeof(frost$io$File));
_102 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
_103 = *(&local2);
frost$io$File$init$frost$core$String(_102, _103);
*(&local3) = ((frost$io$File*) NULL);
_106 = ((frost$core$Object*) _102);
frost$core$Frost$ref$frost$core$Object$Q(_106);
_108 = *(&local3);
_109 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_109);
*(&local3) = _102;
_112 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_112);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:107
_115 = *(&local0);
_116 = _115;
_117 = *(&local3);
// begin inline call to function frost.io.File.get_parent():frost.io.File? from Main.frost:107:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_120 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_117, &$s40);
_121 = &_120->path;
_122 = *_121;
_123 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_122);
*(&local5) = ((frost$core$String*) NULL);
_125 = ((frost$core$Object*) _123);
frost$core$Frost$ref$frost$core$Object$Q(_125);
_127 = *(&local5);
_128 = ((frost$core$Object*) _127);
frost$core$Frost$unref$frost$core$Object$Q(_128);
*(&local5) = _123;
_131 = ((frost$core$Object*) _123);
frost$core$Frost$unref$frost$core$Object$Q(_131);
_133 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_133);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_136 = *(&local5);
_137 = _136 == NULL;
_138 = (frost$core$Bit) {_137};
_139 = _138.value;
if (_139) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
_142 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_142);
_144 = *(&local5);
_145 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_145);
*(&local5) = ((frost$core$String*) NULL);
*(&local4) = ((frost$io$File*) NULL);
_149 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_149);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
_153 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
_154 = *(&local5);
_155 = _154 != NULL;
_156 = (frost$core$Bit) {_155};
_157 = _156.value;
if (_157) goto block9; else goto block10;
block10:;
_159 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s41, _159, &$s42);
abort(); // unreachable
block9:;
_162 = _154;
frost$io$File$init$frost$core$String(_153, _162);
_164 = _153;
_165 = ((frost$core$Object*) _164);
frost$core$Frost$ref$frost$core$Object$Q(_165);
_167 = ((frost$core$Object*) _153);
frost$core$Frost$unref$frost$core$Object$Q(_167);
_169 = *(&local5);
_170 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_170);
*(&local5) = ((frost$core$String*) NULL);
*(&local4) = _164;
_174 = ((frost$core$Object*) _164);
frost$core$Frost$ref$frost$core$Object$Q(_174);
goto block6;
block6:;
_177 = *(&local4);
_178 = _177 != NULL;
_179 = (frost$core$Bit) {_178};
_180 = _179.value;
if (_180) goto block11; else goto block12;
block12:;
_182 = (frost$core$Int) {107u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s43, _182, &$s44);
abort(); // unreachable
block11:;
_185 = _177;
_186 = ((frost$core$Object*) _185);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:107:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_189 = ($fn45) _186->$class->vtable[0];
_190 = _189(_186);
_191 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s46, _190);
_192 = ((frost$core$Object*) _191);
frost$core$Frost$ref$frost$core$Object$Q(_192);
_194 = ((frost$core$Object*) _191);
frost$core$Frost$unref$frost$core$Object$Q(_194);
_196 = ((frost$core$Object*) _190);
frost$core$Frost$unref$frost$core$Object$Q(_196);
_199 = ((frost$core$Object*) _191);
frost$collections$Array$add$frost$collections$Array$T(_116, _199);
_201 = ((frost$core$Object*) _191);
frost$core$Frost$unref$frost$core$Object$Q(_201);
_203 = ((frost$core$Object*) _177);
frost$core$Frost$unref$frost$core$Object$Q(_203);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:108
_206 = *(&local3);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from Main.frost:108:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
// begin inline call to function frost.io.File.get_name():frost.core.String from File.frost:158:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
_211 = &_206->path;
_212 = *_211;
_213 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_212, &$s47);
*(&local8) = _213;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
_216 = *(&local8);
_217 = _216.nonnull;
_218 = (frost$core$Bit) {_217};
_219 = _218.value;
if (_219) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:150
_222 = &_206->path;
_223 = *_222;
_224 = &_206->path;
_225 = *_224;
_226 = *(&local8);
_227 = _226.nonnull;
_228 = (frost$core$Bit) {_227};
_229 = _228.value;
if (_229) goto block19; else goto block20;
block20:;
_231 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s48, _231, &$s49);
abort(); // unreachable
block19:;
_234 = ((frost$core$String$Index) _226.value);
_235 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_225, _234);
_236 = ((frost$core$String$Index$nullable) { _235, true });
_237 = (frost$core$Bit) {false};
_238 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_236, ((frost$core$String$Index$nullable) { .nonnull = false }), _237);
_239 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_223, _238);
_240 = ((frost$core$Object*) _239);
frost$core$Frost$ref$frost$core$Object$Q(_240);
_242 = ((frost$core$Object*) _239);
frost$core$Frost$unref$frost$core$Object$Q(_242);
*(&local7) = _239;
_245 = ((frost$core$Object*) _239);
frost$core$Frost$ref$frost$core$Object$Q(_245);
goto block15;
block18:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:153
_250 = &_206->path;
_251 = *_250;
_252 = ((frost$core$Object*) _251);
frost$core$Frost$ref$frost$core$Object$Q(_252);
*(&local7) = _251;
_255 = ((frost$core$Object*) _251);
frost$core$Frost$ref$frost$core$Object$Q(_255);
goto block15;
block17:;
goto block15;
block15:;
_259 = *(&local7);
*(&local9) = ((frost$core$String*) NULL);
_261 = ((frost$core$Object*) _259);
frost$core$Frost$ref$frost$core$Object$Q(_261);
_263 = *(&local9);
_264 = ((frost$core$Object*) _263);
frost$core$Frost$unref$frost$core$Object$Q(_264);
*(&local9) = _259;
_267 = ((frost$core$Object*) _259);
frost$core$Frost$unref$frost$core$Object$Q(_267);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_270 = *(&local9);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:159:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
_273 = frost$core$String$get_end$R$frost$core$String$Index(_270);
_274 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_270, &$s50, _273);
*(&local10) = _274;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_278 = *(&local10);
_279 = !_278.nonnull;
_280 = (frost$core$Bit) {_279};
_281 = _280.value;
if (_281) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
_284 = *(&local9);
_285 = ((frost$core$Object*) _284);
frost$core$Frost$ref$frost$core$Object$Q(_285);
_287 = *(&local9);
_288 = ((frost$core$Object*) _287);
frost$core$Frost$unref$frost$core$Object$Q(_288);
*(&local9) = ((frost$core$String*) NULL);
_291 = *(&local7);
_292 = ((frost$core$Object*) _291);
frost$core$Frost$unref$frost$core$Object$Q(_292);
*(&local7) = ((frost$core$String*) NULL);
*(&local6) = _284;
_296 = ((frost$core$Object*) _284);
frost$core$Frost$ref$frost$core$Object$Q(_296);
goto block14;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
_300 = *(&local9);
_301 = *(&local10);
_302 = (frost$core$Bit) {false};
_303 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _301, _302);
_304 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_300, _303);
_305 = ((frost$core$Object*) _304);
frost$core$Frost$ref$frost$core$Object$Q(_305);
_307 = ((frost$core$Object*) _304);
frost$core$Frost$unref$frost$core$Object$Q(_307);
_309 = *(&local9);
_310 = ((frost$core$Object*) _309);
frost$core$Frost$unref$frost$core$Object$Q(_310);
*(&local9) = ((frost$core$String*) NULL);
_313 = *(&local7);
_314 = ((frost$core$Object*) _313);
frost$core$Frost$unref$frost$core$Object$Q(_314);
*(&local7) = ((frost$core$String*) NULL);
*(&local6) = _304;
_318 = ((frost$core$Object*) _304);
frost$core$Frost$ref$frost$core$Object$Q(_318);
goto block14;
block14:;
_321 = *(&local6);
*(&local11) = ((frost$core$String*) NULL);
_323 = ((frost$core$Object*) _321);
frost$core$Frost$ref$frost$core$Object$Q(_323);
_325 = *(&local11);
_326 = ((frost$core$Object*) _325);
frost$core$Frost$unref$frost$core$Object$Q(_326);
*(&local11) = _321;
_329 = ((frost$core$Object*) _321);
frost$core$Frost$unref$frost$core$Object$Q(_329);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:109
_332 = *(&local11);
_333 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_332, &$s51);
_334 = _333.value;
if (_334) goto block24; else goto block25;
block25:;
_336 = (frost$core$Int) {109u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s52, _336);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:110
_340 = *(&local11);
_341 = (frost$core$Int) {3u};
_342 = ((frost$core$Int$nullable) { _341, true });
_343 = (frost$core$Bit) {false};
_344 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(_342, ((frost$core$Int$nullable) { .nonnull = false }), _343);
_345 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String(_340, _344);
_346 = ((frost$core$Object*) _345);
frost$core$Frost$ref$frost$core$Object$Q(_346);
_348 = *(&local11);
_349 = ((frost$core$Object*) _348);
frost$core$Frost$unref$frost$core$Object$Q(_349);
*(&local11) = _345;
_352 = ((frost$core$Object*) _345);
frost$core$Frost$unref$frost$core$Object$Q(_352);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:111
_355 = *(&local0);
_356 = _355;
_357 = *(&local11);
_358 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s53, _357);
_359 = ((frost$core$Object*) _358);
frost$collections$Array$add$frost$collections$Array$T(_356, _359);
_361 = ((frost$core$Object*) _358);
frost$core$Frost$unref$frost$core$Object$Q(_361);
_363 = *(&local11);
_364 = ((frost$core$Object*) _363);
frost$core$Frost$unref$frost$core$Object$Q(_364);
*(&local11) = ((frost$core$String*) NULL);
_367 = *(&local6);
_368 = ((frost$core$Object*) _367);
frost$core$Frost$unref$frost$core$Object$Q(_368);
*(&local6) = ((frost$core$String*) NULL);
_371 = *(&local4);
_372 = ((frost$core$Object*) _371);
frost$core$Frost$unref$frost$core$Object$Q(_372);
*(&local4) = ((frost$io$File*) NULL);
_375 = *(&local3);
_376 = ((frost$core$Object*) _375);
frost$core$Frost$unref$frost$core$Object$Q(_376);
*(&local3) = ((frost$io$File*) NULL);
_379 = _93;
frost$core$Frost$unref$frost$core$Object$Q(_379);
_381 = *(&local2);
_382 = ((frost$core$Object*) _381);
frost$core$Frost$unref$frost$core$Object$Q(_382);
*(&local2) = ((frost$core$String*) NULL);
goto block3;
block5:;
_386 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_386);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:113
_389 = *(&local0);
_390 = _389;
_391 = ((frost$core$Object*) &$s54);
frost$collections$Array$add$frost$collections$Array$T(_390, _391);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:114
_394 = *(&local0);
_395 = _394;
_396 = ((frost$core$Object*) &$s55);
frost$collections$Array$add$frost$collections$Array$T(_395, _396);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:115
_399 = &param0->debug;
_400 = *_399;
_401 = _400.value;
if (_401) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:116
_404 = *(&local0);
_405 = _404;
_406 = ((frost$core$Object*) &$s56);
frost$collections$Array$add$frost$collections$Array$T(_405, _406);
goto block27;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:118
_410 = *(&local0);
_411 = _410;
_412 = ((frost$core$Object*) &$s57);
frost$collections$Array$add$frost$collections$Array$T(_411, _412);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:119
_415 = *(&local0);
_416 = _415;
_417 = &param2->path;
_418 = *_417;
_419 = ((frost$core$Object*) _418);
frost$collections$Array$add$frost$collections$Array$T(_416, _419);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:120
*(&local12) = ((frost$core$System$Process*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:121
*(&local13) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:122
_426 = &param0->clang;
_427 = *_426;
_428 = &_427->path;
_429 = *_428;
_430 = *(&local0);
_431 = ((frost$collections$ListView*) _430);
_432 = frost$core$System$exec$frost$core$String$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$Maybe$LTfrost$core$System$Process$GT(_429, _431);
_433 = _432;
_434 = &_433->$rawValue;
_435 = *_434;
_436 = _435.value;
_437 = _436 == 0u;
if (_437) goto block30; else goto block31;
block31:;
_439 = (frost$core$Error**) (_432->$data + 0);
_440 = *_439;
_441 = ((frost$core$Object*) _440);
frost$core$Frost$ref$frost$core$Object$Q(_441);
*(&local13) = _440;
_444 = ((frost$core$Object*) _432);
frost$core$Frost$unref$frost$core$Object$Q(_444);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:127
_480 = *(&local13);
_481 = ((frost$core$Object*) _480);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:127:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_484 = ($fn58) _481->$class->vtable[0];
_485 = _484(_481);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_485);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_492 = ((frost$core$Object*) _485);
frost$core$Frost$unref$frost$core$Object$Q(_492);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:128
_496 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_496);
_498 = (frost$core$Int) {128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s59, _498, &$s60);
abort(); // unreachable
block30:;
_447 = (frost$core$Object**) (_432->$data + 0);
_448 = *_447;
_449 = ((frost$core$System$Process*) _448);
_450 = ((frost$core$Object*) _449);
frost$core$Frost$ref$frost$core$Object$Q(_450);
_452 = *(&local12);
_453 = ((frost$core$Object*) _452);
frost$core$Frost$unref$frost$core$Object$Q(_453);
*(&local12) = _449;
_456 = ((frost$core$Object*) _432);
frost$core$Frost$unref$frost$core$Object$Q(_456);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:123
_459 = *(&local12);
_460 = frost$core$System$Process$standardOutput$R$frost$io$InputStream(_459);
_461 = ($fn61) _460->$class->vtable[14];
_462 = _461(_460);
frost$io$Console$printError$frost$core$String(_462);
_464 = ((frost$core$Object*) _462);
frost$core$Frost$unref$frost$core$Object$Q(_464);
_466 = ((frost$core$Object*) _460);
frost$core$Frost$unref$frost$core$Object$Q(_466);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:124
_469 = *(&local12);
_470 = frost$core$System$Process$standardError$R$frost$io$InputStream(_469);
_471 = ($fn62) _470->$class->vtable[14];
_472 = _471(_470);
frost$io$Console$printError$frost$core$String(_472);
_474 = ((frost$core$Object*) _472);
frost$core$Frost$unref$frost$core$Object$Q(_474);
_476 = ((frost$core$Object*) _470);
frost$core$Frost$unref$frost$core$Object$Q(_476);
_501 = *(&local13);
_502 = ((frost$core$Object*) _501);
frost$core$Frost$unref$frost$core$Object$Q(_502);
*(&local13) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:130
_506 = *(&local12);
frost$core$System$Process$waitFor$R$frost$core$Int(&_507, _506);
*(&local14) = _507;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:131
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:131:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_512 = param3.value;
_513 = !_512;
_514 = (frost$core$Bit) {_513};
_516 = _514.value;
if (_516) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:132
*(&local15) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:133
_521 = frost$io$File$delete$R$frost$core$Error$Q(param1);
_522 = _521 == NULL;
if (_522) goto block39; else goto block40;
block40:;
_524 = ((frost$core$Object*) _521);
frost$core$Frost$ref$frost$core$Object$Q(_524);
_526 = _521 != NULL;
_527 = (frost$core$Bit) {_526};
_528 = _527.value;
if (_528) goto block41; else goto block42;
block42:;
_530 = (frost$core$Int) {133u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s63, _530, &$s64);
abort(); // unreachable
block41:;
_533 = _521;
*(&local15) = _533;
_535 = ((frost$core$Object*) _521);
frost$core$Frost$unref$frost$core$Object$Q(_535);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:136
_542 = *(&local15);
_543 = ((frost$core$Object*) _542);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:136:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_546 = ($fn65) _543->$class->vtable[0];
_547 = _546(_543);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_547);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_554 = ((frost$core$Object*) _547);
frost$core$Frost$unref$frost$core$Object$Q(_554);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:137
_558 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_558);
_560 = (frost$core$Int) {137u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s66, _560, &$s67);
abort(); // unreachable
block39:;
_538 = ((frost$core$Object*) _521);
frost$core$Frost$unref$frost$core$Object$Q(_538);
_563 = *(&local15);
_564 = ((frost$core$Object*) _563);
frost$core$Frost$unref$frost$core$Object$Q(_564);
*(&local15) = ((frost$core$Error*) NULL);
goto block35;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:140
_569 = *(&local14);
_570 = (frost$core$Int) {0u};
_571 = _569.value;
_572 = _570.value;
_573 = _571 != _572;
_574 = (frost$core$Bit) {_573};
_575 = _574.value;
if (_575) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:141
_578 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_578);
_580 = (frost$core$Int) {141u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s68, _580, &$s69);
abort(); // unreachable
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:143
_584 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_584);
_586 = *(&local12);
_587 = ((frost$core$Object*) _586);
frost$core$Frost$unref$frost$core$Object$Q(_587);
*(&local12) = ((frost$core$System$Process*) NULL);
_590 = *(&local1);
_591 = ((frost$core$Object*) _590);
frost$core$Frost$unref$frost$core$Object$Q(_591);
*(&local1) = ((frost$collections$Array*) NULL);
_594 = *(&local0);
_595 = ((frost$core$Object*) _594);
frost$core$Frost$unref$frost$core$Object$Q(_595);
*(&local0) = ((frost$collections$Array*) NULL);
return param2;

}
void org$frostlang$frostc$Main$printUsage$frost$io$OutputStream(org$frostlang$frostc$Main* param0, frost$io$OutputStream* param1) {

frost$core$Error* local0 = NULL;
$fn70 _3;
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
$fn71 _24;
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
$fn72 _45;
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
$fn73 _66;
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
$fn74 _87;
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
$fn75 _108;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:147
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:148
_3 = ($fn76) param1->$class->vtable[19];
_4 = _3(param1, &$s77);
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
_13 = (frost$core$Int) {148u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s78, _13, &$s79);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:149
_24 = ($fn80) param1->$class->vtable[21];
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
_34 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s81, _34, &$s82);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:150
_45 = ($fn83) param1->$class->vtable[19];
_46 = _45(param1, &$s84);
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
_55 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s85, _55, &$s86);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:151
_66 = ($fn87) param1->$class->vtable[21];
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
_76 = (frost$core$Int) {151u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s88, _76, &$s89);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:152
_87 = ($fn90) param1->$class->vtable[19];
_88 = _87(param1, &$s91);
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
_97 = (frost$core$Int) {152u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s92, _97, &$s93);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:153
_108 = ($fn94) param1->$class->vtable[19];
_109 = _108(param1, &$s95);
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
_118 = (frost$core$Int) {153u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s96, _118, &$s97);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:156
_130 = (frost$core$Int) {156u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s98, _130);
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
frost$core$Object* _40;
frost$io$File* _42;
frost$core$Object* _43;
frost$core$Int _47;
frost$core$Int _50;
frost$core$Object* _56;
frost$core$String* _58;
frost$core$Object* _59;
frost$core$Bit _63;
org$frostlang$frostc$Main$Arguments* _67;
$fn99 _68;
frost$core$Bit _69;
bool _72;
bool _73;
frost$core$Bit _74;
bool _76;
org$frostlang$frostc$Main$Arguments* _79;
$fn100 _80;
frost$core$String* _81;
frost$core$Object* _83;
frost$core$String* _85;
frost$core$Object* _86;
frost$core$Object* _89;
frost$core$String* _92;
frost$core$Bit _93;
bool _94;
frost$io$File* _99;
frost$core$Object* _102;
frost$io$File* _104;
frost$core$Object* _105;
frost$core$Object* _108;
frost$io$InputStream* _111;
frost$io$File* _112;
frost$core$Maybe* _113;
frost$core$Maybe* _114;
frost$core$Int* _115;
frost$core$Int _116;
int64_t _117;
bool _118;
frost$core$Error** _120;
frost$core$Error* _121;
frost$core$Object* _122;
frost$core$Object* _125;
frost$core$Object* _127;
frost$io$File* _129;
frost$core$Object* _130;
frost$core$Object** _134;
frost$core$Object* _135;
frost$io$OutputStream* _136;
$fn101 _137;
frost$core$Maybe* _138;
frost$core$Maybe* _139;
frost$core$Int* _140;
frost$core$Int _141;
int64_t _142;
bool _143;
frost$core$Error** _145;
frost$core$Error* _146;
frost$core$Object* _147;
frost$core$Object* _150;
frost$core$Object* _152;
frost$core$Object* _154;
frost$io$File* _156;
frost$core$Object* _157;
frost$core$Object** _161;
frost$core$Object* _162;
frost$core$Int _163;
frost$core$Object* _164;
frost$core$Object* _166;
frost$core$Object* _168;
frost$collections$Array* _171;
frost$collections$Array* _172;
frost$io$File* _173;
frost$core$Object* _174;
frost$io$File* _176;
frost$core$Object* _177;
frost$core$Error* _203;
frost$core$Object* _204;
frost$core$Error* _182;
frost$core$Object* _183;
$fn102 _186;
frost$core$String* _187;
frost$core$Object* _194;
frost$core$Int _198;
frost$core$Int _200;
frost$core$Bit _208;
bool _209;
frost$io$File* _212;
bool _213;
frost$core$Bit _214;
bool _215;
frost$core$Int _228;
frost$core$Int _230;
frost$io$File* _234;
org$frostlang$frostc$Main$Arguments* _235;
$fn103 _236;
frost$core$String* _237;
frost$io$File* _239;
frost$core$Object* _240;
frost$io$File* _242;
frost$core$Object* _243;
frost$core$Object* _246;
frost$core$Object* _248;
frost$io$File* _253;
bool _254;
frost$core$Bit _255;
bool _256;
frost$core$Int _258;
frost$io$File* _261;
frost$io$File* _264;
frost$core$String** _265;
frost$core$String* _266;
frost$core$String* _267;
frost$core$Object* _269;
frost$core$String* _271;
frost$core$Object* _272;
frost$core$Object* _275;
frost$core$Object* _277;
frost$core$String* _280;
bool _281;
frost$core$Bit _282;
bool _283;
frost$core$Object* _286;
frost$core$String* _288;
frost$core$Object* _289;
frost$core$Object* _293;
frost$io$File* _297;
frost$core$String* _298;
bool _299;
frost$core$Bit _300;
bool _301;
frost$core$Int _303;
frost$core$String* _306;
frost$io$File* _308;
frost$core$Object* _309;
frost$core$Object* _311;
frost$core$String* _313;
frost$core$Object* _314;
frost$core$Object* _318;
frost$io$File* _321;
bool _322;
frost$core$Bit _323;
bool _324;
frost$core$Int _326;
frost$io$File* _329;
frost$core$Error* _330;
bool _331;
frost$core$Object* _333;
bool _335;
frost$core$Bit _336;
bool _337;
frost$core$Int _339;
frost$core$Error* _342;
frost$core$Object* _344;
frost$core$Object* _346;
frost$io$File* _348;
frost$core$Object* _349;
frost$core$Error* _363;
frost$core$Object* _364;
$fn104 _367;
frost$core$String* _368;
frost$core$Object* _375;
frost$core$Int _379;
frost$core$Int _381;
frost$core$Object* _353;
frost$core$Object* _355;
frost$io$File* _357;
frost$core$Object* _358;
frost$core$Error* _384;
frost$core$Object* _385;
frost$core$Bit _389;
bool _390;
org$frostlang$frostc$Main$Arguments* _393;
$fn105 _394;
frost$core$String* _395;
frost$core$Object* _397;
frost$core$String* _399;
frost$core$Object* _400;
frost$core$Object* _403;
frost$core$String* _406;
frost$core$Int64$nullable _409;
frost$core$Int64$nullable _412;
bool _413;
frost$core$Bit _414;
bool _415;
frost$core$Int64$nullable _418;
bool _419;
frost$core$Bit _420;
bool _421;
frost$core$Int _423;
frost$core$Int64 _426;
int64_t _429;
int64_t _430;
frost$core$Int _431;
frost$core$Int$nullable _433;
frost$core$Int$nullable _439;
frost$core$Int$nullable _442;
bool _443;
frost$core$Bit _444;
bool _445;
frost$core$Int$nullable _447;
bool _448;
frost$core$Bit _449;
bool _450;
frost$core$Int _452;
frost$core$Int _455;
frost$core$Int _456;
int64_t _457;
int64_t _458;
bool _459;
frost$core$Bit _460;
bool _461;
frost$core$Int$nullable _463;
bool _464;
frost$core$Bit _465;
bool _466;
frost$core$Int _468;
frost$core$Int _471;
frost$core$Int _472;
int64_t _473;
int64_t _474;
bool _475;
frost$core$Bit _476;
bool _477;
frost$core$Int _490;
frost$core$Int _492;
frost$core$Int$nullable _496;
bool _497;
frost$core$Bit _498;
bool _499;
frost$core$Int _501;
frost$core$Int _504;
frost$core$String* _506;
frost$core$Object* _507;
frost$core$Bit _511;
bool _512;
org$frostlang$frostc$Main$Arguments* _515;
$fn106 _516;
frost$core$String* _517;
frost$core$Object* _519;
frost$core$String* _521;
frost$core$Object* _522;
frost$core$Object* _525;
frost$core$String* _528;
frost$core$Int64$nullable _531;
frost$core$Int64$nullable _534;
bool _535;
frost$core$Bit _536;
bool _537;
frost$core$Int64$nullable _540;
bool _541;
frost$core$Bit _542;
bool _543;
frost$core$Int _545;
frost$core$Int64 _548;
int64_t _551;
int64_t _552;
frost$core$Int _553;
frost$core$Int$nullable _555;
frost$core$Int$nullable _561;
frost$core$Int$nullable _564;
bool _565;
frost$core$Bit _566;
bool _567;
frost$core$Int$nullable _569;
bool _570;
frost$core$Bit _571;
bool _572;
frost$core$Int _574;
frost$core$Int _577;
frost$core$Int _578;
int64_t _579;
int64_t _580;
bool _581;
frost$core$Bit _582;
bool _583;
frost$core$Int$nullable _585;
bool _586;
frost$core$Bit _587;
bool _588;
frost$core$Int _590;
frost$core$Int _593;
frost$core$Int _594;
int64_t _595;
int64_t _596;
bool _597;
frost$core$Bit _598;
bool _599;
frost$core$Int _612;
frost$core$Int _614;
frost$core$Int$nullable _618;
bool _619;
frost$core$Bit _620;
bool _621;
frost$core$Int _623;
frost$core$Int _626;
frost$core$String* _628;
frost$core$Object* _629;
frost$core$Bit _633;
bool _634;
org$frostlang$frostc$Main$Format$nullable _637;
bool _638;
frost$core$Bit _639;
bool _640;
frost$core$Int _653;
frost$core$Int _655;
org$frostlang$frostc$Main$Arguments* _659;
$fn107 _660;
frost$core$String* _661;
frost$core$Object* _663;
frost$core$String* _665;
frost$core$Object* _666;
frost$core$Object* _669;
frost$core$String* _672;
frost$core$Bit _673;
bool _674;
frost$core$Int _677;
frost$core$Int* _680;
org$frostlang$frostc$Main$Format _682;
org$frostlang$frostc$Main$Format _685;
org$frostlang$frostc$Main$Format$nullable _686;
frost$core$Bit _689;
bool _690;
frost$core$Int _693;
frost$core$Int* _696;
org$frostlang$frostc$Main$Format _698;
org$frostlang$frostc$Main$Format _701;
org$frostlang$frostc$Main$Format$nullable _702;
frost$core$Bit _705;
bool _706;
frost$core$Int _709;
frost$core$Int* _712;
org$frostlang$frostc$Main$Format _714;
org$frostlang$frostc$Main$Format _717;
org$frostlang$frostc$Main$Format$nullable _718;
frost$core$Bit _721;
bool _722;
frost$core$Int _725;
frost$core$Int* _728;
org$frostlang$frostc$Main$Format _730;
org$frostlang$frostc$Main$Format _733;
org$frostlang$frostc$Main$Format$nullable _734;
frost$core$Bit _737;
bool _738;
frost$core$Int _741;
frost$core$Int* _744;
org$frostlang$frostc$Main$Format _746;
org$frostlang$frostc$Main$Format _749;
org$frostlang$frostc$Main$Format$nullable _750;
frost$core$Bit _753;
bool _754;
frost$core$Int _757;
frost$core$Int* _760;
org$frostlang$frostc$Main$Format _762;
org$frostlang$frostc$Main$Format _765;
org$frostlang$frostc$Main$Format$nullable _766;
frost$core$Bit _769;
bool _770;
frost$core$Int _773;
frost$core$Int* _776;
org$frostlang$frostc$Main$Format _778;
org$frostlang$frostc$Main$Format _781;
org$frostlang$frostc$Main$Format$nullable _782;
frost$core$String* _786;
frost$core$String* _787;
frost$core$String* _788;
frost$core$Object* _798;
frost$core$Object* _800;
frost$core$Int _803;
frost$core$Int _805;
frost$core$String* _808;
frost$core$Object* _809;
frost$core$Bit _813;
bool _814;
frost$collections$Array* _817;
frost$collections$Array* _818;
frost$io$File* _819;
org$frostlang$frostc$Main$Arguments* _820;
$fn108 _821;
frost$core$String* _822;
frost$core$Object* _824;
frost$core$Object* _826;
frost$core$Object* _828;
frost$core$Bit _831;
bool _832;
org$frostlang$frostc$Main$Arguments* _835;
$fn109 _836;
frost$core$String* _837;
frost$core$String* _838;
frost$core$Object* _839;
frost$core$String* _841;
frost$core$Object* _842;
frost$core$Object* _845;
frost$core$String* _849;
frost$core$Bit _850;
bool _851;
frost$io$File* _854;
frost$core$String* _855;
frost$core$Object* _858;
frost$io$File* _860;
frost$core$Object* _861;
frost$core$Object* _864;
frost$collections$Array* _867;
frost$collections$Array* _868;
frost$io$File* _869;
frost$core$Object* _870;
frost$io$File* _872;
frost$core$Object* _873;
frost$core$String* _879;
frost$core$String* _880;
frost$core$String* _881;
frost$core$Object* _891;
frost$core$Object* _893;
frost$core$Int _896;
frost$core$Int _898;
frost$core$String* _902;
frost$core$Object* _903;
org$frostlang$frostc$Main$Format$nullable _908;
bool _909;
frost$core$Bit _910;
bool _911;
org$frostlang$frostc$Main$Format$nullable _913;
bool _914;
frost$core$Bit _915;
bool _916;
frost$core$Int _918;
frost$core$Equatable* _921;
frost$core$Equatable* _922;
frost$core$Int _923;
frost$core$Int* _926;
org$frostlang$frostc$Main$Format _928;
org$frostlang$frostc$Main$Format _931;
frost$core$Equatable* _932;
$fn110 _933;
frost$core$Bit _934;
bool _935;
frost$core$Object* _936;
frost$core$Object* _938;
frost$collections$Array* _942;
frost$collections$Array* _943;
frost$io$File* _944;
frost$core$String* _945;
frost$io$File* _947;
frost$core$Object* _948;
frost$core$Object* _950;
frost$core$Object* _952;
frost$core$Object* _954;
frost$collections$Array* _958;
frost$collections$Array* _959;
frost$io$File** _960;
frost$io$File* _961;
frost$core$Object* _962;
frost$io$File* _965;
frost$core$String* _966;
frost$core$Object* _969;
frost$io$File* _971;
frost$core$Object* _972;
frost$core$Object* _975;
frost$core$Object* _977;
frost$io$File* _980;
frost$core$Object* _982;
frost$io$File** _984;
frost$io$File* _985;
frost$core$Object* _986;
frost$io$File** _988;
frost$core$Object* _990;
frost$collections$Array* _993;
frost$collections$CollectionView* _994;
$fn111 _995;
frost$core$Int _996;
frost$core$Int _997;
int64_t _1000;
int64_t _1001;
bool _1002;
frost$core$Bit _1003;
bool _1005;
frost$core$Int _1018;
frost$core$Int _1020;
org$frostlang$frostc$Main$Format$nullable _1024;
bool _1025;
frost$core$Bit _1026;
bool _1027;
frost$core$Int _1030;
frost$core$Int* _1033;
org$frostlang$frostc$Main$Format _1035;
org$frostlang$frostc$Main$Format _1038;
org$frostlang$frostc$Main$Format$nullable _1039;
frost$io$File* _1043;
bool _1044;
frost$core$Bit _1045;
bool _1046;
frost$collections$Array* _1049;
frost$collections$CollectionView* _1050;
$fn112 _1051;
frost$core$Int _1052;
frost$core$Int _1053;
int64_t _1056;
int64_t _1057;
bool _1058;
frost$core$Bit _1059;
bool _1061;
org$frostlang$frostc$Main$Format$nullable _1066;
bool _1067;
frost$core$Bit _1068;
bool _1069;
frost$core$Int _1071;
org$frostlang$frostc$Main$Format _1074;
frost$core$Int _1075;
frost$core$Int _1076;
int64_t _1079;
int64_t _1080;
bool _1081;
frost$core$Bit _1082;
bool _1084;
frost$core$Object* _1087;
frost$core$String* _1089;
frost$core$Object* _1090;
frost$core$Int _1094;
int64_t _1097;
int64_t _1098;
bool _1099;
frost$core$Bit _1100;
bool _1102;
frost$core$Object* _1105;
frost$core$String* _1107;
frost$core$Object* _1108;
frost$core$Int _1112;
int64_t _1115;
int64_t _1116;
bool _1117;
frost$core$Bit _1118;
bool _1120;
frost$core$Object* _1123;
frost$core$String* _1125;
frost$core$Object* _1126;
frost$core$Int _1130;
int64_t _1133;
int64_t _1134;
bool _1135;
frost$core$Bit _1136;
bool _1138;
frost$core$Object* _1141;
frost$core$String* _1143;
frost$core$Object* _1144;
frost$core$Int _1148;
int64_t _1151;
int64_t _1152;
bool _1153;
frost$core$Bit _1154;
bool _1156;
frost$core$Object* _1159;
frost$core$String* _1161;
frost$core$Object* _1162;
frost$core$Int _1177;
frost$core$Int _1179;
frost$collections$Array* _1183;
frost$collections$Array* _1184;
frost$core$Int _1185;
frost$core$Int _1187;
int64_t _1188;
int64_t _1189;
bool _1190;
frost$core$Bit _1191;
bool _1192;
frost$collections$CollectionView* _1194;
$fn113 _1195;
frost$core$Int _1196;
int64_t _1197;
int64_t _1198;
bool _1199;
frost$core$Bit _1200;
bool _1201;
frost$core$Int _1203;
frost$core$Object*** _1207;
frost$core$Object** _1208;
frost$core$Int64 _1209;
int64_t _1210;
frost$core$Object* _1211;
frost$core$Object* _1212;
frost$io$File* _1215;
frost$core$String* _1216;
frost$io$File* _1221;
frost$core$String** _1222;
frost$core$String* _1223;
frost$core$String* _1224;
frost$core$Object* _1226;
frost$core$String* _1228;
frost$core$Object* _1229;
frost$core$Object* _1232;
frost$core$Object* _1234;
frost$core$String* _1237;
bool _1238;
frost$core$Bit _1239;
bool _1240;
frost$core$Object* _1243;
frost$core$String* _1245;
frost$core$Object* _1246;
frost$core$Object* _1250;
frost$io$File* _1254;
frost$core$String* _1255;
bool _1256;
frost$core$Bit _1257;
bool _1258;
frost$core$Int _1260;
frost$core$String* _1263;
frost$io$File* _1265;
frost$core$Object* _1266;
frost$core$Object* _1268;
frost$core$String* _1270;
frost$core$Object* _1271;
frost$core$Object* _1275;
frost$io$File* _1278;
bool _1279;
frost$core$Bit _1280;
bool _1281;
frost$core$Int _1283;
frost$io$File* _1286;
frost$core$String* _1289;
frost$core$Object* _1291;
frost$core$String* _1293;
frost$core$Object* _1294;
frost$core$Object* _1297;
frost$core$String* _1300;
frost$core$String$Index$nullable _1301;
frost$core$String$Index$nullable _1304;
bool _1305;
frost$core$Bit _1306;
bool _1307;
frost$core$String* _1310;
frost$core$Object* _1311;
frost$core$String* _1313;
frost$core$Object* _1314;
frost$core$Object* _1318;
frost$core$String* _1322;
frost$core$String$Index$nullable _1323;
frost$core$Bit _1324;
frost$core$Range$LTfrost$core$String$Index$Q$GT _1325;
frost$core$String* _1326;
frost$core$Object* _1327;
frost$core$Object* _1329;
frost$core$String* _1331;
frost$core$Object* _1332;
frost$core$Object* _1336;
frost$core$String* _1339;
frost$core$String* _1340;
frost$io$File* _1341;
frost$core$Object* _1342;
frost$core$Object* _1344;
frost$core$Object* _1346;
frost$core$Object* _1348;
frost$core$String* _1350;
frost$core$Object* _1351;
frost$core$Object* _1354;
frost$io$File* _1356;
frost$core$Object* _1357;
frost$io$File* _1361;
frost$core$Object* _1362;
frost$io$File* _1364;
frost$core$Object* _1365;
frost$core$Object* _1368;
frost$core$Object* _1370;
frost$core$String* _1372;
frost$core$Object* _1373;
org$frostlang$frostc$Main$Format$nullable _1378;
bool _1379;
frost$core$Bit _1380;
bool _1381;
frost$core$Int _1383;
frost$core$Equatable* _1386;
frost$core$Equatable* _1387;
frost$core$Int _1388;
frost$core$Int* _1391;
org$frostlang$frostc$Main$Format _1393;
org$frostlang$frostc$Main$Format _1396;
frost$core$Equatable* _1397;
$fn114 _1398;
frost$core$Bit _1399;
bool _1400;
frost$core$Object* _1401;
frost$core$Object* _1403;
frost$core$Int _1417;
frost$core$Int _1419;
frost$core$Int _1434;
frost$core$Int _1436;
frost$core$Int _1442;
frost$core$Int _1445;
frost$core$Object* _1450;
org$frostlang$frostc$CodeGenerator* _1452;
frost$core$Object* _1453;
org$frostlang$frostc$Main$Format$nullable _1457;
bool _1458;
frost$core$Bit _1459;
bool _1460;
frost$core$Int _1462;
org$frostlang$frostc$Main$Format _1465;
frost$core$Int _1466;
frost$core$Int _1467;
int64_t _1470;
int64_t _1471;
bool _1472;
frost$core$Bit _1473;
bool _1475;
frost$core$Int _1477;
int64_t _1480;
int64_t _1481;
bool _1482;
frost$core$Bit _1483;
bool _1485;
frost$core$Int _1487;
int64_t _1490;
int64_t _1491;
bool _1492;
frost$core$Bit _1493;
bool _1495;
org$frostlang$frostc$LLVMCodeGenerator* _1500;
frost$core$String* _1501;
frost$io$File* _1502;
bool _1503;
frost$core$Bit _1504;
bool _1505;
frost$core$Int _1507;
frost$io$File* _1510;
frost$io$File* _1515;
frost$core$String** _1516;
frost$core$String* _1517;
frost$core$String* _1518;
frost$core$Object* _1520;
frost$core$String* _1522;
frost$core$Object* _1523;
frost$core$Object* _1526;
frost$core$Object* _1528;
frost$core$String* _1531;
bool _1532;
frost$core$Bit _1533;
bool _1534;
frost$core$Object* _1537;
frost$core$String* _1539;
frost$core$Object* _1540;
frost$core$Object* _1544;
frost$io$File* _1548;
frost$core$String* _1549;
bool _1550;
frost$core$Bit _1551;
bool _1552;
frost$core$Int _1554;
frost$core$String* _1557;
frost$io$File* _1559;
frost$core$Object* _1560;
frost$core$Object* _1562;
frost$core$String* _1564;
frost$core$Object* _1565;
frost$core$Object* _1569;
frost$io$File* _1572;
bool _1573;
frost$core$Bit _1574;
bool _1575;
frost$core$Int _1577;
frost$io$File* _1580;
frost$core$String* _1583;
frost$core$Object* _1585;
frost$core$String* _1587;
frost$core$Object* _1588;
frost$core$Object* _1591;
frost$core$String* _1594;
frost$core$String$Index$nullable _1595;
frost$core$String$Index$nullable _1598;
bool _1599;
frost$core$Bit _1600;
bool _1601;
frost$core$String* _1604;
frost$core$Object* _1605;
frost$core$String* _1607;
frost$core$Object* _1608;
frost$core$Object* _1612;
frost$core$String* _1616;
frost$core$String$Index$nullable _1617;
frost$core$Bit _1618;
frost$core$Range$LTfrost$core$String$Index$Q$GT _1619;
frost$core$String* _1620;
frost$core$Object* _1621;
frost$core$Object* _1623;
frost$core$String* _1625;
frost$core$Object* _1626;
frost$core$Object* _1630;
frost$core$String* _1633;
frost$core$String* _1634;
frost$io$File* _1635;
frost$core$Object* _1636;
frost$core$Object* _1638;
frost$core$Object* _1640;
frost$core$Object* _1642;
frost$core$String* _1644;
frost$core$Object* _1645;
frost$core$Object* _1648;
frost$io$File* _1650;
frost$core$Object* _1651;
frost$core$Maybe* _1655;
frost$core$Maybe* _1656;
frost$core$Int* _1657;
frost$core$Int _1658;
int64_t _1659;
bool _1660;
frost$core$Error** _1662;
frost$core$Error* _1663;
frost$core$Object* _1664;
frost$core$Object* _1667;
frost$core$Object* _1669;
frost$core$Object* _1671;
frost$core$Object* _1673;
frost$core$Error* _1697;
frost$core$Object* _1698;
$fn115 _1701;
frost$core$String* _1702;
frost$core$Object* _1709;
frost$core$Int _1713;
frost$core$Int _1715;
frost$core$Object** _1676;
frost$core$Object* _1677;
frost$io$OutputStream* _1678;
org$frostlang$frostc$CodeGenerator* _1680;
frost$core$Object* _1681;
org$frostlang$frostc$CodeGenerator* _1683;
frost$core$Object* _1684;
frost$core$Object* _1687;
frost$core$Object* _1689;
frost$core$Object* _1691;
frost$core$Object* _1693;
frost$core$Error* _1718;
frost$core$Object* _1719;
frost$core$Int _1723;
int64_t _1726;
int64_t _1727;
bool _1728;
frost$core$Bit _1729;
bool _1731;
org$frostlang$frostc$HCodeGenerator* _1734;
frost$io$File* _1735;
bool _1736;
frost$core$Bit _1737;
bool _1738;
frost$core$Int _1740;
frost$io$File* _1743;
org$frostlang$frostc$CodeGenerator* _1745;
frost$core$Object* _1746;
org$frostlang$frostc$CodeGenerator* _1748;
frost$core$Object* _1749;
frost$core$Object* _1752;
frost$core$Int _1755;
int64_t _1758;
int64_t _1759;
bool _1760;
frost$core$Bit _1761;
bool _1763;
org$frostlang$frostc$CCodeGenerator* _1766;
frost$io$File* _1767;
bool _1768;
frost$core$Bit _1769;
bool _1770;
frost$core$Int _1772;
frost$io$File* _1775;
org$frostlang$frostc$CodeGenerator* _1777;
frost$core$Object* _1778;
org$frostlang$frostc$CodeGenerator* _1780;
frost$core$Object* _1781;
frost$core$Object* _1784;
frost$core$Int _1787;
int64_t _1790;
int64_t _1791;
bool _1792;
frost$core$Bit _1793;
bool _1795;
org$frostlang$frostc$StubCodeGenerator* _1800;
frost$io$File* _1801;
bool _1802;
frost$core$Bit _1803;
bool _1804;
frost$core$Int _1806;
frost$io$File* _1809;
frost$core$Maybe* _1810;
frost$core$Maybe* _1811;
frost$core$Int* _1812;
frost$core$Int _1813;
int64_t _1814;
bool _1815;
frost$core$Error** _1817;
frost$core$Error* _1818;
frost$core$Object* _1819;
frost$core$Object* _1822;
frost$core$Object* _1824;
frost$core$Error* _1844;
frost$core$Object* _1845;
$fn116 _1848;
frost$core$String* _1849;
frost$core$Object* _1856;
frost$core$Int _1860;
frost$core$Int _1862;
frost$core$Object** _1827;
frost$core$Object* _1828;
frost$io$OutputStream* _1829;
org$frostlang$frostc$CodeGenerator* _1831;
frost$core$Object* _1832;
org$frostlang$frostc$CodeGenerator* _1834;
frost$core$Object* _1835;
frost$core$Object* _1838;
frost$core$Object* _1840;
frost$core$Error* _1865;
frost$core$Object* _1866;
org$frostlang$frostc$Compiler$Settings* _1871;
frost$io$File** _1872;
frost$io$File* _1873;
frost$collections$Array* _1874;
frost$collections$ListView* _1875;
frost$core$Int _1876;
frost$core$Int _1877;
frost$core$Bit* _1878;
frost$core$Bit _1879;
frost$core$Object* _1882;
org$frostlang$frostc$Compiler$Settings* _1884;
frost$core$Object* _1885;
frost$core$Object* _1888;
frost$threads$MessageQueue* _1891;
frost$threads$MessageQueue* _1892;
frost$core$Object* _1895;
frost$threads$MessageQueue* _1897;
frost$core$Object* _1898;
frost$core$Object* _1901;
org$frostlang$frostc$Compiler* _1904;
frost$threads$MessageQueue* _1905;
org$frostlang$frostc$CodeGenerator* _1906;
org$frostlang$frostc$Compiler$Settings* _1907;
frost$core$Object* _1910;
org$frostlang$frostc$Compiler* _1912;
frost$core$Object* _1913;
frost$core$Object* _1916;
org$frostlang$frostc$Main$Format$nullable _1919;
bool _1920;
frost$core$Bit _1921;
bool _1922;
frost$core$Int _1924;
frost$core$Equatable* _1927;
frost$core$Equatable* _1928;
frost$core$Int _1929;
frost$core$Int* _1932;
org$frostlang$frostc$Main$Format _1934;
org$frostlang$frostc$Main$Format _1937;
frost$core$Equatable* _1938;
$fn117 _1939;
frost$core$Bit _1940;
bool _1941;
frost$core$Object* _1942;
frost$core$Object* _1944;
frost$core$String* _1948;
bool _1949;
frost$core$Bit _1950;
bool _1951;
frost$core$String* _1954;
frost$core$Object* _1955;
frost$core$String* _1957;
frost$core$Object* _1958;
org$frostlang$frostc$HTMLProcessor* _1963;
org$frostlang$frostc$Compiler* _1964;
frost$collections$Array* _1966;
frost$collections$Array* _1967;
frost$core$Int _1968;
frost$core$Int _1970;
int64_t _1971;
int64_t _1972;
bool _1973;
frost$core$Bit _1974;
bool _1975;
frost$collections$CollectionView* _1977;
$fn118 _1978;
frost$core$Int _1979;
int64_t _1980;
int64_t _1981;
bool _1982;
frost$core$Bit _1983;
bool _1984;
frost$core$Int _1986;
frost$core$Object*** _1990;
frost$core$Object** _1991;
frost$core$Int64 _1992;
int64_t _1993;
frost$core$Object* _1994;
frost$core$Object* _1995;
frost$io$File* _1998;
frost$io$File* _1999;
bool _2000;
frost$core$Bit _2001;
bool _2002;
frost$core$Int _2004;
frost$io$File* _2007;
frost$core$String* _2008;
bool _2009;
frost$core$Bit _2010;
bool _2011;
frost$core$Int _2013;
frost$core$String* _2016;
$fn119 _2017;
frost$core$Object* _2019;
frost$core$Object* _2021;
org$frostlang$frostc$Compiler* _2024;
frost$core$Object* _2025;
frost$threads$MessageQueue* _2028;
frost$core$Object* _2029;
org$frostlang$frostc$Compiler$Settings* _2032;
frost$core$Object* _2033;
org$frostlang$frostc$CodeGenerator* _2036;
frost$core$Object* _2037;
frost$io$File* _2040;
frost$core$Object* _2041;
frost$core$String* _2044;
frost$core$Object* _2045;
frost$io$File* _2048;
frost$core$Object* _2049;
frost$collections$Array* _2052;
frost$core$Object* _2053;
frost$collections$Array* _2056;
frost$core$Object* _2057;
org$frostlang$frostc$Main$Arguments* _2060;
frost$core$Object* _2061;
frost$core$String* _2066;
bool _2067;
frost$core$Bit _2068;
bool _2069;
frost$core$Int _2082;
frost$core$Int _2084;
frost$collections$Array* _2088;
frost$collections$Iterable* _2089;
frost$collections$Iterable* _2090;
$fn120 _2091;
frost$collections$Iterator* _2092;
frost$collections$Iterator* _2093;
frost$collections$Iterator* _2095;
$fn121 _2096;
frost$core$Bit _2097;
bool _2098;
frost$collections$Iterator* _2101;
$fn122 _2102;
frost$core$Object* _2103;
frost$io$File* _2104;
frost$core$Object* _2105;
frost$io$File* _2107;
frost$core$Object* _2108;
org$frostlang$frostc$Compiler* _2112;
frost$io$File* _2113;
frost$collections$ListView* _2114;
frost$collections$Iterable* _2115;
frost$collections$Iterable* _2116;
$fn123 _2117;
frost$collections$Iterator* _2118;
frost$collections$Iterator* _2119;
frost$collections$Iterator* _2121;
$fn124 _2122;
frost$core$Bit _2123;
bool _2124;
frost$collections$Iterator* _2127;
$fn125 _2128;
frost$core$Object* _2129;
org$frostlang$frostc$ClassDecl* _2130;
frost$core$Object* _2131;
org$frostlang$frostc$ClassDecl* _2133;
frost$core$Object* _2134;
org$frostlang$frostc$Compiler* _2138;
org$frostlang$frostc$ClassDecl* _2139;
frost$core$Bit _2142;
frost$core$Bit* _2143;
frost$collections$Array** _2146;
frost$collections$Array* _2147;
frost$collections$Iterable* _2148;
frost$collections$Iterable* _2149;
$fn126 _2150;
frost$collections$Iterator* _2151;
frost$collections$Iterator* _2152;
frost$collections$Iterator* _2154;
$fn127 _2155;
frost$core$Bit _2156;
bool _2157;
frost$collections$Iterator* _2160;
$fn128 _2161;
frost$core$Object* _2162;
org$frostlang$frostc$ClassDecl* _2163;
frost$core$Object* _2164;
org$frostlang$frostc$ClassDecl* _2166;
frost$core$Object* _2167;
org$frostlang$frostc$ClassDecl* _2171;
frost$core$Bit _2174;
frost$core$Bit* _2175;
frost$collections$Array** _2178;
frost$collections$Array* _2179;
frost$collections$Iterable* _2180;
frost$collections$Iterable* _2181;
$fn129 _2182;
frost$collections$Iterator* _2183;
frost$collections$Iterator* _2184;
frost$collections$Iterator* _2186;
$fn130 _2187;
frost$core$Bit _2188;
bool _2189;
frost$collections$Iterator* _2192;
$fn131 _2193;
frost$core$Object* _2194;
org$frostlang$frostc$ClassDecl* _2195;
frost$core$Object* _2196;
org$frostlang$frostc$ClassDecl* _2198;
frost$core$Object* _2199;
org$frostlang$frostc$ClassDecl* _2203;
frost$core$Object* _2205;
org$frostlang$frostc$ClassDecl* _2207;
frost$core$Object* _2208;
frost$core$Object* _2212;
frost$core$Object* _2215;
org$frostlang$frostc$ClassDecl* _2217;
frost$core$Object* _2218;
frost$core$Object* _2222;
frost$core$Object* _2225;
org$frostlang$frostc$ClassDecl* _2227;
frost$core$Object* _2228;
frost$core$Object* _2232;
frost$core$Object* _2234;
frost$core$Object* _2236;
frost$io$File* _2238;
frost$core$Object* _2239;
frost$core$Object* _2243;
frost$collections$Array* _2246;
frost$collections$Iterable* _2247;
frost$collections$Iterable* _2248;
$fn132 _2249;
frost$collections$Iterator* _2250;
frost$collections$Iterator* _2251;
frost$collections$Iterator* _2253;
$fn133 _2254;
frost$core$Bit _2255;
bool _2256;
frost$collections$Iterator* _2259;
$fn134 _2260;
frost$core$Object* _2261;
frost$io$File* _2262;
frost$core$Object* _2263;
frost$io$File* _2265;
frost$core$Object* _2266;
org$frostlang$frostc$Compiler* _2270;
frost$io$File* _2271;
frost$core$Object* _2273;
frost$io$File* _2275;
frost$core$Object* _2276;
frost$core$Object* _2280;
org$frostlang$frostc$Compiler* _2283;
frost$collections$Array** _2287;
frost$collections$Array* _2288;
frost$collections$CollectionView* _2289;
$fn135 _2290;
frost$core$Int _2291;
frost$core$Int _2292;
int64_t _2293;
int64_t _2294;
bool _2295;
frost$core$Bit _2296;
bool _2297;
frost$collections$Array** _2300;
frost$collections$Array* _2301;
frost$collections$Array* _2302;
frost$collections$Array** _2303;
frost$collections$Array* _2304;
frost$collections$CollectionView* _2305;
$fn136 _2306;
frost$core$Int _2307;
frost$core$Int _2308;
int64_t _2309;
int64_t _2310;
int64_t _2311;
frost$core$Int _2312;
frost$core$Object* _2313;
org$frostlang$frostc$ClassDecl* _2314;
frost$core$Object* _2316;
org$frostlang$frostc$ClassDecl* _2318;
frost$core$Object* _2319;
frost$core$Object* _2322;
org$frostlang$frostc$ClassDecl* _2325;
org$frostlang$frostc$ClassDecl* _2327;
frost$core$Object* _2328;
org$frostlang$frostc$CodeGenerator** _2333;
org$frostlang$frostc$CodeGenerator* _2334;
bool _2335;
frost$core$Bit _2336;
bool _2337;
frost$core$Int _2339;
org$frostlang$frostc$CodeGenerator* _2342;
$fn137 _2343;
frost$threads$MessageQueue* _2348;
frost$threads$MessageQueue* _2349;
frost$threads$ScopedLock* _2354;
frost$threads$Lock** _2355;
frost$threads$Lock* _2356;
frost$core$Object* _2359;
frost$threads$ScopedLock* _2361;
frost$core$Object* _2362;
frost$core$Object* _2365;
frost$core$Int* _2368;
frost$core$Int _2369;
frost$threads$ScopedLock* _2370;
frost$core$Object* _2371;
frost$core$Int _2375;
int64_t _2376;
int64_t _2377;
bool _2378;
frost$core$Bit _2379;
bool _2381;
frost$threads$MessageQueue* _2384;
frost$threads$MessageQueue* _2385;
frost$core$Immutable* _2386;
org$frostlang$frostc$Compiler$Message* _2387;
frost$core$Object* _2389;
org$frostlang$frostc$Compiler$Message* _2391;
frost$core$Object* _2392;
frost$core$Object* _2395;
org$frostlang$frostc$Compiler$Message* _2398;
frost$core$Int* _2399;
frost$core$Int _2400;
frost$core$Int _2401;
int64_t _2404;
int64_t _2405;
bool _2406;
frost$core$Bit _2407;
bool _2409;
frost$core$String** _2411;
frost$core$String* _2412;
frost$core$Object* _2414;
frost$core$String* _2416;
frost$core$Object* _2417;
frost$core$Int* _2420;
frost$core$Int _2421;
frost$core$Int* _2423;
frost$core$Int _2424;
frost$core$String** _2426;
frost$core$String* _2427;
frost$core$Object* _2429;
frost$core$String* _2431;
frost$core$Object* _2432;
frost$core$Int _2436;
frost$core$Int _2437;
int64_t _2438;
int64_t _2439;
int64_t _2440;
frost$core$Int _2441;
frost$core$String* _2444;
frost$core$Object* _2447;
frost$core$String* _2450;
frost$core$Int _2451;
frost$core$Object* _2452;
$fn138 _2455;
frost$core$String* _2456;
frost$core$String* _2457;
frost$core$Object* _2458;
frost$core$Object* _2460;
frost$core$Object* _2462;
frost$core$String* _2465;
frost$core$Int _2466;
frost$core$Object* _2467;
$fn139 _2470;
frost$core$String* _2471;
frost$core$String* _2472;
frost$core$Object* _2473;
frost$core$Object* _2475;
frost$core$Object* _2477;
frost$core$String* _2480;
frost$core$String* _2481;
frost$core$String* _2482;
frost$core$String* _2483;
frost$core$Object* _2493;
frost$core$Object* _2495;
frost$core$Object* _2497;
frost$core$Object* _2499;
frost$core$Object* _2501;
frost$core$Object* _2503;
frost$core$Object* _2505;
frost$core$Object* _2507;
frost$core$Object* _2509;
frost$core$Object* _2511;
frost$core$String* _2513;
frost$core$Object* _2514;
frost$core$String* _2517;
frost$core$Object* _2518;
frost$core$Int _2522;
int64_t _2525;
int64_t _2526;
bool _2527;
frost$core$Bit _2528;
bool _2530;
frost$core$String** _2532;
frost$core$String* _2533;
frost$core$Object* _2535;
frost$core$String* _2537;
frost$core$Object* _2538;
frost$core$Int* _2541;
frost$core$Int _2542;
frost$core$Int* _2544;
frost$core$Int _2545;
frost$core$String** _2547;
frost$core$String* _2548;
frost$core$Object* _2550;
frost$core$String* _2552;
frost$core$Object* _2553;
frost$core$Int _2557;
frost$core$Int _2558;
int64_t _2559;
int64_t _2560;
int64_t _2561;
frost$core$Int _2562;
frost$core$String* _2565;
frost$core$Object* _2568;
frost$core$String* _2571;
frost$core$Int _2572;
frost$core$Object* _2573;
$fn140 _2576;
frost$core$String* _2577;
frost$core$String* _2578;
frost$core$Object* _2579;
frost$core$Object* _2581;
frost$core$Object* _2583;
frost$core$String* _2586;
frost$core$Int _2587;
frost$core$Object* _2588;
$fn141 _2591;
frost$core$String* _2592;
frost$core$String* _2593;
frost$core$Object* _2594;
frost$core$Object* _2596;
frost$core$Object* _2598;
frost$core$String* _2601;
frost$core$String* _2602;
frost$core$String* _2603;
frost$core$String* _2604;
frost$core$Object* _2614;
frost$core$Object* _2616;
frost$core$Object* _2618;
frost$core$Object* _2620;
frost$core$Object* _2622;
frost$core$Object* _2624;
frost$core$Object* _2626;
frost$core$Object* _2628;
frost$core$Object* _2630;
frost$core$Object* _2632;
frost$core$String* _2634;
frost$core$Object* _2635;
frost$core$String* _2638;
frost$core$Object* _2639;
org$frostlang$frostc$Compiler$Message* _2643;
frost$core$Object* _2644;
org$frostlang$frostc$Compiler* _2648;
frost$core$Object* _2649;
frost$threads$MessageQueue* _2652;
frost$core$Object* _2653;
org$frostlang$frostc$Compiler$Settings* _2656;
frost$core$Object* _2657;
org$frostlang$frostc$CodeGenerator* _2660;
frost$core$Object* _2661;
frost$core$Int _2665;
frost$core$Int _2666;
int64_t _2669;
int64_t _2670;
bool _2671;
frost$core$Bit _2672;
bool _2674;
frost$core$Int _2688;
frost$core$Int _2689;
int64_t _2690;
int64_t _2691;
bool _2692;
frost$core$Bit _2693;
bool _2694;
frost$core$Int _2697;
frost$core$String* _2698;
frost$core$String* _2699;
frost$core$Object* _2709;
frost$core$Object* _2711;
frost$core$Int _2716;
frost$core$Int _2717;
int64_t _2720;
int64_t _2721;
bool _2722;
frost$core$Bit _2723;
bool _2725;
org$frostlang$frostc$Main$Format$nullable _2728;
bool _2729;
frost$core$Bit _2730;
bool _2731;
frost$core$Int _2733;
org$frostlang$frostc$Main$Format _2736;
frost$core$Int _2737;
frost$core$Int _2738;
int64_t _2741;
int64_t _2742;
bool _2743;
frost$core$Bit _2744;
bool _2746;
frost$io$File* _2749;
bool _2750;
frost$core$Bit _2751;
bool _2752;
frost$core$Int _2754;
frost$io$File* _2757;
frost$io$File* _2762;
frost$core$String** _2763;
frost$core$String* _2764;
frost$core$String* _2765;
frost$core$Object* _2767;
frost$core$String* _2769;
frost$core$Object* _2770;
frost$core$Object* _2773;
frost$core$Object* _2775;
frost$core$String* _2778;
bool _2779;
frost$core$Bit _2780;
bool _2781;
frost$core$Object* _2784;
frost$core$String* _2786;
frost$core$Object* _2787;
frost$core$Object* _2791;
frost$io$File* _2795;
frost$core$String* _2796;
bool _2797;
frost$core$Bit _2798;
bool _2799;
frost$core$Int _2801;
frost$core$String* _2804;
frost$io$File* _2806;
frost$core$Object* _2807;
frost$core$Object* _2809;
frost$core$String* _2811;
frost$core$Object* _2812;
frost$core$Object* _2816;
frost$io$File* _2819;
bool _2820;
frost$core$Bit _2821;
bool _2822;
frost$core$Int _2824;
frost$io$File* _2827;
frost$core$String* _2830;
frost$core$Object* _2832;
frost$core$String* _2834;
frost$core$Object* _2835;
frost$core$Object* _2838;
frost$core$String* _2841;
frost$core$String$Index$nullable _2842;
frost$core$String$Index$nullable _2845;
bool _2846;
frost$core$Bit _2847;
bool _2848;
frost$core$String* _2851;
frost$core$Object* _2852;
frost$core$String* _2854;
frost$core$Object* _2855;
frost$core$Object* _2859;
frost$core$String* _2863;
frost$core$String$Index$nullable _2864;
frost$core$Bit _2865;
frost$core$Range$LTfrost$core$String$Index$Q$GT _2866;
frost$core$String* _2867;
frost$core$Object* _2868;
frost$core$Object* _2870;
frost$core$String* _2872;
frost$core$Object* _2873;
frost$core$Object* _2877;
frost$core$String* _2880;
frost$core$String* _2881;
frost$io$File* _2882;
frost$core$Object* _2883;
frost$core$Object* _2885;
frost$core$Object* _2887;
frost$core$Object* _2889;
frost$core$String* _2891;
frost$core$Object* _2892;
frost$core$Object* _2895;
frost$io$File* _2897;
frost$core$Object* _2898;
frost$io$File* _2902;
bool _2903;
frost$core$Bit _2904;
bool _2905;
frost$core$Int _2907;
frost$io$File* _2910;
frost$core$Bit _2911;
frost$io$File* _2912;
frost$core$Object* _2913;
frost$core$Object* _2915;
frost$core$Int _2918;
int64_t _2921;
int64_t _2922;
bool _2923;
frost$core$Bit _2924;
bool _2926;
frost$io$File* _2929;
bool _2930;
frost$core$Bit _2931;
bool _2932;
frost$core$Int _2934;
frost$io$File* _2937;
frost$io$File* _2942;
frost$core$String** _2943;
frost$core$String* _2944;
frost$core$String* _2945;
frost$core$Object* _2947;
frost$core$String* _2949;
frost$core$Object* _2950;
frost$core$Object* _2953;
frost$core$Object* _2955;
frost$core$String* _2958;
bool _2959;
frost$core$Bit _2960;
bool _2961;
frost$core$Object* _2964;
frost$core$String* _2966;
frost$core$Object* _2967;
frost$core$Object* _2971;
frost$io$File* _2975;
frost$core$String* _2976;
bool _2977;
frost$core$Bit _2978;
bool _2979;
frost$core$Int _2981;
frost$core$String* _2984;
frost$io$File* _2986;
frost$core$Object* _2987;
frost$core$Object* _2989;
frost$core$String* _2991;
frost$core$Object* _2992;
frost$core$Object* _2996;
frost$io$File* _2999;
bool _3000;
frost$core$Bit _3001;
bool _3002;
frost$core$Int _3004;
frost$io$File* _3007;
frost$core$String* _3010;
frost$core$Object* _3012;
frost$core$String* _3014;
frost$core$Object* _3015;
frost$core$Object* _3018;
frost$core$String* _3021;
frost$core$String$Index$nullable _3022;
frost$core$String$Index$nullable _3025;
bool _3026;
frost$core$Bit _3027;
bool _3028;
frost$core$String* _3031;
frost$core$Object* _3032;
frost$core$String* _3034;
frost$core$Object* _3035;
frost$core$Object* _3039;
frost$core$String* _3043;
frost$core$String$Index$nullable _3044;
frost$core$Bit _3045;
frost$core$Range$LTfrost$core$String$Index$Q$GT _3046;
frost$core$String* _3047;
frost$core$Object* _3048;
frost$core$Object* _3050;
frost$core$String* _3052;
frost$core$Object* _3053;
frost$core$Object* _3057;
frost$core$String* _3060;
frost$core$String* _3061;
frost$io$File* _3062;
frost$core$Object* _3063;
frost$core$Object* _3065;
frost$core$Object* _3067;
frost$core$Object* _3069;
frost$core$String* _3071;
frost$core$Object* _3072;
frost$core$Object* _3075;
frost$io$File* _3077;
frost$core$Object* _3078;
frost$io$File* _3082;
bool _3083;
frost$core$Bit _3084;
bool _3085;
frost$core$Int _3087;
frost$io$File* _3090;
frost$core$Bit _3091;
frost$io$File* _3092;
frost$core$Object* _3093;
frost$core$Object* _3095;
frost$io$File* _3148;
frost$core$Object* _3149;
frost$core$String* _3152;
frost$core$Object* _3153;
frost$io$File* _3156;
frost$core$Object* _3157;
frost$collections$Array* _3160;
frost$core$Object* _3161;
frost$collections$Array* _3164;
frost$core$Object* _3165;
org$frostlang$frostc$Main$Arguments* _3168;
frost$core$Object* _3169;
frost$core$Int _3101;
frost$core$Int _3102;
int64_t _3105;
int64_t _3106;
bool _3107;
frost$core$Bit _3108;
bool _3110;
frost$core$Int _3125;
frost$core$String* _3126;
frost$core$String* _3127;
frost$core$Object* _3137;
frost$core$Object* _3139;
frost$core$Int _3143;
frost$core$Int _3145;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:161
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Main$Arguments));
_1 = (org$frostlang$frostc$Main$Arguments*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Main$Arguments$class);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:162
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_13 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:163
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_26 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:164
*(&local3) = ((frost$io$File*) NULL);
_40 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_40);
_42 = *(&local3);
_43 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_43);
*(&local3) = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:165
_47 = (frost$core$Int) {3u};
*(&local4) = _47;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:166
_50 = (frost$core$Int) {3u};
*(&local5) = _50;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:167
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { .nonnull = false });
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:168
*(&local7) = ((frost$core$String*) NULL);
_56 = ((frost$core$Object*) ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_56);
_58 = *(&local7);
_59 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_59);
*(&local7) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:169
_63 = (frost$core$Bit) {true};
*(&local8) = _63;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:170
goto block1;
block1:;
_67 = *(&local0);
_68 = ($fn142) _67->$class->vtable[2];
_69 = _68(_67);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:170:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_72 = _69.value;
_73 = !_72;
_74 = (frost$core$Bit) {_73};
_76 = _74.value;
if (_76) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:171
_79 = *(&local0);
_80 = ($fn143) _79->$class->vtable[3];
_81 = _80(_79);
*(&local9) = ((frost$core$String*) NULL);
_83 = ((frost$core$Object*) _81);
frost$core$Frost$ref$frost$core$Object$Q(_83);
_85 = *(&local9);
_86 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_86);
*(&local9) = _81;
_89 = ((frost$core$Object*) _81);
frost$core$Frost$unref$frost$core$Object$Q(_89);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:172
_92 = *(&local9);
_93 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_92, &$s144);
_94 = _93.value;
if (_94) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:174
*(&local10) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:175
FROST_ASSERT(24 == sizeof(frost$io$File));
_99 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String(_99, &$s145);
*(&local11) = ((frost$io$File*) NULL);
_102 = ((frost$core$Object*) _99);
frost$core$Frost$ref$frost$core$Object$Q(_102);
_104 = *(&local11);
_105 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_105);
*(&local11) = _99;
_108 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_108);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:176
_111 = frost$io$Console$inputStream$R$frost$io$InputStream();
_112 = *(&local11);
_113 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(_112);
_114 = _113;
_115 = &_114->$rawValue;
_116 = *_115;
_117 = _116.value;
_118 = _117 == 0u;
if (_118) goto block10; else goto block11;
block11:;
_120 = (frost$core$Error**) (_113->$data + 0);
_121 = *_120;
_122 = ((frost$core$Object*) _121);
frost$core$Frost$ref$frost$core$Object$Q(_122);
*(&local10) = _121;
_125 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_125);
_127 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_127);
_129 = *(&local11);
_130 = ((frost$core$Object*) _129);
frost$core$Frost$unref$frost$core$Object$Q(_130);
*(&local11) = ((frost$io$File*) NULL);
goto block8;
block10:;
_134 = (frost$core$Object**) (_113->$data + 0);
_135 = *_134;
_136 = ((frost$io$OutputStream*) _135);
_137 = ($fn146) _111->$class->vtable[17];
_138 = _137(_111, _136);
_139 = _138;
_140 = &_139->$rawValue;
_141 = *_140;
_142 = _141.value;
_143 = _142 == 0u;
if (_143) goto block12; else goto block13;
block13:;
_145 = (frost$core$Error**) (_138->$data + 0);
_146 = *_145;
_147 = ((frost$core$Object*) _146);
frost$core$Frost$ref$frost$core$Object$Q(_147);
*(&local10) = _146;
_150 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_150);
_152 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_152);
_154 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_154);
_156 = *(&local11);
_157 = ((frost$core$Object*) _156);
frost$core$Frost$unref$frost$core$Object$Q(_157);
*(&local11) = ((frost$io$File*) NULL);
goto block8;
block12:;
_161 = (frost$core$Object**) (_138->$data + 0);
_162 = *_161;
_163 = ((frost$core$Int$wrapper*) _162)->value;
_164 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_164);
_166 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_166);
_168 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_168);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:177
_171 = *(&local1);
_172 = _171;
_173 = *(&local11);
_174 = ((frost$core$Object*) _173);
frost$collections$Array$add$frost$collections$Array$T(_172, _174);
_176 = *(&local11);
_177 = ((frost$core$Object*) _176);
frost$core$Frost$unref$frost$core$Object$Q(_177);
*(&local11) = ((frost$io$File*) NULL);
_203 = *(&local10);
_204 = ((frost$core$Object*) _203);
frost$core$Frost$unref$frost$core$Object$Q(_204);
*(&local10) = ((frost$core$Error*) NULL);
goto block5;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:180
_182 = *(&local10);
_183 = ((frost$core$Object*) _182);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:180:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_186 = ($fn147) _183->$class->vtable[0];
_187 = _186(_183);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_187);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_194 = ((frost$core$Object*) _187);
frost$core$Frost$unref$frost$core$Object$Q(_194);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:181
_198 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_198);
_200 = (frost$core$Int) {181u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s148, _200, &$s149);
abort(); // unreachable
block7:;
_208 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_92, &$s150);
_209 = _208.value;
if (_209) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:185
_212 = *(&local3);
_213 = _212 != NULL;
_214 = (frost$core$Bit) {_213};
_215 = _214.value;
if (_215) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:186
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:186:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s151);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s152);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:187
_228 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_228);
_230 = (frost$core$Int) {187u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s153, _230, &$s154);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:189
FROST_ASSERT(24 == sizeof(frost$io$File));
_234 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
_235 = *(&local0);
_236 = ($fn155) _235->$class->vtable[4];
_237 = _236(_235, &$s156);
frost$io$File$init$frost$core$String(_234, _237);
_239 = _234;
_240 = ((frost$core$Object*) _239);
frost$core$Frost$ref$frost$core$Object$Q(_240);
_242 = *(&local3);
_243 = ((frost$core$Object*) _242);
frost$core$Frost$unref$frost$core$Object$Q(_243);
*(&local3) = _239;
_246 = ((frost$core$Object*) _237);
frost$core$Frost$unref$frost$core$Object$Q(_246);
_248 = ((frost$core$Object*) _234);
frost$core$Frost$unref$frost$core$Object$Q(_248);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:190
*(&local12) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:191
_253 = *(&local3);
_254 = _253 != NULL;
_255 = (frost$core$Bit) {_254};
_256 = _255.value;
if (_256) goto block24; else goto block25;
block25:;
_258 = (frost$core$Int) {191u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s157, _258, &$s158);
abort(); // unreachable
block24:;
_261 = _253;
// begin inline call to function frost.io.File.get_parent():frost.io.File? from Main.frost:191:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_264 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_261, &$s159);
_265 = &_264->path;
_266 = *_265;
_267 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_266);
*(&local14) = ((frost$core$String*) NULL);
_269 = ((frost$core$Object*) _267);
frost$core$Frost$ref$frost$core$Object$Q(_269);
_271 = *(&local14);
_272 = ((frost$core$Object*) _271);
frost$core$Frost$unref$frost$core$Object$Q(_272);
*(&local14) = _267;
_275 = ((frost$core$Object*) _267);
frost$core$Frost$unref$frost$core$Object$Q(_275);
_277 = ((frost$core$Object*) _264);
frost$core$Frost$unref$frost$core$Object$Q(_277);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_280 = *(&local14);
_281 = _280 == NULL;
_282 = (frost$core$Bit) {_281};
_283 = _282.value;
if (_283) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
_286 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_286);
_288 = *(&local14);
_289 = ((frost$core$Object*) _288);
frost$core$Frost$unref$frost$core$Object$Q(_289);
*(&local14) = ((frost$core$String*) NULL);
*(&local13) = ((frost$io$File*) NULL);
_293 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_293);
goto block26;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
_297 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
_298 = *(&local14);
_299 = _298 != NULL;
_300 = (frost$core$Bit) {_299};
_301 = _300.value;
if (_301) goto block29; else goto block30;
block30:;
_303 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s160, _303, &$s161);
abort(); // unreachable
block29:;
_306 = _298;
frost$io$File$init$frost$core$String(_297, _306);
_308 = _297;
_309 = ((frost$core$Object*) _308);
frost$core$Frost$ref$frost$core$Object$Q(_309);
_311 = ((frost$core$Object*) _297);
frost$core$Frost$unref$frost$core$Object$Q(_311);
_313 = *(&local14);
_314 = ((frost$core$Object*) _313);
frost$core$Frost$unref$frost$core$Object$Q(_314);
*(&local14) = ((frost$core$String*) NULL);
*(&local13) = _308;
_318 = ((frost$core$Object*) _308);
frost$core$Frost$ref$frost$core$Object$Q(_318);
goto block26;
block26:;
_321 = *(&local13);
_322 = _321 != NULL;
_323 = (frost$core$Bit) {_322};
_324 = _323.value;
if (_324) goto block31; else goto block32;
block32:;
_326 = (frost$core$Int) {191u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s162, _326, &$s163);
abort(); // unreachable
block31:;
_329 = _321;
_330 = frost$io$File$createDirectories$R$frost$core$Error$Q(_329);
_331 = _330 == NULL;
if (_331) goto block33; else goto block34;
block34:;
_333 = ((frost$core$Object*) _330);
frost$core$Frost$ref$frost$core$Object$Q(_333);
_335 = _330 != NULL;
_336 = (frost$core$Bit) {_335};
_337 = _336.value;
if (_337) goto block35; else goto block36;
block36:;
_339 = (frost$core$Int) {191u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s164, _339, &$s165);
abort(); // unreachable
block35:;
_342 = _330;
*(&local12) = _342;
_344 = ((frost$core$Object*) _330);
frost$core$Frost$unref$frost$core$Object$Q(_344);
_346 = ((frost$core$Object*) _321);
frost$core$Frost$unref$frost$core$Object$Q(_346);
_348 = *(&local13);
_349 = ((frost$core$Object*) _348);
frost$core$Frost$unref$frost$core$Object$Q(_349);
*(&local13) = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:194
_363 = *(&local12);
_364 = ((frost$core$Object*) _363);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:194:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_367 = ($fn166) _364->$class->vtable[0];
_368 = _367(_364);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_368);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_375 = ((frost$core$Object*) _368);
frost$core$Frost$unref$frost$core$Object$Q(_375);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:195
_379 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_379);
_381 = (frost$core$Int) {195u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s167, _381, &$s168);
abort(); // unreachable
block33:;
_353 = ((frost$core$Object*) _330);
frost$core$Frost$unref$frost$core$Object$Q(_353);
_355 = ((frost$core$Object*) _321);
frost$core$Frost$unref$frost$core$Object$Q(_355);
_357 = *(&local13);
_358 = ((frost$core$Object*) _357);
frost$core$Frost$unref$frost$core$Object$Q(_358);
*(&local13) = ((frost$io$File*) NULL);
_384 = *(&local12);
_385 = ((frost$core$Object*) _384);
frost$core$Frost$unref$frost$core$Object$Q(_385);
*(&local12) = ((frost$core$Error*) NULL);
goto block5;
block17:;
_389 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_92, &$s169);
_390 = _389.value;
if (_390) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:199
_393 = *(&local0);
_394 = ($fn170) _393->$class->vtable[4];
_395 = _394(_393, &$s171);
*(&local15) = ((frost$core$String*) NULL);
_397 = ((frost$core$Object*) _395);
frost$core$Frost$ref$frost$core$Object$Q(_397);
_399 = *(&local15);
_400 = ((frost$core$Object*) _399);
frost$core$Frost$unref$frost$core$Object$Q(_400);
*(&local15) = _395;
_403 = ((frost$core$Object*) _395);
frost$core$Frost$unref$frost$core$Object$Q(_403);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:200
_406 = *(&local15);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Main.frost:200:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
_409 = frost$core$String$get_asInt64$R$frost$core$Int64$Q(_406);
*(&local17) = _409;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
_412 = *(&local17);
_413 = _412.nonnull;
_414 = (frost$core$Bit) {_413};
_415 = _414.value;
if (_415) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
_418 = *(&local17);
_419 = _418.nonnull;
_420 = (frost$core$Bit) {_419};
_421 = _420.value;
if (_421) goto block44; else goto block45;
block45:;
_423 = (frost$core$Int) {1456u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s172, _423, &$s173);
abort(); // unreachable
block44:;
_426 = ((frost$core$Int64) _418.value);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_429 = _426.value;
_430 = ((int64_t) _429);
_431 = (frost$core$Int) {_430};
_433 = ((frost$core$Int$nullable) { _431, true });
*(&local16) = _433;
goto block41;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local16) = ((frost$core$Int$nullable) { .nonnull = false });
goto block41;
block41:;
_439 = *(&local16);
*(&local18) = _439;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:201
_442 = *(&local18);
_443 = !_442.nonnull;
_444 = (frost$core$Bit) {_443};
_445 = _444.value;
if (_445) goto block47; else goto block50;
block50:;
_447 = *(&local18);
_448 = _447.nonnull;
_449 = (frost$core$Bit) {_448};
_450 = _449.value;
if (_450) goto block51; else goto block52;
block52:;
_452 = (frost$core$Int) {201u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s174, _452, &$s175);
abort(); // unreachable
block51:;
_455 = ((frost$core$Int) _447.value);
_456 = (frost$core$Int) {3u};
_457 = _455.value;
_458 = _456.value;
_459 = _457 > _458;
_460 = (frost$core$Bit) {_459};
_461 = _460.value;
if (_461) goto block47; else goto block49;
block49:;
_463 = *(&local18);
_464 = _463.nonnull;
_465 = (frost$core$Bit) {_464};
_466 = _465.value;
if (_466) goto block53; else goto block54;
block54:;
_468 = (frost$core$Int) {201u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s176, _468, &$s177);
abort(); // unreachable
block53:;
_471 = ((frost$core$Int) _463.value);
_472 = (frost$core$Int) {0u};
_473 = _471.value;
_474 = _472.value;
_475 = _473 < _474;
_476 = (frost$core$Bit) {_475};
_477 = _476.value;
if (_477) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:202
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:202:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s178);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s179);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:203
_490 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_490);
_492 = (frost$core$Int) {203u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s180, _492, &$s181);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:205
_496 = *(&local18);
_497 = _496.nonnull;
_498 = (frost$core$Bit) {_497};
_499 = _498.value;
if (_499) goto block57; else goto block58;
block58:;
_501 = (frost$core$Int) {205u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s182, _501, &$s183);
abort(); // unreachable
block57:;
_504 = ((frost$core$Int) _496.value);
*(&local4) = _504;
_506 = *(&local15);
_507 = ((frost$core$Object*) _506);
frost$core$Frost$unref$frost$core$Object$Q(_507);
*(&local15) = ((frost$core$String*) NULL);
goto block5;
block40:;
_511 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_92, &$s184);
_512 = _511.value;
if (_512) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:208
_515 = *(&local0);
_516 = ($fn185) _515->$class->vtable[4];
_517 = _516(_515, &$s186);
*(&local19) = ((frost$core$String*) NULL);
_519 = ((frost$core$Object*) _517);
frost$core$Frost$ref$frost$core$Object$Q(_519);
_521 = *(&local19);
_522 = ((frost$core$Object*) _521);
frost$core$Frost$unref$frost$core$Object$Q(_522);
*(&local19) = _517;
_525 = ((frost$core$Object*) _517);
frost$core$Frost$unref$frost$core$Object$Q(_525);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:209
_528 = *(&local19);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Main.frost:209:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
_531 = frost$core$String$get_asInt64$R$frost$core$Int64$Q(_528);
*(&local21) = _531;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
_534 = *(&local21);
_535 = _534.nonnull;
_536 = (frost$core$Bit) {_535};
_537 = _536.value;
if (_537) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
_540 = *(&local21);
_541 = _540.nonnull;
_542 = (frost$core$Bit) {_541};
_543 = _542.value;
if (_543) goto block64; else goto block65;
block65:;
_545 = (frost$core$Int) {1456u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s187, _545, &$s188);
abort(); // unreachable
block64:;
_548 = ((frost$core$Int64) _540.value);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_551 = _548.value;
_552 = ((int64_t) _551);
_553 = (frost$core$Int) {_552};
_555 = ((frost$core$Int$nullable) { _553, true });
*(&local20) = _555;
goto block61;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local20) = ((frost$core$Int$nullable) { .nonnull = false });
goto block61;
block61:;
_561 = *(&local20);
*(&local22) = _561;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:210
_564 = *(&local22);
_565 = !_564.nonnull;
_566 = (frost$core$Bit) {_565};
_567 = _566.value;
if (_567) goto block67; else goto block70;
block70:;
_569 = *(&local22);
_570 = _569.nonnull;
_571 = (frost$core$Bit) {_570};
_572 = _571.value;
if (_572) goto block71; else goto block72;
block72:;
_574 = (frost$core$Int) {210u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s189, _574, &$s190);
abort(); // unreachable
block71:;
_577 = ((frost$core$Int) _569.value);
_578 = (frost$core$Int) {3u};
_579 = _577.value;
_580 = _578.value;
_581 = _579 > _580;
_582 = (frost$core$Bit) {_581};
_583 = _582.value;
if (_583) goto block67; else goto block69;
block69:;
_585 = *(&local22);
_586 = _585.nonnull;
_587 = (frost$core$Bit) {_586};
_588 = _587.value;
if (_588) goto block73; else goto block74;
block74:;
_590 = (frost$core$Int) {210u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s191, _590, &$s192);
abort(); // unreachable
block73:;
_593 = ((frost$core$Int) _585.value);
_594 = (frost$core$Int) {0u};
_595 = _593.value;
_596 = _594.value;
_597 = _595 < _596;
_598 = (frost$core$Bit) {_597};
_599 = _598.value;
if (_599) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:211
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:211:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s193);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s194);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:212
_612 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_612);
_614 = (frost$core$Int) {212u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s195, _614, &$s196);
abort(); // unreachable
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:214
_618 = *(&local22);
_619 = _618.nonnull;
_620 = (frost$core$Bit) {_619};
_621 = _620.value;
if (_621) goto block77; else goto block78;
block78:;
_623 = (frost$core$Int) {214u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s197, _623, &$s198);
abort(); // unreachable
block77:;
_626 = ((frost$core$Int) _618.value);
*(&local5) = _626;
_628 = *(&local19);
_629 = ((frost$core$Object*) _628);
frost$core$Frost$unref$frost$core$Object$Q(_629);
*(&local19) = ((frost$core$String*) NULL);
goto block5;
block60:;
_633 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_92, &$s199);
_634 = _633.value;
if (_634) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:217
_637 = *(&local6);
_638 = _637.nonnull;
_639 = (frost$core$Bit) {_638};
_640 = _639.value;
if (_640) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:218
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:218:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s200);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s201);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:219
_653 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_653);
_655 = (frost$core$Int) {219u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s202, _655, &$s203);
abort(); // unreachable
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:221
_659 = *(&local0);
_660 = ($fn204) _659->$class->vtable[4];
_661 = _660(_659, &$s205);
*(&local23) = ((frost$core$String*) NULL);
_663 = ((frost$core$Object*) _661);
frost$core$Frost$ref$frost$core$Object$Q(_663);
_665 = *(&local23);
_666 = ((frost$core$Object*) _665);
frost$core$Frost$unref$frost$core$Object$Q(_666);
*(&local23) = _661;
_669 = ((frost$core$Object*) _661);
frost$core$Frost$unref$frost$core$Object$Q(_669);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:222
_672 = *(&local23);
_673 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_672, &$s206);
_674 = _673.value;
if (_674) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:223
_677 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:223:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_680 = &(&local25)->$rawValue;
*_680 = _677;
_682 = *(&local25);
*(&local24) = _682;
_685 = *(&local24);
_686 = ((org$frostlang$frostc$Main$Format$nullable) { _685, true });
*(&local6) = _686;
goto block85;
block87:;
_689 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_672, &$s207);
_690 = _689.value;
if (_690) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:224
_693 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:224:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_696 = &(&local27)->$rawValue;
*_696 = _693;
_698 = *(&local27);
*(&local26) = _698;
_701 = *(&local26);
_702 = ((org$frostlang$frostc$Main$Format$nullable) { _701, true });
*(&local6) = _702;
goto block85;
block90:;
_705 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_672, &$s208);
_706 = _705.value;
if (_706) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:225
_709 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:225:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_712 = &(&local29)->$rawValue;
*_712 = _709;
_714 = *(&local29);
*(&local28) = _714;
_717 = *(&local28);
_718 = ((org$frostlang$frostc$Main$Format$nullable) { _717, true });
*(&local6) = _718;
goto block85;
block93:;
_721 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_672, &$s209);
_722 = _721.value;
if (_722) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:226
_725 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:226:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_728 = &(&local31)->$rawValue;
*_728 = _725;
_730 = *(&local31);
*(&local30) = _730;
_733 = *(&local30);
_734 = ((org$frostlang$frostc$Main$Format$nullable) { _733, true });
*(&local6) = _734;
goto block85;
block96:;
_737 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_672, &$s210);
_738 = _737.value;
if (_738) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:227
_741 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:227:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_744 = &(&local33)->$rawValue;
*_744 = _741;
_746 = *(&local33);
*(&local32) = _746;
_749 = *(&local32);
_750 = ((org$frostlang$frostc$Main$Format$nullable) { _749, true });
*(&local6) = _750;
goto block85;
block99:;
_753 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_672, &$s211);
_754 = _753.value;
if (_754) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:228
_757 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:228:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_760 = &(&local35)->$rawValue;
*_760 = _757;
_762 = *(&local35);
*(&local34) = _762;
_765 = *(&local34);
_766 = ((org$frostlang$frostc$Main$Format$nullable) { _765, true });
*(&local6) = _766;
goto block85;
block102:;
_769 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_672, &$s212);
_770 = _769.value;
if (_770) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:229
_773 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:229:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_776 = &(&local37)->$rawValue;
*_776 = _773;
_778 = *(&local37);
*(&local36) = _778;
_781 = *(&local36);
_782 = ((org$frostlang$frostc$Main$Format$nullable) { _781, true });
*(&local6) = _782;
goto block85;
block105:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:231
_786 = *(&local23);
_787 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s213, _786);
_788 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_787, &$s214);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:231:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_788);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s215);
_798 = ((frost$core$Object*) _788);
frost$core$Frost$unref$frost$core$Object$Q(_798);
_800 = ((frost$core$Object*) _787);
frost$core$Frost$unref$frost$core$Object$Q(_800);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:232
_803 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_803);
_805 = (frost$core$Int) {232u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s216, _805, &$s217);
abort(); // unreachable
block85:;
_808 = *(&local23);
_809 = ((frost$core$Object*) _808);
frost$core$Frost$unref$frost$core$Object$Q(_809);
*(&local23) = ((frost$core$String*) NULL);
goto block5;
block80:;
_813 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_92, &$s218);
_814 = _813.value;
if (_814) goto block109; else goto block110;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:237
_817 = *(&local2);
_818 = _817;
FROST_ASSERT(24 == sizeof(frost$io$File));
_819 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
_820 = *(&local0);
_821 = ($fn219) _820->$class->vtable[4];
_822 = _821(_820, &$s220);
frost$io$File$init$frost$core$String(_819, _822);
_824 = ((frost$core$Object*) _819);
frost$collections$Array$add$frost$collections$Array$T(_818, _824);
_826 = ((frost$core$Object*) _822);
frost$core$Frost$unref$frost$core$Object$Q(_826);
_828 = ((frost$core$Object*) _819);
frost$core$Frost$unref$frost$core$Object$Q(_828);
goto block5;
block110:;
_831 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_92, &$s221);
_832 = _831.value;
if (_832) goto block111; else goto block112;
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:240
_835 = *(&local0);
_836 = ($fn222) _835->$class->vtable[4];
_837 = _836(_835, &$s223);
_838 = _837;
_839 = ((frost$core$Object*) _838);
frost$core$Frost$ref$frost$core$Object$Q(_839);
_841 = *(&local7);
_842 = ((frost$core$Object*) _841);
frost$core$Frost$unref$frost$core$Object$Q(_842);
*(&local7) = _838;
_845 = ((frost$core$Object*) _837);
frost$core$Frost$unref$frost$core$Object$Q(_845);
goto block5;
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:243
_849 = *(&local9);
_850 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(_849, &$s224);
_851 = _850.value;
if (_851) goto block113; else goto block115;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:244
FROST_ASSERT(24 == sizeof(frost$io$File));
_854 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
_855 = *(&local9);
frost$io$File$init$frost$core$String(_854, _855);
*(&local38) = ((frost$io$File*) NULL);
_858 = ((frost$core$Object*) _854);
frost$core$Frost$ref$frost$core$Object$Q(_858);
_860 = *(&local38);
_861 = ((frost$core$Object*) _860);
frost$core$Frost$unref$frost$core$Object$Q(_861);
*(&local38) = _854;
_864 = ((frost$core$Object*) _854);
frost$core$Frost$unref$frost$core$Object$Q(_864);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:245
_867 = *(&local1);
_868 = _867;
_869 = *(&local38);
_870 = ((frost$core$Object*) _869);
frost$collections$Array$add$frost$collections$Array$T(_868, _870);
_872 = *(&local38);
_873 = ((frost$core$Object*) _872);
frost$core$Frost$unref$frost$core$Object$Q(_873);
*(&local38) = ((frost$io$File*) NULL);
goto block5;
block115:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:248
_879 = *(&local9);
_880 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s225, _879);
_881 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_880, &$s226);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:248:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_881);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s227);
_891 = ((frost$core$Object*) _881);
frost$core$Frost$unref$frost$core$Object$Q(_891);
_893 = ((frost$core$Object*) _880);
frost$core$Frost$unref$frost$core$Object$Q(_893);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:249
_896 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_896);
_898 = (frost$core$Int) {249u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s228, _898, &$s229);
abort(); // unreachable
block5:;
_902 = *(&local9);
_903 = ((frost$core$Object*) _902);
frost$core$Frost$unref$frost$core$Object$Q(_903);
*(&local9) = ((frost$core$String*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:254
_908 = *(&local6);
_909 = !_908.nonnull;
_910 = (frost$core$Bit) {_909};
_911 = _910.value;
if (_911) goto block118; else goto block120;
block120:;
_913 = *(&local6);
_914 = _913.nonnull;
_915 = (frost$core$Bit) {_914};
_916 = _915.value;
if (_916) goto block121; else goto block122;
block122:;
_918 = (frost$core$Int) {254u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s230, _918, &$s231);
abort(); // unreachable
block121:;
frost$core$Equatable* $tmp232;
if (_913.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp233;
    $tmp233 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp233->value = ((org$frostlang$frostc$Main$Format) _913.value);
    $tmp232 = ((frost$core$Equatable*) $tmp233);
}
else {
    $tmp232 = NULL;
}
_921 = $tmp232;
_922 = _921;
_923 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:254:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_926 = &(&local40)->$rawValue;
*_926 = _923;
_928 = *(&local40);
*(&local39) = _928;
_931 = *(&local39);
org$frostlang$frostc$Main$Format$wrapper* $tmp234;
$tmp234 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp234->value = _931;
_932 = ((frost$core$Equatable*) $tmp234);
ITable* $tmp235 = _922->$class->itable;
while ($tmp235->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp235 = $tmp235->next;
}
_933 = $tmp235->methods[1];
_934 = _933(_922, _932);
_935 = _934.value;
_936 = ((frost$core$Object*) _932);
frost$core$Frost$unref$frost$core$Object$Q(_936);
_938 = ((frost$core$Object*) _921);
frost$core$Frost$unref$frost$core$Object$Q(_938);
if (_935) goto block118; else goto block119;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:255
_942 = *(&local2);
_943 = _942;
FROST_ASSERT(24 == sizeof(frost$io$File));
_944 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
_945 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$io$File$init$frost$core$String(_944, _945);
_947 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_944, &$s236);
_948 = ((frost$core$Object*) _947);
frost$collections$Array$add$frost$collections$Array$T(_943, _948);
_950 = ((frost$core$Object*) _947);
frost$core$Frost$unref$frost$core$Object$Q(_950);
_952 = ((frost$core$Object*) _945);
frost$core$Frost$unref$frost$core$Object$Q(_952);
_954 = ((frost$core$Object*) _944);
frost$core$Frost$unref$frost$core$Object$Q(_954);
goto block119;
block119:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:257
_958 = *(&local2);
_959 = _958;
_960 = &param0->frostHome;
_961 = *_960;
_962 = ((frost$core$Object*) _961);
frost$collections$Array$add$frost$collections$Array$T(_959, _962);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:258
FROST_ASSERT(24 == sizeof(frost$io$File));
_965 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
_966 = org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String(_965, _966);
*(&local41) = ((frost$io$File*) NULL);
_969 = ((frost$core$Object*) _965);
frost$core$Frost$ref$frost$core$Object$Q(_969);
_971 = *(&local41);
_972 = ((frost$core$Object*) _971);
frost$core$Frost$unref$frost$core$Object$Q(_972);
*(&local41) = _965;
_975 = ((frost$core$Object*) _966);
frost$core$Frost$unref$frost$core$Object$Q(_975);
_977 = ((frost$core$Object*) _965);
frost$core$Frost$unref$frost$core$Object$Q(_977);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:259
FROST_ASSERT(24 == sizeof(frost$io$File));
_980 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String(_980, &$s237);
_982 = ((frost$core$Object*) _980);
frost$core$Frost$ref$frost$core$Object$Q(_982);
_984 = &param0->clang;
_985 = *_984;
_986 = ((frost$core$Object*) _985);
frost$core$Frost$unref$frost$core$Object$Q(_986);
_988 = &param0->clang;
*_988 = _980;
_990 = ((frost$core$Object*) _980);
frost$core$Frost$unref$frost$core$Object$Q(_990);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:260
_993 = *(&local1);
_994 = ((frost$collections$CollectionView*) _993);
ITable* $tmp238 = _994->$class->itable;
while ($tmp238->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp238 = $tmp238->next;
}
_995 = $tmp238->methods[0];
_996 = _995(_994);
_997 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:260:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1000 = _996.value;
_1001 = _997.value;
_1002 = _1000 == _1001;
_1003 = (frost$core$Bit) {_1002};
_1005 = _1003.value;
if (_1005) goto block124; else goto block125;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:261
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:261:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s239);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s240);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:262
_1018 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1018);
_1020 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s241, _1020, &$s242);
abort(); // unreachable
block125:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:264
_1024 = *(&local6);
_1025 = !_1024.nonnull;
_1026 = (frost$core$Bit) {_1025};
_1027 = _1026.value;
if (_1027) goto block129; else goto block130;
block129:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:265
_1030 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:265:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_1033 = &(&local43)->$rawValue;
*_1033 = _1030;
_1035 = *(&local43);
*(&local42) = _1035;
_1038 = *(&local42);
_1039 = ((org$frostlang$frostc$Main$Format$nullable) { _1038, true });
*(&local6) = _1039;
goto block130;
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:267
_1043 = *(&local3);
_1044 = _1043 == NULL;
_1045 = (frost$core$Bit) {_1044};
_1046 = _1045.value;
if (_1046) goto block132; else goto block133;
block132:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:268
_1049 = *(&local1);
_1050 = ((frost$collections$CollectionView*) _1049);
ITable* $tmp243 = _1050->$class->itable;
while ($tmp243->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp243 = $tmp243->next;
}
_1051 = $tmp243->methods[0];
_1052 = _1051(_1050);
_1053 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:268:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1056 = _1052.value;
_1057 = _1053.value;
_1058 = _1056 == _1057;
_1059 = (frost$core$Bit) {_1058};
_1061 = _1059.value;
if (_1061) goto block134; else goto block136;
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:269
*(&local44) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:270
_1066 = *(&local6);
_1067 = _1066.nonnull;
_1068 = (frost$core$Bit) {_1067};
_1069 = _1068.value;
if (_1069) goto block138; else goto block139;
block139:;
_1071 = (frost$core$Int) {270u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s244, _1071, &$s245);
abort(); // unreachable
block138:;
_1074 = ((org$frostlang$frostc$Main$Format) _1066.value);
_1075 = _1074.$rawValue;
_1076 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:271:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1079 = _1075.value;
_1080 = _1076.value;
_1081 = _1079 == _1080;
_1082 = (frost$core$Bit) {_1081};
_1084 = _1082.value;
if (_1084) goto block141; else goto block142;
block141:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:271
_1087 = ((frost$core$Object*) &$s246);
frost$core$Frost$ref$frost$core$Object$Q(_1087);
_1089 = *(&local44);
_1090 = ((frost$core$Object*) _1089);
frost$core$Frost$unref$frost$core$Object$Q(_1090);
*(&local44) = &$s247;
goto block140;
block142:;
_1094 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:272:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1097 = _1075.value;
_1098 = _1094.value;
_1099 = _1097 == _1098;
_1100 = (frost$core$Bit) {_1099};
_1102 = _1100.value;
if (_1102) goto block144; else goto block145;
block144:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:272
_1105 = ((frost$core$Object*) &$s248);
frost$core$Frost$ref$frost$core$Object$Q(_1105);
_1107 = *(&local44);
_1108 = ((frost$core$Object*) _1107);
frost$core$Frost$unref$frost$core$Object$Q(_1108);
*(&local44) = &$s249;
goto block140;
block145:;
_1112 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:273:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1115 = _1075.value;
_1116 = _1112.value;
_1117 = _1115 == _1116;
_1118 = (frost$core$Bit) {_1117};
_1120 = _1118.value;
if (_1120) goto block147; else goto block148;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:273
_1123 = ((frost$core$Object*) &$s250);
frost$core$Frost$ref$frost$core$Object$Q(_1123);
_1125 = *(&local44);
_1126 = ((frost$core$Object*) _1125);
frost$core$Frost$unref$frost$core$Object$Q(_1126);
*(&local44) = &$s251;
goto block140;
block148:;
_1130 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:274:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1133 = _1075.value;
_1134 = _1130.value;
_1135 = _1133 == _1134;
_1136 = (frost$core$Bit) {_1135};
_1138 = _1136.value;
if (_1138) goto block150; else goto block151;
block150:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:274
_1141 = ((frost$core$Object*) &$s252);
frost$core$Frost$ref$frost$core$Object$Q(_1141);
_1143 = *(&local44);
_1144 = ((frost$core$Object*) _1143);
frost$core$Frost$unref$frost$core$Object$Q(_1144);
*(&local44) = &$s253;
goto block140;
block151:;
_1148 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:275:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1151 = _1075.value;
_1152 = _1148.value;
_1153 = _1151 == _1152;
_1154 = (frost$core$Bit) {_1153};
_1156 = _1154.value;
if (_1156) goto block153; else goto block154;
block153:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:275
_1159 = ((frost$core$Object*) &$s254);
frost$core$Frost$ref$frost$core$Object$Q(_1159);
_1161 = *(&local44);
_1162 = ((frost$core$Object*) _1161);
frost$core$Frost$unref$frost$core$Object$Q(_1162);
*(&local44) = &$s255;
goto block140;
block154:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:277
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:277:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s256);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s257);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:279
_1177 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1177);
_1179 = (frost$core$Int) {279u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s258, _1179, &$s259);
abort(); // unreachable
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:282
_1183 = *(&local1);
_1184 = _1183;
_1185 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Main.frost:282:35
_1187 = (frost$core$Int) {0u};
_1188 = _1185.value;
_1189 = _1187.value;
_1190 = _1188 >= _1189;
_1191 = (frost$core$Bit) {_1190};
_1192 = _1191.value;
if (_1192) goto block161; else goto block160;
block161:;
_1194 = ((frost$collections$CollectionView*) _1184);
ITable* $tmp260 = _1194->$class->itable;
while ($tmp260->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp260 = $tmp260->next;
}
_1195 = $tmp260->methods[0];
_1196 = _1195(_1194);
_1197 = _1185.value;
_1198 = _1196.value;
_1199 = _1197 < _1198;
_1200 = (frost$core$Bit) {_1199};
_1201 = _1200.value;
if (_1201) goto block159; else goto block160;
block160:;
_1203 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s261, _1203, &$s262);
abort(); // unreachable
block159:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_1207 = &_1184->data;
_1208 = *_1207;
_1209 = frost$core$Int64$init$frost$core$Int(_1185);
_1210 = _1209.value;
_1211 = _1208[_1210];
_1212 = _1211;
frost$core$Frost$ref$frost$core$Object$Q(_1212);
_1215 = ((frost$io$File*) _1211);
_1216 = *(&local44);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:282:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_1221 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1215, &$s263);
_1222 = &_1221->path;
_1223 = *_1222;
_1224 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_1223);
*(&local46) = ((frost$core$String*) NULL);
_1226 = ((frost$core$Object*) _1224);
frost$core$Frost$ref$frost$core$Object$Q(_1226);
_1228 = *(&local46);
_1229 = ((frost$core$Object*) _1228);
frost$core$Frost$unref$frost$core$Object$Q(_1229);
*(&local46) = _1224;
_1232 = ((frost$core$Object*) _1224);
frost$core$Frost$unref$frost$core$Object$Q(_1232);
_1234 = ((frost$core$Object*) _1221);
frost$core$Frost$unref$frost$core$Object$Q(_1234);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_1237 = *(&local46);
_1238 = _1237 == NULL;
_1239 = (frost$core$Bit) {_1238};
_1240 = _1239.value;
if (_1240) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
_1243 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1243);
_1245 = *(&local46);
_1246 = ((frost$core$Object*) _1245);
frost$core$Frost$unref$frost$core$Object$Q(_1246);
*(&local46) = ((frost$core$String*) NULL);
*(&local45) = ((frost$io$File*) NULL);
_1250 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1250);
goto block163;
block165:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
_1254 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
_1255 = *(&local46);
_1256 = _1255 != NULL;
_1257 = (frost$core$Bit) {_1256};
_1258 = _1257.value;
if (_1258) goto block166; else goto block167;
block167:;
_1260 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s264, _1260, &$s265);
abort(); // unreachable
block166:;
_1263 = _1255;
frost$io$File$init$frost$core$String(_1254, _1263);
_1265 = _1254;
_1266 = ((frost$core$Object*) _1265);
frost$core$Frost$ref$frost$core$Object$Q(_1266);
_1268 = ((frost$core$Object*) _1254);
frost$core$Frost$unref$frost$core$Object$Q(_1268);
_1270 = *(&local46);
_1271 = ((frost$core$Object*) _1270);
frost$core$Frost$unref$frost$core$Object$Q(_1271);
*(&local46) = ((frost$core$String*) NULL);
*(&local45) = _1265;
_1275 = ((frost$core$Object*) _1265);
frost$core$Frost$ref$frost$core$Object$Q(_1275);
goto block163;
block163:;
_1278 = *(&local45);
_1279 = _1278 != NULL;
_1280 = (frost$core$Bit) {_1279};
_1281 = _1280.value;
if (_1281) goto block168; else goto block169;
block169:;
_1283 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s266, _1283, &$s267);
abort(); // unreachable
block168:;
_1286 = _1278;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_1289 = frost$io$File$get_name$R$frost$core$String(_1215);
*(&local48) = ((frost$core$String*) NULL);
_1291 = ((frost$core$Object*) _1289);
frost$core$Frost$ref$frost$core$Object$Q(_1291);
_1293 = *(&local48);
_1294 = ((frost$core$Object*) _1293);
frost$core$Frost$unref$frost$core$Object$Q(_1294);
*(&local48) = _1289;
_1297 = ((frost$core$Object*) _1289);
frost$core$Frost$unref$frost$core$Object$Q(_1297);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_1300 = *(&local48);
_1301 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_1300, &$s268);
*(&local49) = _1301;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_1304 = *(&local49);
_1305 = !_1304.nonnull;
_1306 = (frost$core$Bit) {_1305};
_1307 = _1306.value;
if (_1307) goto block171; else goto block172;
block171:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
_1310 = *(&local48);
_1311 = ((frost$core$Object*) _1310);
frost$core$Frost$ref$frost$core$Object$Q(_1311);
_1313 = *(&local48);
_1314 = ((frost$core$Object*) _1313);
frost$core$Frost$unref$frost$core$Object$Q(_1314);
*(&local48) = ((frost$core$String*) NULL);
*(&local47) = _1310;
_1318 = ((frost$core$Object*) _1310);
frost$core$Frost$ref$frost$core$Object$Q(_1318);
goto block170;
block172:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
_1322 = *(&local48);
_1323 = *(&local49);
_1324 = (frost$core$Bit) {false};
_1325 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _1323, _1324);
_1326 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_1322, _1325);
_1327 = ((frost$core$Object*) _1326);
frost$core$Frost$ref$frost$core$Object$Q(_1327);
_1329 = ((frost$core$Object*) _1326);
frost$core$Frost$unref$frost$core$Object$Q(_1329);
_1331 = *(&local48);
_1332 = ((frost$core$Object*) _1331);
frost$core$Frost$unref$frost$core$Object$Q(_1332);
*(&local48) = ((frost$core$String*) NULL);
*(&local47) = _1326;
_1336 = ((frost$core$Object*) _1326);
frost$core$Frost$ref$frost$core$Object$Q(_1336);
goto block170;
block170:;
_1339 = *(&local47);
_1340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1339, _1216);
_1341 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1286, _1340);
_1342 = ((frost$core$Object*) _1341);
frost$core$Frost$ref$frost$core$Object$Q(_1342);
_1344 = ((frost$core$Object*) _1341);
frost$core$Frost$unref$frost$core$Object$Q(_1344);
_1346 = ((frost$core$Object*) _1340);
frost$core$Frost$unref$frost$core$Object$Q(_1346);
_1348 = ((frost$core$Object*) _1339);
frost$core$Frost$unref$frost$core$Object$Q(_1348);
_1350 = *(&local47);
_1351 = ((frost$core$Object*) _1350);
frost$core$Frost$unref$frost$core$Object$Q(_1351);
*(&local47) = ((frost$core$String*) NULL);
_1354 = ((frost$core$Object*) _1278);
frost$core$Frost$unref$frost$core$Object$Q(_1354);
_1356 = *(&local45);
_1357 = ((frost$core$Object*) _1356);
frost$core$Frost$unref$frost$core$Object$Q(_1357);
*(&local45) = ((frost$io$File*) NULL);
_1361 = _1341;
_1362 = ((frost$core$Object*) _1361);
frost$core$Frost$ref$frost$core$Object$Q(_1362);
_1364 = *(&local3);
_1365 = ((frost$core$Object*) _1364);
frost$core$Frost$unref$frost$core$Object$Q(_1365);
*(&local3) = _1361;
_1368 = ((frost$core$Object*) _1341);
frost$core$Frost$unref$frost$core$Object$Q(_1368);
_1370 = _1211;
frost$core$Frost$unref$frost$core$Object$Q(_1370);
_1372 = *(&local44);
_1373 = ((frost$core$Object*) _1372);
frost$core$Frost$unref$frost$core$Object$Q(_1373);
*(&local44) = ((frost$core$String*) NULL);
goto block133;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:284
_1378 = *(&local6);
_1379 = _1378.nonnull;
_1380 = (frost$core$Bit) {_1379};
_1381 = _1380.value;
if (_1381) goto block176; else goto block177;
block177:;
_1383 = (frost$core$Int) {284u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s269, _1383, &$s270);
abort(); // unreachable
block176:;
frost$core$Equatable* $tmp271;
if (_1378.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp272;
    $tmp272 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp272->value = ((org$frostlang$frostc$Main$Format) _1378.value);
    $tmp271 = ((frost$core$Equatable*) $tmp272);
}
else {
    $tmp271 = NULL;
}
_1386 = $tmp271;
_1387 = _1386;
_1388 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:284:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_1391 = &(&local51)->$rawValue;
*_1391 = _1388;
_1393 = *(&local51);
*(&local50) = _1393;
_1396 = *(&local50);
org$frostlang$frostc$Main$Format$wrapper* $tmp273;
$tmp273 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp273->value = _1396;
_1397 = ((frost$core$Equatable*) $tmp273);
ITable* $tmp274 = _1387->$class->itable;
while ($tmp274->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp274 = $tmp274->next;
}
_1398 = $tmp274->methods[0];
_1399 = _1398(_1387, _1397);
_1400 = _1399.value;
_1401 = ((frost$core$Object*) _1397);
frost$core$Frost$unref$frost$core$Object$Q(_1401);
_1403 = ((frost$core$Object*) _1386);
frost$core$Frost$unref$frost$core$Object$Q(_1403);
if (_1400) goto block173; else goto block175;
block173:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:285
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:285:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s275);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s276);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:286
_1417 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1417);
_1419 = (frost$core$Int) {286u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s277, _1419, &$s278);
abort(); // unreachable
block175:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:289
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:289:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s279);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s280);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:291
_1434 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1434);
_1436 = (frost$core$Int) {291u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s281, _1436, &$s282);
abort(); // unreachable
block133:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:294
_1442 = (frost$core$Int) {0u};
*(&local52) = _1442;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:295
_1445 = (frost$core$Int) {0u};
*(&local53) = _1445;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:297
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) NULL);
_1450 = ((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1450);
_1452 = *(&local54);
_1453 = ((frost$core$Object*) _1452);
frost$core$Frost$unref$frost$core$Object$Q(_1453);
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:298
_1457 = *(&local6);
_1458 = _1457.nonnull;
_1459 = (frost$core$Bit) {_1458};
_1460 = _1459.value;
if (_1460) goto block183; else goto block184;
block184:;
_1462 = (frost$core$Int) {298u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s283, _1462, &$s284);
abort(); // unreachable
block183:;
_1465 = ((org$frostlang$frostc$Main$Format) _1457.value);
_1466 = _1465.$rawValue;
_1467 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:299:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1470 = _1466.value;
_1471 = _1467.value;
_1472 = _1470 == _1471;
_1473 = (frost$core$Bit) {_1472};
_1475 = _1473.value;
if (_1475) goto block186; else goto block187;
block187:;
_1477 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:299:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1480 = _1466.value;
_1481 = _1477.value;
_1482 = _1480 == _1481;
_1483 = (frost$core$Bit) {_1482};
_1485 = _1483.value;
if (_1485) goto block186; else goto block189;
block189:;
_1487 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:299:60
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1490 = _1466.value;
_1491 = _1487.value;
_1492 = _1490 == _1491;
_1493 = (frost$core$Bit) {_1492};
_1495 = _1493.value;
if (_1495) goto block186; else goto block191;
block186:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:300
*(&local55) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:301
FROST_ASSERT(264 == sizeof(org$frostlang$frostc$LLVMCodeGenerator));
_1500 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(264, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
_1501 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
_1502 = *(&local3);
_1503 = _1502 != NULL;
_1504 = (frost$core$Bit) {_1503};
_1505 = _1504.value;
if (_1505) goto block195; else goto block196;
block196:;
_1507 = (frost$core$Int) {302u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s285, _1507, &$s286);
abort(); // unreachable
block195:;
_1510 = _1502;
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:302:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_1515 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1510, &$s287);
_1516 = &_1515->path;
_1517 = *_1516;
_1518 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_1517);
*(&local57) = ((frost$core$String*) NULL);
_1520 = ((frost$core$Object*) _1518);
frost$core$Frost$ref$frost$core$Object$Q(_1520);
_1522 = *(&local57);
_1523 = ((frost$core$Object*) _1522);
frost$core$Frost$unref$frost$core$Object$Q(_1523);
*(&local57) = _1518;
_1526 = ((frost$core$Object*) _1518);
frost$core$Frost$unref$frost$core$Object$Q(_1526);
_1528 = ((frost$core$Object*) _1515);
frost$core$Frost$unref$frost$core$Object$Q(_1528);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_1531 = *(&local57);
_1532 = _1531 == NULL;
_1533 = (frost$core$Bit) {_1532};
_1534 = _1533.value;
if (_1534) goto block199; else goto block200;
block199:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
_1537 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1537);
_1539 = *(&local57);
_1540 = ((frost$core$Object*) _1539);
frost$core$Frost$unref$frost$core$Object$Q(_1540);
*(&local57) = ((frost$core$String*) NULL);
*(&local56) = ((frost$io$File*) NULL);
_1544 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1544);
goto block198;
block200:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
_1548 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
_1549 = *(&local57);
_1550 = _1549 != NULL;
_1551 = (frost$core$Bit) {_1550};
_1552 = _1551.value;
if (_1552) goto block201; else goto block202;
block202:;
_1554 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s288, _1554, &$s289);
abort(); // unreachable
block201:;
_1557 = _1549;
frost$io$File$init$frost$core$String(_1548, _1557);
_1559 = _1548;
_1560 = ((frost$core$Object*) _1559);
frost$core$Frost$ref$frost$core$Object$Q(_1560);
_1562 = ((frost$core$Object*) _1548);
frost$core$Frost$unref$frost$core$Object$Q(_1562);
_1564 = *(&local57);
_1565 = ((frost$core$Object*) _1564);
frost$core$Frost$unref$frost$core$Object$Q(_1565);
*(&local57) = ((frost$core$String*) NULL);
*(&local56) = _1559;
_1569 = ((frost$core$Object*) _1559);
frost$core$Frost$ref$frost$core$Object$Q(_1569);
goto block198;
block198:;
_1572 = *(&local56);
_1573 = _1572 != NULL;
_1574 = (frost$core$Bit) {_1573};
_1575 = _1574.value;
if (_1575) goto block203; else goto block204;
block204:;
_1577 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s290, _1577, &$s291);
abort(); // unreachable
block203:;
_1580 = _1572;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_1583 = frost$io$File$get_name$R$frost$core$String(_1510);
*(&local59) = ((frost$core$String*) NULL);
_1585 = ((frost$core$Object*) _1583);
frost$core$Frost$ref$frost$core$Object$Q(_1585);
_1587 = *(&local59);
_1588 = ((frost$core$Object*) _1587);
frost$core$Frost$unref$frost$core$Object$Q(_1588);
*(&local59) = _1583;
_1591 = ((frost$core$Object*) _1583);
frost$core$Frost$unref$frost$core$Object$Q(_1591);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_1594 = *(&local59);
_1595 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_1594, &$s292);
*(&local60) = _1595;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_1598 = *(&local60);
_1599 = !_1598.nonnull;
_1600 = (frost$core$Bit) {_1599};
_1601 = _1600.value;
if (_1601) goto block206; else goto block207;
block206:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
_1604 = *(&local59);
_1605 = ((frost$core$Object*) _1604);
frost$core$Frost$ref$frost$core$Object$Q(_1605);
_1607 = *(&local59);
_1608 = ((frost$core$Object*) _1607);
frost$core$Frost$unref$frost$core$Object$Q(_1608);
*(&local59) = ((frost$core$String*) NULL);
*(&local58) = _1604;
_1612 = ((frost$core$Object*) _1604);
frost$core$Frost$ref$frost$core$Object$Q(_1612);
goto block205;
block207:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
_1616 = *(&local59);
_1617 = *(&local60);
_1618 = (frost$core$Bit) {false};
_1619 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _1617, _1618);
_1620 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_1616, _1619);
_1621 = ((frost$core$Object*) _1620);
frost$core$Frost$ref$frost$core$Object$Q(_1621);
_1623 = ((frost$core$Object*) _1620);
frost$core$Frost$unref$frost$core$Object$Q(_1623);
_1625 = *(&local59);
_1626 = ((frost$core$Object*) _1625);
frost$core$Frost$unref$frost$core$Object$Q(_1626);
*(&local59) = ((frost$core$String*) NULL);
*(&local58) = _1620;
_1630 = ((frost$core$Object*) _1620);
frost$core$Frost$ref$frost$core$Object$Q(_1630);
goto block205;
block205:;
_1633 = *(&local58);
_1634 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1633, &$s293);
_1635 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_1580, _1634);
_1636 = ((frost$core$Object*) _1635);
frost$core$Frost$ref$frost$core$Object$Q(_1636);
_1638 = ((frost$core$Object*) _1635);
frost$core$Frost$unref$frost$core$Object$Q(_1638);
_1640 = ((frost$core$Object*) _1634);
frost$core$Frost$unref$frost$core$Object$Q(_1640);
_1642 = ((frost$core$Object*) _1633);
frost$core$Frost$unref$frost$core$Object$Q(_1642);
_1644 = *(&local58);
_1645 = ((frost$core$Object*) _1644);
frost$core$Frost$unref$frost$core$Object$Q(_1645);
*(&local58) = ((frost$core$String*) NULL);
_1648 = ((frost$core$Object*) _1572);
frost$core$Frost$unref$frost$core$Object$Q(_1648);
_1650 = *(&local56);
_1651 = ((frost$core$Object*) _1650);
frost$core$Frost$unref$frost$core$Object$Q(_1651);
*(&local56) = ((frost$io$File*) NULL);
_1655 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(_1635);
_1656 = _1655;
_1657 = &_1656->$rawValue;
_1658 = *_1657;
_1659 = _1658.value;
_1660 = _1659 == 0u;
if (_1660) goto block208; else goto block209;
block209:;
_1662 = (frost$core$Error**) (_1655->$data + 0);
_1663 = *_1662;
_1664 = ((frost$core$Object*) _1663);
frost$core$Frost$ref$frost$core$Object$Q(_1664);
*(&local55) = _1663;
_1667 = ((frost$core$Object*) _1655);
frost$core$Frost$unref$frost$core$Object$Q(_1667);
_1669 = ((frost$core$Object*) _1635);
frost$core$Frost$unref$frost$core$Object$Q(_1669);
_1671 = ((frost$core$Object*) _1501);
frost$core$Frost$unref$frost$core$Object$Q(_1671);
_1673 = ((frost$core$Object*) _1500);
frost$core$Frost$unref$frost$core$Object$Q(_1673);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:305
_1697 = *(&local55);
_1698 = ((frost$core$Object*) _1697);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:305:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_1701 = ($fn294) _1698->$class->vtable[0];
_1702 = _1701(_1698);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_1702);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_1709 = ((frost$core$Object*) _1702);
frost$core$Frost$unref$frost$core$Object$Q(_1709);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:306
_1713 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1713);
_1715 = (frost$core$Int) {306u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s295, _1715, &$s296);
abort(); // unreachable
block208:;
_1676 = (frost$core$Object**) (_1655->$data + 0);
_1677 = *_1676;
_1678 = ((frost$io$OutputStream*) _1677);
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream(_1500, _1501, _1678);
_1680 = ((org$frostlang$frostc$CodeGenerator*) _1500);
_1681 = ((frost$core$Object*) _1680);
frost$core$Frost$ref$frost$core$Object$Q(_1681);
_1683 = *(&local54);
_1684 = ((frost$core$Object*) _1683);
frost$core$Frost$unref$frost$core$Object$Q(_1684);
*(&local54) = _1680;
_1687 = ((frost$core$Object*) _1655);
frost$core$Frost$unref$frost$core$Object$Q(_1687);
_1689 = ((frost$core$Object*) _1635);
frost$core$Frost$unref$frost$core$Object$Q(_1689);
_1691 = ((frost$core$Object*) _1501);
frost$core$Frost$unref$frost$core$Object$Q(_1691);
_1693 = ((frost$core$Object*) _1500);
frost$core$Frost$unref$frost$core$Object$Q(_1693);
_1718 = *(&local55);
_1719 = ((frost$core$Object*) _1718);
frost$core$Frost$unref$frost$core$Object$Q(_1719);
*(&local55) = ((frost$core$Error*) NULL);
goto block185;
block191:;
_1723 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:309:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1726 = _1466.value;
_1727 = _1723.value;
_1728 = _1726 == _1727;
_1729 = (frost$core$Bit) {_1728};
_1731 = _1729.value;
if (_1731) goto block212; else goto block213;
block212:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:310
FROST_ASSERT(152 == sizeof(org$frostlang$frostc$HCodeGenerator));
_1734 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
_1735 = *(&local3);
_1736 = _1735 != NULL;
_1737 = (frost$core$Bit) {_1736};
_1738 = _1737.value;
if (_1738) goto block215; else goto block216;
block216:;
_1740 = (frost$core$Int) {310u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s297, _1740, &$s298);
abort(); // unreachable
block215:;
_1743 = _1735;
org$frostlang$frostc$HCodeGenerator$init$frost$io$File(_1734, _1743);
_1745 = ((org$frostlang$frostc$CodeGenerator*) _1734);
_1746 = ((frost$core$Object*) _1745);
frost$core$Frost$ref$frost$core$Object$Q(_1746);
_1748 = *(&local54);
_1749 = ((frost$core$Object*) _1748);
frost$core$Frost$unref$frost$core$Object$Q(_1749);
*(&local54) = _1745;
_1752 = ((frost$core$Object*) _1734);
frost$core$Frost$unref$frost$core$Object$Q(_1752);
goto block185;
block213:;
_1755 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:312:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1758 = _1466.value;
_1759 = _1755.value;
_1760 = _1758 == _1759;
_1761 = (frost$core$Bit) {_1760};
_1763 = _1761.value;
if (_1763) goto block217; else goto block218;
block217:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:313
FROST_ASSERT(248 == sizeof(org$frostlang$frostc$CCodeGenerator));
_1766 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(248, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
_1767 = *(&local3);
_1768 = _1767 != NULL;
_1769 = (frost$core$Bit) {_1768};
_1770 = _1769.value;
if (_1770) goto block220; else goto block221;
block221:;
_1772 = (frost$core$Int) {313u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s299, _1772, &$s300);
abort(); // unreachable
block220:;
_1775 = _1767;
org$frostlang$frostc$CCodeGenerator$init$frost$io$File(_1766, _1775);
_1777 = ((org$frostlang$frostc$CodeGenerator*) _1766);
_1778 = ((frost$core$Object*) _1777);
frost$core$Frost$ref$frost$core$Object$Q(_1778);
_1780 = *(&local54);
_1781 = ((frost$core$Object*) _1780);
frost$core$Frost$unref$frost$core$Object$Q(_1781);
*(&local54) = _1777;
_1784 = ((frost$core$Object*) _1766);
frost$core$Frost$unref$frost$core$Object$Q(_1784);
goto block185;
block218:;
_1787 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:315:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1790 = _1466.value;
_1791 = _1787.value;
_1792 = _1790 == _1791;
_1793 = (frost$core$Bit) {_1792};
_1795 = _1793.value;
if (_1795) goto block222; else goto block185;
block222:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:316
*(&local61) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:317
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$StubCodeGenerator));
_1800 = (org$frostlang$frostc$StubCodeGenerator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$class);
_1801 = *(&local3);
_1802 = _1801 != NULL;
_1803 = (frost$core$Bit) {_1802};
_1804 = _1803.value;
if (_1804) goto block226; else goto block227;
block227:;
_1806 = (frost$core$Int) {317u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s301, _1806, &$s302);
abort(); // unreachable
block226:;
_1809 = _1801;
_1810 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(_1809);
_1811 = _1810;
_1812 = &_1811->$rawValue;
_1813 = *_1812;
_1814 = _1813.value;
_1815 = _1814 == 0u;
if (_1815) goto block228; else goto block229;
block229:;
_1817 = (frost$core$Error**) (_1810->$data + 0);
_1818 = *_1817;
_1819 = ((frost$core$Object*) _1818);
frost$core$Frost$ref$frost$core$Object$Q(_1819);
*(&local61) = _1818;
_1822 = ((frost$core$Object*) _1810);
frost$core$Frost$unref$frost$core$Object$Q(_1822);
_1824 = ((frost$core$Object*) _1800);
frost$core$Frost$unref$frost$core$Object$Q(_1824);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:320
_1844 = *(&local61);
_1845 = ((frost$core$Object*) _1844);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:320:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_1848 = ($fn303) _1845->$class->vtable[0];
_1849 = _1848(_1845);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_1849);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
_1856 = ((frost$core$Object*) _1849);
frost$core$Frost$unref$frost$core$Object$Q(_1856);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:321
_1860 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_1860);
_1862 = (frost$core$Int) {321u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s304, _1862, &$s305);
abort(); // unreachable
block228:;
_1827 = (frost$core$Object**) (_1810->$data + 0);
_1828 = *_1827;
_1829 = ((frost$io$OutputStream*) _1828);
org$frostlang$frostc$StubCodeGenerator$init$frost$io$OutputStream(_1800, _1829);
_1831 = ((org$frostlang$frostc$CodeGenerator*) _1800);
_1832 = ((frost$core$Object*) _1831);
frost$core$Frost$ref$frost$core$Object$Q(_1832);
_1834 = *(&local54);
_1835 = ((frost$core$Object*) _1834);
frost$core$Frost$unref$frost$core$Object$Q(_1835);
*(&local54) = _1831;
_1838 = ((frost$core$Object*) _1810);
frost$core$Frost$unref$frost$core$Object$Q(_1838);
_1840 = ((frost$core$Object*) _1800);
frost$core$Frost$unref$frost$core$Object$Q(_1840);
_1865 = *(&local61);
_1866 = ((frost$core$Object*) _1865);
frost$core$Frost$unref$frost$core$Object$Q(_1866);
*(&local61) = ((frost$core$Error*) NULL);
goto block185;
block185:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:325
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Compiler$Settings));
_1871 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
_1872 = &param0->frostHome;
_1873 = *_1872;
_1874 = *(&local2);
_1875 = ((frost$collections$ListView*) _1874);
_1876 = *(&local4);
_1877 = *(&local5);
_1878 = &param0->debug;
_1879 = *_1878;
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int$frost$core$Int$frost$core$Bit(_1871, _1873, _1875, _1876, _1877, _1879);
*(&local62) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_1882 = ((frost$core$Object*) _1871);
frost$core$Frost$ref$frost$core$Object$Q(_1882);
_1884 = *(&local62);
_1885 = ((frost$core$Object*) _1884);
frost$core$Frost$unref$frost$core$Object$Q(_1885);
*(&local62) = _1871;
_1888 = ((frost$core$Object*) _1871);
frost$core$Frost$unref$frost$core$Object$Q(_1888);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:327
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
_1891 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
_1892 = _1891;
frost$threads$MessageQueue$init(_1892);
*(&local63) = ((frost$threads$MessageQueue*) NULL);
_1895 = ((frost$core$Object*) _1891);
frost$core$Frost$ref$frost$core$Object$Q(_1895);
_1897 = *(&local63);
_1898 = ((frost$core$Object*) _1897);
frost$core$Frost$unref$frost$core$Object$Q(_1898);
*(&local63) = _1891;
_1901 = ((frost$core$Object*) _1891);
frost$core$Frost$unref$frost$core$Object$Q(_1901);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:328
FROST_ASSERT(728 == sizeof(org$frostlang$frostc$Compiler));
_1904 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(728, (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
_1905 = *(&local63);
_1906 = *(&local54);
_1907 = *(&local62);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT$org$frostlang$frostc$CodeGenerator$Q$org$frostlang$frostc$Compiler$Settings(_1904, _1905, _1906, _1907);
*(&local64) = ((org$frostlang$frostc$Compiler*) NULL);
_1910 = ((frost$core$Object*) _1904);
frost$core$Frost$ref$frost$core$Object$Q(_1910);
_1912 = *(&local64);
_1913 = ((frost$core$Object*) _1912);
frost$core$Frost$unref$frost$core$Object$Q(_1913);
*(&local64) = _1904;
_1916 = ((frost$core$Object*) _1904);
frost$core$Frost$unref$frost$core$Object$Q(_1916);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:329
_1919 = *(&local6);
_1920 = _1919.nonnull;
_1921 = (frost$core$Bit) {_1920};
_1922 = _1921.value;
if (_1922) goto block234; else goto block235;
block235:;
_1924 = (frost$core$Int) {329u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s306, _1924, &$s307);
abort(); // unreachable
block234:;
frost$core$Equatable* $tmp308;
if (_1919.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp309;
    $tmp309 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp309->value = ((org$frostlang$frostc$Main$Format) _1919.value);
    $tmp308 = ((frost$core$Equatable*) $tmp309);
}
else {
    $tmp308 = NULL;
}
_1927 = $tmp308;
_1928 = _1927;
_1929 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:329:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
_1932 = &(&local66)->$rawValue;
*_1932 = _1929;
_1934 = *(&local66);
*(&local65) = _1934;
_1937 = *(&local65);
org$frostlang$frostc$Main$Format$wrapper* $tmp310;
$tmp310 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp310->value = _1937;
_1938 = ((frost$core$Equatable*) $tmp310);
ITable* $tmp311 = _1928->$class->itable;
while ($tmp311->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp311 = $tmp311->next;
}
_1939 = $tmp311->methods[0];
_1940 = _1939(_1928, _1938);
_1941 = _1940.value;
_1942 = ((frost$core$Object*) _1938);
frost$core$Frost$unref$frost$core$Object$Q(_1942);
_1944 = ((frost$core$Object*) _1927);
frost$core$Frost$unref$frost$core$Object$Q(_1944);
if (_1941) goto block232; else goto block233;
block232:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:330
_1948 = *(&local7);
_1949 = _1948 == NULL;
_1950 = (frost$core$Bit) {_1949};
_1951 = _1950.value;
if (_1951) goto block237; else goto block238;
block237:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:331
_1954 = &$s312;
_1955 = ((frost$core$Object*) _1954);
frost$core$Frost$ref$frost$core$Object$Q(_1955);
_1957 = *(&local7);
_1958 = ((frost$core$Object*) _1957);
frost$core$Frost$unref$frost$core$Object$Q(_1958);
*(&local7) = _1954;
goto block238;
block238:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:333
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$HTMLProcessor));
_1963 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
_1964 = *(&local64);
org$frostlang$frostc$HTMLProcessor$init$org$frostlang$frostc$Compiler(_1963, _1964);
_1966 = *(&local1);
_1967 = _1966;
_1968 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Main.frost:333:56
_1970 = (frost$core$Int) {0u};
_1971 = _1968.value;
_1972 = _1970.value;
_1973 = _1971 >= _1972;
_1974 = (frost$core$Bit) {_1973};
_1975 = _1974.value;
if (_1975) goto block242; else goto block241;
block242:;
_1977 = ((frost$collections$CollectionView*) _1967);
ITable* $tmp313 = _1977->$class->itable;
while ($tmp313->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp313 = $tmp313->next;
}
_1978 = $tmp313->methods[0];
_1979 = _1978(_1977);
_1980 = _1968.value;
_1981 = _1979.value;
_1982 = _1980 < _1981;
_1983 = (frost$core$Bit) {_1982};
_1984 = _1983.value;
if (_1984) goto block240; else goto block241;
block241:;
_1986 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s314, _1986, &$s315);
abort(); // unreachable
block240:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_1990 = &_1967->data;
_1991 = *_1990;
_1992 = frost$core$Int64$init$frost$core$Int(_1968);
_1993 = _1992.value;
_1994 = _1991[_1993];
_1995 = _1994;
frost$core$Frost$ref$frost$core$Object$Q(_1995);
_1998 = ((frost$io$File*) _1994);
_1999 = *(&local3);
_2000 = _1999 != NULL;
_2001 = (frost$core$Bit) {_2000};
_2002 = _2001.value;
if (_2002) goto block243; else goto block244;
block244:;
_2004 = (frost$core$Int) {333u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s316, _2004, &$s317);
abort(); // unreachable
block243:;
_2007 = _1999;
_2008 = *(&local7);
_2009 = _2008 != NULL;
_2010 = (frost$core$Bit) {_2009};
_2011 = _2010.value;
if (_2011) goto block245; else goto block246;
block246:;
_2013 = (frost$core$Int) {333u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s318, _2013, &$s319);
abort(); // unreachable
block245:;
_2016 = _2008;
_2017 = ($fn320) _1963->$class->vtable[3];
_2017(_1963, _1998, _2007, _2016);
_2019 = _1994;
frost$core$Frost$unref$frost$core$Object$Q(_2019);
_2021 = ((frost$core$Object*) _1963);
frost$core$Frost$unref$frost$core$Object$Q(_2021);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:334
_2024 = *(&local64);
_2025 = ((frost$core$Object*) _2024);
frost$core$Frost$unref$frost$core$Object$Q(_2025);
*(&local64) = ((org$frostlang$frostc$Compiler*) NULL);
_2028 = *(&local63);
_2029 = ((frost$core$Object*) _2028);
frost$core$Frost$unref$frost$core$Object$Q(_2029);
*(&local63) = ((frost$threads$MessageQueue*) NULL);
_2032 = *(&local62);
_2033 = ((frost$core$Object*) _2032);
frost$core$Frost$unref$frost$core$Object$Q(_2033);
*(&local62) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_2036 = *(&local54);
_2037 = ((frost$core$Object*) _2036);
frost$core$Frost$unref$frost$core$Object$Q(_2037);
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) NULL);
_2040 = *(&local41);
_2041 = ((frost$core$Object*) _2040);
frost$core$Frost$unref$frost$core$Object$Q(_2041);
*(&local41) = ((frost$io$File*) NULL);
_2044 = *(&local7);
_2045 = ((frost$core$Object*) _2044);
frost$core$Frost$unref$frost$core$Object$Q(_2045);
*(&local7) = ((frost$core$String*) NULL);
_2048 = *(&local3);
_2049 = ((frost$core$Object*) _2048);
frost$core$Frost$unref$frost$core$Object$Q(_2049);
*(&local3) = ((frost$io$File*) NULL);
_2052 = *(&local2);
_2053 = ((frost$core$Object*) _2052);
frost$core$Frost$unref$frost$core$Object$Q(_2053);
*(&local2) = ((frost$collections$Array*) NULL);
_2056 = *(&local1);
_2057 = ((frost$core$Object*) _2056);
frost$core$Frost$unref$frost$core$Object$Q(_2057);
*(&local1) = ((frost$collections$Array*) NULL);
_2060 = *(&local0);
_2061 = ((frost$core$Object*) _2060);
frost$core$Frost$unref$frost$core$Object$Q(_2061);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block233:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:336
_2066 = *(&local7);
_2067 = _2066 != NULL;
_2068 = (frost$core$Bit) {_2067};
_2069 = _2068.value;
if (_2069) goto block247; else goto block248;
block247:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:337
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:337:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s321);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s322);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:338
_2082 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_2082);
_2084 = (frost$core$Int) {338u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s323, _2084, &$s324);
abort(); // unreachable
block248:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:340
_2088 = *(&local1);
_2089 = ((frost$collections$Iterable*) _2088);
_2090 = _2089;
ITable* $tmp325 = _2090->$class->itable;
while ($tmp325->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp325 = $tmp325->next;
}
_2091 = $tmp325->methods[0];
_2092 = _2091(_2090);
_2093 = _2092;
goto block251;
block251:;
_2095 = _2093;
ITable* $tmp326 = _2095->$class->itable;
while ($tmp326->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp326 = $tmp326->next;
}
_2096 = $tmp326->methods[0];
_2097 = _2096(_2095);
_2098 = _2097.value;
if (_2098) goto block253; else goto block252;
block252:;
*(&local67) = ((frost$io$File*) NULL);
_2101 = _2093;
ITable* $tmp327 = _2101->$class->itable;
while ($tmp327->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp327 = $tmp327->next;
}
_2102 = $tmp327->methods[1];
_2103 = _2102(_2101);
_2104 = ((frost$io$File*) _2103);
_2105 = ((frost$core$Object*) _2104);
frost$core$Frost$ref$frost$core$Object$Q(_2105);
_2107 = *(&local67);
_2108 = ((frost$core$Object*) _2107);
frost$core$Frost$unref$frost$core$Object$Q(_2108);
*(&local67) = _2104;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:341
_2112 = *(&local64);
_2113 = *(&local67);
_2114 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT(_2112, _2113);
_2115 = ((frost$collections$Iterable*) _2114);
_2116 = _2115;
ITable* $tmp328 = _2116->$class->itable;
while ($tmp328->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp328 = $tmp328->next;
}
_2117 = $tmp328->methods[0];
_2118 = _2117(_2116);
_2119 = _2118;
goto block254;
block254:;
_2121 = _2119;
ITable* $tmp329 = _2121->$class->itable;
while ($tmp329->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp329 = $tmp329->next;
}
_2122 = $tmp329->methods[0];
_2123 = _2122(_2121);
_2124 = _2123.value;
if (_2124) goto block256; else goto block255;
block255:;
*(&local68) = ((org$frostlang$frostc$ClassDecl*) NULL);
_2127 = _2119;
ITable* $tmp330 = _2127->$class->itable;
while ($tmp330->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp330 = $tmp330->next;
}
_2128 = $tmp330->methods[1];
_2129 = _2128(_2127);
_2130 = ((org$frostlang$frostc$ClassDecl*) _2129);
_2131 = ((frost$core$Object*) _2130);
frost$core$Frost$ref$frost$core$Object$Q(_2131);
_2133 = *(&local68);
_2134 = ((frost$core$Object*) _2133);
frost$core$Frost$unref$frost$core$Object$Q(_2134);
*(&local68) = _2130;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:342
_2138 = *(&local64);
_2139 = *(&local68);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Main.frost:342:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5838
_2142 = (frost$core$Bit) {false};
_2143 = &_2139->external;
*_2143 = _2142;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5839
_2146 = &_2139->classes;
_2147 = *_2146;
_2148 = ((frost$collections$Iterable*) _2147);
_2149 = _2148;
ITable* $tmp331 = _2149->$class->itable;
while ($tmp331->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp331 = $tmp331->next;
}
_2150 = $tmp331->methods[0];
_2151 = _2150(_2149);
_2152 = _2151;
goto block258;
block258:;
_2154 = _2152;
ITable* $tmp332 = _2154->$class->itable;
while ($tmp332->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp332 = $tmp332->next;
}
_2155 = $tmp332->methods[0];
_2156 = _2155(_2154);
_2157 = _2156.value;
if (_2157) goto block260; else goto block259;
block259:;
*(&local69) = ((org$frostlang$frostc$ClassDecl*) NULL);
_2160 = _2152;
ITable* $tmp333 = _2160->$class->itable;
while ($tmp333->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp333 = $tmp333->next;
}
_2161 = $tmp333->methods[1];
_2162 = _2161(_2160);
_2163 = ((org$frostlang$frostc$ClassDecl*) _2162);
_2164 = ((frost$core$Object*) _2163);
frost$core$Frost$ref$frost$core$Object$Q(_2164);
_2166 = *(&local69);
_2167 = ((frost$core$Object*) _2166);
frost$core$Frost$unref$frost$core$Object$Q(_2167);
*(&local69) = _2163;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5840
_2171 = *(&local69);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Compiler.frost:5840:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5838
_2174 = (frost$core$Bit) {false};
_2175 = &_2171->external;
*_2175 = _2174;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5839
_2178 = &_2171->classes;
_2179 = *_2178;
_2180 = ((frost$collections$Iterable*) _2179);
_2181 = _2180;
ITable* $tmp334 = _2181->$class->itable;
while ($tmp334->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp334 = $tmp334->next;
}
_2182 = $tmp334->methods[0];
_2183 = _2182(_2181);
_2184 = _2183;
goto block262;
block262:;
_2186 = _2184;
ITable* $tmp335 = _2186->$class->itable;
while ($tmp335->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp335 = $tmp335->next;
}
_2187 = $tmp335->methods[0];
_2188 = _2187(_2186);
_2189 = _2188.value;
if (_2189) goto block264; else goto block263;
block263:;
*(&local70) = ((org$frostlang$frostc$ClassDecl*) NULL);
_2192 = _2184;
ITable* $tmp336 = _2192->$class->itable;
while ($tmp336->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp336 = $tmp336->next;
}
_2193 = $tmp336->methods[1];
_2194 = _2193(_2192);
_2195 = ((org$frostlang$frostc$ClassDecl*) _2194);
_2196 = ((frost$core$Object*) _2195);
frost$core$Frost$ref$frost$core$Object$Q(_2196);
_2198 = *(&local70);
_2199 = ((frost$core$Object*) _2198);
frost$core$Frost$unref$frost$core$Object$Q(_2199);
*(&local70) = _2195;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5840
_2203 = *(&local70);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl(_2138, _2203);
_2205 = _2194;
frost$core$Frost$unref$frost$core$Object$Q(_2205);
_2207 = *(&local70);
_2208 = ((frost$core$Object*) _2207);
frost$core$Frost$unref$frost$core$Object$Q(_2208);
*(&local70) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block262;
block264:;
_2212 = ((frost$core$Object*) _2183);
frost$core$Frost$unref$frost$core$Object$Q(_2212);
_2215 = _2162;
frost$core$Frost$unref$frost$core$Object$Q(_2215);
_2217 = *(&local69);
_2218 = ((frost$core$Object*) _2217);
frost$core$Frost$unref$frost$core$Object$Q(_2218);
*(&local69) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block258;
block260:;
_2222 = ((frost$core$Object*) _2151);
frost$core$Frost$unref$frost$core$Object$Q(_2222);
_2225 = _2129;
frost$core$Frost$unref$frost$core$Object$Q(_2225);
_2227 = *(&local68);
_2228 = ((frost$core$Object*) _2227);
frost$core$Frost$unref$frost$core$Object$Q(_2228);
*(&local68) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block254;
block256:;
_2232 = ((frost$core$Object*) _2118);
frost$core$Frost$unref$frost$core$Object$Q(_2232);
_2234 = ((frost$core$Object*) _2114);
frost$core$Frost$unref$frost$core$Object$Q(_2234);
_2236 = _2103;
frost$core$Frost$unref$frost$core$Object$Q(_2236);
_2238 = *(&local67);
_2239 = ((frost$core$Object*) _2238);
frost$core$Frost$unref$frost$core$Object$Q(_2239);
*(&local67) = ((frost$io$File*) NULL);
goto block251;
block253:;
_2243 = ((frost$core$Object*) _2092);
frost$core$Frost$unref$frost$core$Object$Q(_2243);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:345
_2246 = *(&local1);
_2247 = ((frost$collections$Iterable*) _2246);
_2248 = _2247;
ITable* $tmp337 = _2248->$class->itable;
while ($tmp337->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp337 = $tmp337->next;
}
_2249 = $tmp337->methods[0];
_2250 = _2249(_2248);
_2251 = _2250;
goto block265;
block265:;
_2253 = _2251;
ITable* $tmp338 = _2253->$class->itable;
while ($tmp338->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp338 = $tmp338->next;
}
_2254 = $tmp338->methods[0];
_2255 = _2254(_2253);
_2256 = _2255.value;
if (_2256) goto block267; else goto block266;
block266:;
*(&local71) = ((frost$io$File*) NULL);
_2259 = _2251;
ITable* $tmp339 = _2259->$class->itable;
while ($tmp339->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp339 = $tmp339->next;
}
_2260 = $tmp339->methods[1];
_2261 = _2260(_2259);
_2262 = ((frost$io$File*) _2261);
_2263 = ((frost$core$Object*) _2262);
frost$core$Frost$ref$frost$core$Object$Q(_2263);
_2265 = *(&local71);
_2266 = ((frost$core$Object*) _2265);
frost$core$Frost$unref$frost$core$Object$Q(_2266);
*(&local71) = _2262;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:346
_2270 = *(&local64);
_2271 = *(&local71);
org$frostlang$frostc$Compiler$compile$frost$io$File(_2270, _2271);
_2273 = _2261;
frost$core$Frost$unref$frost$core$Object$Q(_2273);
_2275 = *(&local71);
_2276 = ((frost$core$Object*) _2275);
frost$core$Frost$unref$frost$core$Object$Q(_2276);
*(&local71) = ((frost$io$File*) NULL);
goto block265;
block267:;
_2280 = ((frost$core$Object*) _2250);
frost$core$Frost$unref$frost$core$Object$Q(_2280);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:348
_2283 = *(&local64);
// begin inline call to method org.frostlang.frostc.Compiler.finish() from Main.frost:348:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6075
goto block269;
block269:;
_2287 = &_2283->pendingClasses;
_2288 = *_2287;
_2289 = ((frost$collections$CollectionView*) _2288);
ITable* $tmp340 = _2289->$class->itable;
while ($tmp340->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp340 = $tmp340->next;
}
_2290 = $tmp340->methods[0];
_2291 = _2290(_2289);
_2292 = (frost$core$Int) {0u};
_2293 = _2291.value;
_2294 = _2292.value;
_2295 = _2293 > _2294;
_2296 = (frost$core$Bit) {_2295};
_2297 = _2296.value;
if (_2297) goto block270; else goto block271;
block270:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6076
_2300 = &_2283->pendingClasses;
_2301 = *_2300;
_2302 = _2301;
_2303 = &_2283->pendingClasses;
_2304 = *_2303;
_2305 = ((frost$collections$CollectionView*) _2304);
ITable* $tmp341 = _2305->$class->itable;
while ($tmp341->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp341 = $tmp341->next;
}
_2306 = $tmp341->methods[0];
_2307 = _2306(_2305);
_2308 = (frost$core$Int) {1u};
_2309 = _2307.value;
_2310 = _2308.value;
_2311 = _2309 - _2310;
_2312 = (frost$core$Int) {_2311};
_2313 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_2302, _2312);
_2314 = ((org$frostlang$frostc$ClassDecl*) _2313);
*(&local72) = ((org$frostlang$frostc$ClassDecl*) NULL);
_2316 = ((frost$core$Object*) _2314);
frost$core$Frost$ref$frost$core$Object$Q(_2316);
_2318 = *(&local72);
_2319 = ((frost$core$Object*) _2318);
frost$core$Frost$unref$frost$core$Object$Q(_2319);
*(&local72) = _2314;
_2322 = _2313;
frost$core$Frost$unref$frost$core$Object$Q(_2322);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6077
_2325 = *(&local72);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl(_2283, _2325);
_2327 = *(&local72);
_2328 = ((frost$core$Object*) _2327);
frost$core$Frost$unref$frost$core$Object$Q(_2328);
*(&local72) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block269;
block271:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6079
_2333 = &_2283->codeGenerator;
_2334 = *_2333;
_2335 = _2334 != NULL;
_2336 = (frost$core$Bit) {_2335};
_2337 = _2336.value;
if (_2337) goto block272; else goto block273;
block273:;
_2339 = (frost$core$Int) {6079u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s342, _2339, &$s343);
abort(); // unreachable
block272:;
_2342 = _2334;
ITable* $tmp344 = _2342->$class->itable;
while ($tmp344->$class != (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class) {
    $tmp344 = $tmp344->next;
}
_2343 = $tmp344->methods[5];
_2343(_2342);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:349
goto block274;
block274:;
_2348 = *(&local63);
_2349 = _2348;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Main.frost:349:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
_2354 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
_2355 = &_2349->lock;
_2356 = *_2355;
frost$threads$ScopedLock$init$frost$threads$Lock(_2354, _2356);
*(&local73) = ((frost$threads$ScopedLock*) NULL);
_2359 = ((frost$core$Object*) _2354);
frost$core$Frost$ref$frost$core$Object$Q(_2359);
_2361 = *(&local73);
_2362 = ((frost$core$Object*) _2361);
frost$core$Frost$unref$frost$core$Object$Q(_2362);
*(&local73) = _2354;
_2365 = ((frost$core$Object*) _2354);
frost$core$Frost$unref$frost$core$Object$Q(_2365);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
_2368 = &_2349->count;
_2369 = *_2368;
_2370 = *(&local73);
_2371 = ((frost$core$Object*) _2370);
frost$core$Frost$unref$frost$core$Object$Q(_2371);
*(&local73) = ((frost$threads$ScopedLock*) NULL);
_2375 = (frost$core$Int) {0u};
_2376 = _2369.value;
_2377 = _2375.value;
_2378 = _2376 > _2377;
_2379 = (frost$core$Bit) {_2378};
_2381 = _2379.value;
if (_2381) goto block275; else goto block276;
block275:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:350
_2384 = *(&local63);
_2385 = _2384;
_2386 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(_2385);
_2387 = ((org$frostlang$frostc$Compiler$Message*) _2386);
*(&local74) = ((org$frostlang$frostc$Compiler$Message*) NULL);
_2389 = ((frost$core$Object*) _2387);
frost$core$Frost$ref$frost$core$Object$Q(_2389);
_2391 = *(&local74);
_2392 = ((frost$core$Object*) _2391);
frost$core$Frost$unref$frost$core$Object$Q(_2392);
*(&local74) = _2387;
_2395 = ((frost$core$Object*) _2386);
frost$core$Frost$unref$frost$core$Object$Q(_2395);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:352
_2398 = *(&local74);
_2399 = &_2398->$rawValue;
_2400 = *_2399;
_2401 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:353:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2404 = _2400.value;
_2405 = _2401.value;
_2406 = _2404 == _2405;
_2407 = (frost$core$Bit) {_2406};
_2409 = _2407.value;
if (_2409) goto block280; else goto block281;
block280:;
_2411 = (frost$core$String**) (_2398->$data + 0);
_2412 = *_2411;
*(&local75) = ((frost$core$String*) NULL);
_2414 = ((frost$core$Object*) _2412);
frost$core$Frost$ref$frost$core$Object$Q(_2414);
_2416 = *(&local75);
_2417 = ((frost$core$Object*) _2416);
frost$core$Frost$unref$frost$core$Object$Q(_2417);
*(&local75) = _2412;
_2420 = (frost$core$Int*) (_2398->$data + 8);
_2421 = *_2420;
*(&local76) = _2421;
_2423 = (frost$core$Int*) (_2398->$data + 16);
_2424 = *_2423;
*(&local77) = _2424;
_2426 = (frost$core$String**) (_2398->$data + 24);
_2427 = *_2426;
*(&local78) = ((frost$core$String*) NULL);
_2429 = ((frost$core$Object*) _2427);
frost$core$Frost$ref$frost$core$Object$Q(_2429);
_2431 = *(&local78);
_2432 = ((frost$core$Object*) _2431);
frost$core$Frost$unref$frost$core$Object$Q(_2432);
*(&local78) = _2427;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:354
_2436 = *(&local52);
_2437 = (frost$core$Int) {1u};
_2438 = _2436.value;
_2439 = _2437.value;
_2440 = _2438 + _2439;
_2441 = (frost$core$Int) {_2440};
*(&local52) = _2441;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:355
_2444 = *(&local75);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:355:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_2447 = ((frost$core$Object*) _2444);
frost$core$Frost$ref$frost$core$Object$Q(_2447);
_2450 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2444, &$s345);
_2451 = *(&local76);
frost$core$Int$wrapper* $tmp346;
$tmp346 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp346->value = _2451;
_2452 = ((frost$core$Object*) $tmp346);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:355:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2455 = ($fn347) _2452->$class->vtable[0];
_2456 = _2455(_2452);
_2457 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2450, _2456);
_2458 = ((frost$core$Object*) _2457);
frost$core$Frost$ref$frost$core$Object$Q(_2458);
_2460 = ((frost$core$Object*) _2457);
frost$core$Frost$unref$frost$core$Object$Q(_2460);
_2462 = ((frost$core$Object*) _2456);
frost$core$Frost$unref$frost$core$Object$Q(_2462);
_2465 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2457, &$s348);
_2466 = *(&local77);
frost$core$Int$wrapper* $tmp349;
$tmp349 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp349->value = _2466;
_2467 = ((frost$core$Object*) $tmp349);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:355:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2470 = ($fn350) _2467->$class->vtable[0];
_2471 = _2470(_2467);
_2472 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2465, _2471);
_2473 = ((frost$core$Object*) _2472);
frost$core$Frost$ref$frost$core$Object$Q(_2473);
_2475 = ((frost$core$Object*) _2472);
frost$core$Frost$unref$frost$core$Object$Q(_2475);
_2477 = ((frost$core$Object*) _2471);
frost$core$Frost$unref$frost$core$Object$Q(_2477);
_2480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2472, &$s351);
_2481 = *(&local78);
_2482 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2480, _2481);
_2483 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2482, &$s352);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:355:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_2483);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s353);
_2493 = ((frost$core$Object*) _2483);
frost$core$Frost$unref$frost$core$Object$Q(_2493);
_2495 = ((frost$core$Object*) _2482);
frost$core$Frost$unref$frost$core$Object$Q(_2495);
_2497 = ((frost$core$Object*) _2480);
frost$core$Frost$unref$frost$core$Object$Q(_2497);
_2499 = ((frost$core$Object*) _2472);
frost$core$Frost$unref$frost$core$Object$Q(_2499);
_2501 = _2467;
frost$core$Frost$unref$frost$core$Object$Q(_2501);
_2503 = ((frost$core$Object*) _2465);
frost$core$Frost$unref$frost$core$Object$Q(_2503);
_2505 = ((frost$core$Object*) _2457);
frost$core$Frost$unref$frost$core$Object$Q(_2505);
_2507 = _2452;
frost$core$Frost$unref$frost$core$Object$Q(_2507);
_2509 = ((frost$core$Object*) _2450);
frost$core$Frost$unref$frost$core$Object$Q(_2509);
_2511 = ((frost$core$Object*) _2444);
frost$core$Frost$unref$frost$core$Object$Q(_2511);
_2513 = *(&local78);
_2514 = ((frost$core$Object*) _2513);
frost$core$Frost$unref$frost$core$Object$Q(_2514);
*(&local78) = ((frost$core$String*) NULL);
_2517 = *(&local75);
_2518 = ((frost$core$Object*) _2517);
frost$core$Frost$unref$frost$core$Object$Q(_2518);
*(&local75) = ((frost$core$String*) NULL);
goto block279;
block281:;
_2522 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:357:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2525 = _2400.value;
_2526 = _2522.value;
_2527 = _2525 == _2526;
_2528 = (frost$core$Bit) {_2527};
_2530 = _2528.value;
if (_2530) goto block288; else goto block279;
block288:;
_2532 = (frost$core$String**) (_2398->$data + 0);
_2533 = *_2532;
*(&local79) = ((frost$core$String*) NULL);
_2535 = ((frost$core$Object*) _2533);
frost$core$Frost$ref$frost$core$Object$Q(_2535);
_2537 = *(&local79);
_2538 = ((frost$core$Object*) _2537);
frost$core$Frost$unref$frost$core$Object$Q(_2538);
*(&local79) = _2533;
_2541 = (frost$core$Int*) (_2398->$data + 8);
_2542 = *_2541;
*(&local80) = _2542;
_2544 = (frost$core$Int*) (_2398->$data + 16);
_2545 = *_2544;
*(&local81) = _2545;
_2547 = (frost$core$String**) (_2398->$data + 24);
_2548 = *_2547;
*(&local82) = ((frost$core$String*) NULL);
_2550 = ((frost$core$Object*) _2548);
frost$core$Frost$ref$frost$core$Object$Q(_2550);
_2552 = *(&local82);
_2553 = ((frost$core$Object*) _2552);
frost$core$Frost$unref$frost$core$Object$Q(_2553);
*(&local82) = _2548;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:358
_2557 = *(&local53);
_2558 = (frost$core$Int) {1u};
_2559 = _2557.value;
_2560 = _2558.value;
_2561 = _2559 + _2560;
_2562 = (frost$core$Int) {_2561};
*(&local53) = _2562;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:359
_2565 = *(&local79);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:359:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_2568 = ((frost$core$Object*) _2565);
frost$core$Frost$ref$frost$core$Object$Q(_2568);
_2571 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2565, &$s354);
_2572 = *(&local80);
frost$core$Int$wrapper* $tmp355;
$tmp355 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp355->value = _2572;
_2573 = ((frost$core$Object*) $tmp355);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:359:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2576 = ($fn356) _2573->$class->vtable[0];
_2577 = _2576(_2573);
_2578 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2571, _2577);
_2579 = ((frost$core$Object*) _2578);
frost$core$Frost$ref$frost$core$Object$Q(_2579);
_2581 = ((frost$core$Object*) _2578);
frost$core$Frost$unref$frost$core$Object$Q(_2581);
_2583 = ((frost$core$Object*) _2577);
frost$core$Frost$unref$frost$core$Object$Q(_2583);
_2586 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2578, &$s357);
_2587 = *(&local81);
frost$core$Int$wrapper* $tmp358;
$tmp358 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp358->value = _2587;
_2588 = ((frost$core$Object*) $tmp358);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:359:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2591 = ($fn359) _2588->$class->vtable[0];
_2592 = _2591(_2588);
_2593 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2586, _2592);
_2594 = ((frost$core$Object*) _2593);
frost$core$Frost$ref$frost$core$Object$Q(_2594);
_2596 = ((frost$core$Object*) _2593);
frost$core$Frost$unref$frost$core$Object$Q(_2596);
_2598 = ((frost$core$Object*) _2592);
frost$core$Frost$unref$frost$core$Object$Q(_2598);
_2601 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2593, &$s360);
_2602 = *(&local82);
_2603 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2601, _2602);
_2604 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2603, &$s361);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:359:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_2604);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s362);
_2614 = ((frost$core$Object*) _2604);
frost$core$Frost$unref$frost$core$Object$Q(_2614);
_2616 = ((frost$core$Object*) _2603);
frost$core$Frost$unref$frost$core$Object$Q(_2616);
_2618 = ((frost$core$Object*) _2601);
frost$core$Frost$unref$frost$core$Object$Q(_2618);
_2620 = ((frost$core$Object*) _2593);
frost$core$Frost$unref$frost$core$Object$Q(_2620);
_2622 = _2588;
frost$core$Frost$unref$frost$core$Object$Q(_2622);
_2624 = ((frost$core$Object*) _2586);
frost$core$Frost$unref$frost$core$Object$Q(_2624);
_2626 = ((frost$core$Object*) _2578);
frost$core$Frost$unref$frost$core$Object$Q(_2626);
_2628 = _2573;
frost$core$Frost$unref$frost$core$Object$Q(_2628);
_2630 = ((frost$core$Object*) _2571);
frost$core$Frost$unref$frost$core$Object$Q(_2630);
_2632 = ((frost$core$Object*) _2565);
frost$core$Frost$unref$frost$core$Object$Q(_2632);
_2634 = *(&local82);
_2635 = ((frost$core$Object*) _2634);
frost$core$Frost$unref$frost$core$Object$Q(_2635);
*(&local82) = ((frost$core$String*) NULL);
_2638 = *(&local79);
_2639 = ((frost$core$Object*) _2638);
frost$core$Frost$unref$frost$core$Object$Q(_2639);
*(&local79) = ((frost$core$String*) NULL);
goto block279;
block279:;
_2643 = *(&local74);
_2644 = ((frost$core$Object*) _2643);
frost$core$Frost$unref$frost$core$Object$Q(_2644);
*(&local74) = ((org$frostlang$frostc$Compiler$Message*) NULL);
goto block274;
block276:;
_2648 = *(&local64);
_2649 = ((frost$core$Object*) _2648);
frost$core$Frost$unref$frost$core$Object$Q(_2649);
*(&local64) = ((org$frostlang$frostc$Compiler*) NULL);
_2652 = *(&local63);
_2653 = ((frost$core$Object*) _2652);
frost$core$Frost$unref$frost$core$Object$Q(_2653);
*(&local63) = ((frost$threads$MessageQueue*) NULL);
_2656 = *(&local62);
_2657 = ((frost$core$Object*) _2656);
frost$core$Frost$unref$frost$core$Object$Q(_2657);
*(&local62) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_2660 = *(&local54);
_2661 = ((frost$core$Object*) _2660);
frost$core$Frost$unref$frost$core$Object$Q(_2661);
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:364
_2665 = *(&local53);
_2666 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:364:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2669 = _2665.value;
_2670 = _2666.value;
_2671 = _2669 == _2670;
_2672 = (frost$core$Bit) {_2671};
_2674 = _2672.value;
if (_2674) goto block295; else goto block297;
block295:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:366
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:366:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s363);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s364);
goto block296;
block297:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:368
_2688 = *(&local53);
_2689 = (frost$core$Int) {0u};
_2690 = _2688.value;
_2691 = _2689.value;
_2692 = _2690 > _2691;
_2693 = (frost$core$Bit) {_2692};
_2694 = _2693.value;
if (_2694) goto block301; else goto block302;
block301:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:370
_2697 = *(&local53);
_2698 = frost$core$Int$get_asString$R$frost$core$String(_2697);
_2699 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2698, &$s365);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:370:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_2699);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s366);
_2709 = ((frost$core$Object*) _2699);
frost$core$Frost$unref$frost$core$Object$Q(_2709);
_2711 = ((frost$core$Object*) _2698);
frost$core$Frost$unref$frost$core$Object$Q(_2711);
goto block302;
block302:;
goto block296;
block296:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:372
_2716 = *(&local52);
_2717 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:372:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2720 = _2716.value;
_2721 = _2717.value;
_2722 = _2720 == _2721;
_2723 = (frost$core$Bit) {_2722};
_2725 = _2723.value;
if (_2725) goto block305; else goto block307;
block305:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:373
_2728 = *(&local6);
_2729 = _2728.nonnull;
_2730 = (frost$core$Bit) {_2729};
_2731 = _2730.value;
if (_2731) goto block309; else goto block310;
block310:;
_2733 = (frost$core$Int) {373u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s367, _2733, &$s368);
abort(); // unreachable
block309:;
_2736 = ((org$frostlang$frostc$Main$Format) _2728.value);
_2737 = _2736.$rawValue;
_2738 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:374:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2741 = _2737.value;
_2742 = _2738.value;
_2743 = _2741 == _2742;
_2744 = (frost$core$Bit) {_2743};
_2746 = _2744.value;
if (_2746) goto block312; else goto block313;
block312:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:375
_2749 = *(&local3);
_2750 = _2749 != NULL;
_2751 = (frost$core$Bit) {_2750};
_2752 = _2751.value;
if (_2752) goto block315; else goto block316;
block316:;
_2754 = (frost$core$Int) {375u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s369, _2754, &$s370);
abort(); // unreachable
block315:;
_2757 = _2749;
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:375:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_2762 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_2757, &$s371);
_2763 = &_2762->path;
_2764 = *_2763;
_2765 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_2764);
*(&local84) = ((frost$core$String*) NULL);
_2767 = ((frost$core$Object*) _2765);
frost$core$Frost$ref$frost$core$Object$Q(_2767);
_2769 = *(&local84);
_2770 = ((frost$core$Object*) _2769);
frost$core$Frost$unref$frost$core$Object$Q(_2770);
*(&local84) = _2765;
_2773 = ((frost$core$Object*) _2765);
frost$core$Frost$unref$frost$core$Object$Q(_2773);
_2775 = ((frost$core$Object*) _2762);
frost$core$Frost$unref$frost$core$Object$Q(_2775);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_2778 = *(&local84);
_2779 = _2778 == NULL;
_2780 = (frost$core$Bit) {_2779};
_2781 = _2780.value;
if (_2781) goto block319; else goto block320;
block319:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
_2784 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_2784);
_2786 = *(&local84);
_2787 = ((frost$core$Object*) _2786);
frost$core$Frost$unref$frost$core$Object$Q(_2787);
*(&local84) = ((frost$core$String*) NULL);
*(&local83) = ((frost$io$File*) NULL);
_2791 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_2791);
goto block318;
block320:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
_2795 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
_2796 = *(&local84);
_2797 = _2796 != NULL;
_2798 = (frost$core$Bit) {_2797};
_2799 = _2798.value;
if (_2799) goto block321; else goto block322;
block322:;
_2801 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s372, _2801, &$s373);
abort(); // unreachable
block321:;
_2804 = _2796;
frost$io$File$init$frost$core$String(_2795, _2804);
_2806 = _2795;
_2807 = ((frost$core$Object*) _2806);
frost$core$Frost$ref$frost$core$Object$Q(_2807);
_2809 = ((frost$core$Object*) _2795);
frost$core$Frost$unref$frost$core$Object$Q(_2809);
_2811 = *(&local84);
_2812 = ((frost$core$Object*) _2811);
frost$core$Frost$unref$frost$core$Object$Q(_2812);
*(&local84) = ((frost$core$String*) NULL);
*(&local83) = _2806;
_2816 = ((frost$core$Object*) _2806);
frost$core$Frost$ref$frost$core$Object$Q(_2816);
goto block318;
block318:;
_2819 = *(&local83);
_2820 = _2819 != NULL;
_2821 = (frost$core$Bit) {_2820};
_2822 = _2821.value;
if (_2822) goto block323; else goto block324;
block324:;
_2824 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s374, _2824, &$s375);
abort(); // unreachable
block323:;
_2827 = _2819;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_2830 = frost$io$File$get_name$R$frost$core$String(_2757);
*(&local86) = ((frost$core$String*) NULL);
_2832 = ((frost$core$Object*) _2830);
frost$core$Frost$ref$frost$core$Object$Q(_2832);
_2834 = *(&local86);
_2835 = ((frost$core$Object*) _2834);
frost$core$Frost$unref$frost$core$Object$Q(_2835);
*(&local86) = _2830;
_2838 = ((frost$core$Object*) _2830);
frost$core$Frost$unref$frost$core$Object$Q(_2838);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_2841 = *(&local86);
_2842 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_2841, &$s376);
*(&local87) = _2842;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_2845 = *(&local87);
_2846 = !_2845.nonnull;
_2847 = (frost$core$Bit) {_2846};
_2848 = _2847.value;
if (_2848) goto block326; else goto block327;
block326:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
_2851 = *(&local86);
_2852 = ((frost$core$Object*) _2851);
frost$core$Frost$ref$frost$core$Object$Q(_2852);
_2854 = *(&local86);
_2855 = ((frost$core$Object*) _2854);
frost$core$Frost$unref$frost$core$Object$Q(_2855);
*(&local86) = ((frost$core$String*) NULL);
*(&local85) = _2851;
_2859 = ((frost$core$Object*) _2851);
frost$core$Frost$ref$frost$core$Object$Q(_2859);
goto block325;
block327:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
_2863 = *(&local86);
_2864 = *(&local87);
_2865 = (frost$core$Bit) {false};
_2866 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _2864, _2865);
_2867 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_2863, _2866);
_2868 = ((frost$core$Object*) _2867);
frost$core$Frost$ref$frost$core$Object$Q(_2868);
_2870 = ((frost$core$Object*) _2867);
frost$core$Frost$unref$frost$core$Object$Q(_2870);
_2872 = *(&local86);
_2873 = ((frost$core$Object*) _2872);
frost$core$Frost$unref$frost$core$Object$Q(_2873);
*(&local86) = ((frost$core$String*) NULL);
*(&local85) = _2867;
_2877 = ((frost$core$Object*) _2867);
frost$core$Frost$ref$frost$core$Object$Q(_2877);
goto block325;
block325:;
_2880 = *(&local85);
_2881 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2880, &$s377);
_2882 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_2827, _2881);
_2883 = ((frost$core$Object*) _2882);
frost$core$Frost$ref$frost$core$Object$Q(_2883);
_2885 = ((frost$core$Object*) _2882);
frost$core$Frost$unref$frost$core$Object$Q(_2885);
_2887 = ((frost$core$Object*) _2881);
frost$core$Frost$unref$frost$core$Object$Q(_2887);
_2889 = ((frost$core$Object*) _2880);
frost$core$Frost$unref$frost$core$Object$Q(_2889);
_2891 = *(&local85);
_2892 = ((frost$core$Object*) _2891);
frost$core$Frost$unref$frost$core$Object$Q(_2892);
*(&local85) = ((frost$core$String*) NULL);
_2895 = ((frost$core$Object*) _2819);
frost$core$Frost$unref$frost$core$Object$Q(_2895);
_2897 = *(&local83);
_2898 = ((frost$core$Object*) _2897);
frost$core$Frost$unref$frost$core$Object$Q(_2898);
*(&local83) = ((frost$io$File*) NULL);
_2902 = *(&local3);
_2903 = _2902 != NULL;
_2904 = (frost$core$Bit) {_2903};
_2905 = _2904.value;
if (_2905) goto block328; else goto block329;
block329:;
_2907 = (frost$core$Int) {375u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s378, _2907, &$s379);
abort(); // unreachable
block328:;
_2910 = _2902;
_2911 = *(&local8);
_2912 = org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, _2882, _2910, _2911);
_2913 = ((frost$core$Object*) _2912);
frost$core$Frost$unref$frost$core$Object$Q(_2913);
_2915 = ((frost$core$Object*) _2882);
frost$core$Frost$unref$frost$core$Object$Q(_2915);
goto block311;
block313:;
_2918 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:377:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2921 = _2737.value;
_2922 = _2918.value;
_2923 = _2921 == _2922;
_2924 = (frost$core$Bit) {_2923};
_2926 = _2924.value;
if (_2926) goto block330; else goto block311;
block330:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:378
_2929 = *(&local3);
_2930 = _2929 != NULL;
_2931 = (frost$core$Bit) {_2930};
_2932 = _2931.value;
if (_2932) goto block332; else goto block333;
block333:;
_2934 = (frost$core$Int) {378u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s380, _2934, &$s381);
abort(); // unreachable
block332:;
_2937 = _2929;
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:378:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
_2942 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_2937, &$s382);
_2943 = &_2942->path;
_2944 = *_2943;
_2945 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(_2944);
*(&local89) = ((frost$core$String*) NULL);
_2947 = ((frost$core$Object*) _2945);
frost$core$Frost$ref$frost$core$Object$Q(_2947);
_2949 = *(&local89);
_2950 = ((frost$core$Object*) _2949);
frost$core$Frost$unref$frost$core$Object$Q(_2950);
*(&local89) = _2945;
_2953 = ((frost$core$Object*) _2945);
frost$core$Frost$unref$frost$core$Object$Q(_2953);
_2955 = ((frost$core$Object*) _2942);
frost$core$Frost$unref$frost$core$Object$Q(_2955);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
_2958 = *(&local89);
_2959 = _2958 == NULL;
_2960 = (frost$core$Bit) {_2959};
_2961 = _2960.value;
if (_2961) goto block336; else goto block337;
block336:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
_2964 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_2964);
_2966 = *(&local89);
_2967 = ((frost$core$Object*) _2966);
frost$core$Frost$unref$frost$core$Object$Q(_2967);
*(&local89) = ((frost$core$String*) NULL);
*(&local88) = ((frost$io$File*) NULL);
_2971 = ((frost$core$Object*) ((frost$io$File*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_2971);
goto block335;
block337:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
_2975 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
_2976 = *(&local89);
_2977 = _2976 != NULL;
_2978 = (frost$core$Bit) {_2977};
_2979 = _2978.value;
if (_2979) goto block338; else goto block339;
block339:;
_2981 = (frost$core$Int) {144u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s383, _2981, &$s384);
abort(); // unreachable
block338:;
_2984 = _2976;
frost$io$File$init$frost$core$String(_2975, _2984);
_2986 = _2975;
_2987 = ((frost$core$Object*) _2986);
frost$core$Frost$ref$frost$core$Object$Q(_2987);
_2989 = ((frost$core$Object*) _2975);
frost$core$Frost$unref$frost$core$Object$Q(_2989);
_2991 = *(&local89);
_2992 = ((frost$core$Object*) _2991);
frost$core$Frost$unref$frost$core$Object$Q(_2992);
*(&local89) = ((frost$core$String*) NULL);
*(&local88) = _2986;
_2996 = ((frost$core$Object*) _2986);
frost$core$Frost$ref$frost$core$Object$Q(_2996);
goto block335;
block335:;
_2999 = *(&local88);
_3000 = _2999 != NULL;
_3001 = (frost$core$Bit) {_3000};
_3002 = _3001.value;
if (_3002) goto block340; else goto block341;
block341:;
_3004 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s385, _3004, &$s386);
abort(); // unreachable
block340:;
_3007 = _2999;
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
_3010 = frost$io$File$get_name$R$frost$core$String(_2937);
*(&local91) = ((frost$core$String*) NULL);
_3012 = ((frost$core$Object*) _3010);
frost$core$Frost$ref$frost$core$Object$Q(_3012);
_3014 = *(&local91);
_3015 = ((frost$core$Object*) _3014);
frost$core$Frost$unref$frost$core$Object$Q(_3015);
*(&local91) = _3010;
_3018 = ((frost$core$Object*) _3010);
frost$core$Frost$unref$frost$core$Object$Q(_3018);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
_3021 = *(&local91);
_3022 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_3021, &$s387);
*(&local92) = _3022;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
_3025 = *(&local92);
_3026 = !_3025.nonnull;
_3027 = (frost$core$Bit) {_3026};
_3028 = _3027.value;
if (_3028) goto block343; else goto block344;
block343:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
_3031 = *(&local91);
_3032 = ((frost$core$Object*) _3031);
frost$core$Frost$ref$frost$core$Object$Q(_3032);
_3034 = *(&local91);
_3035 = ((frost$core$Object*) _3034);
frost$core$Frost$unref$frost$core$Object$Q(_3035);
*(&local91) = ((frost$core$String*) NULL);
*(&local90) = _3031;
_3039 = ((frost$core$Object*) _3031);
frost$core$Frost$ref$frost$core$Object$Q(_3039);
goto block342;
block344:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
_3043 = *(&local91);
_3044 = *(&local92);
_3045 = (frost$core$Bit) {false};
_3046 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), _3044, _3045);
_3047 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_3043, _3046);
_3048 = ((frost$core$Object*) _3047);
frost$core$Frost$ref$frost$core$Object$Q(_3048);
_3050 = ((frost$core$Object*) _3047);
frost$core$Frost$unref$frost$core$Object$Q(_3050);
_3052 = *(&local91);
_3053 = ((frost$core$Object*) _3052);
frost$core$Frost$unref$frost$core$Object$Q(_3053);
*(&local91) = ((frost$core$String*) NULL);
*(&local90) = _3047;
_3057 = ((frost$core$Object*) _3047);
frost$core$Frost$ref$frost$core$Object$Q(_3057);
goto block342;
block342:;
_3060 = *(&local90);
_3061 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3060, &$s388);
_3062 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_3007, _3061);
_3063 = ((frost$core$Object*) _3062);
frost$core$Frost$ref$frost$core$Object$Q(_3063);
_3065 = ((frost$core$Object*) _3062);
frost$core$Frost$unref$frost$core$Object$Q(_3065);
_3067 = ((frost$core$Object*) _3061);
frost$core$Frost$unref$frost$core$Object$Q(_3067);
_3069 = ((frost$core$Object*) _3060);
frost$core$Frost$unref$frost$core$Object$Q(_3069);
_3071 = *(&local90);
_3072 = ((frost$core$Object*) _3071);
frost$core$Frost$unref$frost$core$Object$Q(_3072);
*(&local90) = ((frost$core$String*) NULL);
_3075 = ((frost$core$Object*) _2999);
frost$core$Frost$unref$frost$core$Object$Q(_3075);
_3077 = *(&local88);
_3078 = ((frost$core$Object*) _3077);
frost$core$Frost$unref$frost$core$Object$Q(_3078);
*(&local88) = ((frost$io$File*) NULL);
_3082 = *(&local3);
_3083 = _3082 != NULL;
_3084 = (frost$core$Bit) {_3083};
_3085 = _3084.value;
if (_3085) goto block345; else goto block346;
block346:;
_3087 = (frost$core$Int) {378u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s389, _3087, &$s390);
abort(); // unreachable
block345:;
_3090 = _3082;
_3091 = *(&local8);
_3092 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, _3062, _3090, _3091);
_3093 = ((frost$core$Object*) _3092);
frost$core$Frost$unref$frost$core$Object$Q(_3093);
_3095 = ((frost$core$Object*) _3062);
frost$core$Frost$unref$frost$core$Object$Q(_3095);
goto block311;
block311:;
_3148 = *(&local41);
_3149 = ((frost$core$Object*) _3148);
frost$core$Frost$unref$frost$core$Object$Q(_3149);
*(&local41) = ((frost$io$File*) NULL);
_3152 = *(&local7);
_3153 = ((frost$core$Object*) _3152);
frost$core$Frost$unref$frost$core$Object$Q(_3153);
*(&local7) = ((frost$core$String*) NULL);
_3156 = *(&local3);
_3157 = ((frost$core$Object*) _3156);
frost$core$Frost$unref$frost$core$Object$Q(_3157);
*(&local3) = ((frost$io$File*) NULL);
_3160 = *(&local2);
_3161 = ((frost$core$Object*) _3160);
frost$core$Frost$unref$frost$core$Object$Q(_3161);
*(&local2) = ((frost$collections$Array*) NULL);
_3164 = *(&local1);
_3165 = ((frost$core$Object*) _3164);
frost$core$Frost$unref$frost$core$Object$Q(_3165);
*(&local1) = ((frost$collections$Array*) NULL);
_3168 = *(&local0);
_3169 = ((frost$core$Object*) _3168);
frost$core$Frost$unref$frost$core$Object$Q(_3169);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block307:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:383
_3101 = *(&local52);
_3102 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:383:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3105 = _3101.value;
_3106 = _3102.value;
_3107 = _3105 == _3106;
_3108 = (frost$core$Bit) {_3107};
_3110 = _3108.value;
if (_3110) goto block347; else goto block349;
block347:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:385
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:385:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s391);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s392);
goto block348;
block349:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:389
_3125 = *(&local52);
_3126 = frost$core$Int$get_asString$R$frost$core$String(_3125);
_3127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3126, &$s393);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:389:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_3127);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s394);
_3137 = ((frost$core$Object*) _3127);
frost$core$Frost$unref$frost$core$Object$Q(_3137);
_3139 = ((frost$core$Object*) _3126);
frost$core$Frost$unref$frost$core$Object$Q(_3139);
goto block348;
block348:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:391
_3143 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_3143);
_3145 = (frost$core$Int) {391u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s395, _3145, &$s396);
abort(); // unreachable

}
void frostMain(frost$collections$ListView* param0) {

frost$collections$CollectionView* _1;
$fn397 _2;
frost$core$Int _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _9;
frost$collections$ListView* _11;
frost$core$Int _12;
$fn398 _13;
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
$fn399 _31;
frost$collections$ListView* _32;
frost$collections$ListView* _33;
frost$core$Object* _35;
frost$core$Object* _37;
frost$collections$CollectionView* _42;
$fn400 _43;
frost$core$Int _44;
frost$core$Int _45;
int64_t _48;
int64_t _49;
bool _50;
frost$core$Bit _51;
bool _53;
frost$collections$ListView* _55;
frost$core$Int _56;
$fn401 _57;
frost$core$Object* _58;
frost$core$String* _59;
frost$core$Bit _60;
bool _61;
frost$core$Object* _62;
org$frostlang$frostc$Bench* _66;
$fn402 _68;
frost$core$Object* _70;
org$frostlang$frostc$Main* _75;
frost$core$Object* _78;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:397
_1 = ((frost$collections$CollectionView*) param0);
ITable* $tmp403 = _1->$class->itable;
while ($tmp403->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp403 = $tmp403->next;
}
_2 = $tmp403->methods[0];
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
ITable* $tmp404 = _11->$class->itable;
while ($tmp404->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp404 = $tmp404->next;
}
_13 = $tmp404->methods[0];
_14 = _13(_11, _12);
_15 = ((frost$core$String*) _14);
_16 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_15, &$s405);
_17 = _16.value;
_18 = _14;
frost$core$Frost$unref$frost$core$Object$Q(_18);
if (_17) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:398
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:399
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Main));
_24 = (org$frostlang$frostc$Main*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init(_24);
_26 = param0;
_27 = (frost$core$Int) {1u};
_28 = ((frost$core$Int$nullable) { _27, true });
_29 = (frost$core$Bit) {false};
_30 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(_28, ((frost$core$Int$nullable) { .nonnull = false }), _29);
ITable* $tmp406 = _26->$class->itable;
while ($tmp406->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp406 = $tmp406->next;
}
_31 = $tmp406->methods[2];
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:402
_42 = ((frost$collections$CollectionView*) param0);
ITable* $tmp407 = _42->$class->itable;
while ($tmp407->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp407 = $tmp407->next;
}
_43 = $tmp407->methods[0];
_44 = _43(_42);
_45 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:402:23
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
ITable* $tmp408 = _55->$class->itable;
while ($tmp408->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp408 = $tmp408->next;
}
_57 = $tmp408->methods[0];
_58 = _57(_55, _56);
_59 = ((frost$core$String*) _58);
_60 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_59, &$s409);
_61 = _60.value;
_62 = _58;
frost$core$Frost$unref$frost$core$Object$Q(_62);
if (_61) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:403
FROST_ASSERT(16 == sizeof(org$frostlang$frostc$Bench));
_66 = (org$frostlang$frostc$Bench*) frostObjectAlloc(16, (frost$core$Class*) &org$frostlang$frostc$Bench$class);
org$frostlang$frostc$Bench$init(_66);
_68 = ($fn410) _66->$class->vtable[4];
_68(_66);
_70 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_70);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:404
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:406
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Main));
_75 = (org$frostlang$frostc$Main*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init(_75);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT(_75, param0);
_78 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_78);
return;

}
void org$frostlang$frostc$Main$cleanup(org$frostlang$frostc$Main* param0) {

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

