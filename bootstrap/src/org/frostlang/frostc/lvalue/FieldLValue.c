#include "org/frostlang/frostc/lvalue/FieldLValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Frost.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/FieldDecl/Kind.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$FieldLValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$FieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$FieldLValue$compileStore$org$frostlang$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$FieldLValue$class_type org$frostlang$frostc$lvalue$FieldLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$FieldLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$lvalue$FieldLValue$cleanup, org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$FieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$FieldLValue$compileStore$org$frostlang$frostc$IR$Value, org$frostlang$frostc$lvalue$FieldLValue$compileUnref} };

typedef frost$core$Bit (*$fn16)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn27)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn39)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn174)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn209)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn212)(frost$core$Object*);
typedef frost$core$String* (*$fn218)(frost$core$Object*);
typedef frost$core$Bit (*$fn256)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn299)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn352)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef frost$core$Bit (*$fn387)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn440)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn455)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn471)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn519)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn523)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn611)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn642)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn707)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn714)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn730)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn746)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn763)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn795)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn810)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn826)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 39, -1155759797158457110, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20\x63\x6c\x61\x73\x73\x20", 21, 6374091204168990154, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, -4672451134882412660, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x66\x6f\x72\x20", 5, 1394196365474570014, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s401 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f", 4, 7433203768955287672, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s513 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74", 3, -3106811833996379657, NULL };
static frost$core$String $s664 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x65\x74\x5f", 4, 3257523206249946292, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s699 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s777 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };

void org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$lvalue$FieldLValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$FieldDecl* param4) {

org$frostlang$frostc$Compiler$Resolution local0;
org$frostlang$frostc$Compiler$Resolution local1;
frost$core$Bit local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$IR$Statement$ID local5;
org$frostlang$frostc$IR$Statement$ID local6;
org$frostlang$frostc$Type* local7 = NULL;
org$frostlang$frostc$Type* local8 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:30
org$frostlang$frostc$Position* $tmp5 = &param0->position;
*$tmp5 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:31
org$frostlang$frostc$Compiler$Resolution* $tmp6 = &param4->resolved;
org$frostlang$frostc$Compiler$Resolution $tmp7 = *$tmp6;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp8;
$tmp8 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp8->value = $tmp7;
frost$core$Int $tmp9 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from FieldLValue.frost:31:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
frost$core$Int* $tmp10 = &(&local1)->$rawValue;
*$tmp10 = $tmp9;
org$frostlang$frostc$Compiler$Resolution $tmp11 = *(&local1);
*(&local0) = $tmp11;
org$frostlang$frostc$Compiler$Resolution $tmp12 = *(&local0);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp13;
$tmp13 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp13->value = $tmp12;
ITable* $tmp14 = ((frost$core$Equatable*) $tmp8)->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[0];
frost$core$Bit $tmp17 = $tmp15(((frost$core$Equatable*) $tmp8), ((frost$core$Equatable*) $tmp13));
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block2; else goto block3;
block3:;
frost$core$Int $tmp19 = (frost$core$Int) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s20, $tmp19);
abort(); // unreachable
block2:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp13)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp8)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:32
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FieldDecl** $tmp21 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp22 = *$tmp21;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
org$frostlang$frostc$FieldDecl** $tmp23 = &param0->field;
*$tmp23 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:33
frost$core$Bit $tmp24 = (frost$core$Bit) {param3 != NULL};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block7; else goto block6;
block7:;
$fn27 $tmp26 = ($fn27) param3->$class->vtable[2];
org$frostlang$frostc$Type* $tmp28 = $tmp26(param3);
// begin inline call to function org.frostlang.frostc.Type.get_isClassLiteral():frost.core.Bit from FieldLValue.frost:33:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:369
org$frostlang$frostc$Type$Kind* $tmp29 = &$tmp28->typeKind;
org$frostlang$frostc$Type$Kind $tmp30 = *$tmp29;
org$frostlang$frostc$Type$Kind$wrapper* $tmp31;
$tmp31 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp31->value = $tmp30;
frost$core$Int $tmp32 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:369:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp33 = &(&local4)->$rawValue;
*$tmp33 = $tmp32;
org$frostlang$frostc$Type$Kind $tmp34 = *(&local4);
*(&local3) = $tmp34;
org$frostlang$frostc$Type$Kind $tmp35 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp36;
$tmp36 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp36->value = $tmp35;
ITable* $tmp37 = ((frost$core$Equatable*) $tmp31)->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp37 = $tmp37->next;
}
$fn39 $tmp38 = $tmp37->methods[0];
frost$core$Bit $tmp40 = $tmp38(((frost$core$Equatable*) $tmp31), ((frost$core$Equatable*) $tmp36));
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block10; else goto block11;
block10:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:369:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp42 = &$tmp28->_subtypes;
org$frostlang$frostc$FixedArray* $tmp43 = *$tmp42;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$Int $tmp44 = (frost$core$Int) {0u};
frost$core$Object* $tmp45 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp43, $tmp44);
frost$core$String** $tmp46 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp45))->name;
frost$core$String* $tmp47 = *$tmp46;
frost$core$Bit $tmp48 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp47, &$s49);
frost$core$Frost$unref$frost$core$Object$Q($tmp45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local2) = $tmp48;
goto block12;
block11:;
*(&local2) = $tmp40;
goto block12;
block12:;
frost$core$Bit $tmp50 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp36)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp31)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:33:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp51 = $tmp50.value;
bool $tmp52 = !$tmp51;
frost$core$Bit $tmp53 = (frost$core$Bit) {$tmp52};
bool $tmp54 = $tmp53.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
if ($tmp54) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:34
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp55 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp56 = *$tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
org$frostlang$frostc$IR$Value** $tmp57 = &param0->target;
*$tmp57 = param3;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:36
org$frostlang$frostc$Annotations** $tmp58 = &param4->annotations;
org$frostlang$frostc$Annotations* $tmp59 = *$tmp58;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from FieldLValue.frost:36:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int* $tmp60 = &$tmp59->flags;
frost$core$Int $tmp61 = *$tmp60;
frost$core$Int $tmp62 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp63 = $tmp61.value;
int64_t $tmp64 = $tmp62.value;
int64_t $tmp65 = $tmp63 & $tmp64;
frost$core$Int $tmp66 = (frost$core$Int) {$tmp65};
frost$core$Int $tmp67 = (frost$core$Int) {0u};
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 != $tmp69;
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:36:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp72 = $tmp71.value;
bool $tmp73 = !$tmp72;
frost$core$Bit $tmp74 = (frost$core$Bit) {$tmp73};
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:37
frost$core$Weak** $tmp76 = &param4->owner;
frost$core$Weak* $tmp77 = *$tmp76;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:37:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp78 = &$tmp77->_valid;
frost$core$Bit $tmp79 = *$tmp78;
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block26; else goto block27;
block27:;
frost$core$Int $tmp81 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s82, $tmp81);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp83 = &$tmp77->value;
frost$core$Object* $tmp84 = *$tmp83;
frost$core$Frost$ref$frost$core$Object$Q($tmp84);
org$frostlang$frostc$Annotations** $tmp85 = &((org$frostlang$frostc$ClassDecl*) $tmp84)->annotations;
org$frostlang$frostc$Annotations* $tmp86 = *$tmp85;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from FieldLValue.frost:37:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:155
frost$core$Int* $tmp87 = &$tmp86->flags;
frost$core$Int $tmp88 = *$tmp87;
frost$core$Int $tmp89 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89.value;
int64_t $tmp92 = $tmp90 & $tmp91;
frost$core$Int $tmp93 = (frost$core$Int) {$tmp92};
frost$core$Int $tmp94 = (frost$core$Int) {0u};
int64_t $tmp95 = $tmp93.value;
int64_t $tmp96 = $tmp94.value;
bool $tmp97 = $tmp95 != $tmp96;
frost$core$Bit $tmp98 = (frost$core$Bit) {$tmp97};
bool $tmp99 = $tmp98.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp84);
if ($tmp99) goto block23; else goto block22;
block23:;
frost$core$Bit* $tmp100 = &param1->reportErrors;
frost$core$Bit $tmp101 = *$tmp100;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:37:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp102 = $tmp101.value;
bool $tmp103 = !$tmp102;
frost$core$Bit $tmp104 = (frost$core$Bit) {$tmp103};
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:39
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp106 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp107 = (frost$core$Int) {7u};
frost$core$Int $tmp108 = (frost$core$Int) {18446744073709551615u};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from FieldLValue.frost:39:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int* $tmp109 = &(&local6)->value;
*$tmp109 = $tmp108;
org$frostlang$frostc$IR$Statement$ID $tmp110 = *(&local6);
*(&local5) = $tmp110;
org$frostlang$frostc$IR$Statement$ID $tmp111 = *(&local5);
frost$core$Weak** $tmp112 = &param4->owner;
frost$core$Weak* $tmp113 = *$tmp112;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:39:71
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp114 = &$tmp113->_valid;
frost$core$Bit $tmp115 = *$tmp114;
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block34; else goto block35;
block35:;
frost$core$Int $tmp117 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s118, $tmp117);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp119 = &$tmp113->value;
frost$core$Object* $tmp120 = *$tmp119;
frost$core$Frost$ref$frost$core$Object$Q($tmp120);
org$frostlang$frostc$Type** $tmp121 = &((org$frostlang$frostc$ClassDecl*) $tmp120)->type;
org$frostlang$frostc$Type* $tmp122 = *$tmp121;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp106, $tmp107, $tmp111, $tmp122);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
org$frostlang$frostc$IR$Value** $tmp123 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp124 = *$tmp123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
org$frostlang$frostc$IR$Value** $tmp125 = &param0->target;
*$tmp125 = $tmp106;
frost$core$Frost$unref$frost$core$Object$Q($tmp120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
goto block21;
block22:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:42
frost$core$Bit $tmp126 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp127 = org$frostlang$frostc$Compiler$compileSelf$org$frostlang$frostc$Position$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param1, param2, $tmp126);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
org$frostlang$frostc$IR$Value** $tmp128 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp129 = *$tmp128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
org$frostlang$frostc$IR$Value** $tmp130 = &param0->target;
*$tmp130 = $tmp127;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
goto block21;
block21:;
goto block16;
block16:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:45
org$frostlang$frostc$Type** $tmp131 = &param4->type;
org$frostlang$frostc$Type* $tmp132 = *$tmp131;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
org$frostlang$frostc$Type** $tmp133 = &param0->rawType;
org$frostlang$frostc$Type* $tmp134 = *$tmp133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
org$frostlang$frostc$Type** $tmp135 = &param0->rawType;
*$tmp135 = $tmp132;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:46
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:47
frost$core$Bit* $tmp136 = &param1->inFieldCleanup;
frost$core$Bit $tmp137 = *$tmp136;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:47:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp138 = $tmp137.value;
bool $tmp139 = !$tmp138;
frost$core$Bit $tmp140 = (frost$core$Bit) {$tmp139};
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block39; else goto block38;
block39:;
org$frostlang$frostc$Annotations** $tmp142 = &param4->annotations;
org$frostlang$frostc$Annotations* $tmp143 = *$tmp142;
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from FieldLValue.frost:47:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:151
frost$core$Int* $tmp144 = &$tmp143->flags;
frost$core$Int $tmp145 = *$tmp144;
frost$core$Int $tmp146 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:151:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp147 = $tmp145.value;
int64_t $tmp148 = $tmp146.value;
int64_t $tmp149 = $tmp147 & $tmp148;
frost$core$Int $tmp150 = (frost$core$Int) {$tmp149};
frost$core$Int $tmp151 = (frost$core$Int) {0u};
int64_t $tmp152 = $tmp150.value;
int64_t $tmp153 = $tmp151.value;
bool $tmp154 = $tmp152 != $tmp153;
frost$core$Bit $tmp155 = (frost$core$Bit) {$tmp154};
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block36; else goto block38;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:48
org$frostlang$frostc$Type** $tmp157 = &param0->rawType;
org$frostlang$frostc$Type* $tmp158 = *$tmp157;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from FieldLValue.frost:48:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp159 = &$tmp158->_subtypes;
org$frostlang$frostc$FixedArray* $tmp160 = *$tmp159;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
frost$core$Int $tmp161 = (frost$core$Int) {1u};
frost$core$Object* $tmp162 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp160, $tmp161);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp162)));
org$frostlang$frostc$Type* $tmp163 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local7) = ((org$frostlang$frostc$Type*) $tmp162);
frost$core$Frost$unref$frost$core$Object$Q($tmp162);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
goto block37;
block38:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:51
org$frostlang$frostc$Type** $tmp164 = &param0->rawType;
org$frostlang$frostc$Type* $tmp165 = *$tmp164;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
org$frostlang$frostc$Type* $tmp166 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
*(&local7) = $tmp165;
goto block37;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:53
org$frostlang$frostc$IR$Value** $tmp167 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp168 = *$tmp167;
frost$core$Bit $tmp169 = (frost$core$Bit) {$tmp168 != NULL};
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block44; else goto block46;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:54
org$frostlang$frostc$IR$Value** $tmp171 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp172 = *$tmp171;
$fn174 $tmp173 = ($fn174) $tmp172->$class->vtable[2];
org$frostlang$frostc$Type* $tmp175 = $tmp173($tmp172);
frost$core$Weak** $tmp176 = &param4->owner;
frost$core$Weak* $tmp177 = *$tmp176;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:54:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp178 = &$tmp177->_valid;
frost$core$Bit $tmp179 = *$tmp178;
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block49; else goto block50;
block50:;
frost$core$Int $tmp181 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s182, $tmp181);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp183 = &$tmp177->value;
frost$core$Object* $tmp184 = *$tmp183;
frost$core$Frost$ref$frost$core$Object$Q($tmp184);
org$frostlang$frostc$Type* $tmp185 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param1, $tmp175, ((org$frostlang$frostc$ClassDecl*) $tmp184));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
org$frostlang$frostc$Type* $tmp186 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local8) = $tmp185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:55
org$frostlang$frostc$Type* $tmp187 = *(&local8);
frost$core$Bit $tmp188 = (frost$core$Bit) {$tmp187 != NULL};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block51; else goto block52;
block52:;
frost$core$Int $tmp190 = (frost$core$Int) {55u};
frost$core$Weak** $tmp191 = &param4->owner;
frost$core$Weak* $tmp192 = *$tmp191;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:56:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp193 = &$tmp192->_valid;
frost$core$Bit $tmp194 = *$tmp193;
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block55; else goto block56;
block56:;
frost$core$Int $tmp196 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s197, $tmp196);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp198 = &$tmp192->value;
frost$core$Object* $tmp199 = *$tmp198;
frost$core$Frost$ref$frost$core$Object$Q($tmp199);
frost$core$String** $tmp200 = &((org$frostlang$frostc$ClassDecl*) $tmp199)->name;
frost$core$String* $tmp201 = *$tmp200;
frost$core$String* $tmp202 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s203, $tmp201);
frost$core$String* $tmp204 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp202, &$s205);
org$frostlang$frostc$IR$Value** $tmp206 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp207 = *$tmp206;
$fn209 $tmp208 = ($fn209) $tmp207->$class->vtable[2];
org$frostlang$frostc$Type* $tmp210 = $tmp208($tmp207);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from FieldLValue.frost:56:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn212 $tmp211 = ($fn212) ((frost$core$Object*) $tmp210)->$class->vtable[0];
frost$core$String* $tmp213 = $tmp211(((frost$core$Object*) $tmp210));
frost$core$String* $tmp214 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp204, $tmp213);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$String* $tmp215 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp214, &$s216);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from FieldLValue.frost:56:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn218 $tmp217 = ($fn218) ((frost$core$Object*) param4)->$class->vtable[0];
frost$core$String* $tmp219 = $tmp217(((frost$core$Object*) param4));
frost$core$String* $tmp220 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp215, $tmp219);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$String* $tmp221 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp220, &$s222);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s223, $tmp190, $tmp221);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
frost$core$Frost$unref$frost$core$Object$Q($tmp199);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:57
org$frostlang$frostc$Type* $tmp224 = *(&local8);
org$frostlang$frostc$Type* $tmp225 = *(&local7);
org$frostlang$frostc$Type* $tmp226 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp224, $tmp225);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
org$frostlang$frostc$Type** $tmp227 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp228 = *$tmp227;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
org$frostlang$frostc$Type** $tmp229 = &param0->effectiveType;
*$tmp229 = $tmp226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
org$frostlang$frostc$Type* $tmp230 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
goto block45;
block46:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:60
org$frostlang$frostc$Type* $tmp231 = *(&local7);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
org$frostlang$frostc$Type** $tmp232 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp233 = *$tmp232;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
org$frostlang$frostc$Type** $tmp234 = &param0->effectiveType;
*$tmp234 = $tmp231;
goto block45;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:62
org$frostlang$frostc$IR$Value** $tmp235 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp236 = *$tmp235;
frost$core$Bit $tmp237 = (frost$core$Bit) {$tmp236 != NULL};
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:63
org$frostlang$frostc$IR$Value** $tmp239 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp240 = *$tmp239;
frost$core$Weak** $tmp241 = &param4->owner;
frost$core$Weak* $tmp242 = *$tmp241;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:63:72
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp243 = &$tmp242->_valid;
frost$core$Bit $tmp244 = *$tmp243;
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block63; else goto block64;
block64:;
frost$core$Int $tmp246 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s247, $tmp246);
abort(); // unreachable
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp248 = &$tmp242->value;
frost$core$Object* $tmp249 = *$tmp248;
frost$core$Frost$ref$frost$core$Object$Q($tmp249);
org$frostlang$frostc$Type** $tmp250 = &((org$frostlang$frostc$ClassDecl*) $tmp249)->type;
org$frostlang$frostc$Type* $tmp251 = *$tmp250;
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from FieldLValue.frost:63:43
org$frostlang$frostc$Type** $tmp252 = &param1->VOID_TYPE;
org$frostlang$frostc$Type* $tmp253 = *$tmp252;
ITable* $tmp254 = ((frost$core$Equatable*) $tmp251)->$class->itable;
while ($tmp254->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[1];
frost$core$Bit $tmp257 = $tmp255(((frost$core$Equatable*) $tmp251), ((frost$core$Equatable*) $tmp253));
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block66; else goto block67;
block67:;
frost$core$Int $tmp259 = (frost$core$Int) {4096u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s260, $tmp259, &$s261);
abort(); // unreachable
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4097
frost$core$Bit $tmp262 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp263 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param1, param2, $tmp240, $tmp251, $tmp262);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
org$frostlang$frostc$IR$Value** $tmp264 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp265 = *$tmp264;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
org$frostlang$frostc$IR$Value** $tmp266 = &param0->target;
*$tmp266 = $tmp263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$Frost$unref$frost$core$Object$Q($tmp249);
goto block60;
block60:;
org$frostlang$frostc$Type* $tmp267 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$FieldLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:69
org$frostlang$frostc$Type** $tmp268 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp269 = *$tmp268;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
return $tmp269;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$FieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$FieldLValue* param0) {

org$frostlang$frostc$FieldDecl$Kind local0;
org$frostlang$frostc$FieldDecl$Kind local1;
org$frostlang$frostc$SymbolTable* local2 = NULL;
org$frostlang$frostc$IR$Value* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$FieldDecl$Kind local5;
org$frostlang$frostc$FieldDecl$Kind local6;
org$frostlang$frostc$IR$Statement$ID local7;
org$frostlang$frostc$IR$Statement$ID local8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:74
org$frostlang$frostc$FieldDecl** $tmp270 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp271 = *$tmp270;
org$frostlang$frostc$Annotations** $tmp272 = &$tmp271->annotations;
org$frostlang$frostc$Annotations* $tmp273 = *$tmp272;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from FieldLValue.frost:74:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int* $tmp274 = &$tmp273->flags;
frost$core$Int $tmp275 = *$tmp274;
frost$core$Int $tmp276 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp277 = $tmp275.value;
int64_t $tmp278 = $tmp276.value;
int64_t $tmp279 = $tmp277 & $tmp278;
frost$core$Int $tmp280 = (frost$core$Int) {$tmp279};
frost$core$Int $tmp281 = (frost$core$Int) {0u};
int64_t $tmp282 = $tmp280.value;
int64_t $tmp283 = $tmp281.value;
bool $tmp284 = $tmp282 != $tmp283;
frost$core$Bit $tmp285 = (frost$core$Bit) {$tmp284};
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block3; else goto block2;
block3:;
org$frostlang$frostc$FieldDecl** $tmp287 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp288 = *$tmp287;
org$frostlang$frostc$FieldDecl$Kind* $tmp289 = &$tmp288->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp290 = *$tmp289;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp291;
$tmp291 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp291->value = $tmp290;
frost$core$Int $tmp292 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:74:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp293 = &(&local1)->$rawValue;
*$tmp293 = $tmp292;
org$frostlang$frostc$FieldDecl$Kind $tmp294 = *(&local1);
*(&local0) = $tmp294;
org$frostlang$frostc$FieldDecl$Kind $tmp295 = *(&local0);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp296;
$tmp296 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp296->value = $tmp295;
ITable* $tmp297 = ((frost$core$Equatable*) $tmp291)->$class->itable;
while ($tmp297->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp297 = $tmp297->next;
}
$fn299 $tmp298 = $tmp297->methods[0];
frost$core$Bit $tmp300 = $tmp298(((frost$core$Equatable*) $tmp291), ((frost$core$Equatable*) $tmp296));
bool $tmp301 = $tmp300.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp296)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp291)));
if ($tmp301) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:75
org$frostlang$frostc$Compiler** $tmp302 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp303 = *$tmp302;
frost$collections$Stack** $tmp304 = &$tmp303->currentClass;
frost$collections$Stack* $tmp305 = *$tmp304;
org$frostlang$frostc$FieldDecl** $tmp306 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp307 = *$tmp306;
frost$core$Weak** $tmp308 = &$tmp307->owner;
frost$core$Weak* $tmp309 = *$tmp308;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:75:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp310 = &$tmp309->_valid;
frost$core$Bit $tmp311 = *$tmp310;
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block9; else goto block10;
block10:;
frost$core$Int $tmp313 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s314, $tmp313);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp315 = &$tmp309->value;
frost$core$Object* $tmp316 = *$tmp315;
frost$core$Frost$ref$frost$core$Object$Q($tmp316);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from FieldLValue.frost:75:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp317 = &$tmp305->contents;
frost$collections$Array* $tmp318 = *$tmp317;
frost$collections$Array$add$frost$collections$Array$T($tmp318, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp316)));
frost$core$Frost$unref$frost$core$Object$Q($tmp316);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:76
org$frostlang$frostc$Compiler** $tmp319 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp320 = *$tmp319;
org$frostlang$frostc$SymbolTable** $tmp321 = &$tmp320->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp322 = *$tmp321;
*(&local2) = ((org$frostlang$frostc$SymbolTable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
org$frostlang$frostc$SymbolTable* $tmp323 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local2) = $tmp322;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:77
org$frostlang$frostc$Compiler** $tmp324 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp325 = *$tmp324;
org$frostlang$frostc$Compiler** $tmp326 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp327 = *$tmp326;
org$frostlang$frostc$FieldDecl** $tmp328 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp329 = *$tmp328;
frost$core$Weak** $tmp330 = &$tmp329->owner;
frost$core$Weak* $tmp331 = *$tmp330;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:77:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp332 = &$tmp331->_valid;
frost$core$Bit $tmp333 = *$tmp332;
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block14; else goto block15;
block15:;
frost$core$Int $tmp335 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s336, $tmp335);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp337 = &$tmp331->value;
frost$core$Object* $tmp338 = *$tmp337;
frost$core$Frost$ref$frost$core$Object$Q($tmp338);
org$frostlang$frostc$SymbolTable* $tmp339 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp327, ((org$frostlang$frostc$ClassDecl*) $tmp338));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
org$frostlang$frostc$SymbolTable** $tmp340 = &$tmp325->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp341 = *$tmp340;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
org$frostlang$frostc$SymbolTable** $tmp342 = &$tmp325->symbolTable;
*$tmp342 = $tmp339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$Frost$unref$frost$core$Object$Q($tmp338);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:78
org$frostlang$frostc$Compiler** $tmp343 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp344 = *$tmp343;
org$frostlang$frostc$FieldDecl** $tmp345 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp346 = *$tmp345;
org$frostlang$frostc$ASTNode** $tmp347 = &$tmp346->rawValue;
org$frostlang$frostc$ASTNode* $tmp348 = *$tmp347;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp349 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp350 = (frost$core$Int) {3u};
$fn352 $tmp351 = ($fn352) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp353 = $tmp351(param0);
frost$core$Bit $tmp354 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp349, $tmp350, $tmp353, $tmp354);
org$frostlang$frostc$IR$Value* $tmp355 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp344, $tmp348, $tmp349);
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
org$frostlang$frostc$IR$Value* $tmp356 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local3) = $tmp355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:80
org$frostlang$frostc$Compiler** $tmp357 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp358 = *$tmp357;
org$frostlang$frostc$SymbolTable* $tmp359 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
org$frostlang$frostc$SymbolTable** $tmp360 = &$tmp358->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp361 = *$tmp360;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
org$frostlang$frostc$SymbolTable** $tmp362 = &$tmp358->symbolTable;
*$tmp362 = $tmp359;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:81
org$frostlang$frostc$Compiler** $tmp363 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp364 = *$tmp363;
frost$collections$Stack** $tmp365 = &$tmp364->currentClass;
frost$collections$Stack* $tmp366 = *$tmp365;
frost$core$Object* $tmp367 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp366);
frost$core$Frost$unref$frost$core$Object$Q($tmp367);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:82
org$frostlang$frostc$IR$Value* $tmp368 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
org$frostlang$frostc$IR$Value* $tmp369 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$SymbolTable* $tmp370 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local2) = ((org$frostlang$frostc$SymbolTable*) NULL);
return $tmp368;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:84
org$frostlang$frostc$IR$Value** $tmp371 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp372 = *$tmp371;
frost$core$Bit $tmp373 = (frost$core$Bit) {$tmp372 == NULL};
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:86
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:88
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:89
org$frostlang$frostc$FieldDecl** $tmp375 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp376 = *$tmp375;
org$frostlang$frostc$FieldDecl$Kind* $tmp377 = &$tmp376->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp378 = *$tmp377;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp379;
$tmp379 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp379->value = $tmp378;
frost$core$Int $tmp380 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:89:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp381 = &(&local6)->$rawValue;
*$tmp381 = $tmp380;
org$frostlang$frostc$FieldDecl$Kind $tmp382 = *(&local6);
*(&local5) = $tmp382;
org$frostlang$frostc$FieldDecl$Kind $tmp383 = *(&local5);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp384;
$tmp384 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp384->value = $tmp383;
ITable* $tmp385 = ((frost$core$Equatable*) $tmp379)->$class->itable;
while ($tmp385->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp385 = $tmp385->next;
}
$fn387 $tmp386 = $tmp385->methods[0];
frost$core$Bit $tmp388 = $tmp386(((frost$core$Equatable*) $tmp379), ((frost$core$Equatable*) $tmp384));
bool $tmp389 = $tmp388.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp384)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp379)));
if ($tmp389) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:90
org$frostlang$frostc$Compiler** $tmp390 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp391 = *$tmp390;
org$frostlang$frostc$Position* $tmp392 = &param0->position;
org$frostlang$frostc$Position $tmp393 = *$tmp392;
org$frostlang$frostc$IR$Value** $tmp394 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp395 = *$tmp394;
org$frostlang$frostc$FieldDecl** $tmp396 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp397 = *$tmp396;
frost$core$String** $tmp398 = &((org$frostlang$frostc$Symbol*) $tmp397)->name;
frost$core$String* $tmp399 = *$tmp398;
frost$core$String* $tmp400 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s401, $tmp399);
frost$core$String* $tmp402 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp400, &$s403);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp404 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp404);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp405 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp406 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp407 = &param0->rawType;
org$frostlang$frostc$Type* $tmp408 = *$tmp407;
frost$core$Bit $tmp409 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp405, $tmp406, $tmp408, $tmp409);
org$frostlang$frostc$IR$Value* $tmp410 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp391, $tmp393, $tmp395, $tmp402, ((frost$collections$ListView*) $tmp404), $tmp405);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
org$frostlang$frostc$IR$Value* $tmp411 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local4) = $tmp410;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
goto block19;
block20:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:94
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:95
org$frostlang$frostc$Compiler** $tmp412 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp413 = *$tmp412;
org$frostlang$frostc$FieldDecl** $tmp414 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp415 = *$tmp414;
frost$core$Weak** $tmp416 = &$tmp415->owner;
frost$core$Weak* $tmp417 = *$tmp416;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:95:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp418 = &$tmp417->_valid;
frost$core$Bit $tmp419 = *$tmp418;
bool $tmp420 = $tmp419.value;
if ($tmp420) goto block27; else goto block28;
block28:;
frost$core$Int $tmp421 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s422, $tmp421);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp423 = &$tmp417->value;
frost$core$Object* $tmp424 = *$tmp423;
frost$core$Frost$ref$frost$core$Object$Q($tmp424);
frost$core$Bit $tmp425 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit($tmp413, ((org$frostlang$frostc$ClassDecl*) $tmp424));
bool $tmp426 = $tmp425.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp424);
if ($tmp426) goto block22; else goto block24;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:96
org$frostlang$frostc$Compiler** $tmp427 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp428 = *$tmp427;
org$frostlang$frostc$IR** $tmp429 = &$tmp428->ir;
org$frostlang$frostc$IR* $tmp430 = *$tmp429;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp431 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp432 = (frost$core$Int) {10u};
org$frostlang$frostc$Position* $tmp433 = &param0->position;
org$frostlang$frostc$Position $tmp434 = *$tmp433;
org$frostlang$frostc$IR$Value** $tmp435 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp436 = *$tmp435;
org$frostlang$frostc$FieldDecl** $tmp437 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp438 = *$tmp437;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp431, $tmp432, $tmp434, $tmp436, $tmp438);
$fn440 $tmp439 = ($fn440) $tmp430->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp441 = $tmp439($tmp430, $tmp431);
*(&local7) = $tmp441;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
goto block23;
block24:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:99
org$frostlang$frostc$Compiler** $tmp442 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp443 = *$tmp442;
org$frostlang$frostc$IR** $tmp444 = &$tmp443->ir;
org$frostlang$frostc$IR* $tmp445 = *$tmp444;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp446 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp447 = (frost$core$Int) {11u};
org$frostlang$frostc$Position* $tmp448 = &param0->position;
org$frostlang$frostc$Position $tmp449 = *$tmp448;
org$frostlang$frostc$IR$Value** $tmp450 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp451 = *$tmp450;
org$frostlang$frostc$FieldDecl** $tmp452 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp453 = *$tmp452;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp446, $tmp447, $tmp449, $tmp451, $tmp453);
$fn455 $tmp454 = ($fn455) $tmp445->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp456 = $tmp454($tmp445, $tmp446);
*(&local8) = $tmp456;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:101
org$frostlang$frostc$Compiler** $tmp457 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp458 = *$tmp457;
org$frostlang$frostc$IR** $tmp459 = &$tmp458->ir;
org$frostlang$frostc$IR* $tmp460 = *$tmp459;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp461 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp462 = (frost$core$Int) {14u};
org$frostlang$frostc$Position* $tmp463 = &param0->position;
org$frostlang$frostc$Position $tmp464 = *$tmp463;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp465 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp466 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp467 = *(&local8);
org$frostlang$frostc$Type** $tmp468 = &param0->rawType;
org$frostlang$frostc$Type* $tmp469 = *$tmp468;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp465, $tmp466, $tmp467, $tmp469);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp461, $tmp462, $tmp464, $tmp465);
$fn471 $tmp470 = ($fn471) $tmp460->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp472 = $tmp470($tmp460, $tmp461);
*(&local7) = $tmp472;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:103
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp473 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp474 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp475 = *(&local7);
org$frostlang$frostc$Type** $tmp476 = &param0->rawType;
org$frostlang$frostc$Type* $tmp477 = *$tmp476;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp473, $tmp474, $tmp475, $tmp477);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
org$frostlang$frostc$IR$Value* $tmp478 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
*(&local4) = $tmp473;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:105
org$frostlang$frostc$Compiler** $tmp479 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp480 = *$tmp479;
frost$core$Bit* $tmp481 = &$tmp480->inFieldCleanup;
frost$core$Bit $tmp482 = *$tmp481;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:105:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp483 = $tmp482.value;
bool $tmp484 = !$tmp483;
frost$core$Bit $tmp485 = (frost$core$Bit) {$tmp484};
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block31; else goto block30;
block31:;
org$frostlang$frostc$FieldDecl** $tmp487 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp488 = *$tmp487;
org$frostlang$frostc$Annotations** $tmp489 = &$tmp488->annotations;
org$frostlang$frostc$Annotations* $tmp490 = *$tmp489;
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from FieldLValue.frost:105:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:151
frost$core$Int* $tmp491 = &$tmp490->flags;
frost$core$Int $tmp492 = *$tmp491;
frost$core$Int $tmp493 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:151:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp494 = $tmp492.value;
int64_t $tmp495 = $tmp493.value;
int64_t $tmp496 = $tmp494 & $tmp495;
frost$core$Int $tmp497 = (frost$core$Int) {$tmp496};
frost$core$Int $tmp498 = (frost$core$Int) {0u};
int64_t $tmp499 = $tmp497.value;
int64_t $tmp500 = $tmp498.value;
bool $tmp501 = $tmp499 != $tmp500;
frost$core$Bit $tmp502 = (frost$core$Bit) {$tmp501};
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:106
org$frostlang$frostc$Compiler** $tmp504 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp505 = *$tmp504;
org$frostlang$frostc$Position* $tmp506 = &param0->position;
org$frostlang$frostc$Position $tmp507 = *$tmp506;
org$frostlang$frostc$IR$Value* $tmp508 = *(&local4);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp509 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp509);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp510 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp511 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp510, $tmp511);
org$frostlang$frostc$IR$Value* $tmp512 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp505, $tmp507, $tmp508, &$s513, ((frost$collections$ListView*) $tmp509), $tmp510);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
org$frostlang$frostc$IR$Value* $tmp514 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local4) = $tmp512;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
goto block30;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:109
org$frostlang$frostc$Type** $tmp515 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp516 = *$tmp515;
org$frostlang$frostc$IR$Value* $tmp517 = *(&local4);
$fn519 $tmp518 = ($fn519) $tmp517->$class->vtable[2];
org$frostlang$frostc$Type* $tmp520 = $tmp518($tmp517);
ITable* $tmp521 = ((frost$core$Equatable*) $tmp516)->$class->itable;
while ($tmp521->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp521 = $tmp521->next;
}
$fn523 $tmp522 = $tmp521->methods[1];
frost$core$Bit $tmp524 = $tmp522(((frost$core$Equatable*) $tmp516), ((frost$core$Equatable*) $tmp520));
bool $tmp525 = $tmp524.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
if ($tmp525) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:110
org$frostlang$frostc$Compiler** $tmp526 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp527 = *$tmp526;
org$frostlang$frostc$Position* $tmp528 = &param0->position;
org$frostlang$frostc$Position $tmp529 = *$tmp528;
org$frostlang$frostc$IR$Value* $tmp530 = *(&local4);
org$frostlang$frostc$Type** $tmp531 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp532 = *$tmp531;
org$frostlang$frostc$IR$Value* $tmp533 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp527, $tmp529, $tmp530, $tmp532);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
org$frostlang$frostc$IR$Value* $tmp534 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
*(&local4) = $tmp533;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
goto block36;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:112
org$frostlang$frostc$IR$Value* $tmp535 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
org$frostlang$frostc$IR$Value* $tmp536 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp535;

}
void org$frostlang$frostc$lvalue$FieldLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$FieldLValue* param0, org$frostlang$frostc$IR$Value* param1) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$FieldDecl$Kind local3;
org$frostlang$frostc$FieldDecl$Kind local4;
frost$collections$Array* local5 = NULL;
frost$core$Bit local6;
org$frostlang$frostc$IR$Value* local7 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:117
org$frostlang$frostc$IR$Value** $tmp537 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp538 = *$tmp537;
frost$core$Bit $tmp539 = (frost$core$Bit) {$tmp538 == NULL};
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:119
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:121
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:122
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:123
org$frostlang$frostc$Compiler** $tmp541 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp542 = *$tmp541;
frost$core$Bit* $tmp543 = &$tmp542->inFieldCleanup;
frost$core$Bit $tmp544 = *$tmp543;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:123:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp545 = $tmp544.value;
bool $tmp546 = !$tmp545;
frost$core$Bit $tmp547 = (frost$core$Bit) {$tmp546};
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block6; else goto block5;
block6:;
org$frostlang$frostc$FieldDecl** $tmp549 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp550 = *$tmp549;
org$frostlang$frostc$Annotations** $tmp551 = &$tmp550->annotations;
org$frostlang$frostc$Annotations* $tmp552 = *$tmp551;
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from FieldLValue.frost:123:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:151
frost$core$Int* $tmp553 = &$tmp552->flags;
frost$core$Int $tmp554 = *$tmp553;
frost$core$Int $tmp555 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:151:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp556 = $tmp554.value;
int64_t $tmp557 = $tmp555.value;
int64_t $tmp558 = $tmp556 & $tmp557;
frost$core$Int $tmp559 = (frost$core$Int) {$tmp558};
frost$core$Int $tmp560 = (frost$core$Int) {0u};
int64_t $tmp561 = $tmp559.value;
int64_t $tmp562 = $tmp560.value;
bool $tmp563 = $tmp561 != $tmp562;
frost$core$Bit $tmp564 = (frost$core$Bit) {$tmp563};
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:124
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp566 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp566);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
frost$collections$Array* $tmp567 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local2) = $tmp566;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:125
frost$collections$Array* $tmp568 = *(&local2);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp569 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp570 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp571 = &param0->position;
org$frostlang$frostc$Position $tmp572 = *$tmp571;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp569, $tmp570, $tmp572, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp568, ((frost$core$Object*) $tmp569));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:126
org$frostlang$frostc$Compiler** $tmp573 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp574 = *$tmp573;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp575 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp576 = (frost$core$Int) {9u};
org$frostlang$frostc$Position* $tmp577 = &param0->position;
org$frostlang$frostc$Position $tmp578 = *$tmp577;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp579 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp580 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp581 = &param0->position;
org$frostlang$frostc$Position $tmp582 = *$tmp581;
org$frostlang$frostc$Compiler** $tmp583 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp584 = *$tmp583;
org$frostlang$frostc$Compiler** $tmp585 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp586 = *$tmp585;
org$frostlang$frostc$Type** $tmp587 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp588 = *$tmp587;
org$frostlang$frostc$Type* $tmp589 = org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp586, $tmp588);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from FieldLValue.frost:127:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3685
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp590 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp591 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3685:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp592 = &$tmp584->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp593 = *$tmp592;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp594 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp595 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp594, $tmp595);
frost$collections$Array$add$frost$collections$Array$T($tmp594, ((frost$core$Object*) $tmp589));
org$frostlang$frostc$Type* $tmp596 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp593, ((frost$collections$ListView*) $tmp594));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp590, $tmp591, $tmp589, $tmp596);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp579, $tmp580, $tmp582, $tmp590);
frost$collections$Array* $tmp597 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp598 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp597);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp575, $tmp576, $tmp578, $tmp579, $tmp598);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from FieldLValue.frost:126:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5100
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp599 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp600 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp599, $tmp600);
org$frostlang$frostc$IR$Value* $tmp601 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp574, $tmp575, $tmp599);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
org$frostlang$frostc$IR$Value* $tmp602 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local1) = $tmp601;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$collections$Array* $tmp603 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
*(&local2) = ((frost$collections$Array*) NULL);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:132
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$IR$Value* $tmp604 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
*(&local1) = param1;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:134
org$frostlang$frostc$Type** $tmp605 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp606 = *$tmp605;
org$frostlang$frostc$Type** $tmp607 = &param0->rawType;
org$frostlang$frostc$Type* $tmp608 = *$tmp607;
ITable* $tmp609 = ((frost$core$Equatable*) $tmp606)->$class->itable;
while ($tmp609->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp609 = $tmp609->next;
}
$fn611 $tmp610 = $tmp609->methods[1];
frost$core$Bit $tmp612 = $tmp610(((frost$core$Equatable*) $tmp606), ((frost$core$Equatable*) $tmp608));
bool $tmp613 = $tmp612.value;
if ($tmp613) goto block13; else goto block15;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:135
org$frostlang$frostc$Compiler** $tmp614 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp615 = *$tmp614;
org$frostlang$frostc$Position* $tmp616 = &param0->position;
org$frostlang$frostc$Position $tmp617 = *$tmp616;
org$frostlang$frostc$IR$Value* $tmp618 = *(&local1);
org$frostlang$frostc$Type** $tmp619 = &param0->rawType;
org$frostlang$frostc$Type* $tmp620 = *$tmp619;
org$frostlang$frostc$IR$Value* $tmp621 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp615, $tmp617, $tmp618, $tmp620);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
org$frostlang$frostc$IR$Value* $tmp622 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
*(&local0) = $tmp621;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:136
org$frostlang$frostc$IR$Value* $tmp623 = *(&local0);
frost$core$Bit $tmp624 = (frost$core$Bit) {false};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:137
org$frostlang$frostc$IR$Value* $tmp626 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp627 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block17:;
goto block14;
block15:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:141
org$frostlang$frostc$IR$Value* $tmp628 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
org$frostlang$frostc$IR$Value* $tmp629 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
*(&local0) = $tmp628;
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:143
org$frostlang$frostc$FieldDecl** $tmp630 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp631 = *$tmp630;
org$frostlang$frostc$FieldDecl$Kind* $tmp632 = &$tmp631->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp633 = *$tmp632;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp634;
$tmp634 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp634->value = $tmp633;
frost$core$Int $tmp635 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:143:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp636 = &(&local4)->$rawValue;
*$tmp636 = $tmp635;
org$frostlang$frostc$FieldDecl$Kind $tmp637 = *(&local4);
*(&local3) = $tmp637;
org$frostlang$frostc$FieldDecl$Kind $tmp638 = *(&local3);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp639;
$tmp639 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp639->value = $tmp638;
ITable* $tmp640 = ((frost$core$Equatable*) $tmp634)->$class->itable;
while ($tmp640->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp640 = $tmp640->next;
}
$fn642 $tmp641 = $tmp640->methods[0];
frost$core$Bit $tmp643 = $tmp641(((frost$core$Equatable*) $tmp634), ((frost$core$Equatable*) $tmp639));
bool $tmp644 = $tmp643.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp639)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp634)));
if ($tmp644) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:144
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp645 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp645);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$collections$Array* $tmp646 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
*(&local5) = $tmp645;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:145
frost$collections$Array* $tmp647 = *(&local5);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp648 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp649 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp650 = &param0->position;
org$frostlang$frostc$Position $tmp651 = *$tmp650;
org$frostlang$frostc$IR$Value* $tmp652 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp648, $tmp649, $tmp651, $tmp652);
frost$collections$Array$add$frost$collections$Array$T($tmp647, ((frost$core$Object*) $tmp648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:146
org$frostlang$frostc$Compiler** $tmp653 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp654 = *$tmp653;
org$frostlang$frostc$Position* $tmp655 = &param0->position;
org$frostlang$frostc$Position $tmp656 = *$tmp655;
org$frostlang$frostc$IR$Value** $tmp657 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp658 = *$tmp657;
org$frostlang$frostc$FieldDecl** $tmp659 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp660 = *$tmp659;
frost$core$String** $tmp661 = &((org$frostlang$frostc$Symbol*) $tmp660)->name;
frost$core$String* $tmp662 = *$tmp661;
frost$core$String* $tmp663 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s664, $tmp662);
frost$core$String* $tmp665 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp663, &$s666);
frost$collections$Array* $tmp667 = *(&local5);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp668 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp669 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp670 = &param0->rawType;
org$frostlang$frostc$Type* $tmp671 = *$tmp670;
frost$core$Bit $tmp672 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp668, $tmp669, $tmp671, $tmp672);
org$frostlang$frostc$IR$Value* $tmp673 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp654, $tmp656, $tmp658, $tmp665, ((frost$collections$ListView*) $tmp667), $tmp668);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
frost$collections$Array* $tmp674 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
*(&local5) = ((frost$collections$Array*) NULL);
goto block19;
block20:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:150
org$frostlang$frostc$Compiler** $tmp675 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp676 = *$tmp675;
org$frostlang$frostc$Type** $tmp677 = &param0->rawType;
org$frostlang$frostc$Type* $tmp678 = *$tmp677;
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from FieldLValue.frost:150:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:735
frost$core$Bit $tmp679 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp678);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:735:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp680 = $tmp679.value;
bool $tmp681 = !$tmp680;
frost$core$Bit $tmp682 = (frost$core$Bit) {$tmp681};
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:736
frost$core$Bit $tmp684 = (frost$core$Bit) {false};
*(&local6) = $tmp684;
goto block25;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:738
frost$core$Bit $tmp685 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit($tmp676, $tmp678);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:738:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp686 = $tmp685.value;
bool $tmp687 = !$tmp686;
frost$core$Bit $tmp688 = (frost$core$Bit) {$tmp687};
*(&local6) = $tmp688;
goto block25;
block25:;
frost$core$Bit $tmp689 = *(&local6);
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block24; else goto block23;
block24:;
org$frostlang$frostc$FieldDecl** $tmp691 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp692 = *$tmp691;
frost$core$Weak** $tmp693 = &$tmp692->owner;
frost$core$Weak* $tmp694 = *$tmp693;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:150:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp695 = &$tmp694->_valid;
frost$core$Bit $tmp696 = *$tmp695;
bool $tmp697 = $tmp696.value;
if ($tmp697) goto block32; else goto block33;
block33:;
frost$core$Int $tmp698 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s699, $tmp698);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp700 = &$tmp694->value;
frost$core$Object* $tmp701 = *$tmp700;
frost$core$Frost$ref$frost$core$Object$Q($tmp701);
frost$core$String** $tmp702 = &((org$frostlang$frostc$ClassDecl*) $tmp701)->name;
frost$core$String* $tmp703 = *$tmp702;
ITable* $tmp705 = ((frost$core$Equatable*) $tmp703)->$class->itable;
while ($tmp705->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp705 = $tmp705->next;
}
$fn707 $tmp706 = $tmp705->methods[1];
frost$core$Bit $tmp708 = $tmp706(((frost$core$Equatable*) $tmp703), ((frost$core$Equatable*) &$s704));
bool $tmp709 = $tmp708.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp701);
if ($tmp709) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:151
org$frostlang$frostc$Compiler** $tmp710 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp711 = *$tmp710;
org$frostlang$frostc$IR$Value* $tmp712 = *(&local1);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp711, $tmp712);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:152
$fn714 $tmp713 = ($fn714) param0->$class->vtable[5];
$tmp713(param0);
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:154
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp715 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp716 = (frost$core$Int) {7u};
org$frostlang$frostc$Compiler** $tmp717 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp718 = *$tmp717;
org$frostlang$frostc$IR** $tmp719 = &$tmp718->ir;
org$frostlang$frostc$IR* $tmp720 = *$tmp719;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp721 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp722 = (frost$core$Int) {11u};
org$frostlang$frostc$Position* $tmp723 = &param0->position;
org$frostlang$frostc$Position $tmp724 = *$tmp723;
org$frostlang$frostc$IR$Value** $tmp725 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp726 = *$tmp725;
org$frostlang$frostc$FieldDecl** $tmp727 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp728 = *$tmp727;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp721, $tmp722, $tmp724, $tmp726, $tmp728);
$fn730 $tmp729 = ($fn730) $tmp720->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp731 = $tmp729($tmp720, $tmp721);
org$frostlang$frostc$Type** $tmp732 = &param0->rawType;
org$frostlang$frostc$Type* $tmp733 = *$tmp732;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp715, $tmp716, $tmp731, $tmp733);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
org$frostlang$frostc$IR$Value* $tmp734 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
*(&local7) = $tmp715;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:156
org$frostlang$frostc$Compiler** $tmp735 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp736 = *$tmp735;
org$frostlang$frostc$IR** $tmp737 = &$tmp736->ir;
org$frostlang$frostc$IR* $tmp738 = *$tmp737;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp739 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp740 = (frost$core$Int) {27u};
org$frostlang$frostc$Position* $tmp741 = &param0->position;
org$frostlang$frostc$Position $tmp742 = *$tmp741;
org$frostlang$frostc$IR$Value* $tmp743 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp744 = *(&local7);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp739, $tmp740, $tmp742, $tmp743, $tmp744);
$fn746 $tmp745 = ($fn746) $tmp738->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp747 = $tmp745($tmp738, $tmp739);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
org$frostlang$frostc$IR$Value* $tmp748 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block19;
block19:;
org$frostlang$frostc$IR$Value* $tmp749 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp750 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$lvalue$FieldLValue$compileUnref(org$frostlang$frostc$lvalue$FieldLValue* param0) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$FieldDecl$Kind local1;
org$frostlang$frostc$FieldDecl$Kind local2;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$IR$Statement$ID local4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:161
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:162
org$frostlang$frostc$FieldDecl** $tmp751 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp752 = *$tmp751;
org$frostlang$frostc$FieldDecl$Kind* $tmp753 = &$tmp752->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp754 = *$tmp753;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp755;
$tmp755 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp755->value = $tmp754;
frost$core$Int $tmp756 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:162:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp757 = &(&local2)->$rawValue;
*$tmp757 = $tmp756;
org$frostlang$frostc$FieldDecl$Kind $tmp758 = *(&local2);
*(&local1) = $tmp758;
org$frostlang$frostc$FieldDecl$Kind $tmp759 = *(&local1);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp760;
$tmp760 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp760->value = $tmp759;
ITable* $tmp761 = ((frost$core$Equatable*) $tmp755)->$class->itable;
while ($tmp761->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp761 = $tmp761->next;
}
$fn763 $tmp762 = $tmp761->methods[0];
frost$core$Bit $tmp764 = $tmp762(((frost$core$Equatable*) $tmp755), ((frost$core$Equatable*) $tmp760));
bool $tmp765 = $tmp764.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp760)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp755)));
if ($tmp765) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:163
org$frostlang$frostc$IR$Value* $tmp766 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:165
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:166
org$frostlang$frostc$Compiler** $tmp767 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp768 = *$tmp767;
org$frostlang$frostc$FieldDecl** $tmp769 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp770 = *$tmp769;
frost$core$Weak** $tmp771 = &$tmp770->owner;
frost$core$Weak* $tmp772 = *$tmp771;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:166:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp773 = &$tmp772->_valid;
frost$core$Bit $tmp774 = *$tmp773;
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block9; else goto block10;
block10:;
frost$core$Int $tmp776 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s777, $tmp776);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp778 = &$tmp772->value;
frost$core$Object* $tmp779 = *$tmp778;
frost$core$Frost$ref$frost$core$Object$Q($tmp779);
frost$core$Bit $tmp780 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit($tmp768, ((org$frostlang$frostc$ClassDecl*) $tmp779));
bool $tmp781 = $tmp780.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp779);
if ($tmp781) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:167
org$frostlang$frostc$Compiler** $tmp782 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp783 = *$tmp782;
org$frostlang$frostc$IR** $tmp784 = &$tmp783->ir;
org$frostlang$frostc$IR* $tmp785 = *$tmp784;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp786 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp787 = (frost$core$Int) {10u};
org$frostlang$frostc$Position* $tmp788 = &param0->position;
org$frostlang$frostc$Position $tmp789 = *$tmp788;
org$frostlang$frostc$IR$Value** $tmp790 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp791 = *$tmp790;
org$frostlang$frostc$FieldDecl** $tmp792 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp793 = *$tmp792;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp786, $tmp787, $tmp789, $tmp791, $tmp793);
$fn795 $tmp794 = ($fn795) $tmp785->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp796 = $tmp794($tmp785, $tmp786);
*(&local3) = $tmp796;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:170
org$frostlang$frostc$Compiler** $tmp797 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp798 = *$tmp797;
org$frostlang$frostc$IR** $tmp799 = &$tmp798->ir;
org$frostlang$frostc$IR* $tmp800 = *$tmp799;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp801 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp802 = (frost$core$Int) {11u};
org$frostlang$frostc$Position* $tmp803 = &param0->position;
org$frostlang$frostc$Position $tmp804 = *$tmp803;
org$frostlang$frostc$IR$Value** $tmp805 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp806 = *$tmp805;
org$frostlang$frostc$FieldDecl** $tmp807 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp808 = *$tmp807;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp801, $tmp802, $tmp804, $tmp806, $tmp808);
$fn810 $tmp809 = ($fn810) $tmp800->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp811 = $tmp809($tmp800, $tmp801);
*(&local4) = $tmp811;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:171
org$frostlang$frostc$Compiler** $tmp812 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp813 = *$tmp812;
org$frostlang$frostc$IR** $tmp814 = &$tmp813->ir;
org$frostlang$frostc$IR* $tmp815 = *$tmp814;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp816 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp817 = (frost$core$Int) {14u};
org$frostlang$frostc$Position* $tmp818 = &param0->position;
org$frostlang$frostc$Position $tmp819 = *$tmp818;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp820 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp821 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp822 = *(&local4);
org$frostlang$frostc$Type** $tmp823 = &param0->rawType;
org$frostlang$frostc$Type* $tmp824 = *$tmp823;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp820, $tmp821, $tmp822, $tmp824);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp816, $tmp817, $tmp819, $tmp820);
$fn826 $tmp825 = ($fn826) $tmp815->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp827 = $tmp825($tmp815, $tmp816);
*(&local3) = $tmp827;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:173
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp828 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp829 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp830 = *(&local3);
org$frostlang$frostc$Type** $tmp831 = &param0->rawType;
org$frostlang$frostc$Type* $tmp832 = *$tmp831;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp828, $tmp829, $tmp830, $tmp832);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
org$frostlang$frostc$IR$Value* $tmp833 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local0) = $tmp828;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:174
org$frostlang$frostc$Compiler** $tmp834 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp835 = *$tmp834;
org$frostlang$frostc$IR$Value* $tmp836 = *(&local0);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value($tmp835, $tmp836);
org$frostlang$frostc$IR$Value* $tmp837 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$lvalue$FieldLValue$cleanup(org$frostlang$frostc$lvalue$FieldLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp838 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp839 = *$tmp838;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
org$frostlang$frostc$IR$Value** $tmp840 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp841 = *$tmp840;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
org$frostlang$frostc$FieldDecl** $tmp842 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp843 = *$tmp842;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
org$frostlang$frostc$Type** $tmp844 = &param0->rawType;
org$frostlang$frostc$Type* $tmp845 = *$tmp844;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
org$frostlang$frostc$Type** $tmp846 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp847 = *$tmp846;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
return;

}

