#include "org/pandalanguage/pandac/LLVMCodeGenerator/ClassConstant.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class_type org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4c\x4c\x56\x4d\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x43\x6c\x61\x73\x73\x43\x6f\x6e\x73\x74\x61\x6e\x74", 56, -7987549936725058791, NULL };

void org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* self, panda$core$String* p_name, panda$core$String* p_type) {
    self->name = NULL;
    self->type = NULL;
    {
        self->name = p_name;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->name));
    }
    {
        self->type = p_type;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->type));
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* self) {
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->name));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->type));
}

