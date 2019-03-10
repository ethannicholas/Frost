#include "org/frostlang/frostc/lvalue/LValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/Variable.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/lvalue/IndexLValue.h"
#include "frost/core/Weak.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Compiler/InlineReturn.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/lvalue/ChoiceFieldLValue.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/lvalue/FieldLValue.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/lvalue/VariableLValue.h"
#include "org/frostlang/frostc/Annotations.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$LValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { NULL, NULL, NULL} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$LValue$class_type org$frostlang$frostc$lvalue$LValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$LValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, NULL, NULL} };

typedef frost$core$Bit (*$fn29)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn93)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn97)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn102)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn204)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn269)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn283)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn298)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn317)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn347)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn361)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn376)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn395)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn420)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn424)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn434)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn438)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn443)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn496)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn510)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn525)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn544)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn580)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn594)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn609)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn628)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn672)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Position (*$fn711)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn728)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn737)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn871)(org$frostlang$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 34, -6270392730645118004, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 1290461307291656944, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 1290461307291656944, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x6f\x64\x69\x66\x79\x20\x76\x61\x6c\x75\x65\x20\x66\x69\x65\x6c\x64\x73\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 52, -2764158439429461122, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s518 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s552 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s563 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 1290461307291656944, NULL };
static frost$core$String $s588 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s589 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s636 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s637 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s730 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, 3872445340070684666, NULL };
static frost$core$String $s743 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 2255341192871350238, NULL };
static frost$core$String $s745 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20", 31, 7920137692206573202, NULL };
static frost$core$String $s748 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s750 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s810 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x27", 18, 654003304789403089, NULL };
static frost$core$String $s812 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s867 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, -8767184032745329904, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x29", 33, 6411653699508251529, NULL };

org$frostlang$frostc$lvalue$LValue* org$frostlang$frostc$lvalue$LValue$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$lvalue$LValue$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1) {

org$frostlang$frostc$Position local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$expression$Binary$Operator local2;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$expression$Binary$Operator local4;
org$frostlang$frostc$expression$Binary$Operator local5;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$Position local7;
org$frostlang$frostc$ASTNode* local8 = NULL;
org$frostlang$frostc$ChoiceCase* local9 = NULL;
frost$core$Int local10;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local12 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local13 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local14 = NULL;
frost$core$Int local15;
org$frostlang$frostc$ASTNode* local16 = NULL;
frost$core$String* local17 = NULL;
org$frostlang$frostc$IR$Value* local18 = NULL;
org$frostlang$frostc$MethodDecl$Kind local19;
org$frostlang$frostc$MethodDecl$Kind local20;
org$frostlang$frostc$Compiler$EnclosingContext* local21 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local22 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local23 = NULL;
frost$core$Int local24;
org$frostlang$frostc$ClassDecl* local25 = NULL;
org$frostlang$frostc$Symbol* local26 = NULL;
org$frostlang$frostc$FieldDecl* local27 = NULL;
org$frostlang$frostc$Position local28;
frost$core$String* local29 = NULL;
org$frostlang$frostc$Symbol* local30 = NULL;
org$frostlang$frostc$Variable* local31 = NULL;
org$frostlang$frostc$FieldDecl* local32 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:33
frost$core$Int64* $tmp2 = &param1->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:34:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp10 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp11 = *$tmp10;
*(&local0) = $tmp11;
org$frostlang$frostc$ASTNode** $tmp12 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp13 = *$tmp12;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
org$frostlang$frostc$ASTNode* $tmp14 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
*(&local1) = $tmp13;
org$frostlang$frostc$expression$Binary$Operator* $tmp15 = (org$frostlang$frostc$expression$Binary$Operator*) (param1->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp16 = *$tmp15;
*(&local2) = $tmp16;
org$frostlang$frostc$ASTNode** $tmp17 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp18 = *$tmp17;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
org$frostlang$frostc$ASTNode* $tmp19 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
*(&local3) = $tmp18;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:35
org$frostlang$frostc$expression$Binary$Operator $tmp20 = *(&local2);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp21;
$tmp21 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp21->value = $tmp20;
frost$core$Int64 $tmp22 = (frost$core$Int64) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from LValue.frost:35:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int64* $tmp23 = &(&local5)->$rawValue;
*$tmp23 = $tmp22;
org$frostlang$frostc$expression$Binary$Operator $tmp24 = *(&local5);
*(&local4) = $tmp24;
org$frostlang$frostc$expression$Binary$Operator $tmp25 = *(&local4);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp26;
$tmp26 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp26->value = $tmp25;
ITable* $tmp27 = ((frost$core$Equatable*) $tmp21)->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp27 = $tmp27->next;
}
$fn29 $tmp28 = $tmp27->methods[0];
frost$core$Bit $tmp30 = $tmp28(((frost$core$Equatable*) $tmp21), ((frost$core$Equatable*) $tmp26));
bool $tmp31 = $tmp30.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp26)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp21)));
if ($tmp31) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:36
org$frostlang$frostc$ASTNode* $tmp32 = *(&local1);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from LValue.frost:36:61
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:5155
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp33 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp34 = (frost$core$Int64) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp33, $tmp34);
org$frostlang$frostc$IR$Value* $tmp35 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp32, $tmp33);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
org$frostlang$frostc$IR$Value* $tmp36 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local6) = $tmp35;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:37
org$frostlang$frostc$IR$Value* $tmp37 = *(&local6);
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37 == NULL};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp40 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp41 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp42 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:40
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$lvalue$IndexLValue));
org$frostlang$frostc$lvalue$IndexLValue* $tmp43 = (org$frostlang$frostc$lvalue$IndexLValue*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$lvalue$IndexLValue$class);
org$frostlang$frostc$Position $tmp44 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp45 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp46 = *(&local3);
org$frostlang$frostc$lvalue$IndexLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ASTNode($tmp43, param0, $tmp44, $tmp45, $tmp46);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp43)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
org$frostlang$frostc$IR$Value* $tmp47 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp48 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp49 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp43);
block6:;
org$frostlang$frostc$ASTNode* $tmp50 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp51 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp52 = (frost$core$Int64) {11u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:43:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp53 = $tmp3.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 == $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp58 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp59 = *$tmp58;
*(&local7) = $tmp59;
org$frostlang$frostc$ASTNode** $tmp60 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp61 = *$tmp60;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
org$frostlang$frostc$ASTNode* $tmp62 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local8) = $tmp61;
org$frostlang$frostc$ChoiceCase** $tmp63 = (org$frostlang$frostc$ChoiceCase**) (param1->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp64 = *$tmp63;
*(&local9) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
org$frostlang$frostc$ChoiceCase* $tmp65 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local9) = $tmp64;
frost$core$Int* $tmp66 = (frost$core$Int*) (param1->$data + 40);
frost$core$Int $tmp67 = *$tmp66;
*(&local10) = $tmp67;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:44
org$frostlang$frostc$ASTNode* $tmp68 = *(&local8);
frost$core$Int64* $tmp69 = &$tmp68->$rawValue;
frost$core$Int64 $tmp70 = *$tmp69;
frost$core$Int64 $tmp71 = (frost$core$Int64) {39u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:45:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp72 = $tmp70.value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 == $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:46
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:47
org$frostlang$frostc$ChoiceCase* $tmp77 = *(&local9);
frost$core$Weak** $tmp78 = &$tmp77->owner;
frost$core$Weak* $tmp79 = *$tmp78;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LValue.frost:47:47
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp80 = &$tmp79->_valid;
frost$core$Bit $tmp81 = *$tmp80;
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block23; else goto block24;
block24:;
frost$core$Int $tmp83 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s84, $tmp83);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp85 = &$tmp79->value;
frost$core$Object* $tmp86 = *$tmp85;
frost$core$Frost$ref$frost$core$Object$Q($tmp86);
frost$core$Bit $tmp87 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp86));
bool $tmp88 = $tmp87.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp86);
if ($tmp88) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:48
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from LValue.frost:48:68
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:5884
frost$collections$Stack** $tmp89 = &param0->enclosingContexts;
frost$collections$Stack* $tmp90 = *$tmp89;
ITable* $tmp91 = ((frost$collections$Iterable*) $tmp90)->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[0];
frost$collections$Iterator* $tmp94 = $tmp92(((frost$collections$Iterable*) $tmp90));
goto block26;
block26:;
ITable* $tmp95 = $tmp94->$class->itable;
while ($tmp95->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp95 = $tmp95->next;
}
$fn97 $tmp96 = $tmp95->methods[0];
frost$core$Bit $tmp98 = $tmp96($tmp94);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block28; else goto block27;
block27:;
*(&local13) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp100 = $tmp94->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[1];
frost$core$Object* $tmp103 = $tmp101($tmp94);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp103)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp104 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local13) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp103);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:5885
org$frostlang$frostc$Compiler$EnclosingContext* $tmp105 = *(&local13);
frost$core$Int64* $tmp106 = &$tmp105->$rawValue;
frost$core$Int64 $tmp107 = *$tmp106;
frost$core$Int64 $tmp108 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:5886:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp109 = $tmp107.value;
int64_t $tmp110 = $tmp108.value;
bool $tmp111 = $tmp109 == $tmp110;
frost$core$Bit $tmp112 = (frost$core$Bit) {$tmp111};
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block30; else goto block29;
block30:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:5887
org$frostlang$frostc$Compiler$EnclosingContext* $tmp114 = *(&local13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q($tmp103);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp115 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local13) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local12) = $tmp114;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
goto block25;
block29:;
frost$core$Frost$unref$frost$core$Object$Q($tmp103);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp116 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local13) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:5891
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
*(&local12) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
goto block25;
block25:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp117 = *(&local12);
*(&local14) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp118 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local14) = $tmp117;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:49
org$frostlang$frostc$Compiler$EnclosingContext* $tmp119 = *(&local14);
frost$core$Bit $tmp120 = (frost$core$Bit) {$tmp119 != NULL};
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block32; else goto block34;
block32:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:50
org$frostlang$frostc$Compiler$EnclosingContext* $tmp122 = *(&local14);
frost$core$Int64* $tmp123 = &$tmp122->$rawValue;
frost$core$Int64 $tmp124 = *$tmp123;
frost$core$Int64 $tmp125 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:51:58
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp126 = $tmp124.value;
int64_t $tmp127 = $tmp125.value;
bool $tmp128 = $tmp126 == $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block36; else goto block37;
block36:;
frost$collections$ListView** $tmp131 = (frost$collections$ListView**) ($tmp122->$data + 0);
frost$collections$ListView* $tmp132 = *$tmp131;
frost$core$Int* $tmp133 = (frost$core$Int*) ($tmp122->$data + 8);
frost$core$Int $tmp134 = *$tmp133;
*(&local15) = $tmp134;
org$frostlang$frostc$Compiler$InlineReturn** $tmp135 = (org$frostlang$frostc$Compiler$InlineReturn**) ($tmp122->$data + 16);
org$frostlang$frostc$Compiler$InlineReturn* $tmp136 = *$tmp135;
org$frostlang$frostc$IR$Block$ID* $tmp137 = (org$frostlang$frostc$IR$Block$ID*) ($tmp122->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp138 = *$tmp137;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:52
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp139 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp140 = (frost$core$Int64) {2u};
frost$core$Int $tmp141 = *(&local15);
org$frostlang$frostc$ChoiceCase* $tmp142 = *(&local9);
frost$core$Weak** $tmp143 = &$tmp142->owner;
frost$core$Weak* $tmp144 = *$tmp143;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LValue.frost:52:75
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp145 = &$tmp144->_valid;
frost$core$Bit $tmp146 = *$tmp145;
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block41; else goto block42;
block42:;
frost$core$Int $tmp148 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s149, $tmp148);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp150 = &$tmp144->value;
frost$core$Object* $tmp151 = *$tmp150;
frost$core$Frost$ref$frost$core$Object$Q($tmp151);
org$frostlang$frostc$Type** $tmp152 = &((org$frostlang$frostc$ClassDecl*) $tmp151)->type;
org$frostlang$frostc$Type* $tmp153 = *$tmp152;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int$org$frostlang$frostc$Type($tmp139, $tmp140, $tmp141, $tmp153);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
org$frostlang$frostc$IR$Value* $tmp154 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local11) = $tmp139;
frost$core$Frost$unref$frost$core$Object$Q($tmp151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
goto block33;
block37:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:55
frost$core$Int $tmp155 = (frost$core$Int) {55u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s156, $tmp155);
abort(); // unreachable
block34:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:60
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp157 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp158 = (frost$core$Int64) {2u};
frost$core$Int $tmp159 = (frost$core$Int) {0u};
org$frostlang$frostc$ChoiceCase* $tmp160 = *(&local9);
frost$core$Weak** $tmp161 = &$tmp160->owner;
frost$core$Weak* $tmp162 = *$tmp161;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LValue.frost:60:63
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp163 = &$tmp162->_valid;
frost$core$Bit $tmp164 = *$tmp163;
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block45; else goto block46;
block46:;
frost$core$Int $tmp166 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s167, $tmp166);
abort(); // unreachable
block45:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp168 = &$tmp162->value;
frost$core$Object* $tmp169 = *$tmp168;
frost$core$Frost$ref$frost$core$Object$Q($tmp169);
org$frostlang$frostc$Type** $tmp170 = &((org$frostlang$frostc$ClassDecl*) $tmp169)->type;
org$frostlang$frostc$Type* $tmp171 = *$tmp170;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int$org$frostlang$frostc$Type($tmp157, $tmp158, $tmp159, $tmp171);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
org$frostlang$frostc$IR$Value* $tmp172 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
*(&local11) = $tmp157;
frost$core$Frost$unref$frost$core$Object$Q($tmp169);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
goto block33;
block33:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp173 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
*(&local14) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp174 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local12) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block19;
block20:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:64
org$frostlang$frostc$ASTNode* $tmp175 = *(&local8);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from LValue.frost:64:65
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:5155
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp176 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp177 = (frost$core$Int64) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp176, $tmp177);
org$frostlang$frostc$IR$Value* $tmp178 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp175, $tmp176);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
org$frostlang$frostc$IR$Value* $tmp179 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local11) = $tmp178;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:65
org$frostlang$frostc$IR$Value* $tmp180 = *(&local11);
frost$core$Bit $tmp181 = (frost$core$Bit) {$tmp180 == NULL};
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:66
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp183 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ChoiceCase* $tmp184 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local9) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp185 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block49:;
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:69
org$frostlang$frostc$Position $tmp186 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp187 = *(&local11);
org$frostlang$frostc$ChoiceCase* $tmp188 = *(&local9);
frost$core$Weak** $tmp189 = &$tmp188->owner;
frost$core$Weak* $tmp190 = *$tmp189;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LValue.frost:69:71
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp191 = &$tmp190->_valid;
frost$core$Bit $tmp192 = *$tmp191;
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block52; else goto block53;
block53:;
frost$core$Int $tmp194 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s195, $tmp194);
abort(); // unreachable
block52:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp196 = &$tmp190->value;
frost$core$Object* $tmp197 = *$tmp196;
frost$core$Frost$ref$frost$core$Object$Q($tmp197);
org$frostlang$frostc$Type** $tmp198 = &((org$frostlang$frostc$ClassDecl*) $tmp197)->type;
org$frostlang$frostc$Type* $tmp199 = *$tmp198;
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from LValue.frost:69:50
org$frostlang$frostc$Type** $tmp200 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp201 = *$tmp200;
ITable* $tmp202 = ((frost$core$Equatable*) $tmp199)->$class->itable;
while ($tmp202->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp202 = $tmp202->next;
}
$fn204 $tmp203 = $tmp202->methods[1];
frost$core$Bit $tmp205 = $tmp203(((frost$core$Equatable*) $tmp199), ((frost$core$Equatable*) $tmp201));
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block55; else goto block56;
block56:;
frost$core$Int $tmp207 = (frost$core$Int) {4151u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s208, $tmp207, &$s209);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:4152
frost$core$Bit $tmp210 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp211 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp186, $tmp187, $tmp199, $tmp210);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
org$frostlang$frostc$IR$Value* $tmp212 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local11) = $tmp211;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q($tmp197);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:70
org$frostlang$frostc$IR$Value* $tmp213 = *(&local11);
frost$core$Bit $tmp214 = (frost$core$Bit) {$tmp213 == NULL};
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:71
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp216 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ChoiceCase* $tmp217 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local9) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp218 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block58:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:73
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$lvalue$ChoiceFieldLValue));
org$frostlang$frostc$lvalue$ChoiceFieldLValue* $tmp219 = (org$frostlang$frostc$lvalue$ChoiceFieldLValue*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$lvalue$ChoiceFieldLValue$class);
org$frostlang$frostc$Position $tmp220 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp221 = *(&local11);
org$frostlang$frostc$ChoiceCase* $tmp222 = *(&local9);
frost$core$Int $tmp223 = *(&local10);
org$frostlang$frostc$lvalue$ChoiceFieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int($tmp219, param0, $tmp220, $tmp221, $tmp222, $tmp223);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp219)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
org$frostlang$frostc$IR$Value* $tmp224 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ChoiceCase* $tmp225 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
*(&local9) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp226 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp219);
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:76
frost$core$Bit $tmp227 = (frost$core$Bit) {false};
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block59; else goto block60;
block60:;
frost$core$Int $tmp229 = (frost$core$Int) {76u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s230, $tmp229);
abort(); // unreachable
block59:;
org$frostlang$frostc$ChoiceCase* $tmp231 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local9) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp232 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block12:;
frost$core$Int64 $tmp233 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:80:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp234 = $tmp3.value;
int64_t $tmp235 = $tmp233.value;
bool $tmp236 = $tmp234 == $tmp235;
frost$core$Bit $tmp237 = (frost$core$Bit) {$tmp236};
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block61; else goto block62;
block61:;
org$frostlang$frostc$Position* $tmp239 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp240 = *$tmp239;
org$frostlang$frostc$ASTNode** $tmp241 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp242 = *$tmp241;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
org$frostlang$frostc$ASTNode* $tmp243 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local16) = $tmp242;
frost$core$String** $tmp244 = (frost$core$String**) (param1->$data + 32);
frost$core$String* $tmp245 = *$tmp244;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$core$String* $tmp246 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local17) = $tmp245;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:81
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:82
org$frostlang$frostc$ASTNode* $tmp247 = *(&local16);
frost$core$Int64* $tmp248 = &$tmp247->$rawValue;
frost$core$Int64 $tmp249 = *$tmp248;
frost$core$Int64 $tmp250 = (frost$core$Int64) {39u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:83:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp251 = $tmp249.value;
int64_t $tmp252 = $tmp250.value;
bool $tmp253 = $tmp251 == $tmp252;
frost$core$Bit $tmp254 = (frost$core$Bit) {$tmp253};
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:84
frost$collections$Stack** $tmp256 = &param0->currentClass;
frost$collections$Stack* $tmp257 = *$tmp256;
frost$core$Int $tmp258 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from LValue.frost:84:66
frost$core$Int $tmp259 = (frost$core$Int) {0u};
int64_t $tmp260 = $tmp258.value;
int64_t $tmp261 = $tmp259.value;
bool $tmp262 = $tmp260 >= $tmp261;
frost$core$Bit $tmp263 = (frost$core$Bit) {$tmp262};
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block74; else goto block73;
block74:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp265 = &$tmp257->contents;
frost$collections$Array* $tmp266 = *$tmp265;
ITable* $tmp267 = ((frost$collections$CollectionView*) $tmp266)->$class->itable;
while ($tmp267->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp267 = $tmp267->next;
}
$fn269 $tmp268 = $tmp267->methods[0];
frost$core$Int $tmp270 = $tmp268(((frost$collections$CollectionView*) $tmp266));
int64_t $tmp271 = $tmp258.value;
int64_t $tmp272 = $tmp270.value;
bool $tmp273 = $tmp271 < $tmp272;
frost$core$Bit $tmp274 = (frost$core$Bit) {$tmp273};
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block72; else goto block73;
block73:;
frost$core$Int $tmp276 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s277, $tmp276, &$s278);
abort(); // unreachable
block72:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp279 = &$tmp257->contents;
frost$collections$Array* $tmp280 = *$tmp279;
ITable* $tmp281 = ((frost$collections$CollectionView*) $tmp280)->$class->itable;
while ($tmp281->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp281 = $tmp281->next;
}
$fn283 $tmp282 = $tmp281->methods[0];
frost$core$Int $tmp284 = $tmp282(((frost$collections$CollectionView*) $tmp280));
int64_t $tmp285 = $tmp284.value;
int64_t $tmp286 = $tmp258.value;
bool $tmp287 = $tmp285 > $tmp286;
frost$core$Bit $tmp288 = (frost$core$Bit) {$tmp287};
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block76; else goto block77;
block77:;
frost$core$Int $tmp290 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s291, $tmp290);
abort(); // unreachable
block76:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp292 = &$tmp257->contents;
frost$collections$Array* $tmp293 = *$tmp292;
frost$collections$Array** $tmp294 = &$tmp257->contents;
frost$collections$Array* $tmp295 = *$tmp294;
ITable* $tmp296 = ((frost$collections$CollectionView*) $tmp295)->$class->itable;
while ($tmp296->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp296 = $tmp296->next;
}
$fn298 $tmp297 = $tmp296->methods[0];
frost$core$Int $tmp299 = $tmp297(((frost$collections$CollectionView*) $tmp295));
frost$core$Int $tmp300 = (frost$core$Int) {1u};
int64_t $tmp301 = $tmp299.value;
int64_t $tmp302 = $tmp300.value;
int64_t $tmp303 = $tmp301 - $tmp302;
frost$core$Int $tmp304 = (frost$core$Int) {$tmp303};
int64_t $tmp305 = $tmp304.value;
int64_t $tmp306 = $tmp258.value;
int64_t $tmp307 = $tmp305 - $tmp306;
frost$core$Int $tmp308 = (frost$core$Int) {$tmp307};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp309 = (frost$core$Int) {0u};
int64_t $tmp310 = $tmp308.value;
int64_t $tmp311 = $tmp309.value;
bool $tmp312 = $tmp310 >= $tmp311;
frost$core$Bit $tmp313 = (frost$core$Bit) {$tmp312};
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block81; else goto block80;
block81:;
ITable* $tmp315 = ((frost$collections$CollectionView*) $tmp293)->$class->itable;
while ($tmp315->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp315 = $tmp315->next;
}
$fn317 $tmp316 = $tmp315->methods[0];
frost$core$Int $tmp318 = $tmp316(((frost$collections$CollectionView*) $tmp293));
int64_t $tmp319 = $tmp308.value;
int64_t $tmp320 = $tmp318.value;
bool $tmp321 = $tmp319 < $tmp320;
frost$core$Bit $tmp322 = (frost$core$Bit) {$tmp321};
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block79; else goto block80;
block80:;
frost$core$Int $tmp324 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s325, $tmp324, &$s326);
abort(); // unreachable
block79:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp327 = &$tmp293->data;
frost$core$Object** $tmp328 = *$tmp327;
frost$core$Int64 $tmp329 = frost$core$Int64$init$frost$core$Int($tmp308);
int64_t $tmp330 = $tmp329.value;
frost$core$Object* $tmp331 = $tmp328[$tmp330];
frost$core$Frost$ref$frost$core$Object$Q($tmp331);
frost$core$Frost$ref$frost$core$Object$Q($tmp331);
frost$core$Frost$unref$frost$core$Object$Q($tmp331);
frost$core$Bit $tmp332 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp331));
bool $tmp333 = $tmp332.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp331);
if ($tmp333) goto block68; else goto block70;
block68:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:85
frost$collections$Stack** $tmp334 = &param0->currentMethod;
frost$collections$Stack* $tmp335 = *$tmp334;
frost$core$Int $tmp336 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from LValue.frost:85:54
frost$core$Int $tmp337 = (frost$core$Int) {0u};
int64_t $tmp338 = $tmp336.value;
int64_t $tmp339 = $tmp337.value;
bool $tmp340 = $tmp338 >= $tmp339;
frost$core$Bit $tmp341 = (frost$core$Bit) {$tmp340};
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block87; else goto block86;
block87:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp343 = &$tmp335->contents;
frost$collections$Array* $tmp344 = *$tmp343;
ITable* $tmp345 = ((frost$collections$CollectionView*) $tmp344)->$class->itable;
while ($tmp345->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp345 = $tmp345->next;
}
$fn347 $tmp346 = $tmp345->methods[0];
frost$core$Int $tmp348 = $tmp346(((frost$collections$CollectionView*) $tmp344));
int64_t $tmp349 = $tmp336.value;
int64_t $tmp350 = $tmp348.value;
bool $tmp351 = $tmp349 < $tmp350;
frost$core$Bit $tmp352 = (frost$core$Bit) {$tmp351};
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block85; else goto block86;
block86:;
frost$core$Int $tmp354 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s355, $tmp354, &$s356);
abort(); // unreachable
block85:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp357 = &$tmp335->contents;
frost$collections$Array* $tmp358 = *$tmp357;
ITable* $tmp359 = ((frost$collections$CollectionView*) $tmp358)->$class->itable;
while ($tmp359->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp359 = $tmp359->next;
}
$fn361 $tmp360 = $tmp359->methods[0];
frost$core$Int $tmp362 = $tmp360(((frost$collections$CollectionView*) $tmp358));
int64_t $tmp363 = $tmp362.value;
int64_t $tmp364 = $tmp336.value;
bool $tmp365 = $tmp363 > $tmp364;
frost$core$Bit $tmp366 = (frost$core$Bit) {$tmp365};
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block89; else goto block90;
block90:;
frost$core$Int $tmp368 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s369, $tmp368);
abort(); // unreachable
block89:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp370 = &$tmp335->contents;
frost$collections$Array* $tmp371 = *$tmp370;
frost$collections$Array** $tmp372 = &$tmp335->contents;
frost$collections$Array* $tmp373 = *$tmp372;
ITable* $tmp374 = ((frost$collections$CollectionView*) $tmp373)->$class->itable;
while ($tmp374->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp374 = $tmp374->next;
}
$fn376 $tmp375 = $tmp374->methods[0];
frost$core$Int $tmp377 = $tmp375(((frost$collections$CollectionView*) $tmp373));
frost$core$Int $tmp378 = (frost$core$Int) {1u};
int64_t $tmp379 = $tmp377.value;
int64_t $tmp380 = $tmp378.value;
int64_t $tmp381 = $tmp379 - $tmp380;
frost$core$Int $tmp382 = (frost$core$Int) {$tmp381};
int64_t $tmp383 = $tmp382.value;
int64_t $tmp384 = $tmp336.value;
int64_t $tmp385 = $tmp383 - $tmp384;
frost$core$Int $tmp386 = (frost$core$Int) {$tmp385};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp387 = (frost$core$Int) {0u};
int64_t $tmp388 = $tmp386.value;
int64_t $tmp389 = $tmp387.value;
bool $tmp390 = $tmp388 >= $tmp389;
frost$core$Bit $tmp391 = (frost$core$Bit) {$tmp390};
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block94; else goto block93;
block94:;
ITable* $tmp393 = ((frost$collections$CollectionView*) $tmp371)->$class->itable;
while ($tmp393->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp393 = $tmp393->next;
}
$fn395 $tmp394 = $tmp393->methods[0];
frost$core$Int $tmp396 = $tmp394(((frost$collections$CollectionView*) $tmp371));
int64_t $tmp397 = $tmp386.value;
int64_t $tmp398 = $tmp396.value;
bool $tmp399 = $tmp397 < $tmp398;
frost$core$Bit $tmp400 = (frost$core$Bit) {$tmp399};
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block92; else goto block93;
block93:;
frost$core$Int $tmp402 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s403, $tmp402, &$s404);
abort(); // unreachable
block92:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp405 = &$tmp371->data;
frost$core$Object** $tmp406 = *$tmp405;
frost$core$Int64 $tmp407 = frost$core$Int64$init$frost$core$Int($tmp386);
int64_t $tmp408 = $tmp407.value;
frost$core$Object* $tmp409 = $tmp406[$tmp408];
frost$core$Frost$ref$frost$core$Object$Q($tmp409);
frost$core$Frost$ref$frost$core$Object$Q($tmp409);
frost$core$Frost$unref$frost$core$Object$Q($tmp409);
org$frostlang$frostc$MethodDecl$Kind* $tmp410 = &((org$frostlang$frostc$MethodDecl*) $tmp409)->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp411 = *$tmp410;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp412;
$tmp412 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp412->value = $tmp411;
frost$core$Int64 $tmp413 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from LValue.frost:85:87
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp414 = &(&local20)->$rawValue;
*$tmp414 = $tmp413;
org$frostlang$frostc$MethodDecl$Kind $tmp415 = *(&local20);
*(&local19) = $tmp415;
org$frostlang$frostc$MethodDecl$Kind $tmp416 = *(&local19);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp417;
$tmp417 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp417->value = $tmp416;
ITable* $tmp418 = ((frost$core$Equatable*) $tmp412)->$class->itable;
while ($tmp418->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp418 = $tmp418->next;
}
$fn420 $tmp419 = $tmp418->methods[1];
frost$core$Bit $tmp421 = $tmp419(((frost$core$Equatable*) $tmp412), ((frost$core$Equatable*) $tmp417));
bool $tmp422 = $tmp421.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp417)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp412)));
frost$core$Frost$unref$frost$core$Object$Q($tmp409);
if ($tmp422) goto block82; else goto block83;
block82:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:86
$fn424 $tmp423 = ($fn424) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp425 = $tmp423(param1);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp425, &$s426);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:88
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp427 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp428 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp429 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block83:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:90
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from LValue.frost:90:68
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:5884
frost$collections$Stack** $tmp430 = &param0->enclosingContexts;
frost$collections$Stack* $tmp431 = *$tmp430;
ITable* $tmp432 = ((frost$collections$Iterable*) $tmp431)->$class->itable;
while ($tmp432->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp432 = $tmp432->next;
}
$fn434 $tmp433 = $tmp432->methods[0];
frost$collections$Iterator* $tmp435 = $tmp433(((frost$collections$Iterable*) $tmp431));
goto block97;
block97:;
ITable* $tmp436 = $tmp435->$class->itable;
while ($tmp436->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp436 = $tmp436->next;
}
$fn438 $tmp437 = $tmp436->methods[0];
frost$core$Bit $tmp439 = $tmp437($tmp435);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block99; else goto block98;
block98:;
*(&local22) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp441 = $tmp435->$class->itable;
while ($tmp441->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp441 = $tmp441->next;
}
$fn443 $tmp442 = $tmp441->methods[1];
frost$core$Object* $tmp444 = $tmp442($tmp435);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp444)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp445 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
*(&local22) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp444);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:5885
org$frostlang$frostc$Compiler$EnclosingContext* $tmp446 = *(&local22);
frost$core$Int64* $tmp447 = &$tmp446->$rawValue;
frost$core$Int64 $tmp448 = *$tmp447;
frost$core$Int64 $tmp449 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:5886:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp450 = $tmp448.value;
int64_t $tmp451 = $tmp449.value;
bool $tmp452 = $tmp450 == $tmp451;
frost$core$Bit $tmp453 = (frost$core$Bit) {$tmp452};
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block101; else goto block100;
block101:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:5887
org$frostlang$frostc$Compiler$EnclosingContext* $tmp455 = *(&local22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
frost$core$Frost$unref$frost$core$Object$Q($tmp444);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp456 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local22) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
*(&local21) = $tmp455;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
goto block96;
block100:;
frost$core$Frost$unref$frost$core$Object$Q($tmp444);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp457 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local22) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block97;
block99:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:5891
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
*(&local21) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
goto block96;
block96:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp458 = *(&local21);
*(&local23) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp459 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local23) = $tmp458;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:91
org$frostlang$frostc$Compiler$EnclosingContext* $tmp460 = *(&local23);
frost$core$Bit $tmp461 = (frost$core$Bit) {$tmp460 != NULL};
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block103; else goto block105;
block103:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:92
org$frostlang$frostc$Compiler$EnclosingContext* $tmp463 = *(&local23);
frost$core$Int64* $tmp464 = &$tmp463->$rawValue;
frost$core$Int64 $tmp465 = *$tmp464;
frost$core$Int64 $tmp466 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:93:67
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp467 = $tmp465.value;
int64_t $tmp468 = $tmp466.value;
bool $tmp469 = $tmp467 == $tmp468;
frost$core$Bit $tmp470 = (frost$core$Bit) {$tmp469};
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block107; else goto block108;
block107:;
frost$collections$ListView** $tmp472 = (frost$collections$ListView**) ($tmp463->$data + 0);
frost$collections$ListView* $tmp473 = *$tmp472;
frost$core$Int* $tmp474 = (frost$core$Int*) ($tmp463->$data + 8);
frost$core$Int $tmp475 = *$tmp474;
*(&local24) = $tmp475;
org$frostlang$frostc$Compiler$InlineReturn** $tmp476 = (org$frostlang$frostc$Compiler$InlineReturn**) ($tmp463->$data + 16);
org$frostlang$frostc$Compiler$InlineReturn* $tmp477 = *$tmp476;
org$frostlang$frostc$IR$Block$ID* $tmp478 = (org$frostlang$frostc$IR$Block$ID*) ($tmp463->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp479 = *$tmp478;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:95
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp480 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp481 = (frost$core$Int64) {2u};
frost$core$Int $tmp482 = *(&local24);
frost$collections$Stack** $tmp483 = &param0->currentClass;
frost$collections$Stack* $tmp484 = *$tmp483;
frost$core$Int $tmp485 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from LValue.frost:96:70
frost$core$Int $tmp486 = (frost$core$Int) {0u};
int64_t $tmp487 = $tmp485.value;
int64_t $tmp488 = $tmp486.value;
bool $tmp489 = $tmp487 >= $tmp488;
frost$core$Bit $tmp490 = (frost$core$Bit) {$tmp489};
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block113; else goto block112;
block113:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp492 = &$tmp484->contents;
frost$collections$Array* $tmp493 = *$tmp492;
ITable* $tmp494 = ((frost$collections$CollectionView*) $tmp493)->$class->itable;
while ($tmp494->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp494 = $tmp494->next;
}
$fn496 $tmp495 = $tmp494->methods[0];
frost$core$Int $tmp497 = $tmp495(((frost$collections$CollectionView*) $tmp493));
int64_t $tmp498 = $tmp485.value;
int64_t $tmp499 = $tmp497.value;
bool $tmp500 = $tmp498 < $tmp499;
frost$core$Bit $tmp501 = (frost$core$Bit) {$tmp500};
bool $tmp502 = $tmp501.value;
if ($tmp502) goto block111; else goto block112;
block112:;
frost$core$Int $tmp503 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s504, $tmp503, &$s505);
abort(); // unreachable
block111:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp506 = &$tmp484->contents;
frost$collections$Array* $tmp507 = *$tmp506;
ITable* $tmp508 = ((frost$collections$CollectionView*) $tmp507)->$class->itable;
while ($tmp508->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp508 = $tmp508->next;
}
$fn510 $tmp509 = $tmp508->methods[0];
frost$core$Int $tmp511 = $tmp509(((frost$collections$CollectionView*) $tmp507));
int64_t $tmp512 = $tmp511.value;
int64_t $tmp513 = $tmp485.value;
bool $tmp514 = $tmp512 > $tmp513;
frost$core$Bit $tmp515 = (frost$core$Bit) {$tmp514};
bool $tmp516 = $tmp515.value;
if ($tmp516) goto block115; else goto block116;
block116:;
frost$core$Int $tmp517 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s518, $tmp517);
abort(); // unreachable
block115:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp519 = &$tmp484->contents;
frost$collections$Array* $tmp520 = *$tmp519;
frost$collections$Array** $tmp521 = &$tmp484->contents;
frost$collections$Array* $tmp522 = *$tmp521;
ITable* $tmp523 = ((frost$collections$CollectionView*) $tmp522)->$class->itable;
while ($tmp523->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp523 = $tmp523->next;
}
$fn525 $tmp524 = $tmp523->methods[0];
frost$core$Int $tmp526 = $tmp524(((frost$collections$CollectionView*) $tmp522));
frost$core$Int $tmp527 = (frost$core$Int) {1u};
int64_t $tmp528 = $tmp526.value;
int64_t $tmp529 = $tmp527.value;
int64_t $tmp530 = $tmp528 - $tmp529;
frost$core$Int $tmp531 = (frost$core$Int) {$tmp530};
int64_t $tmp532 = $tmp531.value;
int64_t $tmp533 = $tmp485.value;
int64_t $tmp534 = $tmp532 - $tmp533;
frost$core$Int $tmp535 = (frost$core$Int) {$tmp534};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp536 = (frost$core$Int) {0u};
int64_t $tmp537 = $tmp535.value;
int64_t $tmp538 = $tmp536.value;
bool $tmp539 = $tmp537 >= $tmp538;
frost$core$Bit $tmp540 = (frost$core$Bit) {$tmp539};
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block120; else goto block119;
block120:;
ITable* $tmp542 = ((frost$collections$CollectionView*) $tmp520)->$class->itable;
while ($tmp542->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp542 = $tmp542->next;
}
$fn544 $tmp543 = $tmp542->methods[0];
frost$core$Int $tmp545 = $tmp543(((frost$collections$CollectionView*) $tmp520));
int64_t $tmp546 = $tmp535.value;
int64_t $tmp547 = $tmp545.value;
bool $tmp548 = $tmp546 < $tmp547;
frost$core$Bit $tmp549 = (frost$core$Bit) {$tmp548};
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block118; else goto block119;
block119:;
frost$core$Int $tmp551 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s552, $tmp551, &$s553);
abort(); // unreachable
block118:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp554 = &$tmp520->data;
frost$core$Object** $tmp555 = *$tmp554;
frost$core$Int64 $tmp556 = frost$core$Int64$init$frost$core$Int($tmp535);
int64_t $tmp557 = $tmp556.value;
frost$core$Object* $tmp558 = $tmp555[$tmp557];
frost$core$Frost$ref$frost$core$Object$Q($tmp558);
frost$core$Frost$ref$frost$core$Object$Q($tmp558);
frost$core$Frost$unref$frost$core$Object$Q($tmp558);
org$frostlang$frostc$Type** $tmp559 = &((org$frostlang$frostc$ClassDecl*) $tmp558)->type;
org$frostlang$frostc$Type* $tmp560 = *$tmp559;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int$org$frostlang$frostc$Type($tmp480, $tmp481, $tmp482, $tmp560);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
org$frostlang$frostc$IR$Value* $tmp561 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
*(&local18) = $tmp480;
frost$core$Frost$unref$frost$core$Object$Q($tmp558);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
goto block104;
block108:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:99
frost$core$Int $tmp562 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s563, $tmp562);
abort(); // unreachable
block105:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:104
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp564 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp565 = (frost$core$Int64) {2u};
frost$core$Int $tmp566 = (frost$core$Int) {0u};
frost$collections$Stack** $tmp567 = &param0->currentClass;
frost$collections$Stack* $tmp568 = *$tmp567;
frost$core$Int $tmp569 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from LValue.frost:104:88
frost$core$Int $tmp570 = (frost$core$Int) {0u};
int64_t $tmp571 = $tmp569.value;
int64_t $tmp572 = $tmp570.value;
bool $tmp573 = $tmp571 >= $tmp572;
frost$core$Bit $tmp574 = (frost$core$Bit) {$tmp573};
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block124; else goto block123;
block124:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp576 = &$tmp568->contents;
frost$collections$Array* $tmp577 = *$tmp576;
ITable* $tmp578 = ((frost$collections$CollectionView*) $tmp577)->$class->itable;
while ($tmp578->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp578 = $tmp578->next;
}
$fn580 $tmp579 = $tmp578->methods[0];
frost$core$Int $tmp581 = $tmp579(((frost$collections$CollectionView*) $tmp577));
int64_t $tmp582 = $tmp569.value;
int64_t $tmp583 = $tmp581.value;
bool $tmp584 = $tmp582 < $tmp583;
frost$core$Bit $tmp585 = (frost$core$Bit) {$tmp584};
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block122; else goto block123;
block123:;
frost$core$Int $tmp587 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s588, $tmp587, &$s589);
abort(); // unreachable
block122:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp590 = &$tmp568->contents;
frost$collections$Array* $tmp591 = *$tmp590;
ITable* $tmp592 = ((frost$collections$CollectionView*) $tmp591)->$class->itable;
while ($tmp592->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp592 = $tmp592->next;
}
$fn594 $tmp593 = $tmp592->methods[0];
frost$core$Int $tmp595 = $tmp593(((frost$collections$CollectionView*) $tmp591));
int64_t $tmp596 = $tmp595.value;
int64_t $tmp597 = $tmp569.value;
bool $tmp598 = $tmp596 > $tmp597;
frost$core$Bit $tmp599 = (frost$core$Bit) {$tmp598};
bool $tmp600 = $tmp599.value;
if ($tmp600) goto block126; else goto block127;
block127:;
frost$core$Int $tmp601 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s602, $tmp601);
abort(); // unreachable
block126:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp603 = &$tmp568->contents;
frost$collections$Array* $tmp604 = *$tmp603;
frost$collections$Array** $tmp605 = &$tmp568->contents;
frost$collections$Array* $tmp606 = *$tmp605;
ITable* $tmp607 = ((frost$collections$CollectionView*) $tmp606)->$class->itable;
while ($tmp607->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp607 = $tmp607->next;
}
$fn609 $tmp608 = $tmp607->methods[0];
frost$core$Int $tmp610 = $tmp608(((frost$collections$CollectionView*) $tmp606));
frost$core$Int $tmp611 = (frost$core$Int) {1u};
int64_t $tmp612 = $tmp610.value;
int64_t $tmp613 = $tmp611.value;
int64_t $tmp614 = $tmp612 - $tmp613;
frost$core$Int $tmp615 = (frost$core$Int) {$tmp614};
int64_t $tmp616 = $tmp615.value;
int64_t $tmp617 = $tmp569.value;
int64_t $tmp618 = $tmp616 - $tmp617;
frost$core$Int $tmp619 = (frost$core$Int) {$tmp618};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp620 = (frost$core$Int) {0u};
int64_t $tmp621 = $tmp619.value;
int64_t $tmp622 = $tmp620.value;
bool $tmp623 = $tmp621 >= $tmp622;
frost$core$Bit $tmp624 = (frost$core$Bit) {$tmp623};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block131; else goto block130;
block131:;
ITable* $tmp626 = ((frost$collections$CollectionView*) $tmp604)->$class->itable;
while ($tmp626->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp626 = $tmp626->next;
}
$fn628 $tmp627 = $tmp626->methods[0];
frost$core$Int $tmp629 = $tmp627(((frost$collections$CollectionView*) $tmp604));
int64_t $tmp630 = $tmp619.value;
int64_t $tmp631 = $tmp629.value;
bool $tmp632 = $tmp630 < $tmp631;
frost$core$Bit $tmp633 = (frost$core$Bit) {$tmp632};
bool $tmp634 = $tmp633.value;
if ($tmp634) goto block129; else goto block130;
block130:;
frost$core$Int $tmp635 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s636, $tmp635, &$s637);
abort(); // unreachable
block129:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp638 = &$tmp604->data;
frost$core$Object** $tmp639 = *$tmp638;
frost$core$Int64 $tmp640 = frost$core$Int64$init$frost$core$Int($tmp619);
int64_t $tmp641 = $tmp640.value;
frost$core$Object* $tmp642 = $tmp639[$tmp641];
frost$core$Frost$ref$frost$core$Object$Q($tmp642);
frost$core$Frost$ref$frost$core$Object$Q($tmp642);
frost$core$Frost$unref$frost$core$Object$Q($tmp642);
org$frostlang$frostc$Type** $tmp643 = &((org$frostlang$frostc$ClassDecl*) $tmp642)->type;
org$frostlang$frostc$Type* $tmp644 = *$tmp643;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int$org$frostlang$frostc$Type($tmp564, $tmp565, $tmp566, $tmp644);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
org$frostlang$frostc$IR$Value* $tmp645 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
*(&local18) = $tmp564;
frost$core$Frost$unref$frost$core$Object$Q($tmp642);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
goto block104;
block104:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp646 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
*(&local23) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp647 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
*(&local21) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block69;
block70:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:108
org$frostlang$frostc$ASTNode* $tmp648 = *(&local16);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from LValue.frost:108:71
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:5155
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp649 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp650 = (frost$core$Int64) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp649, $tmp650);
org$frostlang$frostc$IR$Value* $tmp651 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp648, $tmp649);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
org$frostlang$frostc$IR$Value* $tmp652 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local18) = $tmp651;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:109
org$frostlang$frostc$IR$Value* $tmp653 = *(&local18);
frost$core$Bit $tmp654 = (frost$core$Bit) {$tmp653 == NULL};
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block133; else goto block134;
block133:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:110
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp656 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp657 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp658 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block134:;
goto block69;
block69:;
goto block64;
block66:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:115
org$frostlang$frostc$ASTNode* $tmp659 = *(&local16);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from LValue.frost:115:67
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:5155
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp660 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp661 = (frost$core$Int64) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp660, $tmp661);
org$frostlang$frostc$IR$Value* $tmp662 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp659, $tmp660);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
org$frostlang$frostc$IR$Value* $tmp663 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local18) = $tmp662;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:116
org$frostlang$frostc$IR$Value* $tmp664 = *(&local18);
frost$core$Bit $tmp665 = (frost$core$Bit) {$tmp664 == NULL};
bool $tmp666 = $tmp665.value;
if ($tmp666) goto block136; else goto block137;
block136:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:117
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp667 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp668 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp669 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block137:;
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:121
org$frostlang$frostc$IR$Value* $tmp670 = *(&local18);
$fn672 $tmp671 = ($fn672) $tmp670->$class->vtable[2];
org$frostlang$frostc$Type* $tmp673 = $tmp671($tmp670);
org$frostlang$frostc$ClassDecl* $tmp674 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp673);
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
org$frostlang$frostc$ClassDecl* $tmp675 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local25) = $tmp674;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:122
org$frostlang$frostc$ClassDecl* $tmp676 = *(&local25);
frost$core$Bit $tmp677 = (frost$core$Bit) {$tmp676 == NULL};
bool $tmp678 = $tmp677.value;
if ($tmp678) goto block138; else goto block139;
block138:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:123
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp679 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp680 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp681 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp682 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block139:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:125
org$frostlang$frostc$ClassDecl* $tmp683 = *(&local25);
org$frostlang$frostc$SymbolTable* $tmp684 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp683);
frost$core$String* $tmp685 = *(&local17);
org$frostlang$frostc$Symbol* $tmp686 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp684, $tmp685);
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
org$frostlang$frostc$Symbol* $tmp687 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
*(&local26) = $tmp686;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:126
org$frostlang$frostc$Symbol* $tmp688 = *(&local26);
frost$core$Bit $tmp689 = (frost$core$Bit) {$tmp688 != NULL};
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block140; else goto block141;
block140:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:127
org$frostlang$frostc$Symbol* $tmp691 = *(&local26);
org$frostlang$frostc$Symbol$Kind* $tmp692 = &$tmp691->kind;
org$frostlang$frostc$Symbol$Kind $tmp693 = *$tmp692;
frost$core$Int64 $tmp694 = $tmp693.$rawValue;
frost$core$Int64 $tmp695 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:128:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp696 = $tmp694.value;
int64_t $tmp697 = $tmp695.value;
bool $tmp698 = $tmp696 == $tmp697;
frost$core$Bit $tmp699 = (frost$core$Bit) {$tmp698};
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block143; else goto block144;
block143:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:129
org$frostlang$frostc$Symbol* $tmp701 = *(&local26);
frost$core$Bit $tmp702 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$FieldDecl*) $tmp701));
bool $tmp703 = $tmp702.value;
if ($tmp703) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:130
org$frostlang$frostc$Symbol* $tmp704 = *(&local26);
*(&local27) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp704)));
org$frostlang$frostc$FieldDecl* $tmp705 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
*(&local27) = ((org$frostlang$frostc$FieldDecl*) $tmp704);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:131
org$frostlang$frostc$FieldDecl* $tmp706 = *(&local27);
frost$core$Bit $tmp707 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp706);
bool $tmp708 = $tmp707.value;
if ($tmp708) goto block148; else goto block149;
block148:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:132
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$lvalue$FieldLValue));
org$frostlang$frostc$lvalue$FieldLValue* $tmp709 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
$fn711 $tmp710 = ($fn711) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp712 = $tmp710(param1);
org$frostlang$frostc$IR$Value* $tmp713 = *(&local18);
org$frostlang$frostc$FieldDecl* $tmp714 = *(&local27);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl($tmp709, param0, $tmp712, $tmp713, $tmp714);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp709)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
org$frostlang$frostc$FieldDecl* $tmp715 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
*(&local27) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp716 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp717 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp718 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp719 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp720 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp709);
block149:;
org$frostlang$frostc$FieldDecl* $tmp721 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
*(&local27) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block147;
block147:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:135
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp722 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp723 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp724 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp725 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp726 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block144:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:138
$fn728 $tmp727 = ($fn728) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp729 = $tmp727(param1);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp729, &$s730);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:139
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp731 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp732 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp733 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp734 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp735 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block142:;
goto block141;
block141:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:143
$fn737 $tmp736 = ($fn737) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp738 = $tmp736(param1);
org$frostlang$frostc$ClassDecl* $tmp739 = *(&local25);
frost$core$String** $tmp740 = &$tmp739->name;
frost$core$String* $tmp741 = *$tmp740;
frost$core$String* $tmp742 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s743, $tmp741);
frost$core$String* $tmp744 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp742, &$s745);
frost$core$String* $tmp746 = *(&local17);
frost$core$String* $tmp747 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s748, $tmp746);
frost$core$String* $tmp749 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp747, &$s750);
frost$core$String* $tmp751 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp744, $tmp749);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp738, $tmp751);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:145
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp752 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp753 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp754 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp755 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp756 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block62:;
frost$core$Int64 $tmp757 = (frost$core$Int64) {22u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:147:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp758 = $tmp3.value;
int64_t $tmp759 = $tmp757.value;
bool $tmp760 = $tmp758 == $tmp759;
frost$core$Bit $tmp761 = (frost$core$Bit) {$tmp760};
bool $tmp762 = $tmp761.value;
if ($tmp762) goto block150; else goto block1;
block150:;
org$frostlang$frostc$Position* $tmp763 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp764 = *$tmp763;
*(&local28) = $tmp764;
frost$core$String** $tmp765 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp766 = *$tmp765;
*(&local29) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$String* $tmp767 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local29) = $tmp766;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:148
org$frostlang$frostc$SymbolTable** $tmp768 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp769 = *$tmp768;
frost$core$String* $tmp770 = *(&local29);
org$frostlang$frostc$Symbol* $tmp771 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp769, $tmp770);
*(&local30) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
org$frostlang$frostc$Symbol* $tmp772 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
*(&local30) = $tmp771;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:149
org$frostlang$frostc$Symbol* $tmp773 = *(&local30);
frost$core$Bit $tmp774 = (frost$core$Bit) {$tmp773 != NULL};
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block152; else goto block153;
block152:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:150
org$frostlang$frostc$Symbol* $tmp776 = *(&local30);
org$frostlang$frostc$Symbol$Kind* $tmp777 = &$tmp776->kind;
org$frostlang$frostc$Symbol$Kind $tmp778 = *$tmp777;
frost$core$Int64 $tmp779 = $tmp778.$rawValue;
frost$core$Int64 $tmp780 = (frost$core$Int64) {9u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:151:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp781 = $tmp779.value;
int64_t $tmp782 = $tmp780.value;
bool $tmp783 = $tmp781 == $tmp782;
frost$core$Bit $tmp784 = (frost$core$Bit) {$tmp783};
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block155; else goto block156;
block155:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:152
org$frostlang$frostc$Symbol* $tmp786 = *(&local30);
*(&local31) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Variable*) $tmp786)));
org$frostlang$frostc$Variable* $tmp787 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
*(&local31) = ((org$frostlang$frostc$Variable*) $tmp786);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:153
org$frostlang$frostc$Variable* $tmp788 = *(&local31);
org$frostlang$frostc$Variable$Storage** $tmp789 = &$tmp788->storage;
org$frostlang$frostc$Variable$Storage* $tmp790 = *$tmp789;
frost$core$Int64* $tmp791 = &$tmp790->$rawValue;
frost$core$Int64 $tmp792 = *$tmp791;
frost$core$Int64 $tmp793 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:154:54
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp794 = $tmp792.value;
int64_t $tmp795 = $tmp793.value;
bool $tmp796 = $tmp794 == $tmp795;
frost$core$Bit $tmp797 = (frost$core$Bit) {$tmp796};
bool $tmp798 = $tmp797.value;
if ($tmp798) goto block159; else goto block160;
block159:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:155
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$lvalue$VariableLValue));
org$frostlang$frostc$lvalue$VariableLValue* $tmp799 = (org$frostlang$frostc$lvalue$VariableLValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$lvalue$VariableLValue$class);
org$frostlang$frostc$Position $tmp800 = *(&local28);
org$frostlang$frostc$Symbol* $tmp801 = *(&local30);
org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable($tmp799, param0, $tmp800, ((org$frostlang$frostc$Variable*) $tmp801));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp799)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
org$frostlang$frostc$Variable* $tmp802 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
*(&local31) = ((org$frostlang$frostc$Variable*) NULL);
org$frostlang$frostc$Symbol* $tmp803 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
*(&local30) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp804 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
*(&local29) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp799);
block160:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:158
org$frostlang$frostc$Position $tmp805 = *(&local28);
org$frostlang$frostc$Variable* $tmp806 = *(&local31);
frost$core$String** $tmp807 = &((org$frostlang$frostc$Symbol*) $tmp806)->name;
frost$core$String* $tmp808 = *$tmp807;
frost$core$String* $tmp809 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s810, $tmp808);
frost$core$String* $tmp811 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp809, &$s812);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp805, $tmp811);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
org$frostlang$frostc$Variable* $tmp813 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
*(&local31) = ((org$frostlang$frostc$Variable*) NULL);
goto block154;
block156:;
frost$core$Int64 $tmp814 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:162:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp815 = $tmp779.value;
int64_t $tmp816 = $tmp814.value;
bool $tmp817 = $tmp815 == $tmp816;
frost$core$Bit $tmp818 = (frost$core$Bit) {$tmp817};
bool $tmp819 = $tmp818.value;
if ($tmp819) goto block162; else goto block154;
block162:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:163
org$frostlang$frostc$Symbol* $tmp820 = *(&local30);
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp820)));
org$frostlang$frostc$FieldDecl* $tmp821 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
*(&local32) = ((org$frostlang$frostc$FieldDecl*) $tmp820);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:164
org$frostlang$frostc$FieldDecl* $tmp822 = *(&local32);
org$frostlang$frostc$Annotations** $tmp823 = &$tmp822->annotations;
org$frostlang$frostc$Annotations* $tmp824 = *$tmp823;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from LValue.frost:164:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int* $tmp825 = &$tmp824->flags;
frost$core$Int $tmp826 = *$tmp825;
frost$core$Int $tmp827 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:293
int64_t $tmp828 = $tmp826.value;
int64_t $tmp829 = $tmp827.value;
int64_t $tmp830 = $tmp828 & $tmp829;
frost$core$Int $tmp831 = (frost$core$Int) {$tmp830};
frost$core$Int $tmp832 = (frost$core$Int) {0u};
int64_t $tmp833 = $tmp831.value;
int64_t $tmp834 = $tmp832.value;
bool $tmp835 = $tmp833 != $tmp834;
frost$core$Bit $tmp836 = (frost$core$Bit) {$tmp835};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from LValue.frost:164:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp837 = $tmp836.value;
bool $tmp838 = !$tmp837;
frost$core$Bit $tmp839 = (frost$core$Bit) {$tmp838};
bool $tmp840 = $tmp839.value;
if ($tmp840) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:165
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp841 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp842 = (frost$core$Int64) {16u};
org$frostlang$frostc$Position $tmp843 = *(&local28);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp844 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp845 = (frost$core$Int64) {39u};
org$frostlang$frostc$Position $tmp846 = *(&local28);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp844, $tmp845, $tmp846);
org$frostlang$frostc$FieldDecl* $tmp847 = *(&local32);
frost$core$String** $tmp848 = &((org$frostlang$frostc$Symbol*) $tmp847)->name;
frost$core$String* $tmp849 = *$tmp848;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp841, $tmp842, $tmp843, $tmp844, $tmp849);
org$frostlang$frostc$lvalue$LValue* $tmp850 = org$frostlang$frostc$lvalue$LValue$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$lvalue$LValue$Q(param0, $tmp841);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
org$frostlang$frostc$FieldDecl* $tmp851 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp852 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
*(&local30) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp853 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
*(&local29) = ((frost$core$String*) NULL);
return $tmp850;
block165:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:168
org$frostlang$frostc$FieldDecl* $tmp854 = *(&local32);
frost$core$Bit $tmp855 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp854);
bool $tmp856 = $tmp855.value;
if ($tmp856) goto block169; else goto block170;
block169:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:169
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$lvalue$FieldLValue));
org$frostlang$frostc$lvalue$FieldLValue* $tmp857 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
org$frostlang$frostc$Position $tmp858 = *(&local28);
org$frostlang$frostc$FieldDecl* $tmp859 = *(&local32);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl($tmp857, param0, $tmp858, ((org$frostlang$frostc$IR$Value*) NULL), $tmp859);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp857)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
org$frostlang$frostc$FieldDecl* $tmp860 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp861 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
*(&local30) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp862 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local29) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp857);
block170:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:171
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$FieldDecl* $tmp863 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp864 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
*(&local30) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp865 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local29) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block154:;
goto block153;
block153:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:175
org$frostlang$frostc$Position $tmp866 = *(&local28);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp866, &$s867);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp868 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
*(&local30) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp869 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
*(&local29) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:179
$fn871 $tmp870 = ($fn871) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp872 = $tmp870(param1);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp872, &$s873);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:180
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
return ((org$frostlang$frostc$lvalue$LValue*) NULL);

}

