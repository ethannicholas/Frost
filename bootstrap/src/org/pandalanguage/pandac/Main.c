#include "org/pandalanguage/pandac/Main.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Panda.h"
#include "panda/io/File.h"
#include "panda/core/String.h"
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


org$pandalanguage$pandac$Main$class_type org$pandalanguage$pandac$Main$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File, org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream, org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT} };

typedef panda$core$String* (*$fn42)(panda$io$InputStream*);
typedef void (*$fn44)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn60)(panda$io$InputStream*);
typedef void (*$fn62)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn76)(panda$io$InputStream*);
typedef void (*$fn78)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn93)(panda$io$InputStream*);
typedef void (*$fn95)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn99)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn100)(panda$io$OutputStream*);
typedef void (*$fn102)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn103)(panda$io$OutputStream*);
typedef void (*$fn105)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn107)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn130)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn134)(org$pandalanguage$pandac$Main$Arguments*);
typedef void (*$fn141)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn145)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn153)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn164)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn169)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn180)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn184)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn187)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn205)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn211)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn224)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn228)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn254)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn291)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn297)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn303)(panda$collections$Iterator*);

static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x34\x2e\x30", 27, -855196788127941659, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x34\x2e\x30", 27, -855196788127941659, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f\x70\x74", 4, 152597986, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x69\x6e\x74", 5, 15305173385, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73", 2, 14962, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c\x2e", 3, 1497068, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 21, -5617621630572289288, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20", 64, 3394507457011302119, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x6c\x65", 4, 210233217, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };

void org$pandalanguage$pandac$Main$init(org$pandalanguage$pandac$Main* self) {
    {
        panda$io$File* $tmp1 = (panda$io$File*) pandaAlloc(24);
        $tmp1->$class = (panda$core$Class*) &panda$io$File$class;
        $tmp1->refCount.value = 1;
        panda$io$File$init$panda$core$String($tmp1, &$s3);
        panda$io$File* $tmp5 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp1, &$s4);
        panda$core$Object* $tmp6 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp5));
        self->opt = ((panda$io$File*) $tmp6);
    }
    {
        panda$io$File* $tmp7 = (panda$io$File*) pandaAlloc(24);
        $tmp7->$class = (panda$core$Class*) &panda$io$File$class;
        $tmp7->refCount.value = 1;
        panda$io$File$init$panda$core$String($tmp7, &$s9);
        panda$io$File* $tmp11 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp7, &$s10);
        panda$core$Object* $tmp12 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp11));
        self->llc = ((panda$io$File*) $tmp12);
    }
    {
        panda$io$File* $tmp13 = (panda$io$File*) pandaAlloc(24);
        $tmp13->$class = (panda$core$Class*) &panda$io$File$class;
        $tmp13->refCount.value = 1;
        panda$io$File$init$panda$core$String($tmp13, &$s15);
        panda$core$Object* $tmp16 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp13));
        self->gcc = ((panda$io$File*) $tmp16);
    }
    {
        panda$io$File* $tmp17 = (panda$io$File*) pandaAlloc(24);
        $tmp17->$class = (panda$core$Class*) &panda$io$File$class;
        $tmp17->refCount.value = 1;
        panda$io$File$init$panda$core$String($tmp17, &$s19);
        panda$core$Object* $tmp20 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp17));
        self->pandaHome = ((panda$io$File*) $tmp20);
    }
}
panda$io$File* org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm, panda$core$Int64 p_level) {
    panda$io$File* dest22;
    panda$collections$Array* args26;
    panda$core$System$Process* p38;
    panda$core$Int64 $tmp45;
    panda$core$Bit $tmp21 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_level, ((panda$core$Int64) { 0 }));
    if ($tmp21.value) {
    {
        return p_llvm;
    }
    }
    panda$io$File* $tmp24 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s23);
    panda$core$Object* $tmp25 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp24));
    dest22 = ((panda$io$File*) $tmp25);
    panda$collections$Array* $tmp27 = (panda$collections$Array*) pandaAlloc(40);
    $tmp27->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp27->refCount.value = 1;
    panda$collections$Array$init($tmp27);
    panda$core$Object* $tmp29 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp27));
    args26 = ((panda$collections$Array*) $tmp29);
    panda$collections$Array$add$panda$collections$Array$T(args26, ((panda$core$Object*) &$s30));
    panda$core$Int64$wrapper* $tmp32;
    $tmp32 = (panda$core$Int64$wrapper*) pandaAlloc(24);
    $tmp32->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp32->refCount = 1;
    $tmp32->value = p_level;
    panda$core$String* $tmp33 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s31, ((panda$core$Object*) $tmp32));
    panda$core$String* $tmp35 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp33, &$s34);
    panda$collections$Array$add$panda$collections$Array$T(args26, ((panda$core$Object*) $tmp35));
    panda$collections$Array$add$panda$collections$Array$T(args26, ((panda$core$Object*) &$s36));
    panda$collections$Array$add$panda$collections$Array$T(args26, ((panda$core$Object*) p_llvm->path));
    panda$collections$Array$add$panda$collections$Array$T(args26, ((panda$core$Object*) &$s37));
    panda$collections$Array$add$panda$collections$Array$T(args26, ((panda$core$Object*) dest22->path));
    panda$core$System$Process* $tmp39 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->opt, ((panda$collections$ListView*) args26));
    panda$core$Object* $tmp40 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp39));
    p38 = ((panda$core$System$Process*) $tmp40);
    panda$io$OutputStream* $tmp41 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp43 = (($fn42) p38->error->$class->vtable[6])(p38->error);
    (($fn44) $tmp41->$class->vtable[16])($tmp41, $tmp43);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp45, p38);
    panda$core$Bit $tmp46 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp45, ((panda$core$Int64) { 0 }));
    if ($tmp46.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    return dest22;
}
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm) {
    panda$io$File* dest47;
    panda$collections$Array* args51;
    panda$core$System$Process* p56;
    panda$core$Int64 $tmp63;
    panda$io$File* $tmp49 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s48);
    panda$core$Object* $tmp50 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp49));
    dest47 = ((panda$io$File*) $tmp50);
    panda$collections$Array* $tmp52 = (panda$collections$Array*) pandaAlloc(40);
    $tmp52->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp52->refCount.value = 1;
    panda$collections$Array$init($tmp52);
    panda$core$Object* $tmp54 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp52));
    args51 = ((panda$collections$Array*) $tmp54);
    panda$collections$Array$add$panda$collections$Array$T(args51, ((panda$core$Object*) p_llvm->path));
    panda$collections$Array$add$panda$collections$Array$T(args51, ((panda$core$Object*) &$s55));
    panda$collections$Array$add$panda$collections$Array$T(args51, ((panda$core$Object*) dest47->path));
    panda$core$System$Process* $tmp57 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->llc, ((panda$collections$ListView*) args51));
    panda$core$Object* $tmp58 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp57));
    p56 = ((panda$core$System$Process*) $tmp58);
    panda$io$OutputStream* $tmp59 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp61 = (($fn60) p56->error->$class->vtable[6])(p56->error);
    (($fn62) $tmp59->$class->vtable[16])($tmp59, $tmp61);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp63, p56);
    panda$core$Bit $tmp64 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp63, ((panda$core$Int64) { 0 }));
    if ($tmp64.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    return dest47;
}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args65;
    panda$core$System$Process* p72;
    panda$core$Int64 $tmp79;
    panda$collections$Array* $tmp66 = (panda$collections$Array*) pandaAlloc(40);
    $tmp66->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp66->refCount.value = 1;
    panda$collections$Array$init($tmp66);
    panda$core$Object* $tmp68 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp66));
    args65 = ((panda$collections$Array*) $tmp68);
    panda$collections$Array$add$panda$collections$Array$T(args65, ((panda$core$Object*) p_assembly->path));
    panda$collections$Array$add$panda$collections$Array$T(args65, ((panda$core$Object*) &$s69));
    panda$collections$Array$add$panda$collections$Array$T(args65, ((panda$core$Object*) &$s70));
    panda$collections$Array$add$panda$collections$Array$T(args65, ((panda$core$Object*) &$s71));
    panda$collections$Array$add$panda$collections$Array$T(args65, ((panda$core$Object*) p_dest->path));
    panda$core$System$Process* $tmp73 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args65));
    panda$core$Object* $tmp74 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp73));
    p72 = ((panda$core$System$Process*) $tmp74);
    panda$io$OutputStream* $tmp75 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp77 = (($fn76) p72->error->$class->vtable[6])(p72->error);
    (($fn78) $tmp75->$class->vtable[16])($tmp75, $tmp77);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp79, p72);
    panda$core$Bit $tmp80 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp79, ((panda$core$Int64) { 0 }));
    if ($tmp80.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    return p_dest;
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args81;
    panda$core$System$Process* p89;
    panda$core$Int64 $tmp96;
    panda$collections$Array* $tmp82 = (panda$collections$Array*) pandaAlloc(40);
    $tmp82->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp82->refCount.value = 1;
    panda$collections$Array$init($tmp82);
    panda$core$Object* $tmp84 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp82));
    args81 = ((panda$collections$Array*) $tmp84);
    panda$collections$Array$add$panda$collections$Array$T(args81, ((panda$core$Object*) p_assembly->path));
    panda$collections$Array$add$panda$collections$Array$T(args81, ((panda$core$Object*) &$s85));
    panda$collections$Array$add$panda$collections$Array$T(args81, ((panda$core$Object*) &$s86));
    panda$collections$Array$add$panda$collections$Array$T(args81, ((panda$core$Object*) &$s87));
    panda$collections$Array$add$panda$collections$Array$T(args81, ((panda$core$Object*) &$s88));
    panda$collections$Array$add$panda$collections$Array$T(args81, ((panda$core$Object*) p_dest->path));
    panda$core$System$Process* $tmp90 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args81));
    panda$core$Object* $tmp91 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp90));
    p89 = ((panda$core$System$Process*) $tmp91);
    panda$io$OutputStream* $tmp92 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp94 = (($fn93) p89->error->$class->vtable[6])(p89->error);
    (($fn95) $tmp92->$class->vtable[16])($tmp92, $tmp94);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp96, p89);
    panda$core$Bit $tmp97 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp96, ((panda$core$Int64) { 0 }));
    if ($tmp97.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    return p_dest;
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn99) p_out->$class->vtable[19])(p_out, &$s98);
    (($fn100) p_out->$class->vtable[17])(p_out);
    (($fn102) p_out->$class->vtable[19])(p_out, &$s101);
    (($fn103) p_out->$class->vtable[17])(p_out);
    (($fn105) p_out->$class->vtable[19])(p_out, &$s104);
    (($fn107) p_out->$class->vtable[19])(p_out, &$s106);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args108;
    panda$collections$Array* sources112;
    panda$collections$Array* imports116;
    panda$io$File* outFile120;
    panda$core$Int64 optimizationLevel122;
    panda$core$Int64 safetyLevel123;
    panda$core$Int64$nullable format124;
    panda$io$OutputStream* err125;
    panda$core$String* a133;
    panda$core$String* $match$149_13137;
    panda$core$String* level151;
    panda$core$String* level167;
    panda$core$String* f185;
    panda$core$String* $match$177_21190;
    panda$core$String* extension231;
    panda$core$Int64$nullable $match$213_21232;
    org$pandalanguage$pandac$CodeGenerator* cg255;
    panda$core$Int64$nullable $match$230_13256;
    org$pandalanguage$pandac$Compiler$Settings* settings280;
    org$pandalanguage$pandac$Compiler* compiler284;
    panda$collections$Iterator* s$Iter288;
    panda$io$File* s300;
    panda$core$Int64$nullable $match$247_17306;
    panda$io$File* optimized308;
    panda$io$File* assembly313;
    panda$io$File* optimized317;
    panda$io$File* assembly322;
    org$pandalanguage$pandac$Main$Arguments* $tmp109 = (org$pandalanguage$pandac$Main$Arguments*) pandaAlloc(32);
    $tmp109->$class = (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class;
    $tmp109->refCount.value = 1;
    org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp109, p_rawArgs);
    panda$core$Object* $tmp111 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp109));
    args108 = ((org$pandalanguage$pandac$Main$Arguments*) $tmp111);
    panda$collections$Array* $tmp113 = (panda$collections$Array*) pandaAlloc(40);
    $tmp113->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp113->refCount.value = 1;
    panda$collections$Array$init($tmp113);
    panda$core$Object* $tmp115 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp113));
    sources112 = ((panda$collections$Array*) $tmp115);
    panda$collections$Array* $tmp117 = (panda$collections$Array*) pandaAlloc(40);
    $tmp117->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp117->refCount.value = 1;
    panda$collections$Array$init($tmp117);
    panda$core$Object* $tmp119 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp117));
    imports116 = ((panda$collections$Array*) $tmp119);
    panda$collections$Array$add$panda$collections$Array$T(imports116, ((panda$core$Object*) self->pandaHome));
    panda$core$Object* $tmp121 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
    outFile120 = ((panda$io$File*) $tmp121);
    optimizationLevel122 = ((panda$core$Int64) { 3 });
    safetyLevel123 = ((panda$core$Int64) { 3 });
    format124 = ((panda$core$Int64$nullable) { .nonnull = false });
    panda$io$OutputStream* $tmp126 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$Object* $tmp127 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp126));
    err125 = ((panda$io$OutputStream*) $tmp127);
    $l128:;
    panda$core$Bit $tmp131 = (($fn130) args108->$class->vtable[2])(args108);
    panda$core$Bit $tmp132 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp131);
    if (!$tmp132.value) goto $l129;
    {
        panda$core$String* $tmp135 = (($fn134) args108->$class->vtable[3])(args108);
        panda$core$Object* $tmp136 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp135));
        a133 = ((panda$core$String*) $tmp136);
        {
            $match$149_13137 = a133;
            panda$core$Bit $tmp139 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13137, &$s138);
            if ($tmp139.value) {
            {
                if (((panda$core$Bit) { outFile120 != NULL }).value) {
                {
                    (($fn141) err125->$class->vtable[19])(err125, &$s140);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) outFile120));
                    panda$io$File* $tmp142 = (panda$io$File*) pandaAlloc(24);
                    $tmp142->$class = (panda$core$Class*) &panda$io$File$class;
                    $tmp142->refCount.value = 1;
                    panda$core$String* $tmp146 = (($fn145) args108->$class->vtable[4])(args108, &$s144);
                    panda$io$File$init$panda$core$String($tmp142, $tmp146);
                    panda$core$Object* $tmp147 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp142));
                    outFile120 = ((panda$io$File*) $tmp147);
                }
                panda$io$File* $tmp148 = panda$io$File$parent$R$panda$io$File$Q(outFile120);
                panda$io$File$createDirectories($tmp148);
            }
            }
            else {
            panda$core$Bit $tmp150 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13137, &$s149);
            if ($tmp150.value) {
            {
                panda$core$String* $tmp154 = (($fn153) args108->$class->vtable[4])(args108, &$s152);
                panda$core$Object* $tmp155 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp154));
                level151 = ((panda$core$String*) $tmp155);
                panda$core$Int64$nullable $tmp156 = panda$core$String$convert$R$panda$core$Int64$Q(level151);
                optimizationLevel122 = ((panda$core$Int64) $tmp156.value);
                panda$core$Bit $tmp158 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel122, ((panda$core$Int64) { 3 }));
                bool $tmp157 = $tmp158.value;
                if ($tmp157) goto $l159;
                panda$core$Bit $tmp160 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel122, ((panda$core$Int64) { 0 }));
                $tmp157 = $tmp160.value;
                $l159:;
                panda$core$Bit $tmp161 = { $tmp157 };
                if ($tmp161.value) {
                {
                    panda$io$OutputStream* $tmp162 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    (($fn164) $tmp162->$class->vtable[19])($tmp162, &$s163);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
            }
            }
            else {
            panda$core$Bit $tmp166 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13137, &$s165);
            if ($tmp166.value) {
            {
                panda$core$String* $tmp170 = (($fn169) args108->$class->vtable[4])(args108, &$s168);
                panda$core$Object* $tmp171 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp170));
                level167 = ((panda$core$String*) $tmp171);
                panda$core$Int64$nullable $tmp172 = panda$core$String$convert$R$panda$core$Int64$Q(level167);
                safetyLevel123 = ((panda$core$Int64) $tmp172.value);
                panda$core$Bit $tmp174 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel123, ((panda$core$Int64) { 3 }));
                bool $tmp173 = $tmp174.value;
                if ($tmp173) goto $l175;
                panda$core$Bit $tmp176 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel123, ((panda$core$Int64) { 0 }));
                $tmp173 = $tmp176.value;
                $l175:;
                panda$core$Bit $tmp177 = { $tmp173 };
                if ($tmp177.value) {
                {
                    panda$io$OutputStream* $tmp178 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    (($fn180) $tmp178->$class->vtable[19])($tmp178, &$s179);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
            }
            }
            else {
            panda$core$Bit $tmp182 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13137, &$s181);
            if ($tmp182.value) {
            {
                if (((panda$core$Bit) { format124.nonnull }).value) {
                {
                    (($fn184) err125->$class->vtable[19])(err125, &$s183);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$String* $tmp188 = (($fn187) args108->$class->vtable[4])(args108, &$s186);
                panda$core$Object* $tmp189 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp188));
                f185 = ((panda$core$String*) $tmp189);
                {
                    $match$177_21190 = f185;
                    panda$core$Bit $tmp192 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21190, &$s191);
                    if ($tmp192.value) {
                    {
                        format124 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp194 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21190, &$s193);
                    if ($tmp194.value) {
                    {
                        format124 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 919 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp196 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21190, &$s195);
                    if ($tmp196.value) {
                    {
                        format124 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 917 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp198 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21190, &$s197);
                    if ($tmp198.value) {
                    {
                        format124 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 920 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp200 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21190, &$s199);
                    if ($tmp200.value) {
                    {
                        format124 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 921 }), true });
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s201, f185);
                        panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp202, &$s203);
                        (($fn205) err125->$class->vtable[19])(err125, $tmp204);
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
            panda$core$Bit $tmp207 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13137, &$s206);
            if ($tmp207.value) {
            {
                panda$io$File* $tmp208 = (panda$io$File*) pandaAlloc(24);
                $tmp208->$class = (panda$core$Class*) &panda$io$File$class;
                $tmp208->refCount.value = 1;
                panda$core$String* $tmp212 = (($fn211) args108->$class->vtable[4])(args108, &$s210);
                panda$io$File$init$panda$core$String($tmp208, $tmp212);
                panda$collections$Array$add$panda$collections$Array$T(imports116, ((panda$core$Object*) $tmp208));
            }
            }
            else {
            panda$core$Bit $tmp214 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13137, &$s213);
            if ($tmp214.value) {
            {
                panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) &$s215));
                panda$io$Console$readLine$R$panda$core$String$Q();
            }
            }
            else {
            {
                panda$core$Bit $tmp217 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a133, &$s216);
                if ($tmp217.value) {
                {
                    panda$io$File* $tmp218 = (panda$io$File*) pandaAlloc(24);
                    $tmp218->$class = (panda$core$Class*) &panda$io$File$class;
                    $tmp218->refCount.value = 1;
                    panda$io$File$init$panda$core$String($tmp218, a133);
                    panda$collections$Array$add$panda$collections$Array$T(sources112, ((panda$core$Object*) $tmp218));
                }
                }
                else {
                {
                    panda$core$String* $tmp221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s220, a133);
                    panda$core$String* $tmp223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp221, &$s222);
                    (($fn224) err125->$class->vtable[19])(err125, $tmp223);
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
    goto $l128;
    $l129:;
    panda$core$Int64 $tmp225 = panda$collections$Array$get_count$R$panda$core$Int64(sources112);
    panda$core$Bit $tmp226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp225, ((panda$core$Int64) { 0 }));
    if ($tmp226.value) {
    {
        (($fn228) err125->$class->vtable[19])(err125, &$s227);
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    if (((panda$core$Bit) { !format124.nonnull }).value) {
    {
        format124 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
    }
    }
    if (((panda$core$Bit) { outFile120 == NULL }).value) {
    {
        panda$core$Int64 $tmp229 = panda$collections$Array$get_count$R$panda$core$Int64(sources112);
        panda$core$Bit $tmp230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp229, ((panda$core$Int64) { 1 }));
        if ($tmp230.value) {
        {
            memset(&extension231, 0, sizeof(extension231));
            {
                $match$213_21232 = format124;
                panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21232.value), ((panda$core$Int64) { 918 }));
                if ($tmp233.value) {
                {
                    {
                        panda$core$Object* $tmp235 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s234));
                        extension231 = ((panda$core$String*) $tmp235);
                    }
                }
                }
                else {
                panda$core$Bit $tmp236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21232.value), ((panda$core$Int64) { 919 }));
                if ($tmp236.value) {
                {
                    {
                        panda$core$Object* $tmp238 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s237));
                        extension231 = ((panda$core$String*) $tmp238);
                    }
                }
                }
                else {
                panda$core$Bit $tmp239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21232.value), ((panda$core$Int64) { 920 }));
                if ($tmp239.value) {
                {
                    {
                        panda$core$Object* $tmp241 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s240));
                        extension231 = ((panda$core$String*) $tmp241);
                    }
                }
                }
                else {
                panda$core$Bit $tmp242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21232.value), ((panda$core$Int64) { 921 }));
                if ($tmp242.value) {
                {
                    {
                        panda$core$Object* $tmp244 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s243));
                        extension231 = ((panda$core$String*) $tmp244);
                    }
                }
                }
                else {
                panda$core$Bit $tmp245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21232.value), ((panda$core$Int64) { 917 }));
                if ($tmp245.value) {
                {
                    {
                        panda$core$Object* $tmp247 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s246));
                        extension231 = ((panda$core$String*) $tmp247);
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
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) outFile120));
                panda$core$Object* $tmp248 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources112, ((panda$core$Int64) { 0 }));
                panda$io$File* $tmp249 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp248), extension231);
                panda$core$Object* $tmp250 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp249));
                outFile120 = ((panda$io$File*) $tmp250);
            }
        }
        }
        else {
        {
            panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s251, &$s252);
            (($fn254) err125->$class->vtable[19])(err125, $tmp253);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
    }
    }
    memset(&cg255, 0, sizeof(cg255));
    {
        $match$230_13256 = format124;
        panda$core$Bit $tmp259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13256.value), ((panda$core$Int64) { 917 }));
        bool $tmp258 = $tmp259.value;
        if ($tmp258) goto $l260;
        panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13256.value), ((panda$core$Int64) { 918 }));
        $tmp258 = $tmp261.value;
        $l260:;
        panda$core$Bit $tmp262 = { $tmp258 };
        bool $tmp257 = $tmp262.value;
        if ($tmp257) goto $l263;
        panda$core$Bit $tmp264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13256.value), ((panda$core$Int64) { 919 }));
        $tmp257 = $tmp264.value;
        $l263:;
        panda$core$Bit $tmp265 = { $tmp257 };
        if ($tmp265.value) {
        {
            {
                org$pandalanguage$pandac$LLVMCodeGenerator* $tmp266 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaAlloc(216);
                $tmp266->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class;
                $tmp266->refCount.value = 1;
                panda$io$File* $tmp269 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile120, &$s268);
                panda$io$OutputStream* $tmp270 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp269);
                org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$io$OutputStream($tmp266, $tmp270);
                panda$core$Object* $tmp271 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$CodeGenerator*) $tmp266)));
                cg255 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp271);
            }
        }
        }
        else {
        panda$core$Bit $tmp272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13256.value), ((panda$core$Int64) { 920 }));
        if ($tmp272.value) {
        {
            {
                org$pandalanguage$pandac$HCodeGenerator* $tmp273 = (org$pandalanguage$pandac$HCodeGenerator*) pandaAlloc(129);
                $tmp273->$class = (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class;
                $tmp273->refCount.value = 1;
                org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp273, outFile120);
                panda$core$Object* $tmp275 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$CodeGenerator*) $tmp273)));
                cg255 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp275);
            }
        }
        }
        else {
        panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13256.value), ((panda$core$Int64) { 921 }));
        if ($tmp276.value) {
        {
            {
                org$pandalanguage$pandac$CCodeGenerator* $tmp277 = (org$pandalanguage$pandac$CCodeGenerator*) pandaAlloc(256);
                $tmp277->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class;
                $tmp277->refCount.value = 1;
                org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp277, outFile120);
                panda$core$Object* $tmp279 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$CodeGenerator*) $tmp277)));
                cg255 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp279);
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
    org$pandalanguage$pandac$Compiler$Settings* $tmp281 = (org$pandalanguage$pandac$Compiler$Settings*) pandaAlloc(48);
    $tmp281->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class;
    $tmp281->refCount.value = 1;
    org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp281, self->pandaHome, ((panda$collections$ListView*) imports116), optimizationLevel122, safetyLevel123);
    panda$core$Object* $tmp283 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp281));
    settings280 = ((org$pandalanguage$pandac$Compiler$Settings*) $tmp283);
    org$pandalanguage$pandac$Compiler* $tmp285 = (org$pandalanguage$pandac$Compiler*) pandaAlloc(152);
    $tmp285->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class;
    $tmp285->refCount.value = 1;
    org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp285, cg255, settings280);
    panda$core$Object* $tmp287 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp285));
    compiler284 = ((org$pandalanguage$pandac$Compiler*) $tmp287);
    {
        ITable* $tmp289 = ((panda$collections$Iterable*) sources112)->$class->itable;
        while ($tmp289->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp289 = $tmp289->next;
        }
        $fn291 $tmp290 = $tmp289->methods[0];
        panda$collections$Iterator* $tmp292 = $tmp290(((panda$collections$Iterable*) sources112));
        s$Iter288 = $tmp292;
        $l293:;
        ITable* $tmp295 = s$Iter288->$class->itable;
        while ($tmp295->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp295 = $tmp295->next;
        }
        $fn297 $tmp296 = $tmp295->methods[0];
        panda$core$Bit $tmp298 = $tmp296(s$Iter288);
        panda$core$Bit $tmp299 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp298);
        if (!$tmp299.value) goto $l294;
        {
            ITable* $tmp301 = s$Iter288->$class->itable;
            while ($tmp301->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp301 = $tmp301->next;
            }
            $fn303 $tmp302 = $tmp301->methods[1];
            panda$core$Object* $tmp304 = $tmp302(s$Iter288);
            s300 = ((panda$io$File*) $tmp304);
            org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler284, s300);
        }
        goto $l293;
        $l294:;
    }
    org$pandalanguage$pandac$Compiler$finish(compiler284);
    panda$core$Bit $tmp305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler284->errorCount, ((panda$core$Int64) { 0 }));
    if ($tmp305.value) {
    {
        {
            $match$247_17306 = format124;
            panda$core$Bit $tmp307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$247_17306.value), ((panda$core$Int64) { 918 }));
            if ($tmp307.value) {
            {
                panda$io$File* $tmp310 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile120, &$s309);
                panda$io$File* $tmp311 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp310, optimizationLevel122);
                panda$core$Object* $tmp312 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp311));
                optimized308 = ((panda$io$File*) $tmp312);
                panda$io$File* $tmp314 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized308);
                panda$core$Object* $tmp315 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp314));
                assembly313 = ((panda$io$File*) $tmp315);
                org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly313, outFile120);
            }
            }
            else {
            panda$core$Bit $tmp316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$247_17306.value), ((panda$core$Int64) { 919 }));
            if ($tmp316.value) {
            {
                panda$io$File* $tmp319 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile120, &$s318);
                panda$io$File* $tmp320 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp319, optimizationLevel122);
                panda$core$Object* $tmp321 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp320));
                optimized317 = ((panda$io$File*) $tmp321);
                panda$io$File* $tmp323 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized317);
                panda$core$Object* $tmp324 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp323));
                assembly322 = ((panda$io$File*) $tmp324);
                org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly322, outFile120);
            }
            }
            }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler284->errorCount, ((panda$core$Int64) { 1 }));
        if ($tmp325.value) {
        {
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) &$s326));
        }
        }
        else {
        {
            panda$core$String* $tmp327 = panda$core$Int64$convert$R$panda$core$String(compiler284->errorCount);
            panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp327, &$s328);
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp329));
        }
        }
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
}
void pandaMain(panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$Main* $tmp330 = (org$pandalanguage$pandac$Main*) pandaAlloc(48);
    $tmp330->$class = (panda$core$Class*) &org$pandalanguage$pandac$Main$class;
    $tmp330->refCount.value = 1;
    org$pandalanguage$pandac$Main$init($tmp330);
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp330, p_args);
}

