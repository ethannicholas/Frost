#include "org/pandalanguage/pandac/Compiler/AutoUnrefs.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Panda.h"
#include "panda/collections/Stack.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Compiler/EnclosingContext.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "panda/core/Bit.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$AutoUnrefs$class_type org$pandalanguage$pandac$Compiler$AutoUnrefs$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$AutoUnrefs$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x55\x6e\x72\x65\x66\x73", 44, 1524447707469423667, NULL };

void org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Compiler$AutoUnrefs* param0, org$pandalanguage$pandac$Compiler* param1) {

// line 176
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Compiler** $tmp2 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 177
panda$collections$Stack** $tmp5 = &param1->enclosingContexts;
panda$collections$Stack* $tmp6 = *$tmp5;
panda$core$Int64 $tmp7 = panda$collections$Stack$get_count$R$panda$core$Int64($tmp6);
panda$core$Int64* $tmp8 = &param0->depth;
*$tmp8 = $tmp7;
return;

}
void org$pandalanguage$pandac$Compiler$AutoUnrefs$cleanup(org$pandalanguage$pandac$Compiler$AutoUnrefs* param0) {

org$pandalanguage$pandac$Compiler$EnclosingContext* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
// line 182
goto block1;
block1:;
org$pandalanguage$pandac$Compiler** $tmp9 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp10 = *$tmp9;
panda$collections$Stack** $tmp11 = &$tmp10->enclosingContexts;
panda$collections$Stack* $tmp12 = *$tmp11;
panda$core$Int64 $tmp13 = panda$collections$Stack$get_count$R$panda$core$Int64($tmp12);
panda$core$Int64* $tmp14 = &param0->depth;
panda$core$Int64 $tmp15 = *$tmp14;
int64_t $tmp16 = $tmp13.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 > $tmp17;
panda$core$Bit $tmp19 = (panda$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block2; else goto block3;
block2:;
// line 183
org$pandalanguage$pandac$Compiler** $tmp21 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp22 = *$tmp21;
panda$collections$Stack** $tmp23 = &$tmp22->enclosingContexts;
panda$collections$Stack* $tmp24 = *$tmp23;
panda$core$Int64 $tmp25 = (panda$core$Int64) {0};
panda$core$Object* $tmp26 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp24, $tmp25);
*(&local0) = ((org$pandalanguage$pandac$Compiler$EnclosingContext*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$EnclosingContext*) $tmp26)));
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp27 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
*(&local0) = ((org$pandalanguage$pandac$Compiler$EnclosingContext*) $tmp26);
panda$core$Panda$unref$panda$core$Object$Q($tmp26);
// unreffing REF($23:panda.collections.Stack.T)
// line 184
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp28 = *(&local0);
panda$core$Int64* $tmp29 = &$tmp28->$rawValue;
panda$core$Int64 $tmp30 = *$tmp29;
panda$core$Int64 $tmp31 = (panda$core$Int64) {3};
panda$core$Bit $tmp32 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp30, $tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$IR$Value** $tmp34 = (org$pandalanguage$pandac$IR$Value**) ($tmp28->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp35 = *$tmp34;
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
org$pandalanguage$pandac$IR$Value* $tmp36 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
*(&local1) = $tmp35;
// line 186
org$pandalanguage$pandac$Compiler** $tmp37 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp38 = *$tmp37;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp39 = *(&local0);
org$pandalanguage$pandac$Compiler$leaveScope$org$pandalanguage$pandac$Compiler$EnclosingContext($tmp38, $tmp39);
// line 187
org$pandalanguage$pandac$Compiler** $tmp40 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp41 = *$tmp40;
panda$collections$Stack** $tmp42 = &$tmp41->enclosingContexts;
panda$collections$Stack* $tmp43 = *$tmp42;
panda$core$Object* $tmp44 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp43);
panda$core$Panda$unref$panda$core$Object$Q($tmp44);
// unreffing REF($63:panda.collections.Stack.T)
org$pandalanguage$pandac$IR$Value* $tmp45 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
// unreffing v
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block4;
block6:;
// line 190
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp46 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// unreffing scope
*(&local0) = ((org$pandalanguage$pandac$Compiler$EnclosingContext*) NULL);
goto block3;
block4:;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp47 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing scope
*(&local0) = ((org$pandalanguage$pandac$Compiler$EnclosingContext*) NULL);
goto block1;
block3:;
// line 181
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$Compiler** $tmp48 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp49 = *$tmp48;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
return;

}

