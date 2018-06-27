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

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$io$File$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$io$File$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$io$File$_panda$core$Equatable, { panda$io$File$hash$R$panda$core$Int64} };

static panda$core$String $s1;
panda$io$File$class_type panda$io$File$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$io$File$_panda$collections$Key, { panda$io$File$convert$R$panda$core$String, panda$io$File$cleanup, panda$io$File$resolve$panda$core$String$R$panda$io$File, panda$io$File$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$File$isAbsolute$R$panda$core$Bit, panda$io$File$absolutePath$R$panda$core$String, panda$io$File$absolute$R$panda$io$File, panda$io$File$parent$R$panda$io$File$Q, panda$io$File$name$R$panda$core$String, panda$io$File$simpleName$R$panda$core$String, panda$io$File$changeExtension$panda$core$String$R$panda$io$File, panda$io$File$exists$R$panda$core$Bit, panda$io$File$isDirectory$R$panda$core$Bit, panda$io$File$list$R$panda$collections$ListView$LTpanda$io$File$GT, panda$io$File$createDirectory, panda$io$File$createDirectories, panda$io$File$openInputStream$R$panda$io$InputStream, panda$io$File$openOutputStream$R$panda$io$OutputStream, panda$io$File$openForAppend$R$panda$io$OutputStream, panda$io$File$readFully$R$panda$core$String, panda$io$File$write$panda$core$String, panda$io$File$delete, panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim, panda$io$File$hash$R$panda$core$Int64} };

typedef panda$collections$Iterator* (*$fn33)(panda$io$InputStream*);
typedef panda$core$String* (*$fn142)(panda$io$InputStream*);
typedef void (*$fn147)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 13, 4119532389314393493, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

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
    panda$io$File* $tmp13;
    panda$io$File* $tmp14;
    panda$core$String* $tmp16;
    panda$io$File* $tmp19;
    panda$io$File* $tmp20;
    panda$core$String* $tmp22;
    panda$core$String* $tmp23;
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
    panda$core$Bit $tmp12 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->path, &$s11);
    if ($tmp12.value) {
    {
        panda$io$File* $tmp15 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$core$String* $tmp17 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self->path, p_path);
        $tmp16 = $tmp17;
        panda$io$File$init$panda$core$String($tmp15, $tmp16);
        $tmp14 = $tmp15;
        $tmp13 = $tmp14;
        $returnValue6 = $tmp13;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
        return $returnValue6;
    }
    }
    panda$io$File* $tmp21 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
    panda$core$String* $tmp25 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self->path, &$s24);
    $tmp23 = $tmp25;
    panda$core$String* $tmp26 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp23, p_path);
    $tmp22 = $tmp26;
    panda$io$File$init$panda$core$String($tmp21, $tmp22);
    $tmp20 = $tmp21;
    $tmp19 = $tmp20;
    $returnValue6 = $tmp19;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
    return $returnValue6;
}
panda$collections$Iterator* panda$io$File$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$File* self) {
    panda$collections$Iterator* $returnValue28;
    panda$collections$Iterator* $tmp29;
    panda$collections$Iterator* $tmp30;
    panda$io$InputStream* $tmp31;
    panda$io$InputStream* $tmp32 = panda$io$File$openInputStream$R$panda$io$InputStream(self);
    $tmp31 = $tmp32;
    panda$collections$Iterator* $tmp34 = (($fn33) $tmp31->$class->vtable[17])($tmp31);
    $tmp30 = $tmp34;
    $tmp29 = $tmp30;
    $returnValue28 = $tmp29;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp29));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp30));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
    return $returnValue28;
}
panda$core$Bit panda$io$File$isAbsolute$R$panda$core$Bit(panda$io$File* self) {
    panda$core$Bit $returnValue36;
    panda$core$Bit $tmp38 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->path, &$s37);
    $returnValue36 = $tmp38;
    return $returnValue36;
}
panda$io$File* panda$io$File$absolute$R$panda$io$File(panda$io$File* self) {
    panda$io$File* $returnValue40;
    panda$io$File* $tmp41;
    panda$io$File* $tmp42;
    panda$core$String* $tmp44;
    panda$io$File* $tmp43 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
    panda$core$String* $tmp45 = panda$io$File$absolutePath$R$panda$core$String(self);
    $tmp44 = $tmp45;
    panda$io$File$init$panda$core$String($tmp43, $tmp44);
    $tmp42 = $tmp43;
    $tmp41 = $tmp42;
    $returnValue40 = $tmp41;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp41));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
    return $returnValue40;
}
panda$io$File* panda$io$File$parent$R$panda$io$File$Q(panda$io$File* self) {
    panda$io$File* $returnValue49;
    panda$io$File* $tmp50;
    panda$io$File* $tmp54;
    panda$io$File* $tmp55;
    panda$io$File* $tmp56;
    panda$core$String$Index$nullable index61;
    panda$io$File* $tmp64;
    panda$io$File* $tmp65;
    panda$core$String* $tmp67;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp68;
    panda$core$Bit $tmp69;
    panda$io$File* $tmp72;
    panda$io$File* $tmp73;
    panda$io$File* $tmp74;
    panda$core$Bit $tmp48 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, &$s47);
    if ($tmp48.value) {
    {
        $tmp50 = NULL;
        $returnValue49 = $tmp50;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp50));
        return $returnValue49;
    }
    }
    panda$core$Bit $tmp53 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, &$s52);
    if ($tmp53.value) {
    {
        panda$io$File* $tmp57 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp57, &$s58);
        $tmp56 = $tmp57;
        panda$io$File* $tmp59 = panda$io$File$parent$R$panda$io$File$Q($tmp56);
        $tmp55 = $tmp59;
        $tmp54 = $tmp55;
        $returnValue49 = $tmp54;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp54));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp55));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp56));
        return $returnValue49;
    }
    }
    panda$core$String$Index$nullable $tmp63 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->path, &$s62);
    index61 = $tmp63;
    if (((panda$core$Bit) { index61.nonnull }).value) {
    {
        panda$io$File* $tmp66 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$core$Bit$init$builtin_bit(&$tmp69, false);
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp68, ((panda$core$String$Index$nullable) { .nonnull = false }), index61, $tmp69);
        panda$core$String* $tmp70 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->path, $tmp68);
        $tmp67 = $tmp70;
        panda$io$File$init$panda$core$String($tmp66, $tmp67);
        $tmp65 = $tmp66;
        $tmp64 = $tmp65;
        $returnValue49 = $tmp64;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp64));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
        return $returnValue49;
    }
    }
    else {
    {
        panda$io$File* $tmp75 = panda$io$File$absolute$R$panda$io$File(self);
        $tmp74 = $tmp75;
        panda$io$File* $tmp76 = panda$io$File$parent$R$panda$io$File$Q($tmp74);
        $tmp73 = $tmp76;
        $tmp72 = $tmp73;
        $returnValue49 = $tmp72;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp72));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
        return $returnValue49;
    }
    }
    abort();
}
panda$core$String* panda$io$File$name$R$panda$core$String(panda$io$File* self) {
    panda$core$String$Index$nullable index78;
    panda$core$String* $returnValue81;
    panda$core$String* $tmp82;
    panda$core$String* $tmp83;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp84;
    panda$core$Bit $tmp86;
    panda$core$String* $tmp89;
    panda$core$String$Index$nullable $tmp80 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->path, &$s79);
    index78 = $tmp80;
    if (((panda$core$Bit) { index78.nonnull }).value) {
    {
        panda$core$String$Index $tmp85 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->path, ((panda$core$String$Index) index78.value));
        panda$core$Bit$init$builtin_bit(&$tmp86, false);
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp84, ((panda$core$String$Index$nullable) { $tmp85, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp86);
        panda$core$String* $tmp87 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->path, $tmp84);
        $tmp83 = $tmp87;
        $tmp82 = $tmp83;
        $returnValue81 = $tmp82;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp82));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp83));
        return $returnValue81;
    }
    }
    else {
    {
        $tmp89 = self->path;
        $returnValue81 = $tmp89;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp89));
        return $returnValue81;
    }
    }
    abort();
}
panda$core$String* panda$io$File$simpleName$R$panda$core$String(panda$io$File* self) {
    panda$core$String* result94 = NULL;
    panda$core$String* $tmp95;
    panda$core$String* $tmp96;
    panda$core$String$Index$nullable index98;
    panda$core$String* $returnValue101;
    panda$core$String* $tmp102;
    panda$core$String* $tmp105;
    panda$core$String* $tmp106;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp107;
    panda$core$Bit $tmp108;
    int $tmp93;
    {
        panda$core$String* $tmp97 = panda$io$File$name$R$panda$core$String(self);
        $tmp96 = $tmp97;
        $tmp95 = $tmp96;
        result94 = $tmp95;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp95));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp96));
        panda$core$String$Index$nullable $tmp100 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(result94, &$s99);
        index98 = $tmp100;
        if (((panda$core$Bit) { !index98.nonnull }).value) {
        {
            $tmp102 = result94;
            $returnValue101 = $tmp102;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
            $tmp93 = 0;
            goto $l91;
            $l103:;
            return $returnValue101;
        }
        }
        panda$core$Bit$init$builtin_bit(&$tmp108, false);
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp107, ((panda$core$String$Index$nullable) { .nonnull = false }), index98, $tmp108);
        panda$core$String* $tmp109 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(result94, $tmp107);
        $tmp106 = $tmp109;
        $tmp105 = $tmp106;
        $returnValue101 = $tmp105;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
        $tmp93 = 1;
        goto $l91;
        $l110:;
        return $returnValue101;
    }
    $l91:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result94));
    result94 = NULL;
    switch ($tmp93) {
        case 0: goto $l103;
        case 1: goto $l110;
    }
    $l112:;
    abort();
}
panda$io$File* panda$io$File$changeExtension$panda$core$String$R$panda$io$File(panda$io$File* self, panda$core$String* p_ext) {
    panda$io$File* $returnValue113;
    panda$io$File* $tmp114;
    panda$io$File* $tmp115;
    panda$io$File* $tmp116;
    panda$core$String* $tmp118;
    panda$core$String* $tmp119;
    panda$io$File* $tmp117 = panda$io$File$parent$R$panda$io$File$Q(self);
    $tmp116 = $tmp117;
    panda$core$String* $tmp120 = panda$io$File$simpleName$R$panda$core$String(self);
    $tmp119 = $tmp120;
    panda$core$String* $tmp121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp119, p_ext);
    $tmp118 = $tmp121;
    panda$io$File* $tmp122 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp116, $tmp118);
    $tmp115 = $tmp122;
    $tmp114 = $tmp115;
    $returnValue113 = $tmp114;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp114));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp115));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp118));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp116));
    return $returnValue113;
}
void panda$io$File$createDirectories(panda$io$File* self) {
    panda$io$File* p127 = NULL;
    panda$io$File* $tmp128;
    panda$io$File* $tmp129;
    panda$core$Bit $tmp133;
    int $tmp126;
    {
        panda$io$File* $tmp130 = panda$io$File$parent$R$panda$io$File$Q(self);
        $tmp129 = $tmp130;
        $tmp128 = $tmp129;
        p127 = $tmp128;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp128));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp129));
        bool $tmp131 = ((panda$core$Bit) { p127 != NULL }).value;
        if (!$tmp131) goto $l132;
        panda$io$File$exists$R$panda$core$Bit(&$tmp133, p127);
        panda$core$Bit $tmp134 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp133);
        $tmp131 = $tmp134.value;
        $l132:;
        panda$core$Bit $tmp135 = { $tmp131 };
        if ($tmp135.value) {
        {
            panda$io$File$createDirectories(p127);
        }
        }
        panda$io$File$createDirectory(self);
    }
    $tmp126 = -1;
    goto $l124;
    $l124:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p127));
    p127 = NULL;
    switch ($tmp126) {
        case -1: goto $l136;
    }
    $l136:;
}
panda$core$String* panda$io$File$readFully$R$panda$core$String(panda$io$File* self) {
    panda$core$String* $returnValue137;
    panda$core$String* $tmp138;
    panda$core$String* $tmp139;
    panda$io$InputStream* $tmp140;
    panda$io$InputStream* $tmp141 = panda$io$File$openInputStream$R$panda$io$InputStream(self);
    $tmp140 = $tmp141;
    panda$core$String* $tmp143 = (($fn142) $tmp140->$class->vtable[14])($tmp140);
    $tmp139 = $tmp143;
    $tmp138 = $tmp139;
    $returnValue137 = $tmp138;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp138));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp139));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
    return $returnValue137;
}
void panda$io$File$write$panda$core$String(panda$io$File* self, panda$core$String* p_contents) {
    panda$io$OutputStream* $tmp145;
    panda$io$OutputStream* $tmp146 = panda$io$File$openOutputStream$R$panda$io$OutputStream(self);
    $tmp145 = $tmp146;
    (($fn147) $tmp145->$class->vtable[17])($tmp145, p_contents);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp145));
}
panda$core$Bit panda$io$File$$EQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other) {
    panda$core$Bit $returnValue148;
    panda$core$Bit $tmp149 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, p_other->path);
    $returnValue148 = $tmp149;
    return $returnValue148;
}
panda$core$Int64 panda$io$File$hash$R$panda$core$Int64(panda$io$File* self) {
    panda$core$Int64 $returnValue151;
    panda$core$Int64 $tmp152 = panda$core$String$hash$R$panda$core$Int64(self->path);
    $returnValue151 = $tmp152;
    return $returnValue151;
}
panda$core$String* panda$io$File$convert$R$panda$core$String(panda$io$File* self) {
    panda$core$String* $returnValue154;
    panda$core$String* $tmp155;
    $tmp155 = self->path;
    $returnValue154 = $tmp155;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
    return $returnValue154;
}
void panda$io$File$cleanup(panda$io$File* self) {
    int $tmp159;
    {
    }
    $tmp159 = -1;
    goto $l157;
    $l157:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp159) {
        case -1: goto $l160;
    }
    $l160:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
}

