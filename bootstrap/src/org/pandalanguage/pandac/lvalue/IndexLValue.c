#include "org/pandalanguage/pandac/lvalue/IndexLValue.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/lvalue/LValue.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/core/Bit.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/expression/Binary.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/expression/Call.h"


struct { panda$core$Class* cl; ITable* next; void* methods[3]; } org$pandalanguage$pandac$lvalue$IndexLValue$_org$pandalanguage$pandac$lvalue$LValue = { (panda$core$Class*) &org$pandalanguage$pandac$lvalue$LValue$class, NULL, { org$pandalanguage$pandac$lvalue$IndexLValue$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$lvalue$IndexLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q, org$pandalanguage$pandac$lvalue$IndexLValue$compileStore$org$pandalanguage$pandac$IR$Value} };

static panda$core$String $s1;
org$pandalanguage$pandac$lvalue$IndexLValue$class_type org$pandalanguage$pandac$lvalue$IndexLValue$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$lvalue$IndexLValue$_org$pandalanguage$pandac$lvalue$LValue, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$lvalue$IndexLValue$cleanup, org$pandalanguage$pandac$lvalue$IndexLValue$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$lvalue$IndexLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q, org$pandalanguage$pandac$lvalue$IndexLValue$compileStore$org$pandalanguage$pandac$IR$Value} };

typedef panda$core$Int64 (*$fn43)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn58)(panda$collections$Iterable*);
typedef panda$core$Object* (*$fn62)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn74)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Int64 (*$fn97)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn121)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn139)(org$pandalanguage$pandac$lvalue$IndexLValue*);
typedef org$pandalanguage$pandac$Type* (*$fn179)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn209)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn216)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Int64 (*$fn287)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn311)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn328)(org$pandalanguage$pandac$lvalue$IndexLValue*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65", 43, -5122762443879653466, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 134, 3107989259114016326, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x27", 128, -8407138730676487297, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x27\x5b\x5d\x3a\x3d\x27\x20\x6f\x6e\x20\x27", 24, -3727949445279175429, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x64\x65\x78\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, 540026522133069466, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };

void org$pandalanguage$pandac$lvalue$IndexLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$lvalue$IndexLValue* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 30
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Compiler** $tmp2 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 31
org$pandalanguage$pandac$Position* $tmp5 = &param0->position;
*$tmp5 = param2;
// line 32
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp6 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
org$pandalanguage$pandac$IR$Value** $tmp8 = &param0->target;
*$tmp8 = param3;
// line 33
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp9 = &param0->rawIndex;
org$pandalanguage$pandac$ASTNode* $tmp10 = *$tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
org$pandalanguage$pandac$ASTNode** $tmp11 = &param0->rawIndex;
*$tmp11 = param4;
return;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$lvalue$IndexLValue$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$lvalue$IndexLValue* param0) {

panda$collections$CollectionView* local0 = NULL;
// line 38
org$pandalanguage$pandac$Compiler** $tmp12 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp13 = *$tmp12;
org$pandalanguage$pandac$ASTNode* $tmp14 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp15 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Position* $tmp16 = &param0->position;
org$pandalanguage$pandac$Position $tmp17 = *$tmp16;
org$pandalanguage$pandac$ASTNode* $tmp18 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp19 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position* $tmp20 = &param0->position;
org$pandalanguage$pandac$Position $tmp21 = *$tmp20;
org$pandalanguage$pandac$IR$Value** $tmp22 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp23 = *$tmp22;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp18, $tmp19, $tmp21, $tmp23);
panda$core$Int64 $tmp24 = (panda$core$Int64) {102};
org$pandalanguage$pandac$parser$Token$Kind $tmp25 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp24);
org$pandalanguage$pandac$ASTNode** $tmp26 = &param0->rawIndex;
org$pandalanguage$pandac$ASTNode* $tmp27 = *$tmp26;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp14, $tmp15, $tmp17, $tmp18, $tmp25, $tmp27);
panda$collections$CollectionView* $tmp28 = org$pandalanguage$pandac$Compiler$possibleTypes$org$pandalanguage$pandac$ASTNode$R$panda$collections$CollectionView$LTorg$pandalanguage$pandac$Type$GT$Q($tmp13, $tmp14);
*(&local0) = ((panda$collections$CollectionView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
panda$collections$CollectionView* $tmp29 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
*(&local0) = $tmp28;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
// unreffing REF($19:panda.collections.CollectionView<org.pandalanguage.pandac.Type>?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
// unreffing REF($7:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
// unreffing REF($3:org.pandalanguage.pandac.ASTNode)
// line 40
panda$collections$CollectionView* $tmp30 = *(&local0);
panda$core$Bit $tmp31 = panda$core$Bit$init$builtin_bit($tmp30 == NULL);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block1; else goto block2;
block1:;
// line 41
org$pandalanguage$pandac$Type* $tmp33 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// unreffing REF($43:org.pandalanguage.pandac.Type)
panda$collections$CollectionView* $tmp34 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// unreffing types
*(&local0) = ((panda$collections$CollectionView*) NULL);
return $tmp33;
block2:;
// line 43
panda$collections$CollectionView* $tmp35 = *(&local0);
panda$core$Bit $tmp36 = panda$core$Bit$init$builtin_bit($tmp35 != NULL);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp38 = (panda$core$Int64) {43};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s39, $tmp38, &$s40);
abort(); // unreachable
block3:;
ITable* $tmp41 = $tmp35->$class->itable;
while ($tmp41->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp41 = $tmp41->next;
}
$fn43 $tmp42 = $tmp41->methods[0];
panda$core$Int64 $tmp44 = $tmp42($tmp35);
panda$core$Int64 $tmp45 = (panda$core$Int64) {1};
panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp44, $tmp45);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp48 = (panda$core$Int64) {43};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s49, $tmp48);
abort(); // unreachable
block5:;
// line 44
panda$collections$CollectionView* $tmp50 = *(&local0);
panda$core$Bit $tmp51 = panda$core$Bit$init$builtin_bit($tmp50 != NULL);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp53 = (panda$core$Int64) {44};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s54, $tmp53, &$s55);
abort(); // unreachable
block7:;
ITable* $tmp56 = ((panda$collections$Iterable*) $tmp50)->$class->itable;
while ($tmp56->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp56 = $tmp56->next;
}
$fn58 $tmp57 = $tmp56->methods[0];
panda$collections$Iterator* $tmp59 = $tmp57(((panda$collections$Iterable*) $tmp50));
ITable* $tmp60 = $tmp59->$class->itable;
while ($tmp60->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp60 = $tmp60->next;
}
$fn62 $tmp61 = $tmp60->methods[1];
panda$core$Object* $tmp63 = $tmp61($tmp59);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp63)));
panda$core$Panda$unref$panda$core$Object$Q($tmp63);
// unreffing REF($89:panda.collections.Iterator.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// unreffing REF($85:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$collections$CollectionView* $tmp64 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing types
*(&local0) = ((panda$collections$CollectionView*) NULL);
return ((org$pandalanguage$pandac$Type*) $tmp63);

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$lvalue$IndexLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$lvalue$IndexLValue* param0) {

org$pandalanguage$pandac$Pair* local0 = NULL;
// line 49
org$pandalanguage$pandac$IR$Value** $tmp65 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp66 = *$tmp65;
panda$core$Bit $tmp67 = panda$core$Bit$init$builtin_bit($tmp66 == NULL);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block1; else goto block2;
block1:;
// line 50
org$pandalanguage$pandac$Compiler** $tmp69 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp70 = *$tmp69;
org$pandalanguage$pandac$IR$Value** $tmp71 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp72 = *$tmp71;
$fn74 $tmp73 = ($fn74) $tmp72->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp75 = $tmp73($tmp72);
panda$core$Int64 $tmp76 = (panda$core$Int64) {102};
org$pandalanguage$pandac$parser$Token$Kind $tmp77 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp76);
org$pandalanguage$pandac$ASTNode** $tmp78 = &param0->rawIndex;
org$pandalanguage$pandac$ASTNode* $tmp79 = *$tmp78;
org$pandalanguage$pandac$Compiler$TypeContext* $tmp80 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp81 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp80, $tmp81);
org$pandalanguage$pandac$Pair* $tmp82 = org$pandalanguage$pandac$expression$Binary$findOverloadedOperator$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q($tmp70, $tmp75, $tmp77, $tmp79, $tmp80);
*(&local0) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
org$pandalanguage$pandac$Pair* $tmp83 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
*(&local0) = $tmp82;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
// unreffing REF($21:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
// unreffing REF($18:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing REF($13:org.pandalanguage.pandac.Type)
// line 52
org$pandalanguage$pandac$Pair* $tmp84 = *(&local0);
panda$core$Bit $tmp85 = panda$core$Bit$init$builtin_bit($tmp84 != NULL);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block3; else goto block4;
block3:;
// line 53
org$pandalanguage$pandac$Pair* $tmp87 = *(&local0);
panda$core$Bit $tmp88 = panda$core$Bit$init$builtin_bit($tmp87 != NULL);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp90 = (panda$core$Int64) {53};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s91, $tmp90, &$s92);
abort(); // unreachable
block5:;
panda$core$Object** $tmp93 = &$tmp87->first;
panda$core$Object* $tmp94 = *$tmp93;
ITable* $tmp95 = ((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp94))->$class->itable;
while ($tmp95->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp95 = $tmp95->next;
}
$fn97 $tmp96 = $tmp95->methods[0];
panda$core$Int64 $tmp98 = $tmp96(((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp94)));
panda$core$Int64 $tmp99 = (panda$core$Int64) {1};
panda$core$Bit $tmp100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp98, $tmp99);
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp102 = (panda$core$Int64) {53};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s103, $tmp102);
abort(); // unreachable
block7:;
// line 54
org$pandalanguage$pandac$Compiler** $tmp104 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp105 = *$tmp104;
org$pandalanguage$pandac$ASTNode** $tmp106 = &param0->rawIndex;
org$pandalanguage$pandac$ASTNode* $tmp107 = *$tmp106;
org$pandalanguage$pandac$Compiler$TypeContext* $tmp108 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp109 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Pair* $tmp110 = *(&local0);
panda$core$Bit $tmp111 = panda$core$Bit$init$builtin_bit($tmp110 != NULL);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp113 = (panda$core$Int64) {55};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s114, $tmp113, &$s115);
abort(); // unreachable
block9:;
panda$core$Object** $tmp116 = &$tmp110->first;
panda$core$Object* $tmp117 = *$tmp116;
panda$core$Int64 $tmp118 = (panda$core$Int64) {0};
ITable* $tmp119 = ((panda$collections$ListView*) $tmp117)->$class->itable;
while ($tmp119->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp119 = $tmp119->next;
}
$fn121 $tmp120 = $tmp119->methods[0];
panda$core$Object* $tmp122 = $tmp120(((panda$collections$ListView*) $tmp117), $tmp118);
panda$core$Int64 $tmp123 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp124 = org$pandalanguage$pandac$MethodRef$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp122), $tmp123);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp108, $tmp109, $tmp124);
org$pandalanguage$pandac$IR$Value* $tmp125 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp105, $tmp107, $tmp108);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
org$pandalanguage$pandac$IR$Value** $tmp126 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp127 = *$tmp126;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
org$pandalanguage$pandac$IR$Value** $tmp128 = &param0->index;
*$tmp128 = $tmp125;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
// unreffing REF($94:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
// unreffing REF($92:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp122);
// unreffing REF($89:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
// unreffing REF($72:org.pandalanguage.pandac.Compiler.TypeContext)
goto block4;
block4:;
org$pandalanguage$pandac$Pair* $tmp129 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
// unreffing m
*(&local0) = ((org$pandalanguage$pandac$Pair*) NULL);
goto block2;
block2:;
// line 58
org$pandalanguage$pandac$IR$Value** $tmp130 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp131 = *$tmp130;
panda$core$Bit $tmp132 = panda$core$Bit$init$builtin_bit($tmp131 == NULL);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block11; else goto block12;
block11:;
// line 59
org$pandalanguage$pandac$IR$Value* $tmp134 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp135 = (panda$core$Int64) {7};
panda$core$Int64 $tmp136 = (panda$core$Int64) {18446744073709551615};
org$pandalanguage$pandac$IR$Statement$ID $tmp137 = org$pandalanguage$pandac$IR$Statement$ID$init$panda$core$Int64($tmp136);
$fn139 $tmp138 = ($fn139) param0->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp140 = $tmp138(param0);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp134, $tmp135, $tmp137, $tmp140);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
org$pandalanguage$pandac$IR$Value** $tmp141 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp142 = *$tmp141;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
org$pandalanguage$pandac$IR$Value** $tmp143 = &param0->index;
*$tmp143 = $tmp134;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
// unreffing REF($135:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
// unreffing REF($130:org.pandalanguage.pandac.IR.Value)
// line 60
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block12:;
// line 62
org$pandalanguage$pandac$Compiler** $tmp144 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp145 = *$tmp144;
org$pandalanguage$pandac$Position* $tmp146 = &param0->position;
org$pandalanguage$pandac$Position $tmp147 = *$tmp146;
org$pandalanguage$pandac$ASTNode* $tmp148 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp149 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position* $tmp150 = &param0->position;
org$pandalanguage$pandac$Position $tmp151 = *$tmp150;
org$pandalanguage$pandac$IR$Value** $tmp152 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp153 = *$tmp152;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp148, $tmp149, $tmp151, $tmp153);
panda$core$Int64 $tmp154 = (panda$core$Int64) {102};
org$pandalanguage$pandac$parser$Token$Kind $tmp155 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp154);
org$pandalanguage$pandac$ASTNode* $tmp156 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp157 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position* $tmp158 = &param0->position;
org$pandalanguage$pandac$Position $tmp159 = *$tmp158;
org$pandalanguage$pandac$IR$Value** $tmp160 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp161 = *$tmp160;
panda$core$Bit $tmp162 = panda$core$Bit$init$builtin_bit($tmp161 != NULL);
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp164 = (panda$core$Int64) {63};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s165, $tmp164, &$s166);
abort(); // unreachable
block13:;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp156, $tmp157, $tmp159, $tmp161);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp167 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp168 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp167, $tmp168);
org$pandalanguage$pandac$IR$Value* $tmp169 = org$pandalanguage$pandac$expression$Binary$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp145, $tmp147, $tmp148, $tmp155, $tmp156, $tmp167);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
// unreffing REF($188:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
// unreffing REF($185:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp156));
// unreffing REF($170:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
// unreffing REF($161:org.pandalanguage.pandac.ASTNode)
return $tmp169;

}
void org$pandalanguage$pandac$lvalue$IndexLValue$compileStore$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$lvalue$IndexLValue* param0, org$pandalanguage$pandac$IR$Value* param1) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
org$pandalanguage$pandac$Symbol* local1 = NULL;
panda$collections$ListView* local2 = NULL;
panda$collections$Array* local3 = NULL;
org$pandalanguage$pandac$Pair* local4 = NULL;
panda$collections$Array* local5 = NULL;
// line 69
org$pandalanguage$pandac$IR$Value** $tmp170 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp171 = *$tmp170;
panda$core$Bit $tmp172 = panda$core$Bit$init$builtin_bit($tmp171 == NULL);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block1; else goto block2;
block1:;
// line 70
org$pandalanguage$pandac$Compiler** $tmp174 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp175 = *$tmp174;
org$pandalanguage$pandac$IR$Value** $tmp176 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp177 = *$tmp176;
$fn179 $tmp178 = ($fn179) $tmp177->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp180 = $tmp178($tmp177);
org$pandalanguage$pandac$ClassDecl* $tmp181 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q($tmp175, $tmp180);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
org$pandalanguage$pandac$ClassDecl* $tmp182 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
*(&local0) = $tmp181;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
// unreffing REF($14:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
// unreffing REF($13:org.pandalanguage.pandac.Type)
// line 71
org$pandalanguage$pandac$ClassDecl* $tmp183 = *(&local0);
panda$core$Bit $tmp184 = panda$core$Bit$init$builtin_bit($tmp183 == NULL);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block3; else goto block4;
block3:;
// line 72
org$pandalanguage$pandac$ClassDecl* $tmp186 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return;
block4:;
// line 74
org$pandalanguage$pandac$Compiler** $tmp187 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp188 = *$tmp187;
org$pandalanguage$pandac$ClassDecl* $tmp189 = *(&local0);
panda$core$Bit $tmp190 = panda$core$Bit$init$builtin_bit($tmp189 != NULL);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp192 = (panda$core$Int64) {74};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s193, $tmp192, &$s194);
abort(); // unreachable
block5:;
org$pandalanguage$pandac$SymbolTable* $tmp195 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable($tmp188, $tmp189);
org$pandalanguage$pandac$Symbol* $tmp196 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp195, &$s197);
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
org$pandalanguage$pandac$Symbol* $tmp198 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
*(&local1) = $tmp196;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
// unreffing REF($54:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
// unreffing REF($53:org.pandalanguage.pandac.SymbolTable)
// line 75
org$pandalanguage$pandac$Symbol* $tmp199 = *(&local1);
panda$core$Bit $tmp200 = panda$core$Bit$init$builtin_bit($tmp199 == NULL);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block7; else goto block8;
block7:;
// line 76
org$pandalanguage$pandac$Compiler** $tmp202 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp203 = *$tmp202;
org$pandalanguage$pandac$Position* $tmp204 = &param0->position;
org$pandalanguage$pandac$Position $tmp205 = *$tmp204;
org$pandalanguage$pandac$IR$Value** $tmp206 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp207 = *$tmp206;
$fn209 $tmp208 = ($fn209) $tmp207->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp210 = $tmp208($tmp207);
panda$core$String* $tmp211 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s212, ((panda$core$Object*) $tmp210));
panda$core$String* $tmp213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp211, &$s214);
$fn216 $tmp215 = ($fn216) param1->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp217 = $tmp215(param1);
panda$core$String* $tmp218 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s219, ((panda$core$Object*) $tmp217));
panda$core$String* $tmp220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp218, &$s221);
panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp213, $tmp220);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String($tmp203, $tmp205, $tmp222);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
// unreffing REF($91:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
// unreffing REF($90:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
// unreffing REF($89:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
// unreffing REF($87:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
// unreffing REF($85:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
// unreffing REF($84:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
// unreffing REF($82:org.pandalanguage.pandac.Type)
// line 78
org$pandalanguage$pandac$Symbol* $tmp223 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
// unreffing assignment
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp224 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return;
block8:;
// line 80
*(&local2) = ((panda$collections$ListView*) NULL);
// line 81
org$pandalanguage$pandac$Symbol* $tmp225 = *(&local1);
panda$core$Bit $tmp226 = panda$core$Bit$init$builtin_bit($tmp225 != NULL);
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp228 = (panda$core$Int64) {81};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s229, $tmp228, &$s230);
abort(); // unreachable
block9:;
org$pandalanguage$pandac$Symbol$Kind* $tmp231 = &$tmp225->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp232 = *$tmp231;
panda$core$Int64 $tmp233 = $tmp232.$rawValue;
panda$core$Int64 $tmp234 = (panda$core$Int64) {5};
panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp233, $tmp234);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block12; else goto block13;
block12:;
// line 83
panda$collections$Array* $tmp237 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp237);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp237)));
panda$collections$ListView* $tmp238 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
*(&local2) = ((panda$collections$ListView*) $tmp237);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
// unreffing REF($146:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 84
panda$collections$ListView* $tmp239 = *(&local2);
org$pandalanguage$pandac$Symbol* $tmp240 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T(((panda$collections$Array*) $tmp239), ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp240)));
goto block11;
block13:;
panda$core$Int64 $tmp241 = (panda$core$Int64) {6};
panda$core$Bit $tmp242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp233, $tmp241);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block14; else goto block15;
block14:;
// line 87
org$pandalanguage$pandac$Symbol* $tmp244 = *(&local1);
org$pandalanguage$pandac$FixedArray** $tmp245 = &((org$pandalanguage$pandac$Methods*) $tmp244)->methods;
org$pandalanguage$pandac$FixedArray* $tmp246 = *$tmp245;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp246)));
panda$collections$ListView* $tmp247 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
*(&local2) = ((panda$collections$ListView*) $tmp246);
goto block11;
block15:;
// line 90
panda$core$Bit $tmp248 = panda$core$Bit$init$builtin_bit(false);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp250 = (panda$core$Int64) {90};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s251, $tmp250);
abort(); // unreachable
block16:;
goto block11;
block11:;
// line 93
panda$collections$Array* $tmp252 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp252);
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
panda$collections$Array* $tmp253 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
*(&local3) = $tmp252;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
// unreffing REF($194:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 94
panda$collections$Array* $tmp254 = *(&local3);
org$pandalanguage$pandac$ASTNode** $tmp255 = &param0->rawIndex;
org$pandalanguage$pandac$ASTNode* $tmp256 = *$tmp255;
panda$collections$Array$add$panda$collections$Array$T($tmp254, ((panda$core$Object*) $tmp256));
// line 95
panda$collections$Array* $tmp257 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp258 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp259 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position* $tmp260 = &param0->position;
org$pandalanguage$pandac$Position $tmp261 = *$tmp260;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp258, $tmp259, $tmp261, param1);
panda$collections$Array$add$panda$collections$Array$T($tmp257, ((panda$core$Object*) $tmp258));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
// unreffing REF($217:org.pandalanguage.pandac.ASTNode)
// line 96
org$pandalanguage$pandac$Compiler** $tmp262 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp263 = *$tmp262;
org$pandalanguage$pandac$Position* $tmp264 = &param0->position;
org$pandalanguage$pandac$Position $tmp265 = *$tmp264;
org$pandalanguage$pandac$IR$Value** $tmp266 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp267 = *$tmp266;
panda$collections$ListView* $tmp268 = *(&local2);
panda$collections$Array* $tmp269 = *(&local3);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp270 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp271 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp270, $tmp271);
org$pandalanguage$pandac$Pair* $tmp272 = org$pandalanguage$pandac$expression$Call$findBestMethod$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q($tmp263, $tmp265, $tmp267, $tmp268, ((panda$collections$ListView*) $tmp269), $tmp270);
*(&local4) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
org$pandalanguage$pandac$Pair* $tmp273 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
*(&local4) = $tmp272;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
// unreffing REF($241:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
// unreffing REF($238:org.pandalanguage.pandac.Compiler.TypeContext)
// line 98
org$pandalanguage$pandac$Pair* $tmp274 = *(&local4);
panda$core$Bit $tmp275 = panda$core$Bit$init$builtin_bit($tmp274 != NULL);
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block18; else goto block19;
block18:;
// line 99
org$pandalanguage$pandac$Pair* $tmp277 = *(&local4);
panda$core$Bit $tmp278 = panda$core$Bit$init$builtin_bit($tmp277 != NULL);
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp280 = (panda$core$Int64) {99};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s281, $tmp280, &$s282);
abort(); // unreachable
block20:;
panda$core$Object** $tmp283 = &$tmp277->first;
panda$core$Object* $tmp284 = *$tmp283;
ITable* $tmp285 = ((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp284))->$class->itable;
while ($tmp285->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp285 = $tmp285->next;
}
$fn287 $tmp286 = $tmp285->methods[0];
panda$core$Int64 $tmp288 = $tmp286(((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp284)));
panda$core$Int64 $tmp289 = (panda$core$Int64) {1};
panda$core$Bit $tmp290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp288, $tmp289);
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp292 = (panda$core$Int64) {99};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s293, $tmp292);
abort(); // unreachable
block22:;
// line 100
org$pandalanguage$pandac$Compiler** $tmp294 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp295 = *$tmp294;
org$pandalanguage$pandac$ASTNode** $tmp296 = &param0->rawIndex;
org$pandalanguage$pandac$ASTNode* $tmp297 = *$tmp296;
org$pandalanguage$pandac$Compiler$TypeContext* $tmp298 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp299 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Pair* $tmp300 = *(&local4);
panda$core$Bit $tmp301 = panda$core$Bit$init$builtin_bit($tmp300 != NULL);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp303 = (panda$core$Int64) {101};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s304, $tmp303, &$s305);
abort(); // unreachable
block24:;
panda$core$Object** $tmp306 = &$tmp300->first;
panda$core$Object* $tmp307 = *$tmp306;
panda$core$Int64 $tmp308 = (panda$core$Int64) {0};
ITable* $tmp309 = ((panda$collections$ListView*) $tmp307)->$class->itable;
while ($tmp309->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp309 = $tmp309->next;
}
$fn311 $tmp310 = $tmp309->methods[0];
panda$core$Object* $tmp312 = $tmp310(((panda$collections$ListView*) $tmp307), $tmp308);
panda$core$Int64 $tmp313 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp314 = org$pandalanguage$pandac$MethodRef$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp312), $tmp313);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp298, $tmp299, $tmp314);
org$pandalanguage$pandac$IR$Value* $tmp315 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp295, $tmp297, $tmp298);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
org$pandalanguage$pandac$IR$Value** $tmp316 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp317 = *$tmp316;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
org$pandalanguage$pandac$IR$Value** $tmp318 = &param0->index;
*$tmp318 = $tmp315;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
// unreffing REF($311:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
// unreffing REF($309:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp312);
// unreffing REF($306:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
// unreffing REF($289:org.pandalanguage.pandac.Compiler.TypeContext)
goto block19;
block19:;
// line 103
org$pandalanguage$pandac$IR$Value** $tmp319 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp320 = *$tmp319;
panda$core$Bit $tmp321 = panda$core$Bit$init$builtin_bit($tmp320 == NULL);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block26; else goto block27;
block26:;
// line 105
org$pandalanguage$pandac$IR$Value* $tmp323 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp324 = (panda$core$Int64) {7};
panda$core$Int64 $tmp325 = (panda$core$Int64) {18446744073709551615};
org$pandalanguage$pandac$IR$Statement$ID $tmp326 = org$pandalanguage$pandac$IR$Statement$ID$init$panda$core$Int64($tmp325);
$fn328 $tmp327 = ($fn328) param0->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp329 = $tmp327(param0);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp323, $tmp324, $tmp326, $tmp329);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp323));
org$pandalanguage$pandac$IR$Value** $tmp330 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp331 = *$tmp330;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
org$pandalanguage$pandac$IR$Value** $tmp332 = &param0->index;
*$tmp332 = $tmp323;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
// unreffing REF($346:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp323));
// unreffing REF($341:org.pandalanguage.pandac.IR.Value)
goto block27;
block27:;
org$pandalanguage$pandac$Pair* $tmp333 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
// unreffing m
*(&local4) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$collections$Array* $tmp334 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
// unreffing args
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$ListView* $tmp335 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp335));
// unreffing methods
*(&local2) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$Symbol* $tmp336 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp336));
// unreffing assignment
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp337 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block2;
block2:;
// line 108
panda$collections$Array* $tmp338 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp338);
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
panda$collections$Array* $tmp339 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
*(&local5) = $tmp338;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
// unreffing REF($391:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 109
panda$collections$Array* $tmp340 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp341 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp342 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position* $tmp343 = &param0->position;
org$pandalanguage$pandac$Position $tmp344 = *$tmp343;
org$pandalanguage$pandac$IR$Value** $tmp345 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp346 = *$tmp345;
panda$core$Bit $tmp347 = panda$core$Bit$init$builtin_bit($tmp346 != NULL);
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp349 = (panda$core$Int64) {109};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s350, $tmp349, &$s351);
abort(); // unreachable
block28:;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp341, $tmp342, $tmp344, $tmp346);
panda$collections$Array$add$panda$collections$Array$T($tmp340, ((panda$core$Object*) $tmp341));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp341));
// unreffing REF($407:org.pandalanguage.pandac.ASTNode)
// line 110
panda$collections$Array* $tmp352 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp353 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp354 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position* $tmp355 = &param0->position;
org$pandalanguage$pandac$Position $tmp356 = *$tmp355;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp353, $tmp354, $tmp356, param1);
panda$collections$Array$add$panda$collections$Array$T($tmp352, ((panda$core$Object*) $tmp353));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
// unreffing REF($430:org.pandalanguage.pandac.ASTNode)
// line 111
org$pandalanguage$pandac$Compiler** $tmp357 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp358 = *$tmp357;
org$pandalanguage$pandac$Position* $tmp359 = &param0->position;
org$pandalanguage$pandac$Position $tmp360 = *$tmp359;
org$pandalanguage$pandac$IR$Value** $tmp361 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp362 = *$tmp361;
panda$collections$Array* $tmp363 = *(&local5);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp364 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp365 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp364, $tmp365);
org$pandalanguage$pandac$IR$Value* $tmp366 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp358, $tmp360, $tmp362, &$s367, ((panda$collections$ListView*) $tmp363), $tmp364);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
// unreffing REF($452:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
// unreffing REF($449:org.pandalanguage.pandac.Compiler.TypeContext)
panda$collections$Array* $tmp368 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
// unreffing args
*(&local5) = ((panda$collections$Array*) NULL);
return;

}
void org$pandalanguage$pandac$lvalue$IndexLValue$cleanup(org$pandalanguage$pandac$lvalue$IndexLValue* param0) {

// line 16
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$Compiler** $tmp369 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp370 = *$tmp369;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp370));
org$pandalanguage$pandac$IR$Value** $tmp371 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp372 = *$tmp371;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
org$pandalanguage$pandac$ASTNode** $tmp373 = &param0->rawIndex;
org$pandalanguage$pandac$ASTNode* $tmp374 = *$tmp373;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
org$pandalanguage$pandac$IR$Value** $tmp375 = &param0->index;
org$pandalanguage$pandac$IR$Value* $tmp376 = *$tmp375;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
return;

}

