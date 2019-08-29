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
typedef org$frostlang$frostc$Type* (*$fn184)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn219)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn222)(frost$core$Object*);
typedef frost$core$String* (*$fn228)(frost$core$Object*);
typedef frost$core$Bit (*$fn266)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn309)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn362)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef frost$core$Bit (*$fn397)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn450)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn465)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn481)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn529)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn533)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn621)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn652)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn717)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn724)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn740)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn756)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn773)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn805)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn820)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn836)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 39, -1155759797158457110, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20\x63\x6c\x61\x73\x73\x20", 21, 6374091204168990154, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, -4672451134882412660, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x66\x6f\x72\x20", 5, 1394196365474570014, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f", 4, 7433203768955287672, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74", 3, -3106811833996379657, NULL };
static frost$core$String $s674 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x65\x74\x5f", 4, 3257523206249946292, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s709 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };

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
frost$core$Bit $tmp44 = (frost$core$Bit) {$tmp43 != NULL};
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block14; else goto block15;
block15:;
frost$core$Int $tmp46 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s47, $tmp46, &$s48);
abort(); // unreachable
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$Int $tmp49 = (frost$core$Int) {0u};
frost$core$Object* $tmp50 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp43, $tmp49);
frost$core$String** $tmp51 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp50))->name;
frost$core$String* $tmp52 = *$tmp51;
frost$core$Bit $tmp53 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp52, &$s54);
frost$core$Frost$unref$frost$core$Object$Q($tmp50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local2) = $tmp53;
goto block12;
block11:;
*(&local2) = $tmp40;
goto block12;
block12:;
frost$core$Bit $tmp55 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp36)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp31)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:33:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp56 = $tmp55.value;
bool $tmp57 = !$tmp56;
frost$core$Bit $tmp58 = (frost$core$Bit) {$tmp57};
bool $tmp59 = $tmp58.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
if ($tmp59) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:34
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp60 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp61 = *$tmp60;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
org$frostlang$frostc$IR$Value** $tmp62 = &param0->target;
*$tmp62 = param3;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:36
org$frostlang$frostc$Annotations** $tmp63 = &param4->annotations;
org$frostlang$frostc$Annotations* $tmp64 = *$tmp63;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from FieldLValue.frost:36:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp65 = &$tmp64->flags;
frost$core$Int $tmp66 = *$tmp65;
frost$core$Int $tmp67 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67.value;
int64_t $tmp70 = $tmp68 & $tmp69;
frost$core$Int $tmp71 = (frost$core$Int) {$tmp70};
frost$core$Int $tmp72 = (frost$core$Int) {0u};
int64_t $tmp73 = $tmp71.value;
int64_t $tmp74 = $tmp72.value;
bool $tmp75 = $tmp73 != $tmp74;
frost$core$Bit $tmp76 = (frost$core$Bit) {$tmp75};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:36:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp77 = $tmp76.value;
bool $tmp78 = !$tmp77;
frost$core$Bit $tmp79 = (frost$core$Bit) {$tmp78};
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:37
frost$core$Weak** $tmp81 = &param4->owner;
frost$core$Weak* $tmp82 = *$tmp81;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:37:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp83 = &$tmp82->_valid;
frost$core$Bit $tmp84 = *$tmp83;
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block28; else goto block29;
block29:;
frost$core$Int $tmp86 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s87, $tmp86);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp88 = &$tmp82->value;
frost$core$Object* $tmp89 = *$tmp88;
frost$core$Frost$ref$frost$core$Object$Q($tmp89);
org$frostlang$frostc$Annotations** $tmp90 = &((org$frostlang$frostc$ClassDecl*) $tmp89)->annotations;
org$frostlang$frostc$Annotations* $tmp91 = *$tmp90;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from FieldLValue.frost:37:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:158
frost$core$Int* $tmp92 = &$tmp91->flags;
frost$core$Int $tmp93 = *$tmp92;
frost$core$Int $tmp94 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:158:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp95 = $tmp93.value;
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95 & $tmp96;
frost$core$Int $tmp98 = (frost$core$Int) {$tmp97};
frost$core$Int $tmp99 = (frost$core$Int) {0u};
int64_t $tmp100 = $tmp98.value;
int64_t $tmp101 = $tmp99.value;
bool $tmp102 = $tmp100 != $tmp101;
frost$core$Bit $tmp103 = (frost$core$Bit) {$tmp102};
bool $tmp104 = $tmp103.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp89);
if ($tmp104) goto block25; else goto block24;
block25:;
frost$core$Bit* $tmp105 = &param1->reportErrors;
frost$core$Bit $tmp106 = *$tmp105;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:37:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp107 = $tmp106.value;
bool $tmp108 = !$tmp107;
frost$core$Bit $tmp109 = (frost$core$Bit) {$tmp108};
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block22; else goto block24;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:39
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp111 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp112 = (frost$core$Int) {7u};
frost$core$Int $tmp113 = (frost$core$Int) {18446744073709551615u};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from FieldLValue.frost:39:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int* $tmp114 = &(&local6)->value;
*$tmp114 = $tmp113;
org$frostlang$frostc$IR$Statement$ID $tmp115 = *(&local6);
*(&local5) = $tmp115;
org$frostlang$frostc$IR$Statement$ID $tmp116 = *(&local5);
frost$core$Weak** $tmp117 = &param4->owner;
frost$core$Weak* $tmp118 = *$tmp117;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:39:71
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp119 = &$tmp118->_valid;
frost$core$Bit $tmp120 = *$tmp119;
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block36; else goto block37;
block37:;
frost$core$Int $tmp122 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s123, $tmp122);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp124 = &$tmp118->value;
frost$core$Object* $tmp125 = *$tmp124;
frost$core$Frost$ref$frost$core$Object$Q($tmp125);
org$frostlang$frostc$Type** $tmp126 = &((org$frostlang$frostc$ClassDecl*) $tmp125)->type;
org$frostlang$frostc$Type* $tmp127 = *$tmp126;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp111, $tmp112, $tmp116, $tmp127);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
org$frostlang$frostc$IR$Value** $tmp128 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp129 = *$tmp128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
org$frostlang$frostc$IR$Value** $tmp130 = &param0->target;
*$tmp130 = $tmp111;
frost$core$Frost$unref$frost$core$Object$Q($tmp125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
goto block23;
block24:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:42
frost$core$Bit $tmp131 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp132 = org$frostlang$frostc$Compiler$compileSelf$org$frostlang$frostc$Position$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param1, param2, $tmp131);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
org$frostlang$frostc$IR$Value** $tmp133 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp134 = *$tmp133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
org$frostlang$frostc$IR$Value** $tmp135 = &param0->target;
*$tmp135 = $tmp132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
goto block23;
block23:;
goto block18;
block18:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:45
org$frostlang$frostc$Type** $tmp136 = &param4->type;
org$frostlang$frostc$Type* $tmp137 = *$tmp136;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
org$frostlang$frostc$Type** $tmp138 = &param0->rawType;
org$frostlang$frostc$Type* $tmp139 = *$tmp138;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
org$frostlang$frostc$Type** $tmp140 = &param0->rawType;
*$tmp140 = $tmp137;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:46
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:47
frost$core$Bit* $tmp141 = &param1->inFieldCleanup;
frost$core$Bit $tmp142 = *$tmp141;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:47:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp143 = $tmp142.value;
bool $tmp144 = !$tmp143;
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block41; else goto block40;
block41:;
org$frostlang$frostc$Annotations** $tmp147 = &param4->annotations;
org$frostlang$frostc$Annotations* $tmp148 = *$tmp147;
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from FieldLValue.frost:47:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:154
frost$core$Int* $tmp149 = &$tmp148->flags;
frost$core$Int $tmp150 = *$tmp149;
frost$core$Int $tmp151 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:154:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp152 = $tmp150.value;
int64_t $tmp153 = $tmp151.value;
int64_t $tmp154 = $tmp152 & $tmp153;
frost$core$Int $tmp155 = (frost$core$Int) {$tmp154};
frost$core$Int $tmp156 = (frost$core$Int) {0u};
int64_t $tmp157 = $tmp155.value;
int64_t $tmp158 = $tmp156.value;
bool $tmp159 = $tmp157 != $tmp158;
frost$core$Bit $tmp160 = (frost$core$Bit) {$tmp159};
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block38; else goto block40;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:48
org$frostlang$frostc$Type** $tmp162 = &param0->rawType;
org$frostlang$frostc$Type* $tmp163 = *$tmp162;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from FieldLValue.frost:48:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp164 = &$tmp163->_subtypes;
org$frostlang$frostc$FixedArray* $tmp165 = *$tmp164;
frost$core$Bit $tmp166 = (frost$core$Bit) {$tmp165 != NULL};
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block46; else goto block47;
block47:;
frost$core$Int $tmp168 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s169, $tmp168, &$s170);
abort(); // unreachable
block46:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
frost$core$Int $tmp171 = (frost$core$Int) {1u};
frost$core$Object* $tmp172 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp165, $tmp171);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp172)));
org$frostlang$frostc$Type* $tmp173 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
*(&local7) = ((org$frostlang$frostc$Type*) $tmp172);
frost$core$Frost$unref$frost$core$Object$Q($tmp172);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
goto block39;
block40:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:51
org$frostlang$frostc$Type** $tmp174 = &param0->rawType;
org$frostlang$frostc$Type* $tmp175 = *$tmp174;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
org$frostlang$frostc$Type* $tmp176 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
*(&local7) = $tmp175;
goto block39;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:53
org$frostlang$frostc$IR$Value** $tmp177 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp178 = *$tmp177;
frost$core$Bit $tmp179 = (frost$core$Bit) {$tmp178 != NULL};
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block48; else goto block50;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:54
org$frostlang$frostc$IR$Value** $tmp181 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp182 = *$tmp181;
$fn184 $tmp183 = ($fn184) $tmp182->$class->vtable[2];
org$frostlang$frostc$Type* $tmp185 = $tmp183($tmp182);
frost$core$Weak** $tmp186 = &param4->owner;
frost$core$Weak* $tmp187 = *$tmp186;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:54:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp188 = &$tmp187->_valid;
frost$core$Bit $tmp189 = *$tmp188;
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block53; else goto block54;
block54:;
frost$core$Int $tmp191 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s192, $tmp191);
abort(); // unreachable
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp193 = &$tmp187->value;
frost$core$Object* $tmp194 = *$tmp193;
frost$core$Frost$ref$frost$core$Object$Q($tmp194);
org$frostlang$frostc$Type* $tmp195 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param1, $tmp185, ((org$frostlang$frostc$ClassDecl*) $tmp194));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
org$frostlang$frostc$Type* $tmp196 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local8) = $tmp195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$Frost$unref$frost$core$Object$Q($tmp194);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:55
org$frostlang$frostc$Type* $tmp197 = *(&local8);
frost$core$Bit $tmp198 = (frost$core$Bit) {$tmp197 != NULL};
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block55; else goto block56;
block56:;
frost$core$Int $tmp200 = (frost$core$Int) {55u};
frost$core$Weak** $tmp201 = &param4->owner;
frost$core$Weak* $tmp202 = *$tmp201;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:56:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp203 = &$tmp202->_valid;
frost$core$Bit $tmp204 = *$tmp203;
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block59; else goto block60;
block60:;
frost$core$Int $tmp206 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s207, $tmp206);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp208 = &$tmp202->value;
frost$core$Object* $tmp209 = *$tmp208;
frost$core$Frost$ref$frost$core$Object$Q($tmp209);
frost$core$String** $tmp210 = &((org$frostlang$frostc$ClassDecl*) $tmp209)->name;
frost$core$String* $tmp211 = *$tmp210;
frost$core$String* $tmp212 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s213, $tmp211);
frost$core$String* $tmp214 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp212, &$s215);
org$frostlang$frostc$IR$Value** $tmp216 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp217 = *$tmp216;
$fn219 $tmp218 = ($fn219) $tmp217->$class->vtable[2];
org$frostlang$frostc$Type* $tmp220 = $tmp218($tmp217);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from FieldLValue.frost:56:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn222 $tmp221 = ($fn222) ((frost$core$Object*) $tmp220)->$class->vtable[0];
frost$core$String* $tmp223 = $tmp221(((frost$core$Object*) $tmp220));
frost$core$String* $tmp224 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp214, $tmp223);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
frost$core$String* $tmp225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp224, &$s226);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from FieldLValue.frost:56:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn228 $tmp227 = ($fn228) ((frost$core$Object*) param4)->$class->vtable[0];
frost$core$String* $tmp229 = $tmp227(((frost$core$Object*) param4));
frost$core$String* $tmp230 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp225, $tmp229);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$String* $tmp231 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp230, &$s232);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s233, $tmp200, $tmp231);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$core$Frost$unref$frost$core$Object$Q($tmp209);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:57
org$frostlang$frostc$Type* $tmp234 = *(&local8);
org$frostlang$frostc$Type* $tmp235 = *(&local7);
org$frostlang$frostc$Type* $tmp236 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp234, $tmp235);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
org$frostlang$frostc$Type** $tmp237 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp238 = *$tmp237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
org$frostlang$frostc$Type** $tmp239 = &param0->effectiveType;
*$tmp239 = $tmp236;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
org$frostlang$frostc$Type* $tmp240 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
goto block49;
block50:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:60
org$frostlang$frostc$Type* $tmp241 = *(&local7);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
org$frostlang$frostc$Type** $tmp242 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp243 = *$tmp242;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
org$frostlang$frostc$Type** $tmp244 = &param0->effectiveType;
*$tmp244 = $tmp241;
goto block49;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:62
org$frostlang$frostc$IR$Value** $tmp245 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp246 = *$tmp245;
frost$core$Bit $tmp247 = (frost$core$Bit) {$tmp246 != NULL};
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:63
org$frostlang$frostc$IR$Value** $tmp249 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp250 = *$tmp249;
frost$core$Weak** $tmp251 = &param4->owner;
frost$core$Weak* $tmp252 = *$tmp251;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:63:72
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp253 = &$tmp252->_valid;
frost$core$Bit $tmp254 = *$tmp253;
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block67; else goto block68;
block68:;
frost$core$Int $tmp256 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s257, $tmp256);
abort(); // unreachable
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp258 = &$tmp252->value;
frost$core$Object* $tmp259 = *$tmp258;
frost$core$Frost$ref$frost$core$Object$Q($tmp259);
org$frostlang$frostc$Type** $tmp260 = &((org$frostlang$frostc$ClassDecl*) $tmp259)->type;
org$frostlang$frostc$Type* $tmp261 = *$tmp260;
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from FieldLValue.frost:63:43
org$frostlang$frostc$Type** $tmp262 = &param1->VOID_TYPE;
org$frostlang$frostc$Type* $tmp263 = *$tmp262;
ITable* $tmp264 = ((frost$core$Equatable*) $tmp261)->$class->itable;
while ($tmp264->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp264 = $tmp264->next;
}
$fn266 $tmp265 = $tmp264->methods[1];
frost$core$Bit $tmp267 = $tmp265(((frost$core$Equatable*) $tmp261), ((frost$core$Equatable*) $tmp263));
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block70; else goto block71;
block71:;
frost$core$Int $tmp269 = (frost$core$Int) {4102u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s270, $tmp269, &$s271);
abort(); // unreachable
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4103
frost$core$Bit $tmp272 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp273 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param1, param2, $tmp250, $tmp261, $tmp272);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
org$frostlang$frostc$IR$Value** $tmp274 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp275 = *$tmp274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
org$frostlang$frostc$IR$Value** $tmp276 = &param0->target;
*$tmp276 = $tmp273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$Frost$unref$frost$core$Object$Q($tmp259);
goto block64;
block64:;
org$frostlang$frostc$Type* $tmp277 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$FieldLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:69
org$frostlang$frostc$Type** $tmp278 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp279 = *$tmp278;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
return $tmp279;

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
org$frostlang$frostc$FieldDecl** $tmp280 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp281 = *$tmp280;
org$frostlang$frostc$Annotations** $tmp282 = &$tmp281->annotations;
org$frostlang$frostc$Annotations* $tmp283 = *$tmp282;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from FieldLValue.frost:74:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp284 = &$tmp283->flags;
frost$core$Int $tmp285 = *$tmp284;
frost$core$Int $tmp286 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp287 = $tmp285.value;
int64_t $tmp288 = $tmp286.value;
int64_t $tmp289 = $tmp287 & $tmp288;
frost$core$Int $tmp290 = (frost$core$Int) {$tmp289};
frost$core$Int $tmp291 = (frost$core$Int) {0u};
int64_t $tmp292 = $tmp290.value;
int64_t $tmp293 = $tmp291.value;
bool $tmp294 = $tmp292 != $tmp293;
frost$core$Bit $tmp295 = (frost$core$Bit) {$tmp294};
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block3; else goto block2;
block3:;
org$frostlang$frostc$FieldDecl** $tmp297 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp298 = *$tmp297;
org$frostlang$frostc$FieldDecl$Kind* $tmp299 = &$tmp298->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp300 = *$tmp299;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp301;
$tmp301 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp301->value = $tmp300;
frost$core$Int $tmp302 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:74:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp303 = &(&local1)->$rawValue;
*$tmp303 = $tmp302;
org$frostlang$frostc$FieldDecl$Kind $tmp304 = *(&local1);
*(&local0) = $tmp304;
org$frostlang$frostc$FieldDecl$Kind $tmp305 = *(&local0);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp306;
$tmp306 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp306->value = $tmp305;
ITable* $tmp307 = ((frost$core$Equatable*) $tmp301)->$class->itable;
while ($tmp307->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp307 = $tmp307->next;
}
$fn309 $tmp308 = $tmp307->methods[0];
frost$core$Bit $tmp310 = $tmp308(((frost$core$Equatable*) $tmp301), ((frost$core$Equatable*) $tmp306));
bool $tmp311 = $tmp310.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp306)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp301)));
if ($tmp311) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:75
org$frostlang$frostc$Compiler** $tmp312 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp313 = *$tmp312;
frost$collections$Stack** $tmp314 = &$tmp313->currentClass;
frost$collections$Stack* $tmp315 = *$tmp314;
org$frostlang$frostc$FieldDecl** $tmp316 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp317 = *$tmp316;
frost$core$Weak** $tmp318 = &$tmp317->owner;
frost$core$Weak* $tmp319 = *$tmp318;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:75:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp320 = &$tmp319->_valid;
frost$core$Bit $tmp321 = *$tmp320;
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block9; else goto block10;
block10:;
frost$core$Int $tmp323 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s324, $tmp323);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp325 = &$tmp319->value;
frost$core$Object* $tmp326 = *$tmp325;
frost$core$Frost$ref$frost$core$Object$Q($tmp326);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from FieldLValue.frost:75:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp327 = &$tmp315->contents;
frost$collections$Array* $tmp328 = *$tmp327;
frost$collections$Array$add$frost$collections$Array$T($tmp328, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp326)));
frost$core$Frost$unref$frost$core$Object$Q($tmp326);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:76
org$frostlang$frostc$Compiler** $tmp329 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp330 = *$tmp329;
org$frostlang$frostc$SymbolTable** $tmp331 = &$tmp330->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp332 = *$tmp331;
*(&local2) = ((org$frostlang$frostc$SymbolTable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
org$frostlang$frostc$SymbolTable* $tmp333 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local2) = $tmp332;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:77
org$frostlang$frostc$Compiler** $tmp334 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp335 = *$tmp334;
org$frostlang$frostc$Compiler** $tmp336 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp337 = *$tmp336;
org$frostlang$frostc$FieldDecl** $tmp338 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp339 = *$tmp338;
frost$core$Weak** $tmp340 = &$tmp339->owner;
frost$core$Weak* $tmp341 = *$tmp340;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:77:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp342 = &$tmp341->_valid;
frost$core$Bit $tmp343 = *$tmp342;
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block14; else goto block15;
block15:;
frost$core$Int $tmp345 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s346, $tmp345);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp347 = &$tmp341->value;
frost$core$Object* $tmp348 = *$tmp347;
frost$core$Frost$ref$frost$core$Object$Q($tmp348);
org$frostlang$frostc$SymbolTable* $tmp349 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp337, ((org$frostlang$frostc$ClassDecl*) $tmp348));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
org$frostlang$frostc$SymbolTable** $tmp350 = &$tmp335->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp351 = *$tmp350;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
org$frostlang$frostc$SymbolTable** $tmp352 = &$tmp335->symbolTable;
*$tmp352 = $tmp349;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
frost$core$Frost$unref$frost$core$Object$Q($tmp348);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:78
org$frostlang$frostc$Compiler** $tmp353 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp354 = *$tmp353;
org$frostlang$frostc$FieldDecl** $tmp355 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp356 = *$tmp355;
org$frostlang$frostc$ASTNode** $tmp357 = &$tmp356->rawValue;
org$frostlang$frostc$ASTNode* $tmp358 = *$tmp357;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp359 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp360 = (frost$core$Int) {3u};
$fn362 $tmp361 = ($fn362) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp363 = $tmp361(param0);
frost$core$Bit $tmp364 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp359, $tmp360, $tmp363, $tmp364);
org$frostlang$frostc$IR$Value* $tmp365 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp354, $tmp358, $tmp359);
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
org$frostlang$frostc$IR$Value* $tmp366 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
*(&local3) = $tmp365;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:80
org$frostlang$frostc$Compiler** $tmp367 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp368 = *$tmp367;
org$frostlang$frostc$SymbolTable* $tmp369 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
org$frostlang$frostc$SymbolTable** $tmp370 = &$tmp368->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp371 = *$tmp370;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
org$frostlang$frostc$SymbolTable** $tmp372 = &$tmp368->symbolTable;
*$tmp372 = $tmp369;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:81
org$frostlang$frostc$Compiler** $tmp373 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp374 = *$tmp373;
frost$collections$Stack** $tmp375 = &$tmp374->currentClass;
frost$collections$Stack* $tmp376 = *$tmp375;
frost$core$Object* $tmp377 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp376);
frost$core$Frost$unref$frost$core$Object$Q($tmp377);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:82
org$frostlang$frostc$IR$Value* $tmp378 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
org$frostlang$frostc$IR$Value* $tmp379 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$SymbolTable* $tmp380 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local2) = ((org$frostlang$frostc$SymbolTable*) NULL);
return $tmp378;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:84
org$frostlang$frostc$IR$Value** $tmp381 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp382 = *$tmp381;
frost$core$Bit $tmp383 = (frost$core$Bit) {$tmp382 == NULL};
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:86
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:88
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:89
org$frostlang$frostc$FieldDecl** $tmp385 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp386 = *$tmp385;
org$frostlang$frostc$FieldDecl$Kind* $tmp387 = &$tmp386->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp388 = *$tmp387;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp389;
$tmp389 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp389->value = $tmp388;
frost$core$Int $tmp390 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:89:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp391 = &(&local6)->$rawValue;
*$tmp391 = $tmp390;
org$frostlang$frostc$FieldDecl$Kind $tmp392 = *(&local6);
*(&local5) = $tmp392;
org$frostlang$frostc$FieldDecl$Kind $tmp393 = *(&local5);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp394;
$tmp394 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp394->value = $tmp393;
ITable* $tmp395 = ((frost$core$Equatable*) $tmp389)->$class->itable;
while ($tmp395->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp395 = $tmp395->next;
}
$fn397 $tmp396 = $tmp395->methods[0];
frost$core$Bit $tmp398 = $tmp396(((frost$core$Equatable*) $tmp389), ((frost$core$Equatable*) $tmp394));
bool $tmp399 = $tmp398.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp394)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp389)));
if ($tmp399) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:90
org$frostlang$frostc$Compiler** $tmp400 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp401 = *$tmp400;
org$frostlang$frostc$Position* $tmp402 = &param0->position;
org$frostlang$frostc$Position $tmp403 = *$tmp402;
org$frostlang$frostc$IR$Value** $tmp404 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp405 = *$tmp404;
org$frostlang$frostc$FieldDecl** $tmp406 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp407 = *$tmp406;
frost$core$String** $tmp408 = &((org$frostlang$frostc$Symbol*) $tmp407)->name;
frost$core$String* $tmp409 = *$tmp408;
frost$core$String* $tmp410 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s411, $tmp409);
frost$core$String* $tmp412 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp410, &$s413);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp414 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp414);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp415 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp416 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp417 = &param0->rawType;
org$frostlang$frostc$Type* $tmp418 = *$tmp417;
frost$core$Bit $tmp419 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp415, $tmp416, $tmp418, $tmp419);
org$frostlang$frostc$IR$Value* $tmp420 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp401, $tmp403, $tmp405, $tmp412, ((frost$collections$ListView*) $tmp414), $tmp415);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
org$frostlang$frostc$IR$Value* $tmp421 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local4) = $tmp420;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
goto block19;
block20:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:94
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:95
org$frostlang$frostc$Compiler** $tmp422 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp423 = *$tmp422;
org$frostlang$frostc$FieldDecl** $tmp424 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp425 = *$tmp424;
frost$core$Weak** $tmp426 = &$tmp425->owner;
frost$core$Weak* $tmp427 = *$tmp426;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:95:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp428 = &$tmp427->_valid;
frost$core$Bit $tmp429 = *$tmp428;
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block27; else goto block28;
block28:;
frost$core$Int $tmp431 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s432, $tmp431);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp433 = &$tmp427->value;
frost$core$Object* $tmp434 = *$tmp433;
frost$core$Frost$ref$frost$core$Object$Q($tmp434);
frost$core$Bit $tmp435 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit($tmp423, ((org$frostlang$frostc$ClassDecl*) $tmp434));
bool $tmp436 = $tmp435.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp434);
if ($tmp436) goto block22; else goto block24;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:96
org$frostlang$frostc$Compiler** $tmp437 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp438 = *$tmp437;
org$frostlang$frostc$IR** $tmp439 = &$tmp438->ir;
org$frostlang$frostc$IR* $tmp440 = *$tmp439;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp441 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp442 = (frost$core$Int) {10u};
org$frostlang$frostc$Position* $tmp443 = &param0->position;
org$frostlang$frostc$Position $tmp444 = *$tmp443;
org$frostlang$frostc$IR$Value** $tmp445 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp446 = *$tmp445;
org$frostlang$frostc$FieldDecl** $tmp447 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp448 = *$tmp447;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp441, $tmp442, $tmp444, $tmp446, $tmp448);
$fn450 $tmp449 = ($fn450) $tmp440->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp451 = $tmp449($tmp440, $tmp441);
*(&local7) = $tmp451;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
goto block23;
block24:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:99
org$frostlang$frostc$Compiler** $tmp452 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp453 = *$tmp452;
org$frostlang$frostc$IR** $tmp454 = &$tmp453->ir;
org$frostlang$frostc$IR* $tmp455 = *$tmp454;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp456 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp457 = (frost$core$Int) {11u};
org$frostlang$frostc$Position* $tmp458 = &param0->position;
org$frostlang$frostc$Position $tmp459 = *$tmp458;
org$frostlang$frostc$IR$Value** $tmp460 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp461 = *$tmp460;
org$frostlang$frostc$FieldDecl** $tmp462 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp463 = *$tmp462;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp456, $tmp457, $tmp459, $tmp461, $tmp463);
$fn465 $tmp464 = ($fn465) $tmp455->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp466 = $tmp464($tmp455, $tmp456);
*(&local8) = $tmp466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:101
org$frostlang$frostc$Compiler** $tmp467 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp468 = *$tmp467;
org$frostlang$frostc$IR** $tmp469 = &$tmp468->ir;
org$frostlang$frostc$IR* $tmp470 = *$tmp469;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp471 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp472 = (frost$core$Int) {14u};
org$frostlang$frostc$Position* $tmp473 = &param0->position;
org$frostlang$frostc$Position $tmp474 = *$tmp473;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp475 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp476 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp477 = *(&local8);
org$frostlang$frostc$Type** $tmp478 = &param0->rawType;
org$frostlang$frostc$Type* $tmp479 = *$tmp478;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp475, $tmp476, $tmp477, $tmp479);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp471, $tmp472, $tmp474, $tmp475);
$fn481 $tmp480 = ($fn481) $tmp470->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp482 = $tmp480($tmp470, $tmp471);
*(&local7) = $tmp482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:103
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp483 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp484 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp485 = *(&local7);
org$frostlang$frostc$Type** $tmp486 = &param0->rawType;
org$frostlang$frostc$Type* $tmp487 = *$tmp486;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp483, $tmp484, $tmp485, $tmp487);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
org$frostlang$frostc$IR$Value* $tmp488 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
*(&local4) = $tmp483;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:105
org$frostlang$frostc$Compiler** $tmp489 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp490 = *$tmp489;
frost$core$Bit* $tmp491 = &$tmp490->inFieldCleanup;
frost$core$Bit $tmp492 = *$tmp491;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:105:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp493 = $tmp492.value;
bool $tmp494 = !$tmp493;
frost$core$Bit $tmp495 = (frost$core$Bit) {$tmp494};
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block31; else goto block30;
block31:;
org$frostlang$frostc$FieldDecl** $tmp497 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp498 = *$tmp497;
org$frostlang$frostc$Annotations** $tmp499 = &$tmp498->annotations;
org$frostlang$frostc$Annotations* $tmp500 = *$tmp499;
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from FieldLValue.frost:105:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:154
frost$core$Int* $tmp501 = &$tmp500->flags;
frost$core$Int $tmp502 = *$tmp501;
frost$core$Int $tmp503 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:154:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp504 = $tmp502.value;
int64_t $tmp505 = $tmp503.value;
int64_t $tmp506 = $tmp504 & $tmp505;
frost$core$Int $tmp507 = (frost$core$Int) {$tmp506};
frost$core$Int $tmp508 = (frost$core$Int) {0u};
int64_t $tmp509 = $tmp507.value;
int64_t $tmp510 = $tmp508.value;
bool $tmp511 = $tmp509 != $tmp510;
frost$core$Bit $tmp512 = (frost$core$Bit) {$tmp511};
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:106
org$frostlang$frostc$Compiler** $tmp514 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp515 = *$tmp514;
org$frostlang$frostc$Position* $tmp516 = &param0->position;
org$frostlang$frostc$Position $tmp517 = *$tmp516;
org$frostlang$frostc$IR$Value* $tmp518 = *(&local4);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp519 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp519);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp520 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp521 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp520, $tmp521);
org$frostlang$frostc$IR$Value* $tmp522 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp515, $tmp517, $tmp518, &$s523, ((frost$collections$ListView*) $tmp519), $tmp520);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
org$frostlang$frostc$IR$Value* $tmp524 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local4) = $tmp522;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
goto block30;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:109
org$frostlang$frostc$Type** $tmp525 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp526 = *$tmp525;
org$frostlang$frostc$IR$Value* $tmp527 = *(&local4);
$fn529 $tmp528 = ($fn529) $tmp527->$class->vtable[2];
org$frostlang$frostc$Type* $tmp530 = $tmp528($tmp527);
ITable* $tmp531 = ((frost$core$Equatable*) $tmp526)->$class->itable;
while ($tmp531->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp531 = $tmp531->next;
}
$fn533 $tmp532 = $tmp531->methods[1];
frost$core$Bit $tmp534 = $tmp532(((frost$core$Equatable*) $tmp526), ((frost$core$Equatable*) $tmp530));
bool $tmp535 = $tmp534.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
if ($tmp535) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:110
org$frostlang$frostc$Compiler** $tmp536 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp537 = *$tmp536;
org$frostlang$frostc$Position* $tmp538 = &param0->position;
org$frostlang$frostc$Position $tmp539 = *$tmp538;
org$frostlang$frostc$IR$Value* $tmp540 = *(&local4);
org$frostlang$frostc$Type** $tmp541 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp542 = *$tmp541;
org$frostlang$frostc$IR$Value* $tmp543 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp537, $tmp539, $tmp540, $tmp542);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
org$frostlang$frostc$IR$Value* $tmp544 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
*(&local4) = $tmp543;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
goto block36;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:112
org$frostlang$frostc$IR$Value* $tmp545 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
org$frostlang$frostc$IR$Value* $tmp546 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp545;

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
org$frostlang$frostc$IR$Value** $tmp547 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp548 = *$tmp547;
frost$core$Bit $tmp549 = (frost$core$Bit) {$tmp548 == NULL};
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:119
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:121
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:122
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:123
org$frostlang$frostc$Compiler** $tmp551 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp552 = *$tmp551;
frost$core$Bit* $tmp553 = &$tmp552->inFieldCleanup;
frost$core$Bit $tmp554 = *$tmp553;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:123:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp555 = $tmp554.value;
bool $tmp556 = !$tmp555;
frost$core$Bit $tmp557 = (frost$core$Bit) {$tmp556};
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block6; else goto block5;
block6:;
org$frostlang$frostc$FieldDecl** $tmp559 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp560 = *$tmp559;
org$frostlang$frostc$Annotations** $tmp561 = &$tmp560->annotations;
org$frostlang$frostc$Annotations* $tmp562 = *$tmp561;
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from FieldLValue.frost:123:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:154
frost$core$Int* $tmp563 = &$tmp562->flags;
frost$core$Int $tmp564 = *$tmp563;
frost$core$Int $tmp565 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:154:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp566 = $tmp564.value;
int64_t $tmp567 = $tmp565.value;
int64_t $tmp568 = $tmp566 & $tmp567;
frost$core$Int $tmp569 = (frost$core$Int) {$tmp568};
frost$core$Int $tmp570 = (frost$core$Int) {0u};
int64_t $tmp571 = $tmp569.value;
int64_t $tmp572 = $tmp570.value;
bool $tmp573 = $tmp571 != $tmp572;
frost$core$Bit $tmp574 = (frost$core$Bit) {$tmp573};
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:124
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp576 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp576);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$collections$Array* $tmp577 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
*(&local2) = $tmp576;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:125
frost$collections$Array* $tmp578 = *(&local2);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp579 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp580 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp581 = &param0->position;
org$frostlang$frostc$Position $tmp582 = *$tmp581;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp579, $tmp580, $tmp582, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp578, ((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:126
org$frostlang$frostc$Compiler** $tmp583 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp584 = *$tmp583;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp585 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp586 = (frost$core$Int) {9u};
org$frostlang$frostc$Position* $tmp587 = &param0->position;
org$frostlang$frostc$Position $tmp588 = *$tmp587;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp589 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp590 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp591 = &param0->position;
org$frostlang$frostc$Position $tmp592 = *$tmp591;
org$frostlang$frostc$Compiler** $tmp593 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp594 = *$tmp593;
org$frostlang$frostc$Compiler** $tmp595 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp596 = *$tmp595;
org$frostlang$frostc$Type** $tmp597 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp598 = *$tmp597;
org$frostlang$frostc$Type* $tmp599 = org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp596, $tmp598);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from FieldLValue.frost:127:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3686
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp600 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp601 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3686:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp602 = &$tmp594->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp603 = *$tmp602;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp604 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp605 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp604, $tmp605);
frost$collections$Array$add$frost$collections$Array$T($tmp604, ((frost$core$Object*) $tmp599));
org$frostlang$frostc$Type* $tmp606 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp603, ((frost$collections$ListView*) $tmp604));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp600, $tmp601, $tmp599, $tmp606);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp589, $tmp590, $tmp592, $tmp600);
frost$collections$Array* $tmp607 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp608 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp607);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp585, $tmp586, $tmp588, $tmp589, $tmp608);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from FieldLValue.frost:126:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5111
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp609 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp610 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp609, $tmp610);
org$frostlang$frostc$IR$Value* $tmp611 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp584, $tmp585, $tmp609);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
org$frostlang$frostc$IR$Value* $tmp612 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local1) = $tmp611;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$collections$Array* $tmp613 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
*(&local2) = ((frost$collections$Array*) NULL);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:132
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$IR$Value* $tmp614 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local1) = param1;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:134
org$frostlang$frostc$Type** $tmp615 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp616 = *$tmp615;
org$frostlang$frostc$Type** $tmp617 = &param0->rawType;
org$frostlang$frostc$Type* $tmp618 = *$tmp617;
ITable* $tmp619 = ((frost$core$Equatable*) $tmp616)->$class->itable;
while ($tmp619->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp619 = $tmp619->next;
}
$fn621 $tmp620 = $tmp619->methods[1];
frost$core$Bit $tmp622 = $tmp620(((frost$core$Equatable*) $tmp616), ((frost$core$Equatable*) $tmp618));
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block13; else goto block15;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:135
org$frostlang$frostc$Compiler** $tmp624 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp625 = *$tmp624;
org$frostlang$frostc$Position* $tmp626 = &param0->position;
org$frostlang$frostc$Position $tmp627 = *$tmp626;
org$frostlang$frostc$IR$Value* $tmp628 = *(&local1);
org$frostlang$frostc$Type** $tmp629 = &param0->rawType;
org$frostlang$frostc$Type* $tmp630 = *$tmp629;
org$frostlang$frostc$IR$Value* $tmp631 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp625, $tmp627, $tmp628, $tmp630);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
org$frostlang$frostc$IR$Value* $tmp632 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
*(&local0) = $tmp631;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:136
org$frostlang$frostc$IR$Value* $tmp633 = *(&local0);
frost$core$Bit $tmp634 = (frost$core$Bit) {false};
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:137
org$frostlang$frostc$IR$Value* $tmp636 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp637 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block17:;
goto block14;
block15:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:141
org$frostlang$frostc$IR$Value* $tmp638 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
org$frostlang$frostc$IR$Value* $tmp639 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
*(&local0) = $tmp638;
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:143
org$frostlang$frostc$FieldDecl** $tmp640 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp641 = *$tmp640;
org$frostlang$frostc$FieldDecl$Kind* $tmp642 = &$tmp641->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp643 = *$tmp642;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp644;
$tmp644 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp644->value = $tmp643;
frost$core$Int $tmp645 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:143:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp646 = &(&local4)->$rawValue;
*$tmp646 = $tmp645;
org$frostlang$frostc$FieldDecl$Kind $tmp647 = *(&local4);
*(&local3) = $tmp647;
org$frostlang$frostc$FieldDecl$Kind $tmp648 = *(&local3);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp649;
$tmp649 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp649->value = $tmp648;
ITable* $tmp650 = ((frost$core$Equatable*) $tmp644)->$class->itable;
while ($tmp650->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp650 = $tmp650->next;
}
$fn652 $tmp651 = $tmp650->methods[0];
frost$core$Bit $tmp653 = $tmp651(((frost$core$Equatable*) $tmp644), ((frost$core$Equatable*) $tmp649));
bool $tmp654 = $tmp653.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp649)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp644)));
if ($tmp654) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:144
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp655 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp655);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
frost$collections$Array* $tmp656 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
*(&local5) = $tmp655;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:145
frost$collections$Array* $tmp657 = *(&local5);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp658 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp659 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp660 = &param0->position;
org$frostlang$frostc$Position $tmp661 = *$tmp660;
org$frostlang$frostc$IR$Value* $tmp662 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp658, $tmp659, $tmp661, $tmp662);
frost$collections$Array$add$frost$collections$Array$T($tmp657, ((frost$core$Object*) $tmp658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:146
org$frostlang$frostc$Compiler** $tmp663 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp664 = *$tmp663;
org$frostlang$frostc$Position* $tmp665 = &param0->position;
org$frostlang$frostc$Position $tmp666 = *$tmp665;
org$frostlang$frostc$IR$Value** $tmp667 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp668 = *$tmp667;
org$frostlang$frostc$FieldDecl** $tmp669 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp670 = *$tmp669;
frost$core$String** $tmp671 = &((org$frostlang$frostc$Symbol*) $tmp670)->name;
frost$core$String* $tmp672 = *$tmp671;
frost$core$String* $tmp673 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s674, $tmp672);
frost$core$String* $tmp675 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp673, &$s676);
frost$collections$Array* $tmp677 = *(&local5);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp678 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp679 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp680 = &param0->rawType;
org$frostlang$frostc$Type* $tmp681 = *$tmp680;
frost$core$Bit $tmp682 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp678, $tmp679, $tmp681, $tmp682);
org$frostlang$frostc$IR$Value* $tmp683 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp664, $tmp666, $tmp668, $tmp675, ((frost$collections$ListView*) $tmp677), $tmp678);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
frost$collections$Array* $tmp684 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
*(&local5) = ((frost$collections$Array*) NULL);
goto block19;
block20:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:150
org$frostlang$frostc$Compiler** $tmp685 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp686 = *$tmp685;
org$frostlang$frostc$Type** $tmp687 = &param0->rawType;
org$frostlang$frostc$Type* $tmp688 = *$tmp687;
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from FieldLValue.frost:150:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:736
frost$core$Bit $tmp689 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp688);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:736:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp690 = $tmp689.value;
bool $tmp691 = !$tmp690;
frost$core$Bit $tmp692 = (frost$core$Bit) {$tmp691};
bool $tmp693 = $tmp692.value;
if ($tmp693) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:737
frost$core$Bit $tmp694 = (frost$core$Bit) {false};
*(&local6) = $tmp694;
goto block25;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:739
frost$core$Bit $tmp695 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit($tmp686, $tmp688);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:739:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp696 = $tmp695.value;
bool $tmp697 = !$tmp696;
frost$core$Bit $tmp698 = (frost$core$Bit) {$tmp697};
*(&local6) = $tmp698;
goto block25;
block25:;
frost$core$Bit $tmp699 = *(&local6);
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block24; else goto block23;
block24:;
org$frostlang$frostc$FieldDecl** $tmp701 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp702 = *$tmp701;
frost$core$Weak** $tmp703 = &$tmp702->owner;
frost$core$Weak* $tmp704 = *$tmp703;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:150:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp705 = &$tmp704->_valid;
frost$core$Bit $tmp706 = *$tmp705;
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block32; else goto block33;
block33:;
frost$core$Int $tmp708 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s709, $tmp708);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp710 = &$tmp704->value;
frost$core$Object* $tmp711 = *$tmp710;
frost$core$Frost$ref$frost$core$Object$Q($tmp711);
frost$core$String** $tmp712 = &((org$frostlang$frostc$ClassDecl*) $tmp711)->name;
frost$core$String* $tmp713 = *$tmp712;
ITable* $tmp715 = ((frost$core$Equatable*) $tmp713)->$class->itable;
while ($tmp715->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp715 = $tmp715->next;
}
$fn717 $tmp716 = $tmp715->methods[1];
frost$core$Bit $tmp718 = $tmp716(((frost$core$Equatable*) $tmp713), ((frost$core$Equatable*) &$s714));
bool $tmp719 = $tmp718.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp711);
if ($tmp719) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:151
org$frostlang$frostc$Compiler** $tmp720 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp721 = *$tmp720;
org$frostlang$frostc$IR$Value* $tmp722 = *(&local1);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp721, $tmp722);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:152
$fn724 $tmp723 = ($fn724) param0->$class->vtable[5];
$tmp723(param0);
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:154
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp725 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp726 = (frost$core$Int) {7u};
org$frostlang$frostc$Compiler** $tmp727 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp728 = *$tmp727;
org$frostlang$frostc$IR** $tmp729 = &$tmp728->ir;
org$frostlang$frostc$IR* $tmp730 = *$tmp729;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp731 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp732 = (frost$core$Int) {11u};
org$frostlang$frostc$Position* $tmp733 = &param0->position;
org$frostlang$frostc$Position $tmp734 = *$tmp733;
org$frostlang$frostc$IR$Value** $tmp735 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp736 = *$tmp735;
org$frostlang$frostc$FieldDecl** $tmp737 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp738 = *$tmp737;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp731, $tmp732, $tmp734, $tmp736, $tmp738);
$fn740 $tmp739 = ($fn740) $tmp730->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp741 = $tmp739($tmp730, $tmp731);
org$frostlang$frostc$Type** $tmp742 = &param0->rawType;
org$frostlang$frostc$Type* $tmp743 = *$tmp742;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp725, $tmp726, $tmp741, $tmp743);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
org$frostlang$frostc$IR$Value* $tmp744 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
*(&local7) = $tmp725;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:156
org$frostlang$frostc$Compiler** $tmp745 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp746 = *$tmp745;
org$frostlang$frostc$IR** $tmp747 = &$tmp746->ir;
org$frostlang$frostc$IR* $tmp748 = *$tmp747;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp749 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp750 = (frost$core$Int) {27u};
org$frostlang$frostc$Position* $tmp751 = &param0->position;
org$frostlang$frostc$Position $tmp752 = *$tmp751;
org$frostlang$frostc$IR$Value* $tmp753 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp754 = *(&local7);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp749, $tmp750, $tmp752, $tmp753, $tmp754);
$fn756 $tmp755 = ($fn756) $tmp748->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp757 = $tmp755($tmp748, $tmp749);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
org$frostlang$frostc$IR$Value* $tmp758 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block19;
block19:;
org$frostlang$frostc$IR$Value* $tmp759 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp760 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
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
org$frostlang$frostc$FieldDecl** $tmp761 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp762 = *$tmp761;
org$frostlang$frostc$FieldDecl$Kind* $tmp763 = &$tmp762->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp764 = *$tmp763;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp765;
$tmp765 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp765->value = $tmp764;
frost$core$Int $tmp766 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:162:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp767 = &(&local2)->$rawValue;
*$tmp767 = $tmp766;
org$frostlang$frostc$FieldDecl$Kind $tmp768 = *(&local2);
*(&local1) = $tmp768;
org$frostlang$frostc$FieldDecl$Kind $tmp769 = *(&local1);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp770;
$tmp770 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp770->value = $tmp769;
ITable* $tmp771 = ((frost$core$Equatable*) $tmp765)->$class->itable;
while ($tmp771->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp771 = $tmp771->next;
}
$fn773 $tmp772 = $tmp771->methods[0];
frost$core$Bit $tmp774 = $tmp772(((frost$core$Equatable*) $tmp765), ((frost$core$Equatable*) $tmp770));
bool $tmp775 = $tmp774.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp770)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp765)));
if ($tmp775) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:163
org$frostlang$frostc$IR$Value* $tmp776 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:165
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:166
org$frostlang$frostc$Compiler** $tmp777 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp778 = *$tmp777;
org$frostlang$frostc$FieldDecl** $tmp779 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp780 = *$tmp779;
frost$core$Weak** $tmp781 = &$tmp780->owner;
frost$core$Weak* $tmp782 = *$tmp781;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:166:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp783 = &$tmp782->_valid;
frost$core$Bit $tmp784 = *$tmp783;
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block9; else goto block10;
block10:;
frost$core$Int $tmp786 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s787, $tmp786);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp788 = &$tmp782->value;
frost$core$Object* $tmp789 = *$tmp788;
frost$core$Frost$ref$frost$core$Object$Q($tmp789);
frost$core$Bit $tmp790 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit($tmp778, ((org$frostlang$frostc$ClassDecl*) $tmp789));
bool $tmp791 = $tmp790.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp789);
if ($tmp791) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:167
org$frostlang$frostc$Compiler** $tmp792 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp793 = *$tmp792;
org$frostlang$frostc$IR** $tmp794 = &$tmp793->ir;
org$frostlang$frostc$IR* $tmp795 = *$tmp794;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp796 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp797 = (frost$core$Int) {10u};
org$frostlang$frostc$Position* $tmp798 = &param0->position;
org$frostlang$frostc$Position $tmp799 = *$tmp798;
org$frostlang$frostc$IR$Value** $tmp800 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp801 = *$tmp800;
org$frostlang$frostc$FieldDecl** $tmp802 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp803 = *$tmp802;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp796, $tmp797, $tmp799, $tmp801, $tmp803);
$fn805 $tmp804 = ($fn805) $tmp795->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp806 = $tmp804($tmp795, $tmp796);
*(&local3) = $tmp806;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:170
org$frostlang$frostc$Compiler** $tmp807 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp808 = *$tmp807;
org$frostlang$frostc$IR** $tmp809 = &$tmp808->ir;
org$frostlang$frostc$IR* $tmp810 = *$tmp809;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp811 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp812 = (frost$core$Int) {11u};
org$frostlang$frostc$Position* $tmp813 = &param0->position;
org$frostlang$frostc$Position $tmp814 = *$tmp813;
org$frostlang$frostc$IR$Value** $tmp815 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp816 = *$tmp815;
org$frostlang$frostc$FieldDecl** $tmp817 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp818 = *$tmp817;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp811, $tmp812, $tmp814, $tmp816, $tmp818);
$fn820 $tmp819 = ($fn820) $tmp810->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp821 = $tmp819($tmp810, $tmp811);
*(&local4) = $tmp821;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:171
org$frostlang$frostc$Compiler** $tmp822 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp823 = *$tmp822;
org$frostlang$frostc$IR** $tmp824 = &$tmp823->ir;
org$frostlang$frostc$IR* $tmp825 = *$tmp824;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp826 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp827 = (frost$core$Int) {14u};
org$frostlang$frostc$Position* $tmp828 = &param0->position;
org$frostlang$frostc$Position $tmp829 = *$tmp828;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp830 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp831 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp832 = *(&local4);
org$frostlang$frostc$Type** $tmp833 = &param0->rawType;
org$frostlang$frostc$Type* $tmp834 = *$tmp833;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp830, $tmp831, $tmp832, $tmp834);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp826, $tmp827, $tmp829, $tmp830);
$fn836 $tmp835 = ($fn836) $tmp825->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp837 = $tmp835($tmp825, $tmp826);
*(&local3) = $tmp837;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:173
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp838 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp839 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp840 = *(&local3);
org$frostlang$frostc$Type** $tmp841 = &param0->rawType;
org$frostlang$frostc$Type* $tmp842 = *$tmp841;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp838, $tmp839, $tmp840, $tmp842);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
org$frostlang$frostc$IR$Value* $tmp843 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
*(&local0) = $tmp838;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:174
org$frostlang$frostc$Compiler** $tmp844 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp845 = *$tmp844;
org$frostlang$frostc$IR$Value* $tmp846 = *(&local0);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value($tmp845, $tmp846);
org$frostlang$frostc$IR$Value* $tmp847 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$lvalue$FieldLValue$cleanup(org$frostlang$frostc$lvalue$FieldLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp848 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp849 = *$tmp848;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
org$frostlang$frostc$IR$Value** $tmp850 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp851 = *$tmp850;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
org$frostlang$frostc$FieldDecl** $tmp852 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp853 = *$tmp852;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
org$frostlang$frostc$Type** $tmp854 = &param0->rawType;
org$frostlang$frostc$Type* $tmp855 = *$tmp854;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
org$frostlang$frostc$Type** $tmp856 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp857 = *$tmp856;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
return;

}

