#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/io/File.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/collections/ImmutableArray.h"


org$pandalanguage$pandac$Compiler$Settings$class_type org$pandalanguage$pandac$Compiler$Settings$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };



void org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Compiler$Settings* self, panda$io$File* p_pandaHome, panda$collections$ListView* p_importDirs, panda$core$Int64 p_optimizationLevel, panda$core$Int64 p_safetyLevel) {
    self->pandaHome = p_pandaHome;
    panda$collections$ImmutableArray* $tmp1 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp1->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp1->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp1, p_importDirs);
    self->importDirs = $tmp1;
    self->optimizationLevel = p_optimizationLevel;
    self->safetyLevel = p_safetyLevel;
}

