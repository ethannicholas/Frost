#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Panda.h"


org$pandalanguage$pandac$Compiler$CompileTargetResult$class_type org$pandalanguage$pandac$Compiler$CompileTargetResult$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };



void org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler$CompileTargetResult* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value) {
    {
        panda$core$Object* $tmp1 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_target));
        self->target = ((org$pandalanguage$pandac$IRNode*) $tmp1);
    }
    {
        panda$core$Object* $tmp2 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_value));
        self->value = ((org$pandalanguage$pandac$IRNode*) $tmp2);
    }
}

