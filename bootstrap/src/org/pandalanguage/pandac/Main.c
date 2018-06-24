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
typedef panda$core$Bit (*$fn278)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn287)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn308)(panda$io$InputStream*, panda$io$OutputStream*);
typedef void (*$fn313)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn321)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn334)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn347)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn359)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn372)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn381)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn387)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn428)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn438)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn446)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn454)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn466)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn495)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn528)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn547)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn550)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn568)(org$pandalanguage$pandac$HTMLProcessor*, panda$io$File*, panda$io$File*, panda$core$String*);
typedef void (*$fn571)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn585)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn660)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn667)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn678)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn690)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn697)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn708)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn722)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn729)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn740)(panda$collections$Iterator*);

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
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x70\x61\x6e\x64\x61", 15, -4231800707287400719, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78\x6d\x6c", 3, 2265538, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x63\x6c\x61\x73\x73\x4c\x69\x73\x74", 11, -11972980357627795, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x63\x6c\x61\x73\x73\x4c\x69\x73\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x78\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 40, 1726893812572921750, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };

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
    panda$collections$ListView* icuLibs142 = NULL;
    panda$collections$ListView* $tmp143;
    panda$collections$ListView* $tmp144;
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
    panda$core$String* classList269 = NULL;
    panda$core$String* $tmp270;
    panda$io$OutputStream* err271 = NULL;
    panda$io$OutputStream* $tmp272;
    panda$io$OutputStream* $tmp273;
    panda$core$String* a284 = NULL;
    panda$core$String* $tmp285;
    panda$core$String* $tmp286;
    panda$core$String* $match$164_13292 = NULL;
    panda$core$String* $tmp293;
    panda$io$File* path299 = NULL;
    panda$io$File* $tmp300;
    panda$io$File* $tmp301;
    panda$io$InputStream* $tmp304;
    panda$io$OutputStream* $tmp306;
    panda$core$UInt8 $tmp314;
    panda$io$File* $tmp315;
    panda$io$File* $tmp316;
    panda$io$File* $tmp317;
    panda$core$String* $tmp319;
    panda$io$File* $tmp323;
    panda$core$String* level330 = NULL;
    panda$core$String* $tmp331;
    panda$core$String* $tmp332;
    panda$core$Int64 $tmp338;
    panda$core$Int64 $tmp341;
    panda$io$OutputStream* $tmp344;
    panda$core$UInt8 $tmp348;
    panda$core$String* level355 = NULL;
    panda$core$String* $tmp356;
    panda$core$String* $tmp357;
    panda$core$Int64 $tmp363;
    panda$core$Int64 $tmp366;
    panda$io$OutputStream* $tmp369;
    panda$core$UInt8 $tmp373;
    panda$core$UInt8 $tmp382;
    panda$core$String* f383 = NULL;
    panda$core$String* $tmp384;
    panda$core$String* $tmp385;
    panda$core$String* $match$196_21392 = NULL;
    panda$core$String* $tmp393;
    org$pandalanguage$pandac$Main$Format $tmp396;
    panda$core$Int64 $tmp397;
    org$pandalanguage$pandac$Main$Format $tmp400;
    panda$core$Int64 $tmp401;
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
    panda$core$String* $tmp422;
    panda$core$String* $tmp423;
    panda$core$UInt8 $tmp429;
    panda$io$File* $tmp434;
    panda$core$String* $tmp436;
    panda$core$String* $tmp442;
    panda$core$String* $tmp443;
    panda$core$String* $tmp444;
    panda$core$String* $tmp450;
    panda$core$String* $tmp451;
    panda$core$String* $tmp452;
    panda$io$File* $tmp458;
    panda$core$String* $tmp460;
    panda$core$String* $tmp461;
    panda$core$UInt8 $tmp467;
    panda$io$File* llvmDir470 = NULL;
    panda$io$File* $tmp471;
    panda$io$File* $tmp472;
    panda$core$String* $tmp474;
    panda$io$File* $tmp476;
    panda$io$File* $tmp477;
    panda$io$File* $tmp478;
    panda$io$File* $tmp481;
    panda$io$File* $tmp482;
    panda$io$File* $tmp483;
    panda$io$File* $tmp486;
    panda$io$File* $tmp487;
    panda$io$File* $tmp488;
    panda$core$Int64 $tmp492;
    panda$core$UInt8 $tmp496;
    org$pandalanguage$pandac$Main$Format $tmp497;
    panda$core$Int64 $tmp498;
    panda$core$Int64 $tmp500;
    panda$core$String* extension505 = NULL;
    org$pandalanguage$pandac$Main$Format$nullable $match$238_17506;
    panda$core$Int64 $tmp507;
    panda$core$String* $tmp509;
    panda$core$String* $tmp510;
    panda$core$Int64 $tmp512;
    panda$core$String* $tmp514;
    panda$core$String* $tmp515;
    panda$core$Int64 $tmp517;
    panda$core$String* $tmp519;
    panda$core$String* $tmp520;
    panda$core$Int64 $tmp522;
    panda$core$String* $tmp524;
    panda$core$String* $tmp525;
    panda$core$UInt8 $tmp529;
    panda$io$File* $tmp530;
    panda$io$File* $tmp531;
    panda$io$File* $tmp532;
    panda$core$Object* $tmp533;
    panda$core$Int64 $tmp534;
    org$pandalanguage$pandac$Main$Format$nullable $tmp538;
    panda$core$Int64 $tmp543;
    panda$core$Bit $tmp545;
    panda$core$UInt8 $tmp548;
    panda$core$UInt8 $tmp551;
    org$pandalanguage$pandac$Main$Format$nullable $tmp552;
    panda$core$Int64 $tmp557;
    panda$core$Bit $tmp559;
    panda$core$String* $tmp560;
    panda$core$String* $tmp561;
    org$pandalanguage$pandac$HTMLProcessor* $tmp563;
    panda$core$Object* $tmp565;
    panda$core$Int64 $tmp566;
    panda$core$UInt8 $tmp572;
    org$pandalanguage$pandac$Main$Format$nullable $tmp575;
    panda$core$Int64 $tmp580;
    panda$core$Bit $tmp582;
    panda$core$UInt8 $tmp586;
    panda$core$Int64 errorCount587;
    org$pandalanguage$pandac$CodeGenerator* cg591 = NULL;
    org$pandalanguage$pandac$Main$Format$nullable $match$277_13592;
    panda$core$Int64 $tmp595;
    panda$core$Int64 $tmp598;
    panda$core$Int64 $tmp602;
    org$pandalanguage$pandac$CodeGenerator* $tmp605;
    org$pandalanguage$pandac$CodeGenerator* $tmp606;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp607;
    panda$core$String* $tmp609;
    panda$io$OutputStream* $tmp611;
    panda$io$File* $tmp612;
    panda$core$Int64 $tmp616;
    org$pandalanguage$pandac$CodeGenerator* $tmp618;
    org$pandalanguage$pandac$CodeGenerator* $tmp619;
    org$pandalanguage$pandac$HCodeGenerator* $tmp620;
    panda$core$Int64 $tmp622;
    org$pandalanguage$pandac$CodeGenerator* $tmp624;
    org$pandalanguage$pandac$CodeGenerator* $tmp625;
    org$pandalanguage$pandac$CCodeGenerator* $tmp626;
    panda$core$Int64 $tmp628;
    org$pandalanguage$pandac$CodeGenerator* $tmp630;
    org$pandalanguage$pandac$CodeGenerator* $tmp631;
    org$pandalanguage$pandac$pandadoc$PandaDoc* $tmp632;
    panda$io$File* $tmp634;
    panda$core$Bit $tmp636;
    org$pandalanguage$pandac$Compiler$Settings* settings640 = NULL;
    org$pandalanguage$pandac$Compiler$Settings* $tmp641;
    org$pandalanguage$pandac$Compiler$Settings* $tmp642;
    panda$threads$MessageQueue* errorQueue644 = NULL;
    panda$threads$MessageQueue* $tmp645;
    panda$threads$MessageQueue* $tmp646;
    org$pandalanguage$pandac$Compiler* compiler648 = NULL;
    org$pandalanguage$pandac$Compiler* $tmp649;
    org$pandalanguage$pandac$Compiler* $tmp650;
    panda$collections$Iterator* Iter$293$13655 = NULL;
    panda$collections$Iterator* $tmp656;
    panda$collections$Iterator* $tmp657;
    panda$io$File* s673 = NULL;
    panda$io$File* $tmp674;
    panda$core$Object* $tmp675;
    panda$collections$Iterator* Iter$294$17683 = NULL;
    panda$collections$Iterator* $tmp684;
    panda$collections$Iterator* $tmp685;
    panda$collections$ListView* $tmp686;
    org$pandalanguage$pandac$ClassDecl* cl703 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp704;
    panda$core$Object* $tmp705;
    panda$collections$Iterator* Iter$298$13717 = NULL;
    panda$collections$Iterator* $tmp718;
    panda$collections$Iterator* $tmp719;
    panda$io$File* s735 = NULL;
    panda$io$File* $tmp736;
    panda$core$Object* $tmp737;
    panda$core$Range$LTpanda$core$Int64$GT $tmp745;
    panda$core$Int64 $tmp746;
    panda$core$Bit $tmp747;
    org$pandalanguage$pandac$Compiler$Error* error764 = NULL;
    org$pandalanguage$pandac$Compiler$Error* $tmp765;
    panda$core$Immutable* $tmp766;
    panda$core$String* $tmp768;
    panda$core$String* $tmp769;
    panda$core$String* $tmp770;
    panda$core$String* $tmp771;
    panda$core$String* $tmp772;
    panda$core$String* $tmp773;
    panda$core$String* $tmp774;
    panda$core$Object* $tmp779;
    panda$core$Int64 $tmp795;
    org$pandalanguage$pandac$Main$Format$nullable $match$309_13797;
    panda$core$Int64 $tmp798;
    panda$io$File* optimized803 = NULL;
    panda$io$File* $tmp804;
    panda$io$File* $tmp805;
    panda$io$File* $tmp806;
    panda$io$File* assembly810 = NULL;
    panda$io$File* $tmp811;
    panda$io$File* $tmp812;
    panda$io$File* $tmp814;
    panda$core$Int64 $tmp817;
    panda$io$File* optimized822 = NULL;
    panda$io$File* $tmp823;
    panda$io$File* $tmp824;
    panda$io$File* $tmp825;
    panda$io$File* assembly829 = NULL;
    panda$io$File* $tmp830;
    panda$io$File* $tmp831;
    panda$io$File* $tmp833;
    panda$core$Int64 $tmp836;
    panda$core$String* $tmp839;
    panda$core$String* $tmp840;
    panda$core$UInt8 $tmp844;
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
        $tmp270 = NULL;
        classList269 = $tmp270;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp270));
        panda$io$OutputStream* $tmp274 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp273 = $tmp274;
        $tmp272 = $tmp273;
        err271 = $tmp272;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp272));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp273));
        $l275:;
        panda$core$Bit $tmp279 = (($fn278) args248->$class->vtable[2])(args248);
        panda$core$Bit $tmp280 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp279);
        bool $tmp277 = $tmp280.value;
        if (!$tmp277) goto $l276;
        {
            int $tmp283;
            {
                panda$core$String* $tmp288 = (($fn287) args248->$class->vtable[3])(args248);
                $tmp286 = $tmp288;
                $tmp285 = $tmp286;
                a284 = $tmp285;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp285));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp286));
                int $tmp291;
                {
                    $tmp293 = a284;
                    $match$164_13292 = $tmp293;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp293));
                    panda$core$Bit $tmp295 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$164_13292, &$s294);
                    if ($tmp295.value) {
                    {
                        int $tmp298;
                        {
                            panda$io$File* $tmp302 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp302, &$s303);
                            $tmp301 = $tmp302;
                            $tmp300 = $tmp301;
                            path299 = $tmp300;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp300));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301));
                            panda$io$InputStream* $tmp305 = panda$io$Console$inputStream$R$panda$io$InputStream();
                            $tmp304 = $tmp305;
                            panda$io$OutputStream* $tmp307 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path299);
                            $tmp306 = $tmp307;
                            (($fn308) $tmp304->$class->vtable[12])($tmp304, $tmp306);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304));
                            panda$collections$Array$add$panda$collections$Array$T(sources252, ((panda$core$Object*) path299));
                        }
                        $tmp298 = -1;
                        goto $l296;
                        $l296:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path299));
                        path299 = NULL;
                        switch ($tmp298) {
                            case -1: goto $l309;
                        }
                        $l309:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp311 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$164_13292, &$s310);
                    if ($tmp311.value) {
                    {
                        if (((panda$core$Bit) { outFile260 != NULL }).value) {
                        {
                            (($fn313) err271->$class->vtable[21])(err271, &$s312);
                            panda$core$UInt8$init$builtin_uint8(&$tmp314, 1);
                            panda$core$System$exit$panda$core$UInt8($tmp314);
                        }
                        }
                        {
                            $tmp315 = outFile260;
                            panda$io$File* $tmp318 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp322 = (($fn321) args248->$class->vtable[4])(args248, &$s320);
                            $tmp319 = $tmp322;
                            panda$io$File$init$panda$core$String($tmp318, $tmp319);
                            $tmp317 = $tmp318;
                            $tmp316 = $tmp317;
                            outFile260 = $tmp316;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp316));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
                        }
                        panda$io$File* $tmp324 = panda$io$File$parent$R$panda$io$File$Q(outFile260);
                        $tmp323 = $tmp324;
                        panda$io$File$createDirectories($tmp323);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp323));
                    }
                    }
                    else {
                    panda$core$Bit $tmp326 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$164_13292, &$s325);
                    if ($tmp326.value) {
                    {
                        int $tmp329;
                        {
                            panda$core$String* $tmp335 = (($fn334) args248->$class->vtable[4])(args248, &$s333);
                            $tmp332 = $tmp335;
                            $tmp331 = $tmp332;
                            level330 = $tmp331;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
                            panda$core$Int64$nullable $tmp336 = panda$core$String$convert$R$panda$core$Int64$Q(level330);
                            optimizationLevel262 = ((panda$core$Int64) $tmp336.value);
                            panda$core$Int64$init$builtin_int64(&$tmp338, 3);
                            panda$core$Bit $tmp339 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel262, $tmp338);
                            bool $tmp337 = $tmp339.value;
                            if ($tmp337) goto $l340;
                            panda$core$Int64$init$builtin_int64(&$tmp341, 0);
                            panda$core$Bit $tmp342 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel262, $tmp341);
                            $tmp337 = $tmp342.value;
                            $l340:;
                            panda$core$Bit $tmp343 = { $tmp337 };
                            if ($tmp343.value) {
                            {
                                panda$io$OutputStream* $tmp345 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp344 = $tmp345;
                                (($fn347) $tmp344->$class->vtable[21])($tmp344, &$s346);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
                                panda$core$UInt8$init$builtin_uint8(&$tmp348, 1);
                                panda$core$System$exit$panda$core$UInt8($tmp348);
                            }
                            }
                        }
                        $tmp329 = -1;
                        goto $l327;
                        $l327:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level330));
                        level330 = NULL;
                        switch ($tmp329) {
                            case -1: goto $l349;
                        }
                        $l349:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp351 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$164_13292, &$s350);
                    if ($tmp351.value) {
                    {
                        int $tmp354;
                        {
                            panda$core$String* $tmp360 = (($fn359) args248->$class->vtable[4])(args248, &$s358);
                            $tmp357 = $tmp360;
                            $tmp356 = $tmp357;
                            level355 = $tmp356;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp356));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp357));
                            panda$core$Int64$nullable $tmp361 = panda$core$String$convert$R$panda$core$Int64$Q(level355);
                            safetyLevel264 = ((panda$core$Int64) $tmp361.value);
                            panda$core$Int64$init$builtin_int64(&$tmp363, 3);
                            panda$core$Bit $tmp364 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel264, $tmp363);
                            bool $tmp362 = $tmp364.value;
                            if ($tmp362) goto $l365;
                            panda$core$Int64$init$builtin_int64(&$tmp366, 0);
                            panda$core$Bit $tmp367 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel264, $tmp366);
                            $tmp362 = $tmp367.value;
                            $l365:;
                            panda$core$Bit $tmp368 = { $tmp362 };
                            if ($tmp368.value) {
                            {
                                panda$io$OutputStream* $tmp370 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp369 = $tmp370;
                                (($fn372) $tmp369->$class->vtable[21])($tmp369, &$s371);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp369));
                                panda$core$UInt8$init$builtin_uint8(&$tmp373, 1);
                                panda$core$System$exit$panda$core$UInt8($tmp373);
                            }
                            }
                        }
                        $tmp354 = -1;
                        goto $l352;
                        $l352:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level355));
                        level355 = NULL;
                        switch ($tmp354) {
                            case -1: goto $l374;
                        }
                        $l374:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp376 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$164_13292, &$s375);
                    if ($tmp376.value) {
                    {
                        int $tmp379;
                        {
                            if (((panda$core$Bit) { format266.nonnull }).value) {
                            {
                                (($fn381) err271->$class->vtable[21])(err271, &$s380);
                                panda$core$UInt8$init$builtin_uint8(&$tmp382, 1);
                                panda$core$System$exit$panda$core$UInt8($tmp382);
                            }
                            }
                            panda$core$String* $tmp388 = (($fn387) args248->$class->vtable[4])(args248, &$s386);
                            $tmp385 = $tmp388;
                            $tmp384 = $tmp385;
                            f383 = $tmp384;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp384));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp385));
                            int $tmp391;
                            {
                                $tmp393 = f383;
                                $match$196_21392 = $tmp393;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp393));
                                panda$core$Bit $tmp395 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$196_21392, &$s394);
                                if ($tmp395.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp397, 1);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp396, $tmp397);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp396, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp399 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$196_21392, &$s398);
                                if ($tmp399.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp401, 2);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp400, $tmp401);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp400, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp403 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$196_21392, &$s402);
                                if ($tmp403.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp405, 0);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp404, $tmp405);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp404, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp407 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$196_21392, &$s406);
                                if ($tmp407.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp409, 3);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp408, $tmp409);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp408, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp411 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$196_21392, &$s410);
                                if ($tmp411.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp413, 4);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp412, $tmp413);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp412, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp415 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$196_21392, &$s414);
                                if ($tmp415.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp417, 5);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp416, $tmp417);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp416, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp419 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$196_21392, &$s418);
                                if ($tmp419.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp421, 6);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp420, $tmp421);
                                    format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp420, true });
                                }
                                }
                                else {
                                {
                                    panda$core$String* $tmp425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s424, f383);
                                    $tmp423 = $tmp425;
                                    panda$core$String* $tmp427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp423, &$s426);
                                    $tmp422 = $tmp427;
                                    (($fn428) err271->$class->vtable[21])(err271, $tmp422);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
                                    panda$core$UInt8$init$builtin_uint8(&$tmp429, 1);
                                    panda$core$System$exit$panda$core$UInt8($tmp429);
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            $tmp391 = -1;
                            goto $l389;
                            $l389:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
                            switch ($tmp391) {
                                case -1: goto $l430;
                            }
                            $l430:;
                        }
                        $tmp379 = -1;
                        goto $l377;
                        $l377:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f383));
                        f383 = NULL;
                        switch ($tmp379) {
                            case -1: goto $l431;
                        }
                        $l431:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp433 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$164_13292, &$s432);
                    if ($tmp433.value) {
                    {
                        panda$io$File* $tmp435 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$core$String* $tmp439 = (($fn438) args248->$class->vtable[4])(args248, &$s437);
                        $tmp436 = $tmp439;
                        panda$io$File$init$panda$core$String($tmp435, $tmp436);
                        $tmp434 = $tmp435;
                        panda$collections$Array$add$panda$collections$Array$T(imports256, ((panda$core$Object*) $tmp434));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp434));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp436));
                    }
                    }
                    else {
                    panda$core$Bit $tmp441 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$164_13292, &$s440);
                    if ($tmp441.value) {
                    {
                        {
                            $tmp442 = root267;
                            panda$core$String* $tmp447 = (($fn446) args248->$class->vtable[4])(args248, &$s445);
                            $tmp444 = $tmp447;
                            $tmp443 = $tmp444;
                            root267 = $tmp443;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp443));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp442));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp449 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$164_13292, &$s448);
                    if ($tmp449.value) {
                    {
                        {
                            $tmp450 = classList269;
                            panda$core$String* $tmp455 = (($fn454) args248->$class->vtable[4])(args248, &$s453);
                            $tmp452 = $tmp455;
                            $tmp451 = $tmp452;
                            classList269 = $tmp451;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp451));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp452));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp450));
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp457 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a284, &$s456);
                        if ($tmp457.value) {
                        {
                            panda$io$File* $tmp459 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp459, a284);
                            $tmp458 = $tmp459;
                            panda$collections$Array$add$panda$collections$Array$T(sources252, ((panda$core$Object*) $tmp458));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp458));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s462, a284);
                            $tmp461 = $tmp463;
                            panda$core$String* $tmp465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp461, &$s464);
                            $tmp460 = $tmp465;
                            (($fn466) err271->$class->vtable[21])(err271, $tmp460);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp460));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp461));
                            panda$core$UInt8$init$builtin_uint8(&$tmp467, 1);
                            panda$core$System$exit$panda$core$UInt8($tmp467);
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
                }
                $tmp291 = -1;
                goto $l289;
                $l289:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp293));
                switch ($tmp291) {
                    case -1: goto $l468;
                }
                $l468:;
            }
            $tmp283 = -1;
            goto $l281;
            $l281:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a284));
            a284 = NULL;
            switch ($tmp283) {
                case -1: goto $l469;
            }
            $l469:;
        }
        goto $l275;
        $l276:;
        panda$io$File* $tmp473 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$core$String* $tmp475 = org$pandalanguage$pandac$Config$llvmDir$R$panda$core$String();
        $tmp474 = $tmp475;
        panda$io$File$init$panda$core$String($tmp473, $tmp474);
        $tmp472 = $tmp473;
        $tmp471 = $tmp472;
        llvmDir470 = $tmp471;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp471));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp472));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp474));
        {
            $tmp476 = self->opt;
            panda$io$File* $tmp480 = panda$io$File$resolve$panda$core$String$R$panda$io$File(llvmDir470, &$s479);
            $tmp478 = $tmp480;
            $tmp477 = $tmp478;
            self->opt = $tmp477;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp477));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp478));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp476));
        }
        {
            $tmp481 = self->llc;
            panda$io$File* $tmp485 = panda$io$File$resolve$panda$core$String$R$panda$io$File(llvmDir470, &$s484);
            $tmp483 = $tmp485;
            $tmp482 = $tmp483;
            self->llc = $tmp482;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp482));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp483));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
        }
        {
            $tmp486 = self->gcc;
            panda$io$File* $tmp489 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
            panda$io$File$init$panda$core$String($tmp489, &$s490);
            $tmp488 = $tmp489;
            $tmp487 = $tmp488;
            self->gcc = $tmp487;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp487));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp488));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp486));
        }
        panda$core$Int64 $tmp491 = panda$collections$Array$get_count$R$panda$core$Int64(sources252);
        panda$core$Int64$init$builtin_int64(&$tmp492, 0);
        panda$core$Bit $tmp493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp491, $tmp492);
        if ($tmp493.value) {
        {
            (($fn495) err271->$class->vtable[21])(err271, &$s494);
            panda$core$UInt8$init$builtin_uint8(&$tmp496, 1);
            panda$core$System$exit$panda$core$UInt8($tmp496);
        }
        }
        if (((panda$core$Bit) { !format266.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp498, 1);
            org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp497, $tmp498);
            format266 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp497, true });
        }
        }
        if (((panda$core$Bit) { outFile260 == NULL }).value) {
        {
            panda$core$Int64 $tmp499 = panda$collections$Array$get_count$R$panda$core$Int64(sources252);
            panda$core$Int64$init$builtin_int64(&$tmp500, 1);
            panda$core$Bit $tmp501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp499, $tmp500);
            if ($tmp501.value) {
            {
                int $tmp504;
                {
                    memset(&extension505, 0, sizeof(extension505));
                    {
                        $match$238_17506 = format266;
                        panda$core$Int64$init$builtin_int64(&$tmp507, 1);
                        panda$core$Bit $tmp508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$238_17506.value).$rawValue, $tmp507);
                        if ($tmp508.value) {
                        {
                            {
                                $tmp509 = extension505;
                                $tmp510 = &$s511;
                                extension505 = $tmp510;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp510));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp509));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp512, 2);
                        panda$core$Bit $tmp513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$238_17506.value).$rawValue, $tmp512);
                        if ($tmp513.value) {
                        {
                            {
                                $tmp514 = extension505;
                                $tmp515 = &$s516;
                                extension505 = $tmp515;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp515));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp514));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp517, 0);
                        panda$core$Bit $tmp518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$238_17506.value).$rawValue, $tmp517);
                        if ($tmp518.value) {
                        {
                            {
                                $tmp519 = extension505;
                                $tmp520 = &$s521;
                                extension505 = $tmp520;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp520));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp519));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp522, 5);
                        panda$core$Bit $tmp523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$238_17506.value).$rawValue, $tmp522);
                        if ($tmp523.value) {
                        {
                            {
                                $tmp524 = extension505;
                                $tmp525 = &$s526;
                                extension505 = $tmp525;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp525));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp524));
                            }
                        }
                        }
                        else {
                        {
                            (($fn528) err271->$class->vtable[21])(err271, &$s527);
                            panda$core$UInt8$init$builtin_uint8(&$tmp529, 1);
                            panda$core$System$exit$panda$core$UInt8($tmp529);
                        }
                        }
                        }
                        }
                        }
                    }
                    {
                        $tmp530 = outFile260;
                        panda$core$Int64$init$builtin_int64(&$tmp534, 0);
                        panda$core$Object* $tmp535 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources252, $tmp534);
                        $tmp533 = $tmp535;
                        panda$io$File* $tmp536 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp533), extension505);
                        $tmp532 = $tmp536;
                        $tmp531 = $tmp532;
                        outFile260 = $tmp531;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp531));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp532));
                        panda$core$Panda$unref$panda$core$Object($tmp533);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp530));
                    }
                }
                $tmp504 = -1;
                goto $l502;
                $l502:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension505));
                switch ($tmp504) {
                    case -1: goto $l537;
                }
                $l537:;
            }
            }
            else {
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
                (($fn547) err271->$class->vtable[21])(err271, &$s546);
                panda$core$UInt8$init$builtin_uint8(&$tmp548, 1);
                panda$core$System$exit$panda$core$UInt8($tmp548);
            }
            }
            else {
            {
                (($fn550) err271->$class->vtable[21])(err271, &$s549);
                panda$core$UInt8$init$builtin_uint8(&$tmp551, 1);
                panda$core$System$exit$panda$core$UInt8($tmp551);
            }
            }
            }
        }
        }
        $tmp552 = format266;
        panda$core$Bit $tmp556;
        if (((panda$core$Bit) { $tmp552.nonnull }).value) goto $l553; else goto $l554;
        $l553:;
        panda$core$Int64$init$builtin_int64(&$tmp557, 5);
        panda$core$Bit $tmp558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $tmp552.value).$rawValue, $tmp557);
        $tmp556 = $tmp558;
        goto $l555;
        $l554:;
        panda$core$Bit$init$builtin_bit(&$tmp559, false);
        $tmp556 = $tmp559;
        goto $l555;
        $l555:;
        if ($tmp556.value) {
        {
            if (((panda$core$Bit) { root267 == NULL }).value) {
            {
                {
                    $tmp560 = root267;
                    $tmp561 = &$s562;
                    root267 = $tmp561;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp561));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp560));
                }
            }
            }
            org$pandalanguage$pandac$HTMLProcessor* $tmp564 = (org$pandalanguage$pandac$HTMLProcessor*) pandaObjectAlloc(12, (panda$core$Class*) &org$pandalanguage$pandac$HTMLProcessor$class);
            org$pandalanguage$pandac$HTMLProcessor$init($tmp564);
            $tmp563 = $tmp564;
            panda$core$Int64$init$builtin_int64(&$tmp566, 0);
            panda$core$Object* $tmp567 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources252, $tmp566);
            $tmp565 = $tmp567;
            (($fn568) $tmp563->$class->vtable[3])($tmp563, ((panda$io$File*) $tmp565), outFile260, root267);
            panda$core$Panda$unref$panda$core$Object($tmp565);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp563));
            $tmp247 = 0;
            goto $l245;
            $l569:;
            return;
        }
        }
        if (((panda$core$Bit) { root267 != NULL }).value) {
        {
            (($fn571) err271->$class->vtable[21])(err271, &$s570);
            panda$core$UInt8$init$builtin_uint8(&$tmp572, 1);
            panda$core$System$exit$panda$core$UInt8($tmp572);
        }
        }
        bool $tmp573 = ((panda$core$Bit) { classList269 != NULL }).value;
        if (!$tmp573) goto $l574;
        $tmp575 = format266;
        panda$core$Bit $tmp579;
        if (((panda$core$Bit) { $tmp575.nonnull }).value) goto $l576; else goto $l577;
        $l576:;
        panda$core$Int64$init$builtin_int64(&$tmp580, 6);
        panda$core$Bit $tmp581 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $tmp575.value).$rawValue, $tmp580);
        $tmp579 = $tmp581;
        goto $l578;
        $l577:;
        panda$core$Bit$init$builtin_bit(&$tmp582, true);
        $tmp579 = $tmp582;
        goto $l578;
        $l578:;
        $tmp573 = $tmp579.value;
        $l574:;
        panda$core$Bit $tmp583 = { $tmp573 };
        if ($tmp583.value) {
        {
            (($fn585) err271->$class->vtable[21])(err271, &$s584);
            panda$core$UInt8$init$builtin_uint8(&$tmp586, 1);
            panda$core$System$exit$panda$core$UInt8($tmp586);
        }
        }
        memset(&errorCount587, 0, sizeof(errorCount587));
        {
            int $tmp590;
            {
                memset(&cg591, 0, sizeof(cg591));
                {
                    $match$277_13592 = format266;
                    panda$core$Int64$init$builtin_int64(&$tmp595, 0);
                    panda$core$Bit $tmp596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$277_13592.value).$rawValue, $tmp595);
                    bool $tmp594 = $tmp596.value;
                    if ($tmp594) goto $l597;
                    panda$core$Int64$init$builtin_int64(&$tmp598, 1);
                    panda$core$Bit $tmp599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$277_13592.value).$rawValue, $tmp598);
                    $tmp594 = $tmp599.value;
                    $l597:;
                    panda$core$Bit $tmp600 = { $tmp594 };
                    bool $tmp593 = $tmp600.value;
                    if ($tmp593) goto $l601;
                    panda$core$Int64$init$builtin_int64(&$tmp602, 2);
                    panda$core$Bit $tmp603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$277_13592.value).$rawValue, $tmp602);
                    $tmp593 = $tmp603.value;
                    $l601:;
                    panda$core$Bit $tmp604 = { $tmp593 };
                    if ($tmp604.value) {
                    {
                        {
                            $tmp605 = cg591;
                            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp608 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                            panda$core$String* $tmp610 = org$pandalanguage$pandac$Config$llvmTriple$R$panda$core$String();
                            $tmp609 = $tmp610;
                            panda$io$File* $tmp614 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile260, &$s613);
                            $tmp612 = $tmp614;
                            panda$io$OutputStream* $tmp615 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp612);
                            $tmp611 = $tmp615;
                            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp608, $tmp609, $tmp611);
                            $tmp607 = $tmp608;
                            $tmp606 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp607);
                            cg591 = $tmp606;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp606));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp607));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp611));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp612));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp609));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp605));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp616, 3);
                    panda$core$Bit $tmp617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$277_13592.value).$rawValue, $tmp616);
                    if ($tmp617.value) {
                    {
                        {
                            $tmp618 = cg591;
                            org$pandalanguage$pandac$HCodeGenerator* $tmp621 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                            org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp621, outFile260);
                            $tmp620 = $tmp621;
                            $tmp619 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp620);
                            cg591 = $tmp619;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp619));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp622, 4);
                    panda$core$Bit $tmp623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$277_13592.value).$rawValue, $tmp622);
                    if ($tmp623.value) {
                    {
                        {
                            $tmp624 = cg591;
                            org$pandalanguage$pandac$CCodeGenerator* $tmp627 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(248, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                            org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp627, outFile260);
                            $tmp626 = $tmp627;
                            $tmp625 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp626);
                            cg591 = $tmp625;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp625));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp626));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp624));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp628, 6);
                    panda$core$Bit $tmp629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$277_13592.value).$rawValue, $tmp628);
                    if ($tmp629.value) {
                    {
                        {
                            $tmp630 = cg591;
                            org$pandalanguage$pandac$pandadoc$PandaDoc* $tmp633 = (org$pandalanguage$pandac$pandadoc$PandaDoc*) pandaObjectAlloc(81, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$PandaDoc$class);
                            panda$io$File* $tmp635 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp635, classList269);
                            $tmp634 = $tmp635;
                            org$pandalanguage$pandac$pandadoc$PandaDoc$init$panda$io$File$panda$io$File$Q($tmp633, outFile260, $tmp634);
                            $tmp632 = $tmp633;
                            $tmp631 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp632);
                            cg591 = $tmp631;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp631));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp632));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp636, false);
                        if ($tmp636.value) goto $l637; else goto $l638;
                        $l638:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s639, (panda$core$Int64) { 288 });
                        abort();
                        $l637:;
                    }
                    }
                    }
                    }
                    }
                }
                org$pandalanguage$pandac$Compiler$Settings* $tmp643 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
                org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp643, self->pandaHome, ((panda$collections$ListView*) imports256), optimizationLevel262, safetyLevel264);
                $tmp642 = $tmp643;
                $tmp641 = $tmp642;
                settings640 = $tmp641;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp641));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp642));
                panda$threads$MessageQueue* $tmp647 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
                panda$threads$MessageQueue$init($tmp647);
                $tmp646 = $tmp647;
                $tmp645 = $tmp646;
                errorQueue644 = $tmp645;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp645));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp646));
                org$pandalanguage$pandac$Compiler* $tmp651 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
                org$pandalanguage$pandac$Compiler$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp651, errorQueue644, cg591, settings640);
                $tmp650 = $tmp651;
                $tmp649 = $tmp650;
                compiler648 = $tmp649;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp649));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp650));
                {
                    int $tmp654;
                    {
                        ITable* $tmp658 = ((panda$collections$Iterable*) sources252)->$class->itable;
                        while ($tmp658->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp658 = $tmp658->next;
                        }
                        $fn660 $tmp659 = $tmp658->methods[0];
                        panda$collections$Iterator* $tmp661 = $tmp659(((panda$collections$Iterable*) sources252));
                        $tmp657 = $tmp661;
                        $tmp656 = $tmp657;
                        Iter$293$13655 = $tmp656;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp656));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp657));
                        $l662:;
                        ITable* $tmp665 = Iter$293$13655->$class->itable;
                        while ($tmp665->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp665 = $tmp665->next;
                        }
                        $fn667 $tmp666 = $tmp665->methods[0];
                        panda$core$Bit $tmp668 = $tmp666(Iter$293$13655);
                        panda$core$Bit $tmp669 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp668);
                        bool $tmp664 = $tmp669.value;
                        if (!$tmp664) goto $l663;
                        {
                            int $tmp672;
                            {
                                ITable* $tmp676 = Iter$293$13655->$class->itable;
                                while ($tmp676->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp676 = $tmp676->next;
                                }
                                $fn678 $tmp677 = $tmp676->methods[1];
                                panda$core$Object* $tmp679 = $tmp677(Iter$293$13655);
                                $tmp675 = $tmp679;
                                $tmp674 = ((panda$io$File*) $tmp675);
                                s673 = $tmp674;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp674));
                                panda$core$Panda$unref$panda$core$Object($tmp675);
                                {
                                    int $tmp682;
                                    {
                                        panda$collections$ListView* $tmp687 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler648, s673);
                                        $tmp686 = $tmp687;
                                        ITable* $tmp688 = ((panda$collections$Iterable*) $tmp686)->$class->itable;
                                        while ($tmp688->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp688 = $tmp688->next;
                                        }
                                        $fn690 $tmp689 = $tmp688->methods[0];
                                        panda$collections$Iterator* $tmp691 = $tmp689(((panda$collections$Iterable*) $tmp686));
                                        $tmp685 = $tmp691;
                                        $tmp684 = $tmp685;
                                        Iter$294$17683 = $tmp684;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp684));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp685));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp686));
                                        $l692:;
                                        ITable* $tmp695 = Iter$294$17683->$class->itable;
                                        while ($tmp695->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp695 = $tmp695->next;
                                        }
                                        $fn697 $tmp696 = $tmp695->methods[0];
                                        panda$core$Bit $tmp698 = $tmp696(Iter$294$17683);
                                        panda$core$Bit $tmp699 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp698);
                                        bool $tmp694 = $tmp699.value;
                                        if (!$tmp694) goto $l693;
                                        {
                                            int $tmp702;
                                            {
                                                ITable* $tmp706 = Iter$294$17683->$class->itable;
                                                while ($tmp706->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp706 = $tmp706->next;
                                                }
                                                $fn708 $tmp707 = $tmp706->methods[1];
                                                panda$core$Object* $tmp709 = $tmp707(Iter$294$17683);
                                                $tmp705 = $tmp709;
                                                $tmp704 = ((org$pandalanguage$pandac$ClassDecl*) $tmp705);
                                                cl703 = $tmp704;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp704));
                                                panda$core$Panda$unref$panda$core$Object($tmp705);
                                                org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler648, cl703);
                                            }
                                            $tmp702 = -1;
                                            goto $l700;
                                            $l700:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl703));
                                            cl703 = NULL;
                                            switch ($tmp702) {
                                                case -1: goto $l710;
                                            }
                                            $l710:;
                                        }
                                        goto $l692;
                                        $l693:;
                                    }
                                    $tmp682 = -1;
                                    goto $l680;
                                    $l680:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$294$17683));
                                    Iter$294$17683 = NULL;
                                    switch ($tmp682) {
                                        case -1: goto $l711;
                                    }
                                    $l711:;
                                }
                            }
                            $tmp672 = -1;
                            goto $l670;
                            $l670:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s673));
                            s673 = NULL;
                            switch ($tmp672) {
                                case -1: goto $l712;
                            }
                            $l712:;
                        }
                        goto $l662;
                        $l663:;
                    }
                    $tmp654 = -1;
                    goto $l652;
                    $l652:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$293$13655));
                    Iter$293$13655 = NULL;
                    switch ($tmp654) {
                        case -1: goto $l713;
                    }
                    $l713:;
                }
                {
                    int $tmp716;
                    {
                        ITable* $tmp720 = ((panda$collections$Iterable*) sources252)->$class->itable;
                        while ($tmp720->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp720 = $tmp720->next;
                        }
                        $fn722 $tmp721 = $tmp720->methods[0];
                        panda$collections$Iterator* $tmp723 = $tmp721(((panda$collections$Iterable*) sources252));
                        $tmp719 = $tmp723;
                        $tmp718 = $tmp719;
                        Iter$298$13717 = $tmp718;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp718));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp719));
                        $l724:;
                        ITable* $tmp727 = Iter$298$13717->$class->itable;
                        while ($tmp727->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp727 = $tmp727->next;
                        }
                        $fn729 $tmp728 = $tmp727->methods[0];
                        panda$core$Bit $tmp730 = $tmp728(Iter$298$13717);
                        panda$core$Bit $tmp731 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp730);
                        bool $tmp726 = $tmp731.value;
                        if (!$tmp726) goto $l725;
                        {
                            int $tmp734;
                            {
                                ITable* $tmp738 = Iter$298$13717->$class->itable;
                                while ($tmp738->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp738 = $tmp738->next;
                                }
                                $fn740 $tmp739 = $tmp738->methods[1];
                                panda$core$Object* $tmp741 = $tmp739(Iter$298$13717);
                                $tmp737 = $tmp741;
                                $tmp736 = ((panda$io$File*) $tmp737);
                                s735 = $tmp736;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp736));
                                panda$core$Panda$unref$panda$core$Object($tmp737);
                                org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler648, s735);
                            }
                            $tmp734 = -1;
                            goto $l732;
                            $l732:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s735));
                            s735 = NULL;
                            switch ($tmp734) {
                                case -1: goto $l742;
                            }
                            $l742:;
                        }
                        goto $l724;
                        $l725:;
                    }
                    $tmp716 = -1;
                    goto $l714;
                    $l714:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$298$13717));
                    Iter$298$13717 = NULL;
                    switch ($tmp716) {
                        case -1: goto $l743;
                    }
                    $l743:;
                }
                org$pandalanguage$pandac$Compiler$finish(compiler648);
                panda$core$Int64 $tmp744 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(errorQueue644);
                errorCount587 = $tmp744;
                panda$core$Int64$init$builtin_int64(&$tmp746, 0);
                panda$core$Bit$init$builtin_bit(&$tmp747, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp745, $tmp746, errorCount587, $tmp747);
                int64_t $tmp749 = $tmp745.min.value;
                panda$core$Int64 i748 = { $tmp749 };
                int64_t $tmp751 = $tmp745.max.value;
                bool $tmp752 = $tmp745.inclusive.value;
                if ($tmp752) goto $l759; else goto $l760;
                $l759:;
                if ($tmp749 <= $tmp751) goto $l753; else goto $l755;
                $l760:;
                if ($tmp749 < $tmp751) goto $l753; else goto $l755;
                $l753:;
                {
                    int $tmp763;
                    {
                        panda$core$Immutable* $tmp767 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(errorQueue644);
                        $tmp766 = $tmp767;
                        $tmp765 = ((org$pandalanguage$pandac$Compiler$Error*) $tmp766);
                        error764 = $tmp765;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp765));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp766));
                        panda$core$String* $tmp775 = panda$io$File$name$R$panda$core$String(error764->file);
                        $tmp774 = $tmp775;
                        panda$core$String* $tmp776 = panda$core$String$convert$R$panda$core$String($tmp774);
                        $tmp773 = $tmp776;
                        panda$core$String* $tmp778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp773, &$s777);
                        $tmp772 = $tmp778;
                        org$pandalanguage$pandac$Position$wrapper* $tmp780;
                        $tmp780 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                        $tmp780->value = error764->position;
                        $tmp779 = ((panda$core$Object*) $tmp780);
                        panda$core$String* $tmp781 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp772, $tmp779);
                        $tmp771 = $tmp781;
                        panda$core$String* $tmp783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp771, &$s782);
                        $tmp770 = $tmp783;
                        panda$core$String* $tmp784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp770, error764->message);
                        $tmp769 = $tmp784;
                        panda$core$String* $tmp786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp769, &$s785);
                        $tmp768 = $tmp786;
                        panda$io$Console$printLine$panda$core$String($tmp768);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp768));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp769));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp770));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp771));
                        panda$core$Panda$unref$panda$core$Object($tmp779);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp772));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp773));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp774));
                    }
                    $tmp763 = -1;
                    goto $l761;
                    $l761:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) error764));
                    error764 = NULL;
                    switch ($tmp763) {
                        case -1: goto $l787;
                    }
                    $l787:;
                }
                $l756:;
                int64_t $tmp789 = $tmp751 - i748.value;
                if ($tmp752) goto $l790; else goto $l791;
                $l790:;
                if ((uint64_t) $tmp789 >= 1) goto $l788; else goto $l755;
                $l791:;
                if ((uint64_t) $tmp789 > 1) goto $l788; else goto $l755;
                $l788:;
                i748.value += 1;
                goto $l753;
                $l755:;
            }
            $tmp590 = -1;
            goto $l588;
            $l588:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler648));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) errorQueue644));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings640));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg591));
            settings640 = NULL;
            errorQueue644 = NULL;
            compiler648 = NULL;
            switch ($tmp590) {
                case -1: goto $l794;
            }
            $l794:;
        }
        panda$core$Int64$init$builtin_int64(&$tmp795, 0);
        panda$core$Bit $tmp796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount587, $tmp795);
        if ($tmp796.value) {
        {
            {
                $match$309_13797 = format266;
                panda$core$Int64$init$builtin_int64(&$tmp798, 1);
                panda$core$Bit $tmp799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$309_13797.value).$rawValue, $tmp798);
                if ($tmp799.value) {
                {
                    int $tmp802;
                    {
                        panda$io$File* $tmp808 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile260, &$s807);
                        $tmp806 = $tmp808;
                        panda$io$File* $tmp809 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp806, optimizationLevel262);
                        $tmp805 = $tmp809;
                        $tmp804 = $tmp805;
                        optimized803 = $tmp804;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp804));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp805));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp806));
                        panda$io$File* $tmp813 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized803);
                        $tmp812 = $tmp813;
                        $tmp811 = $tmp812;
                        assembly810 = $tmp811;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp811));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp812));
                        panda$io$File* $tmp815 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly810, outFile260);
                        $tmp814 = $tmp815;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp814));
                    }
                    $tmp802 = -1;
                    goto $l800;
                    $l800:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly810));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized803));
                    optimized803 = NULL;
                    assembly810 = NULL;
                    switch ($tmp802) {
                        case -1: goto $l816;
                    }
                    $l816:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp817, 2);
                panda$core$Bit $tmp818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$309_13797.value).$rawValue, $tmp817);
                if ($tmp818.value) {
                {
                    int $tmp821;
                    {
                        panda$io$File* $tmp827 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile260, &$s826);
                        $tmp825 = $tmp827;
                        panda$io$File* $tmp828 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp825, optimizationLevel262);
                        $tmp824 = $tmp828;
                        $tmp823 = $tmp824;
                        optimized822 = $tmp823;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp823));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp824));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp825));
                        panda$io$File* $tmp832 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized822);
                        $tmp831 = $tmp832;
                        $tmp830 = $tmp831;
                        assembly829 = $tmp830;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp830));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp831));
                        panda$io$File* $tmp834 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly829, outFile260);
                        $tmp833 = $tmp834;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp833));
                    }
                    $tmp821 = -1;
                    goto $l819;
                    $l819:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly829));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized822));
                    optimized822 = NULL;
                    assembly829 = NULL;
                    switch ($tmp821) {
                        case -1: goto $l835;
                    }
                    $l835:;
                }
                }
                }
            }
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp836, 1);
            panda$core$Bit $tmp837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount587, $tmp836);
            if ($tmp837.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s838);
            }
            }
            else {
            {
                panda$core$String* $tmp841 = panda$core$Int64$convert$R$panda$core$String(errorCount587);
                $tmp840 = $tmp841;
                panda$core$String* $tmp843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp840, &$s842);
                $tmp839 = $tmp843;
                panda$io$Console$printLine$panda$core$String($tmp839);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp839));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp840));
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp844, 1);
            panda$core$System$exit$panda$core$UInt8($tmp844);
        }
        }
    }
    $tmp247 = -1;
    goto $l245;
    $l245:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llvmDir470));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err271));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) classList269));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) root267));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile260));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports256));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources252));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args248));
    args248 = NULL;
    sources252 = NULL;
    imports256 = NULL;
    err271 = NULL;
    llvmDir470 = NULL;
    switch ($tmp247) {
        case 0: goto $l569;
        case -1: goto $l845;
    }
    $l845:;
}
panda$core$Bit org$pandalanguage$pandac$Main$containsError$panda$core$String$R$panda$core$Bit(panda$core$String* p_s) {
    panda$core$Bit $returnValue846;
    panda$core$Bit $tmp848 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_s, &$s847);
    $returnValue846 = $tmp848;
    return $returnValue846;
}
void pandaMain(panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$Main* $tmp850;
    org$pandalanguage$pandac$Main* $tmp851 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
    org$pandalanguage$pandac$Main$init($tmp851);
    $tmp850 = $tmp851;
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp850, p_args);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp850));
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    int $tmp854;
    {
    }
    $tmp854 = -1;
    goto $l852;
    $l852:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp854) {
        case -1: goto $l855;
    }
    $l855:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

