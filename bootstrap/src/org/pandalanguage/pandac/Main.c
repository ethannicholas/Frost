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

typedef panda$core$String* (*$fn31)(panda$io$InputStream*);
typedef void (*$fn33)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn46)(panda$io$InputStream*);
typedef void (*$fn48)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn60)(panda$io$InputStream*);
typedef void (*$fn62)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn75)(panda$io$InputStream*);
typedef void (*$fn77)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn82)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn83)(panda$io$OutputStream*);
typedef void (*$fn85)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn86)(panda$io$OutputStream*);
typedef void (*$fn88)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn90)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn105)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn109)(org$pandalanguage$pandac$Main$Arguments*);
typedef void (*$fn115)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn118)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn125)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn135)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn140)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn150)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn154)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn157)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn174)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn179)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn192)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn196)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn216)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn243)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn249)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn255)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn261)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn267)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn273)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn279)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn285)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn291)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e", 29, -3248623696873689241, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x34\x2e\x30", 27, -855196788127941659, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x34\x2e\x30", 27, -855196788127941659, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f\x70\x74", 4, 152597986, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x69\x6e\x74", 5, 15305173385, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73", 2, 14962, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c\x2e", 3, 1497068, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 21, -5617621630572289288, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20", 64, 3394507457011302119, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x6c\x65", 4, 210233217, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };

void org$pandalanguage$pandac$Main$init(org$pandalanguage$pandac$Main* self) {
    {
        panda$io$File* $tmp2 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp2, &$s3);
        panda$io$File* $tmp5 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp2, &$s4);
        self->opt = $tmp5;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    }
    {
        panda$io$File* $tmp6 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp6, &$s7);
        panda$io$File* $tmp9 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp6, &$s8);
        self->llc = $tmp9;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    }
    {
        panda$io$File* $tmp10 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp10, &$s11);
        self->gcc = $tmp10;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    }
    {
        panda$io$File* $tmp12 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp12, &$s13);
        self->pandaHome = $tmp12;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
    }
}
panda$io$File* org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm, panda$core$Int64 p_level) {
    panda$io$File* dest15;
    panda$collections$Array* args18;
    panda$core$System$Process* p28;
    panda$core$Int64 $tmp34;
    panda$io$File* tmp136;
    panda$core$Bit $tmp14 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_level, ((panda$core$Int64) { 0 }));
    if ($tmp14.value) {
    {
        return p_llvm;
    }
    }
    panda$io$File* $tmp17 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s16);
    dest15 = $tmp17;
    panda$collections$Array* $tmp19 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp19);
    args18 = $tmp19;
    panda$collections$Array$add$panda$collections$Array$T(args18, ((panda$core$Object*) &$s20));
    panda$core$Int64$wrapper* $tmp22;
    $tmp22 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp22->value = p_level;
    panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s21, ((panda$core$Object*) $tmp22));
    panda$core$String* $tmp25 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp23, &$s24);
    panda$collections$Array$add$panda$collections$Array$T(args18, ((panda$core$Object*) $tmp25));
    panda$collections$Array$add$panda$collections$Array$T(args18, ((panda$core$Object*) &$s26));
    panda$collections$Array$add$panda$collections$Array$T(args18, ((panda$core$Object*) p_llvm->path));
    panda$collections$Array$add$panda$collections$Array$T(args18, ((panda$core$Object*) &$s27));
    panda$collections$Array$add$panda$collections$Array$T(args18, ((panda$core$Object*) dest15->path));
    panda$core$System$Process* $tmp29 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->opt, ((panda$collections$ListView*) args18));
    p28 = $tmp29;
    panda$io$OutputStream* $tmp30 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp32 = (($fn31) p28->error->$class->vtable[6])(p28->error);
    (($fn33) $tmp30->$class->vtable[16])($tmp30, $tmp32);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp34, p28);
    panda$core$Bit $tmp35 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp34, ((panda$core$Int64) { 0 }));
    if ($tmp35.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        tmp136 = dest15;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest15));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p28));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args18));
        }
        return tmp136;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm) {
    panda$io$File* dest37;
    panda$collections$Array* args40;
    panda$core$System$Process* p43;
    panda$core$Int64 $tmp49;
    panda$io$File* tmp251;
    panda$io$File* $tmp39 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s38);
    dest37 = $tmp39;
    panda$collections$Array* $tmp41 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp41);
    args40 = $tmp41;
    panda$collections$Array$add$panda$collections$Array$T(args40, ((panda$core$Object*) p_llvm->path));
    panda$collections$Array$add$panda$collections$Array$T(args40, ((panda$core$Object*) &$s42));
    panda$collections$Array$add$panda$collections$Array$T(args40, ((panda$core$Object*) dest37->path));
    panda$core$System$Process* $tmp44 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->llc, ((panda$collections$ListView*) args40));
    p43 = $tmp44;
    panda$io$OutputStream* $tmp45 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp47 = (($fn46) p43->error->$class->vtable[6])(p43->error);
    (($fn48) $tmp45->$class->vtable[16])($tmp45, $tmp47);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp49, p43);
    panda$core$Bit $tmp50 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp49, ((panda$core$Int64) { 0 }));
    if ($tmp50.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        tmp251 = dest37;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest37));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p43));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args40));
        }
        return tmp251;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args52;
    panda$core$System$Process* p57;
    panda$core$Int64 $tmp63;
    panda$io$File* tmp365;
    panda$collections$Array* $tmp53 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp53);
    args52 = $tmp53;
    panda$collections$Array$add$panda$collections$Array$T(args52, ((panda$core$Object*) p_assembly->path));
    panda$collections$Array$add$panda$collections$Array$T(args52, ((panda$core$Object*) &$s54));
    panda$collections$Array$add$panda$collections$Array$T(args52, ((panda$core$Object*) &$s55));
    panda$collections$Array$add$panda$collections$Array$T(args52, ((panda$core$Object*) &$s56));
    panda$collections$Array$add$panda$collections$Array$T(args52, ((panda$core$Object*) p_dest->path));
    panda$core$System$Process* $tmp58 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args52));
    p57 = $tmp58;
    panda$io$OutputStream* $tmp59 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp61 = (($fn60) p57->error->$class->vtable[6])(p57->error);
    (($fn62) $tmp59->$class->vtable[16])($tmp59, $tmp61);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp63, p57);
    panda$core$Bit $tmp64 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp63, ((panda$core$Int64) { 0 }));
    if ($tmp64.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        tmp365 = p_dest;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p57));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args52));
        }
        return tmp365;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args66;
    panda$core$System$Process* p72;
    panda$core$Int64 $tmp78;
    panda$io$File* tmp480;
    panda$collections$Array* $tmp67 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp67);
    args66 = $tmp67;
    panda$collections$Array$add$panda$collections$Array$T(args66, ((panda$core$Object*) p_assembly->path));
    panda$collections$Array$add$panda$collections$Array$T(args66, ((panda$core$Object*) &$s68));
    panda$collections$Array$add$panda$collections$Array$T(args66, ((panda$core$Object*) &$s69));
    panda$collections$Array$add$panda$collections$Array$T(args66, ((panda$core$Object*) &$s70));
    panda$collections$Array$add$panda$collections$Array$T(args66, ((panda$core$Object*) &$s71));
    panda$collections$Array$add$panda$collections$Array$T(args66, ((panda$core$Object*) p_dest->path));
    panda$core$System$Process* $tmp73 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args66));
    p72 = $tmp73;
    panda$io$OutputStream* $tmp74 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp76 = (($fn75) p72->error->$class->vtable[6])(p72->error);
    (($fn77) $tmp74->$class->vtable[16])($tmp74, $tmp76);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp78, p72);
    panda$core$Bit $tmp79 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp78, ((panda$core$Int64) { 0 }));
    if ($tmp79.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        tmp480 = p_dest;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p72));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args66));
        }
        return tmp480;
    }
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn82) p_out->$class->vtable[19])(p_out, &$s81);
    (($fn83) p_out->$class->vtable[17])(p_out);
    (($fn85) p_out->$class->vtable[19])(p_out, &$s84);
    (($fn86) p_out->$class->vtable[17])(p_out);
    (($fn88) p_out->$class->vtable[19])(p_out, &$s87);
    (($fn90) p_out->$class->vtable[19])(p_out, &$s89);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args91;
    panda$collections$Array* sources93;
    panda$collections$Array* imports95;
    panda$io$File* outFile97;
    panda$core$Int64 optimizationLevel98;
    panda$core$Int64 safetyLevel99;
    panda$core$Int64$nullable format100;
    panda$io$OutputStream* err101;
    panda$core$String* a108;
    panda$core$String* $match$149_13111;
    panda$core$String* level123;
    panda$core$String* level138;
    panda$core$String* f155;
    panda$core$String* $match$177_21159;
    panda$core$String* extension199;
    panda$core$Int64$nullable $match$213_21200;
    org$pandalanguage$pandac$CodeGenerator* cg217;
    panda$core$Int64$nullable $match$230_13218;
    org$pandalanguage$pandac$Compiler$Settings* settings236;
    org$pandalanguage$pandac$Compiler* compiler238;
    panda$collections$Iterator* Iter$241$9240;
    panda$io$File* s252;
    panda$collections$Iterator* Iter$242$13257;
    org$pandalanguage$pandac$ClassDecl* cl270;
    panda$collections$Iterator* Iter$247$13276;
    panda$io$File* s288;
    panda$core$Int64$nullable $match$254_17294;
    panda$io$File* optimized296;
    panda$io$File* assembly300;
    panda$io$File* optimized304;
    panda$io$File* assembly308;
    org$pandalanguage$pandac$Main$Arguments* $tmp92 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
    org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp92, p_rawArgs);
    args91 = $tmp92;
    panda$collections$Array* $tmp94 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp94);
    sources93 = $tmp94;
    panda$collections$Array* $tmp96 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp96);
    imports95 = $tmp96;
    panda$collections$Array$add$panda$collections$Array$T(imports95, ((panda$core$Object*) self->pandaHome));
    outFile97 = NULL;
    optimizationLevel98 = ((panda$core$Int64) { 3 });
    safetyLevel99 = ((panda$core$Int64) { 3 });
    format100 = ((panda$core$Int64$nullable) { .nonnull = false });
    panda$io$OutputStream* $tmp102 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    err101 = $tmp102;
    $l103:;
    panda$core$Bit $tmp106 = (($fn105) args91->$class->vtable[2])(args91);
    panda$core$Bit $tmp107 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp106);
    if (!$tmp107.value) goto $l104;
    {
        panda$core$String* $tmp110 = (($fn109) args91->$class->vtable[3])(args91);
        a108 = $tmp110;
        {
            $match$149_13111 = a108;
            panda$core$Bit $tmp113 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13111, &$s112);
            if ($tmp113.value) {
            {
                if (((panda$core$Bit) { outFile97 != NULL }).value) {
                {
                    (($fn115) err101->$class->vtable[19])(err101, &$s114);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                {
                    panda$io$File* $tmp116 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                    panda$core$String* $tmp119 = (($fn118) args91->$class->vtable[4])(args91, &$s117);
                    panda$io$File$init$panda$core$String($tmp116, $tmp119);
                    outFile97 = $tmp116;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile97));
                }
                panda$io$File* $tmp120 = panda$io$File$parent$R$panda$io$File$Q(outFile97);
                panda$io$File$createDirectories($tmp120);
            }
            }
            else {
            panda$core$Bit $tmp122 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13111, &$s121);
            if ($tmp122.value) {
            {
                panda$core$String* $tmp126 = (($fn125) args91->$class->vtable[4])(args91, &$s124);
                level123 = $tmp126;
                panda$core$Int64$nullable $tmp127 = panda$core$String$convert$R$panda$core$Int64$Q(level123);
                optimizationLevel98 = ((panda$core$Int64) $tmp127.value);
                panda$core$Bit $tmp129 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel98, ((panda$core$Int64) { 3 }));
                bool $tmp128 = $tmp129.value;
                if ($tmp128) goto $l130;
                panda$core$Bit $tmp131 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel98, ((panda$core$Int64) { 0 }));
                $tmp128 = $tmp131.value;
                $l130:;
                panda$core$Bit $tmp132 = { $tmp128 };
                if ($tmp132.value) {
                {
                    panda$io$OutputStream* $tmp133 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    (($fn135) $tmp133->$class->vtable[19])($tmp133, &$s134);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level123));
            }
            }
            else {
            panda$core$Bit $tmp137 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13111, &$s136);
            if ($tmp137.value) {
            {
                panda$core$String* $tmp141 = (($fn140) args91->$class->vtable[4])(args91, &$s139);
                level138 = $tmp141;
                panda$core$Int64$nullable $tmp142 = panda$core$String$convert$R$panda$core$Int64$Q(level138);
                safetyLevel99 = ((panda$core$Int64) $tmp142.value);
                panda$core$Bit $tmp144 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel99, ((panda$core$Int64) { 3 }));
                bool $tmp143 = $tmp144.value;
                if ($tmp143) goto $l145;
                panda$core$Bit $tmp146 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel99, ((panda$core$Int64) { 0 }));
                $tmp143 = $tmp146.value;
                $l145:;
                panda$core$Bit $tmp147 = { $tmp143 };
                if ($tmp147.value) {
                {
                    panda$io$OutputStream* $tmp148 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    (($fn150) $tmp148->$class->vtable[19])($tmp148, &$s149);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level138));
            }
            }
            else {
            panda$core$Bit $tmp152 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13111, &$s151);
            if ($tmp152.value) {
            {
                if (((panda$core$Bit) { format100.nonnull }).value) {
                {
                    (($fn154) err101->$class->vtable[19])(err101, &$s153);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$String* $tmp158 = (($fn157) args91->$class->vtable[4])(args91, &$s156);
                f155 = $tmp158;
                {
                    $match$177_21159 = f155;
                    panda$core$Bit $tmp161 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21159, &$s160);
                    if ($tmp161.value) {
                    {
                        format100 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp163 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21159, &$s162);
                    if ($tmp163.value) {
                    {
                        format100 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 919 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp165 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21159, &$s164);
                    if ($tmp165.value) {
                    {
                        format100 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 917 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp167 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21159, &$s166);
                    if ($tmp167.value) {
                    {
                        format100 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 920 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp169 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21159, &$s168);
                    if ($tmp169.value) {
                    {
                        format100 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 921 }), true });
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s170, f155);
                        panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp171, &$s172);
                        (($fn174) err101->$class->vtable[19])(err101, $tmp173);
                        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                    }
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f155));
            }
            }
            else {
            panda$core$Bit $tmp176 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13111, &$s175);
            if ($tmp176.value) {
            {
                panda$io$File* $tmp177 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                panda$core$String* $tmp180 = (($fn179) args91->$class->vtable[4])(args91, &$s178);
                panda$io$File$init$panda$core$String($tmp177, $tmp180);
                panda$collections$Array$add$panda$collections$Array$T(imports95, ((panda$core$Object*) $tmp177));
            }
            }
            else {
            panda$core$Bit $tmp182 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13111, &$s181);
            if ($tmp182.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s183);
                panda$core$String* $tmp184 = panda$io$Console$readLine$R$panda$core$String$Q();
            }
            }
            else {
            {
                panda$core$Bit $tmp186 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a108, &$s185);
                if ($tmp186.value) {
                {
                    panda$io$File* $tmp187 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                    panda$io$File$init$panda$core$String($tmp187, a108);
                    panda$collections$Array$add$panda$collections$Array$T(sources93, ((panda$core$Object*) $tmp187));
                }
                }
                else {
                {
                    panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s188, a108);
                    panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, &$s190);
                    (($fn192) err101->$class->vtable[19])(err101, $tmp191);
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a108));
    }
    goto $l103;
    $l104:;
    panda$core$Int64 $tmp193 = panda$collections$Array$get_count$R$panda$core$Int64(sources93);
    panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp193, ((panda$core$Int64) { 0 }));
    if ($tmp194.value) {
    {
        (($fn196) err101->$class->vtable[19])(err101, &$s195);
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    if (((panda$core$Bit) { !format100.nonnull }).value) {
    {
        format100 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
    }
    }
    if (((panda$core$Bit) { outFile97 == NULL }).value) {
    {
        panda$core$Int64 $tmp197 = panda$collections$Array$get_count$R$panda$core$Int64(sources93);
        panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp197, ((panda$core$Int64) { 1 }));
        if ($tmp198.value) {
        {
            memset(&extension199, 0, sizeof(extension199));
            {
                $match$213_21200 = format100;
                panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21200.value), ((panda$core$Int64) { 918 }));
                if ($tmp201.value) {
                {
                    {
                        extension199 = &$s202;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension199));
                    }
                }
                }
                else {
                panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21200.value), ((panda$core$Int64) { 919 }));
                if ($tmp203.value) {
                {
                    {
                        extension199 = &$s204;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension199));
                    }
                }
                }
                else {
                panda$core$Bit $tmp205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21200.value), ((panda$core$Int64) { 920 }));
                if ($tmp205.value) {
                {
                    {
                        extension199 = &$s206;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension199));
                    }
                }
                }
                else {
                panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21200.value), ((panda$core$Int64) { 921 }));
                if ($tmp207.value) {
                {
                    {
                        extension199 = &$s208;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension199));
                    }
                }
                }
                else {
                panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21200.value), ((panda$core$Int64) { 917 }));
                if ($tmp209.value) {
                {
                    {
                        extension199 = &$s210;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension199));
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
                panda$core$Object* $tmp211 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources93, ((panda$core$Int64) { 0 }));
                panda$io$File* $tmp212 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp211), extension199);
                outFile97 = $tmp212;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile97));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension199));
        }
        }
        else {
        {
            panda$core$String* $tmp215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s213, &$s214);
            (($fn216) err101->$class->vtable[19])(err101, $tmp215);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
    }
    }
    memset(&cg217, 0, sizeof(cg217));
    {
        $match$230_13218 = format100;
        panda$core$Bit $tmp221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13218.value), ((panda$core$Int64) { 917 }));
        bool $tmp220 = $tmp221.value;
        if ($tmp220) goto $l222;
        panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13218.value), ((panda$core$Int64) { 918 }));
        $tmp220 = $tmp223.value;
        $l222:;
        panda$core$Bit $tmp224 = { $tmp220 };
        bool $tmp219 = $tmp224.value;
        if ($tmp219) goto $l225;
        panda$core$Bit $tmp226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13218.value), ((panda$core$Int64) { 919 }));
        $tmp219 = $tmp226.value;
        $l225:;
        panda$core$Bit $tmp227 = { $tmp219 };
        if ($tmp227.value) {
        {
            {
                org$pandalanguage$pandac$LLVMCodeGenerator* $tmp228 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                panda$io$File* $tmp230 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile97, &$s229);
                panda$io$OutputStream* $tmp231 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp230);
                org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$io$OutputStream($tmp228, $tmp231);
                cg217 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp228);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg217));
            }
        }
        }
        else {
        panda$core$Bit $tmp232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13218.value), ((panda$core$Int64) { 920 }));
        if ($tmp232.value) {
        {
            {
                org$pandalanguage$pandac$HCodeGenerator* $tmp233 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(129, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp233, outFile97);
                cg217 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp233);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg217));
            }
        }
        }
        else {
        panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13218.value), ((panda$core$Int64) { 921 }));
        if ($tmp234.value) {
        {
            {
                org$pandalanguage$pandac$CCodeGenerator* $tmp235 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(264, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp235, outFile97);
                cg217 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp235);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg217));
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
    org$pandalanguage$pandac$Compiler$Settings* $tmp237 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
    org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp237, self->pandaHome, ((panda$collections$ListView*) imports95), optimizationLevel98, safetyLevel99);
    settings236 = $tmp237;
    org$pandalanguage$pandac$Compiler* $tmp239 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(160, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
    org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp239, cg217, settings236);
    compiler238 = $tmp239;
    {
        ITable* $tmp241 = ((panda$collections$Iterable*) sources93)->$class->itable;
        while ($tmp241->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp241 = $tmp241->next;
        }
        $fn243 $tmp242 = $tmp241->methods[0];
        panda$collections$Iterator* $tmp244 = $tmp242(((panda$collections$Iterable*) sources93));
        Iter$241$9240 = $tmp244;
        $l245:;
        ITable* $tmp247 = Iter$241$9240->$class->itable;
        while ($tmp247->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp247 = $tmp247->next;
        }
        $fn249 $tmp248 = $tmp247->methods[0];
        panda$core$Bit $tmp250 = $tmp248(Iter$241$9240);
        panda$core$Bit $tmp251 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp250);
        if (!$tmp251.value) goto $l246;
        {
            ITable* $tmp253 = Iter$241$9240->$class->itable;
            while ($tmp253->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp253 = $tmp253->next;
            }
            $fn255 $tmp254 = $tmp253->methods[1];
            panda$core$Object* $tmp256 = $tmp254(Iter$241$9240);
            s252 = ((panda$io$File*) $tmp256);
            {
                panda$collections$ListView* $tmp258 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler238, s252);
                ITable* $tmp259 = ((panda$collections$Iterable*) $tmp258)->$class->itable;
                while ($tmp259->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp259 = $tmp259->next;
                }
                $fn261 $tmp260 = $tmp259->methods[0];
                panda$collections$Iterator* $tmp262 = $tmp260(((panda$collections$Iterable*) $tmp258));
                Iter$242$13257 = $tmp262;
                $l263:;
                ITable* $tmp265 = Iter$242$13257->$class->itable;
                while ($tmp265->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp265 = $tmp265->next;
                }
                $fn267 $tmp266 = $tmp265->methods[0];
                panda$core$Bit $tmp268 = $tmp266(Iter$242$13257);
                panda$core$Bit $tmp269 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp268);
                if (!$tmp269.value) goto $l264;
                {
                    ITable* $tmp271 = Iter$242$13257->$class->itable;
                    while ($tmp271->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp271 = $tmp271->next;
                    }
                    $fn273 $tmp272 = $tmp271->methods[1];
                    panda$core$Object* $tmp274 = $tmp272(Iter$242$13257);
                    cl270 = ((org$pandalanguage$pandac$ClassDecl*) $tmp274);
                    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler238, cl270);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl270));
                }
                goto $l263;
                $l264:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$242$13257));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s252));
        }
        goto $l245;
        $l246:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$241$9240));
    }
    panda$core$Bit $tmp275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler238->errorCount, ((panda$core$Int64) { 0 }));
    if ($tmp275.value) {
    {
        {
            ITable* $tmp277 = ((panda$collections$Iterable*) sources93)->$class->itable;
            while ($tmp277->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp277 = $tmp277->next;
            }
            $fn279 $tmp278 = $tmp277->methods[0];
            panda$collections$Iterator* $tmp280 = $tmp278(((panda$collections$Iterable*) sources93));
            Iter$247$13276 = $tmp280;
            $l281:;
            ITable* $tmp283 = Iter$247$13276->$class->itable;
            while ($tmp283->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp283 = $tmp283->next;
            }
            $fn285 $tmp284 = $tmp283->methods[0];
            panda$core$Bit $tmp286 = $tmp284(Iter$247$13276);
            panda$core$Bit $tmp287 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp286);
            if (!$tmp287.value) goto $l282;
            {
                ITable* $tmp289 = Iter$247$13276->$class->itable;
                while ($tmp289->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp289 = $tmp289->next;
                }
                $fn291 $tmp290 = $tmp289->methods[1];
                panda$core$Object* $tmp292 = $tmp290(Iter$247$13276);
                s288 = ((panda$io$File*) $tmp292);
                org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler238, s288);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s288));
            }
            goto $l281;
            $l282:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$247$13276));
        }
        org$pandalanguage$pandac$Compiler$finish(compiler238);
    }
    }
    panda$core$Bit $tmp293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler238->errorCount, ((panda$core$Int64) { 0 }));
    if ($tmp293.value) {
    {
        {
            $match$254_17294 = format100;
            panda$core$Bit $tmp295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$254_17294.value), ((panda$core$Int64) { 918 }));
            if ($tmp295.value) {
            {
                panda$io$File* $tmp298 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile97, &$s297);
                panda$io$File* $tmp299 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp298, optimizationLevel98);
                optimized296 = $tmp299;
                panda$io$File* $tmp301 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized296);
                assembly300 = $tmp301;
                panda$io$File* $tmp302 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly300, outFile97);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly300));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized296));
                }
            }
            }
            else {
            panda$core$Bit $tmp303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$254_17294.value), ((panda$core$Int64) { 919 }));
            if ($tmp303.value) {
            {
                panda$io$File* $tmp306 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile97, &$s305);
                panda$io$File* $tmp307 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp306, optimizationLevel98);
                optimized304 = $tmp307;
                panda$io$File* $tmp309 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized304);
                assembly308 = $tmp309;
                panda$io$File* $tmp310 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly308, outFile97);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly308));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized304));
                }
            }
            }
            }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler238->errorCount, ((panda$core$Int64) { 1 }));
        if ($tmp311.value) {
        {
            panda$io$Console$printLine$panda$core$String(&$s312);
        }
        }
        else {
        {
            panda$core$String* $tmp313 = panda$core$Int64$convert$R$panda$core$String(compiler238->errorCount);
            panda$core$String* $tmp315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp313, &$s314);
            panda$io$Console$printLine$panda$core$String($tmp315);
        }
        }
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg217));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings236));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err101));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources93));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile97));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports95));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler238));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args91));
    }
}
void pandaMain(panda$collections$ListView* p_args) {
    panda$core$Panda$disableRefCounting();
    org$pandalanguage$pandac$Main* $tmp316 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
    org$pandalanguage$pandac$Main$init($tmp316);
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp316, p_args);
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

