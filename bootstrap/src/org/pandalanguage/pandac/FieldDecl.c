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
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };

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
bool $tmp8 = $tmp7 != ((panda$core$Weak*) NULL);
if ($tmp8) goto block1; else goto block2;
block1:;
panda$core$Object* $tmp9 = panda$core$Weak$get$R$panda$core$Weak$T($tmp7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp9)));
panda$core$Panda$unref$panda$core$Object$Q($tmp9);
goto block2;
block2:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$core$Weak** $tmp10 = &param0->owner;
*$tmp10 = $tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
// line 30
panda$core$String** $tmp11 = &param0->doccomment;
panda$core$String* $tmp12 = *$tmp11;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp13 = &param0->doccomment;
*$tmp13 = param3;
// line 31
org$pandalanguage$pandac$Annotations** $tmp14 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp15 = *$tmp14;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$Annotations** $tmp16 = &param0->annotations;
*$tmp16 = param4;
// line 32
org$pandalanguage$pandac$FieldDecl$Kind* $tmp17 = &param0->fieldKind;
*$tmp17 = param5;
// line 33
org$pandalanguage$pandac$Type** $tmp18 = &param0->type;
org$pandalanguage$pandac$Type* $tmp19 = *$tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
org$pandalanguage$pandac$Type** $tmp20 = &param0->type;
*$tmp20 = param7;
// line 34
org$pandalanguage$pandac$ASTNode** $tmp21 = &param0->rawValue;
org$pandalanguage$pandac$ASTNode* $tmp22 = *$tmp21;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
org$pandalanguage$pandac$ASTNode** $tmp23 = &param0->rawValue;
*$tmp23 = param8;
// line 35
panda$core$Int64 $tmp24 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Symbol$Kind $tmp25 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp24);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp25, param2, param6);
return;

}
panda$core$String* org$pandalanguage$pandac$FieldDecl$convert$R$panda$core$String(org$pandalanguage$pandac$FieldDecl* param0) {

panda$core$MutableString* local0 = NULL;
// line 40
panda$core$MutableString* $tmp26 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Annotations** $tmp27 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp28 = *$tmp27;
panda$core$String* $tmp29 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String($tmp28);
panda$core$MutableString$init$panda$core$String($tmp26, $tmp29);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp30 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
*(&local0) = $tmp26;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// line 41
org$pandalanguage$pandac$FieldDecl$Kind* $tmp31 = &param0->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp32 = *$tmp31;
panda$core$Int64 $tmp33 = $tmp32.$rawValue;
panda$core$Int64 $tmp34 = (panda$core$Int64) {0};
panda$core$Bit $tmp35 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp33, $tmp34);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block2; else goto block3;
block2:;
// line 42
panda$core$MutableString* $tmp37 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp37, &$s38);
goto block1;
block3:;
panda$core$Int64 $tmp39 = (panda$core$Int64) {1};
panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp33, $tmp39);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block4; else goto block5;
block4:;
// line 43
panda$core$MutableString* $tmp42 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp42, &$s43);
goto block1;
block5:;
panda$core$Int64 $tmp44 = (panda$core$Int64) {2};
panda$core$Bit $tmp45 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp33, $tmp44);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block6; else goto block7;
block6:;
// line 44
panda$core$MutableString* $tmp47 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp47, &$s48);
goto block1;
block7:;
panda$core$Int64 $tmp49 = (panda$core$Int64) {3};
panda$core$Bit $tmp50 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp33, $tmp49);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block8; else goto block1;
block8:;
// line 45
panda$core$MutableString* $tmp52 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp52, &$s53);
goto block1;
block1:;
// line 47
panda$core$MutableString* $tmp54 = *(&local0);
panda$core$String** $tmp55 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp56 = *$tmp55;
panda$core$MutableString$append$panda$core$String($tmp54, $tmp56);
// line 48
panda$core$MutableString* $tmp57 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp57, &$s58);
// line 49
panda$core$MutableString* $tmp59 = *(&local0);
org$pandalanguage$pandac$Type** $tmp60 = &param0->type;
org$pandalanguage$pandac$Type* $tmp61 = *$tmp60;
panda$core$MutableString$append$panda$core$Object($tmp59, ((panda$core$Object*) $tmp61));
// line 50
org$pandalanguage$pandac$ASTNode** $tmp62 = &param0->rawValue;
org$pandalanguage$pandac$ASTNode* $tmp63 = *$tmp62;
panda$core$Bit $tmp64 = panda$core$Bit$init$builtin_bit($tmp63 != NULL);
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block9; else goto block10;
block9:;
// line 51
panda$core$MutableString* $tmp66 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp66, &$s67);
// line 52
panda$core$MutableString* $tmp68 = *(&local0);
org$pandalanguage$pandac$ASTNode** $tmp69 = &param0->rawValue;
org$pandalanguage$pandac$ASTNode* $tmp70 = *$tmp69;
panda$core$MutableString$append$panda$core$Object($tmp68, ((panda$core$Object*) $tmp70));
goto block10;
block10:;
// line 54
panda$core$MutableString* $tmp71 = *(&local0);
panda$core$String* $tmp72 = panda$core$MutableString$finish$R$panda$core$String($tmp71);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
panda$core$MutableString* $tmp73 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp72;

}
void org$pandalanguage$pandac$FieldDecl$cleanup(org$pandalanguage$pandac$FieldDecl* param0) {

panda$core$Weak** $tmp74 = &param0->owner;
panda$core$Weak* $tmp75 = *$tmp74;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
panda$core$String** $tmp76 = &param0->doccomment;
panda$core$String* $tmp77 = *$tmp76;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
org$pandalanguage$pandac$Annotations** $tmp78 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp79 = *$tmp78;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
org$pandalanguage$pandac$Type** $tmp80 = &param0->type;
org$pandalanguage$pandac$Type* $tmp81 = *$tmp80;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
org$pandalanguage$pandac$ASTNode** $tmp82 = &param0->rawValue;
org$pandalanguage$pandac$ASTNode* $tmp83 = *$tmp82;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
return;

}

