#include "org/frostlanguage/frostc/statement/Assert.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "org/frostlanguage/frostc/Compiler/AutoUnrefs.h"
#include "frost/collections/Array.h"
#include "org/frostlanguage/frostc/ClassDecl.h"
#include "org/frostlanguage/frostc/MethodDecl.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/collections/Stack.h"
#include "frost/io/File.h"
#include "frost/core/UInt64.h"
#include "org/frostlanguage/frostc/Type.h"
#include "frost/core/Bit.h"
#include "org/frostlanguage/frostc/SymbolTable.h"
#include "org/frostlanguage/frostc/Symbol.h"
#include "org/frostlanguage/frostc/Methods.h"
#include "org/frostlanguage/frostc/FixedArray.h"
#include "org/frostlanguage/frostc/MethodRef.h"
#include "frost/collections/ListView.h"
#include "org/frostlanguage/frostc/Compiler/TypeContext.h"
#include "org/frostlanguage/frostc/expression/Call.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "org/frostlanguage/frostc/IR.h"
#include "org/frostlanguage/frostc/IR/Statement.h"
#include "org/frostlanguage/frostc/IR/Statement/ID.h"
#include "org/frostlanguage/frostc/IR/Block/ID.h"


static frost$core$String $s1;
org$frostlanguage$frostc$statement$Assert$class_type org$frostlanguage$frostc$statement$Assert$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$statement$Assert$cleanup} };

typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn69)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef org$frostlanguage$frostc$IR$Block$ID (*$fn86)(org$frostlanguage$frostc$IR*, frost$core$String*);
typedef org$frostlanguage$frostc$IR$Block$ID (*$fn91)(org$frostlanguage$frostc$IR*, frost$core$String*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn102)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef void (*$fn107)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Block$ID);
typedef void (*$fn111)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x41\x73\x73\x65\x72\x74", 41, 8923481950355364955, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, 1112391861657830585, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, 1112391861657830585, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20\x73\x75\x63\x63\x65\x73\x73", 14, -7137946713078462448, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20\x66\x61\x69\x6c\x75\x72\x65", 14, -7137960722408632065, NULL };

void org$frostlanguage$frostc$statement$Assert$compileFail$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$ASTNode* param2) {

org$frostlanguage$frostc$Compiler$AutoUnrefs* local0 = NULL;
frost$collections$Array* local1 = NULL;
org$frostlanguage$frostc$ClassDecl* local2 = NULL;
org$frostlanguage$frostc$MethodDecl* local3 = NULL;
// line 1
// line 20
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp2 = (org$frostlanguage$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$AutoUnrefs$class);
org$frostlanguage$frostc$Compiler$AutoUnrefs$init$org$frostlanguage$frostc$Compiler($tmp2, param0);
*(&local0) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp3 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
*(&local0) = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// unreffing REF($2:org.frostlanguage.frostc.Compiler.AutoUnrefs)
// line 21
frost$collections$Array* $tmp4 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$Array* $tmp5 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
*(&local1) = $tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
// unreffing REF($15:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 22
frost$collections$Array* $tmp6 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp7 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp8 = (frost$core$Int64) {41};
frost$collections$Stack** $tmp9 = &param0->currentClass;
frost$collections$Stack* $tmp10 = *$tmp9;
frost$core$Int64 $tmp11 = (frost$core$Int64) {0};
frost$core$Object* $tmp12 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp10, $tmp11);
frost$io$File** $tmp13 = &((org$frostlanguage$frostc$ClassDecl*) $tmp12)->source;
frost$io$File* $tmp14 = *$tmp13;
frost$core$String* $tmp15 = frost$io$File$get_name$R$frost$core$String($tmp14);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$String($tmp7, $tmp8, param1, $tmp15);
frost$collections$Array$add$frost$collections$Array$T($tmp6, ((frost$core$Object*) $tmp7));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// unreffing REF($41:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp12);
// unreffing REF($37:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// unreffing REF($31:org.frostlanguage.frostc.ASTNode)
// line 23
frost$collections$Array* $tmp16 = *(&local1);
org$frostlanguage$frostc$ASTNode* $tmp17 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp18 = (frost$core$Int64) {25};
frost$core$Int64 $tmp19 = param1.line;
frost$core$UInt64 $tmp20 = frost$core$Int64$convert$R$frost$core$UInt64($tmp19);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$UInt64($tmp17, $tmp18, param1, $tmp20);
frost$collections$Array$add$frost$collections$Array$T($tmp16, ((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// unreffing REF($57:org.frostlanguage.frostc.ASTNode)
// line 24
org$frostlanguage$frostc$Type* $tmp21 = org$frostlanguage$frostc$Type$Frost$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$ClassDecl* $tmp22 = org$frostlanguage$frostc$Compiler$getClass$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$ClassDecl$Q(param0, $tmp21);
*(&local2) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
org$frostlanguage$frostc$ClassDecl* $tmp23 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
*(&local2) = $tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// unreffing REF($69:org.frostlanguage.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing REF($68:org.frostlanguage.frostc.Type)
// line 25
*(&local3) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
// line 26
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block3;
block1:;
// line 27
org$frostlanguage$frostc$ClassDecl* $tmp26 = *(&local2);
org$frostlanguage$frostc$SymbolTable* $tmp27 = org$frostlanguage$frostc$Compiler$getSymbolTable$org$frostlanguage$frostc$ClassDecl$R$org$frostlanguage$frostc$SymbolTable(param0, $tmp26);
org$frostlanguage$frostc$Symbol* $tmp28 = org$frostlanguage$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlanguage$frostc$Symbol$Q($tmp27, &$s29);
org$frostlanguage$frostc$FixedArray** $tmp30 = &((org$frostlanguage$frostc$Methods*) $tmp28)->methods;
org$frostlanguage$frostc$FixedArray* $tmp31 = *$tmp30;
frost$core$Int64 $tmp32 = (frost$core$Int64) {0};
frost$core$Object* $tmp33 = org$frostlanguage$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlanguage$frostc$FixedArray$T($tmp31, $tmp32);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$MethodDecl*) $tmp33)));
org$frostlanguage$frostc$MethodDecl* $tmp34 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
*(&local3) = ((org$frostlanguage$frostc$MethodDecl*) $tmp33);
frost$core$Frost$unref$frost$core$Object$Q($tmp33);
// unreffing REF($100:org.frostlanguage.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing REF($94:org.frostlanguage.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing REF($93:org.frostlanguage.frostc.SymbolTable)
// line 28
frost$collections$Array* $tmp35 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp35, ((frost$core$Object*) param2));
goto block2;
block3:;
// line 1
// line 31
org$frostlanguage$frostc$ClassDecl* $tmp36 = *(&local2);
org$frostlanguage$frostc$SymbolTable* $tmp37 = org$frostlanguage$frostc$Compiler$getSymbolTable$org$frostlanguage$frostc$ClassDecl$R$org$frostlanguage$frostc$SymbolTable(param0, $tmp36);
org$frostlanguage$frostc$Symbol* $tmp38 = org$frostlanguage$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlanguage$frostc$Symbol$Q($tmp37, &$s39);
org$frostlanguage$frostc$FixedArray** $tmp40 = &((org$frostlanguage$frostc$Methods*) $tmp38)->methods;
org$frostlanguage$frostc$FixedArray* $tmp41 = *$tmp40;
frost$core$Int64 $tmp42 = (frost$core$Int64) {1};
frost$core$Object* $tmp43 = org$frostlanguage$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlanguage$frostc$FixedArray$T($tmp41, $tmp42);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$MethodDecl*) $tmp43)));
org$frostlanguage$frostc$MethodDecl* $tmp44 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local3) = ((org$frostlanguage$frostc$MethodDecl*) $tmp43);
frost$core$Frost$unref$frost$core$Object$Q($tmp43);
// unreffing REF($135:org.frostlanguage.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
// unreffing REF($129:org.frostlanguage.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
// unreffing REF($128:org.frostlanguage.frostc.SymbolTable)
goto block2;
block2:;
// line 33
org$frostlanguage$frostc$MethodDecl* $tmp45 = *(&local3);
frost$core$Bit $tmp46 = org$frostlanguage$frostc$Compiler$resolve$org$frostlanguage$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp45);
frost$core$Bit $tmp47 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp46);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block4; else goto block5;
block4:;
// line 34
org$frostlanguage$frostc$MethodDecl* $tmp49 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// unreffing m
*(&local3) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp50 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// unreffing frost
*(&local2) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp51 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing args
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp52 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// unreffing unrefs
*(&local0) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
return;
block5:;
// line 36
org$frostlanguage$frostc$MethodRef* $tmp53 = (org$frostlanguage$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlanguage$frostc$MethodRef$class);
org$frostlanguage$frostc$Type* $tmp54 = org$frostlanguage$frostc$Type$Frost$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$MethodDecl* $tmp55 = *(&local3);
org$frostlanguage$frostc$MethodRef$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$MethodDecl($tmp53, param0, $tmp54, $tmp55);
frost$collections$Array* $tmp56 = *(&local1);
org$frostlanguage$frostc$Compiler$TypeContext* $tmp57 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp58 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp57, $tmp58);
org$frostlanguage$frostc$IR$Value* $tmp59 = org$frostlanguage$frostc$expression$Call$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$MethodRef$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, ((org$frostlanguage$frostc$IR$Value*) NULL), $tmp53, ((frost$collections$ListView*) $tmp56), $tmp57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing REF($191:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
// unreffing REF($188:org.frostlanguage.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
// unreffing REF($183:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
// unreffing REF($182:org.frostlanguage.frostc.MethodRef)
org$frostlanguage$frostc$MethodDecl* $tmp60 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// unreffing m
*(&local3) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp61 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// unreffing frost
*(&local2) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp62 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing args
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp63 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// unreffing unrefs
*(&local0) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
// line 39
org$frostlanguage$frostc$IR** $tmp64 = &param0->ir;
org$frostlanguage$frostc$IR* $tmp65 = *$tmp64;
org$frostlanguage$frostc$IR$Statement* $tmp66 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp67 = (frost$core$Int64) {27};
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position($tmp66, $tmp67, param1);
$fn69 $tmp68 = ($fn69) $tmp65->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp70 = $tmp68($tmp65, $tmp66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// unreffing REF($227:org.frostlanguage.frostc.IR.Statement)
return;

}
void org$frostlanguage$frostc$statement$Assert$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$ASTNode* param2, org$frostlanguage$frostc$ASTNode* param3) {

org$frostlanguage$frostc$IR* local0 = NULL;
org$frostlanguage$frostc$IR$Value* local1 = NULL;
org$frostlanguage$frostc$IR$Block$ID local2;
org$frostlanguage$frostc$IR$Block$ID local3;
// line 44
org$frostlanguage$frostc$IR** $tmp71 = &param0->ir;
org$frostlanguage$frostc$IR* $tmp72 = *$tmp71;
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
org$frostlanguage$frostc$IR* $tmp73 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local0) = $tmp72;
// line 45
org$frostlanguage$frostc$Compiler$TypeContext* $tmp74 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp75 = (frost$core$Int64) {3};
org$frostlanguage$frostc$Type* $tmp76 = org$frostlanguage$frostc$Type$Bit$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp74, $tmp75, $tmp76);
org$frostlanguage$frostc$IR$Value* $tmp77 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param2, $tmp74);
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
org$frostlanguage$frostc$IR$Value* $tmp78 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local1) = $tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// unreffing REF($15:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing REF($13:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing REF($11:org.frostlanguage.frostc.Compiler.TypeContext)
// line 46
org$frostlanguage$frostc$IR$Value* $tmp79 = *(&local1);
frost$core$Bit $tmp80 = frost$core$Bit$init$builtin_bit($tmp79 == NULL);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block1; else goto block2;
block1:;
// line 47
org$frostlanguage$frostc$IR$Value* $tmp82 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// unreffing compiledTest
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$IR* $tmp83 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// unreffing ir
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
return;
block2:;
// line 49
org$frostlanguage$frostc$IR* $tmp84 = *(&local0);
$fn86 $tmp85 = ($fn86) $tmp84->$class->vtable[3];
org$frostlanguage$frostc$IR$Block$ID $tmp87 = $tmp85($tmp84, &$s88);
*(&local2) = $tmp87;
// line 50
org$frostlanguage$frostc$IR* $tmp89 = *(&local0);
$fn91 $tmp90 = ($fn91) $tmp89->$class->vtable[3];
org$frostlanguage$frostc$IR$Block$ID $tmp92 = $tmp90($tmp89, &$s93);
*(&local3) = $tmp92;
// line 51
org$frostlanguage$frostc$IR* $tmp94 = *(&local0);
org$frostlanguage$frostc$IR$Statement* $tmp95 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp96 = (frost$core$Int64) {5};
org$frostlanguage$frostc$IR$Value* $tmp97 = *(&local1);
org$frostlanguage$frostc$IR$Value* $tmp98 = org$frostlanguage$frostc$Compiler$extractBuiltinBit$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$R$org$frostlanguage$frostc$IR$Value(param0, param1, $tmp97);
org$frostlanguage$frostc$IR$Block$ID $tmp99 = *(&local2);
org$frostlanguage$frostc$IR$Block$ID $tmp100 = *(&local3);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$IR$Block$ID$org$frostlanguage$frostc$IR$Block$ID($tmp95, $tmp96, param1, $tmp98, $tmp99, $tmp100);
$fn102 $tmp101 = ($fn102) $tmp94->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp103 = $tmp101($tmp94, $tmp95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// unreffing REF($66:org.frostlanguage.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// unreffing REF($62:org.frostlanguage.frostc.IR.Statement)
// line 53
org$frostlanguage$frostc$IR* $tmp104 = *(&local0);
org$frostlanguage$frostc$IR$Block$ID $tmp105 = *(&local3);
$fn107 $tmp106 = ($fn107) $tmp104->$class->vtable[4];
$tmp106($tmp104, $tmp105);
// line 54
org$frostlanguage$frostc$statement$Assert$compileFail$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$Q(param0, param1, param3);
// line 55
org$frostlanguage$frostc$IR* $tmp108 = *(&local0);
org$frostlanguage$frostc$IR$Block$ID $tmp109 = *(&local2);
$fn111 $tmp110 = ($fn111) $tmp108->$class->vtable[4];
$tmp110($tmp108, $tmp109);
org$frostlanguage$frostc$IR$Value* $tmp112 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing compiledTest
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$IR* $tmp113 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// unreffing ir
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
return;

}
void org$frostlanguage$frostc$statement$Assert$init(org$frostlanguage$frostc$statement$Assert* param0) {

return;

}
void org$frostlanguage$frostc$statement$Assert$cleanup(org$frostlanguage$frostc$statement$Assert* param0) {

// line 16
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

