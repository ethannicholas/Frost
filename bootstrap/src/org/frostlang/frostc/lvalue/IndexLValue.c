#include "org/frostlang/frostc/lvalue/IndexLValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/expression/Binary.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/expression/Call.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$IndexLValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { org$frostlang$frostc$lvalue$IndexLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$IndexLValue$compileStore$org$frostlang$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$IndexLValue$class_type org$frostlang$frostc$lvalue$IndexLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$IndexLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$lvalue$IndexLValue$cleanup, org$frostlang$frostc$lvalue$IndexLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$IndexLValue$compileStore$org$frostlang$frostc$IR$Value} };

typedef frost$core$Int64 (*$fn43)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn58)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn62)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Type* (*$fn74)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn97)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn121)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Type* (*$fn139)(org$frostlang$frostc$lvalue$IndexLValue*);
typedef org$frostlang$frostc$Type* (*$fn179)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn209)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn216)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn287)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn311)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Type* (*$fn328)(org$frostlang$frostc$lvalue$IndexLValue*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65", 39, -2527705490156128088, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 130, 6106197220838576386, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 124, 1669667950741250767, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27\x5b\x5d\x3a\x3d\x27\x20\x6f\x6e\x20\x27", 24, -3727949445279175429, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };

void org$frostlang$frostc$lvalue$IndexLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ASTNode(org$frostlang$frostc$lvalue$IndexLValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$ASTNode* param4) {

// line 30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 31
org$frostlang$frostc$Position* $tmp5 = &param0->position;
*$tmp5 = param2;
// line 32
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp6 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
org$frostlang$frostc$IR$Value** $tmp8 = &param0->target;
*$tmp8 = param3;
// line 33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ASTNode** $tmp9 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlang$frostc$ASTNode** $tmp11 = &param0->rawIndex;
*$tmp11 = param4;
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$IndexLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$IndexLValue* param0) {

frost$collections$CollectionView* local0 = NULL;
// line 38
org$frostlang$frostc$Compiler** $tmp12 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp13 = *$tmp12;
org$frostlang$frostc$ASTNode* $tmp14 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp15 = (frost$core$Int64) {5};
org$frostlang$frostc$Position* $tmp16 = &param0->position;
org$frostlang$frostc$Position $tmp17 = *$tmp16;
org$frostlang$frostc$ASTNode* $tmp18 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp19 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp20 = &param0->position;
org$frostlang$frostc$Position $tmp21 = *$tmp20;
org$frostlang$frostc$IR$Value** $tmp22 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp23 = *$tmp22;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp18, $tmp19, $tmp21, $tmp23);
frost$core$Int64 $tmp24 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp25 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp24);
org$frostlang$frostc$ASTNode** $tmp26 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp27 = *$tmp26;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode($tmp14, $tmp15, $tmp17, $tmp18, $tmp25, $tmp27);
frost$collections$CollectionView* $tmp28 = org$frostlang$frostc$Compiler$possibleTypes$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q($tmp13, $tmp14);
*(&local0) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$collections$CollectionView* $tmp29 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local0) = $tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing REF($19:frost.collections.CollectionView<org.frostlang.frostc.Type>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
// unreffing REF($7:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// unreffing REF($3:org.frostlang.frostc.ASTNode)
// line 40
frost$collections$CollectionView* $tmp30 = *(&local0);
frost$core$Bit $tmp31 = frost$core$Bit$init$builtin_bit($tmp30 == NULL);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block1; else goto block2;
block1:;
// line 41
org$frostlang$frostc$Type* $tmp33 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing REF($43:org.frostlang.frostc.Type)
frost$collections$CollectionView* $tmp34 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing types
*(&local0) = ((frost$collections$CollectionView*) NULL);
return $tmp33;
block2:;
// line 43
frost$collections$CollectionView* $tmp35 = *(&local0);
frost$core$Bit $tmp36 = frost$core$Bit$init$builtin_bit($tmp35 != NULL);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp38 = (frost$core$Int64) {43};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s39, $tmp38, &$s40);
abort(); // unreachable
block3:;
ITable* $tmp41 = $tmp35->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp41 = $tmp41->next;
}
$fn43 $tmp42 = $tmp41->methods[0];
frost$core$Int64 $tmp44 = $tmp42($tmp35);
frost$core$Int64 $tmp45 = (frost$core$Int64) {1};
frost$core$Bit $tmp46 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp44, $tmp45);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp48 = (frost$core$Int64) {43};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s49, $tmp48);
abort(); // unreachable
block5:;
// line 44
frost$collections$CollectionView* $tmp50 = *(&local0);
frost$core$Bit $tmp51 = frost$core$Bit$init$builtin_bit($tmp50 != NULL);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp53 = (frost$core$Int64) {44};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s54, $tmp53, &$s55);
abort(); // unreachable
block7:;
ITable* $tmp56 = ((frost$collections$Iterable*) $tmp50)->$class->itable;
while ($tmp56->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp56 = $tmp56->next;
}
$fn58 $tmp57 = $tmp56->methods[0];
frost$collections$Iterator* $tmp59 = $tmp57(((frost$collections$Iterable*) $tmp50));
ITable* $tmp60 = $tmp59->$class->itable;
while ($tmp60->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp60 = $tmp60->next;
}
$fn62 $tmp61 = $tmp60->methods[1];
frost$core$Object* $tmp63 = $tmp61($tmp59);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp63)));
frost$core$Frost$unref$frost$core$Object$Q($tmp63);
// unreffing REF($89:frost.collections.Iterator.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing REF($85:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$collections$CollectionView* $tmp64 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing types
*(&local0) = ((frost$collections$CollectionView*) NULL);
return ((org$frostlang$frostc$Type*) $tmp63);

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$IndexLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$IndexLValue* param0) {

org$frostlang$frostc$Pair* local0 = NULL;
// line 49
org$frostlang$frostc$IR$Value** $tmp65 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp66 = *$tmp65;
frost$core$Bit $tmp67 = frost$core$Bit$init$builtin_bit($tmp66 == NULL);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block1; else goto block2;
block1:;
// line 50
org$frostlang$frostc$Compiler** $tmp69 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp70 = *$tmp69;
org$frostlang$frostc$IR$Value** $tmp71 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp72 = *$tmp71;
$fn74 $tmp73 = ($fn74) $tmp72->$class->vtable[2];
org$frostlang$frostc$Type* $tmp75 = $tmp73($tmp72);
frost$core$Int64 $tmp76 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp77 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp76);
org$frostlang$frostc$ASTNode** $tmp78 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp79 = *$tmp78;
org$frostlang$frostc$Compiler$TypeContext* $tmp80 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp81 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp80, $tmp81);
org$frostlang$frostc$Pair* $tmp82 = org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q($tmp70, $tmp75, $tmp77, $tmp79, $tmp80);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
org$frostlang$frostc$Pair* $tmp83 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
*(&local0) = $tmp82;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// unreffing REF($21:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
// unreffing REF($18:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing REF($13:org.frostlang.frostc.Type)
// line 52
org$frostlang$frostc$Pair* $tmp84 = *(&local0);
frost$core$Bit $tmp85 = frost$core$Bit$init$builtin_bit($tmp84 != NULL);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block3; else goto block4;
block3:;
// line 53
org$frostlang$frostc$Pair* $tmp87 = *(&local0);
frost$core$Bit $tmp88 = frost$core$Bit$init$builtin_bit($tmp87 != NULL);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp90 = (frost$core$Int64) {53};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s91, $tmp90, &$s92);
abort(); // unreachable
block5:;
frost$core$Object** $tmp93 = &$tmp87->first;
frost$core$Object* $tmp94 = *$tmp93;
ITable* $tmp95 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp94))->$class->itable;
while ($tmp95->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp95 = $tmp95->next;
}
$fn97 $tmp96 = $tmp95->methods[0];
frost$core$Int64 $tmp98 = $tmp96(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp94)));
frost$core$Int64 $tmp99 = (frost$core$Int64) {1};
frost$core$Bit $tmp100 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp98, $tmp99);
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp102 = (frost$core$Int64) {53};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s103, $tmp102);
abort(); // unreachable
block7:;
// line 54
org$frostlang$frostc$Compiler** $tmp104 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp105 = *$tmp104;
org$frostlang$frostc$ASTNode** $tmp106 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp107 = *$tmp106;
org$frostlang$frostc$Compiler$TypeContext* $tmp108 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp109 = (frost$core$Int64) {3};
org$frostlang$frostc$Pair* $tmp110 = *(&local0);
frost$core$Bit $tmp111 = frost$core$Bit$init$builtin_bit($tmp110 != NULL);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp113 = (frost$core$Int64) {55};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s114, $tmp113, &$s115);
abort(); // unreachable
block9:;
frost$core$Object** $tmp116 = &$tmp110->first;
frost$core$Object* $tmp117 = *$tmp116;
frost$core$Int64 $tmp118 = (frost$core$Int64) {0};
ITable* $tmp119 = ((frost$collections$ListView*) $tmp117)->$class->itable;
while ($tmp119->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp119 = $tmp119->next;
}
$fn121 $tmp120 = $tmp119->methods[0];
frost$core$Object* $tmp122 = $tmp120(((frost$collections$ListView*) $tmp117), $tmp118);
frost$core$Int64 $tmp123 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp124 = org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(((org$frostlang$frostc$MethodRef*) $tmp122), $tmp123);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp108, $tmp109, $tmp124);
org$frostlang$frostc$IR$Value* $tmp125 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp105, $tmp107, $tmp108);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
org$frostlang$frostc$IR$Value** $tmp126 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp127 = *$tmp126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
org$frostlang$frostc$IR$Value** $tmp128 = &param0->index;
*$tmp128 = $tmp125;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// unreffing REF($94:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// unreffing REF($92:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp122);
// unreffing REF($89:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing REF($72:org.frostlang.frostc.Compiler.TypeContext)
goto block4;
block4:;
org$frostlang$frostc$Pair* $tmp129 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
// unreffing m
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
goto block2;
block2:;
// line 58
org$frostlang$frostc$IR$Value** $tmp130 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp131 = *$tmp130;
frost$core$Bit $tmp132 = frost$core$Bit$init$builtin_bit($tmp131 == NULL);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block11; else goto block12;
block11:;
// line 59
org$frostlang$frostc$IR$Value* $tmp134 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp135 = (frost$core$Int64) {7};
frost$core$Int64 $tmp136 = (frost$core$Int64) {18446744073709551615};
org$frostlang$frostc$IR$Statement$ID $tmp137 = org$frostlang$frostc$IR$Statement$ID$init$frost$core$Int64($tmp136);
$fn139 $tmp138 = ($fn139) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp140 = $tmp138(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp134, $tmp135, $tmp137, $tmp140);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
org$frostlang$frostc$IR$Value** $tmp141 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp142 = *$tmp141;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
org$frostlang$frostc$IR$Value** $tmp143 = &param0->index;
*$tmp143 = $tmp134;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
// unreffing REF($135:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// unreffing REF($130:org.frostlang.frostc.IR.Value)
// line 60
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block12:;
// line 62
org$frostlang$frostc$Compiler** $tmp144 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp145 = *$tmp144;
org$frostlang$frostc$Position* $tmp146 = &param0->position;
org$frostlang$frostc$Position $tmp147 = *$tmp146;
org$frostlang$frostc$ASTNode* $tmp148 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp149 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp150 = &param0->position;
org$frostlang$frostc$Position $tmp151 = *$tmp150;
org$frostlang$frostc$IR$Value** $tmp152 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp153 = *$tmp152;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp148, $tmp149, $tmp151, $tmp153);
frost$core$Int64 $tmp154 = (frost$core$Int64) {102};
org$frostlang$frostc$parser$Token$Kind $tmp155 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp154);
org$frostlang$frostc$ASTNode* $tmp156 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp157 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp158 = &param0->position;
org$frostlang$frostc$Position $tmp159 = *$tmp158;
org$frostlang$frostc$IR$Value** $tmp160 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp161 = *$tmp160;
frost$core$Bit $tmp162 = frost$core$Bit$init$builtin_bit($tmp161 != NULL);
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp164 = (frost$core$Int64) {63};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s165, $tmp164, &$s166);
abort(); // unreachable
block13:;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp156, $tmp157, $tmp159, $tmp161);
org$frostlang$frostc$Compiler$TypeContext* $tmp167 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp168 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp167, $tmp168);
org$frostlang$frostc$IR$Value* $tmp169 = org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp145, $tmp147, $tmp148, $tmp155, $tmp156, $tmp167);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
// unreffing REF($188:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
// unreffing REF($185:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
// unreffing REF($170:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// unreffing REF($161:org.frostlang.frostc.ASTNode)
return $tmp169;

}
void org$frostlang$frostc$lvalue$IndexLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$IndexLValue* param0, org$frostlang$frostc$IR$Value* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$Symbol* local1 = NULL;
frost$collections$ListView* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$Pair* local4 = NULL;
frost$collections$Array* local5 = NULL;
// line 69
org$frostlang$frostc$IR$Value** $tmp170 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp171 = *$tmp170;
frost$core$Bit $tmp172 = frost$core$Bit$init$builtin_bit($tmp171 == NULL);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block1; else goto block2;
block1:;
// line 70
org$frostlang$frostc$Compiler** $tmp174 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp175 = *$tmp174;
org$frostlang$frostc$IR$Value** $tmp176 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp177 = *$tmp176;
$fn179 $tmp178 = ($fn179) $tmp177->$class->vtable[2];
org$frostlang$frostc$Type* $tmp180 = $tmp178($tmp177);
org$frostlang$frostc$ClassDecl* $tmp181 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q($tmp175, $tmp180);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
org$frostlang$frostc$ClassDecl* $tmp182 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local0) = $tmp181;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
// unreffing REF($14:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
// unreffing REF($13:org.frostlang.frostc.Type)
// line 71
org$frostlang$frostc$ClassDecl* $tmp183 = *(&local0);
frost$core$Bit $tmp184 = frost$core$Bit$init$builtin_bit($tmp183 == NULL);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block3; else goto block4;
block3:;
// line 72
org$frostlang$frostc$ClassDecl* $tmp186 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
// unreffing cl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return;
block4:;
// line 74
org$frostlang$frostc$Compiler** $tmp187 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp188 = *$tmp187;
org$frostlang$frostc$ClassDecl* $tmp189 = *(&local0);
frost$core$Bit $tmp190 = frost$core$Bit$init$builtin_bit($tmp189 != NULL);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp192 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s193, $tmp192, &$s194);
abort(); // unreachable
block5:;
org$frostlang$frostc$SymbolTable* $tmp195 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp188, $tmp189);
org$frostlang$frostc$Symbol* $tmp196 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp195, &$s197);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
org$frostlang$frostc$Symbol* $tmp198 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local1) = $tmp196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// unreffing REF($54:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// unreffing REF($53:org.frostlang.frostc.SymbolTable)
// line 75
org$frostlang$frostc$Symbol* $tmp199 = *(&local1);
frost$core$Bit $tmp200 = frost$core$Bit$init$builtin_bit($tmp199 == NULL);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block7; else goto block8;
block7:;
// line 76
org$frostlang$frostc$Compiler** $tmp202 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp203 = *$tmp202;
org$frostlang$frostc$Position* $tmp204 = &param0->position;
org$frostlang$frostc$Position $tmp205 = *$tmp204;
org$frostlang$frostc$IR$Value** $tmp206 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp207 = *$tmp206;
$fn209 $tmp208 = ($fn209) $tmp207->$class->vtable[2];
org$frostlang$frostc$Type* $tmp210 = $tmp208($tmp207);
frost$core$String* $tmp211 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s212, ((frost$core$Object*) $tmp210));
frost$core$String* $tmp213 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp211, &$s214);
$fn216 $tmp215 = ($fn216) param1->$class->vtable[2];
org$frostlang$frostc$Type* $tmp217 = $tmp215(param1);
frost$core$String* $tmp218 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s219, ((frost$core$Object*) $tmp217));
frost$core$String* $tmp220 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp218, &$s221);
frost$core$String* $tmp222 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp213, $tmp220);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp203, $tmp205, $tmp222);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing REF($91:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
// unreffing REF($90:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
// unreffing REF($89:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// unreffing REF($87:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
// unreffing REF($85:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// unreffing REF($84:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// unreffing REF($82:org.frostlang.frostc.Type)
// line 78
org$frostlang$frostc$Symbol* $tmp223 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
// unreffing assignment
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp224 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// unreffing cl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return;
block8:;
// line 80
*(&local2) = ((frost$collections$ListView*) NULL);
// line 81
org$frostlang$frostc$Symbol* $tmp225 = *(&local1);
frost$core$Bit $tmp226 = frost$core$Bit$init$builtin_bit($tmp225 != NULL);
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp228 = (frost$core$Int64) {81};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s229, $tmp228, &$s230);
abort(); // unreachable
block9:;
org$frostlang$frostc$Symbol$Kind* $tmp231 = &$tmp225->kind;
org$frostlang$frostc$Symbol$Kind $tmp232 = *$tmp231;
frost$core$Int64 $tmp233 = $tmp232.$rawValue;
frost$core$Int64 $tmp234 = (frost$core$Int64) {5};
frost$core$Bit $tmp235 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp233, $tmp234);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block12; else goto block13;
block12:;
// line 83
frost$collections$Array* $tmp237 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp237);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp237)));
frost$collections$ListView* $tmp238 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local2) = ((frost$collections$ListView*) $tmp237);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing REF($146:frost.collections.Array<org.frostlang.frostc.MethodDecl>)
// line 84
frost$collections$ListView* $tmp239 = *(&local2);
org$frostlang$frostc$Symbol* $tmp240 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T(((frost$collections$Array*) $tmp239), ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp240)));
goto block11;
block13:;
frost$core$Int64 $tmp241 = (frost$core$Int64) {6};
frost$core$Bit $tmp242 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp233, $tmp241);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block14; else goto block15;
block14:;
// line 87
org$frostlang$frostc$Symbol* $tmp244 = *(&local1);
org$frostlang$frostc$FixedArray** $tmp245 = &((org$frostlang$frostc$Methods*) $tmp244)->methods;
org$frostlang$frostc$FixedArray* $tmp246 = *$tmp245;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp246)));
frost$collections$ListView* $tmp247 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local2) = ((frost$collections$ListView*) $tmp246);
goto block11;
block15:;
// line 90
frost$core$Bit $tmp248 = frost$core$Bit$init$builtin_bit(false);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp250 = (frost$core$Int64) {90};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s251, $tmp250);
abort(); // unreachable
block16:;
goto block11;
block11:;
// line 93
frost$collections$Array* $tmp252 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp252);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
frost$collections$Array* $tmp253 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
*(&local3) = $tmp252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// unreffing REF($194:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 94
frost$collections$Array* $tmp254 = *(&local3);
org$frostlang$frostc$ASTNode** $tmp255 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp256 = *$tmp255;
frost$collections$Array$add$frost$collections$Array$T($tmp254, ((frost$core$Object*) $tmp256));
// line 95
frost$collections$Array* $tmp257 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp258 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp259 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp260 = &param0->position;
org$frostlang$frostc$Position $tmp261 = *$tmp260;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp258, $tmp259, $tmp261, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp257, ((frost$core$Object*) $tmp258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing REF($217:org.frostlang.frostc.ASTNode)
// line 96
org$frostlang$frostc$Compiler** $tmp262 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp263 = *$tmp262;
org$frostlang$frostc$Position* $tmp264 = &param0->position;
org$frostlang$frostc$Position $tmp265 = *$tmp264;
org$frostlang$frostc$IR$Value** $tmp266 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp267 = *$tmp266;
frost$collections$ListView* $tmp268 = *(&local2);
frost$collections$Array* $tmp269 = *(&local3);
org$frostlang$frostc$Compiler$TypeContext* $tmp270 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp271 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp270, $tmp271);
org$frostlang$frostc$Pair* $tmp272 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q($tmp263, $tmp265, $tmp267, $tmp268, ((frost$collections$ListView*) $tmp269), $tmp270);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
org$frostlang$frostc$Pair* $tmp273 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
*(&local4) = $tmp272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
// unreffing REF($241:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// unreffing REF($238:org.frostlang.frostc.Compiler.TypeContext)
// line 98
org$frostlang$frostc$Pair* $tmp274 = *(&local4);
frost$core$Bit $tmp275 = frost$core$Bit$init$builtin_bit($tmp274 != NULL);
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block18; else goto block19;
block18:;
// line 99
org$frostlang$frostc$Pair* $tmp277 = *(&local4);
frost$core$Bit $tmp278 = frost$core$Bit$init$builtin_bit($tmp277 != NULL);
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp280 = (frost$core$Int64) {99};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s281, $tmp280, &$s282);
abort(); // unreachable
block20:;
frost$core$Object** $tmp283 = &$tmp277->first;
frost$core$Object* $tmp284 = *$tmp283;
ITable* $tmp285 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp284))->$class->itable;
while ($tmp285->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp285 = $tmp285->next;
}
$fn287 $tmp286 = $tmp285->methods[0];
frost$core$Int64 $tmp288 = $tmp286(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp284)));
frost$core$Int64 $tmp289 = (frost$core$Int64) {1};
frost$core$Bit $tmp290 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp288, $tmp289);
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp292 = (frost$core$Int64) {99};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s293, $tmp292);
abort(); // unreachable
block22:;
// line 100
org$frostlang$frostc$Compiler** $tmp294 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp295 = *$tmp294;
org$frostlang$frostc$ASTNode** $tmp296 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp297 = *$tmp296;
org$frostlang$frostc$Compiler$TypeContext* $tmp298 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp299 = (frost$core$Int64) {3};
org$frostlang$frostc$Pair* $tmp300 = *(&local4);
frost$core$Bit $tmp301 = frost$core$Bit$init$builtin_bit($tmp300 != NULL);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp303 = (frost$core$Int64) {101};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s304, $tmp303, &$s305);
abort(); // unreachable
block24:;
frost$core$Object** $tmp306 = &$tmp300->first;
frost$core$Object* $tmp307 = *$tmp306;
frost$core$Int64 $tmp308 = (frost$core$Int64) {0};
ITable* $tmp309 = ((frost$collections$ListView*) $tmp307)->$class->itable;
while ($tmp309->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp309 = $tmp309->next;
}
$fn311 $tmp310 = $tmp309->methods[0];
frost$core$Object* $tmp312 = $tmp310(((frost$collections$ListView*) $tmp307), $tmp308);
frost$core$Int64 $tmp313 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp314 = org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(((org$frostlang$frostc$MethodRef*) $tmp312), $tmp313);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp298, $tmp299, $tmp314);
org$frostlang$frostc$IR$Value* $tmp315 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp295, $tmp297, $tmp298);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
org$frostlang$frostc$IR$Value** $tmp316 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp317 = *$tmp316;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
org$frostlang$frostc$IR$Value** $tmp318 = &param0->index;
*$tmp318 = $tmp315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
// unreffing REF($311:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
// unreffing REF($309:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp312);
// unreffing REF($306:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
// unreffing REF($289:org.frostlang.frostc.Compiler.TypeContext)
goto block19;
block19:;
// line 103
org$frostlang$frostc$IR$Value** $tmp319 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp320 = *$tmp319;
frost$core$Bit $tmp321 = frost$core$Bit$init$builtin_bit($tmp320 == NULL);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block26; else goto block27;
block26:;
// line 105
org$frostlang$frostc$IR$Value* $tmp323 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp324 = (frost$core$Int64) {7};
frost$core$Int64 $tmp325 = (frost$core$Int64) {18446744073709551615};
org$frostlang$frostc$IR$Statement$ID $tmp326 = org$frostlang$frostc$IR$Statement$ID$init$frost$core$Int64($tmp325);
$fn328 $tmp327 = ($fn328) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp329 = $tmp327(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp323, $tmp324, $tmp326, $tmp329);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
org$frostlang$frostc$IR$Value** $tmp330 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp331 = *$tmp330;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
org$frostlang$frostc$IR$Value** $tmp332 = &param0->index;
*$tmp332 = $tmp323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
// unreffing REF($346:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
// unreffing REF($341:org.frostlang.frostc.IR.Value)
goto block27;
block27:;
org$frostlang$frostc$Pair* $tmp333 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
// unreffing m
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$Array* $tmp334 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
// unreffing args
*(&local3) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp335 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
// unreffing methods
*(&local2) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$Symbol* $tmp336 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
// unreffing assignment
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp337 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// unreffing cl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block2;
block2:;
// line 108
frost$collections$Array* $tmp338 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp338);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$collections$Array* $tmp339 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
*(&local5) = $tmp338;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// unreffing REF($391:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 109
frost$collections$Array* $tmp340 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp341 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp342 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp343 = &param0->position;
org$frostlang$frostc$Position $tmp344 = *$tmp343;
org$frostlang$frostc$IR$Value** $tmp345 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp346 = *$tmp345;
frost$core$Bit $tmp347 = frost$core$Bit$init$builtin_bit($tmp346 != NULL);
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp349 = (frost$core$Int64) {109};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s350, $tmp349, &$s351);
abort(); // unreachable
block28:;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp341, $tmp342, $tmp344, $tmp346);
frost$collections$Array$add$frost$collections$Array$T($tmp340, ((frost$core$Object*) $tmp341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
// unreffing REF($407:org.frostlang.frostc.ASTNode)
// line 110
frost$collections$Array* $tmp352 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp353 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp354 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp355 = &param0->position;
org$frostlang$frostc$Position $tmp356 = *$tmp355;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp353, $tmp354, $tmp356, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp352, ((frost$core$Object*) $tmp353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
// unreffing REF($430:org.frostlang.frostc.ASTNode)
// line 111
org$frostlang$frostc$Compiler** $tmp357 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp358 = *$tmp357;
org$frostlang$frostc$Position* $tmp359 = &param0->position;
org$frostlang$frostc$Position $tmp360 = *$tmp359;
org$frostlang$frostc$IR$Value** $tmp361 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp362 = *$tmp361;
frost$collections$Array* $tmp363 = *(&local5);
org$frostlang$frostc$Compiler$TypeContext* $tmp364 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp365 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp364, $tmp365);
org$frostlang$frostc$IR$Value* $tmp366 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp358, $tmp360, $tmp362, &$s367, ((frost$collections$ListView*) $tmp363), $tmp364);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// unreffing REF($452:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// unreffing REF($449:org.frostlang.frostc.Compiler.TypeContext)
frost$collections$Array* $tmp368 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// unreffing args
*(&local5) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$lvalue$IndexLValue$cleanup(org$frostlang$frostc$lvalue$IndexLValue* param0) {

// line 16
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp369 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp370 = *$tmp369;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
org$frostlang$frostc$IR$Value** $tmp371 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp372 = *$tmp371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
org$frostlang$frostc$ASTNode** $tmp373 = &param0->rawIndex;
org$frostlang$frostc$ASTNode* $tmp374 = *$tmp373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
org$frostlang$frostc$IR$Value** $tmp375 = &param0->index;
org$frostlang$frostc$IR$Value* $tmp376 = *$tmp375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
return;

}

