#include "org/frostlang/frostc/lvalue/FieldLValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/FieldDecl/Kind.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/Position.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$FieldLValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$FieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$FieldLValue$compileStore$org$frostlang$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$FieldLValue$class_type org$frostlang$frostc$lvalue$FieldLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$FieldLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$lvalue$FieldLValue$cleanup, org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$FieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$FieldLValue$compileStore$org$frostlang$frostc$IR$Value, org$frostlang$frostc$lvalue$FieldLValue$compileUnref} };

typedef frost$core$Bit (*$fn2)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn4)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn5)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn6)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);
typedef frost$core$String* (*$fn8)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn9)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn10)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn11)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn18)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn33)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn42)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn43)(frost$core$Object*);
typedef frost$core$String* (*$fn45)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn52)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn56)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn66)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn67)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef frost$core$Bit (*$fn68)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn69)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn70)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn71)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn72)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn73)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn83)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn95)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn98)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn99)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn105)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn107)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn108)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn109)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn110)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn111)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn112)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn129)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn132)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn133)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn134)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn135)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn136)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn137)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn145)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn148)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn149)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 39, -1155759797158457110, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20\x63\x6c\x61\x73\x73\x20", 21, 6374091204168990154, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, -4672451134882412660, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x66\x6f\x72\x20", 5, 1394196365474570014, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 217, -2671469345214540238, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f", 4, 7433203768955287672, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74", 3, -3106811833996379657, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x65\x74\x5f", 4, 3257523206249946292, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };

void org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl(void* rawSelf, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$MethodPosition param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$FieldDecl* param4) {
org$frostlang$frostc$lvalue$FieldLValue* param0 = (org$frostlang$frostc$lvalue$FieldLValue*) rawSelf;

org$frostlang$frostc$Compiler$Resolution local0;
org$frostlang$frostc$Compiler$Resolution local1;
frost$core$Bit local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$IR$Statement$ID local5;
org$frostlang$frostc$IR$Statement$ID local6;
org$frostlang$frostc$Type* local7 = NULL;
org$frostlang$frostc$Type* local8 = NULL;
org$frostlang$frostc$Type* local9 = NULL;
frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$Compiler** _7;
org$frostlang$frostc$MethodPosition* _10;
org$frostlang$frostc$Compiler$Resolution* _13;
org$frostlang$frostc$Compiler$Resolution _14;
frost$core$Equatable* _15;
frost$core$Int _16;
frost$core$Int* _19;
org$frostlang$frostc$Compiler$Resolution _21;
org$frostlang$frostc$Compiler$Resolution _24;
frost$core$Equatable* _25;
$fn2 _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _30;
frost$core$Object* _33;
frost$core$Object* _35;
frost$core$Object* _38;
org$frostlang$frostc$FieldDecl** _40;
org$frostlang$frostc$FieldDecl* _41;
frost$core$Object* _42;
org$frostlang$frostc$FieldDecl** _44;
bool _47;
frost$core$Bit _48;
bool _49;
bool _51;
frost$core$Bit _52;
bool _53;
frost$core$Int _55;
org$frostlang$frostc$IR$Value* _58;
$fn3 _59;
org$frostlang$frostc$Type* _60;
org$frostlang$frostc$Type$Kind* _63;
org$frostlang$frostc$Type$Kind _64;
frost$core$Equatable* _65;
frost$core$Int _66;
frost$core$Int* _69;
org$frostlang$frostc$Type$Kind _71;
org$frostlang$frostc$Type$Kind _74;
frost$core$Equatable* _75;
$fn4 _76;
frost$core$Bit _77;
bool _78;
org$frostlang$frostc$FixedArray** _82;
org$frostlang$frostc$FixedArray* _83;
bool _84;
frost$core$Bit _85;
bool _86;
frost$core$Int _88;
org$frostlang$frostc$FixedArray* _91;
frost$core$Object* _92;
frost$core$Int _95;
frost$core$Object* _96;
org$frostlang$frostc$Type* _97;
org$frostlang$frostc$Symbol* _98;
frost$core$String** _99;
frost$core$String* _100;
frost$core$Bit _101;
frost$core$Object* _102;
frost$core$Object* _104;
frost$core$Bit _110;
frost$core$Object* _111;
frost$core$Object* _113;
bool _118;
bool _119;
frost$core$Bit _120;
bool _122;
frost$core$Object* _123;
frost$core$Object* _127;
org$frostlang$frostc$IR$Value** _129;
org$frostlang$frostc$IR$Value* _130;
frost$core$Object* _131;
org$frostlang$frostc$IR$Value** _133;
org$frostlang$frostc$Annotations** _137;
org$frostlang$frostc$Annotations* _138;
frost$core$Int* _141;
frost$core$Int _142;
frost$core$Int _143;
int64_t _146;
int64_t _147;
int64_t _148;
frost$core$Int _149;
frost$core$Int _151;
int64_t _152;
int64_t _153;
bool _154;
frost$core$Bit _155;
bool _159;
bool _160;
frost$core$Bit _161;
bool _163;
frost$core$Weak** _166;
frost$core$Weak* _167;
frost$core$Bit* _172;
frost$core$Bit _173;
bool _175;
frost$core$Int _177;
frost$core$Object** _181;
frost$core$Object* _182;
frost$core$Object* _183;
frost$core$Object* _184;
org$frostlang$frostc$ClassDecl* _187;
org$frostlang$frostc$Annotations** _188;
org$frostlang$frostc$Annotations* _189;
frost$core$Int* _192;
frost$core$Int _193;
frost$core$Int _194;
int64_t _197;
int64_t _198;
int64_t _199;
frost$core$Int _200;
frost$core$Int _202;
int64_t _203;
int64_t _204;
bool _205;
frost$core$Bit _206;
bool _208;
frost$core$Object* _209;
frost$core$Bit* _212;
frost$core$Bit _213;
bool _216;
bool _217;
frost$core$Bit _218;
bool _220;
org$frostlang$frostc$IR$Value* _223;
frost$core$Int _224;
frost$core$Int _225;
frost$core$Int* _228;
org$frostlang$frostc$IR$Statement$ID _230;
org$frostlang$frostc$IR$Statement$ID _233;
frost$core$Weak** _234;
frost$core$Weak* _235;
frost$core$Bit* _240;
frost$core$Bit _241;
bool _243;
frost$core$Int _245;
frost$core$Object** _249;
frost$core$Object* _250;
frost$core$Object* _251;
frost$core$Object* _252;
org$frostlang$frostc$ClassDecl* _255;
org$frostlang$frostc$Type** _256;
org$frostlang$frostc$Type* _257;
org$frostlang$frostc$IR$Value* _259;
frost$core$Object* _260;
org$frostlang$frostc$IR$Value** _262;
org$frostlang$frostc$IR$Value* _263;
frost$core$Object* _264;
org$frostlang$frostc$IR$Value** _266;
frost$core$Object* _268;
frost$core$Object* _270;
frost$core$Bit _275;
org$frostlang$frostc$IR$Value* _276;
frost$core$Object* _277;
org$frostlang$frostc$IR$Value** _279;
org$frostlang$frostc$IR$Value* _280;
frost$core$Object* _281;
org$frostlang$frostc$IR$Value** _283;
frost$core$Object* _285;
org$frostlang$frostc$Type** _291;
org$frostlang$frostc$Type* _292;
frost$core$Object* _293;
org$frostlang$frostc$Type** _295;
org$frostlang$frostc$Type* _296;
frost$core$Object* _297;
org$frostlang$frostc$Type** _299;
frost$core$Bit* _304;
frost$core$Bit _305;
bool _308;
bool _309;
frost$core$Bit _310;
bool _312;
org$frostlang$frostc$Annotations** _314;
org$frostlang$frostc$Annotations* _315;
frost$core$Int* _318;
frost$core$Int _319;
frost$core$Int _320;
int64_t _323;
int64_t _324;
int64_t _325;
frost$core$Int _326;
frost$core$Int _328;
int64_t _329;
int64_t _330;
bool _331;
frost$core$Bit _332;
bool _334;
org$frostlang$frostc$Type** _337;
org$frostlang$frostc$Type* _338;
org$frostlang$frostc$FixedArray** _341;
org$frostlang$frostc$FixedArray* _342;
bool _343;
frost$core$Bit _344;
bool _345;
frost$core$Int _347;
org$frostlang$frostc$FixedArray* _350;
frost$core$Object* _351;
frost$core$Int _354;
frost$core$Object* _355;
org$frostlang$frostc$Type* _356;
frost$core$Object* _357;
org$frostlang$frostc$Type* _359;
frost$core$Object* _360;
frost$core$Object* _363;
frost$core$Object* _365;
org$frostlang$frostc$Type** _370;
org$frostlang$frostc$Type* _371;
frost$core$Object* _372;
org$frostlang$frostc$Type* _374;
frost$core$Object* _375;
org$frostlang$frostc$IR$Value** _380;
org$frostlang$frostc$IR$Value* _381;
bool _382;
frost$core$Bit _383;
bool _384;
org$frostlang$frostc$IR$Value** _387;
org$frostlang$frostc$IR$Value* _388;
bool _389;
frost$core$Bit _390;
bool _391;
frost$core$Int _393;
org$frostlang$frostc$IR$Value* _396;
$fn5 _397;
org$frostlang$frostc$Type* _398;
frost$core$Weak** _399;
frost$core$Weak* _400;
frost$core$Bit* _405;
frost$core$Bit _406;
bool _408;
frost$core$Int _410;
frost$core$Object** _414;
frost$core$Object* _415;
frost$core$Object* _416;
frost$core$Object* _417;
org$frostlang$frostc$ClassDecl* _420;
org$frostlang$frostc$Type* _421;
frost$core$Object* _423;
org$frostlang$frostc$Type* _425;
frost$core$Object* _426;
frost$core$Object* _429;
frost$core$Object* _431;
frost$core$Object* _433;
org$frostlang$frostc$Type* _436;
bool _437;
frost$core$Bit _438;
bool _439;
frost$core$Int _441;
frost$core$Weak** _442;
frost$core$Weak* _443;
frost$core$Bit* _448;
frost$core$Bit _449;
bool _451;
frost$core$Int _453;
frost$core$Object** _457;
frost$core$Object* _458;
frost$core$Object* _459;
frost$core$Object* _460;
org$frostlang$frostc$ClassDecl* _463;
frost$core$String** _464;
frost$core$String* _465;
frost$core$String* _466;
frost$core$String* _467;
org$frostlang$frostc$IR$Value** _468;
org$frostlang$frostc$IR$Value* _469;
bool _470;
frost$core$Bit _471;
bool _472;
frost$core$Int _474;
org$frostlang$frostc$IR$Value* _477;
$fn6 _478;
org$frostlang$frostc$Type* _479;
frost$core$Object* _480;
$fn7 _483;
frost$core$String* _484;
frost$core$String* _485;
frost$core$Object* _486;
frost$core$Object* _488;
frost$core$Object* _490;
frost$core$String* _493;
frost$core$Object* _494;
$fn8 _497;
frost$core$String* _498;
frost$core$String* _499;
frost$core$Object* _500;
frost$core$Object* _502;
frost$core$Object* _504;
frost$core$String* _507;
frost$core$Object* _509;
frost$core$Object* _511;
frost$core$Object* _513;
frost$core$Object* _515;
frost$core$Object* _517;
frost$core$Object* _519;
frost$core$Object* _521;
frost$core$Object* _523;
org$frostlang$frostc$Type* _527;
bool _528;
frost$core$Bit _529;
bool _530;
frost$core$Int _532;
org$frostlang$frostc$Type* _535;
org$frostlang$frostc$Type* _536;
org$frostlang$frostc$Type* _537;
frost$core$Object* _538;
org$frostlang$frostc$Type** _540;
org$frostlang$frostc$Type* _541;
frost$core$Object* _542;
org$frostlang$frostc$Type** _544;
frost$core$Object* _546;
org$frostlang$frostc$Type* _548;
frost$core$Object* _549;
org$frostlang$frostc$Type* _555;
frost$core$Object* _556;
org$frostlang$frostc$Type** _558;
org$frostlang$frostc$Type* _559;
frost$core$Object* _560;
org$frostlang$frostc$Type** _562;
org$frostlang$frostc$IR$Value** _566;
org$frostlang$frostc$IR$Value* _567;
bool _568;
frost$core$Bit _569;
bool _570;
org$frostlang$frostc$IR$Value** _575;
org$frostlang$frostc$IR$Value* _576;
bool _577;
frost$core$Bit _578;
bool _579;
frost$core$Int _581;
org$frostlang$frostc$IR$Value* _584;
$fn9 _585;
org$frostlang$frostc$Type* _586;
org$frostlang$frostc$Symbol* _589;
frost$core$String** _590;
frost$core$String* _591;
frost$core$Bit _592;
bool _594;
frost$core$Object* _595;
org$frostlang$frostc$IR$Value** _599;
org$frostlang$frostc$IR$Value* _600;
bool _601;
frost$core$Bit _602;
bool _603;
frost$core$Int _605;
org$frostlang$frostc$IR$Value* _608;
$fn10 _609;
org$frostlang$frostc$Type* _610;
frost$core$Weak** _611;
frost$core$Weak* _612;
frost$core$Bit* _617;
frost$core$Bit _618;
bool _620;
frost$core$Int _622;
frost$core$Object** _626;
frost$core$Object* _627;
frost$core$Object* _628;
frost$core$Object* _629;
org$frostlang$frostc$ClassDecl* _632;
org$frostlang$frostc$Type* _633;
bool _634;
frost$core$Bit _635;
bool _636;
frost$core$Int _638;
org$frostlang$frostc$Type* _641;
frost$core$Object* _642;
org$frostlang$frostc$Type* _644;
frost$core$Object* _645;
frost$core$Object* _648;
frost$core$Object* _650;
frost$core$Object* _652;
frost$core$Weak** _657;
frost$core$Weak* _658;
frost$core$Bit* _663;
frost$core$Bit _664;
bool _666;
frost$core$Int _668;
frost$core$Object** _672;
frost$core$Object* _673;
frost$core$Object* _674;
frost$core$Object* _675;
org$frostlang$frostc$ClassDecl* _678;
org$frostlang$frostc$Type** _679;
org$frostlang$frostc$Type* _680;
frost$core$Object* _681;
org$frostlang$frostc$Type* _683;
frost$core$Object* _684;
frost$core$Object* _687;
org$frostlang$frostc$IR$Value** _691;
org$frostlang$frostc$IR$Value* _692;
org$frostlang$frostc$Type* _693;
frost$core$Equatable* _695;
org$frostlang$frostc$Type** _696;
org$frostlang$frostc$Type* _697;
frost$core$Equatable* _698;
$fn11 _699;
frost$core$Bit _700;
bool _701;
frost$core$Int _703;
frost$core$Bit _707;
org$frostlang$frostc$IR$Value* _708;
frost$core$Object* _709;
frost$core$Object* _711;
frost$core$Object* _714;
org$frostlang$frostc$IR$Value** _716;
org$frostlang$frostc$IR$Value* _717;
frost$core$Object* _718;
org$frostlang$frostc$IR$Value** _720;
frost$core$Object* _722;
org$frostlang$frostc$Type* _724;
frost$core$Object* _725;
org$frostlang$frostc$Type* _729;
frost$core$Object* _730;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:29
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->compiler;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->compiler;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:30
_10 = &param0->position;
*_10 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:31
_13 = &param4->resolved;
_14 = *_13;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp12;
$tmp12 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Resolution$wrapper), (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp12->value = _14;
_15 = ((frost$core$Equatable*) $tmp12);
_16 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from FieldLValue.frost:31:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
_19 = &(&local1)->$rawValue;
*_19 = _16;
_21 = *(&local1);
*(&local0) = _21;
_24 = *(&local0);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp13;
$tmp13 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Resolution$wrapper), (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp13->value = _24;
_25 = ((frost$core$Equatable*) $tmp13);
ITable* $tmp14 = _15->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp14 = $tmp14->next;
}
_26 = $tmp14->methods[0];
_27 = _26(_15, _25);
_28 = _27.value;
if (_28) goto block2; else goto block3;
block3:;
_30 = (frost$core$Int) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s15, _30);
abort(); // unreachable
block2:;
_33 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_35 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_35);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:32
_38 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = &param0->field;
_41 = *_40;
_42 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = &param0->field;
*_44 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:33
_47 = param3 != NULL;
_48 = (frost$core$Bit) {_47};
_49 = _48.value;
if (_49) goto block7; else goto block6;
block7:;
_51 = param3 != NULL;
_52 = (frost$core$Bit) {_51};
_53 = _52.value;
if (_53) goto block8; else goto block9;
block9:;
_55 = (frost$core$Int) {33u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _55, &$s17);
abort(); // unreachable
block8:;
_58 = param3;
_59 = ($fn18) _58->$class->vtable[2];
_60 = _59(_58);
// begin inline call to function org.frostlang.frostc.Type.get_isClassLiteral():frost.core.Bit from FieldLValue.frost:33:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:381
_63 = &_60->typeKind;
_64 = *_63;
org$frostlang$frostc$Type$Kind$wrapper* $tmp19;
$tmp19 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp19->value = _64;
_65 = ((frost$core$Equatable*) $tmp19);
_66 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:381:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_69 = &(&local4)->$rawValue;
*_69 = _66;
_71 = *(&local4);
*(&local3) = _71;
_74 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp20;
$tmp20 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp20->value = _74;
_75 = ((frost$core$Equatable*) $tmp20);
ITable* $tmp21 = _65->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp21 = $tmp21->next;
}
_76 = $tmp21->methods[0];
_77 = _76(_65, _75);
_78 = _77.value;
if (_78) goto block12; else goto block13;
block12:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:381:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_82 = &_60->_subtypes;
_83 = *_82;
_84 = _83 != NULL;
_85 = (frost$core$Bit) {_84};
_86 = _85.value;
if (_86) goto block16; else goto block17;
block17:;
_88 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _88, &$s23);
abort(); // unreachable
block16:;
_91 = _83;
_92 = ((frost$core$Object*) _91);
frost$core$Frost$ref$frost$core$Object$Q(_92);
_95 = (frost$core$Int) {0u};
_96 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_91, _95);
_97 = ((org$frostlang$frostc$Type*) _96);
_98 = ((org$frostlang$frostc$Symbol*) _97);
_99 = &_98->name;
_100 = *_99;
_101 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_100, &$s24);
_102 = _96;
frost$core$Frost$unref$frost$core$Object$Q(_102);
_104 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_104);
*(&local2) = _101;
goto block14;
block13:;
*(&local2) = _77;
goto block14;
block14:;
_110 = *(&local2);
_111 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_111);
_113 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_113);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:33:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_118 = _110.value;
_119 = !_118;
_120 = (frost$core$Bit) {_119};
_122 = _120.value;
_123 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_123);
if (_122) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:34
_127 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_127);
_129 = &param0->target;
_130 = *_129;
_131 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_131);
_133 = &param0->target;
*_133 = param3;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:36
_137 = &param4->annotations;
_138 = *_137;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from FieldLValue.frost:36:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:125
_141 = &_138->flags;
_142 = *_141;
_143 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:125:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_146 = _142.value;
_147 = _143.value;
_148 = _146 & _147;
_149 = (frost$core$Int) {_148};
_151 = (frost$core$Int) {0u};
_152 = _149.value;
_153 = _151.value;
_154 = _152 != _153;
_155 = (frost$core$Bit) {_154};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:36:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_159 = _155.value;
_160 = !_159;
_161 = (frost$core$Bit) {_160};
_163 = _161.value;
if (_163) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:37
_166 = &param4->owner;
_167 = *_166;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:37:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_172 = &_167->_valid;
_173 = *_172;
_175 = _173.value;
if (_175) goto block30; else goto block31;
block31:;
_177 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s25, _177, &$s26);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_181 = &_167->value;
_182 = *_181;
_183 = _182;
_184 = _183;
frost$core$Frost$ref$frost$core$Object$Q(_184);
_187 = ((org$frostlang$frostc$ClassDecl*) _183);
_188 = &_187->annotations;
_189 = *_188;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from FieldLValue.frost:37:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:161
_192 = &_189->flags;
_193 = *_192;
_194 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:161:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_197 = _193.value;
_198 = _194.value;
_199 = _197 & _198;
_200 = (frost$core$Int) {_199};
_202 = (frost$core$Int) {0u};
_203 = _200.value;
_204 = _202.value;
_205 = _203 != _204;
_206 = (frost$core$Bit) {_205};
_208 = _206.value;
_209 = _183;
frost$core$Frost$unref$frost$core$Object$Q(_209);
if (_208) goto block27; else goto block26;
block27:;
_212 = &param1->reportErrors;
_213 = *_212;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:37:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_216 = _213.value;
_217 = !_216;
_218 = (frost$core$Bit) {_217};
_220 = _218.value;
if (_220) goto block24; else goto block26;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:39
_223 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_224 = (frost$core$Int) {7u};
_225 = (frost$core$Int) {18446744073709551615u};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from FieldLValue.frost:39:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:162
_228 = &(&local6)->value;
*_228 = _225;
_230 = *(&local6);
*(&local5) = _230;
_233 = *(&local5);
_234 = &param4->owner;
_235 = *_234;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:39:71
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_240 = &_235->_valid;
_241 = *_240;
_243 = _241.value;
if (_243) goto block38; else goto block39;
block39:;
_245 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s27, _245, &$s28);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_249 = &_235->value;
_250 = *_249;
_251 = _250;
_252 = _251;
frost$core$Frost$ref$frost$core$Object$Q(_252);
_255 = ((org$frostlang$frostc$ClassDecl*) _251);
_256 = &_255->type;
_257 = *_256;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(_223, _224, _233, _257);
_259 = _223;
_260 = ((frost$core$Object*) _259);
frost$core$Frost$ref$frost$core$Object$Q(_260);
_262 = &param0->target;
_263 = *_262;
_264 = ((frost$core$Object*) _263);
frost$core$Frost$unref$frost$core$Object$Q(_264);
_266 = &param0->target;
*_266 = _259;
_268 = _251;
frost$core$Frost$unref$frost$core$Object$Q(_268);
_270 = ((frost$core$Object*) _223);
frost$core$Frost$unref$frost$core$Object$Q(_270);
goto block25;
block26:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:42
_275 = (frost$core$Bit) {false};
_276 = org$frostlang$frostc$Compiler$compileSelf$org$frostlang$frostc$MethodPosition$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param1, param2, _275);
_277 = ((frost$core$Object*) _276);
frost$core$Frost$ref$frost$core$Object$Q(_277);
_279 = &param0->target;
_280 = *_279;
_281 = ((frost$core$Object*) _280);
frost$core$Frost$unref$frost$core$Object$Q(_281);
_283 = &param0->target;
*_283 = _276;
_285 = ((frost$core$Object*) _276);
frost$core$Frost$unref$frost$core$Object$Q(_285);
goto block25;
block25:;
goto block20;
block20:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:45
_291 = &param4->type;
_292 = *_291;
_293 = ((frost$core$Object*) _292);
frost$core$Frost$ref$frost$core$Object$Q(_293);
_295 = &param0->rawType;
_296 = *_295;
_297 = ((frost$core$Object*) _296);
frost$core$Frost$unref$frost$core$Object$Q(_297);
_299 = &param0->rawType;
*_299 = _292;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:46
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:47
_304 = &param1->inFieldCleanup;
_305 = *_304;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:47:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_308 = _305.value;
_309 = !_308;
_310 = (frost$core$Bit) {_309};
_312 = _310.value;
if (_312) goto block43; else goto block42;
block43:;
_314 = &param4->annotations;
_315 = *_314;
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from FieldLValue.frost:47:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:157
_318 = &_315->flags;
_319 = *_318;
_320 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:157:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_323 = _319.value;
_324 = _320.value;
_325 = _323 & _324;
_326 = (frost$core$Int) {_325};
_328 = (frost$core$Int) {0u};
_329 = _326.value;
_330 = _328.value;
_331 = _329 != _330;
_332 = (frost$core$Bit) {_331};
_334 = _332.value;
if (_334) goto block40; else goto block42;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:48
_337 = &param0->rawType;
_338 = *_337;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from FieldLValue.frost:48:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_341 = &_338->_subtypes;
_342 = *_341;
_343 = _342 != NULL;
_344 = (frost$core$Bit) {_343};
_345 = _344.value;
if (_345) goto block48; else goto block49;
block49:;
_347 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s29, _347, &$s30);
abort(); // unreachable
block48:;
_350 = _342;
_351 = ((frost$core$Object*) _350);
frost$core$Frost$ref$frost$core$Object$Q(_351);
_354 = (frost$core$Int) {1u};
_355 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_350, _354);
_356 = ((org$frostlang$frostc$Type*) _355);
_357 = ((frost$core$Object*) _356);
frost$core$Frost$ref$frost$core$Object$Q(_357);
_359 = *(&local7);
_360 = ((frost$core$Object*) _359);
frost$core$Frost$unref$frost$core$Object$Q(_360);
*(&local7) = _356;
_363 = _355;
frost$core$Frost$unref$frost$core$Object$Q(_363);
_365 = ((frost$core$Object*) _350);
frost$core$Frost$unref$frost$core$Object$Q(_365);
goto block41;
block42:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:51
_370 = &param0->rawType;
_371 = *_370;
_372 = ((frost$core$Object*) _371);
frost$core$Frost$ref$frost$core$Object$Q(_372);
_374 = *(&local7);
_375 = ((frost$core$Object*) _374);
frost$core$Frost$unref$frost$core$Object$Q(_375);
*(&local7) = _371;
goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:53
_380 = &param0->target;
_381 = *_380;
_382 = _381 != NULL;
_383 = (frost$core$Bit) {_382};
_384 = _383.value;
if (_384) goto block50; else goto block52;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:54
_387 = &param0->target;
_388 = *_387;
_389 = _388 != NULL;
_390 = (frost$core$Bit) {_389};
_391 = _390.value;
if (_391) goto block53; else goto block54;
block54:;
_393 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s31, _393, &$s32);
abort(); // unreachable
block53:;
_396 = _388;
_397 = ($fn33) _396->$class->vtable[2];
_398 = _397(_396);
_399 = &param4->owner;
_400 = *_399;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:54:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_405 = &_400->_valid;
_406 = *_405;
_408 = _406.value;
if (_408) goto block57; else goto block58;
block58:;
_410 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s34, _410, &$s35);
abort(); // unreachable
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_414 = &_400->value;
_415 = *_414;
_416 = _415;
_417 = _416;
frost$core$Frost$ref$frost$core$Object$Q(_417);
_420 = ((org$frostlang$frostc$ClassDecl*) _416);
_421 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param1, _398, _420);
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
_423 = ((frost$core$Object*) _421);
frost$core$Frost$ref$frost$core$Object$Q(_423);
_425 = *(&local8);
_426 = ((frost$core$Object*) _425);
frost$core$Frost$unref$frost$core$Object$Q(_426);
*(&local8) = _421;
_429 = ((frost$core$Object*) _421);
frost$core$Frost$unref$frost$core$Object$Q(_429);
_431 = _416;
frost$core$Frost$unref$frost$core$Object$Q(_431);
_433 = ((frost$core$Object*) _398);
frost$core$Frost$unref$frost$core$Object$Q(_433);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:55
_436 = *(&local8);
_437 = _436 != NULL;
_438 = (frost$core$Bit) {_437};
_439 = _438.value;
if (_439) goto block59; else goto block60;
block60:;
_441 = (frost$core$Int) {55u};
_442 = &param4->owner;
_443 = *_442;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:56:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_448 = &_443->_valid;
_449 = *_448;
_451 = _449.value;
if (_451) goto block63; else goto block64;
block64:;
_453 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s36, _453, &$s37);
abort(); // unreachable
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_457 = &_443->value;
_458 = *_457;
_459 = _458;
_460 = _459;
frost$core$Frost$ref$frost$core$Object$Q(_460);
_463 = ((org$frostlang$frostc$ClassDecl*) _459);
_464 = &_463->name;
_465 = *_464;
_466 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s38, _465);
_467 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_466, &$s39);
_468 = &param0->target;
_469 = *_468;
_470 = _469 != NULL;
_471 = (frost$core$Bit) {_470};
_472 = _471.value;
if (_472) goto block65; else goto block66;
block66:;
_474 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s40, _474, &$s41);
abort(); // unreachable
block65:;
_477 = _469;
_478 = ($fn42) _477->$class->vtable[2];
_479 = _478(_477);
_480 = ((frost$core$Object*) _479);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from FieldLValue.frost:56:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_483 = ($fn43) _480->$class->vtable[0];
_484 = _483(_480);
_485 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_467, _484);
_486 = ((frost$core$Object*) _485);
frost$core$Frost$ref$frost$core$Object$Q(_486);
_488 = ((frost$core$Object*) _485);
frost$core$Frost$unref$frost$core$Object$Q(_488);
_490 = ((frost$core$Object*) _484);
frost$core$Frost$unref$frost$core$Object$Q(_490);
_493 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_485, &$s44);
_494 = ((frost$core$Object*) param4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from FieldLValue.frost:56:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_497 = ($fn45) _494->$class->vtable[0];
_498 = _497(_494);
_499 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_493, _498);
_500 = ((frost$core$Object*) _499);
frost$core$Frost$ref$frost$core$Object$Q(_500);
_502 = ((frost$core$Object*) _499);
frost$core$Frost$unref$frost$core$Object$Q(_502);
_504 = ((frost$core$Object*) _498);
frost$core$Frost$unref$frost$core$Object$Q(_504);
_507 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_499, &$s46);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s47, _441, _507);
_509 = ((frost$core$Object*) _507);
frost$core$Frost$unref$frost$core$Object$Q(_509);
_511 = ((frost$core$Object*) _499);
frost$core$Frost$unref$frost$core$Object$Q(_511);
_513 = ((frost$core$Object*) _493);
frost$core$Frost$unref$frost$core$Object$Q(_513);
_515 = ((frost$core$Object*) _485);
frost$core$Frost$unref$frost$core$Object$Q(_515);
_517 = ((frost$core$Object*) _479);
frost$core$Frost$unref$frost$core$Object$Q(_517);
_519 = ((frost$core$Object*) _467);
frost$core$Frost$unref$frost$core$Object$Q(_519);
_521 = ((frost$core$Object*) _466);
frost$core$Frost$unref$frost$core$Object$Q(_521);
_523 = _459;
frost$core$Frost$unref$frost$core$Object$Q(_523);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:57
_527 = *(&local8);
_528 = _527 != NULL;
_529 = (frost$core$Bit) {_528};
_530 = _529.value;
if (_530) goto block69; else goto block70;
block70:;
_532 = (frost$core$Int) {57u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s48, _532, &$s49);
abort(); // unreachable
block69:;
_535 = _527;
_536 = *(&local7);
_537 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, _535, _536);
_538 = ((frost$core$Object*) _537);
frost$core$Frost$ref$frost$core$Object$Q(_538);
_540 = &param0->effectiveType;
_541 = *_540;
_542 = ((frost$core$Object*) _541);
frost$core$Frost$unref$frost$core$Object$Q(_542);
_544 = &param0->effectiveType;
*_544 = _537;
_546 = ((frost$core$Object*) _537);
frost$core$Frost$unref$frost$core$Object$Q(_546);
_548 = *(&local8);
_549 = ((frost$core$Object*) _548);
frost$core$Frost$unref$frost$core$Object$Q(_549);
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
goto block51;
block52:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:60
_555 = *(&local7);
_556 = ((frost$core$Object*) _555);
frost$core$Frost$ref$frost$core$Object$Q(_556);
_558 = &param0->effectiveType;
_559 = *_558;
_560 = ((frost$core$Object*) _559);
frost$core$Frost$unref$frost$core$Object$Q(_560);
_562 = &param0->effectiveType;
*_562 = _555;
goto block51;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:62
_566 = &param0->target;
_567 = *_566;
_568 = _567 != NULL;
_569 = (frost$core$Bit) {_568};
_570 = _569.value;
if (_570) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:63
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:64
_575 = &param0->target;
_576 = *_575;
_577 = _576 != NULL;
_578 = (frost$core$Bit) {_577};
_579 = _578.value;
if (_579) goto block76; else goto block77;
block77:;
_581 = (frost$core$Int) {64u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s50, _581, &$s51);
abort(); // unreachable
block76:;
_584 = _576;
_585 = ($fn52) _584->$class->vtable[2];
_586 = _585(_584);
// begin inline call to function org.frostlang.frostc.Type.get_isPointer():frost.core.Bit from FieldLValue.frost:64:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
_589 = ((org$frostlang$frostc$Symbol*) _586);
_590 = &_589->name;
_591 = *_590;
_592 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_591, &$s53);
_594 = _592.value;
_595 = ((frost$core$Object*) _586);
frost$core$Frost$unref$frost$core$Object$Q(_595);
if (_594) goto block73; else goto block75;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:65
_599 = &param0->target;
_600 = *_599;
_601 = _600 != NULL;
_602 = (frost$core$Bit) {_601};
_603 = _602.value;
if (_603) goto block79; else goto block80;
block80:;
_605 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s54, _605, &$s55);
abort(); // unreachable
block79:;
_608 = _600;
_609 = ($fn56) _608->$class->vtable[2];
_610 = _609(_608);
_611 = &param4->owner;
_612 = *_611;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:65:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_617 = &_612->_valid;
_618 = *_617;
_620 = _618.value;
if (_620) goto block83; else goto block84;
block84:;
_622 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s57, _622, &$s58);
abort(); // unreachable
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_626 = &_612->value;
_627 = *_626;
_628 = _627;
_629 = _628;
frost$core$Frost$ref$frost$core$Object$Q(_629);
_632 = ((org$frostlang$frostc$ClassDecl*) _628);
_633 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param1, _610, _632);
_634 = _633 != NULL;
_635 = (frost$core$Bit) {_634};
_636 = _635.value;
if (_636) goto block85; else goto block86;
block86:;
_638 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s59, _638, &$s60);
abort(); // unreachable
block85:;
_641 = _633;
_642 = ((frost$core$Object*) _641);
frost$core$Frost$ref$frost$core$Object$Q(_642);
_644 = *(&local9);
_645 = ((frost$core$Object*) _644);
frost$core$Frost$unref$frost$core$Object$Q(_645);
*(&local9) = _641;
_648 = ((frost$core$Object*) _633);
frost$core$Frost$unref$frost$core$Object$Q(_648);
_650 = _628;
frost$core$Frost$unref$frost$core$Object$Q(_650);
_652 = ((frost$core$Object*) _610);
frost$core$Frost$unref$frost$core$Object$Q(_652);
goto block74;
block75:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:68
_657 = &param4->owner;
_658 = *_657;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:68:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_663 = &_658->_valid;
_664 = *_663;
_666 = _664.value;
if (_666) goto block89; else goto block90;
block90:;
_668 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s61, _668, &$s62);
abort(); // unreachable
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_672 = &_658->value;
_673 = *_672;
_674 = _673;
_675 = _674;
frost$core$Frost$ref$frost$core$Object$Q(_675);
_678 = ((org$frostlang$frostc$ClassDecl*) _674);
_679 = &_678->type;
_680 = *_679;
_681 = ((frost$core$Object*) _680);
frost$core$Frost$ref$frost$core$Object$Q(_681);
_683 = *(&local9);
_684 = ((frost$core$Object*) _683);
frost$core$Frost$unref$frost$core$Object$Q(_684);
*(&local9) = _680;
_687 = _674;
frost$core$Frost$unref$frost$core$Object$Q(_687);
goto block74;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:70
_691 = &param0->target;
_692 = *_691;
_693 = *(&local9);
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.MethodPosition, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from FieldLValue.frost:70:43
_695 = ((frost$core$Equatable*) _693);
_696 = &param1->VOID_TYPE;
_697 = *_696;
_698 = ((frost$core$Equatable*) _697);
ITable* $tmp63 = _695->$class->itable;
while ($tmp63->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp63 = $tmp63->next;
}
_699 = $tmp63->methods[1];
_700 = _699(_695, _698);
_701 = _700.value;
if (_701) goto block92; else goto block93;
block93:;
_703 = (frost$core$Int) {3931u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s64, _703, &$s65);
abort(); // unreachable
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3932
_707 = (frost$core$Bit) {false};
_708 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param1, param2, _692, _693, _707);
_709 = ((frost$core$Object*) _708);
frost$core$Frost$ref$frost$core$Object$Q(_709);
_711 = ((frost$core$Object*) _708);
frost$core$Frost$unref$frost$core$Object$Q(_711);
_714 = ((frost$core$Object*) _708);
frost$core$Frost$ref$frost$core$Object$Q(_714);
_716 = &param0->target;
_717 = *_716;
_718 = ((frost$core$Object*) _717);
frost$core$Frost$unref$frost$core$Object$Q(_718);
_720 = &param0->target;
*_720 = _708;
_722 = ((frost$core$Object*) _708);
frost$core$Frost$unref$frost$core$Object$Q(_722);
_724 = *(&local9);
_725 = ((frost$core$Object*) _724);
frost$core$Frost$unref$frost$core$Object$Q(_725);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block72;
block72:;
_729 = *(&local7);
_730 = ((frost$core$Object*) _729);
frost$core$Frost$unref$frost$core$Object$Q(_730);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type(void* rawSelf) {
org$frostlang$frostc$lvalue$FieldLValue* param0 = (org$frostlang$frostc$lvalue$FieldLValue*) rawSelf;

org$frostlang$frostc$Type** _1;
org$frostlang$frostc$Type* _2;
frost$core$Object* _3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:76
_1 = &param0->effectiveType;
_2 = *_1;
_3 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_3);
return _2;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$FieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(void* rawSelf) {
org$frostlang$frostc$lvalue$FieldLValue* param0 = (org$frostlang$frostc$lvalue$FieldLValue*) rawSelf;

org$frostlang$frostc$FieldDecl$Kind local0;
org$frostlang$frostc$FieldDecl$Kind local1;
org$frostlang$frostc$SymbolTable* local2 = NULL;
org$frostlang$frostc$IR$Value* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$FieldDecl$Kind local5;
org$frostlang$frostc$FieldDecl$Kind local6;
org$frostlang$frostc$IR$Statement$ID local7;
org$frostlang$frostc$IR$Statement$ID local8;
org$frostlang$frostc$FieldDecl** _1;
org$frostlang$frostc$FieldDecl* _2;
org$frostlang$frostc$Annotations** _3;
org$frostlang$frostc$Annotations* _4;
frost$core$Int* _7;
frost$core$Int _8;
frost$core$Int _9;
int64_t _12;
int64_t _13;
int64_t _14;
frost$core$Int _15;
frost$core$Int _17;
int64_t _18;
int64_t _19;
bool _20;
frost$core$Bit _21;
bool _23;
org$frostlang$frostc$FieldDecl** _25;
org$frostlang$frostc$FieldDecl* _26;
org$frostlang$frostc$FieldDecl$Kind* _27;
org$frostlang$frostc$FieldDecl$Kind _28;
frost$core$Equatable* _29;
frost$core$Int _30;
frost$core$Int* _33;
org$frostlang$frostc$FieldDecl$Kind _35;
org$frostlang$frostc$FieldDecl$Kind _38;
frost$core$Equatable* _39;
$fn66 _40;
frost$core$Bit _41;
bool _42;
frost$core$Object* _43;
frost$core$Object* _45;
org$frostlang$frostc$Compiler** _49;
org$frostlang$frostc$Compiler* _50;
frost$collections$Stack** _51;
frost$collections$Stack* _52;
org$frostlang$frostc$FieldDecl** _53;
org$frostlang$frostc$FieldDecl* _54;
frost$core$Weak** _55;
frost$core$Weak* _56;
frost$core$Bit* _61;
frost$core$Bit _62;
bool _64;
frost$core$Int _66;
frost$core$Object** _70;
frost$core$Object* _71;
frost$core$Object* _72;
frost$core$Object* _73;
org$frostlang$frostc$ClassDecl* _76;
frost$core$Object* _77;
frost$collections$Array** _80;
frost$collections$Array* _81;
frost$core$Object* _82;
frost$core$Object* _85;
org$frostlang$frostc$Compiler** _88;
org$frostlang$frostc$Compiler* _89;
org$frostlang$frostc$SymbolTable** _90;
org$frostlang$frostc$SymbolTable* _91;
frost$core$Object* _93;
org$frostlang$frostc$SymbolTable* _95;
frost$core$Object* _96;
org$frostlang$frostc$Compiler** _100;
org$frostlang$frostc$Compiler* _101;
org$frostlang$frostc$Compiler** _102;
org$frostlang$frostc$Compiler* _103;
org$frostlang$frostc$FieldDecl** _104;
org$frostlang$frostc$FieldDecl* _105;
frost$core$Weak** _106;
frost$core$Weak* _107;
frost$core$Bit* _112;
frost$core$Bit _113;
bool _115;
frost$core$Int _117;
frost$core$Object** _121;
frost$core$Object* _122;
frost$core$Object* _123;
frost$core$Object* _124;
org$frostlang$frostc$ClassDecl* _127;
org$frostlang$frostc$SymbolTable* _128;
frost$core$Object* _129;
org$frostlang$frostc$SymbolTable** _131;
org$frostlang$frostc$SymbolTable* _132;
frost$core$Object* _133;
org$frostlang$frostc$SymbolTable** _135;
frost$core$Object* _137;
frost$core$Object* _139;
org$frostlang$frostc$Compiler** _142;
org$frostlang$frostc$Compiler* _143;
org$frostlang$frostc$FieldDecl** _144;
org$frostlang$frostc$FieldDecl* _145;
org$frostlang$frostc$ASTNode** _146;
org$frostlang$frostc$ASTNode* _147;
bool _148;
frost$core$Bit _149;
bool _150;
frost$core$Int _152;
org$frostlang$frostc$ASTNode* _155;
org$frostlang$frostc$Compiler$TypeContext* _156;
frost$core$Int _157;
$fn67 _158;
org$frostlang$frostc$Type* _159;
frost$core$Bit _160;
org$frostlang$frostc$IR$Value* _162;
frost$core$Object* _164;
org$frostlang$frostc$IR$Value* _166;
frost$core$Object* _167;
frost$core$Object* _170;
frost$core$Object* _172;
frost$core$Object* _174;
org$frostlang$frostc$Compiler** _177;
org$frostlang$frostc$Compiler* _178;
org$frostlang$frostc$SymbolTable* _179;
frost$core$Object* _180;
org$frostlang$frostc$SymbolTable** _182;
org$frostlang$frostc$SymbolTable* _183;
frost$core$Object* _184;
org$frostlang$frostc$SymbolTable** _186;
org$frostlang$frostc$Compiler** _189;
org$frostlang$frostc$Compiler* _190;
frost$collections$Stack** _191;
frost$collections$Stack* _192;
frost$core$Object* _193;
org$frostlang$frostc$ClassDecl* _194;
frost$core$Object* _195;
org$frostlang$frostc$IR$Value* _198;
frost$core$Object* _199;
org$frostlang$frostc$IR$Value* _201;
frost$core$Object* _202;
org$frostlang$frostc$SymbolTable* _205;
frost$core$Object* _206;
org$frostlang$frostc$IR$Value** _211;
org$frostlang$frostc$IR$Value* _212;
bool _213;
frost$core$Bit _214;
bool _215;
frost$core$Object* _218;
org$frostlang$frostc$FieldDecl** _224;
org$frostlang$frostc$FieldDecl* _225;
org$frostlang$frostc$FieldDecl$Kind* _226;
org$frostlang$frostc$FieldDecl$Kind _227;
frost$core$Equatable* _228;
frost$core$Int _229;
frost$core$Int* _232;
org$frostlang$frostc$FieldDecl$Kind _234;
org$frostlang$frostc$FieldDecl$Kind _237;
frost$core$Equatable* _238;
$fn68 _239;
frost$core$Bit _240;
bool _241;
frost$core$Object* _242;
frost$core$Object* _244;
org$frostlang$frostc$Compiler** _248;
org$frostlang$frostc$Compiler* _249;
org$frostlang$frostc$MethodPosition* _250;
org$frostlang$frostc$MethodPosition _251;
org$frostlang$frostc$IR$Value** _252;
org$frostlang$frostc$IR$Value* _253;
bool _254;
frost$core$Bit _255;
bool _256;
frost$core$Int _258;
org$frostlang$frostc$IR$Value* _261;
org$frostlang$frostc$FieldDecl** _262;
org$frostlang$frostc$FieldDecl* _263;
org$frostlang$frostc$Symbol* _264;
frost$core$String** _265;
frost$core$String* _266;
frost$core$String* _267;
frost$core$String* _268;
frost$collections$Array* _269;
frost$collections$ListView* _271;
org$frostlang$frostc$Compiler$TypeContext* _272;
frost$core$Int _273;
org$frostlang$frostc$Type** _274;
org$frostlang$frostc$Type* _275;
frost$core$Bit _276;
org$frostlang$frostc$IR$Value* _278;
frost$core$Object* _279;
org$frostlang$frostc$IR$Value* _281;
frost$core$Object* _282;
frost$core$Object* _285;
frost$core$Object* _287;
frost$core$Object* _289;
frost$core$Object* _291;
frost$core$Object* _293;
org$frostlang$frostc$IR$Value* _296;
bool _297;
frost$core$Bit _298;
bool _299;
frost$core$Object* _302;
org$frostlang$frostc$IR$Value* _304;
frost$core$Object* _305;
org$frostlang$frostc$Compiler** _313;
org$frostlang$frostc$Compiler* _314;
org$frostlang$frostc$FieldDecl** _315;
org$frostlang$frostc$FieldDecl* _316;
frost$core$Weak** _317;
frost$core$Weak* _318;
frost$core$Bit* _323;
frost$core$Bit _324;
bool _326;
frost$core$Int _328;
frost$core$Object** _332;
frost$core$Object* _333;
frost$core$Object* _334;
frost$core$Object* _335;
org$frostlang$frostc$ClassDecl* _338;
frost$core$Bit _339;
bool _340;
frost$core$Object* _341;
org$frostlang$frostc$Compiler** _345;
org$frostlang$frostc$Compiler* _346;
org$frostlang$frostc$IR** _347;
org$frostlang$frostc$IR* _348;
org$frostlang$frostc$IR$Statement* _349;
frost$core$Int _350;
org$frostlang$frostc$MethodPosition* _351;
org$frostlang$frostc$MethodPosition _352;
org$frostlang$frostc$IR$Value** _353;
org$frostlang$frostc$IR$Value* _354;
bool _355;
frost$core$Bit _356;
bool _357;
frost$core$Int _359;
org$frostlang$frostc$IR$Value* _362;
org$frostlang$frostc$FieldDecl** _363;
org$frostlang$frostc$FieldDecl* _364;
$fn69 _366;
org$frostlang$frostc$IR$Statement$ID _367;
frost$core$Object* _369;
org$frostlang$frostc$Compiler** _374;
org$frostlang$frostc$Compiler* _375;
org$frostlang$frostc$IR** _376;
org$frostlang$frostc$IR* _377;
org$frostlang$frostc$IR$Statement* _378;
frost$core$Int _379;
org$frostlang$frostc$MethodPosition* _380;
org$frostlang$frostc$MethodPosition _381;
org$frostlang$frostc$IR$Value** _382;
org$frostlang$frostc$IR$Value* _383;
bool _384;
frost$core$Bit _385;
bool _386;
frost$core$Int _388;
org$frostlang$frostc$IR$Value* _391;
org$frostlang$frostc$FieldDecl** _392;
org$frostlang$frostc$FieldDecl* _393;
$fn70 _395;
org$frostlang$frostc$IR$Statement$ID _396;
frost$core$Object* _398;
org$frostlang$frostc$Compiler** _401;
org$frostlang$frostc$Compiler* _402;
org$frostlang$frostc$IR** _403;
org$frostlang$frostc$IR* _404;
org$frostlang$frostc$IR$Statement* _405;
frost$core$Int _406;
org$frostlang$frostc$MethodPosition* _407;
org$frostlang$frostc$MethodPosition _408;
org$frostlang$frostc$IR$Value* _409;
frost$core$Int _410;
org$frostlang$frostc$IR$Statement$ID _411;
org$frostlang$frostc$Type** _412;
org$frostlang$frostc$Type* _413;
$fn71 _416;
org$frostlang$frostc$IR$Statement$ID _417;
frost$core$Object* _419;
frost$core$Object* _421;
org$frostlang$frostc$IR$Value* _425;
frost$core$Int _426;
org$frostlang$frostc$IR$Statement$ID _427;
org$frostlang$frostc$Type** _428;
org$frostlang$frostc$Type* _429;
org$frostlang$frostc$IR$Value* _431;
frost$core$Object* _432;
org$frostlang$frostc$IR$Value* _434;
frost$core$Object* _435;
frost$core$Object* _438;
org$frostlang$frostc$Compiler** _442;
org$frostlang$frostc$Compiler* _443;
frost$core$Bit* _444;
frost$core$Bit _445;
bool _448;
bool _449;
frost$core$Bit _450;
bool _452;
org$frostlang$frostc$FieldDecl** _454;
org$frostlang$frostc$FieldDecl* _455;
org$frostlang$frostc$Annotations** _456;
org$frostlang$frostc$Annotations* _457;
frost$core$Int* _460;
frost$core$Int _461;
frost$core$Int _462;
int64_t _465;
int64_t _466;
int64_t _467;
frost$core$Int _468;
frost$core$Int _470;
int64_t _471;
int64_t _472;
bool _473;
frost$core$Bit _474;
bool _476;
org$frostlang$frostc$Compiler** _479;
org$frostlang$frostc$Compiler* _480;
org$frostlang$frostc$MethodPosition* _481;
org$frostlang$frostc$MethodPosition _482;
org$frostlang$frostc$IR$Value* _483;
bool _484;
frost$core$Bit _485;
bool _486;
frost$core$Int _488;
org$frostlang$frostc$IR$Value* _491;
org$frostlang$frostc$FixedArray* _492;
frost$collections$ListView* _494;
org$frostlang$frostc$Compiler$TypeContext* _495;
frost$core$Int _496;
org$frostlang$frostc$IR$Value* _498;
frost$core$Object* _499;
org$frostlang$frostc$IR$Value* _501;
frost$core$Object* _502;
frost$core$Object* _505;
frost$core$Object* _507;
frost$core$Object* _509;
org$frostlang$frostc$IR$Value* _512;
bool _513;
frost$core$Bit _514;
bool _515;
frost$core$Object* _518;
org$frostlang$frostc$IR$Value* _520;
frost$core$Object* _521;
org$frostlang$frostc$Type** _527;
org$frostlang$frostc$Type* _528;
frost$core$Equatable* _529;
org$frostlang$frostc$IR$Value* _530;
bool _531;
frost$core$Bit _532;
bool _533;
frost$core$Int _535;
org$frostlang$frostc$IR$Value* _538;
$fn72 _539;
org$frostlang$frostc$Type* _540;
frost$core$Equatable* _541;
$fn73 _542;
frost$core$Bit _543;
bool _544;
frost$core$Object* _545;
org$frostlang$frostc$Compiler** _549;
org$frostlang$frostc$Compiler* _550;
org$frostlang$frostc$MethodPosition* _551;
org$frostlang$frostc$MethodPosition _552;
org$frostlang$frostc$IR$Value* _553;
org$frostlang$frostc$Type** _554;
org$frostlang$frostc$Type* _555;
frost$core$Bit _558;
org$frostlang$frostc$IR$Value* _559;
frost$core$Object* _560;
frost$core$Object* _562;
frost$core$Object* _565;
org$frostlang$frostc$IR$Value* _567;
frost$core$Object* _568;
frost$core$Object* _571;
org$frostlang$frostc$IR$Value* _575;
frost$core$Object* _576;
org$frostlang$frostc$IR$Value* _578;
frost$core$Object* _579;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:81
_1 = &param0->field;
_2 = *_1;
_3 = &_2->annotations;
_4 = *_3;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from FieldLValue.frost:81:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:125
_7 = &_4->flags;
_8 = *_7;
_9 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:125:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_12 = _8.value;
_13 = _9.value;
_14 = _12 & _13;
_15 = (frost$core$Int) {_14};
_17 = (frost$core$Int) {0u};
_18 = _15.value;
_19 = _17.value;
_20 = _18 != _19;
_21 = (frost$core$Bit) {_20};
_23 = _21.value;
if (_23) goto block3; else goto block2;
block3:;
_25 = &param0->field;
_26 = *_25;
_27 = &_26->fieldKind;
_28 = *_27;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp74;
$tmp74 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$FieldDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp74->value = _28;
_29 = ((frost$core$Equatable*) $tmp74);
_30 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:81:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_33 = &(&local1)->$rawValue;
*_33 = _30;
_35 = *(&local1);
*(&local0) = _35;
_38 = *(&local0);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp75;
$tmp75 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$FieldDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp75->value = _38;
_39 = ((frost$core$Equatable*) $tmp75);
ITable* $tmp76 = _29->$class->itable;
while ($tmp76->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp76 = $tmp76->next;
}
_40 = $tmp76->methods[0];
_41 = _40(_29, _39);
_42 = _41.value;
_43 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_45);
if (_42) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:82
_49 = &param0->compiler;
_50 = *_49;
_51 = &_50->currentClass;
_52 = *_51;
_53 = &param0->field;
_54 = *_53;
_55 = &_54->owner;
_56 = *_55;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:82:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_61 = &_56->_valid;
_62 = *_61;
_64 = _62.value;
if (_64) goto block9; else goto block10;
block10:;
_66 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s77, _66, &$s78);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_70 = &_56->value;
_71 = *_70;
_72 = _71;
_73 = _72;
frost$core$Frost$ref$frost$core$Object$Q(_73);
_76 = ((org$frostlang$frostc$ClassDecl*) _72);
_77 = ((frost$core$Object*) _76);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from FieldLValue.frost:82:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_80 = &_52->contents;
_81 = *_80;
_82 = _77;
frost$collections$Array$add$frost$collections$Array$T(_81, _82);
_85 = _72;
frost$core$Frost$unref$frost$core$Object$Q(_85);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:83
_88 = &param0->compiler;
_89 = *_88;
_90 = &_89->symbolTable;
_91 = *_90;
*(&local2) = ((org$frostlang$frostc$SymbolTable*) NULL);
_93 = ((frost$core$Object*) _91);
frost$core$Frost$ref$frost$core$Object$Q(_93);
_95 = *(&local2);
_96 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_96);
*(&local2) = _91;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:84
_100 = &param0->compiler;
_101 = *_100;
_102 = &param0->compiler;
_103 = *_102;
_104 = &param0->field;
_105 = *_104;
_106 = &_105->owner;
_107 = *_106;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:84:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_112 = &_107->_valid;
_113 = *_112;
_115 = _113.value;
if (_115) goto block14; else goto block15;
block15:;
_117 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s79, _117, &$s80);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_121 = &_107->value;
_122 = *_121;
_123 = _122;
_124 = _123;
frost$core$Frost$ref$frost$core$Object$Q(_124);
_127 = ((org$frostlang$frostc$ClassDecl*) _123);
_128 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(_103, _127);
_129 = ((frost$core$Object*) _128);
frost$core$Frost$ref$frost$core$Object$Q(_129);
_131 = &_101->symbolTable;
_132 = *_131;
_133 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_133);
_135 = &_101->symbolTable;
*_135 = _128;
_137 = ((frost$core$Object*) _128);
frost$core$Frost$unref$frost$core$Object$Q(_137);
_139 = _123;
frost$core$Frost$unref$frost$core$Object$Q(_139);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:85
_142 = &param0->compiler;
_143 = *_142;
_144 = &param0->field;
_145 = *_144;
_146 = &_145->rawValue;
_147 = *_146;
_148 = _147 != NULL;
_149 = (frost$core$Bit) {_148};
_150 = _149.value;
if (_150) goto block16; else goto block17;
block17:;
_152 = (frost$core$Int) {85u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s81, _152, &$s82);
abort(); // unreachable
block16:;
_155 = _147;
_156 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_157 = (frost$core$Int) {3u};
_158 = ($fn83) param0->$class->vtable[2];
_159 = _158(param0);
_160 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_156, _157, _159, _160);
_162 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(_143, _155, _156);
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
_164 = ((frost$core$Object*) _162);
frost$core$Frost$ref$frost$core$Object$Q(_164);
_166 = *(&local3);
_167 = ((frost$core$Object*) _166);
frost$core$Frost$unref$frost$core$Object$Q(_167);
*(&local3) = _162;
_170 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_170);
_172 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_172);
_174 = ((frost$core$Object*) _156);
frost$core$Frost$unref$frost$core$Object$Q(_174);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:87
_177 = &param0->compiler;
_178 = *_177;
_179 = *(&local2);
_180 = ((frost$core$Object*) _179);
frost$core$Frost$ref$frost$core$Object$Q(_180);
_182 = &_178->symbolTable;
_183 = *_182;
_184 = ((frost$core$Object*) _183);
frost$core$Frost$unref$frost$core$Object$Q(_184);
_186 = &_178->symbolTable;
*_186 = _179;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:88
_189 = &param0->compiler;
_190 = *_189;
_191 = &_190->currentClass;
_192 = *_191;
_193 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_192);
_194 = ((org$frostlang$frostc$ClassDecl*) _193);
_195 = _193;
frost$core$Frost$unref$frost$core$Object$Q(_195);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:89
_198 = *(&local3);
_199 = ((frost$core$Object*) _198);
frost$core$Frost$ref$frost$core$Object$Q(_199);
_201 = *(&local3);
_202 = ((frost$core$Object*) _201);
frost$core$Frost$unref$frost$core$Object$Q(_202);
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
_205 = *(&local2);
_206 = ((frost$core$Object*) _205);
frost$core$Frost$unref$frost$core$Object$Q(_206);
*(&local2) = ((org$frostlang$frostc$SymbolTable*) NULL);
return _198;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:91
_211 = &param0->target;
_212 = *_211;
_213 = _212 == NULL;
_214 = (frost$core$Bit) {_213};
_215 = _214.value;
if (_215) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:93
_218 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_218);
return ((org$frostlang$frostc$IR$Value*) NULL);
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:95
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:96
_224 = &param0->field;
_225 = *_224;
_226 = &_225->fieldKind;
_227 = *_226;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp84;
$tmp84 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$FieldDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp84->value = _227;
_228 = ((frost$core$Equatable*) $tmp84);
_229 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:96:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_232 = &(&local6)->$rawValue;
*_232 = _229;
_234 = *(&local6);
*(&local5) = _234;
_237 = *(&local5);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp85;
$tmp85 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$FieldDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp85->value = _237;
_238 = ((frost$core$Equatable*) $tmp85);
ITable* $tmp86 = _228->$class->itable;
while ($tmp86->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp86 = $tmp86->next;
}
_239 = $tmp86->methods[0];
_240 = _239(_228, _238);
_241 = _240.value;
_242 = ((frost$core$Object*) _238);
frost$core$Frost$unref$frost$core$Object$Q(_242);
_244 = ((frost$core$Object*) _228);
frost$core$Frost$unref$frost$core$Object$Q(_244);
if (_241) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:97
_248 = &param0->compiler;
_249 = *_248;
_250 = &param0->position;
_251 = *_250;
_252 = &param0->target;
_253 = *_252;
_254 = _253 != NULL;
_255 = (frost$core$Bit) {_254};
_256 = _255.value;
if (_256) goto block24; else goto block25;
block25:;
_258 = (frost$core$Int) {97u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s87, _258, &$s88);
abort(); // unreachable
block24:;
_261 = _253;
_262 = &param0->field;
_263 = *_262;
_264 = ((org$frostlang$frostc$Symbol*) _263);
_265 = &_264->name;
_266 = *_265;
_267 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s89, _266);
_268 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_267, &$s90);
_269 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_269);
_271 = ((frost$collections$ListView*) _269);
_272 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_273 = (frost$core$Int) {3u};
_274 = &param0->rawType;
_275 = *_274;
_276 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_272, _273, _275, _276);
_278 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(_249, _251, _261, _268, _271, _272);
_279 = ((frost$core$Object*) _278);
frost$core$Frost$ref$frost$core$Object$Q(_279);
_281 = *(&local4);
_282 = ((frost$core$Object*) _281);
frost$core$Frost$unref$frost$core$Object$Q(_282);
*(&local4) = _278;
_285 = ((frost$core$Object*) _278);
frost$core$Frost$unref$frost$core$Object$Q(_285);
_287 = ((frost$core$Object*) _272);
frost$core$Frost$unref$frost$core$Object$Q(_287);
_289 = ((frost$core$Object*) _269);
frost$core$Frost$unref$frost$core$Object$Q(_289);
_291 = ((frost$core$Object*) _268);
frost$core$Frost$unref$frost$core$Object$Q(_291);
_293 = ((frost$core$Object*) _267);
frost$core$Frost$unref$frost$core$Object$Q(_293);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:99
_296 = *(&local4);
_297 = _296 == NULL;
_298 = (frost$core$Bit) {_297};
_299 = _298.value;
if (_299) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:100
_302 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_302);
_304 = *(&local4);
_305 = ((frost$core$Object*) _304);
frost$core$Frost$unref$frost$core$Object$Q(_305);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block27:;
goto block21;
block22:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:104
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:105
_313 = &param0->compiler;
_314 = *_313;
_315 = &param0->field;
_316 = *_315;
_317 = &_316->owner;
_318 = *_317;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:105:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_323 = &_318->_valid;
_324 = *_323;
_326 = _324.value;
if (_326) goto block33; else goto block34;
block34:;
_328 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s91, _328, &$s92);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_332 = &_318->value;
_333 = *_332;
_334 = _333;
_335 = _334;
frost$core$Frost$ref$frost$core$Object$Q(_335);
_338 = ((org$frostlang$frostc$ClassDecl*) _334);
_339 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(_314, _338);
_340 = _339.value;
_341 = _334;
frost$core$Frost$unref$frost$core$Object$Q(_341);
if (_340) goto block28; else goto block30;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:106
_345 = &param0->compiler;
_346 = *_345;
_347 = &_346->ir;
_348 = *_347;
_349 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_350 = (frost$core$Int) {10u};
_351 = &param0->position;
_352 = *_351;
_353 = &param0->target;
_354 = *_353;
_355 = _354 != NULL;
_356 = (frost$core$Bit) {_355};
_357 = _356.value;
if (_357) goto block35; else goto block36;
block36:;
_359 = (frost$core$Int) {106u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s93, _359, &$s94);
abort(); // unreachable
block35:;
_362 = _354;
_363 = &param0->field;
_364 = *_363;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(_349, _350, _352, _362, _364);
_366 = ($fn95) _348->$class->vtable[2];
_367 = _366(_348, _349);
*(&local7) = _367;
_369 = ((frost$core$Object*) _349);
frost$core$Frost$unref$frost$core$Object$Q(_369);
goto block29;
block30:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:109
_374 = &param0->compiler;
_375 = *_374;
_376 = &_375->ir;
_377 = *_376;
_378 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_379 = (frost$core$Int) {11u};
_380 = &param0->position;
_381 = *_380;
_382 = &param0->target;
_383 = *_382;
_384 = _383 != NULL;
_385 = (frost$core$Bit) {_384};
_386 = _385.value;
if (_386) goto block37; else goto block38;
block38:;
_388 = (frost$core$Int) {109u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s96, _388, &$s97);
abort(); // unreachable
block37:;
_391 = _383;
_392 = &param0->field;
_393 = *_392;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(_378, _379, _381, _391, _393);
_395 = ($fn98) _377->$class->vtable[2];
_396 = _395(_377, _378);
*(&local8) = _396;
_398 = ((frost$core$Object*) _378);
frost$core$Frost$unref$frost$core$Object$Q(_398);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:111
_401 = &param0->compiler;
_402 = *_401;
_403 = &_402->ir;
_404 = *_403;
_405 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_406 = (frost$core$Int) {14u};
_407 = &param0->position;
_408 = *_407;
_409 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_410 = (frost$core$Int) {7u};
_411 = *(&local8);
_412 = &param0->rawType;
_413 = *_412;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(_409, _410, _411, _413);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value(_405, _406, _408, _409);
_416 = ($fn99) _404->$class->vtable[2];
_417 = _416(_404, _405);
*(&local7) = _417;
_419 = ((frost$core$Object*) _409);
frost$core$Frost$unref$frost$core$Object$Q(_419);
_421 = ((frost$core$Object*) _405);
frost$core$Frost$unref$frost$core$Object$Q(_421);
goto block29;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:113
_425 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_426 = (frost$core$Int) {7u};
_427 = *(&local7);
_428 = &param0->rawType;
_429 = *_428;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(_425, _426, _427, _429);
_431 = _425;
_432 = ((frost$core$Object*) _431);
frost$core$Frost$ref$frost$core$Object$Q(_432);
_434 = *(&local4);
_435 = ((frost$core$Object*) _434);
frost$core$Frost$unref$frost$core$Object$Q(_435);
*(&local4) = _431;
_438 = ((frost$core$Object*) _425);
frost$core$Frost$unref$frost$core$Object$Q(_438);
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:115
_442 = &param0->compiler;
_443 = *_442;
_444 = &_443->inFieldCleanup;
_445 = *_444;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:115:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_448 = _445.value;
_449 = !_448;
_450 = (frost$core$Bit) {_449};
_452 = _450.value;
if (_452) goto block41; else goto block40;
block41:;
_454 = &param0->field;
_455 = *_454;
_456 = &_455->annotations;
_457 = *_456;
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from FieldLValue.frost:115:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:157
_460 = &_457->flags;
_461 = *_460;
_462 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:157:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_465 = _461.value;
_466 = _462.value;
_467 = _465 & _466;
_468 = (frost$core$Int) {_467};
_470 = (frost$core$Int) {0u};
_471 = _468.value;
_472 = _470.value;
_473 = _471 != _472;
_474 = (frost$core$Bit) {_473};
_476 = _474.value;
if (_476) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:116
_479 = &param0->compiler;
_480 = *_479;
_481 = &param0->position;
_482 = *_481;
_483 = *(&local4);
_484 = _483 != NULL;
_485 = (frost$core$Bit) {_484};
_486 = _485.value;
if (_486) goto block45; else goto block46;
block46:;
_488 = (frost$core$Int) {116u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s100, _488, &$s101);
abort(); // unreachable
block45:;
_491 = _483;
_492 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(sizeof(org$frostlang$frostc$FixedArray), (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init(_492);
_494 = ((frost$collections$ListView*) _492);
_495 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_496 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_495, _496);
_498 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(_480, _482, _491, &$s102, _494, _495);
_499 = ((frost$core$Object*) _498);
frost$core$Frost$ref$frost$core$Object$Q(_499);
_501 = *(&local4);
_502 = ((frost$core$Object*) _501);
frost$core$Frost$unref$frost$core$Object$Q(_502);
*(&local4) = _498;
_505 = ((frost$core$Object*) _498);
frost$core$Frost$unref$frost$core$Object$Q(_505);
_507 = ((frost$core$Object*) _495);
frost$core$Frost$unref$frost$core$Object$Q(_507);
_509 = ((frost$core$Object*) _492);
frost$core$Frost$unref$frost$core$Object$Q(_509);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:118
_512 = *(&local4);
_513 = _512 == NULL;
_514 = (frost$core$Bit) {_513};
_515 = _514.value;
if (_515) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:119
_518 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_518);
_520 = *(&local4);
_521 = ((frost$core$Object*) _520);
frost$core$Frost$unref$frost$core$Object$Q(_521);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block48:;
goto block40;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:122
_527 = &param0->effectiveType;
_528 = *_527;
_529 = ((frost$core$Equatable*) _528);
_530 = *(&local4);
_531 = _530 != NULL;
_532 = (frost$core$Bit) {_531};
_533 = _532.value;
if (_533) goto block51; else goto block52;
block52:;
_535 = (frost$core$Int) {122u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s103, _535, &$s104);
abort(); // unreachable
block51:;
_538 = _530;
_539 = ($fn105) _538->$class->vtable[2];
_540 = _539(_538);
_541 = ((frost$core$Equatable*) _540);
ITable* $tmp106 = _529->$class->itable;
while ($tmp106->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp106 = $tmp106->next;
}
_542 = $tmp106->methods[1];
_543 = _542(_529, _541);
_544 = _543.value;
_545 = ((frost$core$Object*) _540);
frost$core$Frost$unref$frost$core$Object$Q(_545);
if (_544) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:123
_549 = &param0->compiler;
_550 = *_549;
_551 = &param0->position;
_552 = *_551;
_553 = *(&local4);
_554 = &param0->effectiveType;
_555 = *_554;
// begin inline call to method org.frostlang.frostc.Compiler.cast(position:org.frostlang.frostc.MethodPosition, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from FieldLValue.frost:123:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4103
_558 = (frost$core$Bit) {false};
_559 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(_550, _552, _553, _555, _558);
_560 = ((frost$core$Object*) _559);
frost$core$Frost$ref$frost$core$Object$Q(_560);
_562 = ((frost$core$Object*) _559);
frost$core$Frost$unref$frost$core$Object$Q(_562);
_565 = ((frost$core$Object*) _559);
frost$core$Frost$ref$frost$core$Object$Q(_565);
_567 = *(&local4);
_568 = ((frost$core$Object*) _567);
frost$core$Frost$unref$frost$core$Object$Q(_568);
*(&local4) = _559;
_571 = ((frost$core$Object*) _559);
frost$core$Frost$unref$frost$core$Object$Q(_571);
goto block50;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:125
_575 = *(&local4);
_576 = ((frost$core$Object*) _575);
frost$core$Frost$ref$frost$core$Object$Q(_576);
_578 = *(&local4);
_579 = ((frost$core$Object*) _578);
frost$core$Frost$unref$frost$core$Object$Q(_579);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
return _575;

}
void org$frostlang$frostc$lvalue$FieldLValue$compileStore$org$frostlang$frostc$IR$Value(void* rawSelf, org$frostlang$frostc$IR$Value* param1) {
org$frostlang$frostc$lvalue$FieldLValue* param0 = (org$frostlang$frostc$lvalue$FieldLValue*) rawSelf;

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$Position local3;
org$frostlang$frostc$FieldDecl$Kind local4;
org$frostlang$frostc$FieldDecl$Kind local5;
frost$collections$Array* local6 = NULL;
frost$core$Bit local7;
org$frostlang$frostc$IR$Value* local8 = NULL;
org$frostlang$frostc$IR$Value** _1;
org$frostlang$frostc$IR$Value* _2;
bool _3;
frost$core$Bit _4;
bool _5;
org$frostlang$frostc$Compiler** _14;
org$frostlang$frostc$Compiler* _15;
frost$core$Bit* _16;
frost$core$Bit _17;
bool _20;
bool _21;
frost$core$Bit _22;
bool _24;
org$frostlang$frostc$FieldDecl** _26;
org$frostlang$frostc$FieldDecl* _27;
org$frostlang$frostc$Annotations** _28;
org$frostlang$frostc$Annotations* _29;
frost$core$Int* _32;
frost$core$Int _33;
frost$core$Int _34;
int64_t _37;
int64_t _38;
int64_t _39;
frost$core$Int _40;
frost$core$Int _42;
int64_t _43;
int64_t _44;
bool _45;
frost$core$Bit _46;
bool _48;
frost$collections$Array* _51;
frost$core$Object* _54;
frost$collections$Array* _56;
frost$core$Object* _57;
frost$core$Object* _60;
org$frostlang$frostc$MethodPosition* _63;
org$frostlang$frostc$MethodPosition _64;
frost$core$Int _67;
frost$core$Int _68;
frost$core$Int _69;
org$frostlang$frostc$Position _70;
frost$collections$Array* _74;
org$frostlang$frostc$ASTNode* _75;
frost$core$Int _76;
org$frostlang$frostc$Position _77;
frost$core$Object* _79;
frost$core$Object* _81;
org$frostlang$frostc$Compiler** _84;
org$frostlang$frostc$Compiler* _85;
org$frostlang$frostc$ASTNode* _86;
frost$core$Int _87;
org$frostlang$frostc$Position _88;
org$frostlang$frostc$ASTNode* _89;
frost$core$Int _90;
org$frostlang$frostc$Position _91;
org$frostlang$frostc$Compiler** _92;
org$frostlang$frostc$Compiler* _93;
org$frostlang$frostc$Compiler** _94;
org$frostlang$frostc$Compiler* _95;
org$frostlang$frostc$Type** _96;
org$frostlang$frostc$Type* _97;
org$frostlang$frostc$Type* _98;
org$frostlang$frostc$IR$Value* _101;
frost$core$Int _102;
org$frostlang$frostc$Type** _105;
org$frostlang$frostc$Type* _106;
frost$collections$Array* _107;
frost$core$Int _108;
frost$core$Object* _110;
frost$collections$ListView* _112;
org$frostlang$frostc$Type* _113;
frost$core$Object* _114;
frost$core$Object* _116;
frost$core$Object* _118;
frost$core$Object* _122;
frost$core$Object* _124;
frost$core$Object* _126;
frost$collections$Array* _130;
org$frostlang$frostc$FixedArray* _131;
org$frostlang$frostc$Compiler$TypeContext* _135;
frost$core$Int _136;
org$frostlang$frostc$IR$Value* _138;
frost$core$Object* _139;
frost$core$Object* _141;
frost$core$Object* _143;
bool _146;
frost$core$Bit _147;
bool _148;
frost$core$Int _150;
org$frostlang$frostc$IR$Value* _153;
frost$core$Object* _154;
org$frostlang$frostc$IR$Value* _156;
frost$core$Object* _157;
frost$core$Object* _160;
frost$core$Object* _162;
frost$core$Object* _164;
frost$core$Object* _166;
frost$core$Object* _168;
frost$core$Object* _170;
frost$collections$Array* _172;
frost$core$Object* _173;
frost$core$Object* _179;
org$frostlang$frostc$IR$Value* _181;
frost$core$Object* _182;
org$frostlang$frostc$Type** _187;
org$frostlang$frostc$Type* _188;
frost$core$Equatable* _189;
org$frostlang$frostc$Type** _190;
org$frostlang$frostc$Type* _191;
frost$core$Equatable* _192;
$fn107 _193;
frost$core$Bit _194;
bool _195;
org$frostlang$frostc$Compiler** _198;
org$frostlang$frostc$Compiler* _199;
org$frostlang$frostc$MethodPosition* _200;
org$frostlang$frostc$MethodPosition _201;
org$frostlang$frostc$IR$Value* _202;
org$frostlang$frostc$IR$Value* _203;
org$frostlang$frostc$Type** _204;
org$frostlang$frostc$Type* _205;
frost$core$Bit _208;
org$frostlang$frostc$IR$Value* _209;
frost$core$Object* _210;
frost$core$Object* _212;
bool _215;
frost$core$Bit _216;
bool _217;
frost$core$Int _219;
org$frostlang$frostc$IR$Value* _222;
frost$core$Object* _223;
org$frostlang$frostc$IR$Value* _225;
frost$core$Object* _226;
frost$core$Object* _229;
org$frostlang$frostc$IR$Value* _232;
frost$core$Bit _233;
bool _234;
org$frostlang$frostc$IR$Value* _237;
frost$core$Object* _238;
org$frostlang$frostc$IR$Value* _241;
frost$core$Object* _242;
org$frostlang$frostc$IR$Value* _249;
frost$core$Object* _250;
org$frostlang$frostc$IR$Value* _252;
frost$core$Object* _253;
org$frostlang$frostc$FieldDecl** _258;
org$frostlang$frostc$FieldDecl* _259;
org$frostlang$frostc$FieldDecl$Kind* _260;
org$frostlang$frostc$FieldDecl$Kind _261;
frost$core$Equatable* _262;
frost$core$Int _263;
frost$core$Int* _266;
org$frostlang$frostc$FieldDecl$Kind _268;
org$frostlang$frostc$FieldDecl$Kind _271;
frost$core$Equatable* _272;
$fn108 _273;
frost$core$Bit _274;
bool _275;
frost$core$Object* _276;
frost$core$Object* _278;
frost$collections$Array* _282;
frost$core$Object* _285;
frost$collections$Array* _287;
frost$core$Object* _288;
frost$core$Object* _291;
frost$collections$Array* _294;
org$frostlang$frostc$ASTNode* _295;
frost$core$Int _296;
org$frostlang$frostc$MethodPosition* _297;
org$frostlang$frostc$MethodPosition _298;
frost$core$Int _301;
frost$core$Int _302;
frost$core$Int _303;
org$frostlang$frostc$Position _304;
org$frostlang$frostc$IR$Value* _306;
frost$core$Object* _308;
frost$core$Object* _310;
org$frostlang$frostc$Compiler** _313;
org$frostlang$frostc$Compiler* _314;
org$frostlang$frostc$MethodPosition* _315;
org$frostlang$frostc$MethodPosition _316;
org$frostlang$frostc$IR$Value** _317;
org$frostlang$frostc$IR$Value* _318;
bool _319;
frost$core$Bit _320;
bool _321;
frost$core$Int _323;
org$frostlang$frostc$IR$Value* _326;
org$frostlang$frostc$FieldDecl** _327;
org$frostlang$frostc$FieldDecl* _328;
org$frostlang$frostc$Symbol* _329;
frost$core$String** _330;
frost$core$String* _331;
frost$core$String* _332;
frost$core$String* _333;
frost$collections$Array* _334;
frost$collections$ListView* _335;
org$frostlang$frostc$Compiler$TypeContext* _336;
frost$core$Int _337;
org$frostlang$frostc$Type** _338;
org$frostlang$frostc$Type* _339;
frost$core$Bit _340;
org$frostlang$frostc$IR$Value* _342;
frost$core$Object* _343;
frost$core$Object* _345;
frost$core$Object* _347;
frost$core$Object* _349;
frost$collections$Array* _351;
frost$core$Object* _352;
org$frostlang$frostc$Compiler** _358;
org$frostlang$frostc$Compiler* _359;
org$frostlang$frostc$Type** _360;
org$frostlang$frostc$Type* _361;
frost$core$Bit _364;
bool _367;
bool _368;
frost$core$Bit _369;
bool _371;
frost$core$Bit _374;
frost$core$Bit _378;
bool _381;
bool _382;
frost$core$Bit _383;
frost$core$Bit _387;
bool _388;
org$frostlang$frostc$FieldDecl** _390;
org$frostlang$frostc$FieldDecl* _391;
frost$core$Weak** _392;
frost$core$Weak* _393;
frost$core$Bit* _398;
frost$core$Bit _399;
bool _401;
frost$core$Int _403;
frost$core$Object** _407;
frost$core$Object* _408;
frost$core$Object* _409;
frost$core$Object* _410;
org$frostlang$frostc$ClassDecl* _413;
frost$core$String** _414;
frost$core$String* _415;
frost$core$Equatable* _416;
frost$core$Equatable* _417;
$fn109 _418;
frost$core$Bit _419;
bool _420;
frost$core$Object* _421;
org$frostlang$frostc$Compiler** _425;
org$frostlang$frostc$Compiler* _426;
org$frostlang$frostc$IR$Value* _427;
$fn110 _430;
org$frostlang$frostc$IR$Value* _434;
frost$core$Int _435;
org$frostlang$frostc$Compiler** _436;
org$frostlang$frostc$Compiler* _437;
org$frostlang$frostc$IR** _438;
org$frostlang$frostc$IR* _439;
org$frostlang$frostc$IR$Statement* _440;
frost$core$Int _441;
org$frostlang$frostc$MethodPosition* _442;
org$frostlang$frostc$MethodPosition _443;
org$frostlang$frostc$IR$Value** _444;
org$frostlang$frostc$IR$Value* _445;
bool _446;
frost$core$Bit _447;
bool _448;
frost$core$Int _450;
org$frostlang$frostc$IR$Value* _453;
org$frostlang$frostc$FieldDecl** _454;
org$frostlang$frostc$FieldDecl* _455;
$fn111 _457;
org$frostlang$frostc$IR$Statement$ID _458;
org$frostlang$frostc$Type** _459;
org$frostlang$frostc$Type* _460;
frost$core$Object* _463;
org$frostlang$frostc$IR$Value* _465;
frost$core$Object* _466;
frost$core$Object* _469;
frost$core$Object* _471;
org$frostlang$frostc$Compiler** _474;
org$frostlang$frostc$Compiler* _475;
org$frostlang$frostc$IR** _476;
org$frostlang$frostc$IR* _477;
org$frostlang$frostc$IR$Statement* _478;
frost$core$Int _479;
org$frostlang$frostc$MethodPosition* _480;
org$frostlang$frostc$MethodPosition _481;
org$frostlang$frostc$IR$Value* _482;
org$frostlang$frostc$IR$Value* _483;
$fn112 _485;
org$frostlang$frostc$IR$Statement$ID _486;
frost$core$Object* _487;
org$frostlang$frostc$IR$Value* _489;
frost$core$Object* _490;
org$frostlang$frostc$IR$Value* _494;
frost$core$Object* _495;
org$frostlang$frostc$IR$Value* _498;
frost$core$Object* _499;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:130
_1 = &param0->target;
_2 = *_1;
_3 = _2 == NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:132
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:134
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:135
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:136
_14 = &param0->compiler;
_15 = *_14;
_16 = &_15->inFieldCleanup;
_17 = *_16;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:136:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_20 = _17.value;
_21 = !_20;
_22 = (frost$core$Bit) {_21};
_24 = _22.value;
if (_24) goto block6; else goto block5;
block6:;
_26 = &param0->field;
_27 = *_26;
_28 = &_27->annotations;
_29 = *_28;
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from FieldLValue.frost:136:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:157
_32 = &_29->flags;
_33 = *_32;
_34 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:157:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_37 = _33.value;
_38 = _34.value;
_39 = _37 & _38;
_40 = (frost$core$Int) {_39};
_42 = (frost$core$Int) {0u};
_43 = _40.value;
_44 = _42.value;
_45 = _43 != _44;
_46 = (frost$core$Bit) {_45};
_48 = _46.value;
if (_48) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:137
_51 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_51);
*(&local2) = ((frost$collections$Array*) NULL);
_54 = ((frost$core$Object*) _51);
frost$core$Frost$ref$frost$core$Object$Q(_54);
_56 = *(&local2);
_57 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_57);
*(&local2) = _51;
_60 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_60);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:138
_63 = &param0->position;
_64 = *_63;
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from FieldLValue.frost:138:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_67 = _64.file;
_68 = _64.line;
_69 = _64.column;
_70 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_67, _68, _69);
*(&local3) = _70;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:139
_74 = *(&local2);
_75 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_76 = (frost$core$Int) {26u};
_77 = *(&local3);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_75, _76, _77, param1);
_79 = ((frost$core$Object*) _75);
frost$collections$Array$add$frost$collections$Array$T(_74, _79);
_81 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_81);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:140
_84 = &param0->compiler;
_85 = *_84;
_86 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_87 = (frost$core$Int) {9u};
_88 = *(&local3);
_89 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_90 = (frost$core$Int) {26u};
_91 = *(&local3);
_92 = &param0->compiler;
_93 = *_92;
_94 = &param0->compiler;
_95 = *_94;
_96 = &param0->effectiveType;
_97 = *_96;
_98 = org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(_95, _97);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from FieldLValue.frost:141:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3499
_101 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_102 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3499:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:278
_105 = &_93->CLASS_TYPE;
_106 = *_105;
_107 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_108 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_107, _108);
_110 = ((frost$core$Object*) _98);
frost$collections$Array$add$frost$collections$Array$T(_107, _110);
_112 = ((frost$collections$ListView*) _107);
_113 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_106, _112);
_114 = ((frost$core$Object*) _113);
frost$core$Frost$ref$frost$core$Object$Q(_114);
_116 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_116);
_118 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_118);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type(_101, _102, _98, _113);
_122 = ((frost$core$Object*) _101);
frost$core$Frost$ref$frost$core$Object$Q(_122);
_124 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_124);
_126 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_126);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_89, _90, _91, _101);
_130 = *(&local2);
_131 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT(_130);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(_86, _87, _88, _89, _131);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from FieldLValue.frost:140:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5008
_135 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_136 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_135, _136);
_138 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(_85, _86, _135);
_139 = ((frost$core$Object*) _138);
frost$core$Frost$ref$frost$core$Object$Q(_139);
_141 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_141);
_143 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_143);
_146 = _138 != NULL;
_147 = (frost$core$Bit) {_146};
_148 = _147.value;
if (_148) goto block14; else goto block15;
block15:;
_150 = (frost$core$Int) {140u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s113, _150, &$s114);
abort(); // unreachable
block14:;
_153 = _138;
_154 = ((frost$core$Object*) _153);
frost$core$Frost$ref$frost$core$Object$Q(_154);
_156 = *(&local1);
_157 = ((frost$core$Object*) _156);
frost$core$Frost$unref$frost$core$Object$Q(_157);
*(&local1) = _153;
_160 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_160);
_162 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_162);
_164 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_164);
_166 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_166);
_168 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_168);
_170 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_170);
_172 = *(&local2);
_173 = ((frost$core$Object*) _172);
frost$core$Frost$unref$frost$core$Object$Q(_173);
*(&local2) = ((frost$collections$Array*) NULL);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:146
_179 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_179);
_181 = *(&local1);
_182 = ((frost$core$Object*) _181);
frost$core$Frost$unref$frost$core$Object$Q(_182);
*(&local1) = param1;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:148
_187 = &param0->effectiveType;
_188 = *_187;
_189 = ((frost$core$Equatable*) _188);
_190 = &param0->rawType;
_191 = *_190;
_192 = ((frost$core$Equatable*) _191);
ITable* $tmp115 = _189->$class->itable;
while ($tmp115->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp115 = $tmp115->next;
}
_193 = $tmp115->methods[1];
_194 = _193(_189, _192);
_195 = _194.value;
if (_195) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:149
_198 = &param0->compiler;
_199 = *_198;
_200 = &param0->position;
_201 = *_200;
_202 = *(&local1);
_203 = _202;
_204 = &param0->rawType;
_205 = *_204;
// begin inline call to method org.frostlang.frostc.Compiler.cast(position:org.frostlang.frostc.MethodPosition, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from FieldLValue.frost:149:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4103
_208 = (frost$core$Bit) {false};
_209 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(_199, _201, _203, _205, _208);
_210 = ((frost$core$Object*) _209);
frost$core$Frost$ref$frost$core$Object$Q(_210);
_212 = ((frost$core$Object*) _209);
frost$core$Frost$unref$frost$core$Object$Q(_212);
_215 = _209 != NULL;
_216 = (frost$core$Bit) {_215};
_217 = _216.value;
if (_217) goto block20; else goto block21;
block21:;
_219 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s116, _219, &$s117);
abort(); // unreachable
block20:;
_222 = _209;
_223 = ((frost$core$Object*) _222);
frost$core$Frost$ref$frost$core$Object$Q(_223);
_225 = *(&local0);
_226 = ((frost$core$Object*) _225);
frost$core$Frost$unref$frost$core$Object$Q(_226);
*(&local0) = _222;
_229 = ((frost$core$Object*) _209);
frost$core$Frost$unref$frost$core$Object$Q(_229);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:150
_232 = *(&local0);
_233 = (frost$core$Bit) {false};
_234 = _233.value;
if (_234) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:151
_237 = *(&local1);
_238 = ((frost$core$Object*) _237);
frost$core$Frost$unref$frost$core$Object$Q(_238);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_241 = *(&local0);
_242 = ((frost$core$Object*) _241);
frost$core$Frost$unref$frost$core$Object$Q(_242);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block23:;
goto block17;
block18:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:155
_249 = *(&local1);
_250 = ((frost$core$Object*) _249);
frost$core$Frost$ref$frost$core$Object$Q(_250);
_252 = *(&local0);
_253 = ((frost$core$Object*) _252);
frost$core$Frost$unref$frost$core$Object$Q(_253);
*(&local0) = _249;
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:157
_258 = &param0->field;
_259 = *_258;
_260 = &_259->fieldKind;
_261 = *_260;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp118;
$tmp118 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$FieldDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp118->value = _261;
_262 = ((frost$core$Equatable*) $tmp118);
_263 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:157:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_266 = &(&local5)->$rawValue;
*_266 = _263;
_268 = *(&local5);
*(&local4) = _268;
_271 = *(&local4);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp119;
$tmp119 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$FieldDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp119->value = _271;
_272 = ((frost$core$Equatable*) $tmp119);
ITable* $tmp120 = _262->$class->itable;
while ($tmp120->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp120 = $tmp120->next;
}
_273 = $tmp120->methods[0];
_274 = _273(_262, _272);
_275 = _274.value;
_276 = ((frost$core$Object*) _272);
frost$core$Frost$unref$frost$core$Object$Q(_276);
_278 = ((frost$core$Object*) _262);
frost$core$Frost$unref$frost$core$Object$Q(_278);
if (_275) goto block24; else goto block26;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:158
_282 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_282);
*(&local6) = ((frost$collections$Array*) NULL);
_285 = ((frost$core$Object*) _282);
frost$core$Frost$ref$frost$core$Object$Q(_285);
_287 = *(&local6);
_288 = ((frost$core$Object*) _287);
frost$core$Frost$unref$frost$core$Object$Q(_288);
*(&local6) = _282;
_291 = ((frost$core$Object*) _282);
frost$core$Frost$unref$frost$core$Object$Q(_291);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:159
_294 = *(&local6);
_295 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_296 = (frost$core$Int) {26u};
_297 = &param0->position;
_298 = *_297;
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from FieldLValue.frost:159:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_301 = _298.file;
_302 = _298.line;
_303 = _298.column;
_304 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_301, _302, _303);
_306 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_295, _296, _304, _306);
_308 = ((frost$core$Object*) _295);
frost$collections$Array$add$frost$collections$Array$T(_294, _308);
_310 = ((frost$core$Object*) _295);
frost$core$Frost$unref$frost$core$Object$Q(_310);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:160
_313 = &param0->compiler;
_314 = *_313;
_315 = &param0->position;
_316 = *_315;
_317 = &param0->target;
_318 = *_317;
_319 = _318 != NULL;
_320 = (frost$core$Bit) {_319};
_321 = _320.value;
if (_321) goto block29; else goto block30;
block30:;
_323 = (frost$core$Int) {160u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s121, _323, &$s122);
abort(); // unreachable
block29:;
_326 = _318;
_327 = &param0->field;
_328 = *_327;
_329 = ((org$frostlang$frostc$Symbol*) _328);
_330 = &_329->name;
_331 = *_330;
_332 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s123, _331);
_333 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_332, &$s124);
_334 = *(&local6);
_335 = ((frost$collections$ListView*) _334);
_336 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_337 = (frost$core$Int) {3u};
_338 = &param0->rawType;
_339 = *_338;
_340 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_336, _337, _339, _340);
_342 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(_314, _316, _326, _333, _335, _336);
_343 = ((frost$core$Object*) _342);
frost$core$Frost$unref$frost$core$Object$Q(_343);
_345 = ((frost$core$Object*) _336);
frost$core$Frost$unref$frost$core$Object$Q(_345);
_347 = ((frost$core$Object*) _333);
frost$core$Frost$unref$frost$core$Object$Q(_347);
_349 = ((frost$core$Object*) _332);
frost$core$Frost$unref$frost$core$Object$Q(_349);
_351 = *(&local6);
_352 = ((frost$core$Object*) _351);
frost$core$Frost$unref$frost$core$Object$Q(_352);
*(&local6) = ((frost$collections$Array*) NULL);
goto block25;
block26:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:164
_358 = &param0->compiler;
_359 = *_358;
_360 = &param0->rawType;
_361 = *_360;
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from FieldLValue.frost:164:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:668
_364 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_361);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:668:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_367 = _364.value;
_368 = !_367;
_369 = (frost$core$Bit) {_368};
_371 = _369.value;
if (_371) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:669
_374 = (frost$core$Bit) {false};
*(&local7) = _374;
goto block34;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:671
_378 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(_359, _361);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:671:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_381 = _378.value;
_382 = !_381;
_383 = (frost$core$Bit) {_382};
*(&local7) = _383;
goto block34;
block34:;
_387 = *(&local7);
_388 = _387.value;
if (_388) goto block33; else goto block32;
block33:;
_390 = &param0->field;
_391 = *_390;
_392 = &_391->owner;
_393 = *_392;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:164:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_398 = &_393->_valid;
_399 = *_398;
_401 = _399.value;
if (_401) goto block41; else goto block42;
block42:;
_403 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s125, _403, &$s126);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_407 = &_393->value;
_408 = *_407;
_409 = _408;
_410 = _409;
frost$core$Frost$ref$frost$core$Object$Q(_410);
_413 = ((org$frostlang$frostc$ClassDecl*) _409);
_414 = &_413->name;
_415 = *_414;
_416 = ((frost$core$Equatable*) _415);
_417 = ((frost$core$Equatable*) &$s127);
ITable* $tmp128 = _416->$class->itable;
while ($tmp128->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp128 = $tmp128->next;
}
_418 = $tmp128->methods[1];
_419 = _418(_416, _417);
_420 = _419.value;
_421 = _409;
frost$core$Frost$unref$frost$core$Object$Q(_421);
if (_420) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:165
_425 = &param0->compiler;
_426 = *_425;
_427 = *(&local1);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(_426, _427);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:166
_430 = ($fn129) param0->$class->vtable[5];
_430(param0);
goto block32;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:168
_434 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_435 = (frost$core$Int) {7u};
_436 = &param0->compiler;
_437 = *_436;
_438 = &_437->ir;
_439 = *_438;
_440 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_441 = (frost$core$Int) {11u};
_442 = &param0->position;
_443 = *_442;
_444 = &param0->target;
_445 = *_444;
_446 = _445 != NULL;
_447 = (frost$core$Bit) {_446};
_448 = _447.value;
if (_448) goto block43; else goto block44;
block44:;
_450 = (frost$core$Int) {169u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s130, _450, &$s131);
abort(); // unreachable
block43:;
_453 = _445;
_454 = &param0->field;
_455 = *_454;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(_440, _441, _443, _453, _455);
_457 = ($fn132) _439->$class->vtable[2];
_458 = _457(_439, _440);
_459 = &param0->rawType;
_460 = *_459;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(_434, _435, _458, _460);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
_463 = ((frost$core$Object*) _434);
frost$core$Frost$ref$frost$core$Object$Q(_463);
_465 = *(&local8);
_466 = ((frost$core$Object*) _465);
frost$core$Frost$unref$frost$core$Object$Q(_466);
*(&local8) = _434;
_469 = ((frost$core$Object*) _440);
frost$core$Frost$unref$frost$core$Object$Q(_469);
_471 = ((frost$core$Object*) _434);
frost$core$Frost$unref$frost$core$Object$Q(_471);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:170
_474 = &param0->compiler;
_475 = *_474;
_476 = &_475->ir;
_477 = *_476;
_478 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_479 = (frost$core$Int) {27u};
_480 = &param0->position;
_481 = *_480;
_482 = *(&local0);
_483 = *(&local8);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(_478, _479, _481, _482, _483);
_485 = ($fn133) _477->$class->vtable[2];
_486 = _485(_477, _478);
_487 = ((frost$core$Object*) _478);
frost$core$Frost$unref$frost$core$Object$Q(_487);
_489 = *(&local8);
_490 = ((frost$core$Object*) _489);
frost$core$Frost$unref$frost$core$Object$Q(_490);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block25;
block25:;
_494 = *(&local1);
_495 = ((frost$core$Object*) _494);
frost$core$Frost$unref$frost$core$Object$Q(_495);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_498 = *(&local0);
_499 = ((frost$core$Object*) _498);
frost$core$Frost$unref$frost$core$Object$Q(_499);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$lvalue$FieldLValue$compileUnref(void* rawSelf) {
org$frostlang$frostc$lvalue$FieldLValue* param0 = (org$frostlang$frostc$lvalue$FieldLValue*) rawSelf;

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$FieldDecl$Kind local1;
org$frostlang$frostc$FieldDecl$Kind local2;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$IR$Statement$ID local4;
org$frostlang$frostc$FieldDecl** _3;
org$frostlang$frostc$FieldDecl* _4;
org$frostlang$frostc$FieldDecl$Kind* _5;
org$frostlang$frostc$FieldDecl$Kind _6;
frost$core$Equatable* _7;
frost$core$Int _8;
frost$core$Int* _11;
org$frostlang$frostc$FieldDecl$Kind _13;
org$frostlang$frostc$FieldDecl$Kind _16;
frost$core$Equatable* _17;
$fn134 _18;
frost$core$Bit _19;
bool _20;
frost$core$Object* _21;
frost$core$Object* _23;
org$frostlang$frostc$IR$Value* _27;
frost$core$Object* _28;
org$frostlang$frostc$Compiler** _34;
org$frostlang$frostc$Compiler* _35;
org$frostlang$frostc$FieldDecl** _36;
org$frostlang$frostc$FieldDecl* _37;
frost$core$Weak** _38;
frost$core$Weak* _39;
frost$core$Bit* _44;
frost$core$Bit _45;
bool _47;
frost$core$Int _49;
frost$core$Object** _53;
frost$core$Object* _54;
frost$core$Object* _55;
frost$core$Object* _56;
org$frostlang$frostc$ClassDecl* _59;
frost$core$Bit _60;
bool _61;
frost$core$Object* _62;
org$frostlang$frostc$Compiler** _66;
org$frostlang$frostc$Compiler* _67;
org$frostlang$frostc$IR** _68;
org$frostlang$frostc$IR* _69;
org$frostlang$frostc$IR$Statement* _70;
frost$core$Int _71;
org$frostlang$frostc$MethodPosition* _72;
org$frostlang$frostc$MethodPosition _73;
org$frostlang$frostc$IR$Value** _74;
org$frostlang$frostc$IR$Value* _75;
bool _76;
frost$core$Bit _77;
bool _78;
frost$core$Int _80;
org$frostlang$frostc$IR$Value* _83;
org$frostlang$frostc$FieldDecl** _84;
org$frostlang$frostc$FieldDecl* _85;
$fn135 _87;
org$frostlang$frostc$IR$Statement$ID _88;
frost$core$Object* _90;
org$frostlang$frostc$Compiler** _95;
org$frostlang$frostc$Compiler* _96;
org$frostlang$frostc$IR** _97;
org$frostlang$frostc$IR* _98;
org$frostlang$frostc$IR$Statement* _99;
frost$core$Int _100;
org$frostlang$frostc$MethodPosition* _101;
org$frostlang$frostc$MethodPosition _102;
org$frostlang$frostc$IR$Value** _103;
org$frostlang$frostc$IR$Value* _104;
bool _105;
frost$core$Bit _106;
bool _107;
frost$core$Int _109;
org$frostlang$frostc$IR$Value* _112;
org$frostlang$frostc$FieldDecl** _113;
org$frostlang$frostc$FieldDecl* _114;
$fn136 _116;
org$frostlang$frostc$IR$Statement$ID _117;
frost$core$Object* _119;
org$frostlang$frostc$Compiler** _122;
org$frostlang$frostc$Compiler* _123;
org$frostlang$frostc$IR** _124;
org$frostlang$frostc$IR* _125;
org$frostlang$frostc$IR$Statement* _126;
frost$core$Int _127;
org$frostlang$frostc$MethodPosition* _128;
org$frostlang$frostc$MethodPosition _129;
org$frostlang$frostc$IR$Value* _130;
frost$core$Int _131;
org$frostlang$frostc$IR$Statement$ID _132;
org$frostlang$frostc$Type** _133;
org$frostlang$frostc$Type* _134;
$fn137 _137;
org$frostlang$frostc$IR$Statement$ID _138;
frost$core$Object* _140;
frost$core$Object* _142;
org$frostlang$frostc$IR$Value* _146;
frost$core$Int _147;
org$frostlang$frostc$IR$Statement$ID _148;
org$frostlang$frostc$Type** _149;
org$frostlang$frostc$Type* _150;
frost$core$Object* _152;
org$frostlang$frostc$IR$Value* _154;
frost$core$Object* _155;
frost$core$Object* _158;
org$frostlang$frostc$Compiler** _161;
org$frostlang$frostc$Compiler* _162;
org$frostlang$frostc$IR$Value* _163;
org$frostlang$frostc$IR$Value* _165;
frost$core$Object* _166;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:175
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:176
_3 = &param0->field;
_4 = *_3;
_5 = &_4->fieldKind;
_6 = *_5;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp138;
$tmp138 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$FieldDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp138->value = _6;
_7 = ((frost$core$Equatable*) $tmp138);
_8 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:176:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
_11 = &(&local2)->$rawValue;
*_11 = _8;
_13 = *(&local2);
*(&local1) = _13;
_16 = *(&local1);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp139;
$tmp139 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$FieldDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp139->value = _16;
_17 = ((frost$core$Equatable*) $tmp139);
ITable* $tmp140 = _7->$class->itable;
while ($tmp140->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp140 = $tmp140->next;
}
_18 = $tmp140->methods[0];
_19 = _18(_7, _17);
_20 = _19.value;
_21 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_23);
if (_20) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:177
_27 = *(&local0);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:179
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:180
_34 = &param0->compiler;
_35 = *_34;
_36 = &param0->field;
_37 = *_36;
_38 = &_37->owner;
_39 = *_38;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:180:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_44 = &_39->_valid;
_45 = *_44;
_47 = _45.value;
if (_47) goto block9; else goto block10;
block10:;
_49 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s141, _49, &$s142);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_53 = &_39->value;
_54 = *_53;
_55 = _54;
_56 = _55;
frost$core$Frost$ref$frost$core$Object$Q(_56);
_59 = ((org$frostlang$frostc$ClassDecl*) _55);
_60 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(_35, _59);
_61 = _60.value;
_62 = _55;
frost$core$Frost$unref$frost$core$Object$Q(_62);
if (_61) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:181
_66 = &param0->compiler;
_67 = *_66;
_68 = &_67->ir;
_69 = *_68;
_70 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_71 = (frost$core$Int) {10u};
_72 = &param0->position;
_73 = *_72;
_74 = &param0->target;
_75 = *_74;
_76 = _75 != NULL;
_77 = (frost$core$Bit) {_76};
_78 = _77.value;
if (_78) goto block11; else goto block12;
block12:;
_80 = (frost$core$Int) {181u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s143, _80, &$s144);
abort(); // unreachable
block11:;
_83 = _75;
_84 = &param0->field;
_85 = *_84;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(_70, _71, _73, _83, _85);
_87 = ($fn145) _69->$class->vtable[2];
_88 = _87(_69, _70);
*(&local3) = _88;
_90 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_90);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:184
_95 = &param0->compiler;
_96 = *_95;
_97 = &_96->ir;
_98 = *_97;
_99 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_100 = (frost$core$Int) {11u};
_101 = &param0->position;
_102 = *_101;
_103 = &param0->target;
_104 = *_103;
_105 = _104 != NULL;
_106 = (frost$core$Bit) {_105};
_107 = _106.value;
if (_107) goto block13; else goto block14;
block14:;
_109 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s146, _109, &$s147);
abort(); // unreachable
block13:;
_112 = _104;
_113 = &param0->field;
_114 = *_113;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(_99, _100, _102, _112, _114);
_116 = ($fn148) _98->$class->vtable[2];
_117 = _116(_98, _99);
*(&local4) = _117;
_119 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_119);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:185
_122 = &param0->compiler;
_123 = *_122;
_124 = &_123->ir;
_125 = *_124;
_126 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_127 = (frost$core$Int) {14u};
_128 = &param0->position;
_129 = *_128;
_130 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_131 = (frost$core$Int) {7u};
_132 = *(&local4);
_133 = &param0->rawType;
_134 = *_133;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(_130, _131, _132, _134);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value(_126, _127, _129, _130);
_137 = ($fn149) _125->$class->vtable[2];
_138 = _137(_125, _126);
*(&local3) = _138;
_140 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_140);
_142 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_142);
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:187
_146 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_147 = (frost$core$Int) {7u};
_148 = *(&local3);
_149 = &param0->rawType;
_150 = *_149;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(_146, _147, _148, _150);
_152 = ((frost$core$Object*) _146);
frost$core$Frost$ref$frost$core$Object$Q(_152);
_154 = *(&local0);
_155 = ((frost$core$Object*) _154);
frost$core$Frost$unref$frost$core$Object$Q(_155);
*(&local0) = _146;
_158 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_158);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:188
_161 = &param0->compiler;
_162 = *_161;
_163 = *(&local0);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(_162, _163);
_165 = *(&local0);
_166 = ((frost$core$Object*) _165);
frost$core$Frost$unref$frost$core$Object$Q(_166);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$lvalue$FieldLValue$cleanup(void* rawSelf) {
org$frostlang$frostc$lvalue$FieldLValue* param0 = (org$frostlang$frostc$lvalue$FieldLValue*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$IR$Value** _7;
org$frostlang$frostc$IR$Value* _8;
frost$core$Object* _9;
org$frostlang$frostc$FieldDecl** _11;
org$frostlang$frostc$FieldDecl* _12;
frost$core$Object* _13;
org$frostlang$frostc$Type** _15;
org$frostlang$frostc$Type* _16;
frost$core$Object* _17;
org$frostlang$frostc$Type** _19;
org$frostlang$frostc$Type* _20;
frost$core$Object* _21;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:15
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->compiler;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->target;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->field;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = &param0->rawType;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = &param0->effectiveType;
_20 = *_19;
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
return;

}

