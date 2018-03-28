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
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };

void org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$FieldDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$FieldDecl$Kind p_fieldKind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_value) {
    self->name = NULL;
    self->owner = NULL;
    self->doccomment = NULL;
    self->annotations = NULL;
    self->type = NULL;
    self->rawValue = NULL;
    self->value = NULL;
    self->resolved = ((panda$core$Bit) { false });
    {
        self->owner = p_owner;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    }
    {
        self->doccomment = p_doccomment;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    }
    {
        self->annotations = p_annotations;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->annotations));
    }
    self->fieldKind = p_fieldKind;
    {
        self->type = p_type;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->type));
    }
    {
        self->rawValue = p_value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->rawValue));
    }
    {
        self->value = NULL;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 202 }), p_position, p_name);
}
panda$core$String* org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(org$pandalanguage$pandac$FieldDecl* self) {
    panda$core$MutableString* result2;
    org$pandalanguage$pandac$FieldDecl$Kind $match$43_95;
    panda$core$Char8 $tmp14;
    panda$core$String* tmp117;
    panda$core$MutableString* $tmp3 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$String* $tmp4 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
    panda$core$MutableString$init$panda$core$String($tmp3, $tmp4);
    result2 = $tmp3;
    {
        $match$43_95 = self->fieldKind;
        panda$core$Bit $tmp6 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$43_95.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp6.value) {
        {
            panda$core$MutableString$append$panda$core$String(result2, &$s7);
        }
        }
        else {
        panda$core$Bit $tmp8 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$43_95.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp8.value) {
        {
            panda$core$MutableString$append$panda$core$String(result2, &$s9);
        }
        }
        else {
        panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$43_95.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp10.value) {
        {
            panda$core$MutableString$append$panda$core$String(result2, &$s11);
        }
        }
        else {
        panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$43_95.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp12.value) {
        {
            panda$core$MutableString$append$panda$core$String(result2, &$s13);
        }
        }
        }
        }
        }
    }
    panda$core$MutableString$append$panda$core$String(result2, self->name);
    panda$core$Char8$init$panda$core$UInt8(&$tmp14, ((panda$core$UInt8) { 58 }));
    panda$core$MutableString$append$panda$core$Char8(result2, $tmp14);
    panda$core$MutableString$append$panda$core$Object(result2, ((panda$core$Object*) self->type));
    if (((panda$core$Bit) { self->value != NULL }).value) {
    {
        panda$core$MutableString$append$panda$core$String(result2, &$s15);
        panda$core$MutableString$append$panda$core$Object(result2, ((panda$core$Object*) self->value));
    }
    }
    else {
    if (((panda$core$Bit) { self->rawValue != NULL }).value) {
    {
        panda$core$MutableString$append$panda$core$String(result2, &$s16);
        panda$core$MutableString$append$panda$core$Object(result2, ((panda$core$Object*) self->rawValue));
    }
    }
    }
    {
        panda$core$String* $tmp18 = panda$core$MutableString$finish$R$panda$core$String(result2);
        tmp117 = $tmp18;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2));
        return tmp117;
    }
}
void org$pandalanguage$pandac$FieldDecl$cleanup(org$pandalanguage$pandac$FieldDecl* self) {
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->annotations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->type));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->rawValue));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
}

