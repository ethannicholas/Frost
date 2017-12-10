#include "panda/collections/IdentityMap.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/Map.h"
#include "panda/collections/MapView.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/MapWriter.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Panda.h"
#include "panda/collections/IdentityMap/Entry.h"
#include "panda/core/String.h"
#include "panda/core/MutableString.h"
panda$core$Object* panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim(panda$collections$IdentityMap* self, panda$core$Object* p0) {
    panda$core$Object* result = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self, p0);
    return result;
}
panda$collections$Iterator* panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim(panda$collections$IdentityMap* self) {
    panda$collections$Iterator* result = panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT(self);
    return result;
}
panda$collections$Iterator* panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim(panda$collections$IdentityMap* self) {
    panda$collections$Iterator* result = panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT(self);
    return result;
}
panda$core$Bit panda$collections$IdentityMap$$EQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim(panda$collections$IdentityMap* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$collections$IdentityMap$$EQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit(self, ((panda$collections$Map*) p0));
    return result;
}
panda$core$Bit panda$collections$IdentityMap$$NEQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim(panda$collections$IdentityMap* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$collections$IdentityMap$$NEQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit(self, ((panda$collections$Map*) p0));
    return result;
}
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim(panda$collections$IdentityMap* self, panda$core$Object* p0, panda$core$Object* p1) {
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self, p0, p1);
}


struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$IdentityMap$_panda$collections$Map = { (panda$core$Class*) &panda$collections$Map$class, NULL, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$IdentityMap$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$Map, { panda$collections$IdentityMap$get_count$R$panda$core$Int64, panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim, panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim, panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$IdentityMap$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$MapView, { panda$collections$IdentityMap$$EQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim, panda$collections$IdentityMap$$NEQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$IdentityMap$_panda$collections$MapWriter = { (panda$core$Class*) &panda$collections$MapWriter$class, (ITable*) &panda$collections$IdentityMap$_panda$core$Equatable, { panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim} };

panda$collections$IdentityMap$class_type panda$collections$IdentityMap$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$MapWriter, { panda$collections$IdentityMap$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64, panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim, panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit, panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim, panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K, panda$collections$IdentityMap$clear, panda$collections$IdentityMap$incrementCount, panda$collections$IdentityMap$get_count$R$panda$core$Int64, panda$collections$IdentityMap$$EQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim, panda$collections$IdentityMap$$NEQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim, panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim, panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim} };


static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };

void panda$collections$IdentityMap$init(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp2;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp1;
    self->_count = ((panda$core$Int64) { 0 });
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$IdentityMap$Entry**) malloc(self->bucketCount.value * 40));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp4 = $tmp2.min.value;
    panda$core$Int64 i3 = { $tmp4 };
    int64_t $tmp6 = $tmp2.max.value;
    bool $tmp7 = $tmp2.inclusive.value;
    bool $tmp14 = 1 > 0;
    if ($tmp14) goto $l12; else goto $l13;
    $l12:;
    if ($tmp7) goto $l15; else goto $l16;
    $l15:;
    if ($tmp4 <= $tmp6) goto $l8; else goto $l10;
    $l16:;
    if ($tmp4 < $tmp6) goto $l8; else goto $l10;
    $l13:;
    if ($tmp7) goto $l17; else goto $l18;
    $l17:;
    if ($tmp4 >= $tmp6) goto $l8; else goto $l10;
    $l18:;
    if ($tmp4 > $tmp6) goto $l8; else goto $l10;
    $l8:;
    {
        self->contents[i3.value] = NULL;
    }
    $l11:;
    if ($tmp14) goto $l21; else goto $l22;
    $l21:;
    int64_t $tmp23 = $tmp6 - i3.value;
    if ($tmp7) goto $l24; else goto $l25;
    $l24:;
    if ($tmp23 >= 1) goto $l20; else goto $l10;
    $l25:;
    if ($tmp23 > 1) goto $l20; else goto $l10;
    $l22:;
    int64_t $tmp27 = i3.value - $tmp6;
    if ($tmp7) goto $l28; else goto $l29;
    $l28:;
    if ($tmp27 >= -1) goto $l20; else goto $l10;
    $l29:;
    if ($tmp27 > -1) goto $l20; else goto $l10;
    $l20:;
    i3.value += 1;
    goto $l8;
    $l10:;
    panda$core$Int64 $tmp31 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp32 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp31, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp32;
}
panda$core$Int64 panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 $tmp33;
    panda$core$Panda$addressOf$panda$core$Object$R$panda$core$Int64(&$tmp33, p_key);
    panda$core$Int64 $tmp34 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp33, self->bucketCount);
    return $tmp34;
}
panda$core$Object* panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index35;
    panda$collections$IdentityMap$Entry* e37;
    panda$core$Int64 $tmp36 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index35 = $tmp36;
    e37 = self->contents[index35.value];
    $l38:;
    bool $tmp40 = ((panda$core$Bit) { e37 != NULL }).value;
    if (!$tmp40) goto $l41;
    $tmp40 = ((panda$core$Bit) { e37->key != p_key }).value;
    $l41:;
    panda$core$Bit $tmp42 = { $tmp40 };
    if (!$tmp42.value) goto $l39;
    {
        e37 = e37->next;
    }
    goto $l38;
    $l39:;
    if (((panda$core$Bit) { e37 != NULL }).value) {
    {
        return e37->value;
    }
    }
    else {
    {
        return NULL;
    }
    }
}
panda$core$Bit panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index43;
    panda$collections$IdentityMap$Entry* e45;
    panda$core$Int64 $tmp44 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index43 = $tmp44;
    e45 = self->contents[index43.value];
    $l46:;
    bool $tmp48 = ((panda$core$Bit) { e45 != NULL }).value;
    if (!$tmp48) goto $l49;
    $tmp48 = ((panda$core$Bit) { e45->key != p_key }).value;
    $l49:;
    panda$core$Bit $tmp50 = { $tmp48 };
    if (!$tmp50.value) goto $l47;
    {
        e45 = e45->next;
    }
    goto $l46;
    $l47:;
    return ((panda$core$Bit) { e45 != NULL });
}
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(panda$collections$IdentityMap* self, panda$core$Object* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index52;
    panda$collections$IdentityMap$Entry* e54;
    panda$collections$IdentityMap$Entry* old60;
    panda$core$Int64 $tmp51 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp51;
    panda$core$Int64 $tmp53 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index52 = $tmp53;
    e54 = self->contents[index52.value];
    $l55:;
    bool $tmp57 = ((panda$core$Bit) { e54 != NULL }).value;
    if (!$tmp57) goto $l58;
    $tmp57 = ((panda$core$Bit) { e54->key != p_key }).value;
    $l58:;
    panda$core$Bit $tmp59 = { $tmp57 };
    if (!$tmp59.value) goto $l56;
    {
        e54 = e54->next;
    }
    goto $l55;
    $l56:;
    if (((panda$core$Bit) { e54 == NULL }).value) {
    {
        old60 = self->contents[index52.value];
        panda$collections$IdentityMap$Entry* $tmp61 = (panda$collections$IdentityMap$Entry*) malloc(40);
        $tmp61->$class = (panda$core$Class*) &panda$collections$IdentityMap$Entry$class;
        $tmp61->refCount.value = 1;
        panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V($tmp61, p_key, p_value);
        e54 = $tmp61;
        e54->next = old60;
        self->contents[index52.value] = e54;
        panda$collections$IdentityMap$incrementCount(self);
    }
    }
    else {
    {
        e54->value = p_value;
    }
    }
}
void panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index64;
    panda$collections$IdentityMap$Entry* e66;
    panda$collections$IdentityMap$Entry* next70;
    panda$collections$IdentityMap$Entry* next71;
    panda$core$Int64 $tmp63 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp63;
    panda$core$Int64 $tmp65 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index64 = $tmp65;
    e66 = self->contents[index64.value];
    if (((panda$core$Bit) { e66 == NULL }).value) {
    {
        return;
    }
    }
    if (((panda$core$Bit) { e66->key == p_key }).value) {
    {
        self->contents[index64.value] = e66->next;
        panda$core$Int64 $tmp67 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp67;
        return;
    }
    }
    $l68:;
    while (true) {
    {
        next70 = e66->next;
        if (((panda$core$Bit) { next70 == NULL }).value) {
        {
            return;
        }
        }
        if (((panda$core$Bit) { next70->key == p_key }).value) {
        {
            goto $l69;
        }
        }
        e66 = next70;
    }
    }
    $l69:;
    next71 = e66->next;
    PANDA_ASSERT(((panda$core$Bit) { next71 != NULL }).value);
    e66->next = next71->next;
    panda$core$Int64 $tmp72 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp72;
}
void panda$collections$IdentityMap$clear(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp74;
    panda$core$Int64 $tmp73 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp73;
    self->_count = ((panda$core$Int64) { 0 });
    free(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$IdentityMap$Entry**) malloc(self->bucketCount.value * 40));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp74, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp76 = $tmp74.min.value;
    panda$core$Int64 i75 = { $tmp76 };
    int64_t $tmp78 = $tmp74.max.value;
    bool $tmp79 = $tmp74.inclusive.value;
    bool $tmp86 = 1 > 0;
    if ($tmp86) goto $l84; else goto $l85;
    $l84:;
    if ($tmp79) goto $l87; else goto $l88;
    $l87:;
    if ($tmp76 <= $tmp78) goto $l80; else goto $l82;
    $l88:;
    if ($tmp76 < $tmp78) goto $l80; else goto $l82;
    $l85:;
    if ($tmp79) goto $l89; else goto $l90;
    $l89:;
    if ($tmp76 >= $tmp78) goto $l80; else goto $l82;
    $l90:;
    if ($tmp76 > $tmp78) goto $l80; else goto $l82;
    $l80:;
    {
        self->contents[i75.value] = NULL;
    }
    $l83:;
    if ($tmp86) goto $l93; else goto $l94;
    $l93:;
    int64_t $tmp95 = $tmp78 - i75.value;
    if ($tmp79) goto $l96; else goto $l97;
    $l96:;
    if ($tmp95 >= 1) goto $l92; else goto $l82;
    $l97:;
    if ($tmp95 > 1) goto $l92; else goto $l82;
    $l94:;
    int64_t $tmp99 = i75.value - $tmp78;
    if ($tmp79) goto $l100; else goto $l101;
    $l100:;
    if ($tmp99 >= -1) goto $l92; else goto $l82;
    $l101:;
    if ($tmp99 > -1) goto $l92; else goto $l82;
    $l92:;
    i75.value += 1;
    goto $l80;
    $l82:;
    panda$core$Int64 $tmp103 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp104 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp103, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp104;
}
void panda$collections$IdentityMap$incrementCount(panda$collections$IdentityMap* self) {
    panda$collections$IdentityMap$Entry** oldContents107;
    panda$core$Int64 oldBucketCount108;
    panda$core$Range$LTpanda$core$Int64$GT $tmp110;
    panda$core$Range$LTpanda$core$Int64$GT $tmp140;
    panda$collections$IdentityMap$Entry* e158;
    panda$core$Int64 $tmp105 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp105;
    panda$core$Bit $tmp106 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp106.value) {
    {
        oldContents107 = self->contents;
        oldBucketCount108 = self->bucketCount;
        panda$core$Int64 $tmp109 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp109;
        self->contents = ((panda$collections$IdentityMap$Entry**) malloc(self->bucketCount.value * 40));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp110, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp112 = $tmp110.min.value;
        panda$core$Int64 i111 = { $tmp112 };
        int64_t $tmp114 = $tmp110.max.value;
        bool $tmp115 = $tmp110.inclusive.value;
        bool $tmp122 = 1 > 0;
        if ($tmp122) goto $l120; else goto $l121;
        $l120:;
        if ($tmp115) goto $l123; else goto $l124;
        $l123:;
        if ($tmp112 <= $tmp114) goto $l116; else goto $l118;
        $l124:;
        if ($tmp112 < $tmp114) goto $l116; else goto $l118;
        $l121:;
        if ($tmp115) goto $l125; else goto $l126;
        $l125:;
        if ($tmp112 >= $tmp114) goto $l116; else goto $l118;
        $l126:;
        if ($tmp112 > $tmp114) goto $l116; else goto $l118;
        $l116:;
        {
            self->contents[i111.value] = NULL;
        }
        $l119:;
        if ($tmp122) goto $l129; else goto $l130;
        $l129:;
        int64_t $tmp131 = $tmp114 - i111.value;
        if ($tmp115) goto $l132; else goto $l133;
        $l132:;
        if ($tmp131 >= 1) goto $l128; else goto $l118;
        $l133:;
        if ($tmp131 > 1) goto $l128; else goto $l118;
        $l130:;
        int64_t $tmp135 = i111.value - $tmp114;
        if ($tmp115) goto $l136; else goto $l137;
        $l136:;
        if ($tmp135 >= -1) goto $l128; else goto $l118;
        $l137:;
        if ($tmp135 > -1) goto $l128; else goto $l118;
        $l128:;
        i111.value += 1;
        goto $l116;
        $l118:;
        panda$core$Int64 $tmp139 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp139;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp140, ((panda$core$Int64) { 0 }), oldBucketCount108, ((panda$core$Bit) { false }));
        int64_t $tmp142 = $tmp140.min.value;
        panda$core$Int64 i141 = { $tmp142 };
        int64_t $tmp144 = $tmp140.max.value;
        bool $tmp145 = $tmp140.inclusive.value;
        bool $tmp152 = 1 > 0;
        if ($tmp152) goto $l150; else goto $l151;
        $l150:;
        if ($tmp145) goto $l153; else goto $l154;
        $l153:;
        if ($tmp142 <= $tmp144) goto $l146; else goto $l148;
        $l154:;
        if ($tmp142 < $tmp144) goto $l146; else goto $l148;
        $l151:;
        if ($tmp145) goto $l155; else goto $l156;
        $l155:;
        if ($tmp142 >= $tmp144) goto $l146; else goto $l148;
        $l156:;
        if ($tmp142 > $tmp144) goto $l146; else goto $l148;
        $l146:;
        {
            e158 = oldContents107[i141.value];
            $l159:;
            if (!((panda$core$Bit) { e158 != NULL }).value) goto $l160;
            {
                panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self, e158->key, e158->value);
                e158 = e158->next;
            }
            goto $l159;
            $l160:;
        }
        $l149:;
        if ($tmp152) goto $l162; else goto $l163;
        $l162:;
        int64_t $tmp164 = $tmp144 - i141.value;
        if ($tmp145) goto $l165; else goto $l166;
        $l165:;
        if ($tmp164 >= 1) goto $l161; else goto $l148;
        $l166:;
        if ($tmp164 > 1) goto $l161; else goto $l148;
        $l163:;
        int64_t $tmp168 = i141.value - $tmp144;
        if ($tmp145) goto $l169; else goto $l170;
        $l169:;
        if ($tmp168 >= -1) goto $l161; else goto $l148;
        $l170:;
        if ($tmp168 > -1) goto $l161; else goto $l148;
        $l161:;
        i141.value += 1;
        goto $l146;
        $l148:;
    }
    }
}
panda$core$Int64 panda$collections$IdentityMap$get_count$R$panda$core$Int64(panda$collections$IdentityMap* self) {
    return self->_count;
}
panda$core$Bit panda$collections$IdentityMap$$EQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$collections$Map* p_other) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$core$Bit panda$collections$IdentityMap$$NEQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$collections$Map* p_other) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$collections$Iterator* panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT(panda$collections$IdentityMap* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$collections$Iterator* panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT(panda$collections$IdentityMap* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$core$String* panda$collections$IdentityMap$convert$R$panda$core$String(panda$collections$IdentityMap* self) {
    panda$core$MutableString* result172;
    panda$core$String* separator176;
    panda$core$Range$LTpanda$core$Int64$GT $tmp178;
    panda$collections$IdentityMap$Entry* entry196;
    panda$core$MutableString* $tmp173 = (panda$core$MutableString*) malloc(40);
    $tmp173->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp173->refCount.value = 1;
    panda$core$MutableString$init($tmp173);
    result172 = $tmp173;
    panda$core$MutableString$append$panda$core$String(result172, &$s175);
    separator176 = &$s177;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp178, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp180 = $tmp178.min.value;
    panda$core$Int64 i179 = { $tmp180 };
    int64_t $tmp182 = $tmp178.max.value;
    bool $tmp183 = $tmp178.inclusive.value;
    bool $tmp190 = 1 > 0;
    if ($tmp190) goto $l188; else goto $l189;
    $l188:;
    if ($tmp183) goto $l191; else goto $l192;
    $l191:;
    if ($tmp180 <= $tmp182) goto $l184; else goto $l186;
    $l192:;
    if ($tmp180 < $tmp182) goto $l184; else goto $l186;
    $l189:;
    if ($tmp183) goto $l193; else goto $l194;
    $l193:;
    if ($tmp180 >= $tmp182) goto $l184; else goto $l186;
    $l194:;
    if ($tmp180 > $tmp182) goto $l184; else goto $l186;
    $l184:;
    {
        entry196 = self->contents[i179.value];
        $l197:;
        if (!((panda$core$Bit) { entry196 != NULL }).value) goto $l198;
        {
            panda$core$MutableString$append$panda$core$String(result172, separator176);
            if (((panda$core$Bit) { entry196->key != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result172, entry196->key);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result172, &$s199);
            }
            }
            panda$core$MutableString$append$panda$core$String(result172, &$s200);
            if (((panda$core$Bit) { entry196->value != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result172, entry196->value);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result172, &$s201);
            }
            }
            entry196 = entry196->next;
            separator176 = &$s202;
        }
        goto $l197;
        $l198:;
    }
    $l187:;
    if ($tmp190) goto $l204; else goto $l205;
    $l204:;
    int64_t $tmp206 = $tmp182 - i179.value;
    if ($tmp183) goto $l207; else goto $l208;
    $l207:;
    if ($tmp206 >= 1) goto $l203; else goto $l186;
    $l208:;
    if ($tmp206 > 1) goto $l203; else goto $l186;
    $l205:;
    int64_t $tmp210 = i179.value - $tmp182;
    if ($tmp183) goto $l211; else goto $l212;
    $l211:;
    if ($tmp210 >= -1) goto $l203; else goto $l186;
    $l212:;
    if ($tmp210 > -1) goto $l203; else goto $l186;
    $l203:;
    i179.value += 1;
    goto $l184;
    $l186:;
    panda$core$MutableString$append$panda$core$String(result172, &$s214);
    panda$core$String* $tmp215 = panda$core$MutableString$convert$R$panda$core$String(result172);
    return $tmp215;
}

