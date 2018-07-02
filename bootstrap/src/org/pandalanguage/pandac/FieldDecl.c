#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/core/Int64.h"
#include "panda/core/Weak.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/core/MutableString.h"
#include "panda/core/Bit.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"

static panda$core$String $s1;
org$pandalanguage$pandac$FieldDecl$class_type org$pandalanguage$pandac$FieldDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String, org$pandalanguage$pandac$FieldDecl$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x65\x6c\x64\x44\x65\x63\x6c", 34, -1957968300131265962, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x65\x6c\x64\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 15, -1057146786940706361, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

void org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$FieldDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$FieldDecl$Kind p_fieldKind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_value) {
    org$pandalanguage$pandac$Compiler$Resolution $tmp2;
    panda$core$Int64 $tmp3;
    panda$core$Weak* $tmp4;
    panda$core$Weak* $tmp5;
    panda$core$Weak* $tmp6;
    panda$core$String* $tmp8;
    panda$core$String* $tmp9;
    org$pandalanguage$pandac$Annotations* $tmp10;
    org$pandalanguage$pandac$Annotations* $tmp11;
    org$pandalanguage$pandac$Type* $tmp12;
    org$pandalanguage$pandac$Type* $tmp13;
    org$pandalanguage$pandac$ASTNode* $tmp14;
    org$pandalanguage$pandac$ASTNode* $tmp15;
    org$pandalanguage$pandac$IRNode* $tmp16;
    org$pandalanguage$pandac$IRNode* $tmp17;
    org$pandalanguage$pandac$Symbol$Kind $tmp18;
    panda$core$Int64 $tmp19;
    self->name = NULL;
    self->owner = NULL;
    self->doccomment = NULL;
    self->annotations = NULL;
    self->type = NULL;
    self->rawValue = NULL;
    self->value = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp3, 0);
    org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64(&$tmp2, $tmp3);
    self->resolved = $tmp2;
    {
        $tmp4 = self->owner;
        panda$core$Weak* $tmp7 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp7, ((panda$core$Object*) p_owner));
        $tmp6 = $tmp7;
        $tmp5 = $tmp6;
        self->owner = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
    {
        $tmp8 = self->doccomment;
        $tmp9 = p_doccomment;
        self->doccomment = $tmp9;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    }
    {
        $tmp10 = self->annotations;
        $tmp11 = p_annotations;
        self->annotations = $tmp11;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    }
    self->fieldKind = p_fieldKind;
    {
        $tmp12 = self->type;
        $tmp13 = p_type;
        self->type = $tmp13;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    }
    {
        $tmp14 = self->rawValue;
        $tmp15 = p_value;
        self->rawValue = $tmp15;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    }
    {
        $tmp16 = self->value;
        $tmp17 = NULL;
        self->value = $tmp17;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    }
    panda$core$Int64$init$builtin_int64(&$tmp19, 2);
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp18, $tmp19);
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp18, p_position, p_name);
}
panda$core$String* org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(org$pandalanguage$pandac$FieldDecl* self) {
    panda$core$MutableString* result23 = NULL;
    panda$core$MutableString* $tmp24;
    panda$core$MutableString* $tmp25;
    panda$core$String* $tmp27;
    org$pandalanguage$pandac$FieldDecl$Kind $match$44_929;
    panda$core$Int64 $tmp30;
    panda$core$Int64 $tmp33;
    panda$core$Int64 $tmp36;
    panda$core$Int64 $tmp39;
    panda$core$Char8 $tmp42;
    panda$core$UInt8 $tmp43;
    panda$core$String* $returnValue46;
    panda$core$String* $tmp47;
    panda$core$String* $tmp48;
    int $tmp22;
    {
        panda$core$MutableString* $tmp26 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp28 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
        $tmp27 = $tmp28;
        panda$core$MutableString$init$panda$core$String($tmp26, $tmp27);
        $tmp25 = $tmp26;
        $tmp24 = $tmp25;
        result23 = $tmp24;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp24));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp25));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
        {
            $match$44_929 = self->fieldKind;
            panda$core$Int64$init$builtin_int64(&$tmp30, 0);
            panda$core$Bit $tmp31 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$44_929.$rawValue, $tmp30);
            if ($tmp31.value) {
            {
                panda$core$MutableString$append$panda$core$String(result23, &$s32);
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp33, 1);
            panda$core$Bit $tmp34 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$44_929.$rawValue, $tmp33);
            if ($tmp34.value) {
            {
                panda$core$MutableString$append$panda$core$String(result23, &$s35);
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp36, 2);
            panda$core$Bit $tmp37 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$44_929.$rawValue, $tmp36);
            if ($tmp37.value) {
            {
                panda$core$MutableString$append$panda$core$String(result23, &$s38);
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp39, 3);
            panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$44_929.$rawValue, $tmp39);
            if ($tmp40.value) {
            {
                panda$core$MutableString$append$panda$core$String(result23, &$s41);
            }
            }
            }
            }
            }
        }
        panda$core$MutableString$append$panda$core$String(result23, self->name);
        panda$core$UInt8$init$builtin_uint8(&$tmp43, 58);
        panda$core$Char8$init$panda$core$UInt8(&$tmp42, $tmp43);
        panda$core$MutableString$append$panda$core$Char8(result23, $tmp42);
        panda$core$MutableString$append$panda$core$Object(result23, ((panda$core$Object*) self->type));
        if (((panda$core$Bit) { self->value != NULL }).value) {
        {
            panda$core$MutableString$append$panda$core$String(result23, &$s44);
            panda$core$MutableString$append$panda$core$Object(result23, ((panda$core$Object*) self->value));
        }
        }
        else {
        if (((panda$core$Bit) { self->rawValue != NULL }).value) {
        {
            panda$core$MutableString$append$panda$core$String(result23, &$s45);
            panda$core$MutableString$append$panda$core$Object(result23, ((panda$core$Object*) self->rawValue));
        }
        }
        }
        panda$core$String* $tmp49 = panda$core$MutableString$finish$R$panda$core$String(result23);
        $tmp48 = $tmp49;
        $tmp47 = $tmp48;
        $returnValue46 = $tmp47;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp47));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
        $tmp22 = 0;
        goto $l20;
        $l50:;
        return $returnValue46;
    }
    $l20:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result23));
    result23 = NULL;
    switch ($tmp22) {
        case 0: goto $l50;
    }
    $l52:;
    if (false) goto $l53; else goto $l54;
    $l54:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s55, (panda$core$Int64) { 42 }, &$s56);
    abort();
    $l53:;
    abort();
}
void org$pandalanguage$pandac$FieldDecl$cleanup(org$pandalanguage$pandac$FieldDecl* self) {
    int $tmp59;
    {
    }
    $tmp59 = -1;
    goto $l57;
    $l57:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp59) {
        case -1: goto $l60;
    }
    $l60:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->annotations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->type));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->rawValue));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
}

