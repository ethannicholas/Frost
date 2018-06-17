#include "org/pandalanguage/pandac/pandadoc/PandaDoc.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/File.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/pandadoc/PandaDoc/XMLWriter.h"
#include "panda/io/OutputStream.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/ImmutableArray.h"

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$pandadoc$PandaDoc$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$pandadoc$PandaDoc$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$pandadoc$PandaDoc$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$pandadoc$PandaDoc$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$finish} };

static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$PandaDoc$class_type org$pandalanguage$pandac$pandadoc$PandaDoc$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$pandadoc$PandaDoc$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$cleanup, org$pandalanguage$pandac$pandadoc$PandaDoc$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$pandadoc$PandaDoc$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File, org$pandalanguage$pandac$pandadoc$PandaDoc$simpleName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$pandadoc$PandaDoc$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$pandadoc$PandaDoc$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$finish} };

typedef panda$core$String* (*$fn44)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*, panda$core$String*);
typedef void (*$fn52)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn54)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn57)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn59)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn61)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$io$File* (*$fn69)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*, panda$core$String*);
typedef void (*$fn80)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn82)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn87)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn89)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn91)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn100)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn113)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn115)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn117)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x50\x61\x6e\x64\x61\x44\x6f\x63", 42, 5747474735547879356, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65", 4, 224821051, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x69\x6d\x70\x6c\x65\x4e\x61\x6d\x65", 10, -2422848206215579872, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65", 4, 224821051, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x78\x6d\x6c", 4, 152689484, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73", 5, 20924353935, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x69\x6d\x70\x6c\x65\x4e\x61\x6d\x65", 10, -2422848206215579872, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 9, 2155955930119440779, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 9, 2155955930119440779, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73", 10, 5141924857140843769, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73", 5, 20924353935, NULL };

void org$pandalanguage$pandac$pandadoc$PandaDoc$init$panda$io$File(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$io$File* p_outDir) {
    panda$core$Weak* $tmp2;
    panda$core$Weak* $tmp3;
    panda$io$File* $tmp5;
    panda$io$File* $tmp6;
    self->outDir = NULL;
    self->compiler = NULL;
    self->out = NULL;
    panda$core$Weak* $tmp4 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T($tmp4, ((panda$core$Object*) NULL));
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->compiler = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    {
        $tmp5 = self->outDir;
        $tmp6 = p_outDir;
        self->outDir = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
    }
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp7;
    panda$core$Weak* $tmp8;
    panda$core$Weak* $tmp9;
    {
        $tmp7 = self->compiler;
        panda$core$Weak* $tmp10 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp10, ((panda$core$Object*) p_compiler));
        $tmp9 = $tmp10;
        $tmp8 = $tmp9;
        self->compiler = $tmp8;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    }
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $returnValue11;
    panda$core$String* $tmp12;
    panda$core$String* $tmp13;
    panda$core$String* $tmp14;
    panda$core$String* $tmp15;
    panda$core$String* $tmp16;
    panda$core$String* $tmp17;
    panda$core$String* $tmp18;
    panda$core$String* $tmp19;
    panda$core$String* $tmp22 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_cl->name, &$s20, &$s21);
    $tmp19 = $tmp22;
    panda$core$String* $tmp25 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp19, &$s23, &$s24);
    $tmp18 = $tmp25;
    panda$core$String* $tmp28 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp18, &$s26, &$s27);
    $tmp17 = $tmp28;
    panda$core$String* $tmp31 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp17, &$s29, &$s30);
    $tmp16 = $tmp31;
    panda$core$String* $tmp34 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp16, &$s32, &$s33);
    $tmp15 = $tmp34;
    panda$core$String* $tmp37 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp15, &$s35, &$s36);
    $tmp14 = $tmp37;
    panda$core$String* $tmp38 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp14, p_extension);
    $tmp13 = $tmp38;
    $tmp12 = $tmp13;
    $returnValue11 = $tmp12;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
    return $returnValue11;
}
panda$io$File* org$pandalanguage$pandac$pandadoc$PandaDoc$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$io$File* $returnValue40;
    panda$io$File* $tmp41;
    panda$io$File* $tmp42;
    panda$core$String* $tmp43;
    panda$core$String* $tmp45 = (($fn44) self->$class->vtable[3])(self, p_cl, p_extension);
    $tmp43 = $tmp45;
    panda$io$File* $tmp46 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp43);
    $tmp42 = $tmp46;
    $tmp41 = $tmp42;
    $returnValue40 = $tmp41;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp41));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
    return $returnValue40;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$simpleName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $returnValue48;
    panda$core$String* $tmp49;
    $tmp49 = ((org$pandalanguage$pandac$Symbol*) p_t)->name;
    $returnValue48 = $tmp49;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
    return $returnValue48;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp56;
    (($fn52) self->out->$class->vtable[2])(self->out, &$s51);
    (($fn54) self->out->$class->vtable[4])(self->out, &$s53, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp58 = (($fn57) self->$class->vtable[5])(self, p_t);
    $tmp56 = $tmp58;
    (($fn59) self->out->$class->vtable[4])(self->out, &$s55, $tmp56);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp56));
    (($fn61) self->out->$class->vtable[3])(self->out, &$s60);
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* dest65 = NULL;
    panda$io$File* $tmp66;
    panda$io$File* $tmp67;
    panda$io$File* $tmp71;
    org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp73;
    org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp74;
    org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp75;
    panda$io$OutputStream* $tmp77;
    panda$core$String* $tmp84;
    org$pandalanguage$pandac$Type* $tmp85;
    org$pandalanguage$pandac$Type* ancestor92 = NULL;
    org$pandalanguage$pandac$Type* $tmp93;
    org$pandalanguage$pandac$ClassDecl* ancestorClass101 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp102;
    org$pandalanguage$pandac$ClassDecl* $tmp103;
    panda$core$Object* $tmp104;
    org$pandalanguage$pandac$Type* $tmp109;
    org$pandalanguage$pandac$Type* $tmp110;
    int $tmp64;
    {
        panda$io$File* $tmp70 = (($fn69) self->$class->vtable[4])(self, p_cl, &$s68);
        $tmp67 = $tmp70;
        $tmp66 = $tmp67;
        dest65 = $tmp66;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp66));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
        panda$io$File* $tmp72 = panda$io$File$parent$R$panda$io$File$Q(dest65);
        $tmp71 = $tmp72;
        panda$io$File$createDirectories($tmp71);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
        {
            $tmp73 = self->out;
            org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp76 = (org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$class);
            panda$io$OutputStream* $tmp78 = panda$io$File$openOutputStream$R$panda$io$OutputStream(dest65);
            $tmp77 = $tmp78;
            org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$init$panda$io$OutputStream($tmp76, $tmp77);
            $tmp75 = $tmp76;
            $tmp74 = $tmp75;
            self->out = $tmp74;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp74));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp77));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
        }
        (($fn80) self->out->$class->vtable[2])(self->out, &$s79);
        (($fn82) self->out->$class->vtable[4])(self->out, &$s81, p_cl->name);
        org$pandalanguage$pandac$Type* $tmp86 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        $tmp85 = $tmp86;
        panda$core$String* $tmp88 = (($fn87) self->$class->vtable[5])(self, $tmp85);
        $tmp84 = $tmp88;
        (($fn89) self->out->$class->vtable[4])(self->out, &$s83, $tmp84);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
        (($fn91) self->out->$class->vtable[2])(self->out, &$s90);
        $tmp93 = p_cl->rawSuper;
        ancestor92 = $tmp93;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
        $l94:;
        bool $tmp96 = ((panda$core$Bit) { ancestor92 != NULL }).value;
        if (!$tmp96) goto $l95;
        {
            int $tmp99;
            {
                (($fn100) self->$class->vtable[6])(self, ancestor92);
                panda$core$Object* $tmp105 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp104 = $tmp105;
                org$pandalanguage$pandac$ClassDecl* $tmp106 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp104), ancestor92);
                $tmp103 = $tmp106;
                $tmp102 = $tmp103;
                ancestorClass101 = $tmp102;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
                panda$core$Panda$unref$panda$core$Object($tmp104);
                if (((panda$core$Bit) { ancestorClass101 == NULL }).value) {
                {
                    $tmp99 = 0;
                    goto $l97;
                    $l107:;
                    $tmp64 = 0;
                    goto $l62;
                    $l108:;
                    return;
                }
                }
                {
                    $tmp109 = ancestor92;
                    $tmp110 = ancestorClass101->rawSuper;
                    ancestor92 = $tmp110;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp110));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp109));
                }
            }
            $tmp99 = -1;
            goto $l97;
            $l97:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestorClass101));
            ancestorClass101 = NULL;
            switch ($tmp99) {
                case -1: goto $l111;
                case 0: goto $l107;
            }
            $l111:;
        }
        goto $l94;
        $l95:;
        (($fn113) self->out->$class->vtable[3])(self->out, &$s112);
        (($fn115) self->out->$class->vtable[2])(self->out, &$s114);
        (($fn117) self->out->$class->vtable[3])(self->out, &$s116);
    }
    $tmp64 = -1;
    goto $l62;
    $l62:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestor92));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest65));
    dest65 = NULL;
    ancestor92 = NULL;
    switch ($tmp64) {
        case 0: goto $l108;
        case -1: goto $l118;
    }
    $l118:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$finish(org$pandalanguage$pandac$pandadoc$PandaDoc* self) {
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$cleanup(org$pandalanguage$pandac$pandadoc$PandaDoc* self) {
    int $tmp121;
    {
    }
    $tmp121 = -1;
    goto $l119;
    $l119:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp121) {
        case -1: goto $l122;
    }
    $l122:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->outDir));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
}

