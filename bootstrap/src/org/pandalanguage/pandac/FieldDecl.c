#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/core/Weak.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/core/MutableString.h"
#include "panda/core/Bit.h"


static panda$core$String $s1;
org$pandalanguage$pandac$FieldDecl$class_type org$pandalanguage$pandac$FieldDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String, org$pandalanguage$pandac$FieldDecl$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x65\x6c\x64\x44\x65\x63\x6c", 34, -1957968300131265962, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };

void org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$FieldDecl* param0, org$pandalanguage$pandac$ClassDecl* param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$Annotations* param4, org$pandalanguage$pandac$FieldDecl$Kind param5, panda$core$String* param6, org$pandalanguage$pandac$Type* param7, org$pandalanguage$pandac$ASTNode* param8) {

// line 25
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$Resolution $tmp3 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp2);
org$pandalanguage$pandac$Compiler$Resolution* $tmp4 = &param0->resolved;
*$tmp4 = $tmp3;
// line 29
panda$core$Weak* $tmp5 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp5, ((panda$core$Object*) param1));
panda$core$Weak** $tmp6 = &param0->owner;
panda$core$Weak* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$core$Weak** $tmp8 = &param0->owner;
*$tmp8 = $tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
// line 30
panda$core$String** $tmp9 = &param0->doccomment;
panda$core$String* $tmp10 = *$tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp11 = &param0->doccomment;
*$tmp11 = param3;
// line 31
org$pandalanguage$pandac$Annotations** $tmp12 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp13 = *$tmp12;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$Annotations** $tmp14 = &param0->annotations;
*$tmp14 = param4;
// line 32
org$pandalanguage$pandac$FieldDecl$Kind* $tmp15 = &param0->fieldKind;
*$tmp15 = param5;
// line 33
org$pandalanguage$pandac$Type** $tmp16 = &param0->type;
org$pandalanguage$pandac$Type* $tmp17 = *$tmp16;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
org$pandalanguage$pandac$Type** $tmp18 = &param0->type;
*$tmp18 = param7;
// line 34
org$pandalanguage$pandac$ASTNode** $tmp19 = &param0->rawValue;
org$pandalanguage$pandac$ASTNode* $tmp20 = *$tmp19;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
org$pandalanguage$pandac$ASTNode** $tmp21 = &param0->rawValue;
*$tmp21 = param8;
// line 35
panda$core$Int64 $tmp22 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Symbol$Kind $tmp23 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp22);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp23, param2, param6);
return;

}
panda$core$String* org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(org$pandalanguage$pandac$FieldDecl* param0) {

panda$core$MutableString* local0 = NULL;
// line 40
panda$core$MutableString* $tmp24 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Annotations** $tmp25 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp26 = *$tmp25;
panda$core$String* $tmp27 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String($tmp26);
panda$core$MutableString$init$panda$core$String($tmp24, $tmp27);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp28 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
*(&local0) = $tmp24;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// line 41
org$pandalanguage$pandac$FieldDecl$Kind* $tmp29 = &param0->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp30 = *$tmp29;
panda$core$Int64 $tmp31 = $tmp30.$rawValue;
panda$core$Int64 $tmp32 = (panda$core$Int64) {0};
panda$core$Bit $tmp33 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp31, $tmp32);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block2; else goto block3;
block2:;
// line 42
panda$core$MutableString* $tmp35 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp35, &$s36);
goto block1;
block3:;
panda$core$Int64 $tmp37 = (panda$core$Int64) {1};
panda$core$Bit $tmp38 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp31, $tmp37);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block4; else goto block5;
block4:;
// line 43
panda$core$MutableString* $tmp40 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp40, &$s41);
goto block1;
block5:;
panda$core$Int64 $tmp42 = (panda$core$Int64) {2};
panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp31, $tmp42);
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block6; else goto block7;
block6:;
// line 44
panda$core$MutableString* $tmp45 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp45, &$s46);
goto block1;
block7:;
panda$core$Int64 $tmp47 = (panda$core$Int64) {3};
panda$core$Bit $tmp48 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp31, $tmp47);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block8; else goto block1;
block8:;
// line 45
panda$core$MutableString* $tmp50 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp50, &$s51);
goto block1;
block1:;
// line 47
panda$core$MutableString* $tmp52 = *(&local0);
panda$core$String** $tmp53 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp54 = *$tmp53;
panda$core$MutableString$append$panda$core$String($tmp52, $tmp54);
// line 48
panda$core$MutableString* $tmp55 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp55, &$s56);
// line 49
panda$core$MutableString* $tmp57 = *(&local0);
org$pandalanguage$pandac$Type** $tmp58 = &param0->type;
org$pandalanguage$pandac$Type* $tmp59 = *$tmp58;
panda$core$MutableString$append$panda$core$Object($tmp57, ((panda$core$Object*) $tmp59));
// line 50
org$pandalanguage$pandac$ASTNode** $tmp60 = &param0->rawValue;
org$pandalanguage$pandac$ASTNode* $tmp61 = *$tmp60;
panda$core$Bit $tmp62 = panda$core$Bit$init$builtin_bit($tmp61 != NULL);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block9; else goto block10;
block9:;
// line 51
panda$core$MutableString* $tmp64 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp64, &$s65);
// line 52
panda$core$MutableString* $tmp66 = *(&local0);
org$pandalanguage$pandac$ASTNode** $tmp67 = &param0->rawValue;
org$pandalanguage$pandac$ASTNode* $tmp68 = *$tmp67;
panda$core$MutableString$append$panda$core$Object($tmp66, ((panda$core$Object*) $tmp68));
goto block10;
block10:;
// line 54
panda$core$MutableString* $tmp69 = *(&local0);
panda$core$String* $tmp70 = panda$core$MutableString$finish$R$panda$core$String($tmp69);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
panda$core$MutableString* $tmp71 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp70;

}
void org$pandalanguage$pandac$FieldDecl$cleanup(org$pandalanguage$pandac$FieldDecl* param0) {

panda$core$Weak** $tmp72 = &param0->owner;
panda$core$Weak* $tmp73 = *$tmp72;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
panda$core$String** $tmp74 = &param0->doccomment;
panda$core$String* $tmp75 = *$tmp74;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
org$pandalanguage$pandac$Annotations** $tmp76 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp77 = *$tmp76;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
org$pandalanguage$pandac$Type** $tmp78 = &param0->type;
org$pandalanguage$pandac$Type* $tmp79 = *$tmp78;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
org$pandalanguage$pandac$ASTNode** $tmp80 = &param0->rawValue;
org$pandalanguage$pandac$ASTNode* $tmp81 = *$tmp80;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
return;

}

