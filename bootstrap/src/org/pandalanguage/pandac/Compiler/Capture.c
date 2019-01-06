#include "org/pandalanguage/pandac/Compiler/Capture.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$Capture$class_type org$pandalanguage$pandac$Compiler$Capture$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$Capture$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x43\x61\x70\x74\x75\x72\x65", 41, -4170124077930828853, NULL };

void org$pandalanguage$pandac$Compiler$Capture$cleanup(org$pandalanguage$pandac$Compiler$Capture* param0) {

org$pandalanguage$pandac$Variable* local0 = NULL;
org$pandalanguage$pandac$FieldDecl* local1 = NULL;
// line 259
panda$core$Int64* $tmp2 = &param0->$rawValue;
panda$core$Int64 $tmp3 = *$tmp2;
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Variable** $tmp7 = (org$pandalanguage$pandac$Variable**) (param0->$data + 0);
org$pandalanguage$pandac$Variable* $tmp8 = *$tmp7;
*(&local0) = ((org$pandalanguage$pandac$Variable*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
org$pandalanguage$pandac$Variable* $tmp9 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
*(&local0) = $tmp8;
// line 1
org$pandalanguage$pandac$Variable* $tmp10 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
org$pandalanguage$pandac$Variable* $tmp11 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
// unreffing _f0
*(&local0) = ((org$pandalanguage$pandac$Variable*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp12 = (panda$core$Int64) {1};
panda$core$Bit $tmp13 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp12);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$FieldDecl** $tmp15 = (org$pandalanguage$pandac$FieldDecl**) (param0->$data + 0);
org$pandalanguage$pandac$FieldDecl* $tmp16 = *$tmp15;
*(&local1) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
org$pandalanguage$pandac$FieldDecl* $tmp17 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
*(&local1) = $tmp16;
// line 1
org$pandalanguage$pandac$FieldDecl* $tmp18 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
org$pandalanguage$pandac$FieldDecl* $tmp19 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
// unreffing _f0
*(&local1) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block1;
block5:;
panda$core$Int64 $tmp20 = (panda$core$Int64) {2};
panda$core$Bit $tmp21 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp20);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block6; else goto block1;
block6:;
goto block1;
block1:;
// line 259
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}
void org$pandalanguage$pandac$Compiler$Capture$init$panda$core$Int64$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$Compiler$Capture* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Variable* param2) {

// line 259
panda$core$Int64* $tmp23 = &param0->$rawValue;
*$tmp23 = param1;
// line 259
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Variable** $tmp24 = (org$pandalanguage$pandac$Variable**) (param0->$data + 0);
*$tmp24 = param2;
return;

}
void org$pandalanguage$pandac$Compiler$Capture$init$panda$core$Int64$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler$Capture* param0, panda$core$Int64 param1, org$pandalanguage$pandac$FieldDecl* param2) {

// line 259
panda$core$Int64* $tmp25 = &param0->$rawValue;
*$tmp25 = param1;
// line 259
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$FieldDecl** $tmp26 = (org$pandalanguage$pandac$FieldDecl**) (param0->$data + 0);
*$tmp26 = param2;
return;

}
void org$pandalanguage$pandac$Compiler$Capture$init$panda$core$Int64(org$pandalanguage$pandac$Compiler$Capture* param0, panda$core$Int64 param1) {

// line 259
panda$core$Int64* $tmp27 = &param0->$rawValue;
*$tmp27 = param1;
return;

}

