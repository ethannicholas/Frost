#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


org$pandalanguage$pandac$FieldDecl$class_type org$pandalanguage$pandac$FieldDecl$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };


static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x72\x6F\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x3D\x20", 4, 137627884, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x3D\x20", 4, 137627884, NULL };

void org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$FieldDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, panda$core$Int64 p_fieldKind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_value) {
    self->resolved = ((panda$core$Bit) { false });
    self->owner = p_owner;
    self->doccomment = p_doccomment;
    self->annotations = p_annotations;
    self->fieldKind = p_fieldKind;
    self->type = p_type;
    self->rawValue = p_value;
    self->value = NULL;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 202 }), p_position, p_name);
}
panda$core$String* org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(org$pandalanguage$pandac$FieldDecl* self) {
    panda$core$MutableString* result1;
    panda$core$Char8 $tmp9;
    panda$core$MutableString* $tmp2 = (panda$core$MutableString*) malloc(48);
    $tmp2->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2->refCount.value = 1;
    panda$core$String* $tmp4 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(self->annotations);
    panda$core$MutableString$init$panda$core$String($tmp2, $tmp4);
    result1 = $tmp2;
    switch (self->fieldKind.value) {
        case 10000:
        {
            panda$core$MutableString$append$panda$core$String(result1, &$s5);
        }
        break;
        case 10001:
        {
            panda$core$MutableString$append$panda$core$String(result1, &$s6);
        }
        break;
        case 10002:
        {
            panda$core$MutableString$append$panda$core$String(result1, &$s7);
        }
        break;
        case 10003:
        {
            panda$core$MutableString$append$panda$core$String(result1, &$s8);
        }
        break;
    }
    panda$core$MutableString$append$panda$core$String(result1, self->name);
    panda$core$Char8$init$panda$core$UInt8(&$tmp9, ((panda$core$UInt8) { 58 }));
    panda$core$MutableString$append$panda$core$Char8(result1, $tmp9);
    panda$core$MutableString$append$panda$core$Object(result1, ((panda$core$Object*) self->type));
    if (((panda$core$Bit) { self->value != NULL }).value) {
    {
        panda$core$MutableString$append$panda$core$String(result1, &$s10);
        panda$core$MutableString$append$panda$core$Object(result1, ((panda$core$Object*) self->value));
    }
    }
    else {
    if (((panda$core$Bit) { self->rawValue != NULL }).value) {
    {
        panda$core$MutableString$append$panda$core$String(result1, &$s11);
        panda$core$MutableString$append$panda$core$Object(result1, ((panda$core$Object*) self->rawValue));
    }
    }
    }
    panda$core$String* $tmp12 = panda$core$MutableString$finish$R$panda$core$String(result1);
    return $tmp12;
}

