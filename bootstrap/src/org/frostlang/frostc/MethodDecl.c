#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "frost/core/Bit.h"
#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "frost/core/Equatable.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/unsafe/NewPointer.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Annotations/Expression.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/expression/Unary/Operator.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"


static frost$core$String $s1;
org$frostlang$frostc$MethodDecl$class_type org$frostlang$frostc$MethodDecl$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$MethodDecl$get_asString$R$frost$core$String, org$frostlang$frostc$MethodDecl$cleanup, org$frostlang$frostc$MethodDecl$get_heritable$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$get_methodPosition$R$org$frostlang$frostc$MethodPosition, org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$get_isInstance$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$matches$org$frostlang$frostc$MethodDecl$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int, org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type, org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String, org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn3)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn14)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn18)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn22)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn23)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn24)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn25)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn26)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn27)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn28)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn29)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn30)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn31)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn51)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn52)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn53)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn54)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn63)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn64)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn65)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn66)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn67)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn75)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn76)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn77)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn78)(frost$core$Object*);
typedef frost$core$Bit (*$fn79)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn80)(frost$core$Object*);
typedef frost$core$String* (*$fn87)(frost$core$Object*);
typedef frost$core$String* (*$fn93)(frost$core$Object*);
typedef frost$core$String* (*$fn111)(frost$core$Object*);
typedef frost$core$String* (*$fn116)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 31, -660996163121683783, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -8677435737112033532, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 144, 779680818202923559, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -8677435737112033532, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x6f\x77\x6e\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6d\x65\x74\x68\x6f\x64\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x62\x6f\x64\x79\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x29", 591, -5976100464791612327, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -8677435737112033532, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -8677435737112033532, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e", 178, 8167062554091698636, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 3563412735833858527, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, -7952910774154584656, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 7226600790104464427, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -8677435737112033532, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -8677435737112033532, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 117, 1369329775913282096, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

void org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$Int$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(void* rawSelf, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, frost$core$Int param3, frost$core$String* param4, org$frostlang$frostc$Annotations* param5, org$frostlang$frostc$MethodDecl$Kind param6, frost$core$String* param7, frost$collections$Array* param8, frost$collections$Array* param9, org$frostlang$frostc$Type* param10, org$frostlang$frostc$FixedArray* param11) {
org$frostlang$frostc$MethodDecl* param0 = (org$frostlang$frostc$MethodDecl*) rawSelf;

org$frostlang$frostc$Compiler$Resolution local0;
org$frostlang$frostc$Compiler$Resolution local1;
org$frostlang$frostc$Symbol$Kind local2;
org$frostlang$frostc$Symbol$Kind local3;
org$frostlang$frostc$MethodDecl$Parameter* local4 = NULL;
frost$core$Int _1;
frost$core$Int* _4;
org$frostlang$frostc$Compiler$Resolution _6;
org$frostlang$frostc$Compiler$Resolution _9;
org$frostlang$frostc$Compiler$Resolution* _10;
frost$core$Bit _13;
frost$core$Bit* _14;
frost$core$Weak* _17;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Weak** _22;
frost$core$Weak* _23;
frost$core$Object* _24;
frost$core$Weak** _26;
frost$core$Object* _28;
bool _30;
frost$core$Bit _31;
bool _32;
bool _34;
frost$core$Bit _35;
bool _36;
frost$core$Int _38;
frost$collections$CollectionView* _41;
$fn2 _42;
frost$core$Int _43;
frost$core$Int _44;
int64_t _45;
int64_t _46;
bool _47;
frost$core$Bit _48;
bool _49;
frost$core$Int _51;
int64_t _52;
int64_t _53;
bool _54;
frost$core$Bit _55;
bool _56;
frost$core$Int _58;
org$frostlang$frostc$Symbol* _62;
frost$core$Int _63;
frost$core$Int* _66;
org$frostlang$frostc$Symbol$Kind _68;
org$frostlang$frostc$Symbol$Kind _71;
frost$core$Weak* _74;
org$frostlang$frostc$ClassDecl* _75;
frost$core$Object* _76;
frost$core$Object* _78;
frost$core$Weak** _80;
frost$core$Weak* _81;
frost$core$Object* _82;
frost$core$Weak** _84;
frost$core$Object* _86;
frost$core$Int* _89;
frost$core$Object* _92;
frost$core$String** _94;
frost$core$String* _95;
frost$core$Object* _96;
frost$core$String** _98;
frost$core$Object* _101;
org$frostlang$frostc$Annotations** _103;
org$frostlang$frostc$Annotations* _104;
frost$core$Object* _105;
org$frostlang$frostc$Annotations** _107;
org$frostlang$frostc$MethodDecl$Kind* _110;
frost$core$Object* _113;
frost$collections$Array** _115;
frost$collections$Array* _116;
frost$core$Object* _117;
frost$collections$Array** _119;
frost$collections$Iterable* _122;
$fn3 _123;
frost$collections$Iterator* _124;
$fn4 _126;
frost$core$Bit _127;
bool _128;
$fn5 _131;
frost$core$Object* _132;
org$frostlang$frostc$MethodDecl$Parameter* _133;
frost$core$Object* _134;
org$frostlang$frostc$MethodDecl$Parameter* _136;
frost$core$Object* _137;
org$frostlang$frostc$MethodDecl$Parameter* _141;
org$frostlang$frostc$MethodDecl* _142;
frost$core$Weak* _143;
frost$core$Object* _144;
frost$core$Object* _146;
frost$core$Weak** _148;
frost$core$Weak* _149;
frost$core$Object* _150;
frost$core$Weak** _152;
frost$core$Object* _154;
frost$core$Object* _156;
org$frostlang$frostc$MethodDecl$Parameter* _158;
frost$core$Object* _159;
frost$core$Object* _163;
frost$core$Object* _166;
frost$collections$Array** _168;
frost$collections$Array* _169;
frost$core$Object* _170;
frost$collections$Array** _172;
frost$core$Object* _175;
org$frostlang$frostc$Type** _177;
org$frostlang$frostc$Type* _178;
frost$core$Object* _179;
org$frostlang$frostc$Type** _181;
frost$core$Object* _184;
org$frostlang$frostc$FixedArray** _186;
org$frostlang$frostc$FixedArray* _187;
frost$core$Object* _188;
org$frostlang$frostc$FixedArray** _190;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:69
_1 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from MethodDecl.frost:69:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
_4 = &(&local1)->$rawValue;
*_4 = _1;
_6 = *(&local1);
*(&local0) = _6;
_9 = *(&local0);
_10 = &param0->resolved;
*_10 = _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:71
_13 = (frost$core$Bit) {false};
_14 = &param0->overrideKnown;
*_14 = _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:74
_17 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_18 = ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_17, _18);
_20 = ((frost$core$Object*) _17);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = &param0->overridden;
_23 = *_22;
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = &param0->overridden;
*_26 = _17;
_28 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_28);
_30 = param8 == NULL;
_31 = (frost$core$Bit) {_30};
_32 = _31.value;
if (_32) goto block4; else goto block5;
block5:;
_34 = param8 != NULL;
_35 = (frost$core$Bit) {_34};
_36 = _35.value;
if (_36) goto block6; else goto block7;
block7:;
_38 = (frost$core$Int) {86u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _38, &$s7);
abort(); // unreachable
block6:;
_41 = ((frost$collections$CollectionView*) param8);
ITable* $tmp8 = _41->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp8 = $tmp8->next;
}
_42 = $tmp8->methods[0];
_43 = _42(_41);
_44 = (frost$core$Int) {0u};
_45 = _43.value;
_46 = _44.value;
_47 = _45 > _46;
_48 = (frost$core$Bit) {_47};
_49 = _48.value;
if (_49) goto block4; else goto block3;
block4:;
_51 = (frost$core$Int) {0u};
_52 = param3.value;
_53 = _51.value;
_54 = _52 >= _53;
_55 = (frost$core$Bit) {_54};
_56 = _55.value;
if (_56) goto block2; else goto block3;
block3:;
_58 = (frost$core$Int) {87u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _58, &$s10);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:91
_62 = ((org$frostlang$frostc$Symbol*) param0);
_63 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from MethodDecl.frost:91:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_66 = &(&local3)->$rawValue;
*_66 = _63;
_68 = *(&local3);
*(&local2) = _68;
_71 = *(&local2);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_62, _71, param2, param7);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:92
_74 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_75 = param1;
_76 = ((frost$core$Object*) _75);
frost$core$Weak$init$frost$core$Weak$T$Q(_74, _76);
_78 = ((frost$core$Object*) _74);
frost$core$Frost$ref$frost$core$Object$Q(_78);
_80 = &param0->owner;
_81 = *_80;
_82 = ((frost$core$Object*) _81);
frost$core$Frost$unref$frost$core$Object$Q(_82);
_84 = &param0->owner;
*_84 = _74;
_86 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_86);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:93
_89 = &param0->index;
*_89 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:94
_92 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_92);
_94 = &param0->doccomment;
_95 = *_94;
_96 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_96);
_98 = &param0->doccomment;
*_98 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:95
_101 = ((frost$core$Object*) param5);
frost$core$Frost$ref$frost$core$Object$Q(_101);
_103 = &param0->annotations;
_104 = *_103;
_105 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = &param0->annotations;
*_107 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:96
_110 = &param0->methodKind;
*_110 = param6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:97
_113 = ((frost$core$Object*) param8);
frost$core$Frost$ref$frost$core$Object$Q(_113);
_115 = &param0->genericParameters;
_116 = *_115;
_117 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_117);
_119 = &param0->genericParameters;
*_119 = param8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:98
_122 = ((frost$collections$Iterable*) param9);
ITable* $tmp11 = _122->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp11 = $tmp11->next;
}
_123 = $tmp11->methods[0];
_124 = _123(_122);
goto block9;
block9:;
ITable* $tmp12 = _124->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp12 = $tmp12->next;
}
_126 = $tmp12->methods[0];
_127 = _126(_124);
_128 = _127.value;
if (_128) goto block11; else goto block10;
block10:;
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp13 = _124->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp13 = $tmp13->next;
}
_131 = $tmp13->methods[1];
_132 = _131(_124);
_133 = ((org$frostlang$frostc$MethodDecl$Parameter*) _132);
_134 = ((frost$core$Object*) _133);
frost$core$Frost$ref$frost$core$Object$Q(_134);
_136 = *(&local4);
_137 = ((frost$core$Object*) _136);
frost$core$Frost$unref$frost$core$Object$Q(_137);
*(&local4) = _133;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:99
_141 = *(&local4);
_142 = param0;
_143 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_144 = ((frost$core$Object*) _142);
frost$core$Weak$init$frost$core$Weak$T$Q(_143, _144);
_146 = ((frost$core$Object*) _143);
frost$core$Frost$ref$frost$core$Object$Q(_146);
_148 = &_141->owner;
_149 = *_148;
_150 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_150);
_152 = &_141->owner;
*_152 = _143;
_154 = ((frost$core$Object*) _143);
frost$core$Frost$unref$frost$core$Object$Q(_154);
_156 = _132;
frost$core$Frost$unref$frost$core$Object$Q(_156);
_158 = *(&local4);
_159 = ((frost$core$Object*) _158);
frost$core$Frost$unref$frost$core$Object$Q(_159);
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block9;
block11:;
_163 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_163);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:101
_166 = ((frost$core$Object*) param9);
frost$core$Frost$ref$frost$core$Object$Q(_166);
_168 = &param0->parameters;
_169 = *_168;
_170 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_170);
_172 = &param0->parameters;
*_172 = param9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:102
_175 = ((frost$core$Object*) param10);
frost$core$Frost$ref$frost$core$Object$Q(_175);
_177 = &param0->returnType;
_178 = *_177;
_179 = ((frost$core$Object*) _178);
frost$core$Frost$unref$frost$core$Object$Q(_179);
_181 = &param0->returnType;
*_181 = param10;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:103
_184 = ((frost$core$Object*) param11);
frost$core$Frost$ref$frost$core$Object$Q(_184);
_186 = &param0->body;
_187 = *_186;
_188 = ((frost$core$Object*) _187);
frost$core$Frost$unref$frost$core$Object$Q(_188);
_190 = &param0->body;
*_190 = param11;
return;

}
org$frostlang$frostc$MethodPosition org$frostlang$frostc$MethodDecl$get_methodPosition$R$org$frostlang$frostc$MethodPosition(void* rawSelf) {
org$frostlang$frostc$MethodDecl* param0 = (org$frostlang$frostc$MethodDecl*) rawSelf;

org$frostlang$frostc$Symbol* _1;
org$frostlang$frostc$Position* _2;
org$frostlang$frostc$Position _3;
frost$core$Int* _4;
frost$core$Int _5;
org$frostlang$frostc$MethodPosition _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:108
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->position;
_3 = *_2;
_4 = &param0->index;
_5 = *_4;
_6 = org$frostlang$frostc$MethodPosition$init$org$frostlang$frostc$Position$frost$core$Int(_3, _5);
return _6;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$get_heritable$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$MethodDecl* param0 = (org$frostlang$frostc$MethodDecl*) rawSelf;

org$frostlang$frostc$MethodDecl$Kind local0;
org$frostlang$frostc$MethodDecl$Kind local1;
org$frostlang$frostc$MethodDecl$Kind* _1;
org$frostlang$frostc$MethodDecl$Kind _2;
frost$core$Equatable* _3;
frost$core$Int _4;
frost$core$Int* _7;
org$frostlang$frostc$MethodDecl$Kind _9;
org$frostlang$frostc$MethodDecl$Kind _12;
frost$core$Equatable* _13;
$fn14 _14;
frost$core$Bit _15;
frost$core$Object* _16;
frost$core$Object* _18;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:113
_1 = &param0->methodKind;
_2 = *_1;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp15;
$tmp15 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp15->value = _2;
_3 = ((frost$core$Equatable*) $tmp15);
_4 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodDecl.frost:113:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
_7 = &(&local1)->$rawValue;
*_7 = _4;
_9 = *(&local1);
*(&local0) = _9;
_12 = *(&local0);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp16;
$tmp16 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp16->value = _12;
_13 = ((frost$core$Equatable*) $tmp16);
ITable* $tmp17 = _3->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp17 = $tmp17->next;
}
_14 = $tmp17->methods[1];
_15 = _14(_3, _13);
_16 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_18);
return _15;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$MethodDecl* param0 = (org$frostlang$frostc$MethodDecl*) rawSelf;

frost$core$Bit local0;
frost$core$Bit local1;
org$frostlang$frostc$MethodDecl$Kind local2;
org$frostlang$frostc$MethodDecl$Kind local3;
org$frostlang$frostc$Annotations** _1;
org$frostlang$frostc$Annotations* _2;
frost$core$Int* _5;
frost$core$Int _6;
frost$core$Int _7;
int64_t _10;
int64_t _11;
int64_t _12;
frost$core$Int _13;
frost$core$Int _15;
int64_t _16;
int64_t _17;
bool _18;
frost$core$Bit _19;
bool _23;
bool _24;
frost$core$Bit _25;
bool _27;
org$frostlang$frostc$MethodDecl$Kind* _29;
org$frostlang$frostc$MethodDecl$Kind _30;
frost$core$Equatable* _31;
frost$core$Int _32;
frost$core$Int* _35;
org$frostlang$frostc$MethodDecl$Kind _37;
org$frostlang$frostc$MethodDecl$Kind _40;
frost$core$Equatable* _41;
$fn18 _42;
frost$core$Bit _43;
frost$core$Object* _44;
frost$core$Object* _46;
frost$core$Bit _52;
bool _53;
org$frostlang$frostc$Annotations** _55;
org$frostlang$frostc$Annotations* _56;
frost$core$Int* _59;
frost$core$Int _60;
frost$core$Int _61;
int64_t _64;
int64_t _65;
int64_t _66;
frost$core$Int _67;
frost$core$Int _69;
int64_t _70;
int64_t _71;
bool _72;
frost$core$Bit _73;
bool _77;
bool _78;
frost$core$Bit _79;
frost$core$Bit _85;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:117
_1 = &param0->annotations;
_2 = *_1;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from MethodDecl.frost:117:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:125
_5 = &_2->flags;
_6 = *_5;
_7 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:125:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_10 = _6.value;
_11 = _7.value;
_12 = _10 & _11;
_13 = (frost$core$Int) {_12};
_15 = (frost$core$Int) {0u};
_16 = _13.value;
_17 = _15.value;
_18 = _16 != _17;
_19 = (frost$core$Bit) {_18};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodDecl.frost:117:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_23 = _19.value;
_24 = !_23;
_25 = (frost$core$Bit) {_24};
_27 = _25.value;
if (_27) goto block4; else goto block5;
block4:;
_29 = &param0->methodKind;
_30 = *_29;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp19;
$tmp19 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp19->value = _30;
_31 = ((frost$core$Equatable*) $tmp19);
_32 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodDecl.frost:117:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
_35 = &(&local3)->$rawValue;
*_35 = _32;
_37 = *(&local3);
*(&local2) = _37;
_40 = *(&local2);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp20;
$tmp20 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp20->value = _40;
_41 = ((frost$core$Equatable*) $tmp20);
ITable* $tmp21 = _31->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp21 = $tmp21->next;
}
_42 = $tmp21->methods[1];
_43 = _42(_31, _41);
_44 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_46);
*(&local1) = _43;
goto block6;
block5:;
*(&local1) = _25;
goto block6;
block6:;
_52 = *(&local1);
_53 = _52.value;
if (_53) goto block8; else goto block9;
block8:;
_55 = &param0->annotations;
_56 = *_55;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from MethodDecl.frost:117:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:141
_59 = &_56->flags;
_60 = *_59;
_61 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:141:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_64 = _60.value;
_65 = _61.value;
_66 = _64 & _65;
_67 = (frost$core$Int) {_66};
_69 = (frost$core$Int) {0u};
_70 = _67.value;
_71 = _69.value;
_72 = _70 != _71;
_73 = (frost$core$Bit) {_72};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodDecl.frost:117:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_77 = _73.value;
_78 = !_77;
_79 = (frost$core$Bit) {_78};
*(&local0) = _79;
goto block10;
block9:;
*(&local0) = _52;
goto block10;
block10:;
_85 = *(&local0);
return _85;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$get_isInstance$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$MethodDecl* param0 = (org$frostlang$frostc$MethodDecl*) rawSelf;

org$frostlang$frostc$Annotations** _1;
org$frostlang$frostc$Annotations* _2;
frost$core$Int* _5;
frost$core$Int _6;
frost$core$Int _7;
int64_t _10;
int64_t _11;
int64_t _12;
frost$core$Int _13;
frost$core$Int _15;
int64_t _16;
int64_t _17;
bool _18;
frost$core$Bit _19;
bool _23;
bool _24;
frost$core$Bit _25;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:121
_1 = &param0->annotations;
_2 = *_1;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from MethodDecl.frost:121:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:125
_5 = &_2->flags;
_6 = *_5;
_7 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:125:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_10 = _6.value;
_11 = _7.value;
_12 = _10 & _11;
_13 = (frost$core$Int) {_12};
_15 = (frost$core$Int) {0u};
_16 = _13.value;
_17 = _15.value;
_18 = _16 != _17;
_19 = (frost$core$Bit) {_18};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodDecl.frost:121:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_23 = _19.value;
_24 = !_23;
_25 = (frost$core$Bit) {_24};
return _25;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$matches$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$MethodDecl* param1) {
org$frostlang$frostc$MethodDecl* param0 = (org$frostlang$frostc$MethodDecl*) rawSelf;

frost$core$Bit local0;
org$frostlang$frostc$Compiler$Resolution local1;
org$frostlang$frostc$Compiler$Resolution local2;
org$frostlang$frostc$Compiler$Resolution local3;
org$frostlang$frostc$Compiler$Resolution local4;
frost$core$Int local5;
org$frostlang$frostc$Compiler$Resolution* _1;
org$frostlang$frostc$Compiler$Resolution _2;
frost$core$Equatable* _3;
frost$core$Int _4;
frost$core$Int* _7;
org$frostlang$frostc$Compiler$Resolution _9;
org$frostlang$frostc$Compiler$Resolution _12;
frost$core$Equatable* _13;
$fn22 _14;
frost$core$Bit _15;
bool _16;
org$frostlang$frostc$Compiler$Resolution* _18;
org$frostlang$frostc$Compiler$Resolution _19;
frost$core$Equatable* _20;
frost$core$Int _21;
frost$core$Int* _24;
org$frostlang$frostc$Compiler$Resolution _26;
org$frostlang$frostc$Compiler$Resolution _29;
frost$core$Equatable* _30;
$fn23 _31;
frost$core$Bit _32;
frost$core$Object* _33;
frost$core$Object* _35;
frost$core$Bit _41;
bool _42;
frost$core$Int _44;
frost$core$Object* _47;
frost$core$Object* _49;
org$frostlang$frostc$Symbol* _52;
frost$core$String** _53;
frost$core$String* _54;
frost$core$Equatable* _55;
org$frostlang$frostc$Symbol* _56;
frost$core$String** _57;
frost$core$String* _58;
frost$core$Equatable* _59;
$fn24 _60;
frost$core$Bit _61;
bool _62;
frost$core$Bit _65;
org$frostlang$frostc$Type** _68;
org$frostlang$frostc$Type* _69;
frost$core$Equatable* _70;
org$frostlang$frostc$Type** _71;
org$frostlang$frostc$Type* _72;
frost$core$Equatable* _73;
$fn25 _74;
frost$core$Bit _75;
bool _76;
frost$core$Bit _79;
frost$collections$Array** _82;
frost$collections$Array* _83;
frost$collections$CollectionView* _84;
$fn26 _85;
frost$core$Int _86;
frost$collections$Array** _87;
frost$collections$Array* _88;
frost$collections$CollectionView* _89;
$fn27 _90;
frost$core$Int _91;
int64_t _92;
int64_t _93;
bool _94;
frost$core$Bit _95;
bool _96;
frost$core$Bit _99;
frost$core$Int _102;
frost$collections$Array** _103;
frost$collections$Array* _104;
frost$collections$CollectionView* _105;
$fn28 _106;
frost$core$Int _107;
frost$core$Bit _108;
frost$core$Range$LTfrost$core$Int$GT _109;
frost$core$Int _110;
frost$core$Int _112;
frost$core$Bit _113;
bool _114;
frost$core$Int _115;
int64_t _117;
int64_t _118;
bool _119;
frost$core$Bit _120;
bool _121;
int64_t _123;
int64_t _124;
bool _125;
frost$core$Bit _126;
bool _127;
frost$collections$Array** _130;
frost$collections$Array* _131;
frost$core$Int _132;
frost$core$Int _134;
int64_t _135;
int64_t _136;
bool _137;
frost$core$Bit _138;
bool _139;
frost$collections$CollectionView* _141;
$fn29 _142;
frost$core$Int _143;
int64_t _144;
int64_t _145;
bool _146;
frost$core$Bit _147;
bool _148;
frost$core$Int _150;
frost$unsafe$NewPointer* _154;
frost$unsafe$NewPointer _155;
int64_t _156;
frost$core$Int64 _157;
int64_t _158;
frost$core$Object* _159;
frost$core$Object* _160;
org$frostlang$frostc$MethodDecl$Parameter* _163;
org$frostlang$frostc$Type** _164;
org$frostlang$frostc$Type* _165;
frost$core$Equatable* _166;
frost$collections$Array** _167;
frost$collections$Array* _168;
frost$core$Int _169;
frost$core$Int _171;
int64_t _172;
int64_t _173;
bool _174;
frost$core$Bit _175;
bool _176;
frost$collections$CollectionView* _178;
$fn30 _179;
frost$core$Int _180;
int64_t _181;
int64_t _182;
bool _183;
frost$core$Bit _184;
bool _185;
frost$core$Int _187;
frost$unsafe$NewPointer* _191;
frost$unsafe$NewPointer _192;
int64_t _193;
frost$core$Int64 _194;
int64_t _195;
frost$core$Object* _196;
frost$core$Object* _197;
org$frostlang$frostc$MethodDecl$Parameter* _200;
org$frostlang$frostc$Type** _201;
org$frostlang$frostc$Type* _202;
frost$core$Equatable* _203;
$fn31 _204;
frost$core$Bit _205;
bool _206;
frost$core$Object* _207;
frost$core$Object* _209;
frost$core$Bit _213;
frost$core$Int _216;
int64_t _217;
int64_t _218;
int64_t _219;
frost$core$Int _220;
int64_t _222;
int64_t _223;
bool _224;
frost$core$Bit _225;
bool _226;
int64_t _228;
int64_t _229;
bool _230;
frost$core$Bit _231;
bool _232;
int64_t _234;
int64_t _235;
int64_t _236;
frost$core$Int _237;
frost$core$Bit _241;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:125
_1 = &param0->resolved;
_2 = *_1;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp32;
$tmp32 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Resolution$wrapper), (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp32->value = _2;
_3 = ((frost$core$Equatable*) $tmp32);
_4 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from MethodDecl.frost:125:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
_7 = &(&local2)->$rawValue;
*_7 = _4;
_9 = *(&local2);
*(&local1) = _9;
_12 = *(&local1);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp33;
$tmp33 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Resolution$wrapper), (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp33->value = _12;
_13 = ((frost$core$Equatable*) $tmp33);
ITable* $tmp34 = _3->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp34 = $tmp34->next;
}
_14 = $tmp34->methods[1];
_15 = _14(_3, _13);
_16 = _15.value;
if (_16) goto block2; else goto block3;
block2:;
_18 = &param1->resolved;
_19 = *_18;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp35;
$tmp35 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Resolution$wrapper), (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp35->value = _19;
_20 = ((frost$core$Equatable*) $tmp35);
_21 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from MethodDecl.frost:126:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
_24 = &(&local4)->$rawValue;
*_24 = _21;
_26 = *(&local4);
*(&local3) = _26;
_29 = *(&local3);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp36;
$tmp36 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Resolution$wrapper), (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp36->value = _29;
_30 = ((frost$core$Equatable*) $tmp36);
ITable* $tmp37 = _20->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp37 = $tmp37->next;
}
_31 = $tmp37->methods[1];
_32 = _31(_20, _30);
_33 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_35 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_35);
*(&local0) = _32;
goto block4;
block3:;
*(&local0) = _15;
goto block4;
block4:;
_41 = *(&local0);
_42 = _41.value;
if (_42) goto block6; else goto block7;
block7:;
_44 = (frost$core$Int) {125u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s38, _44);
abort(); // unreachable
block6:;
_47 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_47);
_49 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_49);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:127
_52 = ((org$frostlang$frostc$Symbol*) param0);
_53 = &_52->name;
_54 = *_53;
_55 = ((frost$core$Equatable*) _54);
_56 = ((org$frostlang$frostc$Symbol*) param1);
_57 = &_56->name;
_58 = *_57;
_59 = ((frost$core$Equatable*) _58);
ITable* $tmp39 = _55->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp39 = $tmp39->next;
}
_60 = $tmp39->methods[1];
_61 = _60(_55, _59);
_62 = _61.value;
if (_62) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:128
_65 = (frost$core$Bit) {false};
return _65;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:130
_68 = &param0->returnType;
_69 = *_68;
_70 = ((frost$core$Equatable*) _69);
_71 = &param1->returnType;
_72 = *_71;
_73 = ((frost$core$Equatable*) _72);
ITable* $tmp40 = _70->$class->itable;
while ($tmp40->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp40 = $tmp40->next;
}
_74 = $tmp40->methods[1];
_75 = _74(_70, _73);
_76 = _75.value;
if (_76) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:131
_79 = (frost$core$Bit) {false};
return _79;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:133
_82 = &param0->parameters;
_83 = *_82;
_84 = ((frost$collections$CollectionView*) _83);
ITable* $tmp41 = _84->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp41 = $tmp41->next;
}
_85 = $tmp41->methods[0];
_86 = _85(_84);
_87 = &param1->parameters;
_88 = *_87;
_89 = ((frost$collections$CollectionView*) _88);
ITable* $tmp42 = _89->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp42 = $tmp42->next;
}
_90 = $tmp42->methods[0];
_91 = _90(_89);
_92 = _86.value;
_93 = _91.value;
_94 = _92 != _93;
_95 = (frost$core$Bit) {_94};
_96 = _95.value;
if (_96) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:134
_99 = (frost$core$Bit) {false};
return _99;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:136
_102 = (frost$core$Int) {0u};
_103 = &param0->parameters;
_104 = *_103;
_105 = ((frost$collections$CollectionView*) _104);
ITable* $tmp43 = _105->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp43 = $tmp43->next;
}
_106 = $tmp43->methods[0];
_107 = _106(_105);
_108 = (frost$core$Bit) {false};
_109 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_102, _107, _108);
_110 = _109.min;
*(&local5) = _110;
_112 = _109.max;
_113 = _109.inclusive;
_114 = _113.value;
_115 = (frost$core$Int) {1u};
if (_114) goto block17; else goto block18;
block17:;
_117 = _110.value;
_118 = _112.value;
_119 = _117 <= _118;
_120 = (frost$core$Bit) {_119};
_121 = _120.value;
if (_121) goto block14; else goto block15;
block18:;
_123 = _110.value;
_124 = _112.value;
_125 = _123 < _124;
_126 = (frost$core$Bit) {_125};
_127 = _126.value;
if (_127) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:137
_130 = &param0->parameters;
_131 = *_130;
_132 = *(&local5);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MethodDecl.frost:137:26
_134 = (frost$core$Int) {0u};
_135 = _132.value;
_136 = _134.value;
_137 = _135 >= _136;
_138 = (frost$core$Bit) {_137};
_139 = _138.value;
if (_139) goto block24; else goto block23;
block24:;
_141 = ((frost$collections$CollectionView*) _131);
ITable* $tmp44 = _141->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp44 = $tmp44->next;
}
_142 = $tmp44->methods[0];
_143 = _142(_141);
_144 = _132.value;
_145 = _143.value;
_146 = _144 < _145;
_147 = (frost$core$Bit) {_146};
_148 = _147.value;
if (_148) goto block22; else goto block23;
block23:;
_150 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s45, _150, &$s46);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_154 = &_131->data;
_155 = *_154;
_156 = _155.value;
_157 = frost$core$Int64$init$frost$core$Int(_132);
_158 = _157.value;
_159 = ((frost$core$Object**)_156)[_158];
_160 = _159;
frost$core$Frost$ref$frost$core$Object$Q(_160);
_163 = ((org$frostlang$frostc$MethodDecl$Parameter*) _159);
_164 = &_163->type;
_165 = *_164;
_166 = ((frost$core$Equatable*) _165);
_167 = &param1->parameters;
_168 = *_167;
_169 = *(&local5);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MethodDecl.frost:137:54
_171 = (frost$core$Int) {0u};
_172 = _169.value;
_173 = _171.value;
_174 = _172 >= _173;
_175 = (frost$core$Bit) {_174};
_176 = _175.value;
if (_176) goto block28; else goto block27;
block28:;
_178 = ((frost$collections$CollectionView*) _168);
ITable* $tmp47 = _178->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp47 = $tmp47->next;
}
_179 = $tmp47->methods[0];
_180 = _179(_178);
_181 = _169.value;
_182 = _180.value;
_183 = _181 < _182;
_184 = (frost$core$Bit) {_183};
_185 = _184.value;
if (_185) goto block26; else goto block27;
block27:;
_187 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s48, _187, &$s49);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_191 = &_168->data;
_192 = *_191;
_193 = _192.value;
_194 = frost$core$Int64$init$frost$core$Int(_169);
_195 = _194.value;
_196 = ((frost$core$Object**)_193)[_195];
_197 = _196;
frost$core$Frost$ref$frost$core$Object$Q(_197);
_200 = ((org$frostlang$frostc$MethodDecl$Parameter*) _196);
_201 = &_200->type;
_202 = *_201;
_203 = ((frost$core$Equatable*) _202);
ITable* $tmp50 = _166->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp50 = $tmp50->next;
}
_204 = $tmp50->methods[1];
_205 = _204(_166, _203);
_206 = _205.value;
_207 = _196;
frost$core$Frost$unref$frost$core$Object$Q(_207);
_209 = _159;
frost$core$Frost$unref$frost$core$Object$Q(_209);
if (_206) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:138
_213 = (frost$core$Bit) {false};
return _213;
block20:;
_216 = *(&local5);
_217 = _112.value;
_218 = _216.value;
_219 = _217 - _218;
_220 = (frost$core$Int) {_219};
if (_114) goto block30; else goto block31;
block30:;
_222 = _220.value;
_223 = _115.value;
_224 = _222 >= _223;
_225 = (frost$core$Bit) {_224};
_226 = _225.value;
if (_226) goto block29; else goto block15;
block31:;
_228 = _220.value;
_229 = _115.value;
_230 = _228 > _229;
_231 = (frost$core$Bit) {_230};
_232 = _231.value;
if (_232) goto block29; else goto block15;
block29:;
_234 = _216.value;
_235 = _115.value;
_236 = _234 + _235;
_237 = (frost$core$Int) {_236};
*(&local5) = _237;
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:141
_241 = (frost$core$Bit) {true};
return _241;

}
frost$core$Int org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int(void* rawSelf) {
org$frostlang$frostc$MethodDecl* param0 = (org$frostlang$frostc$MethodDecl*) rawSelf;

org$frostlang$frostc$Annotations$Expression* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$core$UInt64 local2;
org$frostlang$frostc$expression$Unary$Operator local3;
org$frostlang$frostc$ASTNode* local4 = NULL;
org$frostlang$frostc$expression$Unary$Operator local5;
org$frostlang$frostc$expression$Unary$Operator local6;
frost$core$UInt64 local7;
org$frostlang$frostc$Annotations** _1;
org$frostlang$frostc$Annotations* _2;
frost$collections$Array** _3;
frost$collections$Array* _4;
bool _5;
frost$core$Bit _6;
bool _7;
org$frostlang$frostc$Annotations** _10;
org$frostlang$frostc$Annotations* _11;
frost$collections$Array** _12;
frost$collections$Array* _13;
bool _14;
frost$core$Bit _15;
bool _16;
frost$core$Int _18;
frost$collections$Iterable* _21;
$fn51 _22;
frost$collections$Iterator* _23;
$fn52 _25;
frost$core$Bit _26;
bool _27;
$fn53 _30;
frost$core$Object* _31;
org$frostlang$frostc$Annotations$Expression* _32;
frost$core$Object* _33;
org$frostlang$frostc$Annotations$Expression* _35;
frost$core$Object* _36;
org$frostlang$frostc$Annotations$Expression* _40;
frost$core$Int* _41;
frost$core$Int _42;
frost$core$Int _43;
int64_t _46;
int64_t _47;
bool _48;
frost$core$Bit _49;
bool _51;
frost$core$String** _53;
frost$core$String* _54;
org$frostlang$frostc$ASTNode** _55;
org$frostlang$frostc$ASTNode* _56;
frost$core$Object* _58;
org$frostlang$frostc$ASTNode* _60;
frost$core$Object* _61;
org$frostlang$frostc$ASTNode* _65;
frost$core$Int* _66;
frost$core$Int _67;
frost$core$Int _68;
int64_t _71;
int64_t _72;
bool _73;
frost$core$Bit _74;
bool _76;
org$frostlang$frostc$Position* _78;
org$frostlang$frostc$Position _79;
frost$core$UInt64* _80;
frost$core$UInt64 _81;
frost$core$UInt64 _84;
uint64_t _87;
int64_t _88;
frost$core$Int _89;
org$frostlang$frostc$ASTNode* _91;
frost$core$Object* _92;
frost$core$Object* _95;
org$frostlang$frostc$Annotations$Expression* _97;
frost$core$Object* _98;
frost$core$Object* _101;
frost$core$Int _104;
int64_t _107;
int64_t _108;
bool _109;
frost$core$Bit _110;
bool _112;
org$frostlang$frostc$Position* _114;
org$frostlang$frostc$Position _115;
org$frostlang$frostc$expression$Unary$Operator* _116;
org$frostlang$frostc$expression$Unary$Operator _117;
org$frostlang$frostc$ASTNode** _119;
org$frostlang$frostc$ASTNode* _120;
frost$core$Object* _122;
org$frostlang$frostc$ASTNode* _124;
frost$core$Object* _125;
org$frostlang$frostc$expression$Unary$Operator _129;
frost$core$Equatable* _130;
frost$core$Int _131;
frost$core$Int* _134;
org$frostlang$frostc$expression$Unary$Operator _136;
org$frostlang$frostc$expression$Unary$Operator _139;
frost$core$Equatable* _140;
$fn54 _141;
frost$core$Bit _142;
bool _143;
frost$core$Object* _144;
frost$core$Object* _146;
org$frostlang$frostc$ASTNode* _150;
frost$core$Int* _151;
frost$core$Int _152;
frost$core$Int _153;
int64_t _156;
int64_t _157;
bool _158;
frost$core$Bit _159;
bool _161;
org$frostlang$frostc$Position* _163;
org$frostlang$frostc$Position _164;
frost$core$UInt64* _165;
frost$core$UInt64 _166;
frost$core$UInt64 _169;
uint64_t _172;
int64_t _173;
frost$core$Int _174;
int64_t _178;
int64_t _179;
frost$core$Int _180;
org$frostlang$frostc$ASTNode* _182;
frost$core$Object* _183;
org$frostlang$frostc$ASTNode* _186;
frost$core$Object* _187;
frost$core$Object* _190;
org$frostlang$frostc$Annotations$Expression* _192;
frost$core$Object* _193;
frost$core$Object* _196;
org$frostlang$frostc$ASTNode* _200;
frost$core$Object* _201;
org$frostlang$frostc$ASTNode* _205;
frost$core$Object* _206;
frost$core$Object* _210;
org$frostlang$frostc$Annotations$Expression* _212;
frost$core$Object* _213;
frost$core$Object* _217;
frost$core$Int _221;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:145
_1 = &param0->annotations;
_2 = *_1;
_3 = &_2->expressions;
_4 = *_3;
_5 = _4 != NULL;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:146
_10 = &param0->annotations;
_11 = *_10;
_12 = &_11->expressions;
_13 = *_12;
_14 = _13 != NULL;
_15 = (frost$core$Bit) {_14};
_16 = _15.value;
if (_16) goto block3; else goto block4;
block4:;
_18 = (frost$core$Int) {146u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s55, _18, &$s56);
abort(); // unreachable
block3:;
_21 = ((frost$collections$Iterable*) _13);
ITable* $tmp57 = _21->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp57 = $tmp57->next;
}
_22 = $tmp57->methods[0];
_23 = _22(_21);
goto block5;
block5:;
ITable* $tmp58 = _23->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp58 = $tmp58->next;
}
_25 = $tmp58->methods[0];
_26 = _25(_23);
_27 = _26.value;
if (_27) goto block7; else goto block6;
block6:;
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
ITable* $tmp59 = _23->$class->itable;
while ($tmp59->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp59 = $tmp59->next;
}
_30 = $tmp59->methods[1];
_31 = _30(_23);
_32 = ((org$frostlang$frostc$Annotations$Expression*) _31);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = *(&local0);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
*(&local0) = _32;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:147
_40 = *(&local0);
_41 = &_40->$rawValue;
_42 = *_41;
_43 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:148:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_46 = _42.value;
_47 = _43.value;
_48 = _46 == _47;
_49 = (frost$core$Bit) {_48};
_51 = _49.value;
if (_51) goto block9; else goto block8;
block9:;
_53 = &_40->$data.$PRIORITY.field0;
_54 = *_53;
_55 = &_40->$data.$PRIORITY.field1;
_56 = *_55;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_58 = ((frost$core$Object*) _56);
frost$core$Frost$ref$frost$core$Object$Q(_58);
_60 = *(&local1);
_61 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_61);
*(&local1) = _56;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:149
_65 = *(&local1);
_66 = &_65->$rawValue;
_67 = *_66;
_68 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:150:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_71 = _67.value;
_72 = _68.value;
_73 = _71 == _72;
_74 = (frost$core$Bit) {_73};
_76 = _74.value;
if (_76) goto block12; else goto block13;
block12:;
_78 = &_65->$data.$INT.field0;
_79 = *_78;
_80 = &_65->$data.$INT.field1;
_81 = *_80;
*(&local2) = _81;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:151
_84 = *(&local2);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from MethodDecl.frost:151:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
_87 = _84.value;
_88 = ((int64_t) _87);
_89 = (frost$core$Int) {_88};
_91 = *(&local1);
_92 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_92);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_95 = _31;
frost$core$Frost$unref$frost$core$Object$Q(_95);
_97 = *(&local0);
_98 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_98);
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
_101 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_101);
return _89;
block13:;
_104 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:153:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_107 = _67.value;
_108 = _104.value;
_109 = _107 == _108;
_110 = (frost$core$Bit) {_109};
_112 = _110.value;
if (_112) goto block16; else goto block11;
block16:;
_114 = &_65->$data.$UNARY.field0;
_115 = *_114;
_116 = &_65->$data.$UNARY.field1;
_117 = *_116;
*(&local3) = _117;
_119 = &_65->$data.$UNARY.field2;
_120 = *_119;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
_122 = ((frost$core$Object*) _120);
frost$core$Frost$ref$frost$core$Object$Q(_122);
_124 = *(&local4);
_125 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_125);
*(&local4) = _120;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:154
_129 = *(&local3);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp60;
$tmp60 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$expression$Unary$Operator$wrapper), (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp60->value = _129;
_130 = ((frost$core$Equatable*) $tmp60);
_131 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.expression.Unary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Unary.Operator from MethodDecl.frost:154:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:19
_134 = &(&local6)->$rawValue;
*_134 = _131;
_136 = *(&local6);
*(&local5) = _136;
_139 = *(&local5);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp61;
$tmp61 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$expression$Unary$Operator$wrapper), (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp61->value = _139;
_140 = ((frost$core$Equatable*) $tmp61);
ITable* $tmp62 = _130->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp62 = $tmp62->next;
}
_141 = $tmp62->methods[0];
_142 = _141(_130, _140);
_143 = _142.value;
_144 = ((frost$core$Object*) _140);
frost$core$Frost$unref$frost$core$Object$Q(_144);
_146 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_146);
if (_143) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:155
_150 = *(&local4);
_151 = &_150->$rawValue;
_152 = *_151;
_153 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:156:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_156 = _152.value;
_157 = _153.value;
_158 = _156 == _157;
_159 = (frost$core$Bit) {_158};
_161 = _159.value;
if (_161) goto block22; else goto block21;
block22:;
_163 = &_150->$data.$INT.field0;
_164 = *_163;
_165 = &_150->$data.$INT.field1;
_166 = *_165;
*(&local7) = _166;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:157
_169 = *(&local7);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from MethodDecl.frost:157:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
_172 = _169.value;
_173 = ((int64_t) _172);
_174 = (frost$core$Int) {_173};
// begin inline call to function frost.core.Int.-():frost.core.Int from MethodDecl.frost:157:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_178 = _174.value;
_179 = -_178;
_180 = (frost$core$Int) {_179};
_182 = *(&local4);
_183 = ((frost$core$Object*) _182);
frost$core$Frost$unref$frost$core$Object$Q(_183);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
_186 = *(&local1);
_187 = ((frost$core$Object*) _186);
frost$core$Frost$unref$frost$core$Object$Q(_187);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_190 = _31;
frost$core$Frost$unref$frost$core$Object$Q(_190);
_192 = *(&local0);
_193 = ((frost$core$Object*) _192);
frost$core$Frost$unref$frost$core$Object$Q(_193);
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
_196 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_196);
return _180;
block21:;
goto block19;
block19:;
_200 = *(&local4);
_201 = ((frost$core$Object*) _200);
frost$core$Frost$unref$frost$core$Object$Q(_201);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block11;
block11:;
_205 = *(&local1);
_206 = ((frost$core$Object*) _205);
frost$core$Frost$unref$frost$core$Object$Q(_206);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
_210 = _31;
frost$core$Frost$unref$frost$core$Object$Q(_210);
_212 = *(&local0);
_213 = ((frost$core$Object*) _212);
frost$core$Frost$unref$frost$core$Object$Q(_213);
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
goto block5;
block7:;
_217 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_217);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:167
_221 = (frost$core$Int) {0u};
return _221;

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$Compiler* param1) {
org$frostlang$frostc$MethodDecl* param0 = (org$frostlang$frostc$MethodDecl*) rawSelf;

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local1 = NULL;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$MethodDecl$Kind local3;
org$frostlang$frostc$MethodDecl$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
frost$collections$Array* _1;
frost$collections$Array** _2;
frost$collections$Array* _3;
frost$collections$CollectionView* _4;
$fn63 _5;
frost$core$Int _6;
frost$core$Object* _9;
frost$collections$Array* _11;
frost$core$Object* _12;
frost$core$Object* _15;
frost$collections$Array** _18;
frost$collections$Array* _19;
frost$collections$Iterable* _20;
$fn64 _21;
frost$collections$Iterator* _22;
$fn65 _24;
frost$core$Bit _25;
bool _26;
$fn66 _29;
frost$core$Object* _30;
org$frostlang$frostc$MethodDecl$Parameter* _31;
frost$core$Object* _32;
org$frostlang$frostc$MethodDecl$Parameter* _34;
frost$core$Object* _35;
frost$collections$Array* _39;
org$frostlang$frostc$MethodDecl$Parameter* _40;
org$frostlang$frostc$Type** _41;
org$frostlang$frostc$Type* _42;
frost$core$Object* _43;
frost$core$Object* _45;
org$frostlang$frostc$MethodDecl$Parameter* _47;
frost$core$Object* _48;
frost$core$Object* _52;
org$frostlang$frostc$MethodDecl$Kind* _56;
org$frostlang$frostc$MethodDecl$Kind _57;
frost$core$Equatable* _58;
frost$core$Int _59;
frost$core$Int* _62;
org$frostlang$frostc$MethodDecl$Kind _64;
org$frostlang$frostc$MethodDecl$Kind _67;
frost$core$Equatable* _68;
$fn67 _69;
frost$core$Bit _70;
bool _71;
frost$core$Object* _72;
frost$core$Object* _74;
frost$core$Int _78;
frost$core$Int* _81;
org$frostlang$frostc$Type$Kind _83;
org$frostlang$frostc$Type$Kind _86;
frost$core$Int _91;
frost$core$Int* _94;
org$frostlang$frostc$Type$Kind _96;
org$frostlang$frostc$Type$Kind _99;
org$frostlang$frostc$Symbol* _103;
org$frostlang$frostc$Position* _104;
org$frostlang$frostc$Position _105;
org$frostlang$frostc$Type$Kind _106;
frost$collections$Array* _107;
frost$collections$ListView* _108;
org$frostlang$frostc$Type** _109;
org$frostlang$frostc$Type* _110;
frost$core$Int _111;
org$frostlang$frostc$Type* _112;
frost$core$Object* _113;
frost$core$Object* _115;
frost$collections$Array* _117;
frost$core$Object* _118;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:171
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_2 = &param0->parameters;
_3 = *_2;
_4 = ((frost$collections$CollectionView*) _3);
ITable* $tmp68 = _4->$class->itable;
while ($tmp68->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp68 = $tmp68->next;
}
_5 = $tmp68->methods[0];
_6 = _5(_4);
frost$collections$Array$init$frost$core$Int(_1, _6);
*(&local0) = ((frost$collections$Array*) NULL);
_9 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = *(&local0);
_12 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_12);
*(&local0) = _1;
_15 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_15);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:172
_18 = &param0->parameters;
_19 = *_18;
_20 = ((frost$collections$Iterable*) _19);
ITable* $tmp69 = _20->$class->itable;
while ($tmp69->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp69 = $tmp69->next;
}
_21 = $tmp69->methods[0];
_22 = _21(_20);
goto block1;
block1:;
ITable* $tmp70 = _22->$class->itable;
while ($tmp70->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp70 = $tmp70->next;
}
_24 = $tmp70->methods[0];
_25 = _24(_22);
_26 = _25.value;
if (_26) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp71 = _22->$class->itable;
while ($tmp71->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp71 = $tmp71->next;
}
_29 = $tmp71->methods[1];
_30 = _29(_22);
_31 = ((org$frostlang$frostc$MethodDecl$Parameter*) _30);
_32 = ((frost$core$Object*) _31);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = *(&local1);
_35 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_35);
*(&local1) = _31;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:173
_39 = *(&local0);
_40 = *(&local1);
_41 = &_40->type;
_42 = *_41;
_43 = ((frost$core$Object*) _42);
frost$collections$Array$add$frost$collections$Array$T(_39, _43);
_45 = _30;
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = *(&local1);
_48 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_48);
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
_52 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_52);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:175
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:176
_56 = &param0->methodKind;
_57 = *_56;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp72;
$tmp72 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp72->value = _57;
_58 = ((frost$core$Equatable*) $tmp72);
_59 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodDecl.frost:176:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
_62 = &(&local4)->$rawValue;
*_62 = _59;
_64 = *(&local4);
*(&local3) = _64;
_67 = *(&local3);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp73;
$tmp73 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp73->value = _67;
_68 = ((frost$core$Equatable*) $tmp73);
ITable* $tmp74 = _58->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp74 = $tmp74->next;
}
_69 = $tmp74->methods[0];
_70 = _69(_58, _68);
_71 = _70.value;
_72 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_72);
_74 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_74);
if (_71) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:177
_78 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodDecl.frost:177:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_81 = &(&local6)->$rawValue;
*_81 = _78;
_83 = *(&local6);
*(&local5) = _83;
_86 = *(&local5);
*(&local2) = _86;
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:180
_91 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodDecl.frost:180:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_94 = &(&local8)->$rawValue;
*_94 = _91;
_96 = *(&local8);
*(&local7) = _96;
_99 = *(&local7);
*(&local2) = _99;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:182
_103 = ((org$frostlang$frostc$Symbol*) param0);
_104 = &_103->position;
_105 = *_104;
_106 = *(&local2);
_107 = *(&local0);
_108 = ((frost$collections$ListView*) _107);
_109 = &param0->returnType;
_110 = *_109;
_111 = org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int(param0);
_112 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, _105, _106, _108, _110, _111);
_113 = ((frost$core$Object*) _112);
frost$core$Frost$ref$frost$core$Object$Q(_113);
_115 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_115);
_117 = *(&local0);
_118 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_118);
*(&local0) = ((frost$collections$Array*) NULL);
return _112;

}
frost$core$String* org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$MethodDecl* param0 = (org$frostlang$frostc$MethodDecl*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
frost$core$MutableString* _1;
org$frostlang$frostc$Symbol* _2;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _7;
frost$core$String* _10;
frost$core$Object* _13;
frost$core$MutableString* _15;
frost$core$Object* _16;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Object* _23;
frost$core$Object* _27;
frost$core$String* _29;
frost$core$Object* _30;
frost$collections$Array** _34;
frost$collections$Array* _35;
frost$collections$Iterable* _36;
$fn75 _37;
frost$collections$Iterator* _38;
$fn76 _40;
frost$core$Bit _41;
bool _42;
$fn77 _45;
frost$core$Object* _46;
org$frostlang$frostc$MethodDecl$Parameter* _47;
frost$core$Object* _48;
org$frostlang$frostc$MethodDecl$Parameter* _50;
frost$core$Object* _51;
frost$core$MutableString* _55;
frost$core$String* _56;
frost$core$MutableString* _59;
org$frostlang$frostc$MethodDecl$Parameter* _60;
frost$core$Object* _61;
$fn78 _64;
frost$core$String* _65;
frost$core$Object* _67;
frost$core$Object* _71;
frost$core$String* _73;
frost$core$Object* _74;
frost$core$Object* _77;
org$frostlang$frostc$MethodDecl$Parameter* _79;
frost$core$Object* _80;
frost$core$Object* _84;
frost$core$MutableString* _87;
org$frostlang$frostc$Type** _90;
org$frostlang$frostc$Type* _91;
org$frostlang$frostc$Symbol* _92;
frost$core$String** _93;
frost$core$String* _94;
frost$core$Equatable* _95;
frost$core$Equatable* _96;
$fn79 _97;
frost$core$Bit _98;
bool _99;
frost$core$MutableString* _102;
org$frostlang$frostc$Type** _103;
org$frostlang$frostc$Type* _104;
frost$core$Object* _105;
$fn80 _108;
frost$core$String* _109;
frost$core$String* _110;
frost$core$Object* _111;
frost$core$Object* _113;
frost$core$Object* _115;
frost$core$String* _118;
frost$core$Object* _120;
frost$core$Object* _122;
frost$core$MutableString* _126;
frost$core$String* _127;
frost$core$Object* _128;
frost$core$Object* _130;
frost$core$String* _132;
frost$core$Object* _133;
frost$core$MutableString* _136;
frost$core$Object* _137;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:186
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
_2 = ((org$frostlang$frostc$Symbol*) param0);
_3 = &_2->name;
_4 = *_3;
// begin inline call to function frost.core.String.get_asString():frost.core.String from MethodDecl.frost:186:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_7 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_10 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_4, &$s81);
frost$core$MutableString$init$frost$core$String(_1, _10);
*(&local0) = ((frost$core$MutableString*) NULL);
_13 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = *(&local0);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
*(&local0) = _1;
_19 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_23);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:187
*(&local1) = ((frost$core$String*) NULL);
_27 = ((frost$core$Object*) &$s82);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = *(&local1);
_30 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_30);
*(&local1) = &$s83;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:188
_34 = &param0->parameters;
_35 = *_34;
_36 = ((frost$collections$Iterable*) _35);
ITable* $tmp84 = _36->$class->itable;
while ($tmp84->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp84 = $tmp84->next;
}
_37 = $tmp84->methods[0];
_38 = _37(_36);
goto block2;
block2:;
ITable* $tmp85 = _38->$class->itable;
while ($tmp85->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp85 = $tmp85->next;
}
_40 = $tmp85->methods[0];
_41 = _40(_38);
_42 = _41.value;
if (_42) goto block4; else goto block3;
block3:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp86 = _38->$class->itable;
while ($tmp86->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp86 = $tmp86->next;
}
_45 = $tmp86->methods[1];
_46 = _45(_38);
_47 = ((org$frostlang$frostc$MethodDecl$Parameter*) _46);
_48 = ((frost$core$Object*) _47);
frost$core$Frost$ref$frost$core$Object$Q(_48);
_50 = *(&local2);
_51 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_51);
*(&local2) = _47;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:189
_55 = *(&local0);
_56 = *(&local1);
frost$core$MutableString$append$frost$core$String(_55, _56);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:190
_59 = *(&local0);
_60 = *(&local2);
_61 = ((frost$core$Object*) _60);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from MethodDecl.frost:190:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_64 = ($fn87) _61->$class->vtable[0];
_65 = _64(_61);
frost$core$MutableString$append$frost$core$String(_59, _65);
_67 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_67);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:191
_71 = ((frost$core$Object*) &$s88);
frost$core$Frost$ref$frost$core$Object$Q(_71);
_73 = *(&local1);
_74 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_74);
*(&local1) = &$s89;
_77 = _46;
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = *(&local2);
_80 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_80);
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block2;
block4:;
_84 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_84);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:193
_87 = *(&local0);
frost$core$MutableString$append$frost$core$String(_87, &$s90);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:194
_90 = &param0->returnType;
_91 = *_90;
_92 = ((org$frostlang$frostc$Symbol*) _91);
_93 = &_92->name;
_94 = *_93;
_95 = ((frost$core$Equatable*) _94);
_96 = ((frost$core$Equatable*) &$s91);
ITable* $tmp92 = _95->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp92 = $tmp92->next;
}
_97 = $tmp92->methods[1];
_98 = _97(_95, _96);
_99 = _98.value;
if (_99) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:195
_102 = *(&local0);
_103 = &param0->returnType;
_104 = *_103;
_105 = ((frost$core$Object*) _104);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodDecl.frost:195:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_108 = ($fn93) _105->$class->vtable[0];
_109 = _108(_105);
_110 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s94, _109);
_111 = ((frost$core$Object*) _110);
frost$core$Frost$ref$frost$core$Object$Q(_111);
_113 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_113);
_115 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_115);
_118 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_110, &$s95);
frost$core$MutableString$append$frost$core$String(_102, _118);
_120 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_120);
_122 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_122);
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:197
_126 = *(&local0);
_127 = frost$core$MutableString$finish$R$frost$core$String(_126);
_128 = ((frost$core$Object*) _127);
frost$core$Frost$ref$frost$core$Object$Q(_128);
_130 = ((frost$core$Object*) _127);
frost$core$Frost$unref$frost$core$Object$Q(_130);
_132 = *(&local1);
_133 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_133);
*(&local1) = ((frost$core$String*) NULL);
_136 = *(&local0);
_137 = ((frost$core$Object*) _136);
frost$core$Frost$unref$frost$core$Object$Q(_137);
*(&local0) = ((frost$core$MutableString*) NULL);
return _127;

}
frost$core$String* org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$MethodDecl* param0 = (org$frostlang$frostc$MethodDecl*) rawSelf;

org$frostlang$frostc$MethodDecl$Kind* _1;
org$frostlang$frostc$MethodDecl$Kind _2;
frost$core$Int _3;
frost$core$Int _4;
int64_t _7;
int64_t _8;
bool _9;
frost$core$Bit _10;
bool _12;
frost$core$Weak** _15;
frost$core$Weak* _16;
frost$core$Bit* _21;
frost$core$Bit _22;
bool _24;
frost$core$Int _26;
frost$core$Object** _30;
frost$core$Object* _31;
frost$core$Object* _32;
frost$core$Object* _33;
org$frostlang$frostc$ClassDecl* _36;
frost$core$String** _37;
frost$core$String* _38;
frost$core$String* _39;
frost$core$String* _40;
frost$core$String* _41;
frost$core$String* _42;
frost$core$String* _43;
frost$core$Object* _44;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Object* _50;
frost$core$Object* _52;
frost$core$Object* _54;
frost$core$Object* _56;
frost$core$Int _59;
int64_t _62;
int64_t _63;
bool _64;
frost$core$Bit _65;
bool _67;
frost$core$Weak** _70;
frost$core$Weak* _71;
frost$core$Bit* _76;
frost$core$Bit _77;
bool _79;
frost$core$Int _81;
frost$core$Object** _85;
frost$core$Object* _86;
frost$core$Object* _87;
frost$core$Object* _88;
org$frostlang$frostc$ClassDecl* _91;
frost$core$String** _92;
frost$core$String* _93;
frost$core$String* _94;
frost$core$String* _95;
frost$core$String* _96;
frost$core$String* _97;
frost$core$String* _98;
frost$core$Object* _99;
frost$core$Object* _101;
frost$core$Object* _103;
frost$core$Object* _105;
frost$core$Object* _107;
frost$core$Object* _109;
frost$core$Object* _111;
frost$core$Int _114;
int64_t _117;
int64_t _118;
bool _119;
frost$core$Bit _120;
bool _122;
frost$core$Weak** _125;
frost$core$Weak* _126;
frost$core$Bit* _131;
frost$core$Bit _132;
bool _134;
frost$core$Int _136;
frost$core$Object** _140;
frost$core$Object* _141;
frost$core$Object* _142;
frost$core$Object* _143;
org$frostlang$frostc$ClassDecl* _146;
frost$core$String** _147;
frost$core$String* _148;
frost$core$Object* _151;
frost$core$String* _154;
frost$core$String* _155;
frost$core$String* _156;
frost$core$String* _157;
frost$core$Object* _158;
frost$core$Object* _160;
frost$core$Object* _162;
frost$core$Object* _164;
frost$core$Object* _166;
frost$core$Object* _168;
frost$core$Object* _170;
frost$core$Int _174;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:201
_1 = &param0->methodKind;
_2 = *_1;
_3 = _2.$rawValue;
_4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:202:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_7 = _3.value;
_8 = _4.value;
_9 = _7 == _8;
_10 = (frost$core$Bit) {_9};
_12 = _10.value;
if (_12) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:203
_15 = &param0->owner;
_16 = *_15;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodDecl.frost:203:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_21 = &_16->_valid;
_22 = *_21;
_24 = _22.value;
if (_24) goto block7; else goto block8;
block8:;
_26 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s96, _26, &$s97);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_30 = &_16->value;
_31 = *_30;
_32 = _31;
_33 = _32;
frost$core$Frost$ref$frost$core$Object$Q(_33);
_36 = ((org$frostlang$frostc$ClassDecl*) _32);
_37 = &_36->name;
_38 = *_37;
_39 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s98, _38);
_40 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_39, &$s99);
_41 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
_42 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_40, _41);
_43 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_42, &$s100);
_44 = ((frost$core$Object*) _43);
frost$core$Frost$ref$frost$core$Object$Q(_44);
_46 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_50 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_50);
_52 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_54);
_56 = _32;
frost$core$Frost$unref$frost$core$Object$Q(_56);
return _43;
block3:;
_59 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:205:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_62 = _3.value;
_63 = _59.value;
_64 = _62 == _63;
_65 = (frost$core$Bit) {_64};
_67 = _65.value;
if (_67) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:206
_70 = &param0->owner;
_71 = *_70;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodDecl.frost:206:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_76 = &_71->_valid;
_77 = *_76;
_79 = _77.value;
if (_79) goto block14; else goto block15;
block15:;
_81 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s101, _81, &$s102);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_85 = &_71->value;
_86 = *_85;
_87 = _86;
_88 = _87;
frost$core$Frost$ref$frost$core$Object$Q(_88);
_91 = ((org$frostlang$frostc$ClassDecl*) _87);
_92 = &_91->name;
_93 = *_92;
_94 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s103, _93);
_95 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_94, &$s104);
_96 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
_97 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_95, _96);
_98 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_97, &$s105);
_99 = ((frost$core$Object*) _98);
frost$core$Frost$ref$frost$core$Object$Q(_99);
_101 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_101);
_103 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_103);
_105 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_107);
_109 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_109);
_111 = _87;
frost$core$Frost$unref$frost$core$Object$Q(_111);
return _98;
block10:;
_114 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:208:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_117 = _3.value;
_118 = _114.value;
_119 = _117 == _118;
_120 = (frost$core$Bit) {_119};
_122 = _120.value;
if (_122) goto block16; else goto block1;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:209
_125 = &param0->owner;
_126 = *_125;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodDecl.frost:209:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_131 = &_126->_valid;
_132 = *_131;
_134 = _132.value;
if (_134) goto block20; else goto block21;
block21:;
_136 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s106, _136, &$s107);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_140 = &_126->value;
_141 = *_140;
_142 = _141;
_143 = _142;
frost$core$Frost$ref$frost$core$Object$Q(_143);
_146 = ((org$frostlang$frostc$ClassDecl*) _142);
_147 = &_146->name;
_148 = *_147;
// begin inline call to function frost.core.String.get_asString():frost.core.String from MethodDecl.frost:209:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_151 = ((frost$core$Object*) _148);
frost$core$Frost$ref$frost$core$Object$Q(_151);
_154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_148, &$s108);
_155 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
_156 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_154, _155);
_157 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_156, &$s109);
_158 = ((frost$core$Object*) _157);
frost$core$Frost$ref$frost$core$Object$Q(_158);
_160 = ((frost$core$Object*) _157);
frost$core$Frost$unref$frost$core$Object$Q(_160);
_162 = ((frost$core$Object*) _156);
frost$core$Frost$unref$frost$core$Object$Q(_162);
_164 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_164);
_166 = ((frost$core$Object*) _154);
frost$core$Frost$unref$frost$core$Object$Q(_166);
_168 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_168);
_170 = _142;
frost$core$Frost$unref$frost$core$Object$Q(_170);
return _157;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:212
_174 = (frost$core$Int) {212u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s110, _174);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$MethodDecl$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$MethodDecl* param0 = (org$frostlang$frostc$MethodDecl*) rawSelf;

org$frostlang$frostc$FixedArray** _1;
org$frostlang$frostc$FixedArray* _2;
bool _3;
frost$core$Bit _4;
bool _5;
org$frostlang$frostc$Annotations** _8;
org$frostlang$frostc$Annotations* _9;
frost$core$String* _10;
frost$core$String* _11;
frost$core$String* _12;
frost$core$String* _13;
frost$core$String* _14;
org$frostlang$frostc$FixedArray** _15;
org$frostlang$frostc$FixedArray* _16;
bool _17;
frost$core$Bit _18;
bool _19;
frost$core$Int _21;
frost$core$Object* _24;
$fn111 _27;
frost$core$String* _28;
frost$core$String* _29;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$String* _37;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Object* _50;
frost$core$Object* _52;
frost$core$String* _56;
frost$core$Object* _57;
frost$core$Object* _59;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:217
_1 = &param0->body;
_2 = *_1;
_3 = _2 != NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:218
_8 = &param0->annotations;
_9 = *_8;
_10 = org$frostlang$frostc$Annotations$get_asString$R$frost$core$String(_9);
_11 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_10, &$s112);
_12 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
_13 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_11, _12);
_14 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_13, &$s113);
_15 = &param0->body;
_16 = *_15;
_17 = _16 != NULL;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block3; else goto block4;
block4:;
_21 = (frost$core$Int) {218u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s114, _21, &$s115);
abort(); // unreachable
block3:;
_24 = ((frost$core$Object*) _16);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodDecl.frost:218:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_27 = ($fn116) _24->$class->vtable[0];
_28 = _27(_24);
_29 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_14, _28);
_30 = ((frost$core$Object*) _29);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_37 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_29, &$s117);
_38 = ((frost$core$Object*) _37);
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_40);
_42 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_50 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_50);
_52 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_52);
return _37;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:220
_56 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
_57 = ((frost$core$Object*) _56);
frost$core$Frost$ref$frost$core$Object$Q(_57);
_59 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_59);
return _56;

}
void org$frostlang$frostc$MethodDecl$cleanup(void* rawSelf) {
org$frostlang$frostc$MethodDecl* param0 = (org$frostlang$frostc$MethodDecl*) rawSelf;

org$frostlang$frostc$Symbol* _1;
frost$core$Weak** _3;
frost$core$Weak* _4;
frost$core$Object* _5;
frost$core$String** _7;
frost$core$String* _8;
frost$core$Object* _9;
org$frostlang$frostc$Annotations** _11;
org$frostlang$frostc$Annotations* _12;
frost$core$Object* _13;
frost$collections$Array** _15;
frost$collections$Array* _16;
frost$core$Object* _17;
frost$collections$Array** _19;
frost$collections$Array* _20;
frost$core$Object* _21;
org$frostlang$frostc$Type** _23;
org$frostlang$frostc$Type* _24;
frost$core$Object* _25;
org$frostlang$frostc$FixedArray** _27;
org$frostlang$frostc$FixedArray* _28;
frost$core$Object* _29;
frost$core$Weak** _31;
frost$core$Weak* _32;
frost$core$Object* _33;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:6
_1 = ((org$frostlang$frostc$Symbol*) param0);
org$frostlang$frostc$Symbol$cleanup(_1);
_3 = &param0->owner;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->doccomment;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->annotations;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = &param0->genericParameters;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = &param0->parameters;
_20 = *_19;
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = &param0->returnType;
_24 = *_23;
_25 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = &param0->body;
_28 = *_27;
_29 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_31 = &param0->overridden;
_32 = *_31;
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
return;

}

