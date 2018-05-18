#include "panda/io/File.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Key.h"
#include "panda/core/Panda.h"
#include "panda/collections/Iterator.h"
#include "panda/io/InputStream.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/Int64.h"
panda$core$Bit panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim(panda$io$File* self, panda$core$Equatable* p0) {
    panda$core$Bit result = panda$io$File$$EQ$panda$io$File$R$panda$core$Bit(self, ((panda$io$File*) p0));
    return result;
}
panda$core$Bit panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit$shim(panda$io$File* self, panda$core$Equatable* p0) {
    panda$core$Bit result = panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit(self, ((panda$io$File*) p0));
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$io$File$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim, panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$io$File$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$io$File$_panda$core$Equatable, { panda$io$File$hash$R$panda$core$Int64} };

static panda$core$String $s1;
panda$io$File$class_type panda$io$File$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$io$File$_panda$collections$Key, { panda$io$File$convert$R$panda$core$String, panda$io$File$cleanup, panda$io$File$resolve$panda$core$String$R$panda$io$File, panda$io$File$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$File$absolutePath$R$panda$core$String, panda$io$File$absolute$R$panda$io$File, panda$io$File$parent$R$panda$io$File$Q, panda$io$File$name$R$panda$core$String, panda$io$File$simpleName$R$panda$core$String, panda$io$File$changeExtension$panda$core$String$R$panda$io$File, panda$io$File$exists$R$panda$core$Bit, panda$io$File$isDirectory$R$panda$core$Bit, panda$io$File$list$R$panda$collections$ListView$LTpanda$io$File$GT, panda$io$File$createDirectory, panda$io$File$createDirectories, panda$io$File$openInputStream$R$panda$io$InputStream, panda$io$File$openOutputStream$R$panda$io$OutputStream, panda$io$File$readFully$R$panda$core$String, panda$io$File$delete, panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim, panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit$shim, panda$io$File$hash$R$panda$core$Int64} };

typedef panda$collections$Iterator* (*$fn26)(panda$io$InputStream*);
typedef panda$core$String* (*$fn133)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 13, 4119532389314393493, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

void panda$io$File$init$panda$core$String(panda$io$File* self, panda$core$String* p_path) {
    panda$core$String* $tmp2;
    panda$core$String* $tmp3;
    self->path = NULL;
    {
        $tmp2 = self->path;
        $tmp3 = p_path;
        self->path = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
panda$io$File* panda$io$File$resolve$panda$core$String$R$panda$io$File(panda$io$File* self, panda$core$String* p_path) {
    panda$io$File* $finallyReturn5;
    panda$io$File* $tmp7;
    panda$io$File* $tmp8;
    panda$io$File* $finallyReturn10;
    panda$io$File* $tmp12;
    panda$io$File* $tmp13;
    panda$core$String* $tmp15;
    panda$core$String* $tmp16;
    panda$core$Bit $tmp5 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(p_path, &$s4);
    if ($tmp5.value) {
    {
        panda$io$File* $tmp9 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp9, p_path);
        $tmp8 = $tmp9;
        $tmp7 = $tmp8;
        $finallyReturn5 = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
        return $finallyReturn5;
    }
    }
    panda$io$File* $tmp14 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
    panda$core$String* $tmp18 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self->path, &$s17);
    $tmp16 = $tmp18;
    panda$core$String* $tmp19 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp16, p_path);
    $tmp15 = $tmp19;
    panda$io$File$init$panda$core$String($tmp14, $tmp15);
    $tmp13 = $tmp14;
    $tmp12 = $tmp13;
    $finallyReturn10 = $tmp12;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    return $finallyReturn10;
}
panda$collections$Iterator* panda$io$File$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$File* self) {
    panda$collections$Iterator* $finallyReturn20;
    panda$collections$Iterator* $tmp22;
    panda$collections$Iterator* $tmp23;
    panda$io$InputStream* $tmp24;
    panda$io$InputStream* $tmp25 = panda$io$File$openInputStream$R$panda$io$InputStream(self);
    $tmp24 = $tmp25;
    panda$collections$Iterator* $tmp27 = (($fn26) $tmp24->$class->vtable[12])($tmp24);
    $tmp23 = $tmp27;
    $tmp22 = $tmp23;
    $finallyReturn20 = $tmp22;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
    return $finallyReturn20;
}
panda$io$File* panda$io$File$absolute$R$panda$io$File(panda$io$File* self) {
    panda$io$File* $finallyReturn28;
    panda$io$File* $tmp30;
    panda$io$File* $tmp31;
    panda$core$String* $tmp33;
    panda$io$File* $tmp32 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
    panda$core$String* $tmp34 = panda$io$File$absolutePath$R$panda$core$String(self);
    $tmp33 = $tmp34;
    panda$io$File$init$panda$core$String($tmp32, $tmp33);
    $tmp31 = $tmp32;
    $tmp30 = $tmp31;
    $finallyReturn28 = $tmp30;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
    return $finallyReturn28;
}
panda$io$File* panda$io$File$parent$R$panda$io$File$Q(panda$io$File* self) {
    panda$io$File* $finallyReturn37;
    panda$io$File* $tmp39;
    panda$io$File* $finallyReturn42;
    panda$io$File* $tmp44;
    panda$io$File* $tmp45;
    panda$io$File* $tmp46;
    panda$core$String$Index$nullable index51;
    panda$io$File* $finallyReturn53;
    panda$io$File* $tmp55;
    panda$io$File* $tmp56;
    panda$core$String* $tmp58;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp59;
    panda$io$File* $finallyReturn61;
    panda$io$File* $tmp63;
    panda$io$File* $tmp64;
    panda$io$File* $tmp65;
    panda$core$Bit $tmp37 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, &$s36);
    if ($tmp37.value) {
    {
        $tmp39 = NULL;
        $finallyReturn37 = $tmp39;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp39));
        return $finallyReturn37;
    }
    }
    panda$core$Bit $tmp42 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, &$s41);
    if ($tmp42.value) {
    {
        panda$io$File* $tmp47 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp47, &$s48);
        $tmp46 = $tmp47;
        panda$io$File* $tmp49 = panda$io$File$parent$R$panda$io$File$Q($tmp46);
        $tmp45 = $tmp49;
        $tmp44 = $tmp45;
        $finallyReturn42 = $tmp44;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
        return $finallyReturn42;
    }
    }
    panda$core$String$Index$nullable $tmp53 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->path, &$s52);
    index51 = $tmp53;
    if (((panda$core$Bit) { index51.nonnull }).value) {
    {
        panda$io$File* $tmp57 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp59, ((panda$core$String$Index$nullable) { .nonnull = false }), index51, ((panda$core$Bit) { false }));
        panda$core$String* $tmp60 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->path, $tmp59);
        $tmp58 = $tmp60;
        panda$io$File$init$panda$core$String($tmp57, $tmp58);
        $tmp56 = $tmp57;
        $tmp55 = $tmp56;
        $finallyReturn53 = $tmp55;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp55));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp56));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
        return $finallyReturn53;
    }
    }
    else {
    {
        panda$io$File* $tmp66 = panda$io$File$absolute$R$panda$io$File(self);
        $tmp65 = $tmp66;
        panda$io$File* $tmp67 = panda$io$File$parent$R$panda$io$File$Q($tmp65);
        $tmp64 = $tmp67;
        $tmp63 = $tmp64;
        $finallyReturn61 = $tmp63;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp63));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
        return $finallyReturn61;
    }
    }
}
panda$core$String* panda$io$File$name$R$panda$core$String(panda$io$File* self) {
    panda$core$String$Index$nullable index69;
    panda$core$String* $finallyReturn71;
    panda$core$String* $tmp73;
    panda$core$String* $tmp74;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp75;
    panda$core$String* $finallyReturn78;
    panda$core$String* $tmp80;
    panda$core$String$Index$nullable $tmp71 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->path, &$s70);
    index69 = $tmp71;
    if (((panda$core$Bit) { index69.nonnull }).value) {
    {
        panda$core$String$Index $tmp76 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->path, ((panda$core$String$Index) index69.value));
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp75, ((panda$core$String$Index$nullable) { $tmp76, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp77 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->path, $tmp75);
        $tmp74 = $tmp77;
        $tmp73 = $tmp74;
        $finallyReturn71 = $tmp73;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp73));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
        return $finallyReturn71;
    }
    }
    else {
    {
        $tmp80 = self->path;
        $finallyReturn78 = $tmp80;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp80));
        return $finallyReturn78;
    }
    }
}
panda$core$String* panda$io$File$simpleName$R$panda$core$String(panda$io$File* self) {
    panda$core$String* result85 = NULL;
    panda$core$String* $tmp86;
    panda$core$String* $tmp87;
    panda$core$String$Index$nullable index89;
    panda$core$String* $finallyReturn91;
    panda$core$String* $tmp93;
    panda$core$String* $finallyReturn95;
    panda$core$String* $tmp97;
    panda$core$String* $tmp98;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp99;
    int $tmp84;
    {
        panda$core$String* $tmp88 = panda$io$File$name$R$panda$core$String(self);
        $tmp87 = $tmp88;
        $tmp86 = $tmp87;
        result85 = $tmp86;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
        panda$core$String$Index$nullable $tmp91 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(result85, &$s90);
        index89 = $tmp91;
        if (((panda$core$Bit) { !index89.nonnull }).value) {
        {
            $tmp93 = result85;
            $finallyReturn91 = $tmp93;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
            $tmp84 = 0;
            goto $l82;
            $l94:;
            return $finallyReturn91;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp99, ((panda$core$String$Index$nullable) { .nonnull = false }), index89, ((panda$core$Bit) { false }));
        panda$core$String* $tmp100 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(result85, $tmp99);
        $tmp98 = $tmp100;
        $tmp97 = $tmp98;
        $finallyReturn95 = $tmp97;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp97));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
        $tmp84 = 1;
        goto $l82;
        $l101:;
        return $finallyReturn95;
    }
    $l82:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result85));
    result85 = NULL;
    switch ($tmp84) {
        case 0: goto $l94;
        case 1: goto $l101;
    }
    $l103:;
}
panda$io$File* panda$io$File$changeExtension$panda$core$String$R$panda$io$File(panda$io$File* self, panda$core$String* p_ext) {
    panda$io$File* $finallyReturn103;
    panda$io$File* $tmp105;
    panda$io$File* $tmp106;
    panda$io$File* $tmp107;
    panda$core$String* $tmp109;
    panda$core$String* $tmp110;
    panda$io$File* $tmp108 = panda$io$File$parent$R$panda$io$File$Q(self);
    $tmp107 = $tmp108;
    panda$core$String* $tmp111 = panda$io$File$simpleName$R$panda$core$String(self);
    $tmp110 = $tmp111;
    panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp110, p_ext);
    $tmp109 = $tmp112;
    panda$io$File* $tmp113 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp107, $tmp109);
    $tmp106 = $tmp113;
    $tmp105 = $tmp106;
    $finallyReturn103 = $tmp105;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp109));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp107));
    return $finallyReturn103;
}
void panda$io$File$createDirectories(panda$io$File* self) {
    panda$io$File* p118 = NULL;
    panda$io$File* $tmp119;
    panda$io$File* $tmp120;
    panda$core$Bit $tmp124;
    int $tmp117;
    {
        panda$io$File* $tmp121 = panda$io$File$parent$R$panda$io$File$Q(self);
        $tmp120 = $tmp121;
        $tmp119 = $tmp120;
        p118 = $tmp119;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp119));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp120));
        bool $tmp122 = ((panda$core$Bit) { p118 != NULL }).value;
        if (!$tmp122) goto $l123;
        panda$io$File$exists$R$panda$core$Bit(&$tmp124, p118);
        panda$core$Bit $tmp125 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp124);
        $tmp122 = $tmp125.value;
        $l123:;
        panda$core$Bit $tmp126 = { $tmp122 };
        if ($tmp126.value) {
        {
            panda$io$File$createDirectories(p118);
        }
        }
        panda$io$File$createDirectory(self);
    }
    $tmp117 = -1;
    goto $l115;
    $l115:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p118));
    p118 = NULL;
    switch ($tmp117) {
        case -1: goto $l127;
    }
    $l127:;
}
panda$core$String* panda$io$File$readFully$R$panda$core$String(panda$io$File* self) {
    panda$core$String* $finallyReturn127;
    panda$core$String* $tmp129;
    panda$core$String* $tmp130;
    panda$io$InputStream* $tmp131;
    panda$io$InputStream* $tmp132 = panda$io$File$openInputStream$R$panda$io$InputStream(self);
    $tmp131 = $tmp132;
    panda$core$String* $tmp134 = (($fn133) $tmp131->$class->vtable[6])($tmp131);
    $tmp130 = $tmp134;
    $tmp129 = $tmp130;
    $finallyReturn127 = $tmp129;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp129));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp130));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
    return $finallyReturn127;
}
panda$core$Bit panda$io$File$$EQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other) {
    panda$core$Bit $finallyReturn135;
    panda$core$Bit $tmp137 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, p_other->path);
    $finallyReturn135 = $tmp137;
    return $finallyReturn135;
}
panda$core$Bit panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other) {
    panda$core$Bit $finallyReturn138;
    panda$core$Bit $tmp140 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->path, p_other->path);
    $finallyReturn138 = $tmp140;
    return $finallyReturn138;
}
panda$core$Int64 panda$io$File$hash$R$panda$core$Int64(panda$io$File* self) {
    panda$core$Int64 $finallyReturn141;
    panda$core$Int64 $tmp143 = panda$core$String$hash$R$panda$core$Int64(self->path);
    $finallyReturn141 = $tmp143;
    return $finallyReturn141;
}
panda$core$String* panda$io$File$convert$R$panda$core$String(panda$io$File* self) {
    panda$core$String* $finallyReturn144;
    panda$core$String* $tmp146;
    $tmp146 = self->path;
    $finallyReturn144 = $tmp146;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp146));
    return $finallyReturn144;
}
void panda$io$File$cleanup(panda$io$File* self) {
    int $tmp150;
    {
    }
    $tmp150 = -1;
    goto $l148;
    $l148:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp150) {
        case -1: goto $l151;
    }
    $l151:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
}

