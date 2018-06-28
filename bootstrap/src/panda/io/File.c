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
#include "panda/core/RegularExpression.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Int64.h"
#include "panda/collections/Array.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/io/OutputStream.h"
__attribute__((weak)) panda$core$Bit panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim(panda$io$File* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$io$File$$EQ$panda$io$File$R$panda$core$Bit(p0, ((panda$io$File*) p1));

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$io$File$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$io$File$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$io$File$_panda$core$Equatable, { panda$io$File$hash$R$panda$core$Int64} };

static panda$core$String $s1;
panda$io$File$class_type panda$io$File$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$io$File$_panda$collections$Key, { panda$io$File$convert$R$panda$core$String, panda$io$File$cleanup, panda$io$File$resolve$panda$core$String$R$panda$io$File, panda$io$File$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$File$isAbsolute$R$panda$core$Bit, panda$io$File$absolute$R$panda$core$Maybe$LTpanda$io$File$GT, panda$io$File$normalize$panda$core$String$R$panda$core$String$Q, panda$io$File$parent$R$panda$io$File$Q, panda$io$File$name$R$panda$core$String, panda$io$File$simpleName$R$panda$core$String, panda$io$File$changeExtension$panda$core$String$R$panda$io$File, panda$io$File$exists$R$panda$core$Bit, panda$io$File$isDirectory$R$panda$core$Bit, panda$io$File$list$R$panda$collections$ListView$LTpanda$io$File$GT, panda$io$File$createDirectory, panda$io$File$createDirectories, panda$io$File$openInputStream$R$panda$io$InputStream, panda$io$File$openOutputStream$R$panda$io$OutputStream, panda$io$File$openForAppend$R$panda$io$OutputStream, panda$io$File$readFully$R$panda$core$String, panda$io$File$write$panda$core$String, panda$io$File$delete, panda$io$File$$EQ$panda$io$File$R$panda$core$Bit$shim, panda$io$File$hash$R$panda$core$Int64} };

typedef panda$collections$Iterator* (*$fn33)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn94)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn123)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn144)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn252)(panda$io$InputStream*);
typedef void (*$fn257)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 13, 4119532389314393493, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2f\x2b", 3, 1973583, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x2e\x2e", 3, 1514440, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

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
panda$core$String* panda$io$File$normalize$panda$core$String$R$panda$core$String$Q(panda$io$File* self, panda$core$String* p_path) {
    panda$core$String* result43 = NULL;
    panda$core$String* $tmp44;
    panda$core$String* $tmp45;
    panda$core$String* $tmp46;
    panda$core$String* $tmp47;
    panda$core$RegularExpression* $tmp48;
    panda$core$String* $returnValue55;
    panda$core$String* $tmp56;
    panda$core$String* $tmp64;
    panda$core$String* $tmp65;
    panda$core$String* $tmp66;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp67;
    panda$core$Int64 $tmp69;
    panda$core$Bit $tmp71;
    panda$core$Bit absolute73;
    panda$core$String* $tmp76;
    panda$core$String* $tmp77;
    panda$core$String* $tmp78;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp79;
    panda$core$Int64 $tmp80;
    panda$core$Bit $tmp81;
    panda$collections$Array* components83 = NULL;
    panda$collections$Array* $tmp84;
    panda$collections$Array* $tmp85;
    panda$core$Range$LTpanda$core$Int64$GT $tmp90;
    panda$core$Int64 $tmp91;
    panda$core$Bit $tmp96;
    panda$core$Object* $tmp111;
    panda$core$Object* $tmp116;
    panda$core$Int64 $tmp117;
    panda$core$Object* $tmp126;
    panda$core$Object* $tmp128;
    panda$core$Int64 $tmp129;
    panda$core$String* $tmp138;
    panda$core$String* $tmp139;
    panda$core$String* $tmp140;
    panda$core$String* $tmp146;
    panda$core$String* $tmp147;
    panda$core$String* $tmp148;
    panda$core$String* $tmp156;
    panda$core$String* $tmp161;
    panda$core$String* $tmp162;
    panda$core$String* $tmp164;
    int $tmp42;
    {
        $tmp44 = p_path;
        result43 = $tmp44;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
        {
            $tmp45 = result43;
            panda$core$RegularExpression* $tmp49 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp49, &$s50);
            $tmp48 = $tmp49;
            panda$core$String* $tmp52 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(result43, $tmp48, &$s51);
            $tmp47 = $tmp52;
            $tmp46 = $tmp47;
            result43 = $tmp46;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp46));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
        }
        panda$core$Bit $tmp54 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(result43, &$s53);
        if ($tmp54.value) {
        {
            $tmp56 = result43;
            $returnValue55 = $tmp56;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp56));
            $tmp42 = 0;
            goto $l40;
            $l57:;
            return $returnValue55;
        }
        }
        $l59:;
        panda$core$Bit $tmp63 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result43, &$s62);
        bool $tmp61 = $tmp63.value;
        if (!$tmp61) goto $l60;
        {
            {
                $tmp64 = result43;
                panda$core$Int64 $tmp68 = panda$core$String$length$R$panda$core$Int64(result43);
                panda$core$Int64$init$builtin_int64(&$tmp69, 1);
                panda$core$Int64 $tmp70 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp68, $tmp69);
                panda$core$Bit$init$builtin_bit(&$tmp71, false);
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp67, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { $tmp70, true }), $tmp71);
                panda$core$String* $tmp72 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(result43, $tmp67);
                $tmp66 = $tmp72;
                $tmp65 = $tmp66;
                result43 = $tmp65;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp65));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
            }
        }
        goto $l59;
        $l60:;
        panda$core$Bit $tmp75 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(result43, &$s74);
        absolute73 = $tmp75;
        if (absolute73.value) {
        {
            {
                $tmp76 = result43;
                panda$core$Int64$init$builtin_int64(&$tmp80, 1);
                panda$core$Bit$init$builtin_bit(&$tmp81, false);
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp79, ((panda$core$Int64$nullable) { $tmp80, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp81);
                panda$core$String* $tmp82 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(result43, $tmp79);
                $tmp78 = $tmp82;
                $tmp77 = $tmp78;
                result43 = $tmp77;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp77));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp76));
            }
        }
        }
        panda$collections$Array* $tmp87 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(result43, &$s86);
        $tmp85 = $tmp87;
        $tmp84 = $tmp85;
        components83 = $tmp84;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp84));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
        $l88:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp91, 1);
            ITable* $tmp92 = ((panda$collections$CollectionView*) components83)->$class->itable;
            while ($tmp92->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp92 = $tmp92->next;
            }
            $fn94 $tmp93 = $tmp92->methods[0];
            panda$core$Int64 $tmp95 = $tmp93(((panda$collections$CollectionView*) components83));
            panda$core$Bit$init$builtin_bit(&$tmp96, false);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp90, $tmp91, $tmp95, $tmp96);
            int64_t $tmp98 = $tmp90.min.value;
            panda$core$Int64 i97 = { $tmp98 };
            int64_t $tmp100 = $tmp90.max.value;
            bool $tmp101 = $tmp90.inclusive.value;
            if ($tmp101) goto $l108; else goto $l109;
            $l108:;
            if ($tmp98 <= $tmp100) goto $l102; else goto $l104;
            $l109:;
            if ($tmp98 < $tmp100) goto $l102; else goto $l104;
            $l102:;
            {
                panda$core$Object* $tmp112 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(components83, i97);
                $tmp111 = $tmp112;
                panda$core$Bit $tmp114 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((panda$core$String*) $tmp111), &$s113);
                bool $tmp110 = $tmp114.value;
                panda$core$Panda$unref$panda$core$Object($tmp111);
                if (!$tmp110) goto $l115;
                panda$core$Int64$init$builtin_int64(&$tmp117, 1);
                panda$core$Int64 $tmp118 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i97, $tmp117);
                panda$core$Object* $tmp119 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(components83, $tmp118);
                $tmp116 = $tmp119;
                ITable* $tmp121 = ((panda$core$Equatable*) ((panda$core$String*) $tmp116))->$class->itable;
                while ($tmp121->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp121 = $tmp121->next;
                }
                $fn123 $tmp122 = $tmp121->methods[1];
                panda$core$Bit $tmp124 = $tmp122(((panda$core$Equatable*) ((panda$core$String*) $tmp116)), ((panda$core$Equatable*) &$s120));
                $tmp110 = $tmp124.value;
                panda$core$Panda$unref$panda$core$Object($tmp116);
                $l115:;
                panda$core$Bit $tmp125 = { $tmp110 };
                if ($tmp125.value) {
                {
                    panda$core$Object* $tmp127 = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(components83, i97);
                    $tmp126 = $tmp127;
                    panda$core$Panda$unref$panda$core$Object($tmp126);
                    panda$core$Int64$init$builtin_int64(&$tmp129, 1);
                    panda$core$Int64 $tmp130 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i97, $tmp129);
                    panda$core$Object* $tmp131 = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(components83, $tmp130);
                    $tmp128 = $tmp131;
                    panda$core$Panda$unref$panda$core$Object($tmp128);
                    goto $l88;
                }
                }
            }
            $l105:;
            int64_t $tmp133 = $tmp100 - i97.value;
            if ($tmp101) goto $l134; else goto $l135;
            $l134:;
            if ((uint64_t) $tmp133 >= 1) goto $l132; else goto $l104;
            $l135:;
            if ((uint64_t) $tmp133 > 1) goto $l132; else goto $l104;
            $l132:;
            i97.value += 1;
            goto $l102;
            $l104:;
            goto $l89;
        }
        }
        $l89:;
        {
            $tmp138 = result43;
            ITable* $tmp142 = ((panda$collections$CollectionView*) components83)->$class->itable;
            while ($tmp142->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp142 = $tmp142->next;
            }
            $fn144 $tmp143 = $tmp142->methods[2];
            panda$core$String* $tmp145 = $tmp143(((panda$collections$CollectionView*) components83), &$s141);
            $tmp140 = $tmp145;
            $tmp139 = $tmp140;
            result43 = $tmp139;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp138));
        }
        if (absolute73.value) {
        {
            {
                $tmp146 = result43;
                panda$core$String* $tmp150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s149, result43);
                $tmp148 = $tmp150;
                $tmp147 = $tmp148;
                result43 = $tmp147;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
            }
        }
        }
        bool $tmp151 = absolute73.value;
        if (!$tmp151) goto $l152;
        panda$core$Bit $tmp154 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(result43, &$s153);
        $tmp151 = $tmp154.value;
        $l152:;
        panda$core$Bit $tmp155 = { $tmp151 };
        if ($tmp155.value) {
        {
            $tmp156 = NULL;
            $returnValue55 = $tmp156;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp156));
            $tmp42 = 1;
            goto $l40;
            $l157:;
            return $returnValue55;
        }
        }
        panda$core$Bit $tmp160 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(result43, &$s159);
        if ($tmp160.value) {
        {
            {
                $tmp161 = result43;
                $tmp162 = &$s163;
                result43 = $tmp162;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp162));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp161));
            }
        }
        }
        $tmp164 = result43;
        $returnValue55 = $tmp164;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp164));
        $tmp42 = 2;
        goto $l40;
        $l165:;
        return $returnValue55;
    }
    $l40:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) components83));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result43));
    result43 = NULL;
    components83 = NULL;
    switch ($tmp42) {
        case 1: goto $l157;
        case 0: goto $l57;
        case 2: goto $l165;
    }
    $l167:;
    abort();
}
panda$io$File* panda$io$File$parent$R$panda$io$File$Q(panda$io$File* self) {
    panda$core$String* result171 = NULL;
    panda$core$String* $tmp172;
    panda$core$String* $tmp173;
    panda$io$File* $tmp174;
    panda$io$File* $returnValue178;
    panda$io$File* $tmp179;
    panda$io$File* $tmp182;
    panda$io$File* $tmp183;
    int $tmp170;
    {
        panda$io$File* $tmp176 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self, &$s175);
        $tmp174 = $tmp176;
        panda$core$String* $tmp177 = panda$io$File$normalize$panda$core$String$R$panda$core$String$Q(self, $tmp174->path);
        $tmp173 = $tmp177;
        $tmp172 = $tmp173;
        result171 = $tmp172;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
        if (((panda$core$Bit) { result171 == NULL }).value) {
        {
            $tmp179 = NULL;
            $returnValue178 = $tmp179;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp179));
            $tmp170 = 0;
            goto $l168;
            $l180:;
            return $returnValue178;
        }
        }
        panda$io$File* $tmp184 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp184, result171);
        $tmp183 = $tmp184;
        $tmp182 = $tmp183;
        $returnValue178 = $tmp182;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp182));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp183));
        $tmp170 = 1;
        goto $l168;
        $l185:;
        return $returnValue178;
    }
    $l168:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result171));
    result171 = NULL;
    switch ($tmp170) {
        case 0: goto $l180;
        case 1: goto $l185;
    }
    $l187:;
    abort();
}
panda$core$String* panda$io$File$name$R$panda$core$String(panda$io$File* self) {
    panda$core$String$Index$nullable index188;
    panda$core$String* $returnValue191;
    panda$core$String* $tmp192;
    panda$core$String* $tmp193;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp194;
    panda$core$Bit $tmp196;
    panda$core$String* $tmp199;
    panda$core$String$Index$nullable $tmp190 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->path, &$s189);
    index188 = $tmp190;
    if (((panda$core$Bit) { index188.nonnull }).value) {
    {
        panda$core$String$Index $tmp195 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->path, ((panda$core$String$Index) index188.value));
        panda$core$Bit$init$builtin_bit(&$tmp196, false);
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp194, ((panda$core$String$Index$nullable) { $tmp195, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp196);
        panda$core$String* $tmp197 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->path, $tmp194);
        $tmp193 = $tmp197;
        $tmp192 = $tmp193;
        $returnValue191 = $tmp192;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp192));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp193));
        return $returnValue191;
    }
    }
    else {
    {
        $tmp199 = self->path;
        $returnValue191 = $tmp199;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
        return $returnValue191;
    }
    }
    abort();
}
panda$core$String* panda$io$File$simpleName$R$panda$core$String(panda$io$File* self) {
    panda$core$String* result204 = NULL;
    panda$core$String* $tmp205;
    panda$core$String* $tmp206;
    panda$core$String$Index$nullable index208;
    panda$core$String* $returnValue211;
    panda$core$String* $tmp212;
    panda$core$String* $tmp215;
    panda$core$String* $tmp216;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp217;
    panda$core$Bit $tmp218;
    int $tmp203;
    {
        panda$core$String* $tmp207 = panda$io$File$name$R$panda$core$String(self);
        $tmp206 = $tmp207;
        $tmp205 = $tmp206;
        result204 = $tmp205;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
        panda$core$String$Index$nullable $tmp210 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(result204, &$s209);
        index208 = $tmp210;
        if (((panda$core$Bit) { !index208.nonnull }).value) {
        {
            $tmp212 = result204;
            $returnValue211 = $tmp212;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp212));
            $tmp203 = 0;
            goto $l201;
            $l213:;
            return $returnValue211;
        }
        }
        panda$core$Bit$init$builtin_bit(&$tmp218, false);
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp217, ((panda$core$String$Index$nullable) { .nonnull = false }), index208, $tmp218);
        panda$core$String* $tmp219 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(result204, $tmp217);
        $tmp216 = $tmp219;
        $tmp215 = $tmp216;
        $returnValue211 = $tmp215;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp215));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp216));
        $tmp203 = 1;
        goto $l201;
        $l220:;
        return $returnValue211;
    }
    $l201:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result204));
    result204 = NULL;
    switch ($tmp203) {
        case 1: goto $l220;
        case 0: goto $l213;
    }
    $l222:;
    abort();
}
panda$io$File* panda$io$File$changeExtension$panda$core$String$R$panda$io$File(panda$io$File* self, panda$core$String* p_ext) {
    panda$io$File* $returnValue223;
    panda$io$File* $tmp224;
    panda$io$File* $tmp225;
    panda$io$File* $tmp226;
    panda$core$String* $tmp228;
    panda$core$String* $tmp229;
    panda$io$File* $tmp227 = panda$io$File$parent$R$panda$io$File$Q(self);
    $tmp226 = $tmp227;
    panda$core$String* $tmp230 = panda$io$File$simpleName$R$panda$core$String(self);
    $tmp229 = $tmp230;
    panda$core$String* $tmp231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp229, p_ext);
    $tmp228 = $tmp231;
    panda$io$File* $tmp232 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp226, $tmp228);
    $tmp225 = $tmp232;
    $tmp224 = $tmp225;
    $returnValue223 = $tmp224;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp224));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp225));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp228));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp229));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp226));
    return $returnValue223;
}
void panda$io$File$createDirectories(panda$io$File* self) {
    panda$io$File* p237 = NULL;
    panda$io$File* $tmp238;
    panda$io$File* $tmp239;
    panda$core$Bit $tmp243;
    int $tmp236;
    {
        panda$io$File* $tmp240 = panda$io$File$parent$R$panda$io$File$Q(self);
        $tmp239 = $tmp240;
        $tmp238 = $tmp239;
        p237 = $tmp238;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp238));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
        bool $tmp241 = ((panda$core$Bit) { p237 != NULL }).value;
        if (!$tmp241) goto $l242;
        panda$io$File$exists$R$panda$core$Bit(&$tmp243, p237);
        panda$core$Bit $tmp244 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp243);
        $tmp241 = $tmp244.value;
        $l242:;
        panda$core$Bit $tmp245 = { $tmp241 };
        if ($tmp245.value) {
        {
            panda$io$File$createDirectories(p237);
        }
        }
        panda$io$File$createDirectory(self);
    }
    $tmp236 = -1;
    goto $l234;
    $l234:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p237));
    p237 = NULL;
    switch ($tmp236) {
        case -1: goto $l246;
    }
    $l246:;
}
panda$core$String* panda$io$File$readFully$R$panda$core$String(panda$io$File* self) {
    panda$core$String* $returnValue247;
    panda$core$String* $tmp248;
    panda$core$String* $tmp249;
    panda$io$InputStream* $tmp250;
    panda$io$InputStream* $tmp251 = panda$io$File$openInputStream$R$panda$io$InputStream(self);
    $tmp250 = $tmp251;
    panda$core$String* $tmp253 = (($fn252) $tmp250->$class->vtable[14])($tmp250);
    $tmp249 = $tmp253;
    $tmp248 = $tmp249;
    $returnValue247 = $tmp248;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp248));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp250));
    return $returnValue247;
}
void panda$io$File$write$panda$core$String(panda$io$File* self, panda$core$String* p_contents) {
    panda$io$OutputStream* $tmp255;
    panda$io$OutputStream* $tmp256 = panda$io$File$openOutputStream$R$panda$io$OutputStream(self);
    $tmp255 = $tmp256;
    (($fn257) $tmp255->$class->vtable[17])($tmp255, p_contents);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
}
panda$core$Bit panda$io$File$$EQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other) {
    panda$core$Bit $returnValue258;
    panda$core$Bit $tmp259 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, p_other->path);
    $returnValue258 = $tmp259;
    return $returnValue258;
}
panda$core$Int64 panda$io$File$hash$R$panda$core$Int64(panda$io$File* self) {
    panda$core$Int64 $returnValue261;
    panda$core$Int64 $tmp262 = panda$core$String$hash$R$panda$core$Int64(self->path);
    $returnValue261 = $tmp262;
    return $returnValue261;
}
panda$core$String* panda$io$File$convert$R$panda$core$String(panda$io$File* self) {
    panda$core$String* $returnValue264;
    panda$core$String* $tmp265;
    $tmp265 = self->path;
    $returnValue264 = $tmp265;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp265));
    return $returnValue264;
}
void panda$io$File$cleanup(panda$io$File* self) {
    int $tmp269;
    {
    }
    $tmp269 = -1;
    goto $l267;
    $l267:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp269) {
        case -1: goto $l270;
    }
    $l270:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
}

