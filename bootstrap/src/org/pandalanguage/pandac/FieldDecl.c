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
#include "panda/core/Int64.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$FieldDecl$class_type org$pandalanguage$pandac$FieldDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String, org$pandalanguage$pandac$FieldDecl$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x65\x6c\x64\x44\x65\x63\x6c", 34, -1957968300131265962, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };

void org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$FieldDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$FieldDecl$Kind p_fieldKind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_value) {
    self->resolved = ((panda$core$Bit) { false });
    {
        self->owner = p_owner;
    }
    {
        self->doccomment = p_doccomment;
    }
    {
        self->annotations = p_annotations;
    }
    self->fieldKind = p_fieldKind;
    {
        self->type = p_type;
    }
    {
        self->rawValue = p_value;
    }
    {
        self->value = NULL;
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 202 }), p_position, p_name);
}
panda$core$String* org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(org$pandalanguage$pandac$FieldDecl* self) {
    panda$core$MutableString* result2;
    org$pandalanguage$pandac$FieldDecl$Kind $match$43_96;
    panda$core$Char8 $tmp15;
    panda$core$String* tmp118;
    panda$core$MutableString* $tmp3 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp3->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp3->refCount.value = 1;
    panda$core$String* $tmp5 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
    panda$core$MutableString$init$panda$core$String($tmp3, $tmp5);
    result2 = $tmp3;
    {
        $match$43_96 = self->fieldKind;
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$43_96.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp7.value) {
        {
            panda$core$MutableString$append$panda$core$String(result2, &$s8);
        }
        }
        else {
        panda$core$Bit $tmp9 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$43_96.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp9.value) {
        {
            panda$core$MutableString$append$panda$core$String(result2, &$s10);
        }
        }
        else {
        panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$43_96.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp11.value) {
        {
            panda$core$MutableString$append$panda$core$String(result2, &$s12);
        }
        }
        else {
        panda$core$Bit $tmp13 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$43_96.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp13.value) {
        {
            panda$core$MutableString$append$panda$core$String(result2, &$s14);
        }
        }
        }
        }
        }
    }
    panda$core$MutableString$append$panda$core$String(result2, self->name);
    panda$core$Char8$init$panda$core$UInt8(&$tmp15, ((panda$core$UInt8) { 58 }));
    panda$core$MutableString$append$panda$core$Char8(result2, $tmp15);
    panda$core$MutableString$append$panda$core$Object(result2, ((panda$core$Object*) self->type));
    if (((panda$core$Bit) { self->value != NULL }).value) {
    {
        panda$core$MutableString$append$panda$core$String(result2, &$s16);
        panda$core$MutableString$append$panda$core$Object(result2, ((panda$core$Object*) self->value));
    }
    }
    else {
    if (((panda$core$Bit) { self->rawValue != NULL }).value) {
    {
        panda$core$MutableString$append$panda$core$String(result2, &$s17);
        panda$core$MutableString$append$panda$core$Object(result2, ((panda$core$Object*) self->rawValue));
    }
    }
    }
    {
        panda$core$String* $tmp19 = panda$core$MutableString$finish$R$panda$core$String(result2);
        tmp118 = $tmp19;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2));
        return tmp118;
    }
}
void org$pandalanguage$pandac$FieldDecl$cleanup(org$pandalanguage$pandac$FieldDecl* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->annotations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->type));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->rawValue));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
}

