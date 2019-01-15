#include "org/frostlanguage/frostc/expression/And.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "org/frostlanguage/frostc/Compiler/TypeContext.h"
#include "org/frostlanguage/frostc/IR.h"
#include "org/frostlanguage/frostc/IR/Block/ID.h"
#include "org/frostlanguage/frostc/Compiler/AutoUnrefs.h"
#include "org/frostlanguage/frostc/IR/Statement/ID.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlanguage/frostc/Type.h"
#include "frost/core/Bit.h"
#include "org/frostlanguage/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlanguage$frostc$expression$And$class_type org$frostlanguage$frostc$expression$And$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$expression$And$cleanup} };

typedef frost$core$Int64 (*$fn12)(frost$collections$CollectionView*);
typedef org$frostlanguage$frostc$IR$Block$ID (*$fn33)(org$frostlanguage$frostc$IR*, frost$core$String*);
typedef org$frostlanguage$frostc$IR$Block$ID (*$fn38)(org$frostlanguage$frostc$IR*, frost$core$String*);
typedef org$frostlanguage$frostc$IR$Block$ID (*$fn43)(org$frostlanguage$frostc$IR*, frost$core$String*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn54)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef void (*$fn59)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Block$ID);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn82)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn89)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef void (*$fn94)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Block$ID);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn101)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn108)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef void (*$fn113)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Block$ID);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn119)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x6e\x64", 39, -8117016228593056937, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x64\x20\x74\x72\x75\x65", 8, 21346101648957588, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x64\x20\x66\x61\x6c\x73\x65", 9, 2155956265070265363, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x64\x20\x6d\x65\x72\x67\x65", 9, 2155956265802869368, NULL };

org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$And$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$ASTNode* param2, org$frostlanguage$frostc$ASTNode* param3, org$frostlanguage$frostc$Compiler$TypeContext* param4) {

org$frostlanguage$frostc$IR* local0 = NULL;
org$frostlanguage$frostc$IR$Value* local1 = NULL;
org$frostlanguage$frostc$IR$Value* local2 = NULL;
org$frostlanguage$frostc$IR$Block$ID local3;
org$frostlanguage$frostc$IR$Block$ID local4;
org$frostlanguage$frostc$IR$Block$ID local5;
org$frostlanguage$frostc$IR$Value* local6 = NULL;
org$frostlanguage$frostc$Compiler$AutoUnrefs* local7 = NULL;
org$frostlanguage$frostc$IR$Statement$ID local8;
// line 15
org$frostlanguage$frostc$IR** $tmp2 = &param0->ir;
org$frostlanguage$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlanguage$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 17
org$frostlanguage$frostc$IR$Value* $tmp5 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp6 = (frost$core$Int64) {2};
org$frostlanguage$frostc$IR* $tmp7 = *(&local0);
frost$collections$Array** $tmp8 = &$tmp7->locals;
frost$collections$Array* $tmp9 = *$tmp8;
ITable* $tmp10 = ((frost$collections$CollectionView*) $tmp9)->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
frost$core$Int64 $tmp13 = $tmp11(((frost$collections$CollectionView*) $tmp9));
org$frostlanguage$frostc$Type* $tmp14 = org$frostlanguage$frostc$Type$Bit$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlanguage$frostc$Type($tmp5, $tmp6, $tmp13, $tmp14);
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
org$frostlanguage$frostc$IR$Value* $tmp15 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
*(&local1) = $tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// unreffing REF($19:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
// unreffing REF($11:org.frostlanguage.frostc.IR.Value)
// line 18
org$frostlanguage$frostc$IR* $tmp16 = *(&local0);
frost$collections$Array** $tmp17 = &$tmp16->locals;
frost$collections$Array* $tmp18 = *$tmp17;
org$frostlanguage$frostc$Type* $tmp19 = org$frostlanguage$frostc$Type$Bit$R$org$frostlanguage$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp18, ((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// unreffing REF($39:org.frostlanguage.frostc.Type)
// line 19
*(&local2) = ((org$frostlanguage$frostc$IR$Value*) NULL);
// line 20
org$frostlanguage$frostc$Compiler$TypeContext* $tmp20 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp21 = (frost$core$Int64) {3};
org$frostlanguage$frostc$Type* $tmp22 = org$frostlanguage$frostc$Type$Bit$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp20, $tmp21, $tmp22);
org$frostlanguage$frostc$IR$Value* $tmp23 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param2, $tmp20);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
org$frostlanguage$frostc$IR$Value* $tmp24 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local2) = $tmp23;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// unreffing REF($52:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// unreffing REF($50:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing REF($48:org.frostlanguage.frostc.Compiler.TypeContext)
// line 21
org$frostlanguage$frostc$IR$Value* $tmp25 = *(&local2);
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit($tmp25 == NULL);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block1; else goto block2;
block1:;
// line 22
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$IR$Value* $tmp28 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing compiledLeft
*(&local2) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp29 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing result
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$IR* $tmp30 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// unreffing ir
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block2:;
// line 24
org$frostlanguage$frostc$IR* $tmp31 = *(&local0);
$fn33 $tmp32 = ($fn33) $tmp31->$class->vtable[3];
org$frostlanguage$frostc$IR$Block$ID $tmp34 = $tmp32($tmp31, &$s35);
*(&local3) = $tmp34;
// line 25
org$frostlanguage$frostc$IR* $tmp36 = *(&local0);
$fn38 $tmp37 = ($fn38) $tmp36->$class->vtable[3];
org$frostlanguage$frostc$IR$Block$ID $tmp39 = $tmp37($tmp36, &$s40);
*(&local4) = $tmp39;
// line 26
org$frostlanguage$frostc$IR* $tmp41 = *(&local0);
$fn43 $tmp42 = ($fn43) $tmp41->$class->vtable[3];
org$frostlanguage$frostc$IR$Block$ID $tmp44 = $tmp42($tmp41, &$s45);
*(&local5) = $tmp44;
// line 27
org$frostlanguage$frostc$IR* $tmp46 = *(&local0);
org$frostlanguage$frostc$IR$Statement* $tmp47 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp48 = (frost$core$Int64) {5};
org$frostlanguage$frostc$IR$Value* $tmp49 = *(&local2);
org$frostlanguage$frostc$IR$Value* $tmp50 = org$frostlanguage$frostc$Compiler$extractBuiltinBit$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$R$org$frostlanguage$frostc$IR$Value(param0, param1, $tmp49);
org$frostlanguage$frostc$IR$Block$ID $tmp51 = *(&local3);
org$frostlanguage$frostc$IR$Block$ID $tmp52 = *(&local4);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$IR$Block$ID$org$frostlanguage$frostc$IR$Block$ID($tmp47, $tmp48, param1, $tmp50, $tmp51, $tmp52);
$fn54 $tmp53 = ($fn54) $tmp46->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp55 = $tmp53($tmp46, $tmp47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// unreffing REF($114:org.frostlanguage.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// unreffing REF($110:org.frostlanguage.frostc.IR.Statement)
// line 29
org$frostlanguage$frostc$IR* $tmp56 = *(&local0);
org$frostlanguage$frostc$IR$Block$ID $tmp57 = *(&local3);
$fn59 $tmp58 = ($fn59) $tmp56->$class->vtable[4];
$tmp58($tmp56, $tmp57);
// line 30
*(&local6) = ((org$frostlanguage$frostc$IR$Value*) NULL);
// line 1
// line 32
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp60 = (org$frostlanguage$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$AutoUnrefs$class);
org$frostlanguage$frostc$Compiler$AutoUnrefs$init$org$frostlanguage$frostc$Compiler($tmp60, param0);
*(&local7) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp61 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local7) = $tmp60;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// unreffing REF($135:org.frostlanguage.frostc.Compiler.AutoUnrefs)
// line 33
org$frostlanguage$frostc$Compiler$TypeContext* $tmp62 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp63 = (frost$core$Int64) {3};
org$frostlanguage$frostc$Type* $tmp64 = org$frostlanguage$frostc$Type$Bit$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp62, $tmp63, $tmp64);
org$frostlanguage$frostc$IR$Value* $tmp65 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param3, $tmp62);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
org$frostlanguage$frostc$IR$Value* $tmp66 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local6) = $tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing REF($152:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing REF($150:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing REF($148:org.frostlanguage.frostc.Compiler.TypeContext)
// line 34
org$frostlanguage$frostc$IR$Value* $tmp67 = *(&local6);
frost$core$Bit $tmp68 = frost$core$Bit$init$builtin_bit($tmp67 == NULL);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block3; else goto block4;
block3:;
// line 35
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp70 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// unreffing unrefs
*(&local7) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp71 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing compiledRight
*(&local6) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp72 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing compiledLeft
*(&local2) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp73 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing result
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$IR* $tmp74 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing ir
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block4:;
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp75 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing unrefs
*(&local7) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
// line 38
org$frostlanguage$frostc$IR* $tmp76 = *(&local0);
org$frostlanguage$frostc$IR$Statement* $tmp77 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp78 = (frost$core$Int64) {26};
org$frostlanguage$frostc$IR$Value* $tmp79 = *(&local6);
org$frostlanguage$frostc$IR$Value* $tmp80 = *(&local1);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$IR$Value($tmp77, $tmp78, param1, $tmp79, $tmp80);
$fn82 $tmp81 = ($fn82) $tmp76->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp83 = $tmp81($tmp76, $tmp77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// unreffing REF($210:org.frostlanguage.frostc.IR.Statement)
// line 39
org$frostlanguage$frostc$IR* $tmp84 = *(&local0);
org$frostlanguage$frostc$IR$Statement* $tmp85 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp86 = (frost$core$Int64) {1};
org$frostlanguage$frostc$IR$Block$ID $tmp87 = *(&local5);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Block$ID($tmp85, $tmp86, param1, $tmp87);
$fn89 $tmp88 = ($fn89) $tmp84->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp90 = $tmp88($tmp84, $tmp85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// unreffing REF($223:org.frostlanguage.frostc.IR.Statement)
// line 40
org$frostlanguage$frostc$IR* $tmp91 = *(&local0);
org$frostlanguage$frostc$IR$Block$ID $tmp92 = *(&local4);
$fn94 $tmp93 = ($fn94) $tmp91->$class->vtable[4];
$tmp93($tmp91, $tmp92);
// line 41
org$frostlanguage$frostc$IR* $tmp95 = *(&local0);
org$frostlanguage$frostc$IR$Statement* $tmp96 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp97 = (frost$core$Int64) {26};
org$frostlanguage$frostc$IR$Value* $tmp98 = *(&local2);
org$frostlanguage$frostc$IR$Value* $tmp99 = *(&local1);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$IR$Value($tmp96, $tmp97, param1, $tmp98, $tmp99);
$fn101 $tmp100 = ($fn101) $tmp95->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp102 = $tmp100($tmp95, $tmp96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
// unreffing REF($239:org.frostlanguage.frostc.IR.Statement)
// line 42
org$frostlanguage$frostc$IR* $tmp103 = *(&local0);
org$frostlanguage$frostc$IR$Statement* $tmp104 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp105 = (frost$core$Int64) {1};
org$frostlanguage$frostc$IR$Block$ID $tmp106 = *(&local5);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Block$ID($tmp104, $tmp105, param1, $tmp106);
$fn108 $tmp107 = ($fn108) $tmp103->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp109 = $tmp107($tmp103, $tmp104);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// unreffing REF($252:org.frostlanguage.frostc.IR.Statement)
// line 43
org$frostlanguage$frostc$IR* $tmp110 = *(&local0);
org$frostlanguage$frostc$IR$Block$ID $tmp111 = *(&local5);
$fn113 $tmp112 = ($fn113) $tmp110->$class->vtable[4];
$tmp112($tmp110, $tmp111);
// line 44
org$frostlanguage$frostc$IR* $tmp114 = *(&local0);
org$frostlanguage$frostc$IR$Statement* $tmp115 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp116 = (frost$core$Int64) {13};
org$frostlanguage$frostc$IR$Value* $tmp117 = *(&local1);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value($tmp115, $tmp116, param1, $tmp117);
$fn119 $tmp118 = ($fn119) $tmp114->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp120 = $tmp118($tmp114, $tmp115);
*(&local8) = $tmp120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
// unreffing REF($268:org.frostlanguage.frostc.IR.Statement)
// line 45
org$frostlanguage$frostc$IR$Value* $tmp121 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp122 = (frost$core$Int64) {7};
org$frostlanguage$frostc$IR$Statement$ID $tmp123 = *(&local8);
org$frostlanguage$frostc$Type* $tmp124 = org$frostlanguage$frostc$Type$Bit$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$IR$Statement$ID$org$frostlanguage$frostc$Type($tmp121, $tmp122, $tmp123, $tmp124);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// unreffing REF($282:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing REF($279:org.frostlanguage.frostc.IR.Value)
org$frostlanguage$frostc$IR$Value* $tmp125 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// unreffing compiledRight
*(&local6) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp126 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// unreffing compiledLeft
*(&local2) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp127 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
// unreffing result
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$IR* $tmp128 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing ir
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
return $tmp121;

}
void org$frostlanguage$frostc$expression$And$init(org$frostlanguage$frostc$expression$And* param0) {

return;

}
void org$frostlanguage$frostc$expression$And$cleanup(org$frostlanguage$frostc$expression$And* param0) {

// line 11
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






