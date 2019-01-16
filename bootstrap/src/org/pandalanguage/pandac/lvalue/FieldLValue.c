#include "org/pandalanguage/pandac/lvalue/FieldLValue.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/lvalue/LValue.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/core/Equatable.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "panda/collections/Stack.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/expression/Call.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/IR/Statement.h"


struct { panda$core$Class* cl; ITable* next; void* methods[3]; } org$pandalanguage$pandac$lvalue$FieldLValue$_org$pandalanguage$pandac$lvalue$LValue = { (panda$core$Class*) &org$pandalanguage$pandac$lvalue$LValue$class, NULL, { org$pandalanguage$pandac$lvalue$FieldLValue$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$lvalue$FieldLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q, org$pandalanguage$pandac$lvalue$FieldLValue$compileStore$org$pandalanguage$pandac$IR$Value} };

static panda$core$String $s1;
org$pandalanguage$pandac$lvalue$FieldLValue$class_type org$pandalanguage$pandac$lvalue$FieldLValue$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$lvalue$FieldLValue$_org$pandalanguage$pandac$lvalue$LValue, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$lvalue$FieldLValue$cleanup, org$pandalanguage$pandac$lvalue$FieldLValue$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$lvalue$FieldLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q, org$pandalanguage$pandac$lvalue$FieldLValue$compileStore$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$lvalue$FieldLValue$compileUnref} };

typedef panda$core$Bit (*$fn14)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn30)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn114)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn168)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn195)(org$pandalanguage$pandac$lvalue$FieldLValue*);
typedef panda$core$Bit (*$fn220)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn281)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn301)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn317)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn358)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn362)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn437)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn471)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn524)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn532)(org$pandalanguage$pandac$lvalue$FieldLValue*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn553)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn569)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Bit (*$fn584)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn615)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn635)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn651)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 43, 8521868801218413418, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f", 4, 211223516, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x74\x5f", 4, 223587128, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };

void org$pandalanguage$pandac$lvalue$FieldLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$lvalue$FieldLValue* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$FieldDecl* param4) {

panda$core$Bit local0;
panda$core$Bit local1;
org$pandalanguage$pandac$Type* local2 = NULL;
panda$core$Bit local3;
// line 29
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Compiler** $tmp2 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 30
org$pandalanguage$pandac$Position* $tmp5 = &param0->position;
*$tmp5 = param2;
// line 31
org$pandalanguage$pandac$Compiler$Resolution* $tmp6 = &param4->resolved;
org$pandalanguage$pandac$Compiler$Resolution $tmp7 = *$tmp6;
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp8;
$tmp8 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp8->value = $tmp7;
panda$core$Int64 $tmp9 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Compiler$Resolution $tmp10 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp9);
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp11;
$tmp11 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp11->value = $tmp10;
ITable* $tmp12 = ((panda$core$Equatable*) $tmp8)->$class->itable;
while ($tmp12->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
panda$core$Bit $tmp15 = $tmp13(((panda$core$Equatable*) $tmp8), ((panda$core$Equatable*) $tmp11));
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp17 = (panda$core$Int64) {31};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s18, $tmp17);
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp11)));
// unreffing REF($19:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp8)));
// unreffing REF($15:panda.core.Equatable<org.pandalanguage.pandac.Compiler.Resolution>)
// line 32
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FieldDecl** $tmp19 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp20 = *$tmp19;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
org$pandalanguage$pandac$FieldDecl** $tmp21 = &param0->field;
*$tmp21 = param4;
// line 33
panda$core$Bit $tmp22 = panda$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block5; else goto block6;
block5:;
panda$core$Bit $tmp24 = panda$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp26 = (panda$core$Int64) {33};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s27, $tmp26, &$s28);
abort(); // unreachable
block8:;
$fn30 $tmp29 = ($fn30) param3->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp31 = $tmp29(param3);
panda$core$Bit $tmp32 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit($tmp31);
panda$core$Bit $tmp33 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
// unreffing REF($56:org.pandalanguage.pandac.Type)
*(&local0) = $tmp33;
goto block7;
block6:;
*(&local0) = $tmp22;
goto block7;
block7:;
panda$core$Bit $tmp34 = *(&local0);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block3; else goto block10;
block3:;
// line 34
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp36 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp37 = *$tmp36;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
org$pandalanguage$pandac$IR$Value** $tmp38 = &param0->target;
*$tmp38 = param3;
goto block4;
block10:;
// line 36
org$pandalanguage$pandac$Annotations** $tmp39 = &param4->annotations;
org$pandalanguage$pandac$Annotations* $tmp40 = *$tmp39;
panda$core$Bit $tmp41 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp40);
panda$core$Bit $tmp42 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp41);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block11; else goto block12;
block11:;
// line 37
panda$core$Weak** $tmp44 = &param4->owner;
panda$core$Weak* $tmp45 = *$tmp44;
panda$core$Object* $tmp46 = panda$core$Weak$get$R$panda$core$Weak$T($tmp45);
org$pandalanguage$pandac$Annotations** $tmp47 = &((org$pandalanguage$pandac$ClassDecl*) $tmp46)->annotations;
org$pandalanguage$pandac$Annotations* $tmp48 = *$tmp47;
panda$core$Bit $tmp49 = org$pandalanguage$pandac$Annotations$get_isSynthetic$R$panda$core$Bit($tmp48);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block15; else goto block16;
block15:;
panda$core$Bit* $tmp51 = &param1->reportErrors;
panda$core$Bit $tmp52 = *$tmp51;
panda$core$Bit $tmp53 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp52);
*(&local1) = $tmp53;
goto block17;
block16:;
*(&local1) = $tmp49;
goto block17;
block17:;
panda$core$Bit $tmp54 = *(&local1);
bool $tmp55 = $tmp54.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp46);
// unreffing REF($90:panda.core.Weak.T)
if ($tmp55) goto block13; else goto block18;
block13:;
// line 39
org$pandalanguage$pandac$IR$Value* $tmp56 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp57 = (panda$core$Int64) {7};
panda$core$Int64 $tmp58 = (panda$core$Int64) {18446744073709551615};
org$pandalanguage$pandac$IR$Statement$ID $tmp59 = org$pandalanguage$pandac$IR$Statement$ID$init$panda$core$Int64($tmp58);
panda$core$Weak** $tmp60 = &param4->owner;
panda$core$Weak* $tmp61 = *$tmp60;
panda$core$Object* $tmp62 = panda$core$Weak$get$R$panda$core$Weak$T($tmp61);
org$pandalanguage$pandac$Type** $tmp63 = &((org$pandalanguage$pandac$ClassDecl*) $tmp62)->type;
org$pandalanguage$pandac$Type* $tmp64 = *$tmp63;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp56, $tmp57, $tmp59, $tmp64);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
org$pandalanguage$pandac$IR$Value** $tmp65 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp66 = *$tmp65;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
org$pandalanguage$pandac$IR$Value** $tmp67 = &param0->target;
*$tmp67 = $tmp56;
panda$core$Panda$unref$panda$core$Object$Q($tmp62);
// unreffing REF($118:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
// unreffing REF($111:org.pandalanguage.pandac.IR.Value)
goto block14;
block18:;
// line 1
// line 42
panda$core$Bit $tmp68 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$IR$Value* $tmp69 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$Position$panda$core$Bit$R$org$pandalanguage$pandac$IR$Value$Q(param1, param2, $tmp68);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
org$pandalanguage$pandac$IR$Value** $tmp70 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp71 = *$tmp70;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
org$pandalanguage$pandac$IR$Value** $tmp72 = &param0->target;
*$tmp72 = $tmp69;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing REF($142:org.pandalanguage.pandac.IR.Value?)
goto block14;
block14:;
goto block12;
block12:;
goto block4;
block4:;
// line 45
org$pandalanguage$pandac$Type** $tmp73 = &param4->type;
org$pandalanguage$pandac$Type* $tmp74 = *$tmp73;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
org$pandalanguage$pandac$Type** $tmp75 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp76 = *$tmp75;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
org$pandalanguage$pandac$Type** $tmp77 = &param0->rawType;
*$tmp77 = $tmp74;
// line 46
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
// line 47
panda$core$Bit* $tmp78 = &param1->inFieldCleanup;
panda$core$Bit $tmp79 = *$tmp78;
panda$core$Bit $tmp80 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp79);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block21; else goto block22;
block21:;
org$pandalanguage$pandac$Annotations** $tmp82 = &param4->annotations;
org$pandalanguage$pandac$Annotations* $tmp83 = *$tmp82;
panda$core$Bit $tmp84 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit($tmp83);
*(&local3) = $tmp84;
goto block23;
block22:;
*(&local3) = $tmp80;
goto block23;
block23:;
panda$core$Bit $tmp85 = *(&local3);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block19; else goto block24;
block19:;
// line 48
org$pandalanguage$pandac$Type** $tmp87 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp88 = *$tmp87;
org$pandalanguage$pandac$FixedArray** $tmp89 = &$tmp88->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp90 = *$tmp89;
panda$core$Bit $tmp91 = panda$core$Bit$init$builtin_bit($tmp90 != NULL);
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp93 = (panda$core$Int64) {48};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s94, $tmp93, &$s95);
abort(); // unreachable
block25:;
panda$core$Int64 $tmp96 = (panda$core$Int64) {1};
panda$core$Object* $tmp97 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp90, $tmp96);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp97)));
org$pandalanguage$pandac$Type* $tmp98 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp97);
panda$core$Panda$unref$panda$core$Object$Q($tmp97);
// unreffing REF($201:org.pandalanguage.pandac.FixedArray.T)
goto block20;
block24:;
// line 1
// line 51
org$pandalanguage$pandac$Type** $tmp99 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp100 = *$tmp99;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
org$pandalanguage$pandac$Type* $tmp101 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
*(&local2) = $tmp100;
goto block20;
block20:;
// line 53
org$pandalanguage$pandac$IR$Value** $tmp102 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp103 = *$tmp102;
panda$core$Bit $tmp104 = panda$core$Bit$init$builtin_bit($tmp103 != NULL);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block27; else goto block29;
block27:;
// line 54
org$pandalanguage$pandac$IR$Value** $tmp106 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp107 = *$tmp106;
panda$core$Bit $tmp108 = panda$core$Bit$init$builtin_bit($tmp107 != NULL);
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block30; else goto block31;
block31:;
panda$core$Int64 $tmp110 = (panda$core$Int64) {54};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s111, $tmp110, &$s112);
abort(); // unreachable
block30:;
$fn114 $tmp113 = ($fn114) $tmp107->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp115 = $tmp113($tmp107);
panda$core$Weak** $tmp116 = &param4->owner;
panda$core$Weak* $tmp117 = *$tmp116;
panda$core$Object* $tmp118 = panda$core$Weak$get$R$panda$core$Weak$T($tmp117);
org$pandalanguage$pandac$Type* $tmp119 = org$pandalanguage$pandac$Compiler$findType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(param1, $tmp115, ((org$pandalanguage$pandac$ClassDecl*) $tmp118));
panda$core$Bit $tmp120 = panda$core$Bit$init$builtin_bit($tmp119 != NULL);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block32; else goto block33;
block33:;
panda$core$Int64 $tmp122 = (panda$core$Int64) {54};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s123, $tmp122, &$s124);
abort(); // unreachable
block32:;
org$pandalanguage$pandac$Type* $tmp125 = *(&local2);
org$pandalanguage$pandac$Type* $tmp126 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, $tmp119, $tmp125);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
org$pandalanguage$pandac$Type** $tmp127 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp128 = *$tmp127;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
org$pandalanguage$pandac$Type** $tmp129 = &param0->effectiveType;
*$tmp129 = $tmp126;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
// unreffing REF($259:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp119));
// unreffing REF($249:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q($tmp118);
// unreffing REF($247:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
// unreffing REF($243:org.pandalanguage.pandac.Type)
goto block28;
block29:;
// line 1
// line 58
org$pandalanguage$pandac$Type* $tmp130 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
org$pandalanguage$pandac$Type** $tmp131 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp132 = *$tmp131;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
org$pandalanguage$pandac$Type** $tmp133 = &param0->effectiveType;
*$tmp133 = $tmp130;
goto block28;
block28:;
// line 60
org$pandalanguage$pandac$IR$Value** $tmp134 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp135 = *$tmp134;
panda$core$Bit $tmp136 = panda$core$Bit$init$builtin_bit($tmp135 != NULL);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block34; else goto block35;
block34:;
// line 61
org$pandalanguage$pandac$IR$Value** $tmp138 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp139 = *$tmp138;
panda$core$Weak** $tmp140 = &param4->owner;
panda$core$Weak* $tmp141 = *$tmp140;
panda$core$Object* $tmp142 = panda$core$Weak$get$R$panda$core$Weak$T($tmp141);
org$pandalanguage$pandac$Type** $tmp143 = &((org$pandalanguage$pandac$ClassDecl*) $tmp142)->type;
org$pandalanguage$pandac$Type* $tmp144 = *$tmp143;
org$pandalanguage$pandac$IR$Value* $tmp145 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param1, param2, $tmp139, $tmp144);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
org$pandalanguage$pandac$IR$Value** $tmp146 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp147 = *$tmp146;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
org$pandalanguage$pandac$IR$Value** $tmp148 = &param0->target;
*$tmp148 = $tmp145;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
// unreffing REF($310:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q($tmp142);
// unreffing REF($306:panda.core.Weak.T)
goto block35;
block35:;
org$pandalanguage$pandac$Type* $tmp149 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
// unreffing base
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
return;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$lvalue$FieldLValue$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$lvalue$FieldLValue* param0) {

// line 67
org$pandalanguage$pandac$Type** $tmp150 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp151 = *$tmp150;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
return $tmp151;

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$lvalue$FieldLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$lvalue$FieldLValue* param0) {

panda$core$Bit local0;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
org$pandalanguage$pandac$IR$Value* local2 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local3;
org$pandalanguage$pandac$IR$Statement$ID local4;
panda$core$Bit local5;
// line 72
org$pandalanguage$pandac$FieldDecl** $tmp152 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp153 = *$tmp152;
org$pandalanguage$pandac$Annotations** $tmp154 = &$tmp153->annotations;
org$pandalanguage$pandac$Annotations* $tmp155 = *$tmp154;
panda$core$Bit $tmp156 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp155);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block3; else goto block4;
block3:;
org$pandalanguage$pandac$FieldDecl** $tmp158 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp159 = *$tmp158;
org$pandalanguage$pandac$FieldDecl$Kind* $tmp160 = &$tmp159->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp161 = *$tmp160;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp162;
$tmp162 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp162->value = $tmp161;
panda$core$Int64 $tmp163 = (panda$core$Int64) {2};
org$pandalanguage$pandac$FieldDecl$Kind $tmp164 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp163);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp165;
$tmp165 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp165->value = $tmp164;
ITable* $tmp166 = ((panda$core$Equatable*) $tmp162)->$class->itable;
while ($tmp166->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[0];
panda$core$Bit $tmp169 = $tmp167(((panda$core$Equatable*) $tmp162), ((panda$core$Equatable*) $tmp165));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp165)));
// unreffing REF($16:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp162)));
// unreffing REF($12:panda.core.Equatable<org.pandalanguage.pandac.FieldDecl.Kind>)
*(&local0) = $tmp169;
goto block5;
block4:;
*(&local0) = $tmp156;
goto block5;
block5:;
panda$core$Bit $tmp170 = *(&local0);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block1; else goto block2;
block1:;
// line 73
org$pandalanguage$pandac$Compiler** $tmp172 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp173 = *$tmp172;
panda$collections$Stack** $tmp174 = &$tmp173->currentClass;
panda$collections$Stack* $tmp175 = *$tmp174;
org$pandalanguage$pandac$FieldDecl** $tmp176 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp177 = *$tmp176;
panda$core$Weak** $tmp178 = &$tmp177->owner;
panda$core$Weak* $tmp179 = *$tmp178;
panda$core$Object* $tmp180 = panda$core$Weak$get$R$panda$core$Weak$T($tmp179);
panda$collections$Stack$push$panda$collections$Stack$T($tmp175, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp180)));
panda$core$Panda$unref$panda$core$Object$Q($tmp180);
// unreffing REF($43:panda.core.Weak.T)
// line 74
org$pandalanguage$pandac$Compiler** $tmp181 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp182 = *$tmp181;
org$pandalanguage$pandac$FieldDecl** $tmp183 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp184 = *$tmp183;
org$pandalanguage$pandac$ASTNode** $tmp185 = &$tmp184->rawValue;
org$pandalanguage$pandac$ASTNode* $tmp186 = *$tmp185;
panda$core$Bit $tmp187 = panda$core$Bit$init$builtin_bit($tmp186 != NULL);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp189 = (panda$core$Int64) {74};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s190, $tmp189, &$s191);
abort(); // unreachable
block6:;
org$pandalanguage$pandac$Compiler$TypeContext* $tmp192 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp193 = (panda$core$Int64) {3};
$fn195 $tmp194 = ($fn195) param0->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp196 = $tmp194(param0);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp192, $tmp193, $tmp196);
org$pandalanguage$pandac$IR$Value* $tmp197 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp182, $tmp186, $tmp192);
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
org$pandalanguage$pandac$IR$Value* $tmp198 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
*(&local1) = $tmp197;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
// unreffing REF($70:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
// unreffing REF($68:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
// unreffing REF($65:org.pandalanguage.pandac.Compiler.TypeContext)
// line 75
org$pandalanguage$pandac$Compiler** $tmp199 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp200 = *$tmp199;
panda$collections$Stack** $tmp201 = &$tmp200->currentClass;
panda$collections$Stack* $tmp202 = *$tmp201;
panda$core$Object* $tmp203 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp202);
panda$core$Panda$unref$panda$core$Object$Q($tmp203);
// unreffing REF($93:panda.collections.Stack.T)
// line 76
org$pandalanguage$pandac$IR$Value* $tmp204 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
org$pandalanguage$pandac$IR$Value* $tmp205 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
// unreffing result
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp204;
block2:;
// line 78
org$pandalanguage$pandac$IR$Value** $tmp206 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp207 = *$tmp206;
panda$core$Bit $tmp208 = panda$core$Bit$init$builtin_bit($tmp207 == NULL);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block8; else goto block9;
block8:;
// line 80
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block9:;
// line 82
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 83
org$pandalanguage$pandac$FieldDecl** $tmp210 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp211 = *$tmp210;
org$pandalanguage$pandac$FieldDecl$Kind* $tmp212 = &$tmp211->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp213 = *$tmp212;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp214;
$tmp214 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp214->value = $tmp213;
panda$core$Int64 $tmp215 = (panda$core$Int64) {3};
org$pandalanguage$pandac$FieldDecl$Kind $tmp216 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp215);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp217;
$tmp217 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp217->value = $tmp216;
ITable* $tmp218 = ((panda$core$Equatable*) $tmp214)->$class->itable;
while ($tmp218->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp218 = $tmp218->next;
}
$fn220 $tmp219 = $tmp218->methods[0];
panda$core$Bit $tmp221 = $tmp219(((panda$core$Equatable*) $tmp214), ((panda$core$Equatable*) $tmp217));
bool $tmp222 = $tmp221.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp217)));
// unreffing REF($130:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp214)));
// unreffing REF($126:panda.core.Equatable<org.pandalanguage.pandac.FieldDecl.Kind>)
if ($tmp222) goto block10; else goto block12;
block10:;
// line 84
org$pandalanguage$pandac$Compiler** $tmp223 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp224 = *$tmp223;
org$pandalanguage$pandac$Position* $tmp225 = &param0->position;
org$pandalanguage$pandac$Position $tmp226 = *$tmp225;
org$pandalanguage$pandac$IR$Value** $tmp227 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp228 = *$tmp227;
panda$core$Bit $tmp229 = panda$core$Bit$init$builtin_bit($tmp228 != NULL);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp231 = (panda$core$Int64) {84};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s232, $tmp231, &$s233);
abort(); // unreachable
block13:;
org$pandalanguage$pandac$FieldDecl** $tmp234 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp235 = *$tmp234;
panda$core$String** $tmp236 = &((org$pandalanguage$pandac$Symbol*) $tmp235)->name;
panda$core$String* $tmp237 = *$tmp236;
panda$core$String* $tmp238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s239, $tmp237);
panda$core$String* $tmp240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp238, &$s241);
panda$collections$Array* $tmp242 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp242);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp243 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp244 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type** $tmp245 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp246 = *$tmp245;
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp243, $tmp244, $tmp246);
org$pandalanguage$pandac$IR$Value* $tmp247 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp224, $tmp226, $tmp228, $tmp240, ((panda$collections$ListView*) $tmp242), $tmp243);
panda$core$Bit $tmp248 = panda$core$Bit$init$builtin_bit($tmp247 != NULL);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp250 = (panda$core$Int64) {84};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s251, $tmp250, &$s252);
abort(); // unreachable
block15:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
org$pandalanguage$pandac$IR$Value* $tmp253 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
*(&local2) = $tmp247;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
// unreffing REF($172:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
// unreffing REF($167:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
// unreffing REF($163:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
// unreffing REF($162:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
// unreffing REF($161:panda.core.String)
goto block11;
block12:;
// line 1
// line 88
// line 89
org$pandalanguage$pandac$Compiler** $tmp254 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp255 = *$tmp254;
org$pandalanguage$pandac$FieldDecl** $tmp256 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp257 = *$tmp256;
panda$core$Weak** $tmp258 = &$tmp257->owner;
panda$core$Weak* $tmp259 = *$tmp258;
panda$core$Object* $tmp260 = panda$core$Weak$get$R$panda$core$Weak$T($tmp259);
panda$core$Bit $tmp261 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit($tmp255, ((org$pandalanguage$pandac$ClassDecl*) $tmp260));
bool $tmp262 = $tmp261.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp260);
// unreffing REF($213:panda.core.Weak.T)
if ($tmp262) goto block17; else goto block19;
block17:;
// line 90
org$pandalanguage$pandac$Compiler** $tmp263 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp264 = *$tmp263;
org$pandalanguage$pandac$IR** $tmp265 = &$tmp264->ir;
org$pandalanguage$pandac$IR* $tmp266 = *$tmp265;
org$pandalanguage$pandac$IR$Statement* $tmp267 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp268 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Position* $tmp269 = &param0->position;
org$pandalanguage$pandac$Position $tmp270 = *$tmp269;
org$pandalanguage$pandac$IR$Value** $tmp271 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp272 = *$tmp271;
panda$core$Bit $tmp273 = panda$core$Bit$init$builtin_bit($tmp272 != NULL);
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp275 = (panda$core$Int64) {90};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s276, $tmp275, &$s277);
abort(); // unreachable
block20:;
org$pandalanguage$pandac$FieldDecl** $tmp278 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp279 = *$tmp278;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp267, $tmp268, $tmp270, $tmp272, $tmp279);
$fn281 $tmp280 = ($fn281) $tmp266->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp282 = $tmp280($tmp266, $tmp267);
*(&local3) = $tmp282;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
// unreffing REF($227:org.pandalanguage.pandac.IR.Statement)
goto block18;
block19:;
// line 1
// line 93
org$pandalanguage$pandac$Compiler** $tmp283 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp284 = *$tmp283;
org$pandalanguage$pandac$IR** $tmp285 = &$tmp284->ir;
org$pandalanguage$pandac$IR* $tmp286 = *$tmp285;
org$pandalanguage$pandac$IR$Statement* $tmp287 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp288 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Position* $tmp289 = &param0->position;
org$pandalanguage$pandac$Position $tmp290 = *$tmp289;
org$pandalanguage$pandac$IR$Value** $tmp291 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp292 = *$tmp291;
panda$core$Bit $tmp293 = panda$core$Bit$init$builtin_bit($tmp292 != NULL);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp295 = (panda$core$Int64) {93};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s296, $tmp295, &$s297);
abort(); // unreachable
block22:;
org$pandalanguage$pandac$FieldDecl** $tmp298 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp299 = *$tmp298;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp287, $tmp288, $tmp290, $tmp292, $tmp299);
$fn301 $tmp300 = ($fn301) $tmp286->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp302 = $tmp300($tmp286, $tmp287);
*(&local4) = $tmp302;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
// unreffing REF($257:org.pandalanguage.pandac.IR.Statement)
// line 95
org$pandalanguage$pandac$Compiler** $tmp303 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp304 = *$tmp303;
org$pandalanguage$pandac$IR** $tmp305 = &$tmp304->ir;
org$pandalanguage$pandac$IR* $tmp306 = *$tmp305;
org$pandalanguage$pandac$IR$Statement* $tmp307 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp308 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Position* $tmp309 = &param0->position;
org$pandalanguage$pandac$Position $tmp310 = *$tmp309;
org$pandalanguage$pandac$IR$Value* $tmp311 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp312 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp313 = *(&local4);
org$pandalanguage$pandac$Type** $tmp314 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp315 = *$tmp314;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp311, $tmp312, $tmp313, $tmp315);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp307, $tmp308, $tmp310, $tmp311);
$fn317 $tmp316 = ($fn317) $tmp306->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp318 = $tmp316($tmp306, $tmp307);
*(&local3) = $tmp318;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
// unreffing REF($289:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
// unreffing REF($285:org.pandalanguage.pandac.IR.Statement)
goto block18;
block18:;
// line 97
org$pandalanguage$pandac$IR$Value* $tmp319 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp320 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp321 = *(&local3);
org$pandalanguage$pandac$Type** $tmp322 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp323 = *$tmp322;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp319, $tmp320, $tmp321, $tmp323);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp319));
org$pandalanguage$pandac$IR$Value* $tmp324 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
*(&local2) = $tmp319;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp319));
// unreffing REF($307:org.pandalanguage.pandac.IR.Value)
goto block11;
block11:;
// line 99
org$pandalanguage$pandac$Compiler** $tmp325 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp326 = *$tmp325;
panda$core$Bit* $tmp327 = &$tmp326->inFieldCleanup;
panda$core$Bit $tmp328 = *$tmp327;
panda$core$Bit $tmp329 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp328);
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$FieldDecl** $tmp331 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp332 = *$tmp331;
org$pandalanguage$pandac$Annotations** $tmp333 = &$tmp332->annotations;
org$pandalanguage$pandac$Annotations* $tmp334 = *$tmp333;
panda$core$Bit $tmp335 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit($tmp334);
*(&local5) = $tmp335;
goto block28;
block27:;
*(&local5) = $tmp329;
goto block28;
block28:;
panda$core$Bit $tmp336 = *(&local5);
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block24; else goto block25;
block24:;
// line 100
org$pandalanguage$pandac$Compiler** $tmp338 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp339 = *$tmp338;
org$pandalanguage$pandac$Position* $tmp340 = &param0->position;
org$pandalanguage$pandac$Position $tmp341 = *$tmp340;
org$pandalanguage$pandac$IR$Value* $tmp342 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp343 = (org$pandalanguage$pandac$FixedArray*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp343);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp344 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp345 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp344, $tmp345);
org$pandalanguage$pandac$IR$Value* $tmp346 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp339, $tmp341, $tmp342, &$s347, ((panda$collections$ListView*) $tmp343), $tmp344);
panda$core$Bit $tmp348 = panda$core$Bit$init$builtin_bit($tmp346 != NULL);
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block29; else goto block30;
block30:;
panda$core$Int64 $tmp350 = (panda$core$Int64) {100};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s351, $tmp350, &$s352);
abort(); // unreachable
block29:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
org$pandalanguage$pandac$IR$Value* $tmp353 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
*(&local2) = $tmp346;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
// unreffing REF($356:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
// unreffing REF($353:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
// unreffing REF($349:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
goto block25;
block25:;
// line 103
org$pandalanguage$pandac$Type** $tmp354 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp355 = *$tmp354;
org$pandalanguage$pandac$IR$Value* $tmp356 = *(&local2);
$fn358 $tmp357 = ($fn358) $tmp356->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp359 = $tmp357($tmp356);
ITable* $tmp360 = ((panda$core$Equatable*) $tmp355)->$class->itable;
while ($tmp360->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp360 = $tmp360->next;
}
$fn362 $tmp361 = $tmp360->methods[1];
panda$core$Bit $tmp363 = $tmp361(((panda$core$Equatable*) $tmp355), ((panda$core$Equatable*) $tmp359));
bool $tmp364 = $tmp363.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
// unreffing REF($388:org.pandalanguage.pandac.Type)
if ($tmp364) goto block31; else goto block32;
block31:;
// line 104
org$pandalanguage$pandac$Compiler** $tmp365 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp366 = *$tmp365;
org$pandalanguage$pandac$Position* $tmp367 = &param0->position;
org$pandalanguage$pandac$Position $tmp368 = *$tmp367;
org$pandalanguage$pandac$IR$Value* $tmp369 = *(&local2);
org$pandalanguage$pandac$Type** $tmp370 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp371 = *$tmp370;
org$pandalanguage$pandac$IR$Value* $tmp372 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q($tmp366, $tmp368, $tmp369, $tmp371);
panda$core$Bit $tmp373 = panda$core$Bit$init$builtin_bit($tmp372 != NULL);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block33; else goto block34;
block34:;
panda$core$Int64 $tmp375 = (panda$core$Int64) {104};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s376, $tmp375, &$s377);
abort(); // unreachable
block33:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
org$pandalanguage$pandac$IR$Value* $tmp378 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
*(&local2) = $tmp372;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
// unreffing REF($406:org.pandalanguage.pandac.IR.Value?)
goto block32;
block32:;
// line 106
org$pandalanguage$pandac$IR$Value* $tmp379 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp379));
org$pandalanguage$pandac$IR$Value* $tmp380 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
// unreffing result
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp379;

}
void org$pandalanguage$pandac$lvalue$FieldLValue$compileStore$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$lvalue$FieldLValue* param0, org$pandalanguage$pandac$IR$Value* param1) {

org$pandalanguage$pandac$IR$Value* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
panda$core$Bit local2;
panda$collections$Array* local3 = NULL;
panda$collections$Array* local4 = NULL;
panda$core$Bit local5;
org$pandalanguage$pandac$IR$Value* local6 = NULL;
// line 111
org$pandalanguage$pandac$IR$Value** $tmp381 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp382 = *$tmp381;
panda$core$Bit $tmp383 = panda$core$Bit$init$builtin_bit($tmp382 == NULL);
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block1; else goto block2;
block1:;
// line 113
return;
block2:;
// line 115
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 116
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 117
org$pandalanguage$pandac$Compiler** $tmp385 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp386 = *$tmp385;
panda$core$Bit* $tmp387 = &$tmp386->inFieldCleanup;
panda$core$Bit $tmp388 = *$tmp387;
panda$core$Bit $tmp389 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp388);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$FieldDecl** $tmp391 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp392 = *$tmp391;
org$pandalanguage$pandac$Annotations** $tmp393 = &$tmp392->annotations;
org$pandalanguage$pandac$Annotations* $tmp394 = *$tmp393;
panda$core$Bit $tmp395 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit($tmp394);
*(&local2) = $tmp395;
goto block7;
block6:;
*(&local2) = $tmp389;
goto block7;
block7:;
panda$core$Bit $tmp396 = *(&local2);
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block3; else goto block8;
block3:;
// line 118
panda$collections$Array* $tmp398 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp398);
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp398));
panda$collections$Array* $tmp399 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp399));
*(&local3) = $tmp398;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp398));
// unreffing REF($34:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 119
panda$collections$Array* $tmp400 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp401 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp402 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position* $tmp403 = &param0->position;
org$pandalanguage$pandac$Position $tmp404 = *$tmp403;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp401, $tmp402, $tmp404, param1);
panda$collections$Array$add$panda$collections$Array$T($tmp400, ((panda$core$Object*) $tmp401));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
// unreffing REF($50:org.pandalanguage.pandac.ASTNode)
// line 120
org$pandalanguage$pandac$Compiler** $tmp405 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp406 = *$tmp405;
org$pandalanguage$pandac$ASTNode* $tmp407 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp408 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Position* $tmp409 = &param0->position;
org$pandalanguage$pandac$Position $tmp410 = *$tmp409;
org$pandalanguage$pandac$ASTNode* $tmp411 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp412 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position* $tmp413 = &param0->position;
org$pandalanguage$pandac$Position $tmp414 = *$tmp413;
org$pandalanguage$pandac$IR$Value* $tmp415 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp416 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type** $tmp417 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp418 = *$tmp417;
org$pandalanguage$pandac$Type* $tmp419 = org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp418);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp415, $tmp416, $tmp419);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp411, $tmp412, $tmp414, $tmp415);
panda$collections$Array* $tmp420 = *(&local3);
org$pandalanguage$pandac$FixedArray* $tmp421 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp420);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp407, $tmp408, $tmp410, $tmp411, $tmp421);
org$pandalanguage$pandac$IR$Value* $tmp422 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IR$Value$Q($tmp406, $tmp407);
panda$core$Bit $tmp423 = panda$core$Bit$init$builtin_bit($tmp422 != NULL);
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp425 = (panda$core$Int64) {120};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s426, $tmp425, &$s427);
abort(); // unreachable
block9:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp422));
org$pandalanguage$pandac$IR$Value* $tmp428 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
*(&local1) = $tmp422;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp422));
// unreffing REF($83:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp421));
// unreffing REF($80:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp419));
// unreffing REF($75:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp415));
// unreffing REF($71:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
// unreffing REF($67:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
// unreffing REF($63:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp429 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp429));
// unreffing args
*(&local3) = ((panda$collections$Array*) NULL);
goto block4;
block8:;
// line 1
// line 125
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$IR$Value* $tmp430 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp430));
*(&local1) = param1;
goto block4;
block4:;
// line 127
org$pandalanguage$pandac$Type** $tmp431 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp432 = *$tmp431;
org$pandalanguage$pandac$Type** $tmp433 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp434 = *$tmp433;
ITable* $tmp435 = ((panda$core$Equatable*) $tmp432)->$class->itable;
while ($tmp435->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp435 = $tmp435->next;
}
$fn437 $tmp436 = $tmp435->methods[1];
panda$core$Bit $tmp438 = $tmp436(((panda$core$Equatable*) $tmp432), ((panda$core$Equatable*) $tmp434));
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block11; else goto block13;
block11:;
// line 128
org$pandalanguage$pandac$Compiler** $tmp440 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp441 = *$tmp440;
org$pandalanguage$pandac$Position* $tmp442 = &param0->position;
org$pandalanguage$pandac$Position $tmp443 = *$tmp442;
org$pandalanguage$pandac$IR$Value* $tmp444 = *(&local1);
org$pandalanguage$pandac$Type** $tmp445 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp446 = *$tmp445;
org$pandalanguage$pandac$IR$Value* $tmp447 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q($tmp441, $tmp443, $tmp444, $tmp446);
panda$core$Bit $tmp448 = panda$core$Bit$init$builtin_bit($tmp447 != NULL);
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp450 = (panda$core$Int64) {128};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s451, $tmp450, &$s452);
abort(); // unreachable
block14:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp447));
org$pandalanguage$pandac$IR$Value* $tmp453 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp453));
*(&local0) = $tmp447;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp447));
// unreffing REF($152:org.pandalanguage.pandac.IR.Value?)
// line 129
org$pandalanguage$pandac$IR$Value* $tmp454 = *(&local0);
panda$core$Bit $tmp455 = panda$core$Bit$init$builtin_bit(false);
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block16; else goto block17;
block16:;
// line 130
org$pandalanguage$pandac$IR$Value* $tmp457 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp458 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp458));
// unreffing cast
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block17:;
goto block12;
block13:;
// line 1
// line 134
org$pandalanguage$pandac$IR$Value* $tmp459 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
org$pandalanguage$pandac$IR$Value* $tmp460 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp460));
*(&local0) = $tmp459;
goto block12;
block12:;
// line 136
org$pandalanguage$pandac$FieldDecl** $tmp461 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp462 = *$tmp461;
org$pandalanguage$pandac$FieldDecl$Kind* $tmp463 = &$tmp462->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp464 = *$tmp463;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp465;
$tmp465 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp465->value = $tmp464;
panda$core$Int64 $tmp466 = (panda$core$Int64) {3};
org$pandalanguage$pandac$FieldDecl$Kind $tmp467 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp466);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp468;
$tmp468 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp468->value = $tmp467;
ITable* $tmp469 = ((panda$core$Equatable*) $tmp465)->$class->itable;
while ($tmp469->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp469 = $tmp469->next;
}
$fn471 $tmp470 = $tmp469->methods[0];
panda$core$Bit $tmp472 = $tmp470(((panda$core$Equatable*) $tmp465), ((panda$core$Equatable*) $tmp468));
bool $tmp473 = $tmp472.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp468)));
// unreffing REF($207:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp465)));
// unreffing REF($203:panda.core.Equatable<org.pandalanguage.pandac.FieldDecl.Kind>)
if ($tmp473) goto block18; else goto block20;
block18:;
// line 137
panda$collections$Array* $tmp474 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp474);
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp474));
panda$collections$Array* $tmp475 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp475));
*(&local4) = $tmp474;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp474));
// unreffing REF($219:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 138
panda$collections$Array* $tmp476 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp477 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp478 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position* $tmp479 = &param0->position;
org$pandalanguage$pandac$Position $tmp480 = *$tmp479;
org$pandalanguage$pandac$IR$Value* $tmp481 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp477, $tmp478, $tmp480, $tmp481);
panda$collections$Array$add$panda$collections$Array$T($tmp476, ((panda$core$Object*) $tmp477));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp477));
// unreffing REF($235:org.pandalanguage.pandac.ASTNode)
// line 139
org$pandalanguage$pandac$Compiler** $tmp482 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp483 = *$tmp482;
org$pandalanguage$pandac$Position* $tmp484 = &param0->position;
org$pandalanguage$pandac$Position $tmp485 = *$tmp484;
org$pandalanguage$pandac$IR$Value** $tmp486 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp487 = *$tmp486;
panda$core$Bit $tmp488 = panda$core$Bit$init$builtin_bit($tmp487 != NULL);
bool $tmp489 = $tmp488.value;
if ($tmp489) goto block21; else goto block22;
block22:;
panda$core$Int64 $tmp490 = (panda$core$Int64) {139};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s491, $tmp490, &$s492);
abort(); // unreachable
block21:;
org$pandalanguage$pandac$FieldDecl** $tmp493 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp494 = *$tmp493;
panda$core$String** $tmp495 = &((org$pandalanguage$pandac$Symbol*) $tmp494)->name;
panda$core$String* $tmp496 = *$tmp495;
panda$core$String* $tmp497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s498, $tmp496);
panda$core$String* $tmp499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp497, &$s500);
panda$collections$Array* $tmp501 = *(&local4);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp502 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp503 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type** $tmp504 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp505 = *$tmp504;
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp502, $tmp503, $tmp505);
org$pandalanguage$pandac$IR$Value* $tmp506 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp483, $tmp485, $tmp487, $tmp499, ((panda$collections$ListView*) $tmp501), $tmp502);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp506));
// unreffing REF($275:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp502));
// unreffing REF($270:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp499));
// unreffing REF($267:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp497));
// unreffing REF($266:panda.core.String)
panda$collections$Array* $tmp507 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
// unreffing args
*(&local4) = ((panda$collections$Array*) NULL);
goto block19;
block20:;
// line 1
// line 143
org$pandalanguage$pandac$Compiler** $tmp508 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp509 = *$tmp508;
org$pandalanguage$pandac$Type** $tmp510 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp511 = *$tmp510;
panda$core$Bit $tmp512 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp509, $tmp511);
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block25; else goto block26;
block25:;
org$pandalanguage$pandac$FieldDecl** $tmp514 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp515 = *$tmp514;
panda$core$Weak** $tmp516 = &$tmp515->owner;
panda$core$Weak* $tmp517 = *$tmp516;
panda$core$Object* $tmp518 = panda$core$Weak$get$R$panda$core$Weak$T($tmp517);
panda$core$String** $tmp519 = &((org$pandalanguage$pandac$ClassDecl*) $tmp518)->name;
panda$core$String* $tmp520 = *$tmp519;
ITable* $tmp522 = ((panda$core$Equatable*) $tmp520)->$class->itable;
while ($tmp522->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp522 = $tmp522->next;
}
$fn524 $tmp523 = $tmp522->methods[1];
panda$core$Bit $tmp525 = $tmp523(((panda$core$Equatable*) $tmp520), ((panda$core$Equatable*) &$s521));
panda$core$Panda$unref$panda$core$Object$Q($tmp518);
// unreffing REF($308:panda.core.Weak.T)
*(&local5) = $tmp525;
goto block27;
block26:;
*(&local5) = $tmp512;
goto block27;
block27:;
panda$core$Bit $tmp526 = *(&local5);
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block23; else goto block24;
block23:;
// line 144
org$pandalanguage$pandac$Compiler** $tmp528 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp529 = *$tmp528;
org$pandalanguage$pandac$IR$Value* $tmp530 = *(&local1);
org$pandalanguage$pandac$Compiler$compileRef$org$pandalanguage$pandac$IR$Value($tmp529, $tmp530);
// line 145
$fn532 $tmp531 = ($fn532) param0->$class->vtable[5];
$tmp531(param0);
goto block24;
block24:;
// line 147
org$pandalanguage$pandac$IR$Value* $tmp533 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp534 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Compiler** $tmp535 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp536 = *$tmp535;
org$pandalanguage$pandac$IR** $tmp537 = &$tmp536->ir;
org$pandalanguage$pandac$IR* $tmp538 = *$tmp537;
org$pandalanguage$pandac$IR$Statement* $tmp539 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp540 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Position* $tmp541 = &param0->position;
org$pandalanguage$pandac$Position $tmp542 = *$tmp541;
org$pandalanguage$pandac$IR$Value** $tmp543 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp544 = *$tmp543;
panda$core$Bit $tmp545 = panda$core$Bit$init$builtin_bit($tmp544 != NULL);
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp547 = (panda$core$Int64) {148};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s548, $tmp547, &$s549);
abort(); // unreachable
block28:;
org$pandalanguage$pandac$FieldDecl** $tmp550 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp551 = *$tmp550;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp539, $tmp540, $tmp542, $tmp544, $tmp551);
$fn553 $tmp552 = ($fn553) $tmp538->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp554 = $tmp552($tmp538, $tmp539);
org$pandalanguage$pandac$Type** $tmp555 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp556 = *$tmp555;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp533, $tmp534, $tmp554, $tmp556);
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
org$pandalanguage$pandac$IR$Value* $tmp557 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp557));
*(&local6) = $tmp533;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp539));
// unreffing REF($343:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
// unreffing REF($337:org.pandalanguage.pandac.IR.Value)
// line 149
org$pandalanguage$pandac$Compiler** $tmp558 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp559 = *$tmp558;
org$pandalanguage$pandac$IR** $tmp560 = &$tmp559->ir;
org$pandalanguage$pandac$IR* $tmp561 = *$tmp560;
org$pandalanguage$pandac$IR$Statement* $tmp562 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp563 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position* $tmp564 = &param0->position;
org$pandalanguage$pandac$Position $tmp565 = *$tmp564;
org$pandalanguage$pandac$IR$Value* $tmp566 = *(&local0);
org$pandalanguage$pandac$IR$Value* $tmp567 = *(&local6);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp562, $tmp563, $tmp565, $tmp566, $tmp567);
$fn569 $tmp568 = ($fn569) $tmp561->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp570 = $tmp568($tmp561, $tmp562);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp562));
// unreffing REF($383:org.pandalanguage.pandac.IR.Statement)
org$pandalanguage$pandac$IR$Value* $tmp571 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
// unreffing ptr
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block19;
block19:;
org$pandalanguage$pandac$IR$Value* $tmp572 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp573 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
// unreffing cast
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;

}
void org$pandalanguage$pandac$lvalue$FieldLValue$compileUnref(org$pandalanguage$pandac$lvalue$FieldLValue* param0) {

org$pandalanguage$pandac$IR$Value* local0 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local1;
org$pandalanguage$pandac$IR$Statement$ID local2;
// line 154
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 155
org$pandalanguage$pandac$FieldDecl** $tmp574 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp575 = *$tmp574;
org$pandalanguage$pandac$FieldDecl$Kind* $tmp576 = &$tmp575->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp577 = *$tmp576;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp578;
$tmp578 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp578->value = $tmp577;
panda$core$Int64 $tmp579 = (panda$core$Int64) {3};
org$pandalanguage$pandac$FieldDecl$Kind $tmp580 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp579);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp581;
$tmp581 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp581->value = $tmp580;
ITable* $tmp582 = ((panda$core$Equatable*) $tmp578)->$class->itable;
while ($tmp582->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp582 = $tmp582->next;
}
$fn584 $tmp583 = $tmp582->methods[0];
panda$core$Bit $tmp585 = $tmp583(((panda$core$Equatable*) $tmp578), ((panda$core$Equatable*) $tmp581));
bool $tmp586 = $tmp585.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp581)));
// unreffing REF($11:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp578)));
// unreffing REF($7:panda.core.Equatable<org.pandalanguage.pandac.FieldDecl.Kind>)
if ($tmp586) goto block1; else goto block2;
block1:;
// line 156
org$pandalanguage$pandac$IR$Value* $tmp587 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp587));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block2:;
// line 158
// line 159
org$pandalanguage$pandac$Compiler** $tmp588 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp589 = *$tmp588;
org$pandalanguage$pandac$FieldDecl** $tmp590 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp591 = *$tmp590;
panda$core$Weak** $tmp592 = &$tmp591->owner;
panda$core$Weak* $tmp593 = *$tmp592;
panda$core$Object* $tmp594 = panda$core$Weak$get$R$panda$core$Weak$T($tmp593);
panda$core$Bit $tmp595 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit($tmp589, ((org$pandalanguage$pandac$ClassDecl*) $tmp594));
bool $tmp596 = $tmp595.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp594);
// unreffing REF($38:panda.core.Weak.T)
if ($tmp596) goto block3; else goto block5;
block3:;
// line 160
org$pandalanguage$pandac$Compiler** $tmp597 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp598 = *$tmp597;
org$pandalanguage$pandac$IR** $tmp599 = &$tmp598->ir;
org$pandalanguage$pandac$IR* $tmp600 = *$tmp599;
org$pandalanguage$pandac$IR$Statement* $tmp601 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp602 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Position* $tmp603 = &param0->position;
org$pandalanguage$pandac$Position $tmp604 = *$tmp603;
org$pandalanguage$pandac$IR$Value** $tmp605 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp606 = *$tmp605;
panda$core$Bit $tmp607 = panda$core$Bit$init$builtin_bit($tmp606 != NULL);
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp609 = (panda$core$Int64) {160};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s610, $tmp609, &$s611);
abort(); // unreachable
block6:;
org$pandalanguage$pandac$FieldDecl** $tmp612 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp613 = *$tmp612;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp601, $tmp602, $tmp604, $tmp606, $tmp613);
$fn615 $tmp614 = ($fn615) $tmp600->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp616 = $tmp614($tmp600, $tmp601);
*(&local1) = $tmp616;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
// unreffing REF($52:org.pandalanguage.pandac.IR.Statement)
goto block4;
block5:;
// line 1
// line 163
org$pandalanguage$pandac$Compiler** $tmp617 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp618 = *$tmp617;
org$pandalanguage$pandac$IR** $tmp619 = &$tmp618->ir;
org$pandalanguage$pandac$IR* $tmp620 = *$tmp619;
org$pandalanguage$pandac$IR$Statement* $tmp621 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp622 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Position* $tmp623 = &param0->position;
org$pandalanguage$pandac$Position $tmp624 = *$tmp623;
org$pandalanguage$pandac$IR$Value** $tmp625 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp626 = *$tmp625;
panda$core$Bit $tmp627 = panda$core$Bit$init$builtin_bit($tmp626 != NULL);
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp629 = (panda$core$Int64) {163};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s630, $tmp629, &$s631);
abort(); // unreachable
block8:;
org$pandalanguage$pandac$FieldDecl** $tmp632 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp633 = *$tmp632;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp621, $tmp622, $tmp624, $tmp626, $tmp633);
$fn635 $tmp634 = ($fn635) $tmp620->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp636 = $tmp634($tmp620, $tmp621);
*(&local2) = $tmp636;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
// unreffing REF($82:org.pandalanguage.pandac.IR.Statement)
// line 164
org$pandalanguage$pandac$Compiler** $tmp637 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp638 = *$tmp637;
org$pandalanguage$pandac$IR** $tmp639 = &$tmp638->ir;
org$pandalanguage$pandac$IR* $tmp640 = *$tmp639;
org$pandalanguage$pandac$IR$Statement* $tmp641 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp642 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Position* $tmp643 = &param0->position;
org$pandalanguage$pandac$Position $tmp644 = *$tmp643;
org$pandalanguage$pandac$IR$Value* $tmp645 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp646 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp647 = *(&local2);
org$pandalanguage$pandac$Type** $tmp648 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp649 = *$tmp648;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp645, $tmp646, $tmp647, $tmp649);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp641, $tmp642, $tmp644, $tmp645);
$fn651 $tmp650 = ($fn651) $tmp640->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp652 = $tmp650($tmp640, $tmp641);
*(&local1) = $tmp652;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp645));
// unreffing REF($114:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp641));
// unreffing REF($110:org.pandalanguage.pandac.IR.Statement)
goto block4;
block4:;
// line 166
org$pandalanguage$pandac$IR$Value* $tmp653 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp654 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp655 = *(&local1);
org$pandalanguage$pandac$Type** $tmp656 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp657 = *$tmp656;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp653, $tmp654, $tmp655, $tmp657);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
org$pandalanguage$pandac$IR$Value* $tmp658 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
*(&local0) = $tmp653;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
// unreffing REF($132:org.pandalanguage.pandac.IR.Value)
// line 167
org$pandalanguage$pandac$Compiler** $tmp659 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp660 = *$tmp659;
org$pandalanguage$pandac$IR$Value* $tmp661 = *(&local0);
org$pandalanguage$pandac$Compiler$compileUnref$org$pandalanguage$pandac$IR$Value($tmp660, $tmp661);
org$pandalanguage$pandac$IR$Value* $tmp662 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp662));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;

}
void org$pandalanguage$pandac$lvalue$FieldLValue$cleanup(org$pandalanguage$pandac$lvalue$FieldLValue* param0) {

// line 15
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$Compiler** $tmp663 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp664 = *$tmp663;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp664));
org$pandalanguage$pandac$IR$Value** $tmp665 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp666 = *$tmp665;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
org$pandalanguage$pandac$FieldDecl** $tmp667 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp668 = *$tmp667;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp668));
org$pandalanguage$pandac$Type** $tmp669 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp670 = *$tmp669;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
org$pandalanguage$pandac$Type** $tmp671 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp672 = *$tmp671;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp672));
return;

}

