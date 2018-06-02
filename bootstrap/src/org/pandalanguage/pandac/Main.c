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

typedef panda$core$String* (*$fn49)(panda$io$InputStream*);
typedef void (*$fn51)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn81)(panda$io$InputStream*);
typedef void (*$fn83)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn111)(panda$io$InputStream*);
typedef void (*$fn113)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn117)(panda$io$InputStream*);
typedef void (*$fn119)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn153)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn160)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn171)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn213)(panda$io$InputStream*);
typedef void (*$fn215)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn219)(panda$io$InputStream*);
typedef void (*$fn221)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn232)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn233)(panda$io$OutputStream*);
typedef void (*$fn235)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn236)(panda$io$OutputStream*);
typedef void (*$fn238)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn240)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn270)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn279)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn300)(panda$io$InputStream*, panda$io$OutputStream*);
typedef void (*$fn305)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn313)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn326)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn339)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn351)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn364)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn373)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn379)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn407)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn417)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn427)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn435)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn452)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn475)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn524)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn589)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn596)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn607)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn619)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn626)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn637)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn651)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn658)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn669)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e", 29, -3248623696873689241, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x35\x2e\x30", 27, -855196788127931458, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78\x38\x36\x5f\x36\x34\x2d\x61\x70\x70\x6c\x65\x2d\x64\x61\x72\x77\x69\x6e\x31\x37\x2e\x33\x2e\x30", 25, 2390944900235185536, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f\x70\x74", 4, 152597986, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x69\x6e\x74", 5, 15305173385, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73", 2, 14962, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x72\x65\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x6d\x6f\x64\x65\x6c\x3d\x70\x69\x63", 21, 7895568360759315925, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c\x2e", 3, 1497068, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x2f\x6c\x69\x62\x69\x63\x75\x75\x63\x2e\x61\x3b\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x2f\x6c\x69\x62\x69\x63\x75\x69\x31\x38\x6e\x2e\x64\x79\x6c\x69\x62", 57, -9070932862195135721, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x70\x61\x6e\x64\x61", 15, -4231800707287400719, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x6c\x6c\x76\x6d\x5f\x64\x69\x72", 10, -5843666376324264096, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x74\x68\x65\x20\x4c\x4c\x56\x4d\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 28, -1635669018571610865, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x74\x72\x69\x70\x6c\x65", 8, 15702175691418347, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4c\x56\x4d\x20\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6c\x65", 18, -7134459153622240993, NULL };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static panda$core$String $s776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };

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
    panda$core$Int64 $tmp16;
    panda$io$File* $returnValue18;
    panda$io$File* $tmp19;
    panda$io$File* dest22 = NULL;
    panda$io$File* $tmp23;
    panda$io$File* $tmp24;
    panda$collections$Array* args27 = NULL;
    panda$collections$Array* $tmp28;
    panda$collections$Array* $tmp29;
    panda$core$String* $tmp32;
    panda$core$String* $tmp33;
    panda$core$Object* $tmp35;
    panda$core$System$Process* p42 = NULL;
    panda$core$System$Process* $tmp43;
    panda$core$System$Process* $tmp44;
    panda$io$OutputStream* $tmp46;
    panda$core$String* $tmp48;
    panda$core$Int64 $tmp52;
    panda$core$Int64 $tmp53;
    panda$core$Int64 $tmp55;
    panda$io$File* $tmp56;
    int $tmp15;
    {
        panda$core$Int64$init$builtin_int64(&$tmp16, 0);
        panda$core$Bit $tmp17 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_level, $tmp16);
        if ($tmp17.value) {
        {
            $tmp19 = p_llvm;
            $returnValue18 = $tmp19;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
            $tmp15 = 0;
            goto $l13;
            $l20:;
            return $returnValue18;
        }
        }
        panda$io$File* $tmp26 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s25);
        $tmp24 = $tmp26;
        $tmp23 = $tmp24;
        dest22 = $tmp23;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
        panda$collections$Array* $tmp30 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp30);
        $tmp29 = $tmp30;
        $tmp28 = $tmp29;
        args27 = $tmp28;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
        panda$collections$Array$add$panda$collections$Array$T(args27, ((panda$core$Object*) &$s31));
        panda$core$Int64$wrapper* $tmp36;
        $tmp36 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp36->value = p_level;
        $tmp35 = ((panda$core$Object*) $tmp36);
        panda$core$String* $tmp37 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s34, $tmp35);
        $tmp33 = $tmp37;
        panda$core$String* $tmp39 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp33, &$s38);
        $tmp32 = $tmp39;
        panda$collections$Array$add$panda$collections$Array$T(args27, ((panda$core$Object*) $tmp32));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
        panda$core$Panda$unref$panda$core$Object($tmp35);
        panda$collections$Array$add$panda$collections$Array$T(args27, ((panda$core$Object*) &$s40));
        panda$collections$Array$add$panda$collections$Array$T(args27, ((panda$core$Object*) p_llvm->path));
        panda$collections$Array$add$panda$collections$Array$T(args27, ((panda$core$Object*) &$s41));
        panda$collections$Array$add$panda$collections$Array$T(args27, ((panda$core$Object*) dest22->path));
        panda$core$System$Process* $tmp45 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->opt, ((panda$collections$ListView*) args27));
        $tmp44 = $tmp45;
        $tmp43 = $tmp44;
        p42 = $tmp43;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp43));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
        panda$io$OutputStream* $tmp47 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp46 = $tmp47;
        panda$core$String* $tmp50 = (($fn49) p42->error->$class->vtable[6])(p42->error);
        $tmp48 = $tmp50;
        (($fn51) $tmp46->$class->vtable[16])($tmp46, $tmp48);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp52, p42);
        panda$core$Int64$init$builtin_int64(&$tmp53, 0);
        panda$core$Bit $tmp54 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp52, $tmp53);
        if ($tmp54.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp55, 1);
            panda$core$System$exit$panda$core$Int64($tmp55);
        }
        }
        $tmp56 = dest22;
        $returnValue18 = $tmp56;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp56));
        $tmp15 = 1;
        goto $l13;
        $l57:;
        return $returnValue18;
    }
    $l13:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p42));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args27));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest22));
    dest22 = NULL;
    args27 = NULL;
    p42 = NULL;
    switch ($tmp15) {
        case 0: goto $l20;
        case 1: goto $l57;
    }
    $l59:;
    abort();
}
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm) {
    panda$io$File* dest63 = NULL;
    panda$io$File* $tmp64;
    panda$io$File* $tmp65;
    panda$collections$Array* args68 = NULL;
    panda$collections$Array* $tmp69;
    panda$collections$Array* $tmp70;
    panda$core$System$Process* p74 = NULL;
    panda$core$System$Process* $tmp75;
    panda$core$System$Process* $tmp76;
    panda$io$OutputStream* $tmp78;
    panda$core$String* $tmp80;
    panda$core$Int64 $tmp84;
    panda$core$Int64 $tmp85;
    panda$core$Int64 $tmp87;
    panda$io$File* $returnValue88;
    panda$io$File* $tmp89;
    int $tmp62;
    {
        panda$io$File* $tmp67 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s66);
        $tmp65 = $tmp67;
        $tmp64 = $tmp65;
        dest63 = $tmp64;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp64));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
        panda$collections$Array* $tmp71 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp71);
        $tmp70 = $tmp71;
        $tmp69 = $tmp70;
        args68 = $tmp69;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp69));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
        panda$collections$Array$add$panda$collections$Array$T(args68, ((panda$core$Object*) p_llvm->path));
        panda$collections$Array$add$panda$collections$Array$T(args68, ((panda$core$Object*) &$s72));
        panda$collections$Array$add$panda$collections$Array$T(args68, ((panda$core$Object*) &$s73));
        panda$collections$Array$add$panda$collections$Array$T(args68, ((panda$core$Object*) dest63->path));
        panda$core$System$Process* $tmp77 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->llc, ((panda$collections$ListView*) args68));
        $tmp76 = $tmp77;
        $tmp75 = $tmp76;
        p74 = $tmp75;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp75));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp76));
        panda$io$OutputStream* $tmp79 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp78 = $tmp79;
        panda$core$String* $tmp82 = (($fn81) p74->error->$class->vtable[6])(p74->error);
        $tmp80 = $tmp82;
        (($fn83) $tmp78->$class->vtable[16])($tmp78, $tmp80);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp84, p74);
        panda$core$Int64$init$builtin_int64(&$tmp85, 0);
        panda$core$Bit $tmp86 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp84, $tmp85);
        if ($tmp86.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp87, 1);
            panda$core$System$exit$panda$core$Int64($tmp87);
        }
        }
        $tmp89 = dest63;
        $returnValue88 = $tmp89;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp89));
        $tmp62 = 0;
        goto $l60;
        $l90:;
        return $returnValue88;
    }
    $l60:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p74));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args68));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest63));
    dest63 = NULL;
    args68 = NULL;
    p74 = NULL;
    switch ($tmp62) {
        case 0: goto $l90;
    }
    $l92:;
    abort();
}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args96 = NULL;
    panda$collections$Array* $tmp97;
    panda$collections$Array* $tmp98;
    panda$core$System$Process* p104 = NULL;
    panda$core$System$Process* $tmp105;
    panda$core$System$Process* $tmp106;
    panda$io$OutputStream* $tmp108;
    panda$core$String* $tmp110;
    panda$io$OutputStream* $tmp114;
    panda$core$String* $tmp116;
    panda$core$Int64 $tmp120;
    panda$core$Int64 $tmp121;
    panda$core$Int64 $tmp123;
    panda$io$File* $returnValue124;
    panda$io$File* $tmp125;
    int $tmp95;
    {
        panda$collections$Array* $tmp99 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp99);
        $tmp98 = $tmp99;
        $tmp97 = $tmp98;
        args96 = $tmp97;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp97));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
        panda$collections$Array$add$panda$collections$Array$T(args96, ((panda$core$Object*) p_assembly->path));
        panda$collections$Array$add$panda$collections$Array$T(args96, ((panda$core$Object*) &$s100));
        panda$collections$Array$add$panda$collections$Array$T(args96, ((panda$core$Object*) &$s101));
        panda$collections$Array$add$panda$collections$Array$T(args96, ((panda$core$Object*) &$s102));
        panda$collections$Array$add$panda$collections$Array$T(args96, ((panda$core$Object*) &$s103));
        panda$collections$Array$add$panda$collections$Array$T(args96, ((panda$core$Object*) p_dest->path));
        panda$core$System$Process* $tmp107 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args96));
        $tmp106 = $tmp107;
        $tmp105 = $tmp106;
        p104 = $tmp105;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
        panda$io$OutputStream* $tmp109 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp108 = $tmp109;
        panda$core$String* $tmp112 = (($fn111) p104->output->$class->vtable[6])(p104->output);
        $tmp110 = $tmp112;
        (($fn113) $tmp108->$class->vtable[16])($tmp108, $tmp110);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp108));
        panda$io$OutputStream* $tmp115 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp114 = $tmp115;
        panda$core$String* $tmp118 = (($fn117) p104->error->$class->vtable[6])(p104->error);
        $tmp116 = $tmp118;
        (($fn119) $tmp114->$class->vtable[16])($tmp114, $tmp116);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp116));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp120, p104);
        panda$core$Int64$init$builtin_int64(&$tmp121, 0);
        panda$core$Bit $tmp122 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp120, $tmp121);
        if ($tmp122.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp123, 1);
            panda$core$System$exit$panda$core$Int64($tmp123);
        }
        }
        $tmp125 = p_dest;
        $returnValue124 = $tmp125;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp125));
        $tmp95 = 0;
        goto $l93;
        $l126:;
        return $returnValue124;
    }
    $l93:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p104));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args96));
    args96 = NULL;
    p104 = NULL;
    switch ($tmp95) {
        case 0: goto $l126;
    }
    $l128:;
    abort();
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args132 = NULL;
    panda$collections$Array* $tmp133;
    panda$collections$Array* $tmp134;
    panda$collections$Array* icuLibs139 = NULL;
    panda$collections$Array* $tmp140;
    panda$collections$Array* $tmp141;
    panda$collections$Iterator* Iter$119$9148 = NULL;
    panda$collections$Iterator* $tmp149;
    panda$collections$Iterator* $tmp150;
    panda$core$String* lib166 = NULL;
    panda$core$String* $tmp167;
    panda$core$Object* $tmp168;
    panda$io$File* libFile173 = NULL;
    panda$io$File* $tmp174;
    panda$io$File* $tmp175;
    panda$core$String* $tmp177;
    panda$io$File* $tmp179;
    panda$core$String* simpleName182 = NULL;
    panda$core$String* $tmp183;
    panda$core$String* $tmp184;
    panda$core$String* $tmp191;
    panda$core$String* $tmp192;
    panda$core$String* $tmp193;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp194;
    panda$core$Int64 $tmp195;
    panda$core$Bit $tmp196;
    panda$core$String* $tmp198;
    panda$core$System$Process* p206 = NULL;
    panda$core$System$Process* $tmp207;
    panda$core$System$Process* $tmp208;
    panda$io$OutputStream* $tmp210;
    panda$core$String* $tmp212;
    panda$io$OutputStream* $tmp216;
    panda$core$String* $tmp218;
    panda$core$Int64 $tmp222;
    panda$core$Int64 $tmp223;
    panda$core$Int64 $tmp225;
    panda$io$File* $returnValue226;
    panda$io$File* $tmp227;
    int $tmp131;
    {
        panda$collections$Array* $tmp135 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp135);
        $tmp134 = $tmp135;
        $tmp133 = $tmp134;
        args132 = $tmp133;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp133));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) p_assembly->path));
        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) &$s136));
        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) &$s137));
        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) &$s138));
        panda$collections$Array* $tmp144 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(&$s142, &$s143);
        $tmp141 = $tmp144;
        $tmp140 = $tmp141;
        icuLibs139 = $tmp140;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp140));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp141));
        {
            int $tmp147;
            {
                ITable* $tmp151 = ((panda$collections$Iterable*) icuLibs139)->$class->itable;
                while ($tmp151->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp151 = $tmp151->next;
                }
                $fn153 $tmp152 = $tmp151->methods[0];
                panda$collections$Iterator* $tmp154 = $tmp152(((panda$collections$Iterable*) icuLibs139));
                $tmp150 = $tmp154;
                $tmp149 = $tmp150;
                Iter$119$9148 = $tmp149;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
                $l155:;
                ITable* $tmp158 = Iter$119$9148->$class->itable;
                while ($tmp158->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp158 = $tmp158->next;
                }
                $fn160 $tmp159 = $tmp158->methods[0];
                panda$core$Bit $tmp161 = $tmp159(Iter$119$9148);
                panda$core$Bit $tmp162 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp161);
                bool $tmp157 = $tmp162.value;
                if (!$tmp157) goto $l156;
                {
                    int $tmp165;
                    {
                        ITable* $tmp169 = Iter$119$9148->$class->itable;
                        while ($tmp169->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp169 = $tmp169->next;
                        }
                        $fn171 $tmp170 = $tmp169->methods[1];
                        panda$core$Object* $tmp172 = $tmp170(Iter$119$9148);
                        $tmp168 = $tmp172;
                        $tmp167 = ((panda$core$String*) $tmp168);
                        lib166 = $tmp167;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp167));
                        panda$core$Panda$unref$panda$core$Object($tmp168);
                        panda$io$File* $tmp176 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$io$File$init$panda$core$String($tmp176, lib166);
                        $tmp175 = $tmp176;
                        $tmp174 = $tmp175;
                        libFile173 = $tmp174;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp174));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp175));
                        panda$io$File* $tmp180 = panda$io$File$parent$R$panda$io$File$Q(libFile173);
                        $tmp179 = $tmp180;
                        panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s178, ((panda$core$Object*) $tmp179));
                        $tmp177 = $tmp181;
                        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) $tmp177));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
                        panda$core$String* $tmp185 = panda$io$File$simpleName$R$panda$core$String(libFile173);
                        $tmp184 = $tmp185;
                        $tmp183 = $tmp184;
                        simpleName182 = $tmp183;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp183));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp184));
                        panda$core$Bit $tmp187 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(simpleName182, &$s186);
                        if ($tmp187.value) goto $l188; else goto $l189;
                        $l189:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s190, (panda$core$Int64) { 123 });
                        abort();
                        $l188:;
                        {
                            $tmp191 = simpleName182;
                            panda$core$Int64$init$builtin_int64(&$tmp195, 3);
                            panda$core$Bit$init$builtin_bit(&$tmp196, false);
                            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp194, ((panda$core$Int64$nullable) { $tmp195, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp196);
                            panda$core$String* $tmp197 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(simpleName182, $tmp194);
                            $tmp193 = $tmp197;
                            $tmp192 = $tmp193;
                            simpleName182 = $tmp192;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp192));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp193));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp191));
                        }
                        panda$core$String* $tmp200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s199, simpleName182);
                        $tmp198 = $tmp200;
                        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) $tmp198));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
                    }
                    $tmp165 = -1;
                    goto $l163;
                    $l163:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) simpleName182));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) libFile173));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) lib166));
                    lib166 = NULL;
                    libFile173 = NULL;
                    simpleName182 = NULL;
                    switch ($tmp165) {
                        case -1: goto $l201;
                    }
                    $l201:;
                }
                goto $l155;
                $l156:;
            }
            $tmp147 = -1;
            goto $l145;
            $l145:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$119$9148));
            Iter$119$9148 = NULL;
            switch ($tmp147) {
                case -1: goto $l202;
            }
            $l202:;
        }
        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) &$s203));
        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) &$s204));
        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) &$s205));
        panda$collections$Array$add$panda$collections$Array$T(args132, ((panda$core$Object*) p_dest->path));
        panda$core$System$Process* $tmp209 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args132));
        $tmp208 = $tmp209;
        $tmp207 = $tmp208;
        p206 = $tmp207;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp207));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp208));
        panda$io$OutputStream* $tmp211 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp210 = $tmp211;
        panda$core$String* $tmp214 = (($fn213) p206->output->$class->vtable[6])(p206->output);
        $tmp212 = $tmp214;
        (($fn215) $tmp210->$class->vtable[16])($tmp210, $tmp212);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
        panda$io$OutputStream* $tmp217 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp216 = $tmp217;
        panda$core$String* $tmp220 = (($fn219) p206->error->$class->vtable[6])(p206->error);
        $tmp218 = $tmp220;
        (($fn221) $tmp216->$class->vtable[16])($tmp216, $tmp218);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp216));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp222, p206);
        panda$core$Int64$init$builtin_int64(&$tmp223, 0);
        panda$core$Bit $tmp224 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp222, $tmp223);
        if ($tmp224.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp225, 1);
            panda$core$System$exit$panda$core$Int64($tmp225);
        }
        }
        $tmp227 = p_dest;
        $returnValue226 = $tmp227;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp227));
        $tmp131 = 0;
        goto $l129;
        $l228:;
        return $returnValue226;
    }
    $l129:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p206));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) icuLibs139));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args132));
    args132 = NULL;
    icuLibs139 = NULL;
    p206 = NULL;
    switch ($tmp131) {
        case 0: goto $l228;
    }
    $l230:;
    abort();
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn232) p_out->$class->vtable[19])(p_out, &$s231);
    (($fn233) p_out->$class->vtable[17])(p_out);
    (($fn235) p_out->$class->vtable[19])(p_out, &$s234);
    (($fn236) p_out->$class->vtable[17])(p_out);
    (($fn238) p_out->$class->vtable[19])(p_out, &$s237);
    (($fn240) p_out->$class->vtable[19])(p_out, &$s239);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args244 = NULL;
    org$pandalanguage$pandac$Main$Arguments* $tmp245;
    org$pandalanguage$pandac$Main$Arguments* $tmp246;
    panda$collections$Array* sources248 = NULL;
    panda$collections$Array* $tmp249;
    panda$collections$Array* $tmp250;
    panda$collections$Array* imports252 = NULL;
    panda$collections$Array* $tmp253;
    panda$collections$Array* $tmp254;
    panda$io$File* outFile256 = NULL;
    panda$io$File* $tmp257;
    panda$core$Int64 optimizationLevel258;
    panda$core$Int64 $tmp259;
    panda$core$Int64 safetyLevel260;
    panda$core$Int64 $tmp261;
    panda$core$Int64$nullable format262;
    panda$io$OutputStream* err263 = NULL;
    panda$io$OutputStream* $tmp264;
    panda$io$OutputStream* $tmp265;
    panda$core$String* a276 = NULL;
    panda$core$String* $tmp277;
    panda$core$String* $tmp278;
    panda$core$String* $match$161_13284 = NULL;
    panda$core$String* $tmp285;
    panda$io$File* path291 = NULL;
    panda$io$File* $tmp292;
    panda$io$File* $tmp293;
    panda$io$InputStream* $tmp296;
    panda$io$OutputStream* $tmp298;
    panda$core$Int64 $tmp306;
    panda$io$File* $tmp307;
    panda$io$File* $tmp308;
    panda$io$File* $tmp309;
    panda$core$String* $tmp311;
    panda$io$File* $tmp315;
    panda$core$String* level322 = NULL;
    panda$core$String* $tmp323;
    panda$core$String* $tmp324;
    panda$core$Int64 $tmp330;
    panda$core$Int64 $tmp333;
    panda$io$OutputStream* $tmp336;
    panda$core$Int64 $tmp340;
    panda$core$String* level347 = NULL;
    panda$core$String* $tmp348;
    panda$core$String* $tmp349;
    panda$core$Int64 $tmp355;
    panda$core$Int64 $tmp358;
    panda$io$OutputStream* $tmp361;
    panda$core$Int64 $tmp365;
    panda$core$Int64 $tmp374;
    panda$core$String* f375 = NULL;
    panda$core$String* $tmp376;
    panda$core$String* $tmp377;
    panda$core$String* $match$193_21384 = NULL;
    panda$core$String* $tmp385;
    panda$core$Int64 $tmp388;
    panda$core$Int64 $tmp391;
    panda$core$Int64 $tmp394;
    panda$core$Int64 $tmp397;
    panda$core$Int64 $tmp400;
    panda$core$String* $tmp401;
    panda$core$String* $tmp402;
    panda$core$Int64 $tmp408;
    panda$io$File* $tmp413;
    panda$core$String* $tmp415;
    panda$io$File* $tmp421;
    panda$io$File* $tmp422;
    panda$io$File* $tmp423;
    panda$core$String* $tmp425;
    panda$core$String* $tmp431;
    panda$core$String* $tmp432;
    panda$core$String* $tmp433;
    panda$core$String* $tmp440;
    panda$io$File* $tmp444;
    panda$core$String* $tmp446;
    panda$core$String* $tmp447;
    panda$core$Int64 $tmp453;
    panda$io$File* $tmp456;
    panda$io$File* $tmp457;
    panda$io$File* $tmp458;
    panda$io$File* $tmp461;
    panda$io$File* $tmp462;
    panda$io$File* $tmp463;
    panda$io$File* $tmp466;
    panda$io$File* $tmp467;
    panda$io$File* $tmp468;
    panda$core$Int64 $tmp472;
    panda$core$Int64 $tmp476;
    panda$core$Int64 $tmp477;
    panda$core$Int64 $tmp479;
    panda$core$String* extension484 = NULL;
    panda$core$Int64$nullable $match$236_21485;
    panda$core$Int64 $tmp486;
    panda$core$String* $tmp488;
    panda$core$String* $tmp489;
    panda$core$Int64 $tmp491;
    panda$core$String* $tmp493;
    panda$core$String* $tmp494;
    panda$core$Int64 $tmp496;
    panda$core$String* $tmp498;
    panda$core$String* $tmp499;
    panda$core$Int64 $tmp501;
    panda$core$String* $tmp503;
    panda$core$String* $tmp504;
    panda$core$Int64 $tmp506;
    panda$core$String* $tmp508;
    panda$core$String* $tmp509;
    panda$core$Bit $tmp511;
    panda$io$File* $tmp515;
    panda$io$File* $tmp516;
    panda$io$File* $tmp517;
    panda$core$Object* $tmp518;
    panda$core$Int64 $tmp519;
    panda$core$Int64 $tmp525;
    panda$core$Int64 errorCount526;
    org$pandalanguage$pandac$CodeGenerator* cg530 = NULL;
    panda$core$Int64$nullable $match$255_17531;
    panda$core$Int64 $tmp534;
    panda$core$Int64 $tmp537;
    panda$core$Int64 $tmp541;
    org$pandalanguage$pandac$CodeGenerator* $tmp544;
    org$pandalanguage$pandac$CodeGenerator* $tmp545;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp546;
    panda$io$OutputStream* $tmp548;
    panda$io$File* $tmp549;
    panda$core$Int64 $tmp553;
    org$pandalanguage$pandac$CodeGenerator* $tmp555;
    org$pandalanguage$pandac$CodeGenerator* $tmp556;
    org$pandalanguage$pandac$HCodeGenerator* $tmp557;
    panda$core$Int64 $tmp559;
    org$pandalanguage$pandac$CodeGenerator* $tmp561;
    org$pandalanguage$pandac$CodeGenerator* $tmp562;
    org$pandalanguage$pandac$CCodeGenerator* $tmp563;
    panda$core$Bit $tmp565;
    org$pandalanguage$pandac$Compiler$Settings* settings569 = NULL;
    org$pandalanguage$pandac$Compiler$Settings* $tmp570;
    org$pandalanguage$pandac$Compiler$Settings* $tmp571;
    panda$threads$MessageQueue* errorQueue573 = NULL;
    panda$threads$MessageQueue* $tmp574;
    panda$threads$MessageQueue* $tmp575;
    org$pandalanguage$pandac$Compiler* compiler577 = NULL;
    org$pandalanguage$pandac$Compiler* $tmp578;
    org$pandalanguage$pandac$Compiler* $tmp579;
    panda$collections$Iterator* Iter$268$13584 = NULL;
    panda$collections$Iterator* $tmp585;
    panda$collections$Iterator* $tmp586;
    panda$io$File* s602 = NULL;
    panda$io$File* $tmp603;
    panda$core$Object* $tmp604;
    panda$collections$Iterator* Iter$269$17612 = NULL;
    panda$collections$Iterator* $tmp613;
    panda$collections$Iterator* $tmp614;
    panda$collections$ListView* $tmp615;
    org$pandalanguage$pandac$ClassDecl* cl632 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp633;
    panda$core$Object* $tmp634;
    panda$collections$Iterator* Iter$273$13646 = NULL;
    panda$collections$Iterator* $tmp647;
    panda$collections$Iterator* $tmp648;
    panda$io$File* s664 = NULL;
    panda$io$File* $tmp665;
    panda$core$Object* $tmp666;
    panda$core$Range$LTpanda$core$Int64$GT $tmp674;
    panda$core$Int64 $tmp675;
    panda$core$Bit $tmp676;
    org$pandalanguage$pandac$Compiler$Error* error693 = NULL;
    org$pandalanguage$pandac$Compiler$Error* $tmp694;
    panda$core$Immutable* $tmp695;
    panda$core$String* $tmp697;
    panda$core$String* $tmp698;
    panda$core$String* $tmp699;
    panda$core$String* $tmp700;
    panda$core$String* $tmp701;
    panda$core$String* $tmp702;
    panda$core$String* $tmp703;
    panda$core$Object* $tmp708;
    panda$core$Int64 $tmp724;
    panda$core$Int64$nullable $match$285_17726;
    panda$core$Int64 $tmp727;
    panda$io$File* optimized732 = NULL;
    panda$io$File* $tmp733;
    panda$io$File* $tmp734;
    panda$io$File* $tmp735;
    panda$io$File* assembly739 = NULL;
    panda$io$File* $tmp740;
    panda$io$File* $tmp741;
    panda$io$File* $tmp743;
    panda$core$Int64 $tmp746;
    panda$io$File* optimized751 = NULL;
    panda$io$File* $tmp752;
    panda$io$File* $tmp753;
    panda$io$File* $tmp754;
    panda$io$File* assembly758 = NULL;
    panda$io$File* $tmp759;
    panda$io$File* $tmp760;
    panda$io$File* $tmp762;
    panda$core$Int64 $tmp765;
    panda$core$String* $tmp768;
    panda$core$String* $tmp769;
    panda$core$Int64 $tmp773;
    int $tmp243;
    {
        org$pandalanguage$pandac$Main$Arguments* $tmp247 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
        org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp247, p_rawArgs);
        $tmp246 = $tmp247;
        $tmp245 = $tmp246;
        args244 = $tmp245;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp245));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
        panda$collections$Array* $tmp251 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp251);
        $tmp250 = $tmp251;
        $tmp249 = $tmp250;
        sources248 = $tmp249;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp249));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp250));
        panda$collections$Array* $tmp255 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp255);
        $tmp254 = $tmp255;
        $tmp253 = $tmp254;
        imports252 = $tmp253;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp253));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
        panda$collections$Array$add$panda$collections$Array$T(imports252, ((panda$core$Object*) self->pandaHome));
        $tmp257 = NULL;
        outFile256 = $tmp257;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp257));
        panda$core$Int64$init$builtin_int64(&$tmp259, 3);
        optimizationLevel258 = $tmp259;
        panda$core$Int64$init$builtin_int64(&$tmp261, 3);
        safetyLevel260 = $tmp261;
        format262 = ((panda$core$Int64$nullable) { .nonnull = false });
        panda$io$OutputStream* $tmp266 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp265 = $tmp266;
        $tmp264 = $tmp265;
        err263 = $tmp264;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp264));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp265));
        $l267:;
        panda$core$Bit $tmp271 = (($fn270) args244->$class->vtable[2])(args244);
        panda$core$Bit $tmp272 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp271);
        bool $tmp269 = $tmp272.value;
        if (!$tmp269) goto $l268;
        {
            int $tmp275;
            {
                panda$core$String* $tmp280 = (($fn279) args244->$class->vtable[3])(args244);
                $tmp278 = $tmp280;
                $tmp277 = $tmp278;
                a276 = $tmp277;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp277));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp278));
                int $tmp283;
                {
                    $tmp285 = a276;
                    $match$161_13284 = $tmp285;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp285));
                    panda$core$Bit $tmp287 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13284, &$s286);
                    if ($tmp287.value) {
                    {
                        int $tmp290;
                        {
                            panda$io$File* $tmp294 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp294, &$s295);
                            $tmp293 = $tmp294;
                            $tmp292 = $tmp293;
                            path291 = $tmp292;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp292));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp293));
                            panda$io$InputStream* $tmp297 = panda$io$Console$inputStream$R$panda$io$InputStream();
                            $tmp296 = $tmp297;
                            panda$io$OutputStream* $tmp299 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path291);
                            $tmp298 = $tmp299;
                            (($fn300) $tmp296->$class->vtable[12])($tmp296, $tmp298);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp296));
                            panda$collections$Array$add$panda$collections$Array$T(sources248, ((panda$core$Object*) path291));
                        }
                        $tmp290 = -1;
                        goto $l288;
                        $l288:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) path291));
                        path291 = NULL;
                        switch ($tmp290) {
                            case -1: goto $l301;
                        }
                        $l301:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp303 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13284, &$s302);
                    if ($tmp303.value) {
                    {
                        if (((panda$core$Bit) { outFile256 != NULL }).value) {
                        {
                            (($fn305) err263->$class->vtable[19])(err263, &$s304);
                            panda$core$Int64$init$builtin_int64(&$tmp306, 1);
                            panda$core$System$exit$panda$core$Int64($tmp306);
                        }
                        }
                        {
                            $tmp307 = outFile256;
                            panda$io$File* $tmp310 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp314 = (($fn313) args244->$class->vtable[4])(args244, &$s312);
                            $tmp311 = $tmp314;
                            panda$io$File$init$panda$core$String($tmp310, $tmp311);
                            $tmp309 = $tmp310;
                            $tmp308 = $tmp309;
                            outFile256 = $tmp308;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp308));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp309));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp311));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
                        }
                        panda$io$File* $tmp316 = panda$io$File$parent$R$panda$io$File$Q(outFile256);
                        $tmp315 = $tmp316;
                        panda$io$File$createDirectories($tmp315);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
                    }
                    }
                    else {
                    panda$core$Bit $tmp318 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13284, &$s317);
                    if ($tmp318.value) {
                    {
                        int $tmp321;
                        {
                            panda$core$String* $tmp327 = (($fn326) args244->$class->vtable[4])(args244, &$s325);
                            $tmp324 = $tmp327;
                            $tmp323 = $tmp324;
                            level322 = $tmp323;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp323));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
                            panda$core$Int64$nullable $tmp328 = panda$core$String$convert$R$panda$core$Int64$Q(level322);
                            optimizationLevel258 = ((panda$core$Int64) $tmp328.value);
                            panda$core$Int64$init$builtin_int64(&$tmp330, 3);
                            panda$core$Bit $tmp331 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel258, $tmp330);
                            bool $tmp329 = $tmp331.value;
                            if ($tmp329) goto $l332;
                            panda$core$Int64$init$builtin_int64(&$tmp333, 0);
                            panda$core$Bit $tmp334 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel258, $tmp333);
                            $tmp329 = $tmp334.value;
                            $l332:;
                            panda$core$Bit $tmp335 = { $tmp329 };
                            if ($tmp335.value) {
                            {
                                panda$io$OutputStream* $tmp337 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp336 = $tmp337;
                                (($fn339) $tmp336->$class->vtable[19])($tmp336, &$s338);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp336));
                                panda$core$Int64$init$builtin_int64(&$tmp340, 1);
                                panda$core$System$exit$panda$core$Int64($tmp340);
                            }
                            }
                        }
                        $tmp321 = -1;
                        goto $l319;
                        $l319:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level322));
                        level322 = NULL;
                        switch ($tmp321) {
                            case -1: goto $l341;
                        }
                        $l341:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp343 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13284, &$s342);
                    if ($tmp343.value) {
                    {
                        int $tmp346;
                        {
                            panda$core$String* $tmp352 = (($fn351) args244->$class->vtable[4])(args244, &$s350);
                            $tmp349 = $tmp352;
                            $tmp348 = $tmp349;
                            level347 = $tmp348;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp348));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp349));
                            panda$core$Int64$nullable $tmp353 = panda$core$String$convert$R$panda$core$Int64$Q(level347);
                            safetyLevel260 = ((panda$core$Int64) $tmp353.value);
                            panda$core$Int64$init$builtin_int64(&$tmp355, 3);
                            panda$core$Bit $tmp356 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel260, $tmp355);
                            bool $tmp354 = $tmp356.value;
                            if ($tmp354) goto $l357;
                            panda$core$Int64$init$builtin_int64(&$tmp358, 0);
                            panda$core$Bit $tmp359 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel260, $tmp358);
                            $tmp354 = $tmp359.value;
                            $l357:;
                            panda$core$Bit $tmp360 = { $tmp354 };
                            if ($tmp360.value) {
                            {
                                panda$io$OutputStream* $tmp362 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp361 = $tmp362;
                                (($fn364) $tmp361->$class->vtable[19])($tmp361, &$s363);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp361));
                                panda$core$Int64$init$builtin_int64(&$tmp365, 1);
                                panda$core$System$exit$panda$core$Int64($tmp365);
                            }
                            }
                        }
                        $tmp346 = -1;
                        goto $l344;
                        $l344:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level347));
                        level347 = NULL;
                        switch ($tmp346) {
                            case -1: goto $l366;
                        }
                        $l366:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp368 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13284, &$s367);
                    if ($tmp368.value) {
                    {
                        int $tmp371;
                        {
                            if (((panda$core$Bit) { format262.nonnull }).value) {
                            {
                                (($fn373) err263->$class->vtable[19])(err263, &$s372);
                                panda$core$Int64$init$builtin_int64(&$tmp374, 1);
                                panda$core$System$exit$panda$core$Int64($tmp374);
                            }
                            }
                            panda$core$String* $tmp380 = (($fn379) args244->$class->vtable[4])(args244, &$s378);
                            $tmp377 = $tmp380;
                            $tmp376 = $tmp377;
                            f375 = $tmp376;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp376));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
                            int $tmp383;
                            {
                                $tmp385 = f375;
                                $match$193_21384 = $tmp385;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp385));
                                panda$core$Bit $tmp387 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$193_21384, &$s386);
                                if ($tmp387.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp388, 918);
                                    format262 = ((panda$core$Int64$nullable) { $tmp388, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp390 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$193_21384, &$s389);
                                if ($tmp390.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp391, 919);
                                    format262 = ((panda$core$Int64$nullable) { $tmp391, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp393 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$193_21384, &$s392);
                                if ($tmp393.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp394, 917);
                                    format262 = ((panda$core$Int64$nullable) { $tmp394, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp396 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$193_21384, &$s395);
                                if ($tmp396.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp397, 920);
                                    format262 = ((panda$core$Int64$nullable) { $tmp397, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp399 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$193_21384, &$s398);
                                if ($tmp399.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp400, 921);
                                    format262 = ((panda$core$Int64$nullable) { $tmp400, true });
                                }
                                }
                                else {
                                {
                                    panda$core$String* $tmp404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s403, f375);
                                    $tmp402 = $tmp404;
                                    panda$core$String* $tmp406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp402, &$s405);
                                    $tmp401 = $tmp406;
                                    (($fn407) err263->$class->vtable[19])(err263, $tmp401);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp401));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp402));
                                    panda$core$Int64$init$builtin_int64(&$tmp408, 1);
                                    panda$core$System$exit$panda$core$Int64($tmp408);
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            $tmp383 = -1;
                            goto $l381;
                            $l381:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp385));
                            switch ($tmp383) {
                                case -1: goto $l409;
                            }
                            $l409:;
                        }
                        $tmp371 = -1;
                        goto $l369;
                        $l369:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f375));
                        f375 = NULL;
                        switch ($tmp371) {
                            case -1: goto $l410;
                        }
                        $l410:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp412 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13284, &$s411);
                    if ($tmp412.value) {
                    {
                        panda$io$File* $tmp414 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$core$String* $tmp418 = (($fn417) args244->$class->vtable[4])(args244, &$s416);
                        $tmp415 = $tmp418;
                        panda$io$File$init$panda$core$String($tmp414, $tmp415);
                        $tmp413 = $tmp414;
                        panda$collections$Array$add$panda$collections$Array$T(imports252, ((panda$core$Object*) $tmp413));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp413));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp415));
                    }
                    }
                    else {
                    panda$core$Bit $tmp420 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13284, &$s419);
                    if ($tmp420.value) {
                    {
                        {
                            $tmp421 = self->llvmDir;
                            panda$io$File* $tmp424 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp428 = (($fn427) args244->$class->vtable[4])(args244, &$s426);
                            $tmp425 = $tmp428;
                            panda$io$File$init$panda$core$String($tmp424, $tmp425);
                            $tmp423 = $tmp424;
                            $tmp422 = $tmp423;
                            self->llvmDir = $tmp422;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp422));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp421));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp430 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13284, &$s429);
                    if ($tmp430.value) {
                    {
                        {
                            $tmp431 = self->triple;
                            panda$core$String* $tmp436 = (($fn435) args244->$class->vtable[4])(args244, &$s434);
                            $tmp433 = $tmp436;
                            $tmp432 = $tmp433;
                            self->triple = $tmp432;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp432));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp433));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp438 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13284, &$s437);
                    if ($tmp438.value) {
                    {
                        panda$io$Console$printLine$panda$core$String(&$s439);
                        panda$core$String* $tmp441 = panda$io$Console$readLine$R$panda$core$String$Q();
                        $tmp440 = $tmp441;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp443 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a276, &$s442);
                        if ($tmp443.value) {
                        {
                            panda$io$File* $tmp445 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp445, a276);
                            $tmp444 = $tmp445;
                            panda$collections$Array$add$panda$collections$Array$T(sources248, ((panda$core$Object*) $tmp444));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s448, a276);
                            $tmp447 = $tmp449;
                            panda$core$String* $tmp451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp447, &$s450);
                            $tmp446 = $tmp451;
                            (($fn452) err263->$class->vtable[19])(err263, $tmp446);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp446));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp447));
                            panda$core$Int64$init$builtin_int64(&$tmp453, 1);
                            panda$core$System$exit$panda$core$Int64($tmp453);
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
                }
                $tmp283 = -1;
                goto $l281;
                $l281:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp285));
                switch ($tmp283) {
                    case -1: goto $l454;
                }
                $l454:;
            }
            $tmp275 = -1;
            goto $l273;
            $l273:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a276));
            a276 = NULL;
            switch ($tmp275) {
                case -1: goto $l455;
            }
            $l455:;
        }
        goto $l267;
        $l268:;
        {
            $tmp456 = self->opt;
            panda$io$File* $tmp460 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s459);
            $tmp458 = $tmp460;
            $tmp457 = $tmp458;
            self->opt = $tmp457;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp457));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp458));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp456));
        }
        {
            $tmp461 = self->llc;
            panda$io$File* $tmp465 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s464);
            $tmp463 = $tmp465;
            $tmp462 = $tmp463;
            self->llc = $tmp462;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp462));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp463));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp461));
        }
        {
            $tmp466 = self->gcc;
            panda$io$File* $tmp469 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
            panda$io$File$init$panda$core$String($tmp469, &$s470);
            $tmp468 = $tmp469;
            $tmp467 = $tmp468;
            self->gcc = $tmp467;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp467));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp468));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp466));
        }
        panda$core$Int64 $tmp471 = panda$collections$Array$get_count$R$panda$core$Int64(sources248);
        panda$core$Int64$init$builtin_int64(&$tmp472, 0);
        panda$core$Bit $tmp473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp471, $tmp472);
        if ($tmp473.value) {
        {
            (($fn475) err263->$class->vtable[19])(err263, &$s474);
            panda$core$Int64$init$builtin_int64(&$tmp476, 1);
            panda$core$System$exit$panda$core$Int64($tmp476);
        }
        }
        if (((panda$core$Bit) { !format262.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp477, 918);
            format262 = ((panda$core$Int64$nullable) { $tmp477, true });
        }
        }
        if (((panda$core$Bit) { outFile256 == NULL }).value) {
        {
            panda$core$Int64 $tmp478 = panda$collections$Array$get_count$R$panda$core$Int64(sources248);
            panda$core$Int64$init$builtin_int64(&$tmp479, 1);
            panda$core$Bit $tmp480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp478, $tmp479);
            if ($tmp480.value) {
            {
                int $tmp483;
                {
                    memset(&extension484, 0, sizeof(extension484));
                    {
                        $match$236_21485 = format262;
                        panda$core$Int64$init$builtin_int64(&$tmp486, 918);
                        panda$core$Bit $tmp487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$236_21485.value), $tmp486);
                        if ($tmp487.value) {
                        {
                            {
                                $tmp488 = extension484;
                                $tmp489 = &$s490;
                                extension484 = $tmp489;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp489));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp488));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp491, 919);
                        panda$core$Bit $tmp492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$236_21485.value), $tmp491);
                        if ($tmp492.value) {
                        {
                            {
                                $tmp493 = extension484;
                                $tmp494 = &$s495;
                                extension484 = $tmp494;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp494));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp493));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp496, 920);
                        panda$core$Bit $tmp497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$236_21485.value), $tmp496);
                        if ($tmp497.value) {
                        {
                            {
                                $tmp498 = extension484;
                                $tmp499 = &$s500;
                                extension484 = $tmp499;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp499));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp498));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp501, 921);
                        panda$core$Bit $tmp502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$236_21485.value), $tmp501);
                        if ($tmp502.value) {
                        {
                            {
                                $tmp503 = extension484;
                                $tmp504 = &$s505;
                                extension484 = $tmp504;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp504));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp506, 917);
                        panda$core$Bit $tmp507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$236_21485.value), $tmp506);
                        if ($tmp507.value) {
                        {
                            {
                                $tmp508 = extension484;
                                $tmp509 = &$s510;
                                extension484 = $tmp509;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp509));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp508));
                            }
                        }
                        }
                        else {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp511, false);
                            if ($tmp511.value) goto $l512; else goto $l513;
                            $l513:;
                            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s514, (panda$core$Int64) { 241 });
                            abort();
                            $l512:;
                        }
                        }
                        }
                        }
                        }
                        }
                    }
                    {
                        $tmp515 = outFile256;
                        panda$core$Int64$init$builtin_int64(&$tmp519, 0);
                        panda$core$Object* $tmp520 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources248, $tmp519);
                        $tmp518 = $tmp520;
                        panda$io$File* $tmp521 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp518), extension484);
                        $tmp517 = $tmp521;
                        $tmp516 = $tmp517;
                        outFile256 = $tmp516;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp516));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp517));
                        panda$core$Panda$unref$panda$core$Object($tmp518);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp515));
                    }
                }
                $tmp483 = -1;
                goto $l481;
                $l481:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension484));
                switch ($tmp483) {
                    case -1: goto $l522;
                }
                $l522:;
            }
            }
            else {
            {
                (($fn524) err263->$class->vtable[19])(err263, &$s523);
                panda$core$Int64$init$builtin_int64(&$tmp525, 1);
                panda$core$System$exit$panda$core$Int64($tmp525);
            }
            }
        }
        }
        memset(&errorCount526, 0, sizeof(errorCount526));
        {
            int $tmp529;
            {
                memset(&cg530, 0, sizeof(cg530));
                {
                    $match$255_17531 = format262;
                    panda$core$Int64$init$builtin_int64(&$tmp534, 917);
                    panda$core$Bit $tmp535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$255_17531.value), $tmp534);
                    bool $tmp533 = $tmp535.value;
                    if ($tmp533) goto $l536;
                    panda$core$Int64$init$builtin_int64(&$tmp537, 918);
                    panda$core$Bit $tmp538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$255_17531.value), $tmp537);
                    $tmp533 = $tmp538.value;
                    $l536:;
                    panda$core$Bit $tmp539 = { $tmp533 };
                    bool $tmp532 = $tmp539.value;
                    if ($tmp532) goto $l540;
                    panda$core$Int64$init$builtin_int64(&$tmp541, 919);
                    panda$core$Bit $tmp542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$255_17531.value), $tmp541);
                    $tmp532 = $tmp542.value;
                    $l540:;
                    panda$core$Bit $tmp543 = { $tmp532 };
                    if ($tmp543.value) {
                    {
                        {
                            $tmp544 = cg530;
                            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp547 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(216, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                            panda$io$File* $tmp551 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile256, &$s550);
                            $tmp549 = $tmp551;
                            panda$io$OutputStream* $tmp552 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp549);
                            $tmp548 = $tmp552;
                            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp547, self->triple, $tmp548);
                            $tmp546 = $tmp547;
                            $tmp545 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp546);
                            cg530 = $tmp545;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp545));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp548));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp544));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp553, 920);
                    panda$core$Bit $tmp554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$255_17531.value), $tmp553);
                    if ($tmp554.value) {
                    {
                        {
                            $tmp555 = cg530;
                            org$pandalanguage$pandac$HCodeGenerator* $tmp558 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(137, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                            org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp558, outFile256);
                            $tmp557 = $tmp558;
                            $tmp556 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp557);
                            cg530 = $tmp556;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp556));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp555));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp559, 921);
                    panda$core$Bit $tmp560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$255_17531.value), $tmp559);
                    if ($tmp560.value) {
                    {
                        {
                            $tmp561 = cg530;
                            org$pandalanguage$pandac$CCodeGenerator* $tmp564 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(240, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                            org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp564, outFile256);
                            $tmp563 = $tmp564;
                            $tmp562 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp563);
                            cg530 = $tmp562;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp562));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp563));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp561));
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp565, false);
                        if ($tmp565.value) goto $l566; else goto $l567;
                        $l567:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s568, (panda$core$Int64) { 263 });
                        abort();
                        $l566:;
                    }
                    }
                    }
                    }
                }
                org$pandalanguage$pandac$Compiler$Settings* $tmp572 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
                org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp572, self->pandaHome, ((panda$collections$ListView*) imports252), optimizationLevel258, safetyLevel260);
                $tmp571 = $tmp572;
                $tmp570 = $tmp571;
                settings569 = $tmp570;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp570));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp571));
                panda$threads$MessageQueue* $tmp576 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
                panda$threads$MessageQueue$init($tmp576);
                $tmp575 = $tmp576;
                $tmp574 = $tmp575;
                errorQueue573 = $tmp574;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp574));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp575));
                org$pandalanguage$pandac$Compiler* $tmp580 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
                org$pandalanguage$pandac$Compiler$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp580, errorQueue573, cg530, settings569);
                $tmp579 = $tmp580;
                $tmp578 = $tmp579;
                compiler577 = $tmp578;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp578));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp579));
                {
                    int $tmp583;
                    {
                        ITable* $tmp587 = ((panda$collections$Iterable*) sources248)->$class->itable;
                        while ($tmp587->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp587 = $tmp587->next;
                        }
                        $fn589 $tmp588 = $tmp587->methods[0];
                        panda$collections$Iterator* $tmp590 = $tmp588(((panda$collections$Iterable*) sources248));
                        $tmp586 = $tmp590;
                        $tmp585 = $tmp586;
                        Iter$268$13584 = $tmp585;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp585));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp586));
                        $l591:;
                        ITable* $tmp594 = Iter$268$13584->$class->itable;
                        while ($tmp594->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp594 = $tmp594->next;
                        }
                        $fn596 $tmp595 = $tmp594->methods[0];
                        panda$core$Bit $tmp597 = $tmp595(Iter$268$13584);
                        panda$core$Bit $tmp598 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp597);
                        bool $tmp593 = $tmp598.value;
                        if (!$tmp593) goto $l592;
                        {
                            int $tmp601;
                            {
                                ITable* $tmp605 = Iter$268$13584->$class->itable;
                                while ($tmp605->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp605 = $tmp605->next;
                                }
                                $fn607 $tmp606 = $tmp605->methods[1];
                                panda$core$Object* $tmp608 = $tmp606(Iter$268$13584);
                                $tmp604 = $tmp608;
                                $tmp603 = ((panda$io$File*) $tmp604);
                                s602 = $tmp603;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp603));
                                panda$core$Panda$unref$panda$core$Object($tmp604);
                                {
                                    int $tmp611;
                                    {
                                        panda$collections$ListView* $tmp616 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler577, s602);
                                        $tmp615 = $tmp616;
                                        ITable* $tmp617 = ((panda$collections$Iterable*) $tmp615)->$class->itable;
                                        while ($tmp617->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp617 = $tmp617->next;
                                        }
                                        $fn619 $tmp618 = $tmp617->methods[0];
                                        panda$collections$Iterator* $tmp620 = $tmp618(((panda$collections$Iterable*) $tmp615));
                                        $tmp614 = $tmp620;
                                        $tmp613 = $tmp614;
                                        Iter$269$17612 = $tmp613;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp613));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp614));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp615));
                                        $l621:;
                                        ITable* $tmp624 = Iter$269$17612->$class->itable;
                                        while ($tmp624->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp624 = $tmp624->next;
                                        }
                                        $fn626 $tmp625 = $tmp624->methods[0];
                                        panda$core$Bit $tmp627 = $tmp625(Iter$269$17612);
                                        panda$core$Bit $tmp628 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp627);
                                        bool $tmp623 = $tmp628.value;
                                        if (!$tmp623) goto $l622;
                                        {
                                            int $tmp631;
                                            {
                                                ITable* $tmp635 = Iter$269$17612->$class->itable;
                                                while ($tmp635->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp635 = $tmp635->next;
                                                }
                                                $fn637 $tmp636 = $tmp635->methods[1];
                                                panda$core$Object* $tmp638 = $tmp636(Iter$269$17612);
                                                $tmp634 = $tmp638;
                                                $tmp633 = ((org$pandalanguage$pandac$ClassDecl*) $tmp634);
                                                cl632 = $tmp633;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp633));
                                                panda$core$Panda$unref$panda$core$Object($tmp634);
                                                org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler577, cl632);
                                            }
                                            $tmp631 = -1;
                                            goto $l629;
                                            $l629:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl632));
                                            cl632 = NULL;
                                            switch ($tmp631) {
                                                case -1: goto $l639;
                                            }
                                            $l639:;
                                        }
                                        goto $l621;
                                        $l622:;
                                    }
                                    $tmp611 = -1;
                                    goto $l609;
                                    $l609:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$269$17612));
                                    Iter$269$17612 = NULL;
                                    switch ($tmp611) {
                                        case -1: goto $l640;
                                    }
                                    $l640:;
                                }
                            }
                            $tmp601 = -1;
                            goto $l599;
                            $l599:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s602));
                            s602 = NULL;
                            switch ($tmp601) {
                                case -1: goto $l641;
                            }
                            $l641:;
                        }
                        goto $l591;
                        $l592:;
                    }
                    $tmp583 = -1;
                    goto $l581;
                    $l581:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$268$13584));
                    Iter$268$13584 = NULL;
                    switch ($tmp583) {
                        case -1: goto $l642;
                    }
                    $l642:;
                }
                {
                    int $tmp645;
                    {
                        ITable* $tmp649 = ((panda$collections$Iterable*) sources248)->$class->itable;
                        while ($tmp649->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp649 = $tmp649->next;
                        }
                        $fn651 $tmp650 = $tmp649->methods[0];
                        panda$collections$Iterator* $tmp652 = $tmp650(((panda$collections$Iterable*) sources248));
                        $tmp648 = $tmp652;
                        $tmp647 = $tmp648;
                        Iter$273$13646 = $tmp647;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp647));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp648));
                        $l653:;
                        ITable* $tmp656 = Iter$273$13646->$class->itable;
                        while ($tmp656->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp656 = $tmp656->next;
                        }
                        $fn658 $tmp657 = $tmp656->methods[0];
                        panda$core$Bit $tmp659 = $tmp657(Iter$273$13646);
                        panda$core$Bit $tmp660 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp659);
                        bool $tmp655 = $tmp660.value;
                        if (!$tmp655) goto $l654;
                        {
                            int $tmp663;
                            {
                                ITable* $tmp667 = Iter$273$13646->$class->itable;
                                while ($tmp667->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp667 = $tmp667->next;
                                }
                                $fn669 $tmp668 = $tmp667->methods[1];
                                panda$core$Object* $tmp670 = $tmp668(Iter$273$13646);
                                $tmp666 = $tmp670;
                                $tmp665 = ((panda$io$File*) $tmp666);
                                s664 = $tmp665;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp665));
                                panda$core$Panda$unref$panda$core$Object($tmp666);
                                org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler577, s664);
                            }
                            $tmp663 = -1;
                            goto $l661;
                            $l661:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s664));
                            s664 = NULL;
                            switch ($tmp663) {
                                case -1: goto $l671;
                            }
                            $l671:;
                        }
                        goto $l653;
                        $l654:;
                    }
                    $tmp645 = -1;
                    goto $l643;
                    $l643:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$273$13646));
                    Iter$273$13646 = NULL;
                    switch ($tmp645) {
                        case -1: goto $l672;
                    }
                    $l672:;
                }
                org$pandalanguage$pandac$Compiler$finish(compiler577);
                panda$core$Int64 $tmp673 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(errorQueue573);
                errorCount526 = $tmp673;
                panda$core$Int64$init$builtin_int64(&$tmp675, 0);
                panda$core$Bit$init$builtin_bit(&$tmp676, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp674, $tmp675, errorCount526, $tmp676);
                int64_t $tmp678 = $tmp674.min.value;
                panda$core$Int64 i677 = { $tmp678 };
                int64_t $tmp680 = $tmp674.max.value;
                bool $tmp681 = $tmp674.inclusive.value;
                if ($tmp681) goto $l688; else goto $l689;
                $l688:;
                if ($tmp678 <= $tmp680) goto $l682; else goto $l684;
                $l689:;
                if ($tmp678 < $tmp680) goto $l682; else goto $l684;
                $l682:;
                {
                    int $tmp692;
                    {
                        panda$core$Immutable* $tmp696 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(errorQueue573);
                        $tmp695 = $tmp696;
                        $tmp694 = ((org$pandalanguage$pandac$Compiler$Error*) $tmp695);
                        error693 = $tmp694;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp694));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp695));
                        panda$core$String* $tmp704 = panda$io$File$name$R$panda$core$String(error693->file);
                        $tmp703 = $tmp704;
                        panda$core$String* $tmp705 = panda$core$String$convert$R$panda$core$String($tmp703);
                        $tmp702 = $tmp705;
                        panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp702, &$s706);
                        $tmp701 = $tmp707;
                        org$pandalanguage$pandac$Position$wrapper* $tmp709;
                        $tmp709 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                        $tmp709->value = error693->position;
                        $tmp708 = ((panda$core$Object*) $tmp709);
                        panda$core$String* $tmp710 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp701, $tmp708);
                        $tmp700 = $tmp710;
                        panda$core$String* $tmp712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp700, &$s711);
                        $tmp699 = $tmp712;
                        panda$core$String* $tmp713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp699, error693->message);
                        $tmp698 = $tmp713;
                        panda$core$String* $tmp715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp698, &$s714);
                        $tmp697 = $tmp715;
                        panda$io$Console$printLine$panda$core$String($tmp697);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp697));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp698));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp699));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp700));
                        panda$core$Panda$unref$panda$core$Object($tmp708);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp701));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp702));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp703));
                    }
                    $tmp692 = -1;
                    goto $l690;
                    $l690:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) error693));
                    error693 = NULL;
                    switch ($tmp692) {
                        case -1: goto $l716;
                    }
                    $l716:;
                }
                $l685:;
                int64_t $tmp718 = $tmp680 - i677.value;
                if ($tmp681) goto $l719; else goto $l720;
                $l719:;
                if ((uint64_t) $tmp718 >= 1) goto $l717; else goto $l684;
                $l720:;
                if ((uint64_t) $tmp718 > 1) goto $l717; else goto $l684;
                $l717:;
                i677.value += 1;
                goto $l682;
                $l684:;
            }
            $tmp529 = -1;
            goto $l527;
            $l527:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler577));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) errorQueue573));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings569));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg530));
            settings569 = NULL;
            errorQueue573 = NULL;
            compiler577 = NULL;
            switch ($tmp529) {
                case -1: goto $l723;
            }
            $l723:;
        }
        panda$core$Int64$init$builtin_int64(&$tmp724, 0);
        panda$core$Bit $tmp725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount526, $tmp724);
        if ($tmp725.value) {
        {
            {
                $match$285_17726 = format262;
                panda$core$Int64$init$builtin_int64(&$tmp727, 918);
                panda$core$Bit $tmp728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$285_17726.value), $tmp727);
                if ($tmp728.value) {
                {
                    int $tmp731;
                    {
                        panda$io$File* $tmp737 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile256, &$s736);
                        $tmp735 = $tmp737;
                        panda$io$File* $tmp738 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp735, optimizationLevel258);
                        $tmp734 = $tmp738;
                        $tmp733 = $tmp734;
                        optimized732 = $tmp733;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp733));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp734));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp735));
                        panda$io$File* $tmp742 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized732);
                        $tmp741 = $tmp742;
                        $tmp740 = $tmp741;
                        assembly739 = $tmp740;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp740));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp741));
                        panda$io$File* $tmp744 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly739, outFile256);
                        $tmp743 = $tmp744;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp743));
                    }
                    $tmp731 = -1;
                    goto $l729;
                    $l729:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly739));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized732));
                    optimized732 = NULL;
                    assembly739 = NULL;
                    switch ($tmp731) {
                        case -1: goto $l745;
                    }
                    $l745:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp746, 919);
                panda$core$Bit $tmp747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$285_17726.value), $tmp746);
                if ($tmp747.value) {
                {
                    int $tmp750;
                    {
                        panda$io$File* $tmp756 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile256, &$s755);
                        $tmp754 = $tmp756;
                        panda$io$File* $tmp757 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp754, optimizationLevel258);
                        $tmp753 = $tmp757;
                        $tmp752 = $tmp753;
                        optimized751 = $tmp752;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp752));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp753));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp754));
                        panda$io$File* $tmp761 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized751);
                        $tmp760 = $tmp761;
                        $tmp759 = $tmp760;
                        assembly758 = $tmp759;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp759));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp760));
                        panda$io$File* $tmp763 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly758, outFile256);
                        $tmp762 = $tmp763;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp762));
                    }
                    $tmp750 = -1;
                    goto $l748;
                    $l748:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly758));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized751));
                    optimized751 = NULL;
                    assembly758 = NULL;
                    switch ($tmp750) {
                        case -1: goto $l764;
                    }
                    $l764:;
                }
                }
                }
            }
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp765, 1);
            panda$core$Bit $tmp766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount526, $tmp765);
            if ($tmp766.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s767);
            }
            }
            else {
            {
                panda$core$String* $tmp770 = panda$core$Int64$convert$R$panda$core$String(errorCount526);
                $tmp769 = $tmp770;
                panda$core$String* $tmp772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp769, &$s771);
                $tmp768 = $tmp772;
                panda$io$Console$printLine$panda$core$String($tmp768);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp768));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp769));
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp773, 1);
            panda$core$System$exit$panda$core$Int64($tmp773);
        }
        }
    }
    $tmp243 = -1;
    goto $l241;
    $l241:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err263));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile256));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports252));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources248));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args244));
    args244 = NULL;
    sources248 = NULL;
    imports252 = NULL;
    err263 = NULL;
    switch ($tmp243) {
        case -1: goto $l774;
    }
    $l774:;
}
panda$core$Bit org$pandalanguage$pandac$Main$containsError$panda$core$String$R$panda$core$Bit(panda$core$String* p_s) {
    panda$core$Bit $returnValue775;
    panda$core$Bit $tmp777 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_s, &$s776);
    $returnValue775 = $tmp777;
    return $returnValue775;
}
void pandaMain(panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$Main* $tmp779;
    org$pandalanguage$pandac$Main* $tmp780 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
    org$pandalanguage$pandac$Main$init($tmp780);
    $tmp779 = $tmp780;
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp779, p_args);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp779));
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    int $tmp783;
    {
    }
    $tmp783 = -1;
    goto $l781;
    $l781:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp783) {
        case -1: goto $l784;
    }
    $l784:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llvmDir));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->triple));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

