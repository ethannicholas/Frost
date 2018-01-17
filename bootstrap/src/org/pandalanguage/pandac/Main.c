#include "org/pandalanguage/pandac/Main.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
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


org$pandalanguage$pandac$Main$class_type org$pandalanguage$pandac$Main$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Main$cleanup, org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File, org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream, org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT} };

typedef panda$core$String* (*$fn35)(panda$io$InputStream*);
typedef void (*$fn37)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn51)(panda$io$InputStream*);
typedef void (*$fn53)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn66)(panda$io$InputStream*);
typedef void (*$fn68)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn82)(panda$io$InputStream*);
typedef void (*$fn84)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn89)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn90)(panda$io$OutputStream*);
typedef void (*$fn92)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn93)(panda$io$OutputStream*);
typedef void (*$fn95)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn97)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn115)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn119)(org$pandalanguage$pandac$Main$Arguments*);
typedef void (*$fn125)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn129)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn136)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn146)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn151)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn161)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn165)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn168)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn185)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn191)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn205)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn209)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn229)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn261)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn267)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn273)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn279)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn285)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn291)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn297)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn303)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn309)(panda$collections$Iterator*);

static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x34\x2e\x30", 27, -855196788127941659, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x34\x2e\x30", 27, -855196788127941659, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f\x70\x74", 4, 152597986, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x69\x6e\x74", 5, 15305173385, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73", 2, 14962, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c\x2e", 3, 1497068, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 21, -5617621630572289288, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20", 64, 3394507457011302119, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x6c\x65", 4, 210233217, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };

void org$pandalanguage$pandac$Main$init(org$pandalanguage$pandac$Main* self) {
    {
        panda$io$File* $tmp1 = (panda$io$File*) pandaZAlloc(24);
        $tmp1->$class = (panda$core$Class*) &panda$io$File$class;
        $tmp1->refCount.value = 1;
        panda$io$File$init$panda$core$String($tmp1, &$s3);
        panda$io$File* $tmp5 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp1, &$s4);
        self->opt = $tmp5;
    }
    {
        panda$io$File* $tmp6 = (panda$io$File*) pandaZAlloc(24);
        $tmp6->$class = (panda$core$Class*) &panda$io$File$class;
        $tmp6->refCount.value = 1;
        panda$io$File$init$panda$core$String($tmp6, &$s8);
        panda$io$File* $tmp10 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp6, &$s9);
        self->llc = $tmp10;
    }
    {
        panda$io$File* $tmp11 = (panda$io$File*) pandaZAlloc(24);
        $tmp11->$class = (panda$core$Class*) &panda$io$File$class;
        $tmp11->refCount.value = 1;
        panda$io$File$init$panda$core$String($tmp11, &$s13);
        self->gcc = $tmp11;
    }
    {
        panda$io$File* $tmp14 = (panda$io$File*) pandaZAlloc(24);
        $tmp14->$class = (panda$core$Class*) &panda$io$File$class;
        $tmp14->refCount.value = 1;
        panda$io$File$init$panda$core$String($tmp14, &$s16);
        self->pandaHome = $tmp14;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm, panda$core$Int64 p_level) {
    panda$io$File* dest18;
    panda$collections$Array* args21;
    panda$core$System$Process* p32;
    panda$core$Int64 $tmp38;
    panda$io$File* tmp140;
    panda$core$Bit $tmp17 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_level, ((panda$core$Int64) { 0 }));
    if ($tmp17.value) {
    {
        return p_llvm;
    }
    }
    panda$io$File* $tmp20 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s19);
    dest18 = $tmp20;
    panda$collections$Array* $tmp22 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp22->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp22->refCount.value = 1;
    panda$collections$Array$init($tmp22);
    args21 = $tmp22;
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) &$s24));
    panda$core$Int64$wrapper* $tmp26;
    $tmp26 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp26->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp26->refCount = 1;
    $tmp26->value = p_level;
    panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s25, ((panda$core$Object*) $tmp26));
    panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp27, &$s28);
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) $tmp29));
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) &$s30));
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) p_llvm->path));
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) &$s31));
    panda$collections$Array$add$panda$collections$Array$T(args21, ((panda$core$Object*) dest18->path));
    panda$core$System$Process* $tmp33 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->opt, ((panda$collections$ListView*) args21));
    p32 = $tmp33;
    panda$io$OutputStream* $tmp34 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp36 = (($fn35) p32->error->$class->vtable[6])(p32->error);
    (($fn37) $tmp34->$class->vtable[16])($tmp34, $tmp36);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp38, p32);
    panda$core$Bit $tmp39 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp38, ((panda$core$Int64) { 0 }));
    if ($tmp39.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        tmp140 = dest18;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest18));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p32));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args21));
        }
        return tmp140;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm) {
    panda$io$File* dest41;
    panda$collections$Array* args44;
    panda$core$System$Process* p48;
    panda$core$Int64 $tmp54;
    panda$io$File* tmp256;
    panda$io$File* $tmp43 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s42);
    dest41 = $tmp43;
    panda$collections$Array* $tmp45 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp45->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp45->refCount.value = 1;
    panda$collections$Array$init($tmp45);
    args44 = $tmp45;
    panda$collections$Array$add$panda$collections$Array$T(args44, ((panda$core$Object*) p_llvm->path));
    panda$collections$Array$add$panda$collections$Array$T(args44, ((panda$core$Object*) &$s47));
    panda$collections$Array$add$panda$collections$Array$T(args44, ((panda$core$Object*) dest41->path));
    panda$core$System$Process* $tmp49 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->llc, ((panda$collections$ListView*) args44));
    p48 = $tmp49;
    panda$io$OutputStream* $tmp50 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp52 = (($fn51) p48->error->$class->vtable[6])(p48->error);
    (($fn53) $tmp50->$class->vtable[16])($tmp50, $tmp52);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp54, p48);
    panda$core$Bit $tmp55 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp54, ((panda$core$Int64) { 0 }));
    if ($tmp55.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        tmp256 = dest41;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest41));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p48));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args44));
        }
        return tmp256;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args57;
    panda$core$System$Process* p63;
    panda$core$Int64 $tmp69;
    panda$io$File* tmp371;
    panda$collections$Array* $tmp58 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp58->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp58->refCount.value = 1;
    panda$collections$Array$init($tmp58);
    args57 = $tmp58;
    panda$collections$Array$add$panda$collections$Array$T(args57, ((panda$core$Object*) p_assembly->path));
    panda$collections$Array$add$panda$collections$Array$T(args57, ((panda$core$Object*) &$s60));
    panda$collections$Array$add$panda$collections$Array$T(args57, ((panda$core$Object*) &$s61));
    panda$collections$Array$add$panda$collections$Array$T(args57, ((panda$core$Object*) &$s62));
    panda$collections$Array$add$panda$collections$Array$T(args57, ((panda$core$Object*) p_dest->path));
    panda$core$System$Process* $tmp64 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args57));
    p63 = $tmp64;
    panda$io$OutputStream* $tmp65 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp67 = (($fn66) p63->error->$class->vtable[6])(p63->error);
    (($fn68) $tmp65->$class->vtable[16])($tmp65, $tmp67);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp69, p63);
    panda$core$Bit $tmp70 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp69, ((panda$core$Int64) { 0 }));
    if ($tmp70.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        tmp371 = p_dest;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p63));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args57));
        }
        return tmp371;
    }
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args72;
    panda$core$System$Process* p79;
    panda$core$Int64 $tmp85;
    panda$io$File* tmp487;
    panda$collections$Array* $tmp73 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp73->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp73->refCount.value = 1;
    panda$collections$Array$init($tmp73);
    args72 = $tmp73;
    panda$collections$Array$add$panda$collections$Array$T(args72, ((panda$core$Object*) p_assembly->path));
    panda$collections$Array$add$panda$collections$Array$T(args72, ((panda$core$Object*) &$s75));
    panda$collections$Array$add$panda$collections$Array$T(args72, ((panda$core$Object*) &$s76));
    panda$collections$Array$add$panda$collections$Array$T(args72, ((panda$core$Object*) &$s77));
    panda$collections$Array$add$panda$collections$Array$T(args72, ((panda$core$Object*) &$s78));
    panda$collections$Array$add$panda$collections$Array$T(args72, ((panda$core$Object*) p_dest->path));
    panda$core$System$Process* $tmp80 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args72));
    p79 = $tmp80;
    panda$io$OutputStream* $tmp81 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp83 = (($fn82) p79->error->$class->vtable[6])(p79->error);
    (($fn84) $tmp81->$class->vtable[16])($tmp81, $tmp83);
    panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp85, p79);
    panda$core$Bit $tmp86 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp85, ((panda$core$Int64) { 0 }));
    if ($tmp86.value) {
    {
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        tmp487 = p_dest;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p79));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args72));
        }
        return tmp487;
    }
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn89) p_out->$class->vtable[19])(p_out, &$s88);
    (($fn90) p_out->$class->vtable[17])(p_out);
    (($fn92) p_out->$class->vtable[19])(p_out, &$s91);
    (($fn93) p_out->$class->vtable[17])(p_out);
    (($fn95) p_out->$class->vtable[19])(p_out, &$s94);
    (($fn97) p_out->$class->vtable[19])(p_out, &$s96);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args98;
    panda$collections$Array* sources101;
    panda$collections$Array* imports104;
    panda$io$File* outFile107;
    panda$core$Int64 optimizationLevel108;
    panda$core$Int64 safetyLevel109;
    panda$core$Int64$nullable format110;
    panda$io$OutputStream* err111;
    panda$core$String* a118;
    panda$core$String* $match$149_13121;
    panda$core$String* level134;
    panda$core$String* level149;
    panda$core$String* f166;
    panda$core$String* $match$177_21170;
    panda$core$String* extension212;
    panda$core$Int64$nullable $match$213_21213;
    org$pandalanguage$pandac$CodeGenerator* cg230;
    panda$core$Int64$nullable $match$230_13231;
    org$pandalanguage$pandac$Compiler$Settings* settings252;
    org$pandalanguage$pandac$Compiler* compiler255;
    panda$collections$Iterator* s$Iter258;
    panda$io$File* s270;
    panda$collections$Iterator* cl$Iter275;
    org$pandalanguage$pandac$ClassDecl* cl288;
    panda$collections$Iterator* s$Iter294;
    panda$io$File* s306;
    panda$core$Int64$nullable $match$254_17312;
    panda$io$File* optimized314;
    panda$io$File* assembly318;
    panda$io$File* optimized322;
    panda$io$File* assembly326;
    org$pandalanguage$pandac$Main$Arguments* $tmp99 = (org$pandalanguage$pandac$Main$Arguments*) pandaZAlloc(32);
    $tmp99->$class = (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class;
    $tmp99->refCount.value = 1;
    org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp99, p_rawArgs);
    args98 = $tmp99;
    panda$collections$Array* $tmp102 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp102->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp102->refCount.value = 1;
    panda$collections$Array$init($tmp102);
    sources101 = $tmp102;
    panda$collections$Array* $tmp105 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp105->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp105->refCount.value = 1;
    panda$collections$Array$init($tmp105);
    imports104 = $tmp105;
    panda$collections$Array$add$panda$collections$Array$T(imports104, ((panda$core$Object*) self->pandaHome));
    outFile107 = NULL;
    optimizationLevel108 = ((panda$core$Int64) { 3 });
    safetyLevel109 = ((panda$core$Int64) { 3 });
    format110 = ((panda$core$Int64$nullable) { .nonnull = false });
    panda$io$OutputStream* $tmp112 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    err111 = $tmp112;
    $l113:;
    panda$core$Bit $tmp116 = (($fn115) args98->$class->vtable[2])(args98);
    panda$core$Bit $tmp117 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp116);
    if (!$tmp117.value) goto $l114;
    {
        panda$core$String* $tmp120 = (($fn119) args98->$class->vtable[3])(args98);
        a118 = $tmp120;
        {
            $match$149_13121 = a118;
            panda$core$Bit $tmp123 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13121, &$s122);
            if ($tmp123.value) {
            {
                if (((panda$core$Bit) { outFile107 != NULL }).value) {
                {
                    (($fn125) err111->$class->vtable[19])(err111, &$s124);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile107));
                    panda$io$File* $tmp126 = (panda$io$File*) pandaZAlloc(24);
                    $tmp126->$class = (panda$core$Class*) &panda$io$File$class;
                    $tmp126->refCount.value = 1;
                    panda$core$String* $tmp130 = (($fn129) args98->$class->vtable[4])(args98, &$s128);
                    panda$io$File$init$panda$core$String($tmp126, $tmp130);
                    outFile107 = $tmp126;
                }
                panda$io$File* $tmp131 = panda$io$File$parent$R$panda$io$File$Q(outFile107);
                panda$io$File$createDirectories($tmp131);
            }
            }
            else {
            panda$core$Bit $tmp133 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13121, &$s132);
            if ($tmp133.value) {
            {
                panda$core$String* $tmp137 = (($fn136) args98->$class->vtable[4])(args98, &$s135);
                level134 = $tmp137;
                panda$core$Int64$nullable $tmp138 = panda$core$String$convert$R$panda$core$Int64$Q(level134);
                optimizationLevel108 = ((panda$core$Int64) $tmp138.value);
                panda$core$Bit $tmp140 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel108, ((panda$core$Int64) { 3 }));
                bool $tmp139 = $tmp140.value;
                if ($tmp139) goto $l141;
                panda$core$Bit $tmp142 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel108, ((panda$core$Int64) { 0 }));
                $tmp139 = $tmp142.value;
                $l141:;
                panda$core$Bit $tmp143 = { $tmp139 };
                if ($tmp143.value) {
                {
                    panda$io$OutputStream* $tmp144 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    (($fn146) $tmp144->$class->vtable[19])($tmp144, &$s145);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
            }
            }
            else {
            panda$core$Bit $tmp148 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13121, &$s147);
            if ($tmp148.value) {
            {
                panda$core$String* $tmp152 = (($fn151) args98->$class->vtable[4])(args98, &$s150);
                level149 = $tmp152;
                panda$core$Int64$nullable $tmp153 = panda$core$String$convert$R$panda$core$Int64$Q(level149);
                safetyLevel109 = ((panda$core$Int64) $tmp153.value);
                panda$core$Bit $tmp155 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel109, ((panda$core$Int64) { 3 }));
                bool $tmp154 = $tmp155.value;
                if ($tmp154) goto $l156;
                panda$core$Bit $tmp157 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel109, ((panda$core$Int64) { 0 }));
                $tmp154 = $tmp157.value;
                $l156:;
                panda$core$Bit $tmp158 = { $tmp154 };
                if ($tmp158.value) {
                {
                    panda$io$OutputStream* $tmp159 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    (($fn161) $tmp159->$class->vtable[19])($tmp159, &$s160);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
            }
            }
            else {
            panda$core$Bit $tmp163 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13121, &$s162);
            if ($tmp163.value) {
            {
                if (((panda$core$Bit) { format110.nonnull }).value) {
                {
                    (($fn165) err111->$class->vtable[19])(err111, &$s164);
                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                }
                }
                panda$core$String* $tmp169 = (($fn168) args98->$class->vtable[4])(args98, &$s167);
                f166 = $tmp169;
                {
                    $match$177_21170 = f166;
                    panda$core$Bit $tmp172 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21170, &$s171);
                    if ($tmp172.value) {
                    {
                        format110 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp174 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21170, &$s173);
                    if ($tmp174.value) {
                    {
                        format110 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 919 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp176 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21170, &$s175);
                    if ($tmp176.value) {
                    {
                        format110 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 917 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp178 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21170, &$s177);
                    if ($tmp178.value) {
                    {
                        format110 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 920 }), true });
                    }
                    }
                    else {
                    panda$core$Bit $tmp180 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$177_21170, &$s179);
                    if ($tmp180.value) {
                    {
                        format110 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 921 }), true });
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s181, f166);
                        panda$core$String* $tmp184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp182, &$s183);
                        (($fn185) err111->$class->vtable[19])(err111, $tmp184);
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
            panda$core$Bit $tmp187 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13121, &$s186);
            if ($tmp187.value) {
            {
                panda$io$File* $tmp188 = (panda$io$File*) pandaZAlloc(24);
                $tmp188->$class = (panda$core$Class*) &panda$io$File$class;
                $tmp188->refCount.value = 1;
                panda$core$String* $tmp192 = (($fn191) args98->$class->vtable[4])(args98, &$s190);
                panda$io$File$init$panda$core$String($tmp188, $tmp192);
                panda$collections$Array$add$panda$collections$Array$T(imports104, ((panda$core$Object*) $tmp188));
            }
            }
            else {
            panda$core$Bit $tmp194 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$149_13121, &$s193);
            if ($tmp194.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s195);
                panda$core$String* $tmp196 = panda$io$Console$readLine$R$panda$core$String$Q();
            }
            }
            else {
            {
                panda$core$Bit $tmp198 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a118, &$s197);
                if ($tmp198.value) {
                {
                    panda$io$File* $tmp199 = (panda$io$File*) pandaZAlloc(24);
                    $tmp199->$class = (panda$core$Class*) &panda$io$File$class;
                    $tmp199->refCount.value = 1;
                    panda$io$File$init$panda$core$String($tmp199, a118);
                    panda$collections$Array$add$panda$collections$Array$T(sources101, ((panda$core$Object*) $tmp199));
                }
                }
                else {
                {
                    panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s201, a118);
                    panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp202, &$s203);
                    (($fn205) err111->$class->vtable[19])(err111, $tmp204);
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a118));
    }
    goto $l113;
    $l114:;
    panda$core$Int64 $tmp206 = panda$collections$Array$get_count$R$panda$core$Int64(sources101);
    panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp206, ((panda$core$Int64) { 0 }));
    if ($tmp207.value) {
    {
        (($fn209) err111->$class->vtable[19])(err111, &$s208);
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    if (((panda$core$Bit) { !format110.nonnull }).value) {
    {
        format110 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
    }
    }
    if (((panda$core$Bit) { outFile107 == NULL }).value) {
    {
        panda$core$Int64 $tmp210 = panda$collections$Array$get_count$R$panda$core$Int64(sources101);
        panda$core$Bit $tmp211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp210, ((panda$core$Int64) { 1 }));
        if ($tmp211.value) {
        {
            memset(&extension212, 0, sizeof(extension212));
            {
                $match$213_21213 = format110;
                panda$core$Bit $tmp214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21213.value), ((panda$core$Int64) { 918 }));
                if ($tmp214.value) {
                {
                    {
                        extension212 = &$s215;
                    }
                }
                }
                else {
                panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21213.value), ((panda$core$Int64) { 919 }));
                if ($tmp216.value) {
                {
                    {
                        extension212 = &$s217;
                    }
                }
                }
                else {
                panda$core$Bit $tmp218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21213.value), ((panda$core$Int64) { 920 }));
                if ($tmp218.value) {
                {
                    {
                        extension212 = &$s219;
                    }
                }
                }
                else {
                panda$core$Bit $tmp220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21213.value), ((panda$core$Int64) { 921 }));
                if ($tmp220.value) {
                {
                    {
                        extension212 = &$s221;
                    }
                }
                }
                else {
                panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$213_21213.value), ((panda$core$Int64) { 917 }));
                if ($tmp222.value) {
                {
                    {
                        extension212 = &$s223;
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile107));
                panda$core$Object* $tmp224 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources101, ((panda$core$Int64) { 0 }));
                panda$io$File* $tmp225 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp224), extension212);
                outFile107 = $tmp225;
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension212));
        }
        }
        else {
        {
            panda$core$String* $tmp228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s226, &$s227);
            (($fn229) err111->$class->vtable[19])(err111, $tmp228);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
    }
    }
    memset(&cg230, 0, sizeof(cg230));
    {
        $match$230_13231 = format110;
        panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13231.value), ((panda$core$Int64) { 917 }));
        bool $tmp233 = $tmp234.value;
        if ($tmp233) goto $l235;
        panda$core$Bit $tmp236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13231.value), ((panda$core$Int64) { 918 }));
        $tmp233 = $tmp236.value;
        $l235:;
        panda$core$Bit $tmp237 = { $tmp233 };
        bool $tmp232 = $tmp237.value;
        if ($tmp232) goto $l238;
        panda$core$Bit $tmp239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13231.value), ((panda$core$Int64) { 919 }));
        $tmp232 = $tmp239.value;
        $l238:;
        panda$core$Bit $tmp240 = { $tmp232 };
        if ($tmp240.value) {
        {
            {
                org$pandalanguage$pandac$LLVMCodeGenerator* $tmp241 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaZAlloc(224);
                $tmp241->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class;
                $tmp241->refCount.value = 1;
                panda$io$File* $tmp244 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile107, &$s243);
                panda$io$OutputStream* $tmp245 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp244);
                org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$io$OutputStream($tmp241, $tmp245);
                cg230 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp241);
            }
        }
        }
        else {
        panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13231.value), ((panda$core$Int64) { 920 }));
        if ($tmp246.value) {
        {
            {
                org$pandalanguage$pandac$HCodeGenerator* $tmp247 = (org$pandalanguage$pandac$HCodeGenerator*) pandaZAlloc(129);
                $tmp247->$class = (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class;
                $tmp247->refCount.value = 1;
                org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp247, outFile107);
                cg230 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp247);
            }
        }
        }
        else {
        panda$core$Bit $tmp249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$230_13231.value), ((panda$core$Int64) { 921 }));
        if ($tmp249.value) {
        {
            {
                org$pandalanguage$pandac$CCodeGenerator* $tmp250 = (org$pandalanguage$pandac$CCodeGenerator*) pandaZAlloc(264);
                $tmp250->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class;
                $tmp250->refCount.value = 1;
                org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp250, outFile107);
                cg230 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp250);
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
    org$pandalanguage$pandac$Compiler$Settings* $tmp253 = (org$pandalanguage$pandac$Compiler$Settings*) pandaZAlloc(48);
    $tmp253->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class;
    $tmp253->refCount.value = 1;
    org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp253, self->pandaHome, ((panda$collections$ListView*) imports104), optimizationLevel108, safetyLevel109);
    settings252 = $tmp253;
    org$pandalanguage$pandac$Compiler* $tmp256 = (org$pandalanguage$pandac$Compiler*) pandaZAlloc(160);
    $tmp256->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class;
    $tmp256->refCount.value = 1;
    org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp256, cg230, settings252);
    compiler255 = $tmp256;
    {
        ITable* $tmp259 = ((panda$collections$Iterable*) sources101)->$class->itable;
        while ($tmp259->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp259 = $tmp259->next;
        }
        $fn261 $tmp260 = $tmp259->methods[0];
        panda$collections$Iterator* $tmp262 = $tmp260(((panda$collections$Iterable*) sources101));
        s$Iter258 = $tmp262;
        $l263:;
        ITable* $tmp265 = s$Iter258->$class->itable;
        while ($tmp265->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp265 = $tmp265->next;
        }
        $fn267 $tmp266 = $tmp265->methods[0];
        panda$core$Bit $tmp268 = $tmp266(s$Iter258);
        panda$core$Bit $tmp269 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp268);
        if (!$tmp269.value) goto $l264;
        {
            ITable* $tmp271 = s$Iter258->$class->itable;
            while ($tmp271->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp271 = $tmp271->next;
            }
            $fn273 $tmp272 = $tmp271->methods[1];
            panda$core$Object* $tmp274 = $tmp272(s$Iter258);
            s270 = ((panda$io$File*) $tmp274);
            {
                panda$collections$ListView* $tmp276 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler255, s270);
                ITable* $tmp277 = ((panda$collections$Iterable*) $tmp276)->$class->itable;
                while ($tmp277->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp277 = $tmp277->next;
                }
                $fn279 $tmp278 = $tmp277->methods[0];
                panda$collections$Iterator* $tmp280 = $tmp278(((panda$collections$Iterable*) $tmp276));
                cl$Iter275 = $tmp280;
                $l281:;
                ITable* $tmp283 = cl$Iter275->$class->itable;
                while ($tmp283->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp283 = $tmp283->next;
                }
                $fn285 $tmp284 = $tmp283->methods[0];
                panda$core$Bit $tmp286 = $tmp284(cl$Iter275);
                panda$core$Bit $tmp287 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp286);
                if (!$tmp287.value) goto $l282;
                {
                    ITable* $tmp289 = cl$Iter275->$class->itable;
                    while ($tmp289->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp289 = $tmp289->next;
                    }
                    $fn291 $tmp290 = $tmp289->methods[1];
                    panda$core$Object* $tmp292 = $tmp290(cl$Iter275);
                    cl288 = ((org$pandalanguage$pandac$ClassDecl*) $tmp292);
                    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler255, cl288);
                }
                goto $l281;
                $l282:;
            }
        }
        goto $l263;
        $l264:;
    }
    panda$core$Bit $tmp293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler255->errorCount, ((panda$core$Int64) { 0 }));
    if ($tmp293.value) {
    {
        {
            ITable* $tmp295 = ((panda$collections$Iterable*) sources101)->$class->itable;
            while ($tmp295->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp295 = $tmp295->next;
            }
            $fn297 $tmp296 = $tmp295->methods[0];
            panda$collections$Iterator* $tmp298 = $tmp296(((panda$collections$Iterable*) sources101));
            s$Iter294 = $tmp298;
            $l299:;
            ITable* $tmp301 = s$Iter294->$class->itable;
            while ($tmp301->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp301 = $tmp301->next;
            }
            $fn303 $tmp302 = $tmp301->methods[0];
            panda$core$Bit $tmp304 = $tmp302(s$Iter294);
            panda$core$Bit $tmp305 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp304);
            if (!$tmp305.value) goto $l300;
            {
                ITable* $tmp307 = s$Iter294->$class->itable;
                while ($tmp307->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp307 = $tmp307->next;
                }
                $fn309 $tmp308 = $tmp307->methods[1];
                panda$core$Object* $tmp310 = $tmp308(s$Iter294);
                s306 = ((panda$io$File*) $tmp310);
                org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler255, s306);
            }
            goto $l299;
            $l300:;
        }
        org$pandalanguage$pandac$Compiler$finish(compiler255);
    }
    }
    panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler255->errorCount, ((panda$core$Int64) { 0 }));
    if ($tmp311.value) {
    {
        {
            $match$254_17312 = format110;
            panda$core$Bit $tmp313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$254_17312.value), ((panda$core$Int64) { 918 }));
            if ($tmp313.value) {
            {
                panda$io$File* $tmp316 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile107, &$s315);
                panda$io$File* $tmp317 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp316, optimizationLevel108);
                optimized314 = $tmp317;
                panda$io$File* $tmp319 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized314);
                assembly318 = $tmp319;
                panda$io$File* $tmp320 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly318, outFile107);
            }
            }
            else {
            panda$core$Bit $tmp321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$254_17312.value), ((panda$core$Int64) { 919 }));
            if ($tmp321.value) {
            {
                panda$io$File* $tmp324 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile107, &$s323);
                panda$io$File* $tmp325 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp324, optimizationLevel108);
                optimized322 = $tmp325;
                panda$io$File* $tmp327 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized322);
                assembly326 = $tmp327;
                panda$io$File* $tmp328 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly326, outFile107);
            }
            }
            }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler255->errorCount, ((panda$core$Int64) { 1 }));
        if ($tmp329.value) {
        {
            panda$io$Console$printLine$panda$core$String(&$s330);
        }
        }
        else {
        {
            panda$core$String* $tmp331 = panda$core$Int64$convert$R$panda$core$String(compiler255->errorCount);
            panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp331, &$s332);
            panda$io$Console$printLine$panda$core$String($tmp333);
        }
        }
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg230));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings252));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err111));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources101));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile107));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler255));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args98));
    }
}
void pandaMain(panda$collections$ListView* p_args) {
    panda$core$Panda$disableRefCounting();
    org$pandalanguage$pandac$Main* $tmp334 = (org$pandalanguage$pandac$Main*) pandaZAlloc(48);
    $tmp334->$class = (panda$core$Class*) &org$pandalanguage$pandac$Main$class;
    $tmp334->refCount.value = 1;
    org$pandalanguage$pandac$Main$init($tmp334);
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp334, p_args);
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

