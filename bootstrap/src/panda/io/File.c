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
typedef panda$core$String* (*$fn268)(panda$io$InputStream*);
typedef void (*$fn273)(panda$io$OutputStream*, panda$core$String*);

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
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x6c\x65\x2e\x70\x61\x6e\x64\x61", 10, 3701427203398107887, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x6c\x65\x2e\x70\x61\x6e\x64\x61", 10, 3701427203398107887, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x6c\x65\x2e\x70\x61\x6e\x64\x61", 10, 3701427203398107887, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x6c\x65\x2e\x70\x61\x6e\x64\x61", 10, 3701427203398107887, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

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
    if (false) goto $l168; else goto $l169;
    $l169:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s170, (panda$core$Int64) { 69 }, &$s171);
    abort();
    $l168:;
    abort();
}
panda$io$File* panda$io$File$parent$R$panda$io$File$Q(panda$io$File* self) {
    panda$core$String* result175 = NULL;
    panda$core$String* $tmp176;
    panda$core$String* $tmp177;
    panda$io$File* $tmp178;
    panda$io$File* $returnValue182;
    panda$io$File* $tmp183;
    panda$io$File* $tmp186;
    panda$io$File* $tmp187;
    int $tmp174;
    {
        panda$io$File* $tmp180 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self, &$s179);
        $tmp178 = $tmp180;
        panda$core$String* $tmp181 = panda$io$File$normalize$panda$core$String$R$panda$core$String$Q(self, $tmp178->path);
        $tmp177 = $tmp181;
        $tmp176 = $tmp177;
        result175 = $tmp176;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp176));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
        if (((panda$core$Bit) { result175 == NULL }).value) {
        {
            $tmp183 = NULL;
            $returnValue182 = $tmp183;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp183));
            $tmp174 = 0;
            goto $l172;
            $l184:;
            return $returnValue182;
        }
        }
        panda$io$File* $tmp188 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp188, result175);
        $tmp187 = $tmp188;
        $tmp186 = $tmp187;
        $returnValue182 = $tmp186;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp186));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
        $tmp174 = 1;
        goto $l172;
        $l189:;
        return $returnValue182;
    }
    $l172:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result175));
    result175 = NULL;
    switch ($tmp174) {
        case 1: goto $l189;
        case 0: goto $l184;
    }
    $l191:;
    if (false) goto $l192; else goto $l193;
    $l193:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s194, (panda$core$Int64) { 117 }, &$s195);
    abort();
    $l192:;
    abort();
}
panda$core$String* panda$io$File$name$R$panda$core$String(panda$io$File* self) {
    panda$core$String$Index$nullable index196;
    panda$core$String* $returnValue199;
    panda$core$String* $tmp200;
    panda$core$String* $tmp201;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp202;
    panda$core$Bit $tmp204;
    panda$core$String* $tmp207;
    panda$core$String$Index$nullable $tmp198 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(self->path, &$s197);
    index196 = $tmp198;
    if (((panda$core$Bit) { index196.nonnull }).value) {
    {
        panda$core$String$Index $tmp203 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->path, ((panda$core$String$Index) index196.value));
        panda$core$Bit$init$builtin_bit(&$tmp204, false);
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp202, ((panda$core$String$Index$nullable) { $tmp203, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp204);
        panda$core$String* $tmp205 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->path, $tmp202);
        $tmp201 = $tmp205;
        $tmp200 = $tmp201;
        $returnValue199 = $tmp200;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp200));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp201));
        return $returnValue199;
    }
    }
    else {
    {
        $tmp207 = self->path;
        $returnValue199 = $tmp207;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp207));
        return $returnValue199;
    }
    }
    if (false) goto $l209; else goto $l210;
    $l210:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s211, (panda$core$Int64) { 131 }, &$s212);
    abort();
    $l209:;
    abort();
}
panda$core$String* panda$io$File$simpleName$R$panda$core$String(panda$io$File* self) {
    panda$core$String* result216 = NULL;
    panda$core$String* $tmp217;
    panda$core$String* $tmp218;
    panda$core$String$Index$nullable index220;
    panda$core$String* $returnValue223;
    panda$core$String* $tmp224;
    panda$core$String* $tmp227;
    panda$core$String* $tmp228;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp229;
    panda$core$Bit $tmp230;
    int $tmp215;
    {
        panda$core$String* $tmp219 = panda$io$File$name$R$panda$core$String(self);
        $tmp218 = $tmp219;
        $tmp217 = $tmp218;
        result216 = $tmp217;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
        panda$core$String$Index$nullable $tmp222 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(result216, &$s221);
        index220 = $tmp222;
        if (((panda$core$Bit) { !index220.nonnull }).value) {
        {
            $tmp224 = result216;
            $returnValue223 = $tmp224;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp224));
            $tmp215 = 0;
            goto $l213;
            $l225:;
            return $returnValue223;
        }
        }
        panda$core$Bit$init$builtin_bit(&$tmp230, false);
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp229, ((panda$core$String$Index$nullable) { .nonnull = false }), index220, $tmp230);
        panda$core$String* $tmp231 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(result216, $tmp229);
        $tmp228 = $tmp231;
        $tmp227 = $tmp228;
        $returnValue223 = $tmp227;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp227));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp228));
        $tmp215 = 1;
        goto $l213;
        $l232:;
        return $returnValue223;
    }
    $l213:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result216));
    result216 = NULL;
    switch ($tmp215) {
        case 1: goto $l232;
        case 0: goto $l225;
    }
    $l234:;
    if (false) goto $l235; else goto $l236;
    $l236:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s237, (panda$core$Int64) { 148 }, &$s238);
    abort();
    $l235:;
    abort();
}
panda$io$File* panda$io$File$changeExtension$panda$core$String$R$panda$io$File(panda$io$File* self, panda$core$String* p_ext) {
    panda$io$File* $returnValue239;
    panda$io$File* $tmp240;
    panda$io$File* $tmp241;
    panda$io$File* $tmp242;
    panda$core$String* $tmp244;
    panda$core$String* $tmp245;
    panda$io$File* $tmp243 = panda$io$File$parent$R$panda$io$File$Q(self);
    $tmp242 = $tmp243;
    panda$core$String* $tmp246 = panda$io$File$simpleName$R$panda$core$String(self);
    $tmp245 = $tmp246;
    panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp245, p_ext);
    $tmp244 = $tmp247;
    panda$io$File* $tmp248 = panda$io$File$resolve$panda$core$String$R$panda$io$File($tmp242, $tmp244);
    $tmp241 = $tmp248;
    $tmp240 = $tmp241;
    $returnValue239 = $tmp240;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp240));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp241));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp244));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
    return $returnValue239;
}
void panda$io$File$createDirectories(panda$io$File* self) {
    panda$io$File* p253 = NULL;
    panda$io$File* $tmp254;
    panda$io$File* $tmp255;
    panda$core$Bit $tmp259;
    int $tmp252;
    {
        panda$io$File* $tmp256 = panda$io$File$parent$R$panda$io$File$Q(self);
        $tmp255 = $tmp256;
        $tmp254 = $tmp255;
        p253 = $tmp254;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
        bool $tmp257 = ((panda$core$Bit) { p253 != NULL }).value;
        if (!$tmp257) goto $l258;
        panda$io$File$exists$R$panda$core$Bit(&$tmp259, p253);
        panda$core$Bit $tmp260 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp259);
        $tmp257 = $tmp260.value;
        $l258:;
        panda$core$Bit $tmp261 = { $tmp257 };
        if ($tmp261.value) {
        {
            panda$io$File$createDirectories(p253);
        }
        }
        panda$io$File$createDirectory(self);
    }
    $tmp252 = -1;
    goto $l250;
    $l250:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p253));
    p253 = NULL;
    switch ($tmp252) {
        case -1: goto $l262;
    }
    $l262:;
}
panda$core$String* panda$io$File$readFully$R$panda$core$String(panda$io$File* self) {
    panda$core$String* $returnValue263;
    panda$core$String* $tmp264;
    panda$core$String* $tmp265;
    panda$io$InputStream* $tmp266;
    panda$io$InputStream* $tmp267 = panda$io$File$openInputStream$R$panda$io$InputStream(self);
    $tmp266 = $tmp267;
    panda$core$String* $tmp269 = (($fn268) $tmp266->$class->vtable[14])($tmp266);
    $tmp265 = $tmp269;
    $tmp264 = $tmp265;
    $returnValue263 = $tmp264;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp264));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp265));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
    return $returnValue263;
}
void panda$io$File$write$panda$core$String(panda$io$File* self, panda$core$String* p_contents) {
    panda$io$OutputStream* $tmp271;
    panda$io$OutputStream* $tmp272 = panda$io$File$openOutputStream$R$panda$io$OutputStream(self);
    $tmp271 = $tmp272;
    (($fn273) $tmp271->$class->vtable[17])($tmp271, p_contents);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp271));
}
panda$core$Bit panda$io$File$$EQ$panda$io$File$R$panda$core$Bit(panda$io$File* self, panda$io$File* p_other) {
    panda$core$Bit $returnValue274;
    panda$core$Bit $tmp275 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->path, p_other->path);
    $returnValue274 = $tmp275;
    return $returnValue274;
}
panda$core$Int64 panda$io$File$hash$R$panda$core$Int64(panda$io$File* self) {
    panda$core$Int64 $returnValue277;
    panda$core$Int64 $tmp278 = panda$core$String$hash$R$panda$core$Int64(self->path);
    $returnValue277 = $tmp278;
    return $returnValue277;
}
panda$core$String* panda$io$File$convert$R$panda$core$String(panda$io$File* self) {
    panda$core$String* $returnValue280;
    panda$core$String* $tmp281;
    $tmp281 = self->path;
    $returnValue280 = $tmp281;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp281));
    return $returnValue280;
}
void panda$io$File$cleanup(panda$io$File* self) {
    int $tmp285;
    {
    }
    $tmp285 = -1;
    goto $l283;
    $l283:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp285) {
        case -1: goto $l286;
    }
    $l286:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
}

