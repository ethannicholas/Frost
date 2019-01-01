#include "org/pandalanguage/pandac/Main.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Config.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "panda/core/System/Process.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/core/System.h"
#include "panda/io/Console.h"
#include "panda/io/OutputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/UInt8.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Main/Arguments.h"
#include "org/pandalanguage/pandac/Main/Format.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "panda/threads/MessageQueue.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Compiler/Error.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Equatable.h"
#include "org/pandalanguage/pandac/HTMLProcessor.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/core/Immutable.h"
#include "org/pandalanguage/pandac/Position.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Main$class_type org$pandalanguage$pandac$Main$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Main$cleanup, org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File, org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File, org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream, org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT} };

typedef panda$core$String* (*$fn40)(panda$io$InputStream*);
typedef void (*$fn43)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn49)(panda$io$InputStream*);
typedef void (*$fn52)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn91)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn95)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn100)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn157)(panda$io$InputStream*);
typedef void (*$fn160)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn166)(panda$io$InputStream*);
typedef void (*$fn169)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn186)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn189)(panda$io$OutputStream*);
typedef void (*$fn191)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn194)(panda$io$OutputStream*);
typedef void (*$fn196)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn199)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn219)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn225)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn242)(panda$io$InputStream*, panda$io$OutputStream*);
typedef void (*$fn255)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn261)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn272)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn295)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn304)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn327)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn339)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn344)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn386)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn396)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn404)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn422)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn436)(panda$collections$CollectionView*);
typedef void (*$fn443)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn457)(panda$collections$CollectionView*);
typedef void (*$fn490)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn508)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn513)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn518)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn529)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn544)(org$pandalanguage$pandac$HTMLProcessor*, panda$io$File*, panda$io$File*, panda$core$String*);
typedef void (*$fn557)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn613)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn617)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn622)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn630)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn634)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn639)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn649)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn653)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn658)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn781)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn786)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e", 29, -3248623696873689241, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, 1592669972389054298, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x6d\x65\x6d", 5, 15240304310, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x70\x61\x6e\x64\x61", 15, -4231800707287400719, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 5664749286632577346, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };
static panda$core$String $s783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x6d\x65\x6d", 5, 15240304310, NULL };

void org$pandalanguage$pandac$Main$init(org$pandalanguage$pandac$Main* param0) {

// line 21
panda$core$Bit $tmp2 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3 = &param0->debug;
*$tmp3 = $tmp2;
// line 24
panda$io$File* $tmp4 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp5 = org$pandalanguage$pandac$Config$pandaSourceDir$R$panda$core$String();
panda$io$File$init$panda$core$String($tmp4, $tmp5);
panda$io$File** $tmp6 = &param0->pandaHome;
panda$io$File* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$io$File** $tmp8 = &param0->pandaHome;
*$tmp8 = $tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
return;

}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(org$pandalanguage$pandac$Main* param0, panda$io$File* param1, panda$io$File* param2, panda$core$Bit param3) {

panda$collections$Array* local0 = NULL;
panda$core$System$Process* local1 = NULL;
panda$core$Int64 local2;
// line 59
panda$collections$Array* $tmp9 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp9);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp10 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
*(&local0) = $tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
// line 60
panda$collections$Array* $tmp11 = *(&local0);
panda$core$String** $tmp12 = &param1->path;
panda$core$String* $tmp13 = *$tmp12;
panda$collections$Array$add$panda$collections$Array$T($tmp11, ((panda$core$Object*) $tmp13));
// line 61
panda$collections$Array* $tmp14 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp14, ((panda$core$Object*) &$s15));
// line 62
panda$collections$Array* $tmp16 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp16, ((panda$core$Object*) &$s17));
// line 63
panda$collections$Array* $tmp18 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp18, ((panda$core$Object*) &$s19));
// line 64
panda$core$Bit* $tmp20 = &param0->debug;
panda$core$Bit $tmp21 = *$tmp20;
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block1:;
// line 65
panda$collections$Array* $tmp23 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp23, ((panda$core$Object*) &$s24));
goto block2;
block2:;
// line 67
panda$collections$Array* $tmp25 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp25, ((panda$core$Object*) &$s26));
// line 68
panda$collections$Array* $tmp27 = *(&local0);
panda$core$String** $tmp28 = &param2->path;
panda$core$String* $tmp29 = *$tmp28;
panda$collections$Array$add$panda$collections$Array$T($tmp27, ((panda$core$Object*) $tmp29));
// line 69
panda$io$File** $tmp30 = &param0->clang;
panda$io$File* $tmp31 = *$tmp30;
panda$collections$Array* $tmp32 = *(&local0);
panda$core$System$Process* $tmp33 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q($tmp31, ((panda$collections$ListView*) $tmp32));
*(&local1) = ((panda$core$System$Process*) NULL);
panda$core$System$Process* $tmp34 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
*(&local1) = $tmp33;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// line 70
panda$io$OutputStream* $tmp35 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp36 = *(&local1);
panda$io$InputStream** $tmp37 = &$tmp36->output;
panda$io$InputStream* $tmp38 = *$tmp37;
$fn40 $tmp39 = ($fn40) $tmp38->$class->vtable[14];
panda$core$String* $tmp41 = $tmp39($tmp38);
$fn43 $tmp42 = ($fn43) $tmp35->$class->vtable[17];
$tmp42($tmp35, $tmp41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// line 71
panda$io$OutputStream* $tmp44 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp45 = *(&local1);
panda$io$InputStream** $tmp46 = &$tmp45->error;
panda$io$InputStream* $tmp47 = *$tmp46;
$fn49 $tmp48 = ($fn49) $tmp47->$class->vtable[14];
panda$core$String* $tmp50 = $tmp48($tmp47);
$fn52 $tmp51 = ($fn52) $tmp44->$class->vtable[17];
$tmp51($tmp44, $tmp50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
// line 72
panda$core$System$Process* $tmp53 = *(&local1);
panda$core$Int64 $tmp54;
panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp54, $tmp53);
*(&local2) = $tmp54;
// line 73
panda$core$Bit $tmp55 = panda$core$Bit$$NOT$R$panda$core$Bit(param3);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block3; else goto block4;
block3:;
// line 74
panda$io$File$delete(param1);
goto block4;
block4:;
// line 76
panda$core$Int64 $tmp57 = *(&local2);
panda$core$Int64 $tmp58 = (panda$core$Int64) {0};
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58.value;
bool $tmp61 = $tmp59 != $tmp60;
panda$core$Bit $tmp62 = (panda$core$Bit) {$tmp61};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block5; else goto block6;
block5:;
// line 77
panda$core$UInt8 $tmp64 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp64);
goto block6;
block6:;
// line 79
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$System$Process* $tmp65 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing p
*(&local1) = ((panda$core$System$Process*) NULL);
panda$collections$Array* $tmp66 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// unreffing args
*(&local0) = ((panda$collections$Array*) NULL);
return param2;

}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(org$pandalanguage$pandac$Main* param0, panda$io$File* param1, panda$io$File* param2, panda$core$Bit param3) {

panda$collections$Array* local0 = NULL;
panda$collections$Array* local1 = NULL;
panda$core$String* local2 = NULL;
panda$io$File* local3 = NULL;
panda$core$String* local4 = NULL;
panda$core$System$Process* local5 = NULL;
panda$core$Int64 local6;
// line 83
panda$collections$Array* $tmp67 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp67);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp68 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
*(&local0) = $tmp67;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// line 84
panda$collections$Array* $tmp69 = *(&local0);
panda$core$String** $tmp70 = &param1->path;
panda$core$String* $tmp71 = *$tmp70;
panda$collections$Array$add$panda$collections$Array$T($tmp69, ((panda$core$Object*) $tmp71));
// line 85
panda$collections$Array* $tmp72 = *(&local0);
panda$core$String* $tmp73 = org$pandalanguage$pandac$Config$pandaLibDir$R$panda$core$String();
panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s75, $tmp73);
panda$core$String* $tmp76 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp74, &$s77);
panda$collections$Array$add$panda$collections$Array$T($tmp72, ((panda$core$Object*) $tmp76));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
// line 86
panda$collections$Array* $tmp78 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp78, ((panda$core$Object*) &$s79));
// line 87
panda$collections$Array* $tmp80 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp80, ((panda$core$Object*) &$s81));
// line 88
panda$collections$Array* $tmp82 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp82, ((panda$core$Object*) &$s83));
// line 89
panda$core$String* $tmp84 = org$pandalanguage$pandac$Config$icuLibraries$R$panda$core$String();
panda$collections$Array* $tmp85 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT($tmp84, &$s86);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp87 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
*(&local1) = $tmp85;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
// line 90
panda$collections$Array* $tmp88 = *(&local1);
ITable* $tmp89 = ((panda$collections$Iterable*) $tmp88)->$class->itable;
while ($tmp89->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[0];
panda$collections$Iterator* $tmp92 = $tmp90(((panda$collections$Iterable*) $tmp88));
goto block1;
block1:;
ITable* $tmp93 = $tmp92->$class->itable;
while ($tmp93->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[0];
panda$core$Bit $tmp96 = $tmp94($tmp92);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block3; else goto block2;
block2:;
*(&local2) = ((panda$core$String*) NULL);
ITable* $tmp98 = $tmp92->$class->itable;
while ($tmp98->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[1];
panda$core$Object* $tmp101 = $tmp99($tmp92);
panda$core$Panda$unref$panda$core$Object$Q($tmp101);
panda$core$String* $tmp102 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp101)));
*(&local2) = ((panda$core$String*) $tmp101);
// line 91
panda$io$File* $tmp103 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp104 = *(&local2);
panda$io$File$init$panda$core$String($tmp103, $tmp104);
*(&local3) = ((panda$io$File*) NULL);
panda$io$File* $tmp105 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
*(&local3) = $tmp103;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
// line 92
panda$collections$Array* $tmp106 = *(&local0);
panda$io$File* $tmp107 = *(&local3);
panda$io$File* $tmp108 = panda$io$File$parent$R$panda$io$File$Q($tmp107);
panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s110, ((panda$core$Object*) $tmp108));
panda$collections$Array$add$panda$collections$Array$T($tmp106, ((panda$core$Object*) $tmp109));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
// line 93
panda$io$File* $tmp111 = *(&local3);
panda$core$String* $tmp112 = panda$io$File$simpleName$R$panda$core$String($tmp111);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp113 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
*(&local4) = $tmp112;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// line 94
panda$core$String* $tmp114 = *(&local4);
panda$core$Bit $tmp115 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp114, &$s116);
bool $tmp117 = $tmp115.value;
if ($tmp117) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp118 = (panda$core$Int64) {94};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s119, $tmp118);
abort(); // unreachable
block4:;
// line 95
panda$core$String* $tmp120 = *(&local4);
panda$core$Int64 $tmp121 = (panda$core$Int64) {3};
panda$core$Bit $tmp122 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp123 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp121, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp122);
panda$core$String* $tmp124 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp120, $tmp123);
panda$core$String* $tmp125 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
*(&local4) = $tmp124;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
// line 96
panda$collections$Array* $tmp126 = *(&local0);
panda$core$String* $tmp127 = *(&local4);
panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s129, $tmp127);
panda$collections$Array$add$panda$collections$Array$T($tmp126, ((panda$core$Object*) $tmp128));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
panda$core$String* $tmp130 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
// unreffing simpleName
*(&local4) = ((panda$core$String*) NULL);
panda$io$File* $tmp131 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing libFile
*(&local3) = ((panda$io$File*) NULL);
panda$core$String* $tmp132 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
// unreffing lib
*(&local2) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
// line 98
panda$collections$Array* $tmp133 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp133, ((panda$core$Object*) &$s134));
// line 99
panda$collections$Array* $tmp135 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp135, ((panda$core$Object*) &$s136));
// line 100
panda$core$Bit* $tmp137 = &param0->debug;
panda$core$Bit $tmp138 = *$tmp137;
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block6; else goto block7;
block6:;
// line 101
panda$collections$Array* $tmp140 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp140, ((panda$core$Object*) &$s141));
goto block7;
block7:;
// line 103
panda$collections$Array* $tmp142 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp142, ((panda$core$Object*) &$s143));
// line 104
panda$collections$Array* $tmp144 = *(&local0);
panda$core$String** $tmp145 = &param2->path;
panda$core$String* $tmp146 = *$tmp145;
panda$collections$Array$add$panda$collections$Array$T($tmp144, ((panda$core$Object*) $tmp146));
// line 105
panda$io$File** $tmp147 = &param0->clang;
panda$io$File* $tmp148 = *$tmp147;
panda$collections$Array* $tmp149 = *(&local0);
panda$core$System$Process* $tmp150 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q($tmp148, ((panda$collections$ListView*) $tmp149));
*(&local5) = ((panda$core$System$Process*) NULL);
panda$core$System$Process* $tmp151 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
*(&local5) = $tmp150;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
// line 106
panda$io$OutputStream* $tmp152 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp153 = *(&local5);
panda$io$InputStream** $tmp154 = &$tmp153->output;
panda$io$InputStream* $tmp155 = *$tmp154;
$fn157 $tmp156 = ($fn157) $tmp155->$class->vtable[14];
panda$core$String* $tmp158 = $tmp156($tmp155);
$fn160 $tmp159 = ($fn160) $tmp152->$class->vtable[17];
$tmp159($tmp152, $tmp158);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
// line 107
panda$io$OutputStream* $tmp161 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp162 = *(&local5);
panda$io$InputStream** $tmp163 = &$tmp162->error;
panda$io$InputStream* $tmp164 = *$tmp163;
$fn166 $tmp165 = ($fn166) $tmp164->$class->vtable[14];
panda$core$String* $tmp167 = $tmp165($tmp164);
$fn169 $tmp168 = ($fn169) $tmp161->$class->vtable[17];
$tmp168($tmp161, $tmp167);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
// line 108
panda$core$System$Process* $tmp170 = *(&local5);
panda$core$Int64 $tmp171;
panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp171, $tmp170);
*(&local6) = $tmp171;
// line 109
panda$core$Bit $tmp172 = panda$core$Bit$$NOT$R$panda$core$Bit(param3);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block8; else goto block9;
block8:;
// line 110
panda$io$File$delete(param1);
goto block9;
block9:;
// line 112
panda$core$Int64 $tmp174 = *(&local6);
panda$core$Int64 $tmp175 = (panda$core$Int64) {0};
int64_t $tmp176 = $tmp174.value;
int64_t $tmp177 = $tmp175.value;
bool $tmp178 = $tmp176 != $tmp177;
panda$core$Bit $tmp179 = (panda$core$Bit) {$tmp178};
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block10; else goto block11;
block10:;
// line 113
panda$core$UInt8 $tmp181 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp181);
goto block11;
block11:;
// line 115
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$System$Process* $tmp182 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
// unreffing p
*(&local5) = ((panda$core$System$Process*) NULL);
panda$collections$Array* $tmp183 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
// unreffing icuLibs
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp184 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
// unreffing args
*(&local0) = ((panda$collections$Array*) NULL);
return param2;

}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* param0, panda$io$OutputStream* param1) {

// line 119
$fn186 $tmp185 = ($fn186) param1->$class->vtable[19];
$tmp185(param1, &$s187);
// line 120
$fn189 $tmp188 = ($fn189) param1->$class->vtable[21];
$tmp188(param1);
// line 121
$fn191 $tmp190 = ($fn191) param1->$class->vtable[19];
$tmp190(param1, &$s192);
// line 122
$fn194 $tmp193 = ($fn194) param1->$class->vtable[21];
$tmp193(param1);
// line 123
$fn196 $tmp195 = ($fn196) param1->$class->vtable[19];
$tmp195(param1, &$s197);
// line 124
$fn199 $tmp198 = ($fn199) param1->$class->vtable[19];
$tmp198(param1, &$s200);
return;

}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* param0, panda$collections$ListView* param1) {

org$pandalanguage$pandac$Main$Arguments* local0 = NULL;
panda$collections$Array* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$io$File* local3 = NULL;
panda$core$Int64 local4;
panda$core$Int64 local5;
org$pandalanguage$pandac$Main$Format$nullable local6;
panda$core$String* local7 = NULL;
panda$core$Bit local8;
panda$io$OutputStream* local9 = NULL;
panda$core$String* local10 = NULL;
panda$io$File* local11 = NULL;
panda$core$String* local12 = NULL;
panda$core$Bit local13;
panda$core$String* local14 = NULL;
panda$core$Bit local15;
panda$core$String* local16 = NULL;
panda$io$File* local17 = NULL;
panda$core$String* local18 = NULL;
panda$core$Int64 local19;
org$pandalanguage$pandac$CodeGenerator* local20 = NULL;
org$pandalanguage$pandac$Compiler$Settings* local21 = NULL;
panda$threads$MessageQueue* local22 = NULL;
org$pandalanguage$pandac$Compiler* local23 = NULL;
panda$io$File* local24 = NULL;
org$pandalanguage$pandac$ClassDecl* local25 = NULL;
panda$io$File* local26 = NULL;
panda$core$Int64 local27;
org$pandalanguage$pandac$Compiler$Error* local28 = NULL;
// line 128
org$pandalanguage$pandac$Main$Arguments* $tmp201 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp201, param1);
*(&local0) = ((org$pandalanguage$pandac$Main$Arguments*) NULL);
org$pandalanguage$pandac$Main$Arguments* $tmp202 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
*(&local0) = $tmp201;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
// line 129
panda$collections$Array* $tmp203 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp203);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp204 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
*(&local1) = $tmp203;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
// line 130
panda$collections$Array* $tmp205 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp205);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp206 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
*(&local2) = $tmp205;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
// line 131
panda$collections$Array* $tmp207 = *(&local2);
panda$io$File** $tmp208 = &param0->pandaHome;
panda$io$File* $tmp209 = *$tmp208;
panda$collections$Array$add$panda$collections$Array$T($tmp207, ((panda$core$Object*) $tmp209));
// line 132
*(&local3) = ((panda$io$File*) NULL);
panda$io$File* $tmp210 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) NULL)));
*(&local3) = ((panda$io$File*) NULL);
// line 133
panda$core$Int64 $tmp211 = (panda$core$Int64) {3};
*(&local4) = $tmp211;
// line 134
panda$core$Int64 $tmp212 = (panda$core$Int64) {3};
*(&local5) = $tmp212;
// line 135
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { .nonnull = false });
// line 136
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp213 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local7) = ((panda$core$String*) NULL);
// line 137
panda$core$Bit $tmp214 = panda$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp214;
// line 138
panda$io$OutputStream* $tmp215 = panda$io$Console$errorStream$R$panda$io$OutputStream();
*(&local9) = ((panda$io$OutputStream*) NULL);
panda$io$OutputStream* $tmp216 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
*(&local9) = $tmp215;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
// line 139
goto block1;
block1:;
org$pandalanguage$pandac$Main$Arguments* $tmp217 = *(&local0);
$fn219 $tmp218 = ($fn219) $tmp217->$class->vtable[2];
panda$core$Bit $tmp220 = $tmp218($tmp217);
panda$core$Bit $tmp221 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp220);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block2; else goto block3;
block2:;
// line 140
org$pandalanguage$pandac$Main$Arguments* $tmp223 = *(&local0);
$fn225 $tmp224 = ($fn225) $tmp223->$class->vtable[3];
panda$core$String* $tmp226 = $tmp224($tmp223);
*(&local10) = ((panda$core$String*) NULL);
panda$core$String* $tmp227 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
*(&local10) = $tmp226;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
// line 141
panda$core$String* $tmp228 = *(&local10);
panda$core$Bit $tmp229 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s230);
bool $tmp231 = $tmp229.value;
if ($tmp231) goto block5; else goto block6;
block5:;
goto block4;
block6:;
panda$core$Bit $tmp232 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s233);
bool $tmp234 = $tmp232.value;
if ($tmp234) goto block7; else goto block8;
block7:;
// line 145
panda$io$File* $tmp235 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$io$File$init$panda$core$String($tmp235, &$s236);
*(&local11) = ((panda$io$File*) NULL);
panda$io$File* $tmp237 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
*(&local11) = $tmp235;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
// line 146
panda$io$InputStream* $tmp238 = panda$io$Console$inputStream$R$panda$io$InputStream();
panda$io$File* $tmp239 = *(&local11);
panda$io$OutputStream* $tmp240 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp239);
$fn242 $tmp241 = ($fn242) $tmp238->$class->vtable[16];
panda$core$Int64 $tmp243 = $tmp241($tmp238, $tmp240);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
// line 147
panda$collections$Array* $tmp244 = *(&local1);
panda$io$File* $tmp245 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp244, ((panda$core$Object*) $tmp245));
panda$io$File* $tmp246 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
// unreffing path
*(&local11) = ((panda$io$File*) NULL);
goto block4;
block8:;
panda$core$Bit $tmp247 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s248);
bool $tmp249 = $tmp247.value;
if ($tmp249) goto block9; else goto block10;
block9:;
// line 149
panda$io$File* $tmp250 = *(&local3);
panda$core$Bit $tmp251 = panda$core$Bit$init$builtin_bit($tmp250 != NULL);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block11; else goto block12;
block11:;
// line 150
panda$io$OutputStream* $tmp253 = *(&local9);
$fn255 $tmp254 = ($fn255) $tmp253->$class->vtable[19];
$tmp254($tmp253, &$s256);
// line 151
panda$core$UInt8 $tmp257 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp257);
goto block12;
block12:;
// line 153
panda$io$File* $tmp258 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
org$pandalanguage$pandac$Main$Arguments* $tmp259 = *(&local0);
$fn261 $tmp260 = ($fn261) $tmp259->$class->vtable[4];
panda$core$String* $tmp262 = $tmp260($tmp259, &$s263);
panda$io$File$init$panda$core$String($tmp258, $tmp262);
panda$io$File* $tmp264 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
*(&local3) = $tmp258;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
// line 154
panda$io$File* $tmp265 = *(&local3);
panda$io$File* $tmp266 = panda$io$File$parent$R$panda$io$File$Q($tmp265);
panda$io$File$createDirectories($tmp266);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
goto block4;
block10:;
panda$core$Bit $tmp267 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s268);
bool $tmp269 = $tmp267.value;
if ($tmp269) goto block13; else goto block14;
block13:;
// line 156
org$pandalanguage$pandac$Main$Arguments* $tmp270 = *(&local0);
$fn272 $tmp271 = ($fn272) $tmp270->$class->vtable[4];
panda$core$String* $tmp273 = $tmp271($tmp270, &$s274);
*(&local12) = ((panda$core$String*) NULL);
panda$core$String* $tmp275 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
*(&local12) = $tmp273;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
// line 157
panda$core$String* $tmp276 = *(&local12);
panda$core$Int64$nullable $tmp277 = panda$core$String$convert$R$panda$core$Int64$Q($tmp276);
*(&local4) = ((panda$core$Int64) $tmp277.value);
// line 158
panda$core$Int64 $tmp278 = *(&local4);
panda$core$Int64 $tmp279 = (panda$core$Int64) {3};
int64_t $tmp280 = $tmp278.value;
int64_t $tmp281 = $tmp279.value;
bool $tmp282 = $tmp280 > $tmp281;
panda$core$Bit $tmp283 = (panda$core$Bit) {$tmp282};
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block15; else goto block16;
block15:;
*(&local13) = $tmp283;
goto block17;
block16:;
panda$core$Int64 $tmp285 = *(&local4);
panda$core$Int64 $tmp286 = (panda$core$Int64) {0};
int64_t $tmp287 = $tmp285.value;
int64_t $tmp288 = $tmp286.value;
bool $tmp289 = $tmp287 < $tmp288;
panda$core$Bit $tmp290 = (panda$core$Bit) {$tmp289};
*(&local13) = $tmp290;
goto block17;
block17:;
panda$core$Bit $tmp291 = *(&local13);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block18; else goto block19;
block18:;
// line 159
panda$io$OutputStream* $tmp293 = panda$io$Console$errorStream$R$panda$io$OutputStream();
$fn295 $tmp294 = ($fn295) $tmp293->$class->vtable[19];
$tmp294($tmp293, &$s296);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
// line 160
panda$core$UInt8 $tmp297 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp297);
goto block19;
block19:;
panda$core$String* $tmp298 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
// unreffing level
*(&local12) = ((panda$core$String*) NULL);
goto block4;
block14:;
panda$core$Bit $tmp299 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s300);
bool $tmp301 = $tmp299.value;
if ($tmp301) goto block20; else goto block21;
block20:;
// line 163
org$pandalanguage$pandac$Main$Arguments* $tmp302 = *(&local0);
$fn304 $tmp303 = ($fn304) $tmp302->$class->vtable[4];
panda$core$String* $tmp305 = $tmp303($tmp302, &$s306);
*(&local14) = ((panda$core$String*) NULL);
panda$core$String* $tmp307 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
*(&local14) = $tmp305;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
// line 164
panda$core$String* $tmp308 = *(&local14);
panda$core$Int64$nullable $tmp309 = panda$core$String$convert$R$panda$core$Int64$Q($tmp308);
*(&local5) = ((panda$core$Int64) $tmp309.value);
// line 165
panda$core$Int64 $tmp310 = *(&local5);
panda$core$Int64 $tmp311 = (panda$core$Int64) {3};
int64_t $tmp312 = $tmp310.value;
int64_t $tmp313 = $tmp311.value;
bool $tmp314 = $tmp312 > $tmp313;
panda$core$Bit $tmp315 = (panda$core$Bit) {$tmp314};
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block22; else goto block23;
block22:;
*(&local15) = $tmp315;
goto block24;
block23:;
panda$core$Int64 $tmp317 = *(&local5);
panda$core$Int64 $tmp318 = (panda$core$Int64) {0};
int64_t $tmp319 = $tmp317.value;
int64_t $tmp320 = $tmp318.value;
bool $tmp321 = $tmp319 < $tmp320;
panda$core$Bit $tmp322 = (panda$core$Bit) {$tmp321};
*(&local15) = $tmp322;
goto block24;
block24:;
panda$core$Bit $tmp323 = *(&local15);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block25; else goto block26;
block25:;
// line 166
panda$io$OutputStream* $tmp325 = panda$io$Console$errorStream$R$panda$io$OutputStream();
$fn327 $tmp326 = ($fn327) $tmp325->$class->vtable[19];
$tmp326($tmp325, &$s328);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
// line 167
panda$core$UInt8 $tmp329 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp329);
goto block26;
block26:;
panda$core$String* $tmp330 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
// unreffing level
*(&local14) = ((panda$core$String*) NULL);
goto block4;
block21:;
panda$core$Bit $tmp331 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s332);
bool $tmp333 = $tmp331.value;
if ($tmp333) goto block27; else goto block28;
block27:;
// line 170
org$pandalanguage$pandac$Main$Format$nullable $tmp334 = *(&local6);
panda$core$Bit $tmp335 = panda$core$Bit$init$builtin_bit($tmp334.nonnull);
bool $tmp336 = $tmp335.value;
if ($tmp336) goto block29; else goto block30;
block29:;
// line 171
panda$io$OutputStream* $tmp337 = *(&local9);
$fn339 $tmp338 = ($fn339) $tmp337->$class->vtable[19];
$tmp338($tmp337, &$s340);
// line 172
panda$core$UInt8 $tmp341 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp341);
goto block30;
block30:;
// line 174
org$pandalanguage$pandac$Main$Arguments* $tmp342 = *(&local0);
$fn344 $tmp343 = ($fn344) $tmp342->$class->vtable[4];
panda$core$String* $tmp345 = $tmp343($tmp342, &$s346);
*(&local16) = ((panda$core$String*) NULL);
panda$core$String* $tmp347 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp345));
*(&local16) = $tmp345;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp345));
// line 175
panda$core$String* $tmp348 = *(&local16);
panda$core$Bit $tmp349 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp348, &$s350);
bool $tmp351 = $tmp349.value;
if ($tmp351) goto block32; else goto block33;
block32:;
// line 176
panda$core$Int64 $tmp352 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Main$Format $tmp353 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp352);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp353, true });
goto block31;
block33:;
panda$core$Bit $tmp354 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp348, &$s355);
bool $tmp356 = $tmp354.value;
if ($tmp356) goto block34; else goto block35;
block34:;
// line 177
panda$core$Int64 $tmp357 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Main$Format $tmp358 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp357);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp358, true });
goto block31;
block35:;
panda$core$Bit $tmp359 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp348, &$s360);
bool $tmp361 = $tmp359.value;
if ($tmp361) goto block36; else goto block37;
block36:;
// line 178
panda$core$Int64 $tmp362 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Main$Format $tmp363 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp362);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp363, true });
goto block31;
block37:;
panda$core$Bit $tmp364 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp348, &$s365);
bool $tmp366 = $tmp364.value;
if ($tmp366) goto block38; else goto block39;
block38:;
// line 179
panda$core$Int64 $tmp367 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Main$Format $tmp368 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp367);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp368, true });
goto block31;
block39:;
panda$core$Bit $tmp369 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp348, &$s370);
bool $tmp371 = $tmp369.value;
if ($tmp371) goto block40; else goto block41;
block40:;
// line 180
panda$core$Int64 $tmp372 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Main$Format $tmp373 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp372);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp373, true });
goto block31;
block41:;
panda$core$Bit $tmp374 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp348, &$s375);
bool $tmp376 = $tmp374.value;
if ($tmp376) goto block42; else goto block43;
block42:;
// line 181
panda$core$Int64 $tmp377 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Main$Format $tmp378 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp377);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp378, true });
goto block31;
block43:;
// line 183
panda$io$OutputStream* $tmp379 = *(&local9);
panda$core$String* $tmp380 = *(&local16);
panda$core$String* $tmp381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s382, $tmp380);
panda$core$String* $tmp383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp381, &$s384);
$fn386 $tmp385 = ($fn386) $tmp379->$class->vtable[19];
$tmp385($tmp379, $tmp383);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
// line 184
panda$core$UInt8 $tmp387 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp387);
goto block31;
block31:;
panda$core$String* $tmp388 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp388));
// unreffing f
*(&local16) = ((panda$core$String*) NULL);
goto block4;
block28:;
panda$core$Bit $tmp389 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s390);
bool $tmp391 = $tmp389.value;
if ($tmp391) goto block44; else goto block45;
block44:;
// line 187
panda$collections$Array* $tmp392 = *(&local2);
panda$io$File* $tmp393 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
org$pandalanguage$pandac$Main$Arguments* $tmp394 = *(&local0);
$fn396 $tmp395 = ($fn396) $tmp394->$class->vtable[4];
panda$core$String* $tmp397 = $tmp395($tmp394, &$s398);
panda$io$File$init$panda$core$String($tmp393, $tmp397);
panda$collections$Array$add$panda$collections$Array$T($tmp392, ((panda$core$Object*) $tmp393));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp393));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp397));
goto block4;
block45:;
panda$core$Bit $tmp399 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s400);
bool $tmp401 = $tmp399.value;
if ($tmp401) goto block46; else goto block47;
block46:;
// line 189
org$pandalanguage$pandac$Main$Arguments* $tmp402 = *(&local0);
$fn404 $tmp403 = ($fn404) $tmp402->$class->vtable[4];
panda$core$String* $tmp405 = $tmp403($tmp402, &$s406);
panda$core$String* $tmp407 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
*(&local7) = $tmp405;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
goto block4;
block47:;
// line 191
panda$core$String* $tmp408 = *(&local10);
panda$core$Bit $tmp409 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp408, &$s410);
bool $tmp411 = $tmp409.value;
if ($tmp411) goto block48; else goto block50;
block48:;
// line 192
panda$collections$Array* $tmp412 = *(&local1);
panda$io$File* $tmp413 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp414 = *(&local10);
panda$io$File$init$panda$core$String($tmp413, $tmp414);
panda$collections$Array$add$panda$collections$Array$T($tmp412, ((panda$core$Object*) $tmp413));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
goto block49;
block50:;
// line 1
// line 195
panda$io$OutputStream* $tmp415 = *(&local9);
panda$core$String* $tmp416 = *(&local10);
panda$core$String* $tmp417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s418, $tmp416);
panda$core$String* $tmp419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp417, &$s420);
$fn422 $tmp421 = ($fn422) $tmp415->$class->vtable[19];
$tmp421($tmp415, $tmp419);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp417));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp419));
// line 196
panda$core$UInt8 $tmp423 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp423);
goto block49;
block49:;
goto block4;
block4:;
panda$core$String* $tmp424 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
// unreffing a
*(&local10) = ((panda$core$String*) NULL);
goto block1;
block3:;
// line 200
panda$io$File* $tmp425 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp426 = org$pandalanguage$pandac$Config$llvmDir$R$panda$core$String();
panda$io$File$init$panda$core$String($tmp425, $tmp426);
*(&local17) = ((panda$io$File*) NULL);
panda$io$File* $tmp427 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp427));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
*(&local17) = $tmp425;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
// line 201
panda$io$File* $tmp428 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$io$File$init$panda$core$String($tmp428, &$s429);
panda$io$File** $tmp430 = &param0->clang;
panda$io$File* $tmp431 = *$tmp430;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp431));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
panda$io$File** $tmp432 = &param0->clang;
*$tmp432 = $tmp428;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
// line 202
panda$collections$Array* $tmp433 = *(&local1);
ITable* $tmp434 = ((panda$collections$CollectionView*) $tmp433)->$class->itable;
while ($tmp434->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp434 = $tmp434->next;
}
$fn436 $tmp435 = $tmp434->methods[0];
panda$core$Int64 $tmp437 = $tmp435(((panda$collections$CollectionView*) $tmp433));
panda$core$Int64 $tmp438 = (panda$core$Int64) {0};
panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp437, $tmp438);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block51; else goto block52;
block51:;
// line 203
panda$io$OutputStream* $tmp441 = *(&local9);
$fn443 $tmp442 = ($fn443) $tmp441->$class->vtable[19];
$tmp442($tmp441, &$s444);
// line 204
panda$core$UInt8 $tmp445 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp445);
goto block52;
block52:;
// line 206
org$pandalanguage$pandac$Main$Format$nullable $tmp446 = *(&local6);
panda$core$Bit $tmp447 = panda$core$Bit$init$builtin_bit(!$tmp446.nonnull);
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block53; else goto block54;
block53:;
// line 207
panda$core$Int64 $tmp449 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Main$Format $tmp450 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp449);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp450, true });
goto block54;
block54:;
// line 209
panda$io$File* $tmp451 = *(&local3);
panda$core$Bit $tmp452 = panda$core$Bit$init$builtin_bit($tmp451 == NULL);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block55; else goto block56;
block55:;
// line 210
panda$collections$Array* $tmp454 = *(&local1);
ITable* $tmp455 = ((panda$collections$CollectionView*) $tmp454)->$class->itable;
while ($tmp455->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp455 = $tmp455->next;
}
$fn457 $tmp456 = $tmp455->methods[0];
panda$core$Int64 $tmp458 = $tmp456(((panda$collections$CollectionView*) $tmp454));
panda$core$Int64 $tmp459 = (panda$core$Int64) {1};
panda$core$Bit $tmp460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp458, $tmp459);
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block57; else goto block59;
block57:;
// line 211
*(&local18) = ((panda$core$String*) NULL);
// line 212
org$pandalanguage$pandac$Main$Format$nullable $tmp462 = *(&local6);
panda$core$Int64 $tmp463 = ((org$pandalanguage$pandac$Main$Format) $tmp462.value).$rawValue;
panda$core$Int64 $tmp464 = (panda$core$Int64) {1};
panda$core$Bit $tmp465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp463, $tmp464);
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block61; else goto block62;
block61:;
// line 213
panda$core$String* $tmp467 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s468));
*(&local18) = &$s469;
goto block60;
block62:;
panda$core$Int64 $tmp470 = (panda$core$Int64) {2};
panda$core$Bit $tmp471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp463, $tmp470);
bool $tmp472 = $tmp471.value;
if ($tmp472) goto block63; else goto block64;
block63:;
// line 214
panda$core$String* $tmp473 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp473));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s474));
*(&local18) = &$s475;
goto block60;
block64:;
panda$core$Int64 $tmp476 = (panda$core$Int64) {0};
panda$core$Bit $tmp477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp463, $tmp476);
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block65; else goto block66;
block65:;
// line 215
panda$core$String* $tmp479 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp479));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s480));
*(&local18) = &$s481;
goto block60;
block66:;
panda$core$Int64 $tmp482 = (panda$core$Int64) {5};
panda$core$Bit $tmp483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp463, $tmp482);
bool $tmp484 = $tmp483.value;
if ($tmp484) goto block67; else goto block68;
block67:;
// line 216
panda$core$String* $tmp485 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp485));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s486));
*(&local18) = &$s487;
goto block60;
block68:;
// line 218
panda$io$OutputStream* $tmp488 = *(&local9);
$fn490 $tmp489 = ($fn490) $tmp488->$class->vtable[19];
$tmp489($tmp488, &$s491);
// line 219
panda$core$UInt8 $tmp492 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp492);
goto block60;
block60:;
// line 221
panda$collections$Array* $tmp493 = *(&local1);
panda$core$Int64 $tmp494 = (panda$core$Int64) {0};
panda$core$Object* $tmp495 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp493, $tmp494);
panda$core$String* $tmp496 = *(&local18);
panda$io$File* $tmp497 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp495), $tmp496);
panda$io$File* $tmp498 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp497));
*(&local3) = $tmp497;
panda$core$Panda$unref$panda$core$Object$Q($tmp495);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp497));
panda$core$String* $tmp499 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp499));
// unreffing extension
*(&local18) = ((panda$core$String*) NULL);
goto block58;
block59:;
// line 223
org$pandalanguage$pandac$Main$Format$nullable $tmp500 = *(&local6);
panda$core$Equatable* $tmp501;
if ($tmp500.nonnull) {
    org$pandalanguage$pandac$Main$Format$wrapper* $tmp502;
    $tmp502 = (org$pandalanguage$pandac$Main$Format$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Main$Format$wrapperclass);
    $tmp502->value = ((org$pandalanguage$pandac$Main$Format) $tmp500.value);
    $tmp501 = ((panda$core$Equatable*) $tmp502);
}
else {
    $tmp501 = NULL;
}
panda$core$Int64 $tmp503 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Main$Format $tmp504 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp503);
org$pandalanguage$pandac$Main$Format$wrapper* $tmp505;
$tmp505 = (org$pandalanguage$pandac$Main$Format$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Main$Format$wrapperclass);
$tmp505->value = $tmp504;
ITable* $tmp506 = $tmp501->$class->itable;
while ($tmp506->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp506 = $tmp506->next;
}
$fn508 $tmp507 = $tmp506->methods[0];
panda$core$Bit $tmp509 = $tmp507($tmp501, ((panda$core$Equatable*) $tmp505));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp505)));
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block69; else goto block71;
block69:;
// line 224
panda$io$OutputStream* $tmp511 = *(&local9);
$fn513 $tmp512 = ($fn513) $tmp511->$class->vtable[19];
$tmp512($tmp511, &$s514);
// line 225
panda$core$UInt8 $tmp515 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp515);
goto block70;
block71:;
// line 1
// line 228
panda$io$OutputStream* $tmp516 = *(&local9);
$fn518 $tmp517 = ($fn518) $tmp516->$class->vtable[19];
$tmp517($tmp516, &$s519);
// line 230
panda$core$UInt8 $tmp520 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp520);
goto block70;
block70:;
goto block58;
block58:;
goto block56;
block56:;
// line 233
org$pandalanguage$pandac$Main$Format$nullable $tmp521 = *(&local6);
panda$core$Equatable* $tmp522;
if ($tmp521.nonnull) {
    org$pandalanguage$pandac$Main$Format$wrapper* $tmp523;
    $tmp523 = (org$pandalanguage$pandac$Main$Format$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Main$Format$wrapperclass);
    $tmp523->value = ((org$pandalanguage$pandac$Main$Format) $tmp521.value);
    $tmp522 = ((panda$core$Equatable*) $tmp523);
}
else {
    $tmp522 = NULL;
}
panda$core$Int64 $tmp524 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Main$Format $tmp525 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp524);
org$pandalanguage$pandac$Main$Format$wrapper* $tmp526;
$tmp526 = (org$pandalanguage$pandac$Main$Format$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Main$Format$wrapperclass);
$tmp526->value = $tmp525;
ITable* $tmp527 = $tmp522->$class->itable;
while ($tmp527->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp527 = $tmp527->next;
}
$fn529 $tmp528 = $tmp527->methods[0];
panda$core$Bit $tmp530 = $tmp528($tmp522, ((panda$core$Equatable*) $tmp526));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp526)));
bool $tmp531 = $tmp530.value;
if ($tmp531) goto block72; else goto block73;
block72:;
// line 234
panda$core$String* $tmp532 = *(&local7);
panda$core$Bit $tmp533 = panda$core$Bit$init$builtin_bit($tmp532 == NULL);
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block74; else goto block75;
block74:;
// line 235
panda$core$String* $tmp536 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp536));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s535));
*(&local7) = &$s535;
goto block75;
block75:;
// line 237
org$pandalanguage$pandac$HTMLProcessor* $tmp537 = (org$pandalanguage$pandac$HTMLProcessor*) pandaObjectAlloc(12, (panda$core$Class*) &org$pandalanguage$pandac$HTMLProcessor$class);
org$pandalanguage$pandac$HTMLProcessor$init($tmp537);
panda$collections$Array* $tmp538 = *(&local1);
panda$core$Int64 $tmp539 = (panda$core$Int64) {0};
panda$core$Object* $tmp540 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp538, $tmp539);
panda$io$File* $tmp541 = *(&local3);
panda$core$String* $tmp542 = *(&local7);
$fn544 $tmp543 = ($fn544) $tmp537->$class->vtable[3];
$tmp543($tmp537, ((panda$io$File*) $tmp540), $tmp541, $tmp542);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
panda$core$Panda$unref$panda$core$Object$Q($tmp540);
// line 238
panda$io$File* $tmp545 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
// unreffing llvmDir
*(&local17) = ((panda$io$File*) NULL);
panda$io$OutputStream* $tmp546 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
// unreffing err
*(&local9) = ((panda$io$OutputStream*) NULL);
panda$core$String* $tmp547 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
// unreffing root
*(&local7) = ((panda$core$String*) NULL);
panda$io$File* $tmp548 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
// unreffing outFile
*(&local3) = ((panda$io$File*) NULL);
panda$collections$Array* $tmp549 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
// unreffing imports
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp550 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
// unreffing sources
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Main$Arguments* $tmp551 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp551));
// unreffing args
*(&local0) = ((org$pandalanguage$pandac$Main$Arguments*) NULL);
return;
block73:;
// line 240
panda$core$String* $tmp552 = *(&local7);
panda$core$Bit $tmp553 = panda$core$Bit$init$builtin_bit($tmp552 != NULL);
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block76; else goto block77;
block76:;
// line 241
panda$io$OutputStream* $tmp555 = *(&local9);
$fn557 $tmp556 = ($fn557) $tmp555->$class->vtable[19];
$tmp556($tmp555, &$s558);
// line 242
panda$core$UInt8 $tmp559 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp559);
goto block77;
block77:;
// line 244
// line 1
// line 246
*(&local20) = ((org$pandalanguage$pandac$CodeGenerator*) NULL);
// line 247
org$pandalanguage$pandac$Main$Format$nullable $tmp560 = *(&local6);
panda$core$Int64 $tmp561 = ((org$pandalanguage$pandac$Main$Format) $tmp560.value).$rawValue;
panda$core$Int64 $tmp562 = (panda$core$Int64) {0};
panda$core$Bit $tmp563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp561, $tmp562);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block79; else goto block80;
block80:;
panda$core$Int64 $tmp565 = (panda$core$Int64) {1};
panda$core$Bit $tmp566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp561, $tmp565);
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block79; else goto block81;
block81:;
panda$core$Int64 $tmp568 = (panda$core$Int64) {2};
panda$core$Bit $tmp569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp561, $tmp568);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block79; else goto block82;
block79:;
// line 249
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp571 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(240, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
panda$core$String* $tmp572 = org$pandalanguage$pandac$Config$llvmTriple$R$panda$core$String();
panda$io$File* $tmp573 = *(&local3);
panda$io$File* $tmp574 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File($tmp573, &$s575);
panda$io$OutputStream* $tmp576 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp574);
org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp571, $tmp572, $tmp576);
org$pandalanguage$pandac$CodeGenerator* $tmp577 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CodeGenerator*) $tmp571)));
*(&local20) = ((org$pandalanguage$pandac$CodeGenerator*) $tmp571);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp576));
goto block78;
block82:;
panda$core$Int64 $tmp578 = (panda$core$Int64) {3};
panda$core$Bit $tmp579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp561, $tmp578);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block83; else goto block84;
block83:;
// line 252
org$pandalanguage$pandac$HCodeGenerator* $tmp581 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
panda$io$File* $tmp582 = *(&local3);
org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp581, $tmp582);
org$pandalanguage$pandac$CodeGenerator* $tmp583 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp583));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CodeGenerator*) $tmp581)));
*(&local20) = ((org$pandalanguage$pandac$CodeGenerator*) $tmp581);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
goto block78;
block84:;
panda$core$Int64 $tmp584 = (panda$core$Int64) {4};
panda$core$Bit $tmp585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp561, $tmp584);
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block85; else goto block86;
block85:;
// line 254
org$pandalanguage$pandac$CCodeGenerator* $tmp587 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(264, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
panda$io$File* $tmp588 = *(&local3);
org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp587, $tmp588);
org$pandalanguage$pandac$CodeGenerator* $tmp589 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp589));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CodeGenerator*) $tmp587)));
*(&local20) = ((org$pandalanguage$pandac$CodeGenerator*) $tmp587);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp587));
goto block78;
block86:;
// line 256
panda$core$Bit $tmp590 = panda$core$Bit$init$builtin_bit(false);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block87; else goto block88;
block88:;
panda$core$Int64 $tmp592 = (panda$core$Int64) {256};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s593, $tmp592);
abort(); // unreachable
block87:;
goto block78;
block78:;
// line 258
org$pandalanguage$pandac$Compiler$Settings* $tmp594 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(49, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
panda$io$File** $tmp595 = &param0->pandaHome;
panda$io$File* $tmp596 = *$tmp595;
panda$collections$Array* $tmp597 = *(&local2);
panda$core$Int64 $tmp598 = *(&local4);
panda$core$Int64 $tmp599 = *(&local5);
panda$core$Bit* $tmp600 = &param0->debug;
panda$core$Bit $tmp601 = *$tmp600;
org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp594, $tmp596, ((panda$collections$ListView*) $tmp597), $tmp598, $tmp599, $tmp601);
*(&local21) = ((org$pandalanguage$pandac$Compiler$Settings*) NULL);
org$pandalanguage$pandac$Compiler$Settings* $tmp602 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp602));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp594));
*(&local21) = $tmp594;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp594));
// line 260
panda$threads$MessageQueue* $tmp603 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
panda$threads$MessageQueue$init($tmp603);
*(&local22) = ((panda$threads$MessageQueue*) NULL);
panda$threads$MessageQueue* $tmp604 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp604));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp603));
*(&local22) = $tmp603;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp603));
// line 261
org$pandalanguage$pandac$Compiler* $tmp605 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(272, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
panda$threads$MessageQueue* $tmp606 = *(&local22);
org$pandalanguage$pandac$CodeGenerator* $tmp607 = *(&local20);
org$pandalanguage$pandac$Compiler$Settings* $tmp608 = *(&local21);
org$pandalanguage$pandac$Compiler$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp605, $tmp606, $tmp607, $tmp608);
*(&local23) = ((org$pandalanguage$pandac$Compiler*) NULL);
org$pandalanguage$pandac$Compiler* $tmp609 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp605));
*(&local23) = $tmp605;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp605));
// line 262
panda$collections$Array* $tmp610 = *(&local1);
ITable* $tmp611 = ((panda$collections$Iterable*) $tmp610)->$class->itable;
while ($tmp611->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp611 = $tmp611->next;
}
$fn613 $tmp612 = $tmp611->methods[0];
panda$collections$Iterator* $tmp614 = $tmp612(((panda$collections$Iterable*) $tmp610));
goto block89;
block89:;
ITable* $tmp615 = $tmp614->$class->itable;
while ($tmp615->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp615 = $tmp615->next;
}
$fn617 $tmp616 = $tmp615->methods[0];
panda$core$Bit $tmp618 = $tmp616($tmp614);
bool $tmp619 = $tmp618.value;
if ($tmp619) goto block91; else goto block90;
block90:;
*(&local24) = ((panda$io$File*) NULL);
ITable* $tmp620 = $tmp614->$class->itable;
while ($tmp620->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp620 = $tmp620->next;
}
$fn622 $tmp621 = $tmp620->methods[1];
panda$core$Object* $tmp623 = $tmp621($tmp614);
panda$core$Panda$unref$panda$core$Object$Q($tmp623);
panda$io$File* $tmp624 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) $tmp623)));
*(&local24) = ((panda$io$File*) $tmp623);
// line 263
org$pandalanguage$pandac$Compiler* $tmp625 = *(&local23);
panda$io$File* $tmp626 = *(&local24);
panda$collections$ListView* $tmp627 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT($tmp625, $tmp626);
ITable* $tmp628 = ((panda$collections$Iterable*) $tmp627)->$class->itable;
while ($tmp628->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp628 = $tmp628->next;
}
$fn630 $tmp629 = $tmp628->methods[0];
panda$collections$Iterator* $tmp631 = $tmp629(((panda$collections$Iterable*) $tmp627));
goto block92;
block92:;
ITable* $tmp632 = $tmp631->$class->itable;
while ($tmp632->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp632 = $tmp632->next;
}
$fn634 $tmp633 = $tmp632->methods[0];
panda$core$Bit $tmp635 = $tmp633($tmp631);
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block94; else goto block93;
block93:;
*(&local25) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
ITable* $tmp637 = $tmp631->$class->itable;
while ($tmp637->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp637 = $tmp637->next;
}
$fn639 $tmp638 = $tmp637->methods[1];
panda$core$Object* $tmp640 = $tmp638($tmp631);
panda$core$Panda$unref$panda$core$Object$Q($tmp640);
org$pandalanguage$pandac$ClassDecl* $tmp641 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp641));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp640)));
*(&local25) = ((org$pandalanguage$pandac$ClassDecl*) $tmp640);
// line 264
org$pandalanguage$pandac$Compiler* $tmp642 = *(&local23);
org$pandalanguage$pandac$ClassDecl* $tmp643 = *(&local25);
org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl($tmp642, $tmp643);
org$pandalanguage$pandac$ClassDecl* $tmp644 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp644));
// unreffing cl
*(&local25) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block92;
block94:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp627));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp631));
panda$io$File* $tmp645 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp645));
// unreffing s
*(&local24) = ((panda$io$File*) NULL);
goto block89;
block91:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
// line 267
panda$collections$Array* $tmp646 = *(&local1);
ITable* $tmp647 = ((panda$collections$Iterable*) $tmp646)->$class->itable;
while ($tmp647->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp647 = $tmp647->next;
}
$fn649 $tmp648 = $tmp647->methods[0];
panda$collections$Iterator* $tmp650 = $tmp648(((panda$collections$Iterable*) $tmp646));
goto block95;
block95:;
ITable* $tmp651 = $tmp650->$class->itable;
while ($tmp651->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp651 = $tmp651->next;
}
$fn653 $tmp652 = $tmp651->methods[0];
panda$core$Bit $tmp654 = $tmp652($tmp650);
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block97; else goto block96;
block96:;
*(&local26) = ((panda$io$File*) NULL);
ITable* $tmp656 = $tmp650->$class->itable;
while ($tmp656->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp656 = $tmp656->next;
}
$fn658 $tmp657 = $tmp656->methods[1];
panda$core$Object* $tmp659 = $tmp657($tmp650);
panda$core$Panda$unref$panda$core$Object$Q($tmp659);
panda$io$File* $tmp660 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp660));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) $tmp659)));
*(&local26) = ((panda$io$File*) $tmp659);
// line 268
org$pandalanguage$pandac$Compiler* $tmp661 = *(&local23);
panda$io$File* $tmp662 = *(&local26);
org$pandalanguage$pandac$Compiler$compile$panda$io$File($tmp661, $tmp662);
panda$io$File* $tmp663 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp663));
// unreffing s
*(&local26) = ((panda$io$File*) NULL);
goto block95;
block97:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp650));
// line 270
org$pandalanguage$pandac$Compiler* $tmp664 = *(&local23);
org$pandalanguage$pandac$Compiler$finish($tmp664);
// line 271
panda$threads$MessageQueue* $tmp665 = *(&local22);
panda$core$Int64 $tmp666 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp665);
*(&local19) = $tmp666;
// line 272
panda$core$Int64 $tmp667 = (panda$core$Int64) {0};
panda$core$Int64 $tmp668 = *(&local19);
panda$core$Bit $tmp669 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp670 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp667, $tmp668, $tmp669);
panda$core$Int64 $tmp671 = $tmp670.min;
*(&local27) = $tmp671;
panda$core$Int64 $tmp672 = $tmp670.max;
panda$core$Bit $tmp673 = $tmp670.inclusive;
bool $tmp674 = $tmp673.value;
panda$core$Int64 $tmp675 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp676 = panda$core$Int64$convert$R$panda$core$UInt64($tmp675);
if ($tmp674) goto block101; else goto block102;
block101:;
int64_t $tmp677 = $tmp671.value;
int64_t $tmp678 = $tmp672.value;
bool $tmp679 = $tmp677 <= $tmp678;
panda$core$Bit $tmp680 = (panda$core$Bit) {$tmp679};
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block98; else goto block99;
block102:;
int64_t $tmp682 = $tmp671.value;
int64_t $tmp683 = $tmp672.value;
bool $tmp684 = $tmp682 < $tmp683;
panda$core$Bit $tmp685 = (panda$core$Bit) {$tmp684};
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block98; else goto block99;
block98:;
// line 273
panda$threads$MessageQueue* $tmp687 = *(&local22);
panda$core$Immutable* $tmp688 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T($tmp687);
*(&local28) = ((org$pandalanguage$pandac$Compiler$Error*) NULL);
org$pandalanguage$pandac$Compiler$Error* $tmp689 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp689));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$Error*) $tmp688)));
*(&local28) = ((org$pandalanguage$pandac$Compiler$Error*) $tmp688);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp688));
// line 274
org$pandalanguage$pandac$Compiler$Error* $tmp690 = *(&local28);
panda$io$File** $tmp691 = &$tmp690->file;
panda$io$File* $tmp692 = *$tmp691;
panda$core$String* $tmp693 = panda$io$File$name$R$panda$core$String($tmp692);
panda$core$String* $tmp694 = panda$core$String$convert$R$panda$core$String($tmp693);
panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp694, &$s696);
org$pandalanguage$pandac$Compiler$Error* $tmp697 = *(&local28);
org$pandalanguage$pandac$Position* $tmp698 = &$tmp697->position;
org$pandalanguage$pandac$Position $tmp699 = *$tmp698;
org$pandalanguage$pandac$Position$wrapper* $tmp700;
$tmp700 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
$tmp700->value = $tmp699;
panda$core$String* $tmp701 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp695, ((panda$core$Object*) $tmp700));
panda$core$String* $tmp702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp701, &$s703);
org$pandalanguage$pandac$Compiler$Error* $tmp704 = *(&local28);
panda$core$String** $tmp705 = &$tmp704->message;
panda$core$String* $tmp706 = *$tmp705;
panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp702, $tmp706);
panda$core$String* $tmp708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp707, &$s709);
panda$io$Console$printLine$panda$core$String($tmp708);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp693));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp702));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp707));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp708));
org$pandalanguage$pandac$Compiler$Error* $tmp710 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp710));
// unreffing error
*(&local28) = ((org$pandalanguage$pandac$Compiler$Error*) NULL);
goto block100;
block100:;
panda$core$Int64 $tmp711 = *(&local27);
int64_t $tmp712 = $tmp672.value;
int64_t $tmp713 = $tmp711.value;
int64_t $tmp714 = $tmp712 - $tmp713;
panda$core$Int64 $tmp715 = (panda$core$Int64) {$tmp714};
panda$core$UInt64 $tmp716 = panda$core$Int64$convert$R$panda$core$UInt64($tmp715);
if ($tmp674) goto block104; else goto block105;
block104:;
uint64_t $tmp717 = $tmp716.value;
uint64_t $tmp718 = $tmp676.value;
bool $tmp719 = $tmp717 >= $tmp718;
panda$core$Bit $tmp720 = (panda$core$Bit) {$tmp719};
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block103; else goto block99;
block105:;
uint64_t $tmp722 = $tmp716.value;
uint64_t $tmp723 = $tmp676.value;
bool $tmp724 = $tmp722 > $tmp723;
panda$core$Bit $tmp725 = (panda$core$Bit) {$tmp724};
bool $tmp726 = $tmp725.value;
if ($tmp726) goto block103; else goto block99;
block103:;
int64_t $tmp727 = $tmp711.value;
int64_t $tmp728 = $tmp675.value;
int64_t $tmp729 = $tmp727 + $tmp728;
panda$core$Int64 $tmp730 = (panda$core$Int64) {$tmp729};
*(&local27) = $tmp730;
goto block98;
block99:;
org$pandalanguage$pandac$Compiler* $tmp731 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp731));
// unreffing compiler
*(&local23) = ((org$pandalanguage$pandac$Compiler*) NULL);
panda$threads$MessageQueue* $tmp732 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp732));
// unreffing errorQueue
*(&local22) = ((panda$threads$MessageQueue*) NULL);
org$pandalanguage$pandac$Compiler$Settings* $tmp733 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp733));
// unreffing settings
*(&local21) = ((org$pandalanguage$pandac$Compiler$Settings*) NULL);
org$pandalanguage$pandac$CodeGenerator* $tmp734 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp734));
// unreffing cg
*(&local20) = ((org$pandalanguage$pandac$CodeGenerator*) NULL);
// line 277
panda$core$Int64 $tmp735 = *(&local19);
panda$core$Int64 $tmp736 = (panda$core$Int64) {0};
panda$core$Bit $tmp737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp735, $tmp736);
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block106; else goto block108;
block106:;
// line 278
org$pandalanguage$pandac$Main$Format$nullable $tmp739 = *(&local6);
panda$core$Int64 $tmp740 = ((org$pandalanguage$pandac$Main$Format) $tmp739.value).$rawValue;
panda$core$Int64 $tmp741 = (panda$core$Int64) {1};
panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp740, $tmp741);
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block110; else goto block111;
block110:;
// line 280
panda$io$File* $tmp744 = *(&local3);
panda$io$File* $tmp745 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File($tmp744, &$s746);
panda$io$File* $tmp747 = *(&local3);
panda$core$Bit $tmp748 = *(&local8);
panda$io$File* $tmp749 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(param0, $tmp745, $tmp747, $tmp748);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp745));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp749));
goto block109;
block111:;
panda$core$Int64 $tmp750 = (panda$core$Int64) {2};
panda$core$Bit $tmp751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp740, $tmp750);
bool $tmp752 = $tmp751.value;
if ($tmp752) goto block112; else goto block109;
block112:;
// line 282
panda$io$File* $tmp753 = *(&local3);
panda$io$File* $tmp754 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File($tmp753, &$s755);
panda$io$File* $tmp756 = *(&local3);
panda$core$Bit $tmp757 = *(&local8);
panda$io$File* $tmp758 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(param0, $tmp754, $tmp756, $tmp757);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp754));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp758));
goto block109;
block109:;
goto block107;
block108:;
// line 1
// line 286
panda$core$Int64 $tmp759 = *(&local19);
panda$core$Int64 $tmp760 = (panda$core$Int64) {1};
panda$core$Bit $tmp761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp759, $tmp760);
bool $tmp762 = $tmp761.value;
if ($tmp762) goto block113; else goto block115;
block113:;
// line 287
panda$io$Console$printLine$panda$core$String(&$s763);
goto block114;
block115:;
// line 1
// line 290
panda$core$Int64 $tmp764 = *(&local19);
panda$core$String* $tmp765 = panda$core$Int64$convert$R$panda$core$String($tmp764);
panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp765, &$s767);
panda$io$Console$printLine$panda$core$String($tmp766);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
goto block114;
block114:;
// line 292
panda$core$UInt8 $tmp768 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp768);
goto block107;
block107:;
panda$io$File* $tmp769 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp769));
// unreffing llvmDir
*(&local17) = ((panda$io$File*) NULL);
panda$io$OutputStream* $tmp770 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp770));
// unreffing err
*(&local9) = ((panda$io$OutputStream*) NULL);
panda$core$String* $tmp771 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp771));
// unreffing root
*(&local7) = ((panda$core$String*) NULL);
panda$io$File* $tmp772 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp772));
// unreffing outFile
*(&local3) = ((panda$io$File*) NULL);
panda$collections$Array* $tmp773 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp773));
// unreffing imports
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp774 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp774));
// unreffing sources
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Main$Arguments* $tmp775 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp775));
// unreffing args
*(&local0) = ((org$pandalanguage$pandac$Main$Arguments*) NULL);
return;

}
panda$core$Bit org$pandalanguage$pandac$Main$containsError$panda$core$String$R$panda$core$Bit(panda$core$String* param0) {

// line 298
panda$core$Bit $tmp776 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(param0, &$s777);
return $tmp776;

}
void pandaMain(panda$collections$ListView* param0) {

// line 303
panda$core$Int64 $tmp778 = (panda$core$Int64) {1};
ITable* $tmp779 = param0->$class->itable;
while ($tmp779->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp779 = $tmp779->next;
}
$fn781 $tmp780 = $tmp779->methods[0];
panda$core$Object* $tmp782 = $tmp780(param0, $tmp778);
ITable* $tmp784 = ((panda$core$Equatable*) ((panda$core$String*) $tmp782))->$class->itable;
while ($tmp784->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp784 = $tmp784->next;
}
$fn786 $tmp785 = $tmp784->methods[1];
panda$core$Bit $tmp787 = $tmp785(((panda$core$Equatable*) ((panda$core$String*) $tmp782)), ((panda$core$Equatable*) &$s783));
panda$core$Panda$unref$panda$core$Object$Q($tmp782);
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block1; else goto block2;
block1:;
// line 304
panda$core$Panda$disableRefErrorReporting();
goto block2;
block2:;
// line 306
org$pandalanguage$pandac$Main* $tmp789 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(33, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
org$pandalanguage$pandac$Main$init($tmp789);
org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp789, param0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp789));
return;

}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* param0) {

panda$io$File** $tmp790 = &param0->clang;
panda$io$File* $tmp791 = *$tmp790;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp791));
panda$io$File** $tmp792 = &param0->pandaHome;
panda$io$File* $tmp793 = *$tmp792;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp793));
return;

}

