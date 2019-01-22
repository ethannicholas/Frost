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
#include "org/frostlang/frostc/Compiler/ErrorMsg.h"
#include "frost/core/Equatable.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/HTMLProcessor.h"
#include "org/frostlang/frostc/LLVMCodeGenerator.h"
#include "org/frostlang/frostc/HCodeGenerator.h"
#include "org/frostlang/frostc/CCodeGenerator.h"
#include "org/frostlang/frostc/StubCodeGenerator.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Immutable.h"
#include "org/frostlang/frostc/Position.h"


static frost$core$String $s1;
org$frostlang$frostc$Main$class_type org$frostlang$frostc$Main$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Main$cleanup, org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File, org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File, org$frostlang$frostc$Main$printUsage$frost$io$OutputStream, org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT} };

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
typedef frost$core$Bit (*$fn243)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn249)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Maybe* (*$fn272)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$String* (*$fn300)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn315)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn344)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn378)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn432)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn440)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Bit (*$fn472)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn495)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn513)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn567)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn582)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn597)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn691)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn695)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn700)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn708)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn712)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn717)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn727)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn731)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn736)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn857)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn868)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$ListView* (*$fn880)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$Q$GT);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e", 25, -2845835638820544359, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x66\x72\x6f\x73\x74", 7, 156127765601112, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, 1592669972389054298, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x66\x72\x6f\x73\x74\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -2999112433744991273, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x66\x72\x6f\x73\x74\x27\x2e", 38, 893295268838200741, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, -4231800708310477877, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f", 1, 212, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68", 1, 205, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63", 1, 200, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x75\x62", 4, 223740247, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static frost$core$String $s446 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, 1555717532905, NULL };
static frost$core$String $s456 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x75\x62\x73", 5, 22597765062, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 5664749286632577346, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s525 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s531 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s541 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, 15416558793, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, 15416558793, NULL };
static frost$core$String $s550 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static frost$core$String $s588 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s607 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static frost$core$String $s624 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s671 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s774 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s781 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s824 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static frost$core$String $s845 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static frost$core$String $s854 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };
static frost$core$String $s871 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x72\x65\x70\x65\x61\x74", 7, 156190719979287, NULL };

void org$frostlang$frostc$Main$init(org$frostlang$frostc$Main* param0) {

// line 22
frost$core$Bit $tmp2 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp3 = &param0->debug;
*$tmp3 = $tmp2;
// line 25
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
frost$core$Bit $tmp225 = frost$core$Bit$init$builtin_bit(false);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp227 = (frost$core$Int64) {156};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s228, $tmp227);
abort(); // unreachable
block15:;
goto block2;
block2:;
frost$core$Error* $tmp229 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
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
frost$core$Bit local14;
frost$core$String* local15 = NULL;
frost$core$Bit local16;
frost$core$String* local17 = NULL;
frost$io$File* local18 = NULL;
frost$core$Bit local19;
frost$io$File* local20 = NULL;
frost$core$String* local21 = NULL;
frost$core$Int64 local22;
org$frostlang$frostc$CodeGenerator* local23 = NULL;
frost$core$Error* local24 = NULL;
frost$core$Error* local25 = NULL;
org$frostlang$frostc$Compiler$Settings* local26 = NULL;
frost$threads$MessageQueue* local27 = NULL;
org$frostlang$frostc$Compiler* local28 = NULL;
frost$io$File* local29 = NULL;
org$frostlang$frostc$ClassDecl* local30 = NULL;
frost$io$File* local31 = NULL;
frost$core$Int64 local32;
org$frostlang$frostc$Compiler$ErrorMsg* local33 = NULL;
// line 161
org$frostlang$frostc$Main$Arguments* $tmp230 = (org$frostlang$frostc$Main$Arguments*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Main$Arguments$class);
org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT($tmp230, param1);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
org$frostlang$frostc$Main$Arguments* $tmp231 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local0) = $tmp230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
// line 162
frost$collections$Array* $tmp232 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp232);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$collections$Array* $tmp233 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
*(&local1) = $tmp232;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
// line 163
frost$collections$Array* $tmp234 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp234);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$collections$Array* $tmp235 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
*(&local2) = $tmp234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// line 164
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File* $tmp236 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local3) = ((frost$io$File*) NULL);
// line 165
frost$core$Int64 $tmp237 = (frost$core$Int64) {3};
*(&local4) = $tmp237;
// line 166
frost$core$Int64 $tmp238 = (frost$core$Int64) {3};
*(&local5) = $tmp238;
// line 167
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { .nonnull = false });
// line 168
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp239 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local7) = ((frost$core$String*) NULL);
// line 169
frost$core$Bit $tmp240 = frost$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp240;
// line 170
goto block1;
block1:;
org$frostlang$frostc$Main$Arguments* $tmp241 = *(&local0);
$fn243 $tmp242 = ($fn243) $tmp241->$class->vtable[2];
frost$core$Bit $tmp244 = $tmp242($tmp241);
frost$core$Bit $tmp245 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp244);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block2; else goto block3;
block2:;
// line 171
org$frostlang$frostc$Main$Arguments* $tmp247 = *(&local0);
$fn249 $tmp248 = ($fn249) $tmp247->$class->vtable[3];
frost$core$String* $tmp250 = $tmp248($tmp247);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
frost$core$String* $tmp251 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
*(&local9) = $tmp250;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// line 172
frost$core$String* $tmp252 = *(&local9);
frost$core$Bit $tmp253 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp252, &$s254);
bool $tmp255 = $tmp253.value;
if ($tmp255) goto block5; else goto block6;
block5:;
// line 174
*(&local10) = ((frost$core$Error*) NULL);
// line 175
frost$io$File* $tmp256 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp256, &$s257);
*(&local11) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
frost$io$File* $tmp258 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local11) = $tmp256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// line 176
frost$io$InputStream* $tmp259 = frost$io$Console$inputStream$R$frost$io$InputStream();
frost$io$File* $tmp260 = *(&local11);
frost$core$Maybe* $tmp261 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp260);
frost$core$Int64* $tmp262 = &$tmp261->$rawValue;
frost$core$Int64 $tmp263 = *$tmp262;
int64_t $tmp264 = $tmp263.value;
bool $tmp265 = $tmp264 == 0;
if ($tmp265) goto block9; else goto block10;
block10:;
frost$core$Error** $tmp266 = (frost$core$Error**) ($tmp261->$data + 0);
frost$core$Error* $tmp267 = *$tmp266;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local10) = $tmp267;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$io$File* $tmp268 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local11) = ((frost$io$File*) NULL);
goto block7;
block9:;
frost$core$Object** $tmp269 = (frost$core$Object**) ($tmp261->$data + 0);
frost$core$Object* $tmp270 = *$tmp269;
$fn272 $tmp271 = ($fn272) $tmp259->$class->vtable[17];
frost$core$Maybe* $tmp273 = $tmp271($tmp259, ((frost$io$OutputStream*) $tmp270));
frost$core$Int64* $tmp274 = &$tmp273->$rawValue;
frost$core$Int64 $tmp275 = *$tmp274;
int64_t $tmp276 = $tmp275.value;
bool $tmp277 = $tmp276 == 0;
if ($tmp277) goto block11; else goto block12;
block12:;
frost$core$Error** $tmp278 = (frost$core$Error**) ($tmp273->$data + 0);
frost$core$Error* $tmp279 = *$tmp278;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local10) = $tmp279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$io$File* $tmp280 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
*(&local11) = ((frost$io$File*) NULL);
goto block7;
block11:;
frost$core$Object** $tmp281 = (frost$core$Object**) ($tmp273->$data + 0);
frost$core$Object* $tmp282 = *$tmp281;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// line 177
frost$collections$Array* $tmp283 = *(&local1);
frost$io$File* $tmp284 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp283, ((frost$core$Object*) $tmp284));
frost$io$File* $tmp285 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
*(&local11) = ((frost$io$File*) NULL);
goto block8;
block7:;
// line 180
frost$core$Error* $tmp286 = *(&local10);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp286));
// line 181
frost$core$Int64 $tmp287 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp287);
goto block8;
block8:;
frost$core$Error* $tmp288 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local10) = ((frost$core$Error*) NULL);
goto block4;
block6:;
frost$core$Bit $tmp289 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp252, &$s290);
bool $tmp291 = $tmp289.value;
if ($tmp291) goto block13; else goto block14;
block13:;
// line 185
frost$io$File* $tmp292 = *(&local3);
frost$core$Bit $tmp293 = frost$core$Bit$init$builtin_bit($tmp292 != NULL);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block15; else goto block16;
block15:;
// line 186
frost$io$Console$printErrorLine$frost$core$String(&$s295);
// line 187
frost$core$Int64 $tmp296 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp296);
goto block16;
block16:;
// line 189
frost$io$File* $tmp297 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp298 = *(&local0);
$fn300 $tmp299 = ($fn300) $tmp298->$class->vtable[4];
frost$core$String* $tmp301 = $tmp299($tmp298, &$s302);
frost$io$File$init$frost$core$String($tmp297, $tmp301);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$io$File* $tmp303 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local3) = $tmp297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
// line 190
*(&local12) = ((frost$core$Error*) NULL);
// line 191
frost$io$File* $tmp304 = *(&local3);
frost$io$File* $tmp305 = frost$io$File$get_parent$R$frost$io$File$Q($tmp304);
frost$core$Error* $tmp306 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp305);
if ($tmp306 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local12) = $tmp306;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
goto block17;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
goto block18;
block17:;
// line 194
frost$core$Error* $tmp307 = *(&local12);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp307));
// line 195
frost$core$Int64 $tmp308 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp308);
goto block18;
block18:;
frost$core$Error* $tmp309 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local12) = ((frost$core$Error*) NULL);
goto block4;
block14:;
frost$core$Bit $tmp310 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp252, &$s311);
bool $tmp312 = $tmp310.value;
if ($tmp312) goto block21; else goto block22;
block21:;
// line 199
org$frostlang$frostc$Main$Arguments* $tmp313 = *(&local0);
$fn315 $tmp314 = ($fn315) $tmp313->$class->vtable[4];
frost$core$String* $tmp316 = $tmp314($tmp313, &$s317);
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
frost$core$String* $tmp318 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local13) = $tmp316;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
// line 200
frost$core$String* $tmp319 = *(&local13);
frost$core$Int64$nullable $tmp320 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp319);
*(&local4) = ((frost$core$Int64) $tmp320.value);
// line 201
frost$core$Int64 $tmp321 = *(&local4);
frost$core$Int64 $tmp322 = (frost$core$Int64) {3};
int64_t $tmp323 = $tmp321.value;
int64_t $tmp324 = $tmp322.value;
bool $tmp325 = $tmp323 > $tmp324;
frost$core$Bit $tmp326 = (frost$core$Bit) {$tmp325};
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block25; else goto block26;
block25:;
*(&local14) = $tmp326;
goto block27;
block26:;
frost$core$Int64 $tmp328 = *(&local4);
frost$core$Int64 $tmp329 = (frost$core$Int64) {0};
int64_t $tmp330 = $tmp328.value;
int64_t $tmp331 = $tmp329.value;
bool $tmp332 = $tmp330 < $tmp331;
frost$core$Bit $tmp333 = (frost$core$Bit) {$tmp332};
*(&local14) = $tmp333;
goto block27;
block27:;
frost$core$Bit $tmp334 = *(&local14);
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block23; else goto block24;
block23:;
// line 202
frost$io$Console$printErrorLine$frost$core$String(&$s336);
// line 203
frost$core$Int64 $tmp337 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp337);
goto block24;
block24:;
frost$core$String* $tmp338 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
*(&local13) = ((frost$core$String*) NULL);
goto block4;
block22:;
frost$core$Bit $tmp339 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp252, &$s340);
bool $tmp341 = $tmp339.value;
if ($tmp341) goto block28; else goto block29;
block28:;
// line 207
org$frostlang$frostc$Main$Arguments* $tmp342 = *(&local0);
$fn344 $tmp343 = ($fn344) $tmp342->$class->vtable[4];
frost$core$String* $tmp345 = $tmp343($tmp342, &$s346);
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$String* $tmp347 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
*(&local15) = $tmp345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// line 208
frost$core$String* $tmp348 = *(&local15);
frost$core$Int64$nullable $tmp349 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp348);
*(&local5) = ((frost$core$Int64) $tmp349.value);
// line 209
frost$core$Int64 $tmp350 = *(&local5);
frost$core$Int64 $tmp351 = (frost$core$Int64) {3};
int64_t $tmp352 = $tmp350.value;
int64_t $tmp353 = $tmp351.value;
bool $tmp354 = $tmp352 > $tmp353;
frost$core$Bit $tmp355 = (frost$core$Bit) {$tmp354};
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block32; else goto block33;
block32:;
*(&local16) = $tmp355;
goto block34;
block33:;
frost$core$Int64 $tmp357 = *(&local5);
frost$core$Int64 $tmp358 = (frost$core$Int64) {0};
int64_t $tmp359 = $tmp357.value;
int64_t $tmp360 = $tmp358.value;
bool $tmp361 = $tmp359 < $tmp360;
frost$core$Bit $tmp362 = (frost$core$Bit) {$tmp361};
*(&local16) = $tmp362;
goto block34;
block34:;
frost$core$Bit $tmp363 = *(&local16);
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block30; else goto block31;
block30:;
// line 210
frost$io$Console$printErrorLine$frost$core$String(&$s365);
// line 211
frost$core$Int64 $tmp366 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp366);
goto block31;
block31:;
frost$core$String* $tmp367 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
*(&local15) = ((frost$core$String*) NULL);
goto block4;
block29:;
frost$core$Bit $tmp368 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp252, &$s369);
bool $tmp370 = $tmp368.value;
if ($tmp370) goto block35; else goto block36;
block35:;
// line 215
org$frostlang$frostc$Main$Format$nullable $tmp371 = *(&local6);
frost$core$Bit $tmp372 = frost$core$Bit$init$builtin_bit($tmp371.nonnull);
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block37; else goto block38;
block37:;
// line 216
frost$io$Console$printErrorLine$frost$core$String(&$s374);
// line 217
frost$core$Int64 $tmp375 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp375);
goto block38;
block38:;
// line 219
org$frostlang$frostc$Main$Arguments* $tmp376 = *(&local0);
$fn378 $tmp377 = ($fn378) $tmp376->$class->vtable[4];
frost$core$String* $tmp379 = $tmp377($tmp376, &$s380);
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
frost$core$String* $tmp381 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local17) = $tmp379;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
// line 220
frost$core$String* $tmp382 = *(&local17);
frost$core$Bit $tmp383 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp382, &$s384);
bool $tmp385 = $tmp383.value;
if ($tmp385) goto block40; else goto block41;
block40:;
// line 221
frost$core$Int64 $tmp386 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp387 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp386);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp387, true });
goto block39;
block41:;
frost$core$Bit $tmp388 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp382, &$s389);
bool $tmp390 = $tmp388.value;
if ($tmp390) goto block42; else goto block43;
block42:;
// line 222
frost$core$Int64 $tmp391 = (frost$core$Int64) {2};
org$frostlang$frostc$Main$Format $tmp392 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp391);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp392, true });
goto block39;
block43:;
frost$core$Bit $tmp393 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp382, &$s394);
bool $tmp395 = $tmp393.value;
if ($tmp395) goto block44; else goto block45;
block44:;
// line 223
frost$core$Int64 $tmp396 = (frost$core$Int64) {0};
org$frostlang$frostc$Main$Format $tmp397 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp396);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp397, true });
goto block39;
block45:;
frost$core$Bit $tmp398 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp382, &$s399);
bool $tmp400 = $tmp398.value;
if ($tmp400) goto block46; else goto block47;
block46:;
// line 224
frost$core$Int64 $tmp401 = (frost$core$Int64) {3};
org$frostlang$frostc$Main$Format $tmp402 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp401);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp402, true });
goto block39;
block47:;
frost$core$Bit $tmp403 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp382, &$s404);
bool $tmp405 = $tmp403.value;
if ($tmp405) goto block48; else goto block49;
block48:;
// line 225
frost$core$Int64 $tmp406 = (frost$core$Int64) {4};
org$frostlang$frostc$Main$Format $tmp407 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp406);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp407, true });
goto block39;
block49:;
frost$core$Bit $tmp408 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp382, &$s409);
bool $tmp410 = $tmp408.value;
if ($tmp410) goto block50; else goto block51;
block50:;
// line 226
frost$core$Int64 $tmp411 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp412 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp411);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp412, true });
goto block39;
block51:;
frost$core$Bit $tmp413 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp382, &$s414);
bool $tmp415 = $tmp413.value;
if ($tmp415) goto block52; else goto block53;
block52:;
// line 227
frost$core$Int64 $tmp416 = (frost$core$Int64) {6};
org$frostlang$frostc$Main$Format $tmp417 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp416);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp417, true });
goto block39;
block53:;
// line 229
frost$core$String* $tmp418 = *(&local17);
frost$core$String* $tmp419 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s420, $tmp418);
frost$core$String* $tmp421 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp419, &$s422);
frost$io$Console$printErrorLine$frost$core$String($tmp421);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
// line 230
frost$core$Int64 $tmp423 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp423);
goto block39;
block39:;
frost$core$String* $tmp424 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
*(&local17) = ((frost$core$String*) NULL);
goto block4;
block36:;
frost$core$Bit $tmp425 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp252, &$s426);
bool $tmp427 = $tmp425.value;
if ($tmp427) goto block54; else goto block55;
block54:;
// line 235
frost$collections$Array* $tmp428 = *(&local2);
frost$io$File* $tmp429 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp430 = *(&local0);
$fn432 $tmp431 = ($fn432) $tmp430->$class->vtable[4];
frost$core$String* $tmp433 = $tmp431($tmp430, &$s434);
frost$io$File$init$frost$core$String($tmp429, $tmp433);
frost$collections$Array$add$frost$collections$Array$T($tmp428, ((frost$core$Object*) $tmp429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
goto block4;
block55:;
frost$core$Bit $tmp435 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp252, &$s436);
bool $tmp437 = $tmp435.value;
if ($tmp437) goto block56; else goto block57;
block56:;
// line 238
org$frostlang$frostc$Main$Arguments* $tmp438 = *(&local0);
$fn440 $tmp439 = ($fn440) $tmp438->$class->vtable[4];
frost$core$String* $tmp441 = $tmp439($tmp438, &$s442);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$String* $tmp443 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
*(&local7) = $tmp441;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
goto block4;
block57:;
// line 241
frost$core$String* $tmp444 = *(&local9);
frost$core$Bit $tmp445 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp444, &$s446);
bool $tmp447 = $tmp445.value;
if ($tmp447) goto block58; else goto block60;
block58:;
// line 242
frost$io$File* $tmp448 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp449 = *(&local9);
frost$io$File$init$frost$core$String($tmp448, $tmp449);
*(&local18) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
frost$io$File* $tmp450 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local18) = $tmp448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
// line 243
frost$collections$Array* $tmp451 = *(&local1);
frost$io$File* $tmp452 = *(&local18);
frost$collections$Array$add$frost$collections$Array$T($tmp451, ((frost$core$Object*) $tmp452));
frost$io$File* $tmp453 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
*(&local18) = ((frost$io$File*) NULL);
goto block59;
block60:;
// line 1
// line 246
frost$core$String* $tmp454 = *(&local9);
frost$core$String* $tmp455 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s456, $tmp454);
frost$core$String* $tmp457 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp455, &$s458);
frost$io$Console$printErrorLine$frost$core$String($tmp457);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
// line 247
frost$core$Int64 $tmp459 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp459);
goto block59;
block59:;
goto block4;
block4:;
frost$core$String* $tmp460 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
*(&local9) = ((frost$core$String*) NULL);
goto block1;
block3:;
// line 252
org$frostlang$frostc$Main$Format$nullable $tmp461 = *(&local6);
frost$core$Bit $tmp462 = frost$core$Bit$init$builtin_bit(!$tmp461.nonnull);
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block63; else goto block64;
block63:;
*(&local19) = $tmp462;
goto block65;
block64:;
org$frostlang$frostc$Main$Format$nullable $tmp464 = *(&local6);
frost$core$Equatable* $tmp465;
if ($tmp464.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp466;
    $tmp466 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp466->value = ((org$frostlang$frostc$Main$Format) $tmp464.value);
    $tmp465 = ((frost$core$Equatable*) $tmp466);
}
else {
    $tmp465 = NULL;
}
frost$core$Int64 $tmp467 = (frost$core$Int64) {6};
org$frostlang$frostc$Main$Format $tmp468 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp467);
org$frostlang$frostc$Main$Format$wrapper* $tmp469;
$tmp469 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp469->value = $tmp468;
ITable* $tmp470 = $tmp465->$class->itable;
while ($tmp470->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp470 = $tmp470->next;
}
$fn472 $tmp471 = $tmp470->methods[1];
frost$core$Bit $tmp473 = $tmp471($tmp465, ((frost$core$Equatable*) $tmp469));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp469)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
*(&local19) = $tmp473;
goto block65;
block65:;
frost$core$Bit $tmp474 = *(&local19);
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block61; else goto block62;
block61:;
// line 253
frost$collections$Array* $tmp476 = *(&local2);
frost$io$File* $tmp477 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp478 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp477, $tmp478);
frost$io$File* $tmp479 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp477, &$s480);
frost$collections$Array$add$frost$collections$Array$T($tmp476, ((frost$core$Object*) $tmp479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
goto block62;
block62:;
// line 255
frost$collections$Array* $tmp481 = *(&local2);
frost$io$File** $tmp482 = &param0->frostHome;
frost$io$File* $tmp483 = *$tmp482;
frost$collections$Array$add$frost$collections$Array$T($tmp481, ((frost$core$Object*) $tmp483));
// line 256
frost$io$File* $tmp484 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp485 = org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp484, $tmp485);
*(&local20) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
frost$io$File* $tmp486 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
*(&local20) = $tmp484;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
// line 257
frost$io$File* $tmp487 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp487, &$s488);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$io$File** $tmp489 = &param0->clang;
frost$io$File* $tmp490 = *$tmp489;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$io$File** $tmp491 = &param0->clang;
*$tmp491 = $tmp487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
// line 258
frost$collections$Array* $tmp492 = *(&local1);
ITable* $tmp493 = ((frost$collections$CollectionView*) $tmp492)->$class->itable;
while ($tmp493->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp493 = $tmp493->next;
}
$fn495 $tmp494 = $tmp493->methods[0];
frost$core$Int64 $tmp496 = $tmp494(((frost$collections$CollectionView*) $tmp492));
frost$core$Int64 $tmp497 = (frost$core$Int64) {0};
frost$core$Bit $tmp498 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp496, $tmp497);
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block66; else goto block67;
block66:;
// line 259
frost$io$Console$printErrorLine$frost$core$String(&$s500);
// line 260
frost$core$Int64 $tmp501 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp501);
goto block67;
block67:;
// line 262
org$frostlang$frostc$Main$Format$nullable $tmp502 = *(&local6);
frost$core$Bit $tmp503 = frost$core$Bit$init$builtin_bit(!$tmp502.nonnull);
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block68; else goto block69;
block68:;
// line 263
frost$core$Int64 $tmp505 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp506 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp505);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp506, true });
goto block69;
block69:;
// line 265
frost$io$File* $tmp507 = *(&local3);
frost$core$Bit $tmp508 = frost$core$Bit$init$builtin_bit($tmp507 == NULL);
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block70; else goto block71;
block70:;
// line 266
frost$collections$Array* $tmp510 = *(&local1);
ITable* $tmp511 = ((frost$collections$CollectionView*) $tmp510)->$class->itable;
while ($tmp511->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp511 = $tmp511->next;
}
$fn513 $tmp512 = $tmp511->methods[0];
frost$core$Int64 $tmp514 = $tmp512(((frost$collections$CollectionView*) $tmp510));
frost$core$Int64 $tmp515 = (frost$core$Int64) {1};
frost$core$Bit $tmp516 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp514, $tmp515);
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block72; else goto block74;
block72:;
// line 267
*(&local21) = ((frost$core$String*) NULL);
// line 268
org$frostlang$frostc$Main$Format$nullable $tmp518 = *(&local6);
frost$core$Int64 $tmp519 = ((org$frostlang$frostc$Main$Format) $tmp518.value).$rawValue;
frost$core$Int64 $tmp520 = (frost$core$Int64) {1};
frost$core$Bit $tmp521 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp519, $tmp520);
bool $tmp522 = $tmp521.value;
if ($tmp522) goto block76; else goto block77;
block76:;
// line 269
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s523));
frost$core$String* $tmp524 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local21) = &$s525;
goto block75;
block77:;
frost$core$Int64 $tmp526 = (frost$core$Int64) {2};
frost$core$Bit $tmp527 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp519, $tmp526);
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block78; else goto block79;
block78:;
// line 270
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s529));
frost$core$String* $tmp530 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local21) = &$s531;
goto block75;
block79:;
frost$core$Int64 $tmp532 = (frost$core$Int64) {0};
frost$core$Bit $tmp533 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp519, $tmp532);
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block80; else goto block81;
block80:;
// line 271
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s535));
frost$core$String* $tmp536 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
*(&local21) = &$s537;
goto block75;
block81:;
frost$core$Int64 $tmp538 = (frost$core$Int64) {5};
frost$core$Bit $tmp539 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp519, $tmp538);
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block82; else goto block83;
block82:;
// line 272
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s541));
frost$core$String* $tmp542 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
*(&local21) = &$s543;
goto block75;
block83:;
frost$core$Int64 $tmp544 = (frost$core$Int64) {6};
frost$core$Bit $tmp545 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp519, $tmp544);
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block84; else goto block85;
block84:;
// line 273
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s547));
frost$core$String* $tmp548 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
*(&local21) = &$s549;
goto block75;
block85:;
// line 275
frost$io$Console$printErrorLine$frost$core$String(&$s550);
// line 277
frost$core$Int64 $tmp551 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp551);
goto block75;
block75:;
// line 280
frost$collections$Array* $tmp552 = *(&local1);
frost$core$Int64 $tmp553 = (frost$core$Int64) {0};
frost$core$Object* $tmp554 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp552, $tmp553);
frost$core$String* $tmp555 = *(&local21);
frost$io$File* $tmp556 = frost$io$File$withExtension$frost$core$String$R$frost$io$File(((frost$io$File*) $tmp554), $tmp555);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
frost$io$File* $tmp557 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
*(&local3) = $tmp556;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
frost$core$Frost$unref$frost$core$Object$Q($tmp554);
frost$core$String* $tmp558 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local21) = ((frost$core$String*) NULL);
goto block73;
block74:;
// line 282
org$frostlang$frostc$Main$Format$nullable $tmp559 = *(&local6);
frost$core$Equatable* $tmp560;
if ($tmp559.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp561;
    $tmp561 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp561->value = ((org$frostlang$frostc$Main$Format) $tmp559.value);
    $tmp560 = ((frost$core$Equatable*) $tmp561);
}
else {
    $tmp560 = NULL;
}
frost$core$Int64 $tmp562 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp563 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp562);
org$frostlang$frostc$Main$Format$wrapper* $tmp564;
$tmp564 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp564->value = $tmp563;
ITable* $tmp565 = $tmp560->$class->itable;
while ($tmp565->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp565 = $tmp565->next;
}
$fn567 $tmp566 = $tmp565->methods[0];
frost$core$Bit $tmp568 = $tmp566($tmp560, ((frost$core$Equatable*) $tmp564));
bool $tmp569 = $tmp568.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp564)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
if ($tmp569) goto block86; else goto block88;
block86:;
// line 283
frost$io$Console$printErrorLine$frost$core$String(&$s570);
// line 284
frost$core$Int64 $tmp571 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp571);
goto block87;
block88:;
// line 1
// line 287
frost$io$Console$printErrorLine$frost$core$String(&$s572);
// line 289
frost$core$Int64 $tmp573 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp573);
goto block87;
block87:;
goto block73;
block73:;
goto block71;
block71:;
// line 292
org$frostlang$frostc$Main$Format$nullable $tmp574 = *(&local6);
frost$core$Equatable* $tmp575;
if ($tmp574.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp576;
    $tmp576 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp576->value = ((org$frostlang$frostc$Main$Format) $tmp574.value);
    $tmp575 = ((frost$core$Equatable*) $tmp576);
}
else {
    $tmp575 = NULL;
}
frost$core$Int64 $tmp577 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp578 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp577);
org$frostlang$frostc$Main$Format$wrapper* $tmp579;
$tmp579 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp579->value = $tmp578;
ITable* $tmp580 = $tmp575->$class->itable;
while ($tmp580->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp580 = $tmp580->next;
}
$fn582 $tmp581 = $tmp580->methods[0];
frost$core$Bit $tmp583 = $tmp581($tmp575, ((frost$core$Equatable*) $tmp579));
bool $tmp584 = $tmp583.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp579)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
if ($tmp584) goto block89; else goto block90;
block89:;
// line 293
frost$core$String* $tmp585 = *(&local7);
frost$core$Bit $tmp586 = frost$core$Bit$init$builtin_bit($tmp585 == NULL);
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block91; else goto block92;
block91:;
// line 294
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s588));
frost$core$String* $tmp589 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
*(&local7) = &$s588;
goto block92;
block92:;
// line 296
org$frostlang$frostc$HTMLProcessor* $tmp590 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(12, (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
org$frostlang$frostc$HTMLProcessor$init($tmp590);
frost$collections$Array* $tmp591 = *(&local1);
frost$core$Int64 $tmp592 = (frost$core$Int64) {0};
frost$core$Object* $tmp593 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp591, $tmp592);
frost$io$File* $tmp594 = *(&local3);
frost$core$String* $tmp595 = *(&local7);
$fn597 $tmp596 = ($fn597) $tmp590->$class->vtable[3];
$tmp596($tmp590, ((frost$io$File*) $tmp593), $tmp594, $tmp595);
frost$core$Frost$unref$frost$core$Object$Q($tmp593);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
// line 297
frost$io$File* $tmp598 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local20) = ((frost$io$File*) NULL);
frost$core$String* $tmp599 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp600 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp601 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp602 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp603 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block90:;
// line 299
frost$core$String* $tmp604 = *(&local7);
frost$core$Bit $tmp605 = frost$core$Bit$init$builtin_bit($tmp604 != NULL);
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block93; else goto block94;
block93:;
// line 300
frost$io$Console$printErrorLine$frost$core$String(&$s607);
// line 301
frost$core$Int64 $tmp608 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp608);
goto block94;
block94:;
// line 303
// line 1
// line 305
*(&local23) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 306
org$frostlang$frostc$Main$Format$nullable $tmp609 = *(&local6);
frost$core$Int64 $tmp610 = ((org$frostlang$frostc$Main$Format) $tmp609.value).$rawValue;
frost$core$Int64 $tmp611 = (frost$core$Int64) {0};
frost$core$Bit $tmp612 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp610, $tmp611);
bool $tmp613 = $tmp612.value;
if ($tmp613) goto block96; else goto block97;
block97:;
frost$core$Int64 $tmp614 = (frost$core$Int64) {1};
frost$core$Bit $tmp615 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp610, $tmp614);
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block96; else goto block98;
block98:;
frost$core$Int64 $tmp617 = (frost$core$Int64) {2};
frost$core$Bit $tmp618 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp610, $tmp617);
bool $tmp619 = $tmp618.value;
if ($tmp619) goto block96; else goto block99;
block96:;
// line 308
*(&local24) = ((frost$core$Error*) NULL);
// line 309
org$frostlang$frostc$LLVMCodeGenerator* $tmp620 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(240, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
frost$core$String* $tmp621 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
frost$io$File* $tmp622 = *(&local3);
frost$io$File* $tmp623 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp622, &$s624);
frost$core$Maybe* $tmp625 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp623);
frost$core$Int64* $tmp626 = &$tmp625->$rawValue;
frost$core$Int64 $tmp627 = *$tmp626;
int64_t $tmp628 = $tmp627.value;
bool $tmp629 = $tmp628 == 0;
if ($tmp629) goto block102; else goto block103;
block103:;
frost$core$Error** $tmp630 = (frost$core$Error**) ($tmp625->$data + 0);
frost$core$Error* $tmp631 = *$tmp630;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
*(&local24) = $tmp631;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
goto block100;
block102:;
frost$core$Object** $tmp632 = (frost$core$Object**) ($tmp625->$data + 0);
frost$core$Object* $tmp633 = *$tmp632;
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp620, $tmp621, ((frost$io$OutputStream*) $tmp633));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp620)));
org$frostlang$frostc$CodeGenerator* $tmp634 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
*(&local23) = ((org$frostlang$frostc$CodeGenerator*) $tmp620);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
goto block101;
block100:;
// line 313
frost$core$Error* $tmp635 = *(&local24);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp635));
// line 314
frost$core$Int64 $tmp636 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp636);
goto block101;
block101:;
frost$core$Error* $tmp637 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
*(&local24) = ((frost$core$Error*) NULL);
goto block95;
block99:;
frost$core$Int64 $tmp638 = (frost$core$Int64) {3};
frost$core$Bit $tmp639 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp610, $tmp638);
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block104; else goto block105;
block104:;
// line 318
org$frostlang$frostc$HCodeGenerator* $tmp641 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
frost$io$File* $tmp642 = *(&local3);
org$frostlang$frostc$HCodeGenerator$init$frost$io$File($tmp641, $tmp642);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp641)));
org$frostlang$frostc$CodeGenerator* $tmp643 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
*(&local23) = ((org$frostlang$frostc$CodeGenerator*) $tmp641);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
goto block95;
block105:;
frost$core$Int64 $tmp644 = (frost$core$Int64) {4};
frost$core$Bit $tmp645 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp610, $tmp644);
bool $tmp646 = $tmp645.value;
if ($tmp646) goto block106; else goto block107;
block106:;
// line 321
org$frostlang$frostc$CCodeGenerator* $tmp647 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(264, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
frost$io$File* $tmp648 = *(&local3);
org$frostlang$frostc$CCodeGenerator$init$frost$io$File($tmp647, $tmp648);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp647)));
org$frostlang$frostc$CodeGenerator* $tmp649 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local23) = ((org$frostlang$frostc$CodeGenerator*) $tmp647);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
goto block95;
block107:;
frost$core$Int64 $tmp650 = (frost$core$Int64) {6};
frost$core$Bit $tmp651 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp610, $tmp650);
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block108; else goto block109;
block108:;
// line 324
*(&local25) = ((frost$core$Error*) NULL);
// line 325
org$frostlang$frostc$StubCodeGenerator* $tmp653 = (org$frostlang$frostc$StubCodeGenerator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$class);
frost$io$File* $tmp654 = *(&local3);
frost$core$Maybe* $tmp655 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp654);
frost$core$Int64* $tmp656 = &$tmp655->$rawValue;
frost$core$Int64 $tmp657 = *$tmp656;
int64_t $tmp658 = $tmp657.value;
bool $tmp659 = $tmp658 == 0;
if ($tmp659) goto block112; else goto block113;
block113:;
frost$core$Error** $tmp660 = (frost$core$Error**) ($tmp655->$data + 0);
frost$core$Error* $tmp661 = *$tmp660;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
*(&local25) = $tmp661;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
goto block110;
block112:;
frost$core$Object** $tmp662 = (frost$core$Object**) ($tmp655->$data + 0);
frost$core$Object* $tmp663 = *$tmp662;
org$frostlang$frostc$StubCodeGenerator$init$frost$io$OutputStream($tmp653, ((frost$io$OutputStream*) $tmp663));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp653)));
org$frostlang$frostc$CodeGenerator* $tmp664 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
*(&local23) = ((org$frostlang$frostc$CodeGenerator*) $tmp653);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
goto block111;
block110:;
// line 328
frost$core$Error* $tmp665 = *(&local25);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp665));
// line 329
frost$core$Int64 $tmp666 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp666);
goto block111;
block111:;
frost$core$Error* $tmp667 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
*(&local25) = ((frost$core$Error*) NULL);
goto block95;
block109:;
// line 333
frost$core$Bit $tmp668 = frost$core$Bit$init$builtin_bit(false);
bool $tmp669 = $tmp668.value;
if ($tmp669) goto block114; else goto block115;
block115:;
frost$core$Int64 $tmp670 = (frost$core$Int64) {333};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s671, $tmp670);
abort(); // unreachable
block114:;
goto block95;
block95:;
// line 336
org$frostlang$frostc$Compiler$Settings* $tmp672 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(49, (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
frost$io$File** $tmp673 = &param0->frostHome;
frost$io$File* $tmp674 = *$tmp673;
frost$collections$Array* $tmp675 = *(&local2);
frost$core$Int64 $tmp676 = *(&local4);
frost$core$Int64 $tmp677 = *(&local5);
frost$core$Bit* $tmp678 = &param0->debug;
frost$core$Bit $tmp679 = *$tmp678;
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp672, $tmp674, ((frost$collections$ListView*) $tmp675), $tmp676, $tmp677, $tmp679);
*(&local26) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
org$frostlang$frostc$Compiler$Settings* $tmp680 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
*(&local26) = $tmp672;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
// line 338
frost$threads$MessageQueue* $tmp681 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp681);
*(&local27) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
frost$threads$MessageQueue* $tmp682 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local27) = $tmp681;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// line 339
org$frostlang$frostc$Compiler* $tmp683 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(280, (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
frost$threads$MessageQueue* $tmp684 = *(&local27);
org$frostlang$frostc$CodeGenerator* $tmp685 = *(&local23);
org$frostlang$frostc$Compiler$Settings* $tmp686 = *(&local26);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$ErrorMsg$GT$org$frostlang$frostc$CodeGenerator$org$frostlang$frostc$Compiler$Settings($tmp683, $tmp684, $tmp685, $tmp686);
*(&local28) = ((org$frostlang$frostc$Compiler*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
org$frostlang$frostc$Compiler* $tmp687 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
*(&local28) = $tmp683;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
// line 340
frost$collections$Array* $tmp688 = *(&local1);
ITable* $tmp689 = ((frost$collections$Iterable*) $tmp688)->$class->itable;
while ($tmp689->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp689 = $tmp689->next;
}
$fn691 $tmp690 = $tmp689->methods[0];
frost$collections$Iterator* $tmp692 = $tmp690(((frost$collections$Iterable*) $tmp688));
goto block116;
block116:;
ITable* $tmp693 = $tmp692->$class->itable;
while ($tmp693->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp693 = $tmp693->next;
}
$fn695 $tmp694 = $tmp693->methods[0];
frost$core$Bit $tmp696 = $tmp694($tmp692);
bool $tmp697 = $tmp696.value;
if ($tmp697) goto block118; else goto block117;
block117:;
*(&local29) = ((frost$io$File*) NULL);
ITable* $tmp698 = $tmp692->$class->itable;
while ($tmp698->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp698 = $tmp698->next;
}
$fn700 $tmp699 = $tmp698->methods[1];
frost$core$Object* $tmp701 = $tmp699($tmp692);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp701)));
frost$io$File* $tmp702 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
*(&local29) = ((frost$io$File*) $tmp701);
// line 341
org$frostlang$frostc$Compiler* $tmp703 = *(&local28);
frost$io$File* $tmp704 = *(&local29);
frost$collections$ListView* $tmp705 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT($tmp703, $tmp704);
ITable* $tmp706 = ((frost$collections$Iterable*) $tmp705)->$class->itable;
while ($tmp706->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp706 = $tmp706->next;
}
$fn708 $tmp707 = $tmp706->methods[0];
frost$collections$Iterator* $tmp709 = $tmp707(((frost$collections$Iterable*) $tmp705));
goto block119;
block119:;
ITable* $tmp710 = $tmp709->$class->itable;
while ($tmp710->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp710 = $tmp710->next;
}
$fn712 $tmp711 = $tmp710->methods[0];
frost$core$Bit $tmp713 = $tmp711($tmp709);
bool $tmp714 = $tmp713.value;
if ($tmp714) goto block121; else goto block120;
block120:;
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp715 = $tmp709->$class->itable;
while ($tmp715->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp715 = $tmp715->next;
}
$fn717 $tmp716 = $tmp715->methods[1];
frost$core$Object* $tmp718 = $tmp716($tmp709);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp718)));
org$frostlang$frostc$ClassDecl* $tmp719 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
*(&local30) = ((org$frostlang$frostc$ClassDecl*) $tmp718);
// line 342
org$frostlang$frostc$Compiler* $tmp720 = *(&local28);
org$frostlang$frostc$ClassDecl* $tmp721 = *(&local30);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl($tmp720, $tmp721);
frost$core$Frost$unref$frost$core$Object$Q($tmp718);
org$frostlang$frostc$ClassDecl* $tmp722 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block119;
block121:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$core$Frost$unref$frost$core$Object$Q($tmp701);
frost$io$File* $tmp723 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local29) = ((frost$io$File*) NULL);
goto block116;
block118:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
// line 345
frost$collections$Array* $tmp724 = *(&local1);
ITable* $tmp725 = ((frost$collections$Iterable*) $tmp724)->$class->itable;
while ($tmp725->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp725 = $tmp725->next;
}
$fn727 $tmp726 = $tmp725->methods[0];
frost$collections$Iterator* $tmp728 = $tmp726(((frost$collections$Iterable*) $tmp724));
goto block122;
block122:;
ITable* $tmp729 = $tmp728->$class->itable;
while ($tmp729->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp729 = $tmp729->next;
}
$fn731 $tmp730 = $tmp729->methods[0];
frost$core$Bit $tmp732 = $tmp730($tmp728);
bool $tmp733 = $tmp732.value;
if ($tmp733) goto block124; else goto block123;
block123:;
*(&local31) = ((frost$io$File*) NULL);
ITable* $tmp734 = $tmp728->$class->itable;
while ($tmp734->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp734 = $tmp734->next;
}
$fn736 $tmp735 = $tmp734->methods[1];
frost$core$Object* $tmp737 = $tmp735($tmp728);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp737)));
frost$io$File* $tmp738 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local31) = ((frost$io$File*) $tmp737);
// line 346
org$frostlang$frostc$Compiler* $tmp739 = *(&local28);
frost$io$File* $tmp740 = *(&local31);
org$frostlang$frostc$Compiler$compile$frost$io$File($tmp739, $tmp740);
frost$core$Frost$unref$frost$core$Object$Q($tmp737);
frost$io$File* $tmp741 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local31) = ((frost$io$File*) NULL);
goto block122;
block124:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
// line 348
org$frostlang$frostc$Compiler* $tmp742 = *(&local28);
org$frostlang$frostc$Compiler$finish($tmp742);
// line 349
frost$threads$MessageQueue* $tmp743 = *(&local27);
frost$core$Int64 $tmp744 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp743);
*(&local22) = $tmp744;
// line 350
frost$core$Int64 $tmp745 = (frost$core$Int64) {0};
frost$core$Int64 $tmp746 = *(&local22);
frost$core$Bit $tmp747 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp748 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp745, $tmp746, $tmp747);
frost$core$Int64 $tmp749 = $tmp748.min;
*(&local32) = $tmp749;
frost$core$Int64 $tmp750 = $tmp748.max;
frost$core$Bit $tmp751 = $tmp748.inclusive;
bool $tmp752 = $tmp751.value;
frost$core$Int64 $tmp753 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp754 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp753);
if ($tmp752) goto block128; else goto block129;
block128:;
int64_t $tmp755 = $tmp749.value;
int64_t $tmp756 = $tmp750.value;
bool $tmp757 = $tmp755 <= $tmp756;
frost$core$Bit $tmp758 = (frost$core$Bit) {$tmp757};
bool $tmp759 = $tmp758.value;
if ($tmp759) goto block125; else goto block126;
block129:;
int64_t $tmp760 = $tmp749.value;
int64_t $tmp761 = $tmp750.value;
bool $tmp762 = $tmp760 < $tmp761;
frost$core$Bit $tmp763 = (frost$core$Bit) {$tmp762};
bool $tmp764 = $tmp763.value;
if ($tmp764) goto block125; else goto block126;
block125:;
// line 351
frost$threads$MessageQueue* $tmp765 = *(&local27);
frost$core$Immutable* $tmp766 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp765);
*(&local33) = ((org$frostlang$frostc$Compiler$ErrorMsg*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp766)));
org$frostlang$frostc$Compiler$ErrorMsg* $tmp767 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local33) = ((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp766);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
// line 353
org$frostlang$frostc$Compiler$ErrorMsg* $tmp768 = *(&local33);
frost$io$File** $tmp769 = &$tmp768->file;
frost$io$File* $tmp770 = *$tmp769;
frost$core$String* $tmp771 = frost$io$File$get_name$R$frost$core$String($tmp770);
frost$core$String* $tmp772 = frost$core$String$get_asString$R$frost$core$String($tmp771);
frost$core$String* $tmp773 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp772, &$s774);
org$frostlang$frostc$Compiler$ErrorMsg* $tmp775 = *(&local33);
org$frostlang$frostc$Position* $tmp776 = &$tmp775->position;
org$frostlang$frostc$Position $tmp777 = *$tmp776;
org$frostlang$frostc$Position$wrapper* $tmp778;
$tmp778 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp778->value = $tmp777;
frost$core$String* $tmp779 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp773, ((frost$core$Object*) $tmp778));
frost$core$String* $tmp780 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp779, &$s781);
org$frostlang$frostc$Compiler$ErrorMsg* $tmp782 = *(&local33);
frost$core$String** $tmp783 = &$tmp782->message;
frost$core$String* $tmp784 = *$tmp783;
frost$core$String* $tmp785 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp780, $tmp784);
frost$core$String* $tmp786 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp785, &$s787);
frost$io$Console$printLine$frost$core$String($tmp786);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
org$frostlang$frostc$Compiler$ErrorMsg* $tmp788 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
*(&local33) = ((org$frostlang$frostc$Compiler$ErrorMsg*) NULL);
goto block127;
block127:;
frost$core$Int64 $tmp789 = *(&local32);
int64_t $tmp790 = $tmp750.value;
int64_t $tmp791 = $tmp789.value;
int64_t $tmp792 = $tmp790 - $tmp791;
frost$core$Int64 $tmp793 = (frost$core$Int64) {$tmp792};
frost$core$UInt64 $tmp794 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp793);
if ($tmp752) goto block131; else goto block132;
block131:;
uint64_t $tmp795 = $tmp794.value;
uint64_t $tmp796 = $tmp754.value;
bool $tmp797 = $tmp795 >= $tmp796;
frost$core$Bit $tmp798 = (frost$core$Bit) {$tmp797};
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block130; else goto block126;
block132:;
uint64_t $tmp800 = $tmp794.value;
uint64_t $tmp801 = $tmp754.value;
bool $tmp802 = $tmp800 > $tmp801;
frost$core$Bit $tmp803 = (frost$core$Bit) {$tmp802};
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block130; else goto block126;
block130:;
int64_t $tmp805 = $tmp789.value;
int64_t $tmp806 = $tmp753.value;
int64_t $tmp807 = $tmp805 + $tmp806;
frost$core$Int64 $tmp808 = (frost$core$Int64) {$tmp807};
*(&local32) = $tmp808;
goto block125;
block126:;
org$frostlang$frostc$Compiler* $tmp809 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
*(&local28) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp810 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
*(&local27) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp811 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
*(&local26) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp812 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
*(&local23) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 356
frost$core$Int64 $tmp813 = *(&local22);
frost$core$Int64 $tmp814 = (frost$core$Int64) {0};
frost$core$Bit $tmp815 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp813, $tmp814);
bool $tmp816 = $tmp815.value;
if ($tmp816) goto block133; else goto block135;
block133:;
// line 357
org$frostlang$frostc$Main$Format$nullable $tmp817 = *(&local6);
frost$core$Int64 $tmp818 = ((org$frostlang$frostc$Main$Format) $tmp817.value).$rawValue;
frost$core$Int64 $tmp819 = (frost$core$Int64) {1};
frost$core$Bit $tmp820 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp818, $tmp819);
bool $tmp821 = $tmp820.value;
if ($tmp821) goto block137; else goto block138;
block137:;
// line 359
frost$io$File* $tmp822 = *(&local3);
frost$io$File* $tmp823 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp822, &$s824);
frost$io$File* $tmp825 = *(&local3);
frost$core$Bit $tmp826 = *(&local8);
frost$io$File* $tmp827 = org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp823, $tmp825, $tmp826);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
goto block136;
block138:;
frost$core$Int64 $tmp828 = (frost$core$Int64) {2};
frost$core$Bit $tmp829 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp818, $tmp828);
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block139; else goto block136;
block139:;
// line 362
frost$io$File* $tmp831 = *(&local3);
frost$io$File* $tmp832 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp831, &$s833);
frost$io$File* $tmp834 = *(&local3);
frost$core$Bit $tmp835 = *(&local8);
frost$io$File* $tmp836 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp832, $tmp834, $tmp835);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
goto block136;
block136:;
goto block134;
block135:;
// line 1
// line 367
frost$core$Int64 $tmp837 = *(&local22);
frost$core$Int64 $tmp838 = (frost$core$Int64) {1};
frost$core$Bit $tmp839 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp837, $tmp838);
bool $tmp840 = $tmp839.value;
if ($tmp840) goto block140; else goto block142;
block140:;
// line 369
frost$io$Console$printLine$frost$core$String(&$s841);
goto block141;
block142:;
// line 1
// line 373
frost$core$Int64 $tmp842 = *(&local22);
frost$core$String* $tmp843 = frost$core$Int64$get_asString$R$frost$core$String($tmp842);
frost$core$String* $tmp844 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp843, &$s845);
frost$io$Console$printLine$frost$core$String($tmp844);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
goto block141;
block141:;
// line 375
frost$core$Int64 $tmp846 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp846);
goto block134;
block134:;
frost$io$File* $tmp847 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local20) = ((frost$io$File*) NULL);
frost$core$String* $tmp848 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp849 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp850 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp851 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp852 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$Main$containsError$frost$core$String$R$frost$core$Bit(frost$core$String* param0) {

// line 381
frost$core$Bit $tmp853 = frost$core$String$contains$frost$core$String$R$frost$core$Bit(param0, &$s854);
return $tmp853;

}
void frostMain(frost$collections$ListView* param0) {

frost$core$Bit local0;
// line 386
ITable* $tmp855 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp855->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp855 = $tmp855->next;
}
$fn857 $tmp856 = $tmp855->methods[0];
frost$core$Int64 $tmp858 = $tmp856(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp859 = (frost$core$Int64) {1};
int64_t $tmp860 = $tmp858.value;
int64_t $tmp861 = $tmp859.value;
bool $tmp862 = $tmp860 > $tmp861;
frost$core$Bit $tmp863 = (frost$core$Bit) {$tmp862};
bool $tmp864 = $tmp863.value;
if ($tmp864) goto block3; else goto block4;
block3:;
frost$core$Int64 $tmp865 = (frost$core$Int64) {1};
ITable* $tmp866 = param0->$class->itable;
while ($tmp866->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp866 = $tmp866->next;
}
$fn868 $tmp867 = $tmp866->methods[0];
frost$core$Object* $tmp869 = $tmp867(param0, $tmp865);
frost$core$Bit $tmp870 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(((frost$core$String*) $tmp869), &$s871);
frost$core$Frost$unref$frost$core$Object$Q($tmp869);
*(&local0) = $tmp870;
goto block5;
block4:;
*(&local0) = $tmp863;
goto block5;
block5:;
frost$core$Bit $tmp872 = *(&local0);
bool $tmp873 = $tmp872.value;
if ($tmp873) goto block1; else goto block2;
block1:;
// line 387
goto block6;
block6:;
// line 388
org$frostlang$frostc$Main* $tmp874 = (org$frostlang$frostc$Main*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp874);
frost$core$Int64 $tmp875 = (frost$core$Int64) {1};
frost$core$Bit $tmp876 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp877 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp875, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp876);
ITable* $tmp878 = param0->$class->itable;
while ($tmp878->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp878 = $tmp878->next;
}
$fn880 $tmp879 = $tmp878->methods[2];
frost$collections$ListView* $tmp881 = $tmp879(param0, $tmp877);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp874, $tmp881);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
goto block6;
block7:;
goto block2;
block2:;
// line 391
org$frostlang$frostc$Main* $tmp882 = (org$frostlang$frostc$Main*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp882);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp882, param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
return;

}
void org$frostlang$frostc$Main$cleanup(org$frostlang$frostc$Main* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp883 = &param0->clang;
frost$io$File* $tmp884 = *$tmp883;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
frost$io$File** $tmp885 = &param0->frostHome;
frost$io$File* $tmp886 = *$tmp885;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
return;

}

