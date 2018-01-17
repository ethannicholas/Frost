#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Panda.h"


org$pandalanguage$pandac$Compiler$CompileTargetResult$class_type org$pandalanguage$pandac$Compiler$CompileTargetResult$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$CompileTargetResult$cleanup} };



void org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler$CompileTargetResult* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value) {
    {
        self->target = p_target;
    }
    {
        self->value = p_value;
    }
}
void org$pandalanguage$pandac$Compiler$CompileTargetResult$cleanup(org$pandalanguage$pandac$Compiler$CompileTargetResult* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->target));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
}

