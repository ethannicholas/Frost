#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/IRNode.h"


org$pandalanguage$pandac$Compiler$CompileTargetResult$class_type org$pandalanguage$pandac$Compiler$CompileTargetResult$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };



void org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler$CompileTargetResult* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value) {
    self->target = p_target;
    self->value = p_value;
}

