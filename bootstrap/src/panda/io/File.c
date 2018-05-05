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
panda$core$Bit panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim(panda$io$File* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$io$File$$EQ$panda$io$File$R$panda$core$Bit(self, ((panda$io$File*) p0));
    return result;
}
panda$core$Bit panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit$shim(panda$io$File* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit(self, ((panda$io$File*) p0));
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$io$File$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim, panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$io$File$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$io$File$_panda$core$Equatable, { panda$io$File$hash$R$panda$core$Int64} };

static panda$core$String $s1;
panda$io$File$class_type panda$io$File$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$io$File$_panda$collections$Key, { panda$io$File$convert$R$panda$core$String, panda$io$File$cleanup, panda$io$File$resolve$panda$core$String$R$panda$io$File, panda$io$File$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$File$absolutePath$R$panda$core$String, panda$io$File$absolute$R$panda$io$File, panda$io$File$parent$R$panda$io$File$Q, panda$io$File$name$R$panda$core$String, panda$io$File$simpleName$R$panda$core$String, panda$io$File$changeExtension$panda$core$String$R$panda$io$File, panda$io$File$exists$R$panda$core$Bit, panda$io$File$isDirectory$R$panda$core$Bit, panda$io$File$list$R$panda$collections$ListView$LTpanda$io$File$GT, panda$io$File$createDirectory, panda$io$File$createDirectories, panda$io$File$openInputStream$R$panda$io$InputStream, panda$io$File$openOutputStream$R$panda$io$OutputStream, panda$io$File$readFully$R$panda$core$String, panda$io$File$delete, panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim, panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit$shim, panda$io$File$hash$R$panda$core$Int64} };

typedef panda$collections$Iterator* (*$fn24)(panda$io$InputStream*);
typedef panda$core$String* (*$fn112)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 13, 4119532389314393493, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

void panda$io$File$init$panda$core$String(panda$io$File* self, panda$core$String* p_path) {
    self->path = NULL;
    {
        panda$core$String* $tmp2 = self->path;
        panda$core$String* $tmp3 = p_path;
        self->path = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
panda$io$File* panda$io$File$resolve$panda$core$String$R$panda$io$File(panda$io$File* self, panda$core$String* p_path) {
    panda$core$Bit $tmp5 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(p_path, &$s4);
    if ($tmp5.value) {
    {
        panda$io$File* $tmp9 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp9, p_path);
        panda$io$File* $tmp8 = $tmp9;
        panda$io$File* $tmp7 = $tmp8;
        panda$io$File* $tmp6 = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
        return $tmp6;
    }
    }
    panda$io$File* $tmp13 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
    panda$core$String* $tmp17 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self->path, &$s16);
    panda$core$String* $tmp15 = $tmp17;
    panda$core$String* $tmp18 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp15, p_path);
    panda$core$String* $tmp14 = $tmp18;
    panda$io$File$init$panda$core$String($tmp13, $tmp14);
    panda$io$File* $tmp12 = $tmp13;
    panda$io$File* $tmp11 = $tmp12;
    panda$io$File* $tmp10 = $tmp11;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
    return $tmp10;
}
panda$collections$Iterator* panda$io$File$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$File* self) {
    panda$io$InputStream* $tmp23 = panda$io$File$openInputStream$R$panda$io$InputStream(self);
    panda$io$InputStream* $tmp22 = $tmp23;
    panda$collections$Iterator* $tmp25 = (($fn24) $tmp22->$class->vtable[12])($tmp22);
    panda$collections$Iterator* $tmp21 = $tmp25;
    panda$collections$Iterator* $tmp20 = $tmp21;
    panda$collections$Iterator* $tmp19 = $tmp20;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
    return $tmp19;
}
panda$io$File* panda$io$File$absolute$R$panda$io$File(panda$io$File* self) {
    panda$io$File* $tmp29 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
    panda$core$String* $tmp31 = panda$io$File$absolutePath$R$panda$core$String(self);
    panda$core$String* $tmp30 = $tmp31;
    panda$io$File$init$panda$core$String($tmp29, $tmp30);
    panda$io$File* $tmp28 = $tmp29;
    panda$io$File* $tmp27 = $tmp28;
    panda$io$File* $tmp26 = $tmp27;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp27));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp28));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp30));
    return $tmp26;
}
panda$io$File* panda$io$File$parent$R$panda$io$File$Q(panda$io$File* self) {
    panda$core$String$Index$nullable index45;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp53;
    panda$core$Bit $tmp33 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, &$s32);
    if ($tmp33.value) {
    {
        panda$io$File* $tmp35 = NULL;
        panda$io$File* $tmp34 = $tmp35;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
        return $tmp34;
    }
    }
    panda$core$Bit $tmp37 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, &$s36);
    if ($tmp37.value) {
    {
        panda$io$File* $tmp42 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp42, &$s43);
        panda$io$File* $tmp41 = $tmp42;
        panda$io$File* $tmp44 = panda$io$File$parent$R$panda$io$File$Q($tmp41);
        panda$io$File* $tmp40 = $tmp44;
        panda$io$File* $tmp39 = $tmp40;
        panda$io$File* $tmp38 = $tmp39;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp39));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
        return $tmp38;
    }
    }
    panda$core$String$Index$nullable $tmp47 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->path, &$s46);
    index45 = $tmp47;
    if (((panda$core$Bit) { index45.nonnull }).value) {
    {
        panda$io$File* $tmp51 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp53, ((panda$core$String$Index$nullable) { .nonnull = false }), index45, ((panda$core$Bit) { false }));
        panda$core$String* $tmp54 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->path, $tmp53);
        panda$core$String* $tmp52 = $tmp54;
        panda$io$File$init$panda$core$String($tmp51, $tmp52);
        panda$io$File* $tmp50 = $tmp51;
        panda$io$File* $tmp49 = $tmp50;
        panda$io$File* $tmp48 = $tmp49;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp50));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
        return $tmp48;
    }
    }
    else {
    {
        panda$io$File* $tmp59 = panda$io$File$absolute$R$panda$io$File(self);
        panda$io$File* $tmp58 = $tmp59;
        panda$io$File* $tmp60 = panda$io$File$parent$R$panda$io$File$Q($tmp58);
        panda$io$File* $tmp57 = $tmp60;
        panda$io$File* $tmp56 = $tmp57;
        panda$io$File* $tmp55 = $tmp56;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp56));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp57));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
        return $tmp55;
    }
    }
}
panda$core$String* panda$io$File$name$R$panda$core$String(panda$io$File* self) {
    panda$core$String$Index$nullable index61;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp67;
    panda$core$String$Index$nullable $tmp63 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->path, &$s62);
    index61 = $tmp63;
    if (((panda$core$Bit) { index61.nonnull }).value) {
    {
        panda$core$String$Index $tmp68 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->path, ((panda$core$String$Index) index61.value));
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp67, ((panda$core$String$Index$nullable) { $tmp68, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp69 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->path, $tmp67);
        panda$core$String* $tmp66 = $tmp69;
        panda$core$String* $tmp65 = $tmp66;
        panda$core$String* $tmp64 = $tmp65;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp65));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
        return $tmp64;
    }
    }
    else {
    {
        panda$core$String* $tmp71 = self->path;
        panda$core$String* $tmp70 = $tmp71;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp71));
        return $tmp70;
    }
    }
}
panda$core$String* panda$io$File$simpleName$R$panda$core$String(panda$io$File* self) {
    panda$core$String* result72;
    panda$core$String$Index$nullable index76;
    panda$core$String* tmp179;
    panda$core$String* tmp282;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp85;
    panda$core$String* $tmp75 = panda$io$File$name$R$panda$core$String(self);
    panda$core$String* $tmp74 = $tmp75;
    panda$core$String* $tmp73 = $tmp74;
    result72 = $tmp73;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp73));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
    panda$core$String$Index$nullable $tmp78 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(result72, &$s77);
    index76 = $tmp78;
    if (((panda$core$Bit) { !index76.nonnull }).value) {
    {
        {
            panda$core$String* $tmp80 = result72;
            tmp179 = $tmp80;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp80));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result72));
            panda$core$String* $tmp81 = tmp179;
            return $tmp81;
        }
    }
    }
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp85, ((panda$core$String$Index$nullable) { .nonnull = false }), index76, ((panda$core$Bit) { false }));
        panda$core$String* $tmp86 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(result72, $tmp85);
        panda$core$String* $tmp84 = $tmp86;
        panda$core$String* $tmp83 = $tmp84;
        tmp282 = $tmp83;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp83));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result72));
        panda$core$String* $tmp87 = tmp282;
        return $tmp87;
    }
}
panda$io$File* panda$io$File$changeExtension$panda$core$String$R$panda$io$File(panda$io$File* self, panda$core$String* p_ext) {
    panda$io$File* $tmp92 = panda$io$File$parent$R$panda$io$File$Q(self);
    panda$io$File* $tmp91 = $tmp92;
    panda$core$String* $tmp95 = panda$io$File$simpleName$R$panda$core$String(self);
    panda$core$String* $tmp94 = $tmp95;
    panda$core$String* $tmp96 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp94, p_ext);
    panda$core$String* $tmp93 = $tmp96;
    panda$io$File* $tmp97 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp91, $tmp93);
    panda$io$File* $tmp90 = $tmp97;
    panda$io$File* $tmp89 = $tmp90;
    panda$io$File* $tmp88 = $tmp89;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp89));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
    return $tmp88;
}
void panda$io$File$createDirectories(panda$io$File* self) {
    panda$io$File* p98;
    panda$core$Bit $tmp104;
    panda$io$File* $tmp101 = panda$io$File$parent$R$panda$io$File$Q(self);
    panda$io$File* $tmp100 = $tmp101;
    panda$io$File* $tmp99 = $tmp100;
    p98 = $tmp99;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp99));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
    bool $tmp102 = ((panda$core$Bit) { p98 != NULL }).value;
    if (!$tmp102) goto $l103;
    panda$io$File$exists$R$panda$core$Bit(&$tmp104, p98);
    panda$core$Bit $tmp105 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp104);
    $tmp102 = $tmp105.value;
    $l103:;
    panda$core$Bit $tmp106 = { $tmp102 };
    if ($tmp106.value) {
    {
        panda$io$File$createDirectories(p98);
    }
    }
    panda$io$File$createDirectory(self);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p98));
}
panda$core$String* panda$io$File$readFully$R$panda$core$String(panda$io$File* self) {
    panda$io$InputStream* $tmp111 = panda$io$File$openInputStream$R$panda$io$InputStream(self);
    panda$io$InputStream* $tmp110 = $tmp111;
    panda$core$String* $tmp113 = (($fn112) $tmp110->$class->vtable[6])($tmp110);
    panda$core$String* $tmp109 = $tmp113;
    panda$core$String* $tmp108 = $tmp109;
    panda$core$String* $tmp107 = $tmp108;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp108));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp109));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
    return $tmp107;
}
panda$core$Bit panda$io$File$$EQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other) {
    panda$core$Bit $tmp115 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, p_other->path);
    panda$core$Bit $tmp114 = $tmp115;
    return $tmp114;
}
panda$core$Bit panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other) {
    panda$core$Bit $tmp117 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->path, p_other->path);
    panda$core$Bit $tmp116 = $tmp117;
    return $tmp116;
}
panda$core$Int64 panda$io$File$hash$R$panda$core$Int64(panda$io$File* self) {
    panda$core$Int64 $tmp119 = panda$core$String$hash$R$panda$core$Int64(self->path);
    panda$core$Int64 $tmp118 = $tmp119;
    return $tmp118;
}
panda$core$String* panda$io$File$convert$R$panda$core$String(panda$io$File* self) {
    panda$core$String* $tmp121 = self->path;
    panda$core$String* $tmp120 = $tmp121;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
    return $tmp120;
}
void panda$io$File$cleanup(panda$io$File* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
}

