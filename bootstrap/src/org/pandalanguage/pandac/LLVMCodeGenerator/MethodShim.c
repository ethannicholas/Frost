#include "org/pandalanguage/pandac/LLVMCodeGenerator/MethodShim.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class_type org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4c\x4c\x56\x4d\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4d\x65\x74\x68\x6f\x64\x53\x68\x69\x6d", 53, -3038721242691738273, NULL };

void org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$init$panda$core$String$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* self, panda$core$String* p_name, panda$core$String* p_type) {
    {
        self->name = p_name;
    }
    {
        self->type = p_type;
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->name));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->type));
}

