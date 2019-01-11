#pragma once
#include "panda_c.h"
#include "FixedArray_types.h"
typedef struct org$pandalanguage$pandac$FixedArray org$pandalanguage$pandac$FixedArray;
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Int64_types.h"
typedef struct panda$collections$Array panda$collections$Array;
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$FixedArray$init(org$pandalanguage$pandac$FixedArray* self);
void org$pandalanguage$pandac$FixedArray$init$panda$collections$ListView$LTorg$pandalanguage$pandac$FixedArray$T$GT(org$pandalanguage$pandac$FixedArray* self, panda$collections$ListView* p_data);
void org$pandalanguage$pandac$FixedArray$init$panda$unsafe$Pointer$LTorg$pandalanguage$pandac$FixedArray$T$GT$panda$core$Int64(org$pandalanguage$pandac$FixedArray* self, panda$core$Object** p_data, panda$core$Int64 p_count);
org$pandalanguage$pandac$FixedArray* org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT(panda$collections$Array* p_a);
void org$pandalanguage$pandac$FixedArray$cleanup(org$pandalanguage$pandac$FixedArray* self);
panda$core$Object* org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T(org$pandalanguage$pandac$FixedArray* self, panda$core$Int64 p_index);
panda$core$Int64 org$pandalanguage$pandac$FixedArray$get_count$R$panda$core$Int64(org$pandalanguage$pandac$FixedArray* self);
panda$collections$Iterator* org$pandalanguage$pandac$FixedArray$get_iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$FixedArray$T$GT(org$pandalanguage$pandac$FixedArray* self);
panda$core$String* org$pandalanguage$pandac$FixedArray$convert$R$panda$core$String(org$pandalanguage$pandac$FixedArray* self);

