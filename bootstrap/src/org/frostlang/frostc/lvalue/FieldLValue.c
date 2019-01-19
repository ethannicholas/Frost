#include "org/frostlang/frostc/lvalue/FieldLValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/FieldDecl/Kind.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Array.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$FieldLValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$FieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$FieldLValue$compileStore$org$frostlang$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$FieldLValue$class_type org$frostlang$frostc$lvalue$FieldLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$FieldLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$lvalue$FieldLValue$cleanup, org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$FieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$FieldLValue$compileStore$org$frostlang$frostc$IR$Value, org$frostlang$frostc$lvalue$FieldLValue$compileUnref} };

typedef frost$core$Bit (*$fn14)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn30)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn114)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn168)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn195)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef frost$core$Bit (*$fn220)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn281)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn301)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn317)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn358)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn362)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn437)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn471)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn524)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn532)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn553)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn569)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn584)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn615)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn635)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn651)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 39, -7329818318767612820, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f", 4, 211223516, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s276 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s492 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x74\x5f", 4, 223587128, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s610 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s611 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s630 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s631 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };

void org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$lvalue$FieldLValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$FieldDecl* param4) {

frost$core$Bit local0;
frost$core$Bit local1;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$Bit local3;
// line 29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 30
org$frostlang$frostc$Position* $tmp5 = &param0->position;
*$tmp5 = param2;
// line 31
org$frostlang$frostc$Compiler$Resolution* $tmp6 = &param4->resolved;
org$frostlang$frostc$Compiler$Resolution $tmp7 = *$tmp6;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp8;
$tmp8 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp8->value = $tmp7;
frost$core$Int64 $tmp9 = (frost$core$Int64) {2};
org$frostlang$frostc$Compiler$Resolution $tmp10 = org$frostlang$frostc$Compiler$Resolution$init$frost$core$Int64($tmp9);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp11;
$tmp11 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp11->value = $tmp10;
ITable* $tmp12 = ((frost$core$Equatable*) $tmp8)->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
frost$core$Bit $tmp15 = $tmp13(((frost$core$Equatable*) $tmp8), ((frost$core$Equatable*) $tmp11));
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp17 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s18, $tmp17);
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp11)));
// unreffing REF($19:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp8)));
// unreffing REF($15:frost.core.Equatable<org.frostlang.frostc.Compiler.Resolution>)
// line 32
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FieldDecl** $tmp19 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp20 = *$tmp19;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
org$frostlang$frostc$FieldDecl** $tmp21 = &param0->field;
*$tmp21 = param4;
// line 33
frost$core$Bit $tmp22 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block5; else goto block6;
block5:;
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp26 = (frost$core$Int64) {33};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s27, $tmp26, &$s28);
abort(); // unreachable
block8:;
$fn30 $tmp29 = ($fn30) param3->$class->vtable[2];
org$frostlang$frostc$Type* $tmp31 = $tmp29(param3);
frost$core$Bit $tmp32 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp31);
frost$core$Bit $tmp33 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
// unreffing REF($56:org.frostlang.frostc.Type)
*(&local0) = $tmp33;
goto block7;
block6:;
*(&local0) = $tmp22;
goto block7;
block7:;
frost$core$Bit $tmp34 = *(&local0);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block3; else goto block10;
block3:;
// line 34
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp36 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp37 = *$tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
org$frostlang$frostc$IR$Value** $tmp38 = &param0->target;
*$tmp38 = param3;
goto block4;
block10:;
// line 36
org$frostlang$frostc$Annotations** $tmp39 = &param4->annotations;
org$frostlang$frostc$Annotations* $tmp40 = *$tmp39;
frost$core$Bit $tmp41 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp40);
frost$core$Bit $tmp42 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp41);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block11; else goto block12;
block11:;
// line 37
frost$core$Weak** $tmp44 = &param4->owner;
frost$core$Weak* $tmp45 = *$tmp44;
frost$core$Object* $tmp46 = frost$core$Weak$get$R$frost$core$Weak$T($tmp45);
org$frostlang$frostc$Annotations** $tmp47 = &((org$frostlang$frostc$ClassDecl*) $tmp46)->annotations;
org$frostlang$frostc$Annotations* $tmp48 = *$tmp47;
frost$core$Bit $tmp49 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit($tmp48);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block15; else goto block16;
block15:;
frost$core$Bit* $tmp51 = &param1->reportErrors;
frost$core$Bit $tmp52 = *$tmp51;
frost$core$Bit $tmp53 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp52);
*(&local1) = $tmp53;
goto block17;
block16:;
*(&local1) = $tmp49;
goto block17;
block17:;
frost$core$Bit $tmp54 = *(&local1);
bool $tmp55 = $tmp54.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp46);
// unreffing REF($90:frost.core.Weak.T)
if ($tmp55) goto block13; else goto block18;
block13:;
// line 39
org$frostlang$frostc$IR$Value* $tmp56 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp57 = (frost$core$Int64) {7};
frost$core$Int64 $tmp58 = (frost$core$Int64) {18446744073709551615};
org$frostlang$frostc$IR$Statement$ID $tmp59 = org$frostlang$frostc$IR$Statement$ID$init$frost$core$Int64($tmp58);
frost$core$Weak** $tmp60 = &param4->owner;
frost$core$Weak* $tmp61 = *$tmp60;
frost$core$Object* $tmp62 = frost$core$Weak$get$R$frost$core$Weak$T($tmp61);
org$frostlang$frostc$Type** $tmp63 = &((org$frostlang$frostc$ClassDecl*) $tmp62)->type;
org$frostlang$frostc$Type* $tmp64 = *$tmp63;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp56, $tmp57, $tmp59, $tmp64);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
org$frostlang$frostc$IR$Value** $tmp65 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp66 = *$tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
org$frostlang$frostc$IR$Value** $tmp67 = &param0->target;
*$tmp67 = $tmp56;
frost$core$Frost$unref$frost$core$Object$Q($tmp62);
// unreffing REF($118:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
// unreffing REF($111:org.frostlang.frostc.IR.Value)
goto block14;
block18:;
// line 1
// line 42
frost$core$Bit $tmp68 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp69 = org$frostlang$frostc$Compiler$compileSelf$org$frostlang$frostc$Position$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param1, param2, $tmp68);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
org$frostlang$frostc$IR$Value** $tmp70 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp71 = *$tmp70;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
org$frostlang$frostc$IR$Value** $tmp72 = &param0->target;
*$tmp72 = $tmp69;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing REF($142:org.frostlang.frostc.IR.Value?)
goto block14;
block14:;
goto block12;
block12:;
goto block4;
block4:;
// line 45
org$frostlang$frostc$Type** $tmp73 = &param4->type;
org$frostlang$frostc$Type* $tmp74 = *$tmp73;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
org$frostlang$frostc$Type** $tmp75 = &param0->rawType;
org$frostlang$frostc$Type* $tmp76 = *$tmp75;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
org$frostlang$frostc$Type** $tmp77 = &param0->rawType;
*$tmp77 = $tmp74;
// line 46
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
// line 47
frost$core$Bit* $tmp78 = &param1->inFieldCleanup;
frost$core$Bit $tmp79 = *$tmp78;
frost$core$Bit $tmp80 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp79);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block21; else goto block22;
block21:;
org$frostlang$frostc$Annotations** $tmp82 = &param4->annotations;
org$frostlang$frostc$Annotations* $tmp83 = *$tmp82;
frost$core$Bit $tmp84 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit($tmp83);
*(&local3) = $tmp84;
goto block23;
block22:;
*(&local3) = $tmp80;
goto block23;
block23:;
frost$core$Bit $tmp85 = *(&local3);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block19; else goto block24;
block19:;
// line 48
org$frostlang$frostc$Type** $tmp87 = &param0->rawType;
org$frostlang$frostc$Type* $tmp88 = *$tmp87;
org$frostlang$frostc$FixedArray** $tmp89 = &$tmp88->subtypes;
org$frostlang$frostc$FixedArray* $tmp90 = *$tmp89;
frost$core$Bit $tmp91 = frost$core$Bit$init$builtin_bit($tmp90 != NULL);
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp93 = (frost$core$Int64) {48};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s94, $tmp93, &$s95);
abort(); // unreachable
block25:;
frost$core$Int64 $tmp96 = (frost$core$Int64) {1};
frost$core$Object* $tmp97 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp90, $tmp96);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp97)));
org$frostlang$frostc$Type* $tmp98 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp97);
frost$core$Frost$unref$frost$core$Object$Q($tmp97);
// unreffing REF($201:org.frostlang.frostc.FixedArray.T)
goto block20;
block24:;
// line 1
// line 51
org$frostlang$frostc$Type** $tmp99 = &param0->rawType;
org$frostlang$frostc$Type* $tmp100 = *$tmp99;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
org$frostlang$frostc$Type* $tmp101 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
*(&local2) = $tmp100;
goto block20;
block20:;
// line 53
org$frostlang$frostc$IR$Value** $tmp102 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp103 = *$tmp102;
frost$core$Bit $tmp104 = frost$core$Bit$init$builtin_bit($tmp103 != NULL);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block27; else goto block29;
block27:;
// line 54
org$frostlang$frostc$IR$Value** $tmp106 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp107 = *$tmp106;
frost$core$Bit $tmp108 = frost$core$Bit$init$builtin_bit($tmp107 != NULL);
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp110 = (frost$core$Int64) {54};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s111, $tmp110, &$s112);
abort(); // unreachable
block30:;
$fn114 $tmp113 = ($fn114) $tmp107->$class->vtable[2];
org$frostlang$frostc$Type* $tmp115 = $tmp113($tmp107);
frost$core$Weak** $tmp116 = &param4->owner;
frost$core$Weak* $tmp117 = *$tmp116;
frost$core$Object* $tmp118 = frost$core$Weak$get$R$frost$core$Weak$T($tmp117);
org$frostlang$frostc$Type* $tmp119 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param1, $tmp115, ((org$frostlang$frostc$ClassDecl*) $tmp118));
frost$core$Bit $tmp120 = frost$core$Bit$init$builtin_bit($tmp119 != NULL);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp122 = (frost$core$Int64) {54};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s123, $tmp122, &$s124);
abort(); // unreachable
block32:;
org$frostlang$frostc$Type* $tmp125 = *(&local2);
org$frostlang$frostc$Type* $tmp126 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp119, $tmp125);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
org$frostlang$frostc$Type** $tmp127 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp128 = *$tmp127;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
org$frostlang$frostc$Type** $tmp129 = &param0->effectiveType;
*$tmp129 = $tmp126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// unreffing REF($259:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
// unreffing REF($249:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q($tmp118);
// unreffing REF($247:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
// unreffing REF($243:org.frostlang.frostc.Type)
goto block28;
block29:;
// line 1
// line 58
org$frostlang$frostc$Type* $tmp130 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
org$frostlang$frostc$Type** $tmp131 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp132 = *$tmp131;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
org$frostlang$frostc$Type** $tmp133 = &param0->effectiveType;
*$tmp133 = $tmp130;
goto block28;
block28:;
// line 60
org$frostlang$frostc$IR$Value** $tmp134 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp135 = *$tmp134;
frost$core$Bit $tmp136 = frost$core$Bit$init$builtin_bit($tmp135 != NULL);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block34; else goto block35;
block34:;
// line 61
org$frostlang$frostc$IR$Value** $tmp138 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp139 = *$tmp138;
frost$core$Weak** $tmp140 = &param4->owner;
frost$core$Weak* $tmp141 = *$tmp140;
frost$core$Object* $tmp142 = frost$core$Weak$get$R$frost$core$Weak$T($tmp141);
org$frostlang$frostc$Type** $tmp143 = &((org$frostlang$frostc$ClassDecl*) $tmp142)->type;
org$frostlang$frostc$Type* $tmp144 = *$tmp143;
org$frostlang$frostc$IR$Value* $tmp145 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param1, param2, $tmp139, $tmp144);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
org$frostlang$frostc$IR$Value** $tmp146 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp147 = *$tmp146;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
org$frostlang$frostc$IR$Value** $tmp148 = &param0->target;
*$tmp148 = $tmp145;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing REF($310:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp142);
// unreffing REF($306:frost.core.Weak.T)
goto block35;
block35:;
org$frostlang$frostc$Type* $tmp149 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// unreffing base
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$FieldLValue* param0) {

// line 67
org$frostlang$frostc$Type** $tmp150 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp151 = *$tmp150;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
return $tmp151;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$FieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$FieldLValue* param0) {

frost$core$Bit local0;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$IR$Statement$ID local4;
frost$core$Bit local5;
// line 72
org$frostlang$frostc$FieldDecl** $tmp152 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp153 = *$tmp152;
org$frostlang$frostc$Annotations** $tmp154 = &$tmp153->annotations;
org$frostlang$frostc$Annotations* $tmp155 = *$tmp154;
frost$core$Bit $tmp156 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp155);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block3; else goto block4;
block3:;
org$frostlang$frostc$FieldDecl** $tmp158 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp159 = *$tmp158;
org$frostlang$frostc$FieldDecl$Kind* $tmp160 = &$tmp159->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp161 = *$tmp160;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp162;
$tmp162 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp162->value = $tmp161;
frost$core$Int64 $tmp163 = (frost$core$Int64) {2};
org$frostlang$frostc$FieldDecl$Kind $tmp164 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp163);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp165;
$tmp165 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp165->value = $tmp164;
ITable* $tmp166 = ((frost$core$Equatable*) $tmp162)->$class->itable;
while ($tmp166->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[0];
frost$core$Bit $tmp169 = $tmp167(((frost$core$Equatable*) $tmp162), ((frost$core$Equatable*) $tmp165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp165)));
// unreffing REF($16:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp162)));
// unreffing REF($12:frost.core.Equatable<org.frostlang.frostc.FieldDecl.Kind>)
*(&local0) = $tmp169;
goto block5;
block4:;
*(&local0) = $tmp156;
goto block5;
block5:;
frost$core$Bit $tmp170 = *(&local0);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block1; else goto block2;
block1:;
// line 73
org$frostlang$frostc$Compiler** $tmp172 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp173 = *$tmp172;
frost$collections$Stack** $tmp174 = &$tmp173->currentClass;
frost$collections$Stack* $tmp175 = *$tmp174;
org$frostlang$frostc$FieldDecl** $tmp176 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp177 = *$tmp176;
frost$core$Weak** $tmp178 = &$tmp177->owner;
frost$core$Weak* $tmp179 = *$tmp178;
frost$core$Object* $tmp180 = frost$core$Weak$get$R$frost$core$Weak$T($tmp179);
frost$collections$Stack$push$frost$collections$Stack$T($tmp175, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp180)));
frost$core$Frost$unref$frost$core$Object$Q($tmp180);
// unreffing REF($43:frost.core.Weak.T)
// line 74
org$frostlang$frostc$Compiler** $tmp181 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp182 = *$tmp181;
org$frostlang$frostc$FieldDecl** $tmp183 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp184 = *$tmp183;
org$frostlang$frostc$ASTNode** $tmp185 = &$tmp184->rawValue;
org$frostlang$frostc$ASTNode* $tmp186 = *$tmp185;
frost$core$Bit $tmp187 = frost$core$Bit$init$builtin_bit($tmp186 != NULL);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp189 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s190, $tmp189, &$s191);
abort(); // unreachable
block6:;
org$frostlang$frostc$Compiler$TypeContext* $tmp192 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp193 = (frost$core$Int64) {3};
$fn195 $tmp194 = ($fn195) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp196 = $tmp194(param0);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp192, $tmp193, $tmp196);
org$frostlang$frostc$IR$Value* $tmp197 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp182, $tmp186, $tmp192);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
org$frostlang$frostc$IR$Value* $tmp198 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local1) = $tmp197;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
// unreffing REF($70:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// unreffing REF($68:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
// unreffing REF($65:org.frostlang.frostc.Compiler.TypeContext)
// line 75
org$frostlang$frostc$Compiler** $tmp199 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp200 = *$tmp199;
frost$collections$Stack** $tmp201 = &$tmp200->currentClass;
frost$collections$Stack* $tmp202 = *$tmp201;
frost$core$Object* $tmp203 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp202);
frost$core$Frost$unref$frost$core$Object$Q($tmp203);
// unreffing REF($93:frost.collections.Stack.T)
// line 76
org$frostlang$frostc$IR$Value* $tmp204 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
org$frostlang$frostc$IR$Value* $tmp205 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// unreffing result
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp204;
block2:;
// line 78
org$frostlang$frostc$IR$Value** $tmp206 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp207 = *$tmp206;
frost$core$Bit $tmp208 = frost$core$Bit$init$builtin_bit($tmp207 == NULL);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block8; else goto block9;
block8:;
// line 80
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block9:;
// line 82
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 83
org$frostlang$frostc$FieldDecl** $tmp210 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp211 = *$tmp210;
org$frostlang$frostc$FieldDecl$Kind* $tmp212 = &$tmp211->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp213 = *$tmp212;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp214;
$tmp214 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp214->value = $tmp213;
frost$core$Int64 $tmp215 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp216 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp215);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp217;
$tmp217 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp217->value = $tmp216;
ITable* $tmp218 = ((frost$core$Equatable*) $tmp214)->$class->itable;
while ($tmp218->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp218 = $tmp218->next;
}
$fn220 $tmp219 = $tmp218->methods[0];
frost$core$Bit $tmp221 = $tmp219(((frost$core$Equatable*) $tmp214), ((frost$core$Equatable*) $tmp217));
bool $tmp222 = $tmp221.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp217)));
// unreffing REF($130:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp214)));
// unreffing REF($126:frost.core.Equatable<org.frostlang.frostc.FieldDecl.Kind>)
if ($tmp222) goto block10; else goto block12;
block10:;
// line 84
org$frostlang$frostc$Compiler** $tmp223 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp224 = *$tmp223;
org$frostlang$frostc$Position* $tmp225 = &param0->position;
org$frostlang$frostc$Position $tmp226 = *$tmp225;
org$frostlang$frostc$IR$Value** $tmp227 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp228 = *$tmp227;
frost$core$Bit $tmp229 = frost$core$Bit$init$builtin_bit($tmp228 != NULL);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp231 = (frost$core$Int64) {84};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s232, $tmp231, &$s233);
abort(); // unreachable
block13:;
org$frostlang$frostc$FieldDecl** $tmp234 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp235 = *$tmp234;
frost$core$String** $tmp236 = &((org$frostlang$frostc$Symbol*) $tmp235)->name;
frost$core$String* $tmp237 = *$tmp236;
frost$core$String* $tmp238 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s239, $tmp237);
frost$core$String* $tmp240 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp238, &$s241);
frost$collections$Array* $tmp242 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp242);
org$frostlang$frostc$Compiler$TypeContext* $tmp243 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp244 = (frost$core$Int64) {3};
org$frostlang$frostc$Type** $tmp245 = &param0->rawType;
org$frostlang$frostc$Type* $tmp246 = *$tmp245;
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp243, $tmp244, $tmp246);
org$frostlang$frostc$IR$Value* $tmp247 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp224, $tmp226, $tmp228, $tmp240, ((frost$collections$ListView*) $tmp242), $tmp243);
frost$core$Bit $tmp248 = frost$core$Bit$init$builtin_bit($tmp247 != NULL);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp250 = (frost$core$Int64) {84};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s251, $tmp250, &$s252);
abort(); // unreachable
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
org$frostlang$frostc$IR$Value* $tmp253 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
*(&local2) = $tmp247;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// unreffing REF($172:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// unreffing REF($167:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// unreffing REF($163:frost.collections.Array<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing REF($162:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// unreffing REF($161:frost.core.String)
goto block11;
block12:;
// line 1
// line 88
// line 89
org$frostlang$frostc$Compiler** $tmp254 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp255 = *$tmp254;
org$frostlang$frostc$FieldDecl** $tmp256 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp257 = *$tmp256;
frost$core$Weak** $tmp258 = &$tmp257->owner;
frost$core$Weak* $tmp259 = *$tmp258;
frost$core$Object* $tmp260 = frost$core$Weak$get$R$frost$core$Weak$T($tmp259);
frost$core$Bit $tmp261 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit($tmp255, ((org$frostlang$frostc$ClassDecl*) $tmp260));
bool $tmp262 = $tmp261.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp260);
// unreffing REF($213:frost.core.Weak.T)
if ($tmp262) goto block17; else goto block19;
block17:;
// line 90
org$frostlang$frostc$Compiler** $tmp263 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp264 = *$tmp263;
org$frostlang$frostc$IR** $tmp265 = &$tmp264->ir;
org$frostlang$frostc$IR* $tmp266 = *$tmp265;
org$frostlang$frostc$IR$Statement* $tmp267 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp268 = (frost$core$Int64) {9};
org$frostlang$frostc$Position* $tmp269 = &param0->position;
org$frostlang$frostc$Position $tmp270 = *$tmp269;
org$frostlang$frostc$IR$Value** $tmp271 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp272 = *$tmp271;
frost$core$Bit $tmp273 = frost$core$Bit$init$builtin_bit($tmp272 != NULL);
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp275 = (frost$core$Int64) {90};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s276, $tmp275, &$s277);
abort(); // unreachable
block20:;
org$frostlang$frostc$FieldDecl** $tmp278 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp279 = *$tmp278;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp267, $tmp268, $tmp270, $tmp272, $tmp279);
$fn281 $tmp280 = ($fn281) $tmp266->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp282 = $tmp280($tmp266, $tmp267);
*(&local3) = $tmp282;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// unreffing REF($227:org.frostlang.frostc.IR.Statement)
goto block18;
block19:;
// line 1
// line 93
org$frostlang$frostc$Compiler** $tmp283 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp284 = *$tmp283;
org$frostlang$frostc$IR** $tmp285 = &$tmp284->ir;
org$frostlang$frostc$IR* $tmp286 = *$tmp285;
org$frostlang$frostc$IR$Statement* $tmp287 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp288 = (frost$core$Int64) {10};
org$frostlang$frostc$Position* $tmp289 = &param0->position;
org$frostlang$frostc$Position $tmp290 = *$tmp289;
org$frostlang$frostc$IR$Value** $tmp291 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp292 = *$tmp291;
frost$core$Bit $tmp293 = frost$core$Bit$init$builtin_bit($tmp292 != NULL);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp295 = (frost$core$Int64) {93};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s296, $tmp295, &$s297);
abort(); // unreachable
block22:;
org$frostlang$frostc$FieldDecl** $tmp298 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp299 = *$tmp298;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp287, $tmp288, $tmp290, $tmp292, $tmp299);
$fn301 $tmp300 = ($fn301) $tmp286->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp302 = $tmp300($tmp286, $tmp287);
*(&local4) = $tmp302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
// unreffing REF($257:org.frostlang.frostc.IR.Statement)
// line 95
org$frostlang$frostc$Compiler** $tmp303 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp304 = *$tmp303;
org$frostlang$frostc$IR** $tmp305 = &$tmp304->ir;
org$frostlang$frostc$IR* $tmp306 = *$tmp305;
org$frostlang$frostc$IR$Statement* $tmp307 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp308 = (frost$core$Int64) {13};
org$frostlang$frostc$Position* $tmp309 = &param0->position;
org$frostlang$frostc$Position $tmp310 = *$tmp309;
org$frostlang$frostc$IR$Value* $tmp311 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp312 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp313 = *(&local4);
org$frostlang$frostc$Type** $tmp314 = &param0->rawType;
org$frostlang$frostc$Type* $tmp315 = *$tmp314;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp311, $tmp312, $tmp313, $tmp315);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp307, $tmp308, $tmp310, $tmp311);
$fn317 $tmp316 = ($fn317) $tmp306->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp318 = $tmp316($tmp306, $tmp307);
*(&local3) = $tmp318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
// unreffing REF($289:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
// unreffing REF($285:org.frostlang.frostc.IR.Statement)
goto block18;
block18:;
// line 97
org$frostlang$frostc$IR$Value* $tmp319 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp320 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp321 = *(&local3);
org$frostlang$frostc$Type** $tmp322 = &param0->rawType;
org$frostlang$frostc$Type* $tmp323 = *$tmp322;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp319, $tmp320, $tmp321, $tmp323);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
org$frostlang$frostc$IR$Value* $tmp324 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local2) = $tmp319;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
// unreffing REF($307:org.frostlang.frostc.IR.Value)
goto block11;
block11:;
// line 99
org$frostlang$frostc$Compiler** $tmp325 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp326 = *$tmp325;
frost$core$Bit* $tmp327 = &$tmp326->inFieldCleanup;
frost$core$Bit $tmp328 = *$tmp327;
frost$core$Bit $tmp329 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp328);
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block26; else goto block27;
block26:;
org$frostlang$frostc$FieldDecl** $tmp331 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp332 = *$tmp331;
org$frostlang$frostc$Annotations** $tmp333 = &$tmp332->annotations;
org$frostlang$frostc$Annotations* $tmp334 = *$tmp333;
frost$core$Bit $tmp335 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit($tmp334);
*(&local5) = $tmp335;
goto block28;
block27:;
*(&local5) = $tmp329;
goto block28;
block28:;
frost$core$Bit $tmp336 = *(&local5);
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block24; else goto block25;
block24:;
// line 100
org$frostlang$frostc$Compiler** $tmp338 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp339 = *$tmp338;
org$frostlang$frostc$Position* $tmp340 = &param0->position;
org$frostlang$frostc$Position $tmp341 = *$tmp340;
org$frostlang$frostc$IR$Value* $tmp342 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp343 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp343);
org$frostlang$frostc$Compiler$TypeContext* $tmp344 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp345 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp344, $tmp345);
org$frostlang$frostc$IR$Value* $tmp346 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp339, $tmp341, $tmp342, &$s347, ((frost$collections$ListView*) $tmp343), $tmp344);
frost$core$Bit $tmp348 = frost$core$Bit$init$builtin_bit($tmp346 != NULL);
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp350 = (frost$core$Int64) {100};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s351, $tmp350, &$s352);
abort(); // unreachable
block29:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
org$frostlang$frostc$IR$Value* $tmp353 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local2) = $tmp346;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
// unreffing REF($356:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// unreffing REF($353:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
// unreffing REF($349:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
goto block25;
block25:;
// line 103
org$frostlang$frostc$Type** $tmp354 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp355 = *$tmp354;
org$frostlang$frostc$IR$Value* $tmp356 = *(&local2);
$fn358 $tmp357 = ($fn358) $tmp356->$class->vtable[2];
org$frostlang$frostc$Type* $tmp359 = $tmp357($tmp356);
ITable* $tmp360 = ((frost$core$Equatable*) $tmp355)->$class->itable;
while ($tmp360->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp360 = $tmp360->next;
}
$fn362 $tmp361 = $tmp360->methods[1];
frost$core$Bit $tmp363 = $tmp361(((frost$core$Equatable*) $tmp355), ((frost$core$Equatable*) $tmp359));
bool $tmp364 = $tmp363.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
// unreffing REF($388:org.frostlang.frostc.Type)
if ($tmp364) goto block31; else goto block32;
block31:;
// line 104
org$frostlang$frostc$Compiler** $tmp365 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp366 = *$tmp365;
org$frostlang$frostc$Position* $tmp367 = &param0->position;
org$frostlang$frostc$Position $tmp368 = *$tmp367;
org$frostlang$frostc$IR$Value* $tmp369 = *(&local2);
org$frostlang$frostc$Type** $tmp370 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp371 = *$tmp370;
org$frostlang$frostc$IR$Value* $tmp372 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp366, $tmp368, $tmp369, $tmp371);
frost$core$Bit $tmp373 = frost$core$Bit$init$builtin_bit($tmp372 != NULL);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp375 = (frost$core$Int64) {104};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s376, $tmp375, &$s377);
abort(); // unreachable
block33:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
org$frostlang$frostc$IR$Value* $tmp378 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
*(&local2) = $tmp372;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
// unreffing REF($406:org.frostlang.frostc.IR.Value?)
goto block32;
block32:;
// line 106
org$frostlang$frostc$IR$Value* $tmp379 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
org$frostlang$frostc$IR$Value* $tmp380 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
// unreffing result
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp379;

}
void org$frostlang$frostc$lvalue$FieldLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$FieldLValue* param0, org$frostlang$frostc$IR$Value* param1) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
frost$core$Bit local2;
frost$collections$Array* local3 = NULL;
frost$collections$Array* local4 = NULL;
frost$core$Bit local5;
org$frostlang$frostc$IR$Value* local6 = NULL;
// line 111
org$frostlang$frostc$IR$Value** $tmp381 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp382 = *$tmp381;
frost$core$Bit $tmp383 = frost$core$Bit$init$builtin_bit($tmp382 == NULL);
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block1; else goto block2;
block1:;
// line 113
return;
block2:;
// line 115
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 116
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 117
org$frostlang$frostc$Compiler** $tmp385 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp386 = *$tmp385;
frost$core$Bit* $tmp387 = &$tmp386->inFieldCleanup;
frost$core$Bit $tmp388 = *$tmp387;
frost$core$Bit $tmp389 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp388);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block5; else goto block6;
block5:;
org$frostlang$frostc$FieldDecl** $tmp391 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp392 = *$tmp391;
org$frostlang$frostc$Annotations** $tmp393 = &$tmp392->annotations;
org$frostlang$frostc$Annotations* $tmp394 = *$tmp393;
frost$core$Bit $tmp395 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit($tmp394);
*(&local2) = $tmp395;
goto block7;
block6:;
*(&local2) = $tmp389;
goto block7;
block7:;
frost$core$Bit $tmp396 = *(&local2);
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block3; else goto block8;
block3:;
// line 118
frost$collections$Array* $tmp398 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp398);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$collections$Array* $tmp399 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local3) = $tmp398;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
// unreffing REF($34:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 119
frost$collections$Array* $tmp400 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp401 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp402 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp403 = &param0->position;
org$frostlang$frostc$Position $tmp404 = *$tmp403;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp401, $tmp402, $tmp404, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp400, ((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
// unreffing REF($50:org.frostlang.frostc.ASTNode)
// line 120
org$frostlang$frostc$Compiler** $tmp405 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp406 = *$tmp405;
org$frostlang$frostc$ASTNode* $tmp407 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp408 = (frost$core$Int64) {9};
org$frostlang$frostc$Position* $tmp409 = &param0->position;
org$frostlang$frostc$Position $tmp410 = *$tmp409;
org$frostlang$frostc$ASTNode* $tmp411 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp412 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp413 = &param0->position;
org$frostlang$frostc$Position $tmp414 = *$tmp413;
org$frostlang$frostc$IR$Value* $tmp415 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp416 = (frost$core$Int64) {14};
org$frostlang$frostc$Type** $tmp417 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp418 = *$tmp417;
org$frostlang$frostc$Type* $tmp419 = org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp418);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp415, $tmp416, $tmp419);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp411, $tmp412, $tmp414, $tmp415);
frost$collections$Array* $tmp420 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp421 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp420);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp407, $tmp408, $tmp410, $tmp411, $tmp421);
org$frostlang$frostc$IR$Value* $tmp422 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q($tmp406, $tmp407);
frost$core$Bit $tmp423 = frost$core$Bit$init$builtin_bit($tmp422 != NULL);
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp425 = (frost$core$Int64) {120};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s426, $tmp425, &$s427);
abort(); // unreachable
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
org$frostlang$frostc$IR$Value* $tmp428 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local1) = $tmp422;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
// unreffing REF($83:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
// unreffing REF($80:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
// unreffing REF($75:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
// unreffing REF($71:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// unreffing REF($67:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
// unreffing REF($63:org.frostlang.frostc.ASTNode)
frost$collections$Array* $tmp429 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
// unreffing args
*(&local3) = ((frost$collections$Array*) NULL);
goto block4;
block8:;
// line 1
// line 125
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$IR$Value* $tmp430 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local1) = param1;
goto block4;
block4:;
// line 127
org$frostlang$frostc$Type** $tmp431 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp432 = *$tmp431;
org$frostlang$frostc$Type** $tmp433 = &param0->rawType;
org$frostlang$frostc$Type* $tmp434 = *$tmp433;
ITable* $tmp435 = ((frost$core$Equatable*) $tmp432)->$class->itable;
while ($tmp435->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp435 = $tmp435->next;
}
$fn437 $tmp436 = $tmp435->methods[1];
frost$core$Bit $tmp438 = $tmp436(((frost$core$Equatable*) $tmp432), ((frost$core$Equatable*) $tmp434));
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block11; else goto block13;
block11:;
// line 128
org$frostlang$frostc$Compiler** $tmp440 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp441 = *$tmp440;
org$frostlang$frostc$Position* $tmp442 = &param0->position;
org$frostlang$frostc$Position $tmp443 = *$tmp442;
org$frostlang$frostc$IR$Value* $tmp444 = *(&local1);
org$frostlang$frostc$Type** $tmp445 = &param0->rawType;
org$frostlang$frostc$Type* $tmp446 = *$tmp445;
org$frostlang$frostc$IR$Value* $tmp447 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp441, $tmp443, $tmp444, $tmp446);
frost$core$Bit $tmp448 = frost$core$Bit$init$builtin_bit($tmp447 != NULL);
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp450 = (frost$core$Int64) {128};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s451, $tmp450, &$s452);
abort(); // unreachable
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
org$frostlang$frostc$IR$Value* $tmp453 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
*(&local0) = $tmp447;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
// unreffing REF($152:org.frostlang.frostc.IR.Value?)
// line 129
org$frostlang$frostc$IR$Value* $tmp454 = *(&local0);
frost$core$Bit $tmp455 = frost$core$Bit$init$builtin_bit(false);
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block16; else goto block17;
block16:;
// line 130
org$frostlang$frostc$IR$Value* $tmp457 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
// unreffing value
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp458 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
// unreffing cast
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block17:;
goto block12;
block13:;
// line 1
// line 134
org$frostlang$frostc$IR$Value* $tmp459 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
org$frostlang$frostc$IR$Value* $tmp460 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
*(&local0) = $tmp459;
goto block12;
block12:;
// line 136
org$frostlang$frostc$FieldDecl** $tmp461 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp462 = *$tmp461;
org$frostlang$frostc$FieldDecl$Kind* $tmp463 = &$tmp462->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp464 = *$tmp463;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp465;
$tmp465 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp465->value = $tmp464;
frost$core$Int64 $tmp466 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp467 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp466);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp468;
$tmp468 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp468->value = $tmp467;
ITable* $tmp469 = ((frost$core$Equatable*) $tmp465)->$class->itable;
while ($tmp469->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp469 = $tmp469->next;
}
$fn471 $tmp470 = $tmp469->methods[0];
frost$core$Bit $tmp472 = $tmp470(((frost$core$Equatable*) $tmp465), ((frost$core$Equatable*) $tmp468));
bool $tmp473 = $tmp472.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp468)));
// unreffing REF($207:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp465)));
// unreffing REF($203:frost.core.Equatable<org.frostlang.frostc.FieldDecl.Kind>)
if ($tmp473) goto block18; else goto block20;
block18:;
// line 137
frost$collections$Array* $tmp474 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp474);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$collections$Array* $tmp475 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local4) = $tmp474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
// unreffing REF($219:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 138
frost$collections$Array* $tmp476 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp477 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp478 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp479 = &param0->position;
org$frostlang$frostc$Position $tmp480 = *$tmp479;
org$frostlang$frostc$IR$Value* $tmp481 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp477, $tmp478, $tmp480, $tmp481);
frost$collections$Array$add$frost$collections$Array$T($tmp476, ((frost$core$Object*) $tmp477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
// unreffing REF($235:org.frostlang.frostc.ASTNode)
// line 139
org$frostlang$frostc$Compiler** $tmp482 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp483 = *$tmp482;
org$frostlang$frostc$Position* $tmp484 = &param0->position;
org$frostlang$frostc$Position $tmp485 = *$tmp484;
org$frostlang$frostc$IR$Value** $tmp486 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp487 = *$tmp486;
frost$core$Bit $tmp488 = frost$core$Bit$init$builtin_bit($tmp487 != NULL);
bool $tmp489 = $tmp488.value;
if ($tmp489) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp490 = (frost$core$Int64) {139};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s491, $tmp490, &$s492);
abort(); // unreachable
block21:;
org$frostlang$frostc$FieldDecl** $tmp493 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp494 = *$tmp493;
frost$core$String** $tmp495 = &((org$frostlang$frostc$Symbol*) $tmp494)->name;
frost$core$String* $tmp496 = *$tmp495;
frost$core$String* $tmp497 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s498, $tmp496);
frost$core$String* $tmp499 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp497, &$s500);
frost$collections$Array* $tmp501 = *(&local4);
org$frostlang$frostc$Compiler$TypeContext* $tmp502 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp503 = (frost$core$Int64) {3};
org$frostlang$frostc$Type** $tmp504 = &param0->rawType;
org$frostlang$frostc$Type* $tmp505 = *$tmp504;
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp502, $tmp503, $tmp505);
org$frostlang$frostc$IR$Value* $tmp506 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp483, $tmp485, $tmp487, $tmp499, ((frost$collections$ListView*) $tmp501), $tmp502);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
// unreffing REF($275:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
// unreffing REF($270:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
// unreffing REF($267:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
// unreffing REF($266:frost.core.String)
frost$collections$Array* $tmp507 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
// unreffing args
*(&local4) = ((frost$collections$Array*) NULL);
goto block19;
block20:;
// line 1
// line 143
org$frostlang$frostc$Compiler** $tmp508 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp509 = *$tmp508;
org$frostlang$frostc$Type** $tmp510 = &param0->rawType;
org$frostlang$frostc$Type* $tmp511 = *$tmp510;
frost$core$Bit $tmp512 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit($tmp509, $tmp511);
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block25; else goto block26;
block25:;
org$frostlang$frostc$FieldDecl** $tmp514 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp515 = *$tmp514;
frost$core$Weak** $tmp516 = &$tmp515->owner;
frost$core$Weak* $tmp517 = *$tmp516;
frost$core$Object* $tmp518 = frost$core$Weak$get$R$frost$core$Weak$T($tmp517);
frost$core$String** $tmp519 = &((org$frostlang$frostc$ClassDecl*) $tmp518)->name;
frost$core$String* $tmp520 = *$tmp519;
ITable* $tmp522 = ((frost$core$Equatable*) $tmp520)->$class->itable;
while ($tmp522->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp522 = $tmp522->next;
}
$fn524 $tmp523 = $tmp522->methods[1];
frost$core$Bit $tmp525 = $tmp523(((frost$core$Equatable*) $tmp520), ((frost$core$Equatable*) &$s521));
frost$core$Frost$unref$frost$core$Object$Q($tmp518);
// unreffing REF($308:frost.core.Weak.T)
*(&local5) = $tmp525;
goto block27;
block26:;
*(&local5) = $tmp512;
goto block27;
block27:;
frost$core$Bit $tmp526 = *(&local5);
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block23; else goto block24;
block23:;
// line 144
org$frostlang$frostc$Compiler** $tmp528 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp529 = *$tmp528;
org$frostlang$frostc$IR$Value* $tmp530 = *(&local1);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp529, $tmp530);
// line 145
$fn532 $tmp531 = ($fn532) param0->$class->vtable[5];
$tmp531(param0);
goto block24;
block24:;
// line 147
org$frostlang$frostc$IR$Value* $tmp533 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp534 = (frost$core$Int64) {7};
org$frostlang$frostc$Compiler** $tmp535 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp536 = *$tmp535;
org$frostlang$frostc$IR** $tmp537 = &$tmp536->ir;
org$frostlang$frostc$IR* $tmp538 = *$tmp537;
org$frostlang$frostc$IR$Statement* $tmp539 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp540 = (frost$core$Int64) {10};
org$frostlang$frostc$Position* $tmp541 = &param0->position;
org$frostlang$frostc$Position $tmp542 = *$tmp541;
org$frostlang$frostc$IR$Value** $tmp543 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp544 = *$tmp543;
frost$core$Bit $tmp545 = frost$core$Bit$init$builtin_bit($tmp544 != NULL);
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp547 = (frost$core$Int64) {148};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s548, $tmp547, &$s549);
abort(); // unreachable
block28:;
org$frostlang$frostc$FieldDecl** $tmp550 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp551 = *$tmp550;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp539, $tmp540, $tmp542, $tmp544, $tmp551);
$fn553 $tmp552 = ($fn553) $tmp538->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp554 = $tmp552($tmp538, $tmp539);
org$frostlang$frostc$Type** $tmp555 = &param0->rawType;
org$frostlang$frostc$Type* $tmp556 = *$tmp555;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp533, $tmp534, $tmp554, $tmp556);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
org$frostlang$frostc$IR$Value* $tmp557 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
*(&local6) = $tmp533;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
// unreffing REF($343:org.frostlang.frostc.IR.Statement)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
// unreffing REF($337:org.frostlang.frostc.IR.Value)
// line 149
org$frostlang$frostc$Compiler** $tmp558 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp559 = *$tmp558;
org$frostlang$frostc$IR** $tmp560 = &$tmp559->ir;
org$frostlang$frostc$IR* $tmp561 = *$tmp560;
org$frostlang$frostc$IR$Statement* $tmp562 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp563 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp564 = &param0->position;
org$frostlang$frostc$Position $tmp565 = *$tmp564;
org$frostlang$frostc$IR$Value* $tmp566 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp567 = *(&local6);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp562, $tmp563, $tmp565, $tmp566, $tmp567);
$fn569 $tmp568 = ($fn569) $tmp561->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp570 = $tmp568($tmp561, $tmp562);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
// unreffing REF($383:org.frostlang.frostc.IR.Statement)
org$frostlang$frostc$IR$Value* $tmp571 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
// unreffing ptr
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block19;
block19:;
org$frostlang$frostc$IR$Value* $tmp572 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
// unreffing value
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp573 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
// unreffing cast
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$lvalue$FieldLValue$compileUnref(org$frostlang$frostc$lvalue$FieldLValue* param0) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$IR$Statement$ID local1;
org$frostlang$frostc$IR$Statement$ID local2;
// line 154
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 155
org$frostlang$frostc$FieldDecl** $tmp574 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp575 = *$tmp574;
org$frostlang$frostc$FieldDecl$Kind* $tmp576 = &$tmp575->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp577 = *$tmp576;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp578;
$tmp578 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp578->value = $tmp577;
frost$core$Int64 $tmp579 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp580 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp579);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp581;
$tmp581 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp581->value = $tmp580;
ITable* $tmp582 = ((frost$core$Equatable*) $tmp578)->$class->itable;
while ($tmp582->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp582 = $tmp582->next;
}
$fn584 $tmp583 = $tmp582->methods[0];
frost$core$Bit $tmp585 = $tmp583(((frost$core$Equatable*) $tmp578), ((frost$core$Equatable*) $tmp581));
bool $tmp586 = $tmp585.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp581)));
// unreffing REF($11:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp578)));
// unreffing REF($7:frost.core.Equatable<org.frostlang.frostc.FieldDecl.Kind>)
if ($tmp586) goto block1; else goto block2;
block1:;
// line 156
org$frostlang$frostc$IR$Value* $tmp587 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
// unreffing result
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// line 158
// line 159
org$frostlang$frostc$Compiler** $tmp588 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp589 = *$tmp588;
org$frostlang$frostc$FieldDecl** $tmp590 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp591 = *$tmp590;
frost$core$Weak** $tmp592 = &$tmp591->owner;
frost$core$Weak* $tmp593 = *$tmp592;
frost$core$Object* $tmp594 = frost$core$Weak$get$R$frost$core$Weak$T($tmp593);
frost$core$Bit $tmp595 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit($tmp589, ((org$frostlang$frostc$ClassDecl*) $tmp594));
bool $tmp596 = $tmp595.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp594);
// unreffing REF($38:frost.core.Weak.T)
if ($tmp596) goto block3; else goto block5;
block3:;
// line 160
org$frostlang$frostc$Compiler** $tmp597 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp598 = *$tmp597;
org$frostlang$frostc$IR** $tmp599 = &$tmp598->ir;
org$frostlang$frostc$IR* $tmp600 = *$tmp599;
org$frostlang$frostc$IR$Statement* $tmp601 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp602 = (frost$core$Int64) {9};
org$frostlang$frostc$Position* $tmp603 = &param0->position;
org$frostlang$frostc$Position $tmp604 = *$tmp603;
org$frostlang$frostc$IR$Value** $tmp605 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp606 = *$tmp605;
frost$core$Bit $tmp607 = frost$core$Bit$init$builtin_bit($tmp606 != NULL);
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp609 = (frost$core$Int64) {160};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s610, $tmp609, &$s611);
abort(); // unreachable
block6:;
org$frostlang$frostc$FieldDecl** $tmp612 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp613 = *$tmp612;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp601, $tmp602, $tmp604, $tmp606, $tmp613);
$fn615 $tmp614 = ($fn615) $tmp600->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp616 = $tmp614($tmp600, $tmp601);
*(&local1) = $tmp616;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
// unreffing REF($52:org.frostlang.frostc.IR.Statement)
goto block4;
block5:;
// line 1
// line 163
org$frostlang$frostc$Compiler** $tmp617 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp618 = *$tmp617;
org$frostlang$frostc$IR** $tmp619 = &$tmp618->ir;
org$frostlang$frostc$IR* $tmp620 = *$tmp619;
org$frostlang$frostc$IR$Statement* $tmp621 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp622 = (frost$core$Int64) {10};
org$frostlang$frostc$Position* $tmp623 = &param0->position;
org$frostlang$frostc$Position $tmp624 = *$tmp623;
org$frostlang$frostc$IR$Value** $tmp625 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp626 = *$tmp625;
frost$core$Bit $tmp627 = frost$core$Bit$init$builtin_bit($tmp626 != NULL);
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp629 = (frost$core$Int64) {163};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s630, $tmp629, &$s631);
abort(); // unreachable
block8:;
org$frostlang$frostc$FieldDecl** $tmp632 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp633 = *$tmp632;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp621, $tmp622, $tmp624, $tmp626, $tmp633);
$fn635 $tmp634 = ($fn635) $tmp620->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp636 = $tmp634($tmp620, $tmp621);
*(&local2) = $tmp636;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
// unreffing REF($82:org.frostlang.frostc.IR.Statement)
// line 164
org$frostlang$frostc$Compiler** $tmp637 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp638 = *$tmp637;
org$frostlang$frostc$IR** $tmp639 = &$tmp638->ir;
org$frostlang$frostc$IR* $tmp640 = *$tmp639;
org$frostlang$frostc$IR$Statement* $tmp641 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp642 = (frost$core$Int64) {13};
org$frostlang$frostc$Position* $tmp643 = &param0->position;
org$frostlang$frostc$Position $tmp644 = *$tmp643;
org$frostlang$frostc$IR$Value* $tmp645 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp646 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp647 = *(&local2);
org$frostlang$frostc$Type** $tmp648 = &param0->rawType;
org$frostlang$frostc$Type* $tmp649 = *$tmp648;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp645, $tmp646, $tmp647, $tmp649);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp641, $tmp642, $tmp644, $tmp645);
$fn651 $tmp650 = ($fn651) $tmp640->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp652 = $tmp650($tmp640, $tmp641);
*(&local1) = $tmp652;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
// unreffing REF($114:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
// unreffing REF($110:org.frostlang.frostc.IR.Statement)
goto block4;
block4:;
// line 166
org$frostlang$frostc$IR$Value* $tmp653 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp654 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp655 = *(&local1);
org$frostlang$frostc$Type** $tmp656 = &param0->rawType;
org$frostlang$frostc$Type* $tmp657 = *$tmp656;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp653, $tmp654, $tmp655, $tmp657);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
org$frostlang$frostc$IR$Value* $tmp658 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
*(&local0) = $tmp653;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
// unreffing REF($132:org.frostlang.frostc.IR.Value)
// line 167
org$frostlang$frostc$Compiler** $tmp659 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp660 = *$tmp659;
org$frostlang$frostc$IR$Value* $tmp661 = *(&local0);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value($tmp660, $tmp661);
org$frostlang$frostc$IR$Value* $tmp662 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// unreffing result
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$lvalue$FieldLValue$cleanup(org$frostlang$frostc$lvalue$FieldLValue* param0) {

// line 15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp663 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp664 = *$tmp663;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
org$frostlang$frostc$IR$Value** $tmp665 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp666 = *$tmp665;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
org$frostlang$frostc$FieldDecl** $tmp667 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp668 = *$tmp667;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
org$frostlang$frostc$Type** $tmp669 = &param0->rawType;
org$frostlang$frostc$Type* $tmp670 = *$tmp669;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
org$frostlang$frostc$Type** $tmp671 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp672 = *$tmp671;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
return;

}

