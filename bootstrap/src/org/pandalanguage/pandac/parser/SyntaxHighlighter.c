#include "org/pandalanguage/pandac/parser/SyntaxHighlighter.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Array.h"
#include "panda/collections/Stack.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"

static panda$core$String $s1;
org$pandalanguage$pandac$parser$SyntaxHighlighter$class_type org$pandalanguage$pandac$parser$SyntaxHighlighter$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$SyntaxHighlighter$cleanup, org$pandalanguage$pandac$parser$SyntaxHighlighter$reset, org$pandalanguage$pandac$parser$SyntaxHighlighter$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$add$org$pandalanguage$pandac$parser$Token$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$SyntaxHighlighter$add$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$rewind} };

typedef void (*$fn25)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn31)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn71)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn81)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn86)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn91)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn96)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn166)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn241)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn251)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn496)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn499)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72", 49, -1741021081154568297, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x2e\x70\x61\x6e\x64\x61", 23, -4185779237782815759, NULL };

void org$pandalanguage$pandac$parser$SyntaxHighlighter$reset(org$pandalanguage$pandac$parser$SyntaxHighlighter* self) {
    panda$collections$Array$clear(self->tokens);
    panda$collections$Stack$clear(self->stack);
}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$SyntaxHighlighter* self, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind) {
    panda$core$Object* $tmp2;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp3;
    $tmp3 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
    $tmp3->value = p_kind;
    $tmp2 = ((panda$core$Object*) $tmp3);
    panda$collections$Stack$push$panda$collections$Stack$T(self->stack, $tmp2);
    panda$core$Panda$unref$panda$core$Object($tmp2);
}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$SyntaxHighlighter* self, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind) {
    panda$core$Object* $tmp4;
    panda$core$Int64 $tmp5;
    panda$core$Object* $tmp11;
    panda$core$Int64$init$builtin_int64(&$tmp5, 0);
    panda$core$Object* $tmp6 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->stack, $tmp5);
    $tmp4 = $tmp6;
    panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp4)->value.$rawValue, p_kind.$rawValue);
    panda$core$Panda$unref$panda$core$Object($tmp4);
    if ($tmp7.value) goto $l8; else goto $l9;
    $l9:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s10, (panda$core$Int64) { 70 });
    abort();
    $l8:;
    panda$core$Object* $tmp12 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->stack);
    $tmp11 = $tmp12;
    panda$core$Panda$unref$panda$core$Object($tmp11);
}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$add$org$pandalanguage$pandac$parser$Token$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$SyntaxHighlighter* self, org$pandalanguage$pandac$parser$Token p_token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_syntaxKind) {
    org$pandalanguage$pandac$Pair* $tmp13;
    panda$core$Object* $tmp15;
    panda$core$Object* $tmp17;
    org$pandalanguage$pandac$Pair* $tmp14 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
    org$pandalanguage$pandac$parser$Token$wrapper* $tmp16;
    $tmp16 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
    $tmp16->value = p_token;
    $tmp15 = ((panda$core$Object*) $tmp16);
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp18;
    $tmp18 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
    $tmp18->value = p_syntaxKind;
    $tmp17 = ((panda$core$Object*) $tmp18);
    org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp14, $tmp15, $tmp17);
    $tmp13 = $tmp14;
    panda$collections$Array$add$panda$collections$Array$T(self->tokens, ((panda$core$Object*) $tmp13));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
    panda$core$Panda$unref$panda$core$Object($tmp17);
    panda$core$Panda$unref$panda$core$Object($tmp15);
}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$add$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$SyntaxHighlighter* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$Int64 $tmp20;
    panda$core$Object* $tmp22;
    panda$core$Int64 $tmp23;
    org$pandalanguage$pandac$parser$Token$Kind $match$84_926;
    panda$core$Int64 $tmp27;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp29;
    panda$core$Int64 $tmp30;
    panda$core$Int64 $tmp39;
    panda$core$Int64 $tmp42;
    panda$core$Int64 $tmp46;
    panda$core$Int64 $tmp50;
    panda$core$Int64 $tmp54;
    panda$core$Int64 $tmp58;
    panda$core$Int64 $tmp62;
    panda$core$Int64 $tmp66;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp69;
    panda$core$Int64 $tmp70;
    panda$core$Int64 $tmp73;
    panda$core$Int64 $tmp76;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp79;
    panda$core$Int64 $tmp80;
    panda$core$Int64 $tmp82;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp84;
    panda$core$Int64 $tmp85;
    panda$core$Int64 $tmp87;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp89;
    panda$core$Int64 $tmp90;
    panda$core$Int64 $tmp92;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp94;
    panda$core$Int64 $tmp95;
    panda$core$Int64 $tmp110;
    panda$core$Int64 $tmp113;
    panda$core$Int64 $tmp117;
    panda$core$Int64 $tmp121;
    panda$core$Int64 $tmp125;
    panda$core$Int64 $tmp129;
    panda$core$Int64 $tmp133;
    panda$core$Int64 $tmp137;
    panda$core$Int64 $tmp141;
    panda$core$Int64 $tmp145;
    panda$core$Int64 $tmp149;
    panda$core$Int64 $tmp153;
    panda$core$Int64 $tmp157;
    panda$core$Int64 $tmp161;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp164;
    panda$core$Int64 $tmp165;
    panda$core$Int64 $tmp181;
    panda$core$Int64 $tmp184;
    panda$core$Int64 $tmp188;
    panda$core$Int64 $tmp192;
    panda$core$Int64 $tmp196;
    panda$core$Int64 $tmp200;
    panda$core$Int64 $tmp204;
    panda$core$Int64 $tmp208;
    panda$core$Int64 $tmp212;
    panda$core$Int64 $tmp216;
    panda$core$Int64 $tmp220;
    panda$core$Int64 $tmp224;
    panda$core$Int64 $tmp228;
    panda$core$Int64 $tmp232;
    panda$core$Int64 $tmp236;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp239;
    panda$core$Int64 $tmp240;
    panda$core$Int64 $tmp243;
    panda$core$Int64 $tmp246;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp249;
    panda$core$Int64 $tmp250;
    panda$core$Int64 $tmp300;
    panda$core$Int64 $tmp303;
    panda$core$Int64 $tmp307;
    panda$core$Int64 $tmp311;
    panda$core$Int64 $tmp315;
    panda$core$Int64 $tmp319;
    panda$core$Int64 $tmp323;
    panda$core$Int64 $tmp327;
    panda$core$Int64 $tmp331;
    panda$core$Int64 $tmp335;
    panda$core$Int64 $tmp339;
    panda$core$Int64 $tmp343;
    panda$core$Int64 $tmp347;
    panda$core$Int64 $tmp351;
    panda$core$Int64 $tmp355;
    panda$core$Int64 $tmp359;
    panda$core$Int64 $tmp363;
    panda$core$Int64 $tmp367;
    panda$core$Int64 $tmp371;
    panda$core$Int64 $tmp375;
    panda$core$Int64 $tmp379;
    panda$core$Int64 $tmp383;
    panda$core$Int64 $tmp387;
    panda$core$Int64 $tmp391;
    panda$core$Int64 $tmp395;
    panda$core$Int64 $tmp399;
    panda$core$Int64 $tmp403;
    panda$core$Int64 $tmp407;
    panda$core$Int64 $tmp411;
    panda$core$Int64 $tmp415;
    panda$core$Int64 $tmp419;
    panda$core$Int64 $tmp423;
    panda$core$Int64 $tmp427;
    panda$core$Int64 $tmp431;
    panda$core$Int64 $tmp435;
    panda$core$Int64 $tmp439;
    panda$core$Int64 $tmp443;
    panda$core$Int64 $tmp447;
    panda$core$Int64 $tmp451;
    panda$core$Int64 $tmp455;
    panda$core$Int64 $tmp459;
    panda$core$Int64 $tmp463;
    panda$core$Int64 $tmp467;
    panda$core$Int64 $tmp471;
    panda$core$Int64 $tmp475;
    panda$core$Int64 $tmp479;
    panda$core$Int64 $tmp483;
    panda$core$Int64 $tmp487;
    panda$core$Int64 $tmp491;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp494;
    panda$core$Int64 $tmp495;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp497;
    panda$core$Int64 $tmp498;
    panda$core$Int64 $tmp19 = panda$collections$Stack$get_count$R$panda$core$Int64(self->stack);
    panda$core$Int64$init$builtin_int64(&$tmp20, 0);
    panda$core$Bit $tmp21 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp19, $tmp20);
    if ($tmp21.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp23, 0);
        panda$core$Object* $tmp24 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->stack, $tmp23);
        $tmp22 = $tmp24;
        (($fn25) self->$class->vtable[5])(self, p_token, ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp22)->value);
        panda$core$Panda$unref$panda$core$Object($tmp22);
        return;
    }
    }
    {
        $match$84_926 = p_token.kind;
        panda$core$Int64$init$builtin_int64(&$tmp27, 1);
        panda$core$Bit $tmp28 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp27);
        if ($tmp28.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp30, 11);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp29, $tmp30);
            (($fn31) self->$class->vtable[5])(self, p_token, $tmp29);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp39, 3);
        panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp39);
        bool $tmp38 = $tmp40.value;
        if ($tmp38) goto $l41;
        panda$core$Int64$init$builtin_int64(&$tmp42, 4);
        panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp42);
        $tmp38 = $tmp43.value;
        $l41:;
        panda$core$Bit $tmp44 = { $tmp38 };
        bool $tmp37 = $tmp44.value;
        if ($tmp37) goto $l45;
        panda$core$Int64$init$builtin_int64(&$tmp46, 5);
        panda$core$Bit $tmp47 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp46);
        $tmp37 = $tmp47.value;
        $l45:;
        panda$core$Bit $tmp48 = { $tmp37 };
        bool $tmp36 = $tmp48.value;
        if ($tmp36) goto $l49;
        panda$core$Int64$init$builtin_int64(&$tmp50, 6);
        panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp50);
        $tmp36 = $tmp51.value;
        $l49:;
        panda$core$Bit $tmp52 = { $tmp36 };
        bool $tmp35 = $tmp52.value;
        if ($tmp35) goto $l53;
        panda$core$Int64$init$builtin_int64(&$tmp54, 42);
        panda$core$Bit $tmp55 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp54);
        $tmp35 = $tmp55.value;
        $l53:;
        panda$core$Bit $tmp56 = { $tmp35 };
        bool $tmp34 = $tmp56.value;
        if ($tmp34) goto $l57;
        panda$core$Int64$init$builtin_int64(&$tmp58, 43);
        panda$core$Bit $tmp59 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp58);
        $tmp34 = $tmp59.value;
        $l57:;
        panda$core$Bit $tmp60 = { $tmp34 };
        bool $tmp33 = $tmp60.value;
        if ($tmp33) goto $l61;
        panda$core$Int64$init$builtin_int64(&$tmp62, 44);
        panda$core$Bit $tmp63 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp62);
        $tmp33 = $tmp63.value;
        $l61:;
        panda$core$Bit $tmp64 = { $tmp33 };
        bool $tmp32 = $tmp64.value;
        if ($tmp32) goto $l65;
        panda$core$Int64$init$builtin_int64(&$tmp66, 2);
        panda$core$Bit $tmp67 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp66);
        $tmp32 = $tmp67.value;
        $l65:;
        panda$core$Bit $tmp68 = { $tmp32 };
        if ($tmp68.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp70, 9);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp69, $tmp70);
            (($fn71) self->$class->vtable[5])(self, p_token, $tmp69);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp73, 9);
        panda$core$Bit $tmp74 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp73);
        bool $tmp72 = $tmp74.value;
        if ($tmp72) goto $l75;
        panda$core$Int64$init$builtin_int64(&$tmp76, 10);
        panda$core$Bit $tmp77 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp76);
        $tmp72 = $tmp77.value;
        $l75:;
        panda$core$Bit $tmp78 = { $tmp72 };
        if ($tmp78.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp80, 1);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp79, $tmp80);
            (($fn81) self->$class->vtable[5])(self, p_token, $tmp79);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp82, 11);
        panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp82);
        if ($tmp83.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp85, 1);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp84, $tmp85);
            (($fn86) self->$class->vtable[5])(self, p_token, $tmp84);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp87, 12);
        panda$core$Bit $tmp88 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp87);
        if ($tmp88.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp90, 2);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp89, $tmp90);
            (($fn91) self->$class->vtable[5])(self, p_token, $tmp89);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp92, 14);
        panda$core$Bit $tmp93 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp92);
        if ($tmp93.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp95, 3);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp94, $tmp95);
            (($fn96) self->$class->vtable[5])(self, p_token, $tmp94);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp110, 15);
        panda$core$Bit $tmp111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp110);
        bool $tmp109 = $tmp111.value;
        if ($tmp109) goto $l112;
        panda$core$Int64$init$builtin_int64(&$tmp113, 16);
        panda$core$Bit $tmp114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp113);
        $tmp109 = $tmp114.value;
        $l112:;
        panda$core$Bit $tmp115 = { $tmp109 };
        bool $tmp108 = $tmp115.value;
        if ($tmp108) goto $l116;
        panda$core$Int64$init$builtin_int64(&$tmp117, 17);
        panda$core$Bit $tmp118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp117);
        $tmp108 = $tmp118.value;
        $l116:;
        panda$core$Bit $tmp119 = { $tmp108 };
        bool $tmp107 = $tmp119.value;
        if ($tmp107) goto $l120;
        panda$core$Int64$init$builtin_int64(&$tmp121, 18);
        panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp121);
        $tmp107 = $tmp122.value;
        $l120:;
        panda$core$Bit $tmp123 = { $tmp107 };
        bool $tmp106 = $tmp123.value;
        if ($tmp106) goto $l124;
        panda$core$Int64$init$builtin_int64(&$tmp125, 19);
        panda$core$Bit $tmp126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp125);
        $tmp106 = $tmp126.value;
        $l124:;
        panda$core$Bit $tmp127 = { $tmp106 };
        bool $tmp105 = $tmp127.value;
        if ($tmp105) goto $l128;
        panda$core$Int64$init$builtin_int64(&$tmp129, 20);
        panda$core$Bit $tmp130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp129);
        $tmp105 = $tmp130.value;
        $l128:;
        panda$core$Bit $tmp131 = { $tmp105 };
        bool $tmp104 = $tmp131.value;
        if ($tmp104) goto $l132;
        panda$core$Int64$init$builtin_int64(&$tmp133, 21);
        panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp133);
        $tmp104 = $tmp134.value;
        $l132:;
        panda$core$Bit $tmp135 = { $tmp104 };
        bool $tmp103 = $tmp135.value;
        if ($tmp103) goto $l136;
        panda$core$Int64$init$builtin_int64(&$tmp137, 22);
        panda$core$Bit $tmp138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp137);
        $tmp103 = $tmp138.value;
        $l136:;
        panda$core$Bit $tmp139 = { $tmp103 };
        bool $tmp102 = $tmp139.value;
        if ($tmp102) goto $l140;
        panda$core$Int64$init$builtin_int64(&$tmp141, 24);
        panda$core$Bit $tmp142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp141);
        $tmp102 = $tmp142.value;
        $l140:;
        panda$core$Bit $tmp143 = { $tmp102 };
        bool $tmp101 = $tmp143.value;
        if ($tmp101) goto $l144;
        panda$core$Int64$init$builtin_int64(&$tmp145, 25);
        panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp145);
        $tmp101 = $tmp146.value;
        $l144:;
        panda$core$Bit $tmp147 = { $tmp101 };
        bool $tmp100 = $tmp147.value;
        if ($tmp100) goto $l148;
        panda$core$Int64$init$builtin_int64(&$tmp149, 26);
        panda$core$Bit $tmp150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp149);
        $tmp100 = $tmp150.value;
        $l148:;
        panda$core$Bit $tmp151 = { $tmp100 };
        bool $tmp99 = $tmp151.value;
        if ($tmp99) goto $l152;
        panda$core$Int64$init$builtin_int64(&$tmp153, 27);
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp153);
        $tmp99 = $tmp154.value;
        $l152:;
        panda$core$Bit $tmp155 = { $tmp99 };
        bool $tmp98 = $tmp155.value;
        if ($tmp98) goto $l156;
        panda$core$Int64$init$builtin_int64(&$tmp157, 34);
        panda$core$Bit $tmp158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp157);
        $tmp98 = $tmp158.value;
        $l156:;
        panda$core$Bit $tmp159 = { $tmp98 };
        bool $tmp97 = $tmp159.value;
        if ($tmp97) goto $l160;
        panda$core$Int64$init$builtin_int64(&$tmp161, 35);
        panda$core$Bit $tmp162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp161);
        $tmp97 = $tmp162.value;
        $l160:;
        panda$core$Bit $tmp163 = { $tmp97 };
        if ($tmp163.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp165, 7);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp164, $tmp165);
            (($fn166) self->$class->vtable[5])(self, p_token, $tmp164);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp181, 28);
        panda$core$Bit $tmp182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp181);
        bool $tmp180 = $tmp182.value;
        if ($tmp180) goto $l183;
        panda$core$Int64$init$builtin_int64(&$tmp184, 29);
        panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp184);
        $tmp180 = $tmp185.value;
        $l183:;
        panda$core$Bit $tmp186 = { $tmp180 };
        bool $tmp179 = $tmp186.value;
        if ($tmp179) goto $l187;
        panda$core$Int64$init$builtin_int64(&$tmp188, 30);
        panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp188);
        $tmp179 = $tmp189.value;
        $l187:;
        panda$core$Bit $tmp190 = { $tmp179 };
        bool $tmp178 = $tmp190.value;
        if ($tmp178) goto $l191;
        panda$core$Int64$init$builtin_int64(&$tmp192, 31);
        panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp192);
        $tmp178 = $tmp193.value;
        $l191:;
        panda$core$Bit $tmp194 = { $tmp178 };
        bool $tmp177 = $tmp194.value;
        if ($tmp177) goto $l195;
        panda$core$Int64$init$builtin_int64(&$tmp196, 32);
        panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp196);
        $tmp177 = $tmp197.value;
        $l195:;
        panda$core$Bit $tmp198 = { $tmp177 };
        bool $tmp176 = $tmp198.value;
        if ($tmp176) goto $l199;
        panda$core$Int64$init$builtin_int64(&$tmp200, 33);
        panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp200);
        $tmp176 = $tmp201.value;
        $l199:;
        panda$core$Bit $tmp202 = { $tmp176 };
        bool $tmp175 = $tmp202.value;
        if ($tmp175) goto $l203;
        panda$core$Int64$init$builtin_int64(&$tmp204, 36);
        panda$core$Bit $tmp205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp204);
        $tmp175 = $tmp205.value;
        $l203:;
        panda$core$Bit $tmp206 = { $tmp175 };
        bool $tmp174 = $tmp206.value;
        if ($tmp174) goto $l207;
        panda$core$Int64$init$builtin_int64(&$tmp208, 37);
        panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp208);
        $tmp174 = $tmp209.value;
        $l207:;
        panda$core$Bit $tmp210 = { $tmp174 };
        bool $tmp173 = $tmp210.value;
        if ($tmp173) goto $l211;
        panda$core$Int64$init$builtin_int64(&$tmp212, 38);
        panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp212);
        $tmp173 = $tmp213.value;
        $l211:;
        panda$core$Bit $tmp214 = { $tmp173 };
        bool $tmp172 = $tmp214.value;
        if ($tmp172) goto $l215;
        panda$core$Int64$init$builtin_int64(&$tmp216, 39);
        panda$core$Bit $tmp217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp216);
        $tmp172 = $tmp217.value;
        $l215:;
        panda$core$Bit $tmp218 = { $tmp172 };
        bool $tmp171 = $tmp218.value;
        if ($tmp171) goto $l219;
        panda$core$Int64$init$builtin_int64(&$tmp220, 40);
        panda$core$Bit $tmp221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp220);
        $tmp171 = $tmp221.value;
        $l219:;
        panda$core$Bit $tmp222 = { $tmp171 };
        bool $tmp170 = $tmp222.value;
        if ($tmp170) goto $l223;
        panda$core$Int64$init$builtin_int64(&$tmp224, 41);
        panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp224);
        $tmp170 = $tmp225.value;
        $l223:;
        panda$core$Bit $tmp226 = { $tmp170 };
        bool $tmp169 = $tmp226.value;
        if ($tmp169) goto $l227;
        panda$core$Int64$init$builtin_int64(&$tmp228, 23);
        panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp228);
        $tmp169 = $tmp229.value;
        $l227:;
        panda$core$Bit $tmp230 = { $tmp169 };
        bool $tmp168 = $tmp230.value;
        if ($tmp168) goto $l231;
        panda$core$Int64$init$builtin_int64(&$tmp232, 45);
        panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp232);
        $tmp168 = $tmp233.value;
        $l231:;
        panda$core$Bit $tmp234 = { $tmp168 };
        bool $tmp167 = $tmp234.value;
        if ($tmp167) goto $l235;
        panda$core$Int64$init$builtin_int64(&$tmp236, 46);
        panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp236);
        $tmp167 = $tmp237.value;
        $l235:;
        panda$core$Bit $tmp238 = { $tmp167 };
        if ($tmp238.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp240, 8);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp239, $tmp240);
            (($fn241) self->$class->vtable[5])(self, p_token, $tmp239);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp243, 47);
        panda$core$Bit $tmp244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp243);
        bool $tmp242 = $tmp244.value;
        if ($tmp242) goto $l245;
        panda$core$Int64$init$builtin_int64(&$tmp246, 48);
        panda$core$Bit $tmp247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp246);
        $tmp242 = $tmp247.value;
        $l245:;
        panda$core$Bit $tmp248 = { $tmp242 };
        if ($tmp248.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp250, 9);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp249, $tmp250);
            (($fn251) self->$class->vtable[5])(self, p_token, $tmp249);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp300, 50);
        panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp300);
        bool $tmp299 = $tmp301.value;
        if ($tmp299) goto $l302;
        panda$core$Int64$init$builtin_int64(&$tmp303, 51);
        panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp303);
        $tmp299 = $tmp304.value;
        $l302:;
        panda$core$Bit $tmp305 = { $tmp299 };
        bool $tmp298 = $tmp305.value;
        if ($tmp298) goto $l306;
        panda$core$Int64$init$builtin_int64(&$tmp307, 52);
        panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp307);
        $tmp298 = $tmp308.value;
        $l306:;
        panda$core$Bit $tmp309 = { $tmp298 };
        bool $tmp297 = $tmp309.value;
        if ($tmp297) goto $l310;
        panda$core$Int64$init$builtin_int64(&$tmp311, 53);
        panda$core$Bit $tmp312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp311);
        $tmp297 = $tmp312.value;
        $l310:;
        panda$core$Bit $tmp313 = { $tmp297 };
        bool $tmp296 = $tmp313.value;
        if ($tmp296) goto $l314;
        panda$core$Int64$init$builtin_int64(&$tmp315, 54);
        panda$core$Bit $tmp316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp315);
        $tmp296 = $tmp316.value;
        $l314:;
        panda$core$Bit $tmp317 = { $tmp296 };
        bool $tmp295 = $tmp317.value;
        if ($tmp295) goto $l318;
        panda$core$Int64$init$builtin_int64(&$tmp319, 55);
        panda$core$Bit $tmp320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp319);
        $tmp295 = $tmp320.value;
        $l318:;
        panda$core$Bit $tmp321 = { $tmp295 };
        bool $tmp294 = $tmp321.value;
        if ($tmp294) goto $l322;
        panda$core$Int64$init$builtin_int64(&$tmp323, 56);
        panda$core$Bit $tmp324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp323);
        $tmp294 = $tmp324.value;
        $l322:;
        panda$core$Bit $tmp325 = { $tmp294 };
        bool $tmp293 = $tmp325.value;
        if ($tmp293) goto $l326;
        panda$core$Int64$init$builtin_int64(&$tmp327, 57);
        panda$core$Bit $tmp328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp327);
        $tmp293 = $tmp328.value;
        $l326:;
        panda$core$Bit $tmp329 = { $tmp293 };
        bool $tmp292 = $tmp329.value;
        if ($tmp292) goto $l330;
        panda$core$Int64$init$builtin_int64(&$tmp331, 58);
        panda$core$Bit $tmp332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp331);
        $tmp292 = $tmp332.value;
        $l330:;
        panda$core$Bit $tmp333 = { $tmp292 };
        bool $tmp291 = $tmp333.value;
        if ($tmp291) goto $l334;
        panda$core$Int64$init$builtin_int64(&$tmp335, 59);
        panda$core$Bit $tmp336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp335);
        $tmp291 = $tmp336.value;
        $l334:;
        panda$core$Bit $tmp337 = { $tmp291 };
        bool $tmp290 = $tmp337.value;
        if ($tmp290) goto $l338;
        panda$core$Int64$init$builtin_int64(&$tmp339, 60);
        panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp339);
        $tmp290 = $tmp340.value;
        $l338:;
        panda$core$Bit $tmp341 = { $tmp290 };
        bool $tmp289 = $tmp341.value;
        if ($tmp289) goto $l342;
        panda$core$Int64$init$builtin_int64(&$tmp343, 61);
        panda$core$Bit $tmp344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp343);
        $tmp289 = $tmp344.value;
        $l342:;
        panda$core$Bit $tmp345 = { $tmp289 };
        bool $tmp288 = $tmp345.value;
        if ($tmp288) goto $l346;
        panda$core$Int64$init$builtin_int64(&$tmp347, 62);
        panda$core$Bit $tmp348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp347);
        $tmp288 = $tmp348.value;
        $l346:;
        panda$core$Bit $tmp349 = { $tmp288 };
        bool $tmp287 = $tmp349.value;
        if ($tmp287) goto $l350;
        panda$core$Int64$init$builtin_int64(&$tmp351, 63);
        panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp351);
        $tmp287 = $tmp352.value;
        $l350:;
        panda$core$Bit $tmp353 = { $tmp287 };
        bool $tmp286 = $tmp353.value;
        if ($tmp286) goto $l354;
        panda$core$Int64$init$builtin_int64(&$tmp355, 64);
        panda$core$Bit $tmp356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp355);
        $tmp286 = $tmp356.value;
        $l354:;
        panda$core$Bit $tmp357 = { $tmp286 };
        bool $tmp285 = $tmp357.value;
        if ($tmp285) goto $l358;
        panda$core$Int64$init$builtin_int64(&$tmp359, 65);
        panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp359);
        $tmp285 = $tmp360.value;
        $l358:;
        panda$core$Bit $tmp361 = { $tmp285 };
        bool $tmp284 = $tmp361.value;
        if ($tmp284) goto $l362;
        panda$core$Int64$init$builtin_int64(&$tmp363, 66);
        panda$core$Bit $tmp364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp363);
        $tmp284 = $tmp364.value;
        $l362:;
        panda$core$Bit $tmp365 = { $tmp284 };
        bool $tmp283 = $tmp365.value;
        if ($tmp283) goto $l366;
        panda$core$Int64$init$builtin_int64(&$tmp367, 67);
        panda$core$Bit $tmp368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp367);
        $tmp283 = $tmp368.value;
        $l366:;
        panda$core$Bit $tmp369 = { $tmp283 };
        bool $tmp282 = $tmp369.value;
        if ($tmp282) goto $l370;
        panda$core$Int64$init$builtin_int64(&$tmp371, 68);
        panda$core$Bit $tmp372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp371);
        $tmp282 = $tmp372.value;
        $l370:;
        panda$core$Bit $tmp373 = { $tmp282 };
        bool $tmp281 = $tmp373.value;
        if ($tmp281) goto $l374;
        panda$core$Int64$init$builtin_int64(&$tmp375, 69);
        panda$core$Bit $tmp376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp375);
        $tmp281 = $tmp376.value;
        $l374:;
        panda$core$Bit $tmp377 = { $tmp281 };
        bool $tmp280 = $tmp377.value;
        if ($tmp280) goto $l378;
        panda$core$Int64$init$builtin_int64(&$tmp379, 70);
        panda$core$Bit $tmp380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp379);
        $tmp280 = $tmp380.value;
        $l378:;
        panda$core$Bit $tmp381 = { $tmp280 };
        bool $tmp279 = $tmp381.value;
        if ($tmp279) goto $l382;
        panda$core$Int64$init$builtin_int64(&$tmp383, 71);
        panda$core$Bit $tmp384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp383);
        $tmp279 = $tmp384.value;
        $l382:;
        panda$core$Bit $tmp385 = { $tmp279 };
        bool $tmp278 = $tmp385.value;
        if ($tmp278) goto $l386;
        panda$core$Int64$init$builtin_int64(&$tmp387, 72);
        panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp387);
        $tmp278 = $tmp388.value;
        $l386:;
        panda$core$Bit $tmp389 = { $tmp278 };
        bool $tmp277 = $tmp389.value;
        if ($tmp277) goto $l390;
        panda$core$Int64$init$builtin_int64(&$tmp391, 73);
        panda$core$Bit $tmp392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp391);
        $tmp277 = $tmp392.value;
        $l390:;
        panda$core$Bit $tmp393 = { $tmp277 };
        bool $tmp276 = $tmp393.value;
        if ($tmp276) goto $l394;
        panda$core$Int64$init$builtin_int64(&$tmp395, 74);
        panda$core$Bit $tmp396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp395);
        $tmp276 = $tmp396.value;
        $l394:;
        panda$core$Bit $tmp397 = { $tmp276 };
        bool $tmp275 = $tmp397.value;
        if ($tmp275) goto $l398;
        panda$core$Int64$init$builtin_int64(&$tmp399, 75);
        panda$core$Bit $tmp400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp399);
        $tmp275 = $tmp400.value;
        $l398:;
        panda$core$Bit $tmp401 = { $tmp275 };
        bool $tmp274 = $tmp401.value;
        if ($tmp274) goto $l402;
        panda$core$Int64$init$builtin_int64(&$tmp403, 76);
        panda$core$Bit $tmp404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp403);
        $tmp274 = $tmp404.value;
        $l402:;
        panda$core$Bit $tmp405 = { $tmp274 };
        bool $tmp273 = $tmp405.value;
        if ($tmp273) goto $l406;
        panda$core$Int64$init$builtin_int64(&$tmp407, 77);
        panda$core$Bit $tmp408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp407);
        $tmp273 = $tmp408.value;
        $l406:;
        panda$core$Bit $tmp409 = { $tmp273 };
        bool $tmp272 = $tmp409.value;
        if ($tmp272) goto $l410;
        panda$core$Int64$init$builtin_int64(&$tmp411, 78);
        panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp411);
        $tmp272 = $tmp412.value;
        $l410:;
        panda$core$Bit $tmp413 = { $tmp272 };
        bool $tmp271 = $tmp413.value;
        if ($tmp271) goto $l414;
        panda$core$Int64$init$builtin_int64(&$tmp415, 79);
        panda$core$Bit $tmp416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp415);
        $tmp271 = $tmp416.value;
        $l414:;
        panda$core$Bit $tmp417 = { $tmp271 };
        bool $tmp270 = $tmp417.value;
        if ($tmp270) goto $l418;
        panda$core$Int64$init$builtin_int64(&$tmp419, 80);
        panda$core$Bit $tmp420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp419);
        $tmp270 = $tmp420.value;
        $l418:;
        panda$core$Bit $tmp421 = { $tmp270 };
        bool $tmp269 = $tmp421.value;
        if ($tmp269) goto $l422;
        panda$core$Int64$init$builtin_int64(&$tmp423, 81);
        panda$core$Bit $tmp424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp423);
        $tmp269 = $tmp424.value;
        $l422:;
        panda$core$Bit $tmp425 = { $tmp269 };
        bool $tmp268 = $tmp425.value;
        if ($tmp268) goto $l426;
        panda$core$Int64$init$builtin_int64(&$tmp427, 82);
        panda$core$Bit $tmp428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp427);
        $tmp268 = $tmp428.value;
        $l426:;
        panda$core$Bit $tmp429 = { $tmp268 };
        bool $tmp267 = $tmp429.value;
        if ($tmp267) goto $l430;
        panda$core$Int64$init$builtin_int64(&$tmp431, 83);
        panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp431);
        $tmp267 = $tmp432.value;
        $l430:;
        panda$core$Bit $tmp433 = { $tmp267 };
        bool $tmp266 = $tmp433.value;
        if ($tmp266) goto $l434;
        panda$core$Int64$init$builtin_int64(&$tmp435, 84);
        panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp435);
        $tmp266 = $tmp436.value;
        $l434:;
        panda$core$Bit $tmp437 = { $tmp266 };
        bool $tmp265 = $tmp437.value;
        if ($tmp265) goto $l438;
        panda$core$Int64$init$builtin_int64(&$tmp439, 85);
        panda$core$Bit $tmp440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp439);
        $tmp265 = $tmp440.value;
        $l438:;
        panda$core$Bit $tmp441 = { $tmp265 };
        bool $tmp264 = $tmp441.value;
        if ($tmp264) goto $l442;
        panda$core$Int64$init$builtin_int64(&$tmp443, 86);
        panda$core$Bit $tmp444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp443);
        $tmp264 = $tmp444.value;
        $l442:;
        panda$core$Bit $tmp445 = { $tmp264 };
        bool $tmp263 = $tmp445.value;
        if ($tmp263) goto $l446;
        panda$core$Int64$init$builtin_int64(&$tmp447, 87);
        panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp447);
        $tmp263 = $tmp448.value;
        $l446:;
        panda$core$Bit $tmp449 = { $tmp263 };
        bool $tmp262 = $tmp449.value;
        if ($tmp262) goto $l450;
        panda$core$Int64$init$builtin_int64(&$tmp451, 88);
        panda$core$Bit $tmp452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp451);
        $tmp262 = $tmp452.value;
        $l450:;
        panda$core$Bit $tmp453 = { $tmp262 };
        bool $tmp261 = $tmp453.value;
        if ($tmp261) goto $l454;
        panda$core$Int64$init$builtin_int64(&$tmp455, 89);
        panda$core$Bit $tmp456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp455);
        $tmp261 = $tmp456.value;
        $l454:;
        panda$core$Bit $tmp457 = { $tmp261 };
        bool $tmp260 = $tmp457.value;
        if ($tmp260) goto $l458;
        panda$core$Int64$init$builtin_int64(&$tmp459, 90);
        panda$core$Bit $tmp460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp459);
        $tmp260 = $tmp460.value;
        $l458:;
        panda$core$Bit $tmp461 = { $tmp260 };
        bool $tmp259 = $tmp461.value;
        if ($tmp259) goto $l462;
        panda$core$Int64$init$builtin_int64(&$tmp463, 91);
        panda$core$Bit $tmp464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp463);
        $tmp259 = $tmp464.value;
        $l462:;
        panda$core$Bit $tmp465 = { $tmp259 };
        bool $tmp258 = $tmp465.value;
        if ($tmp258) goto $l466;
        panda$core$Int64$init$builtin_int64(&$tmp467, 92);
        panda$core$Bit $tmp468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp467);
        $tmp258 = $tmp468.value;
        $l466:;
        panda$core$Bit $tmp469 = { $tmp258 };
        bool $tmp257 = $tmp469.value;
        if ($tmp257) goto $l470;
        panda$core$Int64$init$builtin_int64(&$tmp471, 93);
        panda$core$Bit $tmp472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp471);
        $tmp257 = $tmp472.value;
        $l470:;
        panda$core$Bit $tmp473 = { $tmp257 };
        bool $tmp256 = $tmp473.value;
        if ($tmp256) goto $l474;
        panda$core$Int64$init$builtin_int64(&$tmp475, 94);
        panda$core$Bit $tmp476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp475);
        $tmp256 = $tmp476.value;
        $l474:;
        panda$core$Bit $tmp477 = { $tmp256 };
        bool $tmp255 = $tmp477.value;
        if ($tmp255) goto $l478;
        panda$core$Int64$init$builtin_int64(&$tmp479, 95);
        panda$core$Bit $tmp480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp479);
        $tmp255 = $tmp480.value;
        $l478:;
        panda$core$Bit $tmp481 = { $tmp255 };
        bool $tmp254 = $tmp481.value;
        if ($tmp254) goto $l482;
        panda$core$Int64$init$builtin_int64(&$tmp483, 96);
        panda$core$Bit $tmp484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp483);
        $tmp254 = $tmp484.value;
        $l482:;
        panda$core$Bit $tmp485 = { $tmp254 };
        bool $tmp253 = $tmp485.value;
        if ($tmp253) goto $l486;
        panda$core$Int64$init$builtin_int64(&$tmp487, 97);
        panda$core$Bit $tmp488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp487);
        $tmp253 = $tmp488.value;
        $l486:;
        panda$core$Bit $tmp489 = { $tmp253 };
        bool $tmp252 = $tmp489.value;
        if ($tmp252) goto $l490;
        panda$core$Int64$init$builtin_int64(&$tmp491, 98);
        panda$core$Bit $tmp492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp491);
        $tmp252 = $tmp492.value;
        $l490:;
        panda$core$Bit $tmp493 = { $tmp252 };
        if ($tmp493.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp495, 11);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp494, $tmp495);
            (($fn496) self->$class->vtable[5])(self, p_token, $tmp494);
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp498, 0);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp497, $tmp498);
            (($fn499) self->$class->vtable[5])(self, p_token, $tmp497);
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
    panda$core$Object* $tmp500;
    panda$core$Int64 $tmp502;
    panda$core$Int64 $tmp501 = panda$collections$Array$get_count$R$panda$core$Int64(self->tokens);
    panda$core$Int64$init$builtin_int64(&$tmp502, 1);
    panda$core$Int64 $tmp503 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp501, $tmp502);
    panda$core$Object* $tmp504 = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(self->tokens, $tmp503);
    $tmp500 = $tmp504;
    panda$core$Panda$unref$panda$core$Object($tmp500);
}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$init(org$pandalanguage$pandac$parser$SyntaxHighlighter* self) {
    panda$collections$Stack* $tmp505;
    panda$collections$Stack* $tmp506;
    panda$collections$Array* $tmp508;
    panda$collections$Array* $tmp509;
    self->stack = NULL;
    self->tokens = NULL;
    panda$collections$Stack* $tmp507 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
    panda$collections$Stack$init($tmp507);
    $tmp506 = $tmp507;
    $tmp505 = $tmp506;
    self->stack = $tmp505;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp505));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
    panda$collections$Array* $tmp510 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp510);
    $tmp509 = $tmp510;
    $tmp508 = $tmp509;
    self->tokens = $tmp508;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp508));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp509));
}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$cleanup(org$pandalanguage$pandac$parser$SyntaxHighlighter* self) {
    int $tmp513;
    {
    }
    $tmp513 = -1;
    goto $l511;
    $l511:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp513) {
        case -1: goto $l514;
    }
    $l514:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->stack));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->tokens));
}

