#include "org/pandalanguage/pandac/Main.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Config.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/collections/Array.h"
#include "panda/core/System/Process.h"
#include "panda/core/System.h"
#include "panda/collections/ListView.h"
#include "panda/io/OutputStream.h"
#include "panda/io/Console.h"
#include "panda/io/InputStream.h"
#include "panda/core/UInt8.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Main/Arguments.h"
#include "org/pandalanguage/pandac/Main/Format.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/HTMLProcessor.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "panda/threads/MessageQueue.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/Compiler/Error.h"
#include "panda/core/Immutable.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Main$class_type org$pandalanguage$pandac$Main$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Main$cleanup, org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$panda$core$Bit$R$panda$io$File, org$pandalanguage$pandac$Main$toAssembly$panda$io$File$panda$core$Bit$R$panda$io$File, org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File, org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File, org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream, org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT} };

typedef panda$core$String* (*$fn44)(panda$io$InputStream*);
typedef void (*$fn46)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn78)(panda$io$InputStream*);
typedef void (*$fn80)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn110)(panda$io$InputStream*);
typedef void (*$fn112)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn116)(panda$io$InputStream*);
typedef void (*$fn118)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn163)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn170)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn181)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn223)(panda$io$InputStream*);
typedef void (*$fn225)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn229)(panda$io$InputStream*);
typedef void (*$fn231)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn244)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn245)(panda$io$OutputStream*);
typedef void (*$fn247)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn248)(panda$io$OutputStream*);
typedef void (*$fn250)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn252)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn286)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn295)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn316)(panda$io$InputStream*, panda$io$OutputStream*);
typedef void (*$fn321)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn329)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn342)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn355)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn367)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn380)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn389)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn395)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn432)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn442)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn450)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn462)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn489)(panda$collections$CollectionView*);
typedef void (*$fn494)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn500)(panda$collections$CollectionView*);
typedef void (*$fn530)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn549)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn552)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn570)(org$pandalanguage$pandac$HTMLProcessor*, panda$io$File*, panda$io$File*, panda$core$String*);
typedef void (*$fn573)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn640)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn647)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn658)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn670)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn677)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn688)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn702)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn709)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn720)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e", 29, -3248623696873689241, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f\x70\x74", 4, 152597986, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x69\x6e\x74", 5, 15305173385, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73", 2, 14962, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x72\x65\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x6d\x6f\x64\x65\x6c\x3d\x70\x69\x63", 21, 7895568360759315925, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, 1592669972389054298, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x70\x61\x6e\x64\x61", 15, -4231800707287400719, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s762 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static panda$core$String $s827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };

void org$pandalanguage$pandac$Main$init(org$pandalanguage$pandac$Main* self) {
    panda$io$File* $tmp2;
    panda$io$File* $tmp3;
    panda$io$File* $tmp4;
    panda$core$String* $tmp6;
    self->opt = NULL;
    self->llc = NULL;
    self->gcc = NULL;
    self->pandaHome = NULL;
    {
        $tmp2 = self->pandaHome;
        panda$io$File* $tmp5 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$core$String* $tmp7 = org$pandalanguage$pandac$Config$pandaSourceDir$R$panda$core$String();
        $tmp6 = $tmp7;
        panda$io$File$init$panda$core$String($tmp5, $tmp6);
        $tmp4 = $tmp5;
        $tmp3 = $tmp4;
        self->pandaHome = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
panda$io$File* org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$panda$core$Bit$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm, panda$core$Int64 p_level, panda$core$Bit p_preserveTemporaries) {
    panda$core$Int64 $tmp11;
    panda$io$File* $returnValue13;
    panda$io$File* $tmp14;
    panda$io$File* dest17 = NULL;
    panda$io$File* $tmp18;
    panda$io$File* $tmp19;
    panda$collections$Array* args22 = NULL;
    panda$collections$Array* $tmp23;
    panda$collections$Array* $tmp24;
    panda$core$String* $tmp27;
    panda$core$String* $tmp28;
    panda$core$Object* $tmp30;
    panda$core$System$Process* p37 = NULL;
    panda$core$System$Process* $tmp38;
    panda$core$System$Process* $tmp39;
    panda$io$OutputStream* $tmp41;
    panda$core$String* $tmp43;
    panda$core$Int64 exitCode47;
    panda$core$Int64 $tmp48;
    panda$core$Int64 $tmp50;
    panda$core$UInt8 $tmp52;
    panda$io$File* $tmp53;
    int $tmp10;
    {
        panda$core$Int64$init$builtin_int64(&$tmp11, 0);
        panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_level, $tmp11);
        if ($tmp12.value) {
        {
            $tmp14 = p_llvm;
            $returnValue13 = $tmp14;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
            $tmp10 = 0;
            goto $l8;
            $l15:;
            return $returnValue13;
        }
        }
        panda$io$File* $tmp21 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s20);
        $tmp19 = $tmp21;
        $tmp18 = $tmp19;
        dest17 = $tmp18;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
        panda$collections$Array* $tmp25 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp25);
        $tmp24 = $tmp25;
        $tmp23 = $tmp24;
        args22 = $tmp23;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
        panda$collections$Array$add$panda$collections$Array$T(args22, ((panda$core$Object*) &$s26));
        panda$core$Int64$wrapper* $tmp31;
        $tmp31 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp31->value = p_level;
        $tmp30 = ((panda$core$Object*) $tmp31);
        panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s29, $tmp30);
        $tmp28 = $tmp32;
        panda$core$String* $tmp34 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp28, &$s33);
        $tmp27 = $tmp34;
        panda$collections$Array$add$panda$collections$Array$T(args22, ((panda$core$Object*) $tmp27));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object($tmp30);
        panda$collections$Array$add$panda$collections$Array$T(args22, ((panda$core$Object*) &$s35));
        panda$collections$Array$add$panda$collections$Array$T(args22, ((panda$core$Object*) p_llvm->path));
        panda$collections$Array$add$panda$collections$Array$T(args22, ((panda$core$Object*) &$s36));
        panda$collections$Array$add$panda$collections$Array$T(args22, ((panda$core$Object*) dest17->path));
        panda$core$System$Process* $tmp40 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->opt, ((panda$collections$ListView*) args22));
        $tmp39 = $tmp40;
        $tmp38 = $tmp39;
        p37 = $tmp38;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp38));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
        panda$io$OutputStream* $tmp42 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp41 = $tmp42;
        panda$core$String* $tmp45 = (($fn44) p37->error->$class->vtable[14])(p37->error);
        $tmp43 = $tmp45;
        (($fn46) $tmp41->$class->vtable[17])($tmp41, $tmp43);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp48, p37);
        exitCode47 = $tmp48;
        panda$core$Bit $tmp49 = panda$core$Bit$$NOT$R$panda$core$Bit(p_preserveTemporaries);
        if ($tmp49.value) {
        {
            panda$io$File$delete(p_llvm);
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp50, 0);
        panda$core$Bit $tmp51 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(exitCode47, $tmp50);
        if ($tmp51.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp52, 1);
            panda$core$System$exit$panda$core$UInt8($tmp52);
        }
        }
        $tmp53 = dest17;
        $returnValue13 = $tmp53;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
        $tmp10 = 1;
        goto $l8;
        $l54:;
        return $returnValue13;
    }
    $l8:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p37));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args22));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest17));
    dest17 = NULL;
    args22 = NULL;
    p37 = NULL;
    switch ($tmp10) {
        case 1: goto $l54;
        case 0: goto $l15;
    }
    $l56:;
    abort();
}
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$panda$core$Bit$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm, panda$core$Bit p_preserveTemporaries) {
    panda$io$File* dest60 = NULL;
    panda$io$File* $tmp61;
    panda$io$File* $tmp62;
    panda$collections$Array* args65 = NULL;
    panda$collections$Array* $tmp66;
    panda$collections$Array* $tmp67;
    panda$core$System$Process* p71 = NULL;
    panda$core$System$Process* $tmp72;
    panda$core$System$Process* $tmp73;
    panda$io$OutputStream* $tmp75;
    panda$core$String* $tmp77;
    panda$core$Int64 exitCode81;
    panda$core$Int64 $tmp82;
    panda$core$Int64 $tmp84;
    panda$core$UInt8 $tmp86;
    panda$io$File* $returnValue87;
    panda$io$File* $tmp88;
    int $tmp59;
    {
        panda$io$File* $tmp64 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s63);
        $tmp62 = $tmp64;
        $tmp61 = $tmp62;
        dest60 = $tmp61;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp61));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp62));
        panda$collections$Array* $tmp68 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp68);
        $tmp67 = $tmp68;
        $tmp66 = $tmp67;
        args65 = $tmp66;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp66));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
        panda$collections$Array$add$panda$collections$Array$T(args65, ((panda$core$Object*) p_llvm->path));
        panda$collections$Array$add$panda$collections$Array$T(args65, ((panda$core$Object*) &$s69));
        panda$collections$Array$add$panda$collections$Array$T(args65, ((panda$core$Object*) &$s70));
        panda$collections$Array$add$panda$collections$Array$T(args65, ((panda$core$Object*) dest60->path));
        panda$core$System$Process* $tmp74 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->llc, ((panda$collections$ListView*) args65));
        $tmp73 = $tmp74;
        $tmp72 = $tmp73;
        p71 = $tmp72;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp72));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
        panda$io$OutputStream* $tmp76 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp75 = $tmp76;
        panda$core$String* $tmp79 = (($fn78) p71->error->$class->vtable[14])(p71->error);
        $tmp77 = $tmp79;
        (($fn80) $tmp75->$class->vtable[17])($tmp75, $tmp77);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp77));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp82, p71);
        exitCode81 = $tmp82;
        panda$core$Bit $tmp83 = panda$core$Bit$$NOT$R$panda$core$Bit(p_preserveTemporaries);
        if ($tmp83.value) {
        {
            panda$io$File$delete(p_llvm);
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp84, 0);
        panda$core$Bit $tmp85 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(exitCode81, $tmp84);
        if ($tmp85.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp86, 1);
            panda$core$System$exit$panda$core$UInt8($tmp86);
        }
        }
        $tmp88 = dest60;
        $returnValue87 = $tmp88;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp88));
        $tmp59 = 0;
        goto $l57;
        $l89:;
        return $returnValue87;
    }
    $l57:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p71));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args65));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest60));
    dest60 = NULL;
    args65 = NULL;
    p71 = NULL;
    switch ($tmp59) {
        case 0: goto $l89;
    }
    $l91:;
    abort();
}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest, panda$core$Bit p_preserveTemporaries) {
    panda$collections$Array* args95 = NULL;
    panda$collections$Array* $tmp96;
    panda$collections$Array* $tmp97;
    panda$core$System$Process* p103 = NULL;
    panda$core$System$Process* $tmp104;
    panda$core$System$Process* $tmp105;
    panda$io$OutputStream* $tmp107;
    panda$core$String* $tmp109;
    panda$io$OutputStream* $tmp113;
    panda$core$String* $tmp115;
    panda$core$Int64 exitCode119;
    panda$core$Int64 $tmp120;
    panda$core$Int64 $tmp122;
    panda$core$UInt8 $tmp124;
    panda$io$File* $returnValue125;
    panda$io$File* $tmp126;
    int $tmp94;
    {
        panda$collections$Array* $tmp98 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp98);
        $tmp97 = $tmp98;
        $tmp96 = $tmp97;
        args95 = $tmp96;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp96));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp97));
        panda$collections$Array$add$panda$collections$Array$T(args95, ((panda$core$Object*) p_assembly->path));
        panda$collections$Array$add$panda$collections$Array$T(args95, ((panda$core$Object*) &$s99));
        panda$collections$Array$add$panda$collections$Array$T(args95, ((panda$core$Object*) &$s100));
        panda$collections$Array$add$panda$collections$Array$T(args95, ((panda$core$Object*) &$s101));
        panda$collections$Array$add$panda$collections$Array$T(args95, ((panda$core$Object*) &$s102));
        panda$collections$Array$add$panda$collections$Array$T(args95, ((panda$core$Object*) p_dest->path));
        panda$core$System$Process* $tmp106 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args95));
        $tmp105 = $tmp106;
        $tmp104 = $tmp105;
        p103 = $tmp104;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
        panda$io$OutputStream* $tmp108 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp107 = $tmp108;
        panda$core$String* $tmp111 = (($fn110) p103->output->$class->vtable[14])(p103->output);
        $tmp109 = $tmp111;
        (($fn112) $tmp107->$class->vtable[17])($tmp107, $tmp109);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp109));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp107));
        panda$io$OutputStream* $tmp114 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp113 = $tmp114;
        panda$core$String* $tmp117 = (($fn116) p103->error->$class->vtable[14])(p103->error);
        $tmp115 = $tmp117;
        (($fn118) $tmp113->$class->vtable[17])($tmp113, $tmp115);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp115));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp120, p103);
        exitCode119 = $tmp120;
        panda$core$Bit $tmp121 = panda$core$Bit$$NOT$R$panda$core$Bit(p_preserveTemporaries);
        if ($tmp121.value) {
        {
            panda$io$File$delete(p_assembly);
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp122, 0);
        panda$core$Bit $tmp123 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(exitCode119, $tmp122);
        if ($tmp123.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp124, 1);
            panda$core$System$exit$panda$core$UInt8($tmp124);
        }
        }
        $tmp126 = p_dest;
        $returnValue125 = $tmp126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
        $tmp94 = 0;
        goto $l92;
        $l127:;
        return $returnValue125;
    }
    $l92:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p103));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args95));
    args95 = NULL;
    p103 = NULL;
    switch ($tmp94) {
        case 0: goto $l127;
    }
    $l129:;
    abort();
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest, panda$core$Bit p_preserveTemporaries) {
    panda$collections$Array* args133 = NULL;
    panda$collections$Array* $tmp134;
    panda$collections$Array* $tmp135;
    panda$core$String* $tmp137;
    panda$core$String* $tmp138;
    panda$core$String* $tmp140;
    panda$collections$Array* icuLibs148 = NULL;
    panda$collections$Array* $tmp149;
    panda$collections$Array* $tmp150;
    panda$core$String* $tmp151;
    panda$collections$Iterator* Iter$131$9158 = NULL;
    panda$collections$Iterator* $tmp159;
    panda$collections$Iterator* $tmp160;
    panda$core$String* lib176 = NULL;
    panda$core$String* $tmp177;
    panda$core$Object* $tmp178;
    panda$io$File* libFile183 = NULL;
    panda$io$File* $tmp184;
    panda$io$File* $tmp185;
    panda$core$String* $tmp187;
    panda$io$File* $tmp189;
    panda$core$String* simpleName192 = NULL;
    panda$core$String* $tmp193;
    panda$core$String* $tmp194;
    panda$core$String* $tmp201;
    panda$core$String* $tmp202;
    panda$core$String* $tmp203;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp204;
    panda$core$Int64 $tmp205;
    panda$core$Bit $tmp206;
    panda$core$String* $tmp208;
    panda$core$System$Process* p216 = NULL;
    panda$core$System$Process* $tmp217;
    panda$core$System$Process* $tmp218;
    panda$io$OutputStream* $tmp220;
    panda$core$String* $tmp222;
    panda$io$OutputStream* $tmp226;
    panda$core$String* $tmp228;
    panda$core$Int64 exitCode232;
    panda$core$Int64 $tmp233;
    panda$core$Int64 $tmp235;
    panda$core$UInt8 $tmp237;
    panda$io$File* $returnValue238;
    panda$io$File* $tmp239;
    int $tmp132;
    {
        panda$collections$Array* $tmp136 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp136);
        $tmp135 = $tmp136;
        $tmp134 = $tmp135;
        args133 = $tmp134;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp134));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp135));
        panda$collections$Array$add$panda$collections$Array$T(args133, ((panda$core$Object*) p_assembly->path));
        panda$core$String* $tmp141 = org$pandalanguage$pandac$Config$pandaLibDir$R$panda$core$String();
        $tmp140 = $tmp141;
        panda$core$String* $tmp142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s139, $tmp140);
        $tmp138 = $tmp142;
        panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp138, &$s143);
        $tmp137 = $tmp144;
        panda$collections$Array$add$panda$collections$Array$T(args133, ((panda$core$Object*) $tmp137));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp137));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp138));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
        panda$collections$Array$add$panda$collections$Array$T(args133, ((panda$core$Object*) &$s145));
        panda$collections$Array$add$panda$collections$Array$T(args133, ((panda$core$Object*) &$s146));
        panda$collections$Array$add$panda$collections$Array$T(args133, ((panda$core$Object*) &$s147));
        panda$core$String* $tmp152 = org$pandalanguage$pandac$Config$icuLibraries$R$panda$core$String();
        $tmp151 = $tmp152;
        panda$collections$Array* $tmp154 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT($tmp151, &$s153);
        $tmp150 = $tmp154;
        $tmp149 = $tmp150;
        icuLibs148 = $tmp149;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
        {
            int $tmp157;
            {
                ITable* $tmp161 = ((panda$collections$Iterable*) icuLibs148)->$class->itable;
                while ($tmp161->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp161 = $tmp161->next;
                }
                $fn163 $tmp162 = $tmp161->methods[0];
                panda$collections$Iterator* $tmp164 = $tmp162(((panda$collections$Iterable*) icuLibs148));
                $tmp160 = $tmp164;
                $tmp159 = $tmp160;
                Iter$131$9158 = $tmp159;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp159));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp160));
                $l165:;
                ITable* $tmp168 = Iter$131$9158->$class->itable;
                while ($tmp168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp168 = $tmp168->next;
                }
                $fn170 $tmp169 = $tmp168->methods[0];
                panda$core$Bit $tmp171 = $tmp169(Iter$131$9158);
                panda$core$Bit $tmp172 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp171);
                bool $tmp167 = $tmp172.value;
                if (!$tmp167) goto $l166;
                {
                    int $tmp175;
                    {
                        ITable* $tmp179 = Iter$131$9158->$class->itable;
                        while ($tmp179->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp179 = $tmp179->next;
                        }
                        $fn181 $tmp180 = $tmp179->methods[1];
                        panda$core$Object* $tmp182 = $tmp180(Iter$131$9158);
                        $tmp178 = $tmp182;
                        $tmp177 = ((panda$core$String*) $tmp178);
                        lib176 = $tmp177;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp177));
                        panda$core$Panda$unref$panda$core$Object($tmp178);
                        panda$io$File* $tmp186 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$io$File$init$panda$core$String($tmp186, lib176);
                        $tmp185 = $tmp186;
                        $tmp184 = $tmp185;
                        libFile183 = $tmp184;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
                        panda$io$File* $tmp190 = panda$io$File$parent$R$panda$io$File$Q(libFile183);
                        $tmp189 = $tmp190;
                        panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s188, ((panda$core$Object*) $tmp189));
                        $tmp187 = $tmp191;
                        panda$collections$Array$add$panda$collections$Array$T(args133, ((panda$core$Object*) $tmp187));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp189));
                        panda$core$String* $tmp195 = panda$io$File$simpleName$R$panda$core$String(libFile183);
                        $tmp194 = $tmp195;
                        $tmp193 = $tmp194;
                        simpleName192 = $tmp193;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
                        panda$core$Bit $tmp197 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(simpleName192, &$s196);
                        if ($tmp197.value) goto $l198; else goto $l199;
                        $l199:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s200, (panda$core$Int64) { 135 });
                        abort();
                        $l198:;
                        {
                            $tmp201 = simpleName192;
                            panda$core$Int64$init$builtin_int64(&$tmp205, 3);
                            panda$core$Bit$init$builtin_bit(&$tmp206, false);
                            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp204, ((panda$core$Int64$nullable) { $tmp205, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp206);
                            panda$core$String* $tmp207 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(simpleName192, $tmp204);
                            $tmp203 = $tmp207;
                            $tmp202 = $tmp203;
                            simpleName192 = $tmp202;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp202));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp201));
                        }
                        panda$core$String* $tmp210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s209, simpleName192);
                        $tmp208 = $tmp210;
                        panda$collections$Array$add$panda$collections$Array$T(args133, ((panda$core$Object*) $tmp208));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp208));
                    }
                    $tmp175 = -1;
                    goto $l173;
                    $l173:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) simpleName192));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) libFile183));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) lib176));
                    lib176 = NULL;
                    libFile183 = NULL;
                    simpleName192 = NULL;
                    switch ($tmp175) {
                        case -1: goto $l211;
                    }
                    $l211:;
                }
                goto $l165;
                $l166:;
            }
            $tmp157 = -1;
            goto $l155;
            $l155:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$131$9158));
            Iter$131$9158 = NULL;
            switch ($tmp157) {
                case -1: goto $l212;
            }
            $l212:;
        }
        panda$collections$Array$add$panda$collections$Array$T(args133, ((panda$core$Object*) &$s213));
        panda$collections$Array$add$panda$collections$Array$T(args133, ((panda$core$Object*) &$s214));
        panda$collections$Array$add$panda$collections$Array$T(args133, ((panda$core$Object*) &$s215));
        panda$collections$Array$add$panda$collections$Array$T(args133, ((panda$core$Object*) p_dest->path));
        panda$core$System$Process* $tmp219 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args133));
        $tmp218 = $tmp219;
        $tmp217 = $tmp218;
        p216 = $tmp217;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
        panda$io$OutputStream* $tmp221 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp220 = $tmp221;
        panda$core$String* $tmp224 = (($fn223) p216->output->$class->vtable[14])(p216->output);
        $tmp222 = $tmp224;
        (($fn225) $tmp220->$class->vtable[17])($tmp220, $tmp222);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp222));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
        panda$io$OutputStream* $tmp227 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp226 = $tmp227;
        panda$core$String* $tmp230 = (($fn229) p216->error->$class->vtable[14])(p216->error);
        $tmp228 = $tmp230;
        (($fn231) $tmp226->$class->vtable[17])($tmp226, $tmp228);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp228));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp226));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp233, p216);
        exitCode232 = $tmp233;
        panda$core$Bit $tmp234 = panda$core$Bit$$NOT$R$panda$core$Bit(p_preserveTemporaries);
        if ($tmp234.value) {
        {
            panda$io$File$delete(p_assembly);
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp235, 0);
        panda$core$Bit $tmp236 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(exitCode232, $tmp235);
        if ($tmp236.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp237, 1);
            panda$core$System$exit$panda$core$UInt8($tmp237);
        }
        }
        $tmp239 = p_dest;
        $returnValue238 = $tmp239;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp239));
        $tmp132 = 0;
        goto $l130;
        $l240:;
        return $returnValue238;
    }
    $l130:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p216));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) icuLibs148));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args133));
    args133 = NULL;
    icuLibs148 = NULL;
    p216 = NULL;
    switch ($tmp132) {
        case 0: goto $l240;
    }
    $l242:;
    abort();
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn244) p_out->$class->vtable[19])(p_out, &$s243);
    (($fn245) p_out->$class->vtable[21])(p_out);
    (($fn247) p_out->$class->vtable[19])(p_out, &$s246);
    (($fn248) p_out->$class->vtable[21])(p_out);
    (($fn250) p_out->$class->vtable[19])(p_out, &$s249);
    (($fn252) p_out->$class->vtable[19])(p_out, &$s251);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args256 = NULL;
    org$pandalanguage$pandac$Main$Arguments* $tmp257;
    org$pandalanguage$pandac$Main$Arguments* $tmp258;
    panda$collections$Array* sources260 = NULL;
    panda$collections$Array* $tmp261;
    panda$collections$Array* $tmp262;
    panda$collections$Array* imports264 = NULL;
    panda$collections$Array* $tmp265;
    panda$collections$Array* $tmp266;
    panda$io$File* outFile268 = NULL;
    panda$io$File* $tmp269;
    panda$core$Int64 optimizationLevel270;
    panda$core$Int64 $tmp271;
    panda$core$Int64 safetyLevel272;
    panda$core$Int64 $tmp273;
    org$pandalanguage$pandac$Main$Format$nullable format274;
    panda$core$String* root275 = NULL;
    panda$core$String* $tmp276;
    panda$core$Bit preserveTemporaries277;
    panda$core$Bit $tmp278;
    panda$io$OutputStream* err279 = NULL;
    panda$io$OutputStream* $tmp280;
    panda$io$OutputStream* $tmp281;
    panda$core$String* a292 = NULL;
    panda$core$String* $tmp293;
    panda$core$String* $tmp294;
    panda$core$String* $match$179_13300 = NULL;
    panda$core$String* $tmp301;
    panda$io$File* path307 = NULL;
    panda$io$File* $tmp308;
    panda$io$File* $tmp309;
    panda$io$InputStream* $tmp312;
    panda$io$OutputStream* $tmp314;
    panda$core$UInt8 $tmp322;
    panda$io$File* $tmp323;
    panda$io$File* $tmp324;
    panda$io$File* $tmp325;
    panda$core$String* $tmp327;
    panda$io$File* $tmp331;
    panda$core$String* level338 = NULL;
    panda$core$String* $tmp339;
    panda$core$String* $tmp340;
    panda$core$Int64 $tmp346;
    panda$core$Int64 $tmp349;
    panda$io$OutputStream* $tmp352;
    panda$core$UInt8 $tmp356;
    panda$core$String* level363 = NULL;
    panda$core$String* $tmp364;
    panda$core$String* $tmp365;
    panda$core$Int64 $tmp371;
    panda$core$Int64 $tmp374;
    panda$io$OutputStream* $tmp377;
    panda$core$UInt8 $tmp381;
    panda$core$UInt8 $tmp390;
    panda$core$String* f391 = NULL;
    panda$core$String* $tmp392;
    panda$core$String* $tmp393;
    panda$core$String* $match$211_21400 = NULL;
    panda$core$String* $tmp401;
    org$pandalanguage$pandac$Main$Format $tmp404;
    panda$core$Int64 $tmp405;
    org$pandalanguage$pandac$Main$Format $tmp408;
    panda$core$Int64 $tmp409;
    org$pandalanguage$pandac$Main$Format $tmp412;
    panda$core$Int64 $tmp413;
    org$pandalanguage$pandac$Main$Format $tmp416;
    panda$core$Int64 $tmp417;
    org$pandalanguage$pandac$Main$Format $tmp420;
    panda$core$Int64 $tmp421;
    org$pandalanguage$pandac$Main$Format $tmp424;
    panda$core$Int64 $tmp425;
    panda$core$String* $tmp426;
    panda$core$String* $tmp427;
    panda$core$UInt8 $tmp433;
    panda$io$File* $tmp438;
    panda$core$String* $tmp440;
    panda$core$String* $tmp446;
    panda$core$String* $tmp447;
    panda$core$String* $tmp448;
    panda$io$File* $tmp454;
    panda$core$String* $tmp456;
    panda$core$String* $tmp457;
    panda$core$UInt8 $tmp463;
    panda$io$File* llvmDir466 = NULL;
    panda$io$File* $tmp467;
    panda$io$File* $tmp468;
    panda$core$String* $tmp470;
    panda$io$File* $tmp472;
    panda$io$File* $tmp473;
    panda$io$File* $tmp474;
    panda$io$File* $tmp477;
    panda$io$File* $tmp478;
    panda$io$File* $tmp479;
    panda$io$File* $tmp482;
    panda$io$File* $tmp483;
    panda$io$File* $tmp484;
    panda$core$Int64 $tmp491;
    panda$core$UInt8 $tmp495;
    org$pandalanguage$pandac$Main$Format $tmp496;
    panda$core$Int64 $tmp497;
    panda$core$Int64 $tmp502;
    panda$core$String* extension507 = NULL;
    org$pandalanguage$pandac$Main$Format$nullable $match$250_17508;
    panda$core$Int64 $tmp509;
    panda$core$String* $tmp511;
    panda$core$String* $tmp512;
    panda$core$Int64 $tmp514;
    panda$core$String* $tmp516;
    panda$core$String* $tmp517;
    panda$core$Int64 $tmp519;
    panda$core$String* $tmp521;
    panda$core$String* $tmp522;
    panda$core$Int64 $tmp524;
    panda$core$String* $tmp526;
    panda$core$String* $tmp527;
    panda$core$UInt8 $tmp531;
    panda$io$File* $tmp532;
    panda$io$File* $tmp533;
    panda$io$File* $tmp534;
    panda$core$Object* $tmp535;
    panda$core$Int64 $tmp536;
    org$pandalanguage$pandac$Main$Format$nullable $tmp540;
    panda$core$Int64 $tmp545;
    panda$core$Bit $tmp547;
    panda$core$UInt8 $tmp550;
    panda$core$UInt8 $tmp553;
    org$pandalanguage$pandac$Main$Format$nullable $tmp554;
    panda$core$Int64 $tmp559;
    panda$core$Bit $tmp561;
    panda$core$String* $tmp562;
    panda$core$String* $tmp563;
    org$pandalanguage$pandac$HTMLProcessor* $tmp565;
    panda$core$Object* $tmp567;
    panda$core$Int64 $tmp568;
    panda$core$UInt8 $tmp574;
    panda$core$Int64 errorCount575;
    org$pandalanguage$pandac$CodeGenerator* cg579 = NULL;
    org$pandalanguage$pandac$Main$Format$nullable $match$285_13580;
    panda$core$Int64 $tmp583;
    panda$core$Int64 $tmp586;
    panda$core$Int64 $tmp590;
    org$pandalanguage$pandac$CodeGenerator* $tmp593;
    org$pandalanguage$pandac$CodeGenerator* $tmp594;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp595;
    panda$core$String* $tmp597;
    panda$io$OutputStream* $tmp599;
    panda$io$File* $tmp600;
    panda$core$Int64 $tmp604;
    org$pandalanguage$pandac$CodeGenerator* $tmp606;
    org$pandalanguage$pandac$CodeGenerator* $tmp607;
    org$pandalanguage$pandac$HCodeGenerator* $tmp608;
    panda$core$Int64 $tmp610;
    org$pandalanguage$pandac$CodeGenerator* $tmp612;
    org$pandalanguage$pandac$CodeGenerator* $tmp613;
    org$pandalanguage$pandac$CCodeGenerator* $tmp614;
    panda$core$Bit $tmp616;
    org$pandalanguage$pandac$Compiler$Settings* settings620 = NULL;
    org$pandalanguage$pandac$Compiler$Settings* $tmp621;
    org$pandalanguage$pandac$Compiler$Settings* $tmp622;
    panda$threads$MessageQueue* errorQueue624 = NULL;
    panda$threads$MessageQueue* $tmp625;
    panda$threads$MessageQueue* $tmp626;
    org$pandalanguage$pandac$Compiler* compiler628 = NULL;
    org$pandalanguage$pandac$Compiler* $tmp629;
    org$pandalanguage$pandac$Compiler* $tmp630;
    panda$collections$Iterator* Iter$299$13635 = NULL;
    panda$collections$Iterator* $tmp636;
    panda$collections$Iterator* $tmp637;
    panda$io$File* s653 = NULL;
    panda$io$File* $tmp654;
    panda$core$Object* $tmp655;
    panda$collections$Iterator* Iter$300$17663 = NULL;
    panda$collections$Iterator* $tmp664;
    panda$collections$Iterator* $tmp665;
    panda$collections$ListView* $tmp666;
    org$pandalanguage$pandac$ClassDecl* cl683 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp684;
    panda$core$Object* $tmp685;
    panda$collections$Iterator* Iter$304$13697 = NULL;
    panda$collections$Iterator* $tmp698;
    panda$collections$Iterator* $tmp699;
    panda$io$File* s715 = NULL;
    panda$io$File* $tmp716;
    panda$core$Object* $tmp717;
    panda$core$Range$LTpanda$core$Int64$GT $tmp725;
    panda$core$Int64 $tmp726;
    panda$core$Bit $tmp727;
    org$pandalanguage$pandac$Compiler$Error* error744 = NULL;
    org$pandalanguage$pandac$Compiler$Error* $tmp745;
    panda$core$Immutable* $tmp746;
    panda$core$String* $tmp748;
    panda$core$String* $tmp749;
    panda$core$String* $tmp750;
    panda$core$String* $tmp751;
    panda$core$String* $tmp752;
    panda$core$String* $tmp753;
    panda$core$String* $tmp754;
    panda$core$Object* $tmp759;
    panda$core$Int64 $tmp775;
    org$pandalanguage$pandac$Main$Format$nullable $match$315_13777;
    panda$core$Int64 $tmp778;
    panda$io$File* optimized783 = NULL;
    panda$io$File* $tmp784;
    panda$io$File* $tmp785;
    panda$io$File* $tmp786;
    panda$io$File* assembly790 = NULL;
    panda$io$File* $tmp791;
    panda$io$File* $tmp792;
    panda$io$File* $tmp794;
    panda$core$Int64 $tmp797;
    panda$io$File* optimized802 = NULL;
    panda$io$File* $tmp803;
    panda$io$File* $tmp804;
    panda$io$File* $tmp805;
    panda$io$File* assembly809 = NULL;
    panda$io$File* $tmp810;
    panda$io$File* $tmp811;
    panda$io$File* $tmp813;
    panda$core$Int64 $tmp816;
    panda$core$String* $tmp819;
    panda$core$String* $tmp820;
    panda$core$UInt8 $tmp824;
    int $tmp255;
    {
        org$pandalanguage$pandac$Main$Arguments* $tmp259 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
        org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp259, p_rawArgs);
        $tmp258 = $tmp259;
        $tmp257 = $tmp258;
        args256 = $tmp257;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp257));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
        panda$collections$Array* $tmp263 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp263);
        $tmp262 = $tmp263;
        $tmp261 = $tmp262;
        sources260 = $tmp261;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp261));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp262));
        panda$collections$Array* $tmp267 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp267);
        $tmp266 = $tmp267;
        $tmp265 = $tmp266;
        imports264 = $tmp265;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp265));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
        panda$collections$Array$add$panda$collections$Array$T(imports264, ((panda$core$Object*) self->pandaHome));
        $tmp269 = NULL;
        outFile268 = $tmp269;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp269));
        panda$core$Int64$init$builtin_int64(&$tmp271, 3);
        optimizationLevel270 = $tmp271;
        panda$core$Int64$init$builtin_int64(&$tmp273, 3);
        safetyLevel272 = $tmp273;
        format274 = ((org$pandalanguage$pandac$Main$Format$nullable) { .nonnull = false });
        $tmp276 = NULL;
        root275 = $tmp276;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
        panda$core$Bit$init$builtin_bit(&$tmp278, false);
        preserveTemporaries277 = $tmp278;
        panda$io$OutputStream* $tmp282 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp281 = $tmp282;
        $tmp280 = $tmp281;
        err279 = $tmp280;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp280));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
        $l283:;
        panda$core$Bit $tmp287 = (($fn286) args256->$class->vtable[2])(args256);
        panda$core$Bit $tmp288 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp287);
        bool $tmp285 = $tmp288.value;
        if (!$tmp285) goto $l284;
        {
            int $tmp291;
            {
                panda$core$String* $tmp296 = (($fn295) args256->$class->vtable[3])(args256);
                $tmp294 = $tmp296;
                $tmp293 = $tmp294;
                a292 = $tmp293;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp293));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp294));
                int $tmp299;
                {
                    $tmp301 = a292;
                    $match$179_13300 = $tmp301;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp301));
                    panda$core$Bit $tmp303 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$179_13300, &$s302);
                    if ($tmp303.value) {
                    {
                        int $tmp306;
                        {
                            panda$io$File* $tmp310 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp310, &$s311);
                            $tmp309 = $tmp310;
                            $tmp308 = $tmp309;
                            path307 = $tmp308;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp308));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp309));
                            panda$io$InputStream* $tmp313 = panda$io$Console$inputStream$R$panda$io$InputStream();
                            $tmp312 = $tmp313;
                            panda$io$OutputStream* $tmp315 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path307);
                            $tmp314 = $tmp315;
                            (($fn316) $tmp312->$class->vtable[16])($tmp312, $tmp314);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp314));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
                            panda$collections$Array$add$panda$collections$Array$T(sources260, ((panda$core$Object*) path307));
                        }
                        $tmp306 = -1;
                        goto $l304;
                        $l304:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path307));
                        path307 = NULL;
                        switch ($tmp306) {
                            case -1: goto $l317;
                        }
                        $l317:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp319 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$179_13300, &$s318);
                    if ($tmp319.value) {
                    {
                        if (((panda$core$Bit) { outFile268 != NULL }).value) {
                        {
                            (($fn321) err279->$class->vtable[19])(err279, &$s320);
                            panda$core$UInt8$init$builtin_uint8(&$tmp322, 1);
                            panda$core$System$exit$panda$core$UInt8($tmp322);
                        }
                        }
                        {
                            $tmp323 = outFile268;
                            panda$io$File* $tmp326 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp330 = (($fn329) args256->$class->vtable[4])(args256, &$s328);
                            $tmp327 = $tmp330;
                            panda$io$File$init$panda$core$String($tmp326, $tmp327);
                            $tmp325 = $tmp326;
                            $tmp324 = $tmp325;
                            outFile268 = $tmp324;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp324));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp325));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp323));
                        }
                        panda$io$File* $tmp332 = panda$io$File$parent$R$panda$io$File$Q(outFile268);
                        $tmp331 = $tmp332;
                        panda$io$File$createDirectories($tmp331);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp331));
                    }
                    }
                    else {
                    panda$core$Bit $tmp334 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$179_13300, &$s333);
                    if ($tmp334.value) {
                    {
                        int $tmp337;
                        {
                            panda$core$String* $tmp343 = (($fn342) args256->$class->vtable[4])(args256, &$s341);
                            $tmp340 = $tmp343;
                            $tmp339 = $tmp340;
                            level338 = $tmp339;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp339));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp340));
                            panda$core$Int64$nullable $tmp344 = panda$core$String$convert$R$panda$core$Int64$Q(level338);
                            optimizationLevel270 = ((panda$core$Int64) $tmp344.value);
                            panda$core$Int64$init$builtin_int64(&$tmp346, 3);
                            panda$core$Bit $tmp347 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel270, $tmp346);
                            bool $tmp345 = $tmp347.value;
                            if ($tmp345) goto $l348;
                            panda$core$Int64$init$builtin_int64(&$tmp349, 0);
                            panda$core$Bit $tmp350 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel270, $tmp349);
                            $tmp345 = $tmp350.value;
                            $l348:;
                            panda$core$Bit $tmp351 = { $tmp345 };
                            if ($tmp351.value) {
                            {
                                panda$io$OutputStream* $tmp353 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp352 = $tmp353;
                                (($fn355) $tmp352->$class->vtable[19])($tmp352, &$s354);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
                                panda$core$UInt8$init$builtin_uint8(&$tmp356, 1);
                                panda$core$System$exit$panda$core$UInt8($tmp356);
                            }
                            }
                        }
                        $tmp337 = -1;
                        goto $l335;
                        $l335:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level338));
                        level338 = NULL;
                        switch ($tmp337) {
                            case -1: goto $l357;
                        }
                        $l357:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp359 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$179_13300, &$s358);
                    if ($tmp359.value) {
                    {
                        int $tmp362;
                        {
                            panda$core$String* $tmp368 = (($fn367) args256->$class->vtable[4])(args256, &$s366);
                            $tmp365 = $tmp368;
                            $tmp364 = $tmp365;
                            level363 = $tmp364;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp364));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp365));
                            panda$core$Int64$nullable $tmp369 = panda$core$String$convert$R$panda$core$Int64$Q(level363);
                            safetyLevel272 = ((panda$core$Int64) $tmp369.value);
                            panda$core$Int64$init$builtin_int64(&$tmp371, 3);
                            panda$core$Bit $tmp372 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel272, $tmp371);
                            bool $tmp370 = $tmp372.value;
                            if ($tmp370) goto $l373;
                            panda$core$Int64$init$builtin_int64(&$tmp374, 0);
                            panda$core$Bit $tmp375 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel272, $tmp374);
                            $tmp370 = $tmp375.value;
                            $l373:;
                            panda$core$Bit $tmp376 = { $tmp370 };
                            if ($tmp376.value) {
                            {
                                panda$io$OutputStream* $tmp378 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp377 = $tmp378;
                                (($fn380) $tmp377->$class->vtable[19])($tmp377, &$s379);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
                                panda$core$UInt8$init$builtin_uint8(&$tmp381, 1);
                                panda$core$System$exit$panda$core$UInt8($tmp381);
                            }
                            }
                        }
                        $tmp362 = -1;
                        goto $l360;
                        $l360:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level363));
                        level363 = NULL;
                        switch ($tmp362) {
                            case -1: goto $l382;
                        }
                        $l382:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp384 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$179_13300, &$s383);
                    if ($tmp384.value) {
                    {
                        int $tmp387;
                        {
                            if (((panda$core$Bit) { format274.nonnull }).value) {
                            {
                                (($fn389) err279->$class->vtable[19])(err279, &$s388);
                                panda$core$UInt8$init$builtin_uint8(&$tmp390, 1);
                                panda$core$System$exit$panda$core$UInt8($tmp390);
                            }
                            }
                            panda$core$String* $tmp396 = (($fn395) args256->$class->vtable[4])(args256, &$s394);
                            $tmp393 = $tmp396;
                            $tmp392 = $tmp393;
                            f391 = $tmp392;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp392));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
                            int $tmp399;
                            {
                                $tmp401 = f391;
                                $match$211_21400 = $tmp401;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp401));
                                panda$core$Bit $tmp403 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$211_21400, &$s402);
                                if ($tmp403.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp405, 1);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp404, $tmp405);
                                    format274 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp404, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp407 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$211_21400, &$s406);
                                if ($tmp407.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp409, 2);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp408, $tmp409);
                                    format274 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp408, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp411 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$211_21400, &$s410);
                                if ($tmp411.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp413, 0);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp412, $tmp413);
                                    format274 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp412, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp415 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$211_21400, &$s414);
                                if ($tmp415.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp417, 3);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp416, $tmp417);
                                    format274 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp416, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp419 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$211_21400, &$s418);
                                if ($tmp419.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp421, 4);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp420, $tmp421);
                                    format274 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp420, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp423 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$211_21400, &$s422);
                                if ($tmp423.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp425, 5);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp424, $tmp425);
                                    format274 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp424, true });
                                }
                                }
                                else {
                                {
                                    panda$core$String* $tmp429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s428, f391);
                                    $tmp427 = $tmp429;
                                    panda$core$String* $tmp431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp427, &$s430);
                                    $tmp426 = $tmp431;
                                    (($fn432) err279->$class->vtable[19])(err279, $tmp426);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp426));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp427));
                                    panda$core$UInt8$init$builtin_uint8(&$tmp433, 1);
                                    panda$core$System$exit$panda$core$UInt8($tmp433);
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            $tmp399 = -1;
                            goto $l397;
                            $l397:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp401));
                            switch ($tmp399) {
                                case -1: goto $l434;
                            }
                            $l434:;
                        }
                        $tmp387 = -1;
                        goto $l385;
                        $l385:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f391));
                        f391 = NULL;
                        switch ($tmp387) {
                            case -1: goto $l435;
                        }
                        $l435:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp437 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$179_13300, &$s436);
                    if ($tmp437.value) {
                    {
                        panda$io$File* $tmp439 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$core$String* $tmp443 = (($fn442) args256->$class->vtable[4])(args256, &$s441);
                        $tmp440 = $tmp443;
                        panda$io$File$init$panda$core$String($tmp439, $tmp440);
                        $tmp438 = $tmp439;
                        panda$collections$Array$add$panda$collections$Array$T(imports264, ((panda$core$Object*) $tmp438));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp438));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
                    }
                    }
                    else {
                    panda$core$Bit $tmp445 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$179_13300, &$s444);
                    if ($tmp445.value) {
                    {
                        {
                            $tmp446 = root275;
                            panda$core$String* $tmp451 = (($fn450) args256->$class->vtable[4])(args256, &$s449);
                            $tmp448 = $tmp451;
                            $tmp447 = $tmp448;
                            root275 = $tmp447;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp447));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp446));
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp453 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a292, &$s452);
                        if ($tmp453.value) {
                        {
                            panda$io$File* $tmp455 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp455, a292);
                            $tmp454 = $tmp455;
                            panda$collections$Array$add$panda$collections$Array$T(sources260, ((panda$core$Object*) $tmp454));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp454));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s458, a292);
                            $tmp457 = $tmp459;
                            panda$core$String* $tmp461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp457, &$s460);
                            $tmp456 = $tmp461;
                            (($fn462) err279->$class->vtable[19])(err279, $tmp456);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp456));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp457));
                            panda$core$UInt8$init$builtin_uint8(&$tmp463, 1);
                            panda$core$System$exit$panda$core$UInt8($tmp463);
                        }
                        }
                    }
                    }
                    }
                    }
                    }
                    }
                    }
                    }
                }
                $tmp299 = -1;
                goto $l297;
                $l297:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301));
                switch ($tmp299) {
                    case -1: goto $l464;
                }
                $l464:;
            }
            $tmp291 = -1;
            goto $l289;
            $l289:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a292));
            a292 = NULL;
            switch ($tmp291) {
                case -1: goto $l465;
            }
            $l465:;
        }
        goto $l283;
        $l284:;
        panda$io$File* $tmp469 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$core$String* $tmp471 = org$pandalanguage$pandac$Config$llvmDir$R$panda$core$String();
        $tmp470 = $tmp471;
        panda$io$File$init$panda$core$String($tmp469, $tmp470);
        $tmp468 = $tmp469;
        $tmp467 = $tmp468;
        llvmDir466 = $tmp467;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp467));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp468));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp470));
        {
            $tmp472 = self->opt;
            panda$io$File* $tmp476 = panda$io$File$resolve$panda$core$String$R$panda$io$File(llvmDir466, &$s475);
            $tmp474 = $tmp476;
            $tmp473 = $tmp474;
            self->opt = $tmp473;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp473));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp474));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp472));
        }
        {
            $tmp477 = self->llc;
            panda$io$File* $tmp481 = panda$io$File$resolve$panda$core$String$R$panda$io$File(llvmDir466, &$s480);
            $tmp479 = $tmp481;
            $tmp478 = $tmp479;
            self->llc = $tmp478;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp478));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp479));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp477));
        }
        {
            $tmp482 = self->gcc;
            panda$io$File* $tmp485 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
            panda$io$File$init$panda$core$String($tmp485, &$s486);
            $tmp484 = $tmp485;
            $tmp483 = $tmp484;
            self->gcc = $tmp483;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp483));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp484));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
        }
        ITable* $tmp487 = ((panda$collections$CollectionView*) sources260)->$class->itable;
        while ($tmp487->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp487 = $tmp487->next;
        }
        $fn489 $tmp488 = $tmp487->methods[0];
        panda$core$Int64 $tmp490 = $tmp488(((panda$collections$CollectionView*) sources260));
        panda$core$Int64$init$builtin_int64(&$tmp491, 0);
        panda$core$Bit $tmp492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp490, $tmp491);
        if ($tmp492.value) {
        {
            (($fn494) err279->$class->vtable[19])(err279, &$s493);
            panda$core$UInt8$init$builtin_uint8(&$tmp495, 1);
            panda$core$System$exit$panda$core$UInt8($tmp495);
        }
        }
        if (((panda$core$Bit) { !format274.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp497, 1);
            org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp496, $tmp497);
            format274 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp496, true });
        }
        }
        if (((panda$core$Bit) { outFile268 == NULL }).value) {
        {
            ITable* $tmp498 = ((panda$collections$CollectionView*) sources260)->$class->itable;
            while ($tmp498->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp498 = $tmp498->next;
            }
            $fn500 $tmp499 = $tmp498->methods[0];
            panda$core$Int64 $tmp501 = $tmp499(((panda$collections$CollectionView*) sources260));
            panda$core$Int64$init$builtin_int64(&$tmp502, 1);
            panda$core$Bit $tmp503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp501, $tmp502);
            if ($tmp503.value) {
            {
                int $tmp506;
                {
                    memset(&extension507, 0, sizeof(extension507));
                    {
                        $match$250_17508 = format274;
                        panda$core$Int64$init$builtin_int64(&$tmp509, 1);
                        panda$core$Bit $tmp510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$250_17508.value).$rawValue, $tmp509);
                        if ($tmp510.value) {
                        {
                            {
                                $tmp511 = extension507;
                                $tmp512 = &$s513;
                                extension507 = $tmp512;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp512));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp511));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp514, 2);
                        panda$core$Bit $tmp515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$250_17508.value).$rawValue, $tmp514);
                        if ($tmp515.value) {
                        {
                            {
                                $tmp516 = extension507;
                                $tmp517 = &$s518;
                                extension507 = $tmp517;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp517));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp516));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp519, 0);
                        panda$core$Bit $tmp520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$250_17508.value).$rawValue, $tmp519);
                        if ($tmp520.value) {
                        {
                            {
                                $tmp521 = extension507;
                                $tmp522 = &$s523;
                                extension507 = $tmp522;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp522));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp521));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp524, 5);
                        panda$core$Bit $tmp525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$250_17508.value).$rawValue, $tmp524);
                        if ($tmp525.value) {
                        {
                            {
                                $tmp526 = extension507;
                                $tmp527 = &$s528;
                                extension507 = $tmp527;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp527));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp526));
                            }
                        }
                        }
                        else {
                        {
                            (($fn530) err279->$class->vtable[19])(err279, &$s529);
                            panda$core$UInt8$init$builtin_uint8(&$tmp531, 1);
                            panda$core$System$exit$panda$core$UInt8($tmp531);
                        }
                        }
                        }
                        }
                        }
                    }
                    {
                        $tmp532 = outFile268;
                        panda$core$Int64$init$builtin_int64(&$tmp536, 0);
                        panda$core$Object* $tmp537 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources260, $tmp536);
                        $tmp535 = $tmp537;
                        panda$io$File* $tmp538 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp535), extension507);
                        $tmp534 = $tmp538;
                        $tmp533 = $tmp534;
                        outFile268 = $tmp533;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp533));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp534));
                        panda$core$Panda$unref$panda$core$Object($tmp535);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp532));
                    }
                }
                $tmp506 = -1;
                goto $l504;
                $l504:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension507));
                switch ($tmp506) {
                    case -1: goto $l539;
                }
                $l539:;
            }
            }
            else {
            $tmp540 = format274;
            panda$core$Bit $tmp544;
            if (((panda$core$Bit) { $tmp540.nonnull }).value) goto $l541; else goto $l542;
            $l541:;
            panda$core$Int64$init$builtin_int64(&$tmp545, 5);
            panda$core$Bit $tmp546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $tmp540.value).$rawValue, $tmp545);
            $tmp544 = $tmp546;
            goto $l543;
            $l542:;
            panda$core$Bit$init$builtin_bit(&$tmp547, false);
            $tmp544 = $tmp547;
            goto $l543;
            $l543:;
            if ($tmp544.value) {
            {
                (($fn549) err279->$class->vtable[19])(err279, &$s548);
                panda$core$UInt8$init$builtin_uint8(&$tmp550, 1);
                panda$core$System$exit$panda$core$UInt8($tmp550);
            }
            }
            else {
            {
                (($fn552) err279->$class->vtable[19])(err279, &$s551);
                panda$core$UInt8$init$builtin_uint8(&$tmp553, 1);
                panda$core$System$exit$panda$core$UInt8($tmp553);
            }
            }
            }
        }
        }
        $tmp554 = format274;
        panda$core$Bit $tmp558;
        if (((panda$core$Bit) { $tmp554.nonnull }).value) goto $l555; else goto $l556;
        $l555:;
        panda$core$Int64$init$builtin_int64(&$tmp559, 5);
        panda$core$Bit $tmp560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $tmp554.value).$rawValue, $tmp559);
        $tmp558 = $tmp560;
        goto $l557;
        $l556:;
        panda$core$Bit$init$builtin_bit(&$tmp561, false);
        $tmp558 = $tmp561;
        goto $l557;
        $l557:;
        if ($tmp558.value) {
        {
            if (((panda$core$Bit) { root275 == NULL }).value) {
            {
                {
                    $tmp562 = root275;
                    $tmp563 = &$s564;
                    root275 = $tmp563;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp563));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp562));
                }
            }
            }
            org$pandalanguage$pandac$HTMLProcessor* $tmp566 = (org$pandalanguage$pandac$HTMLProcessor*) pandaObjectAlloc(12, (panda$core$Class*) &org$pandalanguage$pandac$HTMLProcessor$class);
            org$pandalanguage$pandac$HTMLProcessor$init($tmp566);
            $tmp565 = $tmp566;
            panda$core$Int64$init$builtin_int64(&$tmp568, 0);
            panda$core$Object* $tmp569 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources260, $tmp568);
            $tmp567 = $tmp569;
            (($fn570) $tmp565->$class->vtable[3])($tmp565, ((panda$io$File*) $tmp567), outFile268, root275);
            panda$core$Panda$unref$panda$core$Object($tmp567);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp565));
            $tmp255 = 0;
            goto $l253;
            $l571:;
            return;
        }
        }
        if (((panda$core$Bit) { root275 != NULL }).value) {
        {
            (($fn573) err279->$class->vtable[19])(err279, &$s572);
            panda$core$UInt8$init$builtin_uint8(&$tmp574, 1);
            panda$core$System$exit$panda$core$UInt8($tmp574);
        }
        }
        memset(&errorCount575, 0, sizeof(errorCount575));
        {
            int $tmp578;
            {
                memset(&cg579, 0, sizeof(cg579));
                {
                    $match$285_13580 = format274;
                    panda$core$Int64$init$builtin_int64(&$tmp583, 0);
                    panda$core$Bit $tmp584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$285_13580.value).$rawValue, $tmp583);
                    bool $tmp582 = $tmp584.value;
                    if ($tmp582) goto $l585;
                    panda$core$Int64$init$builtin_int64(&$tmp586, 1);
                    panda$core$Bit $tmp587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$285_13580.value).$rawValue, $tmp586);
                    $tmp582 = $tmp587.value;
                    $l585:;
                    panda$core$Bit $tmp588 = { $tmp582 };
                    bool $tmp581 = $tmp588.value;
                    if ($tmp581) goto $l589;
                    panda$core$Int64$init$builtin_int64(&$tmp590, 2);
                    panda$core$Bit $tmp591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$285_13580.value).$rawValue, $tmp590);
                    $tmp581 = $tmp591.value;
                    $l589:;
                    panda$core$Bit $tmp592 = { $tmp581 };
                    if ($tmp592.value) {
                    {
                        {
                            $tmp593 = cg579;
                            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp596 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                            panda$core$String* $tmp598 = org$pandalanguage$pandac$Config$llvmTriple$R$panda$core$String();
                            $tmp597 = $tmp598;
                            panda$io$File* $tmp602 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile268, &$s601);
                            $tmp600 = $tmp602;
                            panda$io$OutputStream* $tmp603 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp600);
                            $tmp599 = $tmp603;
                            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp596, $tmp597, $tmp599);
                            $tmp595 = $tmp596;
                            $tmp594 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp595);
                            cg579 = $tmp594;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp594));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp595));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp599));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp600));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp597));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp593));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp604, 3);
                    panda$core$Bit $tmp605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$285_13580.value).$rawValue, $tmp604);
                    if ($tmp605.value) {
                    {
                        {
                            $tmp606 = cg579;
                            org$pandalanguage$pandac$HCodeGenerator* $tmp609 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                            org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp609, outFile268);
                            $tmp608 = $tmp609;
                            $tmp607 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp608);
                            cg579 = $tmp607;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp607));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp608));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp606));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp610, 4);
                    panda$core$Bit $tmp611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$285_13580.value).$rawValue, $tmp610);
                    if ($tmp611.value) {
                    {
                        {
                            $tmp612 = cg579;
                            org$pandalanguage$pandac$CCodeGenerator* $tmp615 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(248, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                            org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp615, outFile268);
                            $tmp614 = $tmp615;
                            $tmp613 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp614);
                            cg579 = $tmp613;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp613));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp614));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp612));
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp616, false);
                        if ($tmp616.value) goto $l617; else goto $l618;
                        $l618:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s619, (panda$core$Int64) { 294 });
                        abort();
                        $l617:;
                    }
                    }
                    }
                    }
                }
                org$pandalanguage$pandac$Compiler$Settings* $tmp623 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
                org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp623, self->pandaHome, ((panda$collections$ListView*) imports264), optimizationLevel270, safetyLevel272);
                $tmp622 = $tmp623;
                $tmp621 = $tmp622;
                settings620 = $tmp621;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp621));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp622));
                panda$threads$MessageQueue* $tmp627 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
                panda$threads$MessageQueue$init($tmp627);
                $tmp626 = $tmp627;
                $tmp625 = $tmp626;
                errorQueue624 = $tmp625;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp625));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp626));
                org$pandalanguage$pandac$Compiler* $tmp631 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
                org$pandalanguage$pandac$Compiler$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp631, errorQueue624, cg579, settings620);
                $tmp630 = $tmp631;
                $tmp629 = $tmp630;
                compiler628 = $tmp629;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp629));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
                {
                    int $tmp634;
                    {
                        ITable* $tmp638 = ((panda$collections$Iterable*) sources260)->$class->itable;
                        while ($tmp638->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp638 = $tmp638->next;
                        }
                        $fn640 $tmp639 = $tmp638->methods[0];
                        panda$collections$Iterator* $tmp641 = $tmp639(((panda$collections$Iterable*) sources260));
                        $tmp637 = $tmp641;
                        $tmp636 = $tmp637;
                        Iter$299$13635 = $tmp636;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp636));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp637));
                        $l642:;
                        ITable* $tmp645 = Iter$299$13635->$class->itable;
                        while ($tmp645->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp645 = $tmp645->next;
                        }
                        $fn647 $tmp646 = $tmp645->methods[0];
                        panda$core$Bit $tmp648 = $tmp646(Iter$299$13635);
                        panda$core$Bit $tmp649 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp648);
                        bool $tmp644 = $tmp649.value;
                        if (!$tmp644) goto $l643;
                        {
                            int $tmp652;
                            {
                                ITable* $tmp656 = Iter$299$13635->$class->itable;
                                while ($tmp656->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp656 = $tmp656->next;
                                }
                                $fn658 $tmp657 = $tmp656->methods[1];
                                panda$core$Object* $tmp659 = $tmp657(Iter$299$13635);
                                $tmp655 = $tmp659;
                                $tmp654 = ((panda$io$File*) $tmp655);
                                s653 = $tmp654;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp654));
                                panda$core$Panda$unref$panda$core$Object($tmp655);
                                {
                                    int $tmp662;
                                    {
                                        panda$collections$ListView* $tmp667 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler628, s653);
                                        $tmp666 = $tmp667;
                                        ITable* $tmp668 = ((panda$collections$Iterable*) $tmp666)->$class->itable;
                                        while ($tmp668->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp668 = $tmp668->next;
                                        }
                                        $fn670 $tmp669 = $tmp668->methods[0];
                                        panda$collections$Iterator* $tmp671 = $tmp669(((panda$collections$Iterable*) $tmp666));
                                        $tmp665 = $tmp671;
                                        $tmp664 = $tmp665;
                                        Iter$300$17663 = $tmp664;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp664));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp665));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp666));
                                        $l672:;
                                        ITable* $tmp675 = Iter$300$17663->$class->itable;
                                        while ($tmp675->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp675 = $tmp675->next;
                                        }
                                        $fn677 $tmp676 = $tmp675->methods[0];
                                        panda$core$Bit $tmp678 = $tmp676(Iter$300$17663);
                                        panda$core$Bit $tmp679 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp678);
                                        bool $tmp674 = $tmp679.value;
                                        if (!$tmp674) goto $l673;
                                        {
                                            int $tmp682;
                                            {
                                                ITable* $tmp686 = Iter$300$17663->$class->itable;
                                                while ($tmp686->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp686 = $tmp686->next;
                                                }
                                                $fn688 $tmp687 = $tmp686->methods[1];
                                                panda$core$Object* $tmp689 = $tmp687(Iter$300$17663);
                                                $tmp685 = $tmp689;
                                                $tmp684 = ((org$pandalanguage$pandac$ClassDecl*) $tmp685);
                                                cl683 = $tmp684;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp684));
                                                panda$core$Panda$unref$panda$core$Object($tmp685);
                                                org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler628, cl683);
                                            }
                                            $tmp682 = -1;
                                            goto $l680;
                                            $l680:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl683));
                                            cl683 = NULL;
                                            switch ($tmp682) {
                                                case -1: goto $l690;
                                            }
                                            $l690:;
                                        }
                                        goto $l672;
                                        $l673:;
                                    }
                                    $tmp662 = -1;
                                    goto $l660;
                                    $l660:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$300$17663));
                                    Iter$300$17663 = NULL;
                                    switch ($tmp662) {
                                        case -1: goto $l691;
                                    }
                                    $l691:;
                                }
                            }
                            $tmp652 = -1;
                            goto $l650;
                            $l650:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s653));
                            s653 = NULL;
                            switch ($tmp652) {
                                case -1: goto $l692;
                            }
                            $l692:;
                        }
                        goto $l642;
                        $l643:;
                    }
                    $tmp634 = -1;
                    goto $l632;
                    $l632:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$299$13635));
                    Iter$299$13635 = NULL;
                    switch ($tmp634) {
                        case -1: goto $l693;
                    }
                    $l693:;
                }
                {
                    int $tmp696;
                    {
                        ITable* $tmp700 = ((panda$collections$Iterable*) sources260)->$class->itable;
                        while ($tmp700->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp700 = $tmp700->next;
                        }
                        $fn702 $tmp701 = $tmp700->methods[0];
                        panda$collections$Iterator* $tmp703 = $tmp701(((panda$collections$Iterable*) sources260));
                        $tmp699 = $tmp703;
                        $tmp698 = $tmp699;
                        Iter$304$13697 = $tmp698;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp698));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp699));
                        $l704:;
                        ITable* $tmp707 = Iter$304$13697->$class->itable;
                        while ($tmp707->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp707 = $tmp707->next;
                        }
                        $fn709 $tmp708 = $tmp707->methods[0];
                        panda$core$Bit $tmp710 = $tmp708(Iter$304$13697);
                        panda$core$Bit $tmp711 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp710);
                        bool $tmp706 = $tmp711.value;
                        if (!$tmp706) goto $l705;
                        {
                            int $tmp714;
                            {
                                ITable* $tmp718 = Iter$304$13697->$class->itable;
                                while ($tmp718->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp718 = $tmp718->next;
                                }
                                $fn720 $tmp719 = $tmp718->methods[1];
                                panda$core$Object* $tmp721 = $tmp719(Iter$304$13697);
                                $tmp717 = $tmp721;
                                $tmp716 = ((panda$io$File*) $tmp717);
                                s715 = $tmp716;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp716));
                                panda$core$Panda$unref$panda$core$Object($tmp717);
                                org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler628, s715);
                            }
                            $tmp714 = -1;
                            goto $l712;
                            $l712:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s715));
                            s715 = NULL;
                            switch ($tmp714) {
                                case -1: goto $l722;
                            }
                            $l722:;
                        }
                        goto $l704;
                        $l705:;
                    }
                    $tmp696 = -1;
                    goto $l694;
                    $l694:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$304$13697));
                    Iter$304$13697 = NULL;
                    switch ($tmp696) {
                        case -1: goto $l723;
                    }
                    $l723:;
                }
                org$pandalanguage$pandac$Compiler$finish(compiler628);
                panda$core$Int64 $tmp724 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(errorQueue624);
                errorCount575 = $tmp724;
                panda$core$Int64$init$builtin_int64(&$tmp726, 0);
                panda$core$Bit$init$builtin_bit(&$tmp727, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp725, $tmp726, errorCount575, $tmp727);
                int64_t $tmp729 = $tmp725.min.value;
                panda$core$Int64 i728 = { $tmp729 };
                int64_t $tmp731 = $tmp725.max.value;
                bool $tmp732 = $tmp725.inclusive.value;
                if ($tmp732) goto $l739; else goto $l740;
                $l739:;
                if ($tmp729 <= $tmp731) goto $l733; else goto $l735;
                $l740:;
                if ($tmp729 < $tmp731) goto $l733; else goto $l735;
                $l733:;
                {
                    int $tmp743;
                    {
                        panda$core$Immutable* $tmp747 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(errorQueue624);
                        $tmp746 = $tmp747;
                        $tmp745 = ((org$pandalanguage$pandac$Compiler$Error*) $tmp746);
                        error744 = $tmp745;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp745));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp746));
                        panda$core$String* $tmp755 = panda$io$File$name$R$panda$core$String(error744->file);
                        $tmp754 = $tmp755;
                        panda$core$String* $tmp756 = panda$core$String$convert$R$panda$core$String($tmp754);
                        $tmp753 = $tmp756;
                        panda$core$String* $tmp758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp753, &$s757);
                        $tmp752 = $tmp758;
                        org$pandalanguage$pandac$Position$wrapper* $tmp760;
                        $tmp760 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                        $tmp760->value = error744->position;
                        $tmp759 = ((panda$core$Object*) $tmp760);
                        panda$core$String* $tmp761 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp752, $tmp759);
                        $tmp751 = $tmp761;
                        panda$core$String* $tmp763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp751, &$s762);
                        $tmp750 = $tmp763;
                        panda$core$String* $tmp764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp750, error744->message);
                        $tmp749 = $tmp764;
                        panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp749, &$s765);
                        $tmp748 = $tmp766;
                        panda$io$Console$printLine$panda$core$String($tmp748);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp748));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp749));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp750));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp751));
                        panda$core$Panda$unref$panda$core$Object($tmp759);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp752));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp753));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp754));
                    }
                    $tmp743 = -1;
                    goto $l741;
                    $l741:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) error744));
                    error744 = NULL;
                    switch ($tmp743) {
                        case -1: goto $l767;
                    }
                    $l767:;
                }
                $l736:;
                int64_t $tmp769 = $tmp731 - i728.value;
                if ($tmp732) goto $l770; else goto $l771;
                $l770:;
                if ((uint64_t) $tmp769 >= 1) goto $l768; else goto $l735;
                $l771:;
                if ((uint64_t) $tmp769 > 1) goto $l768; else goto $l735;
                $l768:;
                i728.value += 1;
                goto $l733;
                $l735:;
            }
            $tmp578 = -1;
            goto $l576;
            $l576:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler628));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) errorQueue624));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings620));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg579));
            settings620 = NULL;
            errorQueue624 = NULL;
            compiler628 = NULL;
            switch ($tmp578) {
                case -1: goto $l774;
            }
            $l774:;
        }
        panda$core$Int64$init$builtin_int64(&$tmp775, 0);
        panda$core$Bit $tmp776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount575, $tmp775);
        if ($tmp776.value) {
        {
            {
                $match$315_13777 = format274;
                panda$core$Int64$init$builtin_int64(&$tmp778, 1);
                panda$core$Bit $tmp779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$315_13777.value).$rawValue, $tmp778);
                if ($tmp779.value) {
                {
                    int $tmp782;
                    {
                        panda$io$File* $tmp788 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile268, &$s787);
                        $tmp786 = $tmp788;
                        panda$io$File* $tmp789 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$panda$core$Bit$R$panda$io$File(self, $tmp786, optimizationLevel270, preserveTemporaries277);
                        $tmp785 = $tmp789;
                        $tmp784 = $tmp785;
                        optimized783 = $tmp784;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp784));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp785));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp786));
                        panda$io$File* $tmp793 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$panda$core$Bit$R$panda$io$File(self, optimized783, preserveTemporaries277);
                        $tmp792 = $tmp793;
                        $tmp791 = $tmp792;
                        assembly790 = $tmp791;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp791));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp792));
                        panda$io$File* $tmp795 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(self, assembly790, outFile268, preserveTemporaries277);
                        $tmp794 = $tmp795;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp794));
                    }
                    $tmp782 = -1;
                    goto $l780;
                    $l780:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly790));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized783));
                    optimized783 = NULL;
                    assembly790 = NULL;
                    switch ($tmp782) {
                        case -1: goto $l796;
                    }
                    $l796:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp797, 2);
                panda$core$Bit $tmp798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$315_13777.value).$rawValue, $tmp797);
                if ($tmp798.value) {
                {
                    int $tmp801;
                    {
                        panda$io$File* $tmp807 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile268, &$s806);
                        $tmp805 = $tmp807;
                        panda$io$File* $tmp808 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$panda$core$Bit$R$panda$io$File(self, $tmp805, optimizationLevel270, preserveTemporaries277);
                        $tmp804 = $tmp808;
                        $tmp803 = $tmp804;
                        optimized802 = $tmp803;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp803));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp804));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp805));
                        panda$io$File* $tmp812 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$panda$core$Bit$R$panda$io$File(self, optimized802, preserveTemporaries277);
                        $tmp811 = $tmp812;
                        $tmp810 = $tmp811;
                        assembly809 = $tmp810;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp810));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp811));
                        panda$io$File* $tmp814 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(self, assembly809, outFile268, preserveTemporaries277);
                        $tmp813 = $tmp814;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp813));
                    }
                    $tmp801 = -1;
                    goto $l799;
                    $l799:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly809));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized802));
                    optimized802 = NULL;
                    assembly809 = NULL;
                    switch ($tmp801) {
                        case -1: goto $l815;
                    }
                    $l815:;
                }
                }
                }
            }
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp816, 1);
            panda$core$Bit $tmp817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount575, $tmp816);
            if ($tmp817.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s818);
            }
            }
            else {
            {
                panda$core$String* $tmp821 = panda$core$Int64$convert$R$panda$core$String(errorCount575);
                $tmp820 = $tmp821;
                panda$core$String* $tmp823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp820, &$s822);
                $tmp819 = $tmp823;
                panda$io$Console$printLine$panda$core$String($tmp819);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp819));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp820));
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp824, 1);
            panda$core$System$exit$panda$core$UInt8($tmp824);
        }
        }
    }
    $tmp255 = -1;
    goto $l253;
    $l253:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llvmDir466));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err279));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) root275));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile268));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports264));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources260));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args256));
    args256 = NULL;
    sources260 = NULL;
    imports264 = NULL;
    err279 = NULL;
    llvmDir466 = NULL;
    switch ($tmp255) {
        case 0: goto $l571;
        case -1: goto $l825;
    }
    $l825:;
}
panda$core$Bit org$pandalanguage$pandac$Main$containsError$panda$core$String$R$panda$core$Bit(panda$core$String* p_s) {
    panda$core$Bit $returnValue826;
    panda$core$Bit $tmp828 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_s, &$s827);
    $returnValue826 = $tmp828;
    return $returnValue826;
}
void pandaMain(panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$Main* $tmp830;
    org$pandalanguage$pandac$Main* $tmp831 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
    org$pandalanguage$pandac$Main$init($tmp831);
    $tmp830 = $tmp831;
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp830, p_args);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp830));
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    int $tmp834;
    {
    }
    $tmp834 = -1;
    goto $l832;
    $l832:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp834) {
        case -1: goto $l835;
    }
    $l835:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

