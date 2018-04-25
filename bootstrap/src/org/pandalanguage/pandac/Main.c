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


static panda$core$String $s1;
org$pandalanguage$pandac$Main$class_type org$pandalanguage$pandac$Main$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Main$cleanup, org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File, org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream, org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT} };

typedef panda$core$String* (*$fn24)(panda$io$InputStream*);
typedef void (*$fn26)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn39)(panda$io$InputStream*);
typedef void (*$fn41)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn53)(panda$io$InputStream*);
typedef void (*$fn55)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn68)(panda$io$InputStream*);
typedef void (*$fn70)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn75)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn76)(panda$io$OutputStream*);
typedef void (*$fn78)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn79)(panda$io$OutputStream*);
typedef void (*$fn81)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn83)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn98)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn102)(org$pandalanguage$pandac$Main$Arguments*);
typedef void (*$fn108)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn111)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn118)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn128)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn133)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn143)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn147)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn150)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn167)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn172)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn178)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn183)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn196)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn206)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn226)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn253)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn259)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn265)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn271)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn277)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn283)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn289)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn295)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn301)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn351)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn357)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn363)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e", 29, -3248623696873689241, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x34\x2e\x30", 27, -855196788127941659, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78\x38\x36\x5f\x36\x34\x2d\x61\x70\x70\x6c\x65\x2d\x64\x61\x72\x77\x69\x6e\x31\x37\x2e\x30\x2e\x30", 25, 2390944900235154933, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f\x70\x74", 4, 152597986, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x69\x6e\x74", 5, 15305173385, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73", 2, 14962, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c\x2e", 3, 1497068, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x6c\x6c\x76\x6d\x5f\x64\x69\x72", 10, -5843666376324264096, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x74\x68\x65\x20\x4c\x4c\x56\x4d\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 28, -1635669018571610865, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x74\x72\x69\x70\x6c\x65", 8, 15702175691418347, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4c\x56\x4d\x20\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6c\x65", 18, -7134459153622240993, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20", 64, 3394507457011302119, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x6c\x65", 4, 210233217, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78\x38\x36\x5f\x36\x34\x2d\x61\x70\x70\x6c\x65\x2d\x64\x61\x72\x77\x69\x6e\x31\x37\x2e\x30\x2e\x30", 25, 2390944900235154933, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x54\x65\x73\x74\x2e\x6c\x6c", 12, 5522965462756929718, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x54\x65\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, -5645405478664216650, NULL };

void org$pandalanguage$pandac$Main$init(org$pandalanguage$pandac$Main* self) {
    self->llvmDir = NULL;
    self->triple = NULL;
    self->opt = NULL;
    self->llc = NULL;
    self->gcc = NULL;
    self->pandaHome = NULL;
    panda$io$File* $tmp2 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
    panda$io$File$init$panda$core$String($tmp2, &$s3);
    self->llvmDir = $tmp2;
    self->triple = &$s4;
    {
        panda$io$File* $tmp5 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp5, &$s6);
        self->pandaHome = $tmp5;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
    }
}
panda$io$File* org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm, panda$core$Int64 p_level) {
    panda$io$File* dest8;
    panda$collections$Array* args11;
    panda$core$System$Process* p21;
    panda$core$Int64 $tmp27;
    panda$io$File* tmp129;
    panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_level, ((panda$core$Int64) { 0 }));
    if ($tmp7.value) {
    {
        return p_llvm;
    }
    }
    panda$io$File* $tmp10 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s9);
    dest8 = $tmp10;
    panda$collections$Array* $tmp12 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp12);
    args11 = $tmp12;
    panda$collections$Array$add$panda$collections$Array$T(args11, ((panda$core$Object*) &$s13));
    panda$core$Int64$wrapper* $tmp15;
    $tmp15 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp15->value = p_level;
    panda$core$String* $tmp16 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s14, ((panda$core$Object*) $tmp15));
    panda$core$String* $tmp18 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp16, &$s17);
    panda$collections$Array$add$panda$collections$Array$T(args11, ((panda$core$Object*) $tmp18));
    panda$collections$Array$add$panda$collections$Array$T(args11, ((panda$core$Object*) &$s19));
    panda$collections$Array$add$panda$collections$Array$T(args11, ((panda$core$Object*) p_llvm->path));
    panda$collections$Array$add$panda$collections$Array$T(args11, ((panda$core$Object*) &$s20));
    panda$collections$Array$add$panda$collections$Array$T(args11, ((panda$core$Object*) dest8->path));
    panda$core$System$Process* $tmp22 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->opt, ((panda$collections$ListView*) args11));
    p21 = $tmp22;
    panda$io$OutputStream* $tmp23 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp25 = (($fn24) p21->error->$class->vtable[6])(p21->error);
    (($fn26) $tmp23->$class->vtable[16])($tmp23, $tmp25);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp27, p21);
    panda$core$Bit $tmp28 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp27, ((panda$core$Int64) { 0 }));
    if ($tmp28.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        tmp129 = dest8;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest8));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p21));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args11));
        }
        return tmp129;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm) {
    panda$io$File* dest30;
    panda$collections$Array* args33;
    panda$core$System$Process* p36;
    panda$core$Int64 $tmp42;
    panda$io$File* tmp244;
    panda$io$File* $tmp32 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s31);
    dest30 = $tmp32;
    panda$collections$Array* $tmp34 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp34);
    args33 = $tmp34;
    panda$collections$Array$add$panda$collections$Array$T(args33, ((panda$core$Object*) p_llvm->path));
    panda$collections$Array$add$panda$collections$Array$T(args33, ((panda$core$Object*) &$s35));
    panda$collections$Array$add$panda$collections$Array$T(args33, ((panda$core$Object*) dest30->path));
    panda$core$System$Process* $tmp37 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->llc, ((panda$collections$ListView*) args33));
    p36 = $tmp37;
    panda$io$OutputStream* $tmp38 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp40 = (($fn39) p36->error->$class->vtable[6])(p36->error);
    (($fn41) $tmp38->$class->vtable[16])($tmp38, $tmp40);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp42, p36);
    panda$core$Bit $tmp43 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp42, ((panda$core$Int64) { 0 }));
    if ($tmp43.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        tmp244 = dest30;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest30));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p36));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args33));
        }
        return tmp244;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args45;
    panda$core$System$Process* p50;
    panda$core$Int64 $tmp56;
    panda$io$File* tmp358;
    panda$collections$Array* $tmp46 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp46);
    args45 = $tmp46;
    panda$collections$Array$add$panda$collections$Array$T(args45, ((panda$core$Object*) p_assembly->path));
    panda$collections$Array$add$panda$collections$Array$T(args45, ((panda$core$Object*) &$s47));
    panda$collections$Array$add$panda$collections$Array$T(args45, ((panda$core$Object*) &$s48));
    panda$collections$Array$add$panda$collections$Array$T(args45, ((panda$core$Object*) &$s49));
    panda$collections$Array$add$panda$collections$Array$T(args45, ((panda$core$Object*) p_dest->path));
    panda$core$System$Process* $tmp51 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args45));
    p50 = $tmp51;
    panda$io$OutputStream* $tmp52 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp54 = (($fn53) p50->error->$class->vtable[6])(p50->error);
    (($fn55) $tmp52->$class->vtable[16])($tmp52, $tmp54);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp56, p50);
    panda$core$Bit $tmp57 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp56, ((panda$core$Int64) { 0 }));
    if ($tmp57.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        tmp358 = p_dest;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p50));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args45));
        }
        return tmp358;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args59;
    panda$core$System$Process* p65;
    panda$core$Int64 $tmp71;
    panda$io$File* tmp473;
    panda$collections$Array* $tmp60 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp60);
    args59 = $tmp60;
    panda$collections$Array$add$panda$collections$Array$T(args59, ((panda$core$Object*) p_assembly->path));
    panda$collections$Array$add$panda$collections$Array$T(args59, ((panda$core$Object*) &$s61));
    panda$collections$Array$add$panda$collections$Array$T(args59, ((panda$core$Object*) &$s62));
    panda$collections$Array$add$panda$collections$Array$T(args59, ((panda$core$Object*) &$s63));
    panda$collections$Array$add$panda$collections$Array$T(args59, ((panda$core$Object*) &$s64));
    panda$collections$Array$add$panda$collections$Array$T(args59, ((panda$core$Object*) p_dest->path));
    panda$core$System$Process* $tmp66 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args59));
    p65 = $tmp66;
    panda$io$OutputStream* $tmp67 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp69 = (($fn68) p65->error->$class->vtable[6])(p65->error);
    (($fn70) $tmp67->$class->vtable[16])($tmp67, $tmp69);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp71, p65);
    panda$core$Bit $tmp72 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp71, ((panda$core$Int64) { 0 }));
    if ($tmp72.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        tmp473 = p_dest;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p65));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args59));
        }
        return tmp473;
    }
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn75) p_out->$class->vtable[19])(p_out, &$s74);
    (($fn76) p_out->$class->vtable[17])(p_out);
    (($fn78) p_out->$class->vtable[19])(p_out, &$s77);
    (($fn79) p_out->$class->vtable[17])(p_out);
    (($fn81) p_out->$class->vtable[19])(p_out, &$s80);
    (($fn83) p_out->$class->vtable[19])(p_out, &$s82);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args84;
    panda$collections$Array* sources86;
    panda$collections$Array* imports88;
    panda$io$File* outFile90;
    panda$core$Int64 optimizationLevel91;
    panda$core$Int64 safetyLevel92;
    panda$core$Int64$nullable format93;
    panda$io$OutputStream* err94;
    panda$core$String* a101;
    panda$core$String* $match$146_13104;
    panda$core$String* level116;
    panda$core$String* level131;
    panda$core$String* f148;
    panda$core$String* $match$174_21152;
    panda$core$String* extension209;
    panda$core$Int64$nullable $match$217_21210;
    org$pandalanguage$pandac$CodeGenerator* cg227;
    panda$core$Int64$nullable $match$234_13228;
    org$pandalanguage$pandac$Compiler$Settings* settings246;
    org$pandalanguage$pandac$Compiler* compiler248;
    panda$collections$Iterator* Iter$245$9250;
    panda$io$File* s262;
    panda$collections$Iterator* Iter$246$13267;
    org$pandalanguage$pandac$ClassDecl* cl280;
    panda$collections$Iterator* Iter$251$13286;
    panda$io$File* s298;
    panda$core$Int64$nullable $match$258_17304;
    panda$io$File* optimized306;
    panda$io$File* assembly310;
    panda$io$File* optimized314;
    panda$io$File* assembly318;
    org$pandalanguage$pandac$Main$Arguments* $tmp85 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
    org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp85, p_rawArgs);
    args84 = $tmp85;
    panda$collections$Array* $tmp87 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp87);
    sources86 = $tmp87;
    panda$collections$Array* $tmp89 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp89);
    imports88 = $tmp89;
    panda$collections$Array$add$panda$collections$Array$T(imports88, ((panda$core$Object*) self->pandaHome));
    outFile90 = NULL;
    optimizationLevel91 = ((panda$core$Int64) { 3 });
    safetyLevel92 = ((panda$core$Int64) { 3 });
    format93 = ((panda$core$Int64$nullable) { .nonnull = false });
    panda$io$OutputStream* $tmp95 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    err94 = $tmp95;
    $l96:;
    panda$core$Bit $tmp99 = (($fn98) args84->$class->vtable[2])(args84);
    panda$core$Bit $tmp100 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp99);
    if (!$tmp100.value) goto $l97;
    {
        panda$core$String* $tmp103 = (($fn102) args84->$class->vtable[3])(args84);
        a101 = $tmp103;
        {
            $match$146_13104 = a101;
            panda$core$Bit $tmp106 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$146_13104, &$s105);
            if ($tmp106.value) {
            {
                if (((panda$core$Bit) { outFile90 != NULL }).value) {
                {
                    (($fn108) err94->$class->vtable[19])(err94, &$s107);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                {
                    panda$io$File* $tmp109 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                    panda$core$String* $tmp112 = (($fn111) args84->$class->vtable[4])(args84, &$s110);
                    panda$io$File$init$panda$core$String($tmp109, $tmp112);
                    outFile90 = $tmp109;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile90));
                }
                panda$io$File* $tmp113 = panda$io$File$parent$R$panda$io$File$Q(outFile90);
                panda$io$File$createDirectories($tmp113);
            }
            }
            else {
            panda$core$Bit $tmp115 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$146_13104, &$s114);
            if ($tmp115.value) {
            {
                panda$core$String* $tmp119 = (($fn118) args84->$class->vtable[4])(args84, &$s117);
                level116 = $tmp119;
                panda$core$Int64$nullable $tmp120 = panda$core$String$convert$R$panda$core$Int64$Q(level116);
                optimizationLevel91 = ((panda$core$Int64) $tmp120.value);
                panda$core$Bit $tmp122 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel91, ((panda$core$Int64) { 3 }));
                bool $tmp121 = $tmp122.value;
                if ($tmp121) goto $l123;
                panda$core$Bit $tmp124 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel91, ((panda$core$Int64) { 0 }));
                $tmp121 = $tmp124.value;
                $l123:;
                panda$core$Bit $tmp125 = { $tmp121 };
                if ($tmp125.value) {
                {
                    panda$io$OutputStream* $tmp126 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    (($fn128) $tmp126->$class->vtable[19])($tmp126, &$s127);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level116));
            }
            }
            else {
            panda$core$Bit $tmp130 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$146_13104, &$s129);
            if ($tmp130.value) {
            {
                panda$core$String* $tmp134 = (($fn133) args84->$class->vtable[4])(args84, &$s132);
                level131 = $tmp134;
                panda$core$Int64$nullable $tmp135 = panda$core$String$convert$R$panda$core$Int64$Q(level131);
                safetyLevel92 = ((panda$core$Int64) $tmp135.value);
                panda$core$Bit $tmp137 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel92, ((panda$core$Int64) { 3 }));
                bool $tmp136 = $tmp137.value;
                if ($tmp136) goto $l138;
                panda$core$Bit $tmp139 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel92, ((panda$core$Int64) { 0 }));
                $tmp136 = $tmp139.value;
                $l138:;
                panda$core$Bit $tmp140 = { $tmp136 };
                if ($tmp140.value) {
                {
                    panda$io$OutputStream* $tmp141 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    (($fn143) $tmp141->$class->vtable[19])($tmp141, &$s142);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level131));
            }
            }
            else {
            panda$core$Bit $tmp145 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$146_13104, &$s144);
            if ($tmp145.value) {
            {
                if (((panda$core$Bit) { format93.nonnull }).value) {
                {
                    (($fn147) err94->$class->vtable[19])(err94, &$s146);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$String* $tmp151 = (($fn150) args84->$class->vtable[4])(args84, &$s149);
                f148 = $tmp151;
                {
                    $match$174_21152 = f148;
                    panda$core$Bit $tmp154 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$174_21152, &$s153);
                    if ($tmp154.value) {
                    {
                        format93 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp156 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$174_21152, &$s155);
                    if ($tmp156.value) {
                    {
                        format93 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 919 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp158 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$174_21152, &$s157);
                    if ($tmp158.value) {
                    {
                        format93 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 917 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp160 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$174_21152, &$s159);
                    if ($tmp160.value) {
                    {
                        format93 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 920 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp162 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$174_21152, &$s161);
                    if ($tmp162.value) {
                    {
                        format93 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 921 }), true });
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s163, f148);
                        panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp164, &$s165);
                        (($fn167) err94->$class->vtable[19])(err94, $tmp166);
                        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                    }
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f148));
            }
            }
            else {
            panda$core$Bit $tmp169 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$146_13104, &$s168);
            if ($tmp169.value) {
            {
                panda$io$File* $tmp170 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                panda$core$String* $tmp173 = (($fn172) args84->$class->vtable[4])(args84, &$s171);
                panda$io$File$init$panda$core$String($tmp170, $tmp173);
                panda$collections$Array$add$panda$collections$Array$T(imports88, ((panda$core$Object*) $tmp170));
            }
            }
            else {
            panda$core$Bit $tmp175 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$146_13104, &$s174);
            if ($tmp175.value) {
            {
                {
                    panda$io$File* $tmp176 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                    panda$core$String* $tmp179 = (($fn178) args84->$class->vtable[4])(args84, &$s177);
                    panda$io$File$init$panda$core$String($tmp176, $tmp179);
                    self->llvmDir = $tmp176;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llvmDir));
                }
            }
            }
            else {
            panda$core$Bit $tmp181 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$146_13104, &$s180);
            if ($tmp181.value) {
            {
                {
                    panda$core$String* $tmp184 = (($fn183) args84->$class->vtable[4])(args84, &$s182);
                    self->triple = $tmp184;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->triple));
                }
            }
            }
            else {
            panda$core$Bit $tmp186 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$146_13104, &$s185);
            if ($tmp186.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s187);
                panda$core$String* $tmp188 = panda$io$Console$readLine$R$panda$core$String$Q();
            }
            }
            else {
            {
                panda$core$Bit $tmp190 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a101, &$s189);
                if ($tmp190.value) {
                {
                    panda$io$File* $tmp191 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                    panda$io$File$init$panda$core$String($tmp191, a101);
                    panda$collections$Array$add$panda$collections$Array$T(sources86, ((panda$core$Object*) $tmp191));
                }
                }
                else {
                {
                    panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s192, a101);
                    panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, &$s194);
                    (($fn196) err94->$class->vtable[19])(err94, $tmp195);
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a101));
    }
    goto $l96;
    $l97:;
    {
        panda$io$File* $tmp198 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s197);
        self->opt = $tmp198;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    }
    {
        panda$io$File* $tmp200 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s199);
        self->llc = $tmp200;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    }
    {
        panda$io$File* $tmp201 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp201, &$s202);
        self->gcc = $tmp201;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    }
    panda$core$Int64 $tmp203 = panda$collections$Array$get_count$R$panda$core$Int64(sources86);
    panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp203, ((panda$core$Int64) { 0 }));
    if ($tmp204.value) {
    {
        (($fn206) err94->$class->vtable[19])(err94, &$s205);
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    if (((panda$core$Bit) { !format93.nonnull }).value) {
    {
        format93 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
    }
    }
    if (((panda$core$Bit) { outFile90 == NULL }).value) {
    {
        panda$core$Int64 $tmp207 = panda$collections$Array$get_count$R$panda$core$Int64(sources86);
        panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp207, ((panda$core$Int64) { 1 }));
        if ($tmp208.value) {
        {
            memset(&extension209, 0, sizeof(extension209));
            {
                $match$217_21210 = format93;
                panda$core$Bit $tmp211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$217_21210.value), ((panda$core$Int64) { 918 }));
                if ($tmp211.value) {
                {
                    {
                        extension209 = &$s212;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension209));
                    }
                }
                }
                else {
                panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$217_21210.value), ((panda$core$Int64) { 919 }));
                if ($tmp213.value) {
                {
                    {
                        extension209 = &$s214;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension209));
                    }
                }
                }
                else {
                panda$core$Bit $tmp215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$217_21210.value), ((panda$core$Int64) { 920 }));
                if ($tmp215.value) {
                {
                    {
                        extension209 = &$s216;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension209));
                    }
                }
                }
                else {
                panda$core$Bit $tmp217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$217_21210.value), ((panda$core$Int64) { 921 }));
                if ($tmp217.value) {
                {
                    {
                        extension209 = &$s218;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension209));
                    }
                }
                }
                else {
                panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$217_21210.value), ((panda$core$Int64) { 917 }));
                if ($tmp219.value) {
                {
                    {
                        extension209 = &$s220;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension209));
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
                panda$core$Object* $tmp221 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources86, ((panda$core$Int64) { 0 }));
                panda$io$File* $tmp222 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp221), extension209);
                outFile90 = $tmp222;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile90));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension209));
        }
        }
        else {
        {
            panda$core$String* $tmp225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s223, &$s224);
            (($fn226) err94->$class->vtable[19])(err94, $tmp225);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
    }
    }
    memset(&cg227, 0, sizeof(cg227));
    {
        $match$234_13228 = format93;
        panda$core$Bit $tmp231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$234_13228.value), ((panda$core$Int64) { 917 }));
        bool $tmp230 = $tmp231.value;
        if ($tmp230) goto $l232;
        panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$234_13228.value), ((panda$core$Int64) { 918 }));
        $tmp230 = $tmp233.value;
        $l232:;
        panda$core$Bit $tmp234 = { $tmp230 };
        bool $tmp229 = $tmp234.value;
        if ($tmp229) goto $l235;
        panda$core$Bit $tmp236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$234_13228.value), ((panda$core$Int64) { 919 }));
        $tmp229 = $tmp236.value;
        $l235:;
        panda$core$Bit $tmp237 = { $tmp229 };
        if ($tmp237.value) {
        {
            {
                org$pandalanguage$pandac$LLVMCodeGenerator* $tmp238 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                panda$io$File* $tmp240 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile90, &$s239);
                panda$io$OutputStream* $tmp241 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp240);
                org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp238, self->triple, $tmp241);
                cg227 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp238);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg227));
            }
        }
        }
        else {
        panda$core$Bit $tmp242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$234_13228.value), ((panda$core$Int64) { 920 }));
        if ($tmp242.value) {
        {
            {
                org$pandalanguage$pandac$HCodeGenerator* $tmp243 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(129, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp243, outFile90);
                cg227 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp243);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg227));
            }
        }
        }
        else {
        panda$core$Bit $tmp244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$234_13228.value), ((panda$core$Int64) { 921 }));
        if ($tmp244.value) {
        {
            {
                org$pandalanguage$pandac$CCodeGenerator* $tmp245 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(264, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp245, outFile90);
                cg227 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp245);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg227));
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
    org$pandalanguage$pandac$Compiler$Settings* $tmp247 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
    org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp247, self->pandaHome, ((panda$collections$ListView*) imports88), optimizationLevel91, safetyLevel92);
    settings246 = $tmp247;
    org$pandalanguage$pandac$Compiler* $tmp249 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(161, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
    org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp249, cg227, settings246);
    compiler248 = $tmp249;
    {
        ITable* $tmp251 = ((panda$collections$Iterable*) sources86)->$class->itable;
        while ($tmp251->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp251 = $tmp251->next;
        }
        $fn253 $tmp252 = $tmp251->methods[0];
        panda$collections$Iterator* $tmp254 = $tmp252(((panda$collections$Iterable*) sources86));
        Iter$245$9250 = $tmp254;
        $l255:;
        ITable* $tmp257 = Iter$245$9250->$class->itable;
        while ($tmp257->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp257 = $tmp257->next;
        }
        $fn259 $tmp258 = $tmp257->methods[0];
        panda$core$Bit $tmp260 = $tmp258(Iter$245$9250);
        panda$core$Bit $tmp261 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp260);
        if (!$tmp261.value) goto $l256;
        {
            ITable* $tmp263 = Iter$245$9250->$class->itable;
            while ($tmp263->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp263 = $tmp263->next;
            }
            $fn265 $tmp264 = $tmp263->methods[1];
            panda$core$Object* $tmp266 = $tmp264(Iter$245$9250);
            s262 = ((panda$io$File*) $tmp266);
            {
                panda$collections$ListView* $tmp268 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler248, s262);
                ITable* $tmp269 = ((panda$collections$Iterable*) $tmp268)->$class->itable;
                while ($tmp269->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp269 = $tmp269->next;
                }
                $fn271 $tmp270 = $tmp269->methods[0];
                panda$collections$Iterator* $tmp272 = $tmp270(((panda$collections$Iterable*) $tmp268));
                Iter$246$13267 = $tmp272;
                $l273:;
                ITable* $tmp275 = Iter$246$13267->$class->itable;
                while ($tmp275->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp275 = $tmp275->next;
                }
                $fn277 $tmp276 = $tmp275->methods[0];
                panda$core$Bit $tmp278 = $tmp276(Iter$246$13267);
                panda$core$Bit $tmp279 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp278);
                if (!$tmp279.value) goto $l274;
                {
                    ITable* $tmp281 = Iter$246$13267->$class->itable;
                    while ($tmp281->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp281 = $tmp281->next;
                    }
                    $fn283 $tmp282 = $tmp281->methods[1];
                    panda$core$Object* $tmp284 = $tmp282(Iter$246$13267);
                    cl280 = ((org$pandalanguage$pandac$ClassDecl*) $tmp284);
                    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler248, cl280);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl280));
                }
                goto $l273;
                $l274:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$246$13267));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s262));
        }
        goto $l255;
        $l256:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$245$9250));
    }
    panda$core$Bit $tmp285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler248->errorCount, ((panda$core$Int64) { 0 }));
    if ($tmp285.value) {
    {
        {
            ITable* $tmp287 = ((panda$collections$Iterable*) sources86)->$class->itable;
            while ($tmp287->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp287 = $tmp287->next;
            }
            $fn289 $tmp288 = $tmp287->methods[0];
            panda$collections$Iterator* $tmp290 = $tmp288(((panda$collections$Iterable*) sources86));
            Iter$251$13286 = $tmp290;
            $l291:;
            ITable* $tmp293 = Iter$251$13286->$class->itable;
            while ($tmp293->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp293 = $tmp293->next;
            }
            $fn295 $tmp294 = $tmp293->methods[0];
            panda$core$Bit $tmp296 = $tmp294(Iter$251$13286);
            panda$core$Bit $tmp297 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp296);
            if (!$tmp297.value) goto $l292;
            {
                ITable* $tmp299 = Iter$251$13286->$class->itable;
                while ($tmp299->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp299 = $tmp299->next;
                }
                $fn301 $tmp300 = $tmp299->methods[1];
                panda$core$Object* $tmp302 = $tmp300(Iter$251$13286);
                s298 = ((panda$io$File*) $tmp302);
                org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler248, s298);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s298));
            }
            goto $l291;
            $l292:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$251$13286));
        }
        org$pandalanguage$pandac$Compiler$finish(compiler248);
    }
    }
    panda$core$Bit $tmp303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler248->errorCount, ((panda$core$Int64) { 0 }));
    if ($tmp303.value) {
    {
        {
            $match$258_17304 = format93;
            panda$core$Bit $tmp305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$258_17304.value), ((panda$core$Int64) { 918 }));
            if ($tmp305.value) {
            {
                panda$io$File* $tmp308 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile90, &$s307);
                panda$io$File* $tmp309 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp308, optimizationLevel91);
                optimized306 = $tmp309;
                panda$io$File* $tmp311 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized306);
                assembly310 = $tmp311;
                panda$io$File* $tmp312 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly310, outFile90);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly310));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized306));
                }
            }
            }
            else {
            panda$core$Bit $tmp313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$258_17304.value), ((panda$core$Int64) { 919 }));
            if ($tmp313.value) {
            {
                panda$io$File* $tmp316 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile90, &$s315);
                panda$io$File* $tmp317 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp316, optimizationLevel91);
                optimized314 = $tmp317;
                panda$io$File* $tmp319 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized314);
                assembly318 = $tmp319;
                panda$io$File* $tmp320 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly318, outFile90);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly318));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized314));
                }
            }
            }
            }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler248->errorCount, ((panda$core$Int64) { 1 }));
        if ($tmp321.value) {
        {
            panda$io$Console$printLine$panda$core$String(&$s322);
        }
        }
        else {
        {
            panda$core$String* $tmp323 = panda$core$Int64$convert$R$panda$core$String(compiler248->errorCount);
            panda$core$String* $tmp325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp323, &$s324);
            panda$io$Console$printLine$panda$core$String($tmp325);
        }
        }
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg227));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings246));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err94));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources86));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile90));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports88));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler248));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args84));
    }
}
void pandaMain(panda$collections$ListView* p_args) {
    panda$collections$Array* imports326;
    panda$core$Int64 optimizationLevel330;
    org$pandalanguage$pandac$LLVMCodeGenerator* cg331;
    panda$core$Int64 safetyLevel337;
    org$pandalanguage$pandac$Compiler$Settings* settings338;
    org$pandalanguage$pandac$Compiler* compiler342;
    panda$io$File* s344;
    panda$collections$Iterator* Iter$301$9347;
    org$pandalanguage$pandac$ClassDecl* cl360;
    if (((panda$core$Bit) { false }).value) {
    {
        panda$collections$Array* $tmp327 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp327);
        imports326 = $tmp327;
        panda$io$File* $tmp328 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp328, &$s329);
        panda$collections$Array$add$panda$collections$Array$T(imports326, ((panda$core$Object*) $tmp328));
        optimizationLevel330 = ((panda$core$Int64) { 3 });
        org$pandalanguage$pandac$LLVMCodeGenerator* $tmp332 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
        panda$io$File* $tmp334 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp334, &$s335);
        panda$io$OutputStream* $tmp336 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp334);
        org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp332, &$s333, $tmp336);
        cg331 = $tmp332;
        safetyLevel337 = ((panda$core$Int64) { 3 });
        org$pandalanguage$pandac$Compiler$Settings* $tmp339 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
        panda$io$File* $tmp340 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp340, &$s341);
        org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp339, $tmp340, ((panda$collections$ListView*) imports326), optimizationLevel330, safetyLevel337);
        settings338 = $tmp339;
        org$pandalanguage$pandac$Compiler* $tmp343 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(161, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
        org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp343, ((org$pandalanguage$pandac$CodeGenerator*) cg331), settings338);
        compiler342 = $tmp343;
        panda$io$File* $tmp345 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp345, &$s346);
        s344 = $tmp345;
        {
            panda$collections$ListView* $tmp348 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler342, s344);
            ITable* $tmp349 = ((panda$collections$Iterable*) $tmp348)->$class->itable;
            while ($tmp349->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp349 = $tmp349->next;
            }
            $fn351 $tmp350 = $tmp349->methods[0];
            panda$collections$Iterator* $tmp352 = $tmp350(((panda$collections$Iterable*) $tmp348));
            Iter$301$9347 = $tmp352;
            $l353:;
            ITable* $tmp355 = Iter$301$9347->$class->itable;
            while ($tmp355->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp355 = $tmp355->next;
            }
            $fn357 $tmp356 = $tmp355->methods[0];
            panda$core$Bit $tmp358 = $tmp356(Iter$301$9347);
            panda$core$Bit $tmp359 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp358);
            if (!$tmp359.value) goto $l354;
            {
                ITable* $tmp361 = Iter$301$9347->$class->itable;
                while ($tmp361->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp361 = $tmp361->next;
                }
                $fn363 $tmp362 = $tmp361->methods[1];
                panda$core$Object* $tmp364 = $tmp362(Iter$301$9347);
                cl360 = ((org$pandalanguage$pandac$ClassDecl*) $tmp364);
                org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler342, cl360);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl360));
            }
            goto $l353;
            $l354:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$301$9347));
        }
        org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler342, s344);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg331));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s344));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings338));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports326));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler342));
        }
    }
    }
    else {
    {
        panda$core$Panda$disableRefCounting();
        org$pandalanguage$pandac$Main* $tmp365 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
        org$pandalanguage$pandac$Main$init($tmp365);
        org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp365, p_args);
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

