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
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/collections/CollectionView.h"
#include "panda/json/JSONParser.h"
#include "panda/json/JSON.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Main$class_type org$pandalanguage$pandac$Main$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Main$cleanup, org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File, org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream, org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT} };

typedef panda$core$String* (*$fn43)(panda$io$InputStream*);
typedef void (*$fn45)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn69)(panda$io$InputStream*);
typedef void (*$fn71)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn92)(panda$io$InputStream*);
typedef void (*$fn94)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn116)(panda$io$InputStream*);
typedef void (*$fn118)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn125)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn126)(panda$io$OutputStream*);
typedef void (*$fn128)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn129)(panda$io$OutputStream*);
typedef void (*$fn131)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn133)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn158)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn164)(org$pandalanguage$pandac$Main$Arguments*);
typedef void (*$fn170)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn177)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn187)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn198)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn205)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn216)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn220)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn225)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn244)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn251)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn261)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn269)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn286)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn305)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn340)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn384)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn391)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn399)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn408)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn415)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn423)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn431)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn438)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn446)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn487)(panda$collections$CollectionView*);
typedef panda$json$JSON* (*$fn497)(panda$json$JSONParser*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn541)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn548)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn556)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e", 29, -3248623696873689241, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x35\x2e\x30", 27, -855196788127931458, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78\x38\x36\x5f\x36\x34\x2d\x61\x70\x70\x6c\x65\x2d\x64\x61\x72\x77\x69\x6e\x31\x37\x2e\x33\x2e\x30", 25, 2390944900235185536, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f\x70\x74", 4, 152597986, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x69\x6e\x74", 5, 15305173385, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73", 2, 14962, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x72\x65\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x6d\x6f\x64\x65\x6c\x3d\x70\x69\x63", 21, 7895568360759315925, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c\x2e", 3, 1497068, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x6c\x6c\x76\x6d\x5f\x64\x69\x72", 10, -5843666376324264096, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x74\x68\x65\x20\x4c\x4c\x56\x4d\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 28, -1635669018571610865, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x74\x72\x69\x70\x6c\x65", 8, 15702175691418347, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4c\x56\x4d\x20\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6c\x65", 18, -7134459153622240993, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20", 64, 3394507457011302119, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x6c\x65", 4, 210233217, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x73\x69\x6e\x67\x2e\x2e\x2e", 10, -5789993339050930713, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x20\x22\x31\x22\x3a\x20\x32\x20\x7d", 10, 5528039906970603062, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78\x38\x36\x5f\x36\x34\x2d\x61\x70\x70\x6c\x65\x2d\x64\x61\x72\x77\x69\x6e\x31\x37\x2e\x33\x2e\x30", 25, 2390944900235185536, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x54\x65\x73\x74\x2e\x6c\x6c", 12, 5522965462756929718, NULL };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x54\x65\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, -5645405478664216650, NULL };

void org$pandalanguage$pandac$Main$init(org$pandalanguage$pandac$Main* self) {
    self->llvmDir = NULL;
    self->triple = NULL;
    self->opt = NULL;
    self->llc = NULL;
    self->gcc = NULL;
    self->pandaHome = NULL;
    panda$io$File* $tmp4 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
    panda$io$File$init$panda$core$String($tmp4, &$s5);
    panda$io$File* $tmp3 = $tmp4;
    panda$io$File* $tmp2 = $tmp3;
    self->llvmDir = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$core$String* $tmp6 = &$s7;
    self->triple = $tmp6;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
    {
        panda$io$File* $tmp8 = self->pandaHome;
        panda$io$File* $tmp11 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp11, &$s12);
        panda$io$File* $tmp10 = $tmp11;
        panda$io$File* $tmp9 = $tmp10;
        self->pandaHome = $tmp9;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    }
}
panda$io$File* org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm, panda$core$Int64 p_level) {
    panda$io$File* dest16;
    panda$collections$Array* args21;
    panda$core$System$Process* p36;
    panda$core$Int64 $tmp46;
    panda$io$File* tmp148;
    panda$core$Bit $tmp13 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_level, ((panda$core$Int64) { 0 }));
    if ($tmp13.value) {
    {
        panda$io$File* $tmp15 = p_llvm;
        panda$io$File* $tmp14 = $tmp15;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
        return $tmp14;
    }
    }
    panda$io$File* $tmp20 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s19);
    panda$io$File* $tmp18 = $tmp20;
    panda$io$File* $tmp17 = $tmp18;
    dest16 = $tmp17;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$collections$Array* $tmp24 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp24);
    panda$collections$Array* $tmp23 = $tmp24;
    panda$collections$Array* $tmp22 = $tmp23;
    args21 = $tmp22;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) &$s25));
    panda$core$Int64$wrapper* $tmp30;
    $tmp30 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp30->value = p_level;
    panda$core$Object* $tmp29 = ((panda$core$Object*) $tmp30);
    panda$core$String* $tmp31 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s28, $tmp29);
    panda$core$String* $tmp27 = $tmp31;
    panda$core$String* $tmp33 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp27, &$s32);
    panda$core$String* $tmp26 = $tmp33;
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) $tmp26));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
    panda$core$Panda$unref$panda$core$Object($tmp29);
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) &$s34));
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) p_llvm->path));
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) &$s35));
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) dest16->path));
    panda$core$System$Process* $tmp39 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->opt, ((panda$collections$ListView*) args21));
    panda$core$System$Process* $tmp38 = $tmp39;
    panda$core$System$Process* $tmp37 = $tmp38;
    p36 = $tmp37;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
    panda$io$OutputStream* $tmp41 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$io$OutputStream* $tmp40 = $tmp41;
    panda$core$String* $tmp44 = (($fn43) p36->error->$class->vtable[6])(p36->error);
    panda$core$String* $tmp42 = $tmp44;
    (($fn45) $tmp40->$class->vtable[16])($tmp40, $tmp42);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp46, p36);
    panda$core$Bit $tmp47 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp46, ((panda$core$Int64) { 0 }));
    if ($tmp47.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        panda$io$File* $tmp49 = dest16;
        tmp148 = $tmp49;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest16));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p36));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args21));
        }
        panda$io$File* $tmp50 = tmp148;
        return $tmp50;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm) {
    panda$io$File* dest51;
    panda$collections$Array* args56;
    panda$core$System$Process* p62;
    panda$core$Int64 $tmp72;
    panda$io$File* tmp274;
    panda$io$File* $tmp55 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s54);
    panda$io$File* $tmp53 = $tmp55;
    panda$io$File* $tmp52 = $tmp53;
    dest51 = $tmp52;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp52));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp53));
    panda$collections$Array* $tmp59 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp59);
    panda$collections$Array* $tmp58 = $tmp59;
    panda$collections$Array* $tmp57 = $tmp58;
    args56 = $tmp57;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
    panda$collections$Array$add$panda$collections$Array$T(args56, ((panda$core$Object*) p_llvm->path));
    panda$collections$Array$add$panda$collections$Array$T(args56, ((panda$core$Object*) &$s60));
    panda$collections$Array$add$panda$collections$Array$T(args56, ((panda$core$Object*) &$s61));
    panda$collections$Array$add$panda$collections$Array$T(args56, ((panda$core$Object*) dest51->path));
    panda$core$System$Process* $tmp65 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->llc, ((panda$collections$ListView*) args56));
    panda$core$System$Process* $tmp64 = $tmp65;
    panda$core$System$Process* $tmp63 = $tmp64;
    p62 = $tmp63;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp63));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
    panda$io$OutputStream* $tmp67 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$io$OutputStream* $tmp66 = $tmp67;
    panda$core$String* $tmp70 = (($fn69) p62->error->$class->vtable[6])(p62->error);
    panda$core$String* $tmp68 = $tmp70;
    (($fn71) $tmp66->$class->vtable[16])($tmp66, $tmp68);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp68));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp72, p62);
    panda$core$Bit $tmp73 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp72, ((panda$core$Int64) { 0 }));
    if ($tmp73.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        panda$io$File* $tmp75 = dest51;
        tmp274 = $tmp75;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp75));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest51));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p62));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args56));
        }
        panda$io$File* $tmp76 = tmp274;
        return $tmp76;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args77;
    panda$core$System$Process* p85;
    panda$core$Int64 $tmp95;
    panda$io$File* tmp397;
    panda$collections$Array* $tmp80 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp80);
    panda$collections$Array* $tmp79 = $tmp80;
    panda$collections$Array* $tmp78 = $tmp79;
    args77 = $tmp78;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp78));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
    panda$collections$Array$add$panda$collections$Array$T(args77, ((panda$core$Object*) p_assembly->path));
    panda$collections$Array$add$panda$collections$Array$T(args77, ((panda$core$Object*) &$s81));
    panda$collections$Array$add$panda$collections$Array$T(args77, ((panda$core$Object*) &$s82));
    panda$collections$Array$add$panda$collections$Array$T(args77, ((panda$core$Object*) &$s83));
    panda$collections$Array$add$panda$collections$Array$T(args77, ((panda$core$Object*) &$s84));
    panda$collections$Array$add$panda$collections$Array$T(args77, ((panda$core$Object*) p_dest->path));
    panda$core$System$Process* $tmp88 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args77));
    panda$core$System$Process* $tmp87 = $tmp88;
    panda$core$System$Process* $tmp86 = $tmp87;
    p85 = $tmp86;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
    panda$io$OutputStream* $tmp90 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$io$OutputStream* $tmp89 = $tmp90;
    panda$core$String* $tmp93 = (($fn92) p85->error->$class->vtable[6])(p85->error);
    panda$core$String* $tmp91 = $tmp93;
    (($fn94) $tmp89->$class->vtable[16])($tmp89, $tmp91);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp95, p85);
    panda$core$Bit $tmp96 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp95, ((panda$core$Int64) { 0 }));
    if ($tmp96.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        panda$io$File* $tmp98 = p_dest;
        tmp397 = $tmp98;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp98));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p85));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args77));
        }
        panda$io$File* $tmp99 = tmp397;
        return $tmp99;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args100;
    panda$core$System$Process* p109;
    panda$core$Int64 $tmp119;
    panda$io$File* tmp4121;
    panda$collections$Array* $tmp103 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp103);
    panda$collections$Array* $tmp102 = $tmp103;
    panda$collections$Array* $tmp101 = $tmp102;
    args100 = $tmp101;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp101));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
    panda$collections$Array$add$panda$collections$Array$T(args100, ((panda$core$Object*) p_assembly->path));
    panda$collections$Array$add$panda$collections$Array$T(args100, ((panda$core$Object*) &$s104));
    panda$collections$Array$add$panda$collections$Array$T(args100, ((panda$core$Object*) &$s105));
    panda$collections$Array$add$panda$collections$Array$T(args100, ((panda$core$Object*) &$s106));
    panda$collections$Array$add$panda$collections$Array$T(args100, ((panda$core$Object*) &$s107));
    panda$collections$Array$add$panda$collections$Array$T(args100, ((panda$core$Object*) &$s108));
    panda$collections$Array$add$panda$collections$Array$T(args100, ((panda$core$Object*) p_dest->path));
    panda$core$System$Process* $tmp112 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args100));
    panda$core$System$Process* $tmp111 = $tmp112;
    panda$core$System$Process* $tmp110 = $tmp111;
    p109 = $tmp110;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp110));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp111));
    panda$io$OutputStream* $tmp114 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$io$OutputStream* $tmp113 = $tmp114;
    panda$core$String* $tmp117 = (($fn116) p109->error->$class->vtable[6])(p109->error);
    panda$core$String* $tmp115 = $tmp117;
    (($fn118) $tmp113->$class->vtable[16])($tmp113, $tmp115);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp115));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp119, p109);
    panda$core$Bit $tmp120 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp119, ((panda$core$Int64) { 0 }));
    if ($tmp120.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        panda$io$File* $tmp122 = p_dest;
        tmp4121 = $tmp122;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp122));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p109));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args100));
        }
        panda$io$File* $tmp123 = tmp4121;
        return $tmp123;
    }
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn125) p_out->$class->vtable[19])(p_out, &$s124);
    (($fn126) p_out->$class->vtable[17])(p_out);
    (($fn128) p_out->$class->vtable[19])(p_out, &$s127);
    (($fn129) p_out->$class->vtable[17])(p_out);
    (($fn131) p_out->$class->vtable[19])(p_out, &$s130);
    (($fn133) p_out->$class->vtable[19])(p_out, &$s132);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args134;
    panda$collections$Array* sources138;
    panda$collections$Array* imports142;
    panda$io$File* outFile146;
    panda$core$Int64 optimizationLevel148;
    panda$core$Int64 safetyLevel149;
    panda$core$Int64$nullable format150;
    panda$io$OutputStream* err151;
    panda$core$String* a161;
    panda$core$String* $match$149_13166;
    panda$core$String* level183;
    panda$core$String* level201;
    panda$core$String* f221;
    panda$core$String* $match$177_21227;
    panda$core$String* extension308;
    panda$core$Int64$nullable $match$220_21309;
    org$pandalanguage$pandac$CodeGenerator* cg341;
    panda$core$Int64$nullable $match$237_13342;
    org$pandalanguage$pandac$Compiler$Settings* settings371;
    org$pandalanguage$pandac$Compiler* compiler375;
    panda$collections$Iterator* Iter$248$9379;
    panda$io$File* s394;
    panda$collections$Iterator* Iter$249$13401;
    org$pandalanguage$pandac$ClassDecl* cl418;
    panda$collections$Iterator* Iter$254$13426;
    panda$io$File* s441;
    panda$core$Int64$nullable $match$261_17449;
    panda$io$File* optimized451;
    panda$io$File* assembly458;
    panda$io$File* optimized465;
    panda$io$File* assembly472;
    org$pandalanguage$pandac$Main$Arguments* $tmp137 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
    org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp137, p_rawArgs);
    org$pandalanguage$pandac$Main$Arguments* $tmp136 = $tmp137;
    org$pandalanguage$pandac$Main$Arguments* $tmp135 = $tmp136;
    args134 = $tmp135;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp135));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp136));
    panda$collections$Array* $tmp141 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp141);
    panda$collections$Array* $tmp140 = $tmp141;
    panda$collections$Array* $tmp139 = $tmp140;
    sources138 = $tmp139;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
    panda$collections$Array* $tmp145 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp145);
    panda$collections$Array* $tmp144 = $tmp145;
    panda$collections$Array* $tmp143 = $tmp144;
    imports142 = $tmp143;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
    panda$collections$Array$add$panda$collections$Array$T(imports142, ((panda$core$Object*) self->pandaHome));
    panda$io$File* $tmp147 = NULL;
    outFile146 = $tmp147;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
    optimizationLevel148 = ((panda$core$Int64) { 3 });
    safetyLevel149 = ((panda$core$Int64) { 3 });
    format150 = ((panda$core$Int64$nullable) { .nonnull = false });
    panda$io$OutputStream* $tmp154 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$io$OutputStream* $tmp153 = $tmp154;
    panda$io$OutputStream* $tmp152 = $tmp153;
    err151 = $tmp152;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp152));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
    $l155:;
    panda$core$Bit $tmp159 = (($fn158) args134->$class->vtable[2])(args134);
    panda$core$Bit $tmp160 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp159);
    bool $tmp157 = $tmp160.value;
    if (!$tmp157) goto $l156;
    {
        panda$core$String* $tmp165 = (($fn164) args134->$class->vtable[3])(args134);
        panda$core$String* $tmp163 = $tmp165;
        panda$core$String* $tmp162 = $tmp163;
        a161 = $tmp162;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp162));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp163));
        {
            $match$149_13166 = a161;
            panda$core$Bit $tmp168 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13166, &$s167);
            if ($tmp168.value) {
            {
                if (((panda$core$Bit) { outFile146 != NULL }).value) {
                {
                    (($fn170) err151->$class->vtable[19])(err151, &$s169);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                {
                    panda$io$File* $tmp171 = outFile146;
                    panda$io$File* $tmp174 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                    panda$core$String* $tmp178 = (($fn177) args134->$class->vtable[4])(args134, &$s176);
                    panda$core$String* $tmp175 = $tmp178;
                    panda$io$File$init$panda$core$String($tmp174, $tmp175);
                    panda$io$File* $tmp173 = $tmp174;
                    panda$io$File* $tmp172 = $tmp173;
                    outFile146 = $tmp172;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp175));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp171));
                }
                panda$io$File* $tmp180 = panda$io$File$parent$R$panda$io$File$Q(outFile146);
                panda$io$File* $tmp179 = $tmp180;
                panda$io$File$createDirectories($tmp179);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
            }
            }
            else {
            panda$core$Bit $tmp182 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13166, &$s181);
            if ($tmp182.value) {
            {
                panda$core$String* $tmp188 = (($fn187) args134->$class->vtable[4])(args134, &$s186);
                panda$core$String* $tmp185 = $tmp188;
                panda$core$String* $tmp184 = $tmp185;
                level183 = $tmp184;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
                panda$core$Int64$nullable $tmp189 = panda$core$String$convert$R$panda$core$Int64$Q(level183);
                optimizationLevel148 = ((panda$core$Int64) $tmp189.value);
                panda$core$Bit $tmp191 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel148, ((panda$core$Int64) { 3 }));
                bool $tmp190 = $tmp191.value;
                if ($tmp190) goto $l192;
                panda$core$Bit $tmp193 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel148, ((panda$core$Int64) { 0 }));
                $tmp190 = $tmp193.value;
                $l192:;
                panda$core$Bit $tmp194 = { $tmp190 };
                if ($tmp194.value) {
                {
                    panda$io$OutputStream* $tmp196 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    panda$io$OutputStream* $tmp195 = $tmp196;
                    (($fn198) $tmp195->$class->vtable[19])($tmp195, &$s197);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level183));
            }
            }
            else {
            panda$core$Bit $tmp200 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13166, &$s199);
            if ($tmp200.value) {
            {
                panda$core$String* $tmp206 = (($fn205) args134->$class->vtable[4])(args134, &$s204);
                panda$core$String* $tmp203 = $tmp206;
                panda$core$String* $tmp202 = $tmp203;
                level201 = $tmp202;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp202));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
                panda$core$Int64$nullable $tmp207 = panda$core$String$convert$R$panda$core$Int64$Q(level201);
                safetyLevel149 = ((panda$core$Int64) $tmp207.value);
                panda$core$Bit $tmp209 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel149, ((panda$core$Int64) { 3 }));
                bool $tmp208 = $tmp209.value;
                if ($tmp208) goto $l210;
                panda$core$Bit $tmp211 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel149, ((panda$core$Int64) { 0 }));
                $tmp208 = $tmp211.value;
                $l210:;
                panda$core$Bit $tmp212 = { $tmp208 };
                if ($tmp212.value) {
                {
                    panda$io$OutputStream* $tmp214 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    panda$io$OutputStream* $tmp213 = $tmp214;
                    (($fn216) $tmp213->$class->vtable[19])($tmp213, &$s215);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp213));
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level201));
            }
            }
            else {
            panda$core$Bit $tmp218 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13166, &$s217);
            if ($tmp218.value) {
            {
                if (((panda$core$Bit) { format150.nonnull }).value) {
                {
                    (($fn220) err151->$class->vtable[19])(err151, &$s219);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$String* $tmp226 = (($fn225) args134->$class->vtable[4])(args134, &$s224);
                panda$core$String* $tmp223 = $tmp226;
                panda$core$String* $tmp222 = $tmp223;
                f221 = $tmp222;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp222));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp223));
                {
                    $match$177_21227 = f221;
                    panda$core$Bit $tmp229 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21227, &$s228);
                    if ($tmp229.value) {
                    {
                        format150 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp231 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21227, &$s230);
                    if ($tmp231.value) {
                    {
                        format150 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 919 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp233 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21227, &$s232);
                    if ($tmp233.value) {
                    {
                        format150 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 917 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp235 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21227, &$s234);
                    if ($tmp235.value) {
                    {
                        format150 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 920 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp237 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21227, &$s236);
                    if ($tmp237.value) {
                    {
                        format150 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 921 }), true });
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s240, f221);
                        panda$core$String* $tmp239 = $tmp241;
                        panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp239, &$s242);
                        panda$core$String* $tmp238 = $tmp243;
                        (($fn244) err151->$class->vtable[19])(err151, $tmp238);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp238));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
                        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                    }
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f221));
            }
            }
            else {
            panda$core$Bit $tmp246 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13166, &$s245);
            if ($tmp246.value) {
            {
                panda$io$File* $tmp248 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                panda$core$String* $tmp252 = (($fn251) args134->$class->vtable[4])(args134, &$s250);
                panda$core$String* $tmp249 = $tmp252;
                panda$io$File$init$panda$core$String($tmp248, $tmp249);
                panda$io$File* $tmp247 = $tmp248;
                panda$collections$Array$add$panda$collections$Array$T(imports142, ((panda$core$Object*) $tmp247));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
            }
            }
            else {
            panda$core$Bit $tmp254 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13166, &$s253);
            if ($tmp254.value) {
            {
                {
                    panda$io$File* $tmp255 = self->llvmDir;
                    panda$io$File* $tmp258 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                    panda$core$String* $tmp262 = (($fn261) args134->$class->vtable[4])(args134, &$s260);
                    panda$core$String* $tmp259 = $tmp262;
                    panda$io$File$init$panda$core$String($tmp258, $tmp259);
                    panda$io$File* $tmp257 = $tmp258;
                    panda$io$File* $tmp256 = $tmp257;
                    self->llvmDir = $tmp256;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp256));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp257));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
                }
            }
            }
            else {
            panda$core$Bit $tmp264 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13166, &$s263);
            if ($tmp264.value) {
            {
                {
                    panda$core$String* $tmp265 = self->triple;
                    panda$core$String* $tmp270 = (($fn269) args134->$class->vtable[4])(args134, &$s268);
                    panda$core$String* $tmp267 = $tmp270;
                    panda$core$String* $tmp266 = $tmp267;
                    self->triple = $tmp266;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp267));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp265));
                }
            }
            }
            else {
            panda$core$Bit $tmp272 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13166, &$s271);
            if ($tmp272.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s273);
                panda$core$String* $tmp275 = panda$io$Console$readLine$R$panda$core$String$Q();
                panda$core$String* $tmp274 = $tmp275;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp274));
            }
            }
            else {
            {
                panda$core$Bit $tmp277 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a161, &$s276);
                if ($tmp277.value) {
                {
                    panda$io$File* $tmp279 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                    panda$io$File$init$panda$core$String($tmp279, a161);
                    panda$io$File* $tmp278 = $tmp279;
                    panda$collections$Array$add$panda$collections$Array$T(sources138, ((panda$core$Object*) $tmp278));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp278));
                }
                }
                else {
                {
                    panda$core$String* $tmp283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s282, a161);
                    panda$core$String* $tmp281 = $tmp283;
                    panda$core$String* $tmp285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp281, &$s284);
                    panda$core$String* $tmp280 = $tmp285;
                    (($fn286) err151->$class->vtable[19])(err151, $tmp280);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp280));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a161));
    }
    goto $l155;
    $l156:;
    {
        panda$io$File* $tmp287 = self->opt;
        panda$io$File* $tmp291 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s290);
        panda$io$File* $tmp289 = $tmp291;
        panda$io$File* $tmp288 = $tmp289;
        self->opt = $tmp288;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp288));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp289));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp287));
    }
    {
        panda$io$File* $tmp292 = self->llc;
        panda$io$File* $tmp296 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s295);
        panda$io$File* $tmp294 = $tmp296;
        panda$io$File* $tmp293 = $tmp294;
        self->llc = $tmp293;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp293));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp294));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp292));
    }
    {
        panda$io$File* $tmp297 = self->gcc;
        panda$io$File* $tmp300 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp300, &$s301);
        panda$io$File* $tmp299 = $tmp300;
        panda$io$File* $tmp298 = $tmp299;
        self->gcc = $tmp298;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
    }
    panda$core$Int64 $tmp302 = panda$collections$Array$get_count$R$panda$core$Int64(sources138);
    panda$core$Bit $tmp303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp302, ((panda$core$Int64) { 0 }));
    if ($tmp303.value) {
    {
        (($fn305) err151->$class->vtable[19])(err151, &$s304);
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    if (((panda$core$Bit) { !format150.nonnull }).value) {
    {
        format150 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
    }
    }
    if (((panda$core$Bit) { outFile146 == NULL }).value) {
    {
        panda$core$Int64 $tmp306 = panda$collections$Array$get_count$R$panda$core$Int64(sources138);
        panda$core$Bit $tmp307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp306, ((panda$core$Int64) { 1 }));
        if ($tmp307.value) {
        {
            memset(&extension308, 0, sizeof(extension308));
            {
                $match$220_21309 = format150;
                panda$core$Bit $tmp310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$220_21309.value), ((panda$core$Int64) { 918 }));
                if ($tmp310.value) {
                {
                    {
                        panda$core$String* $tmp311 = extension308;
                        panda$core$String* $tmp312 = &$s313;
                        extension308 = $tmp312;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp311));
                    }
                }
                }
                else {
                panda$core$Bit $tmp314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$220_21309.value), ((panda$core$Int64) { 919 }));
                if ($tmp314.value) {
                {
                    {
                        panda$core$String* $tmp315 = extension308;
                        panda$core$String* $tmp316 = &$s317;
                        extension308 = $tmp316;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp316));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
                    }
                }
                }
                else {
                panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$220_21309.value), ((panda$core$Int64) { 920 }));
                if ($tmp318.value) {
                {
                    {
                        panda$core$String* $tmp319 = extension308;
                        panda$core$String* $tmp320 = &$s321;
                        extension308 = $tmp320;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp320));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
                    }
                }
                }
                else {
                panda$core$Bit $tmp322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$220_21309.value), ((panda$core$Int64) { 921 }));
                if ($tmp322.value) {
                {
                    {
                        panda$core$String* $tmp323 = extension308;
                        panda$core$String* $tmp324 = &$s325;
                        extension308 = $tmp324;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp324));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp323));
                    }
                }
                }
                else {
                panda$core$Bit $tmp326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$220_21309.value), ((panda$core$Int64) { 917 }));
                if ($tmp326.value) {
                {
                    {
                        panda$core$String* $tmp327 = extension308;
                        panda$core$String* $tmp328 = &$s329;
                        extension308 = $tmp328;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp328));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
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
                panda$io$File* $tmp330 = outFile146;
                panda$core$Object* $tmp334 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources138, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp333 = $tmp334;
                panda$io$File* $tmp335 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp333), extension308);
                panda$io$File* $tmp332 = $tmp335;
                panda$io$File* $tmp331 = $tmp332;
                outFile146 = $tmp331;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
                panda$core$Panda$unref$panda$core$Object($tmp333);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension308));
        }
        }
        else {
        {
            panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s337, &$s338);
            panda$core$String* $tmp336 = $tmp339;
            (($fn340) err151->$class->vtable[19])(err151, $tmp336);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp336));
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
    }
    }
    memset(&cg341, 0, sizeof(cg341));
    {
        $match$237_13342 = format150;
        panda$core$Bit $tmp345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$237_13342.value), ((panda$core$Int64) { 917 }));
        bool $tmp344 = $tmp345.value;
        if ($tmp344) goto $l346;
        panda$core$Bit $tmp347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$237_13342.value), ((panda$core$Int64) { 918 }));
        $tmp344 = $tmp347.value;
        $l346:;
        panda$core$Bit $tmp348 = { $tmp344 };
        bool $tmp343 = $tmp348.value;
        if ($tmp343) goto $l349;
        panda$core$Bit $tmp350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$237_13342.value), ((panda$core$Int64) { 919 }));
        $tmp343 = $tmp350.value;
        $l349:;
        panda$core$Bit $tmp351 = { $tmp343 };
        if ($tmp351.value) {
        {
            {
                org$pandalanguage$pandac$CodeGenerator* $tmp352 = cg341;
                org$pandalanguage$pandac$LLVMCodeGenerator* $tmp355 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                panda$io$File* $tmp359 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile146, &$s358);
                panda$io$File* $tmp357 = $tmp359;
                panda$io$OutputStream* $tmp360 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp357);
                panda$io$OutputStream* $tmp356 = $tmp360;
                org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp355, self->triple, $tmp356);
                org$pandalanguage$pandac$LLVMCodeGenerator* $tmp354 = $tmp355;
                org$pandalanguage$pandac$CodeGenerator* $tmp353 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp354);
                cg341 = $tmp353;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp353));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp354));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp356));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp357));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
            }
        }
        }
        else {
        panda$core$Bit $tmp361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$237_13342.value), ((panda$core$Int64) { 920 }));
        if ($tmp361.value) {
        {
            {
                org$pandalanguage$pandac$CodeGenerator* $tmp362 = cg341;
                org$pandalanguage$pandac$HCodeGenerator* $tmp365 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(129, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp365, outFile146);
                org$pandalanguage$pandac$HCodeGenerator* $tmp364 = $tmp365;
                org$pandalanguage$pandac$CodeGenerator* $tmp363 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp364);
                cg341 = $tmp363;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp363));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp362));
            }
        }
        }
        else {
        panda$core$Bit $tmp366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$237_13342.value), ((panda$core$Int64) { 921 }));
        if ($tmp366.value) {
        {
            {
                org$pandalanguage$pandac$CodeGenerator* $tmp367 = cg341;
                org$pandalanguage$pandac$CCodeGenerator* $tmp370 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(264, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp370, outFile146);
                org$pandalanguage$pandac$CCodeGenerator* $tmp369 = $tmp370;
                org$pandalanguage$pandac$CodeGenerator* $tmp368 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp369);
                cg341 = $tmp368;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp368));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp369));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
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
    org$pandalanguage$pandac$Compiler$Settings* $tmp374 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
    org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp374, self->pandaHome, ((panda$collections$ListView*) imports142), optimizationLevel148, safetyLevel149);
    org$pandalanguage$pandac$Compiler$Settings* $tmp373 = $tmp374;
    org$pandalanguage$pandac$Compiler$Settings* $tmp372 = $tmp373;
    settings371 = $tmp372;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp372));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp373));
    org$pandalanguage$pandac$Compiler* $tmp378 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(161, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
    org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp378, cg341, settings371);
    org$pandalanguage$pandac$Compiler* $tmp377 = $tmp378;
    org$pandalanguage$pandac$Compiler* $tmp376 = $tmp377;
    compiler375 = $tmp376;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp376));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
    {
        ITable* $tmp382 = ((panda$collections$Iterable*) sources138)->$class->itable;
        while ($tmp382->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp382 = $tmp382->next;
        }
        $fn384 $tmp383 = $tmp382->methods[0];
        panda$collections$Iterator* $tmp385 = $tmp383(((panda$collections$Iterable*) sources138));
        panda$collections$Iterator* $tmp381 = $tmp385;
        panda$collections$Iterator* $tmp380 = $tmp381;
        Iter$248$9379 = $tmp380;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp380));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
        $l386:;
        ITable* $tmp389 = Iter$248$9379->$class->itable;
        while ($tmp389->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp389 = $tmp389->next;
        }
        $fn391 $tmp390 = $tmp389->methods[0];
        panda$core$Bit $tmp392 = $tmp390(Iter$248$9379);
        panda$core$Bit $tmp393 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp392);
        bool $tmp388 = $tmp393.value;
        if (!$tmp388) goto $l387;
        {
            ITable* $tmp397 = Iter$248$9379->$class->itable;
            while ($tmp397->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp397 = $tmp397->next;
            }
            $fn399 $tmp398 = $tmp397->methods[1];
            panda$core$Object* $tmp400 = $tmp398(Iter$248$9379);
            panda$core$Object* $tmp396 = $tmp400;
            panda$io$File* $tmp395 = ((panda$io$File*) $tmp396);
            s394 = $tmp395;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp395));
            panda$core$Panda$unref$panda$core$Object($tmp396);
            {
                panda$collections$ListView* $tmp405 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler375, s394);
                panda$collections$ListView* $tmp404 = $tmp405;
                ITable* $tmp406 = ((panda$collections$Iterable*) $tmp404)->$class->itable;
                while ($tmp406->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp406 = $tmp406->next;
                }
                $fn408 $tmp407 = $tmp406->methods[0];
                panda$collections$Iterator* $tmp409 = $tmp407(((panda$collections$Iterable*) $tmp404));
                panda$collections$Iterator* $tmp403 = $tmp409;
                panda$collections$Iterator* $tmp402 = $tmp403;
                Iter$249$13401 = $tmp402;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp402));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
                $l410:;
                ITable* $tmp413 = Iter$249$13401->$class->itable;
                while ($tmp413->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp413 = $tmp413->next;
                }
                $fn415 $tmp414 = $tmp413->methods[0];
                panda$core$Bit $tmp416 = $tmp414(Iter$249$13401);
                panda$core$Bit $tmp417 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp416);
                bool $tmp412 = $tmp417.value;
                if (!$tmp412) goto $l411;
                {
                    ITable* $tmp421 = Iter$249$13401->$class->itable;
                    while ($tmp421->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp421 = $tmp421->next;
                    }
                    $fn423 $tmp422 = $tmp421->methods[1];
                    panda$core$Object* $tmp424 = $tmp422(Iter$249$13401);
                    panda$core$Object* $tmp420 = $tmp424;
                    org$pandalanguage$pandac$ClassDecl* $tmp419 = ((org$pandalanguage$pandac$ClassDecl*) $tmp420);
                    cl418 = $tmp419;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp419));
                    panda$core$Panda$unref$panda$core$Object($tmp420);
                    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler375, cl418);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl418));
                }
                goto $l410;
                $l411:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$249$13401));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s394));
        }
        goto $l386;
        $l387:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$248$9379));
    }
    panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler375->errorCount, ((panda$core$Int64) { 0 }));
    if ($tmp425.value) {
    {
        {
            ITable* $tmp429 = ((panda$collections$Iterable*) sources138)->$class->itable;
            while ($tmp429->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp429 = $tmp429->next;
            }
            $fn431 $tmp430 = $tmp429->methods[0];
            panda$collections$Iterator* $tmp432 = $tmp430(((panda$collections$Iterable*) sources138));
            panda$collections$Iterator* $tmp428 = $tmp432;
            panda$collections$Iterator* $tmp427 = $tmp428;
            Iter$254$13426 = $tmp427;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp427));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp428));
            $l433:;
            ITable* $tmp436 = Iter$254$13426->$class->itable;
            while ($tmp436->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp436 = $tmp436->next;
            }
            $fn438 $tmp437 = $tmp436->methods[0];
            panda$core$Bit $tmp439 = $tmp437(Iter$254$13426);
            panda$core$Bit $tmp440 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp439);
            bool $tmp435 = $tmp440.value;
            if (!$tmp435) goto $l434;
            {
                ITable* $tmp444 = Iter$254$13426->$class->itable;
                while ($tmp444->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp444 = $tmp444->next;
                }
                $fn446 $tmp445 = $tmp444->methods[1];
                panda$core$Object* $tmp447 = $tmp445(Iter$254$13426);
                panda$core$Object* $tmp443 = $tmp447;
                panda$io$File* $tmp442 = ((panda$io$File*) $tmp443);
                s441 = $tmp442;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp442));
                panda$core$Panda$unref$panda$core$Object($tmp443);
                org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler375, s441);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s441));
            }
            goto $l433;
            $l434:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$254$13426));
        }
        org$pandalanguage$pandac$Compiler$finish(compiler375);
    }
    }
    panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler375->errorCount, ((panda$core$Int64) { 0 }));
    if ($tmp448.value) {
    {
        {
            $match$261_17449 = format150;
            panda$core$Bit $tmp450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$261_17449.value), ((panda$core$Int64) { 918 }));
            if ($tmp450.value) {
            {
                panda$io$File* $tmp456 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile146, &$s455);
                panda$io$File* $tmp454 = $tmp456;
                panda$io$File* $tmp457 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp454, optimizationLevel148);
                panda$io$File* $tmp453 = $tmp457;
                panda$io$File* $tmp452 = $tmp453;
                optimized451 = $tmp452;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp452));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp453));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp454));
                panda$io$File* $tmp461 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized451);
                panda$io$File* $tmp460 = $tmp461;
                panda$io$File* $tmp459 = $tmp460;
                assembly458 = $tmp459;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp459));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp460));
                panda$io$File* $tmp463 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly458, outFile146);
                panda$io$File* $tmp462 = $tmp463;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp462));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly458));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized451));
                }
            }
            }
            else {
            panda$core$Bit $tmp464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$261_17449.value), ((panda$core$Int64) { 919 }));
            if ($tmp464.value) {
            {
                panda$io$File* $tmp470 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile146, &$s469);
                panda$io$File* $tmp468 = $tmp470;
                panda$io$File* $tmp471 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp468, optimizationLevel148);
                panda$io$File* $tmp467 = $tmp471;
                panda$io$File* $tmp466 = $tmp467;
                optimized465 = $tmp466;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp466));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp467));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp468));
                panda$io$File* $tmp475 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized465);
                panda$io$File* $tmp474 = $tmp475;
                panda$io$File* $tmp473 = $tmp474;
                assembly472 = $tmp473;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp473));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp474));
                panda$io$File* $tmp477 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly472, outFile146);
                panda$io$File* $tmp476 = $tmp477;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp476));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly472));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized465));
                }
            }
            }
            }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler375->errorCount, ((panda$core$Int64) { 1 }));
        if ($tmp478.value) {
        {
            panda$io$Console$printLine$panda$core$String(&$s479);
        }
        }
        else {
        {
            panda$core$String* $tmp482 = panda$core$Int64$convert$R$panda$core$String(compiler375->errorCount);
            panda$core$String* $tmp481 = $tmp482;
            panda$core$String* $tmp484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp481, &$s483);
            panda$core$String* $tmp480 = $tmp484;
            panda$io$Console$printLine$panda$core$String($tmp480);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
        }
        }
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg341));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings371));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err151));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources138));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile146));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports142));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler375));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args134));
    }
}
void pandaMain(panda$collections$ListView* p_args) {
    panda$json$JSONParser* parser490;
    panda$collections$Array* imports499;
    panda$core$Int64 optimizationLevel506;
    org$pandalanguage$pandac$LLVMCodeGenerator* cg507;
    panda$core$Int64 safetyLevel517;
    org$pandalanguage$pandac$Compiler$Settings* settings518;
    org$pandalanguage$pandac$Compiler* compiler525;
    panda$io$File* s529;
    panda$collections$Iterator* Iter$309$9534;
    org$pandalanguage$pandac$ClassDecl* cl551;
    ITable* $tmp485 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp485->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp485 = $tmp485->next;
    }
    $fn487 $tmp486 = $tmp485->methods[0];
    panda$core$Int64 $tmp488 = $tmp486(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp488, ((panda$core$Int64) { 1 }));
    if ($tmp489.value) {
    {
        panda$json$JSONParser* $tmp493 = (panda$json$JSONParser*) pandaObjectAlloc(98, (panda$core$Class*) &panda$json$JSONParser$class);
        panda$json$JSONParser$init($tmp493);
        panda$json$JSONParser* $tmp492 = $tmp493;
        panda$json$JSONParser* $tmp491 = $tmp492;
        parser490 = $tmp491;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp491));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp492));
        panda$io$Console$printLine$panda$core$String(&$s494);
        panda$json$JSON* $tmp498 = (($fn497) parser490->$class->vtable[2])(parser490, &$s496);
        panda$json$JSON* $tmp495 = $tmp498;
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp495));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp495));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parser490));
    }
    }
    if (((panda$core$Bit) { false }).value) {
    {
        panda$collections$Array* $tmp502 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp502);
        panda$collections$Array* $tmp501 = $tmp502;
        panda$collections$Array* $tmp500 = $tmp501;
        imports499 = $tmp500;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp500));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp501));
        panda$io$File* $tmp504 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp504, &$s505);
        panda$io$File* $tmp503 = $tmp504;
        panda$collections$Array$add$panda$collections$Array$T(imports499, ((panda$core$Object*) $tmp503));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
        optimizationLevel506 = ((panda$core$Int64) { 3 });
        org$pandalanguage$pandac$LLVMCodeGenerator* $tmp510 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
        panda$io$File* $tmp514 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp514, &$s515);
        panda$io$File* $tmp513 = $tmp514;
        panda$io$OutputStream* $tmp516 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp513);
        panda$io$OutputStream* $tmp512 = $tmp516;
        org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp510, &$s511, $tmp512);
        org$pandalanguage$pandac$LLVMCodeGenerator* $tmp509 = $tmp510;
        org$pandalanguage$pandac$LLVMCodeGenerator* $tmp508 = $tmp509;
        cg507 = $tmp508;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp508));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp509));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp512));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp513));
        safetyLevel517 = ((panda$core$Int64) { 3 });
        org$pandalanguage$pandac$Compiler$Settings* $tmp521 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
        panda$io$File* $tmp523 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp523, &$s524);
        panda$io$File* $tmp522 = $tmp523;
        org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp521, $tmp522, ((panda$collections$ListView*) imports499), optimizationLevel506, safetyLevel517);
        org$pandalanguage$pandac$Compiler$Settings* $tmp520 = $tmp521;
        org$pandalanguage$pandac$Compiler$Settings* $tmp519 = $tmp520;
        settings518 = $tmp519;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp519));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp520));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp522));
        org$pandalanguage$pandac$Compiler* $tmp528 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(161, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
        org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp528, ((org$pandalanguage$pandac$CodeGenerator*) cg507), settings518);
        org$pandalanguage$pandac$Compiler* $tmp527 = $tmp528;
        org$pandalanguage$pandac$Compiler* $tmp526 = $tmp527;
        compiler525 = $tmp526;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp526));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp527));
        panda$io$File* $tmp532 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp532, &$s533);
        panda$io$File* $tmp531 = $tmp532;
        panda$io$File* $tmp530 = $tmp531;
        s529 = $tmp530;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp530));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp531));
        {
            panda$collections$ListView* $tmp538 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler525, s529);
            panda$collections$ListView* $tmp537 = $tmp538;
            ITable* $tmp539 = ((panda$collections$Iterable*) $tmp537)->$class->itable;
            while ($tmp539->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp539 = $tmp539->next;
            }
            $fn541 $tmp540 = $tmp539->methods[0];
            panda$collections$Iterator* $tmp542 = $tmp540(((panda$collections$Iterable*) $tmp537));
            panda$collections$Iterator* $tmp536 = $tmp542;
            panda$collections$Iterator* $tmp535 = $tmp536;
            Iter$309$9534 = $tmp535;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp535));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp536));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp537));
            $l543:;
            ITable* $tmp546 = Iter$309$9534->$class->itable;
            while ($tmp546->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp546 = $tmp546->next;
            }
            $fn548 $tmp547 = $tmp546->methods[0];
            panda$core$Bit $tmp549 = $tmp547(Iter$309$9534);
            panda$core$Bit $tmp550 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp549);
            bool $tmp545 = $tmp550.value;
            if (!$tmp545) goto $l544;
            {
                ITable* $tmp554 = Iter$309$9534->$class->itable;
                while ($tmp554->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp554 = $tmp554->next;
                }
                $fn556 $tmp555 = $tmp554->methods[1];
                panda$core$Object* $tmp557 = $tmp555(Iter$309$9534);
                panda$core$Object* $tmp553 = $tmp557;
                org$pandalanguage$pandac$ClassDecl* $tmp552 = ((org$pandalanguage$pandac$ClassDecl*) $tmp553);
                cl551 = $tmp552;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp552));
                panda$core$Panda$unref$panda$core$Object($tmp553);
                org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler525, cl551);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl551));
            }
            goto $l543;
            $l544:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$309$9534));
        }
        org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler525, s529);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg507));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s529));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings518));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports499));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler525));
        }
    }
    }
    else {
    {
        panda$core$Panda$disableRefCounting();
        org$pandalanguage$pandac$Main* $tmp559 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
        org$pandalanguage$pandac$Main$init($tmp559);
        org$pandalanguage$pandac$Main* $tmp558 = $tmp559;
        org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp558, p_args);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp558));
    }
    }
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llvmDir));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->triple));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

