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
#include "panda/core/Bit.h"
#include "panda/core/Weak.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/core/Int64.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
org$pandalanguage$pandac$FieldDecl$class_type org$pandalanguage$pandac$FieldDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String, org$pandalanguage$pandac$FieldDecl$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x65\x6c\x64\x44\x65\x63\x6c", 34, -1957968300131265962, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };

void org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$FieldDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$FieldDecl$Kind p_fieldKind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_value) {
    panda$core$Weak* $tmp2;
    panda$core$Weak* $tmp3;
    panda$core$Weak* $tmp4;
    panda$core$String* $tmp6;
    panda$core$String* $tmp7;
    org$pandalanguage$pandac$Annotations* $tmp8;
    org$pandalanguage$pandac$Annotations* $tmp9;
    org$pandalanguage$pandac$Type* $tmp10;
    org$pandalanguage$pandac$Type* $tmp11;
    org$pandalanguage$pandac$ASTNode* $tmp12;
    org$pandalanguage$pandac$ASTNode* $tmp13;
    org$pandalanguage$pandac$IRNode* $tmp14;
    org$pandalanguage$pandac$IRNode* $tmp15;
    org$pandalanguage$pandac$Symbol$Kind $tmp16;
    self->name = NULL;
    self->owner = NULL;
    self->doccomment = NULL;
    self->annotations = NULL;
    self->type = NULL;
    self->rawValue = NULL;
    self->value = NULL;
    self->resolved = ((panda$core$Bit) { false });
    {
        $tmp2 = self->owner;
        panda$core$Weak* $tmp5 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp5, ((panda$core$Object*) p_owner));
        $tmp4 = $tmp5;
        $tmp3 = $tmp4;
        self->owner = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    {
        $tmp6 = self->doccomment;
        $tmp7 = p_doccomment;
        self->doccomment = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    }
    {
        $tmp8 = self->annotations;
        $tmp9 = p_annotations;
        self->annotations = $tmp9;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    }
    self->fieldKind = p_fieldKind;
    {
        $tmp10 = self->type;
        $tmp11 = p_type;
        self->type = $tmp11;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    }
    {
        $tmp12 = self->rawValue;
        $tmp13 = p_value;
        self->rawValue = $tmp13;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    }
    {
        $tmp14 = self->value;
        $tmp15 = NULL;
        self->value = $tmp15;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    }
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp16, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp16, p_position, p_name);
}
panda$core$String* org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(org$pandalanguage$pandac$FieldDecl* self) {
    panda$core$MutableString* result20 = NULL;
    panda$core$MutableString* $tmp21;
    panda$core$MutableString* $tmp22;
    panda$core$String* $tmp24;
    org$pandalanguage$pandac$FieldDecl$Kind $match$44_926;
    panda$core$Char8 $tmp35;
    panda$core$String* $returnValue38;
    panda$core$String* $tmp39;
    panda$core$String* $tmp40;
    int $tmp19;
    {
        panda$core$MutableString* $tmp23 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp25 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
        $tmp24 = $tmp25;
        panda$core$MutableString$init$panda$core$String($tmp23, $tmp24);
        $tmp22 = $tmp23;
        $tmp21 = $tmp22;
        result20 = $tmp21;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp21));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
        {
            $match$44_926 = self->fieldKind;
            panda$core$Bit $tmp27 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$44_926.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp27.value) {
            {
                panda$core$MutableString$append$panda$core$String(result20, &$s28);
            }
            }
            else {
            panda$core$Bit $tmp29 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$44_926.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp29.value) {
            {
                panda$core$MutableString$append$panda$core$String(result20, &$s30);
            }
            }
            else {
            panda$core$Bit $tmp31 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$44_926.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp31.value) {
            {
                panda$core$MutableString$append$panda$core$String(result20, &$s32);
            }
            }
            else {
            panda$core$Bit $tmp33 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$44_926.$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp33.value) {
            {
                panda$core$MutableString$append$panda$core$String(result20, &$s34);
            }
            }
            }
            }
            }
        }
        panda$core$MutableString$append$panda$core$String(result20, self->name);
        panda$core$Char8$init$panda$core$UInt8(&$tmp35, ((panda$core$UInt8) { 58 }));
        panda$core$MutableString$append$panda$core$Char8(result20, $tmp35);
        panda$core$MutableString$append$panda$core$Object(result20, ((panda$core$Object*) self->type));
        if (((panda$core$Bit) { self->value != NULL }).value) {
        {
            panda$core$MutableString$append$panda$core$String(result20, &$s36);
            panda$core$MutableString$append$panda$core$Object(result20, ((panda$core$Object*) self->value));
        }
        }
        else {
        if (((panda$core$Bit) { self->rawValue != NULL }).value) {
        {
            panda$core$MutableString$append$panda$core$String(result20, &$s37);
            panda$core$MutableString$append$panda$core$Object(result20, ((panda$core$Object*) self->rawValue));
        }
        }
        }
        panda$core$String* $tmp41 = panda$core$MutableString$finish$R$panda$core$String(result20);
        $tmp40 = $tmp41;
        $tmp39 = $tmp40;
        $returnValue38 = $tmp39;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp39));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
        $tmp19 = 0;
        goto $l17;
        $l42:;
        return $returnValue38;
    }
    $l17:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result20));
    result20 = NULL;
    switch ($tmp19) {
        case 0: goto $l42;
    }
    $l44:;
}
void org$pandalanguage$pandac$FieldDecl$cleanup(org$pandalanguage$pandac$FieldDecl* self) {
    int $tmp47;
    {
    }
    $tmp47 = -1;
    goto $l45;
    $l45:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp47) {
        case -1: goto $l48;
    }
    $l48:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->annotations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->type));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->rawValue));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
}

