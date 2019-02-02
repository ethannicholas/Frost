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
#include "frost/io/InputStream.h"
#include "frost/io/Console.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/io/OutputStream.h"
#include "org/frostlang/frostc/Main/Arguments.h"
#include "org/frostlang/frostc/Main/Format.h"
#include "org/frostlang/frostc/CodeGenerator.h"
#include "org/frostlang/frostc/Compiler/Settings.h"
#include "frost/threads/MessageQueue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Compiler/Message.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Equatable.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/HTMLProcessor.h"
#include "org/frostlang/frostc/LLVMCodeGenerator.h"
#include "org/frostlang/frostc/HCodeGenerator.h"
#include "org/frostlang/frostc/CCodeGenerator.h"
#include "org/frostlang/frostc/StubCodeGenerator.h"
#include "frost/core/Immutable.h"


static frost$core$String $s1;
org$frostlang$frostc$Main$class_type org$frostlang$frostc$Main$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Main$cleanup, org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File, org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File, org$frostlang$frostc$Main$printUsage$frost$io$OutputStream, org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT} };

typedef frost$core$String* (*$fn48)(frost$io$InputStream*);
typedef frost$core$String* (*$fn53)(frost$io$InputStream*);
typedef frost$collections$Iterator* (*$fn100)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn104)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn109)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn174)(frost$io$InputStream*);
typedef frost$core$String* (*$fn179)(frost$io$InputStream*);
typedef frost$core$Error* (*$fn204)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn208)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn211)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn215)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn218)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn222)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn241)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn247)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Maybe* (*$fn270)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$String* (*$fn298)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn313)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn341)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn374)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn428)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn436)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Bit (*$fn468)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn490)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn508)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn562)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn577)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn592)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn686)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn690)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn695)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn703)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn707)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn712)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn722)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn726)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn731)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn876)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn887)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$ListView* (*$fn898)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$Q$GT);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e", 25, -2845835638820544359, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x66\x72\x6f\x73\x74", 7, 156127765601112, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, 1592669972389054298, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x66\x72\x6f\x73\x74\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -2999112433744991273, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x66\x72\x6f\x73\x74\x27\x2e", 38, 893295268838200741, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, -4231800708310477877, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f", 1, 212, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68", 1, 205, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63", 1, 200, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62", 4, 223740247, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, 1555717532905, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62\x73", 5, 22597765062, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 5664749286632577346, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static frost$core$String $s518 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s524 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s526 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s536 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, 15416558793, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, 15416558793, NULL };
static frost$core$String $s545 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static frost$core$String $s565 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static frost$core$String $s567 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static frost$core$String $s583 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static frost$core$String $s621 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s768 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s773 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static frost$core$String $s777 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x77\x61\x72\x6e\x69\x6e\x67\x3a\x20", 11, 1594997818200825075, NULL };
static frost$core$String $s810 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s822 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x77\x61\x72\x6e\x69\x6e\x67", 9, 1627843243923833840, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x61\x72\x6e\x69\x6e\x67\x73", 9, 1453062006337443706, NULL };
static frost$core$String $s845 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s854 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s862 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static frost$core$String $s866 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static frost$core$String $s890 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x72\x65\x70\x65\x61\x74", 7, 156190719979287, NULL };

void org$frostlang$frostc$Main$init(org$frostlang$frostc$Main* param0) {

// line 22
frost$core$Bit $tmp2 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp3 = &param0->debug;
*$tmp3 = $tmp2;
// line 25
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
// line 61
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp9 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp9);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$collections$Array* $tmp10 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
*(&local0) = $tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
// line 62
frost$collections$Array* $tmp11 = *(&local0);
frost$core$String** $tmp12 = &param1->path;
frost$core$String* $tmp13 = *$tmp12;
frost$collections$Array$add$frost$collections$Array$T($tmp11, ((frost$core$Object*) $tmp13));
// line 63
frost$collections$Array* $tmp14 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp14, ((frost$core$Object*) &$s15));
// line 64
frost$collections$Array* $tmp16 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp16, ((frost$core$Object*) &$s17));
// line 65
frost$collections$Array* $tmp18 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp18, ((frost$core$Object*) &$s19));
// line 66
frost$core$Bit* $tmp20 = &param0->debug;
frost$core$Bit $tmp21 = *$tmp20;
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block1:;
// line 67
frost$collections$Array* $tmp23 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp23, ((frost$core$Object*) &$s24));
goto block2;
block2:;
// line 69
frost$collections$Array* $tmp25 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp25, ((frost$core$Object*) &$s26));
// line 70
frost$collections$Array* $tmp27 = *(&local0);
frost$core$String** $tmp28 = &param2->path;
frost$core$String* $tmp29 = *$tmp28;
frost$collections$Array$add$frost$collections$Array$T($tmp27, ((frost$core$Object*) $tmp29));
// line 71
*(&local1) = ((frost$core$System$Process*) NULL);
// line 72
*(&local2) = ((frost$core$Error*) NULL);
// line 73
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
goto block3;
block5:;
frost$core$Object** $tmp42 = (frost$core$Object**) ($tmp35->$data + 0);
frost$core$Object* $tmp43 = *$tmp42;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$System$Process*) $tmp43)));
frost$core$System$Process* $tmp44 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local1) = ((frost$core$System$Process*) $tmp43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// line 74
frost$core$System$Process* $tmp45 = *(&local1);
frost$io$InputStream* $tmp46 = frost$core$System$Process$standardOutput$R$frost$io$InputStream($tmp45);
$fn48 $tmp47 = ($fn48) $tmp46->$class->vtable[14];
frost$core$String* $tmp49 = $tmp47($tmp46);
frost$io$Console$printError$frost$core$String($tmp49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// line 75
frost$core$System$Process* $tmp50 = *(&local1);
frost$io$InputStream* $tmp51 = frost$core$System$Process$standardError$R$frost$io$InputStream($tmp50);
$fn53 $tmp52 = ($fn53) $tmp51->$class->vtable[14];
frost$core$String* $tmp54 = $tmp52($tmp51);
frost$io$Console$printError$frost$core$String($tmp54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
goto block4;
block3:;
// line 78
frost$core$Error* $tmp55 = *(&local2);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp55));
// line 79
frost$core$Int64 $tmp56 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp56);
goto block4;
block4:;
frost$core$Error* $tmp57 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local2) = ((frost$core$Error*) NULL);
// line 81
frost$core$System$Process* $tmp58 = *(&local1);
frost$core$Int64 $tmp59;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp59, $tmp58);
*(&local3) = $tmp59;
// line 82
frost$core$Bit $tmp60 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block7; else goto block8;
block7:;
// line 83
*(&local4) = ((frost$core$Error*) NULL);
// line 84
frost$core$Error* $tmp62 = frost$io$File$delete$R$frost$core$Error$Q(param1);
if ($tmp62 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local4) = $tmp62;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
goto block10;
block9:;
// line 87
frost$core$Error* $tmp63 = *(&local4);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp63));
// line 88
frost$core$Int64 $tmp64 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp64);
goto block10;
block10:;
frost$core$Error* $tmp65 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local4) = ((frost$core$Error*) NULL);
goto block8;
block8:;
// line 91
frost$core$Int64 $tmp66 = *(&local3);
frost$core$Int64 $tmp67 = (frost$core$Int64) {0};
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 != $tmp69;
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block13; else goto block14;
block13:;
// line 92
frost$core$Int64 $tmp73 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp73);
goto block14;
block14:;
// line 94
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp74 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
*(&local1) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp75 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local0) = ((frost$collections$Array*) NULL);
return param2;

}
frost$io$File* org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(org$frostlang$frostc$Main* param0, frost$io$File* param1, frost$io$File* param2, frost$core$Bit param3) {

frost$collections$Array* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$String* local2 = NULL;
frost$io$File* local3 = NULL;
frost$core$String* local4 = NULL;
frost$core$System$Process* local5 = NULL;
frost$core$Error* local6 = NULL;
frost$core$Int64 local7;
frost$core$Error* local8 = NULL;
// line 98
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp76 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp76);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$collections$Array* $tmp77 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local0) = $tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// line 99
frost$collections$Array* $tmp78 = *(&local0);
frost$core$String** $tmp79 = &param1->path;
frost$core$String* $tmp80 = *$tmp79;
frost$collections$Array$add$frost$collections$Array$T($tmp78, ((frost$core$Object*) $tmp80));
// line 100
frost$collections$Array* $tmp81 = *(&local0);
frost$core$String* $tmp82 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$core$String* $tmp83 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s84, $tmp82);
frost$core$String* $tmp85 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp83, &$s86);
frost$collections$Array$add$frost$collections$Array$T($tmp81, ((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// line 101
frost$collections$Array* $tmp87 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp87, ((frost$core$Object*) &$s88));
// line 102
frost$collections$Array* $tmp89 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp89, ((frost$core$Object*) &$s90));
// line 103
frost$collections$Array* $tmp91 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp91, ((frost$core$Object*) &$s92));
// line 104
frost$core$String* $tmp93 = org$frostlang$frostc$Config$icuLibraries$R$frost$core$String();
frost$collections$Array* $tmp94 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp93, &$s95);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$collections$Array* $tmp96 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local1) = $tmp94;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// line 105
frost$collections$Array* $tmp97 = *(&local1);
ITable* $tmp98 = ((frost$collections$Iterable*) $tmp97)->$class->itable;
while ($tmp98->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[0];
frost$collections$Iterator* $tmp101 = $tmp99(((frost$collections$Iterable*) $tmp97));
goto block1;
block1:;
ITable* $tmp102 = $tmp101->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[0];
frost$core$Bit $tmp105 = $tmp103($tmp101);
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$String*) NULL);
ITable* $tmp107 = $tmp101->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[1];
frost$core$Object* $tmp110 = $tmp108($tmp101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp110)));
frost$core$String* $tmp111 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local2) = ((frost$core$String*) $tmp110);
// line 106
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp112 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp113 = *(&local2);
frost$io$File$init$frost$core$String($tmp112, $tmp113);
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$io$File* $tmp114 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local3) = $tmp112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// line 107
frost$collections$Array* $tmp115 = *(&local0);
frost$io$File* $tmp116 = *(&local3);
frost$io$File* $tmp117 = frost$io$File$get_parent$R$frost$io$File$Q($tmp116);
frost$core$String* $tmp118 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s119, ((frost$core$Object*) $tmp117));
frost$collections$Array$add$frost$collections$Array$T($tmp115, ((frost$core$Object*) $tmp118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// line 108
frost$io$File* $tmp120 = *(&local3);
frost$core$String* $tmp121 = frost$io$File$get_simpleName$R$frost$core$String($tmp120);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$String* $tmp122 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
*(&local4) = $tmp121;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// line 109
frost$core$String* $tmp123 = *(&local4);
frost$core$Bit $tmp124 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp123, &$s125);
bool $tmp126 = $tmp124.value;
if ($tmp126) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp127 = (frost$core$Int64) {109};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s128, $tmp127);
abort(); // unreachable
block4:;
// line 110
frost$core$String* $tmp129 = *(&local4);
frost$core$Int64 $tmp130 = (frost$core$Int64) {3};
frost$core$Bit $tmp131 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp132 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp130, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp131);
frost$core$String* $tmp133 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp129, $tmp132);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$String* $tmp134 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local4) = $tmp133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// line 111
frost$collections$Array* $tmp135 = *(&local0);
frost$core$String* $tmp136 = *(&local4);
frost$core$String* $tmp137 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s138, $tmp136);
frost$collections$Array$add$frost$collections$Array$T($tmp135, ((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$String* $tmp139 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
*(&local4) = ((frost$core$String*) NULL);
frost$io$File* $tmp140 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp110);
frost$core$String* $tmp141 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// line 113
frost$collections$Array* $tmp142 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp142, ((frost$core$Object*) &$s143));
// line 114
frost$collections$Array* $tmp144 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp144, ((frost$core$Object*) &$s145));
// line 115
frost$core$Bit* $tmp146 = &param0->debug;
frost$core$Bit $tmp147 = *$tmp146;
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block6; else goto block7;
block6:;
// line 116
frost$collections$Array* $tmp149 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp149, ((frost$core$Object*) &$s150));
goto block7;
block7:;
// line 118
frost$collections$Array* $tmp151 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp151, ((frost$core$Object*) &$s152));
// line 119
frost$collections$Array* $tmp153 = *(&local0);
frost$core$String** $tmp154 = &param2->path;
frost$core$String* $tmp155 = *$tmp154;
frost$collections$Array$add$frost$collections$Array$T($tmp153, ((frost$core$Object*) $tmp155));
// line 120
*(&local5) = ((frost$core$System$Process*) NULL);
// line 121
*(&local6) = ((frost$core$Error*) NULL);
// line 122
frost$io$File** $tmp156 = &param0->clang;
frost$io$File* $tmp157 = *$tmp156;
frost$core$String** $tmp158 = &$tmp157->path;
frost$core$String* $tmp159 = *$tmp158;
frost$collections$Array* $tmp160 = *(&local0);
frost$core$Maybe* $tmp161 = frost$core$System$exec$frost$core$String$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$Maybe$LTfrost$core$System$Process$GT($tmp159, ((frost$collections$ListView*) $tmp160));
frost$core$Int64* $tmp162 = &$tmp161->$rawValue;
frost$core$Int64 $tmp163 = *$tmp162;
int64_t $tmp164 = $tmp163.value;
bool $tmp165 = $tmp164 == 0;
if ($tmp165) goto block10; else goto block11;
block11:;
frost$core$Error** $tmp166 = (frost$core$Error**) ($tmp161->$data + 0);
frost$core$Error* $tmp167 = *$tmp166;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local6) = $tmp167;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
goto block8;
block10:;
frost$core$Object** $tmp168 = (frost$core$Object**) ($tmp161->$data + 0);
frost$core$Object* $tmp169 = *$tmp168;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$System$Process*) $tmp169)));
frost$core$System$Process* $tmp170 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
*(&local5) = ((frost$core$System$Process*) $tmp169);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
// line 123
frost$core$System$Process* $tmp171 = *(&local5);
frost$io$InputStream* $tmp172 = frost$core$System$Process$standardOutput$R$frost$io$InputStream($tmp171);
$fn174 $tmp173 = ($fn174) $tmp172->$class->vtable[14];
frost$core$String* $tmp175 = $tmp173($tmp172);
frost$io$Console$printError$frost$core$String($tmp175);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
// line 124
frost$core$System$Process* $tmp176 = *(&local5);
frost$io$InputStream* $tmp177 = frost$core$System$Process$standardError$R$frost$io$InputStream($tmp176);
$fn179 $tmp178 = ($fn179) $tmp177->$class->vtable[14];
frost$core$String* $tmp180 = $tmp178($tmp177);
frost$io$Console$printError$frost$core$String($tmp180);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
goto block9;
block8:;
// line 127
frost$core$Error* $tmp181 = *(&local6);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp181));
// line 128
frost$core$Int64 $tmp182 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp182);
goto block9;
block9:;
frost$core$Error* $tmp183 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local6) = ((frost$core$Error*) NULL);
// line 130
frost$core$System$Process* $tmp184 = *(&local5);
frost$core$Int64 $tmp185;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp185, $tmp184);
*(&local7) = $tmp185;
// line 131
frost$core$Bit $tmp186 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block12; else goto block13;
block12:;
// line 132
*(&local8) = ((frost$core$Error*) NULL);
// line 133
frost$core$Error* $tmp188 = frost$io$File$delete$R$frost$core$Error$Q(param1);
if ($tmp188 == NULL) goto block16; else goto block17;
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local8) = $tmp188;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
goto block15;
block14:;
// line 136
frost$core$Error* $tmp189 = *(&local8);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp189));
// line 137
frost$core$Int64 $tmp190 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp190);
goto block15;
block15:;
frost$core$Error* $tmp191 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local8) = ((frost$core$Error*) NULL);
goto block13;
block13:;
// line 140
frost$core$Int64 $tmp192 = *(&local7);
frost$core$Int64 $tmp193 = (frost$core$Int64) {0};
int64_t $tmp194 = $tmp192.value;
int64_t $tmp195 = $tmp193.value;
bool $tmp196 = $tmp194 != $tmp195;
frost$core$Bit $tmp197 = (frost$core$Bit) {$tmp196};
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block18; else goto block19;
block18:;
// line 141
frost$core$Int64 $tmp199 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp199);
goto block19;
block19:;
// line 143
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp200 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
*(&local5) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp201 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
*(&local1) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp202 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
*(&local0) = ((frost$collections$Array*) NULL);
return param2;

}
void org$frostlang$frostc$Main$printUsage$frost$io$OutputStream(org$frostlang$frostc$Main* param0, frost$io$OutputStream* param1) {

frost$core$Error* local0 = NULL;
// line 147
*(&local0) = ((frost$core$Error*) NULL);
// line 148
$fn204 $tmp203 = ($fn204) param1->$class->vtable[19];
frost$core$Error* $tmp205 = $tmp203(param1, &$s206);
if ($tmp205 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local0) = $tmp205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// line 149
$fn208 $tmp207 = ($fn208) param1->$class->vtable[21];
frost$core$Error* $tmp209 = $tmp207(param1);
if ($tmp209 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local0) = $tmp209;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
// line 150
$fn211 $tmp210 = ($fn211) param1->$class->vtable[19];
frost$core$Error* $tmp212 = $tmp210(param1, &$s213);
if ($tmp212 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local0) = $tmp212;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
// line 151
$fn215 $tmp214 = ($fn215) param1->$class->vtable[21];
frost$core$Error* $tmp216 = $tmp214(param1);
if ($tmp216 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local0) = $tmp216;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
// line 152
$fn218 $tmp217 = ($fn218) param1->$class->vtable[19];
frost$core$Error* $tmp219 = $tmp217(param1, &$s220);
if ($tmp219 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local0) = $tmp219;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// line 153
$fn222 $tmp221 = ($fn222) param1->$class->vtable[19];
frost$core$Error* $tmp223 = $tmp221(param1, &$s224);
if ($tmp223 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
*(&local0) = $tmp223;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
goto block2;
block1:;
// line 156
frost$core$Int64 $tmp225 = (frost$core$Int64) {156};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s226, $tmp225);
abort(); // unreachable
block2:;
frost$core$Error* $tmp227 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
*(&local0) = ((frost$core$Error*) NULL);
return;

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
frost$core$String* local13 = NULL;
frost$core$String* local14 = NULL;
frost$core$String* local15 = NULL;
frost$io$File* local16 = NULL;
frost$io$File* local17 = NULL;
frost$core$String* local18 = NULL;
frost$core$Int64 local19;
frost$core$Int64 local20;
org$frostlang$frostc$CodeGenerator* local21 = NULL;
frost$core$Error* local22 = NULL;
frost$core$Error* local23 = NULL;
org$frostlang$frostc$Compiler$Settings* local24 = NULL;
frost$threads$MessageQueue* local25 = NULL;
org$frostlang$frostc$Compiler* local26 = NULL;
frost$io$File* local27 = NULL;
org$frostlang$frostc$ClassDecl* local28 = NULL;
frost$io$File* local29 = NULL;
org$frostlang$frostc$Compiler$Message* local30 = NULL;
frost$io$File* local31 = NULL;
org$frostlang$frostc$Position local32;
frost$core$String* local33 = NULL;
frost$io$File* local34 = NULL;
org$frostlang$frostc$Position local35;
frost$core$String* local36 = NULL;
// line 161
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Main$Arguments));
org$frostlang$frostc$Main$Arguments* $tmp228 = (org$frostlang$frostc$Main$Arguments*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Main$Arguments$class);
org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT($tmp228, param1);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
org$frostlang$frostc$Main$Arguments* $tmp229 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local0) = $tmp228;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// line 162
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp230 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp230);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$collections$Array* $tmp231 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local1) = $tmp230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
// line 163
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp232 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp232);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$collections$Array* $tmp233 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
*(&local2) = $tmp232;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
// line 164
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File* $tmp234 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local3) = ((frost$io$File*) NULL);
// line 165
frost$core$Int64 $tmp235 = (frost$core$Int64) {3};
*(&local4) = $tmp235;
// line 166
frost$core$Int64 $tmp236 = (frost$core$Int64) {3};
*(&local5) = $tmp236;
// line 167
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { .nonnull = false });
// line 168
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp237 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
*(&local7) = ((frost$core$String*) NULL);
// line 169
frost$core$Bit $tmp238 = frost$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp238;
// line 170
goto block1;
block1:;
org$frostlang$frostc$Main$Arguments* $tmp239 = *(&local0);
$fn241 $tmp240 = ($fn241) $tmp239->$class->vtable[2];
frost$core$Bit $tmp242 = $tmp240($tmp239);
frost$core$Bit $tmp243 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp242);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block2; else goto block3;
block2:;
// line 171
org$frostlang$frostc$Main$Arguments* $tmp245 = *(&local0);
$fn247 $tmp246 = ($fn247) $tmp245->$class->vtable[3];
frost$core$String* $tmp248 = $tmp246($tmp245);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$core$String* $tmp249 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
*(&local9) = $tmp248;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
// line 172
frost$core$String* $tmp250 = *(&local9);
frost$core$Bit $tmp251 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp250, &$s252);
bool $tmp253 = $tmp251.value;
if ($tmp253) goto block5; else goto block6;
block5:;
// line 174
*(&local10) = ((frost$core$Error*) NULL);
// line 175
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp254 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp254, &$s255);
*(&local11) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
frost$io$File* $tmp256 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local11) = $tmp254;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
// line 176
frost$io$InputStream* $tmp257 = frost$io$Console$inputStream$R$frost$io$InputStream();
frost$io$File* $tmp258 = *(&local11);
frost$core$Maybe* $tmp259 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp258);
frost$core$Int64* $tmp260 = &$tmp259->$rawValue;
frost$core$Int64 $tmp261 = *$tmp260;
int64_t $tmp262 = $tmp261.value;
bool $tmp263 = $tmp262 == 0;
if ($tmp263) goto block9; else goto block10;
block10:;
frost$core$Error** $tmp264 = (frost$core$Error**) ($tmp259->$data + 0);
frost$core$Error* $tmp265 = *$tmp264;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local10) = $tmp265;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$io$File* $tmp266 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local11) = ((frost$io$File*) NULL);
goto block7;
block9:;
frost$core$Object** $tmp267 = (frost$core$Object**) ($tmp259->$data + 0);
frost$core$Object* $tmp268 = *$tmp267;
$fn270 $tmp269 = ($fn270) $tmp257->$class->vtable[17];
frost$core$Maybe* $tmp271 = $tmp269($tmp257, ((frost$io$OutputStream*) $tmp268));
frost$core$Int64* $tmp272 = &$tmp271->$rawValue;
frost$core$Int64 $tmp273 = *$tmp272;
int64_t $tmp274 = $tmp273.value;
bool $tmp275 = $tmp274 == 0;
if ($tmp275) goto block11; else goto block12;
block12:;
frost$core$Error** $tmp276 = (frost$core$Error**) ($tmp271->$data + 0);
frost$core$Error* $tmp277 = *$tmp276;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local10) = $tmp277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$io$File* $tmp278 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
*(&local11) = ((frost$io$File*) NULL);
goto block7;
block11:;
frost$core$Object** $tmp279 = (frost$core$Object**) ($tmp271->$data + 0);
frost$core$Object* $tmp280 = *$tmp279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// line 177
frost$collections$Array* $tmp281 = *(&local1);
frost$io$File* $tmp282 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp281, ((frost$core$Object*) $tmp282));
frost$io$File* $tmp283 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
*(&local11) = ((frost$io$File*) NULL);
goto block8;
block7:;
// line 180
frost$core$Error* $tmp284 = *(&local10);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp284));
// line 181
frost$core$Int64 $tmp285 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp285);
goto block8;
block8:;
frost$core$Error* $tmp286 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local10) = ((frost$core$Error*) NULL);
goto block4;
block6:;
frost$core$Bit $tmp287 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp250, &$s288);
bool $tmp289 = $tmp287.value;
if ($tmp289) goto block13; else goto block14;
block13:;
// line 185
frost$io$File* $tmp290 = *(&local3);
frost$core$Bit $tmp291 = frost$core$Bit$init$builtin_bit($tmp290 != NULL);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block15; else goto block16;
block15:;
// line 186
frost$io$Console$printErrorLine$frost$core$String(&$s293);
// line 187
frost$core$Int64 $tmp294 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp294);
goto block16;
block16:;
// line 189
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp295 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp296 = *(&local0);
$fn298 $tmp297 = ($fn298) $tmp296->$class->vtable[4];
frost$core$String* $tmp299 = $tmp297($tmp296, &$s300);
frost$io$File$init$frost$core$String($tmp295, $tmp299);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$io$File* $tmp301 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local3) = $tmp295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
// line 190
*(&local12) = ((frost$core$Error*) NULL);
// line 191
frost$io$File* $tmp302 = *(&local3);
frost$io$File* $tmp303 = frost$io$File$get_parent$R$frost$io$File$Q($tmp302);
frost$core$Error* $tmp304 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp303);
if ($tmp304 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local12) = $tmp304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
goto block17;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
goto block18;
block17:;
// line 194
frost$core$Error* $tmp305 = *(&local12);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp305));
// line 195
frost$core$Int64 $tmp306 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp306);
goto block18;
block18:;
frost$core$Error* $tmp307 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
*(&local12) = ((frost$core$Error*) NULL);
goto block4;
block14:;
frost$core$Bit $tmp308 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp250, &$s309);
bool $tmp310 = $tmp308.value;
if ($tmp310) goto block21; else goto block22;
block21:;
// line 199
org$frostlang$frostc$Main$Arguments* $tmp311 = *(&local0);
$fn313 $tmp312 = ($fn313) $tmp311->$class->vtable[4];
frost$core$String* $tmp314 = $tmp312($tmp311, &$s315);
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
frost$core$String* $tmp316 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
*(&local13) = $tmp314;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
// line 200
frost$core$String* $tmp317 = *(&local13);
frost$core$Int64$nullable $tmp318 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp317);
*(&local4) = ((frost$core$Int64) $tmp318.value);
// line 201
frost$core$Int64 $tmp319 = *(&local4);
frost$core$Int64 $tmp320 = (frost$core$Int64) {3};
int64_t $tmp321 = $tmp319.value;
int64_t $tmp322 = $tmp320.value;
bool $tmp323 = $tmp321 > $tmp322;
frost$core$Bit $tmp324 = (frost$core$Bit) {$tmp323};
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block23; else goto block25;
block25:;
frost$core$Int64 $tmp326 = *(&local4);
frost$core$Int64 $tmp327 = (frost$core$Int64) {0};
int64_t $tmp328 = $tmp326.value;
int64_t $tmp329 = $tmp327.value;
bool $tmp330 = $tmp328 < $tmp329;
frost$core$Bit $tmp331 = (frost$core$Bit) {$tmp330};
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block23; else goto block24;
block23:;
// line 202
frost$io$Console$printErrorLine$frost$core$String(&$s333);
// line 203
frost$core$Int64 $tmp334 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp334);
goto block24;
block24:;
frost$core$String* $tmp335 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local13) = ((frost$core$String*) NULL);
goto block4;
block22:;
frost$core$Bit $tmp336 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp250, &$s337);
bool $tmp338 = $tmp336.value;
if ($tmp338) goto block26; else goto block27;
block26:;
// line 207
org$frostlang$frostc$Main$Arguments* $tmp339 = *(&local0);
$fn341 $tmp340 = ($fn341) $tmp339->$class->vtable[4];
frost$core$String* $tmp342 = $tmp340($tmp339, &$s343);
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$String* $tmp344 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local14) = $tmp342;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// line 208
frost$core$String* $tmp345 = *(&local14);
frost$core$Int64$nullable $tmp346 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp345);
*(&local5) = ((frost$core$Int64) $tmp346.value);
// line 209
frost$core$Int64 $tmp347 = *(&local5);
frost$core$Int64 $tmp348 = (frost$core$Int64) {3};
int64_t $tmp349 = $tmp347.value;
int64_t $tmp350 = $tmp348.value;
bool $tmp351 = $tmp349 > $tmp350;
frost$core$Bit $tmp352 = (frost$core$Bit) {$tmp351};
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block28; else goto block30;
block30:;
frost$core$Int64 $tmp354 = *(&local5);
frost$core$Int64 $tmp355 = (frost$core$Int64) {0};
int64_t $tmp356 = $tmp354.value;
int64_t $tmp357 = $tmp355.value;
bool $tmp358 = $tmp356 < $tmp357;
frost$core$Bit $tmp359 = (frost$core$Bit) {$tmp358};
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block28; else goto block29;
block28:;
// line 210
frost$io$Console$printErrorLine$frost$core$String(&$s361);
// line 211
frost$core$Int64 $tmp362 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp362);
goto block29;
block29:;
frost$core$String* $tmp363 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local14) = ((frost$core$String*) NULL);
goto block4;
block27:;
frost$core$Bit $tmp364 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp250, &$s365);
bool $tmp366 = $tmp364.value;
if ($tmp366) goto block31; else goto block32;
block31:;
// line 215
org$frostlang$frostc$Main$Format$nullable $tmp367 = *(&local6);
frost$core$Bit $tmp368 = frost$core$Bit$init$builtin_bit($tmp367.nonnull);
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block33; else goto block34;
block33:;
// line 216
frost$io$Console$printErrorLine$frost$core$String(&$s370);
// line 217
frost$core$Int64 $tmp371 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp371);
goto block34;
block34:;
// line 219
org$frostlang$frostc$Main$Arguments* $tmp372 = *(&local0);
$fn374 $tmp373 = ($fn374) $tmp372->$class->vtable[4];
frost$core$String* $tmp375 = $tmp373($tmp372, &$s376);
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$String* $tmp377 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
*(&local15) = $tmp375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
// line 220
frost$core$String* $tmp378 = *(&local15);
frost$core$Bit $tmp379 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp378, &$s380);
bool $tmp381 = $tmp379.value;
if ($tmp381) goto block36; else goto block37;
block36:;
// line 221
frost$core$Int64 $tmp382 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp383 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp382);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp383, true });
goto block35;
block37:;
frost$core$Bit $tmp384 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp378, &$s385);
bool $tmp386 = $tmp384.value;
if ($tmp386) goto block38; else goto block39;
block38:;
// line 222
frost$core$Int64 $tmp387 = (frost$core$Int64) {2};
org$frostlang$frostc$Main$Format $tmp388 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp387);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp388, true });
goto block35;
block39:;
frost$core$Bit $tmp389 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp378, &$s390);
bool $tmp391 = $tmp389.value;
if ($tmp391) goto block40; else goto block41;
block40:;
// line 223
frost$core$Int64 $tmp392 = (frost$core$Int64) {0};
org$frostlang$frostc$Main$Format $tmp393 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp392);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp393, true });
goto block35;
block41:;
frost$core$Bit $tmp394 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp378, &$s395);
bool $tmp396 = $tmp394.value;
if ($tmp396) goto block42; else goto block43;
block42:;
// line 224
frost$core$Int64 $tmp397 = (frost$core$Int64) {3};
org$frostlang$frostc$Main$Format $tmp398 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp397);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp398, true });
goto block35;
block43:;
frost$core$Bit $tmp399 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp378, &$s400);
bool $tmp401 = $tmp399.value;
if ($tmp401) goto block44; else goto block45;
block44:;
// line 225
frost$core$Int64 $tmp402 = (frost$core$Int64) {4};
org$frostlang$frostc$Main$Format $tmp403 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp402);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp403, true });
goto block35;
block45:;
frost$core$Bit $tmp404 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp378, &$s405);
bool $tmp406 = $tmp404.value;
if ($tmp406) goto block46; else goto block47;
block46:;
// line 226
frost$core$Int64 $tmp407 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp408 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp407);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp408, true });
goto block35;
block47:;
frost$core$Bit $tmp409 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp378, &$s410);
bool $tmp411 = $tmp409.value;
if ($tmp411) goto block48; else goto block49;
block48:;
// line 227
frost$core$Int64 $tmp412 = (frost$core$Int64) {6};
org$frostlang$frostc$Main$Format $tmp413 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp412);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp413, true });
goto block35;
block49:;
// line 229
frost$core$String* $tmp414 = *(&local15);
frost$core$String* $tmp415 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s416, $tmp414);
frost$core$String* $tmp417 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp415, &$s418);
frost$io$Console$printErrorLine$frost$core$String($tmp417);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
// line 230
frost$core$Int64 $tmp419 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp419);
goto block35;
block35:;
frost$core$String* $tmp420 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
*(&local15) = ((frost$core$String*) NULL);
goto block4;
block32:;
frost$core$Bit $tmp421 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp250, &$s422);
bool $tmp423 = $tmp421.value;
if ($tmp423) goto block50; else goto block51;
block50:;
// line 235
frost$collections$Array* $tmp424 = *(&local2);
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp425 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp426 = *(&local0);
$fn428 $tmp427 = ($fn428) $tmp426->$class->vtable[4];
frost$core$String* $tmp429 = $tmp427($tmp426, &$s430);
frost$io$File$init$frost$core$String($tmp425, $tmp429);
frost$collections$Array$add$frost$collections$Array$T($tmp424, ((frost$core$Object*) $tmp425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
goto block4;
block51:;
frost$core$Bit $tmp431 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp250, &$s432);
bool $tmp433 = $tmp431.value;
if ($tmp433) goto block52; else goto block53;
block52:;
// line 238
org$frostlang$frostc$Main$Arguments* $tmp434 = *(&local0);
$fn436 $tmp435 = ($fn436) $tmp434->$class->vtable[4];
frost$core$String* $tmp437 = $tmp435($tmp434, &$s438);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$String* $tmp439 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
*(&local7) = $tmp437;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
goto block4;
block53:;
// line 241
frost$core$String* $tmp440 = *(&local9);
frost$core$Bit $tmp441 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp440, &$s442);
bool $tmp443 = $tmp441.value;
if ($tmp443) goto block54; else goto block56;
block54:;
// line 242
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp444 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp445 = *(&local9);
frost$io$File$init$frost$core$String($tmp444, $tmp445);
*(&local16) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$io$File* $tmp446 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
*(&local16) = $tmp444;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
// line 243
frost$collections$Array* $tmp447 = *(&local1);
frost$io$File* $tmp448 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp447, ((frost$core$Object*) $tmp448));
frost$io$File* $tmp449 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local16) = ((frost$io$File*) NULL);
goto block55;
block56:;
// line 1
// line 246
frost$core$String* $tmp450 = *(&local9);
frost$core$String* $tmp451 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s452, $tmp450);
frost$core$String* $tmp453 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp451, &$s454);
frost$io$Console$printErrorLine$frost$core$String($tmp453);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
// line 247
frost$core$Int64 $tmp455 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp455);
goto block55;
block55:;
goto block4;
block4:;
frost$core$String* $tmp456 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local9) = ((frost$core$String*) NULL);
goto block1;
block3:;
// line 252
org$frostlang$frostc$Main$Format$nullable $tmp457 = *(&local6);
frost$core$Bit $tmp458 = frost$core$Bit$init$builtin_bit(!$tmp457.nonnull);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block57; else goto block59;
block59:;
org$frostlang$frostc$Main$Format$nullable $tmp460 = *(&local6);
frost$core$Equatable* $tmp461;
if ($tmp460.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp462;
    $tmp462 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp462->value = ((org$frostlang$frostc$Main$Format) $tmp460.value);
    $tmp461 = ((frost$core$Equatable*) $tmp462);
}
else {
    $tmp461 = NULL;
}
frost$core$Int64 $tmp463 = (frost$core$Int64) {6};
org$frostlang$frostc$Main$Format $tmp464 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp463);
org$frostlang$frostc$Main$Format$wrapper* $tmp465;
$tmp465 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp465->value = $tmp464;
ITable* $tmp466 = $tmp461->$class->itable;
while ($tmp466->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp466 = $tmp466->next;
}
$fn468 $tmp467 = $tmp466->methods[1];
frost$core$Bit $tmp469 = $tmp467($tmp461, ((frost$core$Equatable*) $tmp465));
bool $tmp470 = $tmp469.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp465)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
if ($tmp470) goto block57; else goto block58;
block57:;
// line 253
frost$collections$Array* $tmp471 = *(&local2);
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp472 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp473 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp472, $tmp473);
frost$io$File* $tmp474 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp472, &$s475);
frost$collections$Array$add$frost$collections$Array$T($tmp471, ((frost$core$Object*) $tmp474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
goto block58;
block58:;
// line 255
frost$collections$Array* $tmp476 = *(&local2);
frost$io$File** $tmp477 = &param0->frostHome;
frost$io$File* $tmp478 = *$tmp477;
frost$collections$Array$add$frost$collections$Array$T($tmp476, ((frost$core$Object*) $tmp478));
// line 256
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp479 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp480 = org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp479, $tmp480);
*(&local17) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$io$File* $tmp481 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
*(&local17) = $tmp479;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
// line 257
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp482 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp482, &$s483);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
frost$io$File** $tmp484 = &param0->clang;
frost$io$File* $tmp485 = *$tmp484;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
frost$io$File** $tmp486 = &param0->clang;
*$tmp486 = $tmp482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
// line 258
frost$collections$Array* $tmp487 = *(&local1);
ITable* $tmp488 = ((frost$collections$CollectionView*) $tmp487)->$class->itable;
while ($tmp488->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp488 = $tmp488->next;
}
$fn490 $tmp489 = $tmp488->methods[0];
frost$core$Int64 $tmp491 = $tmp489(((frost$collections$CollectionView*) $tmp487));
frost$core$Int64 $tmp492 = (frost$core$Int64) {0};
frost$core$Bit $tmp493 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp491, $tmp492);
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block60; else goto block61;
block60:;
// line 259
frost$io$Console$printErrorLine$frost$core$String(&$s495);
// line 260
frost$core$Int64 $tmp496 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp496);
goto block61;
block61:;
// line 262
org$frostlang$frostc$Main$Format$nullable $tmp497 = *(&local6);
frost$core$Bit $tmp498 = frost$core$Bit$init$builtin_bit(!$tmp497.nonnull);
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block62; else goto block63;
block62:;
// line 263
frost$core$Int64 $tmp500 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp501 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp500);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp501, true });
goto block63;
block63:;
// line 265
frost$io$File* $tmp502 = *(&local3);
frost$core$Bit $tmp503 = frost$core$Bit$init$builtin_bit($tmp502 == NULL);
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block64; else goto block65;
block64:;
// line 266
frost$collections$Array* $tmp505 = *(&local1);
ITable* $tmp506 = ((frost$collections$CollectionView*) $tmp505)->$class->itable;
while ($tmp506->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp506 = $tmp506->next;
}
$fn508 $tmp507 = $tmp506->methods[0];
frost$core$Int64 $tmp509 = $tmp507(((frost$collections$CollectionView*) $tmp505));
frost$core$Int64 $tmp510 = (frost$core$Int64) {1};
frost$core$Bit $tmp511 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp509, $tmp510);
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block66; else goto block68;
block66:;
// line 267
*(&local18) = ((frost$core$String*) NULL);
// line 268
org$frostlang$frostc$Main$Format$nullable $tmp513 = *(&local6);
frost$core$Int64 $tmp514 = ((org$frostlang$frostc$Main$Format) $tmp513.value).$rawValue;
frost$core$Int64 $tmp515 = (frost$core$Int64) {1};
frost$core$Bit $tmp516 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp514, $tmp515);
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block70; else goto block71;
block70:;
// line 269
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s518));
frost$core$String* $tmp519 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
*(&local18) = &$s520;
goto block69;
block71:;
frost$core$Int64 $tmp521 = (frost$core$Int64) {2};
frost$core$Bit $tmp522 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp514, $tmp521);
bool $tmp523 = $tmp522.value;
if ($tmp523) goto block72; else goto block73;
block72:;
// line 270
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s524));
frost$core$String* $tmp525 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
*(&local18) = &$s526;
goto block69;
block73:;
frost$core$Int64 $tmp527 = (frost$core$Int64) {0};
frost$core$Bit $tmp528 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp514, $tmp527);
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block74; else goto block75;
block74:;
// line 271
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s530));
frost$core$String* $tmp531 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
*(&local18) = &$s532;
goto block69;
block75:;
frost$core$Int64 $tmp533 = (frost$core$Int64) {5};
frost$core$Bit $tmp534 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp514, $tmp533);
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block76; else goto block77;
block76:;
// line 272
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s536));
frost$core$String* $tmp537 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
*(&local18) = &$s538;
goto block69;
block77:;
frost$core$Int64 $tmp539 = (frost$core$Int64) {6};
frost$core$Bit $tmp540 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp514, $tmp539);
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block78; else goto block79;
block78:;
// line 273
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s542));
frost$core$String* $tmp543 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
*(&local18) = &$s544;
goto block69;
block79:;
// line 275
frost$io$Console$printErrorLine$frost$core$String(&$s545);
// line 277
frost$core$Int64 $tmp546 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp546);
goto block69;
block69:;
// line 280
frost$collections$Array* $tmp547 = *(&local1);
frost$core$Int64 $tmp548 = (frost$core$Int64) {0};
frost$core$Object* $tmp549 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp547, $tmp548);
frost$core$String* $tmp550 = *(&local18);
frost$io$File* $tmp551 = frost$io$File$withExtension$frost$core$String$R$frost$io$File(((frost$io$File*) $tmp549), $tmp550);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$io$File* $tmp552 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
*(&local3) = $tmp551;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$core$Frost$unref$frost$core$Object$Q($tmp549);
frost$core$String* $tmp553 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
*(&local18) = ((frost$core$String*) NULL);
goto block67;
block68:;
// line 282
org$frostlang$frostc$Main$Format$nullable $tmp554 = *(&local6);
frost$core$Equatable* $tmp555;
if ($tmp554.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp556;
    $tmp556 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp556->value = ((org$frostlang$frostc$Main$Format) $tmp554.value);
    $tmp555 = ((frost$core$Equatable*) $tmp556);
}
else {
    $tmp555 = NULL;
}
frost$core$Int64 $tmp557 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp558 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp557);
org$frostlang$frostc$Main$Format$wrapper* $tmp559;
$tmp559 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp559->value = $tmp558;
ITable* $tmp560 = $tmp555->$class->itable;
while ($tmp560->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp560 = $tmp560->next;
}
$fn562 $tmp561 = $tmp560->methods[0];
frost$core$Bit $tmp563 = $tmp561($tmp555, ((frost$core$Equatable*) $tmp559));
bool $tmp564 = $tmp563.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp559)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
if ($tmp564) goto block80; else goto block82;
block80:;
// line 283
frost$io$Console$printErrorLine$frost$core$String(&$s565);
// line 284
frost$core$Int64 $tmp566 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp566);
goto block81;
block82:;
// line 1
// line 287
frost$io$Console$printErrorLine$frost$core$String(&$s567);
// line 289
frost$core$Int64 $tmp568 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp568);
goto block81;
block81:;
goto block67;
block67:;
goto block65;
block65:;
// line 292
org$frostlang$frostc$Main$Format$nullable $tmp569 = *(&local6);
frost$core$Equatable* $tmp570;
if ($tmp569.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp571;
    $tmp571 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp571->value = ((org$frostlang$frostc$Main$Format) $tmp569.value);
    $tmp570 = ((frost$core$Equatable*) $tmp571);
}
else {
    $tmp570 = NULL;
}
frost$core$Int64 $tmp572 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp573 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp572);
org$frostlang$frostc$Main$Format$wrapper* $tmp574;
$tmp574 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp574->value = $tmp573;
ITable* $tmp575 = $tmp570->$class->itable;
while ($tmp575->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp575 = $tmp575->next;
}
$fn577 $tmp576 = $tmp575->methods[0];
frost$core$Bit $tmp578 = $tmp576($tmp570, ((frost$core$Equatable*) $tmp574));
bool $tmp579 = $tmp578.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp574)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
if ($tmp579) goto block83; else goto block84;
block83:;
// line 293
frost$core$String* $tmp580 = *(&local7);
frost$core$Bit $tmp581 = frost$core$Bit$init$builtin_bit($tmp580 == NULL);
bool $tmp582 = $tmp581.value;
if ($tmp582) goto block85; else goto block86;
block85:;
// line 294
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s583));
frost$core$String* $tmp584 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
*(&local7) = &$s583;
goto block86;
block86:;
// line 296
FROST_ASSERT(16 == sizeof(org$frostlang$frostc$HTMLProcessor));
org$frostlang$frostc$HTMLProcessor* $tmp585 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(16, (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
org$frostlang$frostc$HTMLProcessor$init($tmp585);
frost$collections$Array* $tmp586 = *(&local1);
frost$core$Int64 $tmp587 = (frost$core$Int64) {0};
frost$core$Object* $tmp588 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp586, $tmp587);
frost$io$File* $tmp589 = *(&local3);
frost$core$String* $tmp590 = *(&local7);
$fn592 $tmp591 = ($fn592) $tmp585->$class->vtable[3];
$tmp591($tmp585, ((frost$io$File*) $tmp588), $tmp589, $tmp590);
frost$core$Frost$unref$frost$core$Object$Q($tmp588);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
// line 297
frost$io$File* $tmp593 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
*(&local17) = ((frost$io$File*) NULL);
frost$core$String* $tmp594 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp595 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp596 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp597 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp598 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block84:;
// line 299
frost$core$String* $tmp599 = *(&local7);
frost$core$Bit $tmp600 = frost$core$Bit$init$builtin_bit($tmp599 != NULL);
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block87; else goto block88;
block87:;
// line 300
frost$io$Console$printErrorLine$frost$core$String(&$s602);
// line 301
frost$core$Int64 $tmp603 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp603);
goto block88;
block88:;
// line 303
frost$core$Int64 $tmp604 = (frost$core$Int64) {0};
*(&local19) = $tmp604;
// line 304
frost$core$Int64 $tmp605 = (frost$core$Int64) {0};
*(&local20) = $tmp605;
// line 1
// line 306
*(&local21) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 307
org$frostlang$frostc$Main$Format$nullable $tmp606 = *(&local6);
frost$core$Int64 $tmp607 = ((org$frostlang$frostc$Main$Format) $tmp606.value).$rawValue;
frost$core$Int64 $tmp608 = (frost$core$Int64) {0};
frost$core$Bit $tmp609 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp607, $tmp608);
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block90; else goto block91;
block91:;
frost$core$Int64 $tmp611 = (frost$core$Int64) {1};
frost$core$Bit $tmp612 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp607, $tmp611);
bool $tmp613 = $tmp612.value;
if ($tmp613) goto block90; else goto block92;
block92:;
frost$core$Int64 $tmp614 = (frost$core$Int64) {2};
frost$core$Bit $tmp615 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp607, $tmp614);
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block90; else goto block93;
block90:;
// line 309
*(&local22) = ((frost$core$Error*) NULL);
// line 310
FROST_ASSERT(240 == sizeof(org$frostlang$frostc$LLVMCodeGenerator));
org$frostlang$frostc$LLVMCodeGenerator* $tmp617 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(240, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
frost$core$String* $tmp618 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
frost$io$File* $tmp619 = *(&local3);
frost$io$File* $tmp620 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp619, &$s621);
frost$core$Maybe* $tmp622 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp620);
frost$core$Int64* $tmp623 = &$tmp622->$rawValue;
frost$core$Int64 $tmp624 = *$tmp623;
int64_t $tmp625 = $tmp624.value;
bool $tmp626 = $tmp625 == 0;
if ($tmp626) goto block96; else goto block97;
block97:;
frost$core$Error** $tmp627 = (frost$core$Error**) ($tmp622->$data + 0);
frost$core$Error* $tmp628 = *$tmp627;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
*(&local22) = $tmp628;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
goto block94;
block96:;
frost$core$Object** $tmp629 = (frost$core$Object**) ($tmp622->$data + 0);
frost$core$Object* $tmp630 = *$tmp629;
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp617, $tmp618, ((frost$io$OutputStream*) $tmp630));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp617)));
org$frostlang$frostc$CodeGenerator* $tmp631 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
*(&local21) = ((org$frostlang$frostc$CodeGenerator*) $tmp617);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
goto block95;
block94:;
// line 314
frost$core$Error* $tmp632 = *(&local22);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp632));
// line 315
frost$core$Int64 $tmp633 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp633);
goto block95;
block95:;
frost$core$Error* $tmp634 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
*(&local22) = ((frost$core$Error*) NULL);
goto block89;
block93:;
frost$core$Int64 $tmp635 = (frost$core$Int64) {3};
frost$core$Bit $tmp636 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp607, $tmp635);
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block98; else goto block99;
block98:;
// line 319
FROST_ASSERT(152 == sizeof(org$frostlang$frostc$HCodeGenerator));
org$frostlang$frostc$HCodeGenerator* $tmp638 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
frost$io$File* $tmp639 = *(&local3);
org$frostlang$frostc$HCodeGenerator$init$frost$io$File($tmp638, $tmp639);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp638)));
org$frostlang$frostc$CodeGenerator* $tmp640 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
*(&local21) = ((org$frostlang$frostc$CodeGenerator*) $tmp638);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
goto block89;
block99:;
frost$core$Int64 $tmp641 = (frost$core$Int64) {4};
frost$core$Bit $tmp642 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp607, $tmp641);
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block100; else goto block101;
block100:;
// line 322
FROST_ASSERT(256 == sizeof(org$frostlang$frostc$CCodeGenerator));
org$frostlang$frostc$CCodeGenerator* $tmp644 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(256, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
frost$io$File* $tmp645 = *(&local3);
org$frostlang$frostc$CCodeGenerator$init$frost$io$File($tmp644, $tmp645);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp644)));
org$frostlang$frostc$CodeGenerator* $tmp646 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
*(&local21) = ((org$frostlang$frostc$CodeGenerator*) $tmp644);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
goto block89;
block101:;
frost$core$Int64 $tmp647 = (frost$core$Int64) {6};
frost$core$Bit $tmp648 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp607, $tmp647);
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block102; else goto block103;
block102:;
// line 325
*(&local23) = ((frost$core$Error*) NULL);
// line 326
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$StubCodeGenerator));
org$frostlang$frostc$StubCodeGenerator* $tmp650 = (org$frostlang$frostc$StubCodeGenerator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$class);
frost$io$File* $tmp651 = *(&local3);
frost$core$Maybe* $tmp652 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp651);
frost$core$Int64* $tmp653 = &$tmp652->$rawValue;
frost$core$Int64 $tmp654 = *$tmp653;
int64_t $tmp655 = $tmp654.value;
bool $tmp656 = $tmp655 == 0;
if ($tmp656) goto block106; else goto block107;
block107:;
frost$core$Error** $tmp657 = (frost$core$Error**) ($tmp652->$data + 0);
frost$core$Error* $tmp658 = *$tmp657;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
*(&local23) = $tmp658;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
goto block104;
block106:;
frost$core$Object** $tmp659 = (frost$core$Object**) ($tmp652->$data + 0);
frost$core$Object* $tmp660 = *$tmp659;
org$frostlang$frostc$StubCodeGenerator$init$frost$io$OutputStream($tmp650, ((frost$io$OutputStream*) $tmp660));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp650)));
org$frostlang$frostc$CodeGenerator* $tmp661 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
*(&local21) = ((org$frostlang$frostc$CodeGenerator*) $tmp650);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
goto block105;
block104:;
// line 329
frost$core$Error* $tmp662 = *(&local23);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp662));
// line 330
frost$core$Int64 $tmp663 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp663);
goto block105;
block105:;
frost$core$Error* $tmp664 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
*(&local23) = ((frost$core$Error*) NULL);
goto block89;
block103:;
// line 334
frost$core$Int64 $tmp665 = (frost$core$Int64) {334};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s666, $tmp665);
abort(); // unreachable
block89:;
// line 337
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$Settings));
org$frostlang$frostc$Compiler$Settings* $tmp667 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
frost$io$File** $tmp668 = &param0->frostHome;
frost$io$File* $tmp669 = *$tmp668;
frost$collections$Array* $tmp670 = *(&local2);
frost$core$Int64 $tmp671 = *(&local4);
frost$core$Int64 $tmp672 = *(&local5);
frost$core$Bit* $tmp673 = &param0->debug;
frost$core$Bit $tmp674 = *$tmp673;
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp667, $tmp669, ((frost$collections$ListView*) $tmp670), $tmp671, $tmp672, $tmp674);
*(&local24) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
org$frostlang$frostc$Compiler$Settings* $tmp675 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local24) = $tmp667;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
// line 339
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp676 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp676);
*(&local25) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
frost$threads$MessageQueue* $tmp677 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
*(&local25) = $tmp676;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
// line 340
FROST_ASSERT(288 == sizeof(org$frostlang$frostc$Compiler));
org$frostlang$frostc$Compiler* $tmp678 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(288, (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
frost$threads$MessageQueue* $tmp679 = *(&local25);
org$frostlang$frostc$CodeGenerator* $tmp680 = *(&local21);
org$frostlang$frostc$Compiler$Settings* $tmp681 = *(&local24);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT$org$frostlang$frostc$CodeGenerator$org$frostlang$frostc$Compiler$Settings($tmp678, $tmp679, $tmp680, $tmp681);
*(&local26) = ((org$frostlang$frostc$Compiler*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
org$frostlang$frostc$Compiler* $tmp682 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local26) = $tmp678;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
// line 341
frost$collections$Array* $tmp683 = *(&local1);
ITable* $tmp684 = ((frost$collections$Iterable*) $tmp683)->$class->itable;
while ($tmp684->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp684 = $tmp684->next;
}
$fn686 $tmp685 = $tmp684->methods[0];
frost$collections$Iterator* $tmp687 = $tmp685(((frost$collections$Iterable*) $tmp683));
goto block108;
block108:;
ITable* $tmp688 = $tmp687->$class->itable;
while ($tmp688->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp688 = $tmp688->next;
}
$fn690 $tmp689 = $tmp688->methods[0];
frost$core$Bit $tmp691 = $tmp689($tmp687);
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block110; else goto block109;
block109:;
*(&local27) = ((frost$io$File*) NULL);
ITable* $tmp693 = $tmp687->$class->itable;
while ($tmp693->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp693 = $tmp693->next;
}
$fn695 $tmp694 = $tmp693->methods[1];
frost$core$Object* $tmp696 = $tmp694($tmp687);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp696)));
frost$io$File* $tmp697 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
*(&local27) = ((frost$io$File*) $tmp696);
// line 342
org$frostlang$frostc$Compiler* $tmp698 = *(&local26);
frost$io$File* $tmp699 = *(&local27);
frost$collections$ListView* $tmp700 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT($tmp698, $tmp699);
ITable* $tmp701 = ((frost$collections$Iterable*) $tmp700)->$class->itable;
while ($tmp701->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp701 = $tmp701->next;
}
$fn703 $tmp702 = $tmp701->methods[0];
frost$collections$Iterator* $tmp704 = $tmp702(((frost$collections$Iterable*) $tmp700));
goto block111;
block111:;
ITable* $tmp705 = $tmp704->$class->itable;
while ($tmp705->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp705 = $tmp705->next;
}
$fn707 $tmp706 = $tmp705->methods[0];
frost$core$Bit $tmp708 = $tmp706($tmp704);
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block113; else goto block112;
block112:;
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp710 = $tmp704->$class->itable;
while ($tmp710->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp710 = $tmp710->next;
}
$fn712 $tmp711 = $tmp710->methods[1];
frost$core$Object* $tmp713 = $tmp711($tmp704);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp713)));
org$frostlang$frostc$ClassDecl* $tmp714 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
*(&local28) = ((org$frostlang$frostc$ClassDecl*) $tmp713);
// line 343
org$frostlang$frostc$Compiler* $tmp715 = *(&local26);
org$frostlang$frostc$ClassDecl* $tmp716 = *(&local28);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl($tmp715, $tmp716);
frost$core$Frost$unref$frost$core$Object$Q($tmp713);
org$frostlang$frostc$ClassDecl* $tmp717 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block111;
block113:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q($tmp696);
frost$io$File* $tmp718 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
*(&local27) = ((frost$io$File*) NULL);
goto block108;
block110:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
// line 346
frost$collections$Array* $tmp719 = *(&local1);
ITable* $tmp720 = ((frost$collections$Iterable*) $tmp719)->$class->itable;
while ($tmp720->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp720 = $tmp720->next;
}
$fn722 $tmp721 = $tmp720->methods[0];
frost$collections$Iterator* $tmp723 = $tmp721(((frost$collections$Iterable*) $tmp719));
goto block114;
block114:;
ITable* $tmp724 = $tmp723->$class->itable;
while ($tmp724->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp724 = $tmp724->next;
}
$fn726 $tmp725 = $tmp724->methods[0];
frost$core$Bit $tmp727 = $tmp725($tmp723);
bool $tmp728 = $tmp727.value;
if ($tmp728) goto block116; else goto block115;
block115:;
*(&local29) = ((frost$io$File*) NULL);
ITable* $tmp729 = $tmp723->$class->itable;
while ($tmp729->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp729 = $tmp729->next;
}
$fn731 $tmp730 = $tmp729->methods[1];
frost$core$Object* $tmp732 = $tmp730($tmp723);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp732)));
frost$io$File* $tmp733 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
*(&local29) = ((frost$io$File*) $tmp732);
// line 347
org$frostlang$frostc$Compiler* $tmp734 = *(&local26);
frost$io$File* $tmp735 = *(&local29);
org$frostlang$frostc$Compiler$compile$frost$io$File($tmp734, $tmp735);
frost$core$Frost$unref$frost$core$Object$Q($tmp732);
frost$io$File* $tmp736 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local29) = ((frost$io$File*) NULL);
goto block114;
block116:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
// line 349
org$frostlang$frostc$Compiler* $tmp737 = *(&local26);
org$frostlang$frostc$Compiler$finish($tmp737);
// line 350
goto block117;
block117:;
frost$threads$MessageQueue* $tmp738 = *(&local25);
frost$core$Bit $tmp739 = frost$threads$MessageQueue$hasMessage$R$frost$core$Bit($tmp738);
bool $tmp740 = $tmp739.value;
if ($tmp740) goto block118; else goto block119;
block118:;
// line 351
frost$threads$MessageQueue* $tmp741 = *(&local25);
frost$core$Immutable* $tmp742 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp741);
*(&local30) = ((org$frostlang$frostc$Compiler$Message*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Message*) $tmp742)));
org$frostlang$frostc$Compiler$Message* $tmp743 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local30) = ((org$frostlang$frostc$Compiler$Message*) $tmp742);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
// line 353
org$frostlang$frostc$Compiler$Message* $tmp744 = *(&local30);
frost$core$Int64* $tmp745 = &$tmp744->$rawValue;
frost$core$Int64 $tmp746 = *$tmp745;
frost$core$Int64 $tmp747 = (frost$core$Int64) {0};
frost$core$Bit $tmp748 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp746, $tmp747);
bool $tmp749 = $tmp748.value;
if ($tmp749) goto block121; else goto block122;
block121:;
frost$io$File** $tmp750 = (frost$io$File**) ($tmp744->$data + 0);
frost$io$File* $tmp751 = *$tmp750;
*(&local31) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
frost$io$File* $tmp752 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local31) = $tmp751;
org$frostlang$frostc$Position* $tmp753 = (org$frostlang$frostc$Position*) ($tmp744->$data + 8);
org$frostlang$frostc$Position $tmp754 = *$tmp753;
*(&local32) = $tmp754;
frost$core$String** $tmp755 = (frost$core$String**) ($tmp744->$data + 24);
frost$core$String* $tmp756 = *$tmp755;
*(&local33) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$String* $tmp757 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
*(&local33) = $tmp756;
// line 355
frost$core$Int64 $tmp758 = *(&local19);
frost$core$Int64 $tmp759 = (frost$core$Int64) {1};
int64_t $tmp760 = $tmp758.value;
int64_t $tmp761 = $tmp759.value;
int64_t $tmp762 = $tmp760 + $tmp761;
frost$core$Int64 $tmp763 = (frost$core$Int64) {$tmp762};
*(&local19) = $tmp763;
// line 356
frost$io$File* $tmp764 = *(&local31);
frost$core$String* $tmp765 = frost$io$File$get_name$R$frost$core$String($tmp764);
frost$core$String* $tmp766 = frost$core$String$get_asString$R$frost$core$String($tmp765);
frost$core$String* $tmp767 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp766, &$s768);
org$frostlang$frostc$Position $tmp769 = *(&local32);
org$frostlang$frostc$Position$wrapper* $tmp770;
$tmp770 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp770->value = $tmp769;
frost$core$String* $tmp771 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp767, ((frost$core$Object*) $tmp770));
frost$core$String* $tmp772 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp771, &$s773);
frost$core$String* $tmp774 = *(&local33);
frost$core$String* $tmp775 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp772, $tmp774);
frost$core$String* $tmp776 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp775, &$s777);
frost$io$Console$printLine$frost$core$String($tmp776);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
frost$core$String* $tmp778 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
*(&local33) = ((frost$core$String*) NULL);
frost$io$File* $tmp779 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local31) = ((frost$io$File*) NULL);
goto block120;
block122:;
frost$core$Int64 $tmp780 = (frost$core$Int64) {1};
frost$core$Bit $tmp781 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp746, $tmp780);
bool $tmp782 = $tmp781.value;
if ($tmp782) goto block123; else goto block120;
block123:;
frost$io$File** $tmp783 = (frost$io$File**) ($tmp744->$data + 0);
frost$io$File* $tmp784 = *$tmp783;
*(&local34) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$io$File* $tmp785 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
*(&local34) = $tmp784;
org$frostlang$frostc$Position* $tmp786 = (org$frostlang$frostc$Position*) ($tmp744->$data + 8);
org$frostlang$frostc$Position $tmp787 = *$tmp786;
*(&local35) = $tmp787;
frost$core$String** $tmp788 = (frost$core$String**) ($tmp744->$data + 24);
frost$core$String* $tmp789 = *$tmp788;
*(&local36) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
frost$core$String* $tmp790 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
*(&local36) = $tmp789;
// line 359
frost$core$Int64 $tmp791 = *(&local20);
frost$core$Int64 $tmp792 = (frost$core$Int64) {1};
int64_t $tmp793 = $tmp791.value;
int64_t $tmp794 = $tmp792.value;
int64_t $tmp795 = $tmp793 + $tmp794;
frost$core$Int64 $tmp796 = (frost$core$Int64) {$tmp795};
*(&local20) = $tmp796;
// line 360
frost$io$File* $tmp797 = *(&local34);
frost$core$String* $tmp798 = frost$io$File$get_name$R$frost$core$String($tmp797);
frost$core$String* $tmp799 = frost$core$String$get_asString$R$frost$core$String($tmp798);
frost$core$String* $tmp800 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp799, &$s801);
org$frostlang$frostc$Position $tmp802 = *(&local35);
org$frostlang$frostc$Position$wrapper* $tmp803;
$tmp803 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp803->value = $tmp802;
frost$core$String* $tmp804 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp800, ((frost$core$Object*) $tmp803));
frost$core$String* $tmp805 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp804, &$s806);
frost$core$String* $tmp807 = *(&local36);
frost$core$String* $tmp808 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp805, $tmp807);
frost$core$String* $tmp809 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp808, &$s810);
frost$io$Console$printLine$frost$core$String($tmp809);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$String* $tmp811 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
*(&local36) = ((frost$core$String*) NULL);
frost$io$File* $tmp812 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
*(&local34) = ((frost$io$File*) NULL);
goto block120;
block120:;
org$frostlang$frostc$Compiler$Message* $tmp813 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
*(&local30) = ((org$frostlang$frostc$Compiler$Message*) NULL);
goto block117;
block119:;
org$frostlang$frostc$Compiler* $tmp814 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
*(&local26) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp815 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
*(&local25) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp816 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
*(&local24) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp817 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local21) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 365
frost$core$Int64 $tmp818 = *(&local20);
frost$core$Int64 $tmp819 = (frost$core$Int64) {1};
frost$core$Bit $tmp820 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp818, $tmp819);
bool $tmp821 = $tmp820.value;
if ($tmp821) goto block124; else goto block126;
block124:;
// line 367
frost$io$Console$printLine$frost$core$String(&$s822);
goto block125;
block126:;
// line 369
frost$core$Int64 $tmp823 = *(&local20);
frost$core$Int64 $tmp824 = (frost$core$Int64) {0};
int64_t $tmp825 = $tmp823.value;
int64_t $tmp826 = $tmp824.value;
bool $tmp827 = $tmp825 > $tmp826;
frost$core$Bit $tmp828 = (frost$core$Bit) {$tmp827};
bool $tmp829 = $tmp828.value;
if ($tmp829) goto block127; else goto block128;
block127:;
// line 371
frost$core$Int64 $tmp830 = *(&local20);
frost$core$String* $tmp831 = frost$core$Int64$get_asString$R$frost$core$String($tmp830);
frost$core$String* $tmp832 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp831, &$s833);
frost$io$Console$printLine$frost$core$String($tmp832);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
goto block128;
block128:;
goto block125;
block125:;
// line 373
frost$core$Int64 $tmp834 = *(&local19);
frost$core$Int64 $tmp835 = (frost$core$Int64) {0};
frost$core$Bit $tmp836 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp834, $tmp835);
bool $tmp837 = $tmp836.value;
if ($tmp837) goto block129; else goto block131;
block129:;
// line 374
org$frostlang$frostc$Main$Format$nullable $tmp838 = *(&local6);
frost$core$Int64 $tmp839 = ((org$frostlang$frostc$Main$Format) $tmp838.value).$rawValue;
frost$core$Int64 $tmp840 = (frost$core$Int64) {1};
frost$core$Bit $tmp841 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp839, $tmp840);
bool $tmp842 = $tmp841.value;
if ($tmp842) goto block133; else goto block134;
block133:;
// line 376
frost$io$File* $tmp843 = *(&local3);
frost$io$File* $tmp844 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp843, &$s845);
frost$io$File* $tmp846 = *(&local3);
frost$core$Bit $tmp847 = *(&local8);
frost$io$File* $tmp848 = org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp844, $tmp846, $tmp847);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
goto block132;
block134:;
frost$core$Int64 $tmp849 = (frost$core$Int64) {2};
frost$core$Bit $tmp850 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp839, $tmp849);
bool $tmp851 = $tmp850.value;
if ($tmp851) goto block135; else goto block132;
block135:;
// line 379
frost$io$File* $tmp852 = *(&local3);
frost$io$File* $tmp853 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp852, &$s854);
frost$io$File* $tmp855 = *(&local3);
frost$core$Bit $tmp856 = *(&local8);
frost$io$File* $tmp857 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp853, $tmp855, $tmp856);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
goto block132;
block132:;
goto block130;
block131:;
// line 1
// line 384
frost$core$Int64 $tmp858 = *(&local19);
frost$core$Int64 $tmp859 = (frost$core$Int64) {1};
frost$core$Bit $tmp860 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp858, $tmp859);
bool $tmp861 = $tmp860.value;
if ($tmp861) goto block136; else goto block138;
block136:;
// line 386
frost$io$Console$printLine$frost$core$String(&$s862);
goto block137;
block138:;
// line 1
// line 390
frost$core$Int64 $tmp863 = *(&local19);
frost$core$String* $tmp864 = frost$core$Int64$get_asString$R$frost$core$String($tmp863);
frost$core$String* $tmp865 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp864, &$s866);
frost$io$Console$printLine$frost$core$String($tmp865);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
goto block137;
block137:;
// line 392
frost$core$Int64 $tmp867 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp867);
goto block130;
block130:;
frost$io$File* $tmp868 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
*(&local17) = ((frost$io$File*) NULL);
frost$core$String* $tmp869 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp870 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp871 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp872 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp873 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;

}
void frostMain(frost$collections$ListView* param0) {

// line 398
frost$core$Frost$disableRefErrorReporting();
// line 399
ITable* $tmp874 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp874->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp874 = $tmp874->next;
}
$fn876 $tmp875 = $tmp874->methods[0];
frost$core$Int64 $tmp877 = $tmp875(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp878 = (frost$core$Int64) {1};
int64_t $tmp879 = $tmp877.value;
int64_t $tmp880 = $tmp878.value;
bool $tmp881 = $tmp879 > $tmp880;
frost$core$Bit $tmp882 = (frost$core$Bit) {$tmp881};
bool $tmp883 = $tmp882.value;
if ($tmp883) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp884 = (frost$core$Int64) {1};
ITable* $tmp885 = param0->$class->itable;
while ($tmp885->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp885 = $tmp885->next;
}
$fn887 $tmp886 = $tmp885->methods[0];
frost$core$Object* $tmp888 = $tmp886(param0, $tmp884);
frost$core$Bit $tmp889 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(((frost$core$String*) $tmp888), &$s890);
bool $tmp891 = $tmp889.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp888);
if ($tmp891) goto block1; else goto block2;
block1:;
// line 400
goto block4;
block4:;
// line 401
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Main));
org$frostlang$frostc$Main* $tmp892 = (org$frostlang$frostc$Main*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp892);
frost$core$Int64 $tmp893 = (frost$core$Int64) {1};
frost$core$Bit $tmp894 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp895 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp893, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp894);
ITable* $tmp896 = param0->$class->itable;
while ($tmp896->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp896 = $tmp896->next;
}
$fn898 $tmp897 = $tmp896->methods[2];
frost$collections$ListView* $tmp899 = $tmp897(param0, $tmp895);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp892, $tmp899);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
goto block4;
block5:;
goto block2;
block2:;
// line 404
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Main));
org$frostlang$frostc$Main* $tmp900 = (org$frostlang$frostc$Main*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp900);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp900, param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
return;

}
void org$frostlang$frostc$Main$cleanup(org$frostlang$frostc$Main* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp901 = &param0->clang;
frost$io$File* $tmp902 = *$tmp901;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
frost$io$File** $tmp903 = &param0->frostHome;
frost$io$File* $tmp904 = *$tmp903;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
return;

}

