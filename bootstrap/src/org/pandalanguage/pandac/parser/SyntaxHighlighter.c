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
typedef void (*$fn66)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn76)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn81)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn86)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn91)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn161)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn236)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn246)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn491)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn494)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);

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
    panda$core$Int64 $tmp38;
    panda$core$Int64 $tmp41;
    panda$core$Int64 $tmp45;
    panda$core$Int64 $tmp49;
    panda$core$Int64 $tmp53;
    panda$core$Int64 $tmp57;
    panda$core$Int64 $tmp61;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp64;
    panda$core$Int64 $tmp65;
    panda$core$Int64 $tmp68;
    panda$core$Int64 $tmp71;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp74;
    panda$core$Int64 $tmp75;
    panda$core$Int64 $tmp77;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp79;
    panda$core$Int64 $tmp80;
    panda$core$Int64 $tmp82;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp84;
    panda$core$Int64 $tmp85;
    panda$core$Int64 $tmp87;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp89;
    panda$core$Int64 $tmp90;
    panda$core$Int64 $tmp105;
    panda$core$Int64 $tmp108;
    panda$core$Int64 $tmp112;
    panda$core$Int64 $tmp116;
    panda$core$Int64 $tmp120;
    panda$core$Int64 $tmp124;
    panda$core$Int64 $tmp128;
    panda$core$Int64 $tmp132;
    panda$core$Int64 $tmp136;
    panda$core$Int64 $tmp140;
    panda$core$Int64 $tmp144;
    panda$core$Int64 $tmp148;
    panda$core$Int64 $tmp152;
    panda$core$Int64 $tmp156;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp159;
    panda$core$Int64 $tmp160;
    panda$core$Int64 $tmp176;
    panda$core$Int64 $tmp179;
    panda$core$Int64 $tmp183;
    panda$core$Int64 $tmp187;
    panda$core$Int64 $tmp191;
    panda$core$Int64 $tmp195;
    panda$core$Int64 $tmp199;
    panda$core$Int64 $tmp203;
    panda$core$Int64 $tmp207;
    panda$core$Int64 $tmp211;
    panda$core$Int64 $tmp215;
    panda$core$Int64 $tmp219;
    panda$core$Int64 $tmp223;
    panda$core$Int64 $tmp227;
    panda$core$Int64 $tmp231;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp234;
    panda$core$Int64 $tmp235;
    panda$core$Int64 $tmp238;
    panda$core$Int64 $tmp241;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp244;
    panda$core$Int64 $tmp245;
    panda$core$Int64 $tmp295;
    panda$core$Int64 $tmp298;
    panda$core$Int64 $tmp302;
    panda$core$Int64 $tmp306;
    panda$core$Int64 $tmp310;
    panda$core$Int64 $tmp314;
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
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp489;
    panda$core$Int64 $tmp490;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp492;
    panda$core$Int64 $tmp493;
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
        panda$core$Int64$init$builtin_int64(&$tmp38, 2);
        panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp38);
        bool $tmp37 = $tmp39.value;
        if ($tmp37) goto $l40;
        panda$core$Int64$init$builtin_int64(&$tmp41, 3);
        panda$core$Bit $tmp42 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp41);
        $tmp37 = $tmp42.value;
        $l40:;
        panda$core$Bit $tmp43 = { $tmp37 };
        bool $tmp36 = $tmp43.value;
        if ($tmp36) goto $l44;
        panda$core$Int64$init$builtin_int64(&$tmp45, 4);
        panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp45);
        $tmp36 = $tmp46.value;
        $l44:;
        panda$core$Bit $tmp47 = { $tmp36 };
        bool $tmp35 = $tmp47.value;
        if ($tmp35) goto $l48;
        panda$core$Int64$init$builtin_int64(&$tmp49, 5);
        panda$core$Bit $tmp50 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp49);
        $tmp35 = $tmp50.value;
        $l48:;
        panda$core$Bit $tmp51 = { $tmp35 };
        bool $tmp34 = $tmp51.value;
        if ($tmp34) goto $l52;
        panda$core$Int64$init$builtin_int64(&$tmp53, 41);
        panda$core$Bit $tmp54 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp53);
        $tmp34 = $tmp54.value;
        $l52:;
        panda$core$Bit $tmp55 = { $tmp34 };
        bool $tmp33 = $tmp55.value;
        if ($tmp33) goto $l56;
        panda$core$Int64$init$builtin_int64(&$tmp57, 42);
        panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp57);
        $tmp33 = $tmp58.value;
        $l56:;
        panda$core$Bit $tmp59 = { $tmp33 };
        bool $tmp32 = $tmp59.value;
        if ($tmp32) goto $l60;
        panda$core$Int64$init$builtin_int64(&$tmp61, 43);
        panda$core$Bit $tmp62 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp61);
        $tmp32 = $tmp62.value;
        $l60:;
        panda$core$Bit $tmp63 = { $tmp32 };
        if ($tmp63.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp65, 9);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp64, $tmp65);
            (($fn66) self->$class->vtable[5])(self, p_token, $tmp64);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp68, 8);
        panda$core$Bit $tmp69 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp68);
        bool $tmp67 = $tmp69.value;
        if ($tmp67) goto $l70;
        panda$core$Int64$init$builtin_int64(&$tmp71, 9);
        panda$core$Bit $tmp72 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp71);
        $tmp67 = $tmp72.value;
        $l70:;
        panda$core$Bit $tmp73 = { $tmp67 };
        if ($tmp73.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp75, 1);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp74, $tmp75);
            (($fn76) self->$class->vtable[5])(self, p_token, $tmp74);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp77, 10);
        panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp77);
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
            panda$core$Int64$init$builtin_int64(&$tmp85, 2);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp84, $tmp85);
            (($fn86) self->$class->vtable[5])(self, p_token, $tmp84);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp87, 13);
        panda$core$Bit $tmp88 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp87);
        if ($tmp88.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp90, 3);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp89, $tmp90);
            (($fn91) self->$class->vtable[5])(self, p_token, $tmp89);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp105, 14);
        panda$core$Bit $tmp106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp105);
        bool $tmp104 = $tmp106.value;
        if ($tmp104) goto $l107;
        panda$core$Int64$init$builtin_int64(&$tmp108, 15);
        panda$core$Bit $tmp109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp108);
        $tmp104 = $tmp109.value;
        $l107:;
        panda$core$Bit $tmp110 = { $tmp104 };
        bool $tmp103 = $tmp110.value;
        if ($tmp103) goto $l111;
        panda$core$Int64$init$builtin_int64(&$tmp112, 16);
        panda$core$Bit $tmp113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp112);
        $tmp103 = $tmp113.value;
        $l111:;
        panda$core$Bit $tmp114 = { $tmp103 };
        bool $tmp102 = $tmp114.value;
        if ($tmp102) goto $l115;
        panda$core$Int64$init$builtin_int64(&$tmp116, 17);
        panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp116);
        $tmp102 = $tmp117.value;
        $l115:;
        panda$core$Bit $tmp118 = { $tmp102 };
        bool $tmp101 = $tmp118.value;
        if ($tmp101) goto $l119;
        panda$core$Int64$init$builtin_int64(&$tmp120, 18);
        panda$core$Bit $tmp121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp120);
        $tmp101 = $tmp121.value;
        $l119:;
        panda$core$Bit $tmp122 = { $tmp101 };
        bool $tmp100 = $tmp122.value;
        if ($tmp100) goto $l123;
        panda$core$Int64$init$builtin_int64(&$tmp124, 19);
        panda$core$Bit $tmp125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp124);
        $tmp100 = $tmp125.value;
        $l123:;
        panda$core$Bit $tmp126 = { $tmp100 };
        bool $tmp99 = $tmp126.value;
        if ($tmp99) goto $l127;
        panda$core$Int64$init$builtin_int64(&$tmp128, 20);
        panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp128);
        $tmp99 = $tmp129.value;
        $l127:;
        panda$core$Bit $tmp130 = { $tmp99 };
        bool $tmp98 = $tmp130.value;
        if ($tmp98) goto $l131;
        panda$core$Int64$init$builtin_int64(&$tmp132, 21);
        panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp132);
        $tmp98 = $tmp133.value;
        $l131:;
        panda$core$Bit $tmp134 = { $tmp98 };
        bool $tmp97 = $tmp134.value;
        if ($tmp97) goto $l135;
        panda$core$Int64$init$builtin_int64(&$tmp136, 23);
        panda$core$Bit $tmp137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp136);
        $tmp97 = $tmp137.value;
        $l135:;
        panda$core$Bit $tmp138 = { $tmp97 };
        bool $tmp96 = $tmp138.value;
        if ($tmp96) goto $l139;
        panda$core$Int64$init$builtin_int64(&$tmp140, 24);
        panda$core$Bit $tmp141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp140);
        $tmp96 = $tmp141.value;
        $l139:;
        panda$core$Bit $tmp142 = { $tmp96 };
        bool $tmp95 = $tmp142.value;
        if ($tmp95) goto $l143;
        panda$core$Int64$init$builtin_int64(&$tmp144, 25);
        panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp144);
        $tmp95 = $tmp145.value;
        $l143:;
        panda$core$Bit $tmp146 = { $tmp95 };
        bool $tmp94 = $tmp146.value;
        if ($tmp94) goto $l147;
        panda$core$Int64$init$builtin_int64(&$tmp148, 26);
        panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp148);
        $tmp94 = $tmp149.value;
        $l147:;
        panda$core$Bit $tmp150 = { $tmp94 };
        bool $tmp93 = $tmp150.value;
        if ($tmp93) goto $l151;
        panda$core$Int64$init$builtin_int64(&$tmp152, 33);
        panda$core$Bit $tmp153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp152);
        $tmp93 = $tmp153.value;
        $l151:;
        panda$core$Bit $tmp154 = { $tmp93 };
        bool $tmp92 = $tmp154.value;
        if ($tmp92) goto $l155;
        panda$core$Int64$init$builtin_int64(&$tmp156, 34);
        panda$core$Bit $tmp157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp156);
        $tmp92 = $tmp157.value;
        $l155:;
        panda$core$Bit $tmp158 = { $tmp92 };
        if ($tmp158.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp160, 7);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp159, $tmp160);
            (($fn161) self->$class->vtable[5])(self, p_token, $tmp159);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp176, 27);
        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp176);
        bool $tmp175 = $tmp177.value;
        if ($tmp175) goto $l178;
        panda$core$Int64$init$builtin_int64(&$tmp179, 28);
        panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp179);
        $tmp175 = $tmp180.value;
        $l178:;
        panda$core$Bit $tmp181 = { $tmp175 };
        bool $tmp174 = $tmp181.value;
        if ($tmp174) goto $l182;
        panda$core$Int64$init$builtin_int64(&$tmp183, 29);
        panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp183);
        $tmp174 = $tmp184.value;
        $l182:;
        panda$core$Bit $tmp185 = { $tmp174 };
        bool $tmp173 = $tmp185.value;
        if ($tmp173) goto $l186;
        panda$core$Int64$init$builtin_int64(&$tmp187, 30);
        panda$core$Bit $tmp188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp187);
        $tmp173 = $tmp188.value;
        $l186:;
        panda$core$Bit $tmp189 = { $tmp173 };
        bool $tmp172 = $tmp189.value;
        if ($tmp172) goto $l190;
        panda$core$Int64$init$builtin_int64(&$tmp191, 31);
        panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp191);
        $tmp172 = $tmp192.value;
        $l190:;
        panda$core$Bit $tmp193 = { $tmp172 };
        bool $tmp171 = $tmp193.value;
        if ($tmp171) goto $l194;
        panda$core$Int64$init$builtin_int64(&$tmp195, 32);
        panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp195);
        $tmp171 = $tmp196.value;
        $l194:;
        panda$core$Bit $tmp197 = { $tmp171 };
        bool $tmp170 = $tmp197.value;
        if ($tmp170) goto $l198;
        panda$core$Int64$init$builtin_int64(&$tmp199, 35);
        panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp199);
        $tmp170 = $tmp200.value;
        $l198:;
        panda$core$Bit $tmp201 = { $tmp170 };
        bool $tmp169 = $tmp201.value;
        if ($tmp169) goto $l202;
        panda$core$Int64$init$builtin_int64(&$tmp203, 36);
        panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp203);
        $tmp169 = $tmp204.value;
        $l202:;
        panda$core$Bit $tmp205 = { $tmp169 };
        bool $tmp168 = $tmp205.value;
        if ($tmp168) goto $l206;
        panda$core$Int64$init$builtin_int64(&$tmp207, 37);
        panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp207);
        $tmp168 = $tmp208.value;
        $l206:;
        panda$core$Bit $tmp209 = { $tmp168 };
        bool $tmp167 = $tmp209.value;
        if ($tmp167) goto $l210;
        panda$core$Int64$init$builtin_int64(&$tmp211, 38);
        panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp211);
        $tmp167 = $tmp212.value;
        $l210:;
        panda$core$Bit $tmp213 = { $tmp167 };
        bool $tmp166 = $tmp213.value;
        if ($tmp166) goto $l214;
        panda$core$Int64$init$builtin_int64(&$tmp215, 39);
        panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp215);
        $tmp166 = $tmp216.value;
        $l214:;
        panda$core$Bit $tmp217 = { $tmp166 };
        bool $tmp165 = $tmp217.value;
        if ($tmp165) goto $l218;
        panda$core$Int64$init$builtin_int64(&$tmp219, 40);
        panda$core$Bit $tmp220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp219);
        $tmp165 = $tmp220.value;
        $l218:;
        panda$core$Bit $tmp221 = { $tmp165 };
        bool $tmp164 = $tmp221.value;
        if ($tmp164) goto $l222;
        panda$core$Int64$init$builtin_int64(&$tmp223, 22);
        panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp223);
        $tmp164 = $tmp224.value;
        $l222:;
        panda$core$Bit $tmp225 = { $tmp164 };
        bool $tmp163 = $tmp225.value;
        if ($tmp163) goto $l226;
        panda$core$Int64$init$builtin_int64(&$tmp227, 44);
        panda$core$Bit $tmp228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp227);
        $tmp163 = $tmp228.value;
        $l226:;
        panda$core$Bit $tmp229 = { $tmp163 };
        bool $tmp162 = $tmp229.value;
        if ($tmp162) goto $l230;
        panda$core$Int64$init$builtin_int64(&$tmp231, 45);
        panda$core$Bit $tmp232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp231);
        $tmp162 = $tmp232.value;
        $l230:;
        panda$core$Bit $tmp233 = { $tmp162 };
        if ($tmp233.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp235, 8);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp234, $tmp235);
            (($fn236) self->$class->vtable[5])(self, p_token, $tmp234);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp238, 46);
        panda$core$Bit $tmp239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp238);
        bool $tmp237 = $tmp239.value;
        if ($tmp237) goto $l240;
        panda$core$Int64$init$builtin_int64(&$tmp241, 47);
        panda$core$Bit $tmp242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp241);
        $tmp237 = $tmp242.value;
        $l240:;
        panda$core$Bit $tmp243 = { $tmp237 };
        if ($tmp243.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp245, 9);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp244, $tmp245);
            (($fn246) self->$class->vtable[5])(self, p_token, $tmp244);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp295, 49);
        panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp295);
        bool $tmp294 = $tmp296.value;
        if ($tmp294) goto $l297;
        panda$core$Int64$init$builtin_int64(&$tmp298, 50);
        panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp298);
        $tmp294 = $tmp299.value;
        $l297:;
        panda$core$Bit $tmp300 = { $tmp294 };
        bool $tmp293 = $tmp300.value;
        if ($tmp293) goto $l301;
        panda$core$Int64$init$builtin_int64(&$tmp302, 51);
        panda$core$Bit $tmp303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp302);
        $tmp293 = $tmp303.value;
        $l301:;
        panda$core$Bit $tmp304 = { $tmp293 };
        bool $tmp292 = $tmp304.value;
        if ($tmp292) goto $l305;
        panda$core$Int64$init$builtin_int64(&$tmp306, 52);
        panda$core$Bit $tmp307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp306);
        $tmp292 = $tmp307.value;
        $l305:;
        panda$core$Bit $tmp308 = { $tmp292 };
        bool $tmp291 = $tmp308.value;
        if ($tmp291) goto $l309;
        panda$core$Int64$init$builtin_int64(&$tmp310, 53);
        panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp310);
        $tmp291 = $tmp311.value;
        $l309:;
        panda$core$Bit $tmp312 = { $tmp291 };
        bool $tmp290 = $tmp312.value;
        if ($tmp290) goto $l313;
        panda$core$Int64$init$builtin_int64(&$tmp314, 54);
        panda$core$Bit $tmp315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp314);
        $tmp290 = $tmp315.value;
        $l313:;
        panda$core$Bit $tmp316 = { $tmp290 };
        bool $tmp289 = $tmp316.value;
        if ($tmp289) goto $l317;
        panda$core$Int64$init$builtin_int64(&$tmp318, 55);
        panda$core$Bit $tmp319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp318);
        $tmp289 = $tmp319.value;
        $l317:;
        panda$core$Bit $tmp320 = { $tmp289 };
        bool $tmp288 = $tmp320.value;
        if ($tmp288) goto $l321;
        panda$core$Int64$init$builtin_int64(&$tmp322, 56);
        panda$core$Bit $tmp323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp322);
        $tmp288 = $tmp323.value;
        $l321:;
        panda$core$Bit $tmp324 = { $tmp288 };
        bool $tmp287 = $tmp324.value;
        if ($tmp287) goto $l325;
        panda$core$Int64$init$builtin_int64(&$tmp326, 57);
        panda$core$Bit $tmp327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp326);
        $tmp287 = $tmp327.value;
        $l325:;
        panda$core$Bit $tmp328 = { $tmp287 };
        bool $tmp286 = $tmp328.value;
        if ($tmp286) goto $l329;
        panda$core$Int64$init$builtin_int64(&$tmp330, 58);
        panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp330);
        $tmp286 = $tmp331.value;
        $l329:;
        panda$core$Bit $tmp332 = { $tmp286 };
        bool $tmp285 = $tmp332.value;
        if ($tmp285) goto $l333;
        panda$core$Int64$init$builtin_int64(&$tmp334, 59);
        panda$core$Bit $tmp335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp334);
        $tmp285 = $tmp335.value;
        $l333:;
        panda$core$Bit $tmp336 = { $tmp285 };
        bool $tmp284 = $tmp336.value;
        if ($tmp284) goto $l337;
        panda$core$Int64$init$builtin_int64(&$tmp338, 60);
        panda$core$Bit $tmp339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp338);
        $tmp284 = $tmp339.value;
        $l337:;
        panda$core$Bit $tmp340 = { $tmp284 };
        bool $tmp283 = $tmp340.value;
        if ($tmp283) goto $l341;
        panda$core$Int64$init$builtin_int64(&$tmp342, 61);
        panda$core$Bit $tmp343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp342);
        $tmp283 = $tmp343.value;
        $l341:;
        panda$core$Bit $tmp344 = { $tmp283 };
        bool $tmp282 = $tmp344.value;
        if ($tmp282) goto $l345;
        panda$core$Int64$init$builtin_int64(&$tmp346, 62);
        panda$core$Bit $tmp347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp346);
        $tmp282 = $tmp347.value;
        $l345:;
        panda$core$Bit $tmp348 = { $tmp282 };
        bool $tmp281 = $tmp348.value;
        if ($tmp281) goto $l349;
        panda$core$Int64$init$builtin_int64(&$tmp350, 63);
        panda$core$Bit $tmp351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp350);
        $tmp281 = $tmp351.value;
        $l349:;
        panda$core$Bit $tmp352 = { $tmp281 };
        bool $tmp280 = $tmp352.value;
        if ($tmp280) goto $l353;
        panda$core$Int64$init$builtin_int64(&$tmp354, 64);
        panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp354);
        $tmp280 = $tmp355.value;
        $l353:;
        panda$core$Bit $tmp356 = { $tmp280 };
        bool $tmp279 = $tmp356.value;
        if ($tmp279) goto $l357;
        panda$core$Int64$init$builtin_int64(&$tmp358, 65);
        panda$core$Bit $tmp359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp358);
        $tmp279 = $tmp359.value;
        $l357:;
        panda$core$Bit $tmp360 = { $tmp279 };
        bool $tmp278 = $tmp360.value;
        if ($tmp278) goto $l361;
        panda$core$Int64$init$builtin_int64(&$tmp362, 66);
        panda$core$Bit $tmp363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp362);
        $tmp278 = $tmp363.value;
        $l361:;
        panda$core$Bit $tmp364 = { $tmp278 };
        bool $tmp277 = $tmp364.value;
        if ($tmp277) goto $l365;
        panda$core$Int64$init$builtin_int64(&$tmp366, 67);
        panda$core$Bit $tmp367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp366);
        $tmp277 = $tmp367.value;
        $l365:;
        panda$core$Bit $tmp368 = { $tmp277 };
        bool $tmp276 = $tmp368.value;
        if ($tmp276) goto $l369;
        panda$core$Int64$init$builtin_int64(&$tmp370, 68);
        panda$core$Bit $tmp371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp370);
        $tmp276 = $tmp371.value;
        $l369:;
        panda$core$Bit $tmp372 = { $tmp276 };
        bool $tmp275 = $tmp372.value;
        if ($tmp275) goto $l373;
        panda$core$Int64$init$builtin_int64(&$tmp374, 69);
        panda$core$Bit $tmp375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp374);
        $tmp275 = $tmp375.value;
        $l373:;
        panda$core$Bit $tmp376 = { $tmp275 };
        bool $tmp274 = $tmp376.value;
        if ($tmp274) goto $l377;
        panda$core$Int64$init$builtin_int64(&$tmp378, 70);
        panda$core$Bit $tmp379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp378);
        $tmp274 = $tmp379.value;
        $l377:;
        panda$core$Bit $tmp380 = { $tmp274 };
        bool $tmp273 = $tmp380.value;
        if ($tmp273) goto $l381;
        panda$core$Int64$init$builtin_int64(&$tmp382, 71);
        panda$core$Bit $tmp383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp382);
        $tmp273 = $tmp383.value;
        $l381:;
        panda$core$Bit $tmp384 = { $tmp273 };
        bool $tmp272 = $tmp384.value;
        if ($tmp272) goto $l385;
        panda$core$Int64$init$builtin_int64(&$tmp386, 72);
        panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp386);
        $tmp272 = $tmp387.value;
        $l385:;
        panda$core$Bit $tmp388 = { $tmp272 };
        bool $tmp271 = $tmp388.value;
        if ($tmp271) goto $l389;
        panda$core$Int64$init$builtin_int64(&$tmp390, 73);
        panda$core$Bit $tmp391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp390);
        $tmp271 = $tmp391.value;
        $l389:;
        panda$core$Bit $tmp392 = { $tmp271 };
        bool $tmp270 = $tmp392.value;
        if ($tmp270) goto $l393;
        panda$core$Int64$init$builtin_int64(&$tmp394, 74);
        panda$core$Bit $tmp395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp394);
        $tmp270 = $tmp395.value;
        $l393:;
        panda$core$Bit $tmp396 = { $tmp270 };
        bool $tmp269 = $tmp396.value;
        if ($tmp269) goto $l397;
        panda$core$Int64$init$builtin_int64(&$tmp398, 75);
        panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp398);
        $tmp269 = $tmp399.value;
        $l397:;
        panda$core$Bit $tmp400 = { $tmp269 };
        bool $tmp268 = $tmp400.value;
        if ($tmp268) goto $l401;
        panda$core$Int64$init$builtin_int64(&$tmp402, 76);
        panda$core$Bit $tmp403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp402);
        $tmp268 = $tmp403.value;
        $l401:;
        panda$core$Bit $tmp404 = { $tmp268 };
        bool $tmp267 = $tmp404.value;
        if ($tmp267) goto $l405;
        panda$core$Int64$init$builtin_int64(&$tmp406, 77);
        panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp406);
        $tmp267 = $tmp407.value;
        $l405:;
        panda$core$Bit $tmp408 = { $tmp267 };
        bool $tmp266 = $tmp408.value;
        if ($tmp266) goto $l409;
        panda$core$Int64$init$builtin_int64(&$tmp410, 78);
        panda$core$Bit $tmp411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp410);
        $tmp266 = $tmp411.value;
        $l409:;
        panda$core$Bit $tmp412 = { $tmp266 };
        bool $tmp265 = $tmp412.value;
        if ($tmp265) goto $l413;
        panda$core$Int64$init$builtin_int64(&$tmp414, 79);
        panda$core$Bit $tmp415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp414);
        $tmp265 = $tmp415.value;
        $l413:;
        panda$core$Bit $tmp416 = { $tmp265 };
        bool $tmp264 = $tmp416.value;
        if ($tmp264) goto $l417;
        panda$core$Int64$init$builtin_int64(&$tmp418, 80);
        panda$core$Bit $tmp419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp418);
        $tmp264 = $tmp419.value;
        $l417:;
        panda$core$Bit $tmp420 = { $tmp264 };
        bool $tmp263 = $tmp420.value;
        if ($tmp263) goto $l421;
        panda$core$Int64$init$builtin_int64(&$tmp422, 81);
        panda$core$Bit $tmp423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp422);
        $tmp263 = $tmp423.value;
        $l421:;
        panda$core$Bit $tmp424 = { $tmp263 };
        bool $tmp262 = $tmp424.value;
        if ($tmp262) goto $l425;
        panda$core$Int64$init$builtin_int64(&$tmp426, 82);
        panda$core$Bit $tmp427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp426);
        $tmp262 = $tmp427.value;
        $l425:;
        panda$core$Bit $tmp428 = { $tmp262 };
        bool $tmp261 = $tmp428.value;
        if ($tmp261) goto $l429;
        panda$core$Int64$init$builtin_int64(&$tmp430, 83);
        panda$core$Bit $tmp431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp430);
        $tmp261 = $tmp431.value;
        $l429:;
        panda$core$Bit $tmp432 = { $tmp261 };
        bool $tmp260 = $tmp432.value;
        if ($tmp260) goto $l433;
        panda$core$Int64$init$builtin_int64(&$tmp434, 84);
        panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp434);
        $tmp260 = $tmp435.value;
        $l433:;
        panda$core$Bit $tmp436 = { $tmp260 };
        bool $tmp259 = $tmp436.value;
        if ($tmp259) goto $l437;
        panda$core$Int64$init$builtin_int64(&$tmp438, 85);
        panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp438);
        $tmp259 = $tmp439.value;
        $l437:;
        panda$core$Bit $tmp440 = { $tmp259 };
        bool $tmp258 = $tmp440.value;
        if ($tmp258) goto $l441;
        panda$core$Int64$init$builtin_int64(&$tmp442, 86);
        panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp442);
        $tmp258 = $tmp443.value;
        $l441:;
        panda$core$Bit $tmp444 = { $tmp258 };
        bool $tmp257 = $tmp444.value;
        if ($tmp257) goto $l445;
        panda$core$Int64$init$builtin_int64(&$tmp446, 87);
        panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp446);
        $tmp257 = $tmp447.value;
        $l445:;
        panda$core$Bit $tmp448 = { $tmp257 };
        bool $tmp256 = $tmp448.value;
        if ($tmp256) goto $l449;
        panda$core$Int64$init$builtin_int64(&$tmp450, 88);
        panda$core$Bit $tmp451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp450);
        $tmp256 = $tmp451.value;
        $l449:;
        panda$core$Bit $tmp452 = { $tmp256 };
        bool $tmp255 = $tmp452.value;
        if ($tmp255) goto $l453;
        panda$core$Int64$init$builtin_int64(&$tmp454, 89);
        panda$core$Bit $tmp455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp454);
        $tmp255 = $tmp455.value;
        $l453:;
        panda$core$Bit $tmp456 = { $tmp255 };
        bool $tmp254 = $tmp456.value;
        if ($tmp254) goto $l457;
        panda$core$Int64$init$builtin_int64(&$tmp458, 90);
        panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp458);
        $tmp254 = $tmp459.value;
        $l457:;
        panda$core$Bit $tmp460 = { $tmp254 };
        bool $tmp253 = $tmp460.value;
        if ($tmp253) goto $l461;
        panda$core$Int64$init$builtin_int64(&$tmp462, 91);
        panda$core$Bit $tmp463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp462);
        $tmp253 = $tmp463.value;
        $l461:;
        panda$core$Bit $tmp464 = { $tmp253 };
        bool $tmp252 = $tmp464.value;
        if ($tmp252) goto $l465;
        panda$core$Int64$init$builtin_int64(&$tmp466, 92);
        panda$core$Bit $tmp467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp466);
        $tmp252 = $tmp467.value;
        $l465:;
        panda$core$Bit $tmp468 = { $tmp252 };
        bool $tmp251 = $tmp468.value;
        if ($tmp251) goto $l469;
        panda$core$Int64$init$builtin_int64(&$tmp470, 93);
        panda$core$Bit $tmp471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp470);
        $tmp251 = $tmp471.value;
        $l469:;
        panda$core$Bit $tmp472 = { $tmp251 };
        bool $tmp250 = $tmp472.value;
        if ($tmp250) goto $l473;
        panda$core$Int64$init$builtin_int64(&$tmp474, 94);
        panda$core$Bit $tmp475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp474);
        $tmp250 = $tmp475.value;
        $l473:;
        panda$core$Bit $tmp476 = { $tmp250 };
        bool $tmp249 = $tmp476.value;
        if ($tmp249) goto $l477;
        panda$core$Int64$init$builtin_int64(&$tmp478, 95);
        panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp478);
        $tmp249 = $tmp479.value;
        $l477:;
        panda$core$Bit $tmp480 = { $tmp249 };
        bool $tmp248 = $tmp480.value;
        if ($tmp248) goto $l481;
        panda$core$Int64$init$builtin_int64(&$tmp482, 96);
        panda$core$Bit $tmp483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp482);
        $tmp248 = $tmp483.value;
        $l481:;
        panda$core$Bit $tmp484 = { $tmp248 };
        bool $tmp247 = $tmp484.value;
        if ($tmp247) goto $l485;
        panda$core$Int64$init$builtin_int64(&$tmp486, 97);
        panda$core$Bit $tmp487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_926.$rawValue, $tmp486);
        $tmp247 = $tmp487.value;
        $l485:;
        panda$core$Bit $tmp488 = { $tmp247 };
        if ($tmp488.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp490, 11);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp489, $tmp490);
            (($fn491) self->$class->vtable[5])(self, p_token, $tmp489);
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp493, 0);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp492, $tmp493);
            (($fn494) self->$class->vtable[5])(self, p_token, $tmp492);
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
    panda$core$Object* $tmp495;
    panda$core$Int64 $tmp497;
    panda$core$Int64 $tmp496 = panda$collections$Array$get_count$R$panda$core$Int64(self->tokens);
    panda$core$Int64$init$builtin_int64(&$tmp497, 1);
    panda$core$Int64 $tmp498 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp496, $tmp497);
    panda$core$Object* $tmp499 = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(self->tokens, $tmp498);
    $tmp495 = $tmp499;
    panda$core$Panda$unref$panda$core$Object($tmp495);
}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$init(org$pandalanguage$pandac$parser$SyntaxHighlighter* self) {
    panda$collections$Stack* $tmp500;
    panda$collections$Stack* $tmp501;
    panda$collections$Array* $tmp503;
    panda$collections$Array* $tmp504;
    self->stack = NULL;
    self->tokens = NULL;
    panda$collections$Stack* $tmp502 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
    panda$collections$Stack$init($tmp502);
    $tmp501 = $tmp502;
    $tmp500 = $tmp501;
    self->stack = $tmp500;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp500));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp501));
    panda$collections$Array* $tmp505 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp505);
    $tmp504 = $tmp505;
    $tmp503 = $tmp504;
    self->tokens = $tmp503;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp503));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp504));
}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$cleanup(org$pandalanguage$pandac$parser$SyntaxHighlighter* self) {
    int $tmp508;
    {
    }
    $tmp508 = -1;
    goto $l506;
    $l506:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp508) {
        case -1: goto $l509;
    }
    $l509:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->stack));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->tokens));
}

