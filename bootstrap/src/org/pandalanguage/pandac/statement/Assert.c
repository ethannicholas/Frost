#include "org/pandalanguage/pandac/statement/Assert.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Compiler/AutoUnrefs.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/collections/Stack.h"
#include "panda/io/File.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/expression/Call.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/IR/Statement.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"


static panda$core$String $s1;
org$pandalanguage$pandac$statement$Assert$class_type org$pandalanguage$pandac$statement$Assert$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$statement$Assert$cleanup} };

typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn84)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn101)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn106)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn122)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn127)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef void (*$fn131)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x41\x73\x73\x65\x72\x74", 41, 5007477400884568119, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x73\x73\x65\x72\x74\x2e\x66\x72\x6f\x73\x74", 12, 2791100739566568043, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, 1112391861657830585, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x73\x73\x65\x72\x74\x2e\x66\x72\x6f\x73\x74", 12, 2791100739566568043, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x73\x73\x65\x72\x74\x2e\x66\x72\x6f\x73\x74", 12, 2791100739566568043, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, 1112391861657830585, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20\x73\x75\x63\x63\x65\x73\x73", 14, -7137946713078462448, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20\x66\x61\x69\x6c\x75\x72\x65", 14, -7137960722408632065, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x73\x73\x65\x72\x74\x2e\x66\x72\x6f\x73\x74", 12, 2791100739566568043, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };

void org$pandalanguage$pandac$statement$Assert$compileFail$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ASTNode* param2) {

org$pandalanguage$pandac$Compiler$AutoUnrefs* local0 = NULL;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ClassDecl* local2 = NULL;
org$pandalanguage$pandac$MethodDecl* local3 = NULL;
// line 1
// line 20
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp2 = (org$pandalanguage$pandac$Compiler$AutoUnrefs*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoUnrefs$class);
org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler($tmp2, param0);
*(&local0) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp3 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
*(&local0) = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($2:org.pandalanguage.pandac.Compiler.AutoUnrefs)
// line 21
panda$collections$Array* $tmp4 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$collections$Array* $tmp5 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
*(&local1) = $tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
// unreffing REF($15:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 22
panda$collections$Array* $tmp6 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp7 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp8 = (panda$core$Int64) {41};
panda$collections$Stack** $tmp9 = &param0->currentClass;
panda$collections$Stack* $tmp10 = *$tmp9;
panda$core$Int64 $tmp11 = (panda$core$Int64) {0};
panda$core$Object* $tmp12 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp10, $tmp11);
panda$io$File** $tmp13 = &((org$pandalanguage$pandac$ClassDecl*) $tmp12)->source;
panda$io$File* $tmp14 = *$tmp13;
panda$core$String* $tmp15 = panda$io$File$get_name$R$panda$core$String($tmp14);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp7, $tmp8, param1, $tmp15);
panda$collections$Array$add$panda$collections$Array$T($tmp6, ((panda$core$Object*) $tmp7));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
// unreffing REF($41:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp12);
// unreffing REF($37:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
// unreffing REF($31:org.pandalanguage.pandac.ASTNode)
// line 23
panda$collections$Array* $tmp16 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp17 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp18 = (panda$core$Int64) {25};
panda$core$Int64 $tmp19 = param1.line;
panda$core$UInt64 $tmp20 = panda$core$Int64$convert$R$panda$core$UInt64($tmp19);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp17, $tmp18, param1, $tmp20);
panda$collections$Array$add$panda$collections$Array$T($tmp16, ((panda$core$Object*) $tmp17));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
// unreffing REF($57:org.pandalanguage.pandac.ASTNode)
// line 24
org$pandalanguage$pandac$Type* $tmp21 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp22 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp21);
*(&local2) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
org$pandalanguage$pandac$ClassDecl* $tmp23 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
*(&local2) = $tmp22;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
// unreffing REF($69:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing REF($68:org.pandalanguage.pandac.Type)
// line 25
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
// line 26
panda$core$Bit $tmp24 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block3;
block1:;
// line 27
org$pandalanguage$pandac$ClassDecl* $tmp26 = *(&local2);
panda$core$Bit $tmp27 = panda$core$Bit$init$builtin_bit($tmp26 != NULL);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp29 = (panda$core$Int64) {27};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s30, $tmp29, &$s31);
abort(); // unreachable
block4:;
org$pandalanguage$pandac$SymbolTable* $tmp32 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp26);
org$pandalanguage$pandac$Symbol* $tmp33 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp32, &$s34);
org$pandalanguage$pandac$FixedArray** $tmp35 = &((org$pandalanguage$pandac$Methods*) $tmp33)->methods;
org$pandalanguage$pandac$FixedArray* $tmp36 = *$tmp35;
panda$core$Int64 $tmp37 = (panda$core$Int64) {0};
panda$core$Object* $tmp38 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp36, $tmp37);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp38)));
org$pandalanguage$pandac$MethodDecl* $tmp39 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) $tmp38);
panda$core$Panda$unref$panda$core$Object$Q($tmp38);
// unreffing REF($107:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// unreffing REF($101:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
// unreffing REF($100:org.pandalanguage.pandac.SymbolTable)
// line 28
panda$collections$Array* $tmp40 = *(&local1);
panda$core$Bit $tmp41 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp43 = (panda$core$Int64) {28};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s44, $tmp43, &$s45);
abort(); // unreachable
block6:;
panda$collections$Array$add$panda$collections$Array$T($tmp40, ((panda$core$Object*) param2));
goto block2;
block3:;
// line 1
// line 31
org$pandalanguage$pandac$ClassDecl* $tmp46 = *(&local2);
panda$core$Bit $tmp47 = panda$core$Bit$init$builtin_bit($tmp46 != NULL);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp49 = (panda$core$Int64) {31};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s50, $tmp49, &$s51);
abort(); // unreachable
block8:;
org$pandalanguage$pandac$SymbolTable* $tmp52 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp46);
org$pandalanguage$pandac$Symbol* $tmp53 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp52, &$s54);
org$pandalanguage$pandac$FixedArray** $tmp55 = &((org$pandalanguage$pandac$Methods*) $tmp53)->methods;
org$pandalanguage$pandac$FixedArray* $tmp56 = *$tmp55;
panda$core$Int64 $tmp57 = (panda$core$Int64) {1};
panda$core$Object* $tmp58 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp56, $tmp57);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp58)));
org$pandalanguage$pandac$MethodDecl* $tmp59 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) $tmp58);
panda$core$Panda$unref$panda$core$Object$Q($tmp58);
// unreffing REF($156:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
// unreffing REF($150:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
// unreffing REF($149:org.pandalanguage.pandac.SymbolTable)
goto block2;
block2:;
// line 33
org$pandalanguage$pandac$MethodDecl* $tmp60 = *(&local3);
panda$core$Bit $tmp61 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(param0, $tmp60);
panda$core$Bit $tmp62 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp61);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block10; else goto block11;
block10:;
// line 34
org$pandalanguage$pandac$MethodDecl* $tmp64 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp65 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing panda
*(&local2) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$Array* $tmp66 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// unreffing args
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp67 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing unrefs
*(&local0) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
return;
block11:;
// line 36
org$pandalanguage$pandac$MethodRef* $tmp68 = (org$pandalanguage$pandac$MethodRef*) frostObjectAlloc(41, (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class);
org$pandalanguage$pandac$Type* $tmp69 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$MethodDecl* $tmp70 = *(&local3);
org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl($tmp68, param0, $tmp69, $tmp70);
panda$collections$Array* $tmp71 = *(&local1);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp72 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp73 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp72, $tmp73);
org$pandalanguage$pandac$IR$Value* $tmp74 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, ((org$pandalanguage$pandac$IR$Value*) NULL), $tmp68, ((panda$collections$ListView*) $tmp71), $tmp72);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing REF($212:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing REF($209:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing REF($204:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
// unreffing REF($203:org.pandalanguage.pandac.MethodRef)
org$pandalanguage$pandac$MethodDecl* $tmp75 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp76 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
// unreffing panda
*(&local2) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$Array* $tmp77 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
// unreffing args
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp78 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
// unreffing unrefs
*(&local0) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
// line 39
org$pandalanguage$pandac$IR** $tmp79 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp80 = *$tmp79;
org$pandalanguage$pandac$IR$Statement* $tmp81 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp82 = (panda$core$Int64) {27};
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp81, $tmp82, param1);
$fn84 $tmp83 = ($fn84) $tmp80->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp85 = $tmp83($tmp80, $tmp81);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
// unreffing REF($248:org.pandalanguage.pandac.IR.Statement)
return;

}
void org$pandalanguage$pandac$statement$Assert$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ASTNode* param2, org$pandalanguage$pandac$ASTNode* param3) {

org$pandalanguage$pandac$IR* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
org$pandalanguage$pandac$IR$Block$ID local2;
org$pandalanguage$pandac$IR$Block$ID local3;
// line 44
org$pandalanguage$pandac$IR** $tmp86 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp87 = *$tmp86;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
org$pandalanguage$pandac$IR* $tmp88 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
*(&local0) = $tmp87;
// line 45
org$pandalanguage$pandac$Compiler$TypeContext* $tmp89 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp90 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp91 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp89, $tmp90, $tmp91);
org$pandalanguage$pandac$IR$Value* $tmp92 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param2, $tmp89);
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
org$pandalanguage$pandac$IR$Value* $tmp93 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
*(&local1) = $tmp92;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
// unreffing REF($15:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
// unreffing REF($13:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
// unreffing REF($11:org.pandalanguage.pandac.Compiler.TypeContext)
// line 46
org$pandalanguage$pandac$IR$Value* $tmp94 = *(&local1);
panda$core$Bit $tmp95 = panda$core$Bit$init$builtin_bit($tmp94 == NULL);
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block1; else goto block2;
block1:;
// line 47
org$pandalanguage$pandac$IR$Value* $tmp97 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
// unreffing compiledTest
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp98 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block2:;
// line 49
org$pandalanguage$pandac$IR* $tmp99 = *(&local0);
$fn101 $tmp100 = ($fn101) $tmp99->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp102 = $tmp100($tmp99, &$s103);
*(&local2) = $tmp102;
// line 50
org$pandalanguage$pandac$IR* $tmp104 = *(&local0);
$fn106 $tmp105 = ($fn106) $tmp104->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp107 = $tmp105($tmp104, &$s108);
*(&local3) = $tmp107;
// line 51
org$pandalanguage$pandac$IR* $tmp109 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp110 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp111 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp112 = *(&local1);
panda$core$Bit $tmp113 = panda$core$Bit$init$builtin_bit($tmp112 != NULL);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp115 = (panda$core$Int64) {52};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s116, $tmp115, &$s117);
abort(); // unreachable
block3:;
org$pandalanguage$pandac$IR$Value* $tmp118 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp112);
org$pandalanguage$pandac$IR$Block$ID $tmp119 = *(&local2);
org$pandalanguage$pandac$IR$Block$ID $tmp120 = *(&local3);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp110, $tmp111, param1, $tmp118, $tmp119, $tmp120);
$fn122 $tmp121 = ($fn122) $tmp109->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp123 = $tmp121($tmp109, $tmp110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
// unreffing REF($73:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
// unreffing REF($62:org.pandalanguage.pandac.IR.Statement)
// line 53
org$pandalanguage$pandac$IR* $tmp124 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp125 = *(&local3);
$fn127 $tmp126 = ($fn127) $tmp124->$class->vtable[4];
$tmp126($tmp124, $tmp125);
// line 54
org$pandalanguage$pandac$statement$Assert$compileFail$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(param0, param1, param3);
// line 55
org$pandalanguage$pandac$IR* $tmp128 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp129 = *(&local2);
$fn131 $tmp130 = ($fn131) $tmp128->$class->vtable[4];
$tmp130($tmp128, $tmp129);
org$pandalanguage$pandac$IR$Value* $tmp132 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
// unreffing compiledTest
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp133 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;

}
void org$pandalanguage$pandac$statement$Assert$init(org$pandalanguage$pandac$statement$Assert* param0) {

return;

}
void org$pandalanguage$pandac$statement$Assert$cleanup(org$pandalanguage$pandac$statement$Assert* param0) {

// line 16
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}

