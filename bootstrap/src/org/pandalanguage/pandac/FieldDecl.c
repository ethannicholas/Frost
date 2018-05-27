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
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };

void org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$FieldDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$FieldDecl$Kind p_fieldKind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_value) {
    org$pandalanguage$pandac$Compiler$Resolution $tmp2;
    panda$core$Weak* $tmp3;
    panda$core$Weak* $tmp4;
    panda$core$Weak* $tmp5;
    panda$core$String* $tmp7;
    panda$core$String* $tmp8;
    org$pandalanguage$pandac$Annotations* $tmp9;
    org$pandalanguage$pandac$Annotations* $tmp10;
    org$pandalanguage$pandac$Type* $tmp11;
    org$pandalanguage$pandac$Type* $tmp12;
    org$pandalanguage$pandac$ASTNode* $tmp13;
    org$pandalanguage$pandac$ASTNode* $tmp14;
    org$pandalanguage$pandac$IRNode* $tmp15;
    org$pandalanguage$pandac$IRNode* $tmp16;
    org$pandalanguage$pandac$Symbol$Kind $tmp17;
    self->name = NULL;
    self->owner = NULL;
    self->doccomment = NULL;
    self->annotations = NULL;
    self->type = NULL;
    self->rawValue = NULL;
    self->value = NULL;
    org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64(&$tmp2, ((panda$core$Int64) { 0 }));
    self->resolved = $tmp2;
    {
        $tmp3 = self->owner;
        panda$core$Weak* $tmp6 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp6, ((panda$core$Object*) p_owner));
        $tmp5 = $tmp6;
        $tmp4 = $tmp5;
        self->owner = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
    {
        $tmp7 = self->doccomment;
        $tmp8 = p_doccomment;
        self->doccomment = $tmp8;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    }
    {
        $tmp9 = self->annotations;
        $tmp10 = p_annotations;
        self->annotations = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    }
    self->fieldKind = p_fieldKind;
    {
        $tmp11 = self->type;
        $tmp12 = p_type;
        self->type = $tmp12;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp11));
    }
    {
        $tmp13 = self->rawValue;
        $tmp14 = p_value;
        self->rawValue = $tmp14;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
    }
    {
        $tmp15 = self->value;
        $tmp16 = NULL;
        self->value = $tmp16;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
    }
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp17, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp17, p_position, p_name);
}
panda$core$String* org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(org$pandalanguage$pandac$FieldDecl* self) {
    panda$core$MutableString* result21 = NULL;
    panda$core$MutableString* $tmp22;
    panda$core$MutableString* $tmp23;
    panda$core$String* $tmp25;
    org$pandalanguage$pandac$FieldDecl$Kind $match$44_927;
    panda$core$Char8 $tmp36;
    panda$core$String* $returnValue39;
    panda$core$String* $tmp40;
    panda$core$String* $tmp41;
    int $tmp20;
    {
        panda$core$MutableString* $tmp24 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp26 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
        $tmp25 = $tmp26;
        panda$core$MutableString$init$panda$core$String($tmp24, $tmp25);
        $tmp23 = $tmp24;
        $tmp22 = $tmp23;
        result21 = $tmp22;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp25));
        {
            $match$44_927 = self->fieldKind;
            panda$core$Bit $tmp28 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$44_927.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp28.value) {
            {
                panda$core$MutableString$append$panda$core$String(result21, &$s29);
            }
            }
            else {
            panda$core$Bit $tmp30 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$44_927.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp30.value) {
            {
                panda$core$MutableString$append$panda$core$String(result21, &$s31);
            }
            }
            else {
            panda$core$Bit $tmp32 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$44_927.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp32.value) {
            {
                panda$core$MutableString$append$panda$core$String(result21, &$s33);
            }
            }
            else {
            panda$core$Bit $tmp34 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$44_927.$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp34.value) {
            {
                panda$core$MutableString$append$panda$core$String(result21, &$s35);
            }
            }
            }
            }
            }
        }
        panda$core$MutableString$append$panda$core$String(result21, self->name);
        panda$core$Char8$init$panda$core$UInt8(&$tmp36, ((panda$core$UInt8) { 58 }));
        panda$core$MutableString$append$panda$core$Char8(result21, $tmp36);
        panda$core$MutableString$append$panda$core$Object(result21, ((panda$core$Object*) self->type));
        if (((panda$core$Bit) { self->value != NULL }).value) {
        {
            panda$core$MutableString$append$panda$core$String(result21, &$s37);
            panda$core$MutableString$append$panda$core$Object(result21, ((panda$core$Object*) self->value));
        }
        }
        else {
        if (((panda$core$Bit) { self->rawValue != NULL }).value) {
        {
            panda$core$MutableString$append$panda$core$String(result21, &$s38);
            panda$core$MutableString$append$panda$core$Object(result21, ((panda$core$Object*) self->rawValue));
        }
        }
        }
        panda$core$String* $tmp42 = panda$core$MutableString$finish$R$panda$core$String(result21);
        $tmp41 = $tmp42;
        $tmp40 = $tmp41;
        $returnValue39 = $tmp40;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
        $tmp20 = 0;
        goto $l18;
        $l43:;
        return $returnValue39;
    }
    $l18:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result21));
    result21 = NULL;
    switch ($tmp20) {
        case 0: goto $l43;
    }
    $l45:;
}
void org$pandalanguage$pandac$FieldDecl$cleanup(org$pandalanguage$pandac$FieldDecl* self) {
    int $tmp48;
    {
    }
    $tmp48 = -1;
    goto $l46;
    $l46:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp48) {
        case -1: goto $l49;
    }
    $l49:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->annotations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->type));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->rawValue));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
}

