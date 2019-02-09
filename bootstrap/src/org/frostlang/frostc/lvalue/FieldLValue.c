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
#include "frost/core/Int64.h"
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
typedef frost$core$Bit (*$fn72)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn205)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn240)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn243)(frost$core$Object*);
typedef frost$core$String* (*$fn249)(frost$core$Object*);
typedef frost$core$Bit (*$fn291)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn334)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn387)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef frost$core$Bit (*$fn422)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn475)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn490)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn506)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn554)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn558)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn637)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn668)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn733)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn740)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn756)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn772)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn789)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn821)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn836)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn852)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 39, -7329818318767612820, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20\x63\x6c\x61\x73\x73\x20", 21, 8387245444129569148, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x66\x6f\x72\x20", 5, 13946267892, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -4860172027847442545, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f", 4, 211223516, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s457 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static frost$core$String $s690 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x65\x74\x5f", 4, 223587128, NULL };
static frost$core$String $s692 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s725 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s730 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s803 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };

void org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$lvalue$FieldLValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$FieldDecl* param4) {

org$frostlang$frostc$Compiler$Resolution local0;
org$frostlang$frostc$Compiler$Resolution local1;
frost$core$Bit local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
frost$core$Bit local5;
org$frostlang$frostc$IR$Statement$ID local6;
org$frostlang$frostc$IR$Statement$ID local7;
org$frostlang$frostc$Type* local8 = NULL;
org$frostlang$frostc$Type* local9 = NULL;
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
frost$core$Int64 $tmp9 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int64):org.frostlang.frostc.Compiler.Resolution from FieldLValue.frost:31:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
frost$core$Int64* $tmp10 = &(&local1)->$rawValue;
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
frost$core$Int64 $tmp19 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s20, $tmp19);
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
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block7; else goto block6;
block7:;
$fn27 $tmp26 = ($fn27) param3->$class->vtable[2];
org$frostlang$frostc$Type* $tmp28 = $tmp26(param3);
// begin inline call to function org.frostlang.frostc.Type.get_isClassLiteral():frost.core.Bit from FieldLValue.frost:33:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:599
org$frostlang$frostc$Type$Kind* $tmp29 = &$tmp28->typeKind;
org$frostlang$frostc$Type$Kind $tmp30 = *$tmp29;
org$frostlang$frostc$Type$Kind$wrapper* $tmp31;
$tmp31 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp31->value = $tmp30;
frost$core$Int64 $tmp32 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:599:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp33 = &(&local4)->$rawValue;
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
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:599:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp42 = &$tmp28->_subtypes;
org$frostlang$frostc$FixedArray* $tmp43 = *$tmp42;
frost$core$Bit $tmp44 = frost$core$Bit$init$builtin_bit($tmp43 != NULL);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp46 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s47, $tmp46);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp48 = &$tmp28->_subtypes;
org$frostlang$frostc$FixedArray* $tmp49 = *$tmp48;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Int64 $tmp50 = (frost$core$Int64) {0};
frost$core$Object* $tmp51 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp49, $tmp50);
// begin inline call to method org.frostlang.frostc.Type.Class():org.frostlang.frostc.Type from Type.frost:599:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:280
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp52 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp53 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp54 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp53);
org$frostlang$frostc$Position $tmp55 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp56 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp52, &$s57, $tmp54, $tmp55, $tmp56);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:599:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp58 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp51))->name;
frost$core$String* $tmp59 = *$tmp58;
frost$core$String** $tmp60 = &((org$frostlang$frostc$Symbol*) $tmp52)->name;
frost$core$String* $tmp61 = *$tmp60;
frost$core$Bit $tmp62 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp59, $tmp61);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Type$Kind* $tmp64 = &((org$frostlang$frostc$Type*) $tmp51)->typeKind;
org$frostlang$frostc$Type$Kind $tmp65 = *$tmp64;
org$frostlang$frostc$Type$Kind$wrapper* $tmp66;
$tmp66 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp66->value = $tmp65;
org$frostlang$frostc$Type$Kind* $tmp67 = &$tmp52->typeKind;
org$frostlang$frostc$Type$Kind $tmp68 = *$tmp67;
org$frostlang$frostc$Type$Kind$wrapper* $tmp69;
$tmp69 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp69->value = $tmp68;
ITable* $tmp70 = ((frost$core$Equatable*) $tmp66)->$class->itable;
while ($tmp70->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp70 = $tmp70->next;
}
$fn72 $tmp71 = $tmp70->methods[0];
frost$core$Bit $tmp73 = $tmp71(((frost$core$Equatable*) $tmp66), ((frost$core$Equatable*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp69)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp66)));
*(&local5) = $tmp73;
goto block20;
block19:;
*(&local5) = $tmp62;
goto block20;
block20:;
frost$core$Bit $tmp74 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q($tmp51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local2) = $tmp74;
goto block12;
block11:;
*(&local2) = $tmp40;
goto block12;
block12:;
frost$core$Bit $tmp75 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp36)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp31)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:33:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp76 = $tmp75.value;
bool $tmp77 = !$tmp76;
frost$core$Bit $tmp78 = (frost$core$Bit) {$tmp77};
bool $tmp79 = $tmp78.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
if ($tmp79) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:34
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp80 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp81 = *$tmp80;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
org$frostlang$frostc$IR$Value** $tmp82 = &param0->target;
*$tmp82 = param3;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:36
org$frostlang$frostc$Annotations** $tmp83 = &param4->annotations;
org$frostlang$frostc$Annotations* $tmp84 = *$tmp83;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from FieldLValue.frost:36:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp85 = &$tmp84->flags;
frost$core$Int64 $tmp86 = *$tmp85;
frost$core$Int64 $tmp87 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp88 = $tmp86.value;
int64_t $tmp89 = $tmp87.value;
int64_t $tmp90 = $tmp88 & $tmp89;
frost$core$Int64 $tmp91 = frost$core$Int64$init$builtin_int64($tmp90);
frost$core$Int64 $tmp92 = (frost$core$Int64) {0};
int64_t $tmp93 = $tmp91.value;
int64_t $tmp94 = $tmp92.value;
bool $tmp95 = $tmp93 != $tmp94;
frost$core$Bit $tmp96 = (frost$core$Bit) {$tmp95};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:36:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp97 = $tmp96.value;
bool $tmp98 = !$tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:37
frost$core$Weak** $tmp101 = &param4->owner;
frost$core$Weak* $tmp102 = *$tmp101;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:37:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp103 = &$tmp102->_valid;
frost$core$Bit $tmp104 = *$tmp103;
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp106 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s107, $tmp106);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp108 = &$tmp102->value;
frost$core$Object* $tmp109 = *$tmp108;
frost$core$Frost$ref$frost$core$Object$Q($tmp109);
org$frostlang$frostc$Annotations** $tmp110 = &((org$frostlang$frostc$ClassDecl*) $tmp109)->annotations;
org$frostlang$frostc$Annotations* $tmp111 = *$tmp110;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from FieldLValue.frost:37:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:155
frost$core$Int64* $tmp112 = &$tmp111->flags;
frost$core$Int64 $tmp113 = *$tmp112;
frost$core$Int64 $tmp114 = (frost$core$Int64) {8192};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp115 = $tmp113.value;
int64_t $tmp116 = $tmp114.value;
int64_t $tmp117 = $tmp115 & $tmp116;
frost$core$Int64 $tmp118 = frost$core$Int64$init$builtin_int64($tmp117);
frost$core$Int64 $tmp119 = (frost$core$Int64) {0};
int64_t $tmp120 = $tmp118.value;
int64_t $tmp121 = $tmp119.value;
bool $tmp122 = $tmp120 != $tmp121;
frost$core$Bit $tmp123 = (frost$core$Bit) {$tmp122};
bool $tmp124 = $tmp123.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp109);
if ($tmp124) goto block30; else goto block29;
block30:;
frost$core$Bit* $tmp125 = &param1->reportErrors;
frost$core$Bit $tmp126 = *$tmp125;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:37:54
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp127 = $tmp126.value;
bool $tmp128 = !$tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block27; else goto block29;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:39
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp131 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp132 = (frost$core$Int64) {7};
frost$core$Int64 $tmp133 = (frost$core$Int64) {18446744073709551615};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int64):org.frostlang.frostc.IR.Statement.ID from FieldLValue.frost:39:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int64* $tmp134 = &(&local7)->value;
*$tmp134 = $tmp133;
org$frostlang$frostc$IR$Statement$ID $tmp135 = *(&local7);
*(&local6) = $tmp135;
org$frostlang$frostc$IR$Statement$ID $tmp136 = *(&local6);
frost$core$Weak** $tmp137 = &param4->owner;
frost$core$Weak* $tmp138 = *$tmp137;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:39:71
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp139 = &$tmp138->_valid;
frost$core$Bit $tmp140 = *$tmp139;
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp142 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s143, $tmp142);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp144 = &$tmp138->value;
frost$core$Object* $tmp145 = *$tmp144;
frost$core$Frost$ref$frost$core$Object$Q($tmp145);
org$frostlang$frostc$Type** $tmp146 = &((org$frostlang$frostc$ClassDecl*) $tmp145)->type;
org$frostlang$frostc$Type* $tmp147 = *$tmp146;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp131, $tmp132, $tmp136, $tmp147);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
org$frostlang$frostc$IR$Value** $tmp148 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp149 = *$tmp148;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
org$frostlang$frostc$IR$Value** $tmp150 = &param0->target;
*$tmp150 = $tmp131;
frost$core$Frost$unref$frost$core$Object$Q($tmp145);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
goto block28;
block29:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:42
frost$core$Bit $tmp151 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp152 = org$frostlang$frostc$Compiler$compileSelf$org$frostlang$frostc$Position$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param1, param2, $tmp151);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
org$frostlang$frostc$IR$Value** $tmp153 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp154 = *$tmp153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
org$frostlang$frostc$IR$Value** $tmp155 = &param0->target;
*$tmp155 = $tmp152;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
goto block28;
block28:;
goto block23;
block23:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:45
org$frostlang$frostc$Type** $tmp156 = &param4->type;
org$frostlang$frostc$Type* $tmp157 = *$tmp156;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
org$frostlang$frostc$Type** $tmp158 = &param0->rawType;
org$frostlang$frostc$Type* $tmp159 = *$tmp158;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
org$frostlang$frostc$Type** $tmp160 = &param0->rawType;
*$tmp160 = $tmp157;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:46
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:47
frost$core$Bit* $tmp161 = &param1->inFieldCleanup;
frost$core$Bit $tmp162 = *$tmp161;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:47:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp163 = $tmp162.value;
bool $tmp164 = !$tmp163;
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164};
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block46; else goto block45;
block46:;
org$frostlang$frostc$Annotations** $tmp167 = &param4->annotations;
org$frostlang$frostc$Annotations* $tmp168 = *$tmp167;
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from FieldLValue.frost:47:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:151
frost$core$Int64* $tmp169 = &$tmp168->flags;
frost$core$Int64 $tmp170 = *$tmp169;
frost$core$Int64 $tmp171 = (frost$core$Int64) {4096};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:151:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp172 = $tmp170.value;
int64_t $tmp173 = $tmp171.value;
int64_t $tmp174 = $tmp172 & $tmp173;
frost$core$Int64 $tmp175 = frost$core$Int64$init$builtin_int64($tmp174);
frost$core$Int64 $tmp176 = (frost$core$Int64) {0};
int64_t $tmp177 = $tmp175.value;
int64_t $tmp178 = $tmp176.value;
bool $tmp179 = $tmp177 != $tmp178;
frost$core$Bit $tmp180 = (frost$core$Bit) {$tmp179};
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block43; else goto block45;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:48
org$frostlang$frostc$Type** $tmp182 = &param0->rawType;
org$frostlang$frostc$Type* $tmp183 = *$tmp182;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from FieldLValue.frost:48:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp184 = &$tmp183->_subtypes;
org$frostlang$frostc$FixedArray* $tmp185 = *$tmp184;
frost$core$Bit $tmp186 = frost$core$Bit$init$builtin_bit($tmp185 != NULL);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp188 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s189, $tmp188);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp190 = &$tmp183->_subtypes;
org$frostlang$frostc$FixedArray* $tmp191 = *$tmp190;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
frost$core$Int64 $tmp192 = (frost$core$Int64) {1};
frost$core$Object* $tmp193 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp191, $tmp192);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp193)));
org$frostlang$frostc$Type* $tmp194 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
*(&local8) = ((org$frostlang$frostc$Type*) $tmp193);
frost$core$Frost$unref$frost$core$Object$Q($tmp193);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
goto block44;
block45:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:51
org$frostlang$frostc$Type** $tmp195 = &param0->rawType;
org$frostlang$frostc$Type* $tmp196 = *$tmp195;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
org$frostlang$frostc$Type* $tmp197 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local8) = $tmp196;
goto block44;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:53
org$frostlang$frostc$IR$Value** $tmp198 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp199 = *$tmp198;
frost$core$Bit $tmp200 = frost$core$Bit$init$builtin_bit($tmp199 != NULL);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block53; else goto block55;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:54
org$frostlang$frostc$IR$Value** $tmp202 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp203 = *$tmp202;
$fn205 $tmp204 = ($fn205) $tmp203->$class->vtable[2];
org$frostlang$frostc$Type* $tmp206 = $tmp204($tmp203);
frost$core$Weak** $tmp207 = &param4->owner;
frost$core$Weak* $tmp208 = *$tmp207;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:54:69
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp209 = &$tmp208->_valid;
frost$core$Bit $tmp210 = *$tmp209;
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp212 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s213, $tmp212);
abort(); // unreachable
block58:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp214 = &$tmp208->value;
frost$core$Object* $tmp215 = *$tmp214;
frost$core$Frost$ref$frost$core$Object$Q($tmp215);
org$frostlang$frostc$Type* $tmp216 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param1, $tmp206, ((org$frostlang$frostc$ClassDecl*) $tmp215));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
org$frostlang$frostc$Type* $tmp217 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local9) = $tmp216;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q($tmp215);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:55
org$frostlang$frostc$Type* $tmp218 = *(&local9);
frost$core$Bit $tmp219 = frost$core$Bit$init$builtin_bit($tmp218 != NULL);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp221 = (frost$core$Int64) {55};
frost$core$Weak** $tmp222 = &param4->owner;
frost$core$Weak* $tmp223 = *$tmp222;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:56:50
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp224 = &$tmp223->_valid;
frost$core$Bit $tmp225 = *$tmp224;
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp227 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s228, $tmp227);
abort(); // unreachable
block64:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp229 = &$tmp223->value;
frost$core$Object* $tmp230 = *$tmp229;
frost$core$Frost$ref$frost$core$Object$Q($tmp230);
frost$core$String** $tmp231 = &((org$frostlang$frostc$ClassDecl*) $tmp230)->name;
frost$core$String* $tmp232 = *$tmp231;
frost$core$String* $tmp233 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s234, $tmp232);
frost$core$String* $tmp235 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp233, &$s236);
org$frostlang$frostc$IR$Value** $tmp237 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp238 = *$tmp237;
$fn240 $tmp239 = ($fn240) $tmp238->$class->vtable[2];
org$frostlang$frostc$Type* $tmp241 = $tmp239($tmp238);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from FieldLValue.frost:56:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn243 $tmp242 = ($fn243) ((frost$core$Object*) $tmp241)->$class->vtable[0];
frost$core$String* $tmp244 = $tmp242(((frost$core$Object*) $tmp241));
frost$core$String* $tmp245 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp235, $tmp244);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$core$String* $tmp246 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp245, &$s247);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from FieldLValue.frost:56:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn249 $tmp248 = ($fn249) ((frost$core$Object*) param4)->$class->vtable[0];
frost$core$String* $tmp250 = $tmp248(((frost$core$Object*) param4));
frost$core$String* $tmp251 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp246, $tmp250);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
frost$core$String* $tmp252 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp251, &$s253);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s254, $tmp221, $tmp252);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q($tmp230);
abort(); // unreachable
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:57
org$frostlang$frostc$Type* $tmp255 = *(&local9);
org$frostlang$frostc$Type* $tmp256 = *(&local8);
org$frostlang$frostc$Type* $tmp257 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp255, $tmp256);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
org$frostlang$frostc$Type** $tmp258 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp259 = *$tmp258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
org$frostlang$frostc$Type** $tmp260 = &param0->effectiveType;
*$tmp260 = $tmp257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
org$frostlang$frostc$Type* $tmp261 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block54;
block55:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:60
org$frostlang$frostc$Type* $tmp262 = *(&local8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
org$frostlang$frostc$Type** $tmp263 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp264 = *$tmp263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
org$frostlang$frostc$Type** $tmp265 = &param0->effectiveType;
*$tmp265 = $tmp262;
goto block54;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:62
org$frostlang$frostc$IR$Value** $tmp266 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp267 = *$tmp266;
frost$core$Bit $tmp268 = frost$core$Bit$init$builtin_bit($tmp267 != NULL);
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:63
org$frostlang$frostc$IR$Value** $tmp270 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp271 = *$tmp270;
frost$core$Weak** $tmp272 = &param4->owner;
frost$core$Weak* $tmp273 = *$tmp272;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:63:72
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp274 = &$tmp273->_valid;
frost$core$Bit $tmp275 = *$tmp274;
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block72; else goto block73;
block73:;
frost$core$Int64 $tmp277 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s278, $tmp277);
abort(); // unreachable
block72:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp279 = &$tmp273->value;
frost$core$Object* $tmp280 = *$tmp279;
frost$core$Frost$ref$frost$core$Object$Q($tmp280);
org$frostlang$frostc$Type** $tmp281 = &((org$frostlang$frostc$ClassDecl*) $tmp280)->type;
org$frostlang$frostc$Type* $tmp282 = *$tmp281;
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from FieldLValue.frost:63:43
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Compiler.frost:3992:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp283 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp284 = (frost$core$Int64) {4};
org$frostlang$frostc$Type$Kind $tmp285 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp284);
org$frostlang$frostc$Position $tmp286 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp287 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp283, &$s288, $tmp285, $tmp286, $tmp287);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
ITable* $tmp289 = ((frost$core$Equatable*) $tmp282)->$class->itable;
while ($tmp289->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp289 = $tmp289->next;
}
$fn291 $tmp290 = $tmp289->methods[1];
frost$core$Bit $tmp292 = $tmp290(((frost$core$Equatable*) $tmp282), ((frost$core$Equatable*) $tmp283));
bool $tmp293 = $tmp292.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
if ($tmp293) goto block75; else goto block76;
block76:;
frost$core$Int64 $tmp294 = (frost$core$Int64) {3993};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s295, $tmp294, &$s296);
abort(); // unreachable
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3994
frost$core$Bit $tmp297 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp298 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param1, param2, $tmp271, $tmp282, $tmp297);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
org$frostlang$frostc$IR$Value** $tmp299 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp300 = *$tmp299;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
org$frostlang$frostc$IR$Value** $tmp301 = &param0->target;
*$tmp301 = $tmp298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q($tmp280);
goto block69;
block69:;
org$frostlang$frostc$Type* $tmp302 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$FieldLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:69
org$frostlang$frostc$Type** $tmp303 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp304 = *$tmp303;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
return $tmp304;

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
org$frostlang$frostc$FieldDecl** $tmp305 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp306 = *$tmp305;
org$frostlang$frostc$Annotations** $tmp307 = &$tmp306->annotations;
org$frostlang$frostc$Annotations* $tmp308 = *$tmp307;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from FieldLValue.frost:74:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp309 = &$tmp308->flags;
frost$core$Int64 $tmp310 = *$tmp309;
frost$core$Int64 $tmp311 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp312 = $tmp310.value;
int64_t $tmp313 = $tmp311.value;
int64_t $tmp314 = $tmp312 & $tmp313;
frost$core$Int64 $tmp315 = frost$core$Int64$init$builtin_int64($tmp314);
frost$core$Int64 $tmp316 = (frost$core$Int64) {0};
int64_t $tmp317 = $tmp315.value;
int64_t $tmp318 = $tmp316.value;
bool $tmp319 = $tmp317 != $tmp318;
frost$core$Bit $tmp320 = (frost$core$Bit) {$tmp319};
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block3; else goto block2;
block3:;
org$frostlang$frostc$FieldDecl** $tmp322 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp323 = *$tmp322;
org$frostlang$frostc$FieldDecl$Kind* $tmp324 = &$tmp323->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp325 = *$tmp324;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp326;
$tmp326 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp326->value = $tmp325;
frost$core$Int64 $tmp327 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:74:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp328 = &(&local1)->$rawValue;
*$tmp328 = $tmp327;
org$frostlang$frostc$FieldDecl$Kind $tmp329 = *(&local1);
*(&local0) = $tmp329;
org$frostlang$frostc$FieldDecl$Kind $tmp330 = *(&local0);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp331;
$tmp331 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp331->value = $tmp330;
ITable* $tmp332 = ((frost$core$Equatable*) $tmp326)->$class->itable;
while ($tmp332->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp332 = $tmp332->next;
}
$fn334 $tmp333 = $tmp332->methods[0];
frost$core$Bit $tmp335 = $tmp333(((frost$core$Equatable*) $tmp326), ((frost$core$Equatable*) $tmp331));
bool $tmp336 = $tmp335.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp331)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp326)));
if ($tmp336) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:75
org$frostlang$frostc$Compiler** $tmp337 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp338 = *$tmp337;
frost$collections$Stack** $tmp339 = &$tmp338->currentClass;
frost$collections$Stack* $tmp340 = *$tmp339;
org$frostlang$frostc$FieldDecl** $tmp341 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp342 = *$tmp341;
frost$core$Weak** $tmp343 = &$tmp342->owner;
frost$core$Weak* $tmp344 = *$tmp343;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:75:45
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp345 = &$tmp344->_valid;
frost$core$Bit $tmp346 = *$tmp345;
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp348 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s349, $tmp348);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp350 = &$tmp344->value;
frost$core$Object* $tmp351 = *$tmp350;
frost$core$Frost$ref$frost$core$Object$Q($tmp351);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from FieldLValue.frost:75:39
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:16
frost$collections$Array** $tmp352 = &$tmp340->contents;
frost$collections$Array* $tmp353 = *$tmp352;
frost$collections$Array$add$frost$collections$Array$T($tmp353, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp351)));
frost$core$Frost$unref$frost$core$Object$Q($tmp351);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:76
org$frostlang$frostc$Compiler** $tmp354 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp355 = *$tmp354;
org$frostlang$frostc$SymbolTable** $tmp356 = &$tmp355->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp357 = *$tmp356;
*(&local2) = ((org$frostlang$frostc$SymbolTable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
org$frostlang$frostc$SymbolTable* $tmp358 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local2) = $tmp357;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:77
org$frostlang$frostc$Compiler** $tmp359 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp360 = *$tmp359;
org$frostlang$frostc$Compiler** $tmp361 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp362 = *$tmp361;
org$frostlang$frostc$FieldDecl** $tmp363 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp364 = *$tmp363;
frost$core$Weak** $tmp365 = &$tmp364->owner;
frost$core$Weak* $tmp366 = *$tmp365;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:77:66
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp367 = &$tmp366->_valid;
frost$core$Bit $tmp368 = *$tmp367;
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp370 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s371, $tmp370);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp372 = &$tmp366->value;
frost$core$Object* $tmp373 = *$tmp372;
frost$core$Frost$ref$frost$core$Object$Q($tmp373);
org$frostlang$frostc$SymbolTable* $tmp374 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp362, ((org$frostlang$frostc$ClassDecl*) $tmp373));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
org$frostlang$frostc$SymbolTable** $tmp375 = &$tmp360->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp376 = *$tmp375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
org$frostlang$frostc$SymbolTable** $tmp377 = &$tmp360->symbolTable;
*$tmp377 = $tmp374;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$core$Frost$unref$frost$core$Object$Q($tmp373);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:78
org$frostlang$frostc$Compiler** $tmp378 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp379 = *$tmp378;
org$frostlang$frostc$FieldDecl** $tmp380 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp381 = *$tmp380;
org$frostlang$frostc$ASTNode** $tmp382 = &$tmp381->rawValue;
org$frostlang$frostc$ASTNode* $tmp383 = *$tmp382;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp384 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp385 = (frost$core$Int64) {3};
$fn387 $tmp386 = ($fn387) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp388 = $tmp386(param0);
frost$core$Bit $tmp389 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp384, $tmp385, $tmp388, $tmp389);
org$frostlang$frostc$IR$Value* $tmp390 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp379, $tmp383, $tmp384);
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
org$frostlang$frostc$IR$Value* $tmp391 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local3) = $tmp390;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:80
org$frostlang$frostc$Compiler** $tmp392 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp393 = *$tmp392;
org$frostlang$frostc$SymbolTable* $tmp394 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
org$frostlang$frostc$SymbolTable** $tmp395 = &$tmp393->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp396 = *$tmp395;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
org$frostlang$frostc$SymbolTable** $tmp397 = &$tmp393->symbolTable;
*$tmp397 = $tmp394;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:81
org$frostlang$frostc$Compiler** $tmp398 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp399 = *$tmp398;
frost$collections$Stack** $tmp400 = &$tmp399->currentClass;
frost$collections$Stack* $tmp401 = *$tmp400;
frost$core$Object* $tmp402 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp401);
frost$core$Frost$unref$frost$core$Object$Q($tmp402);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:82
org$frostlang$frostc$IR$Value* $tmp403 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
org$frostlang$frostc$IR$Value* $tmp404 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$SymbolTable* $tmp405 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local2) = ((org$frostlang$frostc$SymbolTable*) NULL);
return $tmp403;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:84
org$frostlang$frostc$IR$Value** $tmp406 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp407 = *$tmp406;
frost$core$Bit $tmp408 = frost$core$Bit$init$builtin_bit($tmp407 == NULL);
bool $tmp409 = $tmp408.value;
if ($tmp409) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:86
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:88
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:89
org$frostlang$frostc$FieldDecl** $tmp410 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp411 = *$tmp410;
org$frostlang$frostc$FieldDecl$Kind* $tmp412 = &$tmp411->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp413 = *$tmp412;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp414;
$tmp414 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp414->value = $tmp413;
frost$core$Int64 $tmp415 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:89:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp416 = &(&local6)->$rawValue;
*$tmp416 = $tmp415;
org$frostlang$frostc$FieldDecl$Kind $tmp417 = *(&local6);
*(&local5) = $tmp417;
org$frostlang$frostc$FieldDecl$Kind $tmp418 = *(&local5);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp419;
$tmp419 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp419->value = $tmp418;
ITable* $tmp420 = ((frost$core$Equatable*) $tmp414)->$class->itable;
while ($tmp420->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp420 = $tmp420->next;
}
$fn422 $tmp421 = $tmp420->methods[0];
frost$core$Bit $tmp423 = $tmp421(((frost$core$Equatable*) $tmp414), ((frost$core$Equatable*) $tmp419));
bool $tmp424 = $tmp423.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp419)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp414)));
if ($tmp424) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:90
org$frostlang$frostc$Compiler** $tmp425 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp426 = *$tmp425;
org$frostlang$frostc$Position* $tmp427 = &param0->position;
org$frostlang$frostc$Position $tmp428 = *$tmp427;
org$frostlang$frostc$IR$Value** $tmp429 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp430 = *$tmp429;
org$frostlang$frostc$FieldDecl** $tmp431 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp432 = *$tmp431;
frost$core$String** $tmp433 = &((org$frostlang$frostc$Symbol*) $tmp432)->name;
frost$core$String* $tmp434 = *$tmp433;
frost$core$String* $tmp435 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s436, $tmp434);
frost$core$String* $tmp437 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp435, &$s438);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp439 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp439);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp440 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp441 = (frost$core$Int64) {3};
org$frostlang$frostc$Type** $tmp442 = &param0->rawType;
org$frostlang$frostc$Type* $tmp443 = *$tmp442;
frost$core$Bit $tmp444 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp440, $tmp441, $tmp443, $tmp444);
org$frostlang$frostc$IR$Value* $tmp445 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp426, $tmp428, $tmp430, $tmp437, ((frost$collections$ListView*) $tmp439), $tmp440);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
org$frostlang$frostc$IR$Value* $tmp446 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
*(&local4) = $tmp445;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
goto block19;
block20:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:94
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:95
org$frostlang$frostc$Compiler** $tmp447 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp448 = *$tmp447;
org$frostlang$frostc$FieldDecl** $tmp449 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp450 = *$tmp449;
frost$core$Weak** $tmp451 = &$tmp450->owner;
frost$core$Weak* $tmp452 = *$tmp451;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:95:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp453 = &$tmp452->_valid;
frost$core$Bit $tmp454 = *$tmp453;
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp456 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s457, $tmp456);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp458 = &$tmp452->value;
frost$core$Object* $tmp459 = *$tmp458;
frost$core$Frost$ref$frost$core$Object$Q($tmp459);
frost$core$Bit $tmp460 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit($tmp448, ((org$frostlang$frostc$ClassDecl*) $tmp459));
bool $tmp461 = $tmp460.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp459);
if ($tmp461) goto block22; else goto block24;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:96
org$frostlang$frostc$Compiler** $tmp462 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp463 = *$tmp462;
org$frostlang$frostc$IR** $tmp464 = &$tmp463->ir;
org$frostlang$frostc$IR* $tmp465 = *$tmp464;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp466 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp467 = (frost$core$Int64) {10};
org$frostlang$frostc$Position* $tmp468 = &param0->position;
org$frostlang$frostc$Position $tmp469 = *$tmp468;
org$frostlang$frostc$IR$Value** $tmp470 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp471 = *$tmp470;
org$frostlang$frostc$FieldDecl** $tmp472 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp473 = *$tmp472;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp466, $tmp467, $tmp469, $tmp471, $tmp473);
$fn475 $tmp474 = ($fn475) $tmp465->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp476 = $tmp474($tmp465, $tmp466);
*(&local7) = $tmp476;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
goto block23;
block24:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:99
org$frostlang$frostc$Compiler** $tmp477 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp478 = *$tmp477;
org$frostlang$frostc$IR** $tmp479 = &$tmp478->ir;
org$frostlang$frostc$IR* $tmp480 = *$tmp479;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp481 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp482 = (frost$core$Int64) {11};
org$frostlang$frostc$Position* $tmp483 = &param0->position;
org$frostlang$frostc$Position $tmp484 = *$tmp483;
org$frostlang$frostc$IR$Value** $tmp485 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp486 = *$tmp485;
org$frostlang$frostc$FieldDecl** $tmp487 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp488 = *$tmp487;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp481, $tmp482, $tmp484, $tmp486, $tmp488);
$fn490 $tmp489 = ($fn490) $tmp480->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp491 = $tmp489($tmp480, $tmp481);
*(&local8) = $tmp491;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:101
org$frostlang$frostc$Compiler** $tmp492 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp493 = *$tmp492;
org$frostlang$frostc$IR** $tmp494 = &$tmp493->ir;
org$frostlang$frostc$IR* $tmp495 = *$tmp494;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp496 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp497 = (frost$core$Int64) {14};
org$frostlang$frostc$Position* $tmp498 = &param0->position;
org$frostlang$frostc$Position $tmp499 = *$tmp498;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp500 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp501 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp502 = *(&local8);
org$frostlang$frostc$Type** $tmp503 = &param0->rawType;
org$frostlang$frostc$Type* $tmp504 = *$tmp503;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp500, $tmp501, $tmp502, $tmp504);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp496, $tmp497, $tmp499, $tmp500);
$fn506 $tmp505 = ($fn506) $tmp495->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp507 = $tmp505($tmp495, $tmp496);
*(&local7) = $tmp507;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:103
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp508 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp509 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp510 = *(&local7);
org$frostlang$frostc$Type** $tmp511 = &param0->rawType;
org$frostlang$frostc$Type* $tmp512 = *$tmp511;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp508, $tmp509, $tmp510, $tmp512);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
org$frostlang$frostc$IR$Value* $tmp513 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local4) = $tmp508;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:105
org$frostlang$frostc$Compiler** $tmp514 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp515 = *$tmp514;
frost$core$Bit* $tmp516 = &$tmp515->inFieldCleanup;
frost$core$Bit $tmp517 = *$tmp516;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:105:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp518 = $tmp517.value;
bool $tmp519 = !$tmp518;
frost$core$Bit $tmp520 = (frost$core$Bit) {$tmp519};
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block31; else goto block30;
block31:;
org$frostlang$frostc$FieldDecl** $tmp522 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp523 = *$tmp522;
org$frostlang$frostc$Annotations** $tmp524 = &$tmp523->annotations;
org$frostlang$frostc$Annotations* $tmp525 = *$tmp524;
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from FieldLValue.frost:105:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:151
frost$core$Int64* $tmp526 = &$tmp525->flags;
frost$core$Int64 $tmp527 = *$tmp526;
frost$core$Int64 $tmp528 = (frost$core$Int64) {4096};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:151:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp529 = $tmp527.value;
int64_t $tmp530 = $tmp528.value;
int64_t $tmp531 = $tmp529 & $tmp530;
frost$core$Int64 $tmp532 = frost$core$Int64$init$builtin_int64($tmp531);
frost$core$Int64 $tmp533 = (frost$core$Int64) {0};
int64_t $tmp534 = $tmp532.value;
int64_t $tmp535 = $tmp533.value;
bool $tmp536 = $tmp534 != $tmp535;
frost$core$Bit $tmp537 = (frost$core$Bit) {$tmp536};
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:106
org$frostlang$frostc$Compiler** $tmp539 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp540 = *$tmp539;
org$frostlang$frostc$Position* $tmp541 = &param0->position;
org$frostlang$frostc$Position $tmp542 = *$tmp541;
org$frostlang$frostc$IR$Value* $tmp543 = *(&local4);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp544 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp544);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp545 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp546 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp545, $tmp546);
org$frostlang$frostc$IR$Value* $tmp547 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp540, $tmp542, $tmp543, &$s548, ((frost$collections$ListView*) $tmp544), $tmp545);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
org$frostlang$frostc$IR$Value* $tmp549 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
*(&local4) = $tmp547;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
goto block30;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:109
org$frostlang$frostc$Type** $tmp550 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp551 = *$tmp550;
org$frostlang$frostc$IR$Value* $tmp552 = *(&local4);
$fn554 $tmp553 = ($fn554) $tmp552->$class->vtable[2];
org$frostlang$frostc$Type* $tmp555 = $tmp553($tmp552);
ITable* $tmp556 = ((frost$core$Equatable*) $tmp551)->$class->itable;
while ($tmp556->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp556 = $tmp556->next;
}
$fn558 $tmp557 = $tmp556->methods[1];
frost$core$Bit $tmp559 = $tmp557(((frost$core$Equatable*) $tmp551), ((frost$core$Equatable*) $tmp555));
bool $tmp560 = $tmp559.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
if ($tmp560) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:110
org$frostlang$frostc$Compiler** $tmp561 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp562 = *$tmp561;
org$frostlang$frostc$Position* $tmp563 = &param0->position;
org$frostlang$frostc$Position $tmp564 = *$tmp563;
org$frostlang$frostc$IR$Value* $tmp565 = *(&local4);
org$frostlang$frostc$Type** $tmp566 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp567 = *$tmp566;
org$frostlang$frostc$IR$Value* $tmp568 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp562, $tmp564, $tmp565, $tmp567);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
org$frostlang$frostc$IR$Value* $tmp569 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
*(&local4) = $tmp568;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
goto block36;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:112
org$frostlang$frostc$IR$Value* $tmp570 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
org$frostlang$frostc$IR$Value* $tmp571 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp570;

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
org$frostlang$frostc$IR$Value** $tmp572 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp573 = *$tmp572;
frost$core$Bit $tmp574 = frost$core$Bit$init$builtin_bit($tmp573 == NULL);
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:119
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:121
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:122
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:123
org$frostlang$frostc$Compiler** $tmp576 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp577 = *$tmp576;
frost$core$Bit* $tmp578 = &$tmp577->inFieldCleanup;
frost$core$Bit $tmp579 = *$tmp578;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:123:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp580 = $tmp579.value;
bool $tmp581 = !$tmp580;
frost$core$Bit $tmp582 = (frost$core$Bit) {$tmp581};
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block6; else goto block5;
block6:;
org$frostlang$frostc$FieldDecl** $tmp584 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp585 = *$tmp584;
org$frostlang$frostc$Annotations** $tmp586 = &$tmp585->annotations;
org$frostlang$frostc$Annotations* $tmp587 = *$tmp586;
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from FieldLValue.frost:123:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:151
frost$core$Int64* $tmp588 = &$tmp587->flags;
frost$core$Int64 $tmp589 = *$tmp588;
frost$core$Int64 $tmp590 = (frost$core$Int64) {4096};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:151:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp591 = $tmp589.value;
int64_t $tmp592 = $tmp590.value;
int64_t $tmp593 = $tmp591 & $tmp592;
frost$core$Int64 $tmp594 = frost$core$Int64$init$builtin_int64($tmp593);
frost$core$Int64 $tmp595 = (frost$core$Int64) {0};
int64_t $tmp596 = $tmp594.value;
int64_t $tmp597 = $tmp595.value;
bool $tmp598 = $tmp596 != $tmp597;
frost$core$Bit $tmp599 = (frost$core$Bit) {$tmp598};
bool $tmp600 = $tmp599.value;
if ($tmp600) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:124
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp601 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp601);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
frost$collections$Array* $tmp602 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local2) = $tmp601;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:125
frost$collections$Array* $tmp603 = *(&local2);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp604 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp605 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp606 = &param0->position;
org$frostlang$frostc$Position $tmp607 = *$tmp606;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp604, $tmp605, $tmp607, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp603, ((frost$core$Object*) $tmp604));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:126
org$frostlang$frostc$Compiler** $tmp608 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp609 = *$tmp608;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp610 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp611 = (frost$core$Int64) {9};
org$frostlang$frostc$Position* $tmp612 = &param0->position;
org$frostlang$frostc$Position $tmp613 = *$tmp612;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp614 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp615 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp616 = &param0->position;
org$frostlang$frostc$Position $tmp617 = *$tmp616;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp618 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp619 = (frost$core$Int64) {14};
org$frostlang$frostc$Type** $tmp620 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp621 = *$tmp620;
org$frostlang$frostc$Type* $tmp622 = org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp621);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp618, $tmp619, $tmp622);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp614, $tmp615, $tmp617, $tmp618);
frost$collections$Array* $tmp623 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp624 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp623);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp610, $tmp611, $tmp613, $tmp614, $tmp624);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from FieldLValue.frost:126:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4976
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp625 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp626 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp625, $tmp626);
org$frostlang$frostc$IR$Value* $tmp627 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp609, $tmp610, $tmp625);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
org$frostlang$frostc$IR$Value* $tmp628 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
*(&local1) = $tmp627;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
frost$collections$Array* $tmp629 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
*(&local2) = ((frost$collections$Array*) NULL);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:131
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$IR$Value* $tmp630 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
*(&local1) = param1;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:133
org$frostlang$frostc$Type** $tmp631 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp632 = *$tmp631;
org$frostlang$frostc$Type** $tmp633 = &param0->rawType;
org$frostlang$frostc$Type* $tmp634 = *$tmp633;
ITable* $tmp635 = ((frost$core$Equatable*) $tmp632)->$class->itable;
while ($tmp635->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp635 = $tmp635->next;
}
$fn637 $tmp636 = $tmp635->methods[1];
frost$core$Bit $tmp638 = $tmp636(((frost$core$Equatable*) $tmp632), ((frost$core$Equatable*) $tmp634));
bool $tmp639 = $tmp638.value;
if ($tmp639) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:134
org$frostlang$frostc$Compiler** $tmp640 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp641 = *$tmp640;
org$frostlang$frostc$Position* $tmp642 = &param0->position;
org$frostlang$frostc$Position $tmp643 = *$tmp642;
org$frostlang$frostc$IR$Value* $tmp644 = *(&local1);
org$frostlang$frostc$Type** $tmp645 = &param0->rawType;
org$frostlang$frostc$Type* $tmp646 = *$tmp645;
org$frostlang$frostc$IR$Value* $tmp647 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp641, $tmp643, $tmp644, $tmp646);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
org$frostlang$frostc$IR$Value* $tmp648 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
*(&local0) = $tmp647;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:135
org$frostlang$frostc$IR$Value* $tmp649 = *(&local0);
frost$core$Bit $tmp650 = frost$core$Bit$init$builtin_bit(false);
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:136
org$frostlang$frostc$IR$Value* $tmp652 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp653 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block15:;
goto block12;
block13:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:140
org$frostlang$frostc$IR$Value* $tmp654 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
org$frostlang$frostc$IR$Value* $tmp655 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
*(&local0) = $tmp654;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:142
org$frostlang$frostc$FieldDecl** $tmp656 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp657 = *$tmp656;
org$frostlang$frostc$FieldDecl$Kind* $tmp658 = &$tmp657->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp659 = *$tmp658;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp660;
$tmp660 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp660->value = $tmp659;
frost$core$Int64 $tmp661 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:142:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp662 = &(&local4)->$rawValue;
*$tmp662 = $tmp661;
org$frostlang$frostc$FieldDecl$Kind $tmp663 = *(&local4);
*(&local3) = $tmp663;
org$frostlang$frostc$FieldDecl$Kind $tmp664 = *(&local3);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp665;
$tmp665 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp665->value = $tmp664;
ITable* $tmp666 = ((frost$core$Equatable*) $tmp660)->$class->itable;
while ($tmp666->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp666 = $tmp666->next;
}
$fn668 $tmp667 = $tmp666->methods[0];
frost$core$Bit $tmp669 = $tmp667(((frost$core$Equatable*) $tmp660), ((frost$core$Equatable*) $tmp665));
bool $tmp670 = $tmp669.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp665)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp660)));
if ($tmp670) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:143
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp671 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp671);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$collections$Array* $tmp672 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
*(&local5) = $tmp671;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:144
frost$collections$Array* $tmp673 = *(&local5);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp674 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp675 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp676 = &param0->position;
org$frostlang$frostc$Position $tmp677 = *$tmp676;
org$frostlang$frostc$IR$Value* $tmp678 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp674, $tmp675, $tmp677, $tmp678);
frost$collections$Array$add$frost$collections$Array$T($tmp673, ((frost$core$Object*) $tmp674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:145
org$frostlang$frostc$Compiler** $tmp679 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp680 = *$tmp679;
org$frostlang$frostc$Position* $tmp681 = &param0->position;
org$frostlang$frostc$Position $tmp682 = *$tmp681;
org$frostlang$frostc$IR$Value** $tmp683 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp684 = *$tmp683;
org$frostlang$frostc$FieldDecl** $tmp685 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp686 = *$tmp685;
frost$core$String** $tmp687 = &((org$frostlang$frostc$Symbol*) $tmp686)->name;
frost$core$String* $tmp688 = *$tmp687;
frost$core$String* $tmp689 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s690, $tmp688);
frost$core$String* $tmp691 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp689, &$s692);
frost$collections$Array* $tmp693 = *(&local5);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp694 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp695 = (frost$core$Int64) {3};
org$frostlang$frostc$Type** $tmp696 = &param0->rawType;
org$frostlang$frostc$Type* $tmp697 = *$tmp696;
frost$core$Bit $tmp698 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp694, $tmp695, $tmp697, $tmp698);
org$frostlang$frostc$IR$Value* $tmp699 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp680, $tmp682, $tmp684, $tmp691, ((frost$collections$ListView*) $tmp693), $tmp694);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
frost$collections$Array* $tmp700 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
*(&local5) = ((frost$collections$Array*) NULL);
goto block17;
block18:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:149
org$frostlang$frostc$Compiler** $tmp701 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp702 = *$tmp701;
org$frostlang$frostc$Type** $tmp703 = &param0->rawType;
org$frostlang$frostc$Type* $tmp704 = *$tmp703;
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from FieldLValue.frost:149:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:622
frost$core$Bit $tmp705 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp704);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:622:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp706 = $tmp705.value;
bool $tmp707 = !$tmp706;
frost$core$Bit $tmp708 = (frost$core$Bit) {$tmp707};
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:623
frost$core$Bit $tmp710 = frost$core$Bit$init$builtin_bit(false);
*(&local6) = $tmp710;
goto block23;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:625
frost$core$Bit $tmp711 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit($tmp702, $tmp704);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:625:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp712 = $tmp711.value;
bool $tmp713 = !$tmp712;
frost$core$Bit $tmp714 = (frost$core$Bit) {$tmp713};
*(&local6) = $tmp714;
goto block23;
block23:;
frost$core$Bit $tmp715 = *(&local6);
bool $tmp716 = $tmp715.value;
if ($tmp716) goto block22; else goto block21;
block22:;
org$frostlang$frostc$FieldDecl** $tmp717 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp718 = *$tmp717;
frost$core$Weak** $tmp719 = &$tmp718->owner;
frost$core$Weak* $tmp720 = *$tmp719;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:149:54
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp721 = &$tmp720->_valid;
frost$core$Bit $tmp722 = *$tmp721;
bool $tmp723 = $tmp722.value;
if ($tmp723) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp724 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s725, $tmp724);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp726 = &$tmp720->value;
frost$core$Object* $tmp727 = *$tmp726;
frost$core$Frost$ref$frost$core$Object$Q($tmp727);
frost$core$String** $tmp728 = &((org$frostlang$frostc$ClassDecl*) $tmp727)->name;
frost$core$String* $tmp729 = *$tmp728;
ITable* $tmp731 = ((frost$core$Equatable*) $tmp729)->$class->itable;
while ($tmp731->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp731 = $tmp731->next;
}
$fn733 $tmp732 = $tmp731->methods[1];
frost$core$Bit $tmp734 = $tmp732(((frost$core$Equatable*) $tmp729), ((frost$core$Equatable*) &$s730));
bool $tmp735 = $tmp734.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp727);
if ($tmp735) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:150
org$frostlang$frostc$Compiler** $tmp736 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp737 = *$tmp736;
org$frostlang$frostc$IR$Value* $tmp738 = *(&local1);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp737, $tmp738);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:151
$fn740 $tmp739 = ($fn740) param0->$class->vtable[5];
$tmp739(param0);
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:153
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp741 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp742 = (frost$core$Int64) {7};
org$frostlang$frostc$Compiler** $tmp743 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp744 = *$tmp743;
org$frostlang$frostc$IR** $tmp745 = &$tmp744->ir;
org$frostlang$frostc$IR* $tmp746 = *$tmp745;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp747 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp748 = (frost$core$Int64) {11};
org$frostlang$frostc$Position* $tmp749 = &param0->position;
org$frostlang$frostc$Position $tmp750 = *$tmp749;
org$frostlang$frostc$IR$Value** $tmp751 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp752 = *$tmp751;
org$frostlang$frostc$FieldDecl** $tmp753 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp754 = *$tmp753;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp747, $tmp748, $tmp750, $tmp752, $tmp754);
$fn756 $tmp755 = ($fn756) $tmp746->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp757 = $tmp755($tmp746, $tmp747);
org$frostlang$frostc$Type** $tmp758 = &param0->rawType;
org$frostlang$frostc$Type* $tmp759 = *$tmp758;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp741, $tmp742, $tmp757, $tmp759);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
org$frostlang$frostc$IR$Value* $tmp760 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local7) = $tmp741;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:155
org$frostlang$frostc$Compiler** $tmp761 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp762 = *$tmp761;
org$frostlang$frostc$IR** $tmp763 = &$tmp762->ir;
org$frostlang$frostc$IR* $tmp764 = *$tmp763;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp765 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp766 = (frost$core$Int64) {27};
org$frostlang$frostc$Position* $tmp767 = &param0->position;
org$frostlang$frostc$Position $tmp768 = *$tmp767;
org$frostlang$frostc$IR$Value* $tmp769 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp770 = *(&local7);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp765, $tmp766, $tmp768, $tmp769, $tmp770);
$fn772 $tmp771 = ($fn772) $tmp764->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp773 = $tmp771($tmp764, $tmp765);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
org$frostlang$frostc$IR$Value* $tmp774 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block17;
block17:;
org$frostlang$frostc$IR$Value* $tmp775 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp776 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$lvalue$FieldLValue$compileUnref(org$frostlang$frostc$lvalue$FieldLValue* param0) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$FieldDecl$Kind local1;
org$frostlang$frostc$FieldDecl$Kind local2;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$IR$Statement$ID local4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:160
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:161
org$frostlang$frostc$FieldDecl** $tmp777 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp778 = *$tmp777;
org$frostlang$frostc$FieldDecl$Kind* $tmp779 = &$tmp778->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp780 = *$tmp779;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp781;
$tmp781 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp781->value = $tmp780;
frost$core$Int64 $tmp782 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:161:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp783 = &(&local2)->$rawValue;
*$tmp783 = $tmp782;
org$frostlang$frostc$FieldDecl$Kind $tmp784 = *(&local2);
*(&local1) = $tmp784;
org$frostlang$frostc$FieldDecl$Kind $tmp785 = *(&local1);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp786;
$tmp786 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp786->value = $tmp785;
ITable* $tmp787 = ((frost$core$Equatable*) $tmp781)->$class->itable;
while ($tmp787->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp787 = $tmp787->next;
}
$fn789 $tmp788 = $tmp787->methods[0];
frost$core$Bit $tmp790 = $tmp788(((frost$core$Equatable*) $tmp781), ((frost$core$Equatable*) $tmp786));
bool $tmp791 = $tmp790.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp786)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp781)));
if ($tmp791) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:162
org$frostlang$frostc$IR$Value* $tmp792 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:164
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:165
org$frostlang$frostc$Compiler** $tmp793 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp794 = *$tmp793;
org$frostlang$frostc$FieldDecl** $tmp795 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp796 = *$tmp795;
frost$core$Weak** $tmp797 = &$tmp796->owner;
frost$core$Weak* $tmp798 = *$tmp797;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:165:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp799 = &$tmp798->_valid;
frost$core$Bit $tmp800 = *$tmp799;
bool $tmp801 = $tmp800.value;
if ($tmp801) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp802 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s803, $tmp802);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp804 = &$tmp798->value;
frost$core$Object* $tmp805 = *$tmp804;
frost$core$Frost$ref$frost$core$Object$Q($tmp805);
frost$core$Bit $tmp806 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit($tmp794, ((org$frostlang$frostc$ClassDecl*) $tmp805));
bool $tmp807 = $tmp806.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp805);
if ($tmp807) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:166
org$frostlang$frostc$Compiler** $tmp808 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp809 = *$tmp808;
org$frostlang$frostc$IR** $tmp810 = &$tmp809->ir;
org$frostlang$frostc$IR* $tmp811 = *$tmp810;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp812 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp813 = (frost$core$Int64) {10};
org$frostlang$frostc$Position* $tmp814 = &param0->position;
org$frostlang$frostc$Position $tmp815 = *$tmp814;
org$frostlang$frostc$IR$Value** $tmp816 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp817 = *$tmp816;
org$frostlang$frostc$FieldDecl** $tmp818 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp819 = *$tmp818;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp812, $tmp813, $tmp815, $tmp817, $tmp819);
$fn821 $tmp820 = ($fn821) $tmp811->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp822 = $tmp820($tmp811, $tmp812);
*(&local3) = $tmp822;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:169
org$frostlang$frostc$Compiler** $tmp823 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp824 = *$tmp823;
org$frostlang$frostc$IR** $tmp825 = &$tmp824->ir;
org$frostlang$frostc$IR* $tmp826 = *$tmp825;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp827 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp828 = (frost$core$Int64) {11};
org$frostlang$frostc$Position* $tmp829 = &param0->position;
org$frostlang$frostc$Position $tmp830 = *$tmp829;
org$frostlang$frostc$IR$Value** $tmp831 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp832 = *$tmp831;
org$frostlang$frostc$FieldDecl** $tmp833 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp834 = *$tmp833;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp827, $tmp828, $tmp830, $tmp832, $tmp834);
$fn836 $tmp835 = ($fn836) $tmp826->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp837 = $tmp835($tmp826, $tmp827);
*(&local4) = $tmp837;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:170
org$frostlang$frostc$Compiler** $tmp838 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp839 = *$tmp838;
org$frostlang$frostc$IR** $tmp840 = &$tmp839->ir;
org$frostlang$frostc$IR* $tmp841 = *$tmp840;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp842 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp843 = (frost$core$Int64) {14};
org$frostlang$frostc$Position* $tmp844 = &param0->position;
org$frostlang$frostc$Position $tmp845 = *$tmp844;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp846 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp847 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp848 = *(&local4);
org$frostlang$frostc$Type** $tmp849 = &param0->rawType;
org$frostlang$frostc$Type* $tmp850 = *$tmp849;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp846, $tmp847, $tmp848, $tmp850);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp842, $tmp843, $tmp845, $tmp846);
$fn852 $tmp851 = ($fn852) $tmp841->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp853 = $tmp851($tmp841, $tmp842);
*(&local3) = $tmp853;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:172
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp854 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp855 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp856 = *(&local3);
org$frostlang$frostc$Type** $tmp857 = &param0->rawType;
org$frostlang$frostc$Type* $tmp858 = *$tmp857;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp854, $tmp855, $tmp856, $tmp858);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
org$frostlang$frostc$IR$Value* $tmp859 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
*(&local0) = $tmp854;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:173
org$frostlang$frostc$Compiler** $tmp860 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp861 = *$tmp860;
org$frostlang$frostc$IR$Value* $tmp862 = *(&local0);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value($tmp861, $tmp862);
org$frostlang$frostc$IR$Value* $tmp863 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$lvalue$FieldLValue$cleanup(org$frostlang$frostc$lvalue$FieldLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp864 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp865 = *$tmp864;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
org$frostlang$frostc$IR$Value** $tmp866 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp867 = *$tmp866;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
org$frostlang$frostc$FieldDecl** $tmp868 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp869 = *$tmp868;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
org$frostlang$frostc$Type** $tmp870 = &param0->rawType;
org$frostlang$frostc$Type* $tmp871 = *$tmp870;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
org$frostlang$frostc$Type** $tmp872 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp873 = *$tmp872;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
return;

}

