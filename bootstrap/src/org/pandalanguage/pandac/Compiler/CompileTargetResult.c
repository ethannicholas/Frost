#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Panda.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$CompileTargetResult$class_type org$pandalanguage$pandac$Compiler$CompileTargetResult$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$CompileTargetResult$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x54\x61\x72\x67\x65\x74\x52\x65\x73\x75\x6c\x74", 53, -3064201596097893626, NULL };

void org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler$CompileTargetResult* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value) {
    org$pandalanguage$pandac$IRNode* $tmp2;
    org$pandalanguage$pandac$IRNode* $tmp3;
    org$pandalanguage$pandac$IRNode* $tmp4;
    org$pandalanguage$pandac$IRNode* $tmp5;
    self->target = NULL;
    self->value = NULL;
    {
        $tmp2 = self->target;
        $tmp3 = p_target;
        self->target = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    {
        $tmp4 = self->value;
        $tmp5 = p_value;
        self->value = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
}
void org$pandalanguage$pandac$Compiler$CompileTargetResult$cleanup(org$pandalanguage$pandac$Compiler$CompileTargetResult* self) {
    int $tmp8;
    {
    }
    $tmp8 = -1;
    goto $l6;
    $l6:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp8) {
        case -1: goto $l9;
    }
    $l9:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->target));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
}





