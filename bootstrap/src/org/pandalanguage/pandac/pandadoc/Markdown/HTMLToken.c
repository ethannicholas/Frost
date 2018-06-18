#include "org/pandalanguage/pandac/pandadoc/Markdown/HTMLToken.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"

static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class_type org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x48\x54\x4d\x4c\x54\x6f\x6b\x65\x6e", 52, -3956136468165552167, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* self) {
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $match$796_58 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp9;
    panda$core$Int64 $tmp10;
    panda$core$String* _f012 = NULL;
    panda$core$Int64 $tmp14;
    panda$core$String* _f016 = NULL;
    int $tmp4;
    {
        int $tmp7;
        {
            $tmp9 = self;
            $match$796_58 = $tmp9;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
            panda$core$Int64$init$builtin_int64(&$tmp10, 0);
            panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_58->$rawValue, $tmp10);
            if ($tmp11.value) {
            {
                panda$core$String** $tmp13 = ((panda$core$String**) ((char*) $match$796_58->$data + 0));
                _f012 = *$tmp13;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f012));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp14, 1);
            panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_58->$rawValue, $tmp14);
            if ($tmp15.value) {
            {
                panda$core$String** $tmp17 = ((panda$core$String**) ((char*) $match$796_58->$data + 0));
                _f016 = *$tmp17;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f016));
            }
            }
            }
        }
        $tmp7 = -1;
        goto $l5;
        $l5:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
        switch ($tmp7) {
            case -1: goto $l18;
        }
        $l18:;
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp4) {
        case -1: goto $l19;
    }
    $l19:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* self, panda$core$Int64 p_rv, panda$core$String* p_f0) {
    panda$core$String* $tmp20;
    panda$core$String* $tmp23;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp21 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp20 = *$tmp21;
        panda$core$String** $tmp22 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp23 = p_f0;
        *$tmp22 = $tmp23;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
    }
}





