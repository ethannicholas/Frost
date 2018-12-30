#pragma once
#include "panda_c.h"
#include "Capture_types.h"
typedef struct org$pandalanguage$pandac$Compiler$Capture org$pandalanguage$pandac$Compiler$Capture;
#include "panda/core/Int64_types.h"
typedef struct org$pandalanguage$pandac$Variable org$pandalanguage$pandac$Variable;
typedef struct org$pandalanguage$pandac$FieldDecl org$pandalanguage$pandac$FieldDecl;

void org$pandalanguage$pandac$Compiler$Capture$cleanup(org$pandalanguage$pandac$Compiler$Capture* self);
void org$pandalanguage$pandac$Compiler$Capture$init$panda$core$Int64$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$Compiler$Capture* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Variable* p_f0);
void org$pandalanguage$pandac$Compiler$Capture$init$panda$core$Int64$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler$Capture* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$FieldDecl* p_f0);
void org$pandalanguage$pandac$Compiler$Capture$init$panda$core$Int64(org$pandalanguage$pandac$Compiler$Capture* self, panda$core$Int64 p_rv);

