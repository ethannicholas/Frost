#pragma once
#include "panda_c.h"
#include "CompileTargetResult_types.h"
typedef struct org$pandalanguage$pandac$Compiler$CompileTargetResult org$pandalanguage$pandac$Compiler$CompileTargetResult;
typedef struct org$pandalanguage$pandac$IRNode org$pandalanguage$pandac$IRNode;

void org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler$CompileTargetResult* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value);
void org$pandalanguage$pandac$Compiler$CompileTargetResult$cleanup(org$pandalanguage$pandac$Compiler$CompileTargetResult* self);

