#include "org/pandalanguage/pandac/Compiler/CompilerErrorReporter.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/ErrorReporter.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Weak.h"
#include "panda/core/Panda.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Method.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$CompilerErrorReporter$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$CompilerErrorReporter$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$CompilerErrorReporter$class_type org$pandalanguage$pandac$Compiler$CompilerErrorReporter$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$CompilerErrorReporter$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$CompilerErrorReporter$cleanup, org$pandalanguage$pandac$Compiler$CompilerErrorReporter$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

typedef panda$core$Object* (*$fn7)(panda$core$Weak*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x45\x72\x72\x6f\x72\x52\x65\x70\x6f\x72\x74\x65\x72", 55, 7985411881352017383, NULL };

void org$pandalanguage$pandac$Compiler$CompilerErrorReporter$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Compiler$CompilerErrorReporter* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp2;
    panda$core$Weak* $tmp3;
    panda$core$Weak* $tmp4;
    self->compiler = NULL;
    {
        $tmp2 = self->compiler;
        panda$core$Weak* $tmp5 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp5, ((panda$core$Object*) p_compiler));
        $tmp4 = $tmp5;
        $tmp3 = $tmp4;
        self->compiler = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
void org$pandalanguage$pandac$Compiler$CompilerErrorReporter$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler$CompilerErrorReporter* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    panda$core$Object* $tmp6;
    panda$core$Object* $tmp8 = (($fn7) self->compiler->$class->vtable[2])(self->compiler);
    $tmp6 = $tmp8;
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp6), p_file, p_pos, p_msg);
    panda$core$Panda$unref$panda$core$Object($tmp6);
}
void org$pandalanguage$pandac$Compiler$CompilerErrorReporter$cleanup(org$pandalanguage$pandac$Compiler$CompilerErrorReporter* self) {
    int $tmp11;
    {
    }
    $tmp11 = -1;
    goto $l9;
    $l9:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp11) {
        case -1: goto $l12;
    }
    $l12:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
}

