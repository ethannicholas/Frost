#pragma once
#include "panda_c.h"
#include "IR_types.h"
typedef struct org$pandalanguage$pandac$IR org$pandalanguage$pandac$IR;
#include "org/pandalanguage/pandac/IR/Statement/ID_types.h"
typedef struct org$pandalanguage$pandac$IR$Statement org$pandalanguage$pandac$IR$Statement;
#include "org/pandalanguage/pandac/IR/Block/ID_types.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit_types.h"

void org$pandalanguage$pandac$IR$init(org$pandalanguage$pandac$IR* self);
org$pandalanguage$pandac$IR$Statement$ID org$pandalanguage$pandac$IR$add$org$pandalanguage$pandac$IR$Statement$R$org$pandalanguage$pandac$IR$Statement$ID(org$pandalanguage$pandac$IR* self, org$pandalanguage$pandac$IR$Statement* p_s);
org$pandalanguage$pandac$IR$Block$ID org$pandalanguage$pandac$IR$newBlock$panda$core$String$R$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$IR* self, panda$core$String* p_comment);
void org$pandalanguage$pandac$IR$setCurrentBlock$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$IR* self, org$pandalanguage$pandac$IR$Block$ID p_id);
panda$core$Bit org$pandalanguage$pandac$IR$get_currentBlockFinished$R$panda$core$Bit(org$pandalanguage$pandac$IR* self);
panda$core$String* org$pandalanguage$pandac$IR$convert$R$panda$core$String(org$pandalanguage$pandac$IR* self);
void org$pandalanguage$pandac$IR$cleanup(org$pandalanguage$pandac$IR* self);

