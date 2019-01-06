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
typedef panda$core$Int64 (*$fn239)(panda$io$InputStream*, panda$io$OutputStream*);
typedef void (*$fn252)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn258)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn269)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn292)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn301)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn324)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn336)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn341)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn383)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn393)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn401)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
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
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x70\x61\x6e\x64\x61", 15, -4231800707287400719, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 5664749286632577346, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
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

void org$pandalanguage$pandac$Main$init(org$pandalanguage$pandac$Main* param0) {

// line 21
panda$core$Bit $tmp2 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3 = &param0->debug;
*$tmp3 = $tmp2;
// line 24
panda$io$File* $tmp4 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp5 = org$pandalanguage$pandac$Config$pandaSourceDir$R$panda$core$String();
panda$io$File$init$panda$core$String($tmp4, $tmp5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$io$File** $tmp6 = &param0->pandaHome;
panda$io$File* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$io$File** $tmp8 = &param0->pandaHome;
*$tmp8 = $tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
// unreffing REF($5:panda.io.File)
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$collections$Array* $tmp10 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
*(&local0) = $tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
// unreffing REF($1:panda.collections.Array<panda.core.String>)
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$core$System$Process* $tmp34 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
*(&local1) = $tmp33;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// unreffing REF($64:panda.core.System.Process?)
// line 70
panda$io$OutputStream* $tmp35 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp36 = *(&local1);
panda$io$InputStream** $tmp37 = &$tmp36->output;
panda$io$InputStream* $tmp38 = *$tmp37;
$fn40 $tmp39 = ($fn40) $tmp38->$class->vtable[14];
panda$core$String* $tmp41 = $tmp39($tmp38);
$fn43 $tmp42 = ($fn43) $tmp35->$class->vtable[17];
$tmp42($tmp35, $tmp41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing REF($82:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing REF($76:panda.io.OutputStream)
// line 71
panda$io$OutputStream* $tmp44 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp45 = *(&local1);
panda$io$InputStream** $tmp46 = &$tmp45->error;
panda$io$InputStream* $tmp47 = *$tmp46;
$fn49 $tmp48 = ($fn49) $tmp47->$class->vtable[14];
panda$core$String* $tmp50 = $tmp48($tmp47);
$fn52 $tmp51 = ($fn52) $tmp44->$class->vtable[17];
$tmp51($tmp44, $tmp50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
// unreffing REF($98:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
// unreffing REF($92:panda.io.OutputStream)
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
panda$collections$Array* $tmp68 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
*(&local0) = $tmp67;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing REF($1:panda.collections.Array<panda.core.String>)
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
// unreffing REF($26:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing REF($25:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing REF($24:panda.core.String)
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
panda$collections$Array* $tmp87 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
*(&local1) = $tmp85;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
// unreffing REF($55:panda.collections.Array<panda.core.String>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// unreffing REF($54:panda.core.String)
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp101)));
panda$core$String* $tmp102 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
*(&local2) = ((panda$core$String*) $tmp101);
// line 91
panda$io$File* $tmp103 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp104 = *(&local2);
panda$io$File$init$panda$core$String($tmp103, $tmp104);
*(&local3) = ((panda$io$File*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
panda$io$File* $tmp105 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
*(&local3) = $tmp103;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
// unreffing REF($94:panda.io.File)
// line 92
panda$collections$Array* $tmp106 = *(&local0);
panda$io$File* $tmp107 = *(&local3);
panda$io$File* $tmp108 = panda$io$File$parent$R$panda$io$File$Q($tmp107);
panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s110, ((panda$core$Object*) $tmp108));
panda$collections$Array$add$panda$collections$Array$T($tmp106, ((panda$core$Object*) $tmp109));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
// unreffing REF($113:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
// unreffing REF($111:panda.io.File?)
// line 93
panda$io$File* $tmp111 = *(&local3);
panda$core$String* $tmp112 = panda$io$File$simpleName$R$panda$core$String($tmp111);
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
panda$core$String* $tmp113 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
*(&local4) = $tmp112;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing REF($124:panda.core.String)
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
panda$core$String* $tmp125 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
*(&local4) = $tmp124;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
// unreffing REF($149:panda.core.String)
// line 96
panda$collections$Array* $tmp126 = *(&local0);
panda$core$String* $tmp127 = *(&local4);
panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s129, $tmp127);
panda$collections$Array$add$panda$collections$Array$T($tmp126, ((panda$core$Object*) $tmp128));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing REF($163:panda.core.String)
panda$core$String* $tmp130 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
// unreffing simpleName
*(&local4) = ((panda$core$String*) NULL);
panda$io$File* $tmp131 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing libFile
*(&local3) = ((panda$io$File*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp101);
// unreffing REF($85:panda.collections.Iterator.T)
panda$core$String* $tmp132 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
// unreffing lib
*(&local2) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
// unreffing REF($74:panda.collections.Iterator<panda.collections.Iterable.T>)
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
panda$core$System$Process* $tmp151 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
*(&local5) = $tmp150;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
// unreffing REF($229:panda.core.System.Process?)
// line 106
panda$io$OutputStream* $tmp152 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp153 = *(&local5);
panda$io$InputStream** $tmp154 = &$tmp153->output;
panda$io$InputStream* $tmp155 = *$tmp154;
$fn157 $tmp156 = ($fn157) $tmp155->$class->vtable[14];
panda$core$String* $tmp158 = $tmp156($tmp155);
$fn160 $tmp159 = ($fn160) $tmp152->$class->vtable[17];
$tmp159($tmp152, $tmp158);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
// unreffing REF($247:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
// unreffing REF($241:panda.io.OutputStream)
// line 107
panda$io$OutputStream* $tmp161 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp162 = *(&local5);
panda$io$InputStream** $tmp163 = &$tmp162->error;
panda$io$InputStream* $tmp164 = *$tmp163;
$fn166 $tmp165 = ($fn166) $tmp164->$class->vtable[14];
panda$core$String* $tmp167 = $tmp165($tmp164);
$fn169 $tmp168 = ($fn169) $tmp161->$class->vtable[17];
$tmp168($tmp161, $tmp167);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
// unreffing REF($263:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
// unreffing REF($257:panda.io.OutputStream)
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
panda$io$File* local18 = NULL;
panda$core$String* local19 = NULL;
panda$core$Int64 local20;
org$pandalanguage$pandac$CodeGenerator* local21 = NULL;
org$pandalanguage$pandac$Compiler$Settings* local22 = NULL;
panda$threads$MessageQueue* local23 = NULL;
org$pandalanguage$pandac$Compiler* local24 = NULL;
panda$io$File* local25 = NULL;
org$pandalanguage$pandac$ClassDecl* local26 = NULL;
panda$io$File* local27 = NULL;
panda$core$Int64 local28;
org$pandalanguage$pandac$Compiler$Error* local29 = NULL;
// line 128
org$pandalanguage$pandac$Main$Arguments* $tmp201 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp201, param1);
*(&local0) = ((org$pandalanguage$pandac$Main$Arguments*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
org$pandalanguage$pandac$Main$Arguments* $tmp202 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
*(&local0) = $tmp201;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
// unreffing REF($1:org.pandalanguage.pandac.Main.Arguments)
// line 129
panda$collections$Array* $tmp203 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp203);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
panda$collections$Array* $tmp204 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
*(&local1) = $tmp203;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
// unreffing REF($14:panda.collections.Array<panda.io.File>)
// line 130
panda$collections$Array* $tmp205 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp205);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
panda$collections$Array* $tmp206 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
*(&local2) = $tmp205;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
// unreffing REF($28:panda.collections.Array<panda.io.File>)
// line 131
panda$collections$Array* $tmp207 = *(&local2);
panda$io$File** $tmp208 = &param0->pandaHome;
panda$io$File* $tmp209 = *$tmp208;
panda$collections$Array$add$panda$collections$Array$T($tmp207, ((panda$core$Object*) $tmp209));
// line 132
*(&local3) = ((panda$io$File*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) NULL)));
panda$io$File* $tmp210 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp213 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
*(&local7) = ((panda$core$String*) NULL);
// line 137
panda$core$Bit $tmp214 = panda$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp214;
// line 138
panda$io$OutputStream* $tmp215 = panda$io$Console$errorStream$R$panda$io$OutputStream();
*(&local9) = ((panda$io$OutputStream*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
panda$io$OutputStream* $tmp216 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
*(&local9) = $tmp215;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
// unreffing REF($76:panda.io.OutputStream)
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
panda$core$String* $tmp227 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
*(&local10) = $tmp226;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
// unreffing REF($98:panda.core.String)
// line 141
panda$core$String* $tmp228 = *(&local10);
panda$core$Bit $tmp229 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s230);
bool $tmp231 = $tmp229.value;
if ($tmp231) goto block5; else goto block6;
block5:;
// line 143
panda$io$File* $tmp232 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$io$File$init$panda$core$String($tmp232, &$s233);
*(&local11) = ((panda$io$File*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
panda$io$File* $tmp234 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
*(&local11) = $tmp232;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
// unreffing REF($115:panda.io.File)
// line 144
panda$io$InputStream* $tmp235 = panda$io$Console$inputStream$R$panda$io$InputStream();
panda$io$File* $tmp236 = *(&local11);
panda$io$OutputStream* $tmp237 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp236);
$fn239 $tmp238 = ($fn239) $tmp235->$class->vtable[16];
panda$core$Int64 $tmp240 = $tmp238($tmp235, $tmp237);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
// unreffing REF($130:panda.io.OutputStream)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
// unreffing REF($128:panda.io.InputStream)
// line 145
panda$collections$Array* $tmp241 = *(&local1);
panda$io$File* $tmp242 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp241, ((panda$core$Object*) $tmp242));
panda$io$File* $tmp243 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
// unreffing path
*(&local11) = ((panda$io$File*) NULL);
goto block4;
block6:;
panda$core$Bit $tmp244 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s245);
bool $tmp246 = $tmp244.value;
if ($tmp246) goto block7; else goto block8;
block7:;
// line 148
panda$io$File* $tmp247 = *(&local3);
panda$core$Bit $tmp248 = panda$core$Bit$init$builtin_bit($tmp247 != NULL);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block9; else goto block10;
block9:;
// line 149
panda$io$OutputStream* $tmp250 = *(&local9);
$fn252 $tmp251 = ($fn252) $tmp250->$class->vtable[19];
$tmp251($tmp250, &$s253);
// line 150
panda$core$UInt8 $tmp254 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp254);
goto block10;
block10:;
// line 152
panda$io$File* $tmp255 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
org$pandalanguage$pandac$Main$Arguments* $tmp256 = *(&local0);
$fn258 $tmp257 = ($fn258) $tmp256->$class->vtable[4];
panda$core$String* $tmp259 = $tmp257($tmp256, &$s260);
panda$io$File$init$panda$core$String($tmp255, $tmp259);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
panda$io$File* $tmp261 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
*(&local3) = $tmp255;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp259));
// unreffing REF($172:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
// unreffing REF($169:panda.io.File)
// line 153
panda$io$File* $tmp262 = *(&local3);
panda$io$File* $tmp263 = panda$io$File$parent$R$panda$io$File$Q($tmp262);
panda$io$File$createDirectories($tmp263);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
// unreffing REF($190:panda.io.File?)
goto block4;
block8:;
panda$core$Bit $tmp264 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s265);
bool $tmp266 = $tmp264.value;
if ($tmp266) goto block11; else goto block12;
block11:;
// line 156
org$pandalanguage$pandac$Main$Arguments* $tmp267 = *(&local0);
$fn269 $tmp268 = ($fn269) $tmp267->$class->vtable[4];
panda$core$String* $tmp270 = $tmp268($tmp267, &$s271);
*(&local12) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
panda$core$String* $tmp272 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
*(&local12) = $tmp270;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
// unreffing REF($203:panda.core.String)
// line 157
panda$core$String* $tmp273 = *(&local12);
panda$core$Int64$nullable $tmp274 = panda$core$String$convert$R$panda$core$Int64$Q($tmp273);
*(&local4) = ((panda$core$Int64) $tmp274.value);
// line 158
panda$core$Int64 $tmp275 = *(&local4);
panda$core$Int64 $tmp276 = (panda$core$Int64) {3};
int64_t $tmp277 = $tmp275.value;
int64_t $tmp278 = $tmp276.value;
bool $tmp279 = $tmp277 > $tmp278;
panda$core$Bit $tmp280 = (panda$core$Bit) {$tmp279};
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block15; else goto block16;
block15:;
*(&local13) = $tmp280;
goto block17;
block16:;
panda$core$Int64 $tmp282 = *(&local4);
panda$core$Int64 $tmp283 = (panda$core$Int64) {0};
int64_t $tmp284 = $tmp282.value;
int64_t $tmp285 = $tmp283.value;
bool $tmp286 = $tmp284 < $tmp285;
panda$core$Bit $tmp287 = (panda$core$Bit) {$tmp286};
*(&local13) = $tmp287;
goto block17;
block17:;
panda$core$Bit $tmp288 = *(&local13);
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block13; else goto block14;
block13:;
// line 159
panda$io$OutputStream* $tmp290 = panda$io$Console$errorStream$R$panda$io$OutputStream();
$fn292 $tmp291 = ($fn292) $tmp290->$class->vtable[19];
$tmp291($tmp290, &$s293);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp290));
// unreffing REF($242:panda.io.OutputStream)
// line 160
panda$core$UInt8 $tmp294 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp294);
goto block14;
block14:;
panda$core$String* $tmp295 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
// unreffing level
*(&local12) = ((panda$core$String*) NULL);
goto block4;
block12:;
panda$core$Bit $tmp296 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s297);
bool $tmp298 = $tmp296.value;
if ($tmp298) goto block18; else goto block19;
block18:;
// line 164
org$pandalanguage$pandac$Main$Arguments* $tmp299 = *(&local0);
$fn301 $tmp300 = ($fn301) $tmp299->$class->vtable[4];
panda$core$String* $tmp302 = $tmp300($tmp299, &$s303);
*(&local14) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
panda$core$String* $tmp304 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
*(&local14) = $tmp302;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
// unreffing REF($264:panda.core.String)
// line 165
panda$core$String* $tmp305 = *(&local14);
panda$core$Int64$nullable $tmp306 = panda$core$String$convert$R$panda$core$Int64$Q($tmp305);
*(&local5) = ((panda$core$Int64) $tmp306.value);
// line 166
panda$core$Int64 $tmp307 = *(&local5);
panda$core$Int64 $tmp308 = (panda$core$Int64) {3};
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308.value;
bool $tmp311 = $tmp309 > $tmp310;
panda$core$Bit $tmp312 = (panda$core$Bit) {$tmp311};
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block22; else goto block23;
block22:;
*(&local15) = $tmp312;
goto block24;
block23:;
panda$core$Int64 $tmp314 = *(&local5);
panda$core$Int64 $tmp315 = (panda$core$Int64) {0};
int64_t $tmp316 = $tmp314.value;
int64_t $tmp317 = $tmp315.value;
bool $tmp318 = $tmp316 < $tmp317;
panda$core$Bit $tmp319 = (panda$core$Bit) {$tmp318};
*(&local15) = $tmp319;
goto block24;
block24:;
panda$core$Bit $tmp320 = *(&local15);
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block20; else goto block21;
block20:;
// line 167
panda$io$OutputStream* $tmp322 = panda$io$Console$errorStream$R$panda$io$OutputStream();
$fn324 $tmp323 = ($fn324) $tmp322->$class->vtable[19];
$tmp323($tmp322, &$s325);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
// unreffing REF($303:panda.io.OutputStream)
// line 168
panda$core$UInt8 $tmp326 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp326);
goto block21;
block21:;
panda$core$String* $tmp327 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
// unreffing level
*(&local14) = ((panda$core$String*) NULL);
goto block4;
block19:;
panda$core$Bit $tmp328 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s329);
bool $tmp330 = $tmp328.value;
if ($tmp330) goto block25; else goto block26;
block25:;
// line 172
org$pandalanguage$pandac$Main$Format$nullable $tmp331 = *(&local6);
panda$core$Bit $tmp332 = panda$core$Bit$init$builtin_bit($tmp331.nonnull);
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block27; else goto block28;
block27:;
// line 173
panda$io$OutputStream* $tmp334 = *(&local9);
$fn336 $tmp335 = ($fn336) $tmp334->$class->vtable[19];
$tmp335($tmp334, &$s337);
// line 174
panda$core$UInt8 $tmp338 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp338);
goto block28;
block28:;
// line 176
org$pandalanguage$pandac$Main$Arguments* $tmp339 = *(&local0);
$fn341 $tmp340 = ($fn341) $tmp339->$class->vtable[4];
panda$core$String* $tmp342 = $tmp340($tmp339, &$s343);
*(&local16) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
panda$core$String* $tmp344 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
*(&local16) = $tmp342;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
// unreffing REF($339:panda.core.String)
// line 177
panda$core$String* $tmp345 = *(&local16);
panda$core$Bit $tmp346 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp345, &$s347);
bool $tmp348 = $tmp346.value;
if ($tmp348) goto block30; else goto block31;
block30:;
// line 178
panda$core$Int64 $tmp349 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Main$Format $tmp350 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp349);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp350, true });
goto block29;
block31:;
panda$core$Bit $tmp351 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp345, &$s352);
bool $tmp353 = $tmp351.value;
if ($tmp353) goto block32; else goto block33;
block32:;
// line 179
panda$core$Int64 $tmp354 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Main$Format $tmp355 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp354);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp355, true });
goto block29;
block33:;
panda$core$Bit $tmp356 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp345, &$s357);
bool $tmp358 = $tmp356.value;
if ($tmp358) goto block34; else goto block35;
block34:;
// line 180
panda$core$Int64 $tmp359 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Main$Format $tmp360 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp359);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp360, true });
goto block29;
block35:;
panda$core$Bit $tmp361 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp345, &$s362);
bool $tmp363 = $tmp361.value;
if ($tmp363) goto block36; else goto block37;
block36:;
// line 181
panda$core$Int64 $tmp364 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Main$Format $tmp365 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp364);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp365, true });
goto block29;
block37:;
panda$core$Bit $tmp366 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp345, &$s367);
bool $tmp368 = $tmp366.value;
if ($tmp368) goto block38; else goto block39;
block38:;
// line 182
panda$core$Int64 $tmp369 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Main$Format $tmp370 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp369);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp370, true });
goto block29;
block39:;
panda$core$Bit $tmp371 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp345, &$s372);
bool $tmp373 = $tmp371.value;
if ($tmp373) goto block40; else goto block41;
block40:;
// line 183
panda$core$Int64 $tmp374 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Main$Format $tmp375 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp374);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp375, true });
goto block29;
block41:;
// line 185
panda$io$OutputStream* $tmp376 = *(&local9);
panda$core$String* $tmp377 = *(&local16);
panda$core$String* $tmp378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s379, $tmp377);
panda$core$String* $tmp380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp378, &$s381);
$fn383 $tmp382 = ($fn383) $tmp376->$class->vtable[19];
$tmp382($tmp376, $tmp380);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
// unreffing REF($410:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
// unreffing REF($409:panda.core.String)
// line 186
panda$core$UInt8 $tmp384 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp384);
goto block29;
block29:;
panda$core$String* $tmp385 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
// unreffing f
*(&local16) = ((panda$core$String*) NULL);
goto block4;
block26:;
panda$core$Bit $tmp386 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s387);
bool $tmp388 = $tmp386.value;
if ($tmp388) goto block42; else goto block43;
block42:;
// line 191
panda$collections$Array* $tmp389 = *(&local2);
panda$io$File* $tmp390 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
org$pandalanguage$pandac$Main$Arguments* $tmp391 = *(&local0);
$fn393 $tmp392 = ($fn393) $tmp391->$class->vtable[4];
panda$core$String* $tmp394 = $tmp392($tmp391, &$s395);
panda$io$File$init$panda$core$String($tmp390, $tmp394);
panda$collections$Array$add$panda$collections$Array$T($tmp389, ((panda$core$Object*) $tmp390));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
// unreffing REF($438:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
// unreffing REF($435:panda.io.File)
goto block4;
block43:;
panda$core$Bit $tmp396 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s397);
bool $tmp398 = $tmp396.value;
if ($tmp398) goto block44; else goto block45;
block44:;
// line 194
org$pandalanguage$pandac$Main$Arguments* $tmp399 = *(&local0);
$fn401 $tmp400 = ($fn401) $tmp399->$class->vtable[4];
panda$core$String* $tmp402 = $tmp400($tmp399, &$s403);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
panda$core$String* $tmp404 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp404));
*(&local7) = $tmp402;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
// unreffing REF($455:panda.core.String)
goto block4;
block45:;
// line 197
panda$core$String* $tmp405 = *(&local10);
panda$core$Bit $tmp406 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp405, &$s407);
bool $tmp408 = $tmp406.value;
if ($tmp408) goto block46; else goto block48;
block46:;
// line 198
panda$io$File* $tmp409 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp410 = *(&local10);
panda$io$File$init$panda$core$String($tmp409, $tmp410);
*(&local17) = ((panda$io$File*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
panda$io$File* $tmp411 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
*(&local17) = $tmp409;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
// unreffing REF($473:panda.io.File)
// line 200
panda$collections$Array* $tmp412 = *(&local1);
panda$io$File* $tmp413 = *(&local17);
panda$collections$Array$add$panda$collections$Array$T($tmp412, ((panda$core$Object*) $tmp413));
panda$io$File* $tmp414 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp414));
// unreffing f
*(&local17) = ((panda$io$File*) NULL);
goto block47;
block48:;
// line 1
// line 204
panda$io$OutputStream* $tmp415 = *(&local9);
panda$core$String* $tmp416 = *(&local10);
panda$core$String* $tmp417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s418, $tmp416);
panda$core$String* $tmp419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp417, &$s420);
$fn422 $tmp421 = ($fn422) $tmp415->$class->vtable[19];
$tmp421($tmp415, $tmp419);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp419));
// unreffing REF($503:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp417));
// unreffing REF($502:panda.core.String)
// line 205
panda$core$UInt8 $tmp423 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp423);
goto block47;
block47:;
goto block4;
block4:;
panda$core$String* $tmp424 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
// unreffing a
*(&local10) = ((panda$core$String*) NULL);
goto block1;
block3:;
// line 210
panda$io$File* $tmp425 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp426 = org$pandalanguage$pandac$Config$llvmDir$R$panda$core$String();
panda$io$File$init$panda$core$String($tmp425, $tmp426);
*(&local18) = ((panda$io$File*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
panda$io$File* $tmp427 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp427));
*(&local18) = $tmp425;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
// unreffing REF($525:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
// unreffing REF($524:panda.io.File)
// line 211
panda$io$File* $tmp428 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$io$File$init$panda$core$String($tmp428, &$s429);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
panda$io$File** $tmp430 = &param0->clang;
panda$io$File* $tmp431 = *$tmp430;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp431));
panda$io$File** $tmp432 = &param0->clang;
*$tmp432 = $tmp428;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
// unreffing REF($541:panda.io.File)
// line 212
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
if ($tmp440) goto block49; else goto block50;
block49:;
// line 213
panda$io$OutputStream* $tmp441 = *(&local9);
$fn443 $tmp442 = ($fn443) $tmp441->$class->vtable[19];
$tmp442($tmp441, &$s444);
// line 214
panda$core$UInt8 $tmp445 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp445);
goto block50;
block50:;
// line 216
org$pandalanguage$pandac$Main$Format$nullable $tmp446 = *(&local6);
panda$core$Bit $tmp447 = panda$core$Bit$init$builtin_bit(!$tmp446.nonnull);
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block51; else goto block52;
block51:;
// line 217
panda$core$Int64 $tmp449 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Main$Format $tmp450 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp449);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp450, true });
goto block52;
block52:;
// line 219
panda$io$File* $tmp451 = *(&local3);
panda$core$Bit $tmp452 = panda$core$Bit$init$builtin_bit($tmp451 == NULL);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block53; else goto block54;
block53:;
// line 220
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
if ($tmp461) goto block55; else goto block57;
block55:;
// line 221
*(&local19) = ((panda$core$String*) NULL);
// line 222
org$pandalanguage$pandac$Main$Format$nullable $tmp462 = *(&local6);
panda$core$Int64 $tmp463 = ((org$pandalanguage$pandac$Main$Format) $tmp462.value).$rawValue;
panda$core$Int64 $tmp464 = (panda$core$Int64) {1};
panda$core$Bit $tmp465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp463, $tmp464);
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block59; else goto block60;
block59:;
// line 223
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s467));
panda$core$String* $tmp468 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp468));
*(&local19) = &$s469;
goto block58;
block60:;
panda$core$Int64 $tmp470 = (panda$core$Int64) {2};
panda$core$Bit $tmp471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp463, $tmp470);
bool $tmp472 = $tmp471.value;
if ($tmp472) goto block61; else goto block62;
block61:;
// line 224
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s473));
panda$core$String* $tmp474 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp474));
*(&local19) = &$s475;
goto block58;
block62:;
panda$core$Int64 $tmp476 = (panda$core$Int64) {0};
panda$core$Bit $tmp477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp463, $tmp476);
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block63; else goto block64;
block63:;
// line 225
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s479));
panda$core$String* $tmp480 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
*(&local19) = &$s481;
goto block58;
block64:;
panda$core$Int64 $tmp482 = (panda$core$Int64) {5};
panda$core$Bit $tmp483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp463, $tmp482);
bool $tmp484 = $tmp483.value;
if ($tmp484) goto block65; else goto block66;
block65:;
// line 226
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s485));
panda$core$String* $tmp486 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
*(&local19) = &$s487;
goto block58;
block66:;
// line 228
panda$io$OutputStream* $tmp488 = *(&local9);
$fn490 $tmp489 = ($fn490) $tmp488->$class->vtable[19];
$tmp489($tmp488, &$s491);
// line 229
panda$core$UInt8 $tmp492 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp492);
goto block58;
block58:;
// line 232
panda$collections$Array* $tmp493 = *(&local1);
panda$core$Int64 $tmp494 = (panda$core$Int64) {0};
panda$core$Object* $tmp495 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp493, $tmp494);
panda$core$String* $tmp496 = *(&local19);
panda$io$File* $tmp497 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp495), $tmp496);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp497));
panda$io$File* $tmp498 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
*(&local3) = $tmp497;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp497));
// unreffing REF($667:panda.io.File)
panda$core$Panda$unref$panda$core$Object$Q($tmp495);
// unreffing REF($664:panda.collections.Array.T)
panda$core$String* $tmp499 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp499));
// unreffing extension
*(&local19) = ((panda$core$String*) NULL);
goto block56;
block57:;
// line 234
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
bool $tmp510 = $tmp509.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp505)));
// unreffing REF($693:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
// unreffing REF($689:panda.core.Equatable<org.pandalanguage.pandac.Main.Format>)
if ($tmp510) goto block67; else goto block69;
block67:;
// line 235
panda$io$OutputStream* $tmp511 = *(&local9);
$fn513 $tmp512 = ($fn513) $tmp511->$class->vtable[19];
$tmp512($tmp511, &$s514);
// line 236
panda$core$UInt8 $tmp515 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp515);
goto block68;
block69:;
// line 1
// line 239
panda$io$OutputStream* $tmp516 = *(&local9);
$fn518 $tmp517 = ($fn518) $tmp516->$class->vtable[19];
$tmp517($tmp516, &$s519);
// line 241
panda$core$UInt8 $tmp520 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp520);
goto block68;
block68:;
goto block56;
block56:;
goto block54;
block54:;
// line 244
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
bool $tmp531 = $tmp530.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp526)));
// unreffing REF($729:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
// unreffing REF($725:panda.core.Equatable<org.pandalanguage.pandac.Main.Format>)
if ($tmp531) goto block70; else goto block71;
block70:;
// line 245
panda$core$String* $tmp532 = *(&local7);
panda$core$Bit $tmp533 = panda$core$Bit$init$builtin_bit($tmp532 == NULL);
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block72; else goto block73;
block72:;
// line 246
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s535));
panda$core$String* $tmp536 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp536));
*(&local7) = &$s535;
goto block73;
block73:;
// line 248
org$pandalanguage$pandac$HTMLProcessor* $tmp537 = (org$pandalanguage$pandac$HTMLProcessor*) pandaObjectAlloc(12, (panda$core$Class*) &org$pandalanguage$pandac$HTMLProcessor$class);
org$pandalanguage$pandac$HTMLProcessor$init($tmp537);
panda$collections$Array* $tmp538 = *(&local1);
panda$core$Int64 $tmp539 = (panda$core$Int64) {0};
panda$core$Object* $tmp540 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp538, $tmp539);
panda$io$File* $tmp541 = *(&local3);
panda$core$String* $tmp542 = *(&local7);
$fn544 $tmp543 = ($fn544) $tmp537->$class->vtable[3];
$tmp543($tmp537, ((panda$io$File*) $tmp540), $tmp541, $tmp542);
panda$core$Panda$unref$panda$core$Object$Q($tmp540);
// unreffing REF($761:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
// unreffing REF($756:org.pandalanguage.pandac.HTMLProcessor)
// line 249
panda$io$File* $tmp545 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
// unreffing llvmDir
*(&local18) = ((panda$io$File*) NULL);
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
block71:;
// line 251
panda$core$String* $tmp552 = *(&local7);
panda$core$Bit $tmp553 = panda$core$Bit$init$builtin_bit($tmp552 != NULL);
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block74; else goto block75;
block74:;
// line 252
panda$io$OutputStream* $tmp555 = *(&local9);
$fn557 $tmp556 = ($fn557) $tmp555->$class->vtable[19];
$tmp556($tmp555, &$s558);
// line 253
panda$core$UInt8 $tmp559 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp559);
goto block75;
block75:;
// line 255
// line 1
// line 257
*(&local21) = ((org$pandalanguage$pandac$CodeGenerator*) NULL);
// line 258
org$pandalanguage$pandac$Main$Format$nullable $tmp560 = *(&local6);
panda$core$Int64 $tmp561 = ((org$pandalanguage$pandac$Main$Format) $tmp560.value).$rawValue;
panda$core$Int64 $tmp562 = (panda$core$Int64) {0};
panda$core$Bit $tmp563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp561, $tmp562);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block77; else goto block78;
block78:;
panda$core$Int64 $tmp565 = (panda$core$Int64) {1};
panda$core$Bit $tmp566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp561, $tmp565);
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block77; else goto block79;
block79:;
panda$core$Int64 $tmp568 = (panda$core$Int64) {2};
panda$core$Bit $tmp569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp561, $tmp568);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block77; else goto block80;
block77:;
// line 260
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp571 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(240, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
panda$core$String* $tmp572 = org$pandalanguage$pandac$Config$llvmTriple$R$panda$core$String();
panda$io$File* $tmp573 = *(&local3);
panda$io$File* $tmp574 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File($tmp573, &$s575);
panda$io$OutputStream* $tmp576 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp574);
org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp571, $tmp572, $tmp576);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CodeGenerator*) $tmp571)));
org$pandalanguage$pandac$CodeGenerator* $tmp577 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
*(&local21) = ((org$pandalanguage$pandac$CodeGenerator*) $tmp571);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp576));
// unreffing REF($852:panda.io.OutputStream)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
// unreffing REF($851:panda.io.File)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
// unreffing REF($848:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
// unreffing REF($847:org.pandalanguage.pandac.LLVMCodeGenerator)
goto block76;
block80:;
panda$core$Int64 $tmp578 = (panda$core$Int64) {3};
panda$core$Bit $tmp579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp561, $tmp578);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block81; else goto block82;
block81:;
// line 264
org$pandalanguage$pandac$HCodeGenerator* $tmp581 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
panda$io$File* $tmp582 = *(&local3);
org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp581, $tmp582);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CodeGenerator*) $tmp581)));
org$pandalanguage$pandac$CodeGenerator* $tmp583 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp583));
*(&local21) = ((org$pandalanguage$pandac$CodeGenerator*) $tmp581);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
// unreffing REF($879:org.pandalanguage.pandac.HCodeGenerator)
goto block76;
block82:;
panda$core$Int64 $tmp584 = (panda$core$Int64) {4};
panda$core$Bit $tmp585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp561, $tmp584);
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block83; else goto block84;
block83:;
// line 267
org$pandalanguage$pandac$CCodeGenerator* $tmp587 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(264, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
panda$io$File* $tmp588 = *(&local3);
org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp587, $tmp588);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CodeGenerator*) $tmp587)));
org$pandalanguage$pandac$CodeGenerator* $tmp589 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp589));
*(&local21) = ((org$pandalanguage$pandac$CodeGenerator*) $tmp587);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp587));
// unreffing REF($899:org.pandalanguage.pandac.CCodeGenerator)
goto block76;
block84:;
// line 270
panda$core$Bit $tmp590 = panda$core$Bit$init$builtin_bit(false);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block85; else goto block86;
block86:;
panda$core$Int64 $tmp592 = (panda$core$Int64) {270};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s593, $tmp592);
abort(); // unreachable
block85:;
goto block76;
block76:;
// line 273
org$pandalanguage$pandac$Compiler$Settings* $tmp594 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(49, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
panda$io$File** $tmp595 = &param0->pandaHome;
panda$io$File* $tmp596 = *$tmp595;
panda$collections$Array* $tmp597 = *(&local2);
panda$core$Int64 $tmp598 = *(&local4);
panda$core$Int64 $tmp599 = *(&local5);
panda$core$Bit* $tmp600 = &param0->debug;
panda$core$Bit $tmp601 = *$tmp600;
org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp594, $tmp596, ((panda$collections$ListView*) $tmp597), $tmp598, $tmp599, $tmp601);
*(&local22) = ((org$pandalanguage$pandac$Compiler$Settings*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp594));
org$pandalanguage$pandac$Compiler$Settings* $tmp602 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp602));
*(&local22) = $tmp594;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp594));
// unreffing REF($923:org.pandalanguage.pandac.Compiler.Settings)
// line 275
panda$threads$MessageQueue* $tmp603 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
panda$threads$MessageQueue$init($tmp603);
*(&local23) = ((panda$threads$MessageQueue*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp603));
panda$threads$MessageQueue* $tmp604 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp604));
*(&local23) = $tmp603;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp603));
// unreffing REF($944:panda.threads.MessageQueue<org.pandalanguage.pandac.Compiler.Error>)
// line 276
org$pandalanguage$pandac$Compiler* $tmp605 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(256, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
panda$threads$MessageQueue* $tmp606 = *(&local23);
org$pandalanguage$pandac$CodeGenerator* $tmp607 = *(&local21);
org$pandalanguage$pandac$Compiler$Settings* $tmp608 = *(&local22);
org$pandalanguage$pandac$Compiler$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp605, $tmp606, $tmp607, $tmp608);
*(&local24) = ((org$pandalanguage$pandac$Compiler*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp605));
org$pandalanguage$pandac$Compiler* $tmp609 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
*(&local24) = $tmp605;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp605));
// unreffing REF($958:org.pandalanguage.pandac.Compiler)
// line 277
panda$collections$Array* $tmp610 = *(&local1);
ITable* $tmp611 = ((panda$collections$Iterable*) $tmp610)->$class->itable;
while ($tmp611->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp611 = $tmp611->next;
}
$fn613 $tmp612 = $tmp611->methods[0];
panda$collections$Iterator* $tmp614 = $tmp612(((panda$collections$Iterable*) $tmp610));
goto block87;
block87:;
ITable* $tmp615 = $tmp614->$class->itable;
while ($tmp615->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp615 = $tmp615->next;
}
$fn617 $tmp616 = $tmp615->methods[0];
panda$core$Bit $tmp618 = $tmp616($tmp614);
bool $tmp619 = $tmp618.value;
if ($tmp619) goto block89; else goto block88;
block88:;
*(&local25) = ((panda$io$File*) NULL);
ITable* $tmp620 = $tmp614->$class->itable;
while ($tmp620->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp620 = $tmp620->next;
}
$fn622 $tmp621 = $tmp620->methods[1];
panda$core$Object* $tmp623 = $tmp621($tmp614);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) $tmp623)));
panda$io$File* $tmp624 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
*(&local25) = ((panda$io$File*) $tmp623);
// line 278
org$pandalanguage$pandac$Compiler* $tmp625 = *(&local24);
panda$io$File* $tmp626 = *(&local25);
panda$collections$ListView* $tmp627 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT($tmp625, $tmp626);
ITable* $tmp628 = ((panda$collections$Iterable*) $tmp627)->$class->itable;
while ($tmp628->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp628 = $tmp628->next;
}
$fn630 $tmp629 = $tmp628->methods[0];
panda$collections$Iterator* $tmp631 = $tmp629(((panda$collections$Iterable*) $tmp627));
goto block90;
block90:;
ITable* $tmp632 = $tmp631->$class->itable;
while ($tmp632->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp632 = $tmp632->next;
}
$fn634 $tmp633 = $tmp632->methods[0];
panda$core$Bit $tmp635 = $tmp633($tmp631);
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block92; else goto block91;
block91:;
*(&local26) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
ITable* $tmp637 = $tmp631->$class->itable;
while ($tmp637->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp637 = $tmp637->next;
}
$fn639 $tmp638 = $tmp637->methods[1];
panda$core$Object* $tmp640 = $tmp638($tmp631);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp640)));
org$pandalanguage$pandac$ClassDecl* $tmp641 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp641));
*(&local26) = ((org$pandalanguage$pandac$ClassDecl*) $tmp640);
// line 279
org$pandalanguage$pandac$Compiler* $tmp642 = *(&local24);
org$pandalanguage$pandac$ClassDecl* $tmp643 = *(&local26);
org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl($tmp642, $tmp643);
panda$core$Panda$unref$panda$core$Object$Q($tmp640);
// unreffing REF($1015:panda.collections.Iterator.T)
org$pandalanguage$pandac$ClassDecl* $tmp644 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp644));
// unreffing cl
*(&local26) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block90;
block92:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp631));
// unreffing REF($1004:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp627));
// unreffing REF($1000:panda.collections.ListView<org.pandalanguage.pandac.ClassDecl>)
panda$core$Panda$unref$panda$core$Object$Q($tmp623);
// unreffing REF($989:panda.collections.Iterator.T)
panda$io$File* $tmp645 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp645));
// unreffing s
*(&local25) = ((panda$io$File*) NULL);
goto block87;
block89:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
// unreffing REF($978:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 282
panda$collections$Array* $tmp646 = *(&local1);
ITable* $tmp647 = ((panda$collections$Iterable*) $tmp646)->$class->itable;
while ($tmp647->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp647 = $tmp647->next;
}
$fn649 $tmp648 = $tmp647->methods[0];
panda$collections$Iterator* $tmp650 = $tmp648(((panda$collections$Iterable*) $tmp646));
goto block93;
block93:;
ITable* $tmp651 = $tmp650->$class->itable;
while ($tmp651->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp651 = $tmp651->next;
}
$fn653 $tmp652 = $tmp651->methods[0];
panda$core$Bit $tmp654 = $tmp652($tmp650);
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block95; else goto block94;
block94:;
*(&local27) = ((panda$io$File*) NULL);
ITable* $tmp656 = $tmp650->$class->itable;
while ($tmp656->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp656 = $tmp656->next;
}
$fn658 $tmp657 = $tmp656->methods[1];
panda$core$Object* $tmp659 = $tmp657($tmp650);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) $tmp659)));
panda$io$File* $tmp660 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp660));
*(&local27) = ((panda$io$File*) $tmp659);
// line 283
org$pandalanguage$pandac$Compiler* $tmp661 = *(&local24);
panda$io$File* $tmp662 = *(&local27);
org$pandalanguage$pandac$Compiler$compile$panda$io$File($tmp661, $tmp662);
panda$core$Panda$unref$panda$core$Object$Q($tmp659);
// unreffing REF($1070:panda.collections.Iterator.T)
panda$io$File* $tmp663 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp663));
// unreffing s
*(&local27) = ((panda$io$File*) NULL);
goto block93;
block95:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp650));
// unreffing REF($1059:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 285
org$pandalanguage$pandac$Compiler* $tmp664 = *(&local24);
org$pandalanguage$pandac$Compiler$finish($tmp664);
// line 286
panda$threads$MessageQueue* $tmp665 = *(&local23);
panda$core$Int64 $tmp666 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp665);
*(&local20) = $tmp666;
// line 287
panda$core$Int64 $tmp667 = (panda$core$Int64) {0};
panda$core$Int64 $tmp668 = *(&local20);
panda$core$Bit $tmp669 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp670 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp667, $tmp668, $tmp669);
panda$core$Int64 $tmp671 = $tmp670.min;
*(&local28) = $tmp671;
panda$core$Int64 $tmp672 = $tmp670.max;
panda$core$Bit $tmp673 = $tmp670.inclusive;
bool $tmp674 = $tmp673.value;
panda$core$Int64 $tmp675 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp676 = panda$core$Int64$convert$R$panda$core$UInt64($tmp675);
if ($tmp674) goto block99; else goto block100;
block99:;
int64_t $tmp677 = $tmp671.value;
int64_t $tmp678 = $tmp672.value;
bool $tmp679 = $tmp677 <= $tmp678;
panda$core$Bit $tmp680 = (panda$core$Bit) {$tmp679};
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block96; else goto block97;
block100:;
int64_t $tmp682 = $tmp671.value;
int64_t $tmp683 = $tmp672.value;
bool $tmp684 = $tmp682 < $tmp683;
panda$core$Bit $tmp685 = (panda$core$Bit) {$tmp684};
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block96; else goto block97;
block96:;
// line 288
panda$threads$MessageQueue* $tmp687 = *(&local23);
panda$core$Immutable* $tmp688 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T($tmp687);
*(&local29) = ((org$pandalanguage$pandac$Compiler$Error*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$Error*) $tmp688)));
org$pandalanguage$pandac$Compiler$Error* $tmp689 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp689));
*(&local29) = ((org$pandalanguage$pandac$Compiler$Error*) $tmp688);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp688));
// unreffing REF($1130:panda.threads.MessageQueue.T)
// line 289
org$pandalanguage$pandac$Compiler$Error* $tmp690 = *(&local29);
panda$io$File** $tmp691 = &$tmp690->file;
panda$io$File* $tmp692 = *$tmp691;
panda$core$String* $tmp693 = panda$io$File$name$R$panda$core$String($tmp692);
panda$core$String* $tmp694 = panda$core$String$convert$R$panda$core$String($tmp693);
panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp694, &$s696);
org$pandalanguage$pandac$Compiler$Error* $tmp697 = *(&local29);
org$pandalanguage$pandac$Position* $tmp698 = &$tmp697->position;
org$pandalanguage$pandac$Position $tmp699 = *$tmp698;
org$pandalanguage$pandac$Position$wrapper* $tmp700;
$tmp700 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
$tmp700->value = $tmp699;
panda$core$String* $tmp701 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp695, ((panda$core$Object*) $tmp700));
panda$core$String* $tmp702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp701, &$s703);
org$pandalanguage$pandac$Compiler$Error* $tmp704 = *(&local29);
panda$core$String** $tmp705 = &$tmp704->message;
panda$core$String* $tmp706 = *$tmp705;
panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp702, $tmp706);
panda$core$String* $tmp708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp707, &$s709);
panda$io$Console$printLine$panda$core$String($tmp708);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp708));
// unreffing REF($1159:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp707));
// unreffing REF($1158:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp702));
// unreffing REF($1154:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
// unreffing REF($1153:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
// unreffing REF($1152:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
// unreffing REF($1148:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
// unreffing REF($1147:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp693));
// unreffing REF($1146:panda.core.String)
org$pandalanguage$pandac$Compiler$Error* $tmp710 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp710));
// unreffing error
*(&local29) = ((org$pandalanguage$pandac$Compiler$Error*) NULL);
goto block98;
block98:;
panda$core$Int64 $tmp711 = *(&local28);
int64_t $tmp712 = $tmp672.value;
int64_t $tmp713 = $tmp711.value;
int64_t $tmp714 = $tmp712 - $tmp713;
panda$core$Int64 $tmp715 = (panda$core$Int64) {$tmp714};
panda$core$UInt64 $tmp716 = panda$core$Int64$convert$R$panda$core$UInt64($tmp715);
if ($tmp674) goto block102; else goto block103;
block102:;
uint64_t $tmp717 = $tmp716.value;
uint64_t $tmp718 = $tmp676.value;
bool $tmp719 = $tmp717 >= $tmp718;
panda$core$Bit $tmp720 = (panda$core$Bit) {$tmp719};
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block101; else goto block97;
block103:;
uint64_t $tmp722 = $tmp716.value;
uint64_t $tmp723 = $tmp676.value;
bool $tmp724 = $tmp722 > $tmp723;
panda$core$Bit $tmp725 = (panda$core$Bit) {$tmp724};
bool $tmp726 = $tmp725.value;
if ($tmp726) goto block101; else goto block97;
block101:;
int64_t $tmp727 = $tmp711.value;
int64_t $tmp728 = $tmp675.value;
int64_t $tmp729 = $tmp727 + $tmp728;
panda$core$Int64 $tmp730 = (panda$core$Int64) {$tmp729};
*(&local28) = $tmp730;
goto block96;
block97:;
org$pandalanguage$pandac$Compiler* $tmp731 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp731));
// unreffing compiler
*(&local24) = ((org$pandalanguage$pandac$Compiler*) NULL);
panda$threads$MessageQueue* $tmp732 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp732));
// unreffing errorQueue
*(&local23) = ((panda$threads$MessageQueue*) NULL);
org$pandalanguage$pandac$Compiler$Settings* $tmp733 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp733));
// unreffing settings
*(&local22) = ((org$pandalanguage$pandac$Compiler$Settings*) NULL);
org$pandalanguage$pandac$CodeGenerator* $tmp734 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp734));
// unreffing cg
*(&local21) = ((org$pandalanguage$pandac$CodeGenerator*) NULL);
// line 292
panda$core$Int64 $tmp735 = *(&local20);
panda$core$Int64 $tmp736 = (panda$core$Int64) {0};
panda$core$Bit $tmp737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp735, $tmp736);
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block104; else goto block106;
block104:;
// line 293
org$pandalanguage$pandac$Main$Format$nullable $tmp739 = *(&local6);
panda$core$Int64 $tmp740 = ((org$pandalanguage$pandac$Main$Format) $tmp739.value).$rawValue;
panda$core$Int64 $tmp741 = (panda$core$Int64) {1};
panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp740, $tmp741);
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block108; else goto block109;
block108:;
// line 295
panda$io$File* $tmp744 = *(&local3);
panda$io$File* $tmp745 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File($tmp744, &$s746);
panda$io$File* $tmp747 = *(&local3);
panda$core$Bit $tmp748 = *(&local8);
panda$io$File* $tmp749 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(param0, $tmp745, $tmp747, $tmp748);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp749));
// unreffing REF($1257:panda.io.File)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp745));
// unreffing REF($1253:panda.io.File)
goto block107;
block109:;
panda$core$Int64 $tmp750 = (panda$core$Int64) {2};
panda$core$Bit $tmp751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp740, $tmp750);
bool $tmp752 = $tmp751.value;
if ($tmp752) goto block110; else goto block107;
block110:;
// line 298
panda$io$File* $tmp753 = *(&local3);
panda$io$File* $tmp754 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File($tmp753, &$s755);
panda$io$File* $tmp756 = *(&local3);
panda$core$Bit $tmp757 = *(&local8);
panda$io$File* $tmp758 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(param0, $tmp754, $tmp756, $tmp757);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp758));
// unreffing REF($1276:panda.io.File)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp754));
// unreffing REF($1272:panda.io.File)
goto block107;
block107:;
goto block105;
block106:;
// line 1
// line 303
panda$core$Int64 $tmp759 = *(&local20);
panda$core$Int64 $tmp760 = (panda$core$Int64) {1};
panda$core$Bit $tmp761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp759, $tmp760);
bool $tmp762 = $tmp761.value;
if ($tmp762) goto block111; else goto block113;
block111:;
// line 304
panda$io$Console$printLine$panda$core$String(&$s763);
goto block112;
block113:;
// line 1
// line 307
panda$core$Int64 $tmp764 = *(&local20);
panda$core$String* $tmp765 = panda$core$Int64$convert$R$panda$core$String($tmp764);
panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp765, &$s767);
panda$io$Console$printLine$panda$core$String($tmp766);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
// unreffing REF($1299:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
// unreffing REF($1298:panda.core.String)
goto block112;
block112:;
// line 309
panda$core$UInt8 $tmp768 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp768);
goto block105;
block105:;
panda$io$File* $tmp769 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp769));
// unreffing llvmDir
*(&local18) = ((panda$io$File*) NULL);
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

// line 315
panda$core$Bit $tmp776 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(param0, &$s777);
return $tmp776;

}
void pandaMain(panda$collections$ListView* param0) {

// line 320
panda$core$Panda$disableRefErrorReporting();
// line 321
org$pandalanguage$pandac$Main* $tmp778 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(33, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
org$pandalanguage$pandac$Main$init($tmp778);
org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp778, param0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp778));
// unreffing REF($3:org.pandalanguage.pandac.Main)
return;

}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* param0) {

// line 9
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$io$File** $tmp779 = &param0->clang;
panda$io$File* $tmp780 = *$tmp779;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp780));
panda$io$File** $tmp781 = &param0->pandaHome;
panda$io$File* $tmp782 = *$tmp781;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp782));
return;

}

