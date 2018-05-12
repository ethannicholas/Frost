#include "panda/collections/Array.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/List.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListWriter.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Collection.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/Array/ArrayIterator.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/ImmutableArray.h"
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT$shim(panda$collections$Array* self) {
    panda$collections$Iterator* result = panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(self);
    return result;
}
void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim(panda$collections$Array* self, panda$core$Int64 p0, panda$core$Object* p1) {
    panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, p0, p1);
}
void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim(panda$collections$Array* self, panda$core$Int64 p0, panda$core$Object* p1) {
    panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(self, p0, p1);
}
panda$core$Object* panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim(panda$collections$Array* self, panda$core$Int64 p0) {
    panda$core$Object* result = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, p0);
    return result;
}
void panda$collections$Array$add$panda$collections$Array$T$shim(panda$collections$Array* self, panda$core$Object* p0) {
    panda$collections$Array$add$panda$collections$Array$T(self, p0);
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim(panda$collections$Array* self, panda$collections$CollectionView* p0) {
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(self, p0);
}


struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Array$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, NULL, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Array$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$Array$_panda$collections$List, { panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Array$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$Array$_panda$collections$Iterable, { panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$removeIndex$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Array$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$Array$_panda$collections$ListWriter, { panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Array$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$Array$_panda$collections$ListView, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Array$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$Array$_panda$collections$Collection, { panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Array$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionWriter, { panda$collections$Array$get_count$R$panda$core$Int64} };

static panda$core$String $s1;
panda$collections$Array$class_type panda$collections$Array$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionView, { panda$collections$Array$convert$R$panda$core$String, panda$collections$Array$cleanup, panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT, panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$ensureCapacity$panda$core$Int64, panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$Array$removeIndex$panda$core$Int64, panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear, panda$collections$Array$join$R$panda$core$String, panda$collections$Array$join$panda$core$String$R$panda$core$String, panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT} };

typedef panda$core$Int64 (*$fn24)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn35)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn42)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn53)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn239)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn250)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn257)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn268)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn384)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn437)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn444)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn455)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$Array$init(panda$collections$Array* self) {
    self->count = ((panda$core$Int64) { 0 });
    panda$collections$Array$init$panda$core$Int64(self, ((panda$core$Int64) { 16 }));
}
void panda$collections$Array$init$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_capacity) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp2;
    self->count = ((panda$core$Int64) { 0 });
    self->capacity = p_capacity;
    self->data = ((panda$core$Object**) pandaZAlloc(p_capacity.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2, ((panda$core$Int64) { 0 }), p_capacity, ((panda$core$Bit) { false }));
    int64_t $tmp4 = $tmp2.min.value;
    panda$core$Int64 i3 = { $tmp4 };
    int64_t $tmp6 = $tmp2.max.value;
    bool $tmp7 = $tmp2.inclusive.value;
    if ($tmp7) goto $l14; else goto $l15;
    $l14:;
    if ($tmp4 <= $tmp6) goto $l8; else goto $l10;
    $l15:;
    if ($tmp4 < $tmp6) goto $l8; else goto $l10;
    $l8:;
    {
        PANDA_ASSERT(((panda$core$Bit) { self->data[i3.value] == NULL }).value);
    }
    $l11:;
    int64_t $tmp17 = $tmp6 - i3.value;
    if ($tmp7) goto $l18; else goto $l19;
    $l18:;
    if ((uint64_t) $tmp17 >= 1) goto $l16; else goto $l10;
    $l19:;
    if ((uint64_t) $tmp17 > 1) goto $l16; else goto $l10;
    $l16:;
    i3.value += 1;
    goto $l8;
    $l10:;
}
void panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$ListView* p_list) {
    panda$collections$Iterator* Iter$53$930 = NULL;
    panda$collections$Iterator* $tmp31;
    panda$collections$Iterator* $tmp32;
    panda$core$Object* v48 = NULL;
    panda$core$Object* $tmp49;
    panda$core$Object* $tmp50;
    self->count = ((panda$core$Int64) { 0 });
    ITable* $tmp22 = ((panda$collections$CollectionView*) p_list)->$class->itable;
    while ($tmp22->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp22 = $tmp22->next;
    }
    $fn24 $tmp23 = $tmp22->methods[0];
    panda$core$Int64 $tmp25 = $tmp23(((panda$collections$CollectionView*) p_list));
    panda$core$Int64 $tmp26 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp25, ((panda$core$Int64) { 16 }));
    panda$collections$Array$init$panda$core$Int64(self, $tmp26);
    {
        int $tmp29;
        {
            ITable* $tmp33 = ((panda$collections$Iterable*) p_list)->$class->itable;
            while ($tmp33->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp33 = $tmp33->next;
            }
            $fn35 $tmp34 = $tmp33->methods[0];
            panda$collections$Iterator* $tmp36 = $tmp34(((panda$collections$Iterable*) p_list));
            $tmp32 = $tmp36;
            $tmp31 = $tmp32;
            Iter$53$930 = $tmp31;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp31));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
            $l37:;
            ITable* $tmp40 = Iter$53$930->$class->itable;
            while ($tmp40->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp40 = $tmp40->next;
            }
            $fn42 $tmp41 = $tmp40->methods[0];
            panda$core$Bit $tmp43 = $tmp41(Iter$53$930);
            panda$core$Bit $tmp44 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp43);
            bool $tmp39 = $tmp44.value;
            if (!$tmp39) goto $l38;
            {
                int $tmp47;
                {
                    ITable* $tmp51 = Iter$53$930->$class->itable;
                    while ($tmp51->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp51 = $tmp51->next;
                    }
                    $fn53 $tmp52 = $tmp51->methods[1];
                    panda$core$Object* $tmp54 = $tmp52(Iter$53$930);
                    $tmp50 = $tmp54;
                    $tmp49 = $tmp50;
                    v48 = $tmp49;
                    panda$core$Panda$ref$panda$core$Object($tmp49);
                    panda$core$Panda$unref$panda$core$Object($tmp50);
                    panda$collections$Array$add$panda$collections$Array$T(self, v48);
                }
                $tmp47 = -1;
                goto $l45;
                $l45:;
                panda$core$Panda$unref$panda$core$Object(v48);
                v48 = NULL;
                switch ($tmp47) {
                    case -1: goto $l55;
                }
                $l55:;
            }
            goto $l37;
            $l38:;
        }
        $tmp29 = -1;
        goto $l27;
        $l27:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$53$930));
        Iter$53$930 = NULL;
        switch ($tmp29) {
            case -1: goto $l56;
        }
        $l56:;
    }
}
void panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64(panda$collections$Array* self, panda$core$Object** p_data, panda$core$Int64 p_count) {
    self->count = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->count = p_count;
    self->capacity = p_count;
}
void panda$collections$Array$cleanup(panda$collections$Array* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp60;
    int $tmp59;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp60, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Bit) { false }));
        int64_t $tmp62 = $tmp60.min.value;
        panda$core$Int64 i61 = { $tmp62 };
        int64_t $tmp64 = $tmp60.max.value;
        bool $tmp65 = $tmp60.inclusive.value;
        if ($tmp65) goto $l72; else goto $l73;
        $l72:;
        if ($tmp62 <= $tmp64) goto $l66; else goto $l68;
        $l73:;
        if ($tmp62 < $tmp64) goto $l66; else goto $l68;
        $l66:;
        {
            if (((panda$core$Bit) { self->data[i61.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(self->data[i61.value]);
            }
            }
        }
        $l69:;
        int64_t $tmp75 = $tmp64 - i61.value;
        if ($tmp65) goto $l76; else goto $l77;
        $l76:;
        if ((uint64_t) $tmp75 >= 1) goto $l74; else goto $l68;
        $l77:;
        if ((uint64_t) $tmp75 > 1) goto $l74; else goto $l68;
        $l74:;
        i61.value += 1;
        goto $l66;
        $l68:;
        pandaFree(self->data);
    }
    $tmp59 = -1;
    goto $l57;
    $l57:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp59) {
        case -1: goto $l80;
    }
    $l80:;
}
panda$core$Object* panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Object* $finallyReturn85;
    panda$core$Object* $tmp87;
    panda$core$Bit $tmp82 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp81 = $tmp82.value;
    if (!$tmp81) goto $l83;
    panda$core$Bit $tmp84 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp81 = $tmp84.value;
    $l83:;
    panda$core$Bit $tmp85 = { $tmp81 };
    PANDA_ASSERT($tmp85.value);
    $tmp87 = self->data[p_index.value];
    $finallyReturn85 = $tmp87;
    panda$core$Panda$ref$panda$core$Object($tmp87);
    return $finallyReturn85;
}
void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$Object** $tmp94;
    panda$core$Int64 $tmp95;
    panda$core$Object* $tmp96;
    panda$core$Bit $tmp90 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp89 = $tmp90.value;
    if (!$tmp89) goto $l91;
    panda$core$Bit $tmp92 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp89 = $tmp92.value;
    $l91:;
    panda$core$Bit $tmp93 = { $tmp89 };
    PANDA_ASSERT($tmp93.value);
    {
        $tmp94 = self->data;
        $tmp95 = p_index;
        panda$core$Panda$unref$panda$core$Object($tmp94[$tmp95.value]);
        $tmp96 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp96);
        $tmp94[$tmp95.value] = $tmp96;
    }
}
void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp98;
    panda$core$Object** $tmp117;
    panda$core$Int64 $tmp118;
    panda$core$Object* $tmp119;
    panda$core$Object** $tmp133;
    panda$core$Int64 $tmp134;
    panda$core$Object* $tmp135;
    panda$core$Int64 $tmp97 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp97);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp98, self->count, p_index, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp100 = $tmp98.start.value;
    panda$core$Int64 i99 = { $tmp100 };
    int64_t $tmp102 = $tmp98.end.value;
    int64_t $tmp103 = $tmp98.step.value;
    bool $tmp104 = $tmp98.inclusive.value;
    bool $tmp111 = $tmp103 > 0;
    if ($tmp111) goto $l109; else goto $l110;
    $l109:;
    if ($tmp104) goto $l112; else goto $l113;
    $l112:;
    if ($tmp100 <= $tmp102) goto $l105; else goto $l107;
    $l113:;
    if ($tmp100 < $tmp102) goto $l105; else goto $l107;
    $l110:;
    if ($tmp104) goto $l114; else goto $l115;
    $l114:;
    if ($tmp100 >= $tmp102) goto $l105; else goto $l107;
    $l115:;
    if ($tmp100 > $tmp102) goto $l105; else goto $l107;
    $l105:;
    {
        {
            $tmp117 = self->data;
            $tmp118 = i99;
            panda$core$Panda$unref$panda$core$Object($tmp117[$tmp118.value]);
            panda$core$Int64 $tmp120 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i99, ((panda$core$Int64) { 1 }));
            $tmp119 = self->data[$tmp120.value];
            panda$core$Panda$ref$panda$core$Object($tmp119);
            $tmp117[$tmp118.value] = $tmp119;
        }
    }
    $l108:;
    if ($tmp111) goto $l122; else goto $l123;
    $l122:;
    int64_t $tmp124 = $tmp102 - i99.value;
    if ($tmp104) goto $l125; else goto $l126;
    $l125:;
    if ((uint64_t) $tmp124 >= $tmp103) goto $l121; else goto $l107;
    $l126:;
    if ((uint64_t) $tmp124 > $tmp103) goto $l121; else goto $l107;
    $l123:;
    int64_t $tmp128 = i99.value - $tmp102;
    if ($tmp104) goto $l129; else goto $l130;
    $l129:;
    if ((uint64_t) $tmp128 >= -$tmp103) goto $l121; else goto $l107;
    $l130:;
    if ((uint64_t) $tmp128 > -$tmp103) goto $l121; else goto $l107;
    $l121:;
    i99.value += $tmp103;
    goto $l105;
    $l107:;
    panda$core$Int64 $tmp132 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp132;
    {
        $tmp133 = self->data;
        $tmp134 = p_index;
        panda$core$Panda$unref$panda$core$Object($tmp133[$tmp134.value]);
        $tmp135 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp135);
        $tmp133[$tmp134.value] = $tmp135;
    }
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max136;
    panda$core$Int64 count138;
    panda$core$Object** result140;
    panda$core$Range$LTpanda$core$Int64$GT $tmp141;
    panda$core$Object** $tmp155;
    panda$core$Int64 $tmp156;
    panda$core$Object* $tmp157;
    panda$core$Object* $tmp158;
    panda$collections$Array* $finallyReturn166;
    panda$collections$Array* $tmp168;
    panda$collections$Array* $tmp169;
    max136 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp137 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max136, ((panda$core$Int64) { 1 }));
        max136 = $tmp137;
    }
    }
    panda$core$Int64 $tmp139 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max136, p_r.min);
    count138 = $tmp139;
    result140 = ((panda$core$Object**) pandaZAlloc(count138.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp141, ((panda$core$Int64) { 0 }), count138, ((panda$core$Bit) { false }));
    int64_t $tmp143 = $tmp141.min.value;
    panda$core$Int64 i142 = { $tmp143 };
    int64_t $tmp145 = $tmp141.max.value;
    bool $tmp146 = $tmp141.inclusive.value;
    if ($tmp146) goto $l153; else goto $l154;
    $l153:;
    if ($tmp143 <= $tmp145) goto $l147; else goto $l149;
    $l154:;
    if ($tmp143 < $tmp145) goto $l147; else goto $l149;
    $l147:;
    {
        {
            $tmp155 = result140;
            $tmp156 = i142;
            panda$core$Panda$unref$panda$core$Object($tmp155[$tmp156.value]);
            panda$core$Int64 $tmp159 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i142);
            panda$core$Object* $tmp160 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp159);
            $tmp158 = $tmp160;
            $tmp157 = $tmp158;
            panda$core$Panda$ref$panda$core$Object($tmp157);
            panda$core$Panda$unref$panda$core$Object($tmp158);
            $tmp155[$tmp156.value] = $tmp157;
        }
    }
    $l150:;
    int64_t $tmp162 = $tmp145 - i142.value;
    if ($tmp146) goto $l163; else goto $l164;
    $l163:;
    if ((uint64_t) $tmp162 >= 1) goto $l161; else goto $l149;
    $l164:;
    if ((uint64_t) $tmp162 > 1) goto $l161; else goto $l149;
    $l161:;
    i142.value += 1;
    goto $l147;
    $l149:;
    panda$collections$Array* $tmp170 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64($tmp170, result140, count138);
    $tmp169 = $tmp170;
    $tmp168 = $tmp169;
    $finallyReturn166 = $tmp168;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp168));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp169));
    return $finallyReturn166;
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start172;
    panda$core$Int64 end173;
    panda$collections$Array* $finallyReturn175;
    panda$collections$Array* $tmp177;
    panda$collections$Array* $tmp178;
    panda$core$Range$LTpanda$core$Int64$GT $tmp179;
    memset(&start172, 0, sizeof(start172));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start172 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start172 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end173, 0, sizeof(end173));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end173 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp174 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        end173 = $tmp174;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp175 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end173, ((panda$core$Int64) { 1 }));
            end173 = $tmp175;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp179, start172, end173, p_r.inclusive);
    panda$collections$Array* $tmp180 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(self, $tmp179);
    $tmp178 = $tmp180;
    $tmp177 = $tmp178;
    $finallyReturn175 = $tmp177;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp177));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
    return $finallyReturn175;
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step185;
    panda$core$Int64 current186;
    panda$core$Int64 end190;
    panda$collections$Array* result193 = NULL;
    panda$collections$Array* $tmp194;
    panda$collections$Array* $tmp195;
    panda$core$Object* $tmp202;
    panda$core$Object* $tmp210;
    panda$core$Object* $tmp225;
    panda$collections$Array* $finallyReturn226;
    panda$collections$Array* $tmp228;
    int $tmp184;
    {
        step185 = p_r.step;
        memset(&current186, 0, sizeof(current186));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current186 = ((panda$core$Int64) p_r.start.value);
        }
        }
        else {
        panda$core$Bit $tmp187 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step185, ((panda$core$Int64) { 0 }));
        if ($tmp187.value) {
        {
            current186 = ((panda$core$Int64) { 0 });
        }
        }
        else {
        {
            panda$core$Int64 $tmp188 = panda$collections$Array$get_count$R$panda$core$Int64(self);
            panda$core$Int64 $tmp189 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp188, ((panda$core$Int64) { 1 }));
            current186 = $tmp189;
        }
        }
        }
        memset(&end190, 0, sizeof(end190));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end190 = ((panda$core$Int64) p_r.end.value);
        }
        }
        else {
        panda$core$Bit $tmp191 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step185, ((panda$core$Int64) { 0 }));
        if ($tmp191.value) {
        {
            panda$core$Int64 $tmp192 = panda$collections$Array$get_count$R$panda$core$Int64(self);
            end190 = $tmp192;
        }
        }
        else {
        {
            end190 = ((panda$core$Int64) { 0 });
        }
        }
        }
        panda$collections$Array* $tmp196 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp196);
        $tmp195 = $tmp196;
        $tmp194 = $tmp195;
        result193 = $tmp194;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp194));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
        panda$core$Bit $tmp197 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        if ($tmp197.value) {
        {
            $l198:;
            panda$core$Bit $tmp201 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current186, end190);
            bool $tmp200 = $tmp201.value;
            if (!$tmp200) goto $l199;
            {
                panda$core$Object* $tmp203 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current186);
                $tmp202 = $tmp203;
                panda$collections$Array$add$panda$collections$Array$T(result193, $tmp202);
                panda$core$Panda$unref$panda$core$Object($tmp202);
                panda$core$Int64 $tmp204 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current186, step185);
                current186 = $tmp204;
            }
            goto $l198;
            $l199:;
        }
        }
        else {
        {
            panda$core$Bit $tmp205 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp205.value);
            $l206:;
            panda$core$Bit $tmp209 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current186, end190);
            bool $tmp208 = $tmp209.value;
            if (!$tmp208) goto $l207;
            {
                panda$core$Object* $tmp211 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current186);
                $tmp210 = $tmp211;
                panda$collections$Array$add$panda$collections$Array$T(result193, $tmp210);
                panda$core$Panda$unref$panda$core$Object($tmp210);
                panda$core$Int64 $tmp212 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current186, step185);
                current186 = $tmp212;
            }
            goto $l206;
            $l207:;
        }
        }
        bool $tmp215 = p_r.inclusive.value;
        if ($tmp215) goto $l216;
        $tmp215 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l216:;
        panda$core$Bit $tmp217 = { $tmp215 };
        bool $tmp214 = $tmp217.value;
        if (!$tmp214) goto $l218;
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current186, end190);
        $tmp214 = $tmp219.value;
        $l218:;
        panda$core$Bit $tmp220 = { $tmp214 };
        bool $tmp213 = $tmp220.value;
        if (!$tmp213) goto $l221;
        panda$core$Int64 $tmp222 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        panda$core$Bit $tmp223 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end190, $tmp222);
        $tmp213 = $tmp223.value;
        $l221:;
        panda$core$Bit $tmp224 = { $tmp213 };
        if ($tmp224.value) {
        {
            panda$core$Object* $tmp226 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current186);
            $tmp225 = $tmp226;
            panda$collections$Array$add$panda$collections$Array$T(result193, $tmp225);
            panda$core$Panda$unref$panda$core$Object($tmp225);
        }
        }
        $tmp228 = result193;
        $finallyReturn226 = $tmp228;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp228));
        $tmp184 = 0;
        goto $l182;
        $l229:;
        return $finallyReturn226;
    }
    $l182:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result193));
    result193 = NULL;
    switch ($tmp184) {
        case 0: goto $l229;
    }
    $l231:;
}
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Object** $tmp233;
    panda$core$Int64 $tmp234;
    panda$core$Object* $tmp235;
    panda$core$Int64 $tmp232 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp232);
    {
        $tmp233 = self->data;
        $tmp234 = self->count;
        panda$core$Panda$unref$panda$core$Object($tmp233[$tmp234.value]);
        $tmp235 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp235);
        $tmp233[$tmp234.value] = $tmp235;
    }
    panda$core$Int64 $tmp236 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp236;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$209$9245 = NULL;
    panda$collections$Iterator* $tmp246;
    panda$collections$Iterator* $tmp247;
    panda$core$Object* v263 = NULL;
    panda$core$Object* $tmp264;
    panda$core$Object* $tmp265;
    panda$core$Object** $tmp270;
    panda$core$Int64 $tmp271;
    panda$core$Object* $tmp272;
    ITable* $tmp237 = p_c->$class->itable;
    while ($tmp237->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp237 = $tmp237->next;
    }
    $fn239 $tmp238 = $tmp237->methods[0];
    panda$core$Int64 $tmp240 = $tmp238(p_c);
    panda$core$Int64 $tmp241 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp240);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp241);
    {
        int $tmp244;
        {
            ITable* $tmp248 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp248->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp248 = $tmp248->next;
            }
            $fn250 $tmp249 = $tmp248->methods[0];
            panda$collections$Iterator* $tmp251 = $tmp249(((panda$collections$Iterable*) p_c));
            $tmp247 = $tmp251;
            $tmp246 = $tmp247;
            Iter$209$9245 = $tmp246;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp246));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
            $l252:;
            ITable* $tmp255 = Iter$209$9245->$class->itable;
            while ($tmp255->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp255 = $tmp255->next;
            }
            $fn257 $tmp256 = $tmp255->methods[0];
            panda$core$Bit $tmp258 = $tmp256(Iter$209$9245);
            panda$core$Bit $tmp259 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp258);
            bool $tmp254 = $tmp259.value;
            if (!$tmp254) goto $l253;
            {
                int $tmp262;
                {
                    ITable* $tmp266 = Iter$209$9245->$class->itable;
                    while ($tmp266->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp266 = $tmp266->next;
                    }
                    $fn268 $tmp267 = $tmp266->methods[1];
                    panda$core$Object* $tmp269 = $tmp267(Iter$209$9245);
                    $tmp265 = $tmp269;
                    $tmp264 = $tmp265;
                    v263 = $tmp264;
                    panda$core$Panda$ref$panda$core$Object($tmp264);
                    panda$core$Panda$unref$panda$core$Object($tmp265);
                    {
                        $tmp270 = self->data;
                        $tmp271 = self->count;
                        panda$core$Panda$unref$panda$core$Object($tmp270[$tmp271.value]);
                        $tmp272 = v263;
                        panda$core$Panda$ref$panda$core$Object($tmp272);
                        $tmp270[$tmp271.value] = $tmp272;
                    }
                    panda$core$Int64 $tmp273 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
                    self->count = $tmp273;
                }
                $tmp262 = -1;
                goto $l260;
                $l260:;
                panda$core$Panda$unref$panda$core$Object(v263);
                v263 = NULL;
                switch ($tmp262) {
                    case -1: goto $l274;
                }
                $l274:;
            }
            goto $l252;
            $l253:;
        }
        $tmp244 = -1;
        goto $l242;
        $l242:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$209$9245));
        Iter$209$9245 = NULL;
        switch ($tmp244) {
            case -1: goto $l275;
        }
        $l275:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 oldCapacity278;
    panda$core$Range$LTpanda$core$Int64$GT $tmp284;
    panda$core$Bit $tmp276 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp276.value);
    panda$core$Bit $tmp277 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp277.value) {
    {
        return;
    }
    }
    oldCapacity278 = self->capacity;
    $l279:;
    panda$core$Bit $tmp282 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp281 = $tmp282.value;
    if (!$tmp281) goto $l280;
    {
        panda$core$Int64 $tmp283 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp283;
    }
    goto $l279;
    $l280:;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, oldCapacity278.value * 8, self->capacity.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp284, oldCapacity278, self->capacity, ((panda$core$Bit) { false }));
    int64_t $tmp286 = $tmp284.min.value;
    panda$core$Int64 i285 = { $tmp286 };
    int64_t $tmp288 = $tmp284.max.value;
    bool $tmp289 = $tmp284.inclusive.value;
    if ($tmp289) goto $l296; else goto $l297;
    $l296:;
    if ($tmp286 <= $tmp288) goto $l290; else goto $l292;
    $l297:;
    if ($tmp286 < $tmp288) goto $l290; else goto $l292;
    $l290:;
    {
        PANDA_ASSERT(((panda$core$Bit) { self->data[i285.value] == NULL }).value);
    }
    $l293:;
    int64_t $tmp299 = $tmp288 - i285.value;
    if ($tmp289) goto $l300; else goto $l301;
    $l300:;
    if ((uint64_t) $tmp299 >= 1) goto $l298; else goto $l292;
    $l301:;
    if ((uint64_t) $tmp299 > 1) goto $l298; else goto $l292;
    $l298:;
    i285.value += 1;
    goto $l290;
    $l292:;
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    panda$core$Int64 $finallyReturn303;
    $finallyReturn303 = self->count;
    return $finallyReturn303;
}
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp306;
    panda$core$Object* $tmp321;
    panda$core$Object** $tmp331;
    panda$core$Int64 $tmp332;
    panda$core$Object* $tmp333;
    panda$core$Int64 $tmp307 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp306, p_index, $tmp307, ((panda$core$Bit) { false }));
    int64_t $tmp309 = $tmp306.min.value;
    panda$core$Int64 i308 = { $tmp309 };
    int64_t $tmp311 = $tmp306.max.value;
    bool $tmp312 = $tmp306.inclusive.value;
    if ($tmp312) goto $l319; else goto $l320;
    $l319:;
    if ($tmp309 <= $tmp311) goto $l313; else goto $l315;
    $l320:;
    if ($tmp309 < $tmp311) goto $l313; else goto $l315;
    $l313:;
    {
        panda$core$Int64 $tmp322 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i308, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp323 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp322);
        $tmp321 = $tmp323;
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i308, $tmp321);
        panda$core$Panda$unref$panda$core$Object($tmp321);
    }
    $l316:;
    int64_t $tmp325 = $tmp311 - i308.value;
    if ($tmp312) goto $l326; else goto $l327;
    $l326:;
    if ((uint64_t) $tmp325 >= 1) goto $l324; else goto $l315;
    $l327:;
    if ((uint64_t) $tmp325 > 1) goto $l324; else goto $l315;
    $l324:;
    i308.value += 1;
    goto $l313;
    $l315:;
    panda$core$Int64 $tmp330 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp330;
    {
        $tmp331 = self->data;
        $tmp332 = self->count;
        panda$core$Panda$unref$panda$core$Object($tmp331[$tmp332.value]);
        $tmp333 = NULL;
        panda$core$Panda$ref$panda$core$Object($tmp333);
        $tmp331[$tmp332.value] = $tmp333;
    }
}
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$collections$Iterator* $finallyReturn333;
    panda$collections$Iterator* $tmp335;
    panda$collections$Array$ArrayIterator* $tmp336;
    panda$collections$Array$ArrayIterator* $tmp337 = (panda$collections$Array$ArrayIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$Array$ArrayIterator$class);
    panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT($tmp337, self);
    $tmp336 = $tmp337;
    $tmp335 = ((panda$collections$Iterator*) $tmp336);
    $finallyReturn333 = $tmp335;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp335));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp336));
    return $finallyReturn333;
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp339;
    panda$core$Object** $tmp353;
    panda$core$Int64 $tmp354;
    panda$core$Object* $tmp355;
    self->count = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp339, ((panda$core$Int64) { 0 }), self->capacity, ((panda$core$Bit) { false }));
    int64_t $tmp341 = $tmp339.min.value;
    panda$core$Int64 i340 = { $tmp341 };
    int64_t $tmp343 = $tmp339.max.value;
    bool $tmp344 = $tmp339.inclusive.value;
    if ($tmp344) goto $l351; else goto $l352;
    $l351:;
    if ($tmp341 <= $tmp343) goto $l345; else goto $l347;
    $l352:;
    if ($tmp341 < $tmp343) goto $l345; else goto $l347;
    $l345:;
    {
        {
            $tmp353 = self->data;
            $tmp354 = i340;
            panda$core$Panda$unref$panda$core$Object($tmp353[$tmp354.value]);
            $tmp355 = NULL;
            panda$core$Panda$ref$panda$core$Object($tmp355);
            $tmp353[$tmp354.value] = $tmp355;
        }
    }
    $l348:;
    int64_t $tmp357 = $tmp343 - i340.value;
    if ($tmp344) goto $l358; else goto $l359;
    $l358:;
    if ((uint64_t) $tmp357 >= 1) goto $l356; else goto $l347;
    $l359:;
    if ((uint64_t) $tmp357 > 1) goto $l356; else goto $l347;
    $l356:;
    i340.value += 1;
    goto $l345;
    $l347:;
}
panda$core$String* panda$collections$Array$join$R$panda$core$String(panda$collections$Array* self) {
    panda$core$String* $finallyReturn361;
    panda$core$String* $tmp363;
    panda$core$String* $tmp364;
    panda$core$String* $tmp366 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self, &$s365);
    $tmp364 = $tmp366;
    $tmp363 = $tmp364;
    $finallyReturn361 = $tmp363;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp363));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
    return $finallyReturn361;
}
panda$core$String* panda$collections$Array$join$panda$core$String$R$panda$core$String(panda$collections$Array* self, panda$core$String* p_separator) {
    panda$core$String* $finallyReturn371;
    panda$core$String* $tmp373;
    panda$core$MutableString* result377 = NULL;
    panda$core$MutableString* $tmp378;
    panda$core$MutableString* $tmp379;
    panda$core$String* $tmp381;
    panda$core$Object* $tmp382;
    panda$core$Range$LTpanda$core$Int64$GT $tmp386;
    panda$core$Object* $tmp400;
    panda$core$Object* $tmp402;
    panda$core$String* $finallyReturn410;
    panda$core$String* $tmp412;
    panda$core$String* $tmp413;
    int $tmp370;
    {
        panda$core$Bit $tmp371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
        if ($tmp371.value) {
        {
            $tmp373 = &$s374;
            $finallyReturn371 = $tmp373;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp373));
            $tmp370 = 0;
            goto $l368;
            $l375:;
            return $finallyReturn371;
        }
        }
        panda$core$MutableString* $tmp380 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Object* $tmp383 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, ((panda$core$Int64) { 0 }));
        $tmp382 = $tmp383;
        panda$core$String* $tmp385 = (($fn384) $tmp382->$class->vtable[0])($tmp382);
        $tmp381 = $tmp385;
        panda$core$MutableString$init$panda$core$String($tmp380, $tmp381);
        $tmp379 = $tmp380;
        $tmp378 = $tmp379;
        result377 = $tmp378;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
        panda$core$Panda$unref$panda$core$Object($tmp382);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp386, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
        int64_t $tmp388 = $tmp386.min.value;
        panda$core$Int64 i387 = { $tmp388 };
        int64_t $tmp390 = $tmp386.max.value;
        bool $tmp391 = $tmp386.inclusive.value;
        if ($tmp391) goto $l398; else goto $l399;
        $l398:;
        if ($tmp388 <= $tmp390) goto $l392; else goto $l394;
        $l399:;
        if ($tmp388 < $tmp390) goto $l392; else goto $l394;
        $l392:;
        {
            panda$core$MutableString$append$panda$core$String(result377, p_separator);
            panda$core$Object* $tmp401 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i387);
            $tmp400 = $tmp401;
            panda$core$Panda$unref$panda$core$Object($tmp400);
            if (((panda$core$Bit) { $tmp400 != NULL }).value) {
            {
                panda$core$Object* $tmp403 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i387);
                $tmp402 = $tmp403;
                panda$core$MutableString$append$panda$core$Object(result377, $tmp402);
                panda$core$Panda$unref$panda$core$Object($tmp402);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result377, &$s404);
            }
            }
        }
        $l395:;
        int64_t $tmp406 = $tmp390 - i387.value;
        if ($tmp391) goto $l407; else goto $l408;
        $l407:;
        if ((uint64_t) $tmp406 >= 1) goto $l405; else goto $l394;
        $l408:;
        if ((uint64_t) $tmp406 > 1) goto $l405; else goto $l394;
        $l405:;
        i387.value += 1;
        goto $l392;
        $l394:;
        panda$core$String* $tmp414 = panda$core$MutableString$finish$R$panda$core$String(result377);
        $tmp413 = $tmp414;
        $tmp412 = $tmp413;
        $finallyReturn410 = $tmp412;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp412));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp413));
        $tmp370 = 1;
        goto $l368;
        $l415:;
        return $finallyReturn410;
    }
    $l368:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result377));
    result377 = NULL;
    switch ($tmp370) {
        case 1: goto $l415;
        case 0: goto $l375;
    }
    $l417:;
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result421 = NULL;
    panda$core$MutableString* $tmp422;
    panda$core$MutableString* $tmp423;
    panda$core$Char8 $tmp425;
    panda$core$String* separator426 = NULL;
    panda$core$String* $tmp427;
    panda$collections$Iterator* Iter$283$9432 = NULL;
    panda$collections$Iterator* $tmp433;
    panda$collections$Iterator* $tmp434;
    panda$core$Object* v450 = NULL;
    panda$core$Object* $tmp451;
    panda$core$Object* $tmp452;
    panda$core$String* $tmp457;
    panda$core$String* $tmp458;
    panda$core$Char8 $tmp463;
    panda$core$String* $finallyReturn463;
    panda$core$String* $tmp465;
    panda$core$String* $tmp466;
    int $tmp420;
    {
        panda$core$MutableString* $tmp424 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp424);
        $tmp423 = $tmp424;
        $tmp422 = $tmp423;
        result421 = $tmp422;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp422));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
        panda$core$Char8$init$panda$core$UInt8(&$tmp425, ((panda$core$UInt8) { 91 }));
        panda$core$MutableString$append$panda$core$Char8(result421, $tmp425);
        $tmp427 = &$s428;
        separator426 = $tmp427;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp427));
        {
            int $tmp431;
            {
                ITable* $tmp435 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp435->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp435 = $tmp435->next;
                }
                $fn437 $tmp436 = $tmp435->methods[0];
                panda$collections$Iterator* $tmp438 = $tmp436(((panda$collections$Iterable*) self));
                $tmp434 = $tmp438;
                $tmp433 = $tmp434;
                Iter$283$9432 = $tmp433;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp433));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp434));
                $l439:;
                ITable* $tmp442 = Iter$283$9432->$class->itable;
                while ($tmp442->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp442 = $tmp442->next;
                }
                $fn444 $tmp443 = $tmp442->methods[0];
                panda$core$Bit $tmp445 = $tmp443(Iter$283$9432);
                panda$core$Bit $tmp446 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp445);
                bool $tmp441 = $tmp446.value;
                if (!$tmp441) goto $l440;
                {
                    int $tmp449;
                    {
                        ITable* $tmp453 = Iter$283$9432->$class->itable;
                        while ($tmp453->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp453 = $tmp453->next;
                        }
                        $fn455 $tmp454 = $tmp453->methods[1];
                        panda$core$Object* $tmp456 = $tmp454(Iter$283$9432);
                        $tmp452 = $tmp456;
                        $tmp451 = $tmp452;
                        v450 = $tmp451;
                        panda$core$Panda$ref$panda$core$Object($tmp451);
                        panda$core$Panda$unref$panda$core$Object($tmp452);
                        panda$core$MutableString$append$panda$core$String(result421, separator426);
                        {
                            $tmp457 = separator426;
                            $tmp458 = &$s459;
                            separator426 = $tmp458;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp458));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp457));
                        }
                        if (((panda$core$Bit) { v450 != NULL }).value) {
                        {
                            panda$core$MutableString$append$panda$core$Object(result421, v450);
                        }
                        }
                        else {
                        {
                            panda$core$MutableString$append$panda$core$String(result421, &$s460);
                        }
                        }
                    }
                    $tmp449 = -1;
                    goto $l447;
                    $l447:;
                    panda$core$Panda$unref$panda$core$Object(v450);
                    v450 = NULL;
                    switch ($tmp449) {
                        case -1: goto $l461;
                    }
                    $l461:;
                }
                goto $l439;
                $l440:;
            }
            $tmp431 = -1;
            goto $l429;
            $l429:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$283$9432));
            Iter$283$9432 = NULL;
            switch ($tmp431) {
                case -1: goto $l462;
            }
            $l462:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp463, ((panda$core$UInt8) { 93 }));
        panda$core$MutableString$append$panda$core$Char8(result421, $tmp463);
        panda$core$String* $tmp467 = panda$core$MutableString$finish$R$panda$core$String(result421);
        $tmp466 = $tmp467;
        $tmp465 = $tmp466;
        $finallyReturn463 = $tmp465;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp465));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp466));
        $tmp420 = 0;
        goto $l418;
        $l468:;
        return $finallyReturn463;
    }
    $l418:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result421));
    result421 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator426));
    separator426 = NULL;
    switch ($tmp420) {
        case 0: goto $l468;
    }
    $l470:;
}
panda$collections$ImmutableArray* panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$core$Class* $tmp471;
    panda$core$Class* $tmp472;
    panda$collections$ImmutableArray* $tmp473;
    panda$collections$ImmutableArray* $finallyReturn474;
    panda$collections$ImmutableArray* $tmp476;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, self->capacity.value * 8, self->count.value * 8));
    {
        $tmp471 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableArray* $tmp474 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp474);
        $tmp473 = $tmp474;
        $tmp472 = ((panda$core$Object*) $tmp473)->$class;
        ((panda$core$Object*) self)->$class = $tmp472;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp472));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp473));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp471));
    }
    self->capacity = ((panda$core$Int64) { -1 });
    $tmp476 = ((panda$collections$ImmutableArray*) ((panda$core$Object*) self));
    $finallyReturn474 = $tmp476;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp476));
    return $finallyReturn474;
}

