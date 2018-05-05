#include "panda/json/JSON.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Real64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/collections/ImmutableHashMap.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/json/JSON/PathKey.h"
#include "panda/core/String/Index.h"
#include "panda/core/Char32.h"
#include "panda/core/Int32.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/collections/Key.h"
#include "panda/collections/ListView.h"
#include "panda/collections/MapView.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Formattable.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
panda$json$JSON$class_type panda$json$JSON$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$json$JSON$convert$R$panda$core$String, panda$json$JSON$cleanup, panda$json$JSON$get$panda$core$String$R$panda$json$JSON$Q, panda$json$JSON$getInt$panda$core$String$R$panda$core$Int64$Q, panda$json$JSON$getReal$panda$core$String$R$panda$core$Real64$Q, panda$json$JSON$getBit$panda$core$String$R$panda$core$Bit$Q, panda$json$JSON$getString$panda$core$String$R$panda$core$String$Q, panda$json$JSON$getArray$panda$core$String$R$panda$collections$ListView$LTpanda$json$JSON$GT$Q, panda$json$JSON$getObject$panda$core$String$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT$Q, panda$json$JSON$asInt$R$panda$core$Int64, panda$json$JSON$asReal$R$panda$core$Real64, panda$json$JSON$asString$R$panda$core$String, panda$json$JSON$asBit$R$panda$core$Bit, panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT, panda$json$JSON$asObject$R$panda$collections$ListView$LTpanda$json$JSON$GT} };

typedef panda$json$JSON* (*$fn132)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn147)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn162)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn177)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn195)(panda$json$JSON*, panda$core$String*);
typedef panda$json$JSON* (*$fn213)(panda$json$JSON*, panda$core$String*);
typedef panda$core$Bit (*$fn311)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn319)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn334)(panda$core$Formattable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn369)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn376)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn384)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, 1678230320005604101, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7d", 2, 13558, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };

void panda$json$JSON$init$panda$core$Int64$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Int64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Int64* $tmp2 = ((panda$core$Int64*) ((char*) self->$data + 0));
    *$tmp2 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Real64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Real64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Real64* $tmp3 = ((panda$core$Real64*) ((char*) self->$data + 0));
    *$tmp3 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$core$String(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$String* p_f0) {
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp5 = ((panda$core$String**) ((char*) self->$data + 0));
        panda$core$String* $tmp4 = *$tmp5;
        panda$core$String** $tmp6 = ((panda$core$String**) ((char*) self->$data + 0));
        panda$core$String* $tmp7 = p_f0;
        *$tmp6 = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
}
void panda$json$JSON$init$panda$core$Int64$panda$core$Bit(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Bit p_f0) {
    self->$rawValue = p_rv;
    panda$core$Bit* $tmp8 = ((panda$core$Bit*) ((char*) self->$data + 0));
    *$tmp8 = p_f0;
}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableHashMap* p_f0) {
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableHashMap** $tmp10 = ((panda$collections$ImmutableHashMap**) ((char*) self->$data + 0));
        panda$collections$ImmutableHashMap* $tmp9 = *$tmp10;
        panda$collections$ImmutableHashMap** $tmp11 = ((panda$collections$ImmutableHashMap**) ((char*) self->$data + 0));
        panda$collections$ImmutableHashMap* $tmp12 = p_f0;
        *$tmp11 = $tmp12;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    }
}
void panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp14 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        panda$collections$ImmutableArray* $tmp13 = *$tmp14;
        panda$collections$ImmutableArray** $tmp15 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        panda$collections$ImmutableArray* $tmp16 = p_f0;
        *$tmp15 = $tmp16;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
    }
}
void panda$json$JSON$init$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}
panda$json$JSON$PathKey* panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(panda$core$String* p_path, panda$core$String$Index p_start) {
    panda$core$Char32 $match$23_917;
    panda$core$Char32 $tmp19;
    panda$core$String$Index end21;
    panda$core$String$Index fieldStart23;
    panda$core$String$Index index25;
    panda$core$Char32 c28;
    panda$core$Char32 $tmp31;
    panda$core$Char32 $tmp34;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp48;
    panda$core$Char32 $tmp50;
    panda$core$String$Index indexStart52;
    panda$core$String$Index index54;
    panda$core$Char32 $tmp59;
    panda$core$Int64$nullable parsed62;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp64;
    {
        panda$core$Char32 $tmp18 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_path, p_start);
        $match$23_917 = $tmp18;
        panda$core$Char32$init$panda$core$Int32(&$tmp19, ((panda$core$Int32) { 47 }));
        panda$core$Bit $tmp20 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$23_917, $tmp19);
        if ($tmp20.value) {
        {
            panda$core$String$Index $tmp22 = panda$core$String$end$R$panda$core$String$Index(p_path);
            end21 = $tmp22;
            panda$core$String$Index $tmp24 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, p_start);
            fieldStart23 = $tmp24;
            index25 = fieldStart23;
            $l26:;
            {
                panda$core$Char32 $tmp29 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_path, index25);
                c28 = $tmp29;
                panda$core$Char32$init$panda$core$Int32(&$tmp31, ((panda$core$Int32) { 47 }));
                panda$core$Bit $tmp32 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(c28, $tmp31);
                bool $tmp30 = $tmp32.value;
                if ($tmp30) goto $l33;
                panda$core$Char32$init$panda$core$Int32(&$tmp34, ((panda$core$Int32) { 91 }));
                panda$core$Bit $tmp35 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(c28, $tmp34);
                $tmp30 = $tmp35.value;
                $l33:;
                panda$core$Bit $tmp36 = { $tmp30 };
                if ($tmp36.value) {
                {
                    goto $l27;
                }
                }
                panda$core$String$Index $tmp37 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, index25);
                index25 = $tmp37;
            }
            panda$core$Bit $tmp39 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(index25, end21);
            bool $tmp38 = $tmp39.value;
            if ($tmp38) goto $l26;
            $l27:;
            panda$core$Bit $tmp40 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(fieldStart23, index25);
            if ($tmp40.value) {
            {
                panda$json$JSON$PathKey* $tmp42 = NULL;
                panda$json$JSON$PathKey* $tmp41 = $tmp42;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
                return $tmp41;
            }
            }
            panda$json$JSON$PathKey* $tmp46 = (panda$json$JSON$PathKey*) pandaObjectAlloc(40, (panda$core$Class*) &panda$json$JSON$PathKey$class);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp48, fieldStart23, index25, ((panda$core$Bit) { false }));
            panda$core$String* $tmp49 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_path, $tmp48);
            panda$core$String* $tmp47 = $tmp49;
            panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$String$panda$core$String$Index($tmp46, ((panda$core$Int64) { 0 }), $tmp47, index25);
            panda$json$JSON$PathKey* $tmp45 = $tmp46;
            panda$json$JSON$PathKey* $tmp44 = $tmp45;
            panda$json$JSON$PathKey* $tmp43 = $tmp44;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
            return $tmp43;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp50, ((panda$core$Int32) { 91 }));
        panda$core$Bit $tmp51 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$23_917, $tmp50);
        if ($tmp51.value) {
        {
            panda$core$String$Index $tmp53 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, p_start);
            indexStart52 = $tmp53;
            index54 = indexStart52;
            $l55:;
            panda$core$Char32 $tmp58 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_path, index54);
            panda$core$Char32$init$panda$core$Int32(&$tmp59, ((panda$core$Int32) { 93 }));
            panda$core$Bit $tmp60 = panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit($tmp58, $tmp59);
            bool $tmp57 = $tmp60.value;
            if (!$tmp57) goto $l56;
            {
                panda$core$String$Index $tmp61 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, index54);
                index54 = $tmp61;
            }
            goto $l55;
            $l56:;
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp64, indexStart52, index54, ((panda$core$Bit) { false }));
            panda$core$String* $tmp65 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_path, $tmp64);
            panda$core$String* $tmp63 = $tmp65;
            panda$core$Int64$nullable $tmp66 = panda$core$String$convert$R$panda$core$Int64$Q($tmp63);
            parsed62 = $tmp66;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
            if (((panda$core$Bit) { !parsed62.nonnull }).value) {
            {
                panda$json$JSON$PathKey* $tmp68 = NULL;
                panda$json$JSON$PathKey* $tmp67 = $tmp68;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp68));
                return $tmp67;
            }
            }
            panda$json$JSON$PathKey* $tmp72 = (panda$json$JSON$PathKey*) pandaObjectAlloc(40, (panda$core$Class*) &panda$json$JSON$PathKey$class);
            panda$core$String$Index $tmp73 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_path, index54);
            panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$Int64$panda$core$String$Index($tmp72, ((panda$core$Int64) { 1 }), ((panda$core$Int64) parsed62.value), $tmp73);
            panda$json$JSON$PathKey* $tmp71 = $tmp72;
            panda$json$JSON$PathKey* $tmp70 = $tmp71;
            panda$json$JSON$PathKey* $tmp69 = $tmp70;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
            return $tmp69;
        }
        }
        else {
        {
            panda$json$JSON$PathKey* $tmp75 = NULL;
            panda$json$JSON$PathKey* $tmp74 = $tmp75;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp75));
            return $tmp74;
        }
        }
        }
    }
}
panda$json$JSON* panda$json$JSON$get$panda$core$String$R$panda$json$JSON$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$core$String$Index index76;
    panda$core$String$Index end78;
    panda$json$JSON* current80;
    panda$json$JSON$PathKey* $match$76_1388;
    panda$core$String* field92;
    panda$core$String$Index next94;
    panda$json$JSON* $match$78_2196;
    panda$collections$ImmutableHashMap* fields98;
    panda$json$JSON* tmp1104;
    panda$json$JSON* tmp2107;
    panda$core$Int64 key111;
    panda$core$String$Index next113;
    panda$json$JSON* $match$89_21115;
    panda$collections$ImmutableArray* nodes117;
    panda$json$JSON* tmp3123;
    panda$json$JSON* tmp4126;
    panda$core$String$Index $tmp77 = panda$core$String$start$R$panda$core$String$Index(p_path);
    index76 = $tmp77;
    panda$core$String$Index $tmp79 = panda$core$String$end$R$panda$core$String$Index(p_path);
    end78 = $tmp79;
    panda$json$JSON* $tmp81 = self;
    current80 = $tmp81;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp81));
    $l82:;
    panda$core$Bit $tmp85 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(index76, end78);
    bool $tmp84 = $tmp85.value;
    if (!$tmp84) goto $l83;
    {
        panda$json$JSON$PathKey* $tmp87 = panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(p_path, index76);
        panda$json$JSON$PathKey* $tmp86 = $tmp87;
        PANDA_ASSERT(((panda$core$Bit) { $tmp86 != NULL }).value);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
        {
            panda$json$JSON$PathKey* $tmp90 = panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(p_path, index76);
            panda$json$JSON$PathKey* $tmp89 = $tmp90;
            $match$76_1388 = $tmp89;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
            panda$core$Bit $tmp91 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_1388->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp91.value) {
            {
                panda$core$String** $tmp93 = ((panda$core$String**) ((char*) $match$76_1388->$data + 0));
                field92 = *$tmp93;
                panda$core$String$Index* $tmp95 = ((panda$core$String$Index*) ((char*) $match$76_1388->$data + 8));
                next94 = *$tmp95;
                {
                    $match$78_2196 = current80;
                    panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_2196->$rawValue, ((panda$core$Int64) { 4 }));
                    if ($tmp97.value) {
                    {
                        panda$collections$ImmutableHashMap** $tmp99 = ((panda$collections$ImmutableHashMap**) ((char*) $match$78_2196->$data + 0));
                        fields98 = *$tmp99;
                        {
                            panda$json$JSON* $tmp100 = current80;
                            panda$core$Object* $tmp103 = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(fields98, ((panda$collections$Key*) field92));
                            panda$core$Object* $tmp102 = $tmp103;
                            panda$json$JSON* $tmp101 = ((panda$json$JSON*) $tmp102);
                            current80 = $tmp101;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp101));
                            panda$core$Panda$unref$panda$core$Object($tmp102);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
                        }
                        if (((panda$core$Bit) { current80 == NULL }).value) {
                        {
                            {
                                panda$json$JSON* $tmp105 = NULL;
                                tmp1104 = $tmp105;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) current80));
                                panda$json$JSON* $tmp106 = tmp1104;
                                return $tmp106;
                            }
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            panda$json$JSON* $tmp108 = NULL;
                            tmp2107 = $tmp108;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp108));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) current80));
                            panda$json$JSON* $tmp109 = tmp2107;
                            return $tmp109;
                        }
                    }
                    }
                }
                index76 = next94;
            }
            }
            else {
            panda$core$Bit $tmp110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_1388->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp110.value) {
            {
                panda$core$Int64* $tmp112 = ((panda$core$Int64*) ((char*) $match$76_1388->$data + 0));
                key111 = *$tmp112;
                panda$core$String$Index* $tmp114 = ((panda$core$String$Index*) ((char*) $match$76_1388->$data + 8));
                next113 = *$tmp114;
                {
                    $match$89_21115 = current80;
                    panda$core$Bit $tmp116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$89_21115->$rawValue, ((panda$core$Int64) { 5 }));
                    if ($tmp116.value) {
                    {
                        panda$collections$ImmutableArray** $tmp118 = ((panda$collections$ImmutableArray**) ((char*) $match$89_21115->$data + 0));
                        nodes117 = *$tmp118;
                        {
                            panda$json$JSON* $tmp119 = current80;
                            panda$core$Object* $tmp122 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(nodes117, key111);
                            panda$core$Object* $tmp121 = $tmp122;
                            panda$json$JSON* $tmp120 = ((panda$json$JSON*) $tmp121);
                            current80 = $tmp120;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp120));
                            panda$core$Panda$unref$panda$core$Object($tmp121);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
                        }
                    }
                    }
                    else {
                    {
                        {
                            panda$json$JSON* $tmp124 = NULL;
                            tmp3123 = $tmp124;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp124));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) current80));
                            panda$json$JSON* $tmp125 = tmp3123;
                            return $tmp125;
                        }
                    }
                    }
                }
                index76 = next113;
            }
            }
            }
        }
    }
    goto $l82;
    $l83:;
    {
        panda$json$JSON* $tmp127 = current80;
        tmp4126 = $tmp127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) current80));
        panda$json$JSON* $tmp128 = tmp4126;
        return $tmp128;
    }
}
panda$core$Int64$nullable panda$json$JSON$getInt$panda$core$String$R$panda$core$Int64$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result129;
    panda$core$Int64$nullable tmp5134;
    panda$json$JSON* $match$109_9136;
    panda$core$Int64 value138;
    panda$core$Int64$nullable tmp6140;
    panda$core$Int64$nullable tmp7142;
    panda$json$JSON* $tmp133 = (($fn132) self->$class->vtable[2])(self, p_path);
    panda$json$JSON* $tmp131 = $tmp133;
    panda$json$JSON* $tmp130 = $tmp131;
    result129 = $tmp130;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp130));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
    if (((panda$core$Bit) { result129 == NULL }).value) {
    {
        {
            tmp5134 = ((panda$core$Int64$nullable) { .nonnull = false });
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result129));
            panda$core$Int64$nullable $tmp135 = tmp5134;
            return $tmp135;
        }
    }
    }
    {
        $match$109_9136 = result129;
        panda$core$Bit $tmp137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$109_9136->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp137.value) {
        {
            panda$core$Int64* $tmp139 = ((panda$core$Int64*) ((char*) $match$109_9136->$data + 0));
            value138 = *$tmp139;
            {
                tmp6140 = ((panda$core$Int64$nullable) { value138, true });
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result129));
                panda$core$Int64$nullable $tmp141 = tmp6140;
                return $tmp141;
            }
        }
        }
        else {
        {
            {
                tmp7142 = ((panda$core$Int64$nullable) { .nonnull = false });
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result129));
                panda$core$Int64$nullable $tmp143 = tmp7142;
                return $tmp143;
            }
        }
        }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result129));
}
panda$core$Real64$nullable panda$json$JSON$getReal$panda$core$String$R$panda$core$Real64$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result144;
    panda$core$Real64$nullable tmp8149;
    panda$json$JSON* $match$125_9151;
    panda$core$Real64 value153;
    panda$core$Real64$nullable tmp9155;
    panda$core$Real64$nullable tmp10157;
    panda$json$JSON* $tmp148 = (($fn147) self->$class->vtable[2])(self, p_path);
    panda$json$JSON* $tmp146 = $tmp148;
    panda$json$JSON* $tmp145 = $tmp146;
    result144 = $tmp145;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp145));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
    if (((panda$core$Bit) { result144 == NULL }).value) {
    {
        {
            tmp8149 = ((panda$core$Real64$nullable) { .nonnull = false });
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result144));
            panda$core$Real64$nullable $tmp150 = tmp8149;
            return $tmp150;
        }
    }
    }
    {
        $match$125_9151 = result144;
        panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125_9151->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp152.value) {
        {
            panda$core$Real64* $tmp154 = ((panda$core$Real64*) ((char*) $match$125_9151->$data + 0));
            value153 = *$tmp154;
            {
                tmp9155 = ((panda$core$Real64$nullable) { value153, true });
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result144));
                panda$core$Real64$nullable $tmp156 = tmp9155;
                return $tmp156;
            }
        }
        }
        else {
        {
            {
                tmp10157 = ((panda$core$Real64$nullable) { .nonnull = false });
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result144));
                panda$core$Real64$nullable $tmp158 = tmp10157;
                return $tmp158;
            }
        }
        }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result144));
}
panda$core$Bit$nullable panda$json$JSON$getBit$panda$core$String$R$panda$core$Bit$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result159;
    panda$core$Bit$nullable tmp11164;
    panda$json$JSON* $match$141_9166;
    panda$core$Bit value168;
    panda$core$Bit$nullable tmp12170;
    panda$core$Bit$nullable tmp13172;
    panda$json$JSON* $tmp163 = (($fn162) self->$class->vtable[2])(self, p_path);
    panda$json$JSON* $tmp161 = $tmp163;
    panda$json$JSON* $tmp160 = $tmp161;
    result159 = $tmp160;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp160));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp161));
    if (((panda$core$Bit) { result159 == NULL }).value) {
    {
        {
            tmp11164 = ((panda$core$Bit$nullable) { .nonnull = false });
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result159));
            panda$core$Bit$nullable $tmp165 = tmp11164;
            return $tmp165;
        }
    }
    }
    {
        $match$141_9166 = result159;
        panda$core$Bit $tmp167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9166->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp167.value) {
        {
            panda$core$Bit* $tmp169 = ((panda$core$Bit*) ((char*) $match$141_9166->$data + 0));
            value168 = *$tmp169;
            {
                tmp12170 = ((panda$core$Bit$nullable) { value168, true });
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result159));
                panda$core$Bit$nullable $tmp171 = tmp12170;
                return $tmp171;
            }
        }
        }
        else {
        {
            {
                tmp13172 = ((panda$core$Bit$nullable) { .nonnull = false });
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result159));
                panda$core$Bit$nullable $tmp173 = tmp13172;
                return $tmp173;
            }
        }
        }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result159));
}
panda$core$String* panda$json$JSON$getString$panda$core$String$R$panda$core$String$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result174;
    panda$core$String* tmp14179;
    panda$json$JSON* $match$157_9182;
    panda$core$String* value184;
    panda$core$String* tmp15186;
    panda$core$String* tmp16189;
    panda$json$JSON* $tmp178 = (($fn177) self->$class->vtable[2])(self, p_path);
    panda$json$JSON* $tmp176 = $tmp178;
    panda$json$JSON* $tmp175 = $tmp176;
    result174 = $tmp175;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp175));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
    if (((panda$core$Bit) { result174 == NULL }).value) {
    {
        {
            panda$core$String* $tmp180 = NULL;
            tmp14179 = $tmp180;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp180));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result174));
            panda$core$String* $tmp181 = tmp14179;
            return $tmp181;
        }
    }
    }
    {
        $match$157_9182 = result174;
        panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_9182->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp183.value) {
        {
            panda$core$String** $tmp185 = ((panda$core$String**) ((char*) $match$157_9182->$data + 0));
            value184 = *$tmp185;
            {
                panda$core$String* $tmp187 = value184;
                tmp15186 = $tmp187;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp187));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result174));
                panda$core$String* $tmp188 = tmp15186;
                return $tmp188;
            }
        }
        }
        else {
        {
            {
                panda$core$String* $tmp190 = NULL;
                tmp16189 = $tmp190;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp190));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result174));
                panda$core$String* $tmp191 = tmp16189;
                return $tmp191;
            }
        }
        }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result174));
}
panda$collections$ListView* panda$json$JSON$getArray$panda$core$String$R$panda$collections$ListView$LTpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result192;
    panda$collections$ListView* tmp17197;
    panda$json$JSON* $match$173_9200;
    panda$collections$ImmutableArray* value202;
    panda$collections$ListView* tmp18204;
    panda$collections$ListView* tmp19207;
    panda$json$JSON* $tmp196 = (($fn195) self->$class->vtable[2])(self, p_path);
    panda$json$JSON* $tmp194 = $tmp196;
    panda$json$JSON* $tmp193 = $tmp194;
    result192 = $tmp193;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
    if (((panda$core$Bit) { result192 == NULL }).value) {
    {
        {
            panda$collections$ListView* $tmp198 = NULL;
            tmp17197 = $tmp198;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result192));
            panda$collections$ListView* $tmp199 = tmp17197;
            return $tmp199;
        }
    }
    }
    {
        $match$173_9200 = result192;
        panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9200->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp201.value) {
        {
            panda$collections$ImmutableArray** $tmp203 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9200->$data + 0));
            value202 = *$tmp203;
            {
                panda$collections$ListView* $tmp205 = ((panda$collections$ListView*) value202);
                tmp18204 = $tmp205;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result192));
                panda$collections$ListView* $tmp206 = tmp18204;
                return $tmp206;
            }
        }
        }
        else {
        {
            {
                panda$collections$ListView* $tmp208 = NULL;
                tmp19207 = $tmp208;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result192));
                panda$collections$ListView* $tmp209 = tmp19207;
                return $tmp209;
            }
        }
        }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result192));
}
panda$collections$MapView* panda$json$JSON$getObject$panda$core$String$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path) {
    panda$json$JSON* result210;
    panda$collections$MapView* tmp20215;
    panda$json$JSON* $match$189_9218;
    panda$collections$ImmutableHashMap* value220;
    panda$collections$MapView* tmp21222;
    panda$collections$MapView* tmp22225;
    panda$json$JSON* $tmp214 = (($fn213) self->$class->vtable[2])(self, p_path);
    panda$json$JSON* $tmp212 = $tmp214;
    panda$json$JSON* $tmp211 = $tmp212;
    result210 = $tmp211;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp211));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
    if (((panda$core$Bit) { result210 == NULL }).value) {
    {
        {
            panda$collections$MapView* $tmp216 = NULL;
            tmp20215 = $tmp216;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp216));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result210));
            panda$collections$MapView* $tmp217 = tmp20215;
            return $tmp217;
        }
    }
    }
    {
        $match$189_9218 = result210;
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9218->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp219.value) {
        {
            panda$collections$ImmutableHashMap** $tmp221 = ((panda$collections$ImmutableHashMap**) ((char*) $match$189_9218->$data + 0));
            value220 = *$tmp221;
            {
                panda$collections$MapView* $tmp223 = ((panda$collections$MapView*) value220);
                tmp21222 = $tmp223;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result210));
                panda$collections$MapView* $tmp224 = tmp21222;
                return $tmp224;
            }
        }
        }
        else {
        {
            {
                panda$collections$MapView* $tmp226 = NULL;
                tmp22225 = $tmp226;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result210));
                panda$collections$MapView* $tmp227 = tmp22225;
                return $tmp227;
            }
        }
        }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result210));
}
panda$core$Int64 panda$json$JSON$asInt$R$panda$core$Int64(panda$json$JSON* self) {
    panda$json$JSON* $match$199_9228;
    panda$core$Int64 value230;
    {
        $match$199_9228 = self;
        panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$199_9228->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp229.value) {
        {
            panda$core$Int64* $tmp231 = ((panda$core$Int64*) ((char*) $match$199_9228->$data + 0));
            value230 = *$tmp231;
            panda$core$Int64 $tmp232 = value230;
            return $tmp232;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
}
panda$core$Real64 panda$json$JSON$asReal$R$panda$core$Real64(panda$json$JSON* self) {
    panda$json$JSON* $match$209_9233;
    panda$core$Real64 value235;
    {
        $match$209_9233 = self;
        panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$209_9233->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp234.value) {
        {
            panda$core$Real64* $tmp236 = ((panda$core$Real64*) ((char*) $match$209_9233->$data + 0));
            value235 = *$tmp236;
            panda$core$Real64 $tmp237 = value235;
            return $tmp237;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
}
panda$core$String* panda$json$JSON$asString$R$panda$core$String(panda$json$JSON* self) {
    panda$json$JSON* $match$219_9238;
    panda$core$String* value240;
    {
        $match$219_9238 = self;
        panda$core$Bit $tmp239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$219_9238->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp239.value) {
        {
            panda$core$String** $tmp241 = ((panda$core$String**) ((char*) $match$219_9238->$data + 0));
            value240 = *$tmp241;
            panda$core$String* $tmp243 = value240;
            panda$core$String* $tmp242 = $tmp243;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp243));
            return $tmp242;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
}
panda$core$Bit panda$json$JSON$asBit$R$panda$core$Bit(panda$json$JSON* self) {
    panda$json$JSON* $match$229_9244;
    panda$core$Bit value246;
    {
        $match$229_9244 = self;
        panda$core$Bit $tmp245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$229_9244->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp245.value) {
        {
            panda$core$Bit* $tmp247 = ((panda$core$Bit*) ((char*) $match$229_9244->$data + 0));
            value246 = *$tmp247;
            panda$core$Bit $tmp248 = value246;
            return $tmp248;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
}
panda$collections$MapView* panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self) {
    panda$json$JSON* $match$239_9249;
    panda$collections$ImmutableHashMap* value251;
    {
        $match$239_9249 = self;
        panda$core$Bit $tmp250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$239_9249->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp250.value) {
        {
            panda$collections$ImmutableHashMap** $tmp252 = ((panda$collections$ImmutableHashMap**) ((char*) $match$239_9249->$data + 0));
            value251 = *$tmp252;
            panda$collections$MapView* $tmp254 = ((panda$collections$MapView*) value251);
            panda$collections$MapView* $tmp253 = $tmp254;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
            return $tmp253;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
}
panda$collections$ListView* panda$json$JSON$asObject$R$panda$collections$ListView$LTpanda$json$JSON$GT(panda$json$JSON* self) {
    panda$json$JSON* $match$249_9255;
    panda$collections$ImmutableArray* value257;
    {
        $match$249_9255 = self;
        panda$core$Bit $tmp256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$249_9255->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp256.value) {
        {
            panda$collections$ImmutableArray** $tmp258 = ((panda$collections$ImmutableArray**) ((char*) $match$249_9255->$data + 0));
            value257 = *$tmp258;
            panda$collections$ListView* $tmp260 = ((panda$collections$ListView*) value257);
            panda$collections$ListView* $tmp259 = $tmp260;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp260));
            return $tmp259;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
}
panda$core$String* panda$json$JSON$convert$R$panda$core$String(panda$json$JSON* self) {
    panda$json$JSON* $match$259_9261;
    panda$core$Int64 value263;
    panda$core$Real64 value270;
    panda$core$String* value277;
    panda$core$Bit value285;
    panda$collections$ImmutableHashMap* fields292;
    panda$core$MutableString* result294;
    panda$core$String* separator299;
    panda$collections$Iterator* Iter$271$17302;
    panda$core$String* k314;
    panda$core$String* tmp23348;
    panda$collections$ImmutableArray* nodes354;
    panda$core$MutableString* result356;
    panda$core$String* separator361;
    panda$collections$Iterator* Iter$280$17364;
    panda$json$JSON* n379;
    panda$core$Char8 $tmp399;
    panda$core$String* tmp24400;
    {
        $match$259_9261 = self;
        panda$core$Bit $tmp262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9261->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp262.value) {
        {
            panda$core$Int64* $tmp264 = ((panda$core$Int64*) ((char*) $match$259_9261->$data + 0));
            value263 = *$tmp264;
            panda$core$String* $tmp268 = panda$core$Int64$convert$R$panda$core$String(value263);
            panda$core$String* $tmp267 = $tmp268;
            panda$core$String* $tmp266 = $tmp267;
            panda$core$String* $tmp265 = $tmp266;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp267));
            return $tmp265;
        }
        }
        else {
        panda$core$Bit $tmp269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9261->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp269.value) {
        {
            panda$core$Real64* $tmp271 = ((panda$core$Real64*) ((char*) $match$259_9261->$data + 0));
            value270 = *$tmp271;
            panda$core$String* $tmp275 = panda$core$Real64$convert$R$panda$core$String(value270);
            panda$core$String* $tmp274 = $tmp275;
            panda$core$String* $tmp273 = $tmp274;
            panda$core$String* $tmp272 = $tmp273;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp273));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp274));
            return $tmp272;
        }
        }
        else {
        panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9261->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp276.value) {
        {
            panda$core$String** $tmp278 = ((panda$core$String**) ((char*) $match$259_9261->$data + 0));
            value277 = *$tmp278;
            panda$core$String* $tmp283 = panda$core$String$format$panda$core$String$R$panda$core$String(value277, &$s282);
            panda$core$String* $tmp281 = $tmp283;
            panda$core$String* $tmp280 = $tmp281;
            panda$core$String* $tmp279 = $tmp280;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp280));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
            return $tmp279;
        }
        }
        else {
        panda$core$Bit $tmp284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9261->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp284.value) {
        {
            panda$core$Bit* $tmp286 = ((panda$core$Bit*) ((char*) $match$259_9261->$data + 0));
            value285 = *$tmp286;
            panda$core$String* $tmp290 = panda$core$Bit$convert$R$panda$core$String(value285);
            panda$core$String* $tmp289 = $tmp290;
            panda$core$String* $tmp288 = $tmp289;
            panda$core$String* $tmp287 = $tmp288;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp288));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp289));
            return $tmp287;
        }
        }
        else {
        panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9261->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp291.value) {
        {
            panda$collections$ImmutableHashMap** $tmp293 = ((panda$collections$ImmutableHashMap**) ((char*) $match$259_9261->$data + 0));
            fields292 = *$tmp293;
            panda$core$MutableString* $tmp297 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp297, &$s298);
            panda$core$MutableString* $tmp296 = $tmp297;
            panda$core$MutableString* $tmp295 = $tmp296;
            result294 = $tmp295;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp295));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp296));
            panda$core$String* $tmp300 = &$s301;
            separator299 = $tmp300;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp300));
            {
                panda$collections$Iterator* $tmp305 = panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(fields292);
                panda$collections$Iterator* $tmp304 = $tmp305;
                panda$collections$Iterator* $tmp303 = $tmp304;
                Iter$271$17302 = $tmp303;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp303));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304));
                $l306:;
                ITable* $tmp309 = Iter$271$17302->$class->itable;
                while ($tmp309->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp309 = $tmp309->next;
                }
                $fn311 $tmp310 = $tmp309->methods[0];
                panda$core$Bit $tmp312 = $tmp310(Iter$271$17302);
                panda$core$Bit $tmp313 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp312);
                bool $tmp308 = $tmp313.value;
                if (!$tmp308) goto $l307;
                {
                    ITable* $tmp317 = Iter$271$17302->$class->itable;
                    while ($tmp317->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp317 = $tmp317->next;
                    }
                    $fn319 $tmp318 = $tmp317->methods[1];
                    panda$core$Object* $tmp320 = $tmp318(Iter$271$17302);
                    panda$core$Object* $tmp316 = $tmp320;
                    panda$core$String* $tmp315 = ((panda$core$String*) $tmp316);
                    k314 = $tmp315;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp315));
                    panda$core$Panda$unref$panda$core$Object($tmp316);
                    panda$core$String* $tmp327 = panda$core$String$convert$R$panda$core$String(separator299);
                    panda$core$String* $tmp326 = $tmp327;
                    panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp326, &$s328);
                    panda$core$String* $tmp325 = $tmp329;
                    ITable* $tmp332 = ((panda$core$Formattable*) k314)->$class->itable;
                    while ($tmp332->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                        $tmp332 = $tmp332->next;
                    }
                    $fn334 $tmp333 = $tmp332->methods[0];
                    panda$core$String* $tmp335 = $tmp333(((panda$core$Formattable*) k314), &$s331);
                    panda$core$String* $tmp330 = $tmp335;
                    panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp325, $tmp330);
                    panda$core$String* $tmp324 = $tmp336;
                    panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp324, &$s337);
                    panda$core$String* $tmp323 = $tmp338;
                    panda$core$Object* $tmp340 = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(fields292, ((panda$collections$Key*) k314));
                    panda$core$Object* $tmp339 = $tmp340;
                    panda$core$String* $tmp341 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp323, ((panda$core$Object*) ((panda$json$JSON*) $tmp339)));
                    panda$core$String* $tmp322 = $tmp341;
                    panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp322, &$s342);
                    panda$core$String* $tmp321 = $tmp343;
                    panda$core$MutableString$append$panda$core$String(result294, $tmp321);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
                    panda$core$Panda$unref$panda$core$Object($tmp339);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp323));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp325));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp326));
                    {
                        panda$core$String* $tmp344 = separator299;
                        panda$core$String* $tmp345 = &$s346;
                        separator299 = $tmp345;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp345));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k314));
                }
                goto $l306;
                $l307:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$271$17302));
            }
            panda$core$MutableString$append$panda$core$String(result294, &$s347);
            {
                panda$core$String* $tmp351 = panda$core$MutableString$finish$R$panda$core$String(result294);
                panda$core$String* $tmp350 = $tmp351;
                panda$core$String* $tmp349 = $tmp350;
                tmp23348 = $tmp349;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp349));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator299));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result294));
                }
                panda$core$String* $tmp352 = tmp23348;
                return $tmp352;
            }
        }
        }
        else {
        panda$core$Bit $tmp353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9261->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp353.value) {
        {
            panda$collections$ImmutableArray** $tmp355 = ((panda$collections$ImmutableArray**) ((char*) $match$259_9261->$data + 0));
            nodes354 = *$tmp355;
            panda$core$MutableString* $tmp359 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp359, &$s360);
            panda$core$MutableString* $tmp358 = $tmp359;
            panda$core$MutableString* $tmp357 = $tmp358;
            result356 = $tmp357;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp357));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp358));
            panda$core$String* $tmp362 = &$s363;
            separator361 = $tmp362;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp362));
            {
                ITable* $tmp367 = ((panda$collections$Iterable*) nodes354)->$class->itable;
                while ($tmp367->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp367 = $tmp367->next;
                }
                $fn369 $tmp368 = $tmp367->methods[0];
                panda$collections$Iterator* $tmp370 = $tmp368(((panda$collections$Iterable*) nodes354));
                panda$collections$Iterator* $tmp366 = $tmp370;
                panda$collections$Iterator* $tmp365 = $tmp366;
                Iter$280$17364 = $tmp365;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp365));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp366));
                $l371:;
                ITable* $tmp374 = Iter$280$17364->$class->itable;
                while ($tmp374->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp374 = $tmp374->next;
                }
                $fn376 $tmp375 = $tmp374->methods[0];
                panda$core$Bit $tmp377 = $tmp375(Iter$280$17364);
                panda$core$Bit $tmp378 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp377);
                bool $tmp373 = $tmp378.value;
                if (!$tmp373) goto $l372;
                {
                    ITable* $tmp382 = Iter$280$17364->$class->itable;
                    while ($tmp382->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp382 = $tmp382->next;
                    }
                    $fn384 $tmp383 = $tmp382->methods[1];
                    panda$core$Object* $tmp385 = $tmp383(Iter$280$17364);
                    panda$core$Object* $tmp381 = $tmp385;
                    panda$json$JSON* $tmp380 = ((panda$json$JSON*) $tmp381);
                    n379 = $tmp380;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp380));
                    panda$core$Panda$unref$panda$core$Object($tmp381);
                    panda$core$String* $tmp390 = panda$core$String$convert$R$panda$core$String(separator361);
                    panda$core$String* $tmp389 = $tmp390;
                    panda$core$String* $tmp392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp389, &$s391);
                    panda$core$String* $tmp388 = $tmp392;
                    panda$core$String* $tmp393 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp388, ((panda$core$Object*) n379));
                    panda$core$String* $tmp387 = $tmp393;
                    panda$core$String* $tmp395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp387, &$s394);
                    panda$core$String* $tmp386 = $tmp395;
                    panda$core$MutableString$append$panda$core$String(result356, $tmp386);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp386));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp388));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp389));
                    {
                        panda$core$String* $tmp396 = separator361;
                        panda$core$String* $tmp397 = &$s398;
                        separator361 = $tmp397;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp397));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) n379));
                }
                goto $l371;
                $l372:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$280$17364));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp399, ((panda$core$UInt8) { 93 }));
            panda$core$MutableString$append$panda$core$Char8(result356, $tmp399);
            {
                panda$core$String* $tmp403 = panda$core$MutableString$finish$R$panda$core$String(result356);
                panda$core$String* $tmp402 = $tmp403;
                panda$core$String* $tmp401 = $tmp402;
                tmp24400 = $tmp401;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp401));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp402));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator361));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result356));
                }
                panda$core$String* $tmp404 = tmp24400;
                return $tmp404;
            }
        }
        }
        else {
        panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$259_9261->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp405.value) {
        {
            panda$core$String* $tmp407 = &$s408;
            panda$core$String* $tmp406 = $tmp407;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp407));
            return $tmp406;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
        }
        }
        }
        }
    }
}
void panda$json$JSON$cleanup(panda$json$JSON* self) {
    panda$json$JSON* $match$5_1409;
    panda$core$Int64 _f0411;
    panda$core$Real64 _f0414;
    panda$core$String* _f0417;
    panda$core$Bit _f0420;
    panda$collections$ImmutableHashMap* _f0423;
    panda$collections$ImmutableArray* _f0426;
    {
        $match$5_1409 = self;
        panda$core$Bit $tmp410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1409->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp410.value) {
        {
            panda$core$Int64* $tmp412 = ((panda$core$Int64*) ((char*) $match$5_1409->$data + 0));
            _f0411 = *$tmp412;
        }
        }
        else {
        panda$core$Bit $tmp413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1409->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp413.value) {
        {
            panda$core$Real64* $tmp415 = ((panda$core$Real64*) ((char*) $match$5_1409->$data + 0));
            _f0414 = *$tmp415;
        }
        }
        else {
        panda$core$Bit $tmp416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1409->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp416.value) {
        {
            panda$core$String** $tmp418 = ((panda$core$String**) ((char*) $match$5_1409->$data + 0));
            _f0417 = *$tmp418;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0417));
        }
        }
        else {
        panda$core$Bit $tmp419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1409->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp419.value) {
        {
            panda$core$Bit* $tmp421 = ((panda$core$Bit*) ((char*) $match$5_1409->$data + 0));
            _f0420 = *$tmp421;
        }
        }
        else {
        panda$core$Bit $tmp422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1409->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp422.value) {
        {
            panda$collections$ImmutableHashMap** $tmp424 = ((panda$collections$ImmutableHashMap**) ((char*) $match$5_1409->$data + 0));
            _f0423 = *$tmp424;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0423));
        }
        }
        else {
        panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1409->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp425.value) {
        {
            panda$collections$ImmutableArray** $tmp427 = ((panda$collections$ImmutableArray**) ((char*) $match$5_1409->$data + 0));
            _f0426 = *$tmp427;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0426));
        }
        }
        else {
        panda$core$Bit $tmp428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_1409->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp428.value) {
        {
        }
        }
        }
        }
        }
        }
        }
        }
    }
    panda$core$Object$cleanup(((panda$core$Object*) self));
}

