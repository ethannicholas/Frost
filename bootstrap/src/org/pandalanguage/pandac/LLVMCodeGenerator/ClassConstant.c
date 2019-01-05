#include "org/pandalanguage/pandac/LLVMCodeGenerator/ClassConstant.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"

__attribute__((weak)) void org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$cleanup$shim(org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* p0) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$cleanup(p0);

}

static panda$core$String $s1;
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class_type org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$cleanup$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4c\x4c\x56\x4d\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x43\x6c\x61\x73\x73\x43\x6f\x6e\x73\x74\x61\x6e\x74", 56, -7987549936725058791, NULL };

void org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* param0, panda$core$String* param1, panda$core$String* param2) {

// line 15
panda$core$String** $tmp2 = &param0->name;
panda$core$String* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String** $tmp4 = &param0->name;
*$tmp4 = param1;
// line 16
panda$core$String** $tmp5 = &param0->type;
panda$core$String* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp7 = &param0->type;
*$tmp7 = param2;
return;

}
void org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* param0) {

// line 10
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
panda$core$String** $tmp8 = &param0->name;
panda$core$String* $tmp9 = *$tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$core$String** $tmp10 = &param0->type;
panda$core$String* $tmp11 = *$tmp10;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
return;

}

