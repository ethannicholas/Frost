#pragma once
#include "panda_c.h"
#include "Array_types.h"
typedef struct panda$collections$Array panda$collections$Array;
#include "panda/core/Int64_types.h"
typedef struct panda$collections$CollectionView panda$collections$CollectionView;
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;

void panda$collections$Array$init(panda$collections$Array* self);
void panda$collections$Array$init$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_capacity);
void panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c);
void panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64(panda$collections$Array* self, panda$core$Object** p_data, panda$core$Int64 p_count);
void panda$collections$Array$cleanup(panda$collections$Array* self);
panda$core$Object* panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index);
void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value);
void panda$collections$Array$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$collections$ListView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$GT p_range, panda$collections$ListView* p_list);
void panda$collections$Array$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_range, panda$collections$ListView* p_list);
void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value);
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value);
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c);
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity);
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self);
panda$core$Object* panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index);
void panda$collections$Array$clear(panda$collections$Array* self);
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self);
panda$collections$ImmutableArray* panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(panda$collections$Array* self);

