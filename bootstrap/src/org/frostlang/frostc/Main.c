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
#include "frost/core/Int64.h"
#include "frost/collections/ListView.h"
#include "frost/core/System.h"
#include "frost/core/Maybe.h"
#include "frost/io/Console.h"
#include "frost/io/InputStream.h"
#include "frost/core/String/Index.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
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


static frost$core$String $s1;
org$frostlang$frostc$Main$class_type org$frostlang$frostc$Main$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Main$cleanup, org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File, org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File, org$frostlang$frostc$Main$printUsage$frost$io$OutputStream, org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT} };

typedef frost$core$String* (*$fn44)(frost$core$Object*);
typedef frost$core$String* (*$fn53)(frost$io$InputStream*);
typedef frost$core$String* (*$fn58)(frost$io$InputStream*);
typedef frost$core$String* (*$fn70)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn109)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn113)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn118)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn141)(frost$core$Object*);
typedef frost$core$String* (*$fn234)(frost$core$Object*);
typedef frost$core$String* (*$fn243)(frost$io$InputStream*);
typedef frost$core$String* (*$fn248)(frost$io$InputStream*);
typedef frost$core$String* (*$fn260)(frost$core$Object*);
typedef frost$core$Error* (*$fn276)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn280)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn283)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn287)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn290)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn294)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn313)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn321)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Maybe* (*$fn344)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$String* (*$fn360)(frost$core$Object*);
typedef frost$core$String* (*$fn376)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn399)(frost$core$Object*);
typedef frost$core$String* (*$fn409)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn438)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn473)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn542)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn550)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Bit (*$fn585)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn607)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn631)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn699)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn761)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn840)(frost$core$Object*);
typedef frost$core$String* (*$fn882)(frost$core$Object*);
typedef frost$core$Bit (*$fn917)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn937)(frost$collections$CollectionView*);
typedef void (*$fn954)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn974)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn978)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn983)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn991)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn995)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1000)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1011)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1015)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1020)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1030)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1034)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1039)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1050)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1054)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1059)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1067)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1071)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1076)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn1087)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1101)(frost$collections$CollectionView*);
typedef void (*$fn1116)(org$frostlang$frostc$CodeGenerator*);
typedef frost$core$String* (*$fn1165)(frost$core$Object*);
typedef frost$core$String* (*$fn1173)(frost$core$Object*);
typedef frost$core$String* (*$fn1213)(frost$core$Object*);
typedef frost$core$String* (*$fn1221)(frost$core$Object*);
typedef frost$core$Int64 (*$fn1383)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1394)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$ListView* (*$fn1405)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$Q$GT);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e", 25, -2845835638820544359, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x66\x72\x6f\x73\x74", 7, 156127765601112, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, 1592669972389054298, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x66\x72\x6f\x73\x74\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -2999112433744991273, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x66\x72\x6f\x73\x74\x27\x2e", 38, 893295268838200741, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, -4231800708310477877, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static frost$core$String $s468 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static frost$core$String $s486 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f", 1, 212, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68", 1, 205, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63", 1, 200, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62", 4, 223740247, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static frost$core$String $s531 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s536 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static frost$core$String $s552 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static frost$core$String $s556 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, 1555717532905, NULL };
static frost$core$String $s566 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static frost$core$String $s568 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s569 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s592 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62\x73", 5, 22597765062, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 5664749286632577346, NULL };
static frost$core$String $s615 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static frost$core$String $s616 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s647 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s649 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s656 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s658 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s665 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s667 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s674 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s683 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, 15416558793, NULL };
static frost$core$String $s685 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, 15416558793, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static frost$core$String $s687 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s707 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s708 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s715 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s732 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s764 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static frost$core$String $s765 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s767 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static frost$core$String $s768 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s796 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s813 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s827 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s890 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s923 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s945 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s946 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s968 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static frost$core$String $s969 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static frost$core$String $s1181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x77\x61\x72\x6e\x69\x6e\x67\x3a\x20", 11, 1594997818200825075, NULL };
static frost$core$String $s1229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x77\x61\x72\x6e\x69\x6e\x67", 9, 1627843243923833840, NULL };
static frost$core$String $s1246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x61\x72\x6e\x69\x6e\x67\x73", 9, 1453062006337443706, NULL };
static frost$core$String $s1258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1276 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s1293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s1322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s1339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1353 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s1367 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static frost$core$String $s1368 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1372 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static frost$core$String $s1373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s1397 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x72\x65\x70\x65\x61\x74", 7, 156190719979287, NULL };

void org$frostlang$frostc$Main$init(org$frostlang$frostc$Main* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:22
frost$core$Bit $tmp2 = frost$core$Bit$init$builtin_bit(true);
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
frost$core$Int64 local3;
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
frost$core$Int64* $tmp36 = &$tmp35->$rawValue;
frost$core$Int64 $tmp37 = *$tmp36;
int64_t $tmp38 = $tmp37.value;
bool $tmp39 = $tmp38 == 0;
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:54
$fn44 $tmp43 = ($fn44) ((frost$core$Object*) $tmp42)->$class->vtable[0];
frost$core$String* $tmp45 = $tmp43(((frost$core$Object*) $tmp42));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.stub:54:58
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String($tmp45);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:79
frost$core$Int64 $tmp46 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp46);
goto block4;
block5:;
frost$core$Object** $tmp47 = (frost$core$Object**) ($tmp35->$data + 0);
frost$core$Object* $tmp48 = *$tmp47;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$System$Process*) $tmp48)));
frost$core$System$Process* $tmp49 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local1) = ((frost$core$System$Process*) $tmp48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:74
frost$core$System$Process* $tmp50 = *(&local1);
frost$io$InputStream* $tmp51 = frost$core$System$Process$standardOutput$R$frost$io$InputStream($tmp50);
$fn53 $tmp52 = ($fn53) $tmp51->$class->vtable[14];
frost$core$String* $tmp54 = $tmp52($tmp51);
frost$io$Console$printError$frost$core$String($tmp54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:75
frost$core$System$Process* $tmp55 = *(&local1);
frost$io$InputStream* $tmp56 = frost$core$System$Process$standardError$R$frost$io$InputStream($tmp55);
$fn58 $tmp57 = ($fn58) $tmp56->$class->vtable[14];
frost$core$String* $tmp59 = $tmp57($tmp56);
frost$io$Console$printError$frost$core$String($tmp59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
goto block4;
block4:;
frost$core$Error* $tmp60 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local2) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:81
frost$core$System$Process* $tmp61 = *(&local1);
frost$core$Int64 $tmp62;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp62, $tmp61);
*(&local3) = $tmp62;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:82
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:82:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp63 = param3.value;
bool $tmp64 = !$tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:83
*(&local4) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:84
frost$core$Error* $tmp67 = frost$io$File$delete$R$frost$core$Error$Q(param1);
if ($tmp67 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local4) = $tmp67;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:87
frost$core$Error* $tmp68 = *(&local4);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:87:39
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:54
$fn70 $tmp69 = ($fn70) ((frost$core$Object*) $tmp68)->$class->vtable[0];
frost$core$String* $tmp71 = $tmp69(((frost$core$Object*) $tmp68));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.stub:54:58
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String($tmp71);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:88
frost$core$Int64 $tmp72 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp72);
goto block13;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
goto block13;
block13:;
frost$core$Error* $tmp73 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local4) = ((frost$core$Error*) NULL);
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:91
frost$core$Int64 $tmp74 = *(&local3);
frost$core$Int64 $tmp75 = (frost$core$Int64) {0};
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75.value;
bool $tmp78 = $tmp76 != $tmp77;
frost$core$Bit $tmp79 = (frost$core$Bit) {$tmp78};
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:92
frost$core$Int64 $tmp81 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp81);
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:94
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp82 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local1) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp83 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
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
frost$core$Int64 local14;
frost$core$Error* local15 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:98
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp84 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp84);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$collections$Array* $tmp85 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local0) = $tmp84;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:99
frost$collections$Array* $tmp86 = *(&local0);
frost$core$String** $tmp87 = &param1->path;
frost$core$String* $tmp88 = *$tmp87;
frost$collections$Array$add$frost$collections$Array$T($tmp86, ((frost$core$Object*) $tmp88));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:100
frost$collections$Array* $tmp89 = *(&local0);
frost$core$String* $tmp90 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$core$String* $tmp91 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s92, $tmp90);
frost$core$String* $tmp93 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp91, &$s94);
frost$collections$Array$add$frost$collections$Array$T($tmp89, ((frost$core$Object*) $tmp93));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:101
frost$collections$Array* $tmp95 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp95, ((frost$core$Object*) &$s96));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:102
frost$collections$Array* $tmp97 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp97, ((frost$core$Object*) &$s98));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:103
frost$collections$Array* $tmp99 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp99, ((frost$core$Object*) &$s100));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:104
frost$core$String* $tmp101 = org$frostlang$frostc$Config$icuLibraries$R$frost$core$String();
// begin inline call to function frost.core.String.split(delimiter:frost.core.String):frost.collections.Array<frost.core.String> from Main.frost:104:51
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:315
frost$core$Int64 $tmp102 = (frost$core$Int64) {9223372036854775807};
frost$collections$Array* $tmp103 = frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT($tmp101, &$s104, $tmp102);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$collections$Array* $tmp105 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local1) = $tmp103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:105
frost$collections$Array* $tmp106 = *(&local1);
ITable* $tmp107 = ((frost$collections$Iterable*) $tmp106)->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[0];
frost$collections$Iterator* $tmp110 = $tmp108(((frost$collections$Iterable*) $tmp106));
goto block2;
block2:;
ITable* $tmp111 = $tmp110->$class->itable;
while ($tmp111->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[0];
frost$core$Bit $tmp114 = $tmp112($tmp110);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block4; else goto block3;
block3:;
*(&local2) = ((frost$core$String*) NULL);
ITable* $tmp116 = $tmp110->$class->itable;
while ($tmp116->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp116 = $tmp116->next;
}
$fn118 $tmp117 = $tmp116->methods[1];
frost$core$Object* $tmp119 = $tmp117($tmp110);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp119)));
frost$core$String* $tmp120 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
*(&local2) = ((frost$core$String*) $tmp119);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:106
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp121 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp122 = *(&local2);
frost$io$File$init$frost$core$String($tmp121, $tmp122);
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$io$File* $tmp123 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local3) = $tmp121;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:107
frost$collections$Array* $tmp124 = *(&local0);
frost$io$File* $tmp125 = *(&local3);
// begin inline call to function frost.io.File.get_parent():frost.io.File? from Main.frost:107:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:27
frost$io$File* $tmp126 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp125, &$s127);
frost$core$String** $tmp128 = &$tmp126->path;
frost$core$String* $tmp129 = *$tmp128;
frost$core$String* $tmp130 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp129);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$String* $tmp131 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local5) = $tmp130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:28
frost$core$String* $tmp132 = *(&local5);
frost$core$Bit $tmp133 = frost$core$Bit$init$builtin_bit($tmp132 == NULL);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp135 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
*(&local5) = ((frost$core$String*) NULL);
*(&local4) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:31
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp136 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp137 = *(&local5);
frost$io$File$init$frost$core$String($tmp136, $tmp137);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$String* $tmp138 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local5) = ((frost$core$String*) NULL);
*(&local4) = $tmp136;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
goto block5;
block5:;
frost$io$File* $tmp139 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:107:27
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn141 $tmp140 = ($fn141) ((frost$core$Object*) $tmp139)->$class->vtable[0];
frost$core$String* $tmp142 = $tmp140(((frost$core$Object*) $tmp139));
frost$core$String* $tmp143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s144, $tmp142);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$collections$Array$add$frost$collections$Array$T($tmp124, ((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:108
frost$io$File* $tmp145 = *(&local3);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from Main.frost:108:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:45
// begin inline call to function frost.io.File.get_name():frost.core.String from File.stub:45:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:35
frost$core$String** $tmp146 = &$tmp145->path;
frost$core$String* $tmp147 = *$tmp146;
frost$core$String$Index$nullable $tmp148 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp147, &$s149);
*(&local8) = $tmp148;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:36
frost$core$String$Index$nullable $tmp150 = *(&local8);
frost$core$Bit $tmp151 = frost$core$Bit$init$builtin_bit($tmp150.nonnull);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:37
frost$core$String** $tmp153 = &$tmp145->path;
frost$core$String* $tmp154 = *$tmp153;
frost$core$String** $tmp155 = &$tmp145->path;
frost$core$String* $tmp156 = *$tmp155;
frost$core$String$Index$nullable $tmp157 = *(&local8);
frost$core$String$Index $tmp158 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp156, ((frost$core$String$Index) $tmp157.value));
frost$core$Bit $tmp159 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp160 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp158, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp159);
frost$core$String* $tmp161 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp154, $tmp160);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
*(&local7) = $tmp161;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
goto block10;
block13:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:40
frost$core$String** $tmp162 = &$tmp145->path;
frost$core$String* $tmp163 = *$tmp162;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local7) = $tmp163;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
goto block10;
block12:;
goto block10;
block10:;
frost$core$String* $tmp164 = *(&local7);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$String* $tmp165 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
*(&local9) = $tmp164;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:46
frost$core$String* $tmp166 = *(&local9);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.stub:46:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:229
frost$core$String$Index $tmp167 = frost$core$String$get_end$R$frost$core$String$Index($tmp166);
frost$core$String$Index$nullable $tmp168 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp166, &$s169, $tmp167);
*(&local10) = $tmp168;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:47
frost$core$String$Index$nullable $tmp170 = *(&local10);
frost$core$Bit $tmp171 = frost$core$Bit$init$builtin_bit(!$tmp170.nonnull);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:48
frost$core$String* $tmp173 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$core$String* $tmp174 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp175 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
*(&local7) = ((frost$core$String*) NULL);
*(&local6) = $tmp173;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
goto block9;
block16:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:50
frost$core$String* $tmp176 = *(&local9);
frost$core$String$Index$nullable $tmp177 = *(&local10);
frost$core$Bit $tmp178 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp179 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp177, $tmp178);
frost$core$String* $tmp180 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp176, $tmp179);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$String* $tmp181 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp182 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local7) = ((frost$core$String*) NULL);
*(&local6) = $tmp180;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
goto block9;
block9:;
frost$core$String* $tmp183 = *(&local6);
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$String* $tmp184 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local11) = $tmp183;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:109
frost$core$String* $tmp185 = *(&local11);
frost$core$Bit $tmp186 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp185, &$s187);
bool $tmp188 = $tmp186.value;
if ($tmp188) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp189 = (frost$core$Int64) {109};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s190, $tmp189);
abort(); // unreachable
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:110
frost$core$String* $tmp191 = *(&local11);
frost$core$Int64 $tmp192 = (frost$core$Int64) {3};
frost$core$Bit $tmp193 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp194 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp192, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp193);
frost$core$String* $tmp195 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp191, $tmp194);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$String* $tmp196 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local11) = $tmp195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:111
frost$collections$Array* $tmp197 = *(&local0);
frost$core$String* $tmp198 = *(&local11);
frost$core$String* $tmp199 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s200, $tmp198);
frost$collections$Array$add$frost$collections$Array$T($tmp197, ((frost$core$Object*) $tmp199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
frost$core$String* $tmp201 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
*(&local11) = ((frost$core$String*) NULL);
frost$core$String* $tmp202 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
*(&local6) = ((frost$core$String*) NULL);
frost$io$File* $tmp203 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp204 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp119);
frost$core$String* $tmp205 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:113
frost$collections$Array* $tmp206 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp206, ((frost$core$Object*) &$s207));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:114
frost$collections$Array* $tmp208 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp208, ((frost$core$Object*) &$s209));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:115
frost$core$Bit* $tmp210 = &param0->debug;
frost$core$Bit $tmp211 = *$tmp210;
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:116
frost$collections$Array* $tmp213 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp213, ((frost$core$Object*) &$s214));
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:118
frost$collections$Array* $tmp215 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp215, ((frost$core$Object*) &$s216));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:119
frost$collections$Array* $tmp217 = *(&local0);
frost$core$String** $tmp218 = &param2->path;
frost$core$String* $tmp219 = *$tmp218;
frost$collections$Array$add$frost$collections$Array$T($tmp217, ((frost$core$Object*) $tmp219));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:120
*(&local12) = ((frost$core$System$Process*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:121
*(&local13) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:122
frost$io$File** $tmp220 = &param0->clang;
frost$io$File* $tmp221 = *$tmp220;
frost$core$String** $tmp222 = &$tmp221->path;
frost$core$String* $tmp223 = *$tmp222;
frost$collections$Array* $tmp224 = *(&local0);
frost$core$Maybe* $tmp225 = frost$core$System$exec$frost$core$String$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$Maybe$LTfrost$core$System$Process$GT($tmp223, ((frost$collections$ListView*) $tmp224));
frost$core$Int64* $tmp226 = &$tmp225->$rawValue;
frost$core$Int64 $tmp227 = *$tmp226;
int64_t $tmp228 = $tmp227.value;
bool $tmp229 = $tmp228 == 0;
if ($tmp229) goto block23; else goto block24;
block24:;
frost$core$Error** $tmp230 = (frost$core$Error**) ($tmp225->$data + 0);
frost$core$Error* $tmp231 = *$tmp230;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local13) = $tmp231;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:127
frost$core$Error* $tmp232 = *(&local13);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:127:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:54
$fn234 $tmp233 = ($fn234) ((frost$core$Object*) $tmp232)->$class->vtable[0];
frost$core$String* $tmp235 = $tmp233(((frost$core$Object*) $tmp232));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.stub:54:58
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String($tmp235);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:128
frost$core$Int64 $tmp236 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp236);
goto block22;
block23:;
frost$core$Object** $tmp237 = (frost$core$Object**) ($tmp225->$data + 0);
frost$core$Object* $tmp238 = *$tmp237;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$System$Process*) $tmp238)));
frost$core$System$Process* $tmp239 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local12) = ((frost$core$System$Process*) $tmp238);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:123
frost$core$System$Process* $tmp240 = *(&local12);
frost$io$InputStream* $tmp241 = frost$core$System$Process$standardOutput$R$frost$io$InputStream($tmp240);
$fn243 $tmp242 = ($fn243) $tmp241->$class->vtable[14];
frost$core$String* $tmp244 = $tmp242($tmp241);
frost$io$Console$printError$frost$core$String($tmp244);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:124
frost$core$System$Process* $tmp245 = *(&local12);
frost$io$InputStream* $tmp246 = frost$core$System$Process$standardError$R$frost$io$InputStream($tmp245);
$fn248 $tmp247 = ($fn248) $tmp246->$class->vtable[14];
frost$core$String* $tmp249 = $tmp247($tmp246);
frost$io$Console$printError$frost$core$String($tmp249);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
goto block22;
block22:;
frost$core$Error* $tmp250 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local13) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:130
frost$core$System$Process* $tmp251 = *(&local12);
frost$core$Int64 $tmp252;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp252, $tmp251);
*(&local14) = $tmp252;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:131
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:131:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp253 = param3.value;
bool $tmp254 = !$tmp253;
frost$core$Bit $tmp255 = (frost$core$Bit) {$tmp254};
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:132
*(&local15) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:133
frost$core$Error* $tmp257 = frost$io$File$delete$R$frost$core$Error$Q(param1);
if ($tmp257 == NULL) goto block32; else goto block33;
block33:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
*(&local15) = $tmp257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:136
frost$core$Error* $tmp258 = *(&local15);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:136:39
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:54
$fn260 $tmp259 = ($fn260) ((frost$core$Object*) $tmp258)->$class->vtable[0];
frost$core$String* $tmp261 = $tmp259(((frost$core$Object*) $tmp258));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.stub:54:58
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String($tmp261);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:137
frost$core$Int64 $tmp262 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp262);
goto block31;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
goto block31;
block31:;
frost$core$Error* $tmp263 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local15) = ((frost$core$Error*) NULL);
goto block28;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:140
frost$core$Int64 $tmp264 = *(&local14);
frost$core$Int64 $tmp265 = (frost$core$Int64) {0};
int64_t $tmp266 = $tmp264.value;
int64_t $tmp267 = $tmp265.value;
bool $tmp268 = $tmp266 != $tmp267;
frost$core$Bit $tmp269 = (frost$core$Bit) {$tmp268};
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:141
frost$core$Int64 $tmp271 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp271);
goto block37;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:143
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp272 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local12) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp273 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
*(&local1) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp274 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local0) = ((frost$collections$Array*) NULL);
return param2;

}
void org$frostlang$frostc$Main$printUsage$frost$io$OutputStream(org$frostlang$frostc$Main* param0, frost$io$OutputStream* param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:147
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:148
$fn276 $tmp275 = ($fn276) param1->$class->vtable[19];
frost$core$Error* $tmp277 = $tmp275(param1, &$s278);
if ($tmp277 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local0) = $tmp277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:149
$fn280 $tmp279 = ($fn280) param1->$class->vtable[21];
frost$core$Error* $tmp281 = $tmp279(param1);
if ($tmp281 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
*(&local0) = $tmp281;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:150
$fn283 $tmp282 = ($fn283) param1->$class->vtable[19];
frost$core$Error* $tmp284 = $tmp282(param1, &$s285);
if ($tmp284 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local0) = $tmp284;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:151
$fn287 $tmp286 = ($fn287) param1->$class->vtable[21];
frost$core$Error* $tmp288 = $tmp286(param1);
if ($tmp288 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local0) = $tmp288;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:152
$fn290 $tmp289 = ($fn290) param1->$class->vtable[19];
frost$core$Error* $tmp291 = $tmp289(param1, &$s292);
if ($tmp291 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local0) = $tmp291;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:153
$fn294 $tmp293 = ($fn294) param1->$class->vtable[19];
frost$core$Error* $tmp295 = $tmp293(param1, &$s296);
if ($tmp295 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local0) = $tmp295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$core$Error* $tmp297 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:156
frost$core$Int64 $tmp298 = (frost$core$Int64) {156};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s299, $tmp298);
abort(); // unreachable

}
void org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT(org$frostlang$frostc$Main* param0, frost$collections$ListView* param1) {

org$frostlang$frostc$Main$Arguments* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$io$File* local3 = NULL;
frost$core$Int64 local4;
frost$core$Int64 local5;
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
frost$core$String* local16 = NULL;
frost$core$String* local17 = NULL;
org$frostlang$frostc$Main$Format local18;
org$frostlang$frostc$Main$Format local19;
org$frostlang$frostc$Main$Format local20;
org$frostlang$frostc$Main$Format local21;
org$frostlang$frostc$Main$Format local22;
org$frostlang$frostc$Main$Format local23;
org$frostlang$frostc$Main$Format local24;
org$frostlang$frostc$Main$Format local25;
org$frostlang$frostc$Main$Format local26;
org$frostlang$frostc$Main$Format local27;
org$frostlang$frostc$Main$Format local28;
org$frostlang$frostc$Main$Format local29;
org$frostlang$frostc$Main$Format local30;
org$frostlang$frostc$Main$Format local31;
frost$io$File* local32 = NULL;
org$frostlang$frostc$Main$Format local33;
org$frostlang$frostc$Main$Format local34;
frost$io$File* local35 = NULL;
org$frostlang$frostc$Main$Format local36;
org$frostlang$frostc$Main$Format local37;
frost$core$String* local38 = NULL;
frost$io$File* local39 = NULL;
frost$core$String* local40 = NULL;
frost$core$String* local41 = NULL;
frost$core$String* local42 = NULL;
frost$core$String$Index$nullable local43;
org$frostlang$frostc$Main$Format local44;
org$frostlang$frostc$Main$Format local45;
frost$core$Int64 local46;
frost$core$Int64 local47;
org$frostlang$frostc$CodeGenerator* local48 = NULL;
frost$core$Error* local49 = NULL;
frost$io$File* local50 = NULL;
frost$core$String* local51 = NULL;
frost$core$String* local52 = NULL;
frost$core$String* local53 = NULL;
frost$core$String$Index$nullable local54;
frost$core$Error* local55 = NULL;
org$frostlang$frostc$Compiler$Settings* local56 = NULL;
frost$threads$MessageQueue* local57 = NULL;
org$frostlang$frostc$Compiler* local58 = NULL;
org$frostlang$frostc$Main$Format local59;
org$frostlang$frostc$Main$Format local60;
frost$io$File* local61 = NULL;
org$frostlang$frostc$ClassDecl* local62 = NULL;
org$frostlang$frostc$ClassDecl* local63 = NULL;
org$frostlang$frostc$ClassDecl* local64 = NULL;
frost$io$File* local65 = NULL;
org$frostlang$frostc$ClassDecl* local66 = NULL;
org$frostlang$frostc$ClassDecl* local67 = NULL;
frost$threads$ScopedLock* local68 = NULL;
org$frostlang$frostc$Compiler$Message* local69 = NULL;
frost$core$String* local70 = NULL;
frost$core$Int64 local71;
frost$core$Int64 local72;
frost$core$String* local73 = NULL;
frost$core$String* local74 = NULL;
frost$core$Int64 local75;
frost$core$Int64 local76;
frost$core$String* local77 = NULL;
frost$io$File* local78 = NULL;
frost$core$String* local79 = NULL;
frost$core$String* local80 = NULL;
frost$core$String* local81 = NULL;
frost$core$String$Index$nullable local82;
frost$io$File* local83 = NULL;
frost$core$String* local84 = NULL;
frost$core$String* local85 = NULL;
frost$core$String* local86 = NULL;
frost$core$String$Index$nullable local87;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:161
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Main$Arguments));
org$frostlang$frostc$Main$Arguments* $tmp300 = (org$frostlang$frostc$Main$Arguments*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Main$Arguments$class);
org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT($tmp300, param1);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
org$frostlang$frostc$Main$Arguments* $tmp301 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local0) = $tmp300;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:162
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp302 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp302);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$collections$Array* $tmp303 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local1) = $tmp302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:163
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp304 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp304);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$collections$Array* $tmp305 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local2) = $tmp304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:164
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File* $tmp306 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local3) = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:165
frost$core$Int64 $tmp307 = (frost$core$Int64) {3};
*(&local4) = $tmp307;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:166
frost$core$Int64 $tmp308 = (frost$core$Int64) {3};
*(&local5) = $tmp308;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:167
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { .nonnull = false });
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:168
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp309 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local7) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:169
frost$core$Bit $tmp310 = frost$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp310;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:170
goto block1;
block1:;
org$frostlang$frostc$Main$Arguments* $tmp311 = *(&local0);
$fn313 $tmp312 = ($fn313) $tmp311->$class->vtable[2];
frost$core$Bit $tmp314 = $tmp312($tmp311);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:170:15
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp315 = $tmp314.value;
bool $tmp316 = !$tmp315;
frost$core$Bit $tmp317 = (frost$core$Bit) {$tmp316};
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:171
org$frostlang$frostc$Main$Arguments* $tmp319 = *(&local0);
$fn321 $tmp320 = ($fn321) $tmp319->$class->vtable[3];
frost$core$String* $tmp322 = $tmp320($tmp319);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$String* $tmp323 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local9) = $tmp322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:172
frost$core$String* $tmp324 = *(&local9);
frost$core$Bit $tmp325 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp324, &$s326);
bool $tmp327 = $tmp325.value;
if ($tmp327) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:174
*(&local10) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:175
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp328 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp328, &$s329);
*(&local11) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$io$File* $tmp330 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local11) = $tmp328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:176
frost$io$InputStream* $tmp331 = frost$io$Console$inputStream$R$frost$io$InputStream();
frost$io$File* $tmp332 = *(&local11);
frost$core$Maybe* $tmp333 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp332);
frost$core$Int64* $tmp334 = &$tmp333->$rawValue;
frost$core$Int64 $tmp335 = *$tmp334;
int64_t $tmp336 = $tmp335.value;
bool $tmp337 = $tmp336 == 0;
if ($tmp337) goto block10; else goto block11;
block11:;
frost$core$Error** $tmp338 = (frost$core$Error**) ($tmp333->$data + 0);
frost$core$Error* $tmp339 = *$tmp338;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
*(&local10) = $tmp339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$io$File* $tmp340 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
*(&local11) = ((frost$io$File*) NULL);
goto block8;
block10:;
frost$core$Object** $tmp341 = (frost$core$Object**) ($tmp333->$data + 0);
frost$core$Object* $tmp342 = *$tmp341;
$fn344 $tmp343 = ($fn344) $tmp331->$class->vtable[17];
frost$core$Maybe* $tmp345 = $tmp343($tmp331, ((frost$io$OutputStream*) $tmp342));
frost$core$Int64* $tmp346 = &$tmp345->$rawValue;
frost$core$Int64 $tmp347 = *$tmp346;
int64_t $tmp348 = $tmp347.value;
bool $tmp349 = $tmp348 == 0;
if ($tmp349) goto block12; else goto block13;
block13:;
frost$core$Error** $tmp350 = (frost$core$Error**) ($tmp345->$data + 0);
frost$core$Error* $tmp351 = *$tmp350;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
*(&local10) = $tmp351;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$io$File* $tmp352 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
*(&local11) = ((frost$io$File*) NULL);
goto block8;
block12:;
frost$core$Object** $tmp353 = (frost$core$Object**) ($tmp345->$data + 0);
frost$core$Object* $tmp354 = *$tmp353;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:177
frost$collections$Array* $tmp355 = *(&local1);
frost$io$File* $tmp356 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp355, ((frost$core$Object*) $tmp356));
frost$io$File* $tmp357 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local11) = ((frost$io$File*) NULL);
goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:180
frost$core$Error* $tmp358 = *(&local10);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:180:47
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:54
$fn360 $tmp359 = ($fn360) ((frost$core$Object*) $tmp358)->$class->vtable[0];
frost$core$String* $tmp361 = $tmp359(((frost$core$Object*) $tmp358));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.stub:54:58
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String($tmp361);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:181
frost$core$Int64 $tmp362 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp362);
goto block9;
block9:;
frost$core$Error* $tmp363 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local10) = ((frost$core$Error*) NULL);
goto block5;
block7:;
frost$core$Bit $tmp364 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp324, &$s365);
bool $tmp366 = $tmp364.value;
if ($tmp366) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:185
frost$io$File* $tmp367 = *(&local3);
frost$core$Bit $tmp368 = frost$core$Bit$init$builtin_bit($tmp367 != NULL);
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:186
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:186:47
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String(&$s370);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
// begin inline call to method frost.io.Console.printErrorLine() from Console.stub:46:15
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:58
frost$io$Console$printError$frost$core$String(&$s371);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:187
frost$core$Int64 $tmp372 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp372);
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:189
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp373 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp374 = *(&local0);
$fn376 $tmp375 = ($fn376) $tmp374->$class->vtable[4];
frost$core$String* $tmp377 = $tmp375($tmp374, &$s378);
frost$io$File$init$frost$core$String($tmp373, $tmp377);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$io$File* $tmp379 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local3) = $tmp373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:190
*(&local12) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:191
frost$io$File* $tmp380 = *(&local3);
// begin inline call to function frost.io.File.get_parent():frost.io.File? from Main.frost:191:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:27
frost$io$File* $tmp381 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp380, &$s382);
frost$core$String** $tmp383 = &$tmp381->path;
frost$core$String* $tmp384 = *$tmp383;
frost$core$String* $tmp385 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp384);
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
frost$core$String* $tmp386 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
*(&local14) = $tmp385;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:28
frost$core$String* $tmp387 = *(&local14);
frost$core$Bit $tmp388 = frost$core$Bit$init$builtin_bit($tmp387 == NULL);
bool $tmp389 = $tmp388.value;
if ($tmp389) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp390 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
*(&local14) = ((frost$core$String*) NULL);
*(&local13) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block24;
block26:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:31
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp391 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp392 = *(&local14);
frost$io$File$init$frost$core$String($tmp391, $tmp392);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
frost$core$String* $tmp393 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
*(&local14) = ((frost$core$String*) NULL);
*(&local13) = $tmp391;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
goto block24;
block24:;
frost$io$File* $tmp394 = *(&local13);
frost$core$Error* $tmp395 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp394);
if ($tmp395 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local12) = $tmp395;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
frost$io$File* $tmp396 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local13) = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:194
frost$core$Error* $tmp397 = *(&local12);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:194:47
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:54
$fn399 $tmp398 = ($fn399) ((frost$core$Object*) $tmp397)->$class->vtable[0];
frost$core$String* $tmp400 = $tmp398(((frost$core$Object*) $tmp397));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.stub:54:58
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String($tmp400);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:195
frost$core$Int64 $tmp401 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp401);
goto block23;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
frost$io$File* $tmp402 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local13) = ((frost$io$File*) NULL);
goto block23;
block23:;
frost$core$Error* $tmp403 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local12) = ((frost$core$Error*) NULL);
goto block5;
block17:;
frost$core$Bit $tmp404 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp324, &$s405);
bool $tmp406 = $tmp404.value;
if ($tmp406) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:199
org$frostlang$frostc$Main$Arguments* $tmp407 = *(&local0);
$fn409 $tmp408 = ($fn409) $tmp407->$class->vtable[4];
frost$core$String* $tmp410 = $tmp408($tmp407, &$s411);
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$String* $tmp412 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local15) = $tmp410;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:200
frost$core$String* $tmp413 = *(&local15);
frost$core$Int64$nullable $tmp414 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp413);
*(&local4) = ((frost$core$Int64) $tmp414.value);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:201
frost$core$Int64 $tmp415 = *(&local4);
frost$core$Int64 $tmp416 = (frost$core$Int64) {3};
int64_t $tmp417 = $tmp415.value;
int64_t $tmp418 = $tmp416.value;
bool $tmp419 = $tmp417 > $tmp418;
frost$core$Bit $tmp420 = (frost$core$Bit) {$tmp419};
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block33; else goto block35;
block35:;
frost$core$Int64 $tmp422 = *(&local4);
frost$core$Int64 $tmp423 = (frost$core$Int64) {0};
int64_t $tmp424 = $tmp422.value;
int64_t $tmp425 = $tmp423.value;
bool $tmp426 = $tmp424 < $tmp425;
frost$core$Bit $tmp427 = (frost$core$Bit) {$tmp426};
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:202
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:202:47
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String(&$s429);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
// begin inline call to method frost.io.Console.printErrorLine() from Console.stub:46:15
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:58
frost$io$Console$printError$frost$core$String(&$s430);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:203
frost$core$Int64 $tmp431 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp431);
goto block34;
block34:;
frost$core$String* $tmp432 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
*(&local15) = ((frost$core$String*) NULL);
goto block5;
block32:;
frost$core$Bit $tmp433 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp324, &$s434);
bool $tmp435 = $tmp433.value;
if ($tmp435) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:207
org$frostlang$frostc$Main$Arguments* $tmp436 = *(&local0);
$fn438 $tmp437 = ($fn438) $tmp436->$class->vtable[4];
frost$core$String* $tmp439 = $tmp437($tmp436, &$s440);
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$String* $tmp441 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
*(&local16) = $tmp439;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:208
frost$core$String* $tmp442 = *(&local16);
frost$core$Int64$nullable $tmp443 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp442);
*(&local5) = ((frost$core$Int64) $tmp443.value);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:209
frost$core$Int64 $tmp444 = *(&local5);
frost$core$Int64 $tmp445 = (frost$core$Int64) {3};
int64_t $tmp446 = $tmp444.value;
int64_t $tmp447 = $tmp445.value;
bool $tmp448 = $tmp446 > $tmp447;
frost$core$Bit $tmp449 = (frost$core$Bit) {$tmp448};
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block40; else goto block42;
block42:;
frost$core$Int64 $tmp451 = *(&local5);
frost$core$Int64 $tmp452 = (frost$core$Int64) {0};
int64_t $tmp453 = $tmp451.value;
int64_t $tmp454 = $tmp452.value;
bool $tmp455 = $tmp453 < $tmp454;
frost$core$Bit $tmp456 = (frost$core$Bit) {$tmp455};
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:210
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:210:47
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String(&$s458);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
// begin inline call to method frost.io.Console.printErrorLine() from Console.stub:46:15
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:58
frost$io$Console$printError$frost$core$String(&$s459);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:211
frost$core$Int64 $tmp460 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp460);
goto block41;
block41:;
frost$core$String* $tmp461 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local16) = ((frost$core$String*) NULL);
goto block5;
block39:;
frost$core$Bit $tmp462 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp324, &$s463);
bool $tmp464 = $tmp462.value;
if ($tmp464) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:215
org$frostlang$frostc$Main$Format$nullable $tmp465 = *(&local6);
frost$core$Bit $tmp466 = frost$core$Bit$init$builtin_bit($tmp465.nonnull);
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:216
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:216:47
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String(&$s468);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
// begin inline call to method frost.io.Console.printErrorLine() from Console.stub:46:15
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:58
frost$io$Console$printError$frost$core$String(&$s469);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:217
frost$core$Int64 $tmp470 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp470);
goto block48;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:219
org$frostlang$frostc$Main$Arguments* $tmp471 = *(&local0);
$fn473 $tmp472 = ($fn473) $tmp471->$class->vtable[4];
frost$core$String* $tmp474 = $tmp472($tmp471, &$s475);
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$core$String* $tmp476 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
*(&local17) = $tmp474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:220
frost$core$String* $tmp477 = *(&local17);
frost$core$Bit $tmp478 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp477, &$s479);
bool $tmp480 = $tmp478.value;
if ($tmp480) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:221
frost$core$Int64 $tmp481 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int64):org.frostlang.frostc.Main.Format from Main.frost:221:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int64* $tmp482 = &(&local19)->$rawValue;
*$tmp482 = $tmp481;
org$frostlang$frostc$Main$Format $tmp483 = *(&local19);
*(&local18) = $tmp483;
org$frostlang$frostc$Main$Format $tmp484 = *(&local18);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp484, true });
goto block51;
block53:;
frost$core$Bit $tmp485 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp477, &$s486);
bool $tmp487 = $tmp485.value;
if ($tmp487) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:222
frost$core$Int64 $tmp488 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int64):org.frostlang.frostc.Main.Format from Main.frost:222:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int64* $tmp489 = &(&local21)->$rawValue;
*$tmp489 = $tmp488;
org$frostlang$frostc$Main$Format $tmp490 = *(&local21);
*(&local20) = $tmp490;
org$frostlang$frostc$Main$Format $tmp491 = *(&local20);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp491, true });
goto block51;
block56:;
frost$core$Bit $tmp492 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp477, &$s493);
bool $tmp494 = $tmp492.value;
if ($tmp494) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:223
frost$core$Int64 $tmp495 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int64):org.frostlang.frostc.Main.Format from Main.frost:223:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int64* $tmp496 = &(&local23)->$rawValue;
*$tmp496 = $tmp495;
org$frostlang$frostc$Main$Format $tmp497 = *(&local23);
*(&local22) = $tmp497;
org$frostlang$frostc$Main$Format $tmp498 = *(&local22);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp498, true });
goto block51;
block59:;
frost$core$Bit $tmp499 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp477, &$s500);
bool $tmp501 = $tmp499.value;
if ($tmp501) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:224
frost$core$Int64 $tmp502 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int64):org.frostlang.frostc.Main.Format from Main.frost:224:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int64* $tmp503 = &(&local25)->$rawValue;
*$tmp503 = $tmp502;
org$frostlang$frostc$Main$Format $tmp504 = *(&local25);
*(&local24) = $tmp504;
org$frostlang$frostc$Main$Format $tmp505 = *(&local24);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp505, true });
goto block51;
block62:;
frost$core$Bit $tmp506 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp477, &$s507);
bool $tmp508 = $tmp506.value;
if ($tmp508) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:225
frost$core$Int64 $tmp509 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int64):org.frostlang.frostc.Main.Format from Main.frost:225:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int64* $tmp510 = &(&local27)->$rawValue;
*$tmp510 = $tmp509;
org$frostlang$frostc$Main$Format $tmp511 = *(&local27);
*(&local26) = $tmp511;
org$frostlang$frostc$Main$Format $tmp512 = *(&local26);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp512, true });
goto block51;
block65:;
frost$core$Bit $tmp513 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp477, &$s514);
bool $tmp515 = $tmp513.value;
if ($tmp515) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:226
frost$core$Int64 $tmp516 = (frost$core$Int64) {5};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int64):org.frostlang.frostc.Main.Format from Main.frost:226:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int64* $tmp517 = &(&local29)->$rawValue;
*$tmp517 = $tmp516;
org$frostlang$frostc$Main$Format $tmp518 = *(&local29);
*(&local28) = $tmp518;
org$frostlang$frostc$Main$Format $tmp519 = *(&local28);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp519, true });
goto block51;
block68:;
frost$core$Bit $tmp520 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp477, &$s521);
bool $tmp522 = $tmp520.value;
if ($tmp522) goto block70; else goto block71;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:227
frost$core$Int64 $tmp523 = (frost$core$Int64) {6};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int64):org.frostlang.frostc.Main.Format from Main.frost:227:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int64* $tmp524 = &(&local31)->$rawValue;
*$tmp524 = $tmp523;
org$frostlang$frostc$Main$Format $tmp525 = *(&local31);
*(&local30) = $tmp525;
org$frostlang$frostc$Main$Format $tmp526 = *(&local30);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp526, true });
goto block51;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:229
frost$core$String* $tmp527 = *(&local17);
frost$core$String* $tmp528 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s529, $tmp527);
frost$core$String* $tmp530 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp528, &$s531);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:229:51
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String($tmp530);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
// begin inline call to method frost.io.Console.printErrorLine() from Console.stub:46:15
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:58
frost$io$Console$printError$frost$core$String(&$s532);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:230
frost$core$Int64 $tmp533 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp533);
goto block51;
block51:;
frost$core$String* $tmp534 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
*(&local17) = ((frost$core$String*) NULL);
goto block5;
block46:;
frost$core$Bit $tmp535 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp324, &$s536);
bool $tmp537 = $tmp535.value;
if ($tmp537) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:235
frost$collections$Array* $tmp538 = *(&local2);
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp539 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp540 = *(&local0);
$fn542 $tmp541 = ($fn542) $tmp540->$class->vtable[4];
frost$core$String* $tmp543 = $tmp541($tmp540, &$s544);
frost$io$File$init$frost$core$String($tmp539, $tmp543);
frost$collections$Array$add$frost$collections$Array$T($tmp538, ((frost$core$Object*) $tmp539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
goto block5;
block76:;
frost$core$Bit $tmp545 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp324, &$s546);
bool $tmp547 = $tmp545.value;
if ($tmp547) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:238
org$frostlang$frostc$Main$Arguments* $tmp548 = *(&local0);
$fn550 $tmp549 = ($fn550) $tmp548->$class->vtable[4];
frost$core$String* $tmp551 = $tmp549($tmp548, &$s552);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$core$String* $tmp553 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
*(&local7) = $tmp551;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
goto block5;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:241
frost$core$String* $tmp554 = *(&local9);
frost$core$Bit $tmp555 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp554, &$s556);
bool $tmp557 = $tmp555.value;
if ($tmp557) goto block79; else goto block81;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:242
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp558 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp559 = *(&local9);
frost$io$File$init$frost$core$String($tmp558, $tmp559);
*(&local32) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
frost$io$File* $tmp560 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local32) = $tmp558;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:243
frost$collections$Array* $tmp561 = *(&local1);
frost$io$File* $tmp562 = *(&local32);
frost$collections$Array$add$frost$collections$Array$T($tmp561, ((frost$core$Object*) $tmp562));
frost$io$File* $tmp563 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
*(&local32) = ((frost$io$File*) NULL);
goto block80;
block81:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:246
frost$core$String* $tmp564 = *(&local9);
frost$core$String* $tmp565 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s566, $tmp564);
frost$core$String* $tmp567 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp565, &$s568);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:246:47
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String($tmp567);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
// begin inline call to method frost.io.Console.printErrorLine() from Console.stub:46:15
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:58
frost$io$Console$printError$frost$core$String(&$s569);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:247
frost$core$Int64 $tmp570 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp570);
goto block80;
block80:;
goto block5;
block5:;
frost$core$String* $tmp571 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
*(&local9) = ((frost$core$String*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:252
org$frostlang$frostc$Main$Format$nullable $tmp572 = *(&local6);
frost$core$Bit $tmp573 = frost$core$Bit$init$builtin_bit(!$tmp572.nonnull);
bool $tmp574 = $tmp573.value;
if ($tmp574) goto block84; else goto block86;
block86:;
org$frostlang$frostc$Main$Format$nullable $tmp575 = *(&local6);
frost$core$Equatable* $tmp576;
if ($tmp575.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp577;
    $tmp577 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp577->value = ((org$frostlang$frostc$Main$Format) $tmp575.value);
    $tmp576 = ((frost$core$Equatable*) $tmp577);
}
else {
    $tmp576 = NULL;
}
frost$core$Int64 $tmp578 = (frost$core$Int64) {6};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int64):org.frostlang.frostc.Main.Format from Main.frost:252:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int64* $tmp579 = &(&local34)->$rawValue;
*$tmp579 = $tmp578;
org$frostlang$frostc$Main$Format $tmp580 = *(&local34);
*(&local33) = $tmp580;
org$frostlang$frostc$Main$Format $tmp581 = *(&local33);
org$frostlang$frostc$Main$Format$wrapper* $tmp582;
$tmp582 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp582->value = $tmp581;
ITable* $tmp583 = $tmp576->$class->itable;
while ($tmp583->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp583 = $tmp583->next;
}
$fn585 $tmp584 = $tmp583->methods[1];
frost$core$Bit $tmp586 = $tmp584($tmp576, ((frost$core$Equatable*) $tmp582));
bool $tmp587 = $tmp586.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp582)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
if ($tmp587) goto block84; else goto block85;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:253
frost$collections$Array* $tmp588 = *(&local2);
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp589 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp590 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp589, $tmp590);
frost$io$File* $tmp591 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp589, &$s592);
frost$collections$Array$add$frost$collections$Array$T($tmp588, ((frost$core$Object*) $tmp591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
goto block85;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:255
frost$collections$Array* $tmp593 = *(&local2);
frost$io$File** $tmp594 = &param0->frostHome;
frost$io$File* $tmp595 = *$tmp594;
frost$collections$Array$add$frost$collections$Array$T($tmp593, ((frost$core$Object*) $tmp595));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:256
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp596 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp597 = org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp596, $tmp597);
*(&local35) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$io$File* $tmp598 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local35) = $tmp596;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:257
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp599 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp599, &$s600);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
frost$io$File** $tmp601 = &param0->clang;
frost$io$File* $tmp602 = *$tmp601;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
frost$io$File** $tmp603 = &param0->clang;
*$tmp603 = $tmp599;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:258
frost$collections$Array* $tmp604 = *(&local1);
ITable* $tmp605 = ((frost$collections$CollectionView*) $tmp604)->$class->itable;
while ($tmp605->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp605 = $tmp605->next;
}
$fn607 $tmp606 = $tmp605->methods[0];
frost$core$Int64 $tmp608 = $tmp606(((frost$collections$CollectionView*) $tmp604));
frost$core$Int64 $tmp609 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:258:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp610 = $tmp608.value;
int64_t $tmp611 = $tmp609.value;
bool $tmp612 = $tmp610 == $tmp611;
frost$core$Bit $tmp613 = frost$core$Bit$init$builtin_bit($tmp612);
bool $tmp614 = $tmp613.value;
if ($tmp614) goto block88; else goto block89;
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:259
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:259:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String(&$s615);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
// begin inline call to method frost.io.Console.printErrorLine() from Console.stub:46:15
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:58
frost$io$Console$printError$frost$core$String(&$s616);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:260
frost$core$Int64 $tmp617 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp617);
goto block89;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:262
org$frostlang$frostc$Main$Format$nullable $tmp618 = *(&local6);
frost$core$Bit $tmp619 = frost$core$Bit$init$builtin_bit(!$tmp618.nonnull);
bool $tmp620 = $tmp619.value;
if ($tmp620) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:263
frost$core$Int64 $tmp621 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int64):org.frostlang.frostc.Main.Format from Main.frost:263:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int64* $tmp622 = &(&local37)->$rawValue;
*$tmp622 = $tmp621;
org$frostlang$frostc$Main$Format $tmp623 = *(&local37);
*(&local36) = $tmp623;
org$frostlang$frostc$Main$Format $tmp624 = *(&local36);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp624, true });
goto block94;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:265
frost$io$File* $tmp625 = *(&local3);
frost$core$Bit $tmp626 = frost$core$Bit$init$builtin_bit($tmp625 == NULL);
bool $tmp627 = $tmp626.value;
if ($tmp627) goto block96; else goto block97;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:266
frost$collections$Array* $tmp628 = *(&local1);
ITable* $tmp629 = ((frost$collections$CollectionView*) $tmp628)->$class->itable;
while ($tmp629->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp629 = $tmp629->next;
}
$fn631 $tmp630 = $tmp629->methods[0];
frost$core$Int64 $tmp632 = $tmp630(((frost$collections$CollectionView*) $tmp628));
frost$core$Int64 $tmp633 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:266:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp634 = $tmp632.value;
int64_t $tmp635 = $tmp633.value;
bool $tmp636 = $tmp634 == $tmp635;
frost$core$Bit $tmp637 = frost$core$Bit$init$builtin_bit($tmp636);
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block98; else goto block100;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:267
*(&local38) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:268
org$frostlang$frostc$Main$Format$nullable $tmp639 = *(&local6);
frost$core$Int64 $tmp640 = ((org$frostlang$frostc$Main$Format) $tmp639.value).$rawValue;
frost$core$Int64 $tmp641 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:269:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp642 = $tmp640.value;
int64_t $tmp643 = $tmp641.value;
bool $tmp644 = $tmp642 == $tmp643;
frost$core$Bit $tmp645 = frost$core$Bit$init$builtin_bit($tmp644);
bool $tmp646 = $tmp645.value;
if ($tmp646) goto block103; else goto block104;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:269
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s647));
frost$core$String* $tmp648 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
*(&local38) = &$s649;
goto block102;
block104:;
frost$core$Int64 $tmp650 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:270:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp651 = $tmp640.value;
int64_t $tmp652 = $tmp650.value;
bool $tmp653 = $tmp651 == $tmp652;
frost$core$Bit $tmp654 = frost$core$Bit$init$builtin_bit($tmp653);
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block106; else goto block107;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:270
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s656));
frost$core$String* $tmp657 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
*(&local38) = &$s658;
goto block102;
block107:;
frost$core$Int64 $tmp659 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:271:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp660 = $tmp640.value;
int64_t $tmp661 = $tmp659.value;
bool $tmp662 = $tmp660 == $tmp661;
frost$core$Bit $tmp663 = frost$core$Bit$init$builtin_bit($tmp662);
bool $tmp664 = $tmp663.value;
if ($tmp664) goto block109; else goto block110;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:271
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s665));
frost$core$String* $tmp666 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
*(&local38) = &$s667;
goto block102;
block110:;
frost$core$Int64 $tmp668 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:272:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp669 = $tmp640.value;
int64_t $tmp670 = $tmp668.value;
bool $tmp671 = $tmp669 == $tmp670;
frost$core$Bit $tmp672 = frost$core$Bit$init$builtin_bit($tmp671);
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block112; else goto block113;
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:272
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s674));
frost$core$String* $tmp675 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local38) = &$s676;
goto block102;
block113:;
frost$core$Int64 $tmp677 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:273:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp678 = $tmp640.value;
int64_t $tmp679 = $tmp677.value;
bool $tmp680 = $tmp678 == $tmp679;
frost$core$Bit $tmp681 = frost$core$Bit$init$builtin_bit($tmp680);
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block115; else goto block116;
block115:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:273
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s683));
frost$core$String* $tmp684 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
*(&local38) = &$s685;
goto block102;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:275
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:275:47
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String(&$s686);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
// begin inline call to method frost.io.Console.printErrorLine() from Console.stub:46:15
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:58
frost$io$Console$printError$frost$core$String(&$s687);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:277
frost$core$Int64 $tmp688 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp688);
goto block102;
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:280
frost$collections$Array* $tmp689 = *(&local1);
frost$core$Int64 $tmp690 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Main.frost:280:35
frost$core$Int64 $tmp691 = (frost$core$Int64) {0};
int64_t $tmp692 = $tmp690.value;
int64_t $tmp693 = $tmp691.value;
bool $tmp694 = $tmp692 >= $tmp693;
frost$core$Bit $tmp695 = (frost$core$Bit) {$tmp694};
bool $tmp696 = $tmp695.value;
if ($tmp696) goto block123; else goto block122;
block123:;
ITable* $tmp697 = ((frost$collections$CollectionView*) $tmp689)->$class->itable;
while ($tmp697->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp697 = $tmp697->next;
}
$fn699 $tmp698 = $tmp697->methods[0];
frost$core$Int64 $tmp700 = $tmp698(((frost$collections$CollectionView*) $tmp689));
int64_t $tmp701 = $tmp690.value;
int64_t $tmp702 = $tmp700.value;
bool $tmp703 = $tmp701 < $tmp702;
frost$core$Bit $tmp704 = (frost$core$Bit) {$tmp703};
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block121; else goto block122;
block122:;
frost$core$Int64 $tmp706 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s707, $tmp706, &$s708);
abort(); // unreachable
block121:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp709 = &$tmp689->data;
frost$core$Object** $tmp710 = *$tmp709;
int64_t $tmp711 = $tmp690.value;
frost$core$Object* $tmp712 = $tmp710[$tmp711];
frost$core$Frost$ref$frost$core$Object$Q($tmp712);
frost$core$String* $tmp713 = *(&local38);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:280:52
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:54
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.stub:54:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:27
frost$io$File* $tmp714 = frost$io$File$resolve$frost$core$String$R$frost$io$File(((frost$io$File*) $tmp712), &$s715);
frost$core$String** $tmp716 = &$tmp714->path;
frost$core$String* $tmp717 = *$tmp716;
frost$core$String* $tmp718 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp717);
*(&local40) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
frost$core$String* $tmp719 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
*(&local40) = $tmp718;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:28
frost$core$String* $tmp720 = *(&local40);
frost$core$Bit $tmp721 = frost$core$Bit$init$builtin_bit($tmp720 == NULL);
bool $tmp722 = $tmp721.value;
if ($tmp722) goto block126; else goto block127;
block126:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp723 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local40) = ((frost$core$String*) NULL);
*(&local39) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block125;
block127:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:31
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp724 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp725 = *(&local40);
frost$io$File$init$frost$core$String($tmp724, $tmp725);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
frost$core$String* $tmp726 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local40) = ((frost$core$String*) NULL);
*(&local39) = $tmp724;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
goto block125;
block125:;
frost$io$File* $tmp727 = *(&local39);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.stub:54:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:45
frost$core$String* $tmp728 = frost$io$File$get_name$R$frost$core$String(((frost$io$File*) $tmp712));
*(&local42) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
frost$core$String* $tmp729 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
*(&local42) = $tmp728;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:46
frost$core$String* $tmp730 = *(&local42);
frost$core$String$Index$nullable $tmp731 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp730, &$s732);
*(&local43) = $tmp731;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:47
frost$core$String$Index$nullable $tmp733 = *(&local43);
frost$core$Bit $tmp734 = frost$core$Bit$init$builtin_bit(!$tmp733.nonnull);
bool $tmp735 = $tmp734.value;
if ($tmp735) goto block129; else goto block130;
block129:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:48
frost$core$String* $tmp736 = *(&local42);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
frost$core$String* $tmp737 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
*(&local42) = ((frost$core$String*) NULL);
*(&local41) = $tmp736;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
goto block128;
block130:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:50
frost$core$String* $tmp738 = *(&local42);
frost$core$String$Index$nullable $tmp739 = *(&local43);
frost$core$Bit $tmp740 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp741 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp739, $tmp740);
frost$core$String* $tmp742 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp738, $tmp741);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
frost$core$String* $tmp743 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local42) = ((frost$core$String*) NULL);
*(&local41) = $tmp742;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
goto block128;
block128:;
frost$core$String* $tmp744 = *(&local41);
frost$core$String* $tmp745 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp744, $tmp713);
frost$io$File* $tmp746 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp727, $tmp745);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
frost$core$String* $tmp747 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
*(&local41) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
frost$io$File* $tmp748 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
*(&local39) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$io$File* $tmp749 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local3) = $tmp746;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$Frost$unref$frost$core$Object$Q($tmp712);
frost$core$String* $tmp750 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local38) = ((frost$core$String*) NULL);
goto block99;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:282
org$frostlang$frostc$Main$Format$nullable $tmp751 = *(&local6);
frost$core$Equatable* $tmp752;
if ($tmp751.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp753;
    $tmp753 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp753->value = ((org$frostlang$frostc$Main$Format) $tmp751.value);
    $tmp752 = ((frost$core$Equatable*) $tmp753);
}
else {
    $tmp752 = NULL;
}
frost$core$Int64 $tmp754 = (frost$core$Int64) {5};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int64):org.frostlang.frostc.Main.Format from Main.frost:282:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int64* $tmp755 = &(&local45)->$rawValue;
*$tmp755 = $tmp754;
org$frostlang$frostc$Main$Format $tmp756 = *(&local45);
*(&local44) = $tmp756;
org$frostlang$frostc$Main$Format $tmp757 = *(&local44);
org$frostlang$frostc$Main$Format$wrapper* $tmp758;
$tmp758 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp758->value = $tmp757;
ITable* $tmp759 = $tmp752->$class->itable;
while ($tmp759->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp759 = $tmp759->next;
}
$fn761 $tmp760 = $tmp759->methods[0];
frost$core$Bit $tmp762 = $tmp760($tmp752, ((frost$core$Equatable*) $tmp758));
bool $tmp763 = $tmp762.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp758)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
if ($tmp763) goto block131; else goto block133;
block131:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:283
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:283:39
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String(&$s764);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
// begin inline call to method frost.io.Console.printErrorLine() from Console.stub:46:15
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:58
frost$io$Console$printError$frost$core$String(&$s765);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:284
frost$core$Int64 $tmp766 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp766);
goto block132;
block133:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:287
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:287:39
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String(&$s767);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
// begin inline call to method frost.io.Console.printErrorLine() from Console.stub:46:15
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:58
frost$io$Console$printError$frost$core$String(&$s768);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:289
frost$core$Int64 $tmp769 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp769);
goto block132;
block132:;
goto block99;
block99:;
goto block97;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:292
frost$core$Int64 $tmp770 = (frost$core$Int64) {0};
*(&local46) = $tmp770;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:293
frost$core$Int64 $tmp771 = (frost$core$Int64) {0};
*(&local47) = $tmp771;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:295
*(&local48) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:296
org$frostlang$frostc$Main$Format$nullable $tmp772 = *(&local6);
frost$core$Int64 $tmp773 = ((org$frostlang$frostc$Main$Format) $tmp772.value).$rawValue;
frost$core$Int64 $tmp774 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:297:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp775 = $tmp773.value;
int64_t $tmp776 = $tmp774.value;
bool $tmp777 = $tmp775 == $tmp776;
frost$core$Bit $tmp778 = frost$core$Bit$init$builtin_bit($tmp777);
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block140; else goto block141;
block141:;
frost$core$Int64 $tmp780 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:297:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp781 = $tmp773.value;
int64_t $tmp782 = $tmp780.value;
bool $tmp783 = $tmp781 == $tmp782;
frost$core$Bit $tmp784 = frost$core$Bit$init$builtin_bit($tmp783);
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block140; else goto block143;
block143:;
frost$core$Int64 $tmp786 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:297:60
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp787 = $tmp773.value;
int64_t $tmp788 = $tmp786.value;
bool $tmp789 = $tmp787 == $tmp788;
frost$core$Bit $tmp790 = frost$core$Bit$init$builtin_bit($tmp789);
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block140; else goto block145;
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:298
*(&local49) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:299
FROST_ASSERT(248 == sizeof(org$frostlang$frostc$LLVMCodeGenerator));
org$frostlang$frostc$LLVMCodeGenerator* $tmp792 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(248, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
frost$core$String* $tmp793 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
frost$io$File* $tmp794 = *(&local3);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:300:70
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:54
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.stub:54:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:27
frost$io$File* $tmp795 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp794, &$s796);
frost$core$String** $tmp797 = &$tmp795->path;
frost$core$String* $tmp798 = *$tmp797;
frost$core$String* $tmp799 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp798);
*(&local51) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$String* $tmp800 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
*(&local51) = $tmp799;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:28
frost$core$String* $tmp801 = *(&local51);
frost$core$Bit $tmp802 = frost$core$Bit$init$builtin_bit($tmp801 == NULL);
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block151; else goto block152;
block151:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp804 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
*(&local51) = ((frost$core$String*) NULL);
*(&local50) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block150;
block152:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:31
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp805 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp806 = *(&local51);
frost$io$File$init$frost$core$String($tmp805, $tmp806);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
frost$core$String* $tmp807 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
*(&local51) = ((frost$core$String*) NULL);
*(&local50) = $tmp805;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
goto block150;
block150:;
frost$io$File* $tmp808 = *(&local50);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.stub:54:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:45
frost$core$String* $tmp809 = frost$io$File$get_name$R$frost$core$String($tmp794);
*(&local53) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
frost$core$String* $tmp810 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
*(&local53) = $tmp809;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:46
frost$core$String* $tmp811 = *(&local53);
frost$core$String$Index$nullable $tmp812 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp811, &$s813);
*(&local54) = $tmp812;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:47
frost$core$String$Index$nullable $tmp814 = *(&local54);
frost$core$Bit $tmp815 = frost$core$Bit$init$builtin_bit(!$tmp814.nonnull);
bool $tmp816 = $tmp815.value;
if ($tmp816) goto block154; else goto block155;
block154:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:48
frost$core$String* $tmp817 = *(&local53);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
frost$core$String* $tmp818 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local53) = ((frost$core$String*) NULL);
*(&local52) = $tmp817;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
goto block153;
block155:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:50
frost$core$String* $tmp819 = *(&local53);
frost$core$String$Index$nullable $tmp820 = *(&local54);
frost$core$Bit $tmp821 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp822 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp820, $tmp821);
frost$core$String* $tmp823 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp819, $tmp822);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
frost$core$String* $tmp824 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
*(&local53) = ((frost$core$String*) NULL);
*(&local52) = $tmp823;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
goto block153;
block153:;
frost$core$String* $tmp825 = *(&local52);
frost$core$String* $tmp826 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp825, &$s827);
frost$io$File* $tmp828 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp808, $tmp826);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
frost$core$String* $tmp829 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
*(&local52) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
frost$io$File* $tmp830 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
*(&local50) = ((frost$io$File*) NULL);
frost$core$Maybe* $tmp831 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp828);
frost$core$Int64* $tmp832 = &$tmp831->$rawValue;
frost$core$Int64 $tmp833 = *$tmp832;
int64_t $tmp834 = $tmp833.value;
bool $tmp835 = $tmp834 == 0;
if ($tmp835) goto block156; else goto block157;
block157:;
frost$core$Error** $tmp836 = (frost$core$Error**) ($tmp831->$data + 0);
frost$core$Error* $tmp837 = *$tmp836;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local49) = $tmp837;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:303
frost$core$Error* $tmp838 = *(&local49);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:303:47
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:54
$fn840 $tmp839 = ($fn840) ((frost$core$Object*) $tmp838)->$class->vtable[0];
frost$core$String* $tmp841 = $tmp839(((frost$core$Object*) $tmp838));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.stub:54:58
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String($tmp841);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:304
frost$core$Int64 $tmp842 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp842);
goto block148;
block156:;
frost$core$Object** $tmp843 = (frost$core$Object**) ($tmp831->$data + 0);
frost$core$Object* $tmp844 = *$tmp843;
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp792, $tmp793, ((frost$io$OutputStream*) $tmp844));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp792)));
org$frostlang$frostc$CodeGenerator* $tmp845 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
*(&local48) = ((org$frostlang$frostc$CodeGenerator*) $tmp792);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
goto block148;
block148:;
frost$core$Error* $tmp846 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
*(&local49) = ((frost$core$Error*) NULL);
goto block139;
block145:;
frost$core$Int64 $tmp847 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:307:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp848 = $tmp773.value;
int64_t $tmp849 = $tmp847.value;
bool $tmp850 = $tmp848 == $tmp849;
frost$core$Bit $tmp851 = frost$core$Bit$init$builtin_bit($tmp850);
bool $tmp852 = $tmp851.value;
if ($tmp852) goto block160; else goto block161;
block160:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:308
FROST_ASSERT(152 == sizeof(org$frostlang$frostc$HCodeGenerator));
org$frostlang$frostc$HCodeGenerator* $tmp853 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
frost$io$File* $tmp854 = *(&local3);
org$frostlang$frostc$HCodeGenerator$init$frost$io$File($tmp853, $tmp854);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp853)));
org$frostlang$frostc$CodeGenerator* $tmp855 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
*(&local48) = ((org$frostlang$frostc$CodeGenerator*) $tmp853);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
goto block139;
block161:;
frost$core$Int64 $tmp856 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:310:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp857 = $tmp773.value;
int64_t $tmp858 = $tmp856.value;
bool $tmp859 = $tmp857 == $tmp858;
frost$core$Bit $tmp860 = frost$core$Bit$init$builtin_bit($tmp859);
bool $tmp861 = $tmp860.value;
if ($tmp861) goto block163; else goto block164;
block163:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:311
FROST_ASSERT(256 == sizeof(org$frostlang$frostc$CCodeGenerator));
org$frostlang$frostc$CCodeGenerator* $tmp862 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(256, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
frost$io$File* $tmp863 = *(&local3);
org$frostlang$frostc$CCodeGenerator$init$frost$io$File($tmp862, $tmp863);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp862)));
org$frostlang$frostc$CodeGenerator* $tmp864 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
*(&local48) = ((org$frostlang$frostc$CodeGenerator*) $tmp862);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
goto block139;
block164:;
frost$core$Int64 $tmp865 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:313:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp866 = $tmp773.value;
int64_t $tmp867 = $tmp865.value;
bool $tmp868 = $tmp866 == $tmp867;
frost$core$Bit $tmp869 = frost$core$Bit$init$builtin_bit($tmp868);
bool $tmp870 = $tmp869.value;
if ($tmp870) goto block166; else goto block167;
block166:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:314
*(&local55) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:315
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$StubCodeGenerator));
org$frostlang$frostc$StubCodeGenerator* $tmp871 = (org$frostlang$frostc$StubCodeGenerator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$class);
frost$io$File* $tmp872 = *(&local3);
frost$core$Maybe* $tmp873 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp872);
frost$core$Int64* $tmp874 = &$tmp873->$rawValue;
frost$core$Int64 $tmp875 = *$tmp874;
int64_t $tmp876 = $tmp875.value;
bool $tmp877 = $tmp876 == 0;
if ($tmp877) goto block171; else goto block172;
block172:;
frost$core$Error** $tmp878 = (frost$core$Error**) ($tmp873->$data + 0);
frost$core$Error* $tmp879 = *$tmp878;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
*(&local55) = $tmp879;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:318
frost$core$Error* $tmp880 = *(&local55);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:318:47
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:54
$fn882 $tmp881 = ($fn882) ((frost$core$Object*) $tmp880)->$class->vtable[0];
frost$core$String* $tmp883 = $tmp881(((frost$core$Object*) $tmp880));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.stub:54:58
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String($tmp883);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:319
frost$core$Int64 $tmp884 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp884);
goto block170;
block171:;
frost$core$Object** $tmp885 = (frost$core$Object**) ($tmp873->$data + 0);
frost$core$Object* $tmp886 = *$tmp885;
org$frostlang$frostc$StubCodeGenerator$init$frost$io$OutputStream($tmp871, ((frost$io$OutputStream*) $tmp886));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp871)));
org$frostlang$frostc$CodeGenerator* $tmp887 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
*(&local48) = ((org$frostlang$frostc$CodeGenerator*) $tmp871);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
goto block170;
block170:;
frost$core$Error* $tmp888 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
*(&local55) = ((frost$core$Error*) NULL);
goto block139;
block167:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:323
frost$core$Int64 $tmp889 = (frost$core$Int64) {323};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s890, $tmp889);
abort(); // unreachable
block139:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:326
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$Settings));
org$frostlang$frostc$Compiler$Settings* $tmp891 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
frost$io$File** $tmp892 = &param0->frostHome;
frost$io$File* $tmp893 = *$tmp892;
frost$collections$Array* $tmp894 = *(&local2);
frost$core$Int64 $tmp895 = *(&local4);
frost$core$Int64 $tmp896 = *(&local5);
frost$core$Bit* $tmp897 = &param0->debug;
frost$core$Bit $tmp898 = *$tmp897;
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp891, $tmp893, ((frost$collections$ListView*) $tmp894), $tmp895, $tmp896, $tmp898);
*(&local56) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
org$frostlang$frostc$Compiler$Settings* $tmp899 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
*(&local56) = $tmp891;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:328
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp900 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp900);
*(&local57) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$threads$MessageQueue* $tmp901 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
*(&local57) = $tmp900;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:329
FROST_ASSERT(696 == sizeof(org$frostlang$frostc$Compiler));
org$frostlang$frostc$Compiler* $tmp902 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(696, (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
frost$threads$MessageQueue* $tmp903 = *(&local57);
org$frostlang$frostc$CodeGenerator* $tmp904 = *(&local48);
org$frostlang$frostc$Compiler$Settings* $tmp905 = *(&local56);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT$org$frostlang$frostc$CodeGenerator$org$frostlang$frostc$Compiler$Settings($tmp902, $tmp903, $tmp904, $tmp905);
*(&local58) = ((org$frostlang$frostc$Compiler*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
org$frostlang$frostc$Compiler* $tmp906 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
*(&local58) = $tmp902;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:330
org$frostlang$frostc$Main$Format$nullable $tmp907 = *(&local6);
frost$core$Equatable* $tmp908;
if ($tmp907.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp909;
    $tmp909 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp909->value = ((org$frostlang$frostc$Main$Format) $tmp907.value);
    $tmp908 = ((frost$core$Equatable*) $tmp909);
}
else {
    $tmp908 = NULL;
}
frost$core$Int64 $tmp910 = (frost$core$Int64) {5};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int64):org.frostlang.frostc.Main.Format from Main.frost:330:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int64* $tmp911 = &(&local60)->$rawValue;
*$tmp911 = $tmp910;
org$frostlang$frostc$Main$Format $tmp912 = *(&local60);
*(&local59) = $tmp912;
org$frostlang$frostc$Main$Format $tmp913 = *(&local59);
org$frostlang$frostc$Main$Format$wrapper* $tmp914;
$tmp914 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp914->value = $tmp913;
ITable* $tmp915 = $tmp908->$class->itable;
while ($tmp915->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp915 = $tmp915->next;
}
$fn917 $tmp916 = $tmp915->methods[0];
frost$core$Bit $tmp918 = $tmp916($tmp908, ((frost$core$Equatable*) $tmp914));
bool $tmp919 = $tmp918.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp914)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
if ($tmp919) goto block175; else goto block176;
block175:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:331
frost$core$String* $tmp920 = *(&local7);
frost$core$Bit $tmp921 = frost$core$Bit$init$builtin_bit($tmp920 == NULL);
bool $tmp922 = $tmp921.value;
if ($tmp922) goto block178; else goto block179;
block178:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:332
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s923));
frost$core$String* $tmp924 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
*(&local7) = &$s923;
goto block179;
block179:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:334
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$HTMLProcessor));
org$frostlang$frostc$HTMLProcessor* $tmp925 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
org$frostlang$frostc$Compiler* $tmp926 = *(&local58);
org$frostlang$frostc$HTMLProcessor$init$org$frostlang$frostc$Compiler($tmp925, $tmp926);
frost$collections$Array* $tmp927 = *(&local1);
frost$core$Int64 $tmp928 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Main.frost:334:56
frost$core$Int64 $tmp929 = (frost$core$Int64) {0};
int64_t $tmp930 = $tmp928.value;
int64_t $tmp931 = $tmp929.value;
bool $tmp932 = $tmp930 >= $tmp931;
frost$core$Bit $tmp933 = (frost$core$Bit) {$tmp932};
bool $tmp934 = $tmp933.value;
if ($tmp934) goto block183; else goto block182;
block183:;
ITable* $tmp935 = ((frost$collections$CollectionView*) $tmp927)->$class->itable;
while ($tmp935->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp935 = $tmp935->next;
}
$fn937 $tmp936 = $tmp935->methods[0];
frost$core$Int64 $tmp938 = $tmp936(((frost$collections$CollectionView*) $tmp927));
int64_t $tmp939 = $tmp928.value;
int64_t $tmp940 = $tmp938.value;
bool $tmp941 = $tmp939 < $tmp940;
frost$core$Bit $tmp942 = (frost$core$Bit) {$tmp941};
bool $tmp943 = $tmp942.value;
if ($tmp943) goto block181; else goto block182;
block182:;
frost$core$Int64 $tmp944 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s945, $tmp944, &$s946);
abort(); // unreachable
block181:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp947 = &$tmp927->data;
frost$core$Object** $tmp948 = *$tmp947;
int64_t $tmp949 = $tmp928.value;
frost$core$Object* $tmp950 = $tmp948[$tmp949];
frost$core$Frost$ref$frost$core$Object$Q($tmp950);
frost$io$File* $tmp951 = *(&local3);
frost$core$String* $tmp952 = *(&local7);
$fn954 $tmp953 = ($fn954) $tmp925->$class->vtable[3];
$tmp953($tmp925, ((frost$io$File*) $tmp950), $tmp951, $tmp952);
frost$core$Frost$unref$frost$core$Object$Q($tmp950);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:335
org$frostlang$frostc$Compiler* $tmp955 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
*(&local58) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp956 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
*(&local57) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp957 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
*(&local56) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp958 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
*(&local48) = ((org$frostlang$frostc$CodeGenerator*) NULL);
frost$io$File* $tmp959 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
*(&local35) = ((frost$io$File*) NULL);
frost$core$String* $tmp960 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp961 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp962 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp963 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp964 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block176:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:337
frost$core$String* $tmp965 = *(&local7);
frost$core$Bit $tmp966 = frost$core$Bit$init$builtin_bit($tmp965 != NULL);
bool $tmp967 = $tmp966.value;
if ($tmp967) goto block184; else goto block185;
block184:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:338
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:338:39
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:45
frost$io$Console$printError$frost$core$String(&$s968);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:46
// begin inline call to method frost.io.Console.printErrorLine() from Console.stub:46:15
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:58
frost$io$Console$printError$frost$core$String(&$s969);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:339
frost$core$Int64 $tmp970 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp970);
goto block185;
block185:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:341
frost$collections$Array* $tmp971 = *(&local1);
ITable* $tmp972 = ((frost$collections$Iterable*) $tmp971)->$class->itable;
while ($tmp972->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp972 = $tmp972->next;
}
$fn974 $tmp973 = $tmp972->methods[0];
frost$collections$Iterator* $tmp975 = $tmp973(((frost$collections$Iterable*) $tmp971));
goto block188;
block188:;
ITable* $tmp976 = $tmp975->$class->itable;
while ($tmp976->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp976 = $tmp976->next;
}
$fn978 $tmp977 = $tmp976->methods[0];
frost$core$Bit $tmp979 = $tmp977($tmp975);
bool $tmp980 = $tmp979.value;
if ($tmp980) goto block190; else goto block189;
block189:;
*(&local61) = ((frost$io$File*) NULL);
ITable* $tmp981 = $tmp975->$class->itable;
while ($tmp981->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp981 = $tmp981->next;
}
$fn983 $tmp982 = $tmp981->methods[1];
frost$core$Object* $tmp984 = $tmp982($tmp975);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp984)));
frost$io$File* $tmp985 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
*(&local61) = ((frost$io$File*) $tmp984);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:342
org$frostlang$frostc$Compiler* $tmp986 = *(&local58);
frost$io$File* $tmp987 = *(&local61);
frost$collections$ListView* $tmp988 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT($tmp986, $tmp987);
ITable* $tmp989 = ((frost$collections$Iterable*) $tmp988)->$class->itable;
while ($tmp989->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp989 = $tmp989->next;
}
$fn991 $tmp990 = $tmp989->methods[0];
frost$collections$Iterator* $tmp992 = $tmp990(((frost$collections$Iterable*) $tmp988));
goto block191;
block191:;
ITable* $tmp993 = $tmp992->$class->itable;
while ($tmp993->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp993 = $tmp993->next;
}
$fn995 $tmp994 = $tmp993->methods[0];
frost$core$Bit $tmp996 = $tmp994($tmp992);
bool $tmp997 = $tmp996.value;
if ($tmp997) goto block193; else goto block192;
block192:;
*(&local62) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp998 = $tmp992->$class->itable;
while ($tmp998->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp998 = $tmp998->next;
}
$fn1000 $tmp999 = $tmp998->methods[1];
frost$core$Object* $tmp1001 = $tmp999($tmp992);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1001)));
org$frostlang$frostc$ClassDecl* $tmp1002 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
*(&local62) = ((org$frostlang$frostc$ClassDecl*) $tmp1001);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:343
org$frostlang$frostc$Compiler* $tmp1003 = *(&local58);
org$frostlang$frostc$ClassDecl* $tmp1004 = *(&local62);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Main.frost:343:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5942
frost$core$Bit $tmp1005 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp1006 = &$tmp1004->external;
*$tmp1006 = $tmp1005;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5943
frost$collections$Array** $tmp1007 = &$tmp1004->classes;
frost$collections$Array* $tmp1008 = *$tmp1007;
ITable* $tmp1009 = ((frost$collections$Iterable*) $tmp1008)->$class->itable;
while ($tmp1009->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1009 = $tmp1009->next;
}
$fn1011 $tmp1010 = $tmp1009->methods[0];
frost$collections$Iterator* $tmp1012 = $tmp1010(((frost$collections$Iterable*) $tmp1008));
goto block195;
block195:;
ITable* $tmp1013 = $tmp1012->$class->itable;
while ($tmp1013->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1013 = $tmp1013->next;
}
$fn1015 $tmp1014 = $tmp1013->methods[0];
frost$core$Bit $tmp1016 = $tmp1014($tmp1012);
bool $tmp1017 = $tmp1016.value;
if ($tmp1017) goto block197; else goto block196;
block196:;
*(&local63) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1018 = $tmp1012->$class->itable;
while ($tmp1018->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1018 = $tmp1018->next;
}
$fn1020 $tmp1019 = $tmp1018->methods[1];
frost$core$Object* $tmp1021 = $tmp1019($tmp1012);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1021)));
org$frostlang$frostc$ClassDecl* $tmp1022 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
*(&local63) = ((org$frostlang$frostc$ClassDecl*) $tmp1021);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5944
org$frostlang$frostc$ClassDecl* $tmp1023 = *(&local63);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Compiler.frost:5944:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5942
frost$core$Bit $tmp1024 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp1025 = &$tmp1023->external;
*$tmp1025 = $tmp1024;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5943
frost$collections$Array** $tmp1026 = &$tmp1023->classes;
frost$collections$Array* $tmp1027 = *$tmp1026;
ITable* $tmp1028 = ((frost$collections$Iterable*) $tmp1027)->$class->itable;
while ($tmp1028->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1028 = $tmp1028->next;
}
$fn1030 $tmp1029 = $tmp1028->methods[0];
frost$collections$Iterator* $tmp1031 = $tmp1029(((frost$collections$Iterable*) $tmp1027));
goto block199;
block199:;
ITable* $tmp1032 = $tmp1031->$class->itable;
while ($tmp1032->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1032 = $tmp1032->next;
}
$fn1034 $tmp1033 = $tmp1032->methods[0];
frost$core$Bit $tmp1035 = $tmp1033($tmp1031);
bool $tmp1036 = $tmp1035.value;
if ($tmp1036) goto block201; else goto block200;
block200:;
*(&local64) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1037 = $tmp1031->$class->itable;
while ($tmp1037->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1037 = $tmp1037->next;
}
$fn1039 $tmp1038 = $tmp1037->methods[1];
frost$core$Object* $tmp1040 = $tmp1038($tmp1031);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1040)));
org$frostlang$frostc$ClassDecl* $tmp1041 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
*(&local64) = ((org$frostlang$frostc$ClassDecl*) $tmp1040);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5944
org$frostlang$frostc$ClassDecl* $tmp1042 = *(&local64);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl($tmp1003, $tmp1042);
frost$core$Frost$unref$frost$core$Object$Q($tmp1040);
org$frostlang$frostc$ClassDecl* $tmp1043 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
*(&local64) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block199;
block201:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
frost$core$Frost$unref$frost$core$Object$Q($tmp1021);
org$frostlang$frostc$ClassDecl* $tmp1044 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
*(&local63) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block195;
block197:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
frost$core$Frost$unref$frost$core$Object$Q($tmp1001);
org$frostlang$frostc$ClassDecl* $tmp1045 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local62) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block191;
block193:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
frost$core$Frost$unref$frost$core$Object$Q($tmp984);
frost$io$File* $tmp1046 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
*(&local61) = ((frost$io$File*) NULL);
goto block188;
block190:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:346
frost$collections$Array* $tmp1047 = *(&local1);
ITable* $tmp1048 = ((frost$collections$Iterable*) $tmp1047)->$class->itable;
while ($tmp1048->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1048 = $tmp1048->next;
}
$fn1050 $tmp1049 = $tmp1048->methods[0];
frost$collections$Iterator* $tmp1051 = $tmp1049(((frost$collections$Iterable*) $tmp1047));
goto block202;
block202:;
ITable* $tmp1052 = $tmp1051->$class->itable;
while ($tmp1052->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1052 = $tmp1052->next;
}
$fn1054 $tmp1053 = $tmp1052->methods[0];
frost$core$Bit $tmp1055 = $tmp1053($tmp1051);
bool $tmp1056 = $tmp1055.value;
if ($tmp1056) goto block204; else goto block203;
block203:;
*(&local65) = ((frost$io$File*) NULL);
ITable* $tmp1057 = $tmp1051->$class->itable;
while ($tmp1057->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1057 = $tmp1057->next;
}
$fn1059 $tmp1058 = $tmp1057->methods[1];
frost$core$Object* $tmp1060 = $tmp1058($tmp1051);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp1060)));
frost$io$File* $tmp1061 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
*(&local65) = ((frost$io$File*) $tmp1060);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:347
org$frostlang$frostc$Compiler* $tmp1062 = *(&local58);
frost$io$File* $tmp1063 = *(&local65);
// begin inline call to method org.frostlang.frostc.Compiler.compile(file:frost.io.File) from Main.frost:347:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6131
frost$collections$ListView* $tmp1064 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT($tmp1062, $tmp1063);
ITable* $tmp1065 = ((frost$collections$Iterable*) $tmp1064)->$class->itable;
while ($tmp1065->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1065 = $tmp1065->next;
}
$fn1067 $tmp1066 = $tmp1065->methods[0];
frost$collections$Iterator* $tmp1068 = $tmp1066(((frost$collections$Iterable*) $tmp1064));
goto block206;
block206:;
ITable* $tmp1069 = $tmp1068->$class->itable;
while ($tmp1069->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1069 = $tmp1069->next;
}
$fn1071 $tmp1070 = $tmp1069->methods[0];
frost$core$Bit $tmp1072 = $tmp1070($tmp1068);
bool $tmp1073 = $tmp1072.value;
if ($tmp1073) goto block208; else goto block207;
block207:;
*(&local66) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1074 = $tmp1068->$class->itable;
while ($tmp1074->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1074 = $tmp1074->next;
}
$fn1076 $tmp1075 = $tmp1074->methods[1];
frost$core$Object* $tmp1077 = $tmp1075($tmp1068);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1077)));
org$frostlang$frostc$ClassDecl* $tmp1078 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
*(&local66) = ((org$frostlang$frostc$ClassDecl*) $tmp1077);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6132
org$frostlang$frostc$ClassDecl* $tmp1079 = *(&local66);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl($tmp1062, $tmp1079);
frost$core$Frost$unref$frost$core$Object$Q($tmp1077);
org$frostlang$frostc$ClassDecl* $tmp1080 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
*(&local66) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block206;
block208:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$core$Frost$unref$frost$core$Object$Q($tmp1060);
frost$io$File* $tmp1081 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
*(&local65) = ((frost$io$File*) NULL);
goto block202;
block204:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:349
org$frostlang$frostc$Compiler* $tmp1082 = *(&local58);
// begin inline call to method org.frostlang.frostc.Compiler.finish() from Main.frost:349:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6164
goto block210;
block210:;
frost$collections$Array** $tmp1083 = &$tmp1082->pendingClasses;
frost$collections$Array* $tmp1084 = *$tmp1083;
ITable* $tmp1085 = ((frost$collections$CollectionView*) $tmp1084)->$class->itable;
while ($tmp1085->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1085 = $tmp1085->next;
}
$fn1087 $tmp1086 = $tmp1085->methods[0];
frost$core$Int64 $tmp1088 = $tmp1086(((frost$collections$CollectionView*) $tmp1084));
frost$core$Int64 $tmp1089 = (frost$core$Int64) {0};
int64_t $tmp1090 = $tmp1088.value;
int64_t $tmp1091 = $tmp1089.value;
bool $tmp1092 = $tmp1090 > $tmp1091;
frost$core$Bit $tmp1093 = (frost$core$Bit) {$tmp1092};
bool $tmp1094 = $tmp1093.value;
if ($tmp1094) goto block211; else goto block212;
block211:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6165
frost$collections$Array** $tmp1095 = &$tmp1082->pendingClasses;
frost$collections$Array* $tmp1096 = *$tmp1095;
frost$collections$Array** $tmp1097 = &$tmp1082->pendingClasses;
frost$collections$Array* $tmp1098 = *$tmp1097;
ITable* $tmp1099 = ((frost$collections$CollectionView*) $tmp1098)->$class->itable;
while ($tmp1099->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1099 = $tmp1099->next;
}
$fn1101 $tmp1100 = $tmp1099->methods[0];
frost$core$Int64 $tmp1102 = $tmp1100(((frost$collections$CollectionView*) $tmp1098));
frost$core$Int64 $tmp1103 = (frost$core$Int64) {1};
int64_t $tmp1104 = $tmp1102.value;
int64_t $tmp1105 = $tmp1103.value;
int64_t $tmp1106 = $tmp1104 - $tmp1105;
frost$core$Int64 $tmp1107 = (frost$core$Int64) {$tmp1106};
frost$core$Object* $tmp1108 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp1096, $tmp1107);
*(&local67) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1108)));
org$frostlang$frostc$ClassDecl* $tmp1109 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
*(&local67) = ((org$frostlang$frostc$ClassDecl*) $tmp1108);
frost$core$Frost$unref$frost$core$Object$Q($tmp1108);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6166
org$frostlang$frostc$ClassDecl* $tmp1110 = *(&local67);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl($tmp1082, $tmp1110);
org$frostlang$frostc$ClassDecl* $tmp1111 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
*(&local67) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block210;
block212:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6168
org$frostlang$frostc$CodeGenerator** $tmp1112 = &$tmp1082->codeGenerator;
org$frostlang$frostc$CodeGenerator* $tmp1113 = *$tmp1112;
ITable* $tmp1114 = $tmp1113->$class->itable;
while ($tmp1114->$class != (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class) {
    $tmp1114 = $tmp1114->next;
}
$fn1116 $tmp1115 = $tmp1114->methods[5];
$tmp1115($tmp1113);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:350
goto block213;
block213:;
frost$threads$MessageQueue* $tmp1117 = *(&local57);
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Main.frost:350:40
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/threads/MessageQueue.stub:25
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int64 from MessageQueue.stub:25:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/threads/MessageQueue.stub:20
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1118 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1119 = &$tmp1117->lock;
frost$threads$Lock* $tmp1120 = *$tmp1119;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1118, $tmp1120);
*(&local68) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
frost$threads$ScopedLock* $tmp1121 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
*(&local68) = $tmp1118;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/threads/MessageQueue.stub:21
frost$core$Int64* $tmp1122 = &$tmp1117->count;
frost$core$Int64 $tmp1123 = *$tmp1122;
frost$threads$ScopedLock* $tmp1124 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
*(&local68) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int64 $tmp1125 = (frost$core$Int64) {0};
int64_t $tmp1126 = $tmp1123.value;
int64_t $tmp1127 = $tmp1125.value;
bool $tmp1128 = $tmp1126 > $tmp1127;
frost$core$Bit $tmp1129 = (frost$core$Bit) {$tmp1128};
bool $tmp1130 = $tmp1129.value;
if ($tmp1130) goto block214; else goto block215;
block214:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:351
frost$threads$MessageQueue* $tmp1131 = *(&local57);
frost$core$Immutable* $tmp1132 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp1131);
*(&local69) = ((org$frostlang$frostc$Compiler$Message*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Message*) $tmp1132)));
org$frostlang$frostc$Compiler$Message* $tmp1133 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
*(&local69) = ((org$frostlang$frostc$Compiler$Message*) $tmp1132);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:353
org$frostlang$frostc$Compiler$Message* $tmp1134 = *(&local69);
frost$core$Int64* $tmp1135 = &$tmp1134->$rawValue;
frost$core$Int64 $tmp1136 = *$tmp1135;
frost$core$Int64 $tmp1137 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:354:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1138 = $tmp1136.value;
int64_t $tmp1139 = $tmp1137.value;
bool $tmp1140 = $tmp1138 == $tmp1139;
frost$core$Bit $tmp1141 = frost$core$Bit$init$builtin_bit($tmp1140);
bool $tmp1142 = $tmp1141.value;
if ($tmp1142) goto block219; else goto block220;
block219:;
frost$core$String** $tmp1143 = (frost$core$String**) ($tmp1134->$data + 0);
frost$core$String* $tmp1144 = *$tmp1143;
*(&local70) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$core$String* $tmp1145 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local70) = $tmp1144;
frost$core$Int64* $tmp1146 = (frost$core$Int64*) ($tmp1134->$data + 8);
frost$core$Int64 $tmp1147 = *$tmp1146;
*(&local71) = $tmp1147;
frost$core$Int64* $tmp1148 = (frost$core$Int64*) ($tmp1134->$data + 16);
frost$core$Int64 $tmp1149 = *$tmp1148;
*(&local72) = $tmp1149;
frost$core$String** $tmp1150 = (frost$core$String**) ($tmp1134->$data + 24);
frost$core$String* $tmp1151 = *$tmp1150;
*(&local73) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
frost$core$String* $tmp1152 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
*(&local73) = $tmp1151;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:355
frost$core$Int64 $tmp1153 = *(&local46);
frost$core$Int64 $tmp1154 = (frost$core$Int64) {1};
int64_t $tmp1155 = $tmp1153.value;
int64_t $tmp1156 = $tmp1154.value;
int64_t $tmp1157 = $tmp1155 + $tmp1156;
frost$core$Int64 $tmp1158 = (frost$core$Int64) {$tmp1157};
*(&local46) = $tmp1158;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:356
frost$core$String* $tmp1159 = *(&local70);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:356:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
frost$core$String* $tmp1160 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1159, &$s1161);
frost$core$Int64 $tmp1162 = *(&local71);
frost$core$Int64$wrapper* $tmp1163;
$tmp1163 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1163->value = $tmp1162;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:356:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1165 $tmp1164 = ($fn1165) ((frost$core$Object*) $tmp1163)->$class->vtable[0];
frost$core$String* $tmp1166 = $tmp1164(((frost$core$Object*) $tmp1163));
frost$core$String* $tmp1167 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1160, $tmp1166);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$core$String* $tmp1168 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1167, &$s1169);
frost$core$Int64 $tmp1170 = *(&local72);
frost$core$Int64$wrapper* $tmp1171;
$tmp1171 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1171->value = $tmp1170;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:356:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1173 $tmp1172 = ($fn1173) ((frost$core$Object*) $tmp1171)->$class->vtable[0];
frost$core$String* $tmp1174 = $tmp1172(((frost$core$Object*) $tmp1171));
frost$core$String* $tmp1175 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1168, $tmp1174);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
frost$core$String* $tmp1176 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1175, &$s1177);
frost$core$String* $tmp1178 = *(&local73);
frost$core$String* $tmp1179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1176, $tmp1178);
frost$core$String* $tmp1180 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1179, &$s1181);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:356:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp1180);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
// begin inline call to method frost.io.Console.printLine() from Console.stub:26:10
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:38
frost$io$Console$print$frost$core$String(&$s1182);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
frost$core$String* $tmp1183 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
*(&local73) = ((frost$core$String*) NULL);
frost$core$String* $tmp1184 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
*(&local70) = ((frost$core$String*) NULL);
goto block218;
block220:;
frost$core$Int64 $tmp1185 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:358:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1186 = $tmp1136.value;
int64_t $tmp1187 = $tmp1185.value;
bool $tmp1188 = $tmp1186 == $tmp1187;
frost$core$Bit $tmp1189 = frost$core$Bit$init$builtin_bit($tmp1188);
bool $tmp1190 = $tmp1189.value;
if ($tmp1190) goto block227; else goto block218;
block227:;
frost$core$String** $tmp1191 = (frost$core$String**) ($tmp1134->$data + 0);
frost$core$String* $tmp1192 = *$tmp1191;
*(&local74) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
frost$core$String* $tmp1193 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
*(&local74) = $tmp1192;
frost$core$Int64* $tmp1194 = (frost$core$Int64*) ($tmp1134->$data + 8);
frost$core$Int64 $tmp1195 = *$tmp1194;
*(&local75) = $tmp1195;
frost$core$Int64* $tmp1196 = (frost$core$Int64*) ($tmp1134->$data + 16);
frost$core$Int64 $tmp1197 = *$tmp1196;
*(&local76) = $tmp1197;
frost$core$String** $tmp1198 = (frost$core$String**) ($tmp1134->$data + 24);
frost$core$String* $tmp1199 = *$tmp1198;
*(&local77) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
frost$core$String* $tmp1200 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
*(&local77) = $tmp1199;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:359
frost$core$Int64 $tmp1201 = *(&local47);
frost$core$Int64 $tmp1202 = (frost$core$Int64) {1};
int64_t $tmp1203 = $tmp1201.value;
int64_t $tmp1204 = $tmp1202.value;
int64_t $tmp1205 = $tmp1203 + $tmp1204;
frost$core$Int64 $tmp1206 = (frost$core$Int64) {$tmp1205};
*(&local47) = $tmp1206;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:360
frost$core$String* $tmp1207 = *(&local74);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:360:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
frost$core$String* $tmp1208 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1207, &$s1209);
frost$core$Int64 $tmp1210 = *(&local75);
frost$core$Int64$wrapper* $tmp1211;
$tmp1211 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1211->value = $tmp1210;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:360:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1213 $tmp1212 = ($fn1213) ((frost$core$Object*) $tmp1211)->$class->vtable[0];
frost$core$String* $tmp1214 = $tmp1212(((frost$core$Object*) $tmp1211));
frost$core$String* $tmp1215 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1208, $tmp1214);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
frost$core$String* $tmp1216 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1215, &$s1217);
frost$core$Int64 $tmp1218 = *(&local76);
frost$core$Int64$wrapper* $tmp1219;
$tmp1219 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1219->value = $tmp1218;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:360:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1221 $tmp1220 = ($fn1221) ((frost$core$Object*) $tmp1219)->$class->vtable[0];
frost$core$String* $tmp1222 = $tmp1220(((frost$core$Object*) $tmp1219));
frost$core$String* $tmp1223 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1216, $tmp1222);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
frost$core$String* $tmp1224 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1223, &$s1225);
frost$core$String* $tmp1226 = *(&local77);
frost$core$String* $tmp1227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1224, $tmp1226);
frost$core$String* $tmp1228 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1227, &$s1229);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:360:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp1228);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
// begin inline call to method frost.io.Console.printLine() from Console.stub:26:10
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:38
frost$io$Console$print$frost$core$String(&$s1230);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
frost$core$String* $tmp1231 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
*(&local77) = ((frost$core$String*) NULL);
frost$core$String* $tmp1232 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local74) = ((frost$core$String*) NULL);
goto block218;
block218:;
org$frostlang$frostc$Compiler$Message* $tmp1233 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
*(&local69) = ((org$frostlang$frostc$Compiler$Message*) NULL);
goto block213;
block215:;
org$frostlang$frostc$Compiler* $tmp1234 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
*(&local58) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp1235 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
*(&local57) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp1236 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
*(&local56) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp1237 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
*(&local48) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:365
frost$core$Int64 $tmp1238 = *(&local47);
frost$core$Int64 $tmp1239 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:365:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1240 = $tmp1238.value;
int64_t $tmp1241 = $tmp1239.value;
bool $tmp1242 = $tmp1240 == $tmp1241;
frost$core$Bit $tmp1243 = frost$core$Bit$init$builtin_bit($tmp1242);
bool $tmp1244 = $tmp1243.value;
if ($tmp1244) goto block234; else goto block236;
block234:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:367
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:367:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String(&$s1245);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
// begin inline call to method frost.io.Console.printLine() from Console.stub:26:10
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:38
frost$io$Console$print$frost$core$String(&$s1246);
goto block235;
block236:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:369
frost$core$Int64 $tmp1247 = *(&local47);
frost$core$Int64 $tmp1248 = (frost$core$Int64) {0};
int64_t $tmp1249 = $tmp1247.value;
int64_t $tmp1250 = $tmp1248.value;
bool $tmp1251 = $tmp1249 > $tmp1250;
frost$core$Bit $tmp1252 = (frost$core$Bit) {$tmp1251};
bool $tmp1253 = $tmp1252.value;
if ($tmp1253) goto block240; else goto block241;
block240:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:371
frost$core$Int64 $tmp1254 = *(&local47);
frost$core$String* $tmp1255 = frost$core$Int64$get_asString$R$frost$core$String($tmp1254);
frost$core$String* $tmp1256 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1255, &$s1257);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:371:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp1256);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
// begin inline call to method frost.io.Console.printLine() from Console.stub:26:10
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:38
frost$io$Console$print$frost$core$String(&$s1258);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
goto block241;
block241:;
goto block235;
block235:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:373
frost$core$Int64 $tmp1259 = *(&local46);
frost$core$Int64 $tmp1260 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:373:23
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1261 = $tmp1259.value;
int64_t $tmp1262 = $tmp1260.value;
bool $tmp1263 = $tmp1261 == $tmp1262;
frost$core$Bit $tmp1264 = frost$core$Bit$init$builtin_bit($tmp1263);
bool $tmp1265 = $tmp1264.value;
if ($tmp1265) goto block244; else goto block246;
block244:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:374
org$frostlang$frostc$Main$Format$nullable $tmp1266 = *(&local6);
frost$core$Int64 $tmp1267 = ((org$frostlang$frostc$Main$Format) $tmp1266.value).$rawValue;
frost$core$Int64 $tmp1268 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:375:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1269 = $tmp1267.value;
int64_t $tmp1270 = $tmp1268.value;
bool $tmp1271 = $tmp1269 == $tmp1270;
frost$core$Bit $tmp1272 = frost$core$Bit$init$builtin_bit($tmp1271);
bool $tmp1273 = $tmp1272.value;
if ($tmp1273) goto block249; else goto block250;
block249:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:376
frost$io$File* $tmp1274 = *(&local3);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:376:55
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:54
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.stub:54:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:27
frost$io$File* $tmp1275 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1274, &$s1276);
frost$core$String** $tmp1277 = &$tmp1275->path;
frost$core$String* $tmp1278 = *$tmp1277;
frost$core$String* $tmp1279 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp1278);
*(&local79) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
frost$core$String* $tmp1280 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
*(&local79) = $tmp1279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:28
frost$core$String* $tmp1281 = *(&local79);
frost$core$Bit $tmp1282 = frost$core$Bit$init$builtin_bit($tmp1281 == NULL);
bool $tmp1283 = $tmp1282.value;
if ($tmp1283) goto block254; else goto block255;
block254:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp1284 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
*(&local79) = ((frost$core$String*) NULL);
*(&local78) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block253;
block255:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:31
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp1285 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp1286 = *(&local79);
frost$io$File$init$frost$core$String($tmp1285, $tmp1286);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
frost$core$String* $tmp1287 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
*(&local79) = ((frost$core$String*) NULL);
*(&local78) = $tmp1285;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
goto block253;
block253:;
frost$io$File* $tmp1288 = *(&local78);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.stub:54:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:45
frost$core$String* $tmp1289 = frost$io$File$get_name$R$frost$core$String($tmp1274);
*(&local81) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$core$String* $tmp1290 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
*(&local81) = $tmp1289;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:46
frost$core$String* $tmp1291 = *(&local81);
frost$core$String$Index$nullable $tmp1292 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp1291, &$s1293);
*(&local82) = $tmp1292;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:47
frost$core$String$Index$nullable $tmp1294 = *(&local82);
frost$core$Bit $tmp1295 = frost$core$Bit$init$builtin_bit(!$tmp1294.nonnull);
bool $tmp1296 = $tmp1295.value;
if ($tmp1296) goto block257; else goto block258;
block257:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:48
frost$core$String* $tmp1297 = *(&local81);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
frost$core$String* $tmp1298 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
*(&local81) = ((frost$core$String*) NULL);
*(&local80) = $tmp1297;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
goto block256;
block258:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:50
frost$core$String* $tmp1299 = *(&local81);
frost$core$String$Index$nullable $tmp1300 = *(&local82);
frost$core$Bit $tmp1301 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1302 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1300, $tmp1301);
frost$core$String* $tmp1303 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1299, $tmp1302);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
frost$core$String* $tmp1304 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
*(&local81) = ((frost$core$String*) NULL);
*(&local80) = $tmp1303;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
goto block256;
block256:;
frost$core$String* $tmp1305 = *(&local80);
frost$core$String* $tmp1306 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1305, &$s1307);
frost$io$File* $tmp1308 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1288, $tmp1306);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
frost$core$String* $tmp1309 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
*(&local80) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
frost$io$File* $tmp1310 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
*(&local78) = ((frost$io$File*) NULL);
frost$io$File* $tmp1311 = *(&local3);
frost$core$Bit $tmp1312 = *(&local8);
frost$io$File* $tmp1313 = org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp1308, $tmp1311, $tmp1312);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
goto block248;
block250:;
frost$core$Int64 $tmp1314 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:378:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1315 = $tmp1267.value;
int64_t $tmp1316 = $tmp1314.value;
bool $tmp1317 = $tmp1315 == $tmp1316;
frost$core$Bit $tmp1318 = frost$core$Bit$init$builtin_bit($tmp1317);
bool $tmp1319 = $tmp1318.value;
if ($tmp1319) goto block259; else goto block248;
block259:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:379
frost$io$File* $tmp1320 = *(&local3);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:379:51
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:54
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.stub:54:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:27
frost$io$File* $tmp1321 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1320, &$s1322);
frost$core$String** $tmp1323 = &$tmp1321->path;
frost$core$String* $tmp1324 = *$tmp1323;
frost$core$String* $tmp1325 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp1324);
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
frost$core$String* $tmp1326 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
*(&local84) = $tmp1325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:28
frost$core$String* $tmp1327 = *(&local84);
frost$core$Bit $tmp1328 = frost$core$Bit$init$builtin_bit($tmp1327 == NULL);
bool $tmp1329 = $tmp1328.value;
if ($tmp1329) goto block263; else goto block264;
block263:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp1330 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
*(&local84) = ((frost$core$String*) NULL);
*(&local83) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block262;
block264:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:31
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp1331 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp1332 = *(&local84);
frost$io$File$init$frost$core$String($tmp1331, $tmp1332);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
frost$core$String* $tmp1333 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
*(&local84) = ((frost$core$String*) NULL);
*(&local83) = $tmp1331;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
goto block262;
block262:;
frost$io$File* $tmp1334 = *(&local83);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.stub:54:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:45
frost$core$String* $tmp1335 = frost$io$File$get_name$R$frost$core$String($tmp1320);
*(&local86) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
frost$core$String* $tmp1336 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
*(&local86) = $tmp1335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:46
frost$core$String* $tmp1337 = *(&local86);
frost$core$String$Index$nullable $tmp1338 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp1337, &$s1339);
*(&local87) = $tmp1338;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:47
frost$core$String$Index$nullable $tmp1340 = *(&local87);
frost$core$Bit $tmp1341 = frost$core$Bit$init$builtin_bit(!$tmp1340.nonnull);
bool $tmp1342 = $tmp1341.value;
if ($tmp1342) goto block266; else goto block267;
block266:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:48
frost$core$String* $tmp1343 = *(&local86);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
frost$core$String* $tmp1344 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
*(&local86) = ((frost$core$String*) NULL);
*(&local85) = $tmp1343;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
goto block265;
block267:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:50
frost$core$String* $tmp1345 = *(&local86);
frost$core$String$Index$nullable $tmp1346 = *(&local87);
frost$core$Bit $tmp1347 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1348 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1346, $tmp1347);
frost$core$String* $tmp1349 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1345, $tmp1348);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
frost$core$String* $tmp1350 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
*(&local86) = ((frost$core$String*) NULL);
*(&local85) = $tmp1349;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
goto block265;
block265:;
frost$core$String* $tmp1351 = *(&local85);
frost$core$String* $tmp1352 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1351, &$s1353);
frost$io$File* $tmp1354 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1334, $tmp1352);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
frost$core$String* $tmp1355 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
*(&local85) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
frost$io$File* $tmp1356 = *(&local83);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
*(&local83) = ((frost$io$File*) NULL);
frost$io$File* $tmp1357 = *(&local3);
frost$core$Bit $tmp1358 = *(&local8);
frost$io$File* $tmp1359 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp1354, $tmp1357, $tmp1358);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
goto block248;
block248:;
goto block245;
block246:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:384
frost$core$Int64 $tmp1360 = *(&local46);
frost$core$Int64 $tmp1361 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Main.frost:384:27
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1362 = $tmp1360.value;
int64_t $tmp1363 = $tmp1361.value;
bool $tmp1364 = $tmp1362 == $tmp1363;
frost$core$Bit $tmp1365 = frost$core$Bit$init$builtin_bit($tmp1364);
bool $tmp1366 = $tmp1365.value;
if ($tmp1366) goto block268; else goto block270;
block268:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:386
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:386:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String(&$s1367);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
// begin inline call to method frost.io.Console.printLine() from Console.stub:26:10
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:38
frost$io$Console$print$frost$core$String(&$s1368);
goto block269;
block270:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:390
frost$core$Int64 $tmp1369 = *(&local46);
frost$core$String* $tmp1370 = frost$core$Int64$get_asString$R$frost$core$String($tmp1369);
frost$core$String* $tmp1371 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1370, &$s1372);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:390:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp1371);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
// begin inline call to method frost.io.Console.printLine() from Console.stub:26:10
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:38
frost$io$Console$print$frost$core$String(&$s1373);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
goto block269;
block269:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:392
frost$core$Int64 $tmp1374 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp1374);
goto block245;
block245:;
frost$io$File* $tmp1375 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
*(&local35) = ((frost$io$File*) NULL);
frost$core$String* $tmp1376 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp1377 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp1378 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1379 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp1380 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;

}
void frostMain(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:398
ITable* $tmp1381 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp1381->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1381 = $tmp1381->next;
}
$fn1383 $tmp1382 = $tmp1381->methods[0];
frost$core$Int64 $tmp1384 = $tmp1382(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp1385 = (frost$core$Int64) {1};
int64_t $tmp1386 = $tmp1384.value;
int64_t $tmp1387 = $tmp1385.value;
bool $tmp1388 = $tmp1386 > $tmp1387;
frost$core$Bit $tmp1389 = (frost$core$Bit) {$tmp1388};
bool $tmp1390 = $tmp1389.value;
if ($tmp1390) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp1391 = (frost$core$Int64) {1};
ITable* $tmp1392 = param0->$class->itable;
while ($tmp1392->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1392 = $tmp1392->next;
}
$fn1394 $tmp1393 = $tmp1392->methods[0];
frost$core$Object* $tmp1395 = $tmp1393(param0, $tmp1391);
frost$core$Bit $tmp1396 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(((frost$core$String*) $tmp1395), &$s1397);
bool $tmp1398 = $tmp1396.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1395);
if ($tmp1398) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:399
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:400
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Main));
org$frostlang$frostc$Main* $tmp1399 = (org$frostlang$frostc$Main*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp1399);
frost$core$Int64 $tmp1400 = (frost$core$Int64) {1};
frost$core$Bit $tmp1401 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1402 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1400, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1401);
ITable* $tmp1403 = param0->$class->itable;
while ($tmp1403->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1403 = $tmp1403->next;
}
$fn1405 $tmp1404 = $tmp1403->methods[2];
frost$collections$ListView* $tmp1406 = $tmp1404(param0, $tmp1402);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp1399, $tmp1406);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
goto block4;
block5:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:403
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Main));
org$frostlang$frostc$Main* $tmp1407 = (org$frostlang$frostc$Main*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp1407);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp1407, param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
return;

}
void org$frostlang$frostc$Main$cleanup(org$frostlang$frostc$Main* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp1408 = &param0->clang;
frost$io$File* $tmp1409 = *$tmp1408;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
frost$io$File** $tmp1410 = &param0->frostHome;
frost$io$File* $tmp1411 = *$tmp1410;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
return;

}

