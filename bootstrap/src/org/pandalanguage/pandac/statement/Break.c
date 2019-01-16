#include "org/pandalanguage/pandac/statement/Break.h"
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
org$pandalanguage$pandac$statement$Break$class_type org$pandalanguage$pandac$statement$Break$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$statement$Break$cleanup} };

typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn30)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x42\x72\x65\x61\x6b", 40, 6442015049416935138, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x72\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 11, -2897467709932721922, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x27", 139, -5609019082156152981, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x72\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 11, -2897467709932721922, NULL };

void org$pandalanguage$pandac$statement$Break$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2) {

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
panda$core$Bit $tmp8 = panda$core$Bit$init$builtin_bit($tmp7 != NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp10 = (panda$core$Int64) {13};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s11, $tmp10, &$s12);
abort(); // unreachable
block3:;
panda$core$Int64* $tmp13 = &$tmp7->$rawValue;
panda$core$Int64 $tmp14 = *$tmp13;
panda$core$Int64 $tmp15 = (panda$core$Int64) {0};
panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp14, $tmp15);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block6; else goto block7;
block6:;
panda$core$String** $tmp18 = (panda$core$String**) ($tmp7->$data + 0);
panda$core$String* $tmp19 = *$tmp18;
org$pandalanguage$pandac$IR$Block$ID* $tmp20 = (org$pandalanguage$pandac$IR$Block$ID*) ($tmp7->$data + 8);
org$pandalanguage$pandac$IR$Block$ID $tmp21 = *$tmp20;
*(&local1) = $tmp21;
org$pandalanguage$pandac$IR$Block$ID* $tmp22 = (org$pandalanguage$pandac$IR$Block$ID*) ($tmp7->$data + 16);
org$pandalanguage$pandac$IR$Block$ID $tmp23 = *$tmp22;
// line 15
org$pandalanguage$pandac$IR** $tmp24 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp25 = *$tmp24;
org$pandalanguage$pandac$IR$Statement* $tmp26 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp27 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp28 = *(&local1);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp26, $tmp27, param1, $tmp28);
$fn30 $tmp29 = ($fn30) $tmp25->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp31 = $tmp29($tmp25, $tmp26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
// unreffing REF($44:org.pandalanguage.pandac.IR.Statement)
goto block5;
block7:;
// line 18
panda$core$Bit $tmp32 = panda$core$Bit$init$builtin_bit(false);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp34 = (panda$core$Int64) {18};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s35, $tmp34);
abort(); // unreachable
block8:;
goto block5;
block5:;
goto block2;
block2:;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp36 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
// unreffing l
*(&local0) = ((org$pandalanguage$pandac$Compiler$EnclosingContext*) NULL);
return;

}
void org$pandalanguage$pandac$statement$Break$init(org$pandalanguage$pandac$statement$Break* param0) {

return;

}
void org$pandalanguage$pandac$statement$Break$cleanup(org$pandalanguage$pandac$statement$Break* param0) {

// line 8
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






