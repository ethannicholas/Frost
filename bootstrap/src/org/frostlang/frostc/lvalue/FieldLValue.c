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
typedef org$frostlang$frostc$Type* (*$fn32)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn44)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn194)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn234)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn237)(frost$core$Object*);
typedef frost$core$String* (*$fn243)(frost$core$Object*);
typedef frost$core$Bit (*$fn286)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn329)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn387)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef frost$core$Bit (*$fn422)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn489)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn509)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn525)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn587)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn591)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn684)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn720)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn790)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn797)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn818)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn834)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn851)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn888)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn908)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn924)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 39, -1155759797158457110, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20\x63\x6c\x61\x73\x73\x20", 21, 6374091204168990154, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, -4672451134882412660, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x66\x6f\x72\x20", 5, 1394196365474570014, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f", 4, 7433203768955287672, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s566 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s567 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74", 3, -3106811833996379657, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s585 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s673 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s674 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s698 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s699 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s740 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s741 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s747 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x65\x74\x5f", 4, 3257523206249946292, NULL };
static frost$core$String $s749 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s782 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s813 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s814 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s883 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s884 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s903 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 3578588169832392074, NULL };
static frost$core$String $s904 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };

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
frost$core$Bit $tmp26 = (frost$core$Bit) {param3 != NULL};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block8; else goto block9;
block9:;
frost$core$Int $tmp28 = (frost$core$Int) {33u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s29, $tmp28, &$s30);
abort(); // unreachable
block8:;
$fn32 $tmp31 = ($fn32) param3->$class->vtable[2];
org$frostlang$frostc$Type* $tmp33 = $tmp31(param3);
// begin inline call to function org.frostlang.frostc.Type.get_isClassLiteral():frost.core.Bit from FieldLValue.frost:33:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:369
org$frostlang$frostc$Type$Kind* $tmp34 = &$tmp33->typeKind;
org$frostlang$frostc$Type$Kind $tmp35 = *$tmp34;
org$frostlang$frostc$Type$Kind$wrapper* $tmp36;
$tmp36 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp36->value = $tmp35;
frost$core$Int $tmp37 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:369:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp38 = &(&local4)->$rawValue;
*$tmp38 = $tmp37;
org$frostlang$frostc$Type$Kind $tmp39 = *(&local4);
*(&local3) = $tmp39;
org$frostlang$frostc$Type$Kind $tmp40 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp41;
$tmp41 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp41->value = $tmp40;
ITable* $tmp42 = ((frost$core$Equatable*) $tmp36)->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp42 = $tmp42->next;
}
$fn44 $tmp43 = $tmp42->methods[0];
frost$core$Bit $tmp45 = $tmp43(((frost$core$Equatable*) $tmp36), ((frost$core$Equatable*) $tmp41));
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block12; else goto block13;
block12:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:369:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp47 = &$tmp33->_subtypes;
org$frostlang$frostc$FixedArray* $tmp48 = *$tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48 != NULL};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block16; else goto block17;
block17:;
frost$core$Int $tmp51 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s52, $tmp51, &$s53);
abort(); // unreachable
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
frost$core$Int $tmp54 = (frost$core$Int) {0u};
frost$core$Object* $tmp55 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp48, $tmp54);
frost$core$String** $tmp56 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp55))->name;
frost$core$String* $tmp57 = *$tmp56;
frost$core$Bit $tmp58 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp57, &$s59);
frost$core$Frost$unref$frost$core$Object$Q($tmp55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
*(&local2) = $tmp58;
goto block14;
block13:;
*(&local2) = $tmp45;
goto block14;
block14:;
frost$core$Bit $tmp60 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp41)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp36)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:33:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp61 = $tmp60.value;
bool $tmp62 = !$tmp61;
frost$core$Bit $tmp63 = (frost$core$Bit) {$tmp62};
bool $tmp64 = $tmp63.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
if ($tmp64) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:34
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp65 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp66 = *$tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
org$frostlang$frostc$IR$Value** $tmp67 = &param0->target;
*$tmp67 = param3;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:36
org$frostlang$frostc$Annotations** $tmp68 = &param4->annotations;
org$frostlang$frostc$Annotations* $tmp69 = *$tmp68;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from FieldLValue.frost:36:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp70 = &$tmp69->flags;
frost$core$Int $tmp71 = *$tmp70;
frost$core$Int $tmp72 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp73 = $tmp71.value;
int64_t $tmp74 = $tmp72.value;
int64_t $tmp75 = $tmp73 & $tmp74;
frost$core$Int $tmp76 = (frost$core$Int) {$tmp75};
frost$core$Int $tmp77 = (frost$core$Int) {0u};
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77.value;
bool $tmp80 = $tmp78 != $tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:36:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp82 = $tmp81.value;
bool $tmp83 = !$tmp82;
frost$core$Bit $tmp84 = (frost$core$Bit) {$tmp83};
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:37
frost$core$Weak** $tmp86 = &param4->owner;
frost$core$Weak* $tmp87 = *$tmp86;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:37:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp88 = &$tmp87->_valid;
frost$core$Bit $tmp89 = *$tmp88;
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block30; else goto block31;
block31:;
frost$core$Int $tmp91 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s92, $tmp91);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp93 = &$tmp87->value;
frost$core$Object* $tmp94 = *$tmp93;
frost$core$Frost$ref$frost$core$Object$Q($tmp94);
org$frostlang$frostc$Annotations** $tmp95 = &((org$frostlang$frostc$ClassDecl*) $tmp94)->annotations;
org$frostlang$frostc$Annotations* $tmp96 = *$tmp95;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from FieldLValue.frost:37:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:158
frost$core$Int* $tmp97 = &$tmp96->flags;
frost$core$Int $tmp98 = *$tmp97;
frost$core$Int $tmp99 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:158:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp100 = $tmp98.value;
int64_t $tmp101 = $tmp99.value;
int64_t $tmp102 = $tmp100 & $tmp101;
frost$core$Int $tmp103 = (frost$core$Int) {$tmp102};
frost$core$Int $tmp104 = (frost$core$Int) {0u};
int64_t $tmp105 = $tmp103.value;
int64_t $tmp106 = $tmp104.value;
bool $tmp107 = $tmp105 != $tmp106;
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107};
bool $tmp109 = $tmp108.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp94);
if ($tmp109) goto block27; else goto block26;
block27:;
frost$core$Bit* $tmp110 = &param1->reportErrors;
frost$core$Bit $tmp111 = *$tmp110;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:37:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp112 = $tmp111.value;
bool $tmp113 = !$tmp112;
frost$core$Bit $tmp114 = (frost$core$Bit) {$tmp113};
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block24; else goto block26;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:39
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp116 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp117 = (frost$core$Int) {7u};
frost$core$Int $tmp118 = (frost$core$Int) {18446744073709551615u};
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from FieldLValue.frost:39:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int* $tmp119 = &(&local6)->value;
*$tmp119 = $tmp118;
org$frostlang$frostc$IR$Statement$ID $tmp120 = *(&local6);
*(&local5) = $tmp120;
org$frostlang$frostc$IR$Statement$ID $tmp121 = *(&local5);
frost$core$Weak** $tmp122 = &param4->owner;
frost$core$Weak* $tmp123 = *$tmp122;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:39:71
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp124 = &$tmp123->_valid;
frost$core$Bit $tmp125 = *$tmp124;
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block38; else goto block39;
block39:;
frost$core$Int $tmp127 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s128, $tmp127);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp129 = &$tmp123->value;
frost$core$Object* $tmp130 = *$tmp129;
frost$core$Frost$ref$frost$core$Object$Q($tmp130);
org$frostlang$frostc$Type** $tmp131 = &((org$frostlang$frostc$ClassDecl*) $tmp130)->type;
org$frostlang$frostc$Type* $tmp132 = *$tmp131;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp116, $tmp117, $tmp121, $tmp132);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
org$frostlang$frostc$IR$Value** $tmp133 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp134 = *$tmp133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
org$frostlang$frostc$IR$Value** $tmp135 = &param0->target;
*$tmp135 = $tmp116;
frost$core$Frost$unref$frost$core$Object$Q($tmp130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
goto block25;
block26:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:42
frost$core$Bit $tmp136 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp137 = org$frostlang$frostc$Compiler$compileSelf$org$frostlang$frostc$Position$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param1, param2, $tmp136);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
org$frostlang$frostc$IR$Value** $tmp138 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp139 = *$tmp138;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
org$frostlang$frostc$IR$Value** $tmp140 = &param0->target;
*$tmp140 = $tmp137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
goto block25;
block25:;
goto block20;
block20:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:45
org$frostlang$frostc$Type** $tmp141 = &param4->type;
org$frostlang$frostc$Type* $tmp142 = *$tmp141;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
org$frostlang$frostc$Type** $tmp143 = &param0->rawType;
org$frostlang$frostc$Type* $tmp144 = *$tmp143;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
org$frostlang$frostc$Type** $tmp145 = &param0->rawType;
*$tmp145 = $tmp142;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:46
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:47
frost$core$Bit* $tmp146 = &param1->inFieldCleanup;
frost$core$Bit $tmp147 = *$tmp146;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:47:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp148 = $tmp147.value;
bool $tmp149 = !$tmp148;
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block43; else goto block42;
block43:;
org$frostlang$frostc$Annotations** $tmp152 = &param4->annotations;
org$frostlang$frostc$Annotations* $tmp153 = *$tmp152;
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from FieldLValue.frost:47:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:154
frost$core$Int* $tmp154 = &$tmp153->flags;
frost$core$Int $tmp155 = *$tmp154;
frost$core$Int $tmp156 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:154:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp157 = $tmp155.value;
int64_t $tmp158 = $tmp156.value;
int64_t $tmp159 = $tmp157 & $tmp158;
frost$core$Int $tmp160 = (frost$core$Int) {$tmp159};
frost$core$Int $tmp161 = (frost$core$Int) {0u};
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161.value;
bool $tmp164 = $tmp162 != $tmp163;
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164};
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block40; else goto block42;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:48
org$frostlang$frostc$Type** $tmp167 = &param0->rawType;
org$frostlang$frostc$Type* $tmp168 = *$tmp167;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from FieldLValue.frost:48:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp169 = &$tmp168->_subtypes;
org$frostlang$frostc$FixedArray* $tmp170 = *$tmp169;
frost$core$Bit $tmp171 = (frost$core$Bit) {$tmp170 != NULL};
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block48; else goto block49;
block49:;
frost$core$Int $tmp173 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s174, $tmp173, &$s175);
abort(); // unreachable
block48:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$Int $tmp176 = (frost$core$Int) {1u};
frost$core$Object* $tmp177 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp170, $tmp176);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp177)));
org$frostlang$frostc$Type* $tmp178 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local7) = ((org$frostlang$frostc$Type*) $tmp177);
frost$core$Frost$unref$frost$core$Object$Q($tmp177);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
goto block41;
block42:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:51
org$frostlang$frostc$Type** $tmp179 = &param0->rawType;
org$frostlang$frostc$Type* $tmp180 = *$tmp179;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
org$frostlang$frostc$Type* $tmp181 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local7) = $tmp180;
goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:53
org$frostlang$frostc$IR$Value** $tmp182 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp183 = *$tmp182;
frost$core$Bit $tmp184 = (frost$core$Bit) {$tmp183 != NULL};
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block50; else goto block52;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:54
org$frostlang$frostc$IR$Value** $tmp186 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp187 = *$tmp186;
frost$core$Bit $tmp188 = (frost$core$Bit) {$tmp187 != NULL};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block53; else goto block54;
block54:;
frost$core$Int $tmp190 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s191, $tmp190, &$s192);
abort(); // unreachable
block53:;
$fn194 $tmp193 = ($fn194) $tmp187->$class->vtable[2];
org$frostlang$frostc$Type* $tmp195 = $tmp193($tmp187);
frost$core$Weak** $tmp196 = &param4->owner;
frost$core$Weak* $tmp197 = *$tmp196;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:54:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp198 = &$tmp197->_valid;
frost$core$Bit $tmp199 = *$tmp198;
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block57; else goto block58;
block58:;
frost$core$Int $tmp201 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s202, $tmp201);
abort(); // unreachable
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp203 = &$tmp197->value;
frost$core$Object* $tmp204 = *$tmp203;
frost$core$Frost$ref$frost$core$Object$Q($tmp204);
org$frostlang$frostc$Type* $tmp205 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param1, $tmp195, ((org$frostlang$frostc$ClassDecl*) $tmp204));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
org$frostlang$frostc$Type* $tmp206 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
*(&local8) = $tmp205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$core$Frost$unref$frost$core$Object$Q($tmp204);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:55
org$frostlang$frostc$Type* $tmp207 = *(&local8);
frost$core$Bit $tmp208 = (frost$core$Bit) {$tmp207 != NULL};
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block59; else goto block60;
block60:;
frost$core$Int $tmp210 = (frost$core$Int) {55u};
frost$core$Weak** $tmp211 = &param4->owner;
frost$core$Weak* $tmp212 = *$tmp211;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:56:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp213 = &$tmp212->_valid;
frost$core$Bit $tmp214 = *$tmp213;
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block63; else goto block64;
block64:;
frost$core$Int $tmp216 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s217, $tmp216);
abort(); // unreachable
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp218 = &$tmp212->value;
frost$core$Object* $tmp219 = *$tmp218;
frost$core$Frost$ref$frost$core$Object$Q($tmp219);
frost$core$String** $tmp220 = &((org$frostlang$frostc$ClassDecl*) $tmp219)->name;
frost$core$String* $tmp221 = *$tmp220;
frost$core$String* $tmp222 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s223, $tmp221);
frost$core$String* $tmp224 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp222, &$s225);
org$frostlang$frostc$IR$Value** $tmp226 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp227 = *$tmp226;
frost$core$Bit $tmp228 = (frost$core$Bit) {$tmp227 != NULL};
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block65; else goto block66;
block66:;
frost$core$Int $tmp230 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s231, $tmp230, &$s232);
abort(); // unreachable
block65:;
$fn234 $tmp233 = ($fn234) $tmp227->$class->vtable[2];
org$frostlang$frostc$Type* $tmp235 = $tmp233($tmp227);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from FieldLValue.frost:56:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn237 $tmp236 = ($fn237) ((frost$core$Object*) $tmp235)->$class->vtable[0];
frost$core$String* $tmp238 = $tmp236(((frost$core$Object*) $tmp235));
frost$core$String* $tmp239 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp224, $tmp238);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$String* $tmp240 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp239, &$s241);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from FieldLValue.frost:56:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn243 $tmp242 = ($fn243) ((frost$core$Object*) param4)->$class->vtable[0];
frost$core$String* $tmp244 = $tmp242(((frost$core$Object*) param4));
frost$core$String* $tmp245 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp240, $tmp244);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$core$String* $tmp246 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp245, &$s247);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s248, $tmp210, $tmp246);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q($tmp219);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:57
org$frostlang$frostc$Type* $tmp249 = *(&local8);
frost$core$Bit $tmp250 = (frost$core$Bit) {$tmp249 != NULL};
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block69; else goto block70;
block70:;
frost$core$Int $tmp252 = (frost$core$Int) {57u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s253, $tmp252, &$s254);
abort(); // unreachable
block69:;
org$frostlang$frostc$Type* $tmp255 = *(&local7);
org$frostlang$frostc$Type* $tmp256 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp249, $tmp255);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
org$frostlang$frostc$Type** $tmp257 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp258 = *$tmp257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
org$frostlang$frostc$Type** $tmp259 = &param0->effectiveType;
*$tmp259 = $tmp256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
org$frostlang$frostc$Type* $tmp260 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
goto block51;
block52:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:60
org$frostlang$frostc$Type* $tmp261 = *(&local7);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
org$frostlang$frostc$Type** $tmp262 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp263 = *$tmp262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
org$frostlang$frostc$Type** $tmp264 = &param0->effectiveType;
*$tmp264 = $tmp261;
goto block51;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:62
org$frostlang$frostc$IR$Value** $tmp265 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp266 = *$tmp265;
frost$core$Bit $tmp267 = (frost$core$Bit) {$tmp266 != NULL};
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:63
org$frostlang$frostc$IR$Value** $tmp269 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp270 = *$tmp269;
frost$core$Weak** $tmp271 = &param4->owner;
frost$core$Weak* $tmp272 = *$tmp271;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:63:72
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp273 = &$tmp272->_valid;
frost$core$Bit $tmp274 = *$tmp273;
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block75; else goto block76;
block76:;
frost$core$Int $tmp276 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s277, $tmp276);
abort(); // unreachable
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp278 = &$tmp272->value;
frost$core$Object* $tmp279 = *$tmp278;
frost$core$Frost$ref$frost$core$Object$Q($tmp279);
org$frostlang$frostc$Type** $tmp280 = &((org$frostlang$frostc$ClassDecl*) $tmp279)->type;
org$frostlang$frostc$Type* $tmp281 = *$tmp280;
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from FieldLValue.frost:63:43
org$frostlang$frostc$Type** $tmp282 = &param1->VOID_TYPE;
org$frostlang$frostc$Type* $tmp283 = *$tmp282;
ITable* $tmp284 = ((frost$core$Equatable*) $tmp281)->$class->itable;
while ($tmp284->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp284 = $tmp284->next;
}
$fn286 $tmp285 = $tmp284->methods[1];
frost$core$Bit $tmp287 = $tmp285(((frost$core$Equatable*) $tmp281), ((frost$core$Equatable*) $tmp283));
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block78; else goto block79;
block79:;
frost$core$Int $tmp289 = (frost$core$Int) {4128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s290, $tmp289, &$s291);
abort(); // unreachable
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4129
frost$core$Bit $tmp292 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp293 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param1, param2, $tmp270, $tmp281, $tmp292);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
org$frostlang$frostc$IR$Value** $tmp294 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp295 = *$tmp294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
org$frostlang$frostc$IR$Value** $tmp296 = &param0->target;
*$tmp296 = $tmp293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Frost$unref$frost$core$Object$Q($tmp279);
goto block72;
block72:;
org$frostlang$frostc$Type* $tmp297 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$FieldLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:69
org$frostlang$frostc$Type** $tmp298 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp299 = *$tmp298;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
return $tmp299;

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
org$frostlang$frostc$FieldDecl** $tmp300 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp301 = *$tmp300;
org$frostlang$frostc$Annotations** $tmp302 = &$tmp301->annotations;
org$frostlang$frostc$Annotations* $tmp303 = *$tmp302;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from FieldLValue.frost:74:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp304 = &$tmp303->flags;
frost$core$Int $tmp305 = *$tmp304;
frost$core$Int $tmp306 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp307 = $tmp305.value;
int64_t $tmp308 = $tmp306.value;
int64_t $tmp309 = $tmp307 & $tmp308;
frost$core$Int $tmp310 = (frost$core$Int) {$tmp309};
frost$core$Int $tmp311 = (frost$core$Int) {0u};
int64_t $tmp312 = $tmp310.value;
int64_t $tmp313 = $tmp311.value;
bool $tmp314 = $tmp312 != $tmp313;
frost$core$Bit $tmp315 = (frost$core$Bit) {$tmp314};
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block3; else goto block2;
block3:;
org$frostlang$frostc$FieldDecl** $tmp317 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp318 = *$tmp317;
org$frostlang$frostc$FieldDecl$Kind* $tmp319 = &$tmp318->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp320 = *$tmp319;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp321;
$tmp321 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp321->value = $tmp320;
frost$core$Int $tmp322 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:74:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp323 = &(&local1)->$rawValue;
*$tmp323 = $tmp322;
org$frostlang$frostc$FieldDecl$Kind $tmp324 = *(&local1);
*(&local0) = $tmp324;
org$frostlang$frostc$FieldDecl$Kind $tmp325 = *(&local0);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp326;
$tmp326 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp326->value = $tmp325;
ITable* $tmp327 = ((frost$core$Equatable*) $tmp321)->$class->itable;
while ($tmp327->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp327 = $tmp327->next;
}
$fn329 $tmp328 = $tmp327->methods[0];
frost$core$Bit $tmp330 = $tmp328(((frost$core$Equatable*) $tmp321), ((frost$core$Equatable*) $tmp326));
bool $tmp331 = $tmp330.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp326)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp321)));
if ($tmp331) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:75
org$frostlang$frostc$Compiler** $tmp332 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp333 = *$tmp332;
frost$collections$Stack** $tmp334 = &$tmp333->currentClass;
frost$collections$Stack* $tmp335 = *$tmp334;
org$frostlang$frostc$FieldDecl** $tmp336 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp337 = *$tmp336;
frost$core$Weak** $tmp338 = &$tmp337->owner;
frost$core$Weak* $tmp339 = *$tmp338;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:75:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp340 = &$tmp339->_valid;
frost$core$Bit $tmp341 = *$tmp340;
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block9; else goto block10;
block10:;
frost$core$Int $tmp343 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s344, $tmp343);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp345 = &$tmp339->value;
frost$core$Object* $tmp346 = *$tmp345;
frost$core$Frost$ref$frost$core$Object$Q($tmp346);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from FieldLValue.frost:75:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp347 = &$tmp335->contents;
frost$collections$Array* $tmp348 = *$tmp347;
frost$collections$Array$add$frost$collections$Array$T($tmp348, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp346)));
frost$core$Frost$unref$frost$core$Object$Q($tmp346);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:76
org$frostlang$frostc$Compiler** $tmp349 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp350 = *$tmp349;
org$frostlang$frostc$SymbolTable** $tmp351 = &$tmp350->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp352 = *$tmp351;
*(&local2) = ((org$frostlang$frostc$SymbolTable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
org$frostlang$frostc$SymbolTable* $tmp353 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local2) = $tmp352;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:77
org$frostlang$frostc$Compiler** $tmp354 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp355 = *$tmp354;
org$frostlang$frostc$Compiler** $tmp356 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp357 = *$tmp356;
org$frostlang$frostc$FieldDecl** $tmp358 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp359 = *$tmp358;
frost$core$Weak** $tmp360 = &$tmp359->owner;
frost$core$Weak* $tmp361 = *$tmp360;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:77:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp362 = &$tmp361->_valid;
frost$core$Bit $tmp363 = *$tmp362;
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block14; else goto block15;
block15:;
frost$core$Int $tmp365 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s366, $tmp365);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp367 = &$tmp361->value;
frost$core$Object* $tmp368 = *$tmp367;
frost$core$Frost$ref$frost$core$Object$Q($tmp368);
org$frostlang$frostc$SymbolTable* $tmp369 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp357, ((org$frostlang$frostc$ClassDecl*) $tmp368));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
org$frostlang$frostc$SymbolTable** $tmp370 = &$tmp355->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp371 = *$tmp370;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
org$frostlang$frostc$SymbolTable** $tmp372 = &$tmp355->symbolTable;
*$tmp372 = $tmp369;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$core$Frost$unref$frost$core$Object$Q($tmp368);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:78
org$frostlang$frostc$Compiler** $tmp373 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp374 = *$tmp373;
org$frostlang$frostc$FieldDecl** $tmp375 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp376 = *$tmp375;
org$frostlang$frostc$ASTNode** $tmp377 = &$tmp376->rawValue;
org$frostlang$frostc$ASTNode* $tmp378 = *$tmp377;
frost$core$Bit $tmp379 = (frost$core$Bit) {$tmp378 != NULL};
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block16; else goto block17;
block17:;
frost$core$Int $tmp381 = (frost$core$Int) {78u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s382, $tmp381, &$s383);
abort(); // unreachable
block16:;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp384 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp385 = (frost$core$Int) {3u};
$fn387 $tmp386 = ($fn387) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp388 = $tmp386(param0);
frost$core$Bit $tmp389 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp384, $tmp385, $tmp388, $tmp389);
org$frostlang$frostc$IR$Value* $tmp390 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp374, $tmp378, $tmp384);
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
frost$core$Bit $tmp408 = (frost$core$Bit) {$tmp407 == NULL};
bool $tmp409 = $tmp408.value;
if ($tmp409) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:86
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block19:;
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
frost$core$Int $tmp415 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:89:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp416 = &(&local6)->$rawValue;
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
if ($tmp424) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:90
org$frostlang$frostc$Compiler** $tmp425 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp426 = *$tmp425;
org$frostlang$frostc$Position* $tmp427 = &param0->position;
org$frostlang$frostc$Position $tmp428 = *$tmp427;
org$frostlang$frostc$IR$Value** $tmp429 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp430 = *$tmp429;
frost$core$Bit $tmp431 = (frost$core$Bit) {$tmp430 != NULL};
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block24; else goto block25;
block25:;
frost$core$Int $tmp433 = (frost$core$Int) {90u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s434, $tmp433, &$s435);
abort(); // unreachable
block24:;
org$frostlang$frostc$FieldDecl** $tmp436 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp437 = *$tmp436;
frost$core$String** $tmp438 = &((org$frostlang$frostc$Symbol*) $tmp437)->name;
frost$core$String* $tmp439 = *$tmp438;
frost$core$String* $tmp440 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s441, $tmp439);
frost$core$String* $tmp442 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp440, &$s443);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp444 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp444);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp445 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp446 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp447 = &param0->rawType;
org$frostlang$frostc$Type* $tmp448 = *$tmp447;
frost$core$Bit $tmp449 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp445, $tmp446, $tmp448, $tmp449);
org$frostlang$frostc$IR$Value* $tmp450 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp426, $tmp428, $tmp430, $tmp442, ((frost$collections$ListView*) $tmp444), $tmp445);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
org$frostlang$frostc$IR$Value* $tmp451 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
*(&local4) = $tmp450;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:92
org$frostlang$frostc$IR$Value* $tmp452 = *(&local4);
frost$core$Bit $tmp453 = (frost$core$Bit) {$tmp452 == NULL};
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:93
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp455 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block27:;
goto block21;
block22:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:97
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:98
org$frostlang$frostc$Compiler** $tmp456 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp457 = *$tmp456;
org$frostlang$frostc$FieldDecl** $tmp458 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp459 = *$tmp458;
frost$core$Weak** $tmp460 = &$tmp459->owner;
frost$core$Weak* $tmp461 = *$tmp460;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:98:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp462 = &$tmp461->_valid;
frost$core$Bit $tmp463 = *$tmp462;
bool $tmp464 = $tmp463.value;
if ($tmp464) goto block33; else goto block34;
block34:;
frost$core$Int $tmp465 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s466, $tmp465);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp467 = &$tmp461->value;
frost$core$Object* $tmp468 = *$tmp467;
frost$core$Frost$ref$frost$core$Object$Q($tmp468);
frost$core$Bit $tmp469 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit($tmp457, ((org$frostlang$frostc$ClassDecl*) $tmp468));
bool $tmp470 = $tmp469.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp468);
if ($tmp470) goto block28; else goto block30;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:99
org$frostlang$frostc$Compiler** $tmp471 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp472 = *$tmp471;
org$frostlang$frostc$IR** $tmp473 = &$tmp472->ir;
org$frostlang$frostc$IR* $tmp474 = *$tmp473;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp475 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp476 = (frost$core$Int) {10u};
org$frostlang$frostc$Position* $tmp477 = &param0->position;
org$frostlang$frostc$Position $tmp478 = *$tmp477;
org$frostlang$frostc$IR$Value** $tmp479 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp480 = *$tmp479;
frost$core$Bit $tmp481 = (frost$core$Bit) {$tmp480 != NULL};
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block35; else goto block36;
block36:;
frost$core$Int $tmp483 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s484, $tmp483, &$s485);
abort(); // unreachable
block35:;
org$frostlang$frostc$FieldDecl** $tmp486 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp487 = *$tmp486;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp475, $tmp476, $tmp478, $tmp480, $tmp487);
$fn489 $tmp488 = ($fn489) $tmp474->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp490 = $tmp488($tmp474, $tmp475);
*(&local7) = $tmp490;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
goto block29;
block30:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:102
org$frostlang$frostc$Compiler** $tmp491 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp492 = *$tmp491;
org$frostlang$frostc$IR** $tmp493 = &$tmp492->ir;
org$frostlang$frostc$IR* $tmp494 = *$tmp493;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp495 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp496 = (frost$core$Int) {11u};
org$frostlang$frostc$Position* $tmp497 = &param0->position;
org$frostlang$frostc$Position $tmp498 = *$tmp497;
org$frostlang$frostc$IR$Value** $tmp499 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp500 = *$tmp499;
frost$core$Bit $tmp501 = (frost$core$Bit) {$tmp500 != NULL};
bool $tmp502 = $tmp501.value;
if ($tmp502) goto block37; else goto block38;
block38:;
frost$core$Int $tmp503 = (frost$core$Int) {102u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s504, $tmp503, &$s505);
abort(); // unreachable
block37:;
org$frostlang$frostc$FieldDecl** $tmp506 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp507 = *$tmp506;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp495, $tmp496, $tmp498, $tmp500, $tmp507);
$fn509 $tmp508 = ($fn509) $tmp494->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp510 = $tmp508($tmp494, $tmp495);
*(&local8) = $tmp510;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:104
org$frostlang$frostc$Compiler** $tmp511 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp512 = *$tmp511;
org$frostlang$frostc$IR** $tmp513 = &$tmp512->ir;
org$frostlang$frostc$IR* $tmp514 = *$tmp513;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp515 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp516 = (frost$core$Int) {14u};
org$frostlang$frostc$Position* $tmp517 = &param0->position;
org$frostlang$frostc$Position $tmp518 = *$tmp517;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp519 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp520 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp521 = *(&local8);
org$frostlang$frostc$Type** $tmp522 = &param0->rawType;
org$frostlang$frostc$Type* $tmp523 = *$tmp522;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp519, $tmp520, $tmp521, $tmp523);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp515, $tmp516, $tmp518, $tmp519);
$fn525 $tmp524 = ($fn525) $tmp514->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp526 = $tmp524($tmp514, $tmp515);
*(&local7) = $tmp526;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
goto block29;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:106
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp527 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp528 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp529 = *(&local7);
org$frostlang$frostc$Type** $tmp530 = &param0->rawType;
org$frostlang$frostc$Type* $tmp531 = *$tmp530;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp527, $tmp528, $tmp529, $tmp531);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
org$frostlang$frostc$IR$Value* $tmp532 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
*(&local4) = $tmp527;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:108
org$frostlang$frostc$Compiler** $tmp533 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp534 = *$tmp533;
frost$core$Bit* $tmp535 = &$tmp534->inFieldCleanup;
frost$core$Bit $tmp536 = *$tmp535;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:108:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp537 = $tmp536.value;
bool $tmp538 = !$tmp537;
frost$core$Bit $tmp539 = (frost$core$Bit) {$tmp538};
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block41; else goto block40;
block41:;
org$frostlang$frostc$FieldDecl** $tmp541 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp542 = *$tmp541;
org$frostlang$frostc$Annotations** $tmp543 = &$tmp542->annotations;
org$frostlang$frostc$Annotations* $tmp544 = *$tmp543;
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from FieldLValue.frost:108:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:154
frost$core$Int* $tmp545 = &$tmp544->flags;
frost$core$Int $tmp546 = *$tmp545;
frost$core$Int $tmp547 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:154:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp548 = $tmp546.value;
int64_t $tmp549 = $tmp547.value;
int64_t $tmp550 = $tmp548 & $tmp549;
frost$core$Int $tmp551 = (frost$core$Int) {$tmp550};
frost$core$Int $tmp552 = (frost$core$Int) {0u};
int64_t $tmp553 = $tmp551.value;
int64_t $tmp554 = $tmp552.value;
bool $tmp555 = $tmp553 != $tmp554;
frost$core$Bit $tmp556 = (frost$core$Bit) {$tmp555};
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:109
org$frostlang$frostc$Compiler** $tmp558 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp559 = *$tmp558;
org$frostlang$frostc$Position* $tmp560 = &param0->position;
org$frostlang$frostc$Position $tmp561 = *$tmp560;
org$frostlang$frostc$IR$Value* $tmp562 = *(&local4);
frost$core$Bit $tmp563 = (frost$core$Bit) {$tmp562 != NULL};
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block45; else goto block46;
block46:;
frost$core$Int $tmp565 = (frost$core$Int) {109u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s566, $tmp565, &$s567);
abort(); // unreachable
block45:;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp568 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp568);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp569 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp570 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp569, $tmp570);
org$frostlang$frostc$IR$Value* $tmp571 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp559, $tmp561, $tmp562, &$s572, ((frost$collections$ListView*) $tmp568), $tmp569);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
org$frostlang$frostc$IR$Value* $tmp573 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
*(&local4) = $tmp571;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:111
org$frostlang$frostc$IR$Value* $tmp574 = *(&local4);
frost$core$Bit $tmp575 = (frost$core$Bit) {$tmp574 == NULL};
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:112
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp577 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block48:;
goto block40;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:115
org$frostlang$frostc$Type** $tmp578 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp579 = *$tmp578;
org$frostlang$frostc$IR$Value* $tmp580 = *(&local4);
frost$core$Bit $tmp581 = (frost$core$Bit) {$tmp580 != NULL};
bool $tmp582 = $tmp581.value;
if ($tmp582) goto block51; else goto block52;
block52:;
frost$core$Int $tmp583 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s584, $tmp583, &$s585);
abort(); // unreachable
block51:;
$fn587 $tmp586 = ($fn587) $tmp580->$class->vtable[2];
org$frostlang$frostc$Type* $tmp588 = $tmp586($tmp580);
ITable* $tmp589 = ((frost$core$Equatable*) $tmp579)->$class->itable;
while ($tmp589->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp589 = $tmp589->next;
}
$fn591 $tmp590 = $tmp589->methods[1];
frost$core$Bit $tmp592 = $tmp590(((frost$core$Equatable*) $tmp579), ((frost$core$Equatable*) $tmp588));
bool $tmp593 = $tmp592.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
if ($tmp593) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:116
org$frostlang$frostc$Compiler** $tmp594 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp595 = *$tmp594;
org$frostlang$frostc$Position* $tmp596 = &param0->position;
org$frostlang$frostc$Position $tmp597 = *$tmp596;
org$frostlang$frostc$IR$Value* $tmp598 = *(&local4);
org$frostlang$frostc$Type** $tmp599 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp600 = *$tmp599;
org$frostlang$frostc$IR$Value* $tmp601 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp595, $tmp597, $tmp598, $tmp600);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
org$frostlang$frostc$IR$Value* $tmp602 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local4) = $tmp601;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
goto block50;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:118
org$frostlang$frostc$IR$Value* $tmp603 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
org$frostlang$frostc$IR$Value* $tmp604 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp603;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:123
org$frostlang$frostc$IR$Value** $tmp605 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp606 = *$tmp605;
frost$core$Bit $tmp607 = (frost$core$Bit) {$tmp606 == NULL};
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:125
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:127
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:128
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:129
org$frostlang$frostc$Compiler** $tmp609 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp610 = *$tmp609;
frost$core$Bit* $tmp611 = &$tmp610->inFieldCleanup;
frost$core$Bit $tmp612 = *$tmp611;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from FieldLValue.frost:129:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp613 = $tmp612.value;
bool $tmp614 = !$tmp613;
frost$core$Bit $tmp615 = (frost$core$Bit) {$tmp614};
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block6; else goto block5;
block6:;
org$frostlang$frostc$FieldDecl** $tmp617 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp618 = *$tmp617;
org$frostlang$frostc$Annotations** $tmp619 = &$tmp618->annotations;
org$frostlang$frostc$Annotations* $tmp620 = *$tmp619;
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from FieldLValue.frost:129:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:154
frost$core$Int* $tmp621 = &$tmp620->flags;
frost$core$Int $tmp622 = *$tmp621;
frost$core$Int $tmp623 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:154:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp624 = $tmp622.value;
int64_t $tmp625 = $tmp623.value;
int64_t $tmp626 = $tmp624 & $tmp625;
frost$core$Int $tmp627 = (frost$core$Int) {$tmp626};
frost$core$Int $tmp628 = (frost$core$Int) {0u};
int64_t $tmp629 = $tmp627.value;
int64_t $tmp630 = $tmp628.value;
bool $tmp631 = $tmp629 != $tmp630;
frost$core$Bit $tmp632 = (frost$core$Bit) {$tmp631};
bool $tmp633 = $tmp632.value;
if ($tmp633) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:130
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp634 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp634);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
frost$collections$Array* $tmp635 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
*(&local2) = $tmp634;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:131
frost$collections$Array* $tmp636 = *(&local2);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp637 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp638 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp639 = &param0->position;
org$frostlang$frostc$Position $tmp640 = *$tmp639;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp637, $tmp638, $tmp640, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp636, ((frost$core$Object*) $tmp637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:132
org$frostlang$frostc$Compiler** $tmp641 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp642 = *$tmp641;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp643 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp644 = (frost$core$Int) {9u};
org$frostlang$frostc$Position* $tmp645 = &param0->position;
org$frostlang$frostc$Position $tmp646 = *$tmp645;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp647 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp648 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp649 = &param0->position;
org$frostlang$frostc$Position $tmp650 = *$tmp649;
org$frostlang$frostc$Compiler** $tmp651 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp652 = *$tmp651;
org$frostlang$frostc$Compiler** $tmp653 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp654 = *$tmp653;
org$frostlang$frostc$Type** $tmp655 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp656 = *$tmp655;
org$frostlang$frostc$Type* $tmp657 = org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp654, $tmp656);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from FieldLValue.frost:133:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3712
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp658 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp659 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3712:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp660 = &$tmp652->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp661 = *$tmp660;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp662 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp663 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp662, $tmp663);
frost$collections$Array$add$frost$collections$Array$T($tmp662, ((frost$core$Object*) $tmp657));
org$frostlang$frostc$Type* $tmp664 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp661, ((frost$collections$ListView*) $tmp662));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp658, $tmp659, $tmp657, $tmp664);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp647, $tmp648, $tmp650, $tmp658);
frost$collections$Array* $tmp665 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp666 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp665);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp643, $tmp644, $tmp646, $tmp647, $tmp666);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from FieldLValue.frost:132:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5139
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp667 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp668 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp667, $tmp668);
org$frostlang$frostc$IR$Value* $tmp669 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp642, $tmp643, $tmp667);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
frost$core$Bit $tmp670 = (frost$core$Bit) {$tmp669 != NULL};
bool $tmp671 = $tmp670.value;
if ($tmp671) goto block13; else goto block14;
block14:;
frost$core$Int $tmp672 = (frost$core$Int) {132u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s673, $tmp672, &$s674);
abort(); // unreachable
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
org$frostlang$frostc$IR$Value* $tmp675 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local1) = $tmp669;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
frost$collections$Array* $tmp676 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
*(&local2) = ((frost$collections$Array*) NULL);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:138
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$IR$Value* $tmp677 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
*(&local1) = param1;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:140
org$frostlang$frostc$Type** $tmp678 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp679 = *$tmp678;
org$frostlang$frostc$Type** $tmp680 = &param0->rawType;
org$frostlang$frostc$Type* $tmp681 = *$tmp680;
ITable* $tmp682 = ((frost$core$Equatable*) $tmp679)->$class->itable;
while ($tmp682->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp682 = $tmp682->next;
}
$fn684 $tmp683 = $tmp682->methods[1];
frost$core$Bit $tmp685 = $tmp683(((frost$core$Equatable*) $tmp679), ((frost$core$Equatable*) $tmp681));
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block15; else goto block17;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:141
org$frostlang$frostc$Compiler** $tmp687 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp688 = *$tmp687;
org$frostlang$frostc$Position* $tmp689 = &param0->position;
org$frostlang$frostc$Position $tmp690 = *$tmp689;
org$frostlang$frostc$IR$Value* $tmp691 = *(&local1);
org$frostlang$frostc$Type** $tmp692 = &param0->rawType;
org$frostlang$frostc$Type* $tmp693 = *$tmp692;
org$frostlang$frostc$IR$Value* $tmp694 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp688, $tmp690, $tmp691, $tmp693);
frost$core$Bit $tmp695 = (frost$core$Bit) {$tmp694 != NULL};
bool $tmp696 = $tmp695.value;
if ($tmp696) goto block18; else goto block19;
block19:;
frost$core$Int $tmp697 = (frost$core$Int) {141u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s698, $tmp697, &$s699);
abort(); // unreachable
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
org$frostlang$frostc$IR$Value* $tmp700 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
*(&local0) = $tmp694;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:142
org$frostlang$frostc$IR$Value* $tmp701 = *(&local0);
frost$core$Bit $tmp702 = (frost$core$Bit) {false};
bool $tmp703 = $tmp702.value;
if ($tmp703) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:143
org$frostlang$frostc$IR$Value* $tmp704 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp705 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block21:;
goto block16;
block17:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:147
org$frostlang$frostc$IR$Value* $tmp706 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
org$frostlang$frostc$IR$Value* $tmp707 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
*(&local0) = $tmp706;
goto block16;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:149
org$frostlang$frostc$FieldDecl** $tmp708 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp709 = *$tmp708;
org$frostlang$frostc$FieldDecl$Kind* $tmp710 = &$tmp709->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp711 = *$tmp710;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp712;
$tmp712 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp712->value = $tmp711;
frost$core$Int $tmp713 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:149:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp714 = &(&local4)->$rawValue;
*$tmp714 = $tmp713;
org$frostlang$frostc$FieldDecl$Kind $tmp715 = *(&local4);
*(&local3) = $tmp715;
org$frostlang$frostc$FieldDecl$Kind $tmp716 = *(&local3);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp717;
$tmp717 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp717->value = $tmp716;
ITable* $tmp718 = ((frost$core$Equatable*) $tmp712)->$class->itable;
while ($tmp718->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp718 = $tmp718->next;
}
$fn720 $tmp719 = $tmp718->methods[0];
frost$core$Bit $tmp721 = $tmp719(((frost$core$Equatable*) $tmp712), ((frost$core$Equatable*) $tmp717));
bool $tmp722 = $tmp721.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp717)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp712)));
if ($tmp722) goto block22; else goto block24;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:150
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp723 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp723);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
frost$collections$Array* $tmp724 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local5) = $tmp723;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:151
frost$collections$Array* $tmp725 = *(&local5);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp726 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp727 = (frost$core$Int) {26u};
org$frostlang$frostc$Position* $tmp728 = &param0->position;
org$frostlang$frostc$Position $tmp729 = *$tmp728;
org$frostlang$frostc$IR$Value* $tmp730 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp726, $tmp727, $tmp729, $tmp730);
frost$collections$Array$add$frost$collections$Array$T($tmp725, ((frost$core$Object*) $tmp726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:152
org$frostlang$frostc$Compiler** $tmp731 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp732 = *$tmp731;
org$frostlang$frostc$Position* $tmp733 = &param0->position;
org$frostlang$frostc$Position $tmp734 = *$tmp733;
org$frostlang$frostc$IR$Value** $tmp735 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp736 = *$tmp735;
frost$core$Bit $tmp737 = (frost$core$Bit) {$tmp736 != NULL};
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block26; else goto block27;
block27:;
frost$core$Int $tmp739 = (frost$core$Int) {152u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s740, $tmp739, &$s741);
abort(); // unreachable
block26:;
org$frostlang$frostc$FieldDecl** $tmp742 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp743 = *$tmp742;
frost$core$String** $tmp744 = &((org$frostlang$frostc$Symbol*) $tmp743)->name;
frost$core$String* $tmp745 = *$tmp744;
frost$core$String* $tmp746 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s747, $tmp745);
frost$core$String* $tmp748 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp746, &$s749);
frost$collections$Array* $tmp750 = *(&local5);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp751 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp752 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp753 = &param0->rawType;
org$frostlang$frostc$Type* $tmp754 = *$tmp753;
frost$core$Bit $tmp755 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp751, $tmp752, $tmp754, $tmp755);
org$frostlang$frostc$IR$Value* $tmp756 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp732, $tmp734, $tmp736, $tmp748, ((frost$collections$ListView*) $tmp750), $tmp751);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$collections$Array* $tmp757 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
*(&local5) = ((frost$collections$Array*) NULL);
goto block23;
block24:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:156
org$frostlang$frostc$Compiler** $tmp758 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp759 = *$tmp758;
org$frostlang$frostc$Type** $tmp760 = &param0->rawType;
org$frostlang$frostc$Type* $tmp761 = *$tmp760;
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from FieldLValue.frost:156:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:661
frost$core$Bit $tmp762 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp761);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:661:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp763 = $tmp762.value;
bool $tmp764 = !$tmp763;
frost$core$Bit $tmp765 = (frost$core$Bit) {$tmp764};
bool $tmp766 = $tmp765.value;
if ($tmp766) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:662
frost$core$Bit $tmp767 = (frost$core$Bit) {false};
*(&local6) = $tmp767;
goto block31;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:664
frost$core$Bit $tmp768 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit($tmp759, $tmp761);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:664:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp769 = $tmp768.value;
bool $tmp770 = !$tmp769;
frost$core$Bit $tmp771 = (frost$core$Bit) {$tmp770};
*(&local6) = $tmp771;
goto block31;
block31:;
frost$core$Bit $tmp772 = *(&local6);
bool $tmp773 = $tmp772.value;
if ($tmp773) goto block30; else goto block29;
block30:;
org$frostlang$frostc$FieldDecl** $tmp774 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp775 = *$tmp774;
frost$core$Weak** $tmp776 = &$tmp775->owner;
frost$core$Weak* $tmp777 = *$tmp776;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:156:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp778 = &$tmp777->_valid;
frost$core$Bit $tmp779 = *$tmp778;
bool $tmp780 = $tmp779.value;
if ($tmp780) goto block38; else goto block39;
block39:;
frost$core$Int $tmp781 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s782, $tmp781);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp783 = &$tmp777->value;
frost$core$Object* $tmp784 = *$tmp783;
frost$core$Frost$ref$frost$core$Object$Q($tmp784);
frost$core$String** $tmp785 = &((org$frostlang$frostc$ClassDecl*) $tmp784)->name;
frost$core$String* $tmp786 = *$tmp785;
ITable* $tmp788 = ((frost$core$Equatable*) $tmp786)->$class->itable;
while ($tmp788->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp788 = $tmp788->next;
}
$fn790 $tmp789 = $tmp788->methods[1];
frost$core$Bit $tmp791 = $tmp789(((frost$core$Equatable*) $tmp786), ((frost$core$Equatable*) &$s787));
bool $tmp792 = $tmp791.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp784);
if ($tmp792) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:157
org$frostlang$frostc$Compiler** $tmp793 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp794 = *$tmp793;
org$frostlang$frostc$IR$Value* $tmp795 = *(&local1);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp794, $tmp795);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:158
$fn797 $tmp796 = ($fn797) param0->$class->vtable[5];
$tmp796(param0);
goto block29;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:160
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp798 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp799 = (frost$core$Int) {7u};
org$frostlang$frostc$Compiler** $tmp800 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp801 = *$tmp800;
org$frostlang$frostc$IR** $tmp802 = &$tmp801->ir;
org$frostlang$frostc$IR* $tmp803 = *$tmp802;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp804 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp805 = (frost$core$Int) {11u};
org$frostlang$frostc$Position* $tmp806 = &param0->position;
org$frostlang$frostc$Position $tmp807 = *$tmp806;
org$frostlang$frostc$IR$Value** $tmp808 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp809 = *$tmp808;
frost$core$Bit $tmp810 = (frost$core$Bit) {$tmp809 != NULL};
bool $tmp811 = $tmp810.value;
if ($tmp811) goto block40; else goto block41;
block41:;
frost$core$Int $tmp812 = (frost$core$Int) {161u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s813, $tmp812, &$s814);
abort(); // unreachable
block40:;
org$frostlang$frostc$FieldDecl** $tmp815 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp816 = *$tmp815;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp804, $tmp805, $tmp807, $tmp809, $tmp816);
$fn818 $tmp817 = ($fn818) $tmp803->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp819 = $tmp817($tmp803, $tmp804);
org$frostlang$frostc$Type** $tmp820 = &param0->rawType;
org$frostlang$frostc$Type* $tmp821 = *$tmp820;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp798, $tmp799, $tmp819, $tmp821);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
org$frostlang$frostc$IR$Value* $tmp822 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
*(&local7) = $tmp798;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:162
org$frostlang$frostc$Compiler** $tmp823 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp824 = *$tmp823;
org$frostlang$frostc$IR** $tmp825 = &$tmp824->ir;
org$frostlang$frostc$IR* $tmp826 = *$tmp825;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp827 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp828 = (frost$core$Int) {27u};
org$frostlang$frostc$Position* $tmp829 = &param0->position;
org$frostlang$frostc$Position $tmp830 = *$tmp829;
org$frostlang$frostc$IR$Value* $tmp831 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp832 = *(&local7);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp827, $tmp828, $tmp830, $tmp831, $tmp832);
$fn834 $tmp833 = ($fn834) $tmp826->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp835 = $tmp833($tmp826, $tmp827);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
org$frostlang$frostc$IR$Value* $tmp836 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block23;
block23:;
org$frostlang$frostc$IR$Value* $tmp837 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp838 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$lvalue$FieldLValue$compileUnref(org$frostlang$frostc$lvalue$FieldLValue* param0) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$FieldDecl$Kind local1;
org$frostlang$frostc$FieldDecl$Kind local2;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$IR$Statement$ID local4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:167
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:168
org$frostlang$frostc$FieldDecl** $tmp839 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp840 = *$tmp839;
org$frostlang$frostc$FieldDecl$Kind* $tmp841 = &$tmp840->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp842 = *$tmp841;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp843;
$tmp843 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp843->value = $tmp842;
frost$core$Int $tmp844 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from FieldLValue.frost:168:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp845 = &(&local2)->$rawValue;
*$tmp845 = $tmp844;
org$frostlang$frostc$FieldDecl$Kind $tmp846 = *(&local2);
*(&local1) = $tmp846;
org$frostlang$frostc$FieldDecl$Kind $tmp847 = *(&local1);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp848;
$tmp848 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp848->value = $tmp847;
ITable* $tmp849 = ((frost$core$Equatable*) $tmp843)->$class->itable;
while ($tmp849->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp849 = $tmp849->next;
}
$fn851 $tmp850 = $tmp849->methods[0];
frost$core$Bit $tmp852 = $tmp850(((frost$core$Equatable*) $tmp843), ((frost$core$Equatable*) $tmp848));
bool $tmp853 = $tmp852.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp848)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp843)));
if ($tmp853) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:169
org$frostlang$frostc$IR$Value* $tmp854 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:171
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:172
org$frostlang$frostc$Compiler** $tmp855 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp856 = *$tmp855;
org$frostlang$frostc$FieldDecl** $tmp857 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp858 = *$tmp857;
frost$core$Weak** $tmp859 = &$tmp858->owner;
frost$core$Weak* $tmp860 = *$tmp859;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from FieldLValue.frost:172:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp861 = &$tmp860->_valid;
frost$core$Bit $tmp862 = *$tmp861;
bool $tmp863 = $tmp862.value;
if ($tmp863) goto block9; else goto block10;
block10:;
frost$core$Int $tmp864 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s865, $tmp864);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp866 = &$tmp860->value;
frost$core$Object* $tmp867 = *$tmp866;
frost$core$Frost$ref$frost$core$Object$Q($tmp867);
frost$core$Bit $tmp868 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit($tmp856, ((org$frostlang$frostc$ClassDecl*) $tmp867));
bool $tmp869 = $tmp868.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp867);
if ($tmp869) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:173
org$frostlang$frostc$Compiler** $tmp870 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp871 = *$tmp870;
org$frostlang$frostc$IR** $tmp872 = &$tmp871->ir;
org$frostlang$frostc$IR* $tmp873 = *$tmp872;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp874 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp875 = (frost$core$Int) {10u};
org$frostlang$frostc$Position* $tmp876 = &param0->position;
org$frostlang$frostc$Position $tmp877 = *$tmp876;
org$frostlang$frostc$IR$Value** $tmp878 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp879 = *$tmp878;
frost$core$Bit $tmp880 = (frost$core$Bit) {$tmp879 != NULL};
bool $tmp881 = $tmp880.value;
if ($tmp881) goto block11; else goto block12;
block12:;
frost$core$Int $tmp882 = (frost$core$Int) {173u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s883, $tmp882, &$s884);
abort(); // unreachable
block11:;
org$frostlang$frostc$FieldDecl** $tmp885 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp886 = *$tmp885;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp874, $tmp875, $tmp877, $tmp879, $tmp886);
$fn888 $tmp887 = ($fn888) $tmp873->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp889 = $tmp887($tmp873, $tmp874);
*(&local3) = $tmp889;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:176
org$frostlang$frostc$Compiler** $tmp890 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp891 = *$tmp890;
org$frostlang$frostc$IR** $tmp892 = &$tmp891->ir;
org$frostlang$frostc$IR* $tmp893 = *$tmp892;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp894 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp895 = (frost$core$Int) {11u};
org$frostlang$frostc$Position* $tmp896 = &param0->position;
org$frostlang$frostc$Position $tmp897 = *$tmp896;
org$frostlang$frostc$IR$Value** $tmp898 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp899 = *$tmp898;
frost$core$Bit $tmp900 = (frost$core$Bit) {$tmp899 != NULL};
bool $tmp901 = $tmp900.value;
if ($tmp901) goto block13; else goto block14;
block14:;
frost$core$Int $tmp902 = (frost$core$Int) {176u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s903, $tmp902, &$s904);
abort(); // unreachable
block13:;
org$frostlang$frostc$FieldDecl** $tmp905 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp906 = *$tmp905;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp894, $tmp895, $tmp897, $tmp899, $tmp906);
$fn908 $tmp907 = ($fn908) $tmp893->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp909 = $tmp907($tmp893, $tmp894);
*(&local4) = $tmp909;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:177
org$frostlang$frostc$Compiler** $tmp910 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp911 = *$tmp910;
org$frostlang$frostc$IR** $tmp912 = &$tmp911->ir;
org$frostlang$frostc$IR* $tmp913 = *$tmp912;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp914 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp915 = (frost$core$Int) {14u};
org$frostlang$frostc$Position* $tmp916 = &param0->position;
org$frostlang$frostc$Position $tmp917 = *$tmp916;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp918 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp919 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp920 = *(&local4);
org$frostlang$frostc$Type** $tmp921 = &param0->rawType;
org$frostlang$frostc$Type* $tmp922 = *$tmp921;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp918, $tmp919, $tmp920, $tmp922);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp914, $tmp915, $tmp917, $tmp918);
$fn924 $tmp923 = ($fn924) $tmp913->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp925 = $tmp923($tmp913, $tmp914);
*(&local3) = $tmp925;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:179
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp926 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp927 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp928 = *(&local3);
org$frostlang$frostc$Type** $tmp929 = &param0->rawType;
org$frostlang$frostc$Type* $tmp930 = *$tmp929;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp926, $tmp927, $tmp928, $tmp930);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
org$frostlang$frostc$IR$Value* $tmp931 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
*(&local0) = $tmp926;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:180
org$frostlang$frostc$Compiler** $tmp932 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp933 = *$tmp932;
org$frostlang$frostc$IR$Value* $tmp934 = *(&local0);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value($tmp933, $tmp934);
org$frostlang$frostc$IR$Value* $tmp935 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$lvalue$FieldLValue$cleanup(org$frostlang$frostc$lvalue$FieldLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/FieldLValue.frost:15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp936 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp937 = *$tmp936;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
org$frostlang$frostc$IR$Value** $tmp938 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp939 = *$tmp938;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
org$frostlang$frostc$FieldDecl** $tmp940 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp941 = *$tmp940;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
org$frostlang$frostc$Type** $tmp942 = &param0->rawType;
org$frostlang$frostc$Type* $tmp943 = *$tmp942;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
org$frostlang$frostc$Type** $tmp944 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp945 = *$tmp944;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
return;

}

