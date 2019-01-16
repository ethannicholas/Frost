#include "org/pandalanguage/pandac/expression/ArrayLiteral.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/UInt64.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/expression/Call.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"


static panda$core$String $s1;
org$pandalanguage$pandac$expression$ArrayLiteral$class_type org$pandalanguage$pandac$expression$ArrayLiteral$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$expression$ArrayLiteral$cleanup} };

typedef panda$core$Int64 (*$fn77)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn92)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn96)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn101)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c", 48, -2836358604444930128, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, 8706525965189849209, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x20\x74\x79\x70\x65\x20\x6f\x66\x20\x61\x72\x72\x61\x79\x20\x6c\x69\x74\x65\x72\x61\x6c", 38, 5390391589679961556, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, 8706525965189849209, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, 8706525965189849209, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 144, -8348905169137482924, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, 8706525965189849209, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x64\x64", 3, 2029998, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, 8706525965189849209, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 144, -8348905169137482924, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, 8706525965189849209, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 144, -8348905169137482924, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, 8706525965189849209, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x72\x6f\x6d", 4, 210325337, NULL };

org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$ArrayLiteral$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$FixedArray* param2, org$pandalanguage$pandac$Compiler$TypeContext* param3) {

org$pandalanguage$pandac$Pair* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
org$pandalanguage$pandac$Type* local3 = NULL;
org$pandalanguage$pandac$Type* local4 = NULL;
org$pandalanguage$pandac$IR$Value* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
// line 16
*(&local0) = ((org$pandalanguage$pandac$Pair*) NULL);
// line 17
panda$core$Int64* $tmp2 = &param3->$rawValue;
panda$core$Int64 $tmp3 = *$tmp2;
panda$core$Int64 $tmp4 = (panda$core$Int64) {3};
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Type** $tmp7 = (org$pandalanguage$pandac$Type**) (param3->$data + 0);
org$pandalanguage$pandac$Type* $tmp8 = *$tmp7;
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
org$pandalanguage$pandac$Type* $tmp9 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
*(&local1) = $tmp8;
// line 19
org$pandalanguage$pandac$Type* $tmp10 = *(&local1);
org$pandalanguage$pandac$Pair* $tmp11 = org$pandalanguage$pandac$Compiler$getListType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$Type$GT$Q(param0, $tmp10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
org$pandalanguage$pandac$Pair* $tmp12 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
*(&local0) = $tmp11;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
// unreffing REF($20:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.Type>?)
// line 20
org$pandalanguage$pandac$Pair* $tmp13 = *(&local0);
panda$core$Bit $tmp14 = panda$core$Bit$init$builtin_bit($tmp13 == NULL);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block4; else goto block5;
block4:;
// line 23
org$pandalanguage$pandac$ASTNode* $tmp16 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp17 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp16, $tmp17, param1, param2);
org$pandalanguage$pandac$Type* $tmp18 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type$Q(param0, $tmp16);
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
org$pandalanguage$pandac$Type* $tmp19 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
*(&local2) = $tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
// unreffing REF($40:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
// unreffing REF($37:org.pandalanguage.pandac.ASTNode)
// line 24
org$pandalanguage$pandac$Type* $tmp20 = *(&local2);
panda$core$Bit $tmp21 = panda$core$Bit$init$builtin_bit($tmp20 != NULL);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block6; else goto block7;
block6:;
// line 25
org$pandalanguage$pandac$Type* $tmp23 = *(&local2);
panda$core$Bit $tmp24 = panda$core$Bit$init$builtin_bit($tmp23 != NULL);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp26 = (panda$core$Int64) {25};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s27, $tmp26, &$s28);
abort(); // unreachable
block8:;
org$pandalanguage$pandac$Pair* $tmp29 = org$pandalanguage$pandac$Compiler$getListType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$Type$GT$Q(param0, $tmp23);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
org$pandalanguage$pandac$Pair* $tmp30 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
*(&local0) = $tmp29;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// unreffing REF($70:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.Type>?)
goto block7;
block7:;
// line 27
org$pandalanguage$pandac$Pair* $tmp31 = *(&local0);
panda$core$Bit $tmp32 = panda$core$Bit$init$builtin_bit($tmp31 == NULL);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block10; else goto block11;
block10:;
// line 28
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s34);
// line 29
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp35 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing preferred
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp36 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Pair* $tmp37 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
// unreffing listType
*(&local0) = ((org$pandalanguage$pandac$Pair*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block11:;
org$pandalanguage$pandac$Type* $tmp38 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
// unreffing preferred
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block5;
block5:;
org$pandalanguage$pandac$Type* $tmp39 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
// line 34
org$pandalanguage$pandac$ASTNode* $tmp40 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp41 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp40, $tmp41, param1, param2);
org$pandalanguage$pandac$Type* $tmp42 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type$Q(param0, $tmp40);
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
org$pandalanguage$pandac$Type* $tmp43 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
*(&local3) = $tmp42;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
// unreffing REF($124:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
// unreffing REF($121:org.pandalanguage.pandac.ASTNode)
// line 35
org$pandalanguage$pandac$Type* $tmp44 = *(&local3);
panda$core$Bit $tmp45 = panda$core$Bit$init$builtin_bit($tmp44 == NULL);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block12; else goto block13;
block12:;
// line 36
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp47 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing t
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Pair* $tmp48 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
// unreffing listType
*(&local0) = ((org$pandalanguage$pandac$Pair*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block13:;
// line 38
org$pandalanguage$pandac$Type* $tmp49 = *(&local3);
panda$core$Bit $tmp50 = panda$core$Bit$init$builtin_bit($tmp49 != NULL);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp52 = (panda$core$Int64) {38};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s53, $tmp52, &$s54);
abort(); // unreachable
block14:;
org$pandalanguage$pandac$Pair* $tmp55 = org$pandalanguage$pandac$Compiler$getListType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$Type$GT$Q(param0, $tmp49);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
org$pandalanguage$pandac$Pair* $tmp56 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
*(&local0) = $tmp55;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// unreffing REF($168:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.Type>?)
org$pandalanguage$pandac$Type* $tmp57 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
// unreffing t
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block1:;
// line 41
org$pandalanguage$pandac$Pair* $tmp58 = *(&local0);
panda$core$Bit $tmp59 = panda$core$Bit$init$builtin_bit($tmp58 != NULL);
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp61 = (panda$core$Int64) {41};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s62, $tmp61, &$s63);
abort(); // unreachable
block16:;
panda$core$Object** $tmp64 = &$tmp58->second;
panda$core$Object* $tmp65 = *$tmp64;
org$pandalanguage$pandac$Type* $tmp66 = org$pandalanguage$pandac$Type$ArrayOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp65));
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
org$pandalanguage$pandac$Type* $tmp67 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
*(&local4) = $tmp66;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// unreffing REF($197:org.pandalanguage.pandac.Type)
// line 42
org$pandalanguage$pandac$IR$Value* $tmp68 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp69 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type* $tmp70 = *(&local4);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp68, $tmp69, $tmp70);
panda$collections$Array* $tmp71 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp72 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp71, $tmp72);
org$pandalanguage$pandac$ASTNode* $tmp73 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp74 = (panda$core$Int64) {25};
ITable* $tmp75 = ((panda$collections$CollectionView*) param2)->$class->itable;
while ($tmp75->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[0];
panda$core$Int64 $tmp78 = $tmp76(((panda$collections$CollectionView*) param2));
panda$core$UInt64 $tmp79 = panda$core$Int64$convert$R$panda$core$UInt64($tmp78);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp73, $tmp74, param1, $tmp79);
panda$collections$Array$add$panda$collections$Array$T($tmp71, ((panda$core$Object*) $tmp73));
org$pandalanguage$pandac$Compiler$TypeContext* $tmp80 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp81 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp80, $tmp81);
org$pandalanguage$pandac$IR$Value* $tmp82 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp68, ((panda$collections$ListView*) $tmp71), $tmp80);
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
org$pandalanguage$pandac$IR$Value* $tmp83 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
*(&local5) = $tmp82;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
// unreffing REF($231:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
// unreffing REF($228:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing REF($218:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
// unreffing REF($213:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
// unreffing REF($209:org.pandalanguage.pandac.IR.Value)
// line 45
org$pandalanguage$pandac$IR$Value* $tmp84 = *(&local5);
panda$core$Bit $tmp85 = panda$core$Bit$init$builtin_bit($tmp84 == NULL);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block18; else goto block19;
block18:;
// line 46
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp87 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// unreffing result
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp88 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
// unreffing arrayType
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Pair* $tmp89 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
// unreffing listType
*(&local0) = ((org$pandalanguage$pandac$Pair*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block19:;
// line 48
ITable* $tmp90 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp90->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp90 = $tmp90->next;
}
$fn92 $tmp91 = $tmp90->methods[0];
panda$collections$Iterator* $tmp93 = $tmp91(((panda$collections$Iterable*) param2));
goto block20;
block20:;
ITable* $tmp94 = $tmp93->$class->itable;
while ($tmp94->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp94 = $tmp94->next;
}
$fn96 $tmp95 = $tmp94->methods[0];
panda$core$Bit $tmp97 = $tmp95($tmp93);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block22; else goto block21;
block21:;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp99 = $tmp93->$class->itable;
while ($tmp99->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp99 = $tmp99->next;
}
$fn101 $tmp100 = $tmp99->methods[1];
panda$core$Object* $tmp102 = $tmp100($tmp93);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp102)));
org$pandalanguage$pandac$ASTNode* $tmp103 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) $tmp102);
// line 49
org$pandalanguage$pandac$IR$Value* $tmp104 = *(&local5);
panda$core$Bit $tmp105 = panda$core$Bit$init$builtin_bit($tmp104 != NULL);
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block23; else goto block24;
block24:;
panda$core$Int64 $tmp107 = (panda$core$Int64) {49};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s108, $tmp107, &$s109);
abort(); // unreachable
block23:;
panda$collections$Array* $tmp110 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp111 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp110, $tmp111);
org$pandalanguage$pandac$ASTNode* $tmp112 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp110, ((panda$core$Object*) $tmp112));
org$pandalanguage$pandac$Compiler$TypeContext* $tmp113 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp114 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp113, $tmp114);
org$pandalanguage$pandac$IR$Value* $tmp115 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp104, &$s116, ((panda$collections$ListView*) $tmp110), $tmp113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
// unreffing REF($324:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
// unreffing REF($321:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
// unreffing REF($312:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q($tmp102);
// unreffing REF($294:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp117 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
// unreffing e
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block20;
block22:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
// unreffing REF($283:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 51
org$pandalanguage$pandac$Pair* $tmp118 = *(&local0);
panda$core$Bit $tmp119 = panda$core$Bit$init$builtin_bit($tmp118 != NULL);
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp121 = (panda$core$Int64) {51};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s122, $tmp121, &$s123);
abort(); // unreachable
block27:;
panda$core$Object** $tmp124 = &$tmp118->first;
panda$core$Object* $tmp125 = *$tmp124;
panda$core$Bit $tmp126 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) $tmp125)->value);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block25; else goto block26;
block25:;
// line 52
org$pandalanguage$pandac$IR$Value* $tmp128 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp129 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Pair* $tmp130 = *(&local0);
panda$core$Bit $tmp131 = panda$core$Bit$init$builtin_bit($tmp130 != NULL);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block29; else goto block30;
block30:;
panda$core$Int64 $tmp133 = (panda$core$Int64) {53};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s134, $tmp133, &$s135);
abort(); // unreachable
block29:;
panda$core$Object** $tmp136 = &$tmp130->second;
panda$core$Object* $tmp137 = *$tmp136;
org$pandalanguage$pandac$Type* $tmp138 = org$pandalanguage$pandac$Type$ImmutableArrayOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp137));
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp128, $tmp129, $tmp138);
panda$collections$Array* $tmp139 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp140 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp139, $tmp140);
org$pandalanguage$pandac$ASTNode* $tmp141 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp142 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp143 = *(&local5);
panda$core$Bit $tmp144 = panda$core$Bit$init$builtin_bit($tmp143 != NULL);
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp146 = (panda$core$Int64) {54};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s147, $tmp146, &$s148);
abort(); // unreachable
block31:;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp141, $tmp142, param1, $tmp143);
panda$collections$Array$add$panda$collections$Array$T($tmp139, ((panda$core$Object*) $tmp141));
org$pandalanguage$pandac$Compiler$TypeContext* $tmp149 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp150 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp149, $tmp150);
org$pandalanguage$pandac$IR$Value* $tmp151 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp128, &$s152, ((panda$collections$ListView*) $tmp139), $tmp149);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
org$pandalanguage$pandac$IR$Value* $tmp153 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
*(&local5) = $tmp151;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
// unreffing REF($402:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
// unreffing REF($399:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
// unreffing REF($384:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
// unreffing REF($379:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
// unreffing REF($377:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing REF($363:org.pandalanguage.pandac.IR.Value)
// line 55
org$pandalanguage$pandac$IR$Value* $tmp154 = *(&local5);
panda$core$Bit $tmp155 = panda$core$Bit$init$builtin_bit($tmp154 == NULL);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block33; else goto block34;
block33:;
// line 56
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp157 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
// unreffing result
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp158 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
// unreffing arrayType
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Pair* $tmp159 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
// unreffing listType
*(&local0) = ((org$pandalanguage$pandac$Pair*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block34:;
goto block26;
block26:;
// line 59
org$pandalanguage$pandac$IR$Value* $tmp160 = *(&local5);
org$pandalanguage$pandac$IR$Value* $tmp161 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp160, param3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
// unreffing REF($455:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$IR$Value* $tmp162 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp162));
// unreffing result
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp163 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
// unreffing arrayType
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Pair* $tmp164 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
// unreffing listType
*(&local0) = ((org$pandalanguage$pandac$Pair*) NULL);
return $tmp161;

}
void org$pandalanguage$pandac$expression$ArrayLiteral$init(org$pandalanguage$pandac$expression$ArrayLiteral* param0) {

return;

}
void org$pandalanguage$pandac$expression$ArrayLiteral$cleanup(org$pandalanguage$pandac$expression$ArrayLiteral* param0) {

// line 12
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






