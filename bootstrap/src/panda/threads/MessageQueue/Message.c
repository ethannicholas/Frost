#include "panda/threads/MessageQueue/Message.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"


static panda$core$String $s1;
panda$threads$MessageQueue$Message$class_type panda$threads$MessageQueue$Message$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$threads$MessageQueue$Message$convert$R$panda$core$String, panda$threads$MessageQueue$Message$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 34, 6517097158175616105, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, 19192443532219350, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, 19192443532219350, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void panda$threads$MessageQueue$Message$init$panda$threads$MessageQueue$Message$T(panda$threads$MessageQueue$Message* self, panda$core$Immutable* p_payload) {
    panda$core$Immutable* $tmp2;
    panda$core$Immutable* $tmp3;
    self->payload = NULL;
    self->next = NULL;
    {
        $tmp2 = self->payload;
        $tmp3 = p_payload;
        self->payload = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
panda$core$String* panda$threads$MessageQueue$Message$convert$R$panda$core$String(panda$threads$MessageQueue$Message* self) {
    panda$core$String* $returnValue4;
    panda$core$String* $tmp5;
    panda$core$String* $tmp6;
    panda$core$String* $tmp7;
    panda$core$String* $tmp8;
    panda$core$String* $tmp9;
    panda$core$String* $tmp18;
    panda$core$String* $tmp19;
    panda$core$String* $tmp20;
    if (((panda$core$Bit) { self->next != NULL }).value) {
    {
        panda$core$String* $tmp11 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s10, ((panda$core$Object*) self->payload));
        $tmp9 = $tmp11;
        panda$core$String* $tmp13 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp9, &$s12);
        $tmp8 = $tmp13;
        panda$core$String* $tmp14 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp8, ((panda$core$Object*) self->next));
        $tmp7 = $tmp14;
        panda$core$String* $tmp16 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp7, &$s15);
        $tmp6 = $tmp16;
        $tmp5 = $tmp6;
        $returnValue4 = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
        return $returnValue4;
    }
    }
    panda$core$String* $tmp22 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s21, ((panda$core$Object*) self->payload));
    $tmp20 = $tmp22;
    panda$core$String* $tmp24 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp20, &$s23);
    $tmp19 = $tmp24;
    $tmp18 = $tmp19;
    $returnValue4 = $tmp18;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
    return $returnValue4;
}
void panda$threads$MessageQueue$Message$cleanup(panda$threads$MessageQueue$Message* self) {
    int $tmp28;
    {
    }
    $tmp28 = -1;
    goto $l26;
    $l26:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp28) {
        case -1: goto $l29;
    }
    $l29:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->payload));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->next));
}






