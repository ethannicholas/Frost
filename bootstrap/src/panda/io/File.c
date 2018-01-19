#include "panda/io/File.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Key.h"
#include "panda/collections/Iterator.h"
#include "panda/io/InputStream.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/Panda.h"
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

typedef panda$collections$Iterator* (*$fn12)(panda$io$InputStream*);
typedef panda$core$String* (*$fn61)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 13, 4119532389314393493, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

void panda$io$File$init$panda$core$String(panda$io$File* self, panda$core$String* p_path) {
    {
        self->path = p_path;
    }
}
panda$io$File* panda$io$File$resolve$panda$core$String$R$panda$io$File(panda$io$File* self, panda$core$String* p_path) {
    panda$core$Bit $tmp3 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(p_path, &$s2);
    if ($tmp3.value) {
    {
        panda$io$File* $tmp4 = (panda$io$File*) pandaZAlloc(24);
        $tmp4->$class = (panda$core$Class*) &panda$io$File$class;
        $tmp4->refCount.value = 1;
        panda$io$File$init$panda$core$String($tmp4, p_path);
        return $tmp4;
    }
    }
    panda$io$File* $tmp6 = (panda$io$File*) pandaZAlloc(24);
    $tmp6->$class = (panda$core$Class*) &panda$io$File$class;
    $tmp6->refCount.value = 1;
    panda$core$String* $tmp9 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self->path, &$s8);
    panda$core$String* $tmp10 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp9, p_path);
    panda$io$File$init$panda$core$String($tmp6, $tmp10);
    return $tmp6;
}
panda$collections$Iterator* panda$io$File$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$File* self) {
    panda$io$InputStream* $tmp11 = panda$io$File$openInputStream$R$panda$io$InputStream(self);
    panda$collections$Iterator* $tmp13 = (($fn12) $tmp11->$class->vtable[12])($tmp11);
    return $tmp13;
}
panda$io$File* panda$io$File$absolute$R$panda$io$File(panda$io$File* self) {
    panda$io$File* $tmp14 = (panda$io$File*) pandaZAlloc(24);
    $tmp14->$class = (panda$core$Class*) &panda$io$File$class;
    $tmp14->refCount.value = 1;
    panda$core$String* $tmp16 = panda$io$File$absolutePath$R$panda$core$String(self);
    panda$io$File$init$panda$core$String($tmp14, $tmp16);
    return $tmp14;
}
panda$io$File* panda$io$File$parent$R$panda$io$File$Q(panda$io$File* self) {
    panda$core$String$Index$nullable index25;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp30;
    panda$core$Bit $tmp18 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, &$s17);
    if ($tmp18.value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp20 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, &$s19);
    if ($tmp20.value) {
    {
        panda$io$File* $tmp21 = (panda$io$File*) pandaZAlloc(24);
        $tmp21->$class = (panda$core$Class*) &panda$io$File$class;
        $tmp21->refCount.value = 1;
        panda$io$File$init$panda$core$String($tmp21, &$s23);
        panda$io$File* $tmp24 = panda$io$File$parent$R$panda$io$File$Q($tmp21);
        return $tmp24;
    }
    }
    panda$core$String$Index$nullable $tmp27 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->path, &$s26);
    index25 = $tmp27;
    if (((panda$core$Bit) { index25.nonnull }).value) {
    {
        panda$io$File* $tmp28 = (panda$io$File*) pandaZAlloc(24);
        $tmp28->$class = (panda$core$Class*) &panda$io$File$class;
        $tmp28->refCount.value = 1;
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp30, ((panda$core$String$Index$nullable) { .nonnull = false }), index25, ((panda$core$Bit) { false }));
        panda$core$String* $tmp31 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->path, $tmp30);
        panda$io$File$init$panda$core$String($tmp28, $tmp31);
        return $tmp28;
    }
    }
    else {
    {
        panda$io$File* $tmp32 = panda$io$File$absolute$R$panda$io$File(self);
        panda$io$File* $tmp33 = panda$io$File$parent$R$panda$io$File$Q($tmp32);
        return $tmp33;
    }
    }
}
panda$core$String* panda$io$File$name$R$panda$core$String(panda$io$File* self) {
    panda$core$String$Index$nullable index34;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp37;
    panda$core$String$Index$nullable $tmp36 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->path, &$s35);
    index34 = $tmp36;
    if (((panda$core$Bit) { index34.nonnull }).value) {
    {
        panda$core$String$Index $tmp38 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->path, ((panda$core$String$Index) index34.value));
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp37, ((panda$core$String$Index$nullable) { $tmp38, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp39 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->path, $tmp37);
        return $tmp39;
    }
    }
    else {
    {
        return self->path;
    }
    }
}
panda$core$String* panda$io$File$simpleName$R$panda$core$String(panda$io$File* self) {
    panda$core$String* result40;
    panda$core$String$Index$nullable index42;
    panda$core$String* tmp145;
    panda$core$String* tmp246;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp47;
    panda$core$String* $tmp41 = panda$io$File$name$R$panda$core$String(self);
    result40 = $tmp41;
    panda$core$String$Index$nullable $tmp44 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(result40, &$s43);
    index42 = $tmp44;
    if (((panda$core$Bit) { !index42.nonnull }).value) {
    {
        {
            tmp145 = result40;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result40));
            return tmp145;
        }
    }
    }
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp47, ((panda$core$String$Index$nullable) { .nonnull = false }), index42, ((panda$core$Bit) { false }));
        panda$core$String* $tmp48 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(result40, $tmp47);
        tmp246 = $tmp48;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result40));
        return tmp246;
    }
}
panda$io$File* panda$io$File$changeExtension$panda$core$String$R$panda$io$File(panda$io$File* self, panda$core$String* p_ext) {
    panda$io$File* $tmp49 = panda$io$File$parent$R$panda$io$File$Q(self);
    panda$core$String* $tmp50 = panda$io$File$simpleName$R$panda$core$String(self);
    panda$core$String* $tmp51 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp50, p_ext);
    panda$io$File* $tmp52 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp49, $tmp51);
    return $tmp52;
}
void panda$io$File$createDirectories(panda$io$File* self) {
    panda$io$File* p53;
    panda$core$Bit $tmp57;
    panda$io$File* $tmp54 = panda$io$File$parent$R$panda$io$File$Q(self);
    p53 = $tmp54;
    bool $tmp55 = ((panda$core$Bit) { p53 != NULL }).value;
    if (!$tmp55) goto $l56;
    panda$io$File$exists$R$panda$core$Bit(&$tmp57, p53);
    panda$core$Bit $tmp58 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp57);
    $tmp55 = $tmp58.value;
    $l56:;
    panda$core$Bit $tmp59 = { $tmp55 };
    if ($tmp59.value) {
    {
        panda$io$File$createDirectories(p53);
    }
    }
    panda$io$File$createDirectory(self);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p53));
}
panda$core$String* panda$io$File$readFully$R$panda$core$String(panda$io$File* self) {
    panda$io$InputStream* $tmp60 = panda$io$File$openInputStream$R$panda$io$InputStream(self);
    panda$core$String* $tmp62 = (($fn61) $tmp60->$class->vtable[6])($tmp60);
    return $tmp62;
}
panda$core$Bit panda$io$File$$EQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other) {
    panda$core$Bit $tmp63 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, p_other->path);
    return $tmp63;
}
panda$core$Bit panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other) {
    panda$core$Bit $tmp64 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->path, p_other->path);
    return $tmp64;
}
panda$core$Int64 panda$io$File$hash$R$panda$core$Int64(panda$io$File* self) {
    panda$core$Int64 $tmp65 = panda$core$String$hash$R$panda$core$Int64(self->path);
    return $tmp65;
}
panda$core$String* panda$io$File$convert$R$panda$core$String(panda$io$File* self) {
    return self->path;
}
void panda$io$File$cleanup(panda$io$File* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
}

