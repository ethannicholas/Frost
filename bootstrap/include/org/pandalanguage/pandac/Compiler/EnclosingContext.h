#pragma once
#include "panda_c.h"
#include "EnclosingContext_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Compiler$EnclosingContext org$pandalanguage$pandac$Compiler$EnclosingContext;
#include "panda/core/Int64_types.h"
#include "org/pandalanguage/pandac/IR/Block/ID_types.h"
typedef struct org$pandalanguage$pandac$Variable org$pandalanguage$pandac$Variable;

panda$core$String* org$pandalanguage$pandac$Compiler$EnclosingContext$convert$R$panda$core$String(org$pandalanguage$pandac$Compiler$EnclosingContext* self);
void org$pandalanguage$pandac$Compiler$EnclosingContext$cleanup(org$pandalanguage$pandac$Compiler$EnclosingContext* self);
void org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$Compiler$EnclosingContext* self, panda$core$Int64 p_rv, panda$core$String* p_f0, org$pandalanguage$pandac$IR$Block$ID p_f1, org$pandalanguage$pandac$IR$Block$ID p_f2);
void org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64(org$pandalanguage$pandac$Compiler$EnclosingContext* self, panda$core$Int64 p_rv);
void org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$Compiler$EnclosingContext* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Variable* p_f0);

