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


static panda$core$String $s1;
org$pandalanguage$pandac$Main$class_type org$pandalanguage$pandac$Main$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Main$cleanup, org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File, org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream, org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT} };

typedef panda$core$String* (*$fn43)(panda$io$InputStream*);
typedef void (*$fn45)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn69)(panda$io$InputStream*);
typedef void (*$fn71)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn92)(panda$io$InputStream*);
typedef void (*$fn94)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn117)(panda$io$InputStream*);
typedef void (*$fn119)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn126)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn127)(panda$io$OutputStream*);
typedef void (*$fn129)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn130)(panda$io$OutputStream*);
typedef void (*$fn132)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn134)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn159)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn165)(org$pandalanguage$pandac$Main$Arguments*);
typedef void (*$fn171)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn178)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn188)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn199)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn206)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn217)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn221)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn226)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn245)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn252)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn262)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn270)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn287)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn306)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn341)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn385)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn392)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn400)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn409)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn416)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn424)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn432)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn439)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn447)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn489)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn496)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn543)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn550)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn558)(panda$collections$Iterator*);

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
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x6c\x6c\x76\x6d\x5f\x64\x69\x72", 10, -5843666376324264096, NULL };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x74\x68\x65\x20\x4c\x4c\x56\x4d\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 28, -1635669018571610865, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x74\x72\x69\x70\x6c\x65", 8, 15702175691418347, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4c\x56\x4d\x20\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6c\x65", 18, -7134459153622240993, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20", 64, 3394507457011302119, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x6c\x65", 4, 210233217, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static panda$core$String $s498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x63\x72\x61\x73\x68", 7, 155465316945520, NULL };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78\x38\x36\x5f\x36\x34\x2d\x61\x70\x70\x6c\x65\x2d\x64\x61\x72\x77\x69\x6e\x31\x37\x2e\x33\x2e\x30", 25, 2390944900235185536, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x54\x65\x73\x74\x2e\x6c\x6c", 12, 5522965462756929718, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x54\x65\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, -5645405478664216650, NULL };

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
    panda$core$System$Process* p110;
    panda$core$Int64 $tmp120;
    panda$io$File* tmp4122;
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
    panda$collections$Array$add$panda$collections$Array$T(args100, ((panda$core$Object*) &$s109));
    panda$collections$Array$add$panda$collections$Array$T(args100, ((panda$core$Object*) p_dest->path));
    panda$core$System$Process* $tmp113 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args100));
    panda$core$System$Process* $tmp112 = $tmp113;
    panda$core$System$Process* $tmp111 = $tmp112;
    p110 = $tmp111;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp111));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp112));
    panda$io$OutputStream* $tmp115 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$io$OutputStream* $tmp114 = $tmp115;
    panda$core$String* $tmp118 = (($fn117) p110->error->$class->vtable[6])(p110->error);
    panda$core$String* $tmp116 = $tmp118;
    (($fn119) $tmp114->$class->vtable[16])($tmp114, $tmp116);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp116));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp120, p110);
    panda$core$Bit $tmp121 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp120, ((panda$core$Int64) { 0 }));
    if ($tmp121.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        panda$io$File* $tmp123 = p_dest;
        tmp4122 = $tmp123;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp123));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p110));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args100));
        }
        panda$io$File* $tmp124 = tmp4122;
        return $tmp124;
    }
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn126) p_out->$class->vtable[19])(p_out, &$s125);
    (($fn127) p_out->$class->vtable[17])(p_out);
    (($fn129) p_out->$class->vtable[19])(p_out, &$s128);
    (($fn130) p_out->$class->vtable[17])(p_out);
    (($fn132) p_out->$class->vtable[19])(p_out, &$s131);
    (($fn134) p_out->$class->vtable[19])(p_out, &$s133);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args135;
    panda$collections$Array* sources139;
    panda$collections$Array* imports143;
    panda$io$File* outFile147;
    panda$core$Int64 optimizationLevel149;
    panda$core$Int64 safetyLevel150;
    panda$core$Int64$nullable format151;
    panda$io$OutputStream* err152;
    panda$core$String* a162;
    panda$core$String* $match$150_13167;
    panda$core$String* level184;
    panda$core$String* level202;
    panda$core$String* f222;
    panda$core$String* $match$178_21228;
    panda$core$String* extension309;
    panda$core$Int64$nullable $match$221_21310;
    org$pandalanguage$pandac$CodeGenerator* cg342;
    panda$core$Int64$nullable $match$238_13343;
    org$pandalanguage$pandac$Compiler$Settings* settings372;
    org$pandalanguage$pandac$Compiler* compiler376;
    panda$collections$Iterator* Iter$249$9380;
    panda$io$File* s395;
    panda$collections$Iterator* Iter$250$13402;
    org$pandalanguage$pandac$ClassDecl* cl419;
    panda$collections$Iterator* Iter$255$13427;
    panda$io$File* s442;
    panda$core$Int64$nullable $match$262_17450;
    panda$io$File* optimized452;
    panda$io$File* assembly459;
    panda$io$File* optimized466;
    panda$io$File* assembly473;
    org$pandalanguage$pandac$Main$Arguments* $tmp138 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
    org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp138, p_rawArgs);
    org$pandalanguage$pandac$Main$Arguments* $tmp137 = $tmp138;
    org$pandalanguage$pandac$Main$Arguments* $tmp136 = $tmp137;
    args135 = $tmp136;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp137));
    panda$collections$Array* $tmp142 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp142);
    panda$collections$Array* $tmp141 = $tmp142;
    panda$collections$Array* $tmp140 = $tmp141;
    sources139 = $tmp140;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp140));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp141));
    panda$collections$Array* $tmp146 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp146);
    panda$collections$Array* $tmp145 = $tmp146;
    panda$collections$Array* $tmp144 = $tmp145;
    imports143 = $tmp144;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp144));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp145));
    panda$collections$Array$add$panda$collections$Array$T(imports143, ((panda$core$Object*) self->pandaHome));
    panda$io$File* $tmp148 = NULL;
    outFile147 = $tmp148;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp148));
    optimizationLevel149 = ((panda$core$Int64) { 3 });
    safetyLevel150 = ((panda$core$Int64) { 3 });
    format151 = ((panda$core$Int64$nullable) { .nonnull = false });
    panda$io$OutputStream* $tmp155 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$io$OutputStream* $tmp154 = $tmp155;
    panda$io$OutputStream* $tmp153 = $tmp154;
    err152 = $tmp153;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp153));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
    $l156:;
    panda$core$Bit $tmp160 = (($fn159) args135->$class->vtable[2])(args135);
    panda$core$Bit $tmp161 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp160);
    bool $tmp158 = $tmp161.value;
    if (!$tmp158) goto $l157;
    {
        panda$core$String* $tmp166 = (($fn165) args135->$class->vtable[3])(args135);
        panda$core$String* $tmp164 = $tmp166;
        panda$core$String* $tmp163 = $tmp164;
        a162 = $tmp163;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp163));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
        {
            $match$150_13167 = a162;
            panda$core$Bit $tmp169 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13167, &$s168);
            if ($tmp169.value) {
            {
                if (((panda$core$Bit) { outFile147 != NULL }).value) {
                {
                    (($fn171) err152->$class->vtable[19])(err152, &$s170);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                {
                    panda$io$File* $tmp172 = outFile147;
                    panda$io$File* $tmp175 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                    panda$core$String* $tmp179 = (($fn178) args135->$class->vtable[4])(args135, &$s177);
                    panda$core$String* $tmp176 = $tmp179;
                    panda$io$File$init$panda$core$String($tmp175, $tmp176);
                    panda$io$File* $tmp174 = $tmp175;
                    panda$io$File* $tmp173 = $tmp174;
                    outFile147 = $tmp173;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp173));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp172));
                }
                panda$io$File* $tmp181 = panda$io$File$parent$R$panda$io$File$Q(outFile147);
                panda$io$File* $tmp180 = $tmp181;
                panda$io$File$createDirectories($tmp180);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp180));
            }
            }
            else {
            panda$core$Bit $tmp183 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13167, &$s182);
            if ($tmp183.value) {
            {
                panda$core$String* $tmp189 = (($fn188) args135->$class->vtable[4])(args135, &$s187);
                panda$core$String* $tmp186 = $tmp189;
                panda$core$String* $tmp185 = $tmp186;
                level184 = $tmp185;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
                panda$core$Int64$nullable $tmp190 = panda$core$String$convert$R$panda$core$Int64$Q(level184);
                optimizationLevel149 = ((panda$core$Int64) $tmp190.value);
                panda$core$Bit $tmp192 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel149, ((panda$core$Int64) { 3 }));
                bool $tmp191 = $tmp192.value;
                if ($tmp191) goto $l193;
                panda$core$Bit $tmp194 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel149, ((panda$core$Int64) { 0 }));
                $tmp191 = $tmp194.value;
                $l193:;
                panda$core$Bit $tmp195 = { $tmp191 };
                if ($tmp195.value) {
                {
                    panda$io$OutputStream* $tmp197 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    panda$io$OutputStream* $tmp196 = $tmp197;
                    (($fn199) $tmp196->$class->vtable[19])($tmp196, &$s198);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level184));
            }
            }
            else {
            panda$core$Bit $tmp201 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13167, &$s200);
            if ($tmp201.value) {
            {
                panda$core$String* $tmp207 = (($fn206) args135->$class->vtable[4])(args135, &$s205);
                panda$core$String* $tmp204 = $tmp207;
                panda$core$String* $tmp203 = $tmp204;
                level202 = $tmp203;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp203));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp204));
                panda$core$Int64$nullable $tmp208 = panda$core$String$convert$R$panda$core$Int64$Q(level202);
                safetyLevel150 = ((panda$core$Int64) $tmp208.value);
                panda$core$Bit $tmp210 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel150, ((panda$core$Int64) { 3 }));
                bool $tmp209 = $tmp210.value;
                if ($tmp209) goto $l211;
                panda$core$Bit $tmp212 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel150, ((panda$core$Int64) { 0 }));
                $tmp209 = $tmp212.value;
                $l211:;
                panda$core$Bit $tmp213 = { $tmp209 };
                if ($tmp213.value) {
                {
                    panda$io$OutputStream* $tmp215 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    panda$io$OutputStream* $tmp214 = $tmp215;
                    (($fn217) $tmp214->$class->vtable[19])($tmp214, &$s216);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp214));
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level202));
            }
            }
            else {
            panda$core$Bit $tmp219 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13167, &$s218);
            if ($tmp219.value) {
            {
                if (((panda$core$Bit) { format151.nonnull }).value) {
                {
                    (($fn221) err152->$class->vtable[19])(err152, &$s220);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$String* $tmp227 = (($fn226) args135->$class->vtable[4])(args135, &$s225);
                panda$core$String* $tmp224 = $tmp227;
                panda$core$String* $tmp223 = $tmp224;
                f222 = $tmp223;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
                {
                    $match$178_21228 = f222;
                    panda$core$Bit $tmp230 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$178_21228, &$s229);
                    if ($tmp230.value) {
                    {
                        format151 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp232 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$178_21228, &$s231);
                    if ($tmp232.value) {
                    {
                        format151 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 919 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp234 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$178_21228, &$s233);
                    if ($tmp234.value) {
                    {
                        format151 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 917 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp236 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$178_21228, &$s235);
                    if ($tmp236.value) {
                    {
                        format151 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 920 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp238 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$178_21228, &$s237);
                    if ($tmp238.value) {
                    {
                        format151 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 921 }), true });
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s241, f222);
                        panda$core$String* $tmp240 = $tmp242;
                        panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp240, &$s243);
                        panda$core$String* $tmp239 = $tmp244;
                        (($fn245) err152->$class->vtable[19])(err152, $tmp239);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp240));
                        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                    }
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f222));
            }
            }
            else {
            panda$core$Bit $tmp247 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13167, &$s246);
            if ($tmp247.value) {
            {
                panda$io$File* $tmp249 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                panda$core$String* $tmp253 = (($fn252) args135->$class->vtable[4])(args135, &$s251);
                panda$core$String* $tmp250 = $tmp253;
                panda$io$File$init$panda$core$String($tmp249, $tmp250);
                panda$io$File* $tmp248 = $tmp249;
                panda$collections$Array$add$panda$collections$Array$T(imports143, ((panda$core$Object*) $tmp248));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp248));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp250));
            }
            }
            else {
            panda$core$Bit $tmp255 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13167, &$s254);
            if ($tmp255.value) {
            {
                {
                    panda$io$File* $tmp256 = self->llvmDir;
                    panda$io$File* $tmp259 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                    panda$core$String* $tmp263 = (($fn262) args135->$class->vtable[4])(args135, &$s261);
                    panda$core$String* $tmp260 = $tmp263;
                    panda$io$File$init$panda$core$String($tmp259, $tmp260);
                    panda$io$File* $tmp258 = $tmp259;
                    panda$io$File* $tmp257 = $tmp258;
                    self->llvmDir = $tmp257;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp257));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp260));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp256));
                }
            }
            }
            else {
            panda$core$Bit $tmp265 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13167, &$s264);
            if ($tmp265.value) {
            {
                {
                    panda$core$String* $tmp266 = self->triple;
                    panda$core$String* $tmp271 = (($fn270) args135->$class->vtable[4])(args135, &$s269);
                    panda$core$String* $tmp268 = $tmp271;
                    panda$core$String* $tmp267 = $tmp268;
                    self->triple = $tmp267;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp267));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp268));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
                }
            }
            }
            else {
            panda$core$Bit $tmp273 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13167, &$s272);
            if ($tmp273.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s274);
                panda$core$String* $tmp276 = panda$io$Console$readLine$R$panda$core$String$Q();
                panda$core$String* $tmp275 = $tmp276;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp275));
            }
            }
            else {
            {
                panda$core$Bit $tmp278 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a162, &$s277);
                if ($tmp278.value) {
                {
                    panda$io$File* $tmp280 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                    panda$io$File$init$panda$core$String($tmp280, a162);
                    panda$io$File* $tmp279 = $tmp280;
                    panda$collections$Array$add$panda$collections$Array$T(sources139, ((panda$core$Object*) $tmp279));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp279));
                }
                }
                else {
                {
                    panda$core$String* $tmp284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s283, a162);
                    panda$core$String* $tmp282 = $tmp284;
                    panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp282, &$s285);
                    panda$core$String* $tmp281 = $tmp286;
                    (($fn287) err152->$class->vtable[19])(err152, $tmp281);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp282));
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a162));
    }
    goto $l156;
    $l157:;
    {
        panda$io$File* $tmp288 = self->opt;
        panda$io$File* $tmp292 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s291);
        panda$io$File* $tmp290 = $tmp292;
        panda$io$File* $tmp289 = $tmp290;
        self->opt = $tmp289;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp289));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp290));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp288));
    }
    {
        panda$io$File* $tmp293 = self->llc;
        panda$io$File* $tmp297 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s296);
        panda$io$File* $tmp295 = $tmp297;
        panda$io$File* $tmp294 = $tmp295;
        self->llc = $tmp294;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp294));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp295));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp293));
    }
    {
        panda$io$File* $tmp298 = self->gcc;
        panda$io$File* $tmp301 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp301, &$s302);
        panda$io$File* $tmp300 = $tmp301;
        panda$io$File* $tmp299 = $tmp300;
        self->gcc = $tmp299;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp299));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp300));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
    }
    panda$core$Int64 $tmp303 = panda$collections$Array$get_count$R$panda$core$Int64(sources139);
    panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp303, ((panda$core$Int64) { 0 }));
    if ($tmp304.value) {
    {
        (($fn306) err152->$class->vtable[19])(err152, &$s305);
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    if (((panda$core$Bit) { !format151.nonnull }).value) {
    {
        format151 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
    }
    }
    if (((panda$core$Bit) { outFile147 == NULL }).value) {
    {
        panda$core$Int64 $tmp307 = panda$collections$Array$get_count$R$panda$core$Int64(sources139);
        panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp307, ((panda$core$Int64) { 1 }));
        if ($tmp308.value) {
        {
            memset(&extension309, 0, sizeof(extension309));
            {
                $match$221_21310 = format151;
                panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$221_21310.value), ((panda$core$Int64) { 918 }));
                if ($tmp311.value) {
                {
                    {
                        panda$core$String* $tmp312 = extension309;
                        panda$core$String* $tmp313 = &$s314;
                        extension309 = $tmp313;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp313));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
                    }
                }
                }
                else {
                panda$core$Bit $tmp315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$221_21310.value), ((panda$core$Int64) { 919 }));
                if ($tmp315.value) {
                {
                    {
                        panda$core$String* $tmp316 = extension309;
                        panda$core$String* $tmp317 = &$s318;
                        extension309 = $tmp317;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp317));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
                    }
                }
                }
                else {
                panda$core$Bit $tmp319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$221_21310.value), ((panda$core$Int64) { 920 }));
                if ($tmp319.value) {
                {
                    {
                        panda$core$String* $tmp320 = extension309;
                        panda$core$String* $tmp321 = &$s322;
                        extension309 = $tmp321;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp321));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
                    }
                }
                }
                else {
                panda$core$Bit $tmp323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$221_21310.value), ((panda$core$Int64) { 921 }));
                if ($tmp323.value) {
                {
                    {
                        panda$core$String* $tmp324 = extension309;
                        panda$core$String* $tmp325 = &$s326;
                        extension309 = $tmp325;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp325));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
                    }
                }
                }
                else {
                panda$core$Bit $tmp327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$221_21310.value), ((panda$core$Int64) { 917 }));
                if ($tmp327.value) {
                {
                    {
                        panda$core$String* $tmp328 = extension309;
                        panda$core$String* $tmp329 = &$s330;
                        extension309 = $tmp329;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp329));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp328));
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
                panda$io$File* $tmp331 = outFile147;
                panda$core$Object* $tmp335 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources139, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp334 = $tmp335;
                panda$io$File* $tmp336 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp334), extension309);
                panda$io$File* $tmp333 = $tmp336;
                panda$io$File* $tmp332 = $tmp333;
                outFile147 = $tmp332;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp332));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp333));
                panda$core$Panda$unref$panda$core$Object($tmp334);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp331));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension309));
        }
        }
        else {
        {
            panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s338, &$s339);
            panda$core$String* $tmp337 = $tmp340;
            (($fn341) err152->$class->vtable[19])(err152, $tmp337);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp337));
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
    }
    }
    memset(&cg342, 0, sizeof(cg342));
    {
        $match$238_13343 = format151;
        panda$core$Bit $tmp346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$238_13343.value), ((panda$core$Int64) { 917 }));
        bool $tmp345 = $tmp346.value;
        if ($tmp345) goto $l347;
        panda$core$Bit $tmp348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$238_13343.value), ((panda$core$Int64) { 918 }));
        $tmp345 = $tmp348.value;
        $l347:;
        panda$core$Bit $tmp349 = { $tmp345 };
        bool $tmp344 = $tmp349.value;
        if ($tmp344) goto $l350;
        panda$core$Bit $tmp351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$238_13343.value), ((panda$core$Int64) { 919 }));
        $tmp344 = $tmp351.value;
        $l350:;
        panda$core$Bit $tmp352 = { $tmp344 };
        if ($tmp352.value) {
        {
            {
                org$pandalanguage$pandac$CodeGenerator* $tmp353 = cg342;
                org$pandalanguage$pandac$LLVMCodeGenerator* $tmp356 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                panda$io$File* $tmp360 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile147, &$s359);
                panda$io$File* $tmp358 = $tmp360;
                panda$io$OutputStream* $tmp361 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp358);
                panda$io$OutputStream* $tmp357 = $tmp361;
                org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp356, self->triple, $tmp357);
                org$pandalanguage$pandac$LLVMCodeGenerator* $tmp355 = $tmp356;
                org$pandalanguage$pandac$CodeGenerator* $tmp354 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp355);
                cg342 = $tmp354;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp354));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp355));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp357));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp358));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp353));
            }
        }
        }
        else {
        panda$core$Bit $tmp362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$238_13343.value), ((panda$core$Int64) { 920 }));
        if ($tmp362.value) {
        {
            {
                org$pandalanguage$pandac$CodeGenerator* $tmp363 = cg342;
                org$pandalanguage$pandac$HCodeGenerator* $tmp366 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(129, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp366, outFile147);
                org$pandalanguage$pandac$HCodeGenerator* $tmp365 = $tmp366;
                org$pandalanguage$pandac$CodeGenerator* $tmp364 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp365);
                cg342 = $tmp364;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp364));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp365));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp363));
            }
        }
        }
        else {
        panda$core$Bit $tmp367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$238_13343.value), ((panda$core$Int64) { 921 }));
        if ($tmp367.value) {
        {
            {
                org$pandalanguage$pandac$CodeGenerator* $tmp368 = cg342;
                org$pandalanguage$pandac$CCodeGenerator* $tmp371 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(264, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp371, outFile147);
                org$pandalanguage$pandac$CCodeGenerator* $tmp370 = $tmp371;
                org$pandalanguage$pandac$CodeGenerator* $tmp369 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp370);
                cg342 = $tmp369;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp369));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp370));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp368));
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
    org$pandalanguage$pandac$Compiler$Settings* $tmp375 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
    org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp375, self->pandaHome, ((panda$collections$ListView*) imports143), optimizationLevel149, safetyLevel150);
    org$pandalanguage$pandac$Compiler$Settings* $tmp374 = $tmp375;
    org$pandalanguage$pandac$Compiler$Settings* $tmp373 = $tmp374;
    settings372 = $tmp373;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp373));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp374));
    org$pandalanguage$pandac$Compiler* $tmp379 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(161, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
    org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp379, cg342, settings372);
    org$pandalanguage$pandac$Compiler* $tmp378 = $tmp379;
    org$pandalanguage$pandac$Compiler* $tmp377 = $tmp378;
    compiler376 = $tmp377;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp377));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp378));
    {
        ITable* $tmp383 = ((panda$collections$Iterable*) sources139)->$class->itable;
        while ($tmp383->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp383 = $tmp383->next;
        }
        $fn385 $tmp384 = $tmp383->methods[0];
        panda$collections$Iterator* $tmp386 = $tmp384(((panda$collections$Iterable*) sources139));
        panda$collections$Iterator* $tmp382 = $tmp386;
        panda$collections$Iterator* $tmp381 = $tmp382;
        Iter$249$9380 = $tmp381;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp381));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp382));
        $l387:;
        ITable* $tmp390 = Iter$249$9380->$class->itable;
        while ($tmp390->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp390 = $tmp390->next;
        }
        $fn392 $tmp391 = $tmp390->methods[0];
        panda$core$Bit $tmp393 = $tmp391(Iter$249$9380);
        panda$core$Bit $tmp394 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp393);
        bool $tmp389 = $tmp394.value;
        if (!$tmp389) goto $l388;
        {
            ITable* $tmp398 = Iter$249$9380->$class->itable;
            while ($tmp398->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp398 = $tmp398->next;
            }
            $fn400 $tmp399 = $tmp398->methods[1];
            panda$core$Object* $tmp401 = $tmp399(Iter$249$9380);
            panda$core$Object* $tmp397 = $tmp401;
            panda$io$File* $tmp396 = ((panda$io$File*) $tmp397);
            s395 = $tmp396;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp396));
            panda$core$Panda$unref$panda$core$Object($tmp397);
            {
                panda$collections$ListView* $tmp406 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler376, s395);
                panda$collections$ListView* $tmp405 = $tmp406;
                ITable* $tmp407 = ((panda$collections$Iterable*) $tmp405)->$class->itable;
                while ($tmp407->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp407 = $tmp407->next;
                }
                $fn409 $tmp408 = $tmp407->methods[0];
                panda$collections$Iterator* $tmp410 = $tmp408(((panda$collections$Iterable*) $tmp405));
                panda$collections$Iterator* $tmp404 = $tmp410;
                panda$collections$Iterator* $tmp403 = $tmp404;
                Iter$250$13402 = $tmp403;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp403));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp405));
                $l411:;
                ITable* $tmp414 = Iter$250$13402->$class->itable;
                while ($tmp414->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp414 = $tmp414->next;
                }
                $fn416 $tmp415 = $tmp414->methods[0];
                panda$core$Bit $tmp417 = $tmp415(Iter$250$13402);
                panda$core$Bit $tmp418 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp417);
                bool $tmp413 = $tmp418.value;
                if (!$tmp413) goto $l412;
                {
                    ITable* $tmp422 = Iter$250$13402->$class->itable;
                    while ($tmp422->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp422 = $tmp422->next;
                    }
                    $fn424 $tmp423 = $tmp422->methods[1];
                    panda$core$Object* $tmp425 = $tmp423(Iter$250$13402);
                    panda$core$Object* $tmp421 = $tmp425;
                    org$pandalanguage$pandac$ClassDecl* $tmp420 = ((org$pandalanguage$pandac$ClassDecl*) $tmp421);
                    cl419 = $tmp420;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp420));
                    panda$core$Panda$unref$panda$core$Object($tmp421);
                    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler376, cl419);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl419));
                }
                goto $l411;
                $l412:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$250$13402));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s395));
        }
        goto $l387;
        $l388:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$249$9380));
    }
    panda$core$Bit $tmp426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler376->errorCount, ((panda$core$Int64) { 0 }));
    if ($tmp426.value) {
    {
        {
            ITable* $tmp430 = ((panda$collections$Iterable*) sources139)->$class->itable;
            while ($tmp430->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp430 = $tmp430->next;
            }
            $fn432 $tmp431 = $tmp430->methods[0];
            panda$collections$Iterator* $tmp433 = $tmp431(((panda$collections$Iterable*) sources139));
            panda$collections$Iterator* $tmp429 = $tmp433;
            panda$collections$Iterator* $tmp428 = $tmp429;
            Iter$255$13427 = $tmp428;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp428));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp429));
            $l434:;
            ITable* $tmp437 = Iter$255$13427->$class->itable;
            while ($tmp437->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp437 = $tmp437->next;
            }
            $fn439 $tmp438 = $tmp437->methods[0];
            panda$core$Bit $tmp440 = $tmp438(Iter$255$13427);
            panda$core$Bit $tmp441 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp440);
            bool $tmp436 = $tmp441.value;
            if (!$tmp436) goto $l435;
            {
                ITable* $tmp445 = Iter$255$13427->$class->itable;
                while ($tmp445->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp445 = $tmp445->next;
                }
                $fn447 $tmp446 = $tmp445->methods[1];
                panda$core$Object* $tmp448 = $tmp446(Iter$255$13427);
                panda$core$Object* $tmp444 = $tmp448;
                panda$io$File* $tmp443 = ((panda$io$File*) $tmp444);
                s442 = $tmp443;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp443));
                panda$core$Panda$unref$panda$core$Object($tmp444);
                org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler376, s442);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s442));
            }
            goto $l434;
            $l435:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$255$13427));
        }
        org$pandalanguage$pandac$Compiler$finish(compiler376);
    }
    }
    panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler376->errorCount, ((panda$core$Int64) { 0 }));
    if ($tmp449.value) {
    {
        {
            $match$262_17450 = format151;
            panda$core$Bit $tmp451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$262_17450.value), ((panda$core$Int64) { 918 }));
            if ($tmp451.value) {
            {
                panda$io$File* $tmp457 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile147, &$s456);
                panda$io$File* $tmp455 = $tmp457;
                panda$io$File* $tmp458 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp455, optimizationLevel149);
                panda$io$File* $tmp454 = $tmp458;
                panda$io$File* $tmp453 = $tmp454;
                optimized452 = $tmp453;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp453));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp454));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp455));
                panda$io$File* $tmp462 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized452);
                panda$io$File* $tmp461 = $tmp462;
                panda$io$File* $tmp460 = $tmp461;
                assembly459 = $tmp460;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp460));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp461));
                panda$io$File* $tmp464 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly459, outFile147);
                panda$io$File* $tmp463 = $tmp464;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp463));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly459));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized452));
                }
            }
            }
            else {
            panda$core$Bit $tmp465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$262_17450.value), ((panda$core$Int64) { 919 }));
            if ($tmp465.value) {
            {
                panda$io$File* $tmp471 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile147, &$s470);
                panda$io$File* $tmp469 = $tmp471;
                panda$io$File* $tmp472 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp469, optimizationLevel149);
                panda$io$File* $tmp468 = $tmp472;
                panda$io$File* $tmp467 = $tmp468;
                optimized466 = $tmp467;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp467));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp468));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
                panda$io$File* $tmp476 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized466);
                panda$io$File* $tmp475 = $tmp476;
                panda$io$File* $tmp474 = $tmp475;
                assembly473 = $tmp474;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp474));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp475));
                panda$io$File* $tmp478 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly473, outFile147);
                panda$io$File* $tmp477 = $tmp478;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp477));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly473));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized466));
                }
            }
            }
            }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler376->errorCount, ((panda$core$Int64) { 1 }));
        if ($tmp479.value) {
        {
            panda$io$Console$printLine$panda$core$String(&$s480);
        }
        }
        else {
        {
            panda$core$String* $tmp483 = panda$core$Int64$convert$R$panda$core$String(compiler376->errorCount);
            panda$core$String* $tmp482 = $tmp483;
            panda$core$String* $tmp485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp482, &$s484);
            panda$core$String* $tmp481 = $tmp485;
            panda$io$Console$printLine$panda$core$String($tmp481);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
        }
        }
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg342));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings372));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err152));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources139));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile147));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports143));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler376));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args135));
    }
}
void pandaMain(panda$collections$ListView* p_args) {
    panda$collections$Array* imports501;
    panda$core$Int64 optimizationLevel508;
    org$pandalanguage$pandac$LLVMCodeGenerator* cg509;
    panda$core$Int64 safetyLevel519;
    org$pandalanguage$pandac$Compiler$Settings* settings520;
    org$pandalanguage$pandac$Compiler* compiler527;
    panda$io$File* s531;
    panda$collections$Iterator* Iter$305$9536;
    org$pandalanguage$pandac$ClassDecl* cl553;
    ITable* $tmp487 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp487->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp487 = $tmp487->next;
    }
    $fn489 $tmp488 = $tmp487->methods[0];
    panda$core$Int64 $tmp490 = $tmp488(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp490, ((panda$core$Int64) { 2 }));
    bool $tmp486 = $tmp491.value;
    if (!$tmp486) goto $l492;
    ITable* $tmp494 = p_args->$class->itable;
    while ($tmp494->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp494 = $tmp494->next;
    }
    $fn496 $tmp495 = $tmp494->methods[0];
    panda$core$Object* $tmp497 = $tmp495(p_args, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp493 = $tmp497;
    panda$core$Bit $tmp499 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((panda$core$String*) $tmp493), &$s498);
    $tmp486 = $tmp499.value;
    panda$core$Panda$unref$panda$core$Object($tmp493);
    $l492:;
    panda$core$Bit $tmp500 = { $tmp486 };
    if ($tmp500.value) {
    {
        panda$collections$Array* $tmp504 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp504);
        panda$collections$Array* $tmp503 = $tmp504;
        panda$collections$Array* $tmp502 = $tmp503;
        imports501 = $tmp502;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp502));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
        panda$io$File* $tmp506 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp506, &$s507);
        panda$io$File* $tmp505 = $tmp506;
        panda$collections$Array$add$panda$collections$Array$T(imports501, ((panda$core$Object*) $tmp505));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp505));
        optimizationLevel508 = ((panda$core$Int64) { 3 });
        org$pandalanguage$pandac$LLVMCodeGenerator* $tmp512 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
        panda$io$File* $tmp516 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp516, &$s517);
        panda$io$File* $tmp515 = $tmp516;
        panda$io$OutputStream* $tmp518 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp515);
        panda$io$OutputStream* $tmp514 = $tmp518;
        org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp512, &$s513, $tmp514);
        org$pandalanguage$pandac$LLVMCodeGenerator* $tmp511 = $tmp512;
        org$pandalanguage$pandac$LLVMCodeGenerator* $tmp510 = $tmp511;
        cg509 = $tmp510;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp510));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp511));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp514));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp515));
        safetyLevel519 = ((panda$core$Int64) { 3 });
        org$pandalanguage$pandac$Compiler$Settings* $tmp523 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
        panda$io$File* $tmp525 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp525, &$s526);
        panda$io$File* $tmp524 = $tmp525;
        org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp523, $tmp524, ((panda$collections$ListView*) imports501), optimizationLevel508, safetyLevel519);
        org$pandalanguage$pandac$Compiler$Settings* $tmp522 = $tmp523;
        org$pandalanguage$pandac$Compiler$Settings* $tmp521 = $tmp522;
        settings520 = $tmp521;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp521));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp522));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp524));
        org$pandalanguage$pandac$Compiler* $tmp530 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(161, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
        org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp530, ((org$pandalanguage$pandac$CodeGenerator*) cg509), settings520);
        org$pandalanguage$pandac$Compiler* $tmp529 = $tmp530;
        org$pandalanguage$pandac$Compiler* $tmp528 = $tmp529;
        compiler527 = $tmp528;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp528));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp529));
        panda$io$File* $tmp534 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp534, &$s535);
        panda$io$File* $tmp533 = $tmp534;
        panda$io$File* $tmp532 = $tmp533;
        s531 = $tmp532;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp532));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp533));
        {
            panda$collections$ListView* $tmp540 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler527, s531);
            panda$collections$ListView* $tmp539 = $tmp540;
            ITable* $tmp541 = ((panda$collections$Iterable*) $tmp539)->$class->itable;
            while ($tmp541->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp541 = $tmp541->next;
            }
            $fn543 $tmp542 = $tmp541->methods[0];
            panda$collections$Iterator* $tmp544 = $tmp542(((panda$collections$Iterable*) $tmp539));
            panda$collections$Iterator* $tmp538 = $tmp544;
            panda$collections$Iterator* $tmp537 = $tmp538;
            Iter$305$9536 = $tmp537;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp537));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp538));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp539));
            $l545:;
            ITable* $tmp548 = Iter$305$9536->$class->itable;
            while ($tmp548->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp548 = $tmp548->next;
            }
            $fn550 $tmp549 = $tmp548->methods[0];
            panda$core$Bit $tmp551 = $tmp549(Iter$305$9536);
            panda$core$Bit $tmp552 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp551);
            bool $tmp547 = $tmp552.value;
            if (!$tmp547) goto $l546;
            {
                ITable* $tmp556 = Iter$305$9536->$class->itable;
                while ($tmp556->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp556 = $tmp556->next;
                }
                $fn558 $tmp557 = $tmp556->methods[1];
                panda$core$Object* $tmp559 = $tmp557(Iter$305$9536);
                panda$core$Object* $tmp555 = $tmp559;
                org$pandalanguage$pandac$ClassDecl* $tmp554 = ((org$pandalanguage$pandac$ClassDecl*) $tmp555);
                cl553 = $tmp554;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp554));
                panda$core$Panda$unref$panda$core$Object($tmp555);
                org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler527, cl553);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl553));
            }
            goto $l545;
            $l546:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$305$9536));
        }
        org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler527, s531);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg509));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s531));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings520));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports501));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler527));
        }
    }
    }
    else {
    {
        panda$core$Panda$disableRefCounting();
        org$pandalanguage$pandac$Main* $tmp561 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
        org$pandalanguage$pandac$Main$init($tmp561);
        org$pandalanguage$pandac$Main* $tmp560 = $tmp561;
        org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp560, p_args);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp560));
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

