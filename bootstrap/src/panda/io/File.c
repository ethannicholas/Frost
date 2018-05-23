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

typedef panda$collections$Iterator* (*$fn25)(panda$io$InputStream*);
typedef panda$core$String* (*$fn127)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 13, 4119532389314393493, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

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
    panda$io$File* $returnValue6;
    panda$io$File* $tmp7;
    panda$io$File* $tmp8;
    panda$io$File* $tmp11;
    panda$io$File* $tmp12;
    panda$core$String* $tmp14;
    panda$core$String* $tmp15;
    panda$core$Bit $tmp5 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(p_path, &$s4);
    if ($tmp5.value) {
    {
        panda$io$File* $tmp9 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp9, p_path);
        $tmp8 = $tmp9;
        $tmp7 = $tmp8;
        $returnValue6 = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
        return $returnValue6;
    }
    }
    panda$io$File* $tmp13 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
    panda$core$String* $tmp17 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self->path, &$s16);
    $tmp15 = $tmp17;
    panda$core$String* $tmp18 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp15, p_path);
    $tmp14 = $tmp18;
    panda$io$File$init$panda$core$String($tmp13, $tmp14);
    $tmp12 = $tmp13;
    $tmp11 = $tmp12;
    $returnValue6 = $tmp11;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
    return $returnValue6;
}
panda$collections$Iterator* panda$io$File$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$File* self) {
    panda$collections$Iterator* $returnValue20;
    panda$collections$Iterator* $tmp21;
    panda$collections$Iterator* $tmp22;
    panda$io$InputStream* $tmp23;
    panda$io$InputStream* $tmp24 = panda$io$File$openInputStream$R$panda$io$InputStream(self);
    $tmp23 = $tmp24;
    panda$collections$Iterator* $tmp26 = (($fn25) $tmp23->$class->vtable[12])($tmp23);
    $tmp22 = $tmp26;
    $tmp21 = $tmp22;
    $returnValue20 = $tmp21;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
    return $returnValue20;
}
panda$io$File* panda$io$File$absolute$R$panda$io$File(panda$io$File* self) {
    panda$io$File* $returnValue28;
    panda$io$File* $tmp29;
    panda$io$File* $tmp30;
    panda$core$String* $tmp32;
    panda$io$File* $tmp31 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
    panda$core$String* $tmp33 = panda$io$File$absolutePath$R$panda$core$String(self);
    $tmp32 = $tmp33;
    panda$io$File$init$panda$core$String($tmp31, $tmp32);
    $tmp30 = $tmp31;
    $tmp29 = $tmp30;
    $returnValue28 = $tmp29;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp29));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp30));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
    return $returnValue28;
}
panda$io$File* panda$io$File$parent$R$panda$io$File$Q(panda$io$File* self) {
    panda$io$File* $returnValue37;
    panda$io$File* $tmp38;
    panda$io$File* $tmp42;
    panda$io$File* $tmp43;
    panda$io$File* $tmp44;
    panda$core$String$Index$nullable index49;
    panda$io$File* $tmp52;
    panda$io$File* $tmp53;
    panda$core$String* $tmp55;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp56;
    panda$io$File* $tmp59;
    panda$io$File* $tmp60;
    panda$io$File* $tmp61;
    panda$core$Bit $tmp36 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, &$s35);
    if ($tmp36.value) {
    {
        $tmp38 = NULL;
        $returnValue37 = $tmp38;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp38));
        return $returnValue37;
    }
    }
    panda$core$Bit $tmp41 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, &$s40);
    if ($tmp41.value) {
    {
        panda$io$File* $tmp45 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp45, &$s46);
        $tmp44 = $tmp45;
        panda$io$File* $tmp47 = panda$io$File$parent$R$panda$io$File$Q($tmp44);
        $tmp43 = $tmp47;
        $tmp42 = $tmp43;
        $returnValue37 = $tmp42;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
        return $returnValue37;
    }
    }
    panda$core$String$Index$nullable $tmp51 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->path, &$s50);
    index49 = $tmp51;
    if (((panda$core$Bit) { index49.nonnull }).value) {
    {
        panda$io$File* $tmp54 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp56, ((panda$core$String$Index$nullable) { .nonnull = false }), index49, ((panda$core$Bit) { false }));
        panda$core$String* $tmp57 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->path, $tmp56);
        $tmp55 = $tmp57;
        panda$io$File$init$panda$core$String($tmp54, $tmp55);
        $tmp53 = $tmp54;
        $tmp52 = $tmp53;
        $returnValue37 = $tmp52;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp52));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp53));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp55));
        return $returnValue37;
    }
    }
    else {
    {
        panda$io$File* $tmp62 = panda$io$File$absolute$R$panda$io$File(self);
        $tmp61 = $tmp62;
        panda$io$File* $tmp63 = panda$io$File$parent$R$panda$io$File$Q($tmp61);
        $tmp60 = $tmp63;
        $tmp59 = $tmp60;
        $returnValue37 = $tmp59;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp59));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp60));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
        return $returnValue37;
    }
    }
}
panda$core$String* panda$io$File$name$R$panda$core$String(panda$io$File* self) {
    panda$core$String$Index$nullable index65;
    panda$core$String* $returnValue68;
    panda$core$String* $tmp69;
    panda$core$String* $tmp70;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp71;
    panda$core$String* $tmp75;
    panda$core$String$Index$nullable $tmp67 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->path, &$s66);
    index65 = $tmp67;
    if (((panda$core$Bit) { index65.nonnull }).value) {
    {
        panda$core$String$Index $tmp72 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->path, ((panda$core$String$Index) index65.value));
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp71, ((panda$core$String$Index$nullable) { $tmp72, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp73 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->path, $tmp71);
        $tmp70 = $tmp73;
        $tmp69 = $tmp70;
        $returnValue68 = $tmp69;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp69));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
        return $returnValue68;
    }
    }
    else {
    {
        $tmp75 = self->path;
        $returnValue68 = $tmp75;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp75));
        return $returnValue68;
    }
    }
}
panda$core$String* panda$io$File$simpleName$R$panda$core$String(panda$io$File* self) {
    panda$core$String* result80 = NULL;
    panda$core$String* $tmp81;
    panda$core$String* $tmp82;
    panda$core$String$Index$nullable index84;
    panda$core$String* $returnValue87;
    panda$core$String* $tmp88;
    panda$core$String* $tmp91;
    panda$core$String* $tmp92;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp93;
    int $tmp79;
    {
        panda$core$String* $tmp83 = panda$io$File$name$R$panda$core$String(self);
        $tmp82 = $tmp83;
        $tmp81 = $tmp82;
        result80 = $tmp81;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp81));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp82));
        panda$core$String$Index$nullable $tmp86 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(result80, &$s85);
        index84 = $tmp86;
        if (((panda$core$Bit) { !index84.nonnull }).value) {
        {
            $tmp88 = result80;
            $returnValue87 = $tmp88;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp88));
            $tmp79 = 0;
            goto $l77;
            $l89:;
            return $returnValue87;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp93, ((panda$core$String$Index$nullable) { .nonnull = false }), index84, ((panda$core$Bit) { false }));
        panda$core$String* $tmp94 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(result80, $tmp93);
        $tmp92 = $tmp94;
        $tmp91 = $tmp92;
        $returnValue87 = $tmp91;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp91));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
        $tmp79 = 1;
        goto $l77;
        $l95:;
        return $returnValue87;
    }
    $l77:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result80));
    result80 = NULL;
    switch ($tmp79) {
        case 1: goto $l95;
        case 0: goto $l89;
    }
    $l97:;
}
panda$io$File* panda$io$File$changeExtension$panda$core$String$R$panda$io$File(panda$io$File* self, panda$core$String* p_ext) {
    panda$io$File* $returnValue98;
    panda$io$File* $tmp99;
    panda$io$File* $tmp100;
    panda$io$File* $tmp101;
    panda$core$String* $tmp103;
    panda$core$String* $tmp104;
    panda$io$File* $tmp102 = panda$io$File$parent$R$panda$io$File$Q(self);
    $tmp101 = $tmp102;
    panda$core$String* $tmp105 = panda$io$File$simpleName$R$panda$core$String(self);
    $tmp104 = $tmp105;
    panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp104, p_ext);
    $tmp103 = $tmp106;
    panda$io$File* $tmp107 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp101, $tmp103);
    $tmp100 = $tmp107;
    $tmp99 = $tmp100;
    $returnValue98 = $tmp99;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp99));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
    return $returnValue98;
}
void panda$io$File$createDirectories(panda$io$File* self) {
    panda$io$File* p112 = NULL;
    panda$io$File* $tmp113;
    panda$io$File* $tmp114;
    panda$core$Bit $tmp118;
    int $tmp111;
    {
        panda$io$File* $tmp115 = panda$io$File$parent$R$panda$io$File$Q(self);
        $tmp114 = $tmp115;
        $tmp113 = $tmp114;
        p112 = $tmp113;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp113));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
        bool $tmp116 = ((panda$core$Bit) { p112 != NULL }).value;
        if (!$tmp116) goto $l117;
        panda$io$File$exists$R$panda$core$Bit(&$tmp118, p112);
        panda$core$Bit $tmp119 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp118);
        $tmp116 = $tmp119.value;
        $l117:;
        panda$core$Bit $tmp120 = { $tmp116 };
        if ($tmp120.value) {
        {
            panda$io$File$createDirectories(p112);
        }
        }
        panda$io$File$createDirectory(self);
    }
    $tmp111 = -1;
    goto $l109;
    $l109:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p112));
    p112 = NULL;
    switch ($tmp111) {
        case -1: goto $l121;
    }
    $l121:;
}
panda$core$String* panda$io$File$readFully$R$panda$core$String(panda$io$File* self) {
    panda$core$String* $returnValue122;
    panda$core$String* $tmp123;
    panda$core$String* $tmp124;
    panda$io$InputStream* $tmp125;
    panda$io$InputStream* $tmp126 = panda$io$File$openInputStream$R$panda$io$InputStream(self);
    $tmp125 = $tmp126;
    panda$core$String* $tmp128 = (($fn127) $tmp125->$class->vtable[6])($tmp125);
    $tmp124 = $tmp128;
    $tmp123 = $tmp124;
    $returnValue122 = $tmp123;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp123));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp124));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp125));
    return $returnValue122;
}
panda$core$Bit panda$io$File$$EQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other) {
    panda$core$Bit $returnValue130;
    panda$core$Bit $tmp131 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, p_other->path);
    $returnValue130 = $tmp131;
    return $returnValue130;
}
panda$core$Bit panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other) {
    panda$core$Bit $returnValue133;
    panda$core$Bit $tmp134 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->path, p_other->path);
    $returnValue133 = $tmp134;
    return $returnValue133;
}
panda$core$Int64 panda$io$File$hash$R$panda$core$Int64(panda$io$File* self) {
    panda$core$Int64 $returnValue136;
    panda$core$Int64 $tmp137 = panda$core$String$hash$R$panda$core$Int64(self->path);
    $returnValue136 = $tmp137;
    return $returnValue136;
}
panda$core$String* panda$io$File$convert$R$panda$core$String(panda$io$File* self) {
    panda$core$String* $returnValue139;
    panda$core$String* $tmp140;
    $tmp140 = self->path;
    $returnValue139 = $tmp140;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp140));
    return $returnValue139;
}
void panda$io$File$cleanup(panda$io$File* self) {
    int $tmp144;
    {
    }
    $tmp144 = -1;
    goto $l142;
    $l142:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp144) {
        case -1: goto $l145;
    }
    $l145:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
}

