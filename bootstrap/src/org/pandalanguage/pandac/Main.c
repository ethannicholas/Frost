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
#include "org/pandalanguage/pandac/pandadoc/PandaDoc.h"
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
typedef void (*$fn426)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn436)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn444)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn456)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn485)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn518)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn537)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn540)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn558)(org$pandalanguage$pandac$HTMLProcessor*, panda$io$File*, panda$io$File*, panda$core$String*);
typedef void (*$fn561)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn634)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn641)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn652)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn664)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn671)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn682)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn696)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn703)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn714)(panda$collections$Iterator*);

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
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78\x6d\x6c", 3, 2265538, NULL };
static panda$core$String $s422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };

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
        panda$core$String* $tmp45 = (($fn44) p37->error->$class->vtable[6])(p37->error);
        $tmp43 = $tmp45;
        (($fn46) $tmp41->$class->vtable[18])($tmp41, $tmp43);
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
        panda$core$String* $tmp77 = (($fn76) p69->error->$class->vtable[6])(p69->error);
        $tmp75 = $tmp77;
        (($fn78) $tmp73->$class->vtable[18])($tmp73, $tmp75);
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
        panda$core$String* $tmp107 = (($fn106) p99->output->$class->vtable[6])(p99->output);
        $tmp105 = $tmp107;
        (($fn108) $tmp103->$class->vtable[18])($tmp103, $tmp105);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
        panda$io$OutputStream* $tmp110 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp109 = $tmp110;
        panda$core$String* $tmp113 = (($fn112) p99->error->$class->vtable[6])(p99->error);
        $tmp111 = $tmp113;
        (($fn114) $tmp109->$class->vtable[18])($tmp109, $tmp111);
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
    panda$collections$Array* icuLibs142 = NULL;
    panda$collections$Array* $tmp143;
    panda$collections$Array* $tmp144;
    panda$core$String* $tmp145;
    panda$collections$Iterator* Iter$120$9152 = NULL;
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
        panda$collections$Array* $tmp148 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT($tmp145, &$s147);
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
                Iter$120$9152 = $tmp153;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp153));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
                $l159:;
                ITable* $tmp162 = Iter$120$9152->$class->itable;
                while ($tmp162->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp162 = $tmp162->next;
                }
                $fn164 $tmp163 = $tmp162->methods[0];
                panda$core$Bit $tmp165 = $tmp163(Iter$120$9152);
                panda$core$Bit $tmp166 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp165);
                bool $tmp161 = $tmp166.value;
                if (!$tmp161) goto $l160;
                {
                    int $tmp169;
                    {
                        ITable* $tmp173 = Iter$120$9152->$class->itable;
                        while ($tmp173->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp173 = $tmp173->next;
                        }
                        $fn175 $tmp174 = $tmp173->methods[1];
                        panda$core$Object* $tmp176 = $tmp174(Iter$120$9152);
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
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s194, (panda$core$Int64) { 124 });
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$120$9152));
            Iter$120$9152 = NULL;
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
        panda$core$String* $tmp218 = (($fn217) p210->output->$class->vtable[6])(p210->output);
        $tmp216 = $tmp218;
        (($fn219) $tmp214->$class->vtable[18])($tmp214, $tmp216);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp216));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp214));
        panda$io$OutputStream* $tmp221 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp220 = $tmp221;
        panda$core$String* $tmp224 = (($fn223) p210->error->$class->vtable[6])(p210->error);
        $tmp222 = $tmp224;
        (($fn225) $tmp220->$class->vtable[18])($tmp220, $tmp222);
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
    (($fn236) p_out->$class->vtable[21])(p_out, &$s235);
    (($fn237) p_out->$class->vtable[19])(p_out);
    (($fn239) p_out->$class->vtable[21])(p_out, &$s238);
    (($fn240) p_out->$class->vtable[19])(p_out);
    (($fn242) p_out->$class->vtable[21])(p_out, &$s241);
    (($fn244) p_out->$class->vtable[21])(p_out, &$s243);
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
    panda$core$String* $match$163_13290 = NULL;
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
    panda$core$String* $match$195_21390 = NULL;
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
    org$pandalanguage$pandac$Main$Format $tmp418;
    panda$core$Int64 $tmp419;
    panda$core$String* $tmp420;
    panda$core$String* $tmp421;
    panda$core$UInt8 $tmp427;
    panda$io$File* $tmp432;
    panda$core$String* $tmp434;
    panda$core$String* $tmp440;
    panda$core$String* $tmp441;
    panda$core$String* $tmp442;
    panda$io$File* $tmp448;
    panda$core$String* $tmp450;
    panda$core$String* $tmp451;
    panda$core$UInt8 $tmp457;
    panda$io$File* llvmDir460 = NULL;
    panda$io$File* $tmp461;
    panda$io$File* $tmp462;
    panda$core$String* $tmp464;
    panda$io$File* $tmp466;
    panda$io$File* $tmp467;
    panda$io$File* $tmp468;
    panda$io$File* $tmp471;
    panda$io$File* $tmp472;
    panda$io$File* $tmp473;
    panda$io$File* $tmp476;
    panda$io$File* $tmp477;
    panda$io$File* $tmp478;
    panda$core$Int64 $tmp482;
    panda$core$UInt8 $tmp486;
    org$pandalanguage$pandac$Main$Format $tmp487;
    panda$core$Int64 $tmp488;
    panda$core$Int64 $tmp490;
    panda$core$String* extension495 = NULL;
    org$pandalanguage$pandac$Main$Format$nullable $match$235_17496;
    panda$core$Int64 $tmp497;
    panda$core$String* $tmp499;
    panda$core$String* $tmp500;
    panda$core$Int64 $tmp502;
    panda$core$String* $tmp504;
    panda$core$String* $tmp505;
    panda$core$Int64 $tmp507;
    panda$core$String* $tmp509;
    panda$core$String* $tmp510;
    panda$core$Int64 $tmp512;
    panda$core$String* $tmp514;
    panda$core$String* $tmp515;
    panda$core$UInt8 $tmp519;
    panda$io$File* $tmp520;
    panda$io$File* $tmp521;
    panda$io$File* $tmp522;
    panda$core$Object* $tmp523;
    panda$core$Int64 $tmp524;
    org$pandalanguage$pandac$Main$Format$nullable $tmp528;
    panda$core$Int64 $tmp533;
    panda$core$Bit $tmp535;
    panda$core$UInt8 $tmp538;
    panda$core$UInt8 $tmp541;
    org$pandalanguage$pandac$Main$Format$nullable $tmp542;
    panda$core$Int64 $tmp547;
    panda$core$Bit $tmp549;
    panda$core$String* $tmp550;
    panda$core$String* $tmp551;
    org$pandalanguage$pandac$HTMLProcessor* $tmp553;
    panda$core$Object* $tmp555;
    panda$core$Int64 $tmp556;
    panda$core$UInt8 $tmp562;
    panda$core$Int64 errorCount563;
    org$pandalanguage$pandac$CodeGenerator* cg567 = NULL;
    org$pandalanguage$pandac$Main$Format$nullable $match$270_13568;
    panda$core$Int64 $tmp571;
    panda$core$Int64 $tmp574;
    panda$core$Int64 $tmp578;
    org$pandalanguage$pandac$CodeGenerator* $tmp581;
    org$pandalanguage$pandac$CodeGenerator* $tmp582;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp583;
    panda$core$String* $tmp585;
    panda$io$OutputStream* $tmp587;
    panda$io$File* $tmp588;
    panda$core$Int64 $tmp592;
    org$pandalanguage$pandac$CodeGenerator* $tmp594;
    org$pandalanguage$pandac$CodeGenerator* $tmp595;
    org$pandalanguage$pandac$HCodeGenerator* $tmp596;
    panda$core$Int64 $tmp598;
    org$pandalanguage$pandac$CodeGenerator* $tmp600;
    org$pandalanguage$pandac$CodeGenerator* $tmp601;
    org$pandalanguage$pandac$CCodeGenerator* $tmp602;
    panda$core$Int64 $tmp604;
    org$pandalanguage$pandac$CodeGenerator* $tmp606;
    org$pandalanguage$pandac$CodeGenerator* $tmp607;
    org$pandalanguage$pandac$pandadoc$PandaDoc* $tmp608;
    panda$core$Bit $tmp610;
    org$pandalanguage$pandac$Compiler$Settings* settings614 = NULL;
    org$pandalanguage$pandac$Compiler$Settings* $tmp615;
    org$pandalanguage$pandac$Compiler$Settings* $tmp616;
    panda$threads$MessageQueue* errorQueue618 = NULL;
    panda$threads$MessageQueue* $tmp619;
    panda$threads$MessageQueue* $tmp620;
    org$pandalanguage$pandac$Compiler* compiler622 = NULL;
    org$pandalanguage$pandac$Compiler* $tmp623;
    org$pandalanguage$pandac$Compiler* $tmp624;
    panda$collections$Iterator* Iter$286$13629 = NULL;
    panda$collections$Iterator* $tmp630;
    panda$collections$Iterator* $tmp631;
    panda$io$File* s647 = NULL;
    panda$io$File* $tmp648;
    panda$core$Object* $tmp649;
    panda$collections$Iterator* Iter$287$17657 = NULL;
    panda$collections$Iterator* $tmp658;
    panda$collections$Iterator* $tmp659;
    panda$collections$ListView* $tmp660;
    org$pandalanguage$pandac$ClassDecl* cl677 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp678;
    panda$core$Object* $tmp679;
    panda$collections$Iterator* Iter$291$13691 = NULL;
    panda$collections$Iterator* $tmp692;
    panda$collections$Iterator* $tmp693;
    panda$io$File* s709 = NULL;
    panda$io$File* $tmp710;
    panda$core$Object* $tmp711;
    panda$core$Range$LTpanda$core$Int64$GT $tmp719;
    panda$core$Int64 $tmp720;
    panda$core$Bit $tmp721;
    org$pandalanguage$pandac$Compiler$Error* error738 = NULL;
    org$pandalanguage$pandac$Compiler$Error* $tmp739;
    panda$core$Immutable* $tmp740;
    panda$core$String* $tmp742;
    panda$core$String* $tmp743;
    panda$core$String* $tmp744;
    panda$core$String* $tmp745;
    panda$core$String* $tmp746;
    panda$core$String* $tmp747;
    panda$core$String* $tmp748;
    panda$core$Object* $tmp753;
    panda$core$Int64 $tmp769;
    org$pandalanguage$pandac$Main$Format$nullable $match$302_13771;
    panda$core$Int64 $tmp772;
    panda$io$File* optimized777 = NULL;
    panda$io$File* $tmp778;
    panda$io$File* $tmp779;
    panda$io$File* $tmp780;
    panda$io$File* assembly784 = NULL;
    panda$io$File* $tmp785;
    panda$io$File* $tmp786;
    panda$io$File* $tmp788;
    panda$core$Int64 $tmp791;
    panda$io$File* optimized796 = NULL;
    panda$io$File* $tmp797;
    panda$io$File* $tmp798;
    panda$io$File* $tmp799;
    panda$io$File* assembly803 = NULL;
    panda$io$File* $tmp804;
    panda$io$File* $tmp805;
    panda$io$File* $tmp807;
    panda$core$Int64 $tmp810;
    panda$core$String* $tmp813;
    panda$core$String* $tmp814;
    panda$core$UInt8 $tmp818;
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
                    $match$163_13290 = $tmp291;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp291));
                    panda$core$Bit $tmp293 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$163_13290, &$s292);
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
                            (($fn306) $tmp302->$class->vtable[12])($tmp302, $tmp304);
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
                    panda$core$Bit $tmp309 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$163_13290, &$s308);
                    if ($tmp309.value) {
                    {
                        if (((panda$core$Bit) { outFile260 != NULL }).value) {
                        {
                            (($fn311) err269->$class->vtable[21])(err269, &$s310);
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
                    panda$core$Bit $tmp324 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$163_13290, &$s323);
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
                                (($fn345) $tmp342->$class->vtable[21])($tmp342, &$s344);
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
                    panda$core$Bit $tmp349 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$163_13290, &$s348);
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
                                (($fn370) $tmp367->$class->vtable[21])($tmp367, &$s369);
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
                    panda$core$Bit $tmp374 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$163_13290, &$s373);
                    if ($tmp374.value) {
                    {
                        int $tmp377;
                        {
                            if (((panda$core$Bit) { format266.nonnull }).value) {
                            {
                                (($fn379) err269->$class->vtable[21])(err269, &$s378);
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
                                $match$195_21390 = $tmp391;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp391));
                                panda$core$Bit $tmp393 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$195_21390, &$s392);
                                if ($tmp393.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp395, 1);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp394, $tmp395);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp394, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp397 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$195_21390, &$s396);
                                if ($tmp397.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp399, 2);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp398, $tmp399);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp398, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp401 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$195_21390, &$s400);
                                if ($tmp401.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp403, 0);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp402, $tmp403);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp402, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp405 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$195_21390, &$s404);
                                if ($tmp405.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp407, 3);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp406, $tmp407);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp406, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp409 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$195_21390, &$s408);
                                if ($tmp409.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp411, 4);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp410, $tmp411);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp410, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp413 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$195_21390, &$s412);
                                if ($tmp413.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp415, 5);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp414, $tmp415);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp414, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp417 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$195_21390, &$s416);
                                if ($tmp417.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp419, 6);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp418, $tmp419);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp418, true });
                                }
                                }
                                else {
                                {
                                    panda$core$String* $tmp423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s422, f381);
                                    $tmp421 = $tmp423;
                                    panda$core$String* $tmp425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp421, &$s424);
                                    $tmp420 = $tmp425;
                                    (($fn426) err269->$class->vtable[21])(err269, $tmp420);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp420));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp421));
                                    panda$core$UInt8$init$builtin_uint8(&$tmp427, 1);
                                    panda$core$System$exit$panda$core$UInt8($tmp427);
                                }
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
                                case -1: goto $l428;
                            }
                            $l428:;
                        }
                        $tmp377 = -1;
                        goto $l375;
                        $l375:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f381));
                        f381 = NULL;
                        switch ($tmp377) {
                            case -1: goto $l429;
                        }
                        $l429:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp431 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$163_13290, &$s430);
                    if ($tmp431.value) {
                    {
                        panda$io$File* $tmp433 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$core$String* $tmp437 = (($fn436) args248->$class->vtable[4])(args248, &$s435);
                        $tmp434 = $tmp437;
                        panda$io$File$init$panda$core$String($tmp433, $tmp434);
                        $tmp432 = $tmp433;
                        panda$collections$Array$add$panda$collections$Array$T(imports256, ((panda$core$Object*) $tmp432));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp432));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp434));
                    }
                    }
                    else {
                    panda$core$Bit $tmp439 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$163_13290, &$s438);
                    if ($tmp439.value) {
                    {
                        {
                            $tmp440 = root267;
                            panda$core$String* $tmp445 = (($fn444) args248->$class->vtable[4])(args248, &$s443);
                            $tmp442 = $tmp445;
                            $tmp441 = $tmp442;
                            root267 = $tmp441;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp441));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp442));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp447 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a282, &$s446);
                        if ($tmp447.value) {
                        {
                            panda$io$File* $tmp449 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp449, a282);
                            $tmp448 = $tmp449;
                            panda$collections$Array$add$panda$collections$Array$T(sources252, ((panda$core$Object*) $tmp448));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s452, a282);
                            $tmp451 = $tmp453;
                            panda$core$String* $tmp455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp451, &$s454);
                            $tmp450 = $tmp455;
                            (($fn456) err269->$class->vtable[21])(err269, $tmp450);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp450));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp451));
                            panda$core$UInt8$init$builtin_uint8(&$tmp457, 1);
                            panda$core$System$exit$panda$core$UInt8($tmp457);
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
                    case -1: goto $l458;
                }
                $l458:;
            }
            $tmp281 = -1;
            goto $l279;
            $l279:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a282));
            a282 = NULL;
            switch ($tmp281) {
                case -1: goto $l459;
            }
            $l459:;
        }
        goto $l273;
        $l274:;
        panda$io$File* $tmp463 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$core$String* $tmp465 = org$pandalanguage$pandac$Config$llvmDir$R$panda$core$String();
        $tmp464 = $tmp465;
        panda$io$File$init$panda$core$String($tmp463, $tmp464);
        $tmp462 = $tmp463;
        $tmp461 = $tmp462;
        llvmDir460 = $tmp461;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp461));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp462));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp464));
        {
            $tmp466 = self->opt;
            panda$io$File* $tmp470 = panda$io$File$resolve$panda$core$String$R$panda$io$File(llvmDir460, &$s469);
            $tmp468 = $tmp470;
            $tmp467 = $tmp468;
            self->opt = $tmp467;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp467));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp468));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp466));
        }
        {
            $tmp471 = self->llc;
            panda$io$File* $tmp475 = panda$io$File$resolve$panda$core$String$R$panda$io$File(llvmDir460, &$s474);
            $tmp473 = $tmp475;
            $tmp472 = $tmp473;
            self->llc = $tmp472;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp472));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp473));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp471));
        }
        {
            $tmp476 = self->gcc;
            panda$io$File* $tmp479 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
            panda$io$File$init$panda$core$String($tmp479, &$s480);
            $tmp478 = $tmp479;
            $tmp477 = $tmp478;
            self->gcc = $tmp477;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp477));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp478));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp476));
        }
        panda$core$Int64 $tmp481 = panda$collections$Array$get_count$R$panda$core$Int64(sources252);
        panda$core$Int64$init$builtin_int64(&$tmp482, 0);
        panda$core$Bit $tmp483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp481, $tmp482);
        if ($tmp483.value) {
        {
            (($fn485) err269->$class->vtable[21])(err269, &$s484);
            panda$core$UInt8$init$builtin_uint8(&$tmp486, 1);
            panda$core$System$exit$panda$core$UInt8($tmp486);
        }
        }
        if (((panda$core$Bit) { !format266.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp488, 1);
            org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp487, $tmp488);
            format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp487, true });
        }
        }
        if (((panda$core$Bit) { outFile260 == NULL }).value) {
        {
            panda$core$Int64 $tmp489 = panda$collections$Array$get_count$R$panda$core$Int64(sources252);
            panda$core$Int64$init$builtin_int64(&$tmp490, 1);
            panda$core$Bit $tmp491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp489, $tmp490);
            if ($tmp491.value) {
            {
                int $tmp494;
                {
                    memset(&extension495, 0, sizeof(extension495));
                    {
                        $match$235_17496 = format266;
                        panda$core$Int64$init$builtin_int64(&$tmp497, 1);
                        panda$core$Bit $tmp498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$235_17496.value).$rawValue, $tmp497);
                        if ($tmp498.value) {
                        {
                            {
                                $tmp499 = extension495;
                                $tmp500 = &$s501;
                                extension495 = $tmp500;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp500));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp499));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp502, 2);
                        panda$core$Bit $tmp503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$235_17496.value).$rawValue, $tmp502);
                        if ($tmp503.value) {
                        {
                            {
                                $tmp504 = extension495;
                                $tmp505 = &$s506;
                                extension495 = $tmp505;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp505));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp504));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp507, 0);
                        panda$core$Bit $tmp508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$235_17496.value).$rawValue, $tmp507);
                        if ($tmp508.value) {
                        {
                            {
                                $tmp509 = extension495;
                                $tmp510 = &$s511;
                                extension495 = $tmp510;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp510));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp509));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp512, 5);
                        panda$core$Bit $tmp513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$235_17496.value).$rawValue, $tmp512);
                        if ($tmp513.value) {
                        {
                            {
                                $tmp514 = extension495;
                                $tmp515 = &$s516;
                                extension495 = $tmp515;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp515));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp514));
                            }
                        }
                        }
                        else {
                        {
                            (($fn518) err269->$class->vtable[21])(err269, &$s517);
                            panda$core$UInt8$init$builtin_uint8(&$tmp519, 1);
                            panda$core$System$exit$panda$core$UInt8($tmp519);
                        }
                        }
                        }
                        }
                        }
                    }
                    {
                        $tmp520 = outFile260;
                        panda$core$Int64$init$builtin_int64(&$tmp524, 0);
                        panda$core$Object* $tmp525 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources252, $tmp524);
                        $tmp523 = $tmp525;
                        panda$io$File* $tmp526 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp523), extension495);
                        $tmp522 = $tmp526;
                        $tmp521 = $tmp522;
                        outFile260 = $tmp521;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp521));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp522));
                        panda$core$Panda$unref$panda$core$Object($tmp523);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp520));
                    }
                }
                $tmp494 = -1;
                goto $l492;
                $l492:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension495));
                switch ($tmp494) {
                    case -1: goto $l527;
                }
                $l527:;
            }
            }
            else {
            $tmp528 = format266;
            panda$core$Bit $tmp532;
            if (((panda$core$Bit) { $tmp528.nonnull }).value) goto $l529; else goto $l530;
            $l529:;
            panda$core$Int64$init$builtin_int64(&$tmp533, 5);
            panda$core$Bit $tmp534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $tmp528.value).$rawValue, $tmp533);
            $tmp532 = $tmp534;
            goto $l531;
            $l530:;
            panda$core$Bit$init$builtin_bit(&$tmp535, false);
            $tmp532 = $tmp535;
            goto $l531;
            $l531:;
            if ($tmp532.value) {
            {
                (($fn537) err269->$class->vtable[21])(err269, &$s536);
                panda$core$UInt8$init$builtin_uint8(&$tmp538, 1);
                panda$core$System$exit$panda$core$UInt8($tmp538);
            }
            }
            else {
            {
                (($fn540) err269->$class->vtable[21])(err269, &$s539);
                panda$core$UInt8$init$builtin_uint8(&$tmp541, 1);
                panda$core$System$exit$panda$core$UInt8($tmp541);
            }
            }
            }
        }
        }
        $tmp542 = format266;
        panda$core$Bit $tmp546;
        if (((panda$core$Bit) { $tmp542.nonnull }).value) goto $l543; else goto $l544;
        $l543:;
        panda$core$Int64$init$builtin_int64(&$tmp547, 5);
        panda$core$Bit $tmp548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $tmp542.value).$rawValue, $tmp547);
        $tmp546 = $tmp548;
        goto $l545;
        $l544:;
        panda$core$Bit$init$builtin_bit(&$tmp549, false);
        $tmp546 = $tmp549;
        goto $l545;
        $l545:;
        if ($tmp546.value) {
        {
            if (((panda$core$Bit) { root267 == NULL }).value) {
            {
                {
                    $tmp550 = root267;
                    $tmp551 = &$s552;
                    root267 = $tmp551;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp551));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp550));
                }
            }
            }
            org$pandalanguage$pandac$HTMLProcessor* $tmp554 = (org$pandalanguage$pandac$HTMLProcessor*) pandaObjectAlloc(12, (panda$core$Class*) &org$pandalanguage$pandac$HTMLProcessor$class);
            org$pandalanguage$pandac$HTMLProcessor$init($tmp554);
            $tmp553 = $tmp554;
            panda$core$Int64$init$builtin_int64(&$tmp556, 0);
            panda$core$Object* $tmp557 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources252, $tmp556);
            $tmp555 = $tmp557;
            (($fn558) $tmp553->$class->vtable[3])($tmp553, ((panda$io$File*) $tmp555), outFile260, root267);
            panda$core$Panda$unref$panda$core$Object($tmp555);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp553));
            $tmp247 = 0;
            goto $l245;
            $l559:;
            return;
        }
        }
        if (((panda$core$Bit) { root267 != NULL }).value) {
        {
            (($fn561) err269->$class->vtable[21])(err269, &$s560);
            panda$core$UInt8$init$builtin_uint8(&$tmp562, 1);
            panda$core$System$exit$panda$core$UInt8($tmp562);
        }
        }
        memset(&errorCount563, 0, sizeof(errorCount563));
        {
            int $tmp566;
            {
                memset(&cg567, 0, sizeof(cg567));
                {
                    $match$270_13568 = format266;
                    panda$core$Int64$init$builtin_int64(&$tmp571, 0);
                    panda$core$Bit $tmp572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$270_13568.value).$rawValue, $tmp571);
                    bool $tmp570 = $tmp572.value;
                    if ($tmp570) goto $l573;
                    panda$core$Int64$init$builtin_int64(&$tmp574, 1);
                    panda$core$Bit $tmp575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$270_13568.value).$rawValue, $tmp574);
                    $tmp570 = $tmp575.value;
                    $l573:;
                    panda$core$Bit $tmp576 = { $tmp570 };
                    bool $tmp569 = $tmp576.value;
                    if ($tmp569) goto $l577;
                    panda$core$Int64$init$builtin_int64(&$tmp578, 2);
                    panda$core$Bit $tmp579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$270_13568.value).$rawValue, $tmp578);
                    $tmp569 = $tmp579.value;
                    $l577:;
                    panda$core$Bit $tmp580 = { $tmp569 };
                    if ($tmp580.value) {
                    {
                        {
                            $tmp581 = cg567;
                            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp584 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                            panda$core$String* $tmp586 = org$pandalanguage$pandac$Config$llvmTriple$R$panda$core$String();
                            $tmp585 = $tmp586;
                            panda$io$File* $tmp590 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile260, &$s589);
                            $tmp588 = $tmp590;
                            panda$io$OutputStream* $tmp591 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp588);
                            $tmp587 = $tmp591;
                            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp584, $tmp585, $tmp587);
                            $tmp583 = $tmp584;
                            $tmp582 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp583);
                            cg567 = $tmp582;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp582));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp583));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp587));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp588));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp585));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp592, 3);
                    panda$core$Bit $tmp593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$270_13568.value).$rawValue, $tmp592);
                    if ($tmp593.value) {
                    {
                        {
                            $tmp594 = cg567;
                            org$pandalanguage$pandac$HCodeGenerator* $tmp597 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                            org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp597, outFile260);
                            $tmp596 = $tmp597;
                            $tmp595 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp596);
                            cg567 = $tmp595;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp595));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp596));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp598, 4);
                    panda$core$Bit $tmp599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$270_13568.value).$rawValue, $tmp598);
                    if ($tmp599.value) {
                    {
                        {
                            $tmp600 = cg567;
                            org$pandalanguage$pandac$CCodeGenerator* $tmp603 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(248, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                            org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp603, outFile260);
                            $tmp602 = $tmp603;
                            $tmp601 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp602);
                            cg567 = $tmp601;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp601));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp602));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp600));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp604, 6);
                    panda$core$Bit $tmp605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$270_13568.value).$rawValue, $tmp604);
                    if ($tmp605.value) {
                    {
                        {
                            $tmp606 = cg567;
                            org$pandalanguage$pandac$pandadoc$PandaDoc* $tmp609 = (org$pandalanguage$pandac$pandadoc$PandaDoc*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$PandaDoc$class);
                            org$pandalanguage$pandac$pandadoc$PandaDoc$init$panda$io$File($tmp609, outFile260);
                            $tmp608 = $tmp609;
                            $tmp607 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp608);
                            cg567 = $tmp607;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp607));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp608));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp606));
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp610, false);
                        if ($tmp610.value) goto $l611; else goto $l612;
                        $l612:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s613, (panda$core$Int64) { 281 });
                        abort();
                        $l611:;
                    }
                    }
                    }
                    }
                    }
                }
                org$pandalanguage$pandac$Compiler$Settings* $tmp617 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
                org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp617, self->pandaHome, ((panda$collections$ListView*) imports256), optimizationLevel262, safetyLevel264);
                $tmp616 = $tmp617;
                $tmp615 = $tmp616;
                settings614 = $tmp615;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp615));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp616));
                panda$threads$MessageQueue* $tmp621 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
                panda$threads$MessageQueue$init($tmp621);
                $tmp620 = $tmp621;
                $tmp619 = $tmp620;
                errorQueue618 = $tmp619;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp619));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
                org$pandalanguage$pandac$Compiler* $tmp625 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
                org$pandalanguage$pandac$Compiler$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp625, errorQueue618, cg567, settings614);
                $tmp624 = $tmp625;
                $tmp623 = $tmp624;
                compiler622 = $tmp623;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp623));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp624));
                {
                    int $tmp628;
                    {
                        ITable* $tmp632 = ((panda$collections$Iterable*) sources252)->$class->itable;
                        while ($tmp632->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp632 = $tmp632->next;
                        }
                        $fn634 $tmp633 = $tmp632->methods[0];
                        panda$collections$Iterator* $tmp635 = $tmp633(((panda$collections$Iterable*) sources252));
                        $tmp631 = $tmp635;
                        $tmp630 = $tmp631;
                        Iter$286$13629 = $tmp630;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp630));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp631));
                        $l636:;
                        ITable* $tmp639 = Iter$286$13629->$class->itable;
                        while ($tmp639->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp639 = $tmp639->next;
                        }
                        $fn641 $tmp640 = $tmp639->methods[0];
                        panda$core$Bit $tmp642 = $tmp640(Iter$286$13629);
                        panda$core$Bit $tmp643 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp642);
                        bool $tmp638 = $tmp643.value;
                        if (!$tmp638) goto $l637;
                        {
                            int $tmp646;
                            {
                                ITable* $tmp650 = Iter$286$13629->$class->itable;
                                while ($tmp650->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp650 = $tmp650->next;
                                }
                                $fn652 $tmp651 = $tmp650->methods[1];
                                panda$core$Object* $tmp653 = $tmp651(Iter$286$13629);
                                $tmp649 = $tmp653;
                                $tmp648 = ((panda$io$File*) $tmp649);
                                s647 = $tmp648;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp648));
                                panda$core$Panda$unref$panda$core$Object($tmp649);
                                {
                                    int $tmp656;
                                    {
                                        panda$collections$ListView* $tmp661 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler622, s647);
                                        $tmp660 = $tmp661;
                                        ITable* $tmp662 = ((panda$collections$Iterable*) $tmp660)->$class->itable;
                                        while ($tmp662->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp662 = $tmp662->next;
                                        }
                                        $fn664 $tmp663 = $tmp662->methods[0];
                                        panda$collections$Iterator* $tmp665 = $tmp663(((panda$collections$Iterable*) $tmp660));
                                        $tmp659 = $tmp665;
                                        $tmp658 = $tmp659;
                                        Iter$287$17657 = $tmp658;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp658));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp659));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp660));
                                        $l666:;
                                        ITable* $tmp669 = Iter$287$17657->$class->itable;
                                        while ($tmp669->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp669 = $tmp669->next;
                                        }
                                        $fn671 $tmp670 = $tmp669->methods[0];
                                        panda$core$Bit $tmp672 = $tmp670(Iter$287$17657);
                                        panda$core$Bit $tmp673 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp672);
                                        bool $tmp668 = $tmp673.value;
                                        if (!$tmp668) goto $l667;
                                        {
                                            int $tmp676;
                                            {
                                                ITable* $tmp680 = Iter$287$17657->$class->itable;
                                                while ($tmp680->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp680 = $tmp680->next;
                                                }
                                                $fn682 $tmp681 = $tmp680->methods[1];
                                                panda$core$Object* $tmp683 = $tmp681(Iter$287$17657);
                                                $tmp679 = $tmp683;
                                                $tmp678 = ((org$pandalanguage$pandac$ClassDecl*) $tmp679);
                                                cl677 = $tmp678;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp678));
                                                panda$core$Panda$unref$panda$core$Object($tmp679);
                                                org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler622, cl677);
                                            }
                                            $tmp676 = -1;
                                            goto $l674;
                                            $l674:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl677));
                                            cl677 = NULL;
                                            switch ($tmp676) {
                                                case -1: goto $l684;
                                            }
                                            $l684:;
                                        }
                                        goto $l666;
                                        $l667:;
                                    }
                                    $tmp656 = -1;
                                    goto $l654;
                                    $l654:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$287$17657));
                                    Iter$287$17657 = NULL;
                                    switch ($tmp656) {
                                        case -1: goto $l685;
                                    }
                                    $l685:;
                                }
                            }
                            $tmp646 = -1;
                            goto $l644;
                            $l644:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s647));
                            s647 = NULL;
                            switch ($tmp646) {
                                case -1: goto $l686;
                            }
                            $l686:;
                        }
                        goto $l636;
                        $l637:;
                    }
                    $tmp628 = -1;
                    goto $l626;
                    $l626:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$286$13629));
                    Iter$286$13629 = NULL;
                    switch ($tmp628) {
                        case -1: goto $l687;
                    }
                    $l687:;
                }
                {
                    int $tmp690;
                    {
                        ITable* $tmp694 = ((panda$collections$Iterable*) sources252)->$class->itable;
                        while ($tmp694->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp694 = $tmp694->next;
                        }
                        $fn696 $tmp695 = $tmp694->methods[0];
                        panda$collections$Iterator* $tmp697 = $tmp695(((panda$collections$Iterable*) sources252));
                        $tmp693 = $tmp697;
                        $tmp692 = $tmp693;
                        Iter$291$13691 = $tmp692;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp692));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp693));
                        $l698:;
                        ITable* $tmp701 = Iter$291$13691->$class->itable;
                        while ($tmp701->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp701 = $tmp701->next;
                        }
                        $fn703 $tmp702 = $tmp701->methods[0];
                        panda$core$Bit $tmp704 = $tmp702(Iter$291$13691);
                        panda$core$Bit $tmp705 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp704);
                        bool $tmp700 = $tmp705.value;
                        if (!$tmp700) goto $l699;
                        {
                            int $tmp708;
                            {
                                ITable* $tmp712 = Iter$291$13691->$class->itable;
                                while ($tmp712->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp712 = $tmp712->next;
                                }
                                $fn714 $tmp713 = $tmp712->methods[1];
                                panda$core$Object* $tmp715 = $tmp713(Iter$291$13691);
                                $tmp711 = $tmp715;
                                $tmp710 = ((panda$io$File*) $tmp711);
                                s709 = $tmp710;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp710));
                                panda$core$Panda$unref$panda$core$Object($tmp711);
                                org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler622, s709);
                            }
                            $tmp708 = -1;
                            goto $l706;
                            $l706:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s709));
                            s709 = NULL;
                            switch ($tmp708) {
                                case -1: goto $l716;
                            }
                            $l716:;
                        }
                        goto $l698;
                        $l699:;
                    }
                    $tmp690 = -1;
                    goto $l688;
                    $l688:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$291$13691));
                    Iter$291$13691 = NULL;
                    switch ($tmp690) {
                        case -1: goto $l717;
                    }
                    $l717:;
                }
                org$pandalanguage$pandac$Compiler$finish(compiler622);
                panda$core$Int64 $tmp718 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(errorQueue618);
                errorCount563 = $tmp718;
                panda$core$Int64$init$builtin_int64(&$tmp720, 0);
                panda$core$Bit$init$builtin_bit(&$tmp721, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp719, $tmp720, errorCount563, $tmp721);
                int64_t $tmp723 = $tmp719.min.value;
                panda$core$Int64 i722 = { $tmp723 };
                int64_t $tmp725 = $tmp719.max.value;
                bool $tmp726 = $tmp719.inclusive.value;
                if ($tmp726) goto $l733; else goto $l734;
                $l733:;
                if ($tmp723 <= $tmp725) goto $l727; else goto $l729;
                $l734:;
                if ($tmp723 < $tmp725) goto $l727; else goto $l729;
                $l727:;
                {
                    int $tmp737;
                    {
                        panda$core$Immutable* $tmp741 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(errorQueue618);
                        $tmp740 = $tmp741;
                        $tmp739 = ((org$pandalanguage$pandac$Compiler$Error*) $tmp740);
                        error738 = $tmp739;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp739));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp740));
                        panda$core$String* $tmp749 = panda$io$File$name$R$panda$core$String(error738->file);
                        $tmp748 = $tmp749;
                        panda$core$String* $tmp750 = panda$core$String$convert$R$panda$core$String($tmp748);
                        $tmp747 = $tmp750;
                        panda$core$String* $tmp752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp747, &$s751);
                        $tmp746 = $tmp752;
                        org$pandalanguage$pandac$Position$wrapper* $tmp754;
                        $tmp754 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                        $tmp754->value = error738->position;
                        $tmp753 = ((panda$core$Object*) $tmp754);
                        panda$core$String* $tmp755 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp746, $tmp753);
                        $tmp745 = $tmp755;
                        panda$core$String* $tmp757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp745, &$s756);
                        $tmp744 = $tmp757;
                        panda$core$String* $tmp758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp744, error738->message);
                        $tmp743 = $tmp758;
                        panda$core$String* $tmp760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp743, &$s759);
                        $tmp742 = $tmp760;
                        panda$io$Console$printLine$panda$core$String($tmp742);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp742));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp743));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp744));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp745));
                        panda$core$Panda$unref$panda$core$Object($tmp753);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp746));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp747));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp748));
                    }
                    $tmp737 = -1;
                    goto $l735;
                    $l735:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) error738));
                    error738 = NULL;
                    switch ($tmp737) {
                        case -1: goto $l761;
                    }
                    $l761:;
                }
                $l730:;
                int64_t $tmp763 = $tmp725 - i722.value;
                if ($tmp726) goto $l764; else goto $l765;
                $l764:;
                if ((uint64_t) $tmp763 >= 1) goto $l762; else goto $l729;
                $l765:;
                if ((uint64_t) $tmp763 > 1) goto $l762; else goto $l729;
                $l762:;
                i722.value += 1;
                goto $l727;
                $l729:;
            }
            $tmp566 = -1;
            goto $l564;
            $l564:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler622));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) errorQueue618));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings614));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg567));
            settings614 = NULL;
            errorQueue618 = NULL;
            compiler622 = NULL;
            switch ($tmp566) {
                case -1: goto $l768;
            }
            $l768:;
        }
        panda$core$Int64$init$builtin_int64(&$tmp769, 0);
        panda$core$Bit $tmp770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount563, $tmp769);
        if ($tmp770.value) {
        {
            {
                $match$302_13771 = format266;
                panda$core$Int64$init$builtin_int64(&$tmp772, 1);
                panda$core$Bit $tmp773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$302_13771.value).$rawValue, $tmp772);
                if ($tmp773.value) {
                {
                    int $tmp776;
                    {
                        panda$io$File* $tmp782 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile260, &$s781);
                        $tmp780 = $tmp782;
                        panda$io$File* $tmp783 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp780, optimizationLevel262);
                        $tmp779 = $tmp783;
                        $tmp778 = $tmp779;
                        optimized777 = $tmp778;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp778));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp779));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp780));
                        panda$io$File* $tmp787 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized777);
                        $tmp786 = $tmp787;
                        $tmp785 = $tmp786;
                        assembly784 = $tmp785;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp785));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp786));
                        panda$io$File* $tmp789 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly784, outFile260);
                        $tmp788 = $tmp789;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp788));
                    }
                    $tmp776 = -1;
                    goto $l774;
                    $l774:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly784));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized777));
                    optimized777 = NULL;
                    assembly784 = NULL;
                    switch ($tmp776) {
                        case -1: goto $l790;
                    }
                    $l790:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp791, 2);
                panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$302_13771.value).$rawValue, $tmp791);
                if ($tmp792.value) {
                {
                    int $tmp795;
                    {
                        panda$io$File* $tmp801 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile260, &$s800);
                        $tmp799 = $tmp801;
                        panda$io$File* $tmp802 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp799, optimizationLevel262);
                        $tmp798 = $tmp802;
                        $tmp797 = $tmp798;
                        optimized796 = $tmp797;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp797));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp798));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp799));
                        panda$io$File* $tmp806 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized796);
                        $tmp805 = $tmp806;
                        $tmp804 = $tmp805;
                        assembly803 = $tmp804;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp804));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp805));
                        panda$io$File* $tmp808 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly803, outFile260);
                        $tmp807 = $tmp808;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp807));
                    }
                    $tmp795 = -1;
                    goto $l793;
                    $l793:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly803));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized796));
                    optimized796 = NULL;
                    assembly803 = NULL;
                    switch ($tmp795) {
                        case -1: goto $l809;
                    }
                    $l809:;
                }
                }
                }
            }
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp810, 1);
            panda$core$Bit $tmp811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount563, $tmp810);
            if ($tmp811.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s812);
            }
            }
            else {
            {
                panda$core$String* $tmp815 = panda$core$Int64$convert$R$panda$core$String(errorCount563);
                $tmp814 = $tmp815;
                panda$core$String* $tmp817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp814, &$s816);
                $tmp813 = $tmp817;
                panda$io$Console$printLine$panda$core$String($tmp813);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp813));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp814));
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp818, 1);
            panda$core$System$exit$panda$core$UInt8($tmp818);
        }
        }
    }
    $tmp247 = -1;
    goto $l245;
    $l245:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llvmDir460));
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
    llvmDir460 = NULL;
    switch ($tmp247) {
        case 0: goto $l559;
        case -1: goto $l819;
    }
    $l819:;
}
panda$core$Bit org$pandalanguage$pandac$Main$containsError$panda$core$String$R$panda$core$Bit(panda$core$String* p_s) {
    panda$core$Bit $returnValue820;
    panda$core$Bit $tmp822 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_s, &$s821);
    $returnValue820 = $tmp822;
    return $returnValue820;
}
void pandaMain(panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$Main* $tmp824;
    org$pandalanguage$pandac$Main* $tmp825 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
    org$pandalanguage$pandac$Main$init($tmp825);
    $tmp824 = $tmp825;
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp824, p_args);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp824));
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    int $tmp828;
    {
    }
    $tmp828 = -1;
    goto $l826;
    $l826:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp828) {
        case -1: goto $l829;
    }
    $l829:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

