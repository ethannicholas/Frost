#include "org/pandalanguage/pandac/parser/SyntaxHighlighter.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Stack.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/SyntaxToken.h"

static panda$core$String $s1;
org$pandalanguage$pandac$parser$SyntaxHighlighter$class_type org$pandalanguage$pandac$parser$SyntaxHighlighter$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$SyntaxHighlighter$cleanup, org$pandalanguage$pandac$parser$SyntaxHighlighter$reset, org$pandalanguage$pandac$parser$SyntaxHighlighter$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$add$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$add$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$rewind} };

typedef void (*$fn45)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, panda$core$String*, org$pandalanguage$pandac$parser$Token$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn51)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, panda$core$String*, org$pandalanguage$pandac$parser$Token$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn86)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, panda$core$String*, org$pandalanguage$pandac$parser$Token$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn96)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, panda$core$String*, org$pandalanguage$pandac$parser$Token$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn101)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, panda$core$String*, org$pandalanguage$pandac$parser$Token$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn106)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, panda$core$String*, org$pandalanguage$pandac$parser$Token$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn111)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, panda$core$String*, org$pandalanguage$pandac$parser$Token$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn181)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, panda$core$String*, org$pandalanguage$pandac$parser$Token$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn256)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, panda$core$String*, org$pandalanguage$pandac$parser$Token$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn266)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, panda$core$String*, org$pandalanguage$pandac$parser$Token$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn511)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, panda$core$String*, org$pandalanguage$pandac$parser$Token$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn515)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, panda$core$String*, org$pandalanguage$pandac$parser$Token$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72", 49, -1741021081154568297, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x2e\x70\x61\x6e\x64\x61", 23, -4185779237782815759, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x63\x6b\x3a\x20", 7, 230517721144025, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x2e\x70\x61\x6e\x64\x61", 23, -4185779237782815759, NULL };

void org$pandalanguage$pandac$parser$SyntaxHighlighter$init(org$pandalanguage$pandac$parser$SyntaxHighlighter* self) {
    panda$collections$Stack* $tmp2;
    panda$collections$Stack* $tmp3;
    panda$collections$Array* $tmp5;
    panda$collections$Array* $tmp6;
    panda$core$Object* $tmp8;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp9;
    panda$core$Int64 $tmp10;
    self->stack = NULL;
    self->tokens = NULL;
    panda$collections$Stack* $tmp4 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
    panda$collections$Stack$init($tmp4);
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->stack = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$collections$Array* $tmp7 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp7);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    self->tokens = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$core$Int64$init$builtin_int64(&$tmp10, 0);
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp9, $tmp10);
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp11;
    $tmp11 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
    $tmp11->value = $tmp9;
    $tmp8 = ((panda$core$Object*) $tmp11);
    panda$collections$Stack$push$panda$collections$Stack$T(self->stack, $tmp8);
    panda$core$Panda$unref$panda$core$Object($tmp8);
}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$reset(org$pandalanguage$pandac$parser$SyntaxHighlighter* self) {
    panda$core$Int64 $tmp13;
    panda$core$String* $tmp18;
    panda$core$String* $tmp19;
    panda$collections$Array$clear(self->tokens);
    panda$core$Int64 $tmp12 = panda$collections$Stack$get_count$R$panda$core$Int64(self->stack);
    panda$core$Int64$init$builtin_int64(&$tmp13, 1);
    panda$core$Bit $tmp14 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp12, $tmp13);
    if ($tmp14.value) goto $l15; else goto $l16;
    $l16:;
    panda$core$String* $tmp21 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s20, ((panda$core$Object*) self->stack));
    $tmp19 = $tmp21;
    panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp19, &$s22);
    $tmp18 = $tmp23;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s17, (panda$core$Int64) { 77 }, $tmp18);
    abort();
    $l15:;
}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$SyntaxHighlighter* self, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind) {
    panda$core$Object* $tmp24;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp25;
    $tmp25 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
    $tmp25->value = p_kind;
    $tmp24 = ((panda$core$Object*) $tmp25);
    panda$collections$Stack$push$panda$collections$Stack$T(self->stack, $tmp24);
    panda$core$Panda$unref$panda$core$Object($tmp24);
}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$SyntaxHighlighter* self, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind) {
    panda$core$Object* $tmp26;
    panda$core$Int64 $tmp27;
    panda$core$Object* $tmp33;
    panda$core$Int64$init$builtin_int64(&$tmp27, 0);
    panda$core$Object* $tmp28 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->stack, $tmp27);
    $tmp26 = $tmp28;
    panda$core$Bit $tmp29 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp26)->value.$rawValue, p_kind.$rawValue);
    panda$core$Panda$unref$panda$core$Object($tmp26);
    if ($tmp29.value) goto $l30; else goto $l31;
    $l31:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s32, (panda$core$Int64) { 85 });
    abort();
    $l30:;
    panda$core$Object* $tmp34 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->stack);
    $tmp33 = $tmp34;
    panda$core$Panda$unref$panda$core$Object($tmp33);
}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$add$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$SyntaxHighlighter* self, panda$core$String* p_s, org$pandalanguage$pandac$parser$Token$Kind p_tokenKind, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_syntaxKind) {
    org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken* $tmp35;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken* $tmp36 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken$class);
    org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken$init$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp36, p_s, p_tokenKind, p_syntaxKind);
    $tmp35 = $tmp36;
    panda$collections$Array$add$panda$collections$Array$T(self->tokens, ((panda$core$Object*) $tmp35));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$add$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind(org$pandalanguage$pandac$parser$SyntaxHighlighter* self, panda$core$String* p_s, org$pandalanguage$pandac$parser$Token$Kind p_kind) {
    panda$core$Object* $tmp37;
    panda$core$Int64 $tmp38;
    panda$core$Int64 $tmp40;
    panda$core$Object* $tmp42;
    panda$core$Int64 $tmp43;
    org$pandalanguage$pandac$parser$Token$Kind $match$99_946;
    panda$core$Int64 $tmp47;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp49;
    panda$core$Int64 $tmp50;
    panda$core$Int64 $tmp58;
    panda$core$Int64 $tmp61;
    panda$core$Int64 $tmp65;
    panda$core$Int64 $tmp69;
    panda$core$Int64 $tmp73;
    panda$core$Int64 $tmp77;
    panda$core$Int64 $tmp81;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp84;
    panda$core$Int64 $tmp85;
    panda$core$Int64 $tmp88;
    panda$core$Int64 $tmp91;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp94;
    panda$core$Int64 $tmp95;
    panda$core$Int64 $tmp97;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp99;
    panda$core$Int64 $tmp100;
    panda$core$Int64 $tmp102;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp104;
    panda$core$Int64 $tmp105;
    panda$core$Int64 $tmp107;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp109;
    panda$core$Int64 $tmp110;
    panda$core$Int64 $tmp125;
    panda$core$Int64 $tmp128;
    panda$core$Int64 $tmp132;
    panda$core$Int64 $tmp136;
    panda$core$Int64 $tmp140;
    panda$core$Int64 $tmp144;
    panda$core$Int64 $tmp148;
    panda$core$Int64 $tmp152;
    panda$core$Int64 $tmp156;
    panda$core$Int64 $tmp160;
    panda$core$Int64 $tmp164;
    panda$core$Int64 $tmp168;
    panda$core$Int64 $tmp172;
    panda$core$Int64 $tmp176;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp179;
    panda$core$Int64 $tmp180;
    panda$core$Int64 $tmp196;
    panda$core$Int64 $tmp199;
    panda$core$Int64 $tmp203;
    panda$core$Int64 $tmp207;
    panda$core$Int64 $tmp211;
    panda$core$Int64 $tmp215;
    panda$core$Int64 $tmp219;
    panda$core$Int64 $tmp223;
    panda$core$Int64 $tmp227;
    panda$core$Int64 $tmp231;
    panda$core$Int64 $tmp235;
    panda$core$Int64 $tmp239;
    panda$core$Int64 $tmp243;
    panda$core$Int64 $tmp247;
    panda$core$Int64 $tmp251;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp254;
    panda$core$Int64 $tmp255;
    panda$core$Int64 $tmp258;
    panda$core$Int64 $tmp261;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp264;
    panda$core$Int64 $tmp265;
    panda$core$Int64 $tmp315;
    panda$core$Int64 $tmp318;
    panda$core$Int64 $tmp322;
    panda$core$Int64 $tmp326;
    panda$core$Int64 $tmp330;
    panda$core$Int64 $tmp334;
    panda$core$Int64 $tmp338;
    panda$core$Int64 $tmp342;
    panda$core$Int64 $tmp346;
    panda$core$Int64 $tmp350;
    panda$core$Int64 $tmp354;
    panda$core$Int64 $tmp358;
    panda$core$Int64 $tmp362;
    panda$core$Int64 $tmp366;
    panda$core$Int64 $tmp370;
    panda$core$Int64 $tmp374;
    panda$core$Int64 $tmp378;
    panda$core$Int64 $tmp382;
    panda$core$Int64 $tmp386;
    panda$core$Int64 $tmp390;
    panda$core$Int64 $tmp394;
    panda$core$Int64 $tmp398;
    panda$core$Int64 $tmp402;
    panda$core$Int64 $tmp406;
    panda$core$Int64 $tmp410;
    panda$core$Int64 $tmp414;
    panda$core$Int64 $tmp418;
    panda$core$Int64 $tmp422;
    panda$core$Int64 $tmp426;
    panda$core$Int64 $tmp430;
    panda$core$Int64 $tmp434;
    panda$core$Int64 $tmp438;
    panda$core$Int64 $tmp442;
    panda$core$Int64 $tmp446;
    panda$core$Int64 $tmp450;
    panda$core$Int64 $tmp454;
    panda$core$Int64 $tmp458;
    panda$core$Int64 $tmp462;
    panda$core$Int64 $tmp466;
    panda$core$Int64 $tmp470;
    panda$core$Int64 $tmp474;
    panda$core$Int64 $tmp478;
    panda$core$Int64 $tmp482;
    panda$core$Int64 $tmp486;
    panda$core$Int64 $tmp490;
    panda$core$Int64 $tmp494;
    panda$core$Int64 $tmp498;
    panda$core$Int64 $tmp502;
    panda$core$Int64 $tmp506;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp509;
    panda$core$Int64 $tmp510;
    panda$core$Object* $tmp512;
    panda$core$Int64 $tmp513;
    panda$core$Int64$init$builtin_int64(&$tmp38, 0);
    panda$core$Object* $tmp39 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->stack, $tmp38);
    $tmp37 = $tmp39;
    panda$core$Int64$init$builtin_int64(&$tmp40, 0);
    panda$core$Bit $tmp41 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp37)->value.$rawValue, $tmp40);
    panda$core$Panda$unref$panda$core$Object($tmp37);
    if ($tmp41.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp43, 0);
        panda$core$Object* $tmp44 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->stack, $tmp43);
        $tmp42 = $tmp44;
        (($fn45) self->$class->vtable[5])(self, p_s, p_kind, ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp42)->value);
        panda$core$Panda$unref$panda$core$Object($tmp42);
        return;
    }
    }
    {
        $match$99_946 = p_kind;
        panda$core$Int64$init$builtin_int64(&$tmp47, 1);
        panda$core$Bit $tmp48 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp47);
        if ($tmp48.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp50, 11);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp49, $tmp50);
            (($fn51) self->$class->vtable[5])(self, p_s, p_kind, $tmp49);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp58, 2);
        panda$core$Bit $tmp59 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp58);
        bool $tmp57 = $tmp59.value;
        if ($tmp57) goto $l60;
        panda$core$Int64$init$builtin_int64(&$tmp61, 3);
        panda$core$Bit $tmp62 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp61);
        $tmp57 = $tmp62.value;
        $l60:;
        panda$core$Bit $tmp63 = { $tmp57 };
        bool $tmp56 = $tmp63.value;
        if ($tmp56) goto $l64;
        panda$core$Int64$init$builtin_int64(&$tmp65, 4);
        panda$core$Bit $tmp66 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp65);
        $tmp56 = $tmp66.value;
        $l64:;
        panda$core$Bit $tmp67 = { $tmp56 };
        bool $tmp55 = $tmp67.value;
        if ($tmp55) goto $l68;
        panda$core$Int64$init$builtin_int64(&$tmp69, 5);
        panda$core$Bit $tmp70 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp69);
        $tmp55 = $tmp70.value;
        $l68:;
        panda$core$Bit $tmp71 = { $tmp55 };
        bool $tmp54 = $tmp71.value;
        if ($tmp54) goto $l72;
        panda$core$Int64$init$builtin_int64(&$tmp73, 41);
        panda$core$Bit $tmp74 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp73);
        $tmp54 = $tmp74.value;
        $l72:;
        panda$core$Bit $tmp75 = { $tmp54 };
        bool $tmp53 = $tmp75.value;
        if ($tmp53) goto $l76;
        panda$core$Int64$init$builtin_int64(&$tmp77, 42);
        panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp77);
        $tmp53 = $tmp78.value;
        $l76:;
        panda$core$Bit $tmp79 = { $tmp53 };
        bool $tmp52 = $tmp79.value;
        if ($tmp52) goto $l80;
        panda$core$Int64$init$builtin_int64(&$tmp81, 43);
        panda$core$Bit $tmp82 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp81);
        $tmp52 = $tmp82.value;
        $l80:;
        panda$core$Bit $tmp83 = { $tmp52 };
        if ($tmp83.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp85, 9);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp84, $tmp85);
            (($fn86) self->$class->vtable[5])(self, p_s, p_kind, $tmp84);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp88, 8);
        panda$core$Bit $tmp89 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp88);
        bool $tmp87 = $tmp89.value;
        if ($tmp87) goto $l90;
        panda$core$Int64$init$builtin_int64(&$tmp91, 9);
        panda$core$Bit $tmp92 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp91);
        $tmp87 = $tmp92.value;
        $l90:;
        panda$core$Bit $tmp93 = { $tmp87 };
        if ($tmp93.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp95, 1);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp94, $tmp95);
            (($fn96) self->$class->vtable[5])(self, p_s, p_kind, $tmp94);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp97, 10);
        panda$core$Bit $tmp98 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp97);
        if ($tmp98.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp100, 1);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp99, $tmp100);
            (($fn101) self->$class->vtable[5])(self, p_s, p_kind, $tmp99);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp102, 11);
        panda$core$Bit $tmp103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp102);
        if ($tmp103.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp105, 1);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp104, $tmp105);
            (($fn106) self->$class->vtable[5])(self, p_s, p_kind, $tmp104);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp107, 13);
        panda$core$Bit $tmp108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp107);
        if ($tmp108.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp110, 3);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp109, $tmp110);
            (($fn111) self->$class->vtable[5])(self, p_s, p_kind, $tmp109);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp125, 14);
        panda$core$Bit $tmp126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp125);
        bool $tmp124 = $tmp126.value;
        if ($tmp124) goto $l127;
        panda$core$Int64$init$builtin_int64(&$tmp128, 15);
        panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp128);
        $tmp124 = $tmp129.value;
        $l127:;
        panda$core$Bit $tmp130 = { $tmp124 };
        bool $tmp123 = $tmp130.value;
        if ($tmp123) goto $l131;
        panda$core$Int64$init$builtin_int64(&$tmp132, 16);
        panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp132);
        $tmp123 = $tmp133.value;
        $l131:;
        panda$core$Bit $tmp134 = { $tmp123 };
        bool $tmp122 = $tmp134.value;
        if ($tmp122) goto $l135;
        panda$core$Int64$init$builtin_int64(&$tmp136, 17);
        panda$core$Bit $tmp137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp136);
        $tmp122 = $tmp137.value;
        $l135:;
        panda$core$Bit $tmp138 = { $tmp122 };
        bool $tmp121 = $tmp138.value;
        if ($tmp121) goto $l139;
        panda$core$Int64$init$builtin_int64(&$tmp140, 18);
        panda$core$Bit $tmp141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp140);
        $tmp121 = $tmp141.value;
        $l139:;
        panda$core$Bit $tmp142 = { $tmp121 };
        bool $tmp120 = $tmp142.value;
        if ($tmp120) goto $l143;
        panda$core$Int64$init$builtin_int64(&$tmp144, 19);
        panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp144);
        $tmp120 = $tmp145.value;
        $l143:;
        panda$core$Bit $tmp146 = { $tmp120 };
        bool $tmp119 = $tmp146.value;
        if ($tmp119) goto $l147;
        panda$core$Int64$init$builtin_int64(&$tmp148, 20);
        panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp148);
        $tmp119 = $tmp149.value;
        $l147:;
        panda$core$Bit $tmp150 = { $tmp119 };
        bool $tmp118 = $tmp150.value;
        if ($tmp118) goto $l151;
        panda$core$Int64$init$builtin_int64(&$tmp152, 21);
        panda$core$Bit $tmp153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp152);
        $tmp118 = $tmp153.value;
        $l151:;
        panda$core$Bit $tmp154 = { $tmp118 };
        bool $tmp117 = $tmp154.value;
        if ($tmp117) goto $l155;
        panda$core$Int64$init$builtin_int64(&$tmp156, 23);
        panda$core$Bit $tmp157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp156);
        $tmp117 = $tmp157.value;
        $l155:;
        panda$core$Bit $tmp158 = { $tmp117 };
        bool $tmp116 = $tmp158.value;
        if ($tmp116) goto $l159;
        panda$core$Int64$init$builtin_int64(&$tmp160, 24);
        panda$core$Bit $tmp161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp160);
        $tmp116 = $tmp161.value;
        $l159:;
        panda$core$Bit $tmp162 = { $tmp116 };
        bool $tmp115 = $tmp162.value;
        if ($tmp115) goto $l163;
        panda$core$Int64$init$builtin_int64(&$tmp164, 25);
        panda$core$Bit $tmp165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp164);
        $tmp115 = $tmp165.value;
        $l163:;
        panda$core$Bit $tmp166 = { $tmp115 };
        bool $tmp114 = $tmp166.value;
        if ($tmp114) goto $l167;
        panda$core$Int64$init$builtin_int64(&$tmp168, 26);
        panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp168);
        $tmp114 = $tmp169.value;
        $l167:;
        panda$core$Bit $tmp170 = { $tmp114 };
        bool $tmp113 = $tmp170.value;
        if ($tmp113) goto $l171;
        panda$core$Int64$init$builtin_int64(&$tmp172, 33);
        panda$core$Bit $tmp173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp172);
        $tmp113 = $tmp173.value;
        $l171:;
        panda$core$Bit $tmp174 = { $tmp113 };
        bool $tmp112 = $tmp174.value;
        if ($tmp112) goto $l175;
        panda$core$Int64$init$builtin_int64(&$tmp176, 34);
        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp176);
        $tmp112 = $tmp177.value;
        $l175:;
        panda$core$Bit $tmp178 = { $tmp112 };
        if ($tmp178.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp180, 7);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp179, $tmp180);
            (($fn181) self->$class->vtable[5])(self, p_s, p_kind, $tmp179);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp196, 27);
        panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp196);
        bool $tmp195 = $tmp197.value;
        if ($tmp195) goto $l198;
        panda$core$Int64$init$builtin_int64(&$tmp199, 28);
        panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp199);
        $tmp195 = $tmp200.value;
        $l198:;
        panda$core$Bit $tmp201 = { $tmp195 };
        bool $tmp194 = $tmp201.value;
        if ($tmp194) goto $l202;
        panda$core$Int64$init$builtin_int64(&$tmp203, 29);
        panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp203);
        $tmp194 = $tmp204.value;
        $l202:;
        panda$core$Bit $tmp205 = { $tmp194 };
        bool $tmp193 = $tmp205.value;
        if ($tmp193) goto $l206;
        panda$core$Int64$init$builtin_int64(&$tmp207, 30);
        panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp207);
        $tmp193 = $tmp208.value;
        $l206:;
        panda$core$Bit $tmp209 = { $tmp193 };
        bool $tmp192 = $tmp209.value;
        if ($tmp192) goto $l210;
        panda$core$Int64$init$builtin_int64(&$tmp211, 31);
        panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp211);
        $tmp192 = $tmp212.value;
        $l210:;
        panda$core$Bit $tmp213 = { $tmp192 };
        bool $tmp191 = $tmp213.value;
        if ($tmp191) goto $l214;
        panda$core$Int64$init$builtin_int64(&$tmp215, 32);
        panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp215);
        $tmp191 = $tmp216.value;
        $l214:;
        panda$core$Bit $tmp217 = { $tmp191 };
        bool $tmp190 = $tmp217.value;
        if ($tmp190) goto $l218;
        panda$core$Int64$init$builtin_int64(&$tmp219, 35);
        panda$core$Bit $tmp220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp219);
        $tmp190 = $tmp220.value;
        $l218:;
        panda$core$Bit $tmp221 = { $tmp190 };
        bool $tmp189 = $tmp221.value;
        if ($tmp189) goto $l222;
        panda$core$Int64$init$builtin_int64(&$tmp223, 36);
        panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp223);
        $tmp189 = $tmp224.value;
        $l222:;
        panda$core$Bit $tmp225 = { $tmp189 };
        bool $tmp188 = $tmp225.value;
        if ($tmp188) goto $l226;
        panda$core$Int64$init$builtin_int64(&$tmp227, 37);
        panda$core$Bit $tmp228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp227);
        $tmp188 = $tmp228.value;
        $l226:;
        panda$core$Bit $tmp229 = { $tmp188 };
        bool $tmp187 = $tmp229.value;
        if ($tmp187) goto $l230;
        panda$core$Int64$init$builtin_int64(&$tmp231, 38);
        panda$core$Bit $tmp232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp231);
        $tmp187 = $tmp232.value;
        $l230:;
        panda$core$Bit $tmp233 = { $tmp187 };
        bool $tmp186 = $tmp233.value;
        if ($tmp186) goto $l234;
        panda$core$Int64$init$builtin_int64(&$tmp235, 39);
        panda$core$Bit $tmp236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp235);
        $tmp186 = $tmp236.value;
        $l234:;
        panda$core$Bit $tmp237 = { $tmp186 };
        bool $tmp185 = $tmp237.value;
        if ($tmp185) goto $l238;
        panda$core$Int64$init$builtin_int64(&$tmp239, 40);
        panda$core$Bit $tmp240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp239);
        $tmp185 = $tmp240.value;
        $l238:;
        panda$core$Bit $tmp241 = { $tmp185 };
        bool $tmp184 = $tmp241.value;
        if ($tmp184) goto $l242;
        panda$core$Int64$init$builtin_int64(&$tmp243, 22);
        panda$core$Bit $tmp244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp243);
        $tmp184 = $tmp244.value;
        $l242:;
        panda$core$Bit $tmp245 = { $tmp184 };
        bool $tmp183 = $tmp245.value;
        if ($tmp183) goto $l246;
        panda$core$Int64$init$builtin_int64(&$tmp247, 44);
        panda$core$Bit $tmp248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp247);
        $tmp183 = $tmp248.value;
        $l246:;
        panda$core$Bit $tmp249 = { $tmp183 };
        bool $tmp182 = $tmp249.value;
        if ($tmp182) goto $l250;
        panda$core$Int64$init$builtin_int64(&$tmp251, 45);
        panda$core$Bit $tmp252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp251);
        $tmp182 = $tmp252.value;
        $l250:;
        panda$core$Bit $tmp253 = { $tmp182 };
        if ($tmp253.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp255, 8);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp254, $tmp255);
            (($fn256) self->$class->vtable[5])(self, p_s, p_kind, $tmp254);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp258, 46);
        panda$core$Bit $tmp259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp258);
        bool $tmp257 = $tmp259.value;
        if ($tmp257) goto $l260;
        panda$core$Int64$init$builtin_int64(&$tmp261, 47);
        panda$core$Bit $tmp262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp261);
        $tmp257 = $tmp262.value;
        $l260:;
        panda$core$Bit $tmp263 = { $tmp257 };
        if ($tmp263.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp265, 9);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp264, $tmp265);
            (($fn266) self->$class->vtable[5])(self, p_s, p_kind, $tmp264);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp315, 49);
        panda$core$Bit $tmp316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp315);
        bool $tmp314 = $tmp316.value;
        if ($tmp314) goto $l317;
        panda$core$Int64$init$builtin_int64(&$tmp318, 50);
        panda$core$Bit $tmp319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp318);
        $tmp314 = $tmp319.value;
        $l317:;
        panda$core$Bit $tmp320 = { $tmp314 };
        bool $tmp313 = $tmp320.value;
        if ($tmp313) goto $l321;
        panda$core$Int64$init$builtin_int64(&$tmp322, 51);
        panda$core$Bit $tmp323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp322);
        $tmp313 = $tmp323.value;
        $l321:;
        panda$core$Bit $tmp324 = { $tmp313 };
        bool $tmp312 = $tmp324.value;
        if ($tmp312) goto $l325;
        panda$core$Int64$init$builtin_int64(&$tmp326, 52);
        panda$core$Bit $tmp327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp326);
        $tmp312 = $tmp327.value;
        $l325:;
        panda$core$Bit $tmp328 = { $tmp312 };
        bool $tmp311 = $tmp328.value;
        if ($tmp311) goto $l329;
        panda$core$Int64$init$builtin_int64(&$tmp330, 53);
        panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp330);
        $tmp311 = $tmp331.value;
        $l329:;
        panda$core$Bit $tmp332 = { $tmp311 };
        bool $tmp310 = $tmp332.value;
        if ($tmp310) goto $l333;
        panda$core$Int64$init$builtin_int64(&$tmp334, 54);
        panda$core$Bit $tmp335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp334);
        $tmp310 = $tmp335.value;
        $l333:;
        panda$core$Bit $tmp336 = { $tmp310 };
        bool $tmp309 = $tmp336.value;
        if ($tmp309) goto $l337;
        panda$core$Int64$init$builtin_int64(&$tmp338, 55);
        panda$core$Bit $tmp339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp338);
        $tmp309 = $tmp339.value;
        $l337:;
        panda$core$Bit $tmp340 = { $tmp309 };
        bool $tmp308 = $tmp340.value;
        if ($tmp308) goto $l341;
        panda$core$Int64$init$builtin_int64(&$tmp342, 56);
        panda$core$Bit $tmp343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp342);
        $tmp308 = $tmp343.value;
        $l341:;
        panda$core$Bit $tmp344 = { $tmp308 };
        bool $tmp307 = $tmp344.value;
        if ($tmp307) goto $l345;
        panda$core$Int64$init$builtin_int64(&$tmp346, 57);
        panda$core$Bit $tmp347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp346);
        $tmp307 = $tmp347.value;
        $l345:;
        panda$core$Bit $tmp348 = { $tmp307 };
        bool $tmp306 = $tmp348.value;
        if ($tmp306) goto $l349;
        panda$core$Int64$init$builtin_int64(&$tmp350, 58);
        panda$core$Bit $tmp351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp350);
        $tmp306 = $tmp351.value;
        $l349:;
        panda$core$Bit $tmp352 = { $tmp306 };
        bool $tmp305 = $tmp352.value;
        if ($tmp305) goto $l353;
        panda$core$Int64$init$builtin_int64(&$tmp354, 59);
        panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp354);
        $tmp305 = $tmp355.value;
        $l353:;
        panda$core$Bit $tmp356 = { $tmp305 };
        bool $tmp304 = $tmp356.value;
        if ($tmp304) goto $l357;
        panda$core$Int64$init$builtin_int64(&$tmp358, 60);
        panda$core$Bit $tmp359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp358);
        $tmp304 = $tmp359.value;
        $l357:;
        panda$core$Bit $tmp360 = { $tmp304 };
        bool $tmp303 = $tmp360.value;
        if ($tmp303) goto $l361;
        panda$core$Int64$init$builtin_int64(&$tmp362, 61);
        panda$core$Bit $tmp363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp362);
        $tmp303 = $tmp363.value;
        $l361:;
        panda$core$Bit $tmp364 = { $tmp303 };
        bool $tmp302 = $tmp364.value;
        if ($tmp302) goto $l365;
        panda$core$Int64$init$builtin_int64(&$tmp366, 62);
        panda$core$Bit $tmp367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp366);
        $tmp302 = $tmp367.value;
        $l365:;
        panda$core$Bit $tmp368 = { $tmp302 };
        bool $tmp301 = $tmp368.value;
        if ($tmp301) goto $l369;
        panda$core$Int64$init$builtin_int64(&$tmp370, 63);
        panda$core$Bit $tmp371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp370);
        $tmp301 = $tmp371.value;
        $l369:;
        panda$core$Bit $tmp372 = { $tmp301 };
        bool $tmp300 = $tmp372.value;
        if ($tmp300) goto $l373;
        panda$core$Int64$init$builtin_int64(&$tmp374, 64);
        panda$core$Bit $tmp375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp374);
        $tmp300 = $tmp375.value;
        $l373:;
        panda$core$Bit $tmp376 = { $tmp300 };
        bool $tmp299 = $tmp376.value;
        if ($tmp299) goto $l377;
        panda$core$Int64$init$builtin_int64(&$tmp378, 65);
        panda$core$Bit $tmp379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp378);
        $tmp299 = $tmp379.value;
        $l377:;
        panda$core$Bit $tmp380 = { $tmp299 };
        bool $tmp298 = $tmp380.value;
        if ($tmp298) goto $l381;
        panda$core$Int64$init$builtin_int64(&$tmp382, 66);
        panda$core$Bit $tmp383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp382);
        $tmp298 = $tmp383.value;
        $l381:;
        panda$core$Bit $tmp384 = { $tmp298 };
        bool $tmp297 = $tmp384.value;
        if ($tmp297) goto $l385;
        panda$core$Int64$init$builtin_int64(&$tmp386, 67);
        panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp386);
        $tmp297 = $tmp387.value;
        $l385:;
        panda$core$Bit $tmp388 = { $tmp297 };
        bool $tmp296 = $tmp388.value;
        if ($tmp296) goto $l389;
        panda$core$Int64$init$builtin_int64(&$tmp390, 68);
        panda$core$Bit $tmp391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp390);
        $tmp296 = $tmp391.value;
        $l389:;
        panda$core$Bit $tmp392 = { $tmp296 };
        bool $tmp295 = $tmp392.value;
        if ($tmp295) goto $l393;
        panda$core$Int64$init$builtin_int64(&$tmp394, 69);
        panda$core$Bit $tmp395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp394);
        $tmp295 = $tmp395.value;
        $l393:;
        panda$core$Bit $tmp396 = { $tmp295 };
        bool $tmp294 = $tmp396.value;
        if ($tmp294) goto $l397;
        panda$core$Int64$init$builtin_int64(&$tmp398, 70);
        panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp398);
        $tmp294 = $tmp399.value;
        $l397:;
        panda$core$Bit $tmp400 = { $tmp294 };
        bool $tmp293 = $tmp400.value;
        if ($tmp293) goto $l401;
        panda$core$Int64$init$builtin_int64(&$tmp402, 71);
        panda$core$Bit $tmp403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp402);
        $tmp293 = $tmp403.value;
        $l401:;
        panda$core$Bit $tmp404 = { $tmp293 };
        bool $tmp292 = $tmp404.value;
        if ($tmp292) goto $l405;
        panda$core$Int64$init$builtin_int64(&$tmp406, 72);
        panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp406);
        $tmp292 = $tmp407.value;
        $l405:;
        panda$core$Bit $tmp408 = { $tmp292 };
        bool $tmp291 = $tmp408.value;
        if ($tmp291) goto $l409;
        panda$core$Int64$init$builtin_int64(&$tmp410, 73);
        panda$core$Bit $tmp411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp410);
        $tmp291 = $tmp411.value;
        $l409:;
        panda$core$Bit $tmp412 = { $tmp291 };
        bool $tmp290 = $tmp412.value;
        if ($tmp290) goto $l413;
        panda$core$Int64$init$builtin_int64(&$tmp414, 74);
        panda$core$Bit $tmp415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp414);
        $tmp290 = $tmp415.value;
        $l413:;
        panda$core$Bit $tmp416 = { $tmp290 };
        bool $tmp289 = $tmp416.value;
        if ($tmp289) goto $l417;
        panda$core$Int64$init$builtin_int64(&$tmp418, 75);
        panda$core$Bit $tmp419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp418);
        $tmp289 = $tmp419.value;
        $l417:;
        panda$core$Bit $tmp420 = { $tmp289 };
        bool $tmp288 = $tmp420.value;
        if ($tmp288) goto $l421;
        panda$core$Int64$init$builtin_int64(&$tmp422, 76);
        panda$core$Bit $tmp423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp422);
        $tmp288 = $tmp423.value;
        $l421:;
        panda$core$Bit $tmp424 = { $tmp288 };
        bool $tmp287 = $tmp424.value;
        if ($tmp287) goto $l425;
        panda$core$Int64$init$builtin_int64(&$tmp426, 77);
        panda$core$Bit $tmp427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp426);
        $tmp287 = $tmp427.value;
        $l425:;
        panda$core$Bit $tmp428 = { $tmp287 };
        bool $tmp286 = $tmp428.value;
        if ($tmp286) goto $l429;
        panda$core$Int64$init$builtin_int64(&$tmp430, 78);
        panda$core$Bit $tmp431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp430);
        $tmp286 = $tmp431.value;
        $l429:;
        panda$core$Bit $tmp432 = { $tmp286 };
        bool $tmp285 = $tmp432.value;
        if ($tmp285) goto $l433;
        panda$core$Int64$init$builtin_int64(&$tmp434, 79);
        panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp434);
        $tmp285 = $tmp435.value;
        $l433:;
        panda$core$Bit $tmp436 = { $tmp285 };
        bool $tmp284 = $tmp436.value;
        if ($tmp284) goto $l437;
        panda$core$Int64$init$builtin_int64(&$tmp438, 80);
        panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp438);
        $tmp284 = $tmp439.value;
        $l437:;
        panda$core$Bit $tmp440 = { $tmp284 };
        bool $tmp283 = $tmp440.value;
        if ($tmp283) goto $l441;
        panda$core$Int64$init$builtin_int64(&$tmp442, 81);
        panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp442);
        $tmp283 = $tmp443.value;
        $l441:;
        panda$core$Bit $tmp444 = { $tmp283 };
        bool $tmp282 = $tmp444.value;
        if ($tmp282) goto $l445;
        panda$core$Int64$init$builtin_int64(&$tmp446, 82);
        panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp446);
        $tmp282 = $tmp447.value;
        $l445:;
        panda$core$Bit $tmp448 = { $tmp282 };
        bool $tmp281 = $tmp448.value;
        if ($tmp281) goto $l449;
        panda$core$Int64$init$builtin_int64(&$tmp450, 83);
        panda$core$Bit $tmp451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp450);
        $tmp281 = $tmp451.value;
        $l449:;
        panda$core$Bit $tmp452 = { $tmp281 };
        bool $tmp280 = $tmp452.value;
        if ($tmp280) goto $l453;
        panda$core$Int64$init$builtin_int64(&$tmp454, 84);
        panda$core$Bit $tmp455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp454);
        $tmp280 = $tmp455.value;
        $l453:;
        panda$core$Bit $tmp456 = { $tmp280 };
        bool $tmp279 = $tmp456.value;
        if ($tmp279) goto $l457;
        panda$core$Int64$init$builtin_int64(&$tmp458, 85);
        panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp458);
        $tmp279 = $tmp459.value;
        $l457:;
        panda$core$Bit $tmp460 = { $tmp279 };
        bool $tmp278 = $tmp460.value;
        if ($tmp278) goto $l461;
        panda$core$Int64$init$builtin_int64(&$tmp462, 86);
        panda$core$Bit $tmp463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp462);
        $tmp278 = $tmp463.value;
        $l461:;
        panda$core$Bit $tmp464 = { $tmp278 };
        bool $tmp277 = $tmp464.value;
        if ($tmp277) goto $l465;
        panda$core$Int64$init$builtin_int64(&$tmp466, 87);
        panda$core$Bit $tmp467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp466);
        $tmp277 = $tmp467.value;
        $l465:;
        panda$core$Bit $tmp468 = { $tmp277 };
        bool $tmp276 = $tmp468.value;
        if ($tmp276) goto $l469;
        panda$core$Int64$init$builtin_int64(&$tmp470, 88);
        panda$core$Bit $tmp471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp470);
        $tmp276 = $tmp471.value;
        $l469:;
        panda$core$Bit $tmp472 = { $tmp276 };
        bool $tmp275 = $tmp472.value;
        if ($tmp275) goto $l473;
        panda$core$Int64$init$builtin_int64(&$tmp474, 89);
        panda$core$Bit $tmp475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp474);
        $tmp275 = $tmp475.value;
        $l473:;
        panda$core$Bit $tmp476 = { $tmp275 };
        bool $tmp274 = $tmp476.value;
        if ($tmp274) goto $l477;
        panda$core$Int64$init$builtin_int64(&$tmp478, 90);
        panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp478);
        $tmp274 = $tmp479.value;
        $l477:;
        panda$core$Bit $tmp480 = { $tmp274 };
        bool $tmp273 = $tmp480.value;
        if ($tmp273) goto $l481;
        panda$core$Int64$init$builtin_int64(&$tmp482, 91);
        panda$core$Bit $tmp483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp482);
        $tmp273 = $tmp483.value;
        $l481:;
        panda$core$Bit $tmp484 = { $tmp273 };
        bool $tmp272 = $tmp484.value;
        if ($tmp272) goto $l485;
        panda$core$Int64$init$builtin_int64(&$tmp486, 92);
        panda$core$Bit $tmp487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp486);
        $tmp272 = $tmp487.value;
        $l485:;
        panda$core$Bit $tmp488 = { $tmp272 };
        bool $tmp271 = $tmp488.value;
        if ($tmp271) goto $l489;
        panda$core$Int64$init$builtin_int64(&$tmp490, 93);
        panda$core$Bit $tmp491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp490);
        $tmp271 = $tmp491.value;
        $l489:;
        panda$core$Bit $tmp492 = { $tmp271 };
        bool $tmp270 = $tmp492.value;
        if ($tmp270) goto $l493;
        panda$core$Int64$init$builtin_int64(&$tmp494, 94);
        panda$core$Bit $tmp495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp494);
        $tmp270 = $tmp495.value;
        $l493:;
        panda$core$Bit $tmp496 = { $tmp270 };
        bool $tmp269 = $tmp496.value;
        if ($tmp269) goto $l497;
        panda$core$Int64$init$builtin_int64(&$tmp498, 95);
        panda$core$Bit $tmp499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp498);
        $tmp269 = $tmp499.value;
        $l497:;
        panda$core$Bit $tmp500 = { $tmp269 };
        bool $tmp268 = $tmp500.value;
        if ($tmp268) goto $l501;
        panda$core$Int64$init$builtin_int64(&$tmp502, 96);
        panda$core$Bit $tmp503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp502);
        $tmp268 = $tmp503.value;
        $l501:;
        panda$core$Bit $tmp504 = { $tmp268 };
        bool $tmp267 = $tmp504.value;
        if ($tmp267) goto $l505;
        panda$core$Int64$init$builtin_int64(&$tmp506, 97);
        panda$core$Bit $tmp507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$99_946.$rawValue, $tmp506);
        $tmp267 = $tmp507.value;
        $l505:;
        panda$core$Bit $tmp508 = { $tmp267 };
        if ($tmp508.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp510, 11);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp509, $tmp510);
            (($fn511) self->$class->vtable[5])(self, p_s, p_kind, $tmp509);
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp513, 0);
            panda$core$Object* $tmp514 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->stack, $tmp513);
            $tmp512 = $tmp514;
            (($fn515) self->$class->vtable[5])(self, p_s, p_kind, ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp512)->value);
            panda$core$Panda$unref$panda$core$Object($tmp512);
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$rewind(org$pandalanguage$pandac$parser$SyntaxHighlighter* self) {
    panda$core$Object* $tmp516;
    panda$core$Int64 $tmp518;
    panda$core$Int64 $tmp517 = panda$collections$Array$get_count$R$panda$core$Int64(self->tokens);
    panda$core$Int64$init$builtin_int64(&$tmp518, 1);
    panda$core$Int64 $tmp519 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp517, $tmp518);
    panda$core$Object* $tmp520 = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(self->tokens, $tmp519);
    $tmp516 = $tmp520;
    panda$core$Panda$unref$panda$core$Object($tmp516);
}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$cleanup(org$pandalanguage$pandac$parser$SyntaxHighlighter* self) {
    int $tmp523;
    {
    }
    $tmp523 = -1;
    goto $l521;
    $l521:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp523) {
        case -1: goto $l524;
    }
    $l524:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->stack));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->tokens));
}

