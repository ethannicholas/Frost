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
#include "frost/core/Int64.h"
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
typedef frost$collections$Iterator* (*$fn98)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn102)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn107)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn214)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn284)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn298)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn313)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn332)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn362)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn376)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn391)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn410)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn435)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn439)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn449)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn453)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn458)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn516)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn530)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn545)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn564)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn600)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn614)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn629)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn648)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn697)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Position (*$fn746)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn763)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn772)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn916)(org$frostlang$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 34, -6270392730645118004, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 1290461307291656944, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 1290461307291656944, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 131, -8122018841357217525, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 1290461307291656944, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x63\x6f\x65\x72\x63\x65\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 211, -3968746764551838057, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 1290461307291656944, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 1290461307291656944, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x6f\x64\x69\x66\x79\x20\x76\x61\x6c\x75\x65\x20\x66\x69\x65\x6c\x64\x73\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 52, -2764158439429461122, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 1290461307291656944, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 131, -8122018841357217525, NULL };
static frost$core$String $s524 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s525 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s573 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s583 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 1290461307291656944, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s609 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s622 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s656 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s694 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 1290461307291656944, NULL };
static frost$core$String $s695 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s712 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 1290461307291656944, NULL };
static frost$core$String $s713 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s725 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 1290461307291656944, NULL };
static frost$core$String $s726 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s765 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, 3872445340070684666, NULL };
static frost$core$String $s778 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 1290461307291656944, NULL };
static frost$core$String $s779 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s783 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 2255341192871350238, NULL };
static frost$core$String $s785 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20", 31, 7920137692206573202, NULL };
static frost$core$String $s788 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s790 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s820 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 12, 1290461307291656944, NULL };
static frost$core$String $s821 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s855 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x27", 18, 654003304789403089, NULL };
static frost$core$String $s857 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s912 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, -8767184032745329904, NULL };
static frost$core$String $s918 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x29", 33, 6411653699508251529, NULL };

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:33
frost$core$Int* $tmp2 = &param1->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LValue.frost:34:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
frost$core$Int $tmp22 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from LValue.frost:35:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp23 = &(&local5)->$rawValue;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5139
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp33 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp34 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp33, $tmp34);
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
frost$core$Bit $tmp46 = (frost$core$Bit) {$tmp45 != NULL};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block11; else goto block12;
block12:;
frost$core$Int $tmp48 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s49, $tmp48, &$s50);
abort(); // unreachable
block11:;
org$frostlang$frostc$ASTNode* $tmp51 = *(&local3);
org$frostlang$frostc$lvalue$IndexLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ASTNode($tmp43, param0, $tmp44, $tmp45, $tmp51);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp43)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
org$frostlang$frostc$IR$Value* $tmp52 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp53 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp54 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp43);
block6:;
org$frostlang$frostc$ASTNode* $tmp55 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp56 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Int $tmp57 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LValue.frost:43:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp58 = $tmp3.value;
int64_t $tmp59 = $tmp57.value;
bool $tmp60 = $tmp58 == $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Position* $tmp63 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp64 = *$tmp63;
*(&local7) = $tmp64;
org$frostlang$frostc$ASTNode** $tmp65 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp66 = *$tmp65;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
org$frostlang$frostc$ASTNode* $tmp67 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local8) = $tmp66;
org$frostlang$frostc$ChoiceCase** $tmp68 = (org$frostlang$frostc$ChoiceCase**) (param1->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp69 = *$tmp68;
*(&local9) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
org$frostlang$frostc$ChoiceCase* $tmp70 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local9) = $tmp69;
frost$core$Int* $tmp71 = (frost$core$Int*) (param1->$data + 40);
frost$core$Int $tmp72 = *$tmp71;
*(&local10) = $tmp72;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:44
org$frostlang$frostc$ASTNode* $tmp73 = *(&local8);
frost$core$Int* $tmp74 = &$tmp73->$rawValue;
frost$core$Int $tmp75 = *$tmp74;
frost$core$Int $tmp76 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LValue.frost:45:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76.value;
bool $tmp79 = $tmp77 == $tmp78;
frost$core$Bit $tmp80 = (frost$core$Bit) {$tmp79};
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:46
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:47
org$frostlang$frostc$ChoiceCase* $tmp82 = *(&local9);
frost$core$Weak** $tmp83 = &$tmp82->owner;
frost$core$Weak* $tmp84 = *$tmp83;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LValue.frost:47:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp85 = &$tmp84->_valid;
frost$core$Bit $tmp86 = *$tmp85;
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block25; else goto block26;
block26:;
frost$core$Int $tmp88 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s89, $tmp88);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp90 = &$tmp84->value;
frost$core$Object* $tmp91 = *$tmp90;
frost$core$Frost$ref$frost$core$Object$Q($tmp91);
frost$core$Bit $tmp92 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp91));
bool $tmp93 = $tmp92.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp91);
if ($tmp93) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:48
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from LValue.frost:48:68
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5877
frost$collections$Stack** $tmp94 = &param0->enclosingContexts;
frost$collections$Stack* $tmp95 = *$tmp94;
ITable* $tmp96 = ((frost$collections$Iterable*) $tmp95)->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp96 = $tmp96->next;
}
$fn98 $tmp97 = $tmp96->methods[0];
frost$collections$Iterator* $tmp99 = $tmp97(((frost$collections$Iterable*) $tmp95));
goto block28;
block28:;
ITable* $tmp100 = $tmp99->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[0];
frost$core$Bit $tmp103 = $tmp101($tmp99);
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block30; else goto block29;
block29:;
*(&local13) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp105 = $tmp99->$class->itable;
while ($tmp105->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp105 = $tmp105->next;
}
$fn107 $tmp106 = $tmp105->methods[1];
frost$core$Object* $tmp108 = $tmp106($tmp99);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp108)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp109 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
*(&local13) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp108);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5878
org$frostlang$frostc$Compiler$EnclosingContext* $tmp110 = *(&local13);
frost$core$Int* $tmp111 = &$tmp110->$rawValue;
frost$core$Int $tmp112 = *$tmp111;
frost$core$Int $tmp113 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5879:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp114 = $tmp112.value;
int64_t $tmp115 = $tmp113.value;
bool $tmp116 = $tmp114 == $tmp115;
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116};
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block32; else goto block31;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5880
org$frostlang$frostc$Compiler$EnclosingContext* $tmp119 = *(&local13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Frost$unref$frost$core$Object$Q($tmp108);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp120 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
*(&local13) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
*(&local12) = $tmp119;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
goto block27;
block31:;
frost$core$Frost$unref$frost$core$Object$Q($tmp108);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp121 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local13) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block28;
block30:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5884
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
*(&local12) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
goto block27;
block27:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp122 = *(&local12);
*(&local14) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp123 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local14) = $tmp122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:49
org$frostlang$frostc$Compiler$EnclosingContext* $tmp124 = *(&local14);
frost$core$Bit $tmp125 = (frost$core$Bit) {$tmp124 != NULL};
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block34; else goto block36;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:50
org$frostlang$frostc$Compiler$EnclosingContext* $tmp127 = *(&local14);
frost$core$Bit $tmp128 = (frost$core$Bit) {$tmp127 != NULL};
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block37; else goto block38;
block38:;
frost$core$Int $tmp130 = (frost$core$Int) {50u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s131, $tmp130, &$s132);
abort(); // unreachable
block37:;
frost$core$Int* $tmp133 = &$tmp127->$rawValue;
frost$core$Int $tmp134 = *$tmp133;
frost$core$Int $tmp135 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LValue.frost:51:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp136 = $tmp134.value;
int64_t $tmp137 = $tmp135.value;
bool $tmp138 = $tmp136 == $tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block40; else goto block41;
block40:;
frost$collections$ListView** $tmp141 = (frost$collections$ListView**) ($tmp127->$data + 0);
frost$collections$ListView* $tmp142 = *$tmp141;
frost$core$Int* $tmp143 = (frost$core$Int*) ($tmp127->$data + 8);
frost$core$Int $tmp144 = *$tmp143;
*(&local15) = $tmp144;
org$frostlang$frostc$Compiler$InlineReturn** $tmp145 = (org$frostlang$frostc$Compiler$InlineReturn**) ($tmp127->$data + 16);
org$frostlang$frostc$Compiler$InlineReturn* $tmp146 = *$tmp145;
org$frostlang$frostc$IR$Block$ID* $tmp147 = (org$frostlang$frostc$IR$Block$ID*) ($tmp127->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp148 = *$tmp147;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:52
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp149 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp150 = (frost$core$Int) {2u};
frost$core$Int $tmp151 = *(&local15);
org$frostlang$frostc$ChoiceCase* $tmp152 = *(&local9);
frost$core$Weak** $tmp153 = &$tmp152->owner;
frost$core$Weak* $tmp154 = *$tmp153;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LValue.frost:52:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp155 = &$tmp154->_valid;
frost$core$Bit $tmp156 = *$tmp155;
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block45; else goto block46;
block46:;
frost$core$Int $tmp158 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s159, $tmp158);
abort(); // unreachable
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp160 = &$tmp154->value;
frost$core$Object* $tmp161 = *$tmp160;
frost$core$Frost$ref$frost$core$Object$Q($tmp161);
org$frostlang$frostc$Type** $tmp162 = &((org$frostlang$frostc$ClassDecl*) $tmp161)->type;
org$frostlang$frostc$Type* $tmp163 = *$tmp162;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp149, $tmp150, $tmp151, $tmp163);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
org$frostlang$frostc$IR$Value* $tmp164 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
*(&local11) = $tmp149;
frost$core$Frost$unref$frost$core$Object$Q($tmp161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
goto block35;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:55
frost$core$Int $tmp165 = (frost$core$Int) {55u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s166, $tmp165);
abort(); // unreachable
block36:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:60
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp167 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp168 = (frost$core$Int) {2u};
frost$core$Int $tmp169 = (frost$core$Int) {0u};
org$frostlang$frostc$ChoiceCase* $tmp170 = *(&local9);
frost$core$Weak** $tmp171 = &$tmp170->owner;
frost$core$Weak* $tmp172 = *$tmp171;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LValue.frost:60:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp173 = &$tmp172->_valid;
frost$core$Bit $tmp174 = *$tmp173;
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block49; else goto block50;
block50:;
frost$core$Int $tmp176 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s177, $tmp176);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp178 = &$tmp172->value;
frost$core$Object* $tmp179 = *$tmp178;
frost$core$Frost$ref$frost$core$Object$Q($tmp179);
org$frostlang$frostc$Type** $tmp180 = &((org$frostlang$frostc$ClassDecl*) $tmp179)->type;
org$frostlang$frostc$Type* $tmp181 = *$tmp180;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp167, $tmp168, $tmp169, $tmp181);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
org$frostlang$frostc$IR$Value* $tmp182 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local11) = $tmp167;
frost$core$Frost$unref$frost$core$Object$Q($tmp179);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
goto block35;
block35:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp183 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local14) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp184 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local12) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block21;
block22:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:64
org$frostlang$frostc$ASTNode* $tmp185 = *(&local8);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from LValue.frost:64:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5139
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp186 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp187 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp186, $tmp187);
org$frostlang$frostc$IR$Value* $tmp188 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp185, $tmp186);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
org$frostlang$frostc$IR$Value* $tmp189 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local11) = $tmp188;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:65
org$frostlang$frostc$IR$Value* $tmp190 = *(&local11);
frost$core$Bit $tmp191 = (frost$core$Bit) {$tmp190 == NULL};
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:66
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp193 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ChoiceCase* $tmp194 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
*(&local9) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp195 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block53:;
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:69
org$frostlang$frostc$Position $tmp196 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp197 = *(&local11);
org$frostlang$frostc$ChoiceCase* $tmp198 = *(&local9);
frost$core$Weak** $tmp199 = &$tmp198->owner;
frost$core$Weak* $tmp200 = *$tmp199;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LValue.frost:69:71
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp201 = &$tmp200->_valid;
frost$core$Bit $tmp202 = *$tmp201;
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block56; else goto block57;
block57:;
frost$core$Int $tmp204 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s205, $tmp204);
abort(); // unreachable
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp206 = &$tmp200->value;
frost$core$Object* $tmp207 = *$tmp206;
frost$core$Frost$ref$frost$core$Object$Q($tmp207);
org$frostlang$frostc$Type** $tmp208 = &((org$frostlang$frostc$ClassDecl*) $tmp207)->type;
org$frostlang$frostc$Type* $tmp209 = *$tmp208;
// begin inline call to method org.frostlang.frostc.Compiler.coerce(position:org.frostlang.frostc.Position, value:org.frostlang.frostc.IR.Value?, target:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value? from LValue.frost:69:50
org$frostlang$frostc$Type** $tmp210 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp211 = *$tmp210;
ITable* $tmp212 = ((frost$core$Equatable*) $tmp209)->$class->itable;
while ($tmp212->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp212 = $tmp212->next;
}
$fn214 $tmp213 = $tmp212->methods[1];
frost$core$Bit $tmp215 = $tmp213(((frost$core$Equatable*) $tmp209), ((frost$core$Equatable*) $tmp211));
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block59; else goto block60;
block60:;
frost$core$Int $tmp217 = (frost$core$Int) {4128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s218, $tmp217, &$s219);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:4129
frost$core$Bit $tmp220 = (frost$core$Bit) {false};
org$frostlang$frostc$IR$Value* $tmp221 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp196, $tmp197, $tmp209, $tmp220);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
org$frostlang$frostc$IR$Value* $tmp222 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
*(&local11) = $tmp221;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$Frost$unref$frost$core$Object$Q($tmp207);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:70
org$frostlang$frostc$IR$Value* $tmp223 = *(&local11);
frost$core$Bit $tmp224 = (frost$core$Bit) {$tmp223 == NULL};
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:71
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp226 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ChoiceCase* $tmp227 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
*(&local9) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp228 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:73
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$lvalue$ChoiceFieldLValue));
org$frostlang$frostc$lvalue$ChoiceFieldLValue* $tmp229 = (org$frostlang$frostc$lvalue$ChoiceFieldLValue*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$lvalue$ChoiceFieldLValue$class);
org$frostlang$frostc$Position $tmp230 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp231 = *(&local11);
frost$core$Bit $tmp232 = (frost$core$Bit) {$tmp231 != NULL};
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block63; else goto block64;
block64:;
frost$core$Int $tmp234 = (frost$core$Int) {73u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s235, $tmp234, &$s236);
abort(); // unreachable
block63:;
org$frostlang$frostc$ChoiceCase* $tmp237 = *(&local9);
frost$core$Int $tmp238 = *(&local10);
org$frostlang$frostc$lvalue$ChoiceFieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int($tmp229, param0, $tmp230, $tmp231, $tmp237, $tmp238);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp229)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
org$frostlang$frostc$IR$Value* $tmp239 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ChoiceCase* $tmp240 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
*(&local9) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp241 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp229);
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:76
frost$core$Bit $tmp242 = (frost$core$Bit) {false};
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block65; else goto block66;
block66:;
frost$core$Int $tmp244 = (frost$core$Int) {76u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s245, $tmp244);
abort(); // unreachable
block65:;
org$frostlang$frostc$ChoiceCase* $tmp246 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local9) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$ASTNode* $tmp247 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block14:;
frost$core$Int $tmp248 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LValue.frost:80:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp249 = $tmp3.value;
int64_t $tmp250 = $tmp248.value;
bool $tmp251 = $tmp249 == $tmp250;
frost$core$Bit $tmp252 = (frost$core$Bit) {$tmp251};
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block67; else goto block68;
block67:;
org$frostlang$frostc$Position* $tmp254 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp255 = *$tmp254;
org$frostlang$frostc$ASTNode** $tmp256 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp257 = *$tmp256;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
org$frostlang$frostc$ASTNode* $tmp258 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local16) = $tmp257;
frost$core$String** $tmp259 = (frost$core$String**) (param1->$data + 32);
frost$core$String* $tmp260 = *$tmp259;
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$String* $tmp261 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local17) = $tmp260;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:81
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:82
org$frostlang$frostc$ASTNode* $tmp262 = *(&local16);
frost$core$Int* $tmp263 = &$tmp262->$rawValue;
frost$core$Int $tmp264 = *$tmp263;
frost$core$Int $tmp265 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LValue.frost:83:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp266 = $tmp264.value;
int64_t $tmp267 = $tmp265.value;
bool $tmp268 = $tmp266 == $tmp267;
frost$core$Bit $tmp269 = (frost$core$Bit) {$tmp268};
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:84
frost$collections$Stack** $tmp271 = &param0->currentClass;
frost$collections$Stack* $tmp272 = *$tmp271;
frost$core$Int $tmp273 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from LValue.frost:84:66
frost$core$Int $tmp274 = (frost$core$Int) {0u};
int64_t $tmp275 = $tmp273.value;
int64_t $tmp276 = $tmp274.value;
bool $tmp277 = $tmp275 >= $tmp276;
frost$core$Bit $tmp278 = (frost$core$Bit) {$tmp277};
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block80; else goto block79;
block80:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp280 = &$tmp272->contents;
frost$collections$Array* $tmp281 = *$tmp280;
ITable* $tmp282 = ((frost$collections$CollectionView*) $tmp281)->$class->itable;
while ($tmp282->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp282 = $tmp282->next;
}
$fn284 $tmp283 = $tmp282->methods[0];
frost$core$Int $tmp285 = $tmp283(((frost$collections$CollectionView*) $tmp281));
int64_t $tmp286 = $tmp273.value;
int64_t $tmp287 = $tmp285.value;
bool $tmp288 = $tmp286 < $tmp287;
frost$core$Bit $tmp289 = (frost$core$Bit) {$tmp288};
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block78; else goto block79;
block79:;
frost$core$Int $tmp291 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s292, $tmp291, &$s293);
abort(); // unreachable
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp294 = &$tmp272->contents;
frost$collections$Array* $tmp295 = *$tmp294;
ITable* $tmp296 = ((frost$collections$CollectionView*) $tmp295)->$class->itable;
while ($tmp296->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp296 = $tmp296->next;
}
$fn298 $tmp297 = $tmp296->methods[0];
frost$core$Int $tmp299 = $tmp297(((frost$collections$CollectionView*) $tmp295));
int64_t $tmp300 = $tmp299.value;
int64_t $tmp301 = $tmp273.value;
bool $tmp302 = $tmp300 > $tmp301;
frost$core$Bit $tmp303 = (frost$core$Bit) {$tmp302};
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block82; else goto block83;
block83:;
frost$core$Int $tmp305 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s306, $tmp305);
abort(); // unreachable
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp307 = &$tmp272->contents;
frost$collections$Array* $tmp308 = *$tmp307;
frost$collections$Array** $tmp309 = &$tmp272->contents;
frost$collections$Array* $tmp310 = *$tmp309;
ITable* $tmp311 = ((frost$collections$CollectionView*) $tmp310)->$class->itable;
while ($tmp311->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp311 = $tmp311->next;
}
$fn313 $tmp312 = $tmp311->methods[0];
frost$core$Int $tmp314 = $tmp312(((frost$collections$CollectionView*) $tmp310));
frost$core$Int $tmp315 = (frost$core$Int) {1u};
int64_t $tmp316 = $tmp314.value;
int64_t $tmp317 = $tmp315.value;
int64_t $tmp318 = $tmp316 - $tmp317;
frost$core$Int $tmp319 = (frost$core$Int) {$tmp318};
int64_t $tmp320 = $tmp319.value;
int64_t $tmp321 = $tmp273.value;
int64_t $tmp322 = $tmp320 - $tmp321;
frost$core$Int $tmp323 = (frost$core$Int) {$tmp322};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp324 = (frost$core$Int) {0u};
int64_t $tmp325 = $tmp323.value;
int64_t $tmp326 = $tmp324.value;
bool $tmp327 = $tmp325 >= $tmp326;
frost$core$Bit $tmp328 = (frost$core$Bit) {$tmp327};
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block87; else goto block86;
block87:;
ITable* $tmp330 = ((frost$collections$CollectionView*) $tmp308)->$class->itable;
while ($tmp330->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp330 = $tmp330->next;
}
$fn332 $tmp331 = $tmp330->methods[0];
frost$core$Int $tmp333 = $tmp331(((frost$collections$CollectionView*) $tmp308));
int64_t $tmp334 = $tmp323.value;
int64_t $tmp335 = $tmp333.value;
bool $tmp336 = $tmp334 < $tmp335;
frost$core$Bit $tmp337 = (frost$core$Bit) {$tmp336};
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block85; else goto block86;
block86:;
frost$core$Int $tmp339 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s340, $tmp339, &$s341);
abort(); // unreachable
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp342 = &$tmp308->data;
frost$core$Object** $tmp343 = *$tmp342;
frost$core$Int64 $tmp344 = frost$core$Int64$init$frost$core$Int($tmp323);
int64_t $tmp345 = $tmp344.value;
frost$core$Object* $tmp346 = $tmp343[$tmp345];
frost$core$Frost$ref$frost$core$Object$Q($tmp346);
frost$core$Frost$ref$frost$core$Object$Q($tmp346);
frost$core$Frost$unref$frost$core$Object$Q($tmp346);
frost$core$Bit $tmp347 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp346));
bool $tmp348 = $tmp347.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp346);
if ($tmp348) goto block74; else goto block76;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:85
frost$collections$Stack** $tmp349 = &param0->currentMethod;
frost$collections$Stack* $tmp350 = *$tmp349;
frost$core$Int $tmp351 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from LValue.frost:85:54
frost$core$Int $tmp352 = (frost$core$Int) {0u};
int64_t $tmp353 = $tmp351.value;
int64_t $tmp354 = $tmp352.value;
bool $tmp355 = $tmp353 >= $tmp354;
frost$core$Bit $tmp356 = (frost$core$Bit) {$tmp355};
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block93; else goto block92;
block93:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp358 = &$tmp350->contents;
frost$collections$Array* $tmp359 = *$tmp358;
ITable* $tmp360 = ((frost$collections$CollectionView*) $tmp359)->$class->itable;
while ($tmp360->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp360 = $tmp360->next;
}
$fn362 $tmp361 = $tmp360->methods[0];
frost$core$Int $tmp363 = $tmp361(((frost$collections$CollectionView*) $tmp359));
int64_t $tmp364 = $tmp351.value;
int64_t $tmp365 = $tmp363.value;
bool $tmp366 = $tmp364 < $tmp365;
frost$core$Bit $tmp367 = (frost$core$Bit) {$tmp366};
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block91; else goto block92;
block92:;
frost$core$Int $tmp369 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s370, $tmp369, &$s371);
abort(); // unreachable
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp372 = &$tmp350->contents;
frost$collections$Array* $tmp373 = *$tmp372;
ITable* $tmp374 = ((frost$collections$CollectionView*) $tmp373)->$class->itable;
while ($tmp374->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp374 = $tmp374->next;
}
$fn376 $tmp375 = $tmp374->methods[0];
frost$core$Int $tmp377 = $tmp375(((frost$collections$CollectionView*) $tmp373));
int64_t $tmp378 = $tmp377.value;
int64_t $tmp379 = $tmp351.value;
bool $tmp380 = $tmp378 > $tmp379;
frost$core$Bit $tmp381 = (frost$core$Bit) {$tmp380};
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block95; else goto block96;
block96:;
frost$core$Int $tmp383 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s384, $tmp383);
abort(); // unreachable
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp385 = &$tmp350->contents;
frost$collections$Array* $tmp386 = *$tmp385;
frost$collections$Array** $tmp387 = &$tmp350->contents;
frost$collections$Array* $tmp388 = *$tmp387;
ITable* $tmp389 = ((frost$collections$CollectionView*) $tmp388)->$class->itable;
while ($tmp389->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp389 = $tmp389->next;
}
$fn391 $tmp390 = $tmp389->methods[0];
frost$core$Int $tmp392 = $tmp390(((frost$collections$CollectionView*) $tmp388));
frost$core$Int $tmp393 = (frost$core$Int) {1u};
int64_t $tmp394 = $tmp392.value;
int64_t $tmp395 = $tmp393.value;
int64_t $tmp396 = $tmp394 - $tmp395;
frost$core$Int $tmp397 = (frost$core$Int) {$tmp396};
int64_t $tmp398 = $tmp397.value;
int64_t $tmp399 = $tmp351.value;
int64_t $tmp400 = $tmp398 - $tmp399;
frost$core$Int $tmp401 = (frost$core$Int) {$tmp400};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp402 = (frost$core$Int) {0u};
int64_t $tmp403 = $tmp401.value;
int64_t $tmp404 = $tmp402.value;
bool $tmp405 = $tmp403 >= $tmp404;
frost$core$Bit $tmp406 = (frost$core$Bit) {$tmp405};
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block100; else goto block99;
block100:;
ITable* $tmp408 = ((frost$collections$CollectionView*) $tmp386)->$class->itable;
while ($tmp408->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp408 = $tmp408->next;
}
$fn410 $tmp409 = $tmp408->methods[0];
frost$core$Int $tmp411 = $tmp409(((frost$collections$CollectionView*) $tmp386));
int64_t $tmp412 = $tmp401.value;
int64_t $tmp413 = $tmp411.value;
bool $tmp414 = $tmp412 < $tmp413;
frost$core$Bit $tmp415 = (frost$core$Bit) {$tmp414};
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block98; else goto block99;
block99:;
frost$core$Int $tmp417 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s418, $tmp417, &$s419);
abort(); // unreachable
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp420 = &$tmp386->data;
frost$core$Object** $tmp421 = *$tmp420;
frost$core$Int64 $tmp422 = frost$core$Int64$init$frost$core$Int($tmp401);
int64_t $tmp423 = $tmp422.value;
frost$core$Object* $tmp424 = $tmp421[$tmp423];
frost$core$Frost$ref$frost$core$Object$Q($tmp424);
frost$core$Frost$ref$frost$core$Object$Q($tmp424);
frost$core$Frost$unref$frost$core$Object$Q($tmp424);
org$frostlang$frostc$MethodDecl$Kind* $tmp425 = &((org$frostlang$frostc$MethodDecl*) $tmp424)->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp426 = *$tmp425;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp427;
$tmp427 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp427->value = $tmp426;
frost$core$Int $tmp428 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from LValue.frost:85:87
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp429 = &(&local20)->$rawValue;
*$tmp429 = $tmp428;
org$frostlang$frostc$MethodDecl$Kind $tmp430 = *(&local20);
*(&local19) = $tmp430;
org$frostlang$frostc$MethodDecl$Kind $tmp431 = *(&local19);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp432;
$tmp432 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp432->value = $tmp431;
ITable* $tmp433 = ((frost$core$Equatable*) $tmp427)->$class->itable;
while ($tmp433->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp433 = $tmp433->next;
}
$fn435 $tmp434 = $tmp433->methods[1];
frost$core$Bit $tmp436 = $tmp434(((frost$core$Equatable*) $tmp427), ((frost$core$Equatable*) $tmp432));
bool $tmp437 = $tmp436.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp432)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp427)));
frost$core$Frost$unref$frost$core$Object$Q($tmp424);
if ($tmp437) goto block88; else goto block89;
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:86
$fn439 $tmp438 = ($fn439) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp440 = $tmp438(param1);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp440, &$s441);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:88
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp442 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp443 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp444 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:90
// begin inline call to function org.frostlang.frostc.Compiler.getInlineContext():org.frostlang.frostc.Compiler.EnclosingContext? from LValue.frost:90:68
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5877
frost$collections$Stack** $tmp445 = &param0->enclosingContexts;
frost$collections$Stack* $tmp446 = *$tmp445;
ITable* $tmp447 = ((frost$collections$Iterable*) $tmp446)->$class->itable;
while ($tmp447->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp447 = $tmp447->next;
}
$fn449 $tmp448 = $tmp447->methods[0];
frost$collections$Iterator* $tmp450 = $tmp448(((frost$collections$Iterable*) $tmp446));
goto block103;
block103:;
ITable* $tmp451 = $tmp450->$class->itable;
while ($tmp451->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp451 = $tmp451->next;
}
$fn453 $tmp452 = $tmp451->methods[0];
frost$core$Bit $tmp454 = $tmp452($tmp450);
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block105; else goto block104;
block104:;
*(&local22) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp456 = $tmp450->$class->itable;
while ($tmp456->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp456 = $tmp456->next;
}
$fn458 $tmp457 = $tmp456->methods[1];
frost$core$Object* $tmp459 = $tmp457($tmp450);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp459)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp460 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
*(&local22) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp459);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5878
org$frostlang$frostc$Compiler$EnclosingContext* $tmp461 = *(&local22);
frost$core$Int* $tmp462 = &$tmp461->$rawValue;
frost$core$Int $tmp463 = *$tmp462;
frost$core$Int $tmp464 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:5879:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp465 = $tmp463.value;
int64_t $tmp466 = $tmp464.value;
bool $tmp467 = $tmp465 == $tmp466;
frost$core$Bit $tmp468 = (frost$core$Bit) {$tmp467};
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block107; else goto block106;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5880
org$frostlang$frostc$Compiler$EnclosingContext* $tmp470 = *(&local22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
frost$core$Frost$unref$frost$core$Object$Q($tmp459);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp471 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
*(&local22) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local21) = $tmp470;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
goto block102;
block106:;
frost$core$Frost$unref$frost$core$Object$Q($tmp459);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp472 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
*(&local22) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block103;
block105:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5884
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
*(&local21) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL)));
goto block102;
block102:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp473 = *(&local21);
*(&local23) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp474 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
*(&local23) = $tmp473;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:91
org$frostlang$frostc$Compiler$EnclosingContext* $tmp475 = *(&local23);
frost$core$Bit $tmp476 = (frost$core$Bit) {$tmp475 != NULL};
bool $tmp477 = $tmp476.value;
if ($tmp477) goto block109; else goto block111;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:92
org$frostlang$frostc$Compiler$EnclosingContext* $tmp478 = *(&local23);
frost$core$Bit $tmp479 = (frost$core$Bit) {$tmp478 != NULL};
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block112; else goto block113;
block113:;
frost$core$Int $tmp481 = (frost$core$Int) {92u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s482, $tmp481, &$s483);
abort(); // unreachable
block112:;
frost$core$Int* $tmp484 = &$tmp478->$rawValue;
frost$core$Int $tmp485 = *$tmp484;
frost$core$Int $tmp486 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LValue.frost:93:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp487 = $tmp485.value;
int64_t $tmp488 = $tmp486.value;
bool $tmp489 = $tmp487 == $tmp488;
frost$core$Bit $tmp490 = (frost$core$Bit) {$tmp489};
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block115; else goto block116;
block115:;
frost$collections$ListView** $tmp492 = (frost$collections$ListView**) ($tmp478->$data + 0);
frost$collections$ListView* $tmp493 = *$tmp492;
frost$core$Int* $tmp494 = (frost$core$Int*) ($tmp478->$data + 8);
frost$core$Int $tmp495 = *$tmp494;
*(&local24) = $tmp495;
org$frostlang$frostc$Compiler$InlineReturn** $tmp496 = (org$frostlang$frostc$Compiler$InlineReturn**) ($tmp478->$data + 16);
org$frostlang$frostc$Compiler$InlineReturn* $tmp497 = *$tmp496;
org$frostlang$frostc$IR$Block$ID* $tmp498 = (org$frostlang$frostc$IR$Block$ID*) ($tmp478->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp499 = *$tmp498;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:95
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp500 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp501 = (frost$core$Int) {2u};
frost$core$Int $tmp502 = *(&local24);
frost$collections$Stack** $tmp503 = &param0->currentClass;
frost$collections$Stack* $tmp504 = *$tmp503;
frost$core$Int $tmp505 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from LValue.frost:96:70
frost$core$Int $tmp506 = (frost$core$Int) {0u};
int64_t $tmp507 = $tmp505.value;
int64_t $tmp508 = $tmp506.value;
bool $tmp509 = $tmp507 >= $tmp508;
frost$core$Bit $tmp510 = (frost$core$Bit) {$tmp509};
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block121; else goto block120;
block121:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp512 = &$tmp504->contents;
frost$collections$Array* $tmp513 = *$tmp512;
ITable* $tmp514 = ((frost$collections$CollectionView*) $tmp513)->$class->itable;
while ($tmp514->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp514 = $tmp514->next;
}
$fn516 $tmp515 = $tmp514->methods[0];
frost$core$Int $tmp517 = $tmp515(((frost$collections$CollectionView*) $tmp513));
int64_t $tmp518 = $tmp505.value;
int64_t $tmp519 = $tmp517.value;
bool $tmp520 = $tmp518 < $tmp519;
frost$core$Bit $tmp521 = (frost$core$Bit) {$tmp520};
bool $tmp522 = $tmp521.value;
if ($tmp522) goto block119; else goto block120;
block120:;
frost$core$Int $tmp523 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s524, $tmp523, &$s525);
abort(); // unreachable
block119:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp526 = &$tmp504->contents;
frost$collections$Array* $tmp527 = *$tmp526;
ITable* $tmp528 = ((frost$collections$CollectionView*) $tmp527)->$class->itable;
while ($tmp528->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp528 = $tmp528->next;
}
$fn530 $tmp529 = $tmp528->methods[0];
frost$core$Int $tmp531 = $tmp529(((frost$collections$CollectionView*) $tmp527));
int64_t $tmp532 = $tmp531.value;
int64_t $tmp533 = $tmp505.value;
bool $tmp534 = $tmp532 > $tmp533;
frost$core$Bit $tmp535 = (frost$core$Bit) {$tmp534};
bool $tmp536 = $tmp535.value;
if ($tmp536) goto block123; else goto block124;
block124:;
frost$core$Int $tmp537 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s538, $tmp537);
abort(); // unreachable
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp539 = &$tmp504->contents;
frost$collections$Array* $tmp540 = *$tmp539;
frost$collections$Array** $tmp541 = &$tmp504->contents;
frost$collections$Array* $tmp542 = *$tmp541;
ITable* $tmp543 = ((frost$collections$CollectionView*) $tmp542)->$class->itable;
while ($tmp543->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp543 = $tmp543->next;
}
$fn545 $tmp544 = $tmp543->methods[0];
frost$core$Int $tmp546 = $tmp544(((frost$collections$CollectionView*) $tmp542));
frost$core$Int $tmp547 = (frost$core$Int) {1u};
int64_t $tmp548 = $tmp546.value;
int64_t $tmp549 = $tmp547.value;
int64_t $tmp550 = $tmp548 - $tmp549;
frost$core$Int $tmp551 = (frost$core$Int) {$tmp550};
int64_t $tmp552 = $tmp551.value;
int64_t $tmp553 = $tmp505.value;
int64_t $tmp554 = $tmp552 - $tmp553;
frost$core$Int $tmp555 = (frost$core$Int) {$tmp554};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp556 = (frost$core$Int) {0u};
int64_t $tmp557 = $tmp555.value;
int64_t $tmp558 = $tmp556.value;
bool $tmp559 = $tmp557 >= $tmp558;
frost$core$Bit $tmp560 = (frost$core$Bit) {$tmp559};
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block128; else goto block127;
block128:;
ITable* $tmp562 = ((frost$collections$CollectionView*) $tmp540)->$class->itable;
while ($tmp562->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp562 = $tmp562->next;
}
$fn564 $tmp563 = $tmp562->methods[0];
frost$core$Int $tmp565 = $tmp563(((frost$collections$CollectionView*) $tmp540));
int64_t $tmp566 = $tmp555.value;
int64_t $tmp567 = $tmp565.value;
bool $tmp568 = $tmp566 < $tmp567;
frost$core$Bit $tmp569 = (frost$core$Bit) {$tmp568};
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block126; else goto block127;
block127:;
frost$core$Int $tmp571 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s572, $tmp571, &$s573);
abort(); // unreachable
block126:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp574 = &$tmp540->data;
frost$core$Object** $tmp575 = *$tmp574;
frost$core$Int64 $tmp576 = frost$core$Int64$init$frost$core$Int($tmp555);
int64_t $tmp577 = $tmp576.value;
frost$core$Object* $tmp578 = $tmp575[$tmp577];
frost$core$Frost$ref$frost$core$Object$Q($tmp578);
frost$core$Frost$ref$frost$core$Object$Q($tmp578);
frost$core$Frost$unref$frost$core$Object$Q($tmp578);
org$frostlang$frostc$Type** $tmp579 = &((org$frostlang$frostc$ClassDecl*) $tmp578)->type;
org$frostlang$frostc$Type* $tmp580 = *$tmp579;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp500, $tmp501, $tmp502, $tmp580);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
org$frostlang$frostc$IR$Value* $tmp581 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
*(&local18) = $tmp500;
frost$core$Frost$unref$frost$core$Object$Q($tmp578);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
goto block110;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:99
frost$core$Int $tmp582 = (frost$core$Int) {99u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s583, $tmp582);
abort(); // unreachable
block111:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:104
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp584 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp585 = (frost$core$Int) {2u};
frost$core$Int $tmp586 = (frost$core$Int) {0u};
frost$collections$Stack** $tmp587 = &param0->currentClass;
frost$collections$Stack* $tmp588 = *$tmp587;
frost$core$Int $tmp589 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from LValue.frost:104:88
frost$core$Int $tmp590 = (frost$core$Int) {0u};
int64_t $tmp591 = $tmp589.value;
int64_t $tmp592 = $tmp590.value;
bool $tmp593 = $tmp591 >= $tmp592;
frost$core$Bit $tmp594 = (frost$core$Bit) {$tmp593};
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block132; else goto block131;
block132:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp596 = &$tmp588->contents;
frost$collections$Array* $tmp597 = *$tmp596;
ITable* $tmp598 = ((frost$collections$CollectionView*) $tmp597)->$class->itable;
while ($tmp598->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp598 = $tmp598->next;
}
$fn600 $tmp599 = $tmp598->methods[0];
frost$core$Int $tmp601 = $tmp599(((frost$collections$CollectionView*) $tmp597));
int64_t $tmp602 = $tmp589.value;
int64_t $tmp603 = $tmp601.value;
bool $tmp604 = $tmp602 < $tmp603;
frost$core$Bit $tmp605 = (frost$core$Bit) {$tmp604};
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block130; else goto block131;
block131:;
frost$core$Int $tmp607 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s608, $tmp607, &$s609);
abort(); // unreachable
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp610 = &$tmp588->contents;
frost$collections$Array* $tmp611 = *$tmp610;
ITable* $tmp612 = ((frost$collections$CollectionView*) $tmp611)->$class->itable;
while ($tmp612->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp612 = $tmp612->next;
}
$fn614 $tmp613 = $tmp612->methods[0];
frost$core$Int $tmp615 = $tmp613(((frost$collections$CollectionView*) $tmp611));
int64_t $tmp616 = $tmp615.value;
int64_t $tmp617 = $tmp589.value;
bool $tmp618 = $tmp616 > $tmp617;
frost$core$Bit $tmp619 = (frost$core$Bit) {$tmp618};
bool $tmp620 = $tmp619.value;
if ($tmp620) goto block134; else goto block135;
block135:;
frost$core$Int $tmp621 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s622, $tmp621);
abort(); // unreachable
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp623 = &$tmp588->contents;
frost$collections$Array* $tmp624 = *$tmp623;
frost$collections$Array** $tmp625 = &$tmp588->contents;
frost$collections$Array* $tmp626 = *$tmp625;
ITable* $tmp627 = ((frost$collections$CollectionView*) $tmp626)->$class->itable;
while ($tmp627->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp627 = $tmp627->next;
}
$fn629 $tmp628 = $tmp627->methods[0];
frost$core$Int $tmp630 = $tmp628(((frost$collections$CollectionView*) $tmp626));
frost$core$Int $tmp631 = (frost$core$Int) {1u};
int64_t $tmp632 = $tmp630.value;
int64_t $tmp633 = $tmp631.value;
int64_t $tmp634 = $tmp632 - $tmp633;
frost$core$Int $tmp635 = (frost$core$Int) {$tmp634};
int64_t $tmp636 = $tmp635.value;
int64_t $tmp637 = $tmp589.value;
int64_t $tmp638 = $tmp636 - $tmp637;
frost$core$Int $tmp639 = (frost$core$Int) {$tmp638};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp640 = (frost$core$Int) {0u};
int64_t $tmp641 = $tmp639.value;
int64_t $tmp642 = $tmp640.value;
bool $tmp643 = $tmp641 >= $tmp642;
frost$core$Bit $tmp644 = (frost$core$Bit) {$tmp643};
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block139; else goto block138;
block139:;
ITable* $tmp646 = ((frost$collections$CollectionView*) $tmp624)->$class->itable;
while ($tmp646->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp646 = $tmp646->next;
}
$fn648 $tmp647 = $tmp646->methods[0];
frost$core$Int $tmp649 = $tmp647(((frost$collections$CollectionView*) $tmp624));
int64_t $tmp650 = $tmp639.value;
int64_t $tmp651 = $tmp649.value;
bool $tmp652 = $tmp650 < $tmp651;
frost$core$Bit $tmp653 = (frost$core$Bit) {$tmp652};
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block137; else goto block138;
block138:;
frost$core$Int $tmp655 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s656, $tmp655, &$s657);
abort(); // unreachable
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp658 = &$tmp624->data;
frost$core$Object** $tmp659 = *$tmp658;
frost$core$Int64 $tmp660 = frost$core$Int64$init$frost$core$Int($tmp639);
int64_t $tmp661 = $tmp660.value;
frost$core$Object* $tmp662 = $tmp659[$tmp661];
frost$core$Frost$ref$frost$core$Object$Q($tmp662);
frost$core$Frost$ref$frost$core$Object$Q($tmp662);
frost$core$Frost$unref$frost$core$Object$Q($tmp662);
org$frostlang$frostc$Type** $tmp663 = &((org$frostlang$frostc$ClassDecl*) $tmp662)->type;
org$frostlang$frostc$Type* $tmp664 = *$tmp663;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp584, $tmp585, $tmp586, $tmp664);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
org$frostlang$frostc$IR$Value* $tmp665 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
*(&local18) = $tmp584;
frost$core$Frost$unref$frost$core$Object$Q($tmp662);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
goto block110;
block110:;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp666 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
*(&local23) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp667 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
*(&local21) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block75;
block76:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:108
org$frostlang$frostc$ASTNode* $tmp668 = *(&local16);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from LValue.frost:108:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5139
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp669 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp670 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp669, $tmp670);
org$frostlang$frostc$IR$Value* $tmp671 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp668, $tmp669);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
org$frostlang$frostc$IR$Value* $tmp672 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
*(&local18) = $tmp671;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:109
org$frostlang$frostc$IR$Value* $tmp673 = *(&local18);
frost$core$Bit $tmp674 = (frost$core$Bit) {$tmp673 == NULL};
bool $tmp675 = $tmp674.value;
if ($tmp675) goto block141; else goto block142;
block141:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:110
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
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
block142:;
goto block75;
block75:;
goto block70;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:115
org$frostlang$frostc$ASTNode* $tmp679 = *(&local16);
// begin inline call to method org.frostlang.frostc.Compiler.compileExpression(expr:org.frostlang.frostc.ASTNode):org.frostlang.frostc.IR.Value? from LValue.frost:115:67
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5139
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp680 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp681 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp680, $tmp681);
org$frostlang$frostc$IR$Value* $tmp682 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp679, $tmp680);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
org$frostlang$frostc$IR$Value* $tmp683 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
*(&local18) = $tmp682;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:116
org$frostlang$frostc$IR$Value* $tmp684 = *(&local18);
frost$core$Bit $tmp685 = (frost$core$Bit) {$tmp684 == NULL};
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block144; else goto block145;
block144:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:117
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$IR$Value* $tmp687 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp688 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp689 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block145:;
goto block70;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:121
org$frostlang$frostc$IR$Value* $tmp690 = *(&local18);
frost$core$Bit $tmp691 = (frost$core$Bit) {$tmp690 != NULL};
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block146; else goto block147;
block147:;
frost$core$Int $tmp693 = (frost$core$Int) {121u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s694, $tmp693, &$s695);
abort(); // unreachable
block146:;
$fn697 $tmp696 = ($fn697) $tmp690->$class->vtable[2];
org$frostlang$frostc$Type* $tmp698 = $tmp696($tmp690);
org$frostlang$frostc$ClassDecl* $tmp699 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp698);
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
org$frostlang$frostc$ClassDecl* $tmp700 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
*(&local25) = $tmp699;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:122
org$frostlang$frostc$ClassDecl* $tmp701 = *(&local25);
frost$core$Bit $tmp702 = (frost$core$Bit) {$tmp701 == NULL};
bool $tmp703 = $tmp702.value;
if ($tmp703) goto block148; else goto block149;
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:123
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp704 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp705 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp706 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp707 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block149:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:125
org$frostlang$frostc$ClassDecl* $tmp708 = *(&local25);
frost$core$Bit $tmp709 = (frost$core$Bit) {$tmp708 != NULL};
bool $tmp710 = $tmp709.value;
if ($tmp710) goto block150; else goto block151;
block151:;
frost$core$Int $tmp711 = (frost$core$Int) {125u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s712, $tmp711, &$s713);
abort(); // unreachable
block150:;
org$frostlang$frostc$SymbolTable* $tmp714 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp708);
frost$core$String* $tmp715 = *(&local17);
org$frostlang$frostc$Symbol* $tmp716 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp714, $tmp715);
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
org$frostlang$frostc$Symbol* $tmp717 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
*(&local26) = $tmp716;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:126
org$frostlang$frostc$Symbol* $tmp718 = *(&local26);
frost$core$Bit $tmp719 = (frost$core$Bit) {$tmp718 != NULL};
bool $tmp720 = $tmp719.value;
if ($tmp720) goto block152; else goto block153;
block152:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:127
org$frostlang$frostc$Symbol* $tmp721 = *(&local26);
frost$core$Bit $tmp722 = (frost$core$Bit) {$tmp721 != NULL};
bool $tmp723 = $tmp722.value;
if ($tmp723) goto block154; else goto block155;
block155:;
frost$core$Int $tmp724 = (frost$core$Int) {127u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s725, $tmp724, &$s726);
abort(); // unreachable
block154:;
org$frostlang$frostc$Symbol$Kind* $tmp727 = &$tmp721->kind;
org$frostlang$frostc$Symbol$Kind $tmp728 = *$tmp727;
frost$core$Int $tmp729 = $tmp728.$rawValue;
frost$core$Int $tmp730 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LValue.frost:128:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp731 = $tmp729.value;
int64_t $tmp732 = $tmp730.value;
bool $tmp733 = $tmp731 == $tmp732;
frost$core$Bit $tmp734 = (frost$core$Bit) {$tmp733};
bool $tmp735 = $tmp734.value;
if ($tmp735) goto block157; else goto block158;
block157:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:129
org$frostlang$frostc$Symbol* $tmp736 = *(&local26);
frost$core$Bit $tmp737 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$FieldDecl*) $tmp736));
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block160; else goto block161;
block160:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:130
org$frostlang$frostc$Symbol* $tmp739 = *(&local26);
*(&local27) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp739)));
org$frostlang$frostc$FieldDecl* $tmp740 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local27) = ((org$frostlang$frostc$FieldDecl*) $tmp739);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:131
org$frostlang$frostc$FieldDecl* $tmp741 = *(&local27);
frost$core$Bit $tmp742 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp741);
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block162; else goto block163;
block162:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:132
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$lvalue$FieldLValue));
org$frostlang$frostc$lvalue$FieldLValue* $tmp744 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
$fn746 $tmp745 = ($fn746) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp747 = $tmp745(param1);
org$frostlang$frostc$IR$Value* $tmp748 = *(&local18);
org$frostlang$frostc$FieldDecl* $tmp749 = *(&local27);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl($tmp744, param0, $tmp747, $tmp748, $tmp749);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp744)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
org$frostlang$frostc$FieldDecl* $tmp750 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local27) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp751 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp752 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp753 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp754 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp755 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp744);
block163:;
org$frostlang$frostc$FieldDecl* $tmp756 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local27) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block161;
block161:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:135
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp757 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp758 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp759 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp760 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp761 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block158:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:138
$fn763 $tmp762 = ($fn763) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp764 = $tmp762(param1);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp764, &$s765);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:139
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp766 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp767 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp768 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp769 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp770 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block156:;
goto block153;
block153:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:143
$fn772 $tmp771 = ($fn772) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp773 = $tmp771(param1);
org$frostlang$frostc$ClassDecl* $tmp774 = *(&local25);
frost$core$Bit $tmp775 = (frost$core$Bit) {$tmp774 != NULL};
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block164; else goto block165;
block165:;
frost$core$Int $tmp777 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s778, $tmp777, &$s779);
abort(); // unreachable
block164:;
frost$core$String** $tmp780 = &$tmp774->name;
frost$core$String* $tmp781 = *$tmp780;
frost$core$String* $tmp782 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s783, $tmp781);
frost$core$String* $tmp784 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp782, &$s785);
frost$core$String* $tmp786 = *(&local17);
frost$core$String* $tmp787 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s788, $tmp786);
frost$core$String* $tmp789 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp787, &$s790);
frost$core$String* $tmp791 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp784, $tmp789);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp773, $tmp791);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:145
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp792 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
*(&local26) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp793 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp794 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$String* $tmp795 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp796 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block68:;
frost$core$Int $tmp797 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LValue.frost:147:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp798 = $tmp3.value;
int64_t $tmp799 = $tmp797.value;
bool $tmp800 = $tmp798 == $tmp799;
frost$core$Bit $tmp801 = (frost$core$Bit) {$tmp800};
bool $tmp802 = $tmp801.value;
if ($tmp802) goto block166; else goto block1;
block166:;
org$frostlang$frostc$Position* $tmp803 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp804 = *$tmp803;
*(&local28) = $tmp804;
frost$core$String** $tmp805 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp806 = *$tmp805;
*(&local29) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$String* $tmp807 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
*(&local29) = $tmp806;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:148
org$frostlang$frostc$SymbolTable** $tmp808 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp809 = *$tmp808;
frost$core$String* $tmp810 = *(&local29);
org$frostlang$frostc$Symbol* $tmp811 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp809, $tmp810);
*(&local30) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
org$frostlang$frostc$Symbol* $tmp812 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
*(&local30) = $tmp811;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:149
org$frostlang$frostc$Symbol* $tmp813 = *(&local30);
frost$core$Bit $tmp814 = (frost$core$Bit) {$tmp813 != NULL};
bool $tmp815 = $tmp814.value;
if ($tmp815) goto block168; else goto block169;
block168:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:150
org$frostlang$frostc$Symbol* $tmp816 = *(&local30);
frost$core$Bit $tmp817 = (frost$core$Bit) {$tmp816 != NULL};
bool $tmp818 = $tmp817.value;
if ($tmp818) goto block170; else goto block171;
block171:;
frost$core$Int $tmp819 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s820, $tmp819, &$s821);
abort(); // unreachable
block170:;
org$frostlang$frostc$Symbol$Kind* $tmp822 = &$tmp816->kind;
org$frostlang$frostc$Symbol$Kind $tmp823 = *$tmp822;
frost$core$Int $tmp824 = $tmp823.$rawValue;
frost$core$Int $tmp825 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LValue.frost:151:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp826 = $tmp824.value;
int64_t $tmp827 = $tmp825.value;
bool $tmp828 = $tmp826 == $tmp827;
frost$core$Bit $tmp829 = (frost$core$Bit) {$tmp828};
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block173; else goto block174;
block173:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:152
org$frostlang$frostc$Symbol* $tmp831 = *(&local30);
*(&local31) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Variable*) $tmp831)));
org$frostlang$frostc$Variable* $tmp832 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
*(&local31) = ((org$frostlang$frostc$Variable*) $tmp831);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:153
org$frostlang$frostc$Variable* $tmp833 = *(&local31);
org$frostlang$frostc$Variable$Storage** $tmp834 = &$tmp833->storage;
org$frostlang$frostc$Variable$Storage* $tmp835 = *$tmp834;
frost$core$Int* $tmp836 = &$tmp835->$rawValue;
frost$core$Int $tmp837 = *$tmp836;
frost$core$Int $tmp838 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LValue.frost:154:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp839 = $tmp837.value;
int64_t $tmp840 = $tmp838.value;
bool $tmp841 = $tmp839 == $tmp840;
frost$core$Bit $tmp842 = (frost$core$Bit) {$tmp841};
bool $tmp843 = $tmp842.value;
if ($tmp843) goto block177; else goto block178;
block177:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:155
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$lvalue$VariableLValue));
org$frostlang$frostc$lvalue$VariableLValue* $tmp844 = (org$frostlang$frostc$lvalue$VariableLValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$lvalue$VariableLValue$class);
org$frostlang$frostc$Position $tmp845 = *(&local28);
org$frostlang$frostc$Symbol* $tmp846 = *(&local30);
org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable($tmp844, param0, $tmp845, ((org$frostlang$frostc$Variable*) $tmp846));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp844)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
org$frostlang$frostc$Variable* $tmp847 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local31) = ((org$frostlang$frostc$Variable*) NULL);
org$frostlang$frostc$Symbol* $tmp848 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
*(&local30) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp849 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
*(&local29) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp844);
block178:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:158
org$frostlang$frostc$Position $tmp850 = *(&local28);
org$frostlang$frostc$Variable* $tmp851 = *(&local31);
frost$core$String** $tmp852 = &((org$frostlang$frostc$Symbol*) $tmp851)->name;
frost$core$String* $tmp853 = *$tmp852;
frost$core$String* $tmp854 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s855, $tmp853);
frost$core$String* $tmp856 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp854, &$s857);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp850, $tmp856);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
org$frostlang$frostc$Variable* $tmp858 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
*(&local31) = ((org$frostlang$frostc$Variable*) NULL);
goto block172;
block174:;
frost$core$Int $tmp859 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LValue.frost:162:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp860 = $tmp824.value;
int64_t $tmp861 = $tmp859.value;
bool $tmp862 = $tmp860 == $tmp861;
frost$core$Bit $tmp863 = (frost$core$Bit) {$tmp862};
bool $tmp864 = $tmp863.value;
if ($tmp864) goto block180; else goto block172;
block180:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:163
org$frostlang$frostc$Symbol* $tmp865 = *(&local30);
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp865)));
org$frostlang$frostc$FieldDecl* $tmp866 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
*(&local32) = ((org$frostlang$frostc$FieldDecl*) $tmp865);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:164
org$frostlang$frostc$FieldDecl* $tmp867 = *(&local32);
org$frostlang$frostc$Annotations** $tmp868 = &$tmp867->annotations;
org$frostlang$frostc$Annotations* $tmp869 = *$tmp868;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from LValue.frost:164:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp870 = &$tmp869->flags;
frost$core$Int $tmp871 = *$tmp870;
frost$core$Int $tmp872 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp873 = $tmp871.value;
int64_t $tmp874 = $tmp872.value;
int64_t $tmp875 = $tmp873 & $tmp874;
frost$core$Int $tmp876 = (frost$core$Int) {$tmp875};
frost$core$Int $tmp877 = (frost$core$Int) {0u};
int64_t $tmp878 = $tmp876.value;
int64_t $tmp879 = $tmp877.value;
bool $tmp880 = $tmp878 != $tmp879;
frost$core$Bit $tmp881 = (frost$core$Bit) {$tmp880};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from LValue.frost:164:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp882 = $tmp881.value;
bool $tmp883 = !$tmp882;
frost$core$Bit $tmp884 = (frost$core$Bit) {$tmp883};
bool $tmp885 = $tmp884.value;
if ($tmp885) goto block182; else goto block183;
block182:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:165
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp886 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp887 = (frost$core$Int) {16u};
org$frostlang$frostc$Position $tmp888 = *(&local28);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp889 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp890 = (frost$core$Int) {39u};
org$frostlang$frostc$Position $tmp891 = *(&local28);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position($tmp889, $tmp890, $tmp891);
org$frostlang$frostc$FieldDecl* $tmp892 = *(&local32);
frost$core$String** $tmp893 = &((org$frostlang$frostc$Symbol*) $tmp892)->name;
frost$core$String* $tmp894 = *$tmp893;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp886, $tmp887, $tmp888, $tmp889, $tmp894);
org$frostlang$frostc$lvalue$LValue* $tmp895 = org$frostlang$frostc$lvalue$LValue$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$lvalue$LValue$Q(param0, $tmp886);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
org$frostlang$frostc$FieldDecl* $tmp896 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp897 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
*(&local30) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp898 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
*(&local29) = ((frost$core$String*) NULL);
return $tmp895;
block183:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:168
org$frostlang$frostc$FieldDecl* $tmp899 = *(&local32);
frost$core$Bit $tmp900 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp899);
bool $tmp901 = $tmp900.value;
if ($tmp901) goto block187; else goto block188;
block187:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:169
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$lvalue$FieldLValue));
org$frostlang$frostc$lvalue$FieldLValue* $tmp902 = (org$frostlang$frostc$lvalue$FieldLValue*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$lvalue$FieldLValue$class);
org$frostlang$frostc$Position $tmp903 = *(&local28);
org$frostlang$frostc$FieldDecl* $tmp904 = *(&local32);
org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl($tmp902, param0, $tmp903, ((org$frostlang$frostc$IR$Value*) NULL), $tmp904);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) $tmp902)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
org$frostlang$frostc$FieldDecl* $tmp905 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp906 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
*(&local30) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp907 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
*(&local29) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) $tmp902);
block188:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:171
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$FieldDecl* $tmp908 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$Symbol* $tmp909 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
*(&local30) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp910 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
*(&local29) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block172:;
goto block169;
block169:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:175
org$frostlang$frostc$Position $tmp911 = *(&local28);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp911, &$s912);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
org$frostlang$frostc$Symbol* $tmp913 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
*(&local30) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp914 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
*(&local29) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$lvalue$LValue*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:179
$fn916 $tmp915 = ($fn916) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp917 = $tmp915(param1);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp917, &$s918);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/LValue.frost:180
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$lvalue$LValue*) NULL)));
return ((org$frostlang$frostc$lvalue$LValue*) NULL);

}

