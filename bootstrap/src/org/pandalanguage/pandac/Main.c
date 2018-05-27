#include "org/pandalanguage/pandac/Main.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/io/File.h"
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

typedef panda$core$String* (*$fn48)(panda$io$InputStream*);
typedef void (*$fn50)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn78)(panda$io$InputStream*);
typedef void (*$fn80)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn106)(panda$io$InputStream*);
typedef void (*$fn108)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn112)(panda$io$InputStream*);
typedef void (*$fn114)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn146)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn153)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn164)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn201)(panda$io$InputStream*);
typedef void (*$fn203)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn207)(panda$io$InputStream*);
typedef void (*$fn209)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn218)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn219)(panda$io$OutputStream*);
typedef void (*$fn221)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn222)(panda$io$OutputStream*);
typedef void (*$fn224)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn226)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn254)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn263)(org$pandalanguage$pandac$Main$Arguments*);
typedef void (*$fn273)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn280)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn293)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn304)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn315)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn326)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn334)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn339)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn362)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn371)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn381)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn389)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn406)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn427)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn466)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn521)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn528)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn539)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn551)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn558)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn569)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn585)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn592)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn603)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e", 29, -3248623696873689241, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x35\x2e\x30", 27, -855196788127931458, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78\x38\x36\x5f\x36\x34\x2d\x61\x70\x70\x6c\x65\x2d\x64\x61\x72\x77\x69\x6e\x31\x37\x2e\x33\x2e\x30", 25, 2390944900235185536, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f\x70\x74", 4, 152597986, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x69\x6e\x74", 5, 15305173385, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73", 2, 14962, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x72\x65\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x6d\x6f\x64\x65\x6c\x3d\x70\x69\x63", 21, 7895568360759315925, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c\x2e", 3, 1497068, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x2f\x6c\x69\x62\x69\x63\x75\x75\x63\x2e\x61\x3b\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x2f\x6c\x69\x62\x69\x63\x75\x69\x31\x38\x6e\x2e\x64\x79\x6c\x69\x62", 57, -9070932862195135721, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x6c\x6c\x76\x6d\x5f\x64\x69\x72", 10, -5843666376324264096, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x74\x68\x65\x20\x4c\x4c\x56\x4d\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 28, -1635669018571610865, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x74\x72\x69\x70\x6c\x65", 8, 15702175691418347, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4c\x56\x4d\x20\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6c\x65", 18, -7134459153622240993, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20", 64, 3394507457011302119, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x6c\x65", 4, 210233217, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };

void org$pandalanguage$pandac$Main$init(org$pandalanguage$pandac$Main* self) {
    panda$io$File* $tmp2;
    panda$io$File* $tmp3;
    panda$core$String* $tmp6;
    panda$io$File* $tmp8;
    panda$io$File* $tmp9;
    panda$io$File* $tmp10;
    self->llvmDir = NULL;
    self->triple = NULL;
    self->opt = NULL;
    self->llc = NULL;
    self->gcc = NULL;
    self->pandaHome = NULL;
    panda$io$File* $tmp4 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
    panda$io$File$init$panda$core$String($tmp4, &$s5);
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->llvmDir = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    $tmp6 = &$s7;
    self->triple = $tmp6;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
    {
        $tmp8 = self->pandaHome;
        panda$io$File* $tmp11 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp11, &$s12);
        $tmp10 = $tmp11;
        $tmp9 = $tmp10;
        self->pandaHome = $tmp9;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    }
}
panda$io$File* org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm, panda$core$Int64 p_level) {
    panda$io$File* $returnValue17;
    panda$io$File* $tmp18;
    panda$io$File* dest21 = NULL;
    panda$io$File* $tmp22;
    panda$io$File* $tmp23;
    panda$collections$Array* args26 = NULL;
    panda$collections$Array* $tmp27;
    panda$collections$Array* $tmp28;
    panda$core$String* $tmp31;
    panda$core$String* $tmp32;
    panda$core$Object* $tmp34;
    panda$core$System$Process* p41 = NULL;
    panda$core$System$Process* $tmp42;
    panda$core$System$Process* $tmp43;
    panda$io$OutputStream* $tmp45;
    panda$core$String* $tmp47;
    panda$core$Int64 $tmp51;
    panda$io$File* $tmp53;
    int $tmp15;
    {
        panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_level, ((panda$core$Int64) { 0 }));
        if ($tmp16.value) {
        {
            $tmp18 = p_llvm;
            $returnValue17 = $tmp18;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
            $tmp15 = 0;
            goto $l13;
            $l19:;
            return $returnValue17;
        }
        }
        panda$io$File* $tmp25 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s24);
        $tmp23 = $tmp25;
        $tmp22 = $tmp23;
        dest21 = $tmp22;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
        panda$collections$Array* $tmp29 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp29);
        $tmp28 = $tmp29;
        $tmp27 = $tmp28;
        args26 = $tmp27;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp27));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$collections$Array$add$panda$collections$Array$T(args26, ((panda$core$Object*) &$s30));
        panda$core$Int64$wrapper* $tmp35;
        $tmp35 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp35->value = p_level;
        $tmp34 = ((panda$core$Object*) $tmp35);
        panda$core$String* $tmp36 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s33, $tmp34);
        $tmp32 = $tmp36;
        panda$core$String* $tmp38 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp32, &$s37);
        $tmp31 = $tmp38;
        panda$collections$Array$add$panda$collections$Array$T(args26, ((panda$core$Object*) $tmp31));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
        panda$core$Panda$unref$panda$core$Object($tmp34);
        panda$collections$Array$add$panda$collections$Array$T(args26, ((panda$core$Object*) &$s39));
        panda$collections$Array$add$panda$collections$Array$T(args26, ((panda$core$Object*) p_llvm->path));
        panda$collections$Array$add$panda$collections$Array$T(args26, ((panda$core$Object*) &$s40));
        panda$collections$Array$add$panda$collections$Array$T(args26, ((panda$core$Object*) dest21->path));
        panda$core$System$Process* $tmp44 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->opt, ((panda$collections$ListView*) args26));
        $tmp43 = $tmp44;
        $tmp42 = $tmp43;
        p41 = $tmp42;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
        panda$io$OutputStream* $tmp46 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp45 = $tmp46;
        panda$core$String* $tmp49 = (($fn48) p41->error->$class->vtable[6])(p41->error);
        $tmp47 = $tmp49;
        (($fn50) $tmp45->$class->vtable[16])($tmp45, $tmp47);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp51, p41);
        panda$core$Bit $tmp52 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp51, ((panda$core$Int64) { 0 }));
        if ($tmp52.value) {
        {
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        $tmp53 = dest21;
        $returnValue17 = $tmp53;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
        $tmp15 = 1;
        goto $l13;
        $l54:;
        return $returnValue17;
    }
    $l13:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest21));
    dest21 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args26));
    args26 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p41));
    p41 = NULL;
    switch ($tmp15) {
        case 1: goto $l54;
        case 0: goto $l19;
    }
    $l56:;
}
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm) {
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
    panda$core$Int64 $tmp81;
    panda$io$File* $returnValue83;
    panda$io$File* $tmp84;
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
        panda$core$String* $tmp79 = (($fn78) p71->error->$class->vtable[6])(p71->error);
        $tmp77 = $tmp79;
        (($fn80) $tmp75->$class->vtable[16])($tmp75, $tmp77);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp77));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp81, p71);
        panda$core$Bit $tmp82 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp81, ((panda$core$Int64) { 0 }));
        if ($tmp82.value) {
        {
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        $tmp84 = dest60;
        $returnValue83 = $tmp84;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp84));
        $tmp59 = 0;
        goto $l57;
        $l85:;
        return $returnValue83;
    }
    $l57:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest60));
    dest60 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args65));
    args65 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p71));
    p71 = NULL;
    switch ($tmp59) {
        case 0: goto $l85;
    }
    $l87:;
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
    panda$io$File* $returnValue117;
    panda$io$File* $tmp118;
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
        (($fn108) $tmp103->$class->vtable[16])($tmp103, $tmp105);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
        panda$io$OutputStream* $tmp110 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp109 = $tmp110;
        panda$core$String* $tmp113 = (($fn112) p99->error->$class->vtable[6])(p99->error);
        $tmp111 = $tmp113;
        (($fn114) $tmp109->$class->vtable[16])($tmp109, $tmp111);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp111));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp109));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp115, p99);
        panda$core$Bit $tmp116 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp115, ((panda$core$Int64) { 0 }));
        if ($tmp116.value) {
        {
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        $tmp118 = p_dest;
        $returnValue117 = $tmp118;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp118));
        $tmp90 = 0;
        goto $l88;
        $l119:;
        return $returnValue117;
    }
    $l88:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args91));
    args91 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p99));
    p99 = NULL;
    switch ($tmp90) {
        case 0: goto $l119;
    }
    $l121:;
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args125 = NULL;
    panda$collections$Array* $tmp126;
    panda$collections$Array* $tmp127;
    panda$collections$Array* icuLibs132 = NULL;
    panda$collections$Array* $tmp133;
    panda$collections$Array* $tmp134;
    panda$collections$Iterator* Iter$119$9141 = NULL;
    panda$collections$Iterator* $tmp142;
    panda$collections$Iterator* $tmp143;
    panda$core$String* lib159 = NULL;
    panda$core$String* $tmp160;
    panda$core$Object* $tmp161;
    panda$io$File* libFile166 = NULL;
    panda$io$File* $tmp167;
    panda$io$File* $tmp168;
    panda$core$String* $tmp170;
    panda$io$File* $tmp172;
    panda$core$String* simpleName175 = NULL;
    panda$core$String* $tmp176;
    panda$core$String* $tmp177;
    panda$core$String* $tmp181;
    panda$core$String* $tmp182;
    panda$core$String* $tmp183;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp184;
    panda$core$String* $tmp186;
    panda$core$System$Process* p194 = NULL;
    panda$core$System$Process* $tmp195;
    panda$core$System$Process* $tmp196;
    panda$io$OutputStream* $tmp198;
    panda$core$String* $tmp200;
    panda$io$OutputStream* $tmp204;
    panda$core$String* $tmp206;
    panda$core$Int64 $tmp210;
    panda$io$File* $returnValue212;
    panda$io$File* $tmp213;
    int $tmp124;
    {
        panda$collections$Array* $tmp128 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp128);
        $tmp127 = $tmp128;
        $tmp126 = $tmp127;
        args125 = $tmp126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) p_assembly->path));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) &$s129));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) &$s130));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) &$s131));
        panda$collections$Array* $tmp137 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(&$s135, &$s136);
        $tmp134 = $tmp137;
        $tmp133 = $tmp134;
        icuLibs132 = $tmp133;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp133));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
        {
            int $tmp140;
            {
                ITable* $tmp144 = ((panda$collections$Iterable*) icuLibs132)->$class->itable;
                while ($tmp144->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp144 = $tmp144->next;
                }
                $fn146 $tmp145 = $tmp144->methods[0];
                panda$collections$Iterator* $tmp147 = $tmp145(((panda$collections$Iterable*) icuLibs132));
                $tmp143 = $tmp147;
                $tmp142 = $tmp143;
                Iter$119$9141 = $tmp142;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp142));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp143));
                $l148:;
                ITable* $tmp151 = Iter$119$9141->$class->itable;
                while ($tmp151->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp151 = $tmp151->next;
                }
                $fn153 $tmp152 = $tmp151->methods[0];
                panda$core$Bit $tmp154 = $tmp152(Iter$119$9141);
                panda$core$Bit $tmp155 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp154);
                bool $tmp150 = $tmp155.value;
                if (!$tmp150) goto $l149;
                {
                    int $tmp158;
                    {
                        ITable* $tmp162 = Iter$119$9141->$class->itable;
                        while ($tmp162->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp162 = $tmp162->next;
                        }
                        $fn164 $tmp163 = $tmp162->methods[1];
                        panda$core$Object* $tmp165 = $tmp163(Iter$119$9141);
                        $tmp161 = $tmp165;
                        $tmp160 = ((panda$core$String*) $tmp161);
                        lib159 = $tmp160;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp160));
                        panda$core$Panda$unref$panda$core$Object($tmp161);
                        panda$io$File* $tmp169 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$io$File$init$panda$core$String($tmp169, lib159);
                        $tmp168 = $tmp169;
                        $tmp167 = $tmp168;
                        libFile166 = $tmp167;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp167));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
                        panda$io$File* $tmp173 = panda$io$File$parent$R$panda$io$File$Q(libFile166);
                        $tmp172 = $tmp173;
                        panda$core$String* $tmp174 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s171, ((panda$core$Object*) $tmp172));
                        $tmp170 = $tmp174;
                        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) $tmp170));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp172));
                        panda$core$String* $tmp178 = panda$io$File$simpleName$R$panda$core$String(libFile166);
                        $tmp177 = $tmp178;
                        $tmp176 = $tmp177;
                        simpleName175 = $tmp176;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp176));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
                        panda$core$Bit $tmp180 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(simpleName175, &$s179);
                        PANDA_ASSERT($tmp180.value);
                        {
                            $tmp181 = simpleName175;
                            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp184, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 3 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                            panda$core$String* $tmp185 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(simpleName175, $tmp184);
                            $tmp183 = $tmp185;
                            $tmp182 = $tmp183;
                            simpleName175 = $tmp182;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp182));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp183));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
                        }
                        panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s187, simpleName175);
                        $tmp186 = $tmp188;
                        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) $tmp186));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
                    }
                    $tmp158 = -1;
                    goto $l156;
                    $l156:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) lib159));
                    lib159 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) libFile166));
                    libFile166 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) simpleName175));
                    simpleName175 = NULL;
                    switch ($tmp158) {
                        case -1: goto $l189;
                    }
                    $l189:;
                }
                goto $l148;
                $l149:;
            }
            $tmp140 = -1;
            goto $l138;
            $l138:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$119$9141));
            Iter$119$9141 = NULL;
            switch ($tmp140) {
                case -1: goto $l190;
            }
            $l190:;
        }
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) &$s191));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) &$s192));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) &$s193));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) p_dest->path));
        panda$core$System$Process* $tmp197 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args125));
        $tmp196 = $tmp197;
        $tmp195 = $tmp196;
        p194 = $tmp195;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp195));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
        panda$io$OutputStream* $tmp199 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp198 = $tmp199;
        panda$core$String* $tmp202 = (($fn201) p194->output->$class->vtable[6])(p194->output);
        $tmp200 = $tmp202;
        (($fn203) $tmp198->$class->vtable[16])($tmp198, $tmp200);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
        panda$io$OutputStream* $tmp205 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp204 = $tmp205;
        panda$core$String* $tmp208 = (($fn207) p194->error->$class->vtable[6])(p194->error);
        $tmp206 = $tmp208;
        (($fn209) $tmp204->$class->vtable[16])($tmp204, $tmp206);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp204));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp210, p194);
        panda$core$Bit $tmp211 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp210, ((panda$core$Int64) { 0 }));
        if ($tmp211.value) {
        {
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        $tmp213 = p_dest;
        $returnValue212 = $tmp213;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp213));
        $tmp124 = 0;
        goto $l122;
        $l214:;
        return $returnValue212;
    }
    $l122:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args125));
    args125 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) icuLibs132));
    icuLibs132 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p194));
    p194 = NULL;
    switch ($tmp124) {
        case 0: goto $l214;
    }
    $l216:;
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn218) p_out->$class->vtable[19])(p_out, &$s217);
    (($fn219) p_out->$class->vtable[17])(p_out);
    (($fn221) p_out->$class->vtable[19])(p_out, &$s220);
    (($fn222) p_out->$class->vtable[17])(p_out);
    (($fn224) p_out->$class->vtable[19])(p_out, &$s223);
    (($fn226) p_out->$class->vtable[19])(p_out, &$s225);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args230 = NULL;
    org$pandalanguage$pandac$Main$Arguments* $tmp231;
    org$pandalanguage$pandac$Main$Arguments* $tmp232;
    panda$collections$Array* sources234 = NULL;
    panda$collections$Array* $tmp235;
    panda$collections$Array* $tmp236;
    panda$collections$Array* imports238 = NULL;
    panda$collections$Array* $tmp239;
    panda$collections$Array* $tmp240;
    panda$io$File* outFile242 = NULL;
    panda$io$File* $tmp243;
    panda$core$Int64 optimizationLevel244;
    panda$core$Int64 safetyLevel245;
    panda$core$Int64$nullable format246;
    panda$io$OutputStream* err247 = NULL;
    panda$io$OutputStream* $tmp248;
    panda$io$OutputStream* $tmp249;
    panda$core$String* a260 = NULL;
    panda$core$String* $tmp261;
    panda$core$String* $tmp262;
    panda$core$String* $match$161_13268 = NULL;
    panda$core$String* $tmp269;
    panda$io$File* $tmp274;
    panda$io$File* $tmp275;
    panda$io$File* $tmp276;
    panda$core$String* $tmp278;
    panda$io$File* $tmp282;
    panda$core$String* level289 = NULL;
    panda$core$String* $tmp290;
    panda$core$String* $tmp291;
    panda$io$OutputStream* $tmp301;
    panda$core$String* level311 = NULL;
    panda$core$String* $tmp312;
    panda$core$String* $tmp313;
    panda$io$OutputStream* $tmp323;
    panda$core$String* f335 = NULL;
    panda$core$String* $tmp336;
    panda$core$String* $tmp337;
    panda$core$String* $match$189_21344 = NULL;
    panda$core$String* $tmp345;
    panda$core$String* $tmp356;
    panda$core$String* $tmp357;
    panda$io$File* $tmp367;
    panda$core$String* $tmp369;
    panda$io$File* $tmp375;
    panda$io$File* $tmp376;
    panda$io$File* $tmp377;
    panda$core$String* $tmp379;
    panda$core$String* $tmp385;
    panda$core$String* $tmp386;
    panda$core$String* $tmp387;
    panda$core$String* $tmp394;
    panda$io$File* $tmp398;
    panda$core$String* $tmp400;
    panda$core$String* $tmp401;
    panda$io$File* $tmp409;
    panda$io$File* $tmp410;
    panda$io$File* $tmp411;
    panda$io$File* $tmp414;
    panda$io$File* $tmp415;
    panda$io$File* $tmp416;
    panda$io$File* $tmp419;
    panda$io$File* $tmp420;
    panda$io$File* $tmp421;
    panda$core$String* extension433 = NULL;
    panda$core$Int64$nullable $match$232_21434;
    panda$core$String* $tmp436;
    panda$core$String* $tmp437;
    panda$core$String* $tmp440;
    panda$core$String* $tmp441;
    panda$core$String* $tmp444;
    panda$core$String* $tmp445;
    panda$core$String* $tmp448;
    panda$core$String* $tmp449;
    panda$core$String* $tmp452;
    panda$core$String* $tmp453;
    panda$io$File* $tmp455;
    panda$io$File* $tmp456;
    panda$io$File* $tmp457;
    panda$core$Object* $tmp458;
    panda$core$String* $tmp462;
    panda$core$Int64 errorCount467;
    org$pandalanguage$pandac$CodeGenerator* cg471 = NULL;
    panda$core$Int64$nullable $match$251_17472;
    org$pandalanguage$pandac$CodeGenerator* $tmp482;
    org$pandalanguage$pandac$CodeGenerator* $tmp483;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp484;
    panda$io$OutputStream* $tmp486;
    panda$io$File* $tmp487;
    org$pandalanguage$pandac$CodeGenerator* $tmp492;
    org$pandalanguage$pandac$CodeGenerator* $tmp493;
    org$pandalanguage$pandac$HCodeGenerator* $tmp494;
    org$pandalanguage$pandac$CodeGenerator* $tmp497;
    org$pandalanguage$pandac$CodeGenerator* $tmp498;
    org$pandalanguage$pandac$CCodeGenerator* $tmp499;
    org$pandalanguage$pandac$Compiler$Settings* settings501 = NULL;
    org$pandalanguage$pandac$Compiler$Settings* $tmp502;
    org$pandalanguage$pandac$Compiler$Settings* $tmp503;
    panda$threads$MessageQueue* errorQueue505 = NULL;
    panda$threads$MessageQueue* $tmp506;
    panda$threads$MessageQueue* $tmp507;
    org$pandalanguage$pandac$Compiler* compiler509 = NULL;
    org$pandalanguage$pandac$Compiler* $tmp510;
    org$pandalanguage$pandac$Compiler* $tmp511;
    panda$collections$Iterator* Iter$264$13516 = NULL;
    panda$collections$Iterator* $tmp517;
    panda$collections$Iterator* $tmp518;
    panda$io$File* s534 = NULL;
    panda$io$File* $tmp535;
    panda$core$Object* $tmp536;
    panda$collections$Iterator* Iter$265$17544 = NULL;
    panda$collections$Iterator* $tmp545;
    panda$collections$Iterator* $tmp546;
    panda$collections$ListView* $tmp547;
    org$pandalanguage$pandac$ClassDecl* cl564 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp565;
    panda$core$Object* $tmp566;
    panda$collections$Iterator* Iter$270$17580 = NULL;
    panda$collections$Iterator* $tmp581;
    panda$collections$Iterator* $tmp582;
    panda$io$File* s598 = NULL;
    panda$io$File* $tmp599;
    panda$core$Object* $tmp600;
    panda$core$Range$LTpanda$core$Int64$GT $tmp608;
    org$pandalanguage$pandac$Compiler$Error* error625 = NULL;
    org$pandalanguage$pandac$Compiler$Error* $tmp626;
    panda$core$Immutable* $tmp627;
    panda$core$String* $tmp629;
    panda$core$String* $tmp630;
    panda$core$String* $tmp631;
    panda$core$String* $tmp632;
    panda$core$String* $tmp633;
    panda$core$String* $tmp634;
    panda$core$String* $tmp635;
    panda$core$Object* $tmp640;
    panda$core$Int64$nullable $match$283_17657;
    panda$io$File* optimized662 = NULL;
    panda$io$File* $tmp663;
    panda$io$File* $tmp664;
    panda$io$File* $tmp665;
    panda$io$File* assembly669 = NULL;
    panda$io$File* $tmp670;
    panda$io$File* $tmp671;
    panda$io$File* $tmp673;
    panda$io$File* optimized680 = NULL;
    panda$io$File* $tmp681;
    panda$io$File* $tmp682;
    panda$io$File* $tmp683;
    panda$io$File* assembly687 = NULL;
    panda$io$File* $tmp688;
    panda$io$File* $tmp689;
    panda$io$File* $tmp691;
    panda$core$String* $tmp696;
    panda$core$String* $tmp697;
    int $tmp229;
    {
        org$pandalanguage$pandac$Main$Arguments* $tmp233 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
        org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp233, p_rawArgs);
        $tmp232 = $tmp233;
        $tmp231 = $tmp232;
        args230 = $tmp231;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp231));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp232));
        panda$collections$Array* $tmp237 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp237);
        $tmp236 = $tmp237;
        $tmp235 = $tmp236;
        sources234 = $tmp235;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp235));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp236));
        panda$collections$Array* $tmp241 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp241);
        $tmp240 = $tmp241;
        $tmp239 = $tmp240;
        imports238 = $tmp239;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp239));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp240));
        panda$collections$Array$add$panda$collections$Array$T(imports238, ((panda$core$Object*) self->pandaHome));
        $tmp243 = NULL;
        outFile242 = $tmp243;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp243));
        optimizationLevel244 = ((panda$core$Int64) { 3 });
        safetyLevel245 = ((panda$core$Int64) { 3 });
        format246 = ((panda$core$Int64$nullable) { .nonnull = false });
        panda$io$OutputStream* $tmp250 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp249 = $tmp250;
        $tmp248 = $tmp249;
        err247 = $tmp248;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp248));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
        $l251:;
        panda$core$Bit $tmp255 = (($fn254) args230->$class->vtable[2])(args230);
        panda$core$Bit $tmp256 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp255);
        bool $tmp253 = $tmp256.value;
        if (!$tmp253) goto $l252;
        {
            int $tmp259;
            {
                panda$core$String* $tmp264 = (($fn263) args230->$class->vtable[3])(args230);
                $tmp262 = $tmp264;
                $tmp261 = $tmp262;
                a260 = $tmp261;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp261));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp262));
                int $tmp267;
                {
                    $tmp269 = a260;
                    $match$161_13268 = $tmp269;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp269));
                    panda$core$Bit $tmp271 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13268, &$s270);
                    if ($tmp271.value) {
                    {
                        if (((panda$core$Bit) { outFile242 != NULL }).value) {
                        {
                            (($fn273) err247->$class->vtable[19])(err247, &$s272);
                            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                        }
                        }
                        {
                            $tmp274 = outFile242;
                            panda$io$File* $tmp277 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp281 = (($fn280) args230->$class->vtable[4])(args230, &$s279);
                            $tmp278 = $tmp281;
                            panda$io$File$init$panda$core$String($tmp277, $tmp278);
                            $tmp276 = $tmp277;
                            $tmp275 = $tmp276;
                            outFile242 = $tmp275;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp275));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp276));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp278));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp274));
                        }
                        panda$io$File* $tmp283 = panda$io$File$parent$R$panda$io$File$Q(outFile242);
                        $tmp282 = $tmp283;
                        panda$io$File$createDirectories($tmp282);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp282));
                    }
                    }
                    else {
                    panda$core$Bit $tmp285 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13268, &$s284);
                    if ($tmp285.value) {
                    {
                        int $tmp288;
                        {
                            panda$core$String* $tmp294 = (($fn293) args230->$class->vtable[4])(args230, &$s292);
                            $tmp291 = $tmp294;
                            $tmp290 = $tmp291;
                            level289 = $tmp290;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp290));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp291));
                            panda$core$Int64$nullable $tmp295 = panda$core$String$convert$R$panda$core$Int64$Q(level289);
                            optimizationLevel244 = ((panda$core$Int64) $tmp295.value);
                            panda$core$Bit $tmp297 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel244, ((panda$core$Int64) { 3 }));
                            bool $tmp296 = $tmp297.value;
                            if ($tmp296) goto $l298;
                            panda$core$Bit $tmp299 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel244, ((panda$core$Int64) { 0 }));
                            $tmp296 = $tmp299.value;
                            $l298:;
                            panda$core$Bit $tmp300 = { $tmp296 };
                            if ($tmp300.value) {
                            {
                                panda$io$OutputStream* $tmp302 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp301 = $tmp302;
                                (($fn304) $tmp301->$class->vtable[19])($tmp301, &$s303);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301));
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                        }
                        $tmp288 = -1;
                        goto $l286;
                        $l286:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level289));
                        level289 = NULL;
                        switch ($tmp288) {
                            case -1: goto $l305;
                        }
                        $l305:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp307 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13268, &$s306);
                    if ($tmp307.value) {
                    {
                        int $tmp310;
                        {
                            panda$core$String* $tmp316 = (($fn315) args230->$class->vtable[4])(args230, &$s314);
                            $tmp313 = $tmp316;
                            $tmp312 = $tmp313;
                            level311 = $tmp312;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
                            panda$core$Int64$nullable $tmp317 = panda$core$String$convert$R$panda$core$Int64$Q(level311);
                            safetyLevel245 = ((panda$core$Int64) $tmp317.value);
                            panda$core$Bit $tmp319 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel245, ((panda$core$Int64) { 3 }));
                            bool $tmp318 = $tmp319.value;
                            if ($tmp318) goto $l320;
                            panda$core$Bit $tmp321 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel245, ((panda$core$Int64) { 0 }));
                            $tmp318 = $tmp321.value;
                            $l320:;
                            panda$core$Bit $tmp322 = { $tmp318 };
                            if ($tmp322.value) {
                            {
                                panda$io$OutputStream* $tmp324 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp323 = $tmp324;
                                (($fn326) $tmp323->$class->vtable[19])($tmp323, &$s325);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp323));
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                        }
                        $tmp310 = -1;
                        goto $l308;
                        $l308:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level311));
                        level311 = NULL;
                        switch ($tmp310) {
                            case -1: goto $l327;
                        }
                        $l327:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp329 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13268, &$s328);
                    if ($tmp329.value) {
                    {
                        int $tmp332;
                        {
                            if (((panda$core$Bit) { format246.nonnull }).value) {
                            {
                                (($fn334) err247->$class->vtable[19])(err247, &$s333);
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                            panda$core$String* $tmp340 = (($fn339) args230->$class->vtable[4])(args230, &$s338);
                            $tmp337 = $tmp340;
                            $tmp336 = $tmp337;
                            f335 = $tmp336;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp336));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp337));
                            int $tmp343;
                            {
                                $tmp345 = f335;
                                $match$189_21344 = $tmp345;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp345));
                                panda$core$Bit $tmp347 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$189_21344, &$s346);
                                if ($tmp347.value) {
                                {
                                    format246 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp349 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$189_21344, &$s348);
                                if ($tmp349.value) {
                                {
                                    format246 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 919 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp351 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$189_21344, &$s350);
                                if ($tmp351.value) {
                                {
                                    format246 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 917 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp353 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$189_21344, &$s352);
                                if ($tmp353.value) {
                                {
                                    format246 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 920 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp355 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$189_21344, &$s354);
                                if ($tmp355.value) {
                                {
                                    format246 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 921 }), true });
                                }
                                }
                                else {
                                {
                                    panda$core$String* $tmp359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s358, f335);
                                    $tmp357 = $tmp359;
                                    panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp357, &$s360);
                                    $tmp356 = $tmp361;
                                    (($fn362) err247->$class->vtable[19])(err247, $tmp356);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp356));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp357));
                                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            $tmp343 = -1;
                            goto $l341;
                            $l341:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp345));
                            switch ($tmp343) {
                                case -1: goto $l363;
                            }
                            $l363:;
                        }
                        $tmp332 = -1;
                        goto $l330;
                        $l330:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f335));
                        f335 = NULL;
                        switch ($tmp332) {
                            case -1: goto $l364;
                        }
                        $l364:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp366 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13268, &$s365);
                    if ($tmp366.value) {
                    {
                        panda$io$File* $tmp368 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$core$String* $tmp372 = (($fn371) args230->$class->vtable[4])(args230, &$s370);
                        $tmp369 = $tmp372;
                        panda$io$File$init$panda$core$String($tmp368, $tmp369);
                        $tmp367 = $tmp368;
                        panda$collections$Array$add$panda$collections$Array$T(imports238, ((panda$core$Object*) $tmp367));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp369));
                    }
                    }
                    else {
                    panda$core$Bit $tmp374 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13268, &$s373);
                    if ($tmp374.value) {
                    {
                        {
                            $tmp375 = self->llvmDir;
                            panda$io$File* $tmp378 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp382 = (($fn381) args230->$class->vtable[4])(args230, &$s380);
                            $tmp379 = $tmp382;
                            panda$io$File$init$panda$core$String($tmp378, $tmp379);
                            $tmp377 = $tmp378;
                            $tmp376 = $tmp377;
                            self->llvmDir = $tmp376;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp376));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp375));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp384 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13268, &$s383);
                    if ($tmp384.value) {
                    {
                        {
                            $tmp385 = self->triple;
                            panda$core$String* $tmp390 = (($fn389) args230->$class->vtable[4])(args230, &$s388);
                            $tmp387 = $tmp390;
                            $tmp386 = $tmp387;
                            self->triple = $tmp386;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp385));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp392 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13268, &$s391);
                    if ($tmp392.value) {
                    {
                        panda$io$Console$printLine$panda$core$String(&$s393);
                        panda$core$String* $tmp395 = panda$io$Console$readLine$R$panda$core$String$Q();
                        $tmp394 = $tmp395;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp394));
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp397 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a260, &$s396);
                        if ($tmp397.value) {
                        {
                            panda$io$File* $tmp399 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp399, a260);
                            $tmp398 = $tmp399;
                            panda$collections$Array$add$panda$collections$Array$T(sources234, ((panda$core$Object*) $tmp398));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp398));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s402, a260);
                            $tmp401 = $tmp403;
                            panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp401, &$s404);
                            $tmp400 = $tmp405;
                            (($fn406) err247->$class->vtable[19])(err247, $tmp400);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp400));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp401));
                            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
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
                $tmp267 = -1;
                goto $l265;
                $l265:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp269));
                switch ($tmp267) {
                    case -1: goto $l407;
                }
                $l407:;
            }
            $tmp259 = -1;
            goto $l257;
            $l257:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a260));
            a260 = NULL;
            switch ($tmp259) {
                case -1: goto $l408;
            }
            $l408:;
        }
        goto $l251;
        $l252:;
        {
            $tmp409 = self->opt;
            panda$io$File* $tmp413 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s412);
            $tmp411 = $tmp413;
            $tmp410 = $tmp411;
            self->opt = $tmp410;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp410));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp411));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp409));
        }
        {
            $tmp414 = self->llc;
            panda$io$File* $tmp418 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s417);
            $tmp416 = $tmp418;
            $tmp415 = $tmp416;
            self->llc = $tmp415;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp415));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp414));
        }
        {
            $tmp419 = self->gcc;
            panda$io$File* $tmp422 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
            panda$io$File$init$panda$core$String($tmp422, &$s423);
            $tmp421 = $tmp422;
            $tmp420 = $tmp421;
            self->gcc = $tmp420;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp420));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp421));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
        }
        panda$core$Int64 $tmp424 = panda$collections$Array$get_count$R$panda$core$Int64(sources234);
        panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp424, ((panda$core$Int64) { 0 }));
        if ($tmp425.value) {
        {
            (($fn427) err247->$class->vtable[19])(err247, &$s426);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        if (((panda$core$Bit) { !format246.nonnull }).value) {
        {
            format246 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
        }
        }
        if (((panda$core$Bit) { outFile242 == NULL }).value) {
        {
            panda$core$Int64 $tmp428 = panda$collections$Array$get_count$R$panda$core$Int64(sources234);
            panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp428, ((panda$core$Int64) { 1 }));
            if ($tmp429.value) {
            {
                int $tmp432;
                {
                    memset(&extension433, 0, sizeof(extension433));
                    {
                        $match$232_21434 = format246;
                        panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$232_21434.value), ((panda$core$Int64) { 918 }));
                        if ($tmp435.value) {
                        {
                            {
                                $tmp436 = extension433;
                                $tmp437 = &$s438;
                                extension433 = $tmp437;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp437));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp436));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$232_21434.value), ((panda$core$Int64) { 919 }));
                        if ($tmp439.value) {
                        {
                            {
                                $tmp440 = extension433;
                                $tmp441 = &$s442;
                                extension433 = $tmp441;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp441));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$232_21434.value), ((panda$core$Int64) { 920 }));
                        if ($tmp443.value) {
                        {
                            {
                                $tmp444 = extension433;
                                $tmp445 = &$s446;
                                extension433 = $tmp445;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp445));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$232_21434.value), ((panda$core$Int64) { 921 }));
                        if ($tmp447.value) {
                        {
                            {
                                $tmp448 = extension433;
                                $tmp449 = &$s450;
                                extension433 = $tmp449;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp449));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$232_21434.value), ((panda$core$Int64) { 917 }));
                        if ($tmp451.value) {
                        {
                            {
                                $tmp452 = extension433;
                                $tmp453 = &$s454;
                                extension433 = $tmp453;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp453));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp452));
                            }
                        }
                        }
                        else {
                        {
                            PANDA_ASSERT(((panda$core$Bit) { false }).value);
                        }
                        }
                        }
                        }
                        }
                        }
                    }
                    {
                        $tmp455 = outFile242;
                        panda$core$Object* $tmp459 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources234, ((panda$core$Int64) { 0 }));
                        $tmp458 = $tmp459;
                        panda$io$File* $tmp460 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp458), extension433);
                        $tmp457 = $tmp460;
                        $tmp456 = $tmp457;
                        outFile242 = $tmp456;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp456));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp457));
                        panda$core$Panda$unref$panda$core$Object($tmp458);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp455));
                    }
                }
                $tmp432 = -1;
                goto $l430;
                $l430:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension433));
                switch ($tmp432) {
                    case -1: goto $l461;
                }
                $l461:;
            }
            }
            else {
            {
                panda$core$String* $tmp465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s463, &$s464);
                $tmp462 = $tmp465;
                (($fn466) err247->$class->vtable[19])(err247, $tmp462);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp462));
                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
            }
            }
        }
        }
        memset(&errorCount467, 0, sizeof(errorCount467));
        {
            int $tmp470;
            {
                memset(&cg471, 0, sizeof(cg471));
                {
                    $match$251_17472 = format246;
                    panda$core$Bit $tmp475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$251_17472.value), ((panda$core$Int64) { 917 }));
                    bool $tmp474 = $tmp475.value;
                    if ($tmp474) goto $l476;
                    panda$core$Bit $tmp477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$251_17472.value), ((panda$core$Int64) { 918 }));
                    $tmp474 = $tmp477.value;
                    $l476:;
                    panda$core$Bit $tmp478 = { $tmp474 };
                    bool $tmp473 = $tmp478.value;
                    if ($tmp473) goto $l479;
                    panda$core$Bit $tmp480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$251_17472.value), ((panda$core$Int64) { 919 }));
                    $tmp473 = $tmp480.value;
                    $l479:;
                    panda$core$Bit $tmp481 = { $tmp473 };
                    if ($tmp481.value) {
                    {
                        {
                            $tmp482 = cg471;
                            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp485 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                            panda$io$File* $tmp489 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile242, &$s488);
                            $tmp487 = $tmp489;
                            panda$io$OutputStream* $tmp490 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp487);
                            $tmp486 = $tmp490;
                            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp485, self->triple, $tmp486);
                            $tmp484 = $tmp485;
                            $tmp483 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp484);
                            cg471 = $tmp483;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp483));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp484));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp486));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp487));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$251_17472.value), ((panda$core$Int64) { 920 }));
                    if ($tmp491.value) {
                    {
                        {
                            $tmp492 = cg471;
                            org$pandalanguage$pandac$HCodeGenerator* $tmp495 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(129, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                            org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp495, outFile242);
                            $tmp494 = $tmp495;
                            $tmp493 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp494);
                            cg471 = $tmp493;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp493));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp494));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp492));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$251_17472.value), ((panda$core$Int64) { 921 }));
                    if ($tmp496.value) {
                    {
                        {
                            $tmp497 = cg471;
                            org$pandalanguage$pandac$CCodeGenerator* $tmp500 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(256, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                            org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp500, outFile242);
                            $tmp499 = $tmp500;
                            $tmp498 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp499);
                            cg471 = $tmp498;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp498));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp499));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp497));
                        }
                    }
                    }
                    else {
                    {
                        PANDA_ASSERT(((panda$core$Bit) { false }).value);
                    }
                    }
                    }
                    }
                }
                org$pandalanguage$pandac$Compiler$Settings* $tmp504 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
                org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp504, self->pandaHome, ((panda$collections$ListView*) imports238), optimizationLevel244, safetyLevel245);
                $tmp503 = $tmp504;
                $tmp502 = $tmp503;
                settings501 = $tmp502;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp502));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
                panda$threads$MessageQueue* $tmp508 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
                panda$threads$MessageQueue$init($tmp508);
                $tmp507 = $tmp508;
                $tmp506 = $tmp507;
                errorQueue505 = $tmp506;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp506));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp507));
                org$pandalanguage$pandac$Compiler* $tmp512 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
                org$pandalanguage$pandac$Compiler$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp512, errorQueue505, cg471, settings501);
                $tmp511 = $tmp512;
                $tmp510 = $tmp511;
                compiler509 = $tmp510;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp510));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp511));
                {
                    int $tmp515;
                    {
                        ITable* $tmp519 = ((panda$collections$Iterable*) sources234)->$class->itable;
                        while ($tmp519->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp519 = $tmp519->next;
                        }
                        $fn521 $tmp520 = $tmp519->methods[0];
                        panda$collections$Iterator* $tmp522 = $tmp520(((panda$collections$Iterable*) sources234));
                        $tmp518 = $tmp522;
                        $tmp517 = $tmp518;
                        Iter$264$13516 = $tmp517;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp517));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp518));
                        $l523:;
                        ITable* $tmp526 = Iter$264$13516->$class->itable;
                        while ($tmp526->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp526 = $tmp526->next;
                        }
                        $fn528 $tmp527 = $tmp526->methods[0];
                        panda$core$Bit $tmp529 = $tmp527(Iter$264$13516);
                        panda$core$Bit $tmp530 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp529);
                        bool $tmp525 = $tmp530.value;
                        if (!$tmp525) goto $l524;
                        {
                            int $tmp533;
                            {
                                ITable* $tmp537 = Iter$264$13516->$class->itable;
                                while ($tmp537->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp537 = $tmp537->next;
                                }
                                $fn539 $tmp538 = $tmp537->methods[1];
                                panda$core$Object* $tmp540 = $tmp538(Iter$264$13516);
                                $tmp536 = $tmp540;
                                $tmp535 = ((panda$io$File*) $tmp536);
                                s534 = $tmp535;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp535));
                                panda$core$Panda$unref$panda$core$Object($tmp536);
                                {
                                    int $tmp543;
                                    {
                                        panda$collections$ListView* $tmp548 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler509, s534);
                                        $tmp547 = $tmp548;
                                        ITable* $tmp549 = ((panda$collections$Iterable*) $tmp547)->$class->itable;
                                        while ($tmp549->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp549 = $tmp549->next;
                                        }
                                        $fn551 $tmp550 = $tmp549->methods[0];
                                        panda$collections$Iterator* $tmp552 = $tmp550(((panda$collections$Iterable*) $tmp547));
                                        $tmp546 = $tmp552;
                                        $tmp545 = $tmp546;
                                        Iter$265$17544 = $tmp545;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp545));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp547));
                                        $l553:;
                                        ITable* $tmp556 = Iter$265$17544->$class->itable;
                                        while ($tmp556->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp556 = $tmp556->next;
                                        }
                                        $fn558 $tmp557 = $tmp556->methods[0];
                                        panda$core$Bit $tmp559 = $tmp557(Iter$265$17544);
                                        panda$core$Bit $tmp560 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp559);
                                        bool $tmp555 = $tmp560.value;
                                        if (!$tmp555) goto $l554;
                                        {
                                            int $tmp563;
                                            {
                                                ITable* $tmp567 = Iter$265$17544->$class->itable;
                                                while ($tmp567->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp567 = $tmp567->next;
                                                }
                                                $fn569 $tmp568 = $tmp567->methods[1];
                                                panda$core$Object* $tmp570 = $tmp568(Iter$265$17544);
                                                $tmp566 = $tmp570;
                                                $tmp565 = ((org$pandalanguage$pandac$ClassDecl*) $tmp566);
                                                cl564 = $tmp565;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp565));
                                                panda$core$Panda$unref$panda$core$Object($tmp566);
                                                org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler509, cl564);
                                            }
                                            $tmp563 = -1;
                                            goto $l561;
                                            $l561:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl564));
                                            cl564 = NULL;
                                            switch ($tmp563) {
                                                case -1: goto $l571;
                                            }
                                            $l571:;
                                        }
                                        goto $l553;
                                        $l554:;
                                    }
                                    $tmp543 = -1;
                                    goto $l541;
                                    $l541:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$265$17544));
                                    Iter$265$17544 = NULL;
                                    switch ($tmp543) {
                                        case -1: goto $l572;
                                    }
                                    $l572:;
                                }
                            }
                            $tmp533 = -1;
                            goto $l531;
                            $l531:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s534));
                            s534 = NULL;
                            switch ($tmp533) {
                                case -1: goto $l573;
                            }
                            $l573:;
                        }
                        goto $l523;
                        $l524:;
                    }
                    $tmp515 = -1;
                    goto $l513;
                    $l513:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$264$13516));
                    Iter$264$13516 = NULL;
                    switch ($tmp515) {
                        case -1: goto $l574;
                    }
                    $l574:;
                }
                panda$core$Bit $tmp575 = panda$threads$MessageQueue$hasMessage$R$panda$core$Bit(errorQueue505);
                panda$core$Bit $tmp576 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp575);
                if ($tmp576.value) {
                {
                    {
                        int $tmp579;
                        {
                            ITable* $tmp583 = ((panda$collections$Iterable*) sources234)->$class->itable;
                            while ($tmp583->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp583 = $tmp583->next;
                            }
                            $fn585 $tmp584 = $tmp583->methods[0];
                            panda$collections$Iterator* $tmp586 = $tmp584(((panda$collections$Iterable*) sources234));
                            $tmp582 = $tmp586;
                            $tmp581 = $tmp582;
                            Iter$270$17580 = $tmp581;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp581));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
                            $l587:;
                            ITable* $tmp590 = Iter$270$17580->$class->itable;
                            while ($tmp590->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp590 = $tmp590->next;
                            }
                            $fn592 $tmp591 = $tmp590->methods[0];
                            panda$core$Bit $tmp593 = $tmp591(Iter$270$17580);
                            panda$core$Bit $tmp594 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp593);
                            bool $tmp589 = $tmp594.value;
                            if (!$tmp589) goto $l588;
                            {
                                int $tmp597;
                                {
                                    ITable* $tmp601 = Iter$270$17580->$class->itable;
                                    while ($tmp601->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp601 = $tmp601->next;
                                    }
                                    $fn603 $tmp602 = $tmp601->methods[1];
                                    panda$core$Object* $tmp604 = $tmp602(Iter$270$17580);
                                    $tmp600 = $tmp604;
                                    $tmp599 = ((panda$io$File*) $tmp600);
                                    s598 = $tmp599;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp599));
                                    panda$core$Panda$unref$panda$core$Object($tmp600);
                                    org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler509, s598);
                                }
                                $tmp597 = -1;
                                goto $l595;
                                $l595:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s598));
                                s598 = NULL;
                                switch ($tmp597) {
                                    case -1: goto $l605;
                                }
                                $l605:;
                            }
                            goto $l587;
                            $l588:;
                        }
                        $tmp579 = -1;
                        goto $l577;
                        $l577:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$270$17580));
                        Iter$270$17580 = NULL;
                        switch ($tmp579) {
                            case -1: goto $l606;
                        }
                        $l606:;
                    }
                    org$pandalanguage$pandac$Compiler$finish(compiler509);
                }
                }
                panda$core$Int64 $tmp607 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(errorQueue505);
                errorCount467 = $tmp607;
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp608, ((panda$core$Int64) { 0 }), errorCount467, ((panda$core$Bit) { false }));
                int64_t $tmp610 = $tmp608.min.value;
                panda$core$Int64 i609 = { $tmp610 };
                int64_t $tmp612 = $tmp608.max.value;
                bool $tmp613 = $tmp608.inclusive.value;
                if ($tmp613) goto $l620; else goto $l621;
                $l620:;
                if ($tmp610 <= $tmp612) goto $l614; else goto $l616;
                $l621:;
                if ($tmp610 < $tmp612) goto $l614; else goto $l616;
                $l614:;
                {
                    int $tmp624;
                    {
                        panda$core$Immutable* $tmp628 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(errorQueue505);
                        $tmp627 = $tmp628;
                        $tmp626 = ((org$pandalanguage$pandac$Compiler$Error*) $tmp627);
                        error625 = $tmp626;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp626));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp627));
                        panda$core$String* $tmp636 = panda$io$File$name$R$panda$core$String(error625->file);
                        $tmp635 = $tmp636;
                        panda$core$String* $tmp637 = panda$core$String$convert$R$panda$core$String($tmp635);
                        $tmp634 = $tmp637;
                        panda$core$String* $tmp639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp634, &$s638);
                        $tmp633 = $tmp639;
                        org$pandalanguage$pandac$Position$wrapper* $tmp641;
                        $tmp641 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                        $tmp641->value = error625->position;
                        $tmp640 = ((panda$core$Object*) $tmp641);
                        panda$core$String* $tmp642 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp633, $tmp640);
                        $tmp632 = $tmp642;
                        panda$core$String* $tmp644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp632, &$s643);
                        $tmp631 = $tmp644;
                        panda$core$String* $tmp645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp631, error625->message);
                        $tmp630 = $tmp645;
                        panda$core$String* $tmp647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp630, &$s646);
                        $tmp629 = $tmp647;
                        panda$io$Console$printLine$panda$core$String($tmp629);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp629));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp631));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp632));
                        panda$core$Panda$unref$panda$core$Object($tmp640);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp633));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp635));
                    }
                    $tmp624 = -1;
                    goto $l622;
                    $l622:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) error625));
                    error625 = NULL;
                    switch ($tmp624) {
                        case -1: goto $l648;
                    }
                    $l648:;
                }
                $l617:;
                int64_t $tmp650 = $tmp612 - i609.value;
                if ($tmp613) goto $l651; else goto $l652;
                $l651:;
                if ((uint64_t) $tmp650 >= 1) goto $l649; else goto $l616;
                $l652:;
                if ((uint64_t) $tmp650 > 1) goto $l649; else goto $l616;
                $l649:;
                i609.value += 1;
                goto $l614;
                $l616:;
            }
            $tmp470 = -1;
            goto $l468;
            $l468:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg471));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings501));
            settings501 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) errorQueue505));
            errorQueue505 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler509));
            compiler509 = NULL;
            switch ($tmp470) {
                case -1: goto $l655;
            }
            $l655:;
        }
        panda$core$Bit $tmp656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount467, ((panda$core$Int64) { 0 }));
        if ($tmp656.value) {
        {
            {
                $match$283_17657 = format246;
                panda$core$Bit $tmp658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$283_17657.value), ((panda$core$Int64) { 918 }));
                if ($tmp658.value) {
                {
                    int $tmp661;
                    {
                        panda$io$File* $tmp667 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile242, &$s666);
                        $tmp665 = $tmp667;
                        panda$io$File* $tmp668 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp665, optimizationLevel244);
                        $tmp664 = $tmp668;
                        $tmp663 = $tmp664;
                        optimized662 = $tmp663;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp663));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp664));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp665));
                        panda$io$File* $tmp672 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized662);
                        $tmp671 = $tmp672;
                        $tmp670 = $tmp671;
                        assembly669 = $tmp670;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp670));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp671));
                        panda$io$File* $tmp674 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly669, outFile242);
                        $tmp673 = $tmp674;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp673));
                    }
                    $tmp661 = -1;
                    goto $l659;
                    $l659:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized662));
                    optimized662 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly669));
                    assembly669 = NULL;
                    switch ($tmp661) {
                        case -1: goto $l675;
                    }
                    $l675:;
                }
                }
                else {
                panda$core$Bit $tmp676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$283_17657.value), ((panda$core$Int64) { 919 }));
                if ($tmp676.value) {
                {
                    int $tmp679;
                    {
                        panda$io$File* $tmp685 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile242, &$s684);
                        $tmp683 = $tmp685;
                        panda$io$File* $tmp686 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp683, optimizationLevel244);
                        $tmp682 = $tmp686;
                        $tmp681 = $tmp682;
                        optimized680 = $tmp681;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp681));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp682));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp683));
                        panda$io$File* $tmp690 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized680);
                        $tmp689 = $tmp690;
                        $tmp688 = $tmp689;
                        assembly687 = $tmp688;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp688));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp689));
                        panda$io$File* $tmp692 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly687, outFile242);
                        $tmp691 = $tmp692;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp691));
                    }
                    $tmp679 = -1;
                    goto $l677;
                    $l677:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized680));
                    optimized680 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly687));
                    assembly687 = NULL;
                    switch ($tmp679) {
                        case -1: goto $l693;
                    }
                    $l693:;
                }
                }
                }
            }
        }
        }
        else {
        {
            panda$core$Bit $tmp694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount467, ((panda$core$Int64) { 1 }));
            if ($tmp694.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s695);
            }
            }
            else {
            {
                panda$core$String* $tmp698 = panda$core$Int64$convert$R$panda$core$String(errorCount467);
                $tmp697 = $tmp698;
                panda$core$String* $tmp700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp697, &$s699);
                $tmp696 = $tmp700;
                panda$io$Console$printLine$panda$core$String($tmp696);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp696));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp697));
            }
            }
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
    }
    $tmp229 = -1;
    goto $l227;
    $l227:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args230));
    args230 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources234));
    sources234 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports238));
    imports238 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile242));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err247));
    err247 = NULL;
    switch ($tmp229) {
        case -1: goto $l701;
    }
    $l701:;
}
panda$core$Bit org$pandalanguage$pandac$Main$containsError$panda$core$String$R$panda$core$Bit(panda$core$String* p_s) {
    panda$core$Bit $returnValue702;
    panda$core$Bit $tmp704 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_s, &$s703);
    $returnValue702 = $tmp704;
    return $returnValue702;
}
void pandaMain(panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$Main* $tmp706;
    org$pandalanguage$pandac$Main* $tmp707 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
    org$pandalanguage$pandac$Main$init($tmp707);
    $tmp706 = $tmp707;
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp706, p_args);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp706));
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    int $tmp710;
    {
    }
    $tmp710 = -1;
    goto $l708;
    $l708:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp710) {
        case -1: goto $l711;
    }
    $l711:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llvmDir));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->triple));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

