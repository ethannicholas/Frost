#include "org/pandalanguage/pandac/Compiler/AutoAtPreFlag.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$AutoAtPreFlag$class_type org$pandalanguage$pandac$Compiler$AutoAtPreFlag$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$AutoAtPreFlag$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x41\x74\x50\x72\x65\x46\x6c\x61\x67", 47, -8242666560216288626, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x70\x61\x6e\x64\x61", 14, -3408958965109419534, NULL };

void org$pandalanguage$pandac$Compiler$AutoAtPreFlag$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Compiler$AutoAtPreFlag* param0, org$pandalanguage$pandac$Compiler* param1) {

// line 241
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Compiler** $tmp2 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 242
panda$core$Bit $tmp5 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp6 = &param1->inAtPre;
*$tmp6 = $tmp5;
return;

}
void org$pandalanguage$pandac$Compiler$AutoAtPreFlag$cleanup(org$pandalanguage$pandac$Compiler$AutoAtPreFlag* param0) {

// line 247
org$pandalanguage$pandac$Compiler** $tmp7 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp8 = *$tmp7;
panda$core$Bit* $tmp9 = &$tmp8->inAtPre;
panda$core$Bit $tmp10 = *$tmp9;
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp12 = (panda$core$Int64) {247};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s13, $tmp12);
abort(); // unreachable
block1:;
// line 248
org$pandalanguage$pandac$Compiler** $tmp14 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp15 = *$tmp14;
panda$core$Bit $tmp16 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp17 = &$tmp15->inAtPre;
*$tmp17 = $tmp16;
// line 246
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$Compiler** $tmp18 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp19 = *$tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
return;

}

