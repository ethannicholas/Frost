#include "panda/io/File.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Key.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/collections/Iterator.h"
#include "panda/io/InputStream.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/io/OutputStream.h"
#include "panda/core/Int64.h"
__attribute__((weak)) panda$core$Bit panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim(panda$io$File* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$io$File$$EQ$panda$io$File$R$panda$core$Bit(p0, ((panda$io$File*) p1));

    return result;
}
__attribute__((weak)) panda$core$Bit panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit$shim(panda$io$File* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit(p0, ((panda$io$File*) p1));

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$io$File$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim, panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$io$File$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$io$File$_panda$core$Equatable, { panda$io$File$hash$R$panda$core$Int64} };

static panda$core$String $s1;
panda$io$File$class_type panda$io$File$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$io$File$_panda$collections$Key, { panda$io$File$convert$R$panda$core$String, panda$io$File$cleanup, panda$io$File$resolve$panda$core$String$R$panda$io$File, panda$io$File$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$File$absolutePath$R$panda$core$String, panda$io$File$absolute$R$panda$io$File, panda$io$File$parent$R$panda$io$File$Q, panda$io$File$name$R$panda$core$String, panda$io$File$simpleName$R$panda$core$String, panda$io$File$changeExtension$panda$core$String$R$panda$io$File, panda$io$File$exists$R$panda$core$Bit, panda$io$File$isDirectory$R$panda$core$Bit, panda$io$File$list$R$panda$collections$ListView$LTpanda$io$File$GT, panda$io$File$createDirectory, panda$io$File$createDirectories, panda$io$File$openInputStream$R$panda$io$InputStream, panda$io$File$openOutputStream$R$panda$io$OutputStream, panda$io$File$readFully$R$panda$core$String, panda$io$File$write$panda$core$String, panda$io$File$delete, panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim, panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit$shim, panda$io$File$hash$R$panda$core$Int64} };

typedef panda$collections$Iterator* (*$fn25)(panda$io$InputStream*);
typedef panda$core$String* (*$fn130)(panda$io$InputStream*);
typedef void (*$fn135)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn142)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 13, 4119532389314393493, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

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
    panda$collections$Iterator* $tmp26 = (($fn25) $tmp23->$class->vtable[13])($tmp23);
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
    panda$core$Bit $tmp57;
    panda$io$File* $tmp60;
    panda$io$File* $tmp61;
    panda$io$File* $tmp62;
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
        panda$core$Bit$init$builtin_bit(&$tmp57, false);
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp56, ((panda$core$String$Index$nullable) { .nonnull = false }), index49, $tmp57);
        panda$core$String* $tmp58 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->path, $tmp56);
        $tmp55 = $tmp58;
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
        panda$io$File* $tmp63 = panda$io$File$absolute$R$panda$io$File(self);
        $tmp62 = $tmp63;
        panda$io$File* $tmp64 = panda$io$File$parent$R$panda$io$File$Q($tmp62);
        $tmp61 = $tmp64;
        $tmp60 = $tmp61;
        $returnValue37 = $tmp60;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp60));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp62));
        return $returnValue37;
    }
    }
    abort();
}
panda$core$String* panda$io$File$name$R$panda$core$String(panda$io$File* self) {
    panda$core$String$Index$nullable index66;
    panda$core$String* $returnValue69;
    panda$core$String* $tmp70;
    panda$core$String* $tmp71;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp72;
    panda$core$Bit $tmp74;
    panda$core$String* $tmp77;
    panda$core$String$Index$nullable $tmp68 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->path, &$s67);
    index66 = $tmp68;
    if (((panda$core$Bit) { index66.nonnull }).value) {
    {
        panda$core$String$Index $tmp73 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->path, ((panda$core$String$Index) index66.value));
        panda$core$Bit$init$builtin_bit(&$tmp74, false);
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp72, ((panda$core$String$Index$nullable) { $tmp73, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp74);
        panda$core$String* $tmp75 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->path, $tmp72);
        $tmp71 = $tmp75;
        $tmp70 = $tmp71;
        $returnValue69 = $tmp70;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
        return $returnValue69;
    }
    }
    else {
    {
        $tmp77 = self->path;
        $returnValue69 = $tmp77;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp77));
        return $returnValue69;
    }
    }
    abort();
}
panda$core$String* panda$io$File$simpleName$R$panda$core$String(panda$io$File* self) {
    panda$core$String* result82 = NULL;
    panda$core$String* $tmp83;
    panda$core$String* $tmp84;
    panda$core$String$Index$nullable index86;
    panda$core$String* $returnValue89;
    panda$core$String* $tmp90;
    panda$core$String* $tmp93;
    panda$core$String* $tmp94;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp95;
    panda$core$Bit $tmp96;
    int $tmp81;
    {
        panda$core$String* $tmp85 = panda$io$File$name$R$panda$core$String(self);
        $tmp84 = $tmp85;
        $tmp83 = $tmp84;
        result82 = $tmp83;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp83));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
        panda$core$String$Index$nullable $tmp88 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(result82, &$s87);
        index86 = $tmp88;
        if (((panda$core$Bit) { !index86.nonnull }).value) {
        {
            $tmp90 = result82;
            $returnValue89 = $tmp90;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp90));
            $tmp81 = 0;
            goto $l79;
            $l91:;
            return $returnValue89;
        }
        }
        panda$core$Bit$init$builtin_bit(&$tmp96, false);
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp95, ((panda$core$String$Index$nullable) { .nonnull = false }), index86, $tmp96);
        panda$core$String* $tmp97 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(result82, $tmp95);
        $tmp94 = $tmp97;
        $tmp93 = $tmp94;
        $returnValue89 = $tmp93;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
        $tmp81 = 1;
        goto $l79;
        $l98:;
        return $returnValue89;
    }
    $l79:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result82));
    result82 = NULL;
    switch ($tmp81) {
        case 1: goto $l98;
        case 0: goto $l91;
    }
    $l100:;
    abort();
}
panda$io$File* panda$io$File$changeExtension$panda$core$String$R$panda$io$File(panda$io$File* self, panda$core$String* p_ext) {
    panda$io$File* $returnValue101;
    panda$io$File* $tmp102;
    panda$io$File* $tmp103;
    panda$io$File* $tmp104;
    panda$core$String* $tmp106;
    panda$core$String* $tmp107;
    panda$io$File* $tmp105 = panda$io$File$parent$R$panda$io$File$Q(self);
    $tmp104 = $tmp105;
    panda$core$String* $tmp108 = panda$io$File$simpleName$R$panda$core$String(self);
    $tmp107 = $tmp108;
    panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp107, p_ext);
    $tmp106 = $tmp109;
    panda$io$File* $tmp110 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp104, $tmp106);
    $tmp103 = $tmp110;
    $tmp102 = $tmp103;
    $returnValue101 = $tmp102;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp107));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
    return $returnValue101;
}
void panda$io$File$createDirectories(panda$io$File* self) {
    panda$io$File* p115 = NULL;
    panda$io$File* $tmp116;
    panda$io$File* $tmp117;
    panda$core$Bit $tmp121;
    int $tmp114;
    {
        panda$io$File* $tmp118 = panda$io$File$parent$R$panda$io$File$Q(self);
        $tmp117 = $tmp118;
        $tmp116 = $tmp117;
        p115 = $tmp116;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp116));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp117));
        bool $tmp119 = ((panda$core$Bit) { p115 != NULL }).value;
        if (!$tmp119) goto $l120;
        panda$io$File$exists$R$panda$core$Bit(&$tmp121, p115);
        panda$core$Bit $tmp122 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp121);
        $tmp119 = $tmp122.value;
        $l120:;
        panda$core$Bit $tmp123 = { $tmp119 };
        if ($tmp123.value) {
        {
            panda$io$File$createDirectories(p115);
        }
        }
        panda$io$File$createDirectory(self);
    }
    $tmp114 = -1;
    goto $l112;
    $l112:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p115));
    p115 = NULL;
    switch ($tmp114) {
        case -1: goto $l124;
    }
    $l124:;
}
panda$core$String* panda$io$File$readFully$R$panda$core$String(panda$io$File* self) {
    panda$core$String* $returnValue125;
    panda$core$String* $tmp126;
    panda$core$String* $tmp127;
    panda$io$InputStream* $tmp128;
    panda$io$InputStream* $tmp129 = panda$io$File$openInputStream$R$panda$io$InputStream(self);
    $tmp128 = $tmp129;
    panda$core$String* $tmp131 = (($fn130) $tmp128->$class->vtable[6])($tmp128);
    $tmp127 = $tmp131;
    $tmp126 = $tmp127;
    $returnValue125 = $tmp126;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
    return $returnValue125;
}
void panda$io$File$write$panda$core$String(panda$io$File* self, panda$core$String* p_contents) {
    panda$io$OutputStream* $tmp133;
    panda$io$OutputStream* $tmp134 = panda$io$File$openOutputStream$R$panda$io$OutputStream(self);
    $tmp133 = $tmp134;
    (($fn135) $tmp133->$class->vtable[18])($tmp133, p_contents);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
}
panda$core$Bit panda$io$File$$EQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other) {
    panda$core$Bit $returnValue136;
    panda$core$Bit $tmp137 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, p_other->path);
    $returnValue136 = $tmp137;
    return $returnValue136;
}
panda$core$Bit panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other) {
    panda$core$Bit $returnValue139;
    ITable* $tmp140 = ((panda$core$Equatable*) self->path)->$class->itable;
    while ($tmp140->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp140 = $tmp140->next;
    }
    $fn142 $tmp141 = $tmp140->methods[1];
    panda$core$Bit $tmp143 = $tmp141(((panda$core$Equatable*) self->path), ((panda$core$Equatable*) p_other->path));
    $returnValue139 = $tmp143;
    return $returnValue139;
}
panda$core$Int64 panda$io$File$hash$R$panda$core$Int64(panda$io$File* self) {
    panda$core$Int64 $returnValue145;
    panda$core$Int64 $tmp146 = panda$core$String$hash$R$panda$core$Int64(self->path);
    $returnValue145 = $tmp146;
    return $returnValue145;
}
panda$core$String* panda$io$File$convert$R$panda$core$String(panda$io$File* self) {
    panda$core$String* $returnValue148;
    panda$core$String* $tmp149;
    $tmp149 = self->path;
    $returnValue148 = $tmp149;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
    return $returnValue148;
}
void panda$io$File$cleanup(panda$io$File* self) {
    int $tmp153;
    {
    }
    $tmp153 = -1;
    goto $l151;
    $l151:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp153) {
        case -1: goto $l154;
    }
    $l154:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
}

