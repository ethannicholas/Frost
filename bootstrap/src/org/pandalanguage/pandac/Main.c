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
org$pandalanguage$pandac$Main$class_type org$pandalanguage$pandac$Main$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Main$cleanup, org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File, org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream, org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT} };

typedef panda$core$String* (*$fn44)(panda$io$InputStream*);
typedef void (*$fn46)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn76)(panda$io$InputStream*);
typedef void (*$fn78)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn106)(panda$io$InputStream*);
typedef void (*$fn108)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn112)(panda$io$InputStream*);
typedef void (*$fn114)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn157)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn164)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn175)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn217)(panda$io$InputStream*);
typedef void (*$fn219)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn223)(panda$io$InputStream*);
typedef void (*$fn225)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn236)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn237)(panda$io$OutputStream*);
typedef void (*$fn239)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn240)(panda$io$OutputStream*);
typedef void (*$fn242)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn244)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn276)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn285)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn306)(panda$io$InputStream*, panda$io$OutputStream*);
typedef void (*$fn311)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn319)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn332)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn345)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn357)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn370)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn379)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn385)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn422)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn432)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn440)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn452)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn481)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn514)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn533)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn536)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn554)(org$pandalanguage$pandac$HTMLProcessor*, panda$io$File*, panda$io$File*, panda$core$String*);
typedef void (*$fn557)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn624)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn631)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn642)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn654)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn661)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn672)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn686)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn693)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn704)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e", 29, -3248623696873689241, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f\x70\x74", 4, 152597986, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x69\x6e\x74", 5, 15305173385, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73", 2, 14962, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x72\x65\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x6d\x6f\x64\x65\x6c\x3d\x70\x69\x63", 21, 7895568360759315925, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, 1592669972389054298, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x70\x61\x6e\x64\x61", 15, -4231800707287400719, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };

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
panda$io$File* org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm, panda$core$Int64 p_level) {
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
    panda$core$Int64 $tmp47;
    panda$core$Int64 $tmp48;
    panda$core$UInt8 $tmp50;
    panda$io$File* $tmp51;
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
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp47, p37);
        panda$core$Int64$init$builtin_int64(&$tmp48, 0);
        panda$core$Bit $tmp49 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp47, $tmp48);
        if ($tmp49.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp50, 1);
            panda$core$System$exit$panda$core$UInt8($tmp50);
        }
        }
        $tmp51 = dest17;
        $returnValue13 = $tmp51;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
        $tmp10 = 1;
        goto $l8;
        $l52:;
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
        case 1: goto $l52;
        case 0: goto $l15;
    }
    $l54:;
    abort();
}
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm) {
    panda$io$File* dest58 = NULL;
    panda$io$File* $tmp59;
    panda$io$File* $tmp60;
    panda$collections$Array* args63 = NULL;
    panda$collections$Array* $tmp64;
    panda$collections$Array* $tmp65;
    panda$core$System$Process* p69 = NULL;
    panda$core$System$Process* $tmp70;
    panda$core$System$Process* $tmp71;
    panda$io$OutputStream* $tmp73;
    panda$core$String* $tmp75;
    panda$core$Int64 $tmp79;
    panda$core$Int64 $tmp80;
    panda$core$UInt8 $tmp82;
    panda$io$File* $returnValue83;
    panda$io$File* $tmp84;
    int $tmp57;
    {
        panda$io$File* $tmp62 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s61);
        $tmp60 = $tmp62;
        $tmp59 = $tmp60;
        dest58 = $tmp59;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp59));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp60));
        panda$collections$Array* $tmp66 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp66);
        $tmp65 = $tmp66;
        $tmp64 = $tmp65;
        args63 = $tmp64;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp64));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
        panda$collections$Array$add$panda$collections$Array$T(args63, ((panda$core$Object*) p_llvm->path));
        panda$collections$Array$add$panda$collections$Array$T(args63, ((panda$core$Object*) &$s67));
        panda$collections$Array$add$panda$collections$Array$T(args63, ((panda$core$Object*) &$s68));
        panda$collections$Array$add$panda$collections$Array$T(args63, ((panda$core$Object*) dest58->path));
        panda$core$System$Process* $tmp72 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->llc, ((panda$collections$ListView*) args63));
        $tmp71 = $tmp72;
        $tmp70 = $tmp71;
        p69 = $tmp70;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
        panda$io$OutputStream* $tmp74 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp73 = $tmp74;
        panda$core$String* $tmp77 = (($fn76) p69->error->$class->vtable[14])(p69->error);
        $tmp75 = $tmp77;
        (($fn78) $tmp73->$class->vtable[17])($tmp73, $tmp75);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp79, p69);
        panda$core$Int64$init$builtin_int64(&$tmp80, 0);
        panda$core$Bit $tmp81 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp79, $tmp80);
        if ($tmp81.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp82, 1);
            panda$core$System$exit$panda$core$UInt8($tmp82);
        }
        }
        $tmp84 = dest58;
        $returnValue83 = $tmp84;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp84));
        $tmp57 = 0;
        goto $l55;
        $l85:;
        return $returnValue83;
    }
    $l55:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p69));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args63));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest58));
    dest58 = NULL;
    args63 = NULL;
    p69 = NULL;
    switch ($tmp57) {
        case 0: goto $l85;
    }
    $l87:;
    abort();
}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args91 = NULL;
    panda$collections$Array* $tmp92;
    panda$collections$Array* $tmp93;
    panda$core$System$Process* p99 = NULL;
    panda$core$System$Process* $tmp100;
    panda$core$System$Process* $tmp101;
    panda$io$OutputStream* $tmp103;
    panda$core$String* $tmp105;
    panda$io$OutputStream* $tmp109;
    panda$core$String* $tmp111;
    panda$core$Int64 $tmp115;
    panda$core$Int64 $tmp116;
    panda$core$UInt8 $tmp118;
    panda$io$File* $returnValue119;
    panda$io$File* $tmp120;
    int $tmp90;
    {
        panda$collections$Array* $tmp94 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp94);
        $tmp93 = $tmp94;
        $tmp92 = $tmp93;
        args91 = $tmp92;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp92));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
        panda$collections$Array$add$panda$collections$Array$T(args91, ((panda$core$Object*) p_assembly->path));
        panda$collections$Array$add$panda$collections$Array$T(args91, ((panda$core$Object*) &$s95));
        panda$collections$Array$add$panda$collections$Array$T(args91, ((panda$core$Object*) &$s96));
        panda$collections$Array$add$panda$collections$Array$T(args91, ((panda$core$Object*) &$s97));
        panda$collections$Array$add$panda$collections$Array$T(args91, ((panda$core$Object*) &$s98));
        panda$collections$Array$add$panda$collections$Array$T(args91, ((panda$core$Object*) p_dest->path));
        panda$core$System$Process* $tmp102 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args91));
        $tmp101 = $tmp102;
        $tmp100 = $tmp101;
        p99 = $tmp100;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
        panda$io$OutputStream* $tmp104 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp103 = $tmp104;
        panda$core$String* $tmp107 = (($fn106) p99->output->$class->vtable[14])(p99->output);
        $tmp105 = $tmp107;
        (($fn108) $tmp103->$class->vtable[17])($tmp103, $tmp105);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
        panda$io$OutputStream* $tmp110 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp109 = $tmp110;
        panda$core$String* $tmp113 = (($fn112) p99->error->$class->vtable[14])(p99->error);
        $tmp111 = $tmp113;
        (($fn114) $tmp109->$class->vtable[17])($tmp109, $tmp111);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp111));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp109));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp115, p99);
        panda$core$Int64$init$builtin_int64(&$tmp116, 0);
        panda$core$Bit $tmp117 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp115, $tmp116);
        if ($tmp117.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp118, 1);
            panda$core$System$exit$panda$core$UInt8($tmp118);
        }
        }
        $tmp120 = p_dest;
        $returnValue119 = $tmp120;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp120));
        $tmp90 = 0;
        goto $l88;
        $l121:;
        return $returnValue119;
    }
    $l88:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p99));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args91));
    args91 = NULL;
    p99 = NULL;
    switch ($tmp90) {
        case 0: goto $l121;
    }
    $l123:;
    abort();
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args127 = NULL;
    panda$collections$Array* $tmp128;
    panda$collections$Array* $tmp129;
    panda$core$String* $tmp131;
    panda$core$String* $tmp132;
    panda$core$String* $tmp134;
    panda$collections$ListView* icuLibs142 = NULL;
    panda$collections$ListView* $tmp143;
    panda$collections$ListView* $tmp144;
    panda$core$String* $tmp145;
    panda$collections$Iterator* Iter$119$9152 = NULL;
    panda$collections$Iterator* $tmp153;
    panda$collections$Iterator* $tmp154;
    panda$core$String* lib170 = NULL;
    panda$core$String* $tmp171;
    panda$core$Object* $tmp172;
    panda$io$File* libFile177 = NULL;
    panda$io$File* $tmp178;
    panda$io$File* $tmp179;
    panda$core$String* $tmp181;
    panda$io$File* $tmp183;
    panda$core$String* simpleName186 = NULL;
    panda$core$String* $tmp187;
    panda$core$String* $tmp188;
    panda$core$String* $tmp195;
    panda$core$String* $tmp196;
    panda$core$String* $tmp197;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp198;
    panda$core$Int64 $tmp199;
    panda$core$Bit $tmp200;
    panda$core$String* $tmp202;
    panda$core$System$Process* p210 = NULL;
    panda$core$System$Process* $tmp211;
    panda$core$System$Process* $tmp212;
    panda$io$OutputStream* $tmp214;
    panda$core$String* $tmp216;
    panda$io$OutputStream* $tmp220;
    panda$core$String* $tmp222;
    panda$core$Int64 $tmp226;
    panda$core$Int64 $tmp227;
    panda$core$UInt8 $tmp229;
    panda$io$File* $returnValue230;
    panda$io$File* $tmp231;
    int $tmp126;
    {
        panda$collections$Array* $tmp130 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp130);
        $tmp129 = $tmp130;
        $tmp128 = $tmp129;
        args127 = $tmp128;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp128));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp129));
        panda$collections$Array$add$panda$collections$Array$T(args127, ((panda$core$Object*) p_assembly->path));
        panda$core$String* $tmp135 = org$pandalanguage$pandac$Config$pandaLibDir$R$panda$core$String();
        $tmp134 = $tmp135;
        panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s133, $tmp134);
        $tmp132 = $tmp136;
        panda$core$String* $tmp138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp132, &$s137);
        $tmp131 = $tmp138;
        panda$collections$Array$add$panda$collections$Array$T(args127, ((panda$core$Object*) $tmp131));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
        panda$collections$Array$add$panda$collections$Array$T(args127, ((panda$core$Object*) &$s139));
        panda$collections$Array$add$panda$collections$Array$T(args127, ((panda$core$Object*) &$s140));
        panda$collections$Array$add$panda$collections$Array$T(args127, ((panda$core$Object*) &$s141));
        panda$core$String* $tmp146 = org$pandalanguage$pandac$Config$icuLibraries$R$panda$core$String();
        $tmp145 = $tmp146;
        panda$collections$ListView* $tmp148 = panda$core$String$split$panda$core$String$R$panda$collections$ListView$LTpanda$core$String$GT($tmp145, &$s147);
        $tmp144 = $tmp148;
        $tmp143 = $tmp144;
        icuLibs142 = $tmp143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp145));
        {
            int $tmp151;
            {
                ITable* $tmp155 = ((panda$collections$Iterable*) icuLibs142)->$class->itable;
                while ($tmp155->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp155 = $tmp155->next;
                }
                $fn157 $tmp156 = $tmp155->methods[0];
                panda$collections$Iterator* $tmp158 = $tmp156(((panda$collections$Iterable*) icuLibs142));
                $tmp154 = $tmp158;
                $tmp153 = $tmp154;
                Iter$119$9152 = $tmp153;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp153));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
                $l159:;
                ITable* $tmp162 = Iter$119$9152->$class->itable;
                while ($tmp162->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp162 = $tmp162->next;
                }
                $fn164 $tmp163 = $tmp162->methods[0];
                panda$core$Bit $tmp165 = $tmp163(Iter$119$9152);
                panda$core$Bit $tmp166 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp165);
                bool $tmp161 = $tmp166.value;
                if (!$tmp161) goto $l160;
                {
                    int $tmp169;
                    {
                        ITable* $tmp173 = Iter$119$9152->$class->itable;
                        while ($tmp173->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp173 = $tmp173->next;
                        }
                        $fn175 $tmp174 = $tmp173->methods[1];
                        panda$core$Object* $tmp176 = $tmp174(Iter$119$9152);
                        $tmp172 = $tmp176;
                        $tmp171 = ((panda$core$String*) $tmp172);
                        lib170 = $tmp171;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp171));
                        panda$core$Panda$unref$panda$core$Object($tmp172);
                        panda$io$File* $tmp180 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$io$File$init$panda$core$String($tmp180, lib170);
                        $tmp179 = $tmp180;
                        $tmp178 = $tmp179;
                        libFile177 = $tmp178;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp178));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
                        panda$io$File* $tmp184 = panda$io$File$parent$R$panda$io$File$Q(libFile177);
                        $tmp183 = $tmp184;
                        panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s182, ((panda$core$Object*) $tmp183));
                        $tmp181 = $tmp185;
                        panda$collections$Array$add$panda$collections$Array$T(args127, ((panda$core$Object*) $tmp181));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp183));
                        panda$core$String* $tmp189 = panda$io$File$simpleName$R$panda$core$String(libFile177);
                        $tmp188 = $tmp189;
                        $tmp187 = $tmp188;
                        simpleName186 = $tmp187;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp187));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp188));
                        panda$core$Bit $tmp191 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(simpleName186, &$s190);
                        if ($tmp191.value) goto $l192; else goto $l193;
                        $l193:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s194, (panda$core$Int64) { 123 });
                        abort();
                        $l192:;
                        {
                            $tmp195 = simpleName186;
                            panda$core$Int64$init$builtin_int64(&$tmp199, 3);
                            panda$core$Bit$init$builtin_bit(&$tmp200, false);
                            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp198, ((panda$core$Int64$nullable) { $tmp199, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp200);
                            panda$core$String* $tmp201 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(simpleName186, $tmp198);
                            $tmp197 = $tmp201;
                            $tmp196 = $tmp197;
                            simpleName186 = $tmp196;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp196));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp197));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
                        }
                        panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s203, simpleName186);
                        $tmp202 = $tmp204;
                        panda$collections$Array$add$panda$collections$Array$T(args127, ((panda$core$Object*) $tmp202));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp202));
                    }
                    $tmp169 = -1;
                    goto $l167;
                    $l167:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) simpleName186));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) libFile177));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) lib170));
                    lib170 = NULL;
                    libFile177 = NULL;
                    simpleName186 = NULL;
                    switch ($tmp169) {
                        case -1: goto $l205;
                    }
                    $l205:;
                }
                goto $l159;
                $l160:;
            }
            $tmp151 = -1;
            goto $l149;
            $l149:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$119$9152));
            Iter$119$9152 = NULL;
            switch ($tmp151) {
                case -1: goto $l206;
            }
            $l206:;
        }
        panda$collections$Array$add$panda$collections$Array$T(args127, ((panda$core$Object*) &$s207));
        panda$collections$Array$add$panda$collections$Array$T(args127, ((panda$core$Object*) &$s208));
        panda$collections$Array$add$panda$collections$Array$T(args127, ((panda$core$Object*) &$s209));
        panda$collections$Array$add$panda$collections$Array$T(args127, ((panda$core$Object*) p_dest->path));
        panda$core$System$Process* $tmp213 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args127));
        $tmp212 = $tmp213;
        $tmp211 = $tmp212;
        p210 = $tmp211;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp211));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
        panda$io$OutputStream* $tmp215 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp214 = $tmp215;
        panda$core$String* $tmp218 = (($fn217) p210->output->$class->vtable[14])(p210->output);
        $tmp216 = $tmp218;
        (($fn219) $tmp214->$class->vtable[17])($tmp214, $tmp216);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp216));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp214));
        panda$io$OutputStream* $tmp221 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp220 = $tmp221;
        panda$core$String* $tmp224 = (($fn223) p210->error->$class->vtable[14])(p210->error);
        $tmp222 = $tmp224;
        (($fn225) $tmp220->$class->vtable[17])($tmp220, $tmp222);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp222));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp226, p210);
        panda$core$Int64$init$builtin_int64(&$tmp227, 0);
        panda$core$Bit $tmp228 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp226, $tmp227);
        if ($tmp228.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp229, 1);
            panda$core$System$exit$panda$core$UInt8($tmp229);
        }
        }
        $tmp231 = p_dest;
        $returnValue230 = $tmp231;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp231));
        $tmp126 = 0;
        goto $l124;
        $l232:;
        return $returnValue230;
    }
    $l124:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p210));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) icuLibs142));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args127));
    args127 = NULL;
    icuLibs142 = NULL;
    p210 = NULL;
    switch ($tmp126) {
        case 0: goto $l232;
    }
    $l234:;
    abort();
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn236) p_out->$class->vtable[19])(p_out, &$s235);
    (($fn237) p_out->$class->vtable[21])(p_out);
    (($fn239) p_out->$class->vtable[19])(p_out, &$s238);
    (($fn240) p_out->$class->vtable[21])(p_out);
    (($fn242) p_out->$class->vtable[19])(p_out, &$s241);
    (($fn244) p_out->$class->vtable[19])(p_out, &$s243);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args248 = NULL;
    org$pandalanguage$pandac$Main$Arguments* $tmp249;
    org$pandalanguage$pandac$Main$Arguments* $tmp250;
    panda$collections$Array* sources252 = NULL;
    panda$collections$Array* $tmp253;
    panda$collections$Array* $tmp254;
    panda$collections$Array* imports256 = NULL;
    panda$collections$Array* $tmp257;
    panda$collections$Array* $tmp258;
    panda$io$File* outFile260 = NULL;
    panda$io$File* $tmp261;
    panda$core$Int64 optimizationLevel262;
    panda$core$Int64 $tmp263;
    panda$core$Int64 safetyLevel264;
    panda$core$Int64 $tmp265;
    org$pandalanguage$pandac$Main$Format$nullable format266;
    panda$core$String* root267 = NULL;
    panda$core$String* $tmp268;
    panda$io$OutputStream* err269 = NULL;
    panda$io$OutputStream* $tmp270;
    panda$io$OutputStream* $tmp271;
    panda$core$String* a282 = NULL;
    panda$core$String* $tmp283;
    panda$core$String* $tmp284;
    panda$core$String* $match$162_13290 = NULL;
    panda$core$String* $tmp291;
    panda$io$File* path297 = NULL;
    panda$io$File* $tmp298;
    panda$io$File* $tmp299;
    panda$io$InputStream* $tmp302;
    panda$io$OutputStream* $tmp304;
    panda$core$UInt8 $tmp312;
    panda$io$File* $tmp313;
    panda$io$File* $tmp314;
    panda$io$File* $tmp315;
    panda$core$String* $tmp317;
    panda$io$File* $tmp321;
    panda$core$String* level328 = NULL;
    panda$core$String* $tmp329;
    panda$core$String* $tmp330;
    panda$core$Int64 $tmp336;
    panda$core$Int64 $tmp339;
    panda$io$OutputStream* $tmp342;
    panda$core$UInt8 $tmp346;
    panda$core$String* level353 = NULL;
    panda$core$String* $tmp354;
    panda$core$String* $tmp355;
    panda$core$Int64 $tmp361;
    panda$core$Int64 $tmp364;
    panda$io$OutputStream* $tmp367;
    panda$core$UInt8 $tmp371;
    panda$core$UInt8 $tmp380;
    panda$core$String* f381 = NULL;
    panda$core$String* $tmp382;
    panda$core$String* $tmp383;
    panda$core$String* $match$194_21390 = NULL;
    panda$core$String* $tmp391;
    org$pandalanguage$pandac$Main$Format $tmp394;
    panda$core$Int64 $tmp395;
    org$pandalanguage$pandac$Main$Format $tmp398;
    panda$core$Int64 $tmp399;
    org$pandalanguage$pandac$Main$Format $tmp402;
    panda$core$Int64 $tmp403;
    org$pandalanguage$pandac$Main$Format $tmp406;
    panda$core$Int64 $tmp407;
    org$pandalanguage$pandac$Main$Format $tmp410;
    panda$core$Int64 $tmp411;
    org$pandalanguage$pandac$Main$Format $tmp414;
    panda$core$Int64 $tmp415;
    panda$core$String* $tmp416;
    panda$core$String* $tmp417;
    panda$core$UInt8 $tmp423;
    panda$io$File* $tmp428;
    panda$core$String* $tmp430;
    panda$core$String* $tmp436;
    panda$core$String* $tmp437;
    panda$core$String* $tmp438;
    panda$io$File* $tmp444;
    panda$core$String* $tmp446;
    panda$core$String* $tmp447;
    panda$core$UInt8 $tmp453;
    panda$io$File* llvmDir456 = NULL;
    panda$io$File* $tmp457;
    panda$io$File* $tmp458;
    panda$core$String* $tmp460;
    panda$io$File* $tmp462;
    panda$io$File* $tmp463;
    panda$io$File* $tmp464;
    panda$io$File* $tmp467;
    panda$io$File* $tmp468;
    panda$io$File* $tmp469;
    panda$io$File* $tmp472;
    panda$io$File* $tmp473;
    panda$io$File* $tmp474;
    panda$core$Int64 $tmp478;
    panda$core$UInt8 $tmp482;
    org$pandalanguage$pandac$Main$Format $tmp483;
    panda$core$Int64 $tmp484;
    panda$core$Int64 $tmp486;
    panda$core$String* extension491 = NULL;
    org$pandalanguage$pandac$Main$Format$nullable $match$233_17492;
    panda$core$Int64 $tmp493;
    panda$core$String* $tmp495;
    panda$core$String* $tmp496;
    panda$core$Int64 $tmp498;
    panda$core$String* $tmp500;
    panda$core$String* $tmp501;
    panda$core$Int64 $tmp503;
    panda$core$String* $tmp505;
    panda$core$String* $tmp506;
    panda$core$Int64 $tmp508;
    panda$core$String* $tmp510;
    panda$core$String* $tmp511;
    panda$core$UInt8 $tmp515;
    panda$io$File* $tmp516;
    panda$io$File* $tmp517;
    panda$io$File* $tmp518;
    panda$core$Object* $tmp519;
    panda$core$Int64 $tmp520;
    org$pandalanguage$pandac$Main$Format$nullable $tmp524;
    panda$core$Int64 $tmp529;
    panda$core$Bit $tmp531;
    panda$core$UInt8 $tmp534;
    panda$core$UInt8 $tmp537;
    org$pandalanguage$pandac$Main$Format$nullable $tmp538;
    panda$core$Int64 $tmp543;
    panda$core$Bit $tmp545;
    panda$core$String* $tmp546;
    panda$core$String* $tmp547;
    org$pandalanguage$pandac$HTMLProcessor* $tmp549;
    panda$core$Object* $tmp551;
    panda$core$Int64 $tmp552;
    panda$core$UInt8 $tmp558;
    panda$core$Int64 errorCount559;
    org$pandalanguage$pandac$CodeGenerator* cg563 = NULL;
    org$pandalanguage$pandac$Main$Format$nullable $match$268_13564;
    panda$core$Int64 $tmp567;
    panda$core$Int64 $tmp570;
    panda$core$Int64 $tmp574;
    org$pandalanguage$pandac$CodeGenerator* $tmp577;
    org$pandalanguage$pandac$CodeGenerator* $tmp578;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp579;
    panda$core$String* $tmp581;
    panda$io$OutputStream* $tmp583;
    panda$io$File* $tmp584;
    panda$core$Int64 $tmp588;
    org$pandalanguage$pandac$CodeGenerator* $tmp590;
    org$pandalanguage$pandac$CodeGenerator* $tmp591;
    org$pandalanguage$pandac$HCodeGenerator* $tmp592;
    panda$core$Int64 $tmp594;
    org$pandalanguage$pandac$CodeGenerator* $tmp596;
    org$pandalanguage$pandac$CodeGenerator* $tmp597;
    org$pandalanguage$pandac$CCodeGenerator* $tmp598;
    panda$core$Bit $tmp600;
    org$pandalanguage$pandac$Compiler$Settings* settings604 = NULL;
    org$pandalanguage$pandac$Compiler$Settings* $tmp605;
    org$pandalanguage$pandac$Compiler$Settings* $tmp606;
    panda$threads$MessageQueue* errorQueue608 = NULL;
    panda$threads$MessageQueue* $tmp609;
    panda$threads$MessageQueue* $tmp610;
    org$pandalanguage$pandac$Compiler* compiler612 = NULL;
    org$pandalanguage$pandac$Compiler* $tmp613;
    org$pandalanguage$pandac$Compiler* $tmp614;
    panda$collections$Iterator* Iter$282$13619 = NULL;
    panda$collections$Iterator* $tmp620;
    panda$collections$Iterator* $tmp621;
    panda$io$File* s637 = NULL;
    panda$io$File* $tmp638;
    panda$core$Object* $tmp639;
    panda$collections$Iterator* Iter$283$17647 = NULL;
    panda$collections$Iterator* $tmp648;
    panda$collections$Iterator* $tmp649;
    panda$collections$ListView* $tmp650;
    org$pandalanguage$pandac$ClassDecl* cl667 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp668;
    panda$core$Object* $tmp669;
    panda$collections$Iterator* Iter$287$13681 = NULL;
    panda$collections$Iterator* $tmp682;
    panda$collections$Iterator* $tmp683;
    panda$io$File* s699 = NULL;
    panda$io$File* $tmp700;
    panda$core$Object* $tmp701;
    panda$core$Range$LTpanda$core$Int64$GT $tmp709;
    panda$core$Int64 $tmp710;
    panda$core$Bit $tmp711;
    org$pandalanguage$pandac$Compiler$Error* error728 = NULL;
    org$pandalanguage$pandac$Compiler$Error* $tmp729;
    panda$core$Immutable* $tmp730;
    panda$core$String* $tmp732;
    panda$core$String* $tmp733;
    panda$core$String* $tmp734;
    panda$core$String* $tmp735;
    panda$core$String* $tmp736;
    panda$core$String* $tmp737;
    panda$core$String* $tmp738;
    panda$core$Object* $tmp743;
    panda$core$Int64 $tmp759;
    org$pandalanguage$pandac$Main$Format$nullable $match$298_13761;
    panda$core$Int64 $tmp762;
    panda$io$File* optimized767 = NULL;
    panda$io$File* $tmp768;
    panda$io$File* $tmp769;
    panda$io$File* $tmp770;
    panda$io$File* assembly774 = NULL;
    panda$io$File* $tmp775;
    panda$io$File* $tmp776;
    panda$io$File* $tmp778;
    panda$core$Int64 $tmp781;
    panda$io$File* optimized786 = NULL;
    panda$io$File* $tmp787;
    panda$io$File* $tmp788;
    panda$io$File* $tmp789;
    panda$io$File* assembly793 = NULL;
    panda$io$File* $tmp794;
    panda$io$File* $tmp795;
    panda$io$File* $tmp797;
    panda$core$Int64 $tmp800;
    panda$core$String* $tmp803;
    panda$core$String* $tmp804;
    panda$core$UInt8 $tmp808;
    int $tmp247;
    {
        org$pandalanguage$pandac$Main$Arguments* $tmp251 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
        org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp251, p_rawArgs);
        $tmp250 = $tmp251;
        $tmp249 = $tmp250;
        args248 = $tmp249;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp249));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp250));
        panda$collections$Array* $tmp255 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp255);
        $tmp254 = $tmp255;
        $tmp253 = $tmp254;
        sources252 = $tmp253;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp253));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
        panda$collections$Array* $tmp259 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp259);
        $tmp258 = $tmp259;
        $tmp257 = $tmp258;
        imports256 = $tmp257;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp257));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
        panda$collections$Array$add$panda$collections$Array$T(imports256, ((panda$core$Object*) self->pandaHome));
        $tmp261 = NULL;
        outFile260 = $tmp261;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp261));
        panda$core$Int64$init$builtin_int64(&$tmp263, 3);
        optimizationLevel262 = $tmp263;
        panda$core$Int64$init$builtin_int64(&$tmp265, 3);
        safetyLevel264 = $tmp265;
        format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { .nonnull = false });
        $tmp268 = NULL;
        root267 = $tmp268;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp268));
        panda$io$OutputStream* $tmp272 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp271 = $tmp272;
        $tmp270 = $tmp271;
        err269 = $tmp270;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp270));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp271));
        $l273:;
        panda$core$Bit $tmp277 = (($fn276) args248->$class->vtable[2])(args248);
        panda$core$Bit $tmp278 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp277);
        bool $tmp275 = $tmp278.value;
        if (!$tmp275) goto $l274;
        {
            int $tmp281;
            {
                panda$core$String* $tmp286 = (($fn285) args248->$class->vtable[3])(args248);
                $tmp284 = $tmp286;
                $tmp283 = $tmp284;
                a282 = $tmp283;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp283));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp284));
                int $tmp289;
                {
                    $tmp291 = a282;
                    $match$162_13290 = $tmp291;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp291));
                    panda$core$Bit $tmp293 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$162_13290, &$s292);
                    if ($tmp293.value) {
                    {
                        int $tmp296;
                        {
                            panda$io$File* $tmp300 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp300, &$s301);
                            $tmp299 = $tmp300;
                            $tmp298 = $tmp299;
                            path297 = $tmp298;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
                            panda$io$InputStream* $tmp303 = panda$io$Console$inputStream$R$panda$io$InputStream();
                            $tmp302 = $tmp303;
                            panda$io$OutputStream* $tmp305 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path297);
                            $tmp304 = $tmp305;
                            (($fn306) $tmp302->$class->vtable[16])($tmp302, $tmp304);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp302));
                            panda$collections$Array$add$panda$collections$Array$T(sources252, ((panda$core$Object*) path297));
                        }
                        $tmp296 = -1;
                        goto $l294;
                        $l294:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path297));
                        path297 = NULL;
                        switch ($tmp296) {
                            case -1: goto $l307;
                        }
                        $l307:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp309 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$162_13290, &$s308);
                    if ($tmp309.value) {
                    {
                        if (((panda$core$Bit) { outFile260 != NULL }).value) {
                        {
                            (($fn311) err269->$class->vtable[19])(err269, &$s310);
                            panda$core$UInt8$init$builtin_uint8(&$tmp312, 1);
                            panda$core$System$exit$panda$core$UInt8($tmp312);
                        }
                        }
                        {
                            $tmp313 = outFile260;
                            panda$io$File* $tmp316 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp320 = (($fn319) args248->$class->vtable[4])(args248, &$s318);
                            $tmp317 = $tmp320;
                            panda$io$File$init$panda$core$String($tmp316, $tmp317);
                            $tmp315 = $tmp316;
                            $tmp314 = $tmp315;
                            outFile260 = $tmp314;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp314));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
                        }
                        panda$io$File* $tmp322 = panda$io$File$parent$R$panda$io$File$Q(outFile260);
                        $tmp321 = $tmp322;
                        panda$io$File$createDirectories($tmp321);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
                    }
                    }
                    else {
                    panda$core$Bit $tmp324 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$162_13290, &$s323);
                    if ($tmp324.value) {
                    {
                        int $tmp327;
                        {
                            panda$core$String* $tmp333 = (($fn332) args248->$class->vtable[4])(args248, &$s331);
                            $tmp330 = $tmp333;
                            $tmp329 = $tmp330;
                            level328 = $tmp329;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp329));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
                            panda$core$Int64$nullable $tmp334 = panda$core$String$convert$R$panda$core$Int64$Q(level328);
                            optimizationLevel262 = ((panda$core$Int64) $tmp334.value);
                            panda$core$Int64$init$builtin_int64(&$tmp336, 3);
                            panda$core$Bit $tmp337 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel262, $tmp336);
                            bool $tmp335 = $tmp337.value;
                            if ($tmp335) goto $l338;
                            panda$core$Int64$init$builtin_int64(&$tmp339, 0);
                            panda$core$Bit $tmp340 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel262, $tmp339);
                            $tmp335 = $tmp340.value;
                            $l338:;
                            panda$core$Bit $tmp341 = { $tmp335 };
                            if ($tmp341.value) {
                            {
                                panda$io$OutputStream* $tmp343 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp342 = $tmp343;
                                (($fn345) $tmp342->$class->vtable[19])($tmp342, &$s344);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp342));
                                panda$core$UInt8$init$builtin_uint8(&$tmp346, 1);
                                panda$core$System$exit$panda$core$UInt8($tmp346);
                            }
                            }
                        }
                        $tmp327 = -1;
                        goto $l325;
                        $l325:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level328));
                        level328 = NULL;
                        switch ($tmp327) {
                            case -1: goto $l347;
                        }
                        $l347:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp349 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$162_13290, &$s348);
                    if ($tmp349.value) {
                    {
                        int $tmp352;
                        {
                            panda$core$String* $tmp358 = (($fn357) args248->$class->vtable[4])(args248, &$s356);
                            $tmp355 = $tmp358;
                            $tmp354 = $tmp355;
                            level353 = $tmp354;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp354));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp355));
                            panda$core$Int64$nullable $tmp359 = panda$core$String$convert$R$panda$core$Int64$Q(level353);
                            safetyLevel264 = ((panda$core$Int64) $tmp359.value);
                            panda$core$Int64$init$builtin_int64(&$tmp361, 3);
                            panda$core$Bit $tmp362 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel264, $tmp361);
                            bool $tmp360 = $tmp362.value;
                            if ($tmp360) goto $l363;
                            panda$core$Int64$init$builtin_int64(&$tmp364, 0);
                            panda$core$Bit $tmp365 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel264, $tmp364);
                            $tmp360 = $tmp365.value;
                            $l363:;
                            panda$core$Bit $tmp366 = { $tmp360 };
                            if ($tmp366.value) {
                            {
                                panda$io$OutputStream* $tmp368 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp367 = $tmp368;
                                (($fn370) $tmp367->$class->vtable[19])($tmp367, &$s369);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
                                panda$core$UInt8$init$builtin_uint8(&$tmp371, 1);
                                panda$core$System$exit$panda$core$UInt8($tmp371);
                            }
                            }
                        }
                        $tmp352 = -1;
                        goto $l350;
                        $l350:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level353));
                        level353 = NULL;
                        switch ($tmp352) {
                            case -1: goto $l372;
                        }
                        $l372:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp374 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$162_13290, &$s373);
                    if ($tmp374.value) {
                    {
                        int $tmp377;
                        {
                            if (((panda$core$Bit) { format266.nonnull }).value) {
                            {
                                (($fn379) err269->$class->vtable[19])(err269, &$s378);
                                panda$core$UInt8$init$builtin_uint8(&$tmp380, 1);
                                panda$core$System$exit$panda$core$UInt8($tmp380);
                            }
                            }
                            panda$core$String* $tmp386 = (($fn385) args248->$class->vtable[4])(args248, &$s384);
                            $tmp383 = $tmp386;
                            $tmp382 = $tmp383;
                            f381 = $tmp382;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp382));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp383));
                            int $tmp389;
                            {
                                $tmp391 = f381;
                                $match$194_21390 = $tmp391;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp391));
                                panda$core$Bit $tmp393 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$194_21390, &$s392);
                                if ($tmp393.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp395, 1);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp394, $tmp395);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp394, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp397 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$194_21390, &$s396);
                                if ($tmp397.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp399, 2);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp398, $tmp399);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp398, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp401 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$194_21390, &$s400);
                                if ($tmp401.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp403, 0);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp402, $tmp403);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp402, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp405 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$194_21390, &$s404);
                                if ($tmp405.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp407, 3);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp406, $tmp407);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp406, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp409 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$194_21390, &$s408);
                                if ($tmp409.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp411, 4);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp410, $tmp411);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp410, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp413 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$194_21390, &$s412);
                                if ($tmp413.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp415, 5);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp414, $tmp415);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp414, true });
                                }
                                }
                                else {
                                {
                                    panda$core$String* $tmp419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s418, f381);
                                    $tmp417 = $tmp419;
                                    panda$core$String* $tmp421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp417, &$s420);
                                    $tmp416 = $tmp421;
                                    (($fn422) err269->$class->vtable[19])(err269, $tmp416);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
                                    panda$core$UInt8$init$builtin_uint8(&$tmp423, 1);
                                    panda$core$System$exit$panda$core$UInt8($tmp423);
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            $tmp389 = -1;
                            goto $l387;
                            $l387:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
                            switch ($tmp389) {
                                case -1: goto $l424;
                            }
                            $l424:;
                        }
                        $tmp377 = -1;
                        goto $l375;
                        $l375:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f381));
                        f381 = NULL;
                        switch ($tmp377) {
                            case -1: goto $l425;
                        }
                        $l425:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp427 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$162_13290, &$s426);
                    if ($tmp427.value) {
                    {
                        panda$io$File* $tmp429 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$core$String* $tmp433 = (($fn432) args248->$class->vtable[4])(args248, &$s431);
                        $tmp430 = $tmp433;
                        panda$io$File$init$panda$core$String($tmp429, $tmp430);
                        $tmp428 = $tmp429;
                        panda$collections$Array$add$panda$collections$Array$T(imports256, ((panda$core$Object*) $tmp428));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp428));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp430));
                    }
                    }
                    else {
                    panda$core$Bit $tmp435 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$162_13290, &$s434);
                    if ($tmp435.value) {
                    {
                        {
                            $tmp436 = root267;
                            panda$core$String* $tmp441 = (($fn440) args248->$class->vtable[4])(args248, &$s439);
                            $tmp438 = $tmp441;
                            $tmp437 = $tmp438;
                            root267 = $tmp437;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp437));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp438));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp436));
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp443 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a282, &$s442);
                        if ($tmp443.value) {
                        {
                            panda$io$File* $tmp445 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp445, a282);
                            $tmp444 = $tmp445;
                            panda$collections$Array$add$panda$collections$Array$T(sources252, ((panda$core$Object*) $tmp444));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s448, a282);
                            $tmp447 = $tmp449;
                            panda$core$String* $tmp451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp447, &$s450);
                            $tmp446 = $tmp451;
                            (($fn452) err269->$class->vtable[19])(err269, $tmp446);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp446));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp447));
                            panda$core$UInt8$init$builtin_uint8(&$tmp453, 1);
                            panda$core$System$exit$panda$core$UInt8($tmp453);
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
                $tmp289 = -1;
                goto $l287;
                $l287:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp291));
                switch ($tmp289) {
                    case -1: goto $l454;
                }
                $l454:;
            }
            $tmp281 = -1;
            goto $l279;
            $l279:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a282));
            a282 = NULL;
            switch ($tmp281) {
                case -1: goto $l455;
            }
            $l455:;
        }
        goto $l273;
        $l274:;
        panda$io$File* $tmp459 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$core$String* $tmp461 = org$pandalanguage$pandac$Config$llvmDir$R$panda$core$String();
        $tmp460 = $tmp461;
        panda$io$File$init$panda$core$String($tmp459, $tmp460);
        $tmp458 = $tmp459;
        $tmp457 = $tmp458;
        llvmDir456 = $tmp457;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp457));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp458));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp460));
        {
            $tmp462 = self->opt;
            panda$io$File* $tmp466 = panda$io$File$resolve$panda$core$String$R$panda$io$File(llvmDir456, &$s465);
            $tmp464 = $tmp466;
            $tmp463 = $tmp464;
            self->opt = $tmp463;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp463));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp464));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp462));
        }
        {
            $tmp467 = self->llc;
            panda$io$File* $tmp471 = panda$io$File$resolve$panda$core$String$R$panda$io$File(llvmDir456, &$s470);
            $tmp469 = $tmp471;
            $tmp468 = $tmp469;
            self->llc = $tmp468;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp468));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp467));
        }
        {
            $tmp472 = self->gcc;
            panda$io$File* $tmp475 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
            panda$io$File$init$panda$core$String($tmp475, &$s476);
            $tmp474 = $tmp475;
            $tmp473 = $tmp474;
            self->gcc = $tmp473;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp473));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp474));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp472));
        }
        panda$core$Int64 $tmp477 = panda$collections$Array$get_count$R$panda$core$Int64(sources252);
        panda$core$Int64$init$builtin_int64(&$tmp478, 0);
        panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp477, $tmp478);
        if ($tmp479.value) {
        {
            (($fn481) err269->$class->vtable[19])(err269, &$s480);
            panda$core$UInt8$init$builtin_uint8(&$tmp482, 1);
            panda$core$System$exit$panda$core$UInt8($tmp482);
        }
        }
        if (((panda$core$Bit) { !format266.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp484, 1);
            org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp483, $tmp484);
            format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp483, true });
        }
        }
        if (((panda$core$Bit) { outFile260 == NULL }).value) {
        {
            panda$core$Int64 $tmp485 = panda$collections$Array$get_count$R$panda$core$Int64(sources252);
            panda$core$Int64$init$builtin_int64(&$tmp486, 1);
            panda$core$Bit $tmp487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp485, $tmp486);
            if ($tmp487.value) {
            {
                int $tmp490;
                {
                    memset(&extension491, 0, sizeof(extension491));
                    {
                        $match$233_17492 = format266;
                        panda$core$Int64$init$builtin_int64(&$tmp493, 1);
                        panda$core$Bit $tmp494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$233_17492.value).$rawValue, $tmp493);
                        if ($tmp494.value) {
                        {
                            {
                                $tmp495 = extension491;
                                $tmp496 = &$s497;
                                extension491 = $tmp496;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp496));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp495));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp498, 2);
                        panda$core$Bit $tmp499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$233_17492.value).$rawValue, $tmp498);
                        if ($tmp499.value) {
                        {
                            {
                                $tmp500 = extension491;
                                $tmp501 = &$s502;
                                extension491 = $tmp501;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp501));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp500));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp503, 0);
                        panda$core$Bit $tmp504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$233_17492.value).$rawValue, $tmp503);
                        if ($tmp504.value) {
                        {
                            {
                                $tmp505 = extension491;
                                $tmp506 = &$s507;
                                extension491 = $tmp506;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp506));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp505));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp508, 5);
                        panda$core$Bit $tmp509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$233_17492.value).$rawValue, $tmp508);
                        if ($tmp509.value) {
                        {
                            {
                                $tmp510 = extension491;
                                $tmp511 = &$s512;
                                extension491 = $tmp511;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp511));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp510));
                            }
                        }
                        }
                        else {
                        {
                            (($fn514) err269->$class->vtable[19])(err269, &$s513);
                            panda$core$UInt8$init$builtin_uint8(&$tmp515, 1);
                            panda$core$System$exit$panda$core$UInt8($tmp515);
                        }
                        }
                        }
                        }
                        }
                    }
                    {
                        $tmp516 = outFile260;
                        panda$core$Int64$init$builtin_int64(&$tmp520, 0);
                        panda$core$Object* $tmp521 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources252, $tmp520);
                        $tmp519 = $tmp521;
                        panda$io$File* $tmp522 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp519), extension491);
                        $tmp518 = $tmp522;
                        $tmp517 = $tmp518;
                        outFile260 = $tmp517;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp517));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp518));
                        panda$core$Panda$unref$panda$core$Object($tmp519);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp516));
                    }
                }
                $tmp490 = -1;
                goto $l488;
                $l488:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension491));
                switch ($tmp490) {
                    case -1: goto $l523;
                }
                $l523:;
            }
            }
            else {
            $tmp524 = format266;
            panda$core$Bit $tmp528;
            if (((panda$core$Bit) { $tmp524.nonnull }).value) goto $l525; else goto $l526;
            $l525:;
            panda$core$Int64$init$builtin_int64(&$tmp529, 5);
            panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $tmp524.value).$rawValue, $tmp529);
            $tmp528 = $tmp530;
            goto $l527;
            $l526:;
            panda$core$Bit$init$builtin_bit(&$tmp531, false);
            $tmp528 = $tmp531;
            goto $l527;
            $l527:;
            if ($tmp528.value) {
            {
                (($fn533) err269->$class->vtable[19])(err269, &$s532);
                panda$core$UInt8$init$builtin_uint8(&$tmp534, 1);
                panda$core$System$exit$panda$core$UInt8($tmp534);
            }
            }
            else {
            {
                (($fn536) err269->$class->vtable[19])(err269, &$s535);
                panda$core$UInt8$init$builtin_uint8(&$tmp537, 1);
                panda$core$System$exit$panda$core$UInt8($tmp537);
            }
            }
            }
        }
        }
        $tmp538 = format266;
        panda$core$Bit $tmp542;
        if (((panda$core$Bit) { $tmp538.nonnull }).value) goto $l539; else goto $l540;
        $l539:;
        panda$core$Int64$init$builtin_int64(&$tmp543, 5);
        panda$core$Bit $tmp544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $tmp538.value).$rawValue, $tmp543);
        $tmp542 = $tmp544;
        goto $l541;
        $l540:;
        panda$core$Bit$init$builtin_bit(&$tmp545, false);
        $tmp542 = $tmp545;
        goto $l541;
        $l541:;
        if ($tmp542.value) {
        {
            if (((panda$core$Bit) { root267 == NULL }).value) {
            {
                {
                    $tmp546 = root267;
                    $tmp547 = &$s548;
                    root267 = $tmp547;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp547));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
                }
            }
            }
            org$pandalanguage$pandac$HTMLProcessor* $tmp550 = (org$pandalanguage$pandac$HTMLProcessor*) pandaObjectAlloc(12, (panda$core$Class*) &org$pandalanguage$pandac$HTMLProcessor$class);
            org$pandalanguage$pandac$HTMLProcessor$init($tmp550);
            $tmp549 = $tmp550;
            panda$core$Int64$init$builtin_int64(&$tmp552, 0);
            panda$core$Object* $tmp553 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources252, $tmp552);
            $tmp551 = $tmp553;
            (($fn554) $tmp549->$class->vtable[3])($tmp549, ((panda$io$File*) $tmp551), outFile260, root267);
            panda$core$Panda$unref$panda$core$Object($tmp551);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
            $tmp247 = 0;
            goto $l245;
            $l555:;
            return;
        }
        }
        if (((panda$core$Bit) { root267 != NULL }).value) {
        {
            (($fn557) err269->$class->vtable[19])(err269, &$s556);
            panda$core$UInt8$init$builtin_uint8(&$tmp558, 1);
            panda$core$System$exit$panda$core$UInt8($tmp558);
        }
        }
        memset(&errorCount559, 0, sizeof(errorCount559));
        {
            int $tmp562;
            {
                memset(&cg563, 0, sizeof(cg563));
                {
                    $match$268_13564 = format266;
                    panda$core$Int64$init$builtin_int64(&$tmp567, 0);
                    panda$core$Bit $tmp568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$268_13564.value).$rawValue, $tmp567);
                    bool $tmp566 = $tmp568.value;
                    if ($tmp566) goto $l569;
                    panda$core$Int64$init$builtin_int64(&$tmp570, 1);
                    panda$core$Bit $tmp571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$268_13564.value).$rawValue, $tmp570);
                    $tmp566 = $tmp571.value;
                    $l569:;
                    panda$core$Bit $tmp572 = { $tmp566 };
                    bool $tmp565 = $tmp572.value;
                    if ($tmp565) goto $l573;
                    panda$core$Int64$init$builtin_int64(&$tmp574, 2);
                    panda$core$Bit $tmp575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$268_13564.value).$rawValue, $tmp574);
                    $tmp565 = $tmp575.value;
                    $l573:;
                    panda$core$Bit $tmp576 = { $tmp565 };
                    if ($tmp576.value) {
                    {
                        {
                            $tmp577 = cg563;
                            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp580 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                            panda$core$String* $tmp582 = org$pandalanguage$pandac$Config$llvmTriple$R$panda$core$String();
                            $tmp581 = $tmp582;
                            panda$io$File* $tmp586 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile260, &$s585);
                            $tmp584 = $tmp586;
                            panda$io$OutputStream* $tmp587 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp584);
                            $tmp583 = $tmp587;
                            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp580, $tmp581, $tmp583);
                            $tmp579 = $tmp580;
                            $tmp578 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp579);
                            cg563 = $tmp578;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp578));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp579));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp583));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp584));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp577));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp588, 3);
                    panda$core$Bit $tmp589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$268_13564.value).$rawValue, $tmp588);
                    if ($tmp589.value) {
                    {
                        {
                            $tmp590 = cg563;
                            org$pandalanguage$pandac$HCodeGenerator* $tmp593 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                            org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp593, outFile260);
                            $tmp592 = $tmp593;
                            $tmp591 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp592);
                            cg563 = $tmp591;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp591));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp590));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp594, 4);
                    panda$core$Bit $tmp595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$268_13564.value).$rawValue, $tmp594);
                    if ($tmp595.value) {
                    {
                        {
                            $tmp596 = cg563;
                            org$pandalanguage$pandac$CCodeGenerator* $tmp599 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(248, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                            org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp599, outFile260);
                            $tmp598 = $tmp599;
                            $tmp597 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp598);
                            cg563 = $tmp597;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp597));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp598));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp596));
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp600, false);
                        if ($tmp600.value) goto $l601; else goto $l602;
                        $l602:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s603, (panda$core$Int64) { 277 });
                        abort();
                        $l601:;
                    }
                    }
                    }
                    }
                }
                org$pandalanguage$pandac$Compiler$Settings* $tmp607 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
                org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp607, self->pandaHome, ((panda$collections$ListView*) imports256), optimizationLevel262, safetyLevel264);
                $tmp606 = $tmp607;
                $tmp605 = $tmp606;
                settings604 = $tmp605;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp605));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp606));
                panda$threads$MessageQueue* $tmp611 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
                panda$threads$MessageQueue$init($tmp611);
                $tmp610 = $tmp611;
                $tmp609 = $tmp610;
                errorQueue608 = $tmp609;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp609));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp610));
                org$pandalanguage$pandac$Compiler* $tmp615 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
                org$pandalanguage$pandac$Compiler$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp615, errorQueue608, cg563, settings604);
                $tmp614 = $tmp615;
                $tmp613 = $tmp614;
                compiler612 = $tmp613;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp613));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp614));
                {
                    int $tmp618;
                    {
                        ITable* $tmp622 = ((panda$collections$Iterable*) sources252)->$class->itable;
                        while ($tmp622->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp622 = $tmp622->next;
                        }
                        $fn624 $tmp623 = $tmp622->methods[0];
                        panda$collections$Iterator* $tmp625 = $tmp623(((panda$collections$Iterable*) sources252));
                        $tmp621 = $tmp625;
                        $tmp620 = $tmp621;
                        Iter$282$13619 = $tmp620;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp620));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp621));
                        $l626:;
                        ITable* $tmp629 = Iter$282$13619->$class->itable;
                        while ($tmp629->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp629 = $tmp629->next;
                        }
                        $fn631 $tmp630 = $tmp629->methods[0];
                        panda$core$Bit $tmp632 = $tmp630(Iter$282$13619);
                        panda$core$Bit $tmp633 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp632);
                        bool $tmp628 = $tmp633.value;
                        if (!$tmp628) goto $l627;
                        {
                            int $tmp636;
                            {
                                ITable* $tmp640 = Iter$282$13619->$class->itable;
                                while ($tmp640->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp640 = $tmp640->next;
                                }
                                $fn642 $tmp641 = $tmp640->methods[1];
                                panda$core$Object* $tmp643 = $tmp641(Iter$282$13619);
                                $tmp639 = $tmp643;
                                $tmp638 = ((panda$io$File*) $tmp639);
                                s637 = $tmp638;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp638));
                                panda$core$Panda$unref$panda$core$Object($tmp639);
                                {
                                    int $tmp646;
                                    {
                                        panda$collections$ListView* $tmp651 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler612, s637);
                                        $tmp650 = $tmp651;
                                        ITable* $tmp652 = ((panda$collections$Iterable*) $tmp650)->$class->itable;
                                        while ($tmp652->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp652 = $tmp652->next;
                                        }
                                        $fn654 $tmp653 = $tmp652->methods[0];
                                        panda$collections$Iterator* $tmp655 = $tmp653(((panda$collections$Iterable*) $tmp650));
                                        $tmp649 = $tmp655;
                                        $tmp648 = $tmp649;
                                        Iter$283$17647 = $tmp648;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp648));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp649));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp650));
                                        $l656:;
                                        ITable* $tmp659 = Iter$283$17647->$class->itable;
                                        while ($tmp659->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp659 = $tmp659->next;
                                        }
                                        $fn661 $tmp660 = $tmp659->methods[0];
                                        panda$core$Bit $tmp662 = $tmp660(Iter$283$17647);
                                        panda$core$Bit $tmp663 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp662);
                                        bool $tmp658 = $tmp663.value;
                                        if (!$tmp658) goto $l657;
                                        {
                                            int $tmp666;
                                            {
                                                ITable* $tmp670 = Iter$283$17647->$class->itable;
                                                while ($tmp670->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp670 = $tmp670->next;
                                                }
                                                $fn672 $tmp671 = $tmp670->methods[1];
                                                panda$core$Object* $tmp673 = $tmp671(Iter$283$17647);
                                                $tmp669 = $tmp673;
                                                $tmp668 = ((org$pandalanguage$pandac$ClassDecl*) $tmp669);
                                                cl667 = $tmp668;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp668));
                                                panda$core$Panda$unref$panda$core$Object($tmp669);
                                                org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler612, cl667);
                                            }
                                            $tmp666 = -1;
                                            goto $l664;
                                            $l664:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl667));
                                            cl667 = NULL;
                                            switch ($tmp666) {
                                                case -1: goto $l674;
                                            }
                                            $l674:;
                                        }
                                        goto $l656;
                                        $l657:;
                                    }
                                    $tmp646 = -1;
                                    goto $l644;
                                    $l644:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$283$17647));
                                    Iter$283$17647 = NULL;
                                    switch ($tmp646) {
                                        case -1: goto $l675;
                                    }
                                    $l675:;
                                }
                            }
                            $tmp636 = -1;
                            goto $l634;
                            $l634:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s637));
                            s637 = NULL;
                            switch ($tmp636) {
                                case -1: goto $l676;
                            }
                            $l676:;
                        }
                        goto $l626;
                        $l627:;
                    }
                    $tmp618 = -1;
                    goto $l616;
                    $l616:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$282$13619));
                    Iter$282$13619 = NULL;
                    switch ($tmp618) {
                        case -1: goto $l677;
                    }
                    $l677:;
                }
                {
                    int $tmp680;
                    {
                        ITable* $tmp684 = ((panda$collections$Iterable*) sources252)->$class->itable;
                        while ($tmp684->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp684 = $tmp684->next;
                        }
                        $fn686 $tmp685 = $tmp684->methods[0];
                        panda$collections$Iterator* $tmp687 = $tmp685(((panda$collections$Iterable*) sources252));
                        $tmp683 = $tmp687;
                        $tmp682 = $tmp683;
                        Iter$287$13681 = $tmp682;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp682));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp683));
                        $l688:;
                        ITable* $tmp691 = Iter$287$13681->$class->itable;
                        while ($tmp691->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp691 = $tmp691->next;
                        }
                        $fn693 $tmp692 = $tmp691->methods[0];
                        panda$core$Bit $tmp694 = $tmp692(Iter$287$13681);
                        panda$core$Bit $tmp695 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp694);
                        bool $tmp690 = $tmp695.value;
                        if (!$tmp690) goto $l689;
                        {
                            int $tmp698;
                            {
                                ITable* $tmp702 = Iter$287$13681->$class->itable;
                                while ($tmp702->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp702 = $tmp702->next;
                                }
                                $fn704 $tmp703 = $tmp702->methods[1];
                                panda$core$Object* $tmp705 = $tmp703(Iter$287$13681);
                                $tmp701 = $tmp705;
                                $tmp700 = ((panda$io$File*) $tmp701);
                                s699 = $tmp700;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp700));
                                panda$core$Panda$unref$panda$core$Object($tmp701);
                                org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler612, s699);
                            }
                            $tmp698 = -1;
                            goto $l696;
                            $l696:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s699));
                            s699 = NULL;
                            switch ($tmp698) {
                                case -1: goto $l706;
                            }
                            $l706:;
                        }
                        goto $l688;
                        $l689:;
                    }
                    $tmp680 = -1;
                    goto $l678;
                    $l678:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$287$13681));
                    Iter$287$13681 = NULL;
                    switch ($tmp680) {
                        case -1: goto $l707;
                    }
                    $l707:;
                }
                org$pandalanguage$pandac$Compiler$finish(compiler612);
                panda$core$Int64 $tmp708 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(errorQueue608);
                errorCount559 = $tmp708;
                panda$core$Int64$init$builtin_int64(&$tmp710, 0);
                panda$core$Bit$init$builtin_bit(&$tmp711, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp709, $tmp710, errorCount559, $tmp711);
                int64_t $tmp713 = $tmp709.min.value;
                panda$core$Int64 i712 = { $tmp713 };
                int64_t $tmp715 = $tmp709.max.value;
                bool $tmp716 = $tmp709.inclusive.value;
                if ($tmp716) goto $l723; else goto $l724;
                $l723:;
                if ($tmp713 <= $tmp715) goto $l717; else goto $l719;
                $l724:;
                if ($tmp713 < $tmp715) goto $l717; else goto $l719;
                $l717:;
                {
                    int $tmp727;
                    {
                        panda$core$Immutable* $tmp731 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(errorQueue608);
                        $tmp730 = $tmp731;
                        $tmp729 = ((org$pandalanguage$pandac$Compiler$Error*) $tmp730);
                        error728 = $tmp729;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp729));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp730));
                        panda$core$String* $tmp739 = panda$io$File$name$R$panda$core$String(error728->file);
                        $tmp738 = $tmp739;
                        panda$core$String* $tmp740 = panda$core$String$convert$R$panda$core$String($tmp738);
                        $tmp737 = $tmp740;
                        panda$core$String* $tmp742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp737, &$s741);
                        $tmp736 = $tmp742;
                        org$pandalanguage$pandac$Position$wrapper* $tmp744;
                        $tmp744 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                        $tmp744->value = error728->position;
                        $tmp743 = ((panda$core$Object*) $tmp744);
                        panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp736, $tmp743);
                        $tmp735 = $tmp745;
                        panda$core$String* $tmp747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp735, &$s746);
                        $tmp734 = $tmp747;
                        panda$core$String* $tmp748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp734, error728->message);
                        $tmp733 = $tmp748;
                        panda$core$String* $tmp750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp733, &$s749);
                        $tmp732 = $tmp750;
                        panda$io$Console$printLine$panda$core$String($tmp732);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp732));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp733));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp734));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp735));
                        panda$core$Panda$unref$panda$core$Object($tmp743);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp736));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp737));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp738));
                    }
                    $tmp727 = -1;
                    goto $l725;
                    $l725:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) error728));
                    error728 = NULL;
                    switch ($tmp727) {
                        case -1: goto $l751;
                    }
                    $l751:;
                }
                $l720:;
                int64_t $tmp753 = $tmp715 - i712.value;
                if ($tmp716) goto $l754; else goto $l755;
                $l754:;
                if ((uint64_t) $tmp753 >= 1) goto $l752; else goto $l719;
                $l755:;
                if ((uint64_t) $tmp753 > 1) goto $l752; else goto $l719;
                $l752:;
                i712.value += 1;
                goto $l717;
                $l719:;
            }
            $tmp562 = -1;
            goto $l560;
            $l560:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler612));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) errorQueue608));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings604));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg563));
            settings604 = NULL;
            errorQueue608 = NULL;
            compiler612 = NULL;
            switch ($tmp562) {
                case -1: goto $l758;
            }
            $l758:;
        }
        panda$core$Int64$init$builtin_int64(&$tmp759, 0);
        panda$core$Bit $tmp760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount559, $tmp759);
        if ($tmp760.value) {
        {
            {
                $match$298_13761 = format266;
                panda$core$Int64$init$builtin_int64(&$tmp762, 1);
                panda$core$Bit $tmp763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$298_13761.value).$rawValue, $tmp762);
                if ($tmp763.value) {
                {
                    int $tmp766;
                    {
                        panda$io$File* $tmp772 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile260, &$s771);
                        $tmp770 = $tmp772;
                        panda$io$File* $tmp773 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp770, optimizationLevel262);
                        $tmp769 = $tmp773;
                        $tmp768 = $tmp769;
                        optimized767 = $tmp768;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp768));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp769));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp770));
                        panda$io$File* $tmp777 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized767);
                        $tmp776 = $tmp777;
                        $tmp775 = $tmp776;
                        assembly774 = $tmp775;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp775));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp776));
                        panda$io$File* $tmp779 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly774, outFile260);
                        $tmp778 = $tmp779;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp778));
                    }
                    $tmp766 = -1;
                    goto $l764;
                    $l764:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly774));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized767));
                    optimized767 = NULL;
                    assembly774 = NULL;
                    switch ($tmp766) {
                        case -1: goto $l780;
                    }
                    $l780:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp781, 2);
                panda$core$Bit $tmp782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$298_13761.value).$rawValue, $tmp781);
                if ($tmp782.value) {
                {
                    int $tmp785;
                    {
                        panda$io$File* $tmp791 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile260, &$s790);
                        $tmp789 = $tmp791;
                        panda$io$File* $tmp792 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp789, optimizationLevel262);
                        $tmp788 = $tmp792;
                        $tmp787 = $tmp788;
                        optimized786 = $tmp787;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp787));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp788));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp789));
                        panda$io$File* $tmp796 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized786);
                        $tmp795 = $tmp796;
                        $tmp794 = $tmp795;
                        assembly793 = $tmp794;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp794));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp795));
                        panda$io$File* $tmp798 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly793, outFile260);
                        $tmp797 = $tmp798;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp797));
                    }
                    $tmp785 = -1;
                    goto $l783;
                    $l783:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly793));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized786));
                    optimized786 = NULL;
                    assembly793 = NULL;
                    switch ($tmp785) {
                        case -1: goto $l799;
                    }
                    $l799:;
                }
                }
                }
            }
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp800, 1);
            panda$core$Bit $tmp801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount559, $tmp800);
            if ($tmp801.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s802);
            }
            }
            else {
            {
                panda$core$String* $tmp805 = panda$core$Int64$convert$R$panda$core$String(errorCount559);
                $tmp804 = $tmp805;
                panda$core$String* $tmp807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp804, &$s806);
                $tmp803 = $tmp807;
                panda$io$Console$printLine$panda$core$String($tmp803);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp803));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp804));
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp808, 1);
            panda$core$System$exit$panda$core$UInt8($tmp808);
        }
        }
    }
    $tmp247 = -1;
    goto $l245;
    $l245:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llvmDir456));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err269));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) root267));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile260));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports256));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources252));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args248));
    args248 = NULL;
    sources252 = NULL;
    imports256 = NULL;
    err269 = NULL;
    llvmDir456 = NULL;
    switch ($tmp247) {
        case -1: goto $l809;
        case 0: goto $l555;
    }
    $l809:;
}
panda$core$Bit org$pandalanguage$pandac$Main$containsError$panda$core$String$R$panda$core$Bit(panda$core$String* p_s) {
    panda$core$Bit $returnValue810;
    panda$core$Bit $tmp812 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_s, &$s811);
    $returnValue810 = $tmp812;
    return $returnValue810;
}
void pandaMain(panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$Main* $tmp814;
    org$pandalanguage$pandac$Main* $tmp815 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
    org$pandalanguage$pandac$Main$init($tmp815);
    $tmp814 = $tmp815;
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp814, p_args);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp814));
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    int $tmp818;
    {
    }
    $tmp818 = -1;
    goto $l816;
    $l816:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp818) {
        case -1: goto $l819;
    }
    $l819:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

