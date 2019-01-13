#include "org/pandalanguage/pandac/statements/Continue.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Compiler/EnclosingContext.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/IR/Statement.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"


static panda$core$String $s1;
org$pandalanguage$pandac$statements$Continue$class_type org$pandalanguage$pandac$statements$Continue$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$statements$Continue$cleanup} };

typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn25)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x73\x2e\x43\x6f\x6e\x74\x69\x6e\x75\x65", 44, 6610743955643529785, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x70\x61\x6e\x64\x61", 14, -7855305759856055888, NULL };

void org$pandalanguage$pandac$statements$Continue$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2) {

org$pandalanguage$pandac$Compiler$EnclosingContext* local0 = NULL;
org$pandalanguage$pandac$IR$Block$ID local1;
// line 11
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp2 = org$pandalanguage$pandac$Compiler$findAndLeaveToLoopScope$org$pandalanguage$pandac$Position$panda$core$String$Q$R$org$pandalanguage$pandac$Compiler$EnclosingContext$Q(param0, param1, param2);
*(&local0) = ((org$pandalanguage$pandac$Compiler$EnclosingContext*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp3 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
*(&local0) = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:org.pandalanguage.pandac.Compiler.EnclosingContext?)
// line 12
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp4 = *(&local0);
panda$core$Bit $tmp5 = panda$core$Bit$init$builtin_bit($tmp4 != NULL);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block1; else goto block2;
block1:;
// line 13
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp7 = *(&local0);
panda$core$Int64* $tmp8 = &$tmp7->$rawValue;
panda$core$Int64 $tmp9 = *$tmp8;
panda$core$Int64 $tmp10 = (panda$core$Int64) {0};
panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp9, $tmp10);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block4; else goto block5;
block4:;
panda$core$String** $tmp13 = (panda$core$String**) ($tmp7->$data + 0);
panda$core$String* $tmp14 = *$tmp13;
org$pandalanguage$pandac$IR$Block$ID* $tmp15 = (org$pandalanguage$pandac$IR$Block$ID*) ($tmp7->$data + 8);
org$pandalanguage$pandac$IR$Block$ID $tmp16 = *$tmp15;
org$pandalanguage$pandac$IR$Block$ID* $tmp17 = (org$pandalanguage$pandac$IR$Block$ID*) ($tmp7->$data + 16);
org$pandalanguage$pandac$IR$Block$ID $tmp18 = *$tmp17;
*(&local1) = $tmp18;
// line 15
org$pandalanguage$pandac$IR** $tmp19 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp20 = *$tmp19;
org$pandalanguage$pandac$IR$Statement* $tmp21 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp22 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp23 = *(&local1);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp21, $tmp22, param1, $tmp23);
$fn25 $tmp24 = ($fn25) $tmp20->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp26 = $tmp24($tmp20, $tmp21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing REF($37:org.pandalanguage.pandac.IR.Statement)
goto block3;
block5:;
// line 18
panda$core$Bit $tmp27 = panda$core$Bit$init$builtin_bit(false);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp29 = (panda$core$Int64) {18};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s30, $tmp29);
abort(); // unreachable
block6:;
goto block3;
block3:;
goto block2;
block2:;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp31 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
// unreffing l
*(&local0) = ((org$pandalanguage$pandac$Compiler$EnclosingContext*) NULL);
return;

}
void org$pandalanguage$pandac$statements$Continue$init(org$pandalanguage$pandac$statements$Continue* param0) {

return;

}
void org$pandalanguage$pandac$statements$Continue$cleanup(org$pandalanguage$pandac$statements$Continue* param0) {

// line 8
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






