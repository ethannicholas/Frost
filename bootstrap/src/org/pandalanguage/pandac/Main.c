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
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Main/Arguments.h"
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
typedef panda$core$Bit (*$fn274)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn283)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn304)(panda$io$InputStream*, panda$io$OutputStream*);
typedef void (*$fn309)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn317)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn330)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn343)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn355)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn368)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn377)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn383)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn411)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn421)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn438)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn467)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn516)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn583)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn590)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn601)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn613)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn620)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn631)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn645)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn652)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn663)(panda$collections$Iterator*);

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
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x70\x61\x6e\x64\x61", 15, -4231800707287400719, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s705 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };

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
    panda$core$Int64 $tmp50;
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
            panda$core$Int64$init$builtin_int64(&$tmp50, 1);
            panda$core$System$exit$panda$core$Int64($tmp50);
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
    panda$core$Int64 $tmp82;
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
            panda$core$Int64$init$builtin_int64(&$tmp82, 1);
            panda$core$System$exit$panda$core$Int64($tmp82);
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
    panda$core$Int64 $tmp118;
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
            panda$core$Int64$init$builtin_int64(&$tmp118, 1);
            panda$core$System$exit$panda$core$Int64($tmp118);
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
    panda$collections$Iterator* Iter$117$9152 = NULL;
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
    panda$core$Int64 $tmp229;
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
                Iter$117$9152 = $tmp153;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp153));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
                $l159:;
                ITable* $tmp162 = Iter$117$9152->$class->itable;
                while ($tmp162->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp162 = $tmp162->next;
                }
                $fn164 $tmp163 = $tmp162->methods[0];
                panda$core$Bit $tmp165 = $tmp163(Iter$117$9152);
                panda$core$Bit $tmp166 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp165);
                bool $tmp161 = $tmp166.value;
                if (!$tmp161) goto $l160;
                {
                    int $tmp169;
                    {
                        ITable* $tmp173 = Iter$117$9152->$class->itable;
                        while ($tmp173->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp173 = $tmp173->next;
                        }
                        $fn175 $tmp174 = $tmp173->methods[1];
                        panda$core$Object* $tmp176 = $tmp174(Iter$117$9152);
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
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s194, (panda$core$Int64) { 121 });
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$117$9152));
            Iter$117$9152 = NULL;
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
            panda$core$Int64$init$builtin_int64(&$tmp229, 1);
            panda$core$System$exit$panda$core$Int64($tmp229);
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
    panda$core$Int64$nullable format266;
    panda$io$OutputStream* err267 = NULL;
    panda$io$OutputStream* $tmp268;
    panda$io$OutputStream* $tmp269;
    panda$core$String* a280 = NULL;
    panda$core$String* $tmp281;
    panda$core$String* $tmp282;
    panda$core$String* $match$159_13288 = NULL;
    panda$core$String* $tmp289;
    panda$io$File* path295 = NULL;
    panda$io$File* $tmp296;
    panda$io$File* $tmp297;
    panda$io$InputStream* $tmp300;
    panda$io$OutputStream* $tmp302;
    panda$core$Int64 $tmp310;
    panda$io$File* $tmp311;
    panda$io$File* $tmp312;
    panda$io$File* $tmp313;
    panda$core$String* $tmp315;
    panda$io$File* $tmp319;
    panda$core$String* level326 = NULL;
    panda$core$String* $tmp327;
    panda$core$String* $tmp328;
    panda$core$Int64 $tmp334;
    panda$core$Int64 $tmp337;
    panda$io$OutputStream* $tmp340;
    panda$core$Int64 $tmp344;
    panda$core$String* level351 = NULL;
    panda$core$String* $tmp352;
    panda$core$String* $tmp353;
    panda$core$Int64 $tmp359;
    panda$core$Int64 $tmp362;
    panda$io$OutputStream* $tmp365;
    panda$core$Int64 $tmp369;
    panda$core$Int64 $tmp378;
    panda$core$String* f379 = NULL;
    panda$core$String* $tmp380;
    panda$core$String* $tmp381;
    panda$core$String* $match$191_21388 = NULL;
    panda$core$String* $tmp389;
    panda$core$Int64 $tmp392;
    panda$core$Int64 $tmp395;
    panda$core$Int64 $tmp398;
    panda$core$Int64 $tmp401;
    panda$core$Int64 $tmp404;
    panda$core$String* $tmp405;
    panda$core$String* $tmp406;
    panda$core$Int64 $tmp412;
    panda$io$File* $tmp417;
    panda$core$String* $tmp419;
    panda$core$String* $tmp426;
    panda$io$File* $tmp430;
    panda$core$String* $tmp432;
    panda$core$String* $tmp433;
    panda$core$Int64 $tmp439;
    panda$io$File* llvmDir442 = NULL;
    panda$io$File* $tmp443;
    panda$io$File* $tmp444;
    panda$core$String* $tmp446;
    panda$io$File* $tmp448;
    panda$io$File* $tmp449;
    panda$io$File* $tmp450;
    panda$io$File* $tmp453;
    panda$io$File* $tmp454;
    panda$io$File* $tmp455;
    panda$io$File* $tmp458;
    panda$io$File* $tmp459;
    panda$io$File* $tmp460;
    panda$core$Int64 $tmp464;
    panda$core$Int64 $tmp468;
    panda$core$Int64 $tmp469;
    panda$core$Int64 $tmp471;
    panda$core$String* extension476 = NULL;
    panda$core$Int64$nullable $match$231_21477;
    panda$core$Int64 $tmp478;
    panda$core$String* $tmp480;
    panda$core$String* $tmp481;
    panda$core$Int64 $tmp483;
    panda$core$String* $tmp485;
    panda$core$String* $tmp486;
    panda$core$Int64 $tmp488;
    panda$core$String* $tmp490;
    panda$core$String* $tmp491;
    panda$core$Int64 $tmp493;
    panda$core$String* $tmp495;
    panda$core$String* $tmp496;
    panda$core$Int64 $tmp498;
    panda$core$String* $tmp500;
    panda$core$String* $tmp501;
    panda$core$Bit $tmp503;
    panda$io$File* $tmp507;
    panda$io$File* $tmp508;
    panda$io$File* $tmp509;
    panda$core$Object* $tmp510;
    panda$core$Int64 $tmp511;
    panda$core$Int64 $tmp517;
    panda$core$Int64 errorCount518;
    org$pandalanguage$pandac$CodeGenerator* cg522 = NULL;
    panda$core$Int64$nullable $match$250_17523;
    panda$core$Int64 $tmp526;
    panda$core$Int64 $tmp529;
    panda$core$Int64 $tmp533;
    org$pandalanguage$pandac$CodeGenerator* $tmp536;
    org$pandalanguage$pandac$CodeGenerator* $tmp537;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp538;
    panda$core$String* $tmp540;
    panda$io$OutputStream* $tmp542;
    panda$io$File* $tmp543;
    panda$core$Int64 $tmp547;
    org$pandalanguage$pandac$CodeGenerator* $tmp549;
    org$pandalanguage$pandac$CodeGenerator* $tmp550;
    org$pandalanguage$pandac$HCodeGenerator* $tmp551;
    panda$core$Int64 $tmp553;
    org$pandalanguage$pandac$CodeGenerator* $tmp555;
    org$pandalanguage$pandac$CodeGenerator* $tmp556;
    org$pandalanguage$pandac$CCodeGenerator* $tmp557;
    panda$core$Bit $tmp559;
    org$pandalanguage$pandac$Compiler$Settings* settings563 = NULL;
    org$pandalanguage$pandac$Compiler$Settings* $tmp564;
    org$pandalanguage$pandac$Compiler$Settings* $tmp565;
    panda$threads$MessageQueue* errorQueue567 = NULL;
    panda$threads$MessageQueue* $tmp568;
    panda$threads$MessageQueue* $tmp569;
    org$pandalanguage$pandac$Compiler* compiler571 = NULL;
    org$pandalanguage$pandac$Compiler* $tmp572;
    org$pandalanguage$pandac$Compiler* $tmp573;
    panda$collections$Iterator* Iter$263$13578 = NULL;
    panda$collections$Iterator* $tmp579;
    panda$collections$Iterator* $tmp580;
    panda$io$File* s596 = NULL;
    panda$io$File* $tmp597;
    panda$core$Object* $tmp598;
    panda$collections$Iterator* Iter$264$17606 = NULL;
    panda$collections$Iterator* $tmp607;
    panda$collections$Iterator* $tmp608;
    panda$collections$ListView* $tmp609;
    org$pandalanguage$pandac$ClassDecl* cl626 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp627;
    panda$core$Object* $tmp628;
    panda$collections$Iterator* Iter$268$13640 = NULL;
    panda$collections$Iterator* $tmp641;
    panda$collections$Iterator* $tmp642;
    panda$io$File* s658 = NULL;
    panda$io$File* $tmp659;
    panda$core$Object* $tmp660;
    panda$core$Range$LTpanda$core$Int64$GT $tmp668;
    panda$core$Int64 $tmp669;
    panda$core$Bit $tmp670;
    org$pandalanguage$pandac$Compiler$Error* error687 = NULL;
    org$pandalanguage$pandac$Compiler$Error* $tmp688;
    panda$core$Immutable* $tmp689;
    panda$core$String* $tmp691;
    panda$core$String* $tmp692;
    panda$core$String* $tmp693;
    panda$core$String* $tmp694;
    panda$core$String* $tmp695;
    panda$core$String* $tmp696;
    panda$core$String* $tmp697;
    panda$core$Object* $tmp702;
    panda$core$Int64 $tmp718;
    panda$core$Int64$nullable $match$280_17720;
    panda$core$Int64 $tmp721;
    panda$io$File* optimized726 = NULL;
    panda$io$File* $tmp727;
    panda$io$File* $tmp728;
    panda$io$File* $tmp729;
    panda$io$File* assembly733 = NULL;
    panda$io$File* $tmp734;
    panda$io$File* $tmp735;
    panda$io$File* $tmp737;
    panda$core$Int64 $tmp740;
    panda$io$File* optimized745 = NULL;
    panda$io$File* $tmp746;
    panda$io$File* $tmp747;
    panda$io$File* $tmp748;
    panda$io$File* assembly752 = NULL;
    panda$io$File* $tmp753;
    panda$io$File* $tmp754;
    panda$io$File* $tmp756;
    panda$core$Int64 $tmp759;
    panda$core$String* $tmp762;
    panda$core$String* $tmp763;
    panda$core$Int64 $tmp767;
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
        format266 = ((panda$core$Int64$nullable) { .nonnull = false });
        panda$io$OutputStream* $tmp270 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp269 = $tmp270;
        $tmp268 = $tmp269;
        err267 = $tmp268;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp268));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp269));
        $l271:;
        panda$core$Bit $tmp275 = (($fn274) args248->$class->vtable[2])(args248);
        panda$core$Bit $tmp276 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp275);
        bool $tmp273 = $tmp276.value;
        if (!$tmp273) goto $l272;
        {
            int $tmp279;
            {
                panda$core$String* $tmp284 = (($fn283) args248->$class->vtable[3])(args248);
                $tmp282 = $tmp284;
                $tmp281 = $tmp282;
                a280 = $tmp281;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp281));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp282));
                int $tmp287;
                {
                    $tmp289 = a280;
                    $match$159_13288 = $tmp289;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp289));
                    panda$core$Bit $tmp291 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$159_13288, &$s290);
                    if ($tmp291.value) {
                    {
                        int $tmp294;
                        {
                            panda$io$File* $tmp298 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp298, &$s299);
                            $tmp297 = $tmp298;
                            $tmp296 = $tmp297;
                            path295 = $tmp296;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp296));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
                            panda$io$InputStream* $tmp301 = panda$io$Console$inputStream$R$panda$io$InputStream();
                            $tmp300 = $tmp301;
                            panda$io$OutputStream* $tmp303 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path295);
                            $tmp302 = $tmp303;
                            (($fn304) $tmp300->$class->vtable[12])($tmp300, $tmp302);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp302));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp300));
                            panda$collections$Array$add$panda$collections$Array$T(sources252, ((panda$core$Object*) path295));
                        }
                        $tmp294 = -1;
                        goto $l292;
                        $l292:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path295));
                        path295 = NULL;
                        switch ($tmp294) {
                            case -1: goto $l305;
                        }
                        $l305:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp307 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$159_13288, &$s306);
                    if ($tmp307.value) {
                    {
                        if (((panda$core$Bit) { outFile260 != NULL }).value) {
                        {
                            (($fn309) err267->$class->vtable[21])(err267, &$s308);
                            panda$core$Int64$init$builtin_int64(&$tmp310, 1);
                            panda$core$System$exit$panda$core$Int64($tmp310);
                        }
                        }
                        {
                            $tmp311 = outFile260;
                            panda$io$File* $tmp314 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp318 = (($fn317) args248->$class->vtable[4])(args248, &$s316);
                            $tmp315 = $tmp318;
                            panda$io$File$init$panda$core$String($tmp314, $tmp315);
                            $tmp313 = $tmp314;
                            $tmp312 = $tmp313;
                            outFile260 = $tmp312;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp311));
                        }
                        panda$io$File* $tmp320 = panda$io$File$parent$R$panda$io$File$Q(outFile260);
                        $tmp319 = $tmp320;
                        panda$io$File$createDirectories($tmp319);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
                    }
                    }
                    else {
                    panda$core$Bit $tmp322 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$159_13288, &$s321);
                    if ($tmp322.value) {
                    {
                        int $tmp325;
                        {
                            panda$core$String* $tmp331 = (($fn330) args248->$class->vtable[4])(args248, &$s329);
                            $tmp328 = $tmp331;
                            $tmp327 = $tmp328;
                            level326 = $tmp327;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp327));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp328));
                            panda$core$Int64$nullable $tmp332 = panda$core$String$convert$R$panda$core$Int64$Q(level326);
                            optimizationLevel262 = ((panda$core$Int64) $tmp332.value);
                            panda$core$Int64$init$builtin_int64(&$tmp334, 3);
                            panda$core$Bit $tmp335 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel262, $tmp334);
                            bool $tmp333 = $tmp335.value;
                            if ($tmp333) goto $l336;
                            panda$core$Int64$init$builtin_int64(&$tmp337, 0);
                            panda$core$Bit $tmp338 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel262, $tmp337);
                            $tmp333 = $tmp338.value;
                            $l336:;
                            panda$core$Bit $tmp339 = { $tmp333 };
                            if ($tmp339.value) {
                            {
                                panda$io$OutputStream* $tmp341 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp340 = $tmp341;
                                (($fn343) $tmp340->$class->vtable[21])($tmp340, &$s342);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp340));
                                panda$core$Int64$init$builtin_int64(&$tmp344, 1);
                                panda$core$System$exit$panda$core$Int64($tmp344);
                            }
                            }
                        }
                        $tmp325 = -1;
                        goto $l323;
                        $l323:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level326));
                        level326 = NULL;
                        switch ($tmp325) {
                            case -1: goto $l345;
                        }
                        $l345:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp347 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$159_13288, &$s346);
                    if ($tmp347.value) {
                    {
                        int $tmp350;
                        {
                            panda$core$String* $tmp356 = (($fn355) args248->$class->vtable[4])(args248, &$s354);
                            $tmp353 = $tmp356;
                            $tmp352 = $tmp353;
                            level351 = $tmp352;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp352));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp353));
                            panda$core$Int64$nullable $tmp357 = panda$core$String$convert$R$panda$core$Int64$Q(level351);
                            safetyLevel264 = ((panda$core$Int64) $tmp357.value);
                            panda$core$Int64$init$builtin_int64(&$tmp359, 3);
                            panda$core$Bit $tmp360 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel264, $tmp359);
                            bool $tmp358 = $tmp360.value;
                            if ($tmp358) goto $l361;
                            panda$core$Int64$init$builtin_int64(&$tmp362, 0);
                            panda$core$Bit $tmp363 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel264, $tmp362);
                            $tmp358 = $tmp363.value;
                            $l361:;
                            panda$core$Bit $tmp364 = { $tmp358 };
                            if ($tmp364.value) {
                            {
                                panda$io$OutputStream* $tmp366 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp365 = $tmp366;
                                (($fn368) $tmp365->$class->vtable[21])($tmp365, &$s367);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp365));
                                panda$core$Int64$init$builtin_int64(&$tmp369, 1);
                                panda$core$System$exit$panda$core$Int64($tmp369);
                            }
                            }
                        }
                        $tmp350 = -1;
                        goto $l348;
                        $l348:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level351));
                        level351 = NULL;
                        switch ($tmp350) {
                            case -1: goto $l370;
                        }
                        $l370:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp372 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$159_13288, &$s371);
                    if ($tmp372.value) {
                    {
                        int $tmp375;
                        {
                            if (((panda$core$Bit) { format266.nonnull }).value) {
                            {
                                (($fn377) err267->$class->vtable[21])(err267, &$s376);
                                panda$core$Int64$init$builtin_int64(&$tmp378, 1);
                                panda$core$System$exit$panda$core$Int64($tmp378);
                            }
                            }
                            panda$core$String* $tmp384 = (($fn383) args248->$class->vtable[4])(args248, &$s382);
                            $tmp381 = $tmp384;
                            $tmp380 = $tmp381;
                            f379 = $tmp380;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp380));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
                            int $tmp387;
                            {
                                $tmp389 = f379;
                                $match$191_21388 = $tmp389;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp389));
                                panda$core$Bit $tmp391 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$191_21388, &$s390);
                                if ($tmp391.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp392, 918);
                                    format266 = ((panda$core$Int64$nullable) { $tmp392, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp394 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$191_21388, &$s393);
                                if ($tmp394.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp395, 919);
                                    format266 = ((panda$core$Int64$nullable) { $tmp395, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp397 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$191_21388, &$s396);
                                if ($tmp397.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp398, 917);
                                    format266 = ((panda$core$Int64$nullable) { $tmp398, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp400 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$191_21388, &$s399);
                                if ($tmp400.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp401, 920);
                                    format266 = ((panda$core$Int64$nullable) { $tmp401, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp403 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$191_21388, &$s402);
                                if ($tmp403.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp404, 921);
                                    format266 = ((panda$core$Int64$nullable) { $tmp404, true });
                                }
                                }
                                else {
                                {
                                    panda$core$String* $tmp408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s407, f379);
                                    $tmp406 = $tmp408;
                                    panda$core$String* $tmp410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp406, &$s409);
                                    $tmp405 = $tmp410;
                                    (($fn411) err267->$class->vtable[21])(err267, $tmp405);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp405));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp406));
                                    panda$core$Int64$init$builtin_int64(&$tmp412, 1);
                                    panda$core$System$exit$panda$core$Int64($tmp412);
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            $tmp387 = -1;
                            goto $l385;
                            $l385:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp389));
                            switch ($tmp387) {
                                case -1: goto $l413;
                            }
                            $l413:;
                        }
                        $tmp375 = -1;
                        goto $l373;
                        $l373:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f379));
                        f379 = NULL;
                        switch ($tmp375) {
                            case -1: goto $l414;
                        }
                        $l414:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp416 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$159_13288, &$s415);
                    if ($tmp416.value) {
                    {
                        panda$io$File* $tmp418 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$core$String* $tmp422 = (($fn421) args248->$class->vtable[4])(args248, &$s420);
                        $tmp419 = $tmp422;
                        panda$io$File$init$panda$core$String($tmp418, $tmp419);
                        $tmp417 = $tmp418;
                        panda$collections$Array$add$panda$collections$Array$T(imports256, ((panda$core$Object*) $tmp417));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
                    }
                    }
                    else {
                    panda$core$Bit $tmp424 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$159_13288, &$s423);
                    if ($tmp424.value) {
                    {
                        panda$io$Console$printLine$panda$core$String(&$s425);
                        panda$core$String* $tmp427 = panda$io$Console$readLine$R$panda$core$String$Q();
                        $tmp426 = $tmp427;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp426));
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp429 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a280, &$s428);
                        if ($tmp429.value) {
                        {
                            panda$io$File* $tmp431 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp431, a280);
                            $tmp430 = $tmp431;
                            panda$collections$Array$add$panda$collections$Array$T(sources252, ((panda$core$Object*) $tmp430));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp430));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s434, a280);
                            $tmp433 = $tmp435;
                            panda$core$String* $tmp437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp433, &$s436);
                            $tmp432 = $tmp437;
                            (($fn438) err267->$class->vtable[21])(err267, $tmp432);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp432));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp433));
                            panda$core$Int64$init$builtin_int64(&$tmp439, 1);
                            panda$core$System$exit$panda$core$Int64($tmp439);
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
                $tmp287 = -1;
                goto $l285;
                $l285:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp289));
                switch ($tmp287) {
                    case -1: goto $l440;
                }
                $l440:;
            }
            $tmp279 = -1;
            goto $l277;
            $l277:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a280));
            a280 = NULL;
            switch ($tmp279) {
                case -1: goto $l441;
            }
            $l441:;
        }
        goto $l271;
        $l272:;
        panda$io$File* $tmp445 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$core$String* $tmp447 = org$pandalanguage$pandac$Config$llvmDir$R$panda$core$String();
        $tmp446 = $tmp447;
        panda$io$File$init$panda$core$String($tmp445, $tmp446);
        $tmp444 = $tmp445;
        $tmp443 = $tmp444;
        llvmDir442 = $tmp443;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp443));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp446));
        {
            $tmp448 = self->opt;
            panda$io$File* $tmp452 = panda$io$File$resolve$panda$core$String$R$panda$io$File(llvmDir442, &$s451);
            $tmp450 = $tmp452;
            $tmp449 = $tmp450;
            self->opt = $tmp449;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp449));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp450));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
        }
        {
            $tmp453 = self->llc;
            panda$io$File* $tmp457 = panda$io$File$resolve$panda$core$String$R$panda$io$File(llvmDir442, &$s456);
            $tmp455 = $tmp457;
            $tmp454 = $tmp455;
            self->llc = $tmp454;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp454));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp455));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp453));
        }
        {
            $tmp458 = self->gcc;
            panda$io$File* $tmp461 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
            panda$io$File$init$panda$core$String($tmp461, &$s462);
            $tmp460 = $tmp461;
            $tmp459 = $tmp460;
            self->gcc = $tmp459;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp459));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp460));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp458));
        }
        panda$core$Int64 $tmp463 = panda$collections$Array$get_count$R$panda$core$Int64(sources252);
        panda$core$Int64$init$builtin_int64(&$tmp464, 0);
        panda$core$Bit $tmp465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp463, $tmp464);
        if ($tmp465.value) {
        {
            (($fn467) err267->$class->vtable[21])(err267, &$s466);
            panda$core$Int64$init$builtin_int64(&$tmp468, 1);
            panda$core$System$exit$panda$core$Int64($tmp468);
        }
        }
        if (((panda$core$Bit) { !format266.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp469, 918);
            format266 = ((panda$core$Int64$nullable) { $tmp469, true });
        }
        }
        if (((panda$core$Bit) { outFile260 == NULL }).value) {
        {
            panda$core$Int64 $tmp470 = panda$collections$Array$get_count$R$panda$core$Int64(sources252);
            panda$core$Int64$init$builtin_int64(&$tmp471, 1);
            panda$core$Bit $tmp472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp470, $tmp471);
            if ($tmp472.value) {
            {
                int $tmp475;
                {
                    memset(&extension476, 0, sizeof(extension476));
                    {
                        $match$231_21477 = format266;
                        panda$core$Int64$init$builtin_int64(&$tmp478, 918);
                        panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$231_21477.value), $tmp478);
                        if ($tmp479.value) {
                        {
                            {
                                $tmp480 = extension476;
                                $tmp481 = &$s482;
                                extension476 = $tmp481;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp481));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp483, 919);
                        panda$core$Bit $tmp484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$231_21477.value), $tmp483);
                        if ($tmp484.value) {
                        {
                            {
                                $tmp485 = extension476;
                                $tmp486 = &$s487;
                                extension476 = $tmp486;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp486));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp485));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp488, 920);
                        panda$core$Bit $tmp489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$231_21477.value), $tmp488);
                        if ($tmp489.value) {
                        {
                            {
                                $tmp490 = extension476;
                                $tmp491 = &$s492;
                                extension476 = $tmp491;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp491));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp493, 921);
                        panda$core$Bit $tmp494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$231_21477.value), $tmp493);
                        if ($tmp494.value) {
                        {
                            {
                                $tmp495 = extension476;
                                $tmp496 = &$s497;
                                extension476 = $tmp496;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp496));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp495));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp498, 917);
                        panda$core$Bit $tmp499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$231_21477.value), $tmp498);
                        if ($tmp499.value) {
                        {
                            {
                                $tmp500 = extension476;
                                $tmp501 = &$s502;
                                extension476 = $tmp501;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp501));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp500));
                            }
                        }
                        }
                        else {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp503, false);
                            if ($tmp503.value) goto $l504; else goto $l505;
                            $l505:;
                            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s506, (panda$core$Int64) { 236 });
                            abort();
                            $l504:;
                        }
                        }
                        }
                        }
                        }
                        }
                    }
                    {
                        $tmp507 = outFile260;
                        panda$core$Int64$init$builtin_int64(&$tmp511, 0);
                        panda$core$Object* $tmp512 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources252, $tmp511);
                        $tmp510 = $tmp512;
                        panda$io$File* $tmp513 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp510), extension476);
                        $tmp509 = $tmp513;
                        $tmp508 = $tmp509;
                        outFile260 = $tmp508;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp508));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp509));
                        panda$core$Panda$unref$panda$core$Object($tmp510);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp507));
                    }
                }
                $tmp475 = -1;
                goto $l473;
                $l473:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension476));
                switch ($tmp475) {
                    case -1: goto $l514;
                }
                $l514:;
            }
            }
            else {
            {
                (($fn516) err267->$class->vtable[21])(err267, &$s515);
                panda$core$Int64$init$builtin_int64(&$tmp517, 1);
                panda$core$System$exit$panda$core$Int64($tmp517);
            }
            }
        }
        }
        memset(&errorCount518, 0, sizeof(errorCount518));
        {
            int $tmp521;
            {
                memset(&cg522, 0, sizeof(cg522));
                {
                    $match$250_17523 = format266;
                    panda$core$Int64$init$builtin_int64(&$tmp526, 917);
                    panda$core$Bit $tmp527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$250_17523.value), $tmp526);
                    bool $tmp525 = $tmp527.value;
                    if ($tmp525) goto $l528;
                    panda$core$Int64$init$builtin_int64(&$tmp529, 918);
                    panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$250_17523.value), $tmp529);
                    $tmp525 = $tmp530.value;
                    $l528:;
                    panda$core$Bit $tmp531 = { $tmp525 };
                    bool $tmp524 = $tmp531.value;
                    if ($tmp524) goto $l532;
                    panda$core$Int64$init$builtin_int64(&$tmp533, 919);
                    panda$core$Bit $tmp534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$250_17523.value), $tmp533);
                    $tmp524 = $tmp534.value;
                    $l532:;
                    panda$core$Bit $tmp535 = { $tmp524 };
                    if ($tmp535.value) {
                    {
                        {
                            $tmp536 = cg522;
                            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp539 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                            panda$core$String* $tmp541 = org$pandalanguage$pandac$Config$llvmTriple$R$panda$core$String();
                            $tmp540 = $tmp541;
                            panda$io$File* $tmp545 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile260, &$s544);
                            $tmp543 = $tmp545;
                            panda$io$OutputStream* $tmp546 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp543);
                            $tmp542 = $tmp546;
                            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp539, $tmp540, $tmp542);
                            $tmp538 = $tmp539;
                            $tmp537 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp538);
                            cg522 = $tmp537;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp537));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp538));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp543));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp540));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp536));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp547, 920);
                    panda$core$Bit $tmp548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$250_17523.value), $tmp547);
                    if ($tmp548.value) {
                    {
                        {
                            $tmp549 = cg522;
                            org$pandalanguage$pandac$HCodeGenerator* $tmp552 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(137, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                            org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp552, outFile260);
                            $tmp551 = $tmp552;
                            $tmp550 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp551);
                            cg522 = $tmp550;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp550));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp551));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp553, 921);
                    panda$core$Bit $tmp554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$250_17523.value), $tmp553);
                    if ($tmp554.value) {
                    {
                        {
                            $tmp555 = cg522;
                            org$pandalanguage$pandac$CCodeGenerator* $tmp558 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(240, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                            org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp558, outFile260);
                            $tmp557 = $tmp558;
                            $tmp556 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp557);
                            cg522 = $tmp556;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp556));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp555));
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp559, false);
                        if ($tmp559.value) goto $l560; else goto $l561;
                        $l561:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s562, (panda$core$Int64) { 258 });
                        abort();
                        $l560:;
                    }
                    }
                    }
                    }
                }
                org$pandalanguage$pandac$Compiler$Settings* $tmp566 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
                org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp566, self->pandaHome, ((panda$collections$ListView*) imports256), optimizationLevel262, safetyLevel264);
                $tmp565 = $tmp566;
                $tmp564 = $tmp565;
                settings563 = $tmp564;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp564));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp565));
                panda$threads$MessageQueue* $tmp570 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
                panda$threads$MessageQueue$init($tmp570);
                $tmp569 = $tmp570;
                $tmp568 = $tmp569;
                errorQueue567 = $tmp568;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp568));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp569));
                org$pandalanguage$pandac$Compiler* $tmp574 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
                org$pandalanguage$pandac$Compiler$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp574, errorQueue567, cg522, settings563);
                $tmp573 = $tmp574;
                $tmp572 = $tmp573;
                compiler571 = $tmp572;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp572));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
                {
                    int $tmp577;
                    {
                        ITable* $tmp581 = ((panda$collections$Iterable*) sources252)->$class->itable;
                        while ($tmp581->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp581 = $tmp581->next;
                        }
                        $fn583 $tmp582 = $tmp581->methods[0];
                        panda$collections$Iterator* $tmp584 = $tmp582(((panda$collections$Iterable*) sources252));
                        $tmp580 = $tmp584;
                        $tmp579 = $tmp580;
                        Iter$263$13578 = $tmp579;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp579));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
                        $l585:;
                        ITable* $tmp588 = Iter$263$13578->$class->itable;
                        while ($tmp588->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp588 = $tmp588->next;
                        }
                        $fn590 $tmp589 = $tmp588->methods[0];
                        panda$core$Bit $tmp591 = $tmp589(Iter$263$13578);
                        panda$core$Bit $tmp592 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp591);
                        bool $tmp587 = $tmp592.value;
                        if (!$tmp587) goto $l586;
                        {
                            int $tmp595;
                            {
                                ITable* $tmp599 = Iter$263$13578->$class->itable;
                                while ($tmp599->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp599 = $tmp599->next;
                                }
                                $fn601 $tmp600 = $tmp599->methods[1];
                                panda$core$Object* $tmp602 = $tmp600(Iter$263$13578);
                                $tmp598 = $tmp602;
                                $tmp597 = ((panda$io$File*) $tmp598);
                                s596 = $tmp597;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp597));
                                panda$core$Panda$unref$panda$core$Object($tmp598);
                                {
                                    int $tmp605;
                                    {
                                        panda$collections$ListView* $tmp610 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler571, s596);
                                        $tmp609 = $tmp610;
                                        ITable* $tmp611 = ((panda$collections$Iterable*) $tmp609)->$class->itable;
                                        while ($tmp611->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp611 = $tmp611->next;
                                        }
                                        $fn613 $tmp612 = $tmp611->methods[0];
                                        panda$collections$Iterator* $tmp614 = $tmp612(((panda$collections$Iterable*) $tmp609));
                                        $tmp608 = $tmp614;
                                        $tmp607 = $tmp608;
                                        Iter$264$17606 = $tmp607;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp607));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp608));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp609));
                                        $l615:;
                                        ITable* $tmp618 = Iter$264$17606->$class->itable;
                                        while ($tmp618->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp618 = $tmp618->next;
                                        }
                                        $fn620 $tmp619 = $tmp618->methods[0];
                                        panda$core$Bit $tmp621 = $tmp619(Iter$264$17606);
                                        panda$core$Bit $tmp622 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp621);
                                        bool $tmp617 = $tmp622.value;
                                        if (!$tmp617) goto $l616;
                                        {
                                            int $tmp625;
                                            {
                                                ITable* $tmp629 = Iter$264$17606->$class->itable;
                                                while ($tmp629->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp629 = $tmp629->next;
                                                }
                                                $fn631 $tmp630 = $tmp629->methods[1];
                                                panda$core$Object* $tmp632 = $tmp630(Iter$264$17606);
                                                $tmp628 = $tmp632;
                                                $tmp627 = ((org$pandalanguage$pandac$ClassDecl*) $tmp628);
                                                cl626 = $tmp627;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp627));
                                                panda$core$Panda$unref$panda$core$Object($tmp628);
                                                org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler571, cl626);
                                            }
                                            $tmp625 = -1;
                                            goto $l623;
                                            $l623:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl626));
                                            cl626 = NULL;
                                            switch ($tmp625) {
                                                case -1: goto $l633;
                                            }
                                            $l633:;
                                        }
                                        goto $l615;
                                        $l616:;
                                    }
                                    $tmp605 = -1;
                                    goto $l603;
                                    $l603:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$264$17606));
                                    Iter$264$17606 = NULL;
                                    switch ($tmp605) {
                                        case -1: goto $l634;
                                    }
                                    $l634:;
                                }
                            }
                            $tmp595 = -1;
                            goto $l593;
                            $l593:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s596));
                            s596 = NULL;
                            switch ($tmp595) {
                                case -1: goto $l635;
                            }
                            $l635:;
                        }
                        goto $l585;
                        $l586:;
                    }
                    $tmp577 = -1;
                    goto $l575;
                    $l575:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$263$13578));
                    Iter$263$13578 = NULL;
                    switch ($tmp577) {
                        case -1: goto $l636;
                    }
                    $l636:;
                }
                {
                    int $tmp639;
                    {
                        ITable* $tmp643 = ((panda$collections$Iterable*) sources252)->$class->itable;
                        while ($tmp643->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp643 = $tmp643->next;
                        }
                        $fn645 $tmp644 = $tmp643->methods[0];
                        panda$collections$Iterator* $tmp646 = $tmp644(((panda$collections$Iterable*) sources252));
                        $tmp642 = $tmp646;
                        $tmp641 = $tmp642;
                        Iter$268$13640 = $tmp641;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp641));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp642));
                        $l647:;
                        ITable* $tmp650 = Iter$268$13640->$class->itable;
                        while ($tmp650->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp650 = $tmp650->next;
                        }
                        $fn652 $tmp651 = $tmp650->methods[0];
                        panda$core$Bit $tmp653 = $tmp651(Iter$268$13640);
                        panda$core$Bit $tmp654 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp653);
                        bool $tmp649 = $tmp654.value;
                        if (!$tmp649) goto $l648;
                        {
                            int $tmp657;
                            {
                                ITable* $tmp661 = Iter$268$13640->$class->itable;
                                while ($tmp661->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp661 = $tmp661->next;
                                }
                                $fn663 $tmp662 = $tmp661->methods[1];
                                panda$core$Object* $tmp664 = $tmp662(Iter$268$13640);
                                $tmp660 = $tmp664;
                                $tmp659 = ((panda$io$File*) $tmp660);
                                s658 = $tmp659;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp659));
                                panda$core$Panda$unref$panda$core$Object($tmp660);
                                org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler571, s658);
                            }
                            $tmp657 = -1;
                            goto $l655;
                            $l655:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s658));
                            s658 = NULL;
                            switch ($tmp657) {
                                case -1: goto $l665;
                            }
                            $l665:;
                        }
                        goto $l647;
                        $l648:;
                    }
                    $tmp639 = -1;
                    goto $l637;
                    $l637:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$268$13640));
                    Iter$268$13640 = NULL;
                    switch ($tmp639) {
                        case -1: goto $l666;
                    }
                    $l666:;
                }
                org$pandalanguage$pandac$Compiler$finish(compiler571);
                panda$core$Int64 $tmp667 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(errorQueue567);
                errorCount518 = $tmp667;
                panda$core$Int64$init$builtin_int64(&$tmp669, 0);
                panda$core$Bit$init$builtin_bit(&$tmp670, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp668, $tmp669, errorCount518, $tmp670);
                int64_t $tmp672 = $tmp668.min.value;
                panda$core$Int64 i671 = { $tmp672 };
                int64_t $tmp674 = $tmp668.max.value;
                bool $tmp675 = $tmp668.inclusive.value;
                if ($tmp675) goto $l682; else goto $l683;
                $l682:;
                if ($tmp672 <= $tmp674) goto $l676; else goto $l678;
                $l683:;
                if ($tmp672 < $tmp674) goto $l676; else goto $l678;
                $l676:;
                {
                    int $tmp686;
                    {
                        panda$core$Immutable* $tmp690 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(errorQueue567);
                        $tmp689 = $tmp690;
                        $tmp688 = ((org$pandalanguage$pandac$Compiler$Error*) $tmp689);
                        error687 = $tmp688;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp688));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp689));
                        panda$core$String* $tmp698 = panda$io$File$name$R$panda$core$String(error687->file);
                        $tmp697 = $tmp698;
                        panda$core$String* $tmp699 = panda$core$String$convert$R$panda$core$String($tmp697);
                        $tmp696 = $tmp699;
                        panda$core$String* $tmp701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp696, &$s700);
                        $tmp695 = $tmp701;
                        org$pandalanguage$pandac$Position$wrapper* $tmp703;
                        $tmp703 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                        $tmp703->value = error687->position;
                        $tmp702 = ((panda$core$Object*) $tmp703);
                        panda$core$String* $tmp704 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp695, $tmp702);
                        $tmp694 = $tmp704;
                        panda$core$String* $tmp706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp694, &$s705);
                        $tmp693 = $tmp706;
                        panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp693, error687->message);
                        $tmp692 = $tmp707;
                        panda$core$String* $tmp709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp692, &$s708);
                        $tmp691 = $tmp709;
                        panda$io$Console$printLine$panda$core$String($tmp691);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp691));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp692));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp693));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp694));
                        panda$core$Panda$unref$panda$core$Object($tmp702);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp695));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp696));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp697));
                    }
                    $tmp686 = -1;
                    goto $l684;
                    $l684:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) error687));
                    error687 = NULL;
                    switch ($tmp686) {
                        case -1: goto $l710;
                    }
                    $l710:;
                }
                $l679:;
                int64_t $tmp712 = $tmp674 - i671.value;
                if ($tmp675) goto $l713; else goto $l714;
                $l713:;
                if ((uint64_t) $tmp712 >= 1) goto $l711; else goto $l678;
                $l714:;
                if ((uint64_t) $tmp712 > 1) goto $l711; else goto $l678;
                $l711:;
                i671.value += 1;
                goto $l676;
                $l678:;
            }
            $tmp521 = -1;
            goto $l519;
            $l519:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler571));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) errorQueue567));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings563));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg522));
            settings563 = NULL;
            errorQueue567 = NULL;
            compiler571 = NULL;
            switch ($tmp521) {
                case -1: goto $l717;
            }
            $l717:;
        }
        panda$core$Int64$init$builtin_int64(&$tmp718, 0);
        panda$core$Bit $tmp719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount518, $tmp718);
        if ($tmp719.value) {
        {
            {
                $match$280_17720 = format266;
                panda$core$Int64$init$builtin_int64(&$tmp721, 918);
                panda$core$Bit $tmp722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$280_17720.value), $tmp721);
                if ($tmp722.value) {
                {
                    int $tmp725;
                    {
                        panda$io$File* $tmp731 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile260, &$s730);
                        $tmp729 = $tmp731;
                        panda$io$File* $tmp732 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp729, optimizationLevel262);
                        $tmp728 = $tmp732;
                        $tmp727 = $tmp728;
                        optimized726 = $tmp727;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp727));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp728));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp729));
                        panda$io$File* $tmp736 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized726);
                        $tmp735 = $tmp736;
                        $tmp734 = $tmp735;
                        assembly733 = $tmp734;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp734));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp735));
                        panda$io$File* $tmp738 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly733, outFile260);
                        $tmp737 = $tmp738;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp737));
                    }
                    $tmp725 = -1;
                    goto $l723;
                    $l723:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly733));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized726));
                    optimized726 = NULL;
                    assembly733 = NULL;
                    switch ($tmp725) {
                        case -1: goto $l739;
                    }
                    $l739:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp740, 919);
                panda$core$Bit $tmp741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$280_17720.value), $tmp740);
                if ($tmp741.value) {
                {
                    int $tmp744;
                    {
                        panda$io$File* $tmp750 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile260, &$s749);
                        $tmp748 = $tmp750;
                        panda$io$File* $tmp751 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp748, optimizationLevel262);
                        $tmp747 = $tmp751;
                        $tmp746 = $tmp747;
                        optimized745 = $tmp746;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp746));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp747));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp748));
                        panda$io$File* $tmp755 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized745);
                        $tmp754 = $tmp755;
                        $tmp753 = $tmp754;
                        assembly752 = $tmp753;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp753));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp754));
                        panda$io$File* $tmp757 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly752, outFile260);
                        $tmp756 = $tmp757;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp756));
                    }
                    $tmp744 = -1;
                    goto $l742;
                    $l742:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly752));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized745));
                    optimized745 = NULL;
                    assembly752 = NULL;
                    switch ($tmp744) {
                        case -1: goto $l758;
                    }
                    $l758:;
                }
                }
                }
            }
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp759, 1);
            panda$core$Bit $tmp760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount518, $tmp759);
            if ($tmp760.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s761);
            }
            }
            else {
            {
                panda$core$String* $tmp764 = panda$core$Int64$convert$R$panda$core$String(errorCount518);
                $tmp763 = $tmp764;
                panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp763, &$s765);
                $tmp762 = $tmp766;
                panda$io$Console$printLine$panda$core$String($tmp762);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp762));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp763));
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp767, 1);
            panda$core$System$exit$panda$core$Int64($tmp767);
        }
        }
    }
    $tmp247 = -1;
    goto $l245;
    $l245:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) llvmDir442));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err267));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile260));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports256));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources252));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args248));
    args248 = NULL;
    sources252 = NULL;
    imports256 = NULL;
    err267 = NULL;
    llvmDir442 = NULL;
    switch ($tmp247) {
        case -1: goto $l768;
    }
    $l768:;
}
panda$core$Bit org$pandalanguage$pandac$Main$containsError$panda$core$String$R$panda$core$Bit(panda$core$String* p_s) {
    panda$core$Bit $returnValue769;
    panda$core$Bit $tmp771 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_s, &$s770);
    $returnValue769 = $tmp771;
    return $returnValue769;
}
void pandaMain(panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$Main* $tmp773;
    org$pandalanguage$pandac$Main* $tmp774 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
    org$pandalanguage$pandac$Main$init($tmp774);
    $tmp773 = $tmp774;
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp773, p_args);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp773));
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    int $tmp777;
    {
    }
    $tmp777 = -1;
    goto $l775;
    $l775:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp777) {
        case -1: goto $l778;
    }
    $l778:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

