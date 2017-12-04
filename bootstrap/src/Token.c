#include "org/pandalanguage/pandac/parser/Token.h"
#include "panda/core/Int64.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
org$pandalanguage$pandac$parser$Token$wrapper* wrap_org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Token self) {
    org$pandalanguage$pandac$parser$Token$wrapper* result = (org$pandalanguage$pandac$parser$Token$wrapper*) malloc(40);
    result->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass;
    result->value = self;
    return result;
}


org$pandalanguage$pandac$parser$Token$class_type org$pandalanguage$pandac$parser$Token$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$parser$Token$wrapperclass_type org$pandalanguage$pandac$parser$Token$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };org$pandalanguage$pandac$parser$Token$Kind$class_type org$pandalanguage$pandac$parser$Token$Kind$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };



void org$pandalanguage$pandac$parser$Token$init$panda$core$Int64$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$parser$Token* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$Int64 p_length) {
    self->kind = p_kind;
    self->offset = p_offset;
    self->length = p_length;
}
void org$pandalanguage$pandac$parser$Token$Kind$init(org$pandalanguage$pandac$parser$Token$Kind* self) {
}

