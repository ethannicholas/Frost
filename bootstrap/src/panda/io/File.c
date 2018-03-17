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

typedef panda$collections$Iterator* (*$fn10)(panda$io$InputStream*);
typedef panda$core$String* (*$fn56)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 13, 4119532389314393493, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

void panda$io$File$init$panda$core$String(panda$io$File* self, panda$core$String* p_path) {
    {
        self->path = p_path;
    }
}
panda$io$File* panda$io$File$resolve$panda$core$String$R$panda$io$File(panda$io$File* self, panda$core$String* p_path) {
    panda$core$Bit $tmp3 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(p_path, &$s2);
    if ($tmp3.value) {
    {
        panda$io$File* $tmp4 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp4, p_path);
        return $tmp4;
    }
    }
    panda$io$File* $tmp5 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
    panda$core$String* $tmp7 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self->path, &$s6);
    panda$core$String* $tmp8 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp7, p_path);
    panda$io$File$init$panda$core$String($tmp5, $tmp8);
    return $tmp5;
}
panda$collections$Iterator* panda$io$File$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$File* self) {
    panda$io$InputStream* $tmp9 = panda$io$File$openInputStream$R$panda$io$InputStream(self);
    panda$collections$Iterator* $tmp11 = (($fn10) $tmp9->$class->vtable[12])($tmp9);
    return $tmp11;
}
panda$io$File* panda$io$File$absolute$R$panda$io$File(panda$io$File* self) {
    panda$io$File* $tmp12 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
    panda$core$String* $tmp13 = panda$io$File$absolutePath$R$panda$core$String(self);
    panda$io$File$init$panda$core$String($tmp12, $tmp13);
    return $tmp12;
}
panda$io$File* panda$io$File$parent$R$panda$io$File$Q(panda$io$File* self) {
    panda$core$String$Index$nullable index21;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp25;
    panda$core$Bit $tmp15 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, &$s14);
    if ($tmp15.value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp17 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, &$s16);
    if ($tmp17.value) {
    {
        panda$io$File* $tmp18 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp18, &$s19);
        panda$io$File* $tmp20 = panda$io$File$parent$R$panda$io$File$Q($tmp18);
        return $tmp20;
    }
    }
    panda$core$String$Index$nullable $tmp23 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->path, &$s22);
    index21 = $tmp23;
    if (((panda$core$Bit) { index21.nonnull }).value) {
    {
        panda$io$File* $tmp24 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp25, ((panda$core$String$Index$nullable) { .nonnull = false }), index21, ((panda$core$Bit) { false }));
        panda$core$String* $tmp26 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->path, $tmp25);
        panda$io$File$init$panda$core$String($tmp24, $tmp26);
        return $tmp24;
    }
    }
    else {
    {
        panda$io$File* $tmp27 = panda$io$File$absolute$R$panda$io$File(self);
        panda$io$File* $tmp28 = panda$io$File$parent$R$panda$io$File$Q($tmp27);
        return $tmp28;
    }
    }
}
panda$core$String* panda$io$File$name$R$panda$core$String(panda$io$File* self) {
    panda$core$String$Index$nullable index29;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp32;
    panda$core$String$Index$nullable $tmp31 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->path, &$s30);
    index29 = $tmp31;
    if (((panda$core$Bit) { index29.nonnull }).value) {
    {
        panda$core$String$Index $tmp33 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->path, ((panda$core$String$Index) index29.value));
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp32, ((panda$core$String$Index$nullable) { $tmp33, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp34 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->path, $tmp32);
        return $tmp34;
    }
    }
    else {
    {
        return self->path;
    }
    }
}
panda$core$String* panda$io$File$simpleName$R$panda$core$String(panda$io$File* self) {
    panda$core$String* result35;
    panda$core$String$Index$nullable index37;
    panda$core$String* tmp140;
    panda$core$String* tmp241;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp42;
    panda$core$String* $tmp36 = panda$io$File$name$R$panda$core$String(self);
    result35 = $tmp36;
    panda$core$String$Index$nullable $tmp39 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(result35, &$s38);
    index37 = $tmp39;
    if (((panda$core$Bit) { !index37.nonnull }).value) {
    {
        {
            tmp140 = result35;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result35));
            return tmp140;
        }
    }
    }
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp42, ((panda$core$String$Index$nullable) { .nonnull = false }), index37, ((panda$core$Bit) { false }));
        panda$core$String* $tmp43 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(result35, $tmp42);
        tmp241 = $tmp43;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result35));
        return tmp241;
    }
}
panda$io$File* panda$io$File$changeExtension$panda$core$String$R$panda$io$File(panda$io$File* self, panda$core$String* p_ext) {
    panda$io$File* $tmp44 = panda$io$File$parent$R$panda$io$File$Q(self);
    panda$core$String* $tmp45 = panda$io$File$simpleName$R$panda$core$String(self);
    panda$core$String* $tmp46 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp45, p_ext);
    panda$io$File* $tmp47 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp44, $tmp46);
    return $tmp47;
}
void panda$io$File$createDirectories(panda$io$File* self) {
    panda$io$File* p48;
    panda$core$Bit $tmp52;
    panda$io$File* $tmp49 = panda$io$File$parent$R$panda$io$File$Q(self);
    p48 = $tmp49;
    bool $tmp50 = ((panda$core$Bit) { p48 != NULL }).value;
    if (!$tmp50) goto $l51;
    panda$io$File$exists$R$panda$core$Bit(&$tmp52, p48);
    panda$core$Bit $tmp53 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp52);
    $tmp50 = $tmp53.value;
    $l51:;
    panda$core$Bit $tmp54 = { $tmp50 };
    if ($tmp54.value) {
    {
        panda$io$File$createDirectories(p48);
    }
    }
    panda$io$File$createDirectory(self);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p48));
}
panda$core$String* panda$io$File$readFully$R$panda$core$String(panda$io$File* self) {
    panda$io$InputStream* $tmp55 = panda$io$File$openInputStream$R$panda$io$InputStream(self);
    panda$core$String* $tmp57 = (($fn56) $tmp55->$class->vtable[6])($tmp55);
    return $tmp57;
}
panda$core$Bit panda$io$File$$EQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other) {
    panda$core$Bit $tmp58 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, p_other->path);
    return $tmp58;
}
panda$core$Bit panda$io$File$$NEQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other) {
    panda$core$Bit $tmp59 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->path, p_other->path);
    return $tmp59;
}
panda$core$Int64 panda$io$File$hash$R$panda$core$Int64(panda$io$File* self) {
    panda$core$Int64 $tmp60 = panda$core$String$hash$R$panda$core$Int64(self->path);
    return $tmp60;
}
panda$core$String* panda$io$File$convert$R$panda$core$String(panda$io$File* self) {
    return self->path;
}
void panda$io$File$cleanup(panda$io$File* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
}

