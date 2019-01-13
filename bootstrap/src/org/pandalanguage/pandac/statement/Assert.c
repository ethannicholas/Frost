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

typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn69)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn86)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn91)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn102)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn107)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef void (*$fn111)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x41\x73\x73\x65\x72\x74", 41, 5007477400884568119, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, 1112391861657830585, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, 1112391861657830585, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20\x73\x75\x63\x63\x65\x73\x73", 14, -7137946713078462448, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20\x66\x61\x69\x6c\x75\x72\x65", 14, -7137960722408632065, NULL };

void org$pandalanguage$pandac$statement$Assert$compileFail$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ASTNode* param2) {

org$pandalanguage$pandac$Compiler$AutoUnrefs* local0 = NULL;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ClassDecl* local2 = NULL;
org$pandalanguage$pandac$MethodDecl* local3 = NULL;
// line 1
// line 20
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp2 = (org$pandalanguage$pandac$Compiler$AutoUnrefs*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoUnrefs$class);
org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler($tmp2, param0);
*(&local0) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp3 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
*(&local0) = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($2:org.pandalanguage.pandac.Compiler.AutoUnrefs)
// line 21
panda$collections$Array* $tmp4 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
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
org$pandalanguage$pandac$ASTNode* $tmp7 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
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
org$pandalanguage$pandac$ASTNode* $tmp17 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
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
org$pandalanguage$pandac$SymbolTable* $tmp27 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp26);
org$pandalanguage$pandac$Symbol* $tmp28 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp27, &$s29);
org$pandalanguage$pandac$FixedArray** $tmp30 = &((org$pandalanguage$pandac$Methods*) $tmp28)->methods;
org$pandalanguage$pandac$FixedArray* $tmp31 = *$tmp30;
panda$core$Int64 $tmp32 = (panda$core$Int64) {0};
panda$core$Object* $tmp33 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp31, $tmp32);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp33)));
org$pandalanguage$pandac$MethodDecl* $tmp34 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) $tmp33);
panda$core$Panda$unref$panda$core$Object$Q($tmp33);
// unreffing REF($100:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
// unreffing REF($94:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// unreffing REF($93:org.pandalanguage.pandac.SymbolTable)
// line 28
panda$collections$Array* $tmp35 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp35, ((panda$core$Object*) param2));
goto block2;
block3:;
// line 1
// line 31
org$pandalanguage$pandac$ClassDecl* $tmp36 = *(&local2);
org$pandalanguage$pandac$SymbolTable* $tmp37 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp36);
org$pandalanguage$pandac$Symbol* $tmp38 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp37, &$s39);
org$pandalanguage$pandac$FixedArray** $tmp40 = &((org$pandalanguage$pandac$Methods*) $tmp38)->methods;
org$pandalanguage$pandac$FixedArray* $tmp41 = *$tmp40;
panda$core$Int64 $tmp42 = (panda$core$Int64) {1};
panda$core$Object* $tmp43 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp41, $tmp42);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp43)));
org$pandalanguage$pandac$MethodDecl* $tmp44 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) $tmp43);
panda$core$Panda$unref$panda$core$Object$Q($tmp43);
// unreffing REF($135:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
// unreffing REF($129:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
// unreffing REF($128:org.pandalanguage.pandac.SymbolTable)
goto block2;
block2:;
// line 33
org$pandalanguage$pandac$MethodDecl* $tmp45 = *(&local3);
panda$core$Bit $tmp46 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(param0, $tmp45);
panda$core$Bit $tmp47 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp46);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block4; else goto block5;
block4:;
// line 34
org$pandalanguage$pandac$MethodDecl* $tmp49 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp50 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
// unreffing panda
*(&local2) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$Array* $tmp51 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing args
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp52 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
// unreffing unrefs
*(&local0) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
return;
block5:;
// line 36
org$pandalanguage$pandac$MethodRef* $tmp53 = (org$pandalanguage$pandac$MethodRef*) pandaObjectAlloc(41, (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class);
org$pandalanguage$pandac$Type* $tmp54 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$MethodDecl* $tmp55 = *(&local3);
org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl($tmp53, param0, $tmp54, $tmp55);
panda$collections$Array* $tmp56 = *(&local1);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp57 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp58 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp57, $tmp58);
org$pandalanguage$pandac$IR$Value* $tmp59 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, ((org$pandalanguage$pandac$IR$Value*) NULL), $tmp53, ((panda$collections$ListView*) $tmp56), $tmp57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// unreffing REF($191:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
// unreffing REF($188:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
// unreffing REF($183:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
// unreffing REF($182:org.pandalanguage.pandac.MethodRef)
org$pandalanguage$pandac$MethodDecl* $tmp60 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp61 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
// unreffing panda
*(&local2) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$Array* $tmp62 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// unreffing args
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp63 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
// unreffing unrefs
*(&local0) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
// line 39
org$pandalanguage$pandac$IR** $tmp64 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp65 = *$tmp64;
org$pandalanguage$pandac$IR$Statement* $tmp66 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp67 = (panda$core$Int64) {27};
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp66, $tmp67, param1);
$fn69 $tmp68 = ($fn69) $tmp65->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp70 = $tmp68($tmp65, $tmp66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// unreffing REF($227:org.pandalanguage.pandac.IR.Statement)
return;

}
void org$pandalanguage$pandac$statement$Assert$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ASTNode* param2, org$pandalanguage$pandac$ASTNode* param3) {

org$pandalanguage$pandac$IR* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
org$pandalanguage$pandac$IR$Block$ID local2;
org$pandalanguage$pandac$IR$Block$ID local3;
// line 44
org$pandalanguage$pandac$IR** $tmp71 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp72 = *$tmp71;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
org$pandalanguage$pandac$IR* $tmp73 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
*(&local0) = $tmp72;
// line 45
org$pandalanguage$pandac$Compiler$TypeContext* $tmp74 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp75 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp76 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp74, $tmp75, $tmp76);
org$pandalanguage$pandac$IR$Value* $tmp77 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param2, $tmp74);
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
org$pandalanguage$pandac$IR$Value* $tmp78 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
*(&local1) = $tmp77;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
// unreffing REF($15:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
// unreffing REF($13:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing REF($11:org.pandalanguage.pandac.Compiler.TypeContext)
// line 46
org$pandalanguage$pandac$IR$Value* $tmp79 = *(&local1);
panda$core$Bit $tmp80 = panda$core$Bit$init$builtin_bit($tmp79 == NULL);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block1; else goto block2;
block1:;
// line 47
org$pandalanguage$pandac$IR$Value* $tmp82 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
// unreffing compiledTest
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp83 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block2:;
// line 49
org$pandalanguage$pandac$IR* $tmp84 = *(&local0);
$fn86 $tmp85 = ($fn86) $tmp84->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp87 = $tmp85($tmp84, &$s88);
*(&local2) = $tmp87;
// line 50
org$pandalanguage$pandac$IR* $tmp89 = *(&local0);
$fn91 $tmp90 = ($fn91) $tmp89->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp92 = $tmp90($tmp89, &$s93);
*(&local3) = $tmp92;
// line 51
org$pandalanguage$pandac$IR* $tmp94 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp95 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp96 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp97 = *(&local1);
org$pandalanguage$pandac$IR$Value* $tmp98 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp97);
org$pandalanguage$pandac$IR$Block$ID $tmp99 = *(&local2);
org$pandalanguage$pandac$IR$Block$ID $tmp100 = *(&local3);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp95, $tmp96, param1, $tmp98, $tmp99, $tmp100);
$fn102 $tmp101 = ($fn102) $tmp94->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp103 = $tmp101($tmp94, $tmp95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
// unreffing REF($66:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
// unreffing REF($62:org.pandalanguage.pandac.IR.Statement)
// line 53
org$pandalanguage$pandac$IR* $tmp104 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp105 = *(&local3);
$fn107 $tmp106 = ($fn107) $tmp104->$class->vtable[4];
$tmp106($tmp104, $tmp105);
// line 54
org$pandalanguage$pandac$statement$Assert$compileFail$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(param0, param1, param3);
// line 55
org$pandalanguage$pandac$IR* $tmp108 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp109 = *(&local2);
$fn111 $tmp110 = ($fn111) $tmp108->$class->vtable[4];
$tmp110($tmp108, $tmp109);
org$pandalanguage$pandac$IR$Value* $tmp112 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing compiledTest
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp113 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
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

