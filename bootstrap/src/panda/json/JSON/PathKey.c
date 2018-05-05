#include "panda/json/JSON/PathKey.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/String/Index.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"


static panda$core$String $s1;
panda$json$JSON$PathKey$class_type panda$json$JSON$PathKey$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$json$JSON$PathKey$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79", 23, 7178919972541529313, NULL };

void panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$String$panda$core$String$Index(panda$json$JSON$PathKey* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$core$String$Index p_f1) {
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp3 = ((panda$core$String**) ((char*) self->$data + 0));
        panda$core$String* $tmp2 = *$tmp3;
        panda$core$String** $tmp4 = ((panda$core$String**) ((char*) self->$data + 0));
        panda$core$String* $tmp5 = p_f0;
        *$tmp4 = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    panda$core$String$Index* $tmp6 = ((panda$core$String$Index*) ((char*) self->$data + 8));
    *$tmp6 = p_f1;
}
void panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$Int64$panda$core$String$Index(panda$json$JSON$PathKey* self, panda$core$Int64 p_rv, panda$core$Int64 p_f0, panda$core$String$Index p_f1) {
    self->$rawValue = p_rv;
    panda$core$Int64* $tmp7 = ((panda$core$Int64*) ((char*) self->$data + 0));
    *$tmp7 = p_f0;
    panda$core$String$Index* $tmp8 = ((panda$core$String$Index*) ((char*) self->$data + 8));
    *$tmp8 = p_f1;
}
void panda$json$JSON$PathKey$cleanup(panda$json$JSON$PathKey* self) {
    panda$json$JSON$PathKey* $match$15_59;
    panda$core$String* _f011;
    panda$core$String$Index _f113;
    panda$core$Int64 _f016;
    panda$core$String$Index _f118;
    {
        $match$15_59 = self;
        panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15_59->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp10.value) {
        {
            panda$core$String** $tmp12 = ((panda$core$String**) ((char*) $match$15_59->$data + 0));
            _f011 = *$tmp12;
            panda$core$String$Index* $tmp14 = ((panda$core$String$Index*) ((char*) $match$15_59->$data + 8));
            _f113 = *$tmp14;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f011));
        }
        }
        else {
        panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15_59->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp15.value) {
        {
            panda$core$Int64* $tmp17 = ((panda$core$Int64*) ((char*) $match$15_59->$data + 0));
            _f016 = *$tmp17;
            panda$core$String$Index* $tmp19 = ((panda$core$String$Index*) ((char*) $match$15_59->$data + 8));
            _f118 = *$tmp19;
        }
        }
        }
    }
    panda$core$Object$cleanup(((panda$core$Object*) self));
}

