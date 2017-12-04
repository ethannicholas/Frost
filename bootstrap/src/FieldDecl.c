#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"


org$pandalanguage$pandac$FieldDecl$class_type org$pandalanguage$pandac$FieldDecl$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };

org$pandalanguage$pandac$FieldDecl$Kind$class_type org$pandalanguage$pandac$FieldDecl$Kind$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };



void org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$FieldDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, panda$core$Int64 p_offset, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, panda$core$Int64 p_fieldKind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_value) {
    self->resolved = ((panda$core$Bit) { false });
    self->owner = p_owner;
    self->doccomment = p_doccomment;
    self->annotations = p_annotations;
    self->fieldKind = p_fieldKind;
    self->type = p_type;
    self->rawValue = p_value;
    self->value = NULL;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$panda$core$Int64$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 202 }), p_offset, p_name);
}
void org$pandalanguage$pandac$FieldDecl$Kind$init(org$pandalanguage$pandac$FieldDecl$Kind* self) {
}

