#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/io/File.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/collections/ImmutableArray.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$Settings$class_type org$pandalanguage$pandac$Compiler$Settings$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$Settings$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x53\x65\x74\x74\x69\x6e\x67\x73", 42, 3094301528977944540, NULL };

void org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Compiler$Settings* self, panda$io$File* p_pandaHome, panda$collections$ListView* p_importDirs, panda$core$Int64 p_optimizationLevel, panda$core$Int64 p_safetyLevel) {
    panda$io$File* $tmp2;
    panda$io$File* $tmp3;
    panda$collections$ImmutableArray* $tmp4;
    panda$collections$ImmutableArray* $tmp5;
    panda$collections$ImmutableArray* $tmp6;
    self->pandaHome = NULL;
    self->importDirs = NULL;
    {
        $tmp2 = self->pandaHome;
        $tmp3 = p_pandaHome;
        self->pandaHome = $tmp3;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
    }
    {
        $tmp4 = self->importDirs;
        panda$collections$ImmutableArray* $tmp7 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp7, p_importDirs);
        $tmp6 = $tmp7;
        $tmp5 = $tmp6;
        self->importDirs = $tmp5;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
    }
    self->optimizationLevel = p_optimizationLevel;
    self->safetyLevel = p_safetyLevel;
}
void org$pandalanguage$pandac$Compiler$Settings$cleanup(org$pandalanguage$pandac$Compiler$Settings* self) {
    int $tmp10;
    {
    }
    $tmp10 = -1;
    goto $l8;
    $l8:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp10) {
        case -1: goto $l11;
    }
    $l11:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->pandaHome));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->importDirs));
}

