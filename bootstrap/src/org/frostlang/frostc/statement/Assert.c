#include "org/frostlang/frostc/statement/Assert.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/collections/Stack.h"
#include "frost/io/File.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Block/ID.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Assert$class_type org$frostlang$frostc$statement$Assert$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Assert$cleanup} };

typedef org$frostlang$frostc$IR$Statement$ID (*$fn84)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn101)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn106)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn122)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn127)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn131)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x41\x73\x73\x65\x72\x74", 37, 6365785395817378313, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x73\x73\x65\x72\x74\x2e\x66\x72\x6f\x73\x74", 12, 2791100739566568043, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, 1112391861657830585, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x73\x73\x65\x72\x74\x2e\x66\x72\x6f\x73\x74", 12, 2791100739566568043, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x73\x73\x65\x72\x74\x2e\x66\x72\x6f\x73\x74", 12, 2791100739566568043, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, 1112391861657830585, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20\x73\x75\x63\x63\x65\x73\x73", 14, -7137946713078462448, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20\x66\x61\x69\x6c\x75\x72\x65", 14, -7137960722408632065, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x73\x73\x65\x72\x74\x2e\x66\x72\x6f\x73\x74", 12, 2791100739566568043, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };

void org$frostlang$frostc$statement$Assert$compileFail$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2) {

org$frostlang$frostc$Compiler$AutoUnrefs* local0 = NULL;
frost$collections$Array* local1 = NULL;
org$frostlang$frostc$ClassDecl* local2 = NULL;
org$frostlang$frostc$MethodDecl* local3 = NULL;
// line 1
// line 20
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp2 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp2, param0);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
*(&local0) = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// unreffing REF($2:org.frostlang.frostc.Compiler.AutoUnrefs)
// line 21
frost$collections$Array* $tmp4 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$Array* $tmp5 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
*(&local1) = $tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
// unreffing REF($15:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 22
frost$collections$Array* $tmp6 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp7 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp8 = (frost$core$Int64) {41};
frost$collections$Stack** $tmp9 = &param0->currentClass;
frost$collections$Stack* $tmp10 = *$tmp9;
frost$core$Int64 $tmp11 = (frost$core$Int64) {0};
frost$core$Object* $tmp12 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp10, $tmp11);
frost$io$File** $tmp13 = &((org$frostlang$frostc$ClassDecl*) $tmp12)->source;
frost$io$File* $tmp14 = *$tmp13;
frost$core$String* $tmp15 = frost$io$File$get_name$R$frost$core$String($tmp14);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp7, $tmp8, param1, $tmp15);
frost$collections$Array$add$frost$collections$Array$T($tmp6, ((frost$core$Object*) $tmp7));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// unreffing REF($41:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp12);
// unreffing REF($37:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// unreffing REF($31:org.frostlang.frostc.ASTNode)
// line 23
frost$collections$Array* $tmp16 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp17 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp18 = (frost$core$Int64) {25};
frost$core$Int64 $tmp19 = param1.line;
frost$core$UInt64 $tmp20 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp19);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp17, $tmp18, param1, $tmp20);
frost$collections$Array$add$frost$collections$Array$T($tmp16, ((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// unreffing REF($57:org.frostlang.frostc.ASTNode)
// line 24
org$frostlang$frostc$Type* $tmp21 = org$frostlang$frostc$Type$Frost$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp22 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp21);
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
org$frostlang$frostc$ClassDecl* $tmp23 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
*(&local2) = $tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// unreffing REF($69:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing REF($68:org.frostlang.frostc.Type)
// line 25
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
// line 26
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block3;
block1:;
// line 27
org$frostlang$frostc$ClassDecl* $tmp26 = *(&local2);
frost$core$Bit $tmp27 = frost$core$Bit$init$builtin_bit($tmp26 != NULL);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp29 = (frost$core$Int64) {27};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s30, $tmp29, &$s31);
abort(); // unreachable
block4:;
org$frostlang$frostc$SymbolTable* $tmp32 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp26);
org$frostlang$frostc$Symbol* $tmp33 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp32, &$s34);
org$frostlang$frostc$FixedArray** $tmp35 = &((org$frostlang$frostc$Methods*) $tmp33)->methods;
org$frostlang$frostc$FixedArray* $tmp36 = *$tmp35;
frost$core$Int64 $tmp37 = (frost$core$Int64) {0};
frost$core$Object* $tmp38 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp36, $tmp37);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp38)));
org$frostlang$frostc$MethodDecl* $tmp39 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) $tmp38);
frost$core$Frost$unref$frost$core$Object$Q($tmp38);
// unreffing REF($107:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing REF($101:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// unreffing REF($100:org.frostlang.frostc.SymbolTable)
// line 28
frost$collections$Array* $tmp40 = *(&local1);
frost$core$Bit $tmp41 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp43 = (frost$core$Int64) {28};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s44, $tmp43, &$s45);
abort(); // unreachable
block6:;
frost$collections$Array$add$frost$collections$Array$T($tmp40, ((frost$core$Object*) param2));
goto block2;
block3:;
// line 1
// line 31
org$frostlang$frostc$ClassDecl* $tmp46 = *(&local2);
frost$core$Bit $tmp47 = frost$core$Bit$init$builtin_bit($tmp46 != NULL);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp49 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s50, $tmp49, &$s51);
abort(); // unreachable
block8:;
org$frostlang$frostc$SymbolTable* $tmp52 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp46);
org$frostlang$frostc$Symbol* $tmp53 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp52, &$s54);
org$frostlang$frostc$FixedArray** $tmp55 = &((org$frostlang$frostc$Methods*) $tmp53)->methods;
org$frostlang$frostc$FixedArray* $tmp56 = *$tmp55;
frost$core$Int64 $tmp57 = (frost$core$Int64) {1};
frost$core$Object* $tmp58 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp56, $tmp57);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp58)));
org$frostlang$frostc$MethodDecl* $tmp59 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) $tmp58);
frost$core$Frost$unref$frost$core$Object$Q($tmp58);
// unreffing REF($156:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
// unreffing REF($150:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// unreffing REF($149:org.frostlang.frostc.SymbolTable)
goto block2;
block2:;
// line 33
org$frostlang$frostc$MethodDecl* $tmp60 = *(&local3);
frost$core$Bit $tmp61 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp60);
frost$core$Bit $tmp62 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp61);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block10; else goto block11;
block10:;
// line 34
org$frostlang$frostc$MethodDecl* $tmp64 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing m
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp65 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing frost
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp66 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// unreffing args
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp67 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing unrefs
*(&local0) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
return;
block11:;
// line 36
org$frostlang$frostc$MethodRef* $tmp68 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type* $tmp69 = org$frostlang$frostc$Type$Frost$R$org$frostlang$frostc$Type();
org$frostlang$frostc$MethodDecl* $tmp70 = *(&local3);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl($tmp68, param0, $tmp69, $tmp70);
frost$collections$Array* $tmp71 = *(&local1);
org$frostlang$frostc$Compiler$TypeContext* $tmp72 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp73 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp72, $tmp73);
org$frostlang$frostc$IR$Value* $tmp74 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) NULL), $tmp68, ((frost$collections$ListView*) $tmp71), $tmp72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing REF($212:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing REF($209:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing REF($204:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// unreffing REF($203:org.frostlang.frostc.MethodRef)
org$frostlang$frostc$MethodDecl* $tmp75 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing m
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp76 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing frost
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp77 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// unreffing args
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp78 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// unreffing unrefs
*(&local0) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 39
org$frostlang$frostc$IR** $tmp79 = &param0->ir;
org$frostlang$frostc$IR* $tmp80 = *$tmp79;
org$frostlang$frostc$IR$Statement* $tmp81 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp82 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position($tmp81, $tmp82, param1);
$fn84 $tmp83 = ($fn84) $tmp80->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp85 = $tmp83($tmp80, $tmp81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// unreffing REF($248:org.frostlang.frostc.IR.Statement)
return;

}
void org$frostlang$frostc$statement$Assert$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$ASTNode* param3) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
// line 44
org$frostlang$frostc$IR** $tmp86 = &param0->ir;
org$frostlang$frostc$IR* $tmp87 = *$tmp86;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
org$frostlang$frostc$IR* $tmp88 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local0) = $tmp87;
// line 45
org$frostlang$frostc$Compiler$TypeContext* $tmp89 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp90 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp91 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp89, $tmp90, $tmp91);
org$frostlang$frostc$IR$Value* $tmp92 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp89);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
org$frostlang$frostc$IR$Value* $tmp93 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local1) = $tmp92;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing REF($15:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing REF($13:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// unreffing REF($11:org.frostlang.frostc.Compiler.TypeContext)
// line 46
org$frostlang$frostc$IR$Value* $tmp94 = *(&local1);
frost$core$Bit $tmp95 = frost$core$Bit$init$builtin_bit($tmp94 == NULL);
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block1; else goto block2;
block1:;
// line 47
org$frostlang$frostc$IR$Value* $tmp97 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// unreffing compiledTest
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp98 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block2:;
// line 49
org$frostlang$frostc$IR* $tmp99 = *(&local0);
$fn101 $tmp100 = ($fn101) $tmp99->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp102 = $tmp100($tmp99, &$s103);
*(&local2) = $tmp102;
// line 50
org$frostlang$frostc$IR* $tmp104 = *(&local0);
$fn106 $tmp105 = ($fn106) $tmp104->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp107 = $tmp105($tmp104, &$s108);
*(&local3) = $tmp107;
// line 51
org$frostlang$frostc$IR* $tmp109 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp110 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp111 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp112 = *(&local1);
frost$core$Bit $tmp113 = frost$core$Bit$init$builtin_bit($tmp112 != NULL);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp115 = (frost$core$Int64) {52};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s116, $tmp115, &$s117);
abort(); // unreachable
block3:;
org$frostlang$frostc$IR$Value* $tmp118 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp112);
org$frostlang$frostc$IR$Block$ID $tmp119 = *(&local2);
org$frostlang$frostc$IR$Block$ID $tmp120 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp110, $tmp111, param1, $tmp118, $tmp119, $tmp120);
$fn122 $tmp121 = ($fn122) $tmp109->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp123 = $tmp121($tmp109, $tmp110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
// unreffing REF($73:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing REF($62:org.frostlang.frostc.IR.Statement)
// line 53
org$frostlang$frostc$IR* $tmp124 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp125 = *(&local3);
$fn127 $tmp126 = ($fn127) $tmp124->$class->vtable[4];
$tmp126($tmp124, $tmp125);
// line 54
org$frostlang$frostc$statement$Assert$compileFail$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(param0, param1, param3);
// line 55
org$frostlang$frostc$IR* $tmp128 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp129 = *(&local2);
$fn131 $tmp130 = ($fn131) $tmp128->$class->vtable[4];
$tmp130($tmp128, $tmp129);
org$frostlang$frostc$IR$Value* $tmp132 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// unreffing compiledTest
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp133 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$Assert$init(org$frostlang$frostc$statement$Assert* param0) {

return;

}
void org$frostlang$frostc$statement$Assert$cleanup(org$frostlang$frostc$statement$Assert* param0) {

// line 16
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

