#include "panda/json/JSON/Node.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Real64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/collections/ImmutableHashMap.h"
#include "panda/collections/ImmutableArray.h"


static panda$core$String $s1;
panda$json$JSON$Node$class_type panda$json$JSON$Node$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$json$JSON$Node$convert$R$panda$core$String, panda$json$JSON$Node$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x4e\x6f\x64\x65", 20, 3252596462405175165, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };

void panda$json$JSON$Node$init$panda$core$Int64$panda$core$Int64(panda$json$JSON$Node* self, panda$core$Int64 p_rv, panda$core$Int64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Int64* $tmp2 = ((panda$core$Int64*) ((char*) self->$data + 0));
    *$tmp2 = p_f0;
}
void panda$json$JSON$Node$init$panda$core$Int64$panda$core$Real64(panda$json$JSON$Node* self, panda$core$Int64 p_rv, panda$core$Real64 p_f0) {
    self->$rawValue = p_rv;
    panda$core$Real64* $tmp3 = ((panda$core$Real64*) ((char*) self->$data + 0));
    *$tmp3 = p_f0;
}
void panda$json$JSON$Node$init$panda$core$Int64$panda$core$String(panda$json$JSON$Node* self, panda$core$Int64 p_rv, panda$core$String* p_f0) {
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
void panda$json$JSON$Node$init$panda$core$Int64$panda$core$Bit(panda$json$JSON$Node* self, panda$core$Int64 p_rv, panda$core$Bit p_f0) {
    self->$rawValue = p_rv;
    panda$core$Bit* $tmp8 = ((panda$core$Bit*) ((char*) self->$data + 0));
    *$tmp8 = p_f0;
}
void panda$json$JSON$Node$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$Node$GT(panda$json$JSON$Node* self, panda$core$Int64 p_rv, panda$collections$ImmutableHashMap* p_f0) {
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
void panda$json$JSON$Node$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$Node$GT(panda$json$JSON$Node* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
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
void panda$json$JSON$Node$init$panda$core$Int64(panda$json$JSON$Node* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}
panda$core$String* panda$json$JSON$Node$convert$R$panda$core$String(panda$json$JSON$Node* self) {
    panda$json$JSON$Node* $match$17_1317;
    panda$core$Int64 value19;
    panda$core$Real64 value26;
    panda$core$String* value33;
    panda$core$Bit value41;
    {
        $match$17_1317 = self;
        panda$core$Bit $tmp18 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$17_1317->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp18.value) {
        {
            panda$core$Int64* $tmp20 = ((panda$core$Int64*) ((char*) $match$17_1317->$data + 0));
            value19 = *$tmp20;
            panda$core$String* $tmp24 = panda$core$Int64$convert$R$panda$core$String(value19);
            panda$core$String* $tmp23 = $tmp24;
            panda$core$String* $tmp22 = $tmp23;
            panda$core$String* $tmp21 = $tmp22;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
            return $tmp21;
        }
        }
        else {
        panda$core$Bit $tmp25 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$17_1317->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp25.value) {
        {
            panda$core$Real64* $tmp27 = ((panda$core$Real64*) ((char*) $match$17_1317->$data + 0));
            value26 = *$tmp27;
            panda$core$String* $tmp31 = panda$core$Real64$convert$R$panda$core$String(value26);
            panda$core$String* $tmp30 = $tmp31;
            panda$core$String* $tmp29 = $tmp30;
            panda$core$String* $tmp28 = $tmp29;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp29));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp30));
            return $tmp28;
        }
        }
        else {
        panda$core$Bit $tmp32 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$17_1317->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp32.value) {
        {
            panda$core$String** $tmp34 = ((panda$core$String**) ((char*) $match$17_1317->$data + 0));
            value33 = *$tmp34;
            panda$core$String* $tmp39 = panda$core$String$format$panda$core$String$R$panda$core$String(value33, &$s38);
            panda$core$String* $tmp37 = $tmp39;
            panda$core$String* $tmp36 = $tmp37;
            panda$core$String* $tmp35 = $tmp36;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
            return $tmp35;
        }
        }
        else {
        panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$17_1317->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp40.value) {
        {
            panda$core$Bit* $tmp42 = ((panda$core$Bit*) ((char*) $match$17_1317->$data + 0));
            value41 = *$tmp42;
            panda$core$String* $tmp46 = panda$core$Bit$convert$R$panda$core$String(value41);
            panda$core$String* $tmp45 = $tmp46;
            panda$core$String* $tmp44 = $tmp45;
            panda$core$String* $tmp43 = $tmp44;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
            return $tmp43;
        }
        }
        }
        }
        }
    }
}
void panda$json$JSON$Node$cleanup(panda$json$JSON$Node* self) {
    panda$json$JSON$Node* $match$6_547;
    panda$core$Int64 _f049;
    panda$core$Real64 _f052;
    panda$core$String* _f055;
    panda$core$Bit _f058;
    panda$collections$ImmutableHashMap* _f061;
    panda$collections$ImmutableArray* _f064;
    {
        $match$6_547 = self;
        panda$core$Bit $tmp48 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6_547->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp48.value) {
        {
            panda$core$Int64* $tmp50 = ((panda$core$Int64*) ((char*) $match$6_547->$data + 0));
            _f049 = *$tmp50;
        }
        }
        else {
        panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6_547->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp51.value) {
        {
            panda$core$Real64* $tmp53 = ((panda$core$Real64*) ((char*) $match$6_547->$data + 0));
            _f052 = *$tmp53;
        }
        }
        else {
        panda$core$Bit $tmp54 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6_547->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp54.value) {
        {
            panda$core$String** $tmp56 = ((panda$core$String**) ((char*) $match$6_547->$data + 0));
            _f055 = *$tmp56;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f055));
        }
        }
        else {
        panda$core$Bit $tmp57 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6_547->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp57.value) {
        {
            panda$core$Bit* $tmp59 = ((panda$core$Bit*) ((char*) $match$6_547->$data + 0));
            _f058 = *$tmp59;
        }
        }
        else {
        panda$core$Bit $tmp60 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6_547->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp60.value) {
        {
            panda$collections$ImmutableHashMap** $tmp62 = ((panda$collections$ImmutableHashMap**) ((char*) $match$6_547->$data + 0));
            _f061 = *$tmp62;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f061));
        }
        }
        else {
        panda$core$Bit $tmp63 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6_547->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp63.value) {
        {
            panda$collections$ImmutableArray** $tmp65 = ((panda$collections$ImmutableArray**) ((char*) $match$6_547->$data + 0));
            _f064 = *$tmp65;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f064));
        }
        }
        else {
        panda$core$Bit $tmp66 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6_547->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp66.value) {
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

