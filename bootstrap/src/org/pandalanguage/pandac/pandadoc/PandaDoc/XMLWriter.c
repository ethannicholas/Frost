#include "org/pandalanguage/pandac/pandadoc/PandaDoc/XMLWriter.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/io/OutputStream.h"
#include "panda/collections/Stack.h"
#include "panda/core/Panda.h"
#include "panda/io/IndentedOutputStream.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"

static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$class_type org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$cleanup, org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$open$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$close$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$write$panda$core$String$panda$core$String} };

typedef void (*$fn15)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn26)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn49)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x50\x61\x6e\x64\x61\x44\x6f\x63\x2e\x58\x4d\x4c\x57\x72\x69\x74\x65\x72", 52, -2495968587500853656, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x26\x67\x74", 4, 143609996, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x6e\x64\x61\x44\x6f\x63\x2e\x70\x61\x6e\x64\x61", 14, 7865514786338889265, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

void org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$init$panda$io$OutputStream(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* self, panda$io$OutputStream* p_out) {
    panda$collections$Stack* $tmp2;
    panda$collections$Stack* $tmp3;
    panda$io$IndentedOutputStream* $tmp5;
    panda$io$IndentedOutputStream* $tmp6;
    panda$io$IndentedOutputStream* $tmp7;
    self->out = NULL;
    self->stack = NULL;
    panda$collections$Stack* $tmp4 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
    panda$collections$Stack$init($tmp4);
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->stack = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    {
        $tmp5 = self->out;
        panda$io$IndentedOutputStream* $tmp8 = (panda$io$IndentedOutputStream*) pandaObjectAlloc(72, (panda$core$Class*) &panda$io$IndentedOutputStream$class);
        panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp8, p_out);
        $tmp7 = $tmp8;
        $tmp6 = $tmp7;
        self->out = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
    }
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$open$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* self, panda$core$String* p_tag) {
    panda$core$String* $tmp9;
    panda$core$String* $tmp10;
    panda$core$Int64 $tmp16;
    panda$core$String* $tmp12 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s11, p_tag);
    $tmp10 = $tmp12;
    panda$core$String* $tmp14 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp10, &$s13);
    $tmp9 = $tmp14;
    (($fn15) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp9);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    panda$core$Int64$init$builtin_int64(&$tmp16, 1);
    panda$core$Int64 $tmp17 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->out->level, $tmp16);
    self->out->level = $tmp17;
    panda$collections$Stack$push$panda$collections$Stack$T(self->stack, ((panda$core$Object*) p_tag));
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$close$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* self, panda$core$String* p_tag) {
    panda$core$Int64 $tmp18;
    panda$core$String* $tmp20;
    panda$core$String* $tmp21;
    panda$core$Int64$init$builtin_int64(&$tmp18, 1);
    panda$core$Int64 $tmp19 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->out->level, $tmp18);
    self->out->level = $tmp19;
    panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s22, p_tag);
    $tmp21 = $tmp23;
    panda$core$String* $tmp25 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp21, &$s24);
    $tmp20 = $tmp25;
    (($fn26) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp20);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$collections$Stack$pop$panda$collections$Stack$T(self->stack, ((panda$core$Object*) p_tag));
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$write$panda$core$String$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* self, panda$core$String* p_tag, panda$core$String* p_text) {
    panda$core$String* $tmp33;
    panda$core$String* $tmp34;
    panda$core$String* $tmp35;
    panda$core$String* $tmp36;
    panda$core$String* $tmp37;
    panda$core$String* $tmp38;
    panda$core$Bit $tmp28 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_text, &$s27);
    panda$core$Bit $tmp29 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp28);
    if ($tmp29.value) goto $l30; else goto $l31;
    $l31:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s32, (panda$core$Int64) { 36 });
    abort();
    $l30:;
    panda$core$String* $tmp40 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s39, p_tag);
    $tmp38 = $tmp40;
    panda$core$String* $tmp42 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp38, &$s41);
    $tmp37 = $tmp42;
    panda$core$String* $tmp43 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp37, p_text);
    $tmp36 = $tmp43;
    panda$core$String* $tmp45 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp36, &$s44);
    $tmp35 = $tmp45;
    panda$core$String* $tmp46 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp35, p_tag);
    $tmp34 = $tmp46;
    panda$core$String* $tmp48 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp34, &$s47);
    $tmp33 = $tmp48;
    (($fn49) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp33);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$cleanup(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* self) {
    int $tmp52;
    {
    }
    $tmp52 = -1;
    goto $l50;
    $l50:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp52) {
        case -1: goto $l53;
    }
    $l53:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->stack));
}





