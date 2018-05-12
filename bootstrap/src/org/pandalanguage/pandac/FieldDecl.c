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
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Int64.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
org$pandalanguage$pandac$FieldDecl$class_type org$pandalanguage$pandac$FieldDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String, org$pandalanguage$pandac$FieldDecl$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x65\x6c\x64\x44\x65\x63\x6c", 34, -1957968300131265962, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };

void org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$FieldDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$FieldDecl$Kind p_fieldKind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_value) {
    org$pandalanguage$pandac$ClassDecl* $tmp2;
    org$pandalanguage$pandac$ClassDecl* $tmp3;
    panda$core$String* $tmp4;
    panda$core$String* $tmp5;
    org$pandalanguage$pandac$Annotations* $tmp6;
    org$pandalanguage$pandac$Annotations* $tmp7;
    org$pandalanguage$pandac$Type* $tmp8;
    org$pandalanguage$pandac$Type* $tmp9;
    org$pandalanguage$pandac$ASTNode* $tmp10;
    org$pandalanguage$pandac$ASTNode* $tmp11;
    org$pandalanguage$pandac$IRNode* $tmp12;
    org$pandalanguage$pandac$IRNode* $tmp13;
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
        $tmp3 = p_owner;
        self->owner = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    {
        $tmp4 = self->doccomment;
        $tmp5 = p_doccomment;
        self->doccomment = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
    {
        $tmp6 = self->annotations;
        $tmp7 = p_annotations;
        self->annotations = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    }
    self->fieldKind = p_fieldKind;
    {
        $tmp8 = self->type;
        $tmp9 = p_type;
        self->type = $tmp9;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    }
    {
        $tmp10 = self->rawValue;
        $tmp11 = p_value;
        self->rawValue = $tmp11;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    }
    {
        $tmp12 = self->value;
        $tmp13 = NULL;
        self->value = $tmp13;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 202 }), p_position, p_name);
}
panda$core$String* org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(org$pandalanguage$pandac$FieldDecl* self) {
    panda$core$MutableString* result17 = NULL;
    panda$core$MutableString* $tmp18;
    panda$core$MutableString* $tmp19;
    panda$core$String* $tmp21;
    org$pandalanguage$pandac$FieldDecl$Kind $match$43_923;
    panda$core$Char8 $tmp32;
    panda$core$String* $finallyReturn34;
    panda$core$String* $tmp36;
    panda$core$String* $tmp37;
    int $tmp16;
    {
        panda$core$MutableString* $tmp20 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp22 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
        $tmp21 = $tmp22;
        panda$core$MutableString$init$panda$core$String($tmp20, $tmp21);
        $tmp19 = $tmp20;
        $tmp18 = $tmp19;
        result17 = $tmp18;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
        {
            $match$43_923 = self->fieldKind;
            panda$core$Bit $tmp24 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$43_923.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp24.value) {
            {
                panda$core$MutableString$append$panda$core$String(result17, &$s25);
            }
            }
            else {
            panda$core$Bit $tmp26 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$43_923.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp26.value) {
            {
                panda$core$MutableString$append$panda$core$String(result17, &$s27);
            }
            }
            else {
            panda$core$Bit $tmp28 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$43_923.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp28.value) {
            {
                panda$core$MutableString$append$panda$core$String(result17, &$s29);
            }
            }
            else {
            panda$core$Bit $tmp30 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$43_923.$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp30.value) {
            {
                panda$core$MutableString$append$panda$core$String(result17, &$s31);
            }
            }
            }
            }
            }
        }
        panda$core$MutableString$append$panda$core$String(result17, self->name);
        panda$core$Char8$init$panda$core$UInt8(&$tmp32, ((panda$core$UInt8) { 58 }));
        panda$core$MutableString$append$panda$core$Char8(result17, $tmp32);
        panda$core$MutableString$append$panda$core$Object(result17, ((panda$core$Object*) self->type));
        if (((panda$core$Bit) { self->value != NULL }).value) {
        {
            panda$core$MutableString$append$panda$core$String(result17, &$s33);
            panda$core$MutableString$append$panda$core$Object(result17, ((panda$core$Object*) self->value));
        }
        }
        else {
        if (((panda$core$Bit) { self->rawValue != NULL }).value) {
        {
            panda$core$MutableString$append$panda$core$String(result17, &$s34);
            panda$core$MutableString$append$panda$core$Object(result17, ((panda$core$Object*) self->rawValue));
        }
        }
        }
        panda$core$String* $tmp38 = panda$core$MutableString$finish$R$panda$core$String(result17);
        $tmp37 = $tmp38;
        $tmp36 = $tmp37;
        $finallyReturn34 = $tmp36;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
        $tmp16 = 0;
        goto $l14;
        $l39:;
        return $finallyReturn34;
    }
    $l14:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result17));
    result17 = NULL;
    switch ($tmp16) {
        case 0: goto $l39;
    }
    $l41:;
}
void org$pandalanguage$pandac$FieldDecl$cleanup(org$pandalanguage$pandac$FieldDecl* self) {
    int $tmp44;
    {
    }
    $tmp44 = -1;
    goto $l42;
    $l42:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp44) {
        case -1: goto $l45;
    }
    $l45:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->annotations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->type));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->rawValue));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
}

