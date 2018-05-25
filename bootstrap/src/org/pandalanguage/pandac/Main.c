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
#include "org/pandalanguage/pandac/Main/Arguments.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "panda/threads/MessageQueue.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/Compiler/Error.h"
#include "panda/core/Immutable.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/Method.h"


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
typedef panda$core$String* (*$fn142)(panda$io$InputStream*);
typedef void (*$fn144)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn148)(panda$io$InputStream*);
typedef void (*$fn150)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn159)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn160)(panda$io$OutputStream*);
typedef void (*$fn162)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn163)(panda$io$OutputStream*);
typedef void (*$fn165)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn167)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn195)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn204)(org$pandalanguage$pandac$Main$Arguments*);
typedef void (*$fn214)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn221)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn234)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn245)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn256)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn267)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn275)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn280)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn303)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn312)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn322)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn330)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn347)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn368)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn407)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn462)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn469)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn480)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn492)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn499)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn510)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn526)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn533)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn544)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn658)(panda$core$String*, panda$core$String*);
typedef panda$core$Bit (*$fn659)(panda$core$String*);
typedef panda$core$Object* (*$fn666)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn685)(panda$collections$Iterator*, panda$core$MutableMethod*);
typedef panda$core$Bit (*$fn692)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn703)(panda$collections$Iterator*);

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
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x6c\x6c\x76\x6d\x5f\x64\x69\x72", 10, -5843666376324264096, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x74\x68\x65\x20\x4c\x4c\x56\x4d\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 28, -1635669018571610865, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x74\x72\x69\x70\x6c\x65", 8, 15702175691418347, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4c\x56\x4d\x20\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6c\x65", 18, -7134459153622240993, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x32", 25, -7359846002345780337, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20", 64, 3394507457011302119, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x6c\x65", 4, 210233217, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x74\x65\x73\x74", 6, 1539277948139, NULL };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x54\x65\x73\x74\x32\x2e\x70\x61\x6e\x64\x61", 16, 1663116493871802296, NULL };

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
    panda$core$System$Process* p135 = NULL;
    panda$core$System$Process* $tmp136;
    panda$core$System$Process* $tmp137;
    panda$io$OutputStream* $tmp139;
    panda$core$String* $tmp141;
    panda$io$OutputStream* $tmp145;
    panda$core$String* $tmp147;
    panda$core$Int64 $tmp151;
    panda$io$File* $returnValue153;
    panda$io$File* $tmp154;
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
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) &$s132));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) &$s133));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) &$s134));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) p_dest->path));
        panda$core$System$Process* $tmp138 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args125));
        $tmp137 = $tmp138;
        $tmp136 = $tmp137;
        p135 = $tmp136;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp137));
        panda$io$OutputStream* $tmp140 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp139 = $tmp140;
        panda$core$String* $tmp143 = (($fn142) p135->output->$class->vtable[6])(p135->output);
        $tmp141 = $tmp143;
        (($fn144) $tmp139->$class->vtable[16])($tmp139, $tmp141);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp141));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp139));
        panda$io$OutputStream* $tmp146 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp145 = $tmp146;
        panda$core$String* $tmp149 = (($fn148) p135->error->$class->vtable[6])(p135->error);
        $tmp147 = $tmp149;
        (($fn150) $tmp145->$class->vtable[16])($tmp145, $tmp147);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp145));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp151, p135);
        panda$core$Bit $tmp152 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp151, ((panda$core$Int64) { 0 }));
        if ($tmp152.value) {
        {
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        $tmp154 = p_dest;
        $returnValue153 = $tmp154;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
        $tmp124 = 0;
        goto $l122;
        $l155:;
        return $returnValue153;
    }
    $l122:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args125));
    args125 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p135));
    p135 = NULL;
    switch ($tmp124) {
        case 0: goto $l155;
    }
    $l157:;
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn159) p_out->$class->vtable[19])(p_out, &$s158);
    (($fn160) p_out->$class->vtable[17])(p_out);
    (($fn162) p_out->$class->vtable[19])(p_out, &$s161);
    (($fn163) p_out->$class->vtable[17])(p_out);
    (($fn165) p_out->$class->vtable[19])(p_out, &$s164);
    (($fn167) p_out->$class->vtable[19])(p_out, &$s166);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args171 = NULL;
    org$pandalanguage$pandac$Main$Arguments* $tmp172;
    org$pandalanguage$pandac$Main$Arguments* $tmp173;
    panda$collections$Array* sources175 = NULL;
    panda$collections$Array* $tmp176;
    panda$collections$Array* $tmp177;
    panda$collections$Array* imports179 = NULL;
    panda$collections$Array* $tmp180;
    panda$collections$Array* $tmp181;
    panda$io$File* outFile183 = NULL;
    panda$io$File* $tmp184;
    panda$core$Int64 optimizationLevel185;
    panda$core$Int64 safetyLevel186;
    panda$core$Int64$nullable format187;
    panda$io$OutputStream* err188 = NULL;
    panda$io$OutputStream* $tmp189;
    panda$io$OutputStream* $tmp190;
    panda$core$String* a201 = NULL;
    panda$core$String* $tmp202;
    panda$core$String* $tmp203;
    panda$core$String* $match$152_13209 = NULL;
    panda$core$String* $tmp210;
    panda$io$File* $tmp215;
    panda$io$File* $tmp216;
    panda$io$File* $tmp217;
    panda$core$String* $tmp219;
    panda$io$File* $tmp223;
    panda$core$String* level230 = NULL;
    panda$core$String* $tmp231;
    panda$core$String* $tmp232;
    panda$io$OutputStream* $tmp242;
    panda$core$String* level252 = NULL;
    panda$core$String* $tmp253;
    panda$core$String* $tmp254;
    panda$io$OutputStream* $tmp264;
    panda$core$String* f276 = NULL;
    panda$core$String* $tmp277;
    panda$core$String* $tmp278;
    panda$core$String* $match$180_21285 = NULL;
    panda$core$String* $tmp286;
    panda$core$String* $tmp297;
    panda$core$String* $tmp298;
    panda$io$File* $tmp308;
    panda$core$String* $tmp310;
    panda$io$File* $tmp316;
    panda$io$File* $tmp317;
    panda$io$File* $tmp318;
    panda$core$String* $tmp320;
    panda$core$String* $tmp326;
    panda$core$String* $tmp327;
    panda$core$String* $tmp328;
    panda$core$String* $tmp335;
    panda$io$File* $tmp339;
    panda$core$String* $tmp341;
    panda$core$String* $tmp342;
    panda$io$File* $tmp350;
    panda$io$File* $tmp351;
    panda$io$File* $tmp352;
    panda$io$File* $tmp355;
    panda$io$File* $tmp356;
    panda$io$File* $tmp357;
    panda$io$File* $tmp360;
    panda$io$File* $tmp361;
    panda$io$File* $tmp362;
    panda$core$String* extension374 = NULL;
    panda$core$Int64$nullable $match$223_21375;
    panda$core$String* $tmp377;
    panda$core$String* $tmp378;
    panda$core$String* $tmp381;
    panda$core$String* $tmp382;
    panda$core$String* $tmp385;
    panda$core$String* $tmp386;
    panda$core$String* $tmp389;
    panda$core$String* $tmp390;
    panda$core$String* $tmp393;
    panda$core$String* $tmp394;
    panda$io$File* $tmp396;
    panda$io$File* $tmp397;
    panda$io$File* $tmp398;
    panda$core$Object* $tmp399;
    panda$core$String* $tmp403;
    panda$core$Int64 errorCount408;
    org$pandalanguage$pandac$CodeGenerator* cg412 = NULL;
    panda$core$Int64$nullable $match$242_17413;
    org$pandalanguage$pandac$CodeGenerator* $tmp423;
    org$pandalanguage$pandac$CodeGenerator* $tmp424;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp425;
    panda$io$OutputStream* $tmp427;
    panda$io$File* $tmp428;
    org$pandalanguage$pandac$CodeGenerator* $tmp433;
    org$pandalanguage$pandac$CodeGenerator* $tmp434;
    org$pandalanguage$pandac$HCodeGenerator* $tmp435;
    org$pandalanguage$pandac$CodeGenerator* $tmp438;
    org$pandalanguage$pandac$CodeGenerator* $tmp439;
    org$pandalanguage$pandac$CCodeGenerator* $tmp440;
    org$pandalanguage$pandac$Compiler$Settings* settings442 = NULL;
    org$pandalanguage$pandac$Compiler$Settings* $tmp443;
    org$pandalanguage$pandac$Compiler$Settings* $tmp444;
    panda$threads$MessageQueue* errorQueue446 = NULL;
    panda$threads$MessageQueue* $tmp447;
    panda$threads$MessageQueue* $tmp448;
    org$pandalanguage$pandac$Compiler* compiler450 = NULL;
    org$pandalanguage$pandac$Compiler* $tmp451;
    org$pandalanguage$pandac$Compiler* $tmp452;
    panda$collections$Iterator* Iter$255$13457 = NULL;
    panda$collections$Iterator* $tmp458;
    panda$collections$Iterator* $tmp459;
    panda$io$File* s475 = NULL;
    panda$io$File* $tmp476;
    panda$core$Object* $tmp477;
    panda$collections$Iterator* Iter$256$17485 = NULL;
    panda$collections$Iterator* $tmp486;
    panda$collections$Iterator* $tmp487;
    panda$collections$ListView* $tmp488;
    org$pandalanguage$pandac$ClassDecl* cl505 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp506;
    panda$core$Object* $tmp507;
    panda$collections$Iterator* Iter$261$17521 = NULL;
    panda$collections$Iterator* $tmp522;
    panda$collections$Iterator* $tmp523;
    panda$io$File* s539 = NULL;
    panda$io$File* $tmp540;
    panda$core$Object* $tmp541;
    panda$core$Range$LTpanda$core$Int64$GT $tmp549;
    org$pandalanguage$pandac$Compiler$Error* error566 = NULL;
    org$pandalanguage$pandac$Compiler$Error* $tmp567;
    panda$core$Immutable* $tmp568;
    panda$core$String* $tmp570;
    panda$core$String* $tmp571;
    panda$core$String* $tmp572;
    panda$core$String* $tmp573;
    panda$core$String* $tmp574;
    panda$core$String* $tmp575;
    panda$core$String* $tmp576;
    panda$core$Object* $tmp581;
    panda$core$Int64$nullable $match$274_17598;
    panda$io$File* optimized603 = NULL;
    panda$io$File* $tmp604;
    panda$io$File* $tmp605;
    panda$io$File* $tmp606;
    panda$io$File* assembly610 = NULL;
    panda$io$File* $tmp611;
    panda$io$File* $tmp612;
    panda$io$File* $tmp614;
    panda$io$File* optimized621 = NULL;
    panda$io$File* $tmp622;
    panda$io$File* $tmp623;
    panda$io$File* $tmp624;
    panda$io$File* assembly628 = NULL;
    panda$io$File* $tmp629;
    panda$io$File* $tmp630;
    panda$io$File* $tmp632;
    panda$core$String* $tmp637;
    panda$core$String* $tmp638;
    int $tmp170;
    {
        org$pandalanguage$pandac$Main$Arguments* $tmp174 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
        org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp174, p_rawArgs);
        $tmp173 = $tmp174;
        $tmp172 = $tmp173;
        args171 = $tmp172;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
        panda$collections$Array* $tmp178 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp178);
        $tmp177 = $tmp178;
        $tmp176 = $tmp177;
        sources175 = $tmp176;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp176));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
        panda$collections$Array* $tmp182 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp182);
        $tmp181 = $tmp182;
        $tmp180 = $tmp181;
        imports179 = $tmp180;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp180));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
        panda$collections$Array$add$panda$collections$Array$T(imports179, ((panda$core$Object*) self->pandaHome));
        $tmp184 = NULL;
        outFile183 = $tmp184;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
        optimizationLevel185 = ((panda$core$Int64) { 3 });
        safetyLevel186 = ((panda$core$Int64) { 3 });
        format187 = ((panda$core$Int64$nullable) { .nonnull = false });
        panda$io$OutputStream* $tmp191 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp190 = $tmp191;
        $tmp189 = $tmp190;
        err188 = $tmp189;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp189));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
        $l192:;
        panda$core$Bit $tmp196 = (($fn195) args171->$class->vtable[2])(args171);
        panda$core$Bit $tmp197 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp196);
        bool $tmp194 = $tmp197.value;
        if (!$tmp194) goto $l193;
        {
            int $tmp200;
            {
                panda$core$String* $tmp205 = (($fn204) args171->$class->vtable[3])(args171);
                $tmp203 = $tmp205;
                $tmp202 = $tmp203;
                a201 = $tmp202;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp202));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
                int $tmp208;
                {
                    $tmp210 = a201;
                    $match$152_13209 = $tmp210;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp210));
                    panda$core$Bit $tmp212 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$152_13209, &$s211);
                    if ($tmp212.value) {
                    {
                        if (((panda$core$Bit) { outFile183 != NULL }).value) {
                        {
                            (($fn214) err188->$class->vtable[19])(err188, &$s213);
                            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                        }
                        }
                        {
                            $tmp215 = outFile183;
                            panda$io$File* $tmp218 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp222 = (($fn221) args171->$class->vtable[4])(args171, &$s220);
                            $tmp219 = $tmp222;
                            panda$io$File$init$panda$core$String($tmp218, $tmp219);
                            $tmp217 = $tmp218;
                            $tmp216 = $tmp217;
                            outFile183 = $tmp216;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp216));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
                        }
                        panda$io$File* $tmp224 = panda$io$File$parent$R$panda$io$File$Q(outFile183);
                        $tmp223 = $tmp224;
                        panda$io$File$createDirectories($tmp223);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp223));
                    }
                    }
                    else {
                    panda$core$Bit $tmp226 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$152_13209, &$s225);
                    if ($tmp226.value) {
                    {
                        int $tmp229;
                        {
                            panda$core$String* $tmp235 = (($fn234) args171->$class->vtable[4])(args171, &$s233);
                            $tmp232 = $tmp235;
                            $tmp231 = $tmp232;
                            level230 = $tmp231;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp231));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp232));
                            panda$core$Int64$nullable $tmp236 = panda$core$String$convert$R$panda$core$Int64$Q(level230);
                            optimizationLevel185 = ((panda$core$Int64) $tmp236.value);
                            panda$core$Bit $tmp238 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel185, ((panda$core$Int64) { 3 }));
                            bool $tmp237 = $tmp238.value;
                            if ($tmp237) goto $l239;
                            panda$core$Bit $tmp240 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel185, ((panda$core$Int64) { 0 }));
                            $tmp237 = $tmp240.value;
                            $l239:;
                            panda$core$Bit $tmp241 = { $tmp237 };
                            if ($tmp241.value) {
                            {
                                panda$io$OutputStream* $tmp243 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp242 = $tmp243;
                                (($fn245) $tmp242->$class->vtable[19])($tmp242, &$s244);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                        }
                        $tmp229 = -1;
                        goto $l227;
                        $l227:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level230));
                        level230 = NULL;
                        switch ($tmp229) {
                            case -1: goto $l246;
                        }
                        $l246:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp248 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$152_13209, &$s247);
                    if ($tmp248.value) {
                    {
                        int $tmp251;
                        {
                            panda$core$String* $tmp257 = (($fn256) args171->$class->vtable[4])(args171, &$s255);
                            $tmp254 = $tmp257;
                            $tmp253 = $tmp254;
                            level252 = $tmp253;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp253));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
                            panda$core$Int64$nullable $tmp258 = panda$core$String$convert$R$panda$core$Int64$Q(level252);
                            safetyLevel186 = ((panda$core$Int64) $tmp258.value);
                            panda$core$Bit $tmp260 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel186, ((panda$core$Int64) { 3 }));
                            bool $tmp259 = $tmp260.value;
                            if ($tmp259) goto $l261;
                            panda$core$Bit $tmp262 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel186, ((panda$core$Int64) { 0 }));
                            $tmp259 = $tmp262.value;
                            $l261:;
                            panda$core$Bit $tmp263 = { $tmp259 };
                            if ($tmp263.value) {
                            {
                                panda$io$OutputStream* $tmp265 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp264 = $tmp265;
                                (($fn267) $tmp264->$class->vtable[19])($tmp264, &$s266);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                        }
                        $tmp251 = -1;
                        goto $l249;
                        $l249:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level252));
                        level252 = NULL;
                        switch ($tmp251) {
                            case -1: goto $l268;
                        }
                        $l268:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp270 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$152_13209, &$s269);
                    if ($tmp270.value) {
                    {
                        int $tmp273;
                        {
                            if (((panda$core$Bit) { format187.nonnull }).value) {
                            {
                                (($fn275) err188->$class->vtable[19])(err188, &$s274);
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                            panda$core$String* $tmp281 = (($fn280) args171->$class->vtable[4])(args171, &$s279);
                            $tmp278 = $tmp281;
                            $tmp277 = $tmp278;
                            f276 = $tmp277;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp277));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp278));
                            int $tmp284;
                            {
                                $tmp286 = f276;
                                $match$180_21285 = $tmp286;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp286));
                                panda$core$Bit $tmp288 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$180_21285, &$s287);
                                if ($tmp288.value) {
                                {
                                    format187 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp290 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$180_21285, &$s289);
                                if ($tmp290.value) {
                                {
                                    format187 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 919 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp292 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$180_21285, &$s291);
                                if ($tmp292.value) {
                                {
                                    format187 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 917 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp294 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$180_21285, &$s293);
                                if ($tmp294.value) {
                                {
                                    format187 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 920 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp296 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$180_21285, &$s295);
                                if ($tmp296.value) {
                                {
                                    format187 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 921 }), true });
                                }
                                }
                                else {
                                {
                                    panda$core$String* $tmp300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s299, f276);
                                    $tmp298 = $tmp300;
                                    panda$core$String* $tmp302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp298, &$s301);
                                    $tmp297 = $tmp302;
                                    (($fn303) err188->$class->vtable[19])(err188, $tmp297);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
                                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            $tmp284 = -1;
                            goto $l282;
                            $l282:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp286));
                            switch ($tmp284) {
                                case -1: goto $l304;
                            }
                            $l304:;
                        }
                        $tmp273 = -1;
                        goto $l271;
                        $l271:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f276));
                        f276 = NULL;
                        switch ($tmp273) {
                            case -1: goto $l305;
                        }
                        $l305:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp307 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$152_13209, &$s306);
                    if ($tmp307.value) {
                    {
                        panda$io$File* $tmp309 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$core$String* $tmp313 = (($fn312) args171->$class->vtable[4])(args171, &$s311);
                        $tmp310 = $tmp313;
                        panda$io$File$init$panda$core$String($tmp309, $tmp310);
                        $tmp308 = $tmp309;
                        panda$collections$Array$add$panda$collections$Array$T(imports179, ((panda$core$Object*) $tmp308));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp308));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp310));
                    }
                    }
                    else {
                    panda$core$Bit $tmp315 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$152_13209, &$s314);
                    if ($tmp315.value) {
                    {
                        {
                            $tmp316 = self->llvmDir;
                            panda$io$File* $tmp319 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp323 = (($fn322) args171->$class->vtable[4])(args171, &$s321);
                            $tmp320 = $tmp323;
                            panda$io$File$init$panda$core$String($tmp319, $tmp320);
                            $tmp318 = $tmp319;
                            $tmp317 = $tmp318;
                            self->llvmDir = $tmp317;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp317));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp318));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp325 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$152_13209, &$s324);
                    if ($tmp325.value) {
                    {
                        {
                            $tmp326 = self->triple;
                            panda$core$String* $tmp331 = (($fn330) args171->$class->vtable[4])(args171, &$s329);
                            $tmp328 = $tmp331;
                            $tmp327 = $tmp328;
                            self->triple = $tmp327;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp327));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp328));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp326));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp333 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$152_13209, &$s332);
                    if ($tmp333.value) {
                    {
                        panda$io$Console$printLine$panda$core$String(&$s334);
                        panda$core$String* $tmp336 = panda$io$Console$readLine$R$panda$core$String$Q();
                        $tmp335 = $tmp336;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp338 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a201, &$s337);
                        if ($tmp338.value) {
                        {
                            panda$io$File* $tmp340 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp340, a201);
                            $tmp339 = $tmp340;
                            panda$collections$Array$add$panda$collections$Array$T(sources175, ((panda$core$Object*) $tmp339));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s343, a201);
                            $tmp342 = $tmp344;
                            panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp342, &$s345);
                            $tmp341 = $tmp346;
                            (($fn347) err188->$class->vtable[19])(err188, $tmp341);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp341));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp342));
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
                $tmp208 = -1;
                goto $l206;
                $l206:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
                switch ($tmp208) {
                    case -1: goto $l348;
                }
                $l348:;
            }
            $tmp200 = -1;
            goto $l198;
            $l198:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a201));
            a201 = NULL;
            switch ($tmp200) {
                case -1: goto $l349;
            }
            $l349:;
        }
        goto $l192;
        $l193:;
        {
            $tmp350 = self->opt;
            panda$io$File* $tmp354 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s353);
            $tmp352 = $tmp354;
            $tmp351 = $tmp352;
            self->opt = $tmp351;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp351));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350));
        }
        {
            $tmp355 = self->llc;
            panda$io$File* $tmp359 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s358);
            $tmp357 = $tmp359;
            $tmp356 = $tmp357;
            self->llc = $tmp356;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp356));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp357));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp355));
        }
        {
            $tmp360 = self->gcc;
            panda$io$File* $tmp363 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
            panda$io$File$init$panda$core$String($tmp363, &$s364);
            $tmp362 = $tmp363;
            $tmp361 = $tmp362;
            self->gcc = $tmp361;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp361));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp362));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp360));
        }
        panda$core$Int64 $tmp365 = panda$collections$Array$get_count$R$panda$core$Int64(sources175);
        panda$core$Bit $tmp366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp365, ((panda$core$Int64) { 0 }));
        if ($tmp366.value) {
        {
            (($fn368) err188->$class->vtable[19])(err188, &$s367);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        if (((panda$core$Bit) { !format187.nonnull }).value) {
        {
            format187 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
        }
        }
        if (((panda$core$Bit) { outFile183 == NULL }).value) {
        {
            panda$core$Int64 $tmp369 = panda$collections$Array$get_count$R$panda$core$Int64(sources175);
            panda$core$Bit $tmp370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp369, ((panda$core$Int64) { 1 }));
            if ($tmp370.value) {
            {
                int $tmp373;
                {
                    memset(&extension374, 0, sizeof(extension374));
                    {
                        $match$223_21375 = format187;
                        panda$core$Bit $tmp376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$223_21375.value), ((panda$core$Int64) { 918 }));
                        if ($tmp376.value) {
                        {
                            {
                                $tmp377 = extension374;
                                $tmp378 = &$s379;
                                extension374 = $tmp378;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$223_21375.value), ((panda$core$Int64) { 919 }));
                        if ($tmp380.value) {
                        {
                            {
                                $tmp381 = extension374;
                                $tmp382 = &$s383;
                                extension374 = $tmp382;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp382));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$223_21375.value), ((panda$core$Int64) { 920 }));
                        if ($tmp384.value) {
                        {
                            {
                                $tmp385 = extension374;
                                $tmp386 = &$s387;
                                extension374 = $tmp386;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp385));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$223_21375.value), ((panda$core$Int64) { 921 }));
                        if ($tmp388.value) {
                        {
                            {
                                $tmp389 = extension374;
                                $tmp390 = &$s391;
                                extension374 = $tmp390;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp390));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp389));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$223_21375.value), ((panda$core$Int64) { 917 }));
                        if ($tmp392.value) {
                        {
                            {
                                $tmp393 = extension374;
                                $tmp394 = &$s395;
                                extension374 = $tmp394;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp394));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
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
                        $tmp396 = outFile183;
                        panda$core$Object* $tmp400 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources175, ((panda$core$Int64) { 0 }));
                        $tmp399 = $tmp400;
                        panda$io$File* $tmp401 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp399), extension374);
                        $tmp398 = $tmp401;
                        $tmp397 = $tmp398;
                        outFile183 = $tmp397;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp397));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp398));
                        panda$core$Panda$unref$panda$core$Object($tmp399);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
                    }
                }
                $tmp373 = -1;
                goto $l371;
                $l371:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension374));
                switch ($tmp373) {
                    case -1: goto $l402;
                }
                $l402:;
            }
            }
            else {
            {
                panda$core$String* $tmp406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s404, &$s405);
                $tmp403 = $tmp406;
                (($fn407) err188->$class->vtable[19])(err188, $tmp403);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
            }
            }
        }
        }
        memset(&errorCount408, 0, sizeof(errorCount408));
        {
            int $tmp411;
            {
                memset(&cg412, 0, sizeof(cg412));
                {
                    $match$242_17413 = format187;
                    panda$core$Bit $tmp416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$242_17413.value), ((panda$core$Int64) { 917 }));
                    bool $tmp415 = $tmp416.value;
                    if ($tmp415) goto $l417;
                    panda$core$Bit $tmp418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$242_17413.value), ((panda$core$Int64) { 918 }));
                    $tmp415 = $tmp418.value;
                    $l417:;
                    panda$core$Bit $tmp419 = { $tmp415 };
                    bool $tmp414 = $tmp419.value;
                    if ($tmp414) goto $l420;
                    panda$core$Bit $tmp421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$242_17413.value), ((panda$core$Int64) { 919 }));
                    $tmp414 = $tmp421.value;
                    $l420:;
                    panda$core$Bit $tmp422 = { $tmp414 };
                    if ($tmp422.value) {
                    {
                        {
                            $tmp423 = cg412;
                            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp426 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                            panda$io$File* $tmp430 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile183, &$s429);
                            $tmp428 = $tmp430;
                            panda$io$OutputStream* $tmp431 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp428);
                            $tmp427 = $tmp431;
                            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp426, self->triple, $tmp427);
                            $tmp425 = $tmp426;
                            $tmp424 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp425);
                            cg412 = $tmp424;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp424));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp427));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp428));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$242_17413.value), ((panda$core$Int64) { 920 }));
                    if ($tmp432.value) {
                    {
                        {
                            $tmp433 = cg412;
                            org$pandalanguage$pandac$HCodeGenerator* $tmp436 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(129, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                            org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp436, outFile183);
                            $tmp435 = $tmp436;
                            $tmp434 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp435);
                            cg412 = $tmp434;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp434));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp435));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp433));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$242_17413.value), ((panda$core$Int64) { 921 }));
                    if ($tmp437.value) {
                    {
                        {
                            $tmp438 = cg412;
                            org$pandalanguage$pandac$CCodeGenerator* $tmp441 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(256, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                            org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp441, outFile183);
                            $tmp440 = $tmp441;
                            $tmp439 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp440);
                            cg412 = $tmp439;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp439));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp438));
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
                org$pandalanguage$pandac$Compiler$Settings* $tmp445 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
                org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp445, self->pandaHome, ((panda$collections$ListView*) imports179), optimizationLevel185, safetyLevel186);
                $tmp444 = $tmp445;
                $tmp443 = $tmp444;
                settings442 = $tmp443;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp443));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
                panda$threads$MessageQueue* $tmp449 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
                panda$threads$MessageQueue$init($tmp449);
                $tmp448 = $tmp449;
                $tmp447 = $tmp448;
                errorQueue446 = $tmp447;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp447));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
                org$pandalanguage$pandac$Compiler* $tmp453 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
                org$pandalanguage$pandac$Compiler$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp453, errorQueue446, cg412, settings442);
                $tmp452 = $tmp453;
                $tmp451 = $tmp452;
                compiler450 = $tmp451;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp451));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp452));
                {
                    int $tmp456;
                    {
                        ITable* $tmp460 = ((panda$collections$Iterable*) sources175)->$class->itable;
                        while ($tmp460->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp460 = $tmp460->next;
                        }
                        $fn462 $tmp461 = $tmp460->methods[0];
                        panda$collections$Iterator* $tmp463 = $tmp461(((panda$collections$Iterable*) sources175));
                        $tmp459 = $tmp463;
                        $tmp458 = $tmp459;
                        Iter$255$13457 = $tmp458;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp458));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp459));
                        $l464:;
                        ITable* $tmp467 = Iter$255$13457->$class->itable;
                        while ($tmp467->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp467 = $tmp467->next;
                        }
                        $fn469 $tmp468 = $tmp467->methods[0];
                        panda$core$Bit $tmp470 = $tmp468(Iter$255$13457);
                        panda$core$Bit $tmp471 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp470);
                        bool $tmp466 = $tmp471.value;
                        if (!$tmp466) goto $l465;
                        {
                            int $tmp474;
                            {
                                ITable* $tmp478 = Iter$255$13457->$class->itable;
                                while ($tmp478->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp478 = $tmp478->next;
                                }
                                $fn480 $tmp479 = $tmp478->methods[1];
                                panda$core$Object* $tmp481 = $tmp479(Iter$255$13457);
                                $tmp477 = $tmp481;
                                $tmp476 = ((panda$io$File*) $tmp477);
                                s475 = $tmp476;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp476));
                                panda$core$Panda$unref$panda$core$Object($tmp477);
                                {
                                    int $tmp484;
                                    {
                                        panda$collections$ListView* $tmp489 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler450, s475);
                                        $tmp488 = $tmp489;
                                        ITable* $tmp490 = ((panda$collections$Iterable*) $tmp488)->$class->itable;
                                        while ($tmp490->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp490 = $tmp490->next;
                                        }
                                        $fn492 $tmp491 = $tmp490->methods[0];
                                        panda$collections$Iterator* $tmp493 = $tmp491(((panda$collections$Iterable*) $tmp488));
                                        $tmp487 = $tmp493;
                                        $tmp486 = $tmp487;
                                        Iter$256$17485 = $tmp486;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp486));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp487));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp488));
                                        $l494:;
                                        ITable* $tmp497 = Iter$256$17485->$class->itable;
                                        while ($tmp497->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp497 = $tmp497->next;
                                        }
                                        $fn499 $tmp498 = $tmp497->methods[0];
                                        panda$core$Bit $tmp500 = $tmp498(Iter$256$17485);
                                        panda$core$Bit $tmp501 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp500);
                                        bool $tmp496 = $tmp501.value;
                                        if (!$tmp496) goto $l495;
                                        {
                                            int $tmp504;
                                            {
                                                ITable* $tmp508 = Iter$256$17485->$class->itable;
                                                while ($tmp508->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp508 = $tmp508->next;
                                                }
                                                $fn510 $tmp509 = $tmp508->methods[1];
                                                panda$core$Object* $tmp511 = $tmp509(Iter$256$17485);
                                                $tmp507 = $tmp511;
                                                $tmp506 = ((org$pandalanguage$pandac$ClassDecl*) $tmp507);
                                                cl505 = $tmp506;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp506));
                                                panda$core$Panda$unref$panda$core$Object($tmp507);
                                                org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler450, cl505);
                                            }
                                            $tmp504 = -1;
                                            goto $l502;
                                            $l502:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl505));
                                            cl505 = NULL;
                                            switch ($tmp504) {
                                                case -1: goto $l512;
                                            }
                                            $l512:;
                                        }
                                        goto $l494;
                                        $l495:;
                                    }
                                    $tmp484 = -1;
                                    goto $l482;
                                    $l482:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$256$17485));
                                    Iter$256$17485 = NULL;
                                    switch ($tmp484) {
                                        case -1: goto $l513;
                                    }
                                    $l513:;
                                }
                            }
                            $tmp474 = -1;
                            goto $l472;
                            $l472:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s475));
                            s475 = NULL;
                            switch ($tmp474) {
                                case -1: goto $l514;
                            }
                            $l514:;
                        }
                        goto $l464;
                        $l465:;
                    }
                    $tmp456 = -1;
                    goto $l454;
                    $l454:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$255$13457));
                    Iter$255$13457 = NULL;
                    switch ($tmp456) {
                        case -1: goto $l515;
                    }
                    $l515:;
                }
                panda$core$Bit $tmp516 = panda$threads$MessageQueue$hasMessage$R$panda$core$Bit(errorQueue446);
                panda$core$Bit $tmp517 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp516);
                if ($tmp517.value) {
                {
                    {
                        int $tmp520;
                        {
                            ITable* $tmp524 = ((panda$collections$Iterable*) sources175)->$class->itable;
                            while ($tmp524->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp524 = $tmp524->next;
                            }
                            $fn526 $tmp525 = $tmp524->methods[0];
                            panda$collections$Iterator* $tmp527 = $tmp525(((panda$collections$Iterable*) sources175));
                            $tmp523 = $tmp527;
                            $tmp522 = $tmp523;
                            Iter$261$17521 = $tmp522;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp522));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp523));
                            $l528:;
                            ITable* $tmp531 = Iter$261$17521->$class->itable;
                            while ($tmp531->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp531 = $tmp531->next;
                            }
                            $fn533 $tmp532 = $tmp531->methods[0];
                            panda$core$Bit $tmp534 = $tmp532(Iter$261$17521);
                            panda$core$Bit $tmp535 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp534);
                            bool $tmp530 = $tmp535.value;
                            if (!$tmp530) goto $l529;
                            {
                                int $tmp538;
                                {
                                    ITable* $tmp542 = Iter$261$17521->$class->itable;
                                    while ($tmp542->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp542 = $tmp542->next;
                                    }
                                    $fn544 $tmp543 = $tmp542->methods[1];
                                    panda$core$Object* $tmp545 = $tmp543(Iter$261$17521);
                                    $tmp541 = $tmp545;
                                    $tmp540 = ((panda$io$File*) $tmp541);
                                    s539 = $tmp540;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp540));
                                    panda$core$Panda$unref$panda$core$Object($tmp541);
                                    org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler450, s539);
                                }
                                $tmp538 = -1;
                                goto $l536;
                                $l536:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s539));
                                s539 = NULL;
                                switch ($tmp538) {
                                    case -1: goto $l546;
                                }
                                $l546:;
                            }
                            goto $l528;
                            $l529:;
                        }
                        $tmp520 = -1;
                        goto $l518;
                        $l518:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$261$17521));
                        Iter$261$17521 = NULL;
                        switch ($tmp520) {
                            case -1: goto $l547;
                        }
                        $l547:;
                    }
                    org$pandalanguage$pandac$Compiler$finish(compiler450);
                }
                }
                panda$core$Int64 $tmp548 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(errorQueue446);
                errorCount408 = $tmp548;
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp549, ((panda$core$Int64) { 0 }), errorCount408, ((panda$core$Bit) { false }));
                int64_t $tmp551 = $tmp549.min.value;
                panda$core$Int64 i550 = { $tmp551 };
                int64_t $tmp553 = $tmp549.max.value;
                bool $tmp554 = $tmp549.inclusive.value;
                if ($tmp554) goto $l561; else goto $l562;
                $l561:;
                if ($tmp551 <= $tmp553) goto $l555; else goto $l557;
                $l562:;
                if ($tmp551 < $tmp553) goto $l555; else goto $l557;
                $l555:;
                {
                    int $tmp565;
                    {
                        panda$core$Immutable* $tmp569 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(errorQueue446);
                        $tmp568 = $tmp569;
                        $tmp567 = ((org$pandalanguage$pandac$Compiler$Error*) $tmp568);
                        error566 = $tmp567;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp567));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
                        panda$core$String* $tmp577 = panda$io$File$name$R$panda$core$String(error566->file);
                        $tmp576 = $tmp577;
                        panda$core$String* $tmp578 = panda$core$String$convert$R$panda$core$String($tmp576);
                        $tmp575 = $tmp578;
                        panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp575, &$s579);
                        $tmp574 = $tmp580;
                        org$pandalanguage$pandac$Position$wrapper* $tmp582;
                        $tmp582 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                        $tmp582->value = error566->position;
                        $tmp581 = ((panda$core$Object*) $tmp582);
                        panda$core$String* $tmp583 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp574, $tmp581);
                        $tmp573 = $tmp583;
                        panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp573, &$s584);
                        $tmp572 = $tmp585;
                        panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp572, error566->message);
                        $tmp571 = $tmp586;
                        panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp571, &$s587);
                        $tmp570 = $tmp588;
                        panda$io$Console$printLine$panda$core$String($tmp570);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp570));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp571));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp572));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
                        panda$core$Panda$unref$panda$core$Object($tmp581);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp574));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp575));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp576));
                    }
                    $tmp565 = -1;
                    goto $l563;
                    $l563:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) error566));
                    error566 = NULL;
                    switch ($tmp565) {
                        case -1: goto $l589;
                    }
                    $l589:;
                }
                $l558:;
                int64_t $tmp591 = $tmp553 - i550.value;
                if ($tmp554) goto $l592; else goto $l593;
                $l592:;
                if ((uint64_t) $tmp591 >= 1) goto $l590; else goto $l557;
                $l593:;
                if ((uint64_t) $tmp591 > 1) goto $l590; else goto $l557;
                $l590:;
                i550.value += 1;
                goto $l555;
                $l557:;
            }
            $tmp411 = -1;
            goto $l409;
            $l409:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg412));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings442));
            settings442 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) errorQueue446));
            errorQueue446 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler450));
            compiler450 = NULL;
            switch ($tmp411) {
                case -1: goto $l596;
            }
            $l596:;
        }
        panda$core$Bit $tmp597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount408, ((panda$core$Int64) { 0 }));
        if ($tmp597.value) {
        {
            {
                $match$274_17598 = format187;
                panda$core$Bit $tmp599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$274_17598.value), ((panda$core$Int64) { 918 }));
                if ($tmp599.value) {
                {
                    int $tmp602;
                    {
                        panda$io$File* $tmp608 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile183, &$s607);
                        $tmp606 = $tmp608;
                        panda$io$File* $tmp609 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp606, optimizationLevel185);
                        $tmp605 = $tmp609;
                        $tmp604 = $tmp605;
                        optimized603 = $tmp604;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp604));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp605));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp606));
                        panda$io$File* $tmp613 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized603);
                        $tmp612 = $tmp613;
                        $tmp611 = $tmp612;
                        assembly610 = $tmp611;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp611));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp612));
                        panda$io$File* $tmp615 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly610, outFile183);
                        $tmp614 = $tmp615;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp614));
                    }
                    $tmp602 = -1;
                    goto $l600;
                    $l600:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized603));
                    optimized603 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly610));
                    assembly610 = NULL;
                    switch ($tmp602) {
                        case -1: goto $l616;
                    }
                    $l616:;
                }
                }
                else {
                panda$core$Bit $tmp617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$274_17598.value), ((panda$core$Int64) { 919 }));
                if ($tmp617.value) {
                {
                    int $tmp620;
                    {
                        panda$io$File* $tmp626 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile183, &$s625);
                        $tmp624 = $tmp626;
                        panda$io$File* $tmp627 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp624, optimizationLevel185);
                        $tmp623 = $tmp627;
                        $tmp622 = $tmp623;
                        optimized621 = $tmp622;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp622));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp623));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp624));
                        panda$io$File* $tmp631 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized621);
                        $tmp630 = $tmp631;
                        $tmp629 = $tmp630;
                        assembly628 = $tmp629;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp629));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
                        panda$io$File* $tmp633 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly628, outFile183);
                        $tmp632 = $tmp633;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp632));
                    }
                    $tmp620 = -1;
                    goto $l618;
                    $l618:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized621));
                    optimized621 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly628));
                    assembly628 = NULL;
                    switch ($tmp620) {
                        case -1: goto $l634;
                    }
                    $l634:;
                }
                }
                }
            }
        }
        }
        else {
        {
            panda$core$Bit $tmp635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount408, ((panda$core$Int64) { 1 }));
            if ($tmp635.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s636);
            }
            }
            else {
            {
                panda$core$String* $tmp639 = panda$core$Int64$convert$R$panda$core$String(errorCount408);
                $tmp638 = $tmp639;
                panda$core$String* $tmp641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp638, &$s640);
                $tmp637 = $tmp641;
                panda$io$Console$printLine$panda$core$String($tmp637);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp637));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp638));
            }
            }
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
    }
    $tmp170 = -1;
    goto $l168;
    $l168:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args171));
    args171 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources175));
    sources175 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports179));
    imports179 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile183));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err188));
    err188 = NULL;
    switch ($tmp170) {
        case -1: goto $l642;
    }
    $l642:;
}
panda$core$Bit org$pandalanguage$pandac$Main$containsError$panda$core$String$R$panda$core$Bit(panda$core$String* p_s) {
    panda$core$Bit $returnValue643;
    panda$core$Bit $tmp645 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_s, &$s644);
    $returnValue643 = $tmp645;
    return $returnValue643;
}
panda$core$Bit panda$core$MutableMethod$$shim1$panda$collections$Iterator$T$R$panda$core$Bit(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar650 = NULL;
    panda$core$MutableMethod* $tmp651;
    panda$core$Method* $tmp652;
    panda$core$Object* $tmp654;
    panda$core$Object* $tmp655;
    panda$core$Bit $returnValue656;
    panda$core$Bit $tmp657;
    int $tmp649;
    {
        panda$core$Method* $tmp653 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp653, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp652 = $tmp653;
        $tmp651 = ((panda$core$MutableMethod*) $tmp652);
        methodVar650 = $tmp651;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp651));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp652));
        {
            $tmp654 = methodVar650->target;
            $tmp655 = self->target;
            methodVar650->target = $tmp655;
            panda$core$Panda$ref$panda$core$Object($tmp655);
            panda$core$Panda$unref$panda$core$Object($tmp654);
        }
        if (methodVar650->target) {
            $tmp657 = (($fn658) methodVar650->pointer)(((panda$core$String*) methodVar650->target), ((panda$core$String*) p_p0));
        } else {
            $tmp657 = (($fn659) methodVar650->pointer)(((panda$core$String*) p_p0));
        }
        $returnValue656 = $tmp657;
        $tmp649 = 0;
        goto $l647;
        $l660:;
        return $returnValue656;
    }
    $l647:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar650));
    methodVar650 = NULL;
    switch ($tmp649) {
        case 0: goto $l660;
    }
    $l662:;
}
void pandaMain(panda$collections$ListView* p_args) {
    panda$core$Object* $tmp663;
    panda$collections$Iterator* Iter$303$13673 = NULL;
    panda$collections$Iterator* $tmp674;
    panda$collections$Iterator* $tmp675;
    panda$collections$Iterator* $tmp676;
    panda$io$File* $tmp677;
    panda$core$String* line698 = NULL;
    panda$core$String* $tmp699;
    panda$core$Object* $tmp700;
    org$pandalanguage$pandac$Main* $tmp707;
    ITable* $tmp664 = p_args->$class->itable;
    while ($tmp664->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp664 = $tmp664->next;
    }
    $fn666 $tmp665 = $tmp664->methods[0];
    panda$core$Object* $tmp667 = $tmp665(p_args, ((panda$core$Int64) { 1 }));
    $tmp663 = $tmp667;
    panda$core$Bit $tmp669 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((panda$core$String*) $tmp663), &$s668);
    panda$core$Panda$unref$panda$core$Object($tmp663);
    if ($tmp669.value) {
    {
        {
            int $tmp672;
            {
                panda$io$File* $tmp678 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                panda$io$File$init$panda$core$String($tmp678, &$s679);
                $tmp677 = $tmp678;
                panda$collections$Iterator* $tmp680 = panda$io$File$lines$R$panda$collections$Iterator$LTpanda$core$String$GT($tmp677);
                $tmp676 = $tmp680;
                panda$core$MutableMethod* $tmp681 = (panda$core$MutableMethod*) pandaObjectAlloc(32, &panda$core$MutableMethod$class);
                panda$core$MutableMethod* $tmp682 = (panda$core$MutableMethod*) pandaObjectAlloc(32, &panda$core$MutableMethod$class);
                panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp682, org$pandalanguage$pandac$Main$containsError$panda$core$String$R$panda$core$Bit, NULL);
                panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp681, panda$core$MutableMethod$$shim1$panda$collections$Iterator$T$R$panda$core$Bit, ((panda$core$Object*) ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp682))));
                ITable* $tmp683 = $tmp676->$class->itable;
                while ($tmp683->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp683 = $tmp683->next;
                }
                $fn685 $tmp684 = $tmp683->methods[2];
                panda$collections$Iterator* $tmp686 = $tmp684($tmp676, ((panda$core$Object*) $tmp681));
                $tmp675 = $tmp686;
                $tmp674 = $tmp675;
                Iter$303$13673 = $tmp674;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp674));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp675));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp681));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp682));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp676));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp677));
                $l687:;
                ITable* $tmp690 = Iter$303$13673->$class->itable;
                while ($tmp690->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp690 = $tmp690->next;
                }
                $fn692 $tmp691 = $tmp690->methods[0];
                panda$core$Bit $tmp693 = $tmp691(Iter$303$13673);
                panda$core$Bit $tmp694 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp693);
                bool $tmp689 = $tmp694.value;
                if (!$tmp689) goto $l688;
                {
                    int $tmp697;
                    {
                        ITable* $tmp701 = Iter$303$13673->$class->itable;
                        while ($tmp701->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp701 = $tmp701->next;
                        }
                        $fn703 $tmp702 = $tmp701->methods[1];
                        panda$core$Object* $tmp704 = $tmp702(Iter$303$13673);
                        $tmp700 = $tmp704;
                        $tmp699 = ((panda$core$String*) $tmp700);
                        line698 = $tmp699;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp699));
                        panda$core$Panda$unref$panda$core$Object($tmp700);
                        panda$io$Console$printLine$panda$core$String(line698);
                    }
                    $tmp697 = -1;
                    goto $l695;
                    $l695:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) line698));
                    line698 = NULL;
                    switch ($tmp697) {
                        case -1: goto $l705;
                    }
                    $l705:;
                }
                goto $l687;
                $l688:;
            }
            $tmp672 = -1;
            goto $l670;
            $l670:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$303$13673));
            Iter$303$13673 = NULL;
            switch ($tmp672) {
                case -1: goto $l706;
            }
            $l706:;
        }
    }
    }
    org$pandalanguage$pandac$Main* $tmp708 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
    org$pandalanguage$pandac$Main$init($tmp708);
    $tmp707 = $tmp708;
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp707, p_args);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp707));
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    int $tmp711;
    {
    }
    $tmp711 = -1;
    goto $l709;
    $l709:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp711) {
        case -1: goto $l712;
    }
    $l712:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llvmDir));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->triple));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

