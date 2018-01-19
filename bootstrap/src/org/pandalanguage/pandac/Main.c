#include "org/pandalanguage/pandac/Main.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/io/File.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/collections/Array.h"
#include "panda/core/System/Process.h"
#include "panda/core/System.h"
#include "panda/collections/ListView.h"
#include "panda/io/OutputStream.h"
#include "panda/io/Console.h"
#include "panda/io/InputStream.h"
#include "panda/core/Panda.h"
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

typedef panda$core$String* (*$fn36)(panda$io$InputStream*);
typedef void (*$fn38)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn52)(panda$io$InputStream*);
typedef void (*$fn54)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn67)(panda$io$InputStream*);
typedef void (*$fn69)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn83)(panda$io$InputStream*);
typedef void (*$fn85)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn90)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn91)(panda$io$OutputStream*);
typedef void (*$fn93)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn94)(panda$io$OutputStream*);
typedef void (*$fn96)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn98)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn116)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn120)(org$pandalanguage$pandac$Main$Arguments*);
typedef void (*$fn126)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn130)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn137)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn147)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn152)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn162)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn166)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn169)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn186)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn192)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn206)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn210)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn230)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn262)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn268)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn274)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn280)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn286)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn292)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn298)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn304)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn310)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e", 29, -3248623696873689241, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x34\x2e\x30", 27, -855196788127941659, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x34\x2e\x30", 27, -855196788127941659, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f\x70\x74", 4, 152597986, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x69\x6e\x74", 5, 15305173385, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73", 2, 14962, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c\x2e", 3, 1497068, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 21, -5617621630572289288, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20", 64, 3394507457011302119, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x6c\x65", 4, 210233217, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };

void org$pandalanguage$pandac$Main$init(org$pandalanguage$pandac$Main* self) {
    {
        panda$io$File* $tmp2 = (panda$io$File*) pandaZAlloc(24);
        $tmp2->$class = (panda$core$Class*) &panda$io$File$class;
        $tmp2->refCount.value = 1;
        panda$io$File$init$panda$core$String($tmp2, &$s4);
        panda$io$File* $tmp6 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp2, &$s5);
        self->opt = $tmp6;
    }
    {
        panda$io$File* $tmp7 = (panda$io$File*) pandaZAlloc(24);
        $tmp7->$class = (panda$core$Class*) &panda$io$File$class;
        $tmp7->refCount.value = 1;
        panda$io$File$init$panda$core$String($tmp7, &$s9);
        panda$io$File* $tmp11 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp7, &$s10);
        self->llc = $tmp11;
    }
    {
        panda$io$File* $tmp12 = (panda$io$File*) pandaZAlloc(24);
        $tmp12->$class = (panda$core$Class*) &panda$io$File$class;
        $tmp12->refCount.value = 1;
        panda$io$File$init$panda$core$String($tmp12, &$s14);
        self->gcc = $tmp12;
    }
    {
        panda$io$File* $tmp15 = (panda$io$File*) pandaZAlloc(24);
        $tmp15->$class = (panda$core$Class*) &panda$io$File$class;
        $tmp15->refCount.value = 1;
        panda$io$File$init$panda$core$String($tmp15, &$s17);
        self->pandaHome = $tmp15;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm, panda$core$Int64 p_level) {
    panda$io$File* dest19;
    panda$collections$Array* args22;
    panda$core$System$Process* p33;
    panda$core$Int64 $tmp39;
    panda$io$File* tmp141;
    panda$core$Bit $tmp18 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_level, ((panda$core$Int64) { 0 }));
    if ($tmp18.value) {
    {
        return p_llvm;
    }
    }
    panda$io$File* $tmp21 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s20);
    dest19 = $tmp21;
    panda$collections$Array* $tmp23 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp23->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp23->refCount.value = 1;
    panda$collections$Array$init($tmp23);
    args22 = $tmp23;
    panda$collections$Array$add$panda$collections$Array$T(args22, ((panda$core$Object*) &$s25));
    panda$core$Int64$wrapper* $tmp27;
    $tmp27 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp27->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp27->refCount = 1;
    $tmp27->value = p_level;
    panda$core$String* $tmp28 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s26, ((panda$core$Object*) $tmp27));
    panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp28, &$s29);
    panda$collections$Array$add$panda$collections$Array$T(args22, ((panda$core$Object*) $tmp30));
    panda$collections$Array$add$panda$collections$Array$T(args22, ((panda$core$Object*) &$s31));
    panda$collections$Array$add$panda$collections$Array$T(args22, ((panda$core$Object*) p_llvm->path));
    panda$collections$Array$add$panda$collections$Array$T(args22, ((panda$core$Object*) &$s32));
    panda$collections$Array$add$panda$collections$Array$T(args22, ((panda$core$Object*) dest19->path));
    panda$core$System$Process* $tmp34 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->opt, ((panda$collections$ListView*) args22));
    p33 = $tmp34;
    panda$io$OutputStream* $tmp35 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp37 = (($fn36) p33->error->$class->vtable[6])(p33->error);
    (($fn38) $tmp35->$class->vtable[16])($tmp35, $tmp37);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp39, p33);
    panda$core$Bit $tmp40 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp39, ((panda$core$Int64) { 0 }));
    if ($tmp40.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        tmp141 = dest19;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest19));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p33));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args22));
        }
        return tmp141;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm) {
    panda$io$File* dest42;
    panda$collections$Array* args45;
    panda$core$System$Process* p49;
    panda$core$Int64 $tmp55;
    panda$io$File* tmp257;
    panda$io$File* $tmp44 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s43);
    dest42 = $tmp44;
    panda$collections$Array* $tmp46 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp46->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp46->refCount.value = 1;
    panda$collections$Array$init($tmp46);
    args45 = $tmp46;
    panda$collections$Array$add$panda$collections$Array$T(args45, ((panda$core$Object*) p_llvm->path));
    panda$collections$Array$add$panda$collections$Array$T(args45, ((panda$core$Object*) &$s48));
    panda$collections$Array$add$panda$collections$Array$T(args45, ((panda$core$Object*) dest42->path));
    panda$core$System$Process* $tmp50 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->llc, ((panda$collections$ListView*) args45));
    p49 = $tmp50;
    panda$io$OutputStream* $tmp51 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp53 = (($fn52) p49->error->$class->vtable[6])(p49->error);
    (($fn54) $tmp51->$class->vtable[16])($tmp51, $tmp53);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp55, p49);
    panda$core$Bit $tmp56 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp55, ((panda$core$Int64) { 0 }));
    if ($tmp56.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        tmp257 = dest42;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest42));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p49));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args45));
        }
        return tmp257;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args58;
    panda$core$System$Process* p64;
    panda$core$Int64 $tmp70;
    panda$io$File* tmp372;
    panda$collections$Array* $tmp59 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp59->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp59->refCount.value = 1;
    panda$collections$Array$init($tmp59);
    args58 = $tmp59;
    panda$collections$Array$add$panda$collections$Array$T(args58, ((panda$core$Object*) p_assembly->path));
    panda$collections$Array$add$panda$collections$Array$T(args58, ((panda$core$Object*) &$s61));
    panda$collections$Array$add$panda$collections$Array$T(args58, ((panda$core$Object*) &$s62));
    panda$collections$Array$add$panda$collections$Array$T(args58, ((panda$core$Object*) &$s63));
    panda$collections$Array$add$panda$collections$Array$T(args58, ((panda$core$Object*) p_dest->path));
    panda$core$System$Process* $tmp65 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args58));
    p64 = $tmp65;
    panda$io$OutputStream* $tmp66 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp68 = (($fn67) p64->error->$class->vtable[6])(p64->error);
    (($fn69) $tmp66->$class->vtable[16])($tmp66, $tmp68);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp70, p64);
    panda$core$Bit $tmp71 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp70, ((panda$core$Int64) { 0 }));
    if ($tmp71.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        tmp372 = p_dest;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p64));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args58));
        }
        return tmp372;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args73;
    panda$core$System$Process* p80;
    panda$core$Int64 $tmp86;
    panda$io$File* tmp488;
    panda$collections$Array* $tmp74 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp74->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp74->refCount.value = 1;
    panda$collections$Array$init($tmp74);
    args73 = $tmp74;
    panda$collections$Array$add$panda$collections$Array$T(args73, ((panda$core$Object*) p_assembly->path));
    panda$collections$Array$add$panda$collections$Array$T(args73, ((panda$core$Object*) &$s76));
    panda$collections$Array$add$panda$collections$Array$T(args73, ((panda$core$Object*) &$s77));
    panda$collections$Array$add$panda$collections$Array$T(args73, ((panda$core$Object*) &$s78));
    panda$collections$Array$add$panda$collections$Array$T(args73, ((panda$core$Object*) &$s79));
    panda$collections$Array$add$panda$collections$Array$T(args73, ((panda$core$Object*) p_dest->path));
    panda$core$System$Process* $tmp81 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args73));
    p80 = $tmp81;
    panda$io$OutputStream* $tmp82 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp84 = (($fn83) p80->error->$class->vtable[6])(p80->error);
    (($fn85) $tmp82->$class->vtable[16])($tmp82, $tmp84);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp86, p80);
    panda$core$Bit $tmp87 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp86, ((panda$core$Int64) { 0 }));
    if ($tmp87.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        tmp488 = p_dest;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p80));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args73));
        }
        return tmp488;
    }
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn90) p_out->$class->vtable[19])(p_out, &$s89);
    (($fn91) p_out->$class->vtable[17])(p_out);
    (($fn93) p_out->$class->vtable[19])(p_out, &$s92);
    (($fn94) p_out->$class->vtable[17])(p_out);
    (($fn96) p_out->$class->vtable[19])(p_out, &$s95);
    (($fn98) p_out->$class->vtable[19])(p_out, &$s97);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args99;
    panda$collections$Array* sources102;
    panda$collections$Array* imports105;
    panda$io$File* outFile108;
    panda$core$Int64 optimizationLevel109;
    panda$core$Int64 safetyLevel110;
    panda$core$Int64$nullable format111;
    panda$io$OutputStream* err112;
    panda$core$String* a119;
    panda$core$String* $match$149_13122;
    panda$core$String* level135;
    panda$core$String* level150;
    panda$core$String* f167;
    panda$core$String* $match$177_21171;
    panda$core$String* extension213;
    panda$core$Int64$nullable $match$213_21214;
    org$pandalanguage$pandac$CodeGenerator* cg231;
    panda$core$Int64$nullable $match$230_13232;
    org$pandalanguage$pandac$Compiler$Settings* settings253;
    org$pandalanguage$pandac$Compiler* compiler256;
    panda$collections$Iterator* s$Iter259;
    panda$io$File* s271;
    panda$collections$Iterator* cl$Iter276;
    org$pandalanguage$pandac$ClassDecl* cl289;
    panda$collections$Iterator* s$Iter295;
    panda$io$File* s307;
    panda$core$Int64$nullable $match$254_17313;
    panda$io$File* optimized315;
    panda$io$File* assembly319;
    panda$io$File* optimized323;
    panda$io$File* assembly327;
    org$pandalanguage$pandac$Main$Arguments* $tmp100 = (org$pandalanguage$pandac$Main$Arguments*) pandaZAlloc(32);
    $tmp100->$class = (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class;
    $tmp100->refCount.value = 1;
    org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp100, p_rawArgs);
    args99 = $tmp100;
    panda$collections$Array* $tmp103 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp103->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp103->refCount.value = 1;
    panda$collections$Array$init($tmp103);
    sources102 = $tmp103;
    panda$collections$Array* $tmp106 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp106->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp106->refCount.value = 1;
    panda$collections$Array$init($tmp106);
    imports105 = $tmp106;
    panda$collections$Array$add$panda$collections$Array$T(imports105, ((panda$core$Object*) self->pandaHome));
    outFile108 = NULL;
    optimizationLevel109 = ((panda$core$Int64) { 3 });
    safetyLevel110 = ((panda$core$Int64) { 3 });
    format111 = ((panda$core$Int64$nullable) { .nonnull = false });
    panda$io$OutputStream* $tmp113 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    err112 = $tmp113;
    $l114:;
    panda$core$Bit $tmp117 = (($fn116) args99->$class->vtable[2])(args99);
    panda$core$Bit $tmp118 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp117);
    if (!$tmp118.value) goto $l115;
    {
        panda$core$String* $tmp121 = (($fn120) args99->$class->vtable[3])(args99);
        a119 = $tmp121;
        {
            $match$149_13122 = a119;
            panda$core$Bit $tmp124 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13122, &$s123);
            if ($tmp124.value) {
            {
                if (((panda$core$Bit) { outFile108 != NULL }).value) {
                {
                    (($fn126) err112->$class->vtable[19])(err112, &$s125);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile108));
                    panda$io$File* $tmp127 = (panda$io$File*) pandaZAlloc(24);
                    $tmp127->$class = (panda$core$Class*) &panda$io$File$class;
                    $tmp127->refCount.value = 1;
                    panda$core$String* $tmp131 = (($fn130) args99->$class->vtable[4])(args99, &$s129);
                    panda$io$File$init$panda$core$String($tmp127, $tmp131);
                    outFile108 = $tmp127;
                }
                panda$io$File* $tmp132 = panda$io$File$parent$R$panda$io$File$Q(outFile108);
                panda$io$File$createDirectories($tmp132);
            }
            }
            else {
            panda$core$Bit $tmp134 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13122, &$s133);
            if ($tmp134.value) {
            {
                panda$core$String* $tmp138 = (($fn137) args99->$class->vtable[4])(args99, &$s136);
                level135 = $tmp138;
                panda$core$Int64$nullable $tmp139 = panda$core$String$convert$R$panda$core$Int64$Q(level135);
                optimizationLevel109 = ((panda$core$Int64) $tmp139.value);
                panda$core$Bit $tmp141 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel109, ((panda$core$Int64) { 3 }));
                bool $tmp140 = $tmp141.value;
                if ($tmp140) goto $l142;
                panda$core$Bit $tmp143 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel109, ((panda$core$Int64) { 0 }));
                $tmp140 = $tmp143.value;
                $l142:;
                panda$core$Bit $tmp144 = { $tmp140 };
                if ($tmp144.value) {
                {
                    panda$io$OutputStream* $tmp145 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    (($fn147) $tmp145->$class->vtable[19])($tmp145, &$s146);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
            }
            }
            else {
            panda$core$Bit $tmp149 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13122, &$s148);
            if ($tmp149.value) {
            {
                panda$core$String* $tmp153 = (($fn152) args99->$class->vtable[4])(args99, &$s151);
                level150 = $tmp153;
                panda$core$Int64$nullable $tmp154 = panda$core$String$convert$R$panda$core$Int64$Q(level150);
                safetyLevel110 = ((panda$core$Int64) $tmp154.value);
                panda$core$Bit $tmp156 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel110, ((panda$core$Int64) { 3 }));
                bool $tmp155 = $tmp156.value;
                if ($tmp155) goto $l157;
                panda$core$Bit $tmp158 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel110, ((panda$core$Int64) { 0 }));
                $tmp155 = $tmp158.value;
                $l157:;
                panda$core$Bit $tmp159 = { $tmp155 };
                if ($tmp159.value) {
                {
                    panda$io$OutputStream* $tmp160 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    (($fn162) $tmp160->$class->vtable[19])($tmp160, &$s161);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
            }
            }
            else {
            panda$core$Bit $tmp164 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13122, &$s163);
            if ($tmp164.value) {
            {
                if (((panda$core$Bit) { format111.nonnull }).value) {
                {
                    (($fn166) err112->$class->vtable[19])(err112, &$s165);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$String* $tmp170 = (($fn169) args99->$class->vtable[4])(args99, &$s168);
                f167 = $tmp170;
                {
                    $match$177_21171 = f167;
                    panda$core$Bit $tmp173 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21171, &$s172);
                    if ($tmp173.value) {
                    {
                        format111 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp175 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21171, &$s174);
                    if ($tmp175.value) {
                    {
                        format111 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 919 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp177 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21171, &$s176);
                    if ($tmp177.value) {
                    {
                        format111 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 917 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp179 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21171, &$s178);
                    if ($tmp179.value) {
                    {
                        format111 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 920 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp181 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21171, &$s180);
                    if ($tmp181.value) {
                    {
                        format111 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 921 }), true });
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s182, f167);
                        panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp183, &$s184);
                        (($fn186) err112->$class->vtable[19])(err112, $tmp185);
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
            else {
            panda$core$Bit $tmp188 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13122, &$s187);
            if ($tmp188.value) {
            {
                panda$io$File* $tmp189 = (panda$io$File*) pandaZAlloc(24);
                $tmp189->$class = (panda$core$Class*) &panda$io$File$class;
                $tmp189->refCount.value = 1;
                panda$core$String* $tmp193 = (($fn192) args99->$class->vtable[4])(args99, &$s191);
                panda$io$File$init$panda$core$String($tmp189, $tmp193);
                panda$collections$Array$add$panda$collections$Array$T(imports105, ((panda$core$Object*) $tmp189));
            }
            }
            else {
            panda$core$Bit $tmp195 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13122, &$s194);
            if ($tmp195.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s196);
                panda$core$String* $tmp197 = panda$io$Console$readLine$R$panda$core$String$Q();
            }
            }
            else {
            {
                panda$core$Bit $tmp199 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a119, &$s198);
                if ($tmp199.value) {
                {
                    panda$io$File* $tmp200 = (panda$io$File*) pandaZAlloc(24);
                    $tmp200->$class = (panda$core$Class*) &panda$io$File$class;
                    $tmp200->refCount.value = 1;
                    panda$io$File$init$panda$core$String($tmp200, a119);
                    panda$collections$Array$add$panda$collections$Array$T(sources102, ((panda$core$Object*) $tmp200));
                }
                }
                else {
                {
                    panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s202, a119);
                    panda$core$String* $tmp205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp203, &$s204);
                    (($fn206) err112->$class->vtable[19])(err112, $tmp205);
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a119));
    }
    goto $l114;
    $l115:;
    panda$core$Int64 $tmp207 = panda$collections$Array$get_count$R$panda$core$Int64(sources102);
    panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp207, ((panda$core$Int64) { 0 }));
    if ($tmp208.value) {
    {
        (($fn210) err112->$class->vtable[19])(err112, &$s209);
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    if (((panda$core$Bit) { !format111.nonnull }).value) {
    {
        format111 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
    }
    }
    if (((panda$core$Bit) { outFile108 == NULL }).value) {
    {
        panda$core$Int64 $tmp211 = panda$collections$Array$get_count$R$panda$core$Int64(sources102);
        panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp211, ((panda$core$Int64) { 1 }));
        if ($tmp212.value) {
        {
            memset(&extension213, 0, sizeof(extension213));
            {
                $match$213_21214 = format111;
                panda$core$Bit $tmp215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21214.value), ((panda$core$Int64) { 918 }));
                if ($tmp215.value) {
                {
                    {
                        extension213 = &$s216;
                    }
                }
                }
                else {
                panda$core$Bit $tmp217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21214.value), ((panda$core$Int64) { 919 }));
                if ($tmp217.value) {
                {
                    {
                        extension213 = &$s218;
                    }
                }
                }
                else {
                panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21214.value), ((panda$core$Int64) { 920 }));
                if ($tmp219.value) {
                {
                    {
                        extension213 = &$s220;
                    }
                }
                }
                else {
                panda$core$Bit $tmp221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21214.value), ((panda$core$Int64) { 921 }));
                if ($tmp221.value) {
                {
                    {
                        extension213 = &$s222;
                    }
                }
                }
                else {
                panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21214.value), ((panda$core$Int64) { 917 }));
                if ($tmp223.value) {
                {
                    {
                        extension213 = &$s224;
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile108));
                panda$core$Object* $tmp225 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources102, ((panda$core$Int64) { 0 }));
                panda$io$File* $tmp226 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp225), extension213);
                outFile108 = $tmp226;
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension213));
        }
        }
        else {
        {
            panda$core$String* $tmp229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s227, &$s228);
            (($fn230) err112->$class->vtable[19])(err112, $tmp229);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
    }
    }
    memset(&cg231, 0, sizeof(cg231));
    {
        $match$230_13232 = format111;
        panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13232.value), ((panda$core$Int64) { 917 }));
        bool $tmp234 = $tmp235.value;
        if ($tmp234) goto $l236;
        panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13232.value), ((panda$core$Int64) { 918 }));
        $tmp234 = $tmp237.value;
        $l236:;
        panda$core$Bit $tmp238 = { $tmp234 };
        bool $tmp233 = $tmp238.value;
        if ($tmp233) goto $l239;
        panda$core$Bit $tmp240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13232.value), ((panda$core$Int64) { 919 }));
        $tmp233 = $tmp240.value;
        $l239:;
        panda$core$Bit $tmp241 = { $tmp233 };
        if ($tmp241.value) {
        {
            {
                org$pandalanguage$pandac$LLVMCodeGenerator* $tmp242 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaZAlloc(224);
                $tmp242->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class;
                $tmp242->refCount.value = 1;
                panda$io$File* $tmp245 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile108, &$s244);
                panda$io$OutputStream* $tmp246 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp245);
                org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$io$OutputStream($tmp242, $tmp246);
                cg231 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp242);
            }
        }
        }
        else {
        panda$core$Bit $tmp247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13232.value), ((panda$core$Int64) { 920 }));
        if ($tmp247.value) {
        {
            {
                org$pandalanguage$pandac$HCodeGenerator* $tmp248 = (org$pandalanguage$pandac$HCodeGenerator*) pandaZAlloc(129);
                $tmp248->$class = (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class;
                $tmp248->refCount.value = 1;
                org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp248, outFile108);
                cg231 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp248);
            }
        }
        }
        else {
        panda$core$Bit $tmp250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13232.value), ((panda$core$Int64) { 921 }));
        if ($tmp250.value) {
        {
            {
                org$pandalanguage$pandac$CCodeGenerator* $tmp251 = (org$pandalanguage$pandac$CCodeGenerator*) pandaZAlloc(264);
                $tmp251->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class;
                $tmp251->refCount.value = 1;
                org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp251, outFile108);
                cg231 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp251);
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
    org$pandalanguage$pandac$Compiler$Settings* $tmp254 = (org$pandalanguage$pandac$Compiler$Settings*) pandaZAlloc(48);
    $tmp254->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class;
    $tmp254->refCount.value = 1;
    org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp254, self->pandaHome, ((panda$collections$ListView*) imports105), optimizationLevel109, safetyLevel110);
    settings253 = $tmp254;
    org$pandalanguage$pandac$Compiler* $tmp257 = (org$pandalanguage$pandac$Compiler*) pandaZAlloc(160);
    $tmp257->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class;
    $tmp257->refCount.value = 1;
    org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp257, cg231, settings253);
    compiler256 = $tmp257;
    {
        ITable* $tmp260 = ((panda$collections$Iterable*) sources102)->$class->itable;
        while ($tmp260->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp260 = $tmp260->next;
        }
        $fn262 $tmp261 = $tmp260->methods[0];
        panda$collections$Iterator* $tmp263 = $tmp261(((panda$collections$Iterable*) sources102));
        s$Iter259 = $tmp263;
        $l264:;
        ITable* $tmp266 = s$Iter259->$class->itable;
        while ($tmp266->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp266 = $tmp266->next;
        }
        $fn268 $tmp267 = $tmp266->methods[0];
        panda$core$Bit $tmp269 = $tmp267(s$Iter259);
        panda$core$Bit $tmp270 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp269);
        if (!$tmp270.value) goto $l265;
        {
            ITable* $tmp272 = s$Iter259->$class->itable;
            while ($tmp272->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp272 = $tmp272->next;
            }
            $fn274 $tmp273 = $tmp272->methods[1];
            panda$core$Object* $tmp275 = $tmp273(s$Iter259);
            s271 = ((panda$io$File*) $tmp275);
            {
                panda$collections$ListView* $tmp277 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler256, s271);
                ITable* $tmp278 = ((panda$collections$Iterable*) $tmp277)->$class->itable;
                while ($tmp278->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp278 = $tmp278->next;
                }
                $fn280 $tmp279 = $tmp278->methods[0];
                panda$collections$Iterator* $tmp281 = $tmp279(((panda$collections$Iterable*) $tmp277));
                cl$Iter276 = $tmp281;
                $l282:;
                ITable* $tmp284 = cl$Iter276->$class->itable;
                while ($tmp284->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp284 = $tmp284->next;
                }
                $fn286 $tmp285 = $tmp284->methods[0];
                panda$core$Bit $tmp287 = $tmp285(cl$Iter276);
                panda$core$Bit $tmp288 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp287);
                if (!$tmp288.value) goto $l283;
                {
                    ITable* $tmp290 = cl$Iter276->$class->itable;
                    while ($tmp290->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp290 = $tmp290->next;
                    }
                    $fn292 $tmp291 = $tmp290->methods[1];
                    panda$core$Object* $tmp293 = $tmp291(cl$Iter276);
                    cl289 = ((org$pandalanguage$pandac$ClassDecl*) $tmp293);
                    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler256, cl289);
                }
                goto $l282;
                $l283:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
            }
        }
        goto $l264;
        $l265:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
    }
    panda$core$Bit $tmp294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler256->errorCount, ((panda$core$Int64) { 0 }));
    if ($tmp294.value) {
    {
        {
            ITable* $tmp296 = ((panda$collections$Iterable*) sources102)->$class->itable;
            while ($tmp296->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp296 = $tmp296->next;
            }
            $fn298 $tmp297 = $tmp296->methods[0];
            panda$collections$Iterator* $tmp299 = $tmp297(((panda$collections$Iterable*) sources102));
            s$Iter295 = $tmp299;
            $l300:;
            ITable* $tmp302 = s$Iter295->$class->itable;
            while ($tmp302->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp302 = $tmp302->next;
            }
            $fn304 $tmp303 = $tmp302->methods[0];
            panda$core$Bit $tmp305 = $tmp303(s$Iter295);
            panda$core$Bit $tmp306 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp305);
            if (!$tmp306.value) goto $l301;
            {
                ITable* $tmp308 = s$Iter295->$class->itable;
                while ($tmp308->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp308 = $tmp308->next;
                }
                $fn310 $tmp309 = $tmp308->methods[1];
                panda$core$Object* $tmp311 = $tmp309(s$Iter295);
                s307 = ((panda$io$File*) $tmp311);
                org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler256, s307);
            }
            goto $l300;
            $l301:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
        }
        org$pandalanguage$pandac$Compiler$finish(compiler256);
    }
    }
    panda$core$Bit $tmp312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler256->errorCount, ((panda$core$Int64) { 0 }));
    if ($tmp312.value) {
    {
        {
            $match$254_17313 = format111;
            panda$core$Bit $tmp314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$254_17313.value), ((panda$core$Int64) { 918 }));
            if ($tmp314.value) {
            {
                panda$io$File* $tmp317 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile108, &$s316);
                panda$io$File* $tmp318 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp317, optimizationLevel109);
                optimized315 = $tmp318;
                panda$io$File* $tmp320 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized315);
                assembly319 = $tmp320;
                panda$io$File* $tmp321 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly319, outFile108);
            }
            }
            else {
            panda$core$Bit $tmp322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$254_17313.value), ((panda$core$Int64) { 919 }));
            if ($tmp322.value) {
            {
                panda$io$File* $tmp325 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile108, &$s324);
                panda$io$File* $tmp326 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp325, optimizationLevel109);
                optimized323 = $tmp326;
                panda$io$File* $tmp328 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized323);
                assembly327 = $tmp328;
                panda$io$File* $tmp329 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly327, outFile108);
            }
            }
            }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler256->errorCount, ((panda$core$Int64) { 1 }));
        if ($tmp330.value) {
        {
            panda$io$Console$printLine$panda$core$String(&$s331);
        }
        }
        else {
        {
            panda$core$String* $tmp332 = panda$core$Int64$convert$R$panda$core$String(compiler256->errorCount);
            panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp332, &$s333);
            panda$io$Console$printLine$panda$core$String($tmp334);
        }
        }
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg231));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings253));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err112));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources102));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile108));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports105));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler256));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args99));
    }
}
void pandaMain(panda$collections$ListView* p_args) {
    panda$core$Panda$disableRefCounting();
    org$pandalanguage$pandac$Main* $tmp335 = (org$pandalanguage$pandac$Main*) pandaZAlloc(48);
    $tmp335->$class = (panda$core$Class*) &org$pandalanguage$pandac$Main$class;
    $tmp335->refCount.value = 1;
    org$pandalanguage$pandac$Main$init($tmp335);
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp335, p_args);
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

