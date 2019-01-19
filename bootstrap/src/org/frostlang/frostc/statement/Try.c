#include "org/frostlang/frostc/statement/Try.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/Compiler/AutoContext.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Try$class_type org$frostlang$frostc$statement$Try$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Try$cleanup} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn9)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn14)(org$frostlang$frostc$IR*, frost$core$String*);
typedef frost$core$Int64 (*$fn46)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn94)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn105)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$collections$Iterator* (*$fn144)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn148)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn153)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn162)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn171)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn176)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn192)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn196)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn201)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn209)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn218)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn223)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x54\x72\x79", 34, -8546630798215162542, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x79\x20\x66\x61\x69\x6c", 8, 23387625596074996, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x79\x20\x65\x6e\x64", 7, 231560649457195, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, 2015636186561573124, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, 2015636186561573124, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 8047758300052272989, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, 2015636186561573124, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 8047758300052272989, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, 2015636186561573124, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 8047758300052272989, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, 2015636186561573124, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 8047758300052272989, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, 2015636186561573124, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 8047758300052272989, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, 2015636186561573124, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 8047758300052272989, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, 2015636186561573124, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, 2015636186561573124, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 95, -5679166324226942043, NULL };

void org$frostlang$frostc$statement$Try$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4) {

org$frostlang$frostc$Compiler$AutoScope* local0 = NULL;
org$frostlang$frostc$IR* local1 = NULL;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$Variable* local4 = NULL;
frost$core$String* local5 = NULL;
org$frostlang$frostc$Compiler$AutoContext* local6 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local7 = NULL;
org$frostlang$frostc$ASTNode* local8 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local9 = NULL;
org$frostlang$frostc$ASTNode* local10 = NULL;
// line 18
org$frostlang$frostc$Compiler$AutoScope* $tmp2 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp2, param0);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$frostc$Compiler$AutoScope* $tmp3 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
*(&local0) = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// unreffing REF($1:org.frostlang.frostc.Compiler.AutoScope)
// line 19
org$frostlang$frostc$IR** $tmp4 = &param0->ir;
org$frostlang$frostc$IR* $tmp5 = *$tmp4;
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
org$frostlang$frostc$IR* $tmp6 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
*(&local1) = $tmp5;
// line 20
org$frostlang$frostc$IR* $tmp7 = *(&local1);
$fn9 $tmp8 = ($fn9) $tmp7->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp10 = $tmp8($tmp7, &$s11);
*(&local2) = $tmp10;
// line 21
org$frostlang$frostc$IR* $tmp12 = *(&local1);
$fn14 $tmp13 = ($fn14) $tmp12->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp15 = $tmp13($tmp12, &$s16);
*(&local3) = $tmp15;
// line 22
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
// line 23
frost$core$Bit $tmp17 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block1; else goto block3;
block1:;
// line 24
frost$core$Bit $tmp19 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp21 = (frost$core$Int64) {24};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block4:;
frost$core$Int64* $tmp24 = &param3->$rawValue;
frost$core$Int64 $tmp25 = *$tmp24;
frost$core$Int64 $tmp26 = (frost$core$Int64) {22};
frost$core$Bit $tmp27 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp25, $tmp26);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp29 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp30 = *$tmp29;
frost$core$String** $tmp31 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp32 = *$tmp31;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$String* $tmp33 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
*(&local5) = $tmp32;
// line 26
org$frostlang$frostc$Variable* $tmp34 = (org$frostlang$frostc$Variable*) frostObjectAlloc(88, (frost$core$Class*) &org$frostlang$frostc$Variable$class);
frost$core$Int64 $tmp35 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp36 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp35);
frost$core$String* $tmp37 = *(&local5);
org$frostlang$frostc$Type* $tmp38 = org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Variable$Storage* $tmp39 = (org$frostlang$frostc$Variable$Storage*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Variable$Storage$class);
frost$core$Int64 $tmp40 = (frost$core$Int64) {0};
org$frostlang$frostc$IR* $tmp41 = *(&local1);
frost$collections$Array** $tmp42 = &$tmp41->locals;
frost$collections$Array* $tmp43 = *$tmp42;
ITable* $tmp44 = ((frost$collections$CollectionView*) $tmp43)->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp44 = $tmp44->next;
}
$fn46 $tmp45 = $tmp44->methods[0];
frost$core$Int64 $tmp47 = $tmp45(((frost$collections$CollectionView*) $tmp43));
org$frostlang$frostc$Variable$Storage$init$frost$core$Int64$frost$core$Int64($tmp39, $tmp40, $tmp47);
org$frostlang$frostc$Variable$init$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Variable$Storage($tmp34, param1, $tmp36, $tmp37, $tmp38, $tmp39);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
org$frostlang$frostc$Variable* $tmp48 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
*(&local4) = $tmp34;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// unreffing REF($72:org.frostlang.frostc.Variable.Storage)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
// unreffing REF($71:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing REF($67:org.frostlang.frostc.Variable)
// line 28
org$frostlang$frostc$Variable* $tmp49 = *(&local4);
frost$core$Bit $tmp50 = frost$core$Bit$init$builtin_bit($tmp49 != NULL);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp52 = (frost$core$Int64) {28};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s53, $tmp52, &$s54);
abort(); // unreachable
block9:;
frost$collections$Stack** $tmp55 = &param0->currentMethod;
frost$collections$Stack* $tmp56 = *$tmp55;
frost$core$Int64 $tmp57 = (frost$core$Int64) {0};
frost$core$Object* $tmp58 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp56, $tmp57);
frost$core$Weak* $tmp59 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp59, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp58)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Weak** $tmp60 = &$tmp49->owner;
frost$core$Weak* $tmp61 = *$tmp60;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Weak** $tmp62 = &$tmp49->owner;
*$tmp62 = $tmp59;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing REF($115:frost.core.Weak<org.frostlang.frostc.MethodDecl?>)
frost$core$Frost$unref$frost$core$Object$Q($tmp58);
// unreffing REF($112:frost.collections.Stack.T)
// line 29
org$frostlang$frostc$Variable* $tmp63 = *(&local4);
frost$core$Bit $tmp64 = frost$core$Bit$init$builtin_bit($tmp63 != NULL);
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp66 = (frost$core$Int64) {29};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s67, $tmp66, &$s68);
abort(); // unreachable
block13:;
org$frostlang$frostc$Type** $tmp69 = &$tmp63->type;
org$frostlang$frostc$Type* $tmp70 = *$tmp69;
frost$core$Bit $tmp71 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp70);
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block11; else goto block12;
block11:;
// line 30
org$frostlang$frostc$IR* $tmp73 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp74 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp75 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp76 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp77 = (frost$core$Int64) {4};
org$frostlang$frostc$Variable* $tmp78 = *(&local4);
frost$core$Bit $tmp79 = frost$core$Bit$init$builtin_bit($tmp78 != NULL);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp81 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s82, $tmp81, &$s83);
abort(); // unreachable
block15:;
org$frostlang$frostc$Type** $tmp84 = &$tmp78->type;
org$frostlang$frostc$Type* $tmp85 = *$tmp84;
org$frostlang$frostc$Type* $tmp86 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp85);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp76, $tmp77, $tmp86);
org$frostlang$frostc$IR$Value* $tmp87 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp88 = (frost$core$Int64) {2};
org$frostlang$frostc$IR* $tmp89 = *(&local1);
frost$collections$Array** $tmp90 = &$tmp89->locals;
frost$collections$Array* $tmp91 = *$tmp90;
ITable* $tmp92 = ((frost$collections$CollectionView*) $tmp91)->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp92 = $tmp92->next;
}
$fn94 $tmp93 = $tmp92->methods[0];
frost$core$Int64 $tmp95 = $tmp93(((frost$collections$CollectionView*) $tmp91));
org$frostlang$frostc$Variable* $tmp96 = *(&local4);
frost$core$Bit $tmp97 = frost$core$Bit$init$builtin_bit($tmp96 != NULL);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp99 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s100, $tmp99, &$s101);
abort(); // unreachable
block17:;
org$frostlang$frostc$Type** $tmp102 = &$tmp96->type;
org$frostlang$frostc$Type* $tmp103 = *$tmp102;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp87, $tmp88, $tmp95, $tmp103);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp74, $tmp75, param1, $tmp76, $tmp87);
$fn105 $tmp104 = ($fn105) $tmp73->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp106 = $tmp104($tmp73, $tmp74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// unreffing REF($167:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// unreffing REF($165:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing REF($152:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing REF($150:org.frostlang.frostc.IR.Statement)
// line 32
frost$collections$Stack** $tmp107 = &param0->enclosingContexts;
frost$collections$Stack* $tmp108 = *$tmp107;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp109 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp110 = (frost$core$Int64) {2};
org$frostlang$frostc$Variable* $tmp111 = *(&local4);
frost$core$Bit $tmp112 = frost$core$Bit$init$builtin_bit($tmp111 != NULL);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp114 = (frost$core$Int64) {32};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s115, $tmp114, &$s116);
abort(); // unreachable
block19:;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable($tmp109, $tmp110, $tmp111);
frost$collections$Stack$push$frost$collections$Stack$T($tmp108, ((frost$core$Object*) $tmp109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
// unreffing REF($206:org.frostlang.frostc.Compiler.EnclosingContext)
goto block12;
block12:;
// line 34
org$frostlang$frostc$IR* $tmp117 = *(&local1);
frost$collections$Array** $tmp118 = &$tmp117->locals;
frost$collections$Array* $tmp119 = *$tmp118;
org$frostlang$frostc$Variable* $tmp120 = *(&local4);
frost$core$Bit $tmp121 = frost$core$Bit$init$builtin_bit($tmp120 != NULL);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp123 = (frost$core$Int64) {34};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s124, $tmp123, &$s125);
abort(); // unreachable
block21:;
org$frostlang$frostc$Type** $tmp126 = &$tmp120->type;
org$frostlang$frostc$Type* $tmp127 = *$tmp126;
frost$collections$Array$add$frost$collections$Array$T($tmp119, ((frost$core$Object*) $tmp127));
frost$core$String* $tmp128 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
goto block6;
block8:;
// line 37
frost$core$Bit $tmp129 = frost$core$Bit$init$builtin_bit(false);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp131 = (frost$core$Int64) {37};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s132, $tmp131);
abort(); // unreachable
block23:;
goto block6;
block6:;
goto block2;
block3:;
// line 1
// line 42
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Variable*) NULL)));
org$frostlang$frostc$Variable* $tmp133 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
goto block2;
block2:;
// line 1
// line 45
org$frostlang$frostc$Compiler$AutoContext* $tmp134 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp135 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp136 = (frost$core$Int64) {4};
org$frostlang$frostc$IR$Block$ID $tmp137 = *(&local2);
org$frostlang$frostc$Variable* $tmp138 = *(&local4);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Block$ID$Q$org$frostlang$frostc$Variable$Q($tmp135, $tmp136, ((org$frostlang$frostc$IR$Block$ID$nullable) { $tmp137, true }), $tmp138);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp134, param0, $tmp135);
*(&local6) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
org$frostlang$frostc$Compiler$AutoContext* $tmp139 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
*(&local6) = $tmp134;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// unreffing REF($269:org.frostlang.frostc.Compiler.EnclosingContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// unreffing REF($268:org.frostlang.frostc.Compiler.AutoContext)
// line 47
org$frostlang$frostc$Compiler$AutoScope* $tmp140 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp140, param0);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
org$frostlang$frostc$Compiler$AutoScope* $tmp141 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local7) = $tmp140;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
// unreffing REF($290:org.frostlang.frostc.Compiler.AutoScope)
// line 48
ITable* $tmp142 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp142->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp142 = $tmp142->next;
}
$fn144 $tmp143 = $tmp142->methods[0];
frost$collections$Iterator* $tmp145 = $tmp143(((frost$collections$Iterable*) param2));
goto block25;
block25:;
ITable* $tmp146 = $tmp145->$class->itable;
while ($tmp146->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp146 = $tmp146->next;
}
$fn148 $tmp147 = $tmp146->methods[0];
frost$core$Bit $tmp149 = $tmp147($tmp145);
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block27; else goto block26;
block26:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp151 = $tmp145->$class->itable;
while ($tmp151->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp151 = $tmp151->next;
}
$fn153 $tmp152 = $tmp151->methods[1];
frost$core$Object* $tmp154 = $tmp152($tmp145);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp154)));
org$frostlang$frostc$ASTNode* $tmp155 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp154);
// line 49
org$frostlang$frostc$ASTNode* $tmp156 = *(&local8);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp156);
frost$core$Frost$unref$frost$core$Object$Q($tmp154);
// unreffing REF($317:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp157 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
// unreffing s
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block25;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing REF($306:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlang$frostc$Compiler$AutoScope* $tmp158 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
// unreffing tryScope
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp159 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
// unreffing context
*(&local6) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
// line 52
org$frostlang$frostc$IR* $tmp160 = *(&local1);
$fn162 $tmp161 = ($fn162) $tmp160->$class->vtable[5];
frost$core$Bit $tmp163 = $tmp161($tmp160);
frost$core$Bit $tmp164 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp163);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block28; else goto block29;
block28:;
// line 53
org$frostlang$frostc$IR* $tmp166 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp167 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp168 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp169 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp167, $tmp168, param1, $tmp169);
$fn171 $tmp170 = ($fn171) $tmp166->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp172 = $tmp170($tmp166, $tmp167);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
// unreffing REF($359:org.frostlang.frostc.IR.Statement)
goto block29;
block29:;
// line 55
org$frostlang$frostc$IR* $tmp173 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp174 = *(&local2);
$fn176 $tmp175 = ($fn176) $tmp173->$class->vtable[4];
$tmp175($tmp173, $tmp174);
// line 1
// line 1
// line 58
org$frostlang$frostc$Compiler$AutoScope* $tmp177 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp177, param0);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
org$frostlang$frostc$Compiler$AutoScope* $tmp178 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local9) = $tmp177;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// unreffing REF($377:org.frostlang.frostc.Compiler.AutoScope)
// line 59
org$frostlang$frostc$Variable* $tmp179 = *(&local4);
frost$core$Bit $tmp180 = frost$core$Bit$init$builtin_bit($tmp179 != NULL);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block30; else goto block31;
block30:;
// line 60
org$frostlang$frostc$SymbolTable** $tmp182 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp183 = *$tmp182;
org$frostlang$frostc$Variable* $tmp184 = *(&local4);
frost$core$Bit $tmp185 = frost$core$Bit$init$builtin_bit($tmp184 != NULL);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp187 = (frost$core$Int64) {60};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s188, $tmp187, &$s189);
abort(); // unreachable
block32:;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp183, ((org$frostlang$frostc$Symbol*) $tmp184));
goto block31;
block31:;
// line 62
ITable* $tmp190 = ((frost$collections$Iterable*) param4)->$class->itable;
while ($tmp190->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp190 = $tmp190->next;
}
$fn192 $tmp191 = $tmp190->methods[0];
frost$collections$Iterator* $tmp193 = $tmp191(((frost$collections$Iterable*) param4));
goto block34;
block34:;
ITable* $tmp194 = $tmp193->$class->itable;
while ($tmp194->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp194 = $tmp194->next;
}
$fn196 $tmp195 = $tmp194->methods[0];
frost$core$Bit $tmp197 = $tmp195($tmp193);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block36; else goto block35;
block35:;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp199 = $tmp193->$class->itable;
while ($tmp199->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp199 = $tmp199->next;
}
$fn201 $tmp200 = $tmp199->methods[1];
frost$core$Object* $tmp202 = $tmp200($tmp193);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp202)));
org$frostlang$frostc$ASTNode* $tmp203 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
*(&local10) = ((org$frostlang$frostc$ASTNode*) $tmp202);
// line 63
org$frostlang$frostc$ASTNode* $tmp204 = *(&local10);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp204);
frost$core$Frost$unref$frost$core$Object$Q($tmp202);
// unreffing REF($424:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp205 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// unreffing s
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block34;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// unreffing REF($413:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlang$frostc$Compiler$AutoScope* $tmp206 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// unreffing failScope
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 66
org$frostlang$frostc$IR* $tmp207 = *(&local1);
$fn209 $tmp208 = ($fn209) $tmp207->$class->vtable[5];
frost$core$Bit $tmp210 = $tmp208($tmp207);
frost$core$Bit $tmp211 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp210);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block37; else goto block38;
block37:;
// line 67
org$frostlang$frostc$IR* $tmp213 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp214 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp215 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp216 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp214, $tmp215, param1, $tmp216);
$fn218 $tmp217 = ($fn218) $tmp213->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp219 = $tmp217($tmp213, $tmp214);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// unreffing REF($461:org.frostlang.frostc.IR.Statement)
goto block38;
block38:;
// line 70
org$frostlang$frostc$IR* $tmp220 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp221 = *(&local3);
$fn223 $tmp222 = ($fn223) $tmp220->$class->vtable[4];
$tmp222($tmp220, $tmp221);
org$frostlang$frostc$Variable* $tmp224 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// unreffing errorVar
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
org$frostlang$frostc$IR* $tmp225 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp226 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// unreffing scope
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return;

}
void org$frostlang$frostc$statement$Try$init(org$frostlang$frostc$statement$Try* param0) {

return;

}
void org$frostlang$frostc$statement$Try$cleanup(org$frostlang$frostc$statement$Try* param0) {

// line 14
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






