#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Int64.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


org$pandalanguage$pandac$FieldDecl$class_type org$pandalanguage$pandac$FieldDecl$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };


static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };

void org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$FieldDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$FieldDecl$Kind p_fieldKind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_value) {
    self->resolved = ((panda$core$Bit) { false });
    {
        panda$core$Object* $tmp1 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_owner));
        self->owner = ((org$pandalanguage$pandac$ClassDecl*) $tmp1);
    }
    {
        panda$core$Object* $tmp2 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_doccomment));
        self->doccomment = ((panda$core$String*) $tmp2);
    }
    {
        panda$core$Object* $tmp3 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_annotations));
        self->annotations = ((org$pandalanguage$pandac$Annotations*) $tmp3);
    }
    self->fieldKind = p_fieldKind;
    {
        panda$core$Object* $tmp4 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_type));
        self->type = ((org$pandalanguage$pandac$Type*) $tmp4);
    }
    {
        panda$core$Object* $tmp5 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_value));
        self->rawValue = ((org$pandalanguage$pandac$ASTNode*) $tmp5);
    }
    {
        panda$core$Object* $tmp6 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
        self->value = ((org$pandalanguage$pandac$IRNode*) $tmp6);
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 202 }), p_position, p_name);
}
panda$core$String* org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(org$pandalanguage$pandac$FieldDecl* self) {
    panda$core$MutableString* result7;
    org$pandalanguage$pandac$FieldDecl$Kind $match$43_912;
    panda$core$Char8 $tmp21;
    panda$core$MutableString* $tmp8 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp8->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp8->refCount.value = 1;
    panda$core$String* $tmp10 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
    panda$core$MutableString$init$panda$core$String($tmp8, $tmp10);
    panda$core$Object* $tmp11 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp8));
    result7 = ((panda$core$MutableString*) $tmp11);
    {
        $match$43_912 = self->fieldKind;
        panda$core$Bit $tmp13 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$43_912.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp13.value) {
        {
            panda$core$MutableString$append$panda$core$String(result7, &$s14);
        }
        }
        else {
        panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$43_912.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp15.value) {
        {
            panda$core$MutableString$append$panda$core$String(result7, &$s16);
        }
        }
        else {
        panda$core$Bit $tmp17 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$43_912.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp17.value) {
        {
            panda$core$MutableString$append$panda$core$String(result7, &$s18);
        }
        }
        else {
        panda$core$Bit $tmp19 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$43_912.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp19.value) {
        {
            panda$core$MutableString$append$panda$core$String(result7, &$s20);
        }
        }
        }
        }
        }
    }
    panda$core$MutableString$append$panda$core$String(result7, self->name);
    panda$core$Char8$init$panda$core$UInt8(&$tmp21, ((panda$core$UInt8) { 58 }));
    panda$core$MutableString$append$panda$core$Char8(result7, $tmp21);
    panda$core$MutableString$append$panda$core$Object(result7, ((panda$core$Object*) self->type));
    if (((panda$core$Bit) { self->value != NULL }).value) {
    {
        panda$core$MutableString$append$panda$core$String(result7, &$s22);
        panda$core$MutableString$append$panda$core$Object(result7, ((panda$core$Object*) self->value));
    }
    }
    else {
    if (((panda$core$Bit) { self->rawValue != NULL }).value) {
    {
        panda$core$MutableString$append$panda$core$String(result7, &$s23);
        panda$core$MutableString$append$panda$core$Object(result7, ((panda$core$Object*) self->rawValue));
    }
    }
    }
    panda$core$String* $tmp24 = panda$core$MutableString$finish$R$panda$core$String(result7);
    return $tmp24;
}

