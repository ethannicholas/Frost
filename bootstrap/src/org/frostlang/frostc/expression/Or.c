#include "org/frostlang/frostc/expression/Or.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Or$class_type org$frostlang$frostc$expression$Or$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Or$cleanup} };

typedef frost$core$Int64 (*$fn12)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn33)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn38)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn43)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn59)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn64)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn76)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn83)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn88)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn116)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn123)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn128)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn134)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x4f\x72", 34, 2929099002013185031, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x20\x74\x72\x75\x65", 7, 226243874007106, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x20\x66\x61\x6c\x73\x65", 8, 22850629800266681, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x20\x6d\x65\x72\x67\x65", 8, 22850630532870686, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x72\x2e\x66\x72\x6f\x73\x74", 8, 19419943832476998, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x72\x2e\x66\x72\x6f\x73\x74", 8, 19419943832476998, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x72\x2e\x66\x72\x6f\x73\x74", 8, 19419943832476998, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Or$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$IR$Block$ID local4;
org$frostlang$frostc$IR$Block$ID local5;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local7 = NULL;
org$frostlang$frostc$IR$Statement$ID local8;
// line 15
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 17
org$frostlang$frostc$IR$Value* $tmp5 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp6 = (frost$core$Int64) {2};
org$frostlang$frostc$IR* $tmp7 = *(&local0);
frost$collections$Array** $tmp8 = &$tmp7->locals;
frost$collections$Array* $tmp9 = *$tmp8;
ITable* $tmp10 = ((frost$collections$CollectionView*) $tmp9)->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
frost$core$Int64 $tmp13 = $tmp11(((frost$collections$CollectionView*) $tmp9));
org$frostlang$frostc$Type* $tmp14 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp5, $tmp6, $tmp13, $tmp14);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
org$frostlang$frostc$IR$Value* $tmp15 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
*(&local1) = $tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// unreffing REF($19:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
// unreffing REF($11:org.frostlang.frostc.IR.Value)
// line 18
org$frostlang$frostc$IR* $tmp16 = *(&local0);
frost$collections$Array** $tmp17 = &$tmp16->locals;
frost$collections$Array* $tmp18 = *$tmp17;
org$frostlang$frostc$Type* $tmp19 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp18, ((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// unreffing REF($39:org.frostlang.frostc.Type)
// line 19
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 20
org$frostlang$frostc$Compiler$TypeContext* $tmp20 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp21 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp22 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp20, $tmp21, $tmp22);
org$frostlang$frostc$IR$Value* $tmp23 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp20);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
org$frostlang$frostc$IR$Value* $tmp24 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local2) = $tmp23;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// unreffing REF($52:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// unreffing REF($50:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing REF($48:org.frostlang.frostc.Compiler.TypeContext)
// line 21
org$frostlang$frostc$IR$Value* $tmp25 = *(&local2);
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit($tmp25 == NULL);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block1; else goto block2;
block1:;
// line 22
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp28 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing compiledLeft
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp29 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing result
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp30 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// line 24
org$frostlang$frostc$IR* $tmp31 = *(&local0);
$fn33 $tmp32 = ($fn33) $tmp31->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp34 = $tmp32($tmp31, &$s35);
*(&local3) = $tmp34;
// line 25
org$frostlang$frostc$IR* $tmp36 = *(&local0);
$fn38 $tmp37 = ($fn38) $tmp36->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp39 = $tmp37($tmp36, &$s40);
*(&local4) = $tmp39;
// line 26
org$frostlang$frostc$IR* $tmp41 = *(&local0);
$fn43 $tmp42 = ($fn43) $tmp41->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp44 = $tmp42($tmp41, &$s45);
*(&local5) = $tmp44;
// line 27
org$frostlang$frostc$IR* $tmp46 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp47 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp48 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp49 = *(&local2);
frost$core$Bit $tmp50 = frost$core$Bit$init$builtin_bit($tmp49 != NULL);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp52 = (frost$core$Int64) {28};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s53, $tmp52, &$s54);
abort(); // unreachable
block3:;
org$frostlang$frostc$IR$Value* $tmp55 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp49);
org$frostlang$frostc$IR$Block$ID $tmp56 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp57 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp47, $tmp48, param1, $tmp55, $tmp56, $tmp57);
$fn59 $tmp58 = ($fn59) $tmp46->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp60 = $tmp58($tmp46, $tmp47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// unreffing REF($121:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// unreffing REF($110:org.frostlang.frostc.IR.Statement)
// line 29
org$frostlang$frostc$IR* $tmp61 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp62 = *(&local3);
$fn64 $tmp63 = ($fn64) $tmp61->$class->vtable[4];
$tmp63($tmp61, $tmp62);
// line 30
org$frostlang$frostc$IR* $tmp65 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp66 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp67 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp68 = *(&local2);
frost$core$Bit $tmp69 = frost$core$Bit$init$builtin_bit($tmp68 != NULL);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp71 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s72, $tmp71, &$s73);
abort(); // unreachable
block5:;
org$frostlang$frostc$IR$Value* $tmp74 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp66, $tmp67, param1, $tmp68, $tmp74);
$fn76 $tmp75 = ($fn76) $tmp65->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp77 = $tmp75($tmp65, $tmp66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// unreffing REF($140:org.frostlang.frostc.IR.Statement)
// line 31
org$frostlang$frostc$IR* $tmp78 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp79 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp80 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp81 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp79, $tmp80, param1, $tmp81);
$fn83 $tmp82 = ($fn83) $tmp78->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp84 = $tmp82($tmp78, $tmp79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// unreffing REF($160:org.frostlang.frostc.IR.Statement)
// line 32
org$frostlang$frostc$IR* $tmp85 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp86 = *(&local4);
$fn88 $tmp87 = ($fn88) $tmp85->$class->vtable[4];
$tmp87($tmp85, $tmp86);
// line 33
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 1
// line 35
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp89 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp89, param0);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp90 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
*(&local7) = $tmp89;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// unreffing REF($178:org.frostlang.frostc.Compiler.AutoUnrefs)
// line 36
org$frostlang$frostc$Compiler$TypeContext* $tmp91 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp92 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp93 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp91, $tmp92, $tmp93);
org$frostlang$frostc$IR$Value* $tmp94 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp91);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
org$frostlang$frostc$IR$Value* $tmp95 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local6) = $tmp94;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($195:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// unreffing REF($193:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing REF($191:org.frostlang.frostc.Compiler.TypeContext)
// line 37
org$frostlang$frostc$IR$Value* $tmp96 = *(&local6);
frost$core$Bit $tmp97 = frost$core$Bit$init$builtin_bit($tmp96 == NULL);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block7; else goto block8;
block7:;
// line 38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp99 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
// unreffing unrefs
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp100 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// unreffing compiledRight
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp101 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// unreffing compiledLeft
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp102 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing result
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp103 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block8:;
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp104 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// unreffing unrefs
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 41
org$frostlang$frostc$IR* $tmp105 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp106 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp107 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp108 = *(&local6);
frost$core$Bit $tmp109 = frost$core$Bit$init$builtin_bit($tmp108 != NULL);
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp111 = (frost$core$Int64) {41};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s112, $tmp111, &$s113);
abort(); // unreachable
block9:;
org$frostlang$frostc$IR$Value* $tmp114 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp106, $tmp107, param1, $tmp108, $tmp114);
$fn116 $tmp115 = ($fn116) $tmp105->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp117 = $tmp115($tmp105, $tmp106);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// unreffing REF($253:org.frostlang.frostc.IR.Statement)
// line 42
org$frostlang$frostc$IR* $tmp118 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp119 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp120 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp121 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp119, $tmp120, param1, $tmp121);
$fn123 $tmp122 = ($fn123) $tmp118->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp124 = $tmp122($tmp118, $tmp119);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
// unreffing REF($273:org.frostlang.frostc.IR.Statement)
// line 43
org$frostlang$frostc$IR* $tmp125 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp126 = *(&local5);
$fn128 $tmp127 = ($fn128) $tmp125->$class->vtable[4];
$tmp127($tmp125, $tmp126);
// line 44
org$frostlang$frostc$IR* $tmp129 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp130 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp131 = (frost$core$Int64) {13};
org$frostlang$frostc$IR$Value* $tmp132 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp130, $tmp131, param1, $tmp132);
$fn134 $tmp133 = ($fn134) $tmp129->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp135 = $tmp133($tmp129, $tmp130);
*(&local8) = $tmp135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// unreffing REF($289:org.frostlang.frostc.IR.Statement)
// line 45
org$frostlang$frostc$IR$Value* $tmp136 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp137 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp138 = *(&local8);
org$frostlang$frostc$Type* $tmp139 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp136, $tmp137, $tmp138, $tmp139);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
// unreffing REF($303:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// unreffing REF($300:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$IR$Value* $tmp140 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
// unreffing compiledRight
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp141 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
// unreffing compiledLeft
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp142 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// unreffing result
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp143 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp136;

}
void org$frostlang$frostc$expression$Or$init(org$frostlang$frostc$expression$Or* param0) {

return;

}
void org$frostlang$frostc$expression$Or$cleanup(org$frostlang$frostc$expression$Or* param0) {

// line 11
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






