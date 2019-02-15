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
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/Variable.h"
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
typedef frost$core$Int64 (*$fn269)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn283)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn298)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn317)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn346)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn360)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn375)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn394)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn418)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn422)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn432)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn436)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn441)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn494)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn508)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn523)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn542)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn577)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn591)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn606)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn625)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn668)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Position (*$fn707)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn724)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn733)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn867)(org$frostlang$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 34, -6270392730645118004, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 1290461307291656944, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 1290461307291656944, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -6780593757603597528, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -6780593757603597528, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x6f\x64\x69\x66\x79\x20\x76\x61\x6c\x75\x65\x20\x66\x69\x65\x6c\x64\x73\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 52, -2764158439429461122, NULL };
static frost$core$String $s502 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s503 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -6780593757603597528, NULL };
static frost$core$String $s516 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s550 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s560 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 1290461307291656944, NULL };
static frost$core$String $s585 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -6780593757603597528, NULL };
static frost$core$String $s599 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s634 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s726 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, 3872445340070684666, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 2255341192871350238, NULL };
static frost$core$String $s741 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20", 31, 7920137692206573202, NULL };
static frost$core$String $s744 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s746 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x27", 18, 654003304789403089, NULL };
static frost$core$String $s808 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, -8767184032745329904, NULL };
static frost$core$String $s869 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x29", 33, 6411653699508251529, NULL };

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
frost$core$Int64 local10;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local12 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local13 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local14 = NULL;
frost$core$Int64 local15;
org$frostlang$frostc$ASTNode* local16 = NULL;
frost$core$String* local17 = NULL;
org$frostlang$frostc$IR$Value* local18 = NULL;
org$frostlang$frostc$MethodDecl$Kind local19;
org$frostlang$frostc$MethodDecl$Kind local20;
org$frostlang$frostc$Compiler$EnclosingContext* local21 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local22 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local23 = NULL;
frost$core$Int64 local24;
org$frostlang$frostc$ClassDecl* local25 = NULL;
org$frostlang$frostc$Symbol* local26 = NULL;
org$frostlang$frostc$FieldDecl* local27 = NULL;
org$frostlang$frostc$Position local28;
frost$core$String* local29 = NULL;
org$frostlang$frostc$Symbol* local30 = NULL;
org$frostlang$frostc$Variable* local31 = NULL;
org$frostlang$frostc$FieldDecl* local32 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:33
frost$core$Int64* $tmp2 = &param1->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:34:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:35
org$frostlang$frostc$expression$Binary$Operator $tmp20 = *(&local2);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp21;
$tmp21 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp21->value = $tmp20;
frost$core$Int64 $tmp22 = (frost$core$Int64) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Binary.Operator from LValue.frost:35:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:36
org$frostlang$frostc$ASTNode* $tmp32 = *(&local1);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from LValue.frost:36:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5097
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:37
org$frostlang$frostc$IR$Value* $tmp37 = *(&local6);
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37 == NULL};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:38
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:40
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
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
frost$core$Int64* $tmp66 = (frost$core$Int64*) (param1->$data + 40);
frost$core$Int64 $tmp67 = *$tmp66;
*(&local10) = $tmp67;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:44
org$frostlang$frostc$ASTNode* $tmp68 = *(&local8);
frost$core$Int64* $tmp69 = &$tmp68->$rawValue;
frost$core$Int64 $tmp70 = *$tmp69;
frost$core$Int64 $tmp71 = (frost$core$Int64) {39u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:45:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp72 = $tmp70.value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 == $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:46
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:47
org$frostlang$frostc$ChoiceCase* $tmp77 = *(&local9);
frost$core$Weak** $tmp78 = &$tmp77->owner;
frost$core$Weak* $tmp79 = *$tmp78;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LValue.frost:47:47
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp80 = &$tmp79->_valid;
frost$core$Bit $tmp81 = *$tmp80;
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp83 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s84, $tmp83);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp85 = &$tmp79->value;
frost$core$Object* $tmp86 = *$tmp85;
frost$core$Frost$ref$frost$core$Object$Q($tmp86);
frost$core$Bit $tmp87 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp86));
bool $tmp88 = $tmp87.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp86);
if ($tmp88) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:48
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from LValue.frost:48:68
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5826
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5827
org$frostlang$frostc$Compiler$EnclosingContext* $tmp105 = *(&local13);
frost$core$Int64* $tmp106 = &$tmp105->$rawValue;
frost$core$Int64 $tmp107 = *$tmp106;
frost$core$Int64 $tmp108 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:5828:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp109 = $tmp107.value;
int64_t $tmp110 = $tmp108.value;
bool $tmp111 = $tmp109 == $tmp110;
frost$core$Bit $tmp112 = (frost$core$Bit) {$tmp111};
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block30; else goto block29;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5829
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5833
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:49
org$frostlang$frostc$Compiler$EnclosingContext* $tmp119 = *(&local14);
frost$core$Bit $tmp120 = (frost$core$Bit) {$tmp119 != NULL};
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block32; else goto block34;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:50
org$frostlang$frostc$Compiler$EnclosingContext* $tmp122 = *(&local14);
frost$core$Int64* $tmp123 = &$tmp122->$rawValue;
frost$core$Int64 $tmp124 = *$tmp123;
frost$core$Int64 $tmp125 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:51:58
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp126 = $tmp124.value;
int64_t $tmp127 = $tmp125.value;
bool $tmp128 = $tmp126 == $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block36; else goto block37;
block36:;
frost$collections$ListView** $tmp131 = (frost$collections$ListView**) ($tmp122->$data + 0);
frost$collections$ListView* $tmp132 = *$tmp131;
frost$core$Int64* $tmp133 = (frost$core$Int64*) ($tmp122->$data + 8);
frost$core$Int64 $tmp134 = *$tmp133;
*(&local15) = $tmp134;
org$frostlang$frostc$Compiler$InlineReturn** $tmp135 = (org$frostlang$frostc$Compiler$InlineReturn**) ($tmp122->$data + 16);
org$frostlang$frostc$Compiler$InlineReturn* $tmp136 = *$tmp135;
org$frostlang$frostc$IR$Block$ID* $tmp137 = (org$frostlang$frostc$IR$Block$ID*) ($tmp122->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp138 = *$tmp137;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:52
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp139 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp140 = (frost$core$Int64) {2u};
frost$core$Int64 $tmp141 = *(&local15);
org$frostlang$frostc$ChoiceCase* $tmp142 = *(&local9);
frost$core$Weak** $tmp143 = &$tmp142->owner;
frost$core$Weak* $tmp144 = *$tmp143;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LValue.frost:52:75
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp145 = &$tmp144->_valid;
frost$core$Bit $tmp146 = *$tmp145;
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp148 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s149, $tmp148);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp150 = &$tmp144->value;
frost$core$Object* $tmp151 = *$tmp150;
frost$core$Frost$ref$frost$core$Object$Q($tmp151);
org$frostlang$frostc$Type** $tmp152 = &((org$frostlang$frostc$ClassDecl*) $tmp151)->type;
org$frostlang$frostc$Type* $tmp153 = *$tmp152;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp139, $tmp140, $tmp141, $tmp153);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
org$frostlang$frostc$IR$Value* $tmp154 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local11) = $tmp139;
frost$core$Frost$unref$frost$core$Object$Q($tmp151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
goto block33;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:55
frost$core$Int64 $tmp155 = (frost$core$Int64) {55u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s156, $tmp155);
abort(); // unreachable
block34:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:60
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp157 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp158 = (frost$core$Int64) {2u};
frost$core$Int64 $tmp159 = (frost$core$Int64) {0u};
org$frostlang$frostc$ChoiceCase* $tmp160 = *(&local9);
frost$core$Weak** $tmp161 = &$tmp160->owner;
frost$core$Weak* $tmp162 = *$tmp161;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LValue.frost:60:63
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp163 = &$tmp162->_valid;
frost$core$Bit $tmp164 = *$tmp163;
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp166 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s167, $tmp166);
abort(); // unreachable
block45:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp168 = &$tmp162->value;
frost$core$Object* $tmp169 = *$tmp168;
frost$core$Frost$ref$frost$core$Object$Q($tmp169);
org$frostlang$frostc$Type** $tmp170 = &((org$frostlang$frostc$ClassDecl*) $tmp169)->type;
org$frostlang$frostc$Type* $tmp171 = *$tmp170;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp157, $tmp158, $tmp159, $tmp171);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:64
org$frostlang$frostc$ASTNode* $tmp175 = *(&local8);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from LValue.frost:64:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5097
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:65
org$frostlang$frostc$IR$Value* $tmp180 = *(&local11);
frost$core$Bit $tmp181 = (frost$core$Bit) {$tmp180 == NULL};
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:66
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:69
org$frostlang$frostc$Position $tmp186 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp187 = *(&local11);
org$frostlang$frostc$ChoiceCase* $tmp188 = *(&local9);
frost$core$Weak** $tmp189 = &$tmp188->owner;
frost$core$Weak* $tmp190 = *$tmp189;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LValue.frost:69:71
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp191 = &$tmp190->_valid;
frost$core$Bit $tmp192 = *$tmp191;
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block52; else goto block53;
block53:;
frost$core$Int64 $tmp194 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s195, $tmp194);
abort(); // unreachable
block52:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
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
frost$core$Int64 $tmp207 = (frost$core$Int64) {4112u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s208, $tmp207, &$s209);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4113
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:70
org$frostlang$frostc$IR$Value* $tmp213 = *(&local11);
frost$core$Bit $tmp214 = (frost$core$Bit) {$tmp213 == NULL};
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:71
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:73
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$lvalue$ChoiceFieldLValue));
org$frostlang$frostc$lvalue$ChoiceFieldLValue* $tmp219 = (org$frostlang$frostc$lvalue$ChoiceFieldLValue*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$lvalue$ChoiceFieldLValue$class);
org$frostlang$frostc$Position $tmp220 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp221 = *(&local11);
org$frostlang$frostc$ChoiceCase* $tmp222 = *(&local9);
frost$core$Int64 $tmp223 = *(&local10);
org$frostlang$frostc$lvalue$ChoiceFieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp219, param0, $tmp220, $tmp221, $tmp222, $tmp223);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:76
frost$core$Bit $tmp227 = (frost$core$Bit) {false};
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp229 = (frost$core$Int64) {76u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s230, $tmp229);
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:81
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:82
org$frostlang$frostc$ASTNode* $tmp247 = *(&local16);
frost$core$Int64* $tmp248 = &$tmp247->$rawValue;
frost$core$Int64 $tmp249 = *$tmp248;
frost$core$Int64 $tmp250 = (frost$core$Int64) {39u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:83:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp251 = $tmp249.value;
int64_t $tmp252 = $tmp250.value;
bool $tmp253 = $tmp251 == $tmp252;
frost$core$Bit $tmp254 = (frost$core$Bit) {$tmp253};
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:84
frost$collections$Stack** $tmp256 = &param0->currentClass;
frost$collections$Stack* $tmp257 = *$tmp256;
frost$core$Int64 $tmp258 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from LValue.frost:84:66
frost$core$Int64 $tmp259 = (frost$core$Int64) {0u};
int64_t $tmp260 = $tmp258.value;
int64_t $tmp261 = $tmp259.value;
bool $tmp262 = $tmp260 >= $tmp261;
frost$core$Bit $tmp263 = (frost$core$Bit) {$tmp262};
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block74; else goto block73;
block74:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp265 = &$tmp257->contents;
frost$collections$Array* $tmp266 = *$tmp265;
ITable* $tmp267 = ((frost$collections$CollectionView*) $tmp266)->$class->itable;
while ($tmp267->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp267 = $tmp267->next;
}
$fn269 $tmp268 = $tmp267->methods[0];
frost$core$Int64 $tmp270 = $tmp268(((frost$collections$CollectionView*) $tmp266));
int64_t $tmp271 = $tmp258.value;
int64_t $tmp272 = $tmp270.value;
bool $tmp273 = $tmp271 < $tmp272;
frost$core$Bit $tmp274 = (frost$core$Bit) {$tmp273};
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block72; else goto block73;
block73:;
frost$core$Int64 $tmp276 = (frost$core$Int64) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s277, $tmp276, &$s278);
abort(); // unreachable
block72:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp279 = &$tmp257->contents;
frost$collections$Array* $tmp280 = *$tmp279;
ITable* $tmp281 = ((frost$collections$CollectionView*) $tmp280)->$class->itable;
while ($tmp281->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp281 = $tmp281->next;
}
$fn283 $tmp282 = $tmp281->methods[0];
frost$core$Int64 $tmp284 = $tmp282(((frost$collections$CollectionView*) $tmp280));
int64_t $tmp285 = $tmp284.value;
int64_t $tmp286 = $tmp258.value;
bool $tmp287 = $tmp285 > $tmp286;
frost$core$Bit $tmp288 = (frost$core$Bit) {$tmp287};
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block76; else goto block77;
block77:;
frost$core$Int64 $tmp290 = (frost$core$Int64) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s291, $tmp290);
abort(); // unreachable
block76:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp292 = &$tmp257->contents;
frost$collections$Array* $tmp293 = *$tmp292;
frost$collections$Array** $tmp294 = &$tmp257->contents;
frost$collections$Array* $tmp295 = *$tmp294;
ITable* $tmp296 = ((frost$collections$CollectionView*) $tmp295)->$class->itable;
while ($tmp296->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp296 = $tmp296->next;
}
$fn298 $tmp297 = $tmp296->methods[0];
frost$core$Int64 $tmp299 = $tmp297(((frost$collections$CollectionView*) $tmp295));
frost$core$Int64 $tmp300 = (frost$core$Int64) {1u};
int64_t $tmp301 = $tmp299.value;
int64_t $tmp302 = $tmp300.value;
int64_t $tmp303 = $tmp301 - $tmp302;
frost$core$Int64 $tmp304 = (frost$core$Int64) {$tmp303};
int64_t $tmp305 = $tmp304.value;
int64_t $tmp306 = $tmp258.value;
int64_t $tmp307 = $tmp305 - $tmp306;
frost$core$Int64 $tmp308 = (frost$core$Int64) {$tmp307};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp309 = (frost$core$Int64) {0u};
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
frost$core$Int64 $tmp318 = $tmp316(((frost$collections$CollectionView*) $tmp293));
int64_t $tmp319 = $tmp308.value;
int64_t $tmp320 = $tmp318.value;
bool $tmp321 = $tmp319 < $tmp320;
frost$core$Bit $tmp322 = (frost$core$Bit) {$tmp321};
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block79; else goto block80;
block80:;
frost$core$Int64 $tmp324 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s325, $tmp324, &$s326);
abort(); // unreachable
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp327 = &$tmp293->data;
frost$core$Object** $tmp328 = *$tmp327;
int64_t $tmp329 = $tmp308.value;
frost$core$Object* $tmp330 = $tmp328[$tmp329];
frost$core$Frost$ref$frost$core$Object$Q($tmp330);
frost$core$Frost$ref$frost$core$Object$Q($tmp330);
frost$core$Frost$unref$frost$core$Object$Q($tmp330);
frost$core$Bit $tmp331 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp330));
bool $tmp332 = $tmp331.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp330);
if ($tmp332) goto block68; else goto block70;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:85
frost$collections$Stack** $tmp333 = &param0->currentMethod;
frost$collections$Stack* $tmp334 = *$tmp333;
frost$core$Int64 $tmp335 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from LValue.frost:85:54
frost$core$Int64 $tmp336 = (frost$core$Int64) {0u};
int64_t $tmp337 = $tmp335.value;
int64_t $tmp338 = $tmp336.value;
bool $tmp339 = $tmp337 >= $tmp338;
frost$core$Bit $tmp340 = (frost$core$Bit) {$tmp339};
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block87; else goto block86;
block87:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp342 = &$tmp334->contents;
frost$collections$Array* $tmp343 = *$tmp342;
ITable* $tmp344 = ((frost$collections$CollectionView*) $tmp343)->$class->itable;
while ($tmp344->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp344 = $tmp344->next;
}
$fn346 $tmp345 = $tmp344->methods[0];
frost$core$Int64 $tmp347 = $tmp345(((frost$collections$CollectionView*) $tmp343));
int64_t $tmp348 = $tmp335.value;
int64_t $tmp349 = $tmp347.value;
bool $tmp350 = $tmp348 < $tmp349;
frost$core$Bit $tmp351 = (frost$core$Bit) {$tmp350};
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block85; else goto block86;
block86:;
frost$core$Int64 $tmp353 = (frost$core$Int64) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s354, $tmp353, &$s355);
abort(); // unreachable
block85:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp356 = &$tmp334->contents;
frost$collections$Array* $tmp357 = *$tmp356;
ITable* $tmp358 = ((frost$collections$CollectionView*) $tmp357)->$class->itable;
while ($tmp358->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp358 = $tmp358->next;
}
$fn360 $tmp359 = $tmp358->methods[0];
frost$core$Int64 $tmp361 = $tmp359(((frost$collections$CollectionView*) $tmp357));
int64_t $tmp362 = $tmp361.value;
int64_t $tmp363 = $tmp335.value;
bool $tmp364 = $tmp362 > $tmp363;
frost$core$Bit $tmp365 = (frost$core$Bit) {$tmp364};
bool $tmp366 = $tmp365.value;
if ($tmp366) goto block89; else goto block90;
block90:;
frost$core$Int64 $tmp367 = (frost$core$Int64) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s368, $tmp367);
abort(); // unreachable
block89:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp369 = &$tmp334->contents;
frost$collections$Array* $tmp370 = *$tmp369;
frost$collections$Array** $tmp371 = &$tmp334->contents;
frost$collections$Array* $tmp372 = *$tmp371;
ITable* $tmp373 = ((frost$collections$CollectionView*) $tmp372)->$class->itable;
while ($tmp373->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp373 = $tmp373->next;
}
$fn375 $tmp374 = $tmp373->methods[0];
frost$core$Int64 $tmp376 = $tmp374(((frost$collections$CollectionView*) $tmp372));
frost$core$Int64 $tmp377 = (frost$core$Int64) {1u};
int64_t $tmp378 = $tmp376.value;
int64_t $tmp379 = $tmp377.value;
int64_t $tmp380 = $tmp378 - $tmp379;
frost$core$Int64 $tmp381 = (frost$core$Int64) {$tmp380};
int64_t $tmp382 = $tmp381.value;
int64_t $tmp383 = $tmp335.value;
int64_t $tmp384 = $tmp382 - $tmp383;
frost$core$Int64 $tmp385 = (frost$core$Int64) {$tmp384};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp386 = (frost$core$Int64) {0u};
int64_t $tmp387 = $tmp385.value;
int64_t $tmp388 = $tmp386.value;
bool $tmp389 = $tmp387 >= $tmp388;
frost$core$Bit $tmp390 = (frost$core$Bit) {$tmp389};
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block94; else goto block93;
block94:;
ITable* $tmp392 = ((frost$collections$CollectionView*) $tmp370)->$class->itable;
while ($tmp392->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp392 = $tmp392->next;
}
$fn394 $tmp393 = $tmp392->methods[0];
frost$core$Int64 $tmp395 = $tmp393(((frost$collections$CollectionView*) $tmp370));
int64_t $tmp396 = $tmp385.value;
int64_t $tmp397 = $tmp395.value;
bool $tmp398 = $tmp396 < $tmp397;
frost$core$Bit $tmp399 = (frost$core$Bit) {$tmp398};
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block92; else goto block93;
block93:;
frost$core$Int64 $tmp401 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s402, $tmp401, &$s403);
abort(); // unreachable
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp404 = &$tmp370->data;
frost$core$Object** $tmp405 = *$tmp404;
int64_t $tmp406 = $tmp385.value;
frost$core$Object* $tmp407 = $tmp405[$tmp406];
frost$core$Frost$ref$frost$core$Object$Q($tmp407);
frost$core$Frost$ref$frost$core$Object$Q($tmp407);
frost$core$Frost$unref$frost$core$Object$Q($tmp407);
org$frostlang$frostc$MethodDecl$Kind* $tmp408 = &((org$frostlang$frostc$MethodDecl*) $tmp407)->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp409 = *$tmp408;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp410;
$tmp410 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp410->value = $tmp409;
frost$core$Int64 $tmp411 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from LValue.frost:85:87
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp412 = &(&local20)->$rawValue;
*$tmp412 = $tmp411;
org$frostlang$frostc$MethodDecl$Kind $tmp413 = *(&local20);
*(&local19) = $tmp413;
org$frostlang$frostc$MethodDecl$Kind $tmp414 = *(&local19);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp415;
$tmp415 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp415->value = $tmp414;
ITable* $tmp416 = ((frost$core$Equatable*) $tmp410)->$class->itable;
while ($tmp416->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp416 = $tmp416->next;
}
$fn418 $tmp417 = $tmp416->methods[1];
frost$core$Bit $tmp419 = $tmp417(((frost$core$Equatable*) $tmp410), ((frost$core$Equatable*) $tmp415));
bool $tmp420 = $tmp419.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp415)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp410)));
frost$core$Frost$unref$frost$core$Object$Q($tmp407);
if ($tmp420) goto block82; else goto block83;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:86
$fn422 $tmp421 = ($fn422) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp423 = $tmp421(param1);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp423, &$s424);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:88
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp425 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp426 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp427 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:90
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from LValue.frost:90:68
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5826
frost$collections$Stack** $tmp428 = &param0->enclosingContexts;
frost$collections$Stack* $tmp429 = *$tmp428;
ITable* $tmp430 = ((frost$collections$Iterable*) $tmp429)->$class->itable;
while ($tmp430->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp430 = $tmp430->next;
}
$fn432 $tmp431 = $tmp430->methods[0];
frost$collections$Iterator* $tmp433 = $tmp431(((frost$collections$Iterable*) $tmp429));
goto block97;
block97:;
ITable* $tmp434 = $tmp433->$class->itable;
while ($tmp434->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp434 = $tmp434->next;
}
$fn436 $tmp435 = $tmp434->methods[0];
frost$core$Bit $tmp437 = $tmp435($tmp433);
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block99; else goto block98;
block98:;
*(&local22) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp439 = $tmp433->$class->itable;
while ($tmp439->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp439 = $tmp439->next;
}
$fn441 $tmp440 = $tmp439->methods[1];
frost$core$Object* $tmp442 = $tmp440($tmp433);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp442)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp443 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
*(&local22) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp442);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5827
org$frostlang$frostc$Compiler$EnclosingContext* $tmp444 = *(&local22);
frost$core$Int64* $tmp445 = &$tmp444->$rawValue;
frost$core$Int64 $tmp446 = *$tmp445;
frost$core$Int64 $tmp447 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:5828:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp448 = $tmp446.value;
int64_t $tmp449 = $tmp447.value;
bool $tmp450 = $tmp448 == $tmp449;
frost$core$Bit $tmp451 = (frost$core$Bit) {$tmp450};
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block101; else goto block100;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5829
org$frostlang$frostc$Compiler$EnclosingContext* $tmp453 = *(&local22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
frost$core$Frost$unref$frost$core$Object$Q($tmp442);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp454 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local22) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
*(&local21) = $tmp453;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
goto block96;
block100:;
frost$core$Frost$unref$frost$core$Object$Q($tmp442);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp455 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local22) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block97;
block99:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5833
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
*(&local21) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
goto block96;
block96:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp456 = *(&local21);
*(&local23) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp457 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local23) = $tmp456;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:91
org$frostlang$frostc$Compiler$EnclosingContext* $tmp458 = *(&local23);
frost$core$Bit $tmp459 = (frost$core$Bit) {$tmp458 != NULL};
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block103; else goto block105;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:92
org$frostlang$frostc$Compiler$EnclosingContext* $tmp461 = *(&local23);
frost$core$Int64* $tmp462 = &$tmp461->$rawValue;
frost$core$Int64 $tmp463 = *$tmp462;
frost$core$Int64 $tmp464 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:93:67
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp465 = $tmp463.value;
int64_t $tmp466 = $tmp464.value;
bool $tmp467 = $tmp465 == $tmp466;
frost$core$Bit $tmp468 = (frost$core$Bit) {$tmp467};
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block107; else goto block108;
block107:;
frost$collections$ListView** $tmp470 = (frost$collections$ListView**) ($tmp461->$data + 0);
frost$collections$ListView* $tmp471 = *$tmp470;
frost$core$Int64* $tmp472 = (frost$core$Int64*) ($tmp461->$data + 8);
frost$core$Int64 $tmp473 = *$tmp472;
*(&local24) = $tmp473;
org$frostlang$frostc$Compiler$InlineReturn** $tmp474 = (org$frostlang$frostc$Compiler$InlineReturn**) ($tmp461->$data + 16);
org$frostlang$frostc$Compiler$InlineReturn* $tmp475 = *$tmp474;
org$frostlang$frostc$IR$Block$ID* $tmp476 = (org$frostlang$frostc$IR$Block$ID*) ($tmp461->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp477 = *$tmp476;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:95
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp478 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp479 = (frost$core$Int64) {2u};
frost$core$Int64 $tmp480 = *(&local24);
frost$collections$Stack** $tmp481 = &param0->currentClass;
frost$collections$Stack* $tmp482 = *$tmp481;
frost$core$Int64 $tmp483 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from LValue.frost:96:70
frost$core$Int64 $tmp484 = (frost$core$Int64) {0u};
int64_t $tmp485 = $tmp483.value;
int64_t $tmp486 = $tmp484.value;
bool $tmp487 = $tmp485 >= $tmp486;
frost$core$Bit $tmp488 = (frost$core$Bit) {$tmp487};
bool $tmp489 = $tmp488.value;
if ($tmp489) goto block113; else goto block112;
block113:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp490 = &$tmp482->contents;
frost$collections$Array* $tmp491 = *$tmp490;
ITable* $tmp492 = ((frost$collections$CollectionView*) $tmp491)->$class->itable;
while ($tmp492->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp492 = $tmp492->next;
}
$fn494 $tmp493 = $tmp492->methods[0];
frost$core$Int64 $tmp495 = $tmp493(((frost$collections$CollectionView*) $tmp491));
int64_t $tmp496 = $tmp483.value;
int64_t $tmp497 = $tmp495.value;
bool $tmp498 = $tmp496 < $tmp497;
frost$core$Bit $tmp499 = (frost$core$Bit) {$tmp498};
bool $tmp500 = $tmp499.value;
if ($tmp500) goto block111; else goto block112;
block112:;
frost$core$Int64 $tmp501 = (frost$core$Int64) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s502, $tmp501, &$s503);
abort(); // unreachable
block111:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp504 = &$tmp482->contents;
frost$collections$Array* $tmp505 = *$tmp504;
ITable* $tmp506 = ((frost$collections$CollectionView*) $tmp505)->$class->itable;
while ($tmp506->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp506 = $tmp506->next;
}
$fn508 $tmp507 = $tmp506->methods[0];
frost$core$Int64 $tmp509 = $tmp507(((frost$collections$CollectionView*) $tmp505));
int64_t $tmp510 = $tmp509.value;
int64_t $tmp511 = $tmp483.value;
bool $tmp512 = $tmp510 > $tmp511;
frost$core$Bit $tmp513 = (frost$core$Bit) {$tmp512};
bool $tmp514 = $tmp513.value;
if ($tmp514) goto block115; else goto block116;
block116:;
frost$core$Int64 $tmp515 = (frost$core$Int64) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s516, $tmp515);
abort(); // unreachable
block115:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp517 = &$tmp482->contents;
frost$collections$Array* $tmp518 = *$tmp517;
frost$collections$Array** $tmp519 = &$tmp482->contents;
frost$collections$Array* $tmp520 = *$tmp519;
ITable* $tmp521 = ((frost$collections$CollectionView*) $tmp520)->$class->itable;
while ($tmp521->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp521 = $tmp521->next;
}
$fn523 $tmp522 = $tmp521->methods[0];
frost$core$Int64 $tmp524 = $tmp522(((frost$collections$CollectionView*) $tmp520));
frost$core$Int64 $tmp525 = (frost$core$Int64) {1u};
int64_t $tmp526 = $tmp524.value;
int64_t $tmp527 = $tmp525.value;
int64_t $tmp528 = $tmp526 - $tmp527;
frost$core$Int64 $tmp529 = (frost$core$Int64) {$tmp528};
int64_t $tmp530 = $tmp529.value;
int64_t $tmp531 = $tmp483.value;
int64_t $tmp532 = $tmp530 - $tmp531;
frost$core$Int64 $tmp533 = (frost$core$Int64) {$tmp532};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp534 = (frost$core$Int64) {0u};
int64_t $tmp535 = $tmp533.value;
int64_t $tmp536 = $tmp534.value;
bool $tmp537 = $tmp535 >= $tmp536;
frost$core$Bit $tmp538 = (frost$core$Bit) {$tmp537};
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block120; else goto block119;
block120:;
ITable* $tmp540 = ((frost$collections$CollectionView*) $tmp518)->$class->itable;
while ($tmp540->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp540 = $tmp540->next;
}
$fn542 $tmp541 = $tmp540->methods[0];
frost$core$Int64 $tmp543 = $tmp541(((frost$collections$CollectionView*) $tmp518));
int64_t $tmp544 = $tmp533.value;
int64_t $tmp545 = $tmp543.value;
bool $tmp546 = $tmp544 < $tmp545;
frost$core$Bit $tmp547 = (frost$core$Bit) {$tmp546};
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block118; else goto block119;
block119:;
frost$core$Int64 $tmp549 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s550, $tmp549, &$s551);
abort(); // unreachable
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp552 = &$tmp518->data;
frost$core$Object** $tmp553 = *$tmp552;
int64_t $tmp554 = $tmp533.value;
frost$core$Object* $tmp555 = $tmp553[$tmp554];
frost$core$Frost$ref$frost$core$Object$Q($tmp555);
frost$core$Frost$ref$frost$core$Object$Q($tmp555);
frost$core$Frost$unref$frost$core$Object$Q($tmp555);
org$frostlang$frostc$Type** $tmp556 = &((org$frostlang$frostc$ClassDecl*) $tmp555)->type;
org$frostlang$frostc$Type* $tmp557 = *$tmp556;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp478, $tmp479, $tmp480, $tmp557);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
org$frostlang$frostc$IR$Value* $tmp558 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local18) = $tmp478;
frost$core$Frost$unref$frost$core$Object$Q($tmp555);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
goto block104;
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:99
frost$core$Int64 $tmp559 = (frost$core$Int64) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s560, $tmp559);
abort(); // unreachable
block105:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:104
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp561 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp562 = (frost$core$Int64) {2u};
frost$core$Int64 $tmp563 = (frost$core$Int64) {0u};
frost$collections$Stack** $tmp564 = &param0->currentClass;
frost$collections$Stack* $tmp565 = *$tmp564;
frost$core$Int64 $tmp566 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from LValue.frost:104:88
frost$core$Int64 $tmp567 = (frost$core$Int64) {0u};
int64_t $tmp568 = $tmp566.value;
int64_t $tmp569 = $tmp567.value;
bool $tmp570 = $tmp568 >= $tmp569;
frost$core$Bit $tmp571 = (frost$core$Bit) {$tmp570};
bool $tmp572 = $tmp571.value;
if ($tmp572) goto block124; else goto block123;
block124:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp573 = &$tmp565->contents;
frost$collections$Array* $tmp574 = *$tmp573;
ITable* $tmp575 = ((frost$collections$CollectionView*) $tmp574)->$class->itable;
while ($tmp575->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp575 = $tmp575->next;
}
$fn577 $tmp576 = $tmp575->methods[0];
frost$core$Int64 $tmp578 = $tmp576(((frost$collections$CollectionView*) $tmp574));
int64_t $tmp579 = $tmp566.value;
int64_t $tmp580 = $tmp578.value;
bool $tmp581 = $tmp579 < $tmp580;
frost$core$Bit $tmp582 = (frost$core$Bit) {$tmp581};
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block122; else goto block123;
block123:;
frost$core$Int64 $tmp584 = (frost$core$Int64) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s585, $tmp584, &$s586);
abort(); // unreachable
block122:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp587 = &$tmp565->contents;
frost$collections$Array* $tmp588 = *$tmp587;
ITable* $tmp589 = ((frost$collections$CollectionView*) $tmp588)->$class->itable;
while ($tmp589->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp589 = $tmp589->next;
}
$fn591 $tmp590 = $tmp589->methods[0];
frost$core$Int64 $tmp592 = $tmp590(((frost$collections$CollectionView*) $tmp588));
int64_t $tmp593 = $tmp592.value;
int64_t $tmp594 = $tmp566.value;
bool $tmp595 = $tmp593 > $tmp594;
frost$core$Bit $tmp596 = (frost$core$Bit) {$tmp595};
bool $tmp597 = $tmp596.value;
if ($tmp597) goto block126; else goto block127;
block127:;
frost$core$Int64 $tmp598 = (frost$core$Int64) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s599, $tmp598);
abort(); // unreachable
block126:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp600 = &$tmp565->contents;
frost$collections$Array* $tmp601 = *$tmp600;
frost$collections$Array** $tmp602 = &$tmp565->contents;
frost$collections$Array* $tmp603 = *$tmp602;
ITable* $tmp604 = ((frost$collections$CollectionView*) $tmp603)->$class->itable;
while ($tmp604->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp604 = $tmp604->next;
}
$fn606 $tmp605 = $tmp604->methods[0];
frost$core$Int64 $tmp607 = $tmp605(((frost$collections$CollectionView*) $tmp603));
frost$core$Int64 $tmp608 = (frost$core$Int64) {1u};
int64_t $tmp609 = $tmp607.value;
int64_t $tmp610 = $tmp608.value;
int64_t $tmp611 = $tmp609 - $tmp610;
frost$core$Int64 $tmp612 = (frost$core$Int64) {$tmp611};
int64_t $tmp613 = $tmp612.value;
int64_t $tmp614 = $tmp566.value;
int64_t $tmp615 = $tmp613 - $tmp614;
frost$core$Int64 $tmp616 = (frost$core$Int64) {$tmp615};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp617 = (frost$core$Int64) {0u};
int64_t $tmp618 = $tmp616.value;
int64_t $tmp619 = $tmp617.value;
bool $tmp620 = $tmp618 >= $tmp619;
frost$core$Bit $tmp621 = (frost$core$Bit) {$tmp620};
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block131; else goto block130;
block131:;
ITable* $tmp623 = ((frost$collections$CollectionView*) $tmp601)->$class->itable;
while ($tmp623->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp623 = $tmp623->next;
}
$fn625 $tmp624 = $tmp623->methods[0];
frost$core$Int64 $tmp626 = $tmp624(((frost$collections$CollectionView*) $tmp601));
int64_t $tmp627 = $tmp616.value;
int64_t $tmp628 = $tmp626.value;
bool $tmp629 = $tmp627 < $tmp628;
frost$core$Bit $tmp630 = (frost$core$Bit) {$tmp629};
bool $tmp631 = $tmp630.value;
if ($tmp631) goto block129; else goto block130;
block130:;
frost$core$Int64 $tmp632 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s633, $tmp632, &$s634);
abort(); // unreachable
block129:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp635 = &$tmp601->data;
frost$core$Object** $tmp636 = *$tmp635;
int64_t $tmp637 = $tmp616.value;
frost$core$Object* $tmp638 = $tmp636[$tmp637];
frost$core$Frost$ref$frost$core$Object$Q($tmp638);
frost$core$Frost$ref$frost$core$Object$Q($tmp638);
frost$core$Frost$unref$frost$core$Object$Q($tmp638);
org$frostlang$frostc$Type** $tmp639 = &((org$frostlang$frostc$ClassDecl*) $tmp638)->type;
org$frostlang$frostc$Type* $tmp640 = *$tmp639;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp561, $tmp562, $tmp563, $tmp640);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
org$frostlang$frostc$IR$Value* $tmp641 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
*(&local18) = $tmp561;
frost$core$Frost$unref$frost$core$Object$Q($tmp638);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
goto block104;
block104:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp642 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
*(&local23) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp643 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
*(&local21) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block69;
block70:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:108
org$frostlang$frostc$ASTNode* $tmp644 = *(&local16);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from LValue.frost:108:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5097
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp645 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp646 = (frost$core$Int64) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp645, $tmp646);
org$frostlang$frostc$IR$Value* $tmp647 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp644, $tmp645);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
org$frostlang$frostc$IR$Value* $tmp648 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
*(&local18) = $tmp647;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:109
org$frostlang$frostc$IR$Value* $tmp649 = *(&local18);
frost$core$Bit $tmp650 = (frost$core$Bit) {$tmp649 == NULL};
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block133; else goto block134;
block133:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:110
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp652 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp653 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp654 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block134:;
goto block69;
block69:;
goto block64;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:115
org$frostlang$frostc$ASTNode* $tmp655 = *(&local16);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from LValue.frost:115:67
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5097
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp656 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp657 = (frost$core$Int64) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp656, $tmp657);
org$frostlang$frostc$IR$Value* $tmp658 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp655, $tmp656);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
org$frostlang$frostc$IR$Value* $tmp659 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
*(&local18) = $tmp658;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:116
org$frostlang$frostc$IR$Value* $tmp660 = *(&local18);
frost$core$Bit $tmp661 = (frost$core$Bit) {$tmp660 == NULL};
bool $tmp662 = $tmp661.value;
if ($tmp662) goto block136; else goto block137;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:117
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp663 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp664 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp665 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block137:;
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:121
org$frostlang$frostc$IR$Value* $tmp666 = *(&local18);
$fn668 $tmp667 = ($fn668) $tmp666->$class->vtable[2];
org$frostlang$frostc$Type* $tmp669 = $tmp667($tmp666);
org$frostlang$frostc$ClassDecl* $tmp670 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp669);
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
org$frostlang$frostc$ClassDecl* $tmp671 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
*(&local25) = $tmp670;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:122
org$frostlang$frostc$ClassDecl* $tmp672 = *(&local25);
frost$core$Bit $tmp673 = (frost$core$Bit) {$tmp672 == NULL};
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block138; else goto block139;
block138:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:123
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp675 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp676 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp677 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp678 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block139:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:125
org$frostlang$frostc$ClassDecl* $tmp679 = *(&local25);
org$frostlang$frostc$SymbolTable* $tmp680 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp679);
frost$core$String* $tmp681 = *(&local17);
org$frostlang$frostc$Symbol* $tmp682 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp680, $tmp681);
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
org$frostlang$frostc$Symbol* $tmp683 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
*(&local26) = $tmp682;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:126
org$frostlang$frostc$Symbol* $tmp684 = *(&local26);
frost$core$Bit $tmp685 = (frost$core$Bit) {$tmp684 != NULL};
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block140; else goto block141;
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:127
org$frostlang$frostc$Symbol* $tmp687 = *(&local26);
org$frostlang$frostc$Symbol$Kind* $tmp688 = &$tmp687->kind;
org$frostlang$frostc$Symbol$Kind $tmp689 = *$tmp688;
frost$core$Int64 $tmp690 = $tmp689.$rawValue;
frost$core$Int64 $tmp691 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:128:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp692 = $tmp690.value;
int64_t $tmp693 = $tmp691.value;
bool $tmp694 = $tmp692 == $tmp693;
frost$core$Bit $tmp695 = (frost$core$Bit) {$tmp694};
bool $tmp696 = $tmp695.value;
if ($tmp696) goto block143; else goto block144;
block143:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:129
org$frostlang$frostc$Symbol* $tmp697 = *(&local26);
frost$core$Bit $tmp698 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$FieldDecl*) $tmp697));
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:130
org$frostlang$frostc$Symbol* $tmp700 = *(&local26);
*(&local27) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp700)));
org$frostlang$frostc$FieldDecl* $tmp701 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
*(&local27) = ((org$frostlang$frostc$FieldDecl*) $tmp700);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:131
org$frostlang$frostc$FieldDecl* $tmp702 = *(&local27);
frost$core$Bit $tmp703 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp702);
bool $tmp704 = $tmp703.value;
if ($tmp704) goto block148; else goto block149;
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:132
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$lvalue$FieldLValue));
org$frostlang$frostc$lvalue$FieldLValue* $tmp705 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
$fn707 $tmp706 = ($fn707) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp708 = $tmp706(param1);
org$frostlang$frostc$IR$Value* $tmp709 = *(&local18);
org$frostlang$frostc$FieldDecl* $tmp710 = *(&local27);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl($tmp705, param0, $tmp708, $tmp709, $tmp710);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp705)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
org$frostlang$frostc$FieldDecl* $tmp711 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
*(&local27) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp712 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp713 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp714 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp715 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp716 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp705);
block149:;
org$frostlang$frostc$FieldDecl* $tmp717 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
*(&local27) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block147;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:135
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp718 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp719 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp720 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp721 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp722 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block144:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:138
$fn724 $tmp723 = ($fn724) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp725 = $tmp723(param1);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp725, &$s726);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:139
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp727 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp728 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp729 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp730 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp731 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block142:;
goto block141;
block141:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:143
$fn733 $tmp732 = ($fn733) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp734 = $tmp732(param1);
org$frostlang$frostc$ClassDecl* $tmp735 = *(&local25);
frost$core$String** $tmp736 = &$tmp735->name;
frost$core$String* $tmp737 = *$tmp736;
frost$core$String* $tmp738 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s739, $tmp737);
frost$core$String* $tmp740 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp738, &$s741);
frost$core$String* $tmp742 = *(&local17);
frost$core$String* $tmp743 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s744, $tmp742);
frost$core$String* $tmp745 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp743, &$s746);
frost$core$String* $tmp747 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp740, $tmp745);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp734, $tmp747);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:145
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp748 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp749 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp750 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp751 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp752 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block62:;
frost$core$Int64 $tmp753 = (frost$core$Int64) {22u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:147:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp754 = $tmp3.value;
int64_t $tmp755 = $tmp753.value;
bool $tmp756 = $tmp754 == $tmp755;
frost$core$Bit $tmp757 = (frost$core$Bit) {$tmp756};
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block150; else goto block1;
block150:;
org$frostlang$frostc$Position* $tmp759 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp760 = *$tmp759;
*(&local28) = $tmp760;
frost$core$String** $tmp761 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp762 = *$tmp761;
*(&local29) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
frost$core$String* $tmp763 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
*(&local29) = $tmp762;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:148
org$frostlang$frostc$SymbolTable** $tmp764 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp765 = *$tmp764;
frost$core$String* $tmp766 = *(&local29);
org$frostlang$frostc$Symbol* $tmp767 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp765, $tmp766);
*(&local30) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
org$frostlang$frostc$Symbol* $tmp768 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
*(&local30) = $tmp767;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:149
org$frostlang$frostc$Symbol* $tmp769 = *(&local30);
frost$core$Bit $tmp770 = (frost$core$Bit) {$tmp769 != NULL};
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block152; else goto block153;
block152:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:150
org$frostlang$frostc$Symbol* $tmp772 = *(&local30);
org$frostlang$frostc$Symbol$Kind* $tmp773 = &$tmp772->kind;
org$frostlang$frostc$Symbol$Kind $tmp774 = *$tmp773;
frost$core$Int64 $tmp775 = $tmp774.$rawValue;
frost$core$Int64 $tmp776 = (frost$core$Int64) {9u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:151:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp777 = $tmp775.value;
int64_t $tmp778 = $tmp776.value;
bool $tmp779 = $tmp777 == $tmp778;
frost$core$Bit $tmp780 = (frost$core$Bit) {$tmp779};
bool $tmp781 = $tmp780.value;
if ($tmp781) goto block155; else goto block156;
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:152
org$frostlang$frostc$Symbol* $tmp782 = *(&local30);
*(&local31) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Variable*) $tmp782)));
org$frostlang$frostc$Variable* $tmp783 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
*(&local31) = ((org$frostlang$frostc$Variable*) $tmp782);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:153
org$frostlang$frostc$Variable* $tmp784 = *(&local31);
org$frostlang$frostc$Variable$Storage** $tmp785 = &$tmp784->storage;
org$frostlang$frostc$Variable$Storage* $tmp786 = *$tmp785;
frost$core$Int64* $tmp787 = &$tmp786->$rawValue;
frost$core$Int64 $tmp788 = *$tmp787;
frost$core$Int64 $tmp789 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:154:54
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp790 = $tmp788.value;
int64_t $tmp791 = $tmp789.value;
bool $tmp792 = $tmp790 == $tmp791;
frost$core$Bit $tmp793 = (frost$core$Bit) {$tmp792};
bool $tmp794 = $tmp793.value;
if ($tmp794) goto block159; else goto block160;
block159:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:155
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$lvalue$VariableLValue));
org$frostlang$frostc$lvalue$VariableLValue* $tmp795 = (org$frostlang$frostc$lvalue$VariableLValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$lvalue$VariableLValue$class);
org$frostlang$frostc$Position $tmp796 = *(&local28);
org$frostlang$frostc$Symbol* $tmp797 = *(&local30);
org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable($tmp795, param0, $tmp796, ((org$frostlang$frostc$Variable*) $tmp797));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp795)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
org$frostlang$frostc$Variable* $tmp798 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
*(&local31) = ((org$frostlang$frostc$Variable*) NULL);
org$frostlang$frostc$Symbol* $tmp799 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
*(&local30) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp800 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
*(&local29) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp795);
block160:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:158
org$frostlang$frostc$Position $tmp801 = *(&local28);
org$frostlang$frostc$Variable* $tmp802 = *(&local31);
frost$core$String** $tmp803 = &((org$frostlang$frostc$Symbol*) $tmp802)->name;
frost$core$String* $tmp804 = *$tmp803;
frost$core$String* $tmp805 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s806, $tmp804);
frost$core$String* $tmp807 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp805, &$s808);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp801, $tmp807);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
org$frostlang$frostc$Variable* $tmp809 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
*(&local31) = ((org$frostlang$frostc$Variable*) NULL);
goto block154;
block156:;
frost$core$Int64 $tmp810 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LValue.frost:162:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp811 = $tmp775.value;
int64_t $tmp812 = $tmp810.value;
bool $tmp813 = $tmp811 == $tmp812;
frost$core$Bit $tmp814 = (frost$core$Bit) {$tmp813};
bool $tmp815 = $tmp814.value;
if ($tmp815) goto block162; else goto block154;
block162:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:163
org$frostlang$frostc$Symbol* $tmp816 = *(&local30);
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp816)));
org$frostlang$frostc$FieldDecl* $tmp817 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local32) = ((org$frostlang$frostc$FieldDecl*) $tmp816);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:164
org$frostlang$frostc$FieldDecl* $tmp818 = *(&local32);
org$frostlang$frostc$Annotations** $tmp819 = &$tmp818->annotations;
org$frostlang$frostc$Annotations* $tmp820 = *$tmp819;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from LValue.frost:164:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp821 = &$tmp820->flags;
frost$core$Int64 $tmp822 = *$tmp821;
frost$core$Int64 $tmp823 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp824 = $tmp822.value;
int64_t $tmp825 = $tmp823.value;
int64_t $tmp826 = $tmp824 & $tmp825;
frost$core$Int64 $tmp827 = (frost$core$Int64) {$tmp826};
frost$core$Int64 $tmp828 = (frost$core$Int64) {0u};
int64_t $tmp829 = $tmp827.value;
int64_t $tmp830 = $tmp828.value;
bool $tmp831 = $tmp829 != $tmp830;
frost$core$Bit $tmp832 = (frost$core$Bit) {$tmp831};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from LValue.frost:164:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp833 = $tmp832.value;
bool $tmp834 = !$tmp833;
frost$core$Bit $tmp835 = (frost$core$Bit) {$tmp834};
bool $tmp836 = $tmp835.value;
if ($tmp836) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:165
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp837 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp838 = (frost$core$Int64) {16u};
org$frostlang$frostc$Position $tmp839 = *(&local28);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp840 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp841 = (frost$core$Int64) {39u};
org$frostlang$frostc$Position $tmp842 = *(&local28);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp840, $tmp841, $tmp842);
org$frostlang$frostc$FieldDecl* $tmp843 = *(&local32);
frost$core$String** $tmp844 = &((org$frostlang$frostc$Symbol*) $tmp843)->name;
frost$core$String* $tmp845 = *$tmp844;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp837, $tmp838, $tmp839, $tmp840, $tmp845);
org$frostlang$frostc$lvalue$LValue* $tmp846 = org$frostlang$frostc$lvalue$LValue$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$lvalue$LValue$Q(param0, $tmp837);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
org$frostlang$frostc$FieldDecl* $tmp847 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp848 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
*(&local30) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp849 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
*(&local29) = ((frost$core$String*) NULL);
return $tmp846;
block165:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:168
org$frostlang$frostc$FieldDecl* $tmp850 = *(&local32);
frost$core$Bit $tmp851 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp850);
bool $tmp852 = $tmp851.value;
if ($tmp852) goto block169; else goto block170;
block169:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:169
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$lvalue$FieldLValue));
org$frostlang$frostc$lvalue$FieldLValue* $tmp853 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
org$frostlang$frostc$Position $tmp854 = *(&local28);
org$frostlang$frostc$FieldDecl* $tmp855 = *(&local32);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl($tmp853, param0, $tmp854, ((org$frostlang$frostc$IR$Value*) NULL), $tmp855);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp853)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
org$frostlang$frostc$FieldDecl* $tmp856 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp857 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
*(&local30) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp858 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
*(&local29) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp853);
block170:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:171
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$FieldDecl* $tmp859 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp860 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
*(&local30) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp861 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
*(&local29) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block154:;
goto block153;
block153:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:175
org$frostlang$frostc$Position $tmp862 = *(&local28);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp862, &$s863);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp864 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
*(&local30) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp865 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local29) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:179
$fn867 $tmp866 = ($fn867) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp868 = $tmp866(param1);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp868, &$s869);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:180
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
return ((org$frostlang$frostc$lvalue$LValue*) NULL);

}

