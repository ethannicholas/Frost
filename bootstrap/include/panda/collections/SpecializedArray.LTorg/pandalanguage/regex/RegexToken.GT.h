#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/regex/RegexToken.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 count;
    panda$core$Int64 capacity;
    org$pandalanguage$regex$RegexToken* data;
} panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[15]; } panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class_type;
extern panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class_type panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT;
#include "panda/core/Int64.h"
typedef struct panda$collections$ListView panda$collections$ListView;
#include "org/pandalanguage/regex/RegexToken.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
typedef struct panda$collections$CollectionView panda$collections$CollectionView;
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$core$String panda$core$String;

void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self);
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_capacity);
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$collections$ListView$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$collections$ListView* p_list);
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$regex$RegexToken$GT$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, org$pandalanguage$regex$RegexToken* p_data, panda$core$Int64 p_count);
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$cleanup(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self);
org$pandalanguage$regex$RegexToken panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_index);
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_index, org$pandalanguage$regex$RegexToken p_value);
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$insert$panda$core$Int64$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_index, org$pandalanguage$regex$RegexToken p_value);
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Range$LTpanda$core$Int64$GT p_r);
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r);
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r);
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, org$pandalanguage$regex$RegexToken p_value);
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$collections$CollectionView* p_c);
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$ensureCapacity$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_newCapacity);
panda$core$Int64 panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self);
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$core$Int64 p_index);
panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self);
void panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self);
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$convert$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* self);

#endif
