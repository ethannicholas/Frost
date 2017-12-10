#include "org/pandalanguage/plex/runtime/DFA.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/plex/runtime/RawToken.h"
#include "panda/core/String.h"
#include "panda/collections/ListView.h"
#include "panda/core/Bit.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"


org$pandalanguage$plex$runtime$DFA$class_type org$pandalanguage$plex$runtime$DFA$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken} };

typedef panda$core$Int64 (*$fn11)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn18)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn24)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x74\x6F\x6B\x65\x6E\x20", 14, 1 };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

void org$pandalanguage$plex$runtime$DFA$init$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts) {
    org$pandalanguage$plex$runtime$RawToken* $tmp1 = (org$pandalanguage$plex$runtime$RawToken*) malloc(56);
    $tmp1->$class = (panda$core$Class*) &org$pandalanguage$plex$runtime$RawToken$class;
    $tmp1->refCount.value = 1;
    org$pandalanguage$plex$runtime$RawToken$init($tmp1);
    self->rawToken = $tmp1;
    self->offset = ((panda$core$Int64) { 0 });
    self->line = ((panda$core$Int64) { 1 });
    self->column = ((panda$core$Int64) { 1 });
    org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(self, &$s3, p_stateCount, p_transitions, p_accepts);
}
void org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* self, panda$core$String* p_source, panda$core$Int64 p_stateCount, panda$core$Int64** p_transitions, panda$core$Int64* p_accepts) {
    org$pandalanguage$plex$runtime$RawToken* $tmp4 = (org$pandalanguage$plex$runtime$RawToken*) malloc(56);
    $tmp4->$class = (panda$core$Class*) &org$pandalanguage$plex$runtime$RawToken$class;
    $tmp4->refCount.value = 1;
    org$pandalanguage$plex$runtime$RawToken$init($tmp4);
    self->rawToken = $tmp4;
    self->offset = ((panda$core$Int64) { 0 });
    self->line = ((panda$core$Int64) { 1 });
    self->column = ((panda$core$Int64) { 1 });
    self->source = p_source;
    panda$collections$ListView* $tmp6 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_source);
    self->utf8 = $tmp6;
    self->offset = ((panda$core$Int64) { 0 });
    self->stateCount = p_stateCount;
    self->transitions = p_transitions;
    self->accepts = p_accepts;
}
org$pandalanguage$plex$runtime$RawToken* org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken(org$pandalanguage$plex$runtime$DFA* self) {
    panda$core$Int64 state7;
    panda$core$Int64 startOffset8;
    panda$core$Char8 c21;
    panda$core$Int64 newAccept42;
    state7 = ((panda$core$Int64) { 1 });
    startOffset8 = self->offset;
    ITable* $tmp9 = ((panda$collections$CollectionView*) self->utf8)->$class->itable;
    while ($tmp9->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp9 = $tmp9->next;
    }
    $fn11 $tmp10 = $tmp9->methods[0];
    panda$core$Int64 $tmp12 = $tmp10(((panda$collections$CollectionView*) self->utf8));
    panda$core$Bit $tmp13 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->offset, $tmp12);
    if ($tmp13.value) {
    {
        self->rawToken->kind = ((panda$core$Int64) { 0 });
        self->rawToken->offset = startOffset8;
        self->rawToken->length = ((panda$core$Int64) { 0 });
        self->rawToken->line = self->line;
        self->rawToken->column = self->column;
        return self->rawToken;
    }
    }
    self->rawToken->kind = ((panda$core$Int64) { -1 });
    self->rawToken->offset = startOffset8;
    self->rawToken->length = ((panda$core$Int64) { 1 });
    self->rawToken->line = self->line;
    self->rawToken->column = self->column;
    $l14:;
    ITable* $tmp16 = ((panda$collections$CollectionView*) self->utf8)->$class->itable;
    while ($tmp16->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp16 = $tmp16->next;
    }
    $fn18 $tmp17 = $tmp16->methods[0];
    panda$core$Int64 $tmp19 = $tmp17(((panda$collections$CollectionView*) self->utf8));
    panda$core$Bit $tmp20 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->offset, $tmp19);
    if (!$tmp20.value) goto $l15;
    {
        ITable* $tmp22 = self->utf8->$class->itable;
        while ($tmp22->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp22 = $tmp22->next;
        }
        $fn24 $tmp23 = $tmp22->methods[0];
        panda$core$Object* $tmp25 = $tmp23(self->utf8, self->offset);
        c21 = ((panda$core$Char8$wrapper*) $tmp25)->value;
        panda$core$UInt8 $tmp26 = panda$core$Char8$convert$R$panda$core$UInt8(c21);
        panda$core$Bit $tmp27 = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit($tmp26, ((panda$core$UInt8) { 127 }));
        if ($tmp27.value) {
        {
            panda$core$UInt8 $tmp29 = panda$core$Char8$convert$R$panda$core$UInt8(c21);
            panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s28, ((panda$core$Object*) wrap_panda$core$UInt8($tmp29)));
            panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp30, &$s31);
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp32));
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        panda$core$Int64 $tmp33 = panda$core$Char8$convert$R$panda$core$Int64(c21);
        state7 = self->transitions[$tmp33.value][state7.value];
        panda$core$Bit $tmp34 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(state7, ((panda$core$Int64) { 0 }));
        if ($tmp34.value) {
        {
            panda$core$Int64 $tmp35 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->offset, ((panda$core$Int64) { 1 }));
            self->offset = $tmp35;
            panda$core$UInt8 $tmp36 = panda$core$Char8$convert$R$panda$core$UInt8(c21);
            switch ($tmp36.value) {
                case 10:
                {
                    panda$core$Int64 $tmp37 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->line, ((panda$core$Int64) { 1 }));
                    self->line = $tmp37;
                    self->column = ((panda$core$Int64) { 1 });
                }
                break;
                case 9:
                {
                    panda$core$Int64 $tmp38 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp39 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp38);
                    panda$core$Int64 $tmp40 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, $tmp39);
                    self->column = $tmp40;
                }
                break;
                default:
                {
                    panda$core$Int64 $tmp41 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->column, ((panda$core$Int64) { 1 }));
                    self->column = $tmp41;
                }
            }
            newAccept42 = self->accepts[state7.value];
            panda$core$Bit $tmp43 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(newAccept42, ((panda$core$Int64) { -1 }));
            if ($tmp43.value) {
            {
                self->rawToken->kind = newAccept42;
                panda$core$Int64 $tmp44 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->offset, startOffset8);
                self->rawToken->length = $tmp44;
            }
            }
        }
        }
        else {
        {
            goto $l15;
        }
        }
    }
    goto $l14;
    $l15:;
    panda$core$Int64 $tmp45 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(startOffset8, self->rawToken->length);
    self->offset = $tmp45;
    return self->rawToken;
}

