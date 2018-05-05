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
typedef panda$collections$Iterator* (*$fn32)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn39)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn47)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn219)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn227)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn234)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn242)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn348)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn393)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn400)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn408)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

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
    panda$collections$Iterator* Iter$53$927;
    panda$core$Object* v42;
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
        ITable* $tmp30 = ((panda$collections$Iterable*) p_list)->$class->itable;
        while ($tmp30->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp30 = $tmp30->next;
        }
        $fn32 $tmp31 = $tmp30->methods[0];
        panda$collections$Iterator* $tmp33 = $tmp31(((panda$collections$Iterable*) p_list));
        panda$collections$Iterator* $tmp29 = $tmp33;
        panda$collections$Iterator* $tmp28 = $tmp29;
        Iter$53$927 = $tmp28;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
        $l34:;
        ITable* $tmp37 = Iter$53$927->$class->itable;
        while ($tmp37->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp37 = $tmp37->next;
        }
        $fn39 $tmp38 = $tmp37->methods[0];
        panda$core$Bit $tmp40 = $tmp38(Iter$53$927);
        panda$core$Bit $tmp41 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp40);
        bool $tmp36 = $tmp41.value;
        if (!$tmp36) goto $l35;
        {
            ITable* $tmp45 = Iter$53$927->$class->itable;
            while ($tmp45->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp45 = $tmp45->next;
            }
            $fn47 $tmp46 = $tmp45->methods[1];
            panda$core$Object* $tmp48 = $tmp46(Iter$53$927);
            panda$core$Object* $tmp44 = $tmp48;
            panda$core$Object* $tmp43 = $tmp44;
            v42 = $tmp43;
            panda$core$Panda$ref$panda$core$Object($tmp43);
            panda$core$Panda$unref$panda$core$Object($tmp44);
            panda$collections$Array$add$panda$collections$Array$T(self, v42);
            panda$core$Panda$unref$panda$core$Object(v42);
        }
        goto $l34;
        $l35:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$53$927));
    }
}
void panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64(panda$collections$Array* self, panda$core$Object** p_data, panda$core$Int64 p_count) {
    self->count = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->count = p_count;
    self->capacity = p_count;
}
void panda$collections$Array$cleanup(panda$collections$Array* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp49;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp49, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp51 = $tmp49.min.value;
    panda$core$Int64 i50 = { $tmp51 };
    int64_t $tmp53 = $tmp49.max.value;
    bool $tmp54 = $tmp49.inclusive.value;
    if ($tmp54) goto $l61; else goto $l62;
    $l61:;
    if ($tmp51 <= $tmp53) goto $l55; else goto $l57;
    $l62:;
    if ($tmp51 < $tmp53) goto $l55; else goto $l57;
    $l55:;
    {
        if (((panda$core$Bit) { self->data[i50.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(self->data[i50.value]);
        }
        }
    }
    $l58:;
    int64_t $tmp64 = $tmp53 - i50.value;
    if ($tmp54) goto $l65; else goto $l66;
    $l65:;
    if ((uint64_t) $tmp64 >= 1) goto $l63; else goto $l57;
    $l66:;
    if ((uint64_t) $tmp64 > 1) goto $l63; else goto $l57;
    $l63:;
    i50.value += 1;
    goto $l55;
    $l57:;
    pandaFree(self->data);
    panda$core$Object$cleanup(((panda$core$Object*) self));
}
panda$core$Object* panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Bit $tmp70 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp69 = $tmp70.value;
    if (!$tmp69) goto $l71;
    panda$core$Bit $tmp72 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp69 = $tmp72.value;
    $l71:;
    panda$core$Bit $tmp73 = { $tmp69 };
    PANDA_ASSERT($tmp73.value);
    panda$core$Object* $tmp75 = self->data[p_index.value];
    panda$core$Object* $tmp74 = $tmp75;
    panda$core$Panda$ref$panda$core$Object($tmp75);
    return $tmp74;
}
void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$Bit $tmp77 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp76 = $tmp77.value;
    if (!$tmp76) goto $l78;
    panda$core$Bit $tmp79 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp76 = $tmp79.value;
    $l78:;
    panda$core$Bit $tmp80 = { $tmp76 };
    PANDA_ASSERT($tmp80.value);
    {
        panda$core$Object** $tmp81 = self->data;
        panda$core$Int64 $tmp82 = p_index;
        panda$core$Panda$unref$panda$core$Object($tmp81[$tmp82.value]);
        panda$core$Object* $tmp83 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp83);
        $tmp81[$tmp82.value] = $tmp83;
    }
}
void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp85;
    panda$core$Int64 $tmp84 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp84);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp85, self->count, p_index, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp87 = $tmp85.start.value;
    panda$core$Int64 i86 = { $tmp87 };
    int64_t $tmp89 = $tmp85.end.value;
    int64_t $tmp90 = $tmp85.step.value;
    bool $tmp91 = $tmp85.inclusive.value;
    bool $tmp98 = $tmp90 > 0;
    if ($tmp98) goto $l96; else goto $l97;
    $l96:;
    if ($tmp91) goto $l99; else goto $l100;
    $l99:;
    if ($tmp87 <= $tmp89) goto $l92; else goto $l94;
    $l100:;
    if ($tmp87 < $tmp89) goto $l92; else goto $l94;
    $l97:;
    if ($tmp91) goto $l101; else goto $l102;
    $l101:;
    if ($tmp87 >= $tmp89) goto $l92; else goto $l94;
    $l102:;
    if ($tmp87 > $tmp89) goto $l92; else goto $l94;
    $l92:;
    {
        {
            panda$core$Object** $tmp104 = self->data;
            panda$core$Int64 $tmp105 = i86;
            panda$core$Panda$unref$panda$core$Object($tmp104[$tmp105.value]);
            panda$core$Int64 $tmp107 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i86, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp106 = self->data[$tmp107.value];
            panda$core$Panda$ref$panda$core$Object($tmp106);
            $tmp104[$tmp105.value] = $tmp106;
        }
    }
    $l95:;
    if ($tmp98) goto $l109; else goto $l110;
    $l109:;
    int64_t $tmp111 = $tmp89 - i86.value;
    if ($tmp91) goto $l112; else goto $l113;
    $l112:;
    if ((uint64_t) $tmp111 >= $tmp90) goto $l108; else goto $l94;
    $l113:;
    if ((uint64_t) $tmp111 > $tmp90) goto $l108; else goto $l94;
    $l110:;
    int64_t $tmp115 = i86.value - $tmp89;
    if ($tmp91) goto $l116; else goto $l117;
    $l116:;
    if ((uint64_t) $tmp115 >= -$tmp90) goto $l108; else goto $l94;
    $l117:;
    if ((uint64_t) $tmp115 > -$tmp90) goto $l108; else goto $l94;
    $l108:;
    i86.value += $tmp90;
    goto $l92;
    $l94:;
    panda$core$Int64 $tmp119 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp119;
    {
        panda$core$Object** $tmp120 = self->data;
        panda$core$Int64 $tmp121 = p_index;
        panda$core$Panda$unref$panda$core$Object($tmp120[$tmp121.value]);
        panda$core$Object* $tmp122 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp122);
        $tmp120[$tmp121.value] = $tmp122;
    }
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max123;
    panda$core$Int64 count125;
    panda$core$Object** result127;
    panda$core$Range$LTpanda$core$Int64$GT $tmp128;
    max123 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp124 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max123, ((panda$core$Int64) { 1 }));
        max123 = $tmp124;
    }
    }
    panda$core$Int64 $tmp126 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max123, p_r.min);
    count125 = $tmp126;
    result127 = ((panda$core$Object**) pandaZAlloc(count125.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp128, ((panda$core$Int64) { 0 }), count125, ((panda$core$Bit) { false }));
    int64_t $tmp130 = $tmp128.min.value;
    panda$core$Int64 i129 = { $tmp130 };
    int64_t $tmp132 = $tmp128.max.value;
    bool $tmp133 = $tmp128.inclusive.value;
    if ($tmp133) goto $l140; else goto $l141;
    $l140:;
    if ($tmp130 <= $tmp132) goto $l134; else goto $l136;
    $l141:;
    if ($tmp130 < $tmp132) goto $l134; else goto $l136;
    $l134:;
    {
        {
            panda$core$Object** $tmp142 = result127;
            panda$core$Int64 $tmp143 = i129;
            panda$core$Panda$unref$panda$core$Object($tmp142[$tmp143.value]);
            panda$core$Int64 $tmp146 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i129);
            panda$core$Object* $tmp147 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp146);
            panda$core$Object* $tmp145 = $tmp147;
            panda$core$Object* $tmp144 = $tmp145;
            panda$core$Panda$ref$panda$core$Object($tmp144);
            panda$core$Panda$unref$panda$core$Object($tmp145);
            $tmp142[$tmp143.value] = $tmp144;
        }
    }
    $l137:;
    int64_t $tmp149 = $tmp132 - i129.value;
    if ($tmp133) goto $l150; else goto $l151;
    $l150:;
    if ((uint64_t) $tmp149 >= 1) goto $l148; else goto $l136;
    $l151:;
    if ((uint64_t) $tmp149 > 1) goto $l148; else goto $l136;
    $l148:;
    i129.value += 1;
    goto $l134;
    $l136:;
    panda$collections$Array* $tmp157 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64($tmp157, result127, count125);
    panda$collections$Array* $tmp156 = $tmp157;
    panda$collections$Array* $tmp155 = $tmp156;
    panda$collections$Array* $tmp154 = $tmp155;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
    return $tmp154;
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start158;
    panda$core$Int64 end159;
    panda$core$Range$LTpanda$core$Int64$GT $tmp165;
    memset(&start158, 0, sizeof(start158));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start158 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start158 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end159, 0, sizeof(end159));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end159 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp160 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        end159 = $tmp160;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp161 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end159, ((panda$core$Int64) { 1 }));
            end159 = $tmp161;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp165, start158, end159, p_r.inclusive);
    panda$collections$Array* $tmp166 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(self, $tmp165);
    panda$collections$Array* $tmp164 = $tmp166;
    panda$collections$Array* $tmp163 = $tmp164;
    panda$collections$Array* $tmp162 = $tmp163;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp163));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
    return $tmp162;
}
panda$collections$Array* panda$collections$Array$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step167;
    panda$core$Int64 current168;
    panda$core$Int64 end172;
    panda$collections$Array* result175;
    panda$collections$Array* tmp1209;
    step167 = p_r.step;
    memset(&current168, 0, sizeof(current168));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current168 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp169 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step167, ((panda$core$Int64) { 0 }));
    if ($tmp169.value) {
    {
        current168 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp170 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp171 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp170, ((panda$core$Int64) { 1 }));
        current168 = $tmp171;
    }
    }
    }
    memset(&end172, 0, sizeof(end172));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end172 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp173 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step167, ((panda$core$Int64) { 0 }));
    if ($tmp173.value) {
    {
        panda$core$Int64 $tmp174 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        end172 = $tmp174;
    }
    }
    else {
    {
        end172 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$Array* $tmp178 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp178);
    panda$collections$Array* $tmp177 = $tmp178;
    panda$collections$Array* $tmp176 = $tmp177;
    result175 = $tmp176;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp176));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
    panda$core$Bit $tmp179 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp179.value) {
    {
        $l180:;
        panda$core$Bit $tmp183 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current168, end172);
        bool $tmp182 = $tmp183.value;
        if (!$tmp182) goto $l181;
        {
            panda$core$Object* $tmp185 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current168);
            panda$core$Object* $tmp184 = $tmp185;
            panda$collections$Array$add$panda$collections$Array$T(result175, $tmp184);
            panda$core$Panda$unref$panda$core$Object($tmp184);
            panda$core$Int64 $tmp186 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current168, step167);
            current168 = $tmp186;
        }
        goto $l180;
        $l181:;
    }
    }
    else {
    {
        panda$core$Bit $tmp187 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp187.value);
        $l188:;
        panda$core$Bit $tmp191 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current168, end172);
        bool $tmp190 = $tmp191.value;
        if (!$tmp190) goto $l189;
        {
            panda$core$Object* $tmp193 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current168);
            panda$core$Object* $tmp192 = $tmp193;
            panda$collections$Array$add$panda$collections$Array$T(result175, $tmp192);
            panda$core$Panda$unref$panda$core$Object($tmp192);
            panda$core$Int64 $tmp194 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current168, step167);
            current168 = $tmp194;
        }
        goto $l188;
        $l189:;
    }
    }
    bool $tmp197 = p_r.inclusive.value;
    if ($tmp197) goto $l198;
    $tmp197 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l198:;
    panda$core$Bit $tmp199 = { $tmp197 };
    bool $tmp196 = $tmp199.value;
    if (!$tmp196) goto $l200;
    panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current168, end172);
    $tmp196 = $tmp201.value;
    $l200:;
    panda$core$Bit $tmp202 = { $tmp196 };
    bool $tmp195 = $tmp202.value;
    if (!$tmp195) goto $l203;
    panda$core$Int64 $tmp204 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp205 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end172, $tmp204);
    $tmp195 = $tmp205.value;
    $l203:;
    panda$core$Bit $tmp206 = { $tmp195 };
    if ($tmp206.value) {
    {
        panda$core$Object* $tmp208 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, current168);
        panda$core$Object* $tmp207 = $tmp208;
        panda$collections$Array$add$panda$collections$Array$T(result175, $tmp207);
        panda$core$Panda$unref$panda$core$Object($tmp207);
    }
    }
    {
        panda$collections$Array* $tmp210 = result175;
        tmp1209 = $tmp210;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp210));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result175));
        panda$collections$Array* $tmp211 = tmp1209;
        return $tmp211;
    }
}
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Int64 $tmp212 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp212);
    {
        panda$core$Object** $tmp213 = self->data;
        panda$core$Int64 $tmp214 = self->count;
        panda$core$Panda$unref$panda$core$Object($tmp213[$tmp214.value]);
        panda$core$Object* $tmp215 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp215);
        $tmp213[$tmp214.value] = $tmp215;
    }
    panda$core$Int64 $tmp216 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp216;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$209$9222;
    panda$core$Object* v237;
    ITable* $tmp217 = p_c->$class->itable;
    while ($tmp217->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp217 = $tmp217->next;
    }
    $fn219 $tmp218 = $tmp217->methods[0];
    panda$core$Int64 $tmp220 = $tmp218(p_c);
    panda$core$Int64 $tmp221 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp220);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp221);
    {
        ITable* $tmp225 = ((panda$collections$Iterable*) p_c)->$class->itable;
        while ($tmp225->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp225 = $tmp225->next;
        }
        $fn227 $tmp226 = $tmp225->methods[0];
        panda$collections$Iterator* $tmp228 = $tmp226(((panda$collections$Iterable*) p_c));
        panda$collections$Iterator* $tmp224 = $tmp228;
        panda$collections$Iterator* $tmp223 = $tmp224;
        Iter$209$9222 = $tmp223;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
        $l229:;
        ITable* $tmp232 = Iter$209$9222->$class->itable;
        while ($tmp232->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp232 = $tmp232->next;
        }
        $fn234 $tmp233 = $tmp232->methods[0];
        panda$core$Bit $tmp235 = $tmp233(Iter$209$9222);
        panda$core$Bit $tmp236 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp235);
        bool $tmp231 = $tmp236.value;
        if (!$tmp231) goto $l230;
        {
            ITable* $tmp240 = Iter$209$9222->$class->itable;
            while ($tmp240->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp240 = $tmp240->next;
            }
            $fn242 $tmp241 = $tmp240->methods[1];
            panda$core$Object* $tmp243 = $tmp241(Iter$209$9222);
            panda$core$Object* $tmp239 = $tmp243;
            panda$core$Object* $tmp238 = $tmp239;
            v237 = $tmp238;
            panda$core$Panda$ref$panda$core$Object($tmp238);
            panda$core$Panda$unref$panda$core$Object($tmp239);
            {
                panda$core$Object** $tmp244 = self->data;
                panda$core$Int64 $tmp245 = self->count;
                panda$core$Panda$unref$panda$core$Object($tmp244[$tmp245.value]);
                panda$core$Object* $tmp246 = v237;
                panda$core$Panda$ref$panda$core$Object($tmp246);
                $tmp244[$tmp245.value] = $tmp246;
            }
            panda$core$Int64 $tmp247 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
            self->count = $tmp247;
            panda$core$Panda$unref$panda$core$Object(v237);
        }
        goto $l229;
        $l230:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$209$9222));
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 oldCapacity250;
    panda$core$Range$LTpanda$core$Int64$GT $tmp256;
    panda$core$Bit $tmp248 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp248.value);
    panda$core$Bit $tmp249 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp249.value) {
    {
        return;
    }
    }
    oldCapacity250 = self->capacity;
    $l251:;
    panda$core$Bit $tmp254 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp253 = $tmp254.value;
    if (!$tmp253) goto $l252;
    {
        panda$core$Int64 $tmp255 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp255;
    }
    goto $l251;
    $l252:;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, oldCapacity250.value * 8, self->capacity.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp256, oldCapacity250, self->capacity, ((panda$core$Bit) { false }));
    int64_t $tmp258 = $tmp256.min.value;
    panda$core$Int64 i257 = { $tmp258 };
    int64_t $tmp260 = $tmp256.max.value;
    bool $tmp261 = $tmp256.inclusive.value;
    if ($tmp261) goto $l268; else goto $l269;
    $l268:;
    if ($tmp258 <= $tmp260) goto $l262; else goto $l264;
    $l269:;
    if ($tmp258 < $tmp260) goto $l262; else goto $l264;
    $l262:;
    {
        PANDA_ASSERT(((panda$core$Bit) { self->data[i257.value] == NULL }).value);
    }
    $l265:;
    int64_t $tmp271 = $tmp260 - i257.value;
    if ($tmp261) goto $l272; else goto $l273;
    $l272:;
    if ((uint64_t) $tmp271 >= 1) goto $l270; else goto $l264;
    $l273:;
    if ((uint64_t) $tmp271 > 1) goto $l270; else goto $l264;
    $l270:;
    i257.value += 1;
    goto $l262;
    $l264:;
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    panda$core$Int64 $tmp276 = self->count;
    return $tmp276;
}
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp277;
    panda$core$Int64 $tmp278 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp277, p_index, $tmp278, ((panda$core$Bit) { false }));
    int64_t $tmp280 = $tmp277.min.value;
    panda$core$Int64 i279 = { $tmp280 };
    int64_t $tmp282 = $tmp277.max.value;
    bool $tmp283 = $tmp277.inclusive.value;
    if ($tmp283) goto $l290; else goto $l291;
    $l290:;
    if ($tmp280 <= $tmp282) goto $l284; else goto $l286;
    $l291:;
    if ($tmp280 < $tmp282) goto $l284; else goto $l286;
    $l284:;
    {
        panda$core$Int64 $tmp293 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i279, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp294 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp293);
        panda$core$Object* $tmp292 = $tmp294;
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i279, $tmp292);
        panda$core$Panda$unref$panda$core$Object($tmp292);
    }
    $l287:;
    int64_t $tmp296 = $tmp282 - i279.value;
    if ($tmp283) goto $l297; else goto $l298;
    $l297:;
    if ((uint64_t) $tmp296 >= 1) goto $l295; else goto $l286;
    $l298:;
    if ((uint64_t) $tmp296 > 1) goto $l295; else goto $l286;
    $l295:;
    i279.value += 1;
    goto $l284;
    $l286:;
    panda$core$Int64 $tmp301 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp301;
    {
        panda$core$Object** $tmp302 = self->data;
        panda$core$Int64 $tmp303 = self->count;
        panda$core$Panda$unref$panda$core$Object($tmp302[$tmp303.value]);
        panda$core$Object* $tmp304 = NULL;
        panda$core$Panda$ref$panda$core$Object($tmp304);
        $tmp302[$tmp303.value] = $tmp304;
    }
}
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$collections$Array$ArrayIterator* $tmp308 = (panda$collections$Array$ArrayIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$Array$ArrayIterator$class);
    panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT($tmp308, self);
    panda$collections$Array$ArrayIterator* $tmp307 = $tmp308;
    panda$collections$Iterator* $tmp306 = ((panda$collections$Iterator*) $tmp307);
    panda$collections$Iterator* $tmp305 = $tmp306;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
    return $tmp305;
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp309;
    self->count = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp309, ((panda$core$Int64) { 0 }), self->capacity, ((panda$core$Bit) { false }));
    int64_t $tmp311 = $tmp309.min.value;
    panda$core$Int64 i310 = { $tmp311 };
    int64_t $tmp313 = $tmp309.max.value;
    bool $tmp314 = $tmp309.inclusive.value;
    if ($tmp314) goto $l321; else goto $l322;
    $l321:;
    if ($tmp311 <= $tmp313) goto $l315; else goto $l317;
    $l322:;
    if ($tmp311 < $tmp313) goto $l315; else goto $l317;
    $l315:;
    {
        {
            panda$core$Object** $tmp323 = self->data;
            panda$core$Int64 $tmp324 = i310;
            panda$core$Panda$unref$panda$core$Object($tmp323[$tmp324.value]);
            panda$core$Object* $tmp325 = NULL;
            panda$core$Panda$ref$panda$core$Object($tmp325);
            $tmp323[$tmp324.value] = $tmp325;
        }
    }
    $l318:;
    int64_t $tmp327 = $tmp313 - i310.value;
    if ($tmp314) goto $l328; else goto $l329;
    $l328:;
    if ((uint64_t) $tmp327 >= 1) goto $l326; else goto $l317;
    $l329:;
    if ((uint64_t) $tmp327 > 1) goto $l326; else goto $l317;
    $l326:;
    i310.value += 1;
    goto $l315;
    $l317:;
}
panda$core$String* panda$collections$Array$join$R$panda$core$String(panda$collections$Array* self) {
    panda$core$String* $tmp336 = panda$collections$Array$join$panda$core$String$R$panda$core$String(self, &$s335);
    panda$core$String* $tmp334 = $tmp336;
    panda$core$String* $tmp333 = $tmp334;
    panda$core$String* $tmp332 = $tmp333;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp333));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp334));
    return $tmp332;
}
panda$core$String* panda$collections$Array$join$panda$core$String$R$panda$core$String(panda$collections$Array* self, panda$core$String* p_separator) {
    panda$core$MutableString* result341;
    panda$core$Range$LTpanda$core$Int64$GT $tmp350;
    panda$core$String* tmp2375;
    panda$core$Bit $tmp337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp337.value) {
    {
        panda$core$String* $tmp339 = &$s340;
        panda$core$String* $tmp338 = $tmp339;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp339));
        return $tmp338;
    }
    }
    panda$core$MutableString* $tmp344 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$Object* $tmp347 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp346 = $tmp347;
    panda$core$String* $tmp349 = (($fn348) $tmp346->$class->vtable[0])($tmp346);
    panda$core$String* $tmp345 = $tmp349;
    panda$core$MutableString$init$panda$core$String($tmp344, $tmp345);
    panda$core$MutableString* $tmp343 = $tmp344;
    panda$core$MutableString* $tmp342 = $tmp343;
    result341 = $tmp342;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp342));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp345));
    panda$core$Panda$unref$panda$core$Object($tmp346);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp350, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp352 = $tmp350.min.value;
    panda$core$Int64 i351 = { $tmp352 };
    int64_t $tmp354 = $tmp350.max.value;
    bool $tmp355 = $tmp350.inclusive.value;
    if ($tmp355) goto $l362; else goto $l363;
    $l362:;
    if ($tmp352 <= $tmp354) goto $l356; else goto $l358;
    $l363:;
    if ($tmp352 < $tmp354) goto $l356; else goto $l358;
    $l356:;
    {
        panda$core$MutableString$append$panda$core$String(result341, p_separator);
        panda$core$Object* $tmp365 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i351);
        panda$core$Object* $tmp364 = $tmp365;
        panda$core$Panda$unref$panda$core$Object($tmp364);
        if (((panda$core$Bit) { $tmp364 != NULL }).value) {
        {
            panda$core$Object* $tmp367 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, i351);
            panda$core$Object* $tmp366 = $tmp367;
            panda$core$MutableString$append$panda$core$Object(result341, $tmp366);
            panda$core$Panda$unref$panda$core$Object($tmp366);
        }
        }
        else {
        {
            panda$core$MutableString$append$panda$core$String(result341, &$s368);
        }
        }
    }
    $l359:;
    int64_t $tmp370 = $tmp354 - i351.value;
    if ($tmp355) goto $l371; else goto $l372;
    $l371:;
    if ((uint64_t) $tmp370 >= 1) goto $l369; else goto $l358;
    $l372:;
    if ((uint64_t) $tmp370 > 1) goto $l369; else goto $l358;
    $l369:;
    i351.value += 1;
    goto $l356;
    $l358:;
    {
        panda$core$String* $tmp378 = panda$core$MutableString$finish$R$panda$core$String(result341);
        panda$core$String* $tmp377 = $tmp378;
        panda$core$String* $tmp376 = $tmp377;
        tmp2375 = $tmp376;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp376));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result341));
        panda$core$String* $tmp379 = tmp2375;
        return $tmp379;
    }
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result380;
    panda$core$Char8 $tmp384;
    panda$core$String* separator385;
    panda$collections$Iterator* Iter$283$9388;
    panda$core$Object* v403;
    panda$core$Char8 $tmp414;
    panda$core$String* tmp3415;
    panda$core$MutableString* $tmp383 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp383);
    panda$core$MutableString* $tmp382 = $tmp383;
    panda$core$MutableString* $tmp381 = $tmp382;
    result380 = $tmp381;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp381));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp382));
    panda$core$Char8$init$panda$core$UInt8(&$tmp384, ((panda$core$UInt8) { 91 }));
    panda$core$MutableString$append$panda$core$Char8(result380, $tmp384);
    panda$core$String* $tmp386 = &$s387;
    separator385 = $tmp386;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
    {
        ITable* $tmp391 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp391->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp391 = $tmp391->next;
        }
        $fn393 $tmp392 = $tmp391->methods[0];
        panda$collections$Iterator* $tmp394 = $tmp392(((panda$collections$Iterable*) self));
        panda$collections$Iterator* $tmp390 = $tmp394;
        panda$collections$Iterator* $tmp389 = $tmp390;
        Iter$283$9388 = $tmp389;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp389));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp390));
        $l395:;
        ITable* $tmp398 = Iter$283$9388->$class->itable;
        while ($tmp398->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp398 = $tmp398->next;
        }
        $fn400 $tmp399 = $tmp398->methods[0];
        panda$core$Bit $tmp401 = $tmp399(Iter$283$9388);
        panda$core$Bit $tmp402 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp401);
        bool $tmp397 = $tmp402.value;
        if (!$tmp397) goto $l396;
        {
            ITable* $tmp406 = Iter$283$9388->$class->itable;
            while ($tmp406->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp406 = $tmp406->next;
            }
            $fn408 $tmp407 = $tmp406->methods[1];
            panda$core$Object* $tmp409 = $tmp407(Iter$283$9388);
            panda$core$Object* $tmp405 = $tmp409;
            panda$core$Object* $tmp404 = $tmp405;
            v403 = $tmp404;
            panda$core$Panda$ref$panda$core$Object($tmp404);
            panda$core$Panda$unref$panda$core$Object($tmp405);
            panda$core$MutableString$append$panda$core$String(result380, separator385);
            {
                panda$core$String* $tmp410 = separator385;
                panda$core$String* $tmp411 = &$s412;
                separator385 = $tmp411;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp411));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp410));
            }
            if (((panda$core$Bit) { v403 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result380, v403);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result380, &$s413);
            }
            }
            panda$core$Panda$unref$panda$core$Object(v403);
        }
        goto $l395;
        $l396:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$283$9388));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp414, ((panda$core$UInt8) { 93 }));
    panda$core$MutableString$append$panda$core$Char8(result380, $tmp414);
    {
        panda$core$String* $tmp418 = panda$core$MutableString$finish$R$panda$core$String(result380);
        panda$core$String* $tmp417 = $tmp418;
        panda$core$String* $tmp416 = $tmp417;
        tmp3415 = $tmp416;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp416));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator385));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result380));
        }
        panda$core$String* $tmp419 = tmp3415;
        return $tmp419;
    }
}
panda$collections$ImmutableArray* panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    self->data = ((panda$core$Object**) pandaRealloc(self->data, self->capacity.value * 8, self->count.value * 8));
    {
        panda$core$Class* $tmp420 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableArray* $tmp423 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp423);
        panda$collections$ImmutableArray* $tmp422 = $tmp423;
        panda$core$Class* $tmp421 = ((panda$core$Object*) $tmp422)->$class;
        ((panda$core$Object*) self)->$class = $tmp421;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp421));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp420));
    }
    self->capacity = ((panda$core$Int64) { -1 });
    panda$collections$ImmutableArray* $tmp425 = ((panda$collections$ImmutableArray*) ((panda$core$Object*) self));
    panda$collections$ImmutableArray* $tmp424 = $tmp425;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp425));
    return $tmp424;
}

