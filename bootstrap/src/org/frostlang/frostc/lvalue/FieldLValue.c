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
typedef org$frostlang$frostc$Type* (*$fn186)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn221)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn224)(frost$core$Object*);
typedef frost$core$String* (*$fn230)(frost$core$Object*);
typedef frost$core$Bit (*$fn268)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn311)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn364)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef frost$core$Bit (*$fn399)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn452)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn467)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn483)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn531)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn535)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn623)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn654)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn719)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn726)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn742)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn758)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn775)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn807)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn822)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn838)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 39, -7329818318767612820, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20\x63\x6c\x61\x73\x73\x20", 21, 8387245444129569148, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x66\x6f\x72\x20", 5, 13946267892, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -3408958966132496692, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -4860172027847442545, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f", 4, 211223516, NULL };
static frost$core$String $s415 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s525 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x65\x74\x5f", 4, 223587128, NULL };
static frost$core$String $s678 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s711 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s716 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s789 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:370
org$frostlang$frostc$Type$Kind* $tmp29 = &$tmp28->typeKind;
org$frostlang$frostc$Type$Kind $tmp30 = *$tmp29;
org$frostlang$frostc$Type$Kind$wrapper* $tmp31;
$tmp31 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp31->value = $tmp30;
frost$core$Int64 $tmp32 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:370:31
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
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:370:42
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
frost$core$String** $tmp52 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp51))->name;
frost$core$String* $tmp53 = *$tmp52;
frost$core$Bit $tmp54 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp53, &$s55);
frost$core$Frost$unref$frost$core$Object$Q($tmp51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local2) = $tmp54;
goto block12;
block11:;
*(&local2) = $tmp40;
goto block12;
block12:;
frost$core$Bit $tmp56 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp36)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp31)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:33:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp57 = $tmp56.value;
bool $tmp58 = !$tmp57;
frost$core$Bit $tmp59 = (frost$core$Bit) {$tmp58};
bool $tmp60 = $tmp59.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
if ($tmp60) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:34
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp61 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp62 = *$tmp61;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
org$frostlang$frostc$IR$Value** $tmp63 = &param0->target;
*$tmp63 = param3;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:36
org$frostlang$frostc$Annotations** $tmp64 = &param4->annotations;
org$frostlang$frostc$Annotations* $tmp65 = *$tmp64;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from FieldLValue.frost:36:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp66 = &$tmp65->flags;
frost$core$Int64 $tmp67 = *$tmp66;
frost$core$Int64 $tmp68 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp69 = $tmp67.value;
int64_t $tmp70 = $tmp68.value;
int64_t $tmp71 = $tmp69 & $tmp70;
frost$core$Int64 $tmp72 = frost$core$Int64$init$builtin_int64($tmp71);
frost$core$Int64 $tmp73 = (frost$core$Int64) {0};
int64_t $tmp74 = $tmp72.value;
int64_t $tmp75 = $tmp73.value;
bool $tmp76 = $tmp74 != $tmp75;
frost$core$Bit $tmp77 = (frost$core$Bit) {$tmp76};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:36:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp78 = $tmp77.value;
bool $tmp79 = !$tmp78;
frost$core$Bit $tmp80 = (frost$core$Bit) {$tmp79};
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:37
frost$core$Weak** $tmp82 = &param4->owner;
frost$core$Weak* $tmp83 = *$tmp82;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:37:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp84 = &$tmp83->_valid;
frost$core$Bit $tmp85 = *$tmp84;
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp87 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s88, $tmp87);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp89 = &$tmp83->value;
frost$core$Object* $tmp90 = *$tmp89;
frost$core$Frost$ref$frost$core$Object$Q($tmp90);
org$frostlang$frostc$Annotations** $tmp91 = &((org$frostlang$frostc$ClassDecl*) $tmp90)->annotations;
org$frostlang$frostc$Annotations* $tmp92 = *$tmp91;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from FieldLValue.frost:37:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:155
frost$core$Int64* $tmp93 = &$tmp92->flags;
frost$core$Int64 $tmp94 = *$tmp93;
frost$core$Int64 $tmp95 = (frost$core$Int64) {8192};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96 & $tmp97;
frost$core$Int64 $tmp99 = frost$core$Int64$init$builtin_int64($tmp98);
frost$core$Int64 $tmp100 = (frost$core$Int64) {0};
int64_t $tmp101 = $tmp99.value;
int64_t $tmp102 = $tmp100.value;
bool $tmp103 = $tmp101 != $tmp102;
frost$core$Bit $tmp104 = (frost$core$Bit) {$tmp103};
bool $tmp105 = $tmp104.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp90);
if ($tmp105) goto block25; else goto block24;
block25:;
frost$core$Bit* $tmp106 = &param1->reportErrors;
frost$core$Bit $tmp107 = *$tmp106;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:37:54
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp108 = $tmp107.value;
bool $tmp109 = !$tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block22; else goto block24;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:39
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp112 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp113 = (frost$core$Int64) {7};
frost$core$Int64 $tmp114 = (frost$core$Int64) {18446744073709551615};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int64):org.frostlang.frostc.IR.Statement.ID from FieldLValue.frost:39:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int64* $tmp115 = &(&local6)->value;
*$tmp115 = $tmp114;
org$frostlang$frostc$IR$Statement$ID $tmp116 = *(&local6);
*(&local5) = $tmp116;
org$frostlang$frostc$IR$Statement$ID $tmp117 = *(&local5);
frost$core$Weak** $tmp118 = &param4->owner;
frost$core$Weak* $tmp119 = *$tmp118;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:39:71
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp120 = &$tmp119->_valid;
frost$core$Bit $tmp121 = *$tmp120;
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp123 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s124, $tmp123);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp125 = &$tmp119->value;
frost$core$Object* $tmp126 = *$tmp125;
frost$core$Frost$ref$frost$core$Object$Q($tmp126);
org$frostlang$frostc$Type** $tmp127 = &((org$frostlang$frostc$ClassDecl*) $tmp126)->type;
org$frostlang$frostc$Type* $tmp128 = *$tmp127;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp112, $tmp113, $tmp117, $tmp128);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
org$frostlang$frostc$IR$Value** $tmp129 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp130 = *$tmp129;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
org$frostlang$frostc$IR$Value** $tmp131 = &param0->target;
*$tmp131 = $tmp112;
frost$core$Frost$unref$frost$core$Object$Q($tmp126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
goto block23;
block24:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:42
frost$core$Bit $tmp132 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp133 = org$frostlang$frostc$Compiler$compileSelf$org$frostlang$frostc$Position$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param1, param2, $tmp132);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
org$frostlang$frostc$IR$Value** $tmp134 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp135 = *$tmp134;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
org$frostlang$frostc$IR$Value** $tmp136 = &param0->target;
*$tmp136 = $tmp133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
goto block23;
block23:;
goto block18;
block18:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:45
org$frostlang$frostc$Type** $tmp137 = &param4->type;
org$frostlang$frostc$Type* $tmp138 = *$tmp137;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
org$frostlang$frostc$Type** $tmp139 = &param0->rawType;
org$frostlang$frostc$Type* $tmp140 = *$tmp139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
org$frostlang$frostc$Type** $tmp141 = &param0->rawType;
*$tmp141 = $tmp138;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:46
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:47
frost$core$Bit* $tmp142 = &param1->inFieldCleanup;
frost$core$Bit $tmp143 = *$tmp142;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:47:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp144 = $tmp143.value;
bool $tmp145 = !$tmp144;
frost$core$Bit $tmp146 = (frost$core$Bit) {$tmp145};
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block41; else goto block40;
block41:;
org$frostlang$frostc$Annotations** $tmp148 = &param4->annotations;
org$frostlang$frostc$Annotations* $tmp149 = *$tmp148;
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from FieldLValue.frost:47:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:151
frost$core$Int64* $tmp150 = &$tmp149->flags;
frost$core$Int64 $tmp151 = *$tmp150;
frost$core$Int64 $tmp152 = (frost$core$Int64) {4096};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:151:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp153 = $tmp151.value;
int64_t $tmp154 = $tmp152.value;
int64_t $tmp155 = $tmp153 & $tmp154;
frost$core$Int64 $tmp156 = frost$core$Int64$init$builtin_int64($tmp155);
frost$core$Int64 $tmp157 = (frost$core$Int64) {0};
int64_t $tmp158 = $tmp156.value;
int64_t $tmp159 = $tmp157.value;
bool $tmp160 = $tmp158 != $tmp159;
frost$core$Bit $tmp161 = (frost$core$Bit) {$tmp160};
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block38; else goto block40;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:48
org$frostlang$frostc$Type** $tmp163 = &param0->rawType;
org$frostlang$frostc$Type* $tmp164 = *$tmp163;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from FieldLValue.frost:48:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp165 = &$tmp164->_subtypes;
org$frostlang$frostc$FixedArray* $tmp166 = *$tmp165;
frost$core$Bit $tmp167 = frost$core$Bit$init$builtin_bit($tmp166 != NULL);
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block46; else goto block47;
block47:;
frost$core$Int64 $tmp169 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s170, $tmp169);
abort(); // unreachable
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp171 = &$tmp164->_subtypes;
org$frostlang$frostc$FixedArray* $tmp172 = *$tmp171;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Int64 $tmp173 = (frost$core$Int64) {1};
frost$core$Object* $tmp174 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp172, $tmp173);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp174)));
org$frostlang$frostc$Type* $tmp175 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
*(&local7) = ((org$frostlang$frostc$Type*) $tmp174);
frost$core$Frost$unref$frost$core$Object$Q($tmp174);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
goto block39;
block40:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:51
org$frostlang$frostc$Type** $tmp176 = &param0->rawType;
org$frostlang$frostc$Type* $tmp177 = *$tmp176;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
org$frostlang$frostc$Type* $tmp178 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local7) = $tmp177;
goto block39;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:53
org$frostlang$frostc$IR$Value** $tmp179 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp180 = *$tmp179;
frost$core$Bit $tmp181 = frost$core$Bit$init$builtin_bit($tmp180 != NULL);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block48; else goto block50;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:54
org$frostlang$frostc$IR$Value** $tmp183 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp184 = *$tmp183;
$fn186 $tmp185 = ($fn186) $tmp184->$class->vtable[2];
org$frostlang$frostc$Type* $tmp187 = $tmp185($tmp184);
frost$core$Weak** $tmp188 = &param4->owner;
frost$core$Weak* $tmp189 = *$tmp188;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:54:69
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp190 = &$tmp189->_valid;
frost$core$Bit $tmp191 = *$tmp190;
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp193 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s194, $tmp193);
abort(); // unreachable
block53:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp195 = &$tmp189->value;
frost$core$Object* $tmp196 = *$tmp195;
frost$core$Frost$ref$frost$core$Object$Q($tmp196);
org$frostlang$frostc$Type* $tmp197 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param1, $tmp187, ((org$frostlang$frostc$ClassDecl*) $tmp196));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
org$frostlang$frostc$Type* $tmp198 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local8) = $tmp197;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$core$Frost$unref$frost$core$Object$Q($tmp196);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:55
org$frostlang$frostc$Type* $tmp199 = *(&local8);
frost$core$Bit $tmp200 = frost$core$Bit$init$builtin_bit($tmp199 != NULL);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp202 = (frost$core$Int64) {55};
frost$core$Weak** $tmp203 = &param4->owner;
frost$core$Weak* $tmp204 = *$tmp203;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:56:50
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp205 = &$tmp204->_valid;
frost$core$Bit $tmp206 = *$tmp205;
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp208 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s209, $tmp208);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp210 = &$tmp204->value;
frost$core$Object* $tmp211 = *$tmp210;
frost$core$Frost$ref$frost$core$Object$Q($tmp211);
frost$core$String** $tmp212 = &((org$frostlang$frostc$ClassDecl*) $tmp211)->name;
frost$core$String* $tmp213 = *$tmp212;
frost$core$String* $tmp214 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s215, $tmp213);
frost$core$String* $tmp216 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp214, &$s217);
org$frostlang$frostc$IR$Value** $tmp218 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp219 = *$tmp218;
$fn221 $tmp220 = ($fn221) $tmp219->$class->vtable[2];
org$frostlang$frostc$Type* $tmp222 = $tmp220($tmp219);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from FieldLValue.frost:56:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn224 $tmp223 = ($fn224) ((frost$core$Object*) $tmp222)->$class->vtable[0];
frost$core$String* $tmp225 = $tmp223(((frost$core$Object*) $tmp222));
frost$core$String* $tmp226 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp216, $tmp225);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$String* $tmp227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp226, &$s228);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from FieldLValue.frost:56:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn230 $tmp229 = ($fn230) ((frost$core$Object*) param4)->$class->vtable[0];
frost$core$String* $tmp231 = $tmp229(((frost$core$Object*) param4));
frost$core$String* $tmp232 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp227, $tmp231);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$String* $tmp233 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp232, &$s234);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s235, $tmp202, $tmp233);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q($tmp211);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:57
org$frostlang$frostc$Type* $tmp236 = *(&local8);
org$frostlang$frostc$Type* $tmp237 = *(&local7);
org$frostlang$frostc$Type* $tmp238 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp236, $tmp237);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
org$frostlang$frostc$Type** $tmp239 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp240 = *$tmp239;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
org$frostlang$frostc$Type** $tmp241 = &param0->effectiveType;
*$tmp241 = $tmp238;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
org$frostlang$frostc$Type* $tmp242 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
goto block49;
block50:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:60
org$frostlang$frostc$Type* $tmp243 = *(&local7);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
org$frostlang$frostc$Type** $tmp244 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp245 = *$tmp244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
org$frostlang$frostc$Type** $tmp246 = &param0->effectiveType;
*$tmp246 = $tmp243;
goto block49;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:62
org$frostlang$frostc$IR$Value** $tmp247 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp248 = *$tmp247;
frost$core$Bit $tmp249 = frost$core$Bit$init$builtin_bit($tmp248 != NULL);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:63
org$frostlang$frostc$IR$Value** $tmp251 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp252 = *$tmp251;
frost$core$Weak** $tmp253 = &param4->owner;
frost$core$Weak* $tmp254 = *$tmp253;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:63:72
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp255 = &$tmp254->_valid;
frost$core$Bit $tmp256 = *$tmp255;
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp258 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s259, $tmp258);
abort(); // unreachable
block67:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp260 = &$tmp254->value;
frost$core$Object* $tmp261 = *$tmp260;
frost$core$Frost$ref$frost$core$Object$Q($tmp261);
org$frostlang$frostc$Type** $tmp262 = &((org$frostlang$frostc$ClassDecl*) $tmp261)->type;
org$frostlang$frostc$Type* $tmp263 = *$tmp262;
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from FieldLValue.frost:63:43
org$frostlang$frostc$Type** $tmp264 = &param1->VOID_TYPE;
org$frostlang$frostc$Type* $tmp265 = *$tmp264;
ITable* $tmp266 = ((frost$core$Equatable*) $tmp263)->$class->itable;
while ($tmp266->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp266 = $tmp266->next;
}
$fn268 $tmp267 = $tmp266->methods[1];
frost$core$Bit $tmp269 = $tmp267(((frost$core$Equatable*) $tmp263), ((frost$core$Equatable*) $tmp265));
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block70; else goto block71;
block71:;
frost$core$Int64 $tmp271 = (frost$core$Int64) {4097};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s272, $tmp271, &$s273);
abort(); // unreachable
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4098
frost$core$Bit $tmp274 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp275 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param1, param2, $tmp252, $tmp263, $tmp274);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
org$frostlang$frostc$IR$Value** $tmp276 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp277 = *$tmp276;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
org$frostlang$frostc$IR$Value** $tmp278 = &param0->target;
*$tmp278 = $tmp275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
frost$core$Frost$unref$frost$core$Object$Q($tmp261);
goto block64;
block64:;
org$frostlang$frostc$Type* $tmp279 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$FieldLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:69
org$frostlang$frostc$Type** $tmp280 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp281 = *$tmp280;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
return $tmp281;

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
org$frostlang$frostc$FieldDecl** $tmp282 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp283 = *$tmp282;
org$frostlang$frostc$Annotations** $tmp284 = &$tmp283->annotations;
org$frostlang$frostc$Annotations* $tmp285 = *$tmp284;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from FieldLValue.frost:74:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp286 = &$tmp285->flags;
frost$core$Int64 $tmp287 = *$tmp286;
frost$core$Int64 $tmp288 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp289 = $tmp287.value;
int64_t $tmp290 = $tmp288.value;
int64_t $tmp291 = $tmp289 & $tmp290;
frost$core$Int64 $tmp292 = frost$core$Int64$init$builtin_int64($tmp291);
frost$core$Int64 $tmp293 = (frost$core$Int64) {0};
int64_t $tmp294 = $tmp292.value;
int64_t $tmp295 = $tmp293.value;
bool $tmp296 = $tmp294 != $tmp295;
frost$core$Bit $tmp297 = (frost$core$Bit) {$tmp296};
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block3; else goto block2;
block3:;
org$frostlang$frostc$FieldDecl** $tmp299 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp300 = *$tmp299;
org$frostlang$frostc$FieldDecl$Kind* $tmp301 = &$tmp300->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp302 = *$tmp301;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp303;
$tmp303 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp303->value = $tmp302;
frost$core$Int64 $tmp304 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:74:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp305 = &(&local1)->$rawValue;
*$tmp305 = $tmp304;
org$frostlang$frostc$FieldDecl$Kind $tmp306 = *(&local1);
*(&local0) = $tmp306;
org$frostlang$frostc$FieldDecl$Kind $tmp307 = *(&local0);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp308;
$tmp308 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp308->value = $tmp307;
ITable* $tmp309 = ((frost$core$Equatable*) $tmp303)->$class->itable;
while ($tmp309->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp309 = $tmp309->next;
}
$fn311 $tmp310 = $tmp309->methods[0];
frost$core$Bit $tmp312 = $tmp310(((frost$core$Equatable*) $tmp303), ((frost$core$Equatable*) $tmp308));
bool $tmp313 = $tmp312.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp308)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp303)));
if ($tmp313) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:75
org$frostlang$frostc$Compiler** $tmp314 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp315 = *$tmp314;
frost$collections$Stack** $tmp316 = &$tmp315->currentClass;
frost$collections$Stack* $tmp317 = *$tmp316;
org$frostlang$frostc$FieldDecl** $tmp318 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp319 = *$tmp318;
frost$core$Weak** $tmp320 = &$tmp319->owner;
frost$core$Weak* $tmp321 = *$tmp320;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:75:45
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp322 = &$tmp321->_valid;
frost$core$Bit $tmp323 = *$tmp322;
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp325 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s326, $tmp325);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp327 = &$tmp321->value;
frost$core$Object* $tmp328 = *$tmp327;
frost$core$Frost$ref$frost$core$Object$Q($tmp328);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from FieldLValue.frost:75:39
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:16
frost$collections$Array** $tmp329 = &$tmp317->contents;
frost$collections$Array* $tmp330 = *$tmp329;
frost$collections$Array$add$frost$collections$Array$T($tmp330, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp328)));
frost$core$Frost$unref$frost$core$Object$Q($tmp328);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:76
org$frostlang$frostc$Compiler** $tmp331 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp332 = *$tmp331;
org$frostlang$frostc$SymbolTable** $tmp333 = &$tmp332->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp334 = *$tmp333;
*(&local2) = ((org$frostlang$frostc$SymbolTable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
org$frostlang$frostc$SymbolTable* $tmp335 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local2) = $tmp334;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:77
org$frostlang$frostc$Compiler** $tmp336 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp337 = *$tmp336;
org$frostlang$frostc$Compiler** $tmp338 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp339 = *$tmp338;
org$frostlang$frostc$FieldDecl** $tmp340 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp341 = *$tmp340;
frost$core$Weak** $tmp342 = &$tmp341->owner;
frost$core$Weak* $tmp343 = *$tmp342;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:77:66
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp344 = &$tmp343->_valid;
frost$core$Bit $tmp345 = *$tmp344;
bool $tmp346 = $tmp345.value;
if ($tmp346) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp347 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s348, $tmp347);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp349 = &$tmp343->value;
frost$core$Object* $tmp350 = *$tmp349;
frost$core$Frost$ref$frost$core$Object$Q($tmp350);
org$frostlang$frostc$SymbolTable* $tmp351 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp339, ((org$frostlang$frostc$ClassDecl*) $tmp350));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
org$frostlang$frostc$SymbolTable** $tmp352 = &$tmp337->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp353 = *$tmp352;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
org$frostlang$frostc$SymbolTable** $tmp354 = &$tmp337->symbolTable;
*$tmp354 = $tmp351;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
frost$core$Frost$unref$frost$core$Object$Q($tmp350);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:78
org$frostlang$frostc$Compiler** $tmp355 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp356 = *$tmp355;
org$frostlang$frostc$FieldDecl** $tmp357 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp358 = *$tmp357;
org$frostlang$frostc$ASTNode** $tmp359 = &$tmp358->rawValue;
org$frostlang$frostc$ASTNode* $tmp360 = *$tmp359;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp361 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp362 = (frost$core$Int64) {3};
$fn364 $tmp363 = ($fn364) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp365 = $tmp363(param0);
frost$core$Bit $tmp366 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp361, $tmp362, $tmp365, $tmp366);
org$frostlang$frostc$IR$Value* $tmp367 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp356, $tmp360, $tmp361);
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
org$frostlang$frostc$IR$Value* $tmp368 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
*(&local3) = $tmp367;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:80
org$frostlang$frostc$Compiler** $tmp369 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp370 = *$tmp369;
org$frostlang$frostc$SymbolTable* $tmp371 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
org$frostlang$frostc$SymbolTable** $tmp372 = &$tmp370->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp373 = *$tmp372;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
org$frostlang$frostc$SymbolTable** $tmp374 = &$tmp370->symbolTable;
*$tmp374 = $tmp371;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:81
org$frostlang$frostc$Compiler** $tmp375 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp376 = *$tmp375;
frost$collections$Stack** $tmp377 = &$tmp376->currentClass;
frost$collections$Stack* $tmp378 = *$tmp377;
frost$core$Object* $tmp379 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp378);
frost$core$Frost$unref$frost$core$Object$Q($tmp379);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:82
org$frostlang$frostc$IR$Value* $tmp380 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
org$frostlang$frostc$IR$Value* $tmp381 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$SymbolTable* $tmp382 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local2) = ((org$frostlang$frostc$SymbolTable*) NULL);
return $tmp380;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:84
org$frostlang$frostc$IR$Value** $tmp383 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp384 = *$tmp383;
frost$core$Bit $tmp385 = frost$core$Bit$init$builtin_bit($tmp384 == NULL);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:86
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:88
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:89
org$frostlang$frostc$FieldDecl** $tmp387 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp388 = *$tmp387;
org$frostlang$frostc$FieldDecl$Kind* $tmp389 = &$tmp388->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp390 = *$tmp389;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp391;
$tmp391 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp391->value = $tmp390;
frost$core$Int64 $tmp392 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:89:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp393 = &(&local6)->$rawValue;
*$tmp393 = $tmp392;
org$frostlang$frostc$FieldDecl$Kind $tmp394 = *(&local6);
*(&local5) = $tmp394;
org$frostlang$frostc$FieldDecl$Kind $tmp395 = *(&local5);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp396;
$tmp396 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp396->value = $tmp395;
ITable* $tmp397 = ((frost$core$Equatable*) $tmp391)->$class->itable;
while ($tmp397->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp397 = $tmp397->next;
}
$fn399 $tmp398 = $tmp397->methods[0];
frost$core$Bit $tmp400 = $tmp398(((frost$core$Equatable*) $tmp391), ((frost$core$Equatable*) $tmp396));
bool $tmp401 = $tmp400.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp396)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp391)));
if ($tmp401) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:90
org$frostlang$frostc$Compiler** $tmp402 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp403 = *$tmp402;
org$frostlang$frostc$Position* $tmp404 = &param0->position;
org$frostlang$frostc$Position $tmp405 = *$tmp404;
org$frostlang$frostc$IR$Value** $tmp406 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp407 = *$tmp406;
org$frostlang$frostc$FieldDecl** $tmp408 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp409 = *$tmp408;
frost$core$String** $tmp410 = &((org$frostlang$frostc$Symbol*) $tmp409)->name;
frost$core$String* $tmp411 = *$tmp410;
frost$core$String* $tmp412 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s413, $tmp411);
frost$core$String* $tmp414 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp412, &$s415);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp416 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp416);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp417 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp418 = (frost$core$Int64) {3};
org$frostlang$frostc$Type** $tmp419 = &param0->rawType;
org$frostlang$frostc$Type* $tmp420 = *$tmp419;
frost$core$Bit $tmp421 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp417, $tmp418, $tmp420, $tmp421);
org$frostlang$frostc$IR$Value* $tmp422 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp403, $tmp405, $tmp407, $tmp414, ((frost$collections$ListView*) $tmp416), $tmp417);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
org$frostlang$frostc$IR$Value* $tmp423 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
*(&local4) = $tmp422;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
goto block19;
block20:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:94
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:95
org$frostlang$frostc$Compiler** $tmp424 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp425 = *$tmp424;
org$frostlang$frostc$FieldDecl** $tmp426 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp427 = *$tmp426;
frost$core$Weak** $tmp428 = &$tmp427->owner;
frost$core$Weak* $tmp429 = *$tmp428;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:95:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp430 = &$tmp429->_valid;
frost$core$Bit $tmp431 = *$tmp430;
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp433 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s434, $tmp433);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp435 = &$tmp429->value;
frost$core$Object* $tmp436 = *$tmp435;
frost$core$Frost$ref$frost$core$Object$Q($tmp436);
frost$core$Bit $tmp437 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit($tmp425, ((org$frostlang$frostc$ClassDecl*) $tmp436));
bool $tmp438 = $tmp437.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp436);
if ($tmp438) goto block22; else goto block24;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:96
org$frostlang$frostc$Compiler** $tmp439 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp440 = *$tmp439;
org$frostlang$frostc$IR** $tmp441 = &$tmp440->ir;
org$frostlang$frostc$IR* $tmp442 = *$tmp441;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp443 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp444 = (frost$core$Int64) {10};
org$frostlang$frostc$Position* $tmp445 = &param0->position;
org$frostlang$frostc$Position $tmp446 = *$tmp445;
org$frostlang$frostc$IR$Value** $tmp447 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp448 = *$tmp447;
org$frostlang$frostc$FieldDecl** $tmp449 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp450 = *$tmp449;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp443, $tmp444, $tmp446, $tmp448, $tmp450);
$fn452 $tmp451 = ($fn452) $tmp442->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp453 = $tmp451($tmp442, $tmp443);
*(&local7) = $tmp453;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
goto block23;
block24:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:99
org$frostlang$frostc$Compiler** $tmp454 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp455 = *$tmp454;
org$frostlang$frostc$IR** $tmp456 = &$tmp455->ir;
org$frostlang$frostc$IR* $tmp457 = *$tmp456;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp458 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp459 = (frost$core$Int64) {11};
org$frostlang$frostc$Position* $tmp460 = &param0->position;
org$frostlang$frostc$Position $tmp461 = *$tmp460;
org$frostlang$frostc$IR$Value** $tmp462 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp463 = *$tmp462;
org$frostlang$frostc$FieldDecl** $tmp464 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp465 = *$tmp464;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp458, $tmp459, $tmp461, $tmp463, $tmp465);
$fn467 $tmp466 = ($fn467) $tmp457->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp468 = $tmp466($tmp457, $tmp458);
*(&local8) = $tmp468;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:101
org$frostlang$frostc$Compiler** $tmp469 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp470 = *$tmp469;
org$frostlang$frostc$IR** $tmp471 = &$tmp470->ir;
org$frostlang$frostc$IR* $tmp472 = *$tmp471;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp473 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp474 = (frost$core$Int64) {14};
org$frostlang$frostc$Position* $tmp475 = &param0->position;
org$frostlang$frostc$Position $tmp476 = *$tmp475;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp477 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp478 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp479 = *(&local8);
org$frostlang$frostc$Type** $tmp480 = &param0->rawType;
org$frostlang$frostc$Type* $tmp481 = *$tmp480;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp477, $tmp478, $tmp479, $tmp481);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp473, $tmp474, $tmp476, $tmp477);
$fn483 $tmp482 = ($fn483) $tmp472->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp484 = $tmp482($tmp472, $tmp473);
*(&local7) = $tmp484;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:103
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp485 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp486 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp487 = *(&local7);
org$frostlang$frostc$Type** $tmp488 = &param0->rawType;
org$frostlang$frostc$Type* $tmp489 = *$tmp488;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp485, $tmp486, $tmp487, $tmp489);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
org$frostlang$frostc$IR$Value* $tmp490 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
*(&local4) = $tmp485;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:105
org$frostlang$frostc$Compiler** $tmp491 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp492 = *$tmp491;
frost$core$Bit* $tmp493 = &$tmp492->inFieldCleanup;
frost$core$Bit $tmp494 = *$tmp493;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:105:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp495 = $tmp494.value;
bool $tmp496 = !$tmp495;
frost$core$Bit $tmp497 = (frost$core$Bit) {$tmp496};
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block31; else goto block30;
block31:;
org$frostlang$frostc$FieldDecl** $tmp499 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp500 = *$tmp499;
org$frostlang$frostc$Annotations** $tmp501 = &$tmp500->annotations;
org$frostlang$frostc$Annotations* $tmp502 = *$tmp501;
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from FieldLValue.frost:105:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:151
frost$core$Int64* $tmp503 = &$tmp502->flags;
frost$core$Int64 $tmp504 = *$tmp503;
frost$core$Int64 $tmp505 = (frost$core$Int64) {4096};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:151:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp506 = $tmp504.value;
int64_t $tmp507 = $tmp505.value;
int64_t $tmp508 = $tmp506 & $tmp507;
frost$core$Int64 $tmp509 = frost$core$Int64$init$builtin_int64($tmp508);
frost$core$Int64 $tmp510 = (frost$core$Int64) {0};
int64_t $tmp511 = $tmp509.value;
int64_t $tmp512 = $tmp510.value;
bool $tmp513 = $tmp511 != $tmp512;
frost$core$Bit $tmp514 = (frost$core$Bit) {$tmp513};
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:106
org$frostlang$frostc$Compiler** $tmp516 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp517 = *$tmp516;
org$frostlang$frostc$Position* $tmp518 = &param0->position;
org$frostlang$frostc$Position $tmp519 = *$tmp518;
org$frostlang$frostc$IR$Value* $tmp520 = *(&local4);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp521 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp521);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp522 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp523 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp522, $tmp523);
org$frostlang$frostc$IR$Value* $tmp524 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp517, $tmp519, $tmp520, &$s525, ((frost$collections$ListView*) $tmp521), $tmp522);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
org$frostlang$frostc$IR$Value* $tmp526 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
*(&local4) = $tmp524;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
goto block30;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:109
org$frostlang$frostc$Type** $tmp527 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp528 = *$tmp527;
org$frostlang$frostc$IR$Value* $tmp529 = *(&local4);
$fn531 $tmp530 = ($fn531) $tmp529->$class->vtable[2];
org$frostlang$frostc$Type* $tmp532 = $tmp530($tmp529);
ITable* $tmp533 = ((frost$core$Equatable*) $tmp528)->$class->itable;
while ($tmp533->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp533 = $tmp533->next;
}
$fn535 $tmp534 = $tmp533->methods[1];
frost$core$Bit $tmp536 = $tmp534(((frost$core$Equatable*) $tmp528), ((frost$core$Equatable*) $tmp532));
bool $tmp537 = $tmp536.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
if ($tmp537) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:110
org$frostlang$frostc$Compiler** $tmp538 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp539 = *$tmp538;
org$frostlang$frostc$Position* $tmp540 = &param0->position;
org$frostlang$frostc$Position $tmp541 = *$tmp540;
org$frostlang$frostc$IR$Value* $tmp542 = *(&local4);
org$frostlang$frostc$Type** $tmp543 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp544 = *$tmp543;
org$frostlang$frostc$IR$Value* $tmp545 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp539, $tmp541, $tmp542, $tmp544);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
org$frostlang$frostc$IR$Value* $tmp546 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
*(&local4) = $tmp545;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
goto block36;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:112
org$frostlang$frostc$IR$Value* $tmp547 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
org$frostlang$frostc$IR$Value* $tmp548 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp547;

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
org$frostlang$frostc$IR$Value** $tmp549 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp550 = *$tmp549;
frost$core$Bit $tmp551 = frost$core$Bit$init$builtin_bit($tmp550 == NULL);
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:119
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:121
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:122
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:123
org$frostlang$frostc$Compiler** $tmp553 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp554 = *$tmp553;
frost$core$Bit* $tmp555 = &$tmp554->inFieldCleanup;
frost$core$Bit $tmp556 = *$tmp555;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:123:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp557 = $tmp556.value;
bool $tmp558 = !$tmp557;
frost$core$Bit $tmp559 = (frost$core$Bit) {$tmp558};
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block6; else goto block5;
block6:;
org$frostlang$frostc$FieldDecl** $tmp561 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp562 = *$tmp561;
org$frostlang$frostc$Annotations** $tmp563 = &$tmp562->annotations;
org$frostlang$frostc$Annotations* $tmp564 = *$tmp563;
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from FieldLValue.frost:123:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:151
frost$core$Int64* $tmp565 = &$tmp564->flags;
frost$core$Int64 $tmp566 = *$tmp565;
frost$core$Int64 $tmp567 = (frost$core$Int64) {4096};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:151:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp568 = $tmp566.value;
int64_t $tmp569 = $tmp567.value;
int64_t $tmp570 = $tmp568 & $tmp569;
frost$core$Int64 $tmp571 = frost$core$Int64$init$builtin_int64($tmp570);
frost$core$Int64 $tmp572 = (frost$core$Int64) {0};
int64_t $tmp573 = $tmp571.value;
int64_t $tmp574 = $tmp572.value;
bool $tmp575 = $tmp573 != $tmp574;
frost$core$Bit $tmp576 = (frost$core$Bit) {$tmp575};
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:124
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp578 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp578);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$collections$Array* $tmp579 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local2) = $tmp578;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:125
frost$collections$Array* $tmp580 = *(&local2);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp581 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp582 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp583 = &param0->position;
org$frostlang$frostc$Position $tmp584 = *$tmp583;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp581, $tmp582, $tmp584, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp580, ((frost$core$Object*) $tmp581));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:126
org$frostlang$frostc$Compiler** $tmp585 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp586 = *$tmp585;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp587 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp588 = (frost$core$Int64) {9};
org$frostlang$frostc$Position* $tmp589 = &param0->position;
org$frostlang$frostc$Position $tmp590 = *$tmp589;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp591 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp592 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp593 = &param0->position;
org$frostlang$frostc$Position $tmp594 = *$tmp593;
org$frostlang$frostc$Compiler** $tmp595 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp596 = *$tmp595;
org$frostlang$frostc$Compiler** $tmp597 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp598 = *$tmp597;
org$frostlang$frostc$Type** $tmp599 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp600 = *$tmp599;
org$frostlang$frostc$Type* $tmp601 = org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp598, $tmp600);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from FieldLValue.frost:127:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3694
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp602 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp603 = (frost$core$Int64) {14};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3694:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:273
org$frostlang$frostc$Type** $tmp604 = &$tmp596->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp605 = *$tmp604;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp606 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp607 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp606, $tmp607);
frost$collections$Array$add$frost$collections$Array$T($tmp606, ((frost$core$Object*) $tmp601));
org$frostlang$frostc$Type* $tmp608 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp605, ((frost$collections$ListView*) $tmp606));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp602, $tmp603, $tmp601, $tmp608);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp591, $tmp592, $tmp594, $tmp602);
frost$collections$Array* $tmp609 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp610 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp609);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp587, $tmp588, $tmp590, $tmp591, $tmp610);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from FieldLValue.frost:126:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5081
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp611 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp612 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp611, $tmp612);
org$frostlang$frostc$IR$Value* $tmp613 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp586, $tmp587, $tmp611);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
org$frostlang$frostc$IR$Value* $tmp614 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local1) = $tmp613;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$collections$Array* $tmp615 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
*(&local2) = ((frost$collections$Array*) NULL);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:132
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$IR$Value* $tmp616 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
*(&local1) = param1;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:134
org$frostlang$frostc$Type** $tmp617 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp618 = *$tmp617;
org$frostlang$frostc$Type** $tmp619 = &param0->rawType;
org$frostlang$frostc$Type* $tmp620 = *$tmp619;
ITable* $tmp621 = ((frost$core$Equatable*) $tmp618)->$class->itable;
while ($tmp621->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp621 = $tmp621->next;
}
$fn623 $tmp622 = $tmp621->methods[1];
frost$core$Bit $tmp624 = $tmp622(((frost$core$Equatable*) $tmp618), ((frost$core$Equatable*) $tmp620));
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block13; else goto block15;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:135
org$frostlang$frostc$Compiler** $tmp626 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp627 = *$tmp626;
org$frostlang$frostc$Position* $tmp628 = &param0->position;
org$frostlang$frostc$Position $tmp629 = *$tmp628;
org$frostlang$frostc$IR$Value* $tmp630 = *(&local1);
org$frostlang$frostc$Type** $tmp631 = &param0->rawType;
org$frostlang$frostc$Type* $tmp632 = *$tmp631;
org$frostlang$frostc$IR$Value* $tmp633 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp627, $tmp629, $tmp630, $tmp632);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
org$frostlang$frostc$IR$Value* $tmp634 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
*(&local0) = $tmp633;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:136
org$frostlang$frostc$IR$Value* $tmp635 = *(&local0);
frost$core$Bit $tmp636 = frost$core$Bit$init$builtin_bit(false);
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:137
org$frostlang$frostc$IR$Value* $tmp638 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp639 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block17:;
goto block14;
block15:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:141
org$frostlang$frostc$IR$Value* $tmp640 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
org$frostlang$frostc$IR$Value* $tmp641 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
*(&local0) = $tmp640;
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:143
org$frostlang$frostc$FieldDecl** $tmp642 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp643 = *$tmp642;
org$frostlang$frostc$FieldDecl$Kind* $tmp644 = &$tmp643->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp645 = *$tmp644;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp646;
$tmp646 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp646->value = $tmp645;
frost$core$Int64 $tmp647 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:143:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp648 = &(&local4)->$rawValue;
*$tmp648 = $tmp647;
org$frostlang$frostc$FieldDecl$Kind $tmp649 = *(&local4);
*(&local3) = $tmp649;
org$frostlang$frostc$FieldDecl$Kind $tmp650 = *(&local3);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp651;
$tmp651 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp651->value = $tmp650;
ITable* $tmp652 = ((frost$core$Equatable*) $tmp646)->$class->itable;
while ($tmp652->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp652 = $tmp652->next;
}
$fn654 $tmp653 = $tmp652->methods[0];
frost$core$Bit $tmp655 = $tmp653(((frost$core$Equatable*) $tmp646), ((frost$core$Equatable*) $tmp651));
bool $tmp656 = $tmp655.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp651)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp646)));
if ($tmp656) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:144
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp657 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp657);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
frost$collections$Array* $tmp658 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
*(&local5) = $tmp657;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:145
frost$collections$Array* $tmp659 = *(&local5);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp660 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp661 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp662 = &param0->position;
org$frostlang$frostc$Position $tmp663 = *$tmp662;
org$frostlang$frostc$IR$Value* $tmp664 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp660, $tmp661, $tmp663, $tmp664);
frost$collections$Array$add$frost$collections$Array$T($tmp659, ((frost$core$Object*) $tmp660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:146
org$frostlang$frostc$Compiler** $tmp665 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp666 = *$tmp665;
org$frostlang$frostc$Position* $tmp667 = &param0->position;
org$frostlang$frostc$Position $tmp668 = *$tmp667;
org$frostlang$frostc$IR$Value** $tmp669 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp670 = *$tmp669;
org$frostlang$frostc$FieldDecl** $tmp671 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp672 = *$tmp671;
frost$core$String** $tmp673 = &((org$frostlang$frostc$Symbol*) $tmp672)->name;
frost$core$String* $tmp674 = *$tmp673;
frost$core$String* $tmp675 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s676, $tmp674);
frost$core$String* $tmp677 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp675, &$s678);
frost$collections$Array* $tmp679 = *(&local5);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp680 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp681 = (frost$core$Int64) {3};
org$frostlang$frostc$Type** $tmp682 = &param0->rawType;
org$frostlang$frostc$Type* $tmp683 = *$tmp682;
frost$core$Bit $tmp684 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp680, $tmp681, $tmp683, $tmp684);
org$frostlang$frostc$IR$Value* $tmp685 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp666, $tmp668, $tmp670, $tmp677, ((frost$collections$ListView*) $tmp679), $tmp680);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$collections$Array* $tmp686 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
*(&local5) = ((frost$collections$Array*) NULL);
goto block19;
block20:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:150
org$frostlang$frostc$Compiler** $tmp687 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp688 = *$tmp687;
org$frostlang$frostc$Type** $tmp689 = &param0->rawType;
org$frostlang$frostc$Type* $tmp690 = *$tmp689;
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from FieldLValue.frost:150:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:722
frost$core$Bit $tmp691 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp690);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:722:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp692 = $tmp691.value;
bool $tmp693 = !$tmp692;
frost$core$Bit $tmp694 = (frost$core$Bit) {$tmp693};
bool $tmp695 = $tmp694.value;
if ($tmp695) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:723
frost$core$Bit $tmp696 = frost$core$Bit$init$builtin_bit(false);
*(&local6) = $tmp696;
goto block25;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:725
frost$core$Bit $tmp697 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit($tmp688, $tmp690);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:725:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp698 = $tmp697.value;
bool $tmp699 = !$tmp698;
frost$core$Bit $tmp700 = (frost$core$Bit) {$tmp699};
*(&local6) = $tmp700;
goto block25;
block25:;
frost$core$Bit $tmp701 = *(&local6);
bool $tmp702 = $tmp701.value;
if ($tmp702) goto block24; else goto block23;
block24:;
org$frostlang$frostc$FieldDecl** $tmp703 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp704 = *$tmp703;
frost$core$Weak** $tmp705 = &$tmp704->owner;
frost$core$Weak* $tmp706 = *$tmp705;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:150:54
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp707 = &$tmp706->_valid;
frost$core$Bit $tmp708 = *$tmp707;
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp710 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s711, $tmp710);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp712 = &$tmp706->value;
frost$core$Object* $tmp713 = *$tmp712;
frost$core$Frost$ref$frost$core$Object$Q($tmp713);
frost$core$String** $tmp714 = &((org$frostlang$frostc$ClassDecl*) $tmp713)->name;
frost$core$String* $tmp715 = *$tmp714;
ITable* $tmp717 = ((frost$core$Equatable*) $tmp715)->$class->itable;
while ($tmp717->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp717 = $tmp717->next;
}
$fn719 $tmp718 = $tmp717->methods[1];
frost$core$Bit $tmp720 = $tmp718(((frost$core$Equatable*) $tmp715), ((frost$core$Equatable*) &$s716));
bool $tmp721 = $tmp720.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp713);
if ($tmp721) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:151
org$frostlang$frostc$Compiler** $tmp722 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp723 = *$tmp722;
org$frostlang$frostc$IR$Value* $tmp724 = *(&local1);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp723, $tmp724);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:152
$fn726 $tmp725 = ($fn726) param0->$class->vtable[5];
$tmp725(param0);
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:154
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp727 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp728 = (frost$core$Int64) {7};
org$frostlang$frostc$Compiler** $tmp729 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp730 = *$tmp729;
org$frostlang$frostc$IR** $tmp731 = &$tmp730->ir;
org$frostlang$frostc$IR* $tmp732 = *$tmp731;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp733 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp734 = (frost$core$Int64) {11};
org$frostlang$frostc$Position* $tmp735 = &param0->position;
org$frostlang$frostc$Position $tmp736 = *$tmp735;
org$frostlang$frostc$IR$Value** $tmp737 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp738 = *$tmp737;
org$frostlang$frostc$FieldDecl** $tmp739 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp740 = *$tmp739;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp733, $tmp734, $tmp736, $tmp738, $tmp740);
$fn742 $tmp741 = ($fn742) $tmp732->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp743 = $tmp741($tmp732, $tmp733);
org$frostlang$frostc$Type** $tmp744 = &param0->rawType;
org$frostlang$frostc$Type* $tmp745 = *$tmp744;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp727, $tmp728, $tmp743, $tmp745);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
org$frostlang$frostc$IR$Value* $tmp746 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
*(&local7) = $tmp727;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:156
org$frostlang$frostc$Compiler** $tmp747 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp748 = *$tmp747;
org$frostlang$frostc$IR** $tmp749 = &$tmp748->ir;
org$frostlang$frostc$IR* $tmp750 = *$tmp749;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp751 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp752 = (frost$core$Int64) {27};
org$frostlang$frostc$Position* $tmp753 = &param0->position;
org$frostlang$frostc$Position $tmp754 = *$tmp753;
org$frostlang$frostc$IR$Value* $tmp755 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp756 = *(&local7);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp751, $tmp752, $tmp754, $tmp755, $tmp756);
$fn758 $tmp757 = ($fn758) $tmp750->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp759 = $tmp757($tmp750, $tmp751);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
org$frostlang$frostc$IR$Value* $tmp760 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block19;
block19:;
org$frostlang$frostc$IR$Value* $tmp761 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp762 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
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
org$frostlang$frostc$FieldDecl** $tmp763 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp764 = *$tmp763;
org$frostlang$frostc$FieldDecl$Kind* $tmp765 = &$tmp764->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp766 = *$tmp765;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp767;
$tmp767 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp767->value = $tmp766;
frost$core$Int64 $tmp768 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:162:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp769 = &(&local2)->$rawValue;
*$tmp769 = $tmp768;
org$frostlang$frostc$FieldDecl$Kind $tmp770 = *(&local2);
*(&local1) = $tmp770;
org$frostlang$frostc$FieldDecl$Kind $tmp771 = *(&local1);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp772;
$tmp772 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp772->value = $tmp771;
ITable* $tmp773 = ((frost$core$Equatable*) $tmp767)->$class->itable;
while ($tmp773->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp773 = $tmp773->next;
}
$fn775 $tmp774 = $tmp773->methods[0];
frost$core$Bit $tmp776 = $tmp774(((frost$core$Equatable*) $tmp767), ((frost$core$Equatable*) $tmp772));
bool $tmp777 = $tmp776.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp772)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp767)));
if ($tmp777) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:163
org$frostlang$frostc$IR$Value* $tmp778 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:165
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:166
org$frostlang$frostc$Compiler** $tmp779 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp780 = *$tmp779;
org$frostlang$frostc$FieldDecl** $tmp781 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp782 = *$tmp781;
frost$core$Weak** $tmp783 = &$tmp782->owner;
frost$core$Weak* $tmp784 = *$tmp783;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:166:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp785 = &$tmp784->_valid;
frost$core$Bit $tmp786 = *$tmp785;
bool $tmp787 = $tmp786.value;
if ($tmp787) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp788 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s789, $tmp788);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp790 = &$tmp784->value;
frost$core$Object* $tmp791 = *$tmp790;
frost$core$Frost$ref$frost$core$Object$Q($tmp791);
frost$core$Bit $tmp792 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit($tmp780, ((org$frostlang$frostc$ClassDecl*) $tmp791));
bool $tmp793 = $tmp792.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp791);
if ($tmp793) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:167
org$frostlang$frostc$Compiler** $tmp794 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp795 = *$tmp794;
org$frostlang$frostc$IR** $tmp796 = &$tmp795->ir;
org$frostlang$frostc$IR* $tmp797 = *$tmp796;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp798 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp799 = (frost$core$Int64) {10};
org$frostlang$frostc$Position* $tmp800 = &param0->position;
org$frostlang$frostc$Position $tmp801 = *$tmp800;
org$frostlang$frostc$IR$Value** $tmp802 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp803 = *$tmp802;
org$frostlang$frostc$FieldDecl** $tmp804 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp805 = *$tmp804;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp798, $tmp799, $tmp801, $tmp803, $tmp805);
$fn807 $tmp806 = ($fn807) $tmp797->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp808 = $tmp806($tmp797, $tmp798);
*(&local3) = $tmp808;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:170
org$frostlang$frostc$Compiler** $tmp809 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp810 = *$tmp809;
org$frostlang$frostc$IR** $tmp811 = &$tmp810->ir;
org$frostlang$frostc$IR* $tmp812 = *$tmp811;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp813 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp814 = (frost$core$Int64) {11};
org$frostlang$frostc$Position* $tmp815 = &param0->position;
org$frostlang$frostc$Position $tmp816 = *$tmp815;
org$frostlang$frostc$IR$Value** $tmp817 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp818 = *$tmp817;
org$frostlang$frostc$FieldDecl** $tmp819 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp820 = *$tmp819;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp813, $tmp814, $tmp816, $tmp818, $tmp820);
$fn822 $tmp821 = ($fn822) $tmp812->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp823 = $tmp821($tmp812, $tmp813);
*(&local4) = $tmp823;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:171
org$frostlang$frostc$Compiler** $tmp824 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp825 = *$tmp824;
org$frostlang$frostc$IR** $tmp826 = &$tmp825->ir;
org$frostlang$frostc$IR* $tmp827 = *$tmp826;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp828 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp829 = (frost$core$Int64) {14};
org$frostlang$frostc$Position* $tmp830 = &param0->position;
org$frostlang$frostc$Position $tmp831 = *$tmp830;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp832 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp833 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp834 = *(&local4);
org$frostlang$frostc$Type** $tmp835 = &param0->rawType;
org$frostlang$frostc$Type* $tmp836 = *$tmp835;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp832, $tmp833, $tmp834, $tmp836);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp828, $tmp829, $tmp831, $tmp832);
$fn838 $tmp837 = ($fn838) $tmp827->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp839 = $tmp837($tmp827, $tmp828);
*(&local3) = $tmp839;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:173
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp840 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp841 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp842 = *(&local3);
org$frostlang$frostc$Type** $tmp843 = &param0->rawType;
org$frostlang$frostc$Type* $tmp844 = *$tmp843;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp840, $tmp841, $tmp842, $tmp844);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
org$frostlang$frostc$IR$Value* $tmp845 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
*(&local0) = $tmp840;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:174
org$frostlang$frostc$Compiler** $tmp846 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp847 = *$tmp846;
org$frostlang$frostc$IR$Value* $tmp848 = *(&local0);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value($tmp847, $tmp848);
org$frostlang$frostc$IR$Value* $tmp849 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$lvalue$FieldLValue$cleanup(org$frostlang$frostc$lvalue$FieldLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp850 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp851 = *$tmp850;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
org$frostlang$frostc$IR$Value** $tmp852 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp853 = *$tmp852;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
org$frostlang$frostc$FieldDecl** $tmp854 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp855 = *$tmp854;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
org$frostlang$frostc$Type** $tmp856 = &param0->rawType;
org$frostlang$frostc$Type* $tmp857 = *$tmp856;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
org$frostlang$frostc$Type** $tmp858 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp859 = *$tmp858;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
return;

}

