#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Frost.h"
#include "frost/core/Equatable.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
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
org$frostlang$frostc$MethodDecl$class_type org$frostlang$frostc$MethodDecl$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$MethodDecl$get_asString$R$frost$core$String, org$frostlang$frostc$MethodDecl$cleanup, org$frostlang$frostc$MethodDecl$get_heritable$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$get_isInstance$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$matches$org$frostlang$frostc$MethodDecl$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int, org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type, org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String, org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String} };

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
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x6f\x77\x6e\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6d\x65\x74\x68\x6f\x64\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x62\x6f\x64\x79\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x29", 569, -1725580904474273109, NULL };
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

void org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(void* rawSelf, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$Annotations* param4, org$frostlang$frostc$MethodDecl$Kind param5, frost$core$String* param6, frost$collections$Array* param7, frost$collections$Array* param8, org$frostlang$frostc$Type* param9, org$frostlang$frostc$FixedArray* param10) {
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
frost$core$Weak* _18;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Weak** _23;
frost$core$Weak* _24;
frost$core$Object* _25;
frost$core$Weak** _27;
frost$core$Object* _29;
bool _31;
frost$core$Bit _32;
bool _33;
bool _35;
frost$core$Bit _36;
bool _37;
frost$core$Int _39;
frost$collections$CollectionView* _42;
$fn2 _43;
frost$core$Int _44;
frost$core$Int _45;
int64_t _46;
int64_t _47;
bool _48;
frost$core$Bit _49;
bool _50;
frost$core$Int _52;
org$frostlang$frostc$Symbol* _56;
frost$core$Int _57;
frost$core$Int* _60;
org$frostlang$frostc$Symbol$Kind _62;
org$frostlang$frostc$Symbol$Kind _65;
frost$core$Weak* _68;
frost$core$Weak* _69;
org$frostlang$frostc$ClassDecl* _70;
frost$core$Object* _71;
frost$core$Object* _73;
frost$core$Weak** _75;
frost$core$Weak* _76;
frost$core$Object* _77;
frost$core$Weak** _79;
frost$core$Object* _81;
frost$core$Object* _84;
frost$core$String** _86;
frost$core$String* _87;
frost$core$Object* _88;
frost$core$String** _90;
frost$core$Object* _93;
org$frostlang$frostc$Annotations** _95;
org$frostlang$frostc$Annotations* _96;
frost$core$Object* _97;
org$frostlang$frostc$Annotations** _99;
org$frostlang$frostc$MethodDecl$Kind* _102;
frost$core$Object* _105;
frost$collections$Array** _107;
frost$collections$Array* _108;
frost$core$Object* _109;
frost$collections$Array** _111;
frost$collections$Iterable* _114;
frost$collections$Iterable* _115;
$fn3 _116;
frost$collections$Iterator* _117;
frost$collections$Iterator* _118;
frost$collections$Iterator* _120;
$fn4 _121;
frost$core$Bit _122;
bool _123;
frost$collections$Iterator* _126;
$fn5 _127;
frost$core$Object* _128;
org$frostlang$frostc$MethodDecl$Parameter* _129;
frost$core$Object* _130;
org$frostlang$frostc$MethodDecl$Parameter* _132;
frost$core$Object* _133;
org$frostlang$frostc$MethodDecl$Parameter* _137;
org$frostlang$frostc$MethodDecl* _138;
frost$core$Weak* _139;
frost$core$Weak* _140;
frost$core$Object* _141;
frost$core$Object* _143;
frost$core$Weak** _145;
frost$core$Weak* _146;
frost$core$Object* _147;
frost$core$Weak** _149;
frost$core$Object* _151;
frost$core$Object* _153;
org$frostlang$frostc$MethodDecl$Parameter* _155;
frost$core$Object* _156;
frost$core$Object* _160;
frost$core$Object* _163;
frost$collections$Array** _165;
frost$collections$Array* _166;
frost$core$Object* _167;
frost$collections$Array** _169;
frost$core$Object* _172;
org$frostlang$frostc$Type** _174;
org$frostlang$frostc$Type* _175;
frost$core$Object* _176;
org$frostlang$frostc$Type** _178;
frost$core$Object* _181;
org$frostlang$frostc$FixedArray** _183;
org$frostlang$frostc$FixedArray* _184;
frost$core$Object* _185;
org$frostlang$frostc$FixedArray** _187;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:66
_1 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from MethodDecl.frost:66:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
_4 = &(&local1)->$rawValue;
*_4 = _1;
_6 = *(&local1);
*(&local0) = _6;
_9 = *(&local0);
_10 = &param0->resolved;
*_10 = _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:68
_13 = (frost$core$Bit) {false};
_14 = &param0->overrideKnown;
*_14 = _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:71
_17 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_18 = _17;
_19 = ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_18, _19);
_21 = ((frost$core$Object*) _17);
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = &param0->overridden;
_24 = *_23;
_25 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = &param0->overridden;
*_27 = _17;
_29 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_31 = param7 == NULL;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block2; else goto block4;
block4:;
_35 = param7 != NULL;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block5; else goto block6;
block6:;
_39 = (frost$core$Int) {83u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _39, &$s7);
abort(); // unreachable
block5:;
_42 = ((frost$collections$CollectionView*) param7);
ITable* $tmp8 = _42->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp8 = $tmp8->next;
}
_43 = $tmp8->methods[0];
_44 = _43(_42);
_45 = (frost$core$Int) {0u};
_46 = _44.value;
_47 = _45.value;
_48 = _46 > _47;
_49 = (frost$core$Bit) {_48};
_50 = _49.value;
if (_50) goto block2; else goto block3;
block3:;
_52 = (frost$core$Int) {84u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _52, &$s10);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:88
_56 = ((org$frostlang$frostc$Symbol*) param0);
_57 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from MethodDecl.frost:88:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_60 = &(&local3)->$rawValue;
*_60 = _57;
_62 = *(&local3);
*(&local2) = _62;
_65 = *(&local2);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_56, _65, param2, param6);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:89
_68 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_69 = _68;
_70 = param1;
_71 = ((frost$core$Object*) _70);
frost$core$Weak$init$frost$core$Weak$T$Q(_69, _71);
_73 = ((frost$core$Object*) _68);
frost$core$Frost$ref$frost$core$Object$Q(_73);
_75 = &param0->owner;
_76 = *_75;
_77 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = &param0->owner;
*_79 = _68;
_81 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_81);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:90
_84 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_84);
_86 = &param0->doccomment;
_87 = *_86;
_88 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_88);
_90 = &param0->doccomment;
*_90 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:91
_93 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_93);
_95 = &param0->annotations;
_96 = *_95;
_97 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_97);
_99 = &param0->annotations;
*_99 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:92
_102 = &param0->methodKind;
*_102 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:93
_105 = ((frost$core$Object*) param7);
frost$core$Frost$ref$frost$core$Object$Q(_105);
_107 = &param0->genericParameters;
_108 = *_107;
_109 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_109);
_111 = &param0->genericParameters;
*_111 = param7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:94
_114 = ((frost$collections$Iterable*) param8);
_115 = _114;
ITable* $tmp11 = _115->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp11 = $tmp11->next;
}
_116 = $tmp11->methods[0];
_117 = _116(_115);
_118 = _117;
goto block8;
block8:;
_120 = _118;
ITable* $tmp12 = _120->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp12 = $tmp12->next;
}
_121 = $tmp12->methods[0];
_122 = _121(_120);
_123 = _122.value;
if (_123) goto block10; else goto block9;
block9:;
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
_126 = _118;
ITable* $tmp13 = _126->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp13 = $tmp13->next;
}
_127 = $tmp13->methods[1];
_128 = _127(_126);
_129 = ((org$frostlang$frostc$MethodDecl$Parameter*) _128);
_130 = ((frost$core$Object*) _129);
frost$core$Frost$ref$frost$core$Object$Q(_130);
_132 = *(&local4);
_133 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_133);
*(&local4) = _129;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:95
_137 = *(&local4);
_138 = param0;
_139 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_140 = _139;
_141 = ((frost$core$Object*) _138);
frost$core$Weak$init$frost$core$Weak$T$Q(_140, _141);
_143 = ((frost$core$Object*) _139);
frost$core$Frost$ref$frost$core$Object$Q(_143);
_145 = &_137->owner;
_146 = *_145;
_147 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_147);
_149 = &_137->owner;
*_149 = _139;
_151 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_151);
_153 = _128;
frost$core$Frost$unref$frost$core$Object$Q(_153);
_155 = *(&local4);
_156 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_156);
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block8;
block10:;
_160 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_160);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:97
_163 = ((frost$core$Object*) param8);
frost$core$Frost$ref$frost$core$Object$Q(_163);
_165 = &param0->parameters;
_166 = *_165;
_167 = ((frost$core$Object*) _166);
frost$core$Frost$unref$frost$core$Object$Q(_167);
_169 = &param0->parameters;
*_169 = param8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:98
_172 = ((frost$core$Object*) param9);
frost$core$Frost$ref$frost$core$Object$Q(_172);
_174 = &param0->returnType;
_175 = *_174;
_176 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_176);
_178 = &param0->returnType;
*_178 = param9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:99
_181 = ((frost$core$Object*) param10);
frost$core$Frost$ref$frost$core$Object$Q(_181);
_183 = &param0->body;
_184 = *_183;
_185 = ((frost$core$Object*) _184);
frost$core$Frost$unref$frost$core$Object$Q(_185);
_187 = &param0->body;
*_187 = param10;
return;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$get_heritable$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$MethodDecl* param0 = (org$frostlang$frostc$MethodDecl*) rawSelf;

org$frostlang$frostc$MethodDecl$Kind local0;
org$frostlang$frostc$MethodDecl$Kind local1;
org$frostlang$frostc$MethodDecl$Kind* _1;
org$frostlang$frostc$MethodDecl$Kind _2;
frost$core$Equatable* _3;
frost$core$Equatable* _4;
frost$core$Int _5;
frost$core$Int* _8;
org$frostlang$frostc$MethodDecl$Kind _10;
org$frostlang$frostc$MethodDecl$Kind _13;
frost$core$Equatable* _14;
$fn14 _15;
frost$core$Bit _16;
frost$core$Object* _17;
frost$core$Object* _19;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:104
_1 = &param0->methodKind;
_2 = *_1;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp15;
$tmp15 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp15->value = _2;
_3 = ((frost$core$Equatable*) $tmp15);
_4 = _3;
_5 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodDecl.frost:104:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
_8 = &(&local1)->$rawValue;
*_8 = _5;
_10 = *(&local1);
*(&local0) = _10;
_13 = *(&local0);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp16;
$tmp16 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp16->value = _13;
_14 = ((frost$core$Equatable*) $tmp16);
ITable* $tmp17 = _4->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp17 = $tmp17->next;
}
_15 = $tmp17->methods[1];
_16 = _15(_4, _14);
_17 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_19);
return _16;

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
frost$core$Equatable* _32;
frost$core$Int _33;
frost$core$Int* _36;
org$frostlang$frostc$MethodDecl$Kind _38;
org$frostlang$frostc$MethodDecl$Kind _41;
frost$core$Equatable* _42;
$fn18 _43;
frost$core$Bit _44;
frost$core$Object* _45;
frost$core$Object* _47;
frost$core$Bit _53;
bool _54;
org$frostlang$frostc$Annotations** _56;
org$frostlang$frostc$Annotations* _57;
frost$core$Int* _60;
frost$core$Int _61;
frost$core$Int _62;
int64_t _65;
int64_t _66;
int64_t _67;
frost$core$Int _68;
frost$core$Int _70;
int64_t _71;
int64_t _72;
bool _73;
frost$core$Bit _74;
bool _78;
bool _79;
frost$core$Bit _80;
frost$core$Bit _86;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:108
_1 = &param0->annotations;
_2 = *_1;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from MethodDecl.frost:108:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
_5 = &_2->flags;
_6 = *_5;
_7 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
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
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodDecl.frost:108:16
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
_32 = _31;
_33 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodDecl.frost:108:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
_36 = &(&local3)->$rawValue;
*_36 = _33;
_38 = *(&local3);
*(&local2) = _38;
_41 = *(&local2);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp20;
$tmp20 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp20->value = _41;
_42 = ((frost$core$Equatable*) $tmp20);
ITable* $tmp21 = _32->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp21 = $tmp21->next;
}
_43 = $tmp21->methods[1];
_44 = _43(_32, _42);
_45 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_47);
*(&local1) = _44;
goto block6;
block5:;
*(&local1) = _25;
goto block6;
block6:;
_53 = *(&local1);
_54 = _53.value;
if (_54) goto block8; else goto block9;
block8:;
_56 = &param0->annotations;
_57 = *_56;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from MethodDecl.frost:108:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:138
_60 = &_57->flags;
_61 = *_60;
_62 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:138:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_65 = _61.value;
_66 = _62.value;
_67 = _65 & _66;
_68 = (frost$core$Int) {_67};
_70 = (frost$core$Int) {0u};
_71 = _68.value;
_72 = _70.value;
_73 = _71 != _72;
_74 = (frost$core$Bit) {_73};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodDecl.frost:108:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_78 = _74.value;
_79 = !_78;
_80 = (frost$core$Bit) {_79};
*(&local0) = _80;
goto block10;
block9:;
*(&local0) = _53;
goto block10;
block10:;
_86 = *(&local0);
return _86;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:112
_1 = &param0->annotations;
_2 = *_1;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from MethodDecl.frost:112:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
_5 = &_2->flags;
_6 = *_5;
_7 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
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
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodDecl.frost:112:16
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
frost$core$Equatable* _4;
frost$core$Int _5;
frost$core$Int* _8;
org$frostlang$frostc$Compiler$Resolution _10;
org$frostlang$frostc$Compiler$Resolution _13;
frost$core$Equatable* _14;
$fn22 _15;
frost$core$Bit _16;
bool _17;
org$frostlang$frostc$Compiler$Resolution* _19;
org$frostlang$frostc$Compiler$Resolution _20;
frost$core$Equatable* _21;
frost$core$Equatable* _22;
frost$core$Int _23;
frost$core$Int* _26;
org$frostlang$frostc$Compiler$Resolution _28;
org$frostlang$frostc$Compiler$Resolution _31;
frost$core$Equatable* _32;
$fn23 _33;
frost$core$Bit _34;
frost$core$Object* _35;
frost$core$Object* _37;
frost$core$Bit _43;
bool _44;
frost$core$Int _46;
frost$core$Object* _49;
frost$core$Object* _51;
org$frostlang$frostc$Symbol* _54;
frost$core$String** _55;
frost$core$String* _56;
frost$core$Equatable* _57;
frost$core$Equatable* _58;
org$frostlang$frostc$Symbol* _59;
frost$core$String** _60;
frost$core$String* _61;
frost$core$Equatable* _62;
$fn24 _63;
frost$core$Bit _64;
bool _65;
frost$core$Bit _68;
org$frostlang$frostc$Type** _71;
org$frostlang$frostc$Type* _72;
frost$core$Equatable* _73;
frost$core$Equatable* _74;
org$frostlang$frostc$Type** _75;
org$frostlang$frostc$Type* _76;
frost$core$Equatable* _77;
$fn25 _78;
frost$core$Bit _79;
bool _80;
frost$core$Bit _83;
frost$collections$Array** _86;
frost$collections$Array* _87;
frost$collections$CollectionView* _88;
$fn26 _89;
frost$core$Int _90;
frost$collections$Array** _91;
frost$collections$Array* _92;
frost$collections$CollectionView* _93;
$fn27 _94;
frost$core$Int _95;
int64_t _96;
int64_t _97;
bool _98;
frost$core$Bit _99;
bool _100;
frost$core$Bit _103;
frost$core$Int _106;
frost$collections$Array** _107;
frost$collections$Array* _108;
frost$collections$CollectionView* _109;
$fn28 _110;
frost$core$Int _111;
frost$core$Bit _112;
frost$core$Range$LTfrost$core$Int$GT _113;
frost$core$Int _114;
frost$core$Int _116;
frost$core$Bit _117;
bool _118;
frost$core$Int _119;
int64_t _121;
int64_t _122;
bool _123;
frost$core$Bit _124;
bool _125;
int64_t _127;
int64_t _128;
bool _129;
frost$core$Bit _130;
bool _131;
frost$collections$Array** _134;
frost$collections$Array* _135;
frost$collections$Array* _136;
frost$core$Int _137;
frost$core$Int _139;
int64_t _140;
int64_t _141;
bool _142;
frost$core$Bit _143;
bool _144;
frost$collections$CollectionView* _146;
$fn29 _147;
frost$core$Int _148;
int64_t _149;
int64_t _150;
bool _151;
frost$core$Bit _152;
bool _153;
frost$core$Int _155;
frost$core$Object*** _159;
frost$core$Object** _160;
frost$core$Int64 _161;
int64_t _162;
frost$core$Object* _163;
frost$core$Object* _164;
org$frostlang$frostc$MethodDecl$Parameter* _167;
org$frostlang$frostc$Type** _168;
org$frostlang$frostc$Type* _169;
frost$core$Equatable* _170;
frost$core$Equatable* _171;
frost$collections$Array** _172;
frost$collections$Array* _173;
frost$collections$Array* _174;
frost$core$Int _175;
frost$core$Int _177;
int64_t _178;
int64_t _179;
bool _180;
frost$core$Bit _181;
bool _182;
frost$collections$CollectionView* _184;
$fn30 _185;
frost$core$Int _186;
int64_t _187;
int64_t _188;
bool _189;
frost$core$Bit _190;
bool _191;
frost$core$Int _193;
frost$core$Object*** _197;
frost$core$Object** _198;
frost$core$Int64 _199;
int64_t _200;
frost$core$Object* _201;
frost$core$Object* _202;
org$frostlang$frostc$MethodDecl$Parameter* _205;
org$frostlang$frostc$Type** _206;
org$frostlang$frostc$Type* _207;
frost$core$Equatable* _208;
$fn31 _209;
frost$core$Bit _210;
bool _211;
frost$core$Object* _212;
frost$core$Object* _214;
frost$core$Bit _218;
frost$core$Int _221;
int64_t _222;
int64_t _223;
int64_t _224;
frost$core$Int _225;
int64_t _227;
int64_t _228;
bool _229;
frost$core$Bit _230;
bool _231;
int64_t _233;
int64_t _234;
bool _235;
frost$core$Bit _236;
bool _237;
int64_t _239;
int64_t _240;
int64_t _241;
frost$core$Int _242;
frost$core$Bit _246;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:116
_1 = &param0->resolved;
_2 = *_1;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp32;
$tmp32 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Resolution$wrapper), (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp32->value = _2;
_3 = ((frost$core$Equatable*) $tmp32);
_4 = _3;
_5 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from MethodDecl.frost:116:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
_8 = &(&local2)->$rawValue;
*_8 = _5;
_10 = *(&local2);
*(&local1) = _10;
_13 = *(&local1);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp33;
$tmp33 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Resolution$wrapper), (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp33->value = _13;
_14 = ((frost$core$Equatable*) $tmp33);
ITable* $tmp34 = _4->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp34 = $tmp34->next;
}
_15 = $tmp34->methods[1];
_16 = _15(_4, _14);
_17 = _16.value;
if (_17) goto block2; else goto block3;
block2:;
_19 = &param1->resolved;
_20 = *_19;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp35;
$tmp35 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Resolution$wrapper), (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp35->value = _20;
_21 = ((frost$core$Equatable*) $tmp35);
_22 = _21;
_23 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from MethodDecl.frost:117:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
_26 = &(&local4)->$rawValue;
*_26 = _23;
_28 = *(&local4);
*(&local3) = _28;
_31 = *(&local3);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp36;
$tmp36 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Resolution$wrapper), (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp36->value = _31;
_32 = ((frost$core$Equatable*) $tmp36);
ITable* $tmp37 = _22->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp37 = $tmp37->next;
}
_33 = $tmp37->methods[1];
_34 = _33(_22, _32);
_35 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_35);
_37 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local0) = _34;
goto block4;
block3:;
*(&local0) = _16;
goto block4;
block4:;
_43 = *(&local0);
_44 = _43.value;
if (_44) goto block6; else goto block7;
block7:;
_46 = (frost$core$Int) {116u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s38, _46);
abort(); // unreachable
block6:;
_49 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_51);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:118
_54 = ((org$frostlang$frostc$Symbol*) param0);
_55 = &_54->name;
_56 = *_55;
_57 = ((frost$core$Equatable*) _56);
_58 = _57;
_59 = ((org$frostlang$frostc$Symbol*) param1);
_60 = &_59->name;
_61 = *_60;
_62 = ((frost$core$Equatable*) _61);
ITable* $tmp39 = _58->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp39 = $tmp39->next;
}
_63 = $tmp39->methods[1];
_64 = _63(_58, _62);
_65 = _64.value;
if (_65) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:119
_68 = (frost$core$Bit) {false};
return _68;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:121
_71 = &param0->returnType;
_72 = *_71;
_73 = ((frost$core$Equatable*) _72);
_74 = _73;
_75 = &param1->returnType;
_76 = *_75;
_77 = ((frost$core$Equatable*) _76);
ITable* $tmp40 = _74->$class->itable;
while ($tmp40->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp40 = $tmp40->next;
}
_78 = $tmp40->methods[1];
_79 = _78(_74, _77);
_80 = _79.value;
if (_80) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:122
_83 = (frost$core$Bit) {false};
return _83;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:124
_86 = &param0->parameters;
_87 = *_86;
_88 = ((frost$collections$CollectionView*) _87);
ITable* $tmp41 = _88->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp41 = $tmp41->next;
}
_89 = $tmp41->methods[0];
_90 = _89(_88);
_91 = &param1->parameters;
_92 = *_91;
_93 = ((frost$collections$CollectionView*) _92);
ITable* $tmp42 = _93->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp42 = $tmp42->next;
}
_94 = $tmp42->methods[0];
_95 = _94(_93);
_96 = _90.value;
_97 = _95.value;
_98 = _96 != _97;
_99 = (frost$core$Bit) {_98};
_100 = _99.value;
if (_100) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:125
_103 = (frost$core$Bit) {false};
return _103;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:127
_106 = (frost$core$Int) {0u};
_107 = &param0->parameters;
_108 = *_107;
_109 = ((frost$collections$CollectionView*) _108);
ITable* $tmp43 = _109->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp43 = $tmp43->next;
}
_110 = $tmp43->methods[0];
_111 = _110(_109);
_112 = (frost$core$Bit) {false};
_113 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_106, _111, _112);
_114 = _113.min;
*(&local5) = _114;
_116 = _113.max;
_117 = _113.inclusive;
_118 = _117.value;
_119 = (frost$core$Int) {1u};
if (_118) goto block17; else goto block18;
block17:;
_121 = _114.value;
_122 = _116.value;
_123 = _121 <= _122;
_124 = (frost$core$Bit) {_123};
_125 = _124.value;
if (_125) goto block14; else goto block15;
block18:;
_127 = _114.value;
_128 = _116.value;
_129 = _127 < _128;
_130 = (frost$core$Bit) {_129};
_131 = _130.value;
if (_131) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:128
_134 = &param0->parameters;
_135 = *_134;
_136 = _135;
_137 = *(&local5);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MethodDecl.frost:128:26
_139 = (frost$core$Int) {0u};
_140 = _137.value;
_141 = _139.value;
_142 = _140 >= _141;
_143 = (frost$core$Bit) {_142};
_144 = _143.value;
if (_144) goto block24; else goto block23;
block24:;
_146 = ((frost$collections$CollectionView*) _136);
ITable* $tmp44 = _146->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp44 = $tmp44->next;
}
_147 = $tmp44->methods[0];
_148 = _147(_146);
_149 = _137.value;
_150 = _148.value;
_151 = _149 < _150;
_152 = (frost$core$Bit) {_151};
_153 = _152.value;
if (_153) goto block22; else goto block23;
block23:;
_155 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s45, _155, &$s46);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_159 = &_136->data;
_160 = *_159;
_161 = frost$core$Int64$init$frost$core$Int(_137);
_162 = _161.value;
_163 = _160[_162];
_164 = _163;
frost$core$Frost$ref$frost$core$Object$Q(_164);
_167 = ((org$frostlang$frostc$MethodDecl$Parameter*) _163);
_168 = &_167->type;
_169 = *_168;
_170 = ((frost$core$Equatable*) _169);
_171 = _170;
_172 = &param1->parameters;
_173 = *_172;
_174 = _173;
_175 = *(&local5);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MethodDecl.frost:128:54
_177 = (frost$core$Int) {0u};
_178 = _175.value;
_179 = _177.value;
_180 = _178 >= _179;
_181 = (frost$core$Bit) {_180};
_182 = _181.value;
if (_182) goto block28; else goto block27;
block28:;
_184 = ((frost$collections$CollectionView*) _174);
ITable* $tmp47 = _184->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp47 = $tmp47->next;
}
_185 = $tmp47->methods[0];
_186 = _185(_184);
_187 = _175.value;
_188 = _186.value;
_189 = _187 < _188;
_190 = (frost$core$Bit) {_189};
_191 = _190.value;
if (_191) goto block26; else goto block27;
block27:;
_193 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s48, _193, &$s49);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_197 = &_174->data;
_198 = *_197;
_199 = frost$core$Int64$init$frost$core$Int(_175);
_200 = _199.value;
_201 = _198[_200];
_202 = _201;
frost$core$Frost$ref$frost$core$Object$Q(_202);
_205 = ((org$frostlang$frostc$MethodDecl$Parameter*) _201);
_206 = &_205->type;
_207 = *_206;
_208 = ((frost$core$Equatable*) _207);
ITable* $tmp50 = _171->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp50 = $tmp50->next;
}
_209 = $tmp50->methods[1];
_210 = _209(_171, _208);
_211 = _210.value;
_212 = _201;
frost$core$Frost$unref$frost$core$Object$Q(_212);
_214 = _163;
frost$core$Frost$unref$frost$core$Object$Q(_214);
if (_211) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:129
_218 = (frost$core$Bit) {false};
return _218;
block20:;
_221 = *(&local5);
_222 = _116.value;
_223 = _221.value;
_224 = _222 - _223;
_225 = (frost$core$Int) {_224};
if (_118) goto block30; else goto block31;
block30:;
_227 = _225.value;
_228 = _119.value;
_229 = _227 >= _228;
_230 = (frost$core$Bit) {_229};
_231 = _230.value;
if (_231) goto block29; else goto block15;
block31:;
_233 = _225.value;
_234 = _119.value;
_235 = _233 > _234;
_236 = (frost$core$Bit) {_235};
_237 = _236.value;
if (_237) goto block29; else goto block15;
block29:;
_239 = _221.value;
_240 = _119.value;
_241 = _239 + _240;
_242 = (frost$core$Int) {_241};
*(&local5) = _242;
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:132
_246 = (frost$core$Bit) {true};
return _246;

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
frost$collections$Iterable* _22;
$fn51 _23;
frost$collections$Iterator* _24;
frost$collections$Iterator* _25;
frost$collections$Iterator* _27;
$fn52 _28;
frost$core$Bit _29;
bool _30;
frost$collections$Iterator* _33;
$fn53 _34;
frost$core$Object* _35;
org$frostlang$frostc$Annotations$Expression* _36;
frost$core$Object* _37;
org$frostlang$frostc$Annotations$Expression* _39;
frost$core$Object* _40;
org$frostlang$frostc$Annotations$Expression* _44;
frost$core$Int* _45;
frost$core$Int _46;
frost$core$Int _47;
int64_t _50;
int64_t _51;
bool _52;
frost$core$Bit _53;
bool _55;
frost$core$String** _57;
frost$core$String* _58;
org$frostlang$frostc$ASTNode** _59;
org$frostlang$frostc$ASTNode* _60;
frost$core$Object* _62;
org$frostlang$frostc$ASTNode* _64;
frost$core$Object* _65;
org$frostlang$frostc$ASTNode* _69;
frost$core$Int* _70;
frost$core$Int _71;
frost$core$Int _72;
int64_t _75;
int64_t _76;
bool _77;
frost$core$Bit _78;
bool _80;
org$frostlang$frostc$Position* _82;
org$frostlang$frostc$Position _83;
frost$core$UInt64* _84;
frost$core$UInt64 _85;
frost$core$UInt64 _88;
uint64_t _91;
int64_t _92;
frost$core$Int _93;
org$frostlang$frostc$ASTNode* _95;
frost$core$Object* _96;
frost$core$Object* _99;
org$frostlang$frostc$Annotations$Expression* _101;
frost$core$Object* _102;
frost$core$Object* _105;
frost$core$Int _108;
int64_t _111;
int64_t _112;
bool _113;
frost$core$Bit _114;
bool _116;
org$frostlang$frostc$Position* _118;
org$frostlang$frostc$Position _119;
org$frostlang$frostc$expression$Unary$Operator* _120;
org$frostlang$frostc$expression$Unary$Operator _121;
org$frostlang$frostc$ASTNode** _123;
org$frostlang$frostc$ASTNode* _124;
frost$core$Object* _126;
org$frostlang$frostc$ASTNode* _128;
frost$core$Object* _129;
org$frostlang$frostc$expression$Unary$Operator _133;
frost$core$Equatable* _134;
frost$core$Equatable* _135;
frost$core$Int _136;
frost$core$Int* _139;
org$frostlang$frostc$expression$Unary$Operator _141;
org$frostlang$frostc$expression$Unary$Operator _144;
frost$core$Equatable* _145;
$fn54 _146;
frost$core$Bit _147;
bool _148;
frost$core$Object* _149;
frost$core$Object* _151;
org$frostlang$frostc$ASTNode* _155;
frost$core$Int* _156;
frost$core$Int _157;
frost$core$Int _158;
int64_t _161;
int64_t _162;
bool _163;
frost$core$Bit _164;
bool _166;
org$frostlang$frostc$Position* _168;
org$frostlang$frostc$Position _169;
frost$core$UInt64* _170;
frost$core$UInt64 _171;
frost$core$UInt64 _174;
uint64_t _177;
int64_t _178;
frost$core$Int _179;
int64_t _183;
int64_t _184;
frost$core$Int _185;
org$frostlang$frostc$ASTNode* _187;
frost$core$Object* _188;
org$frostlang$frostc$ASTNode* _191;
frost$core$Object* _192;
frost$core$Object* _195;
org$frostlang$frostc$Annotations$Expression* _197;
frost$core$Object* _198;
frost$core$Object* _201;
org$frostlang$frostc$ASTNode* _205;
frost$core$Object* _206;
org$frostlang$frostc$ASTNode* _210;
frost$core$Object* _211;
frost$core$Object* _215;
org$frostlang$frostc$Annotations$Expression* _217;
frost$core$Object* _218;
frost$core$Object* _222;
frost$core$Int _226;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:136
_1 = &param0->annotations;
_2 = *_1;
_3 = &_2->expressions;
_4 = *_3;
_5 = _4 != NULL;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:137
_10 = &param0->annotations;
_11 = *_10;
_12 = &_11->expressions;
_13 = *_12;
_14 = _13 != NULL;
_15 = (frost$core$Bit) {_14};
_16 = _15.value;
if (_16) goto block3; else goto block4;
block4:;
_18 = (frost$core$Int) {137u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s55, _18, &$s56);
abort(); // unreachable
block3:;
_21 = ((frost$collections$Iterable*) _13);
_22 = _21;
ITable* $tmp57 = _22->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp57 = $tmp57->next;
}
_23 = $tmp57->methods[0];
_24 = _23(_22);
_25 = _24;
goto block5;
block5:;
_27 = _25;
ITable* $tmp58 = _27->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp58 = $tmp58->next;
}
_28 = $tmp58->methods[0];
_29 = _28(_27);
_30 = _29.value;
if (_30) goto block7; else goto block6;
block6:;
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
_33 = _25;
ITable* $tmp59 = _33->$class->itable;
while ($tmp59->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp59 = $tmp59->next;
}
_34 = $tmp59->methods[1];
_35 = _34(_33);
_36 = ((org$frostlang$frostc$Annotations$Expression*) _35);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$ref$frost$core$Object$Q(_37);
_39 = *(&local0);
_40 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_40);
*(&local0) = _36;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:138
_44 = *(&local0);
_45 = &_44->$rawValue;
_46 = *_45;
_47 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:139:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_50 = _46.value;
_51 = _47.value;
_52 = _50 == _51;
_53 = (frost$core$Bit) {_52};
_55 = _53.value;
if (_55) goto block9; else goto block8;
block9:;
_57 = &_44->$data.$PRIORITY.field0;
_58 = *_57;
_59 = &_44->$data.$PRIORITY.field1;
_60 = *_59;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_62 = ((frost$core$Object*) _60);
frost$core$Frost$ref$frost$core$Object$Q(_62);
_64 = *(&local1);
_65 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_65);
*(&local1) = _60;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:140
_69 = *(&local1);
_70 = &_69->$rawValue;
_71 = *_70;
_72 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:141:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_75 = _71.value;
_76 = _72.value;
_77 = _75 == _76;
_78 = (frost$core$Bit) {_77};
_80 = _78.value;
if (_80) goto block12; else goto block13;
block12:;
_82 = &_69->$data.$INT.field0;
_83 = *_82;
_84 = &_69->$data.$INT.field1;
_85 = *_84;
*(&local2) = _85;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:142
_88 = *(&local2);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from MethodDecl.frost:142:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
_91 = _88.value;
_92 = ((int64_t) _91);
_93 = (frost$core$Int) {_92};
_95 = *(&local1);
_96 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_96);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_99 = _35;
frost$core$Frost$unref$frost$core$Object$Q(_99);
_101 = *(&local0);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_102);
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
_105 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_105);
return _93;
block13:;
_108 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:144:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_111 = _71.value;
_112 = _108.value;
_113 = _111 == _112;
_114 = (frost$core$Bit) {_113};
_116 = _114.value;
if (_116) goto block16; else goto block11;
block16:;
_118 = &_69->$data.$UNARY.field0;
_119 = *_118;
_120 = &_69->$data.$UNARY.field1;
_121 = *_120;
*(&local3) = _121;
_123 = &_69->$data.$UNARY.field2;
_124 = *_123;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
_126 = ((frost$core$Object*) _124);
frost$core$Frost$ref$frost$core$Object$Q(_126);
_128 = *(&local4);
_129 = ((frost$core$Object*) _128);
frost$core$Frost$unref$frost$core$Object$Q(_129);
*(&local4) = _124;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:145
_133 = *(&local3);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp60;
$tmp60 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$expression$Unary$Operator$wrapper), (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp60->value = _133;
_134 = ((frost$core$Equatable*) $tmp60);
_135 = _134;
_136 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.expression.Unary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Unary.Operator from MethodDecl.frost:145:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:18
_139 = &(&local6)->$rawValue;
*_139 = _136;
_141 = *(&local6);
*(&local5) = _141;
_144 = *(&local5);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp61;
$tmp61 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$expression$Unary$Operator$wrapper), (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp61->value = _144;
_145 = ((frost$core$Equatable*) $tmp61);
ITable* $tmp62 = _135->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp62 = $tmp62->next;
}
_146 = $tmp62->methods[0];
_147 = _146(_135, _145);
_148 = _147.value;
_149 = ((frost$core$Object*) _145);
frost$core$Frost$unref$frost$core$Object$Q(_149);
_151 = ((frost$core$Object*) _134);
frost$core$Frost$unref$frost$core$Object$Q(_151);
if (_148) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:146
_155 = *(&local4);
_156 = &_155->$rawValue;
_157 = *_156;
_158 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:147:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_161 = _157.value;
_162 = _158.value;
_163 = _161 == _162;
_164 = (frost$core$Bit) {_163};
_166 = _164.value;
if (_166) goto block22; else goto block21;
block22:;
_168 = &_155->$data.$INT.field0;
_169 = *_168;
_170 = &_155->$data.$INT.field1;
_171 = *_170;
*(&local7) = _171;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:148
_174 = *(&local7);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from MethodDecl.frost:148:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
_177 = _174.value;
_178 = ((int64_t) _177);
_179 = (frost$core$Int) {_178};
// begin inline call to function frost.core.Int.-():frost.core.Int from MethodDecl.frost:148:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_183 = _179.value;
_184 = -_183;
_185 = (frost$core$Int) {_184};
_187 = *(&local4);
_188 = ((frost$core$Object*) _187);
frost$core$Frost$unref$frost$core$Object$Q(_188);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
_191 = *(&local1);
_192 = ((frost$core$Object*) _191);
frost$core$Frost$unref$frost$core$Object$Q(_192);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_195 = _35;
frost$core$Frost$unref$frost$core$Object$Q(_195);
_197 = *(&local0);
_198 = ((frost$core$Object*) _197);
frost$core$Frost$unref$frost$core$Object$Q(_198);
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
_201 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_201);
return _185;
block21:;
goto block19;
block19:;
_205 = *(&local4);
_206 = ((frost$core$Object*) _205);
frost$core$Frost$unref$frost$core$Object$Q(_206);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block11;
block11:;
_210 = *(&local1);
_211 = ((frost$core$Object*) _210);
frost$core$Frost$unref$frost$core$Object$Q(_211);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
_215 = _35;
frost$core$Frost$unref$frost$core$Object$Q(_215);
_217 = *(&local0);
_218 = ((frost$core$Object*) _217);
frost$core$Frost$unref$frost$core$Object$Q(_218);
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
goto block5;
block7:;
_222 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_222);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:158
_226 = (frost$core$Int) {0u};
return _226;

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
frost$collections$Array* _2;
frost$collections$Array** _3;
frost$collections$Array* _4;
frost$collections$CollectionView* _5;
$fn63 _6;
frost$core$Int _7;
frost$core$Object* _10;
frost$collections$Array* _12;
frost$core$Object* _13;
frost$core$Object* _16;
frost$collections$Array** _19;
frost$collections$Array* _20;
frost$collections$Iterable* _21;
frost$collections$Iterable* _22;
$fn64 _23;
frost$collections$Iterator* _24;
frost$collections$Iterator* _25;
frost$collections$Iterator* _27;
$fn65 _28;
frost$core$Bit _29;
bool _30;
frost$collections$Iterator* _33;
$fn66 _34;
frost$core$Object* _35;
org$frostlang$frostc$MethodDecl$Parameter* _36;
frost$core$Object* _37;
org$frostlang$frostc$MethodDecl$Parameter* _39;
frost$core$Object* _40;
frost$collections$Array* _44;
frost$collections$Array* _45;
org$frostlang$frostc$MethodDecl$Parameter* _46;
org$frostlang$frostc$Type** _47;
org$frostlang$frostc$Type* _48;
frost$core$Object* _49;
frost$core$Object* _51;
org$frostlang$frostc$MethodDecl$Parameter* _53;
frost$core$Object* _54;
frost$core$Object* _58;
org$frostlang$frostc$MethodDecl$Kind* _62;
org$frostlang$frostc$MethodDecl$Kind _63;
frost$core$Equatable* _64;
frost$core$Equatable* _65;
frost$core$Int _66;
frost$core$Int* _69;
org$frostlang$frostc$MethodDecl$Kind _71;
org$frostlang$frostc$MethodDecl$Kind _74;
frost$core$Equatable* _75;
$fn67 _76;
frost$core$Bit _77;
bool _78;
frost$core$Object* _79;
frost$core$Object* _81;
frost$core$Int _85;
frost$core$Int* _88;
org$frostlang$frostc$Type$Kind _90;
org$frostlang$frostc$Type$Kind _93;
frost$core$Int _98;
frost$core$Int* _101;
org$frostlang$frostc$Type$Kind _103;
org$frostlang$frostc$Type$Kind _106;
org$frostlang$frostc$Symbol* _110;
org$frostlang$frostc$Position* _111;
org$frostlang$frostc$Position _112;
org$frostlang$frostc$Type$Kind _113;
frost$collections$Array* _114;
frost$collections$ListView* _115;
org$frostlang$frostc$Type** _116;
org$frostlang$frostc$Type* _117;
frost$core$Int _118;
org$frostlang$frostc$Type* _119;
frost$core$Object* _120;
frost$core$Object* _122;
frost$collections$Array* _124;
frost$core$Object* _125;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:162
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_2 = _1;
_3 = &param0->parameters;
_4 = *_3;
_5 = ((frost$collections$CollectionView*) _4);
ITable* $tmp68 = _5->$class->itable;
while ($tmp68->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp68 = $tmp68->next;
}
_6 = $tmp68->methods[0];
_7 = _6(_5);
frost$collections$Array$init$frost$core$Int(_2, _7);
*(&local0) = ((frost$collections$Array*) NULL);
_10 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = *(&local0);
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
*(&local0) = _1;
_16 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_16);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:163
_19 = &param0->parameters;
_20 = *_19;
_21 = ((frost$collections$Iterable*) _20);
_22 = _21;
ITable* $tmp69 = _22->$class->itable;
while ($tmp69->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp69 = $tmp69->next;
}
_23 = $tmp69->methods[0];
_24 = _23(_22);
_25 = _24;
goto block1;
block1:;
_27 = _25;
ITable* $tmp70 = _27->$class->itable;
while ($tmp70->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp70 = $tmp70->next;
}
_28 = $tmp70->methods[0];
_29 = _28(_27);
_30 = _29.value;
if (_30) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
_33 = _25;
ITable* $tmp71 = _33->$class->itable;
while ($tmp71->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp71 = $tmp71->next;
}
_34 = $tmp71->methods[1];
_35 = _34(_33);
_36 = ((org$frostlang$frostc$MethodDecl$Parameter*) _35);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$ref$frost$core$Object$Q(_37);
_39 = *(&local1);
_40 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_40);
*(&local1) = _36;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:164
_44 = *(&local0);
_45 = _44;
_46 = *(&local1);
_47 = &_46->type;
_48 = *_47;
_49 = ((frost$core$Object*) _48);
frost$collections$Array$add$frost$collections$Array$T(_45, _49);
_51 = _35;
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = *(&local1);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
_58 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_58);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:166
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:167
_62 = &param0->methodKind;
_63 = *_62;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp72;
$tmp72 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp72->value = _63;
_64 = ((frost$core$Equatable*) $tmp72);
_65 = _64;
_66 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodDecl.frost:167:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
_69 = &(&local4)->$rawValue;
*_69 = _66;
_71 = *(&local4);
*(&local3) = _71;
_74 = *(&local3);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp73;
$tmp73 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp73->value = _74;
_75 = ((frost$core$Equatable*) $tmp73);
ITable* $tmp74 = _65->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp74 = $tmp74->next;
}
_76 = $tmp74->methods[0];
_77 = _76(_65, _75);
_78 = _77.value;
_79 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_79);
_81 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_81);
if (_78) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:168
_85 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodDecl.frost:168:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_88 = &(&local6)->$rawValue;
*_88 = _85;
_90 = *(&local6);
*(&local5) = _90;
_93 = *(&local5);
*(&local2) = _93;
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:171
_98 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodDecl.frost:171:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_101 = &(&local8)->$rawValue;
*_101 = _98;
_103 = *(&local8);
*(&local7) = _103;
_106 = *(&local7);
*(&local2) = _106;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:173
_110 = ((org$frostlang$frostc$Symbol*) param0);
_111 = &_110->position;
_112 = *_111;
_113 = *(&local2);
_114 = *(&local0);
_115 = ((frost$collections$ListView*) _114);
_116 = &param0->returnType;
_117 = *_116;
_118 = org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int(param0);
_119 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, _112, _113, _115, _117, _118);
_120 = ((frost$core$Object*) _119);
frost$core$Frost$ref$frost$core$Object$Q(_120);
_122 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_122);
_124 = *(&local0);
_125 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_125);
*(&local0) = ((frost$collections$Array*) NULL);
return _119;

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
frost$collections$Iterable* _37;
$fn75 _38;
frost$collections$Iterator* _39;
frost$collections$Iterator* _40;
frost$collections$Iterator* _42;
$fn76 _43;
frost$core$Bit _44;
bool _45;
frost$collections$Iterator* _48;
$fn77 _49;
frost$core$Object* _50;
org$frostlang$frostc$MethodDecl$Parameter* _51;
frost$core$Object* _52;
org$frostlang$frostc$MethodDecl$Parameter* _54;
frost$core$Object* _55;
frost$core$MutableString* _59;
frost$core$String* _60;
frost$core$MutableString* _63;
org$frostlang$frostc$MethodDecl$Parameter* _64;
frost$core$Object* _65;
$fn78 _68;
frost$core$String* _69;
frost$core$Object* _71;
frost$core$Object* _75;
frost$core$String* _77;
frost$core$Object* _78;
frost$core$Object* _81;
org$frostlang$frostc$MethodDecl$Parameter* _83;
frost$core$Object* _84;
frost$core$Object* _88;
frost$core$MutableString* _91;
org$frostlang$frostc$Type** _94;
org$frostlang$frostc$Type* _95;
org$frostlang$frostc$Symbol* _96;
frost$core$String** _97;
frost$core$String* _98;
frost$core$Equatable* _99;
frost$core$Equatable* _100;
frost$core$Equatable* _101;
$fn79 _102;
frost$core$Bit _103;
bool _104;
frost$core$MutableString* _107;
org$frostlang$frostc$Type** _108;
org$frostlang$frostc$Type* _109;
frost$core$Object* _110;
$fn80 _113;
frost$core$String* _114;
frost$core$String* _115;
frost$core$Object* _116;
frost$core$Object* _118;
frost$core$Object* _120;
frost$core$String* _123;
frost$core$Object* _125;
frost$core$Object* _127;
frost$core$MutableString* _131;
frost$core$String* _132;
frost$core$Object* _133;
frost$core$Object* _135;
frost$core$String* _137;
frost$core$Object* _138;
frost$core$MutableString* _141;
frost$core$Object* _142;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:177
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
_2 = ((org$frostlang$frostc$Symbol*) param0);
_3 = &_2->name;
_4 = *_3;
// begin inline call to function frost.core.String.get_asString():frost.core.String from MethodDecl.frost:177:40
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:178
*(&local1) = ((frost$core$String*) NULL);
_27 = ((frost$core$Object*) &$s82);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = *(&local1);
_30 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_30);
*(&local1) = &$s83;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:179
_34 = &param0->parameters;
_35 = *_34;
_36 = ((frost$collections$Iterable*) _35);
_37 = _36;
ITable* $tmp84 = _37->$class->itable;
while ($tmp84->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp84 = $tmp84->next;
}
_38 = $tmp84->methods[0];
_39 = _38(_37);
_40 = _39;
goto block2;
block2:;
_42 = _40;
ITable* $tmp85 = _42->$class->itable;
while ($tmp85->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp85 = $tmp85->next;
}
_43 = $tmp85->methods[0];
_44 = _43(_42);
_45 = _44.value;
if (_45) goto block4; else goto block3;
block3:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
_48 = _40;
ITable* $tmp86 = _48->$class->itable;
while ($tmp86->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp86 = $tmp86->next;
}
_49 = $tmp86->methods[1];
_50 = _49(_48);
_51 = ((org$frostlang$frostc$MethodDecl$Parameter*) _50);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$ref$frost$core$Object$Q(_52);
_54 = *(&local2);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
*(&local2) = _51;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:180
_59 = *(&local0);
_60 = *(&local1);
frost$core$MutableString$append$frost$core$String(_59, _60);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:181
_63 = *(&local0);
_64 = *(&local2);
_65 = ((frost$core$Object*) _64);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from MethodDecl.frost:181:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_68 = ($fn87) _65->$class->vtable[0];
_69 = _68(_65);
frost$core$MutableString$append$frost$core$String(_63, _69);
_71 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_71);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:182
_75 = ((frost$core$Object*) &$s88);
frost$core$Frost$ref$frost$core$Object$Q(_75);
_77 = *(&local1);
_78 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_78);
*(&local1) = &$s89;
_81 = _50;
frost$core$Frost$unref$frost$core$Object$Q(_81);
_83 = *(&local2);
_84 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_84);
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block2;
block4:;
_88 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_88);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:184
_91 = *(&local0);
frost$core$MutableString$append$frost$core$String(_91, &$s90);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:185
_94 = &param0->returnType;
_95 = *_94;
_96 = ((org$frostlang$frostc$Symbol*) _95);
_97 = &_96->name;
_98 = *_97;
_99 = ((frost$core$Equatable*) _98);
_100 = _99;
_101 = ((frost$core$Equatable*) &$s91);
ITable* $tmp92 = _100->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp92 = $tmp92->next;
}
_102 = $tmp92->methods[1];
_103 = _102(_100, _101);
_104 = _103.value;
if (_104) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:186
_107 = *(&local0);
_108 = &param0->returnType;
_109 = *_108;
_110 = ((frost$core$Object*) _109);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodDecl.frost:186:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_113 = ($fn93) _110->$class->vtable[0];
_114 = _113(_110);
_115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s94, _114);
_116 = ((frost$core$Object*) _115);
frost$core$Frost$ref$frost$core$Object$Q(_116);
_118 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_118);
_120 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_120);
_123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_115, &$s95);
frost$core$MutableString$append$frost$core$String(_107, _123);
_125 = ((frost$core$Object*) _123);
frost$core$Frost$unref$frost$core$Object$Q(_125);
_127 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_127);
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:188
_131 = *(&local0);
_132 = frost$core$MutableString$finish$R$frost$core$String(_131);
_133 = ((frost$core$Object*) _132);
frost$core$Frost$ref$frost$core$Object$Q(_133);
_135 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_135);
_137 = *(&local1);
_138 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_138);
*(&local1) = ((frost$core$String*) NULL);
_141 = *(&local0);
_142 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_142);
*(&local0) = ((frost$core$MutableString*) NULL);
return _132;

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
frost$core$Weak* _17;
frost$core$Bit* _22;
frost$core$Bit _23;
bool _25;
frost$core$Int _27;
frost$core$Object** _31;
frost$core$Object* _32;
frost$core$Object* _33;
frost$core$Object* _34;
org$frostlang$frostc$ClassDecl* _37;
frost$core$String** _38;
frost$core$String* _39;
frost$core$String* _40;
frost$core$String* _41;
frost$core$String* _42;
frost$core$String* _43;
frost$core$String* _44;
frost$core$Object* _45;
frost$core$Object* _47;
frost$core$Object* _49;
frost$core$Object* _51;
frost$core$Object* _53;
frost$core$Object* _55;
frost$core$Object* _57;
frost$core$Int _60;
int64_t _63;
int64_t _64;
bool _65;
frost$core$Bit _66;
bool _68;
frost$core$Weak** _71;
frost$core$Weak* _72;
frost$core$Weak* _73;
frost$core$Bit* _78;
frost$core$Bit _79;
bool _81;
frost$core$Int _83;
frost$core$Object** _87;
frost$core$Object* _88;
frost$core$Object* _89;
frost$core$Object* _90;
org$frostlang$frostc$ClassDecl* _93;
frost$core$String** _94;
frost$core$String* _95;
frost$core$String* _96;
frost$core$String* _97;
frost$core$String* _98;
frost$core$String* _99;
frost$core$String* _100;
frost$core$Object* _101;
frost$core$Object* _103;
frost$core$Object* _105;
frost$core$Object* _107;
frost$core$Object* _109;
frost$core$Object* _111;
frost$core$Object* _113;
frost$core$Int _116;
int64_t _119;
int64_t _120;
bool _121;
frost$core$Bit _122;
bool _124;
frost$core$Weak** _127;
frost$core$Weak* _128;
frost$core$Weak* _129;
frost$core$Bit* _134;
frost$core$Bit _135;
bool _137;
frost$core$Int _139;
frost$core$Object** _143;
frost$core$Object* _144;
frost$core$Object* _145;
frost$core$Object* _146;
org$frostlang$frostc$ClassDecl* _149;
frost$core$String** _150;
frost$core$String* _151;
frost$core$Object* _154;
frost$core$String* _157;
frost$core$String* _158;
frost$core$String* _159;
frost$core$String* _160;
frost$core$Object* _161;
frost$core$Object* _163;
frost$core$Object* _165;
frost$core$Object* _167;
frost$core$Object* _169;
frost$core$Object* _171;
frost$core$Object* _173;
frost$core$Int _177;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:192
_1 = &param0->methodKind;
_2 = *_1;
_3 = _2.$rawValue;
_4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:193:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_7 = _3.value;
_8 = _4.value;
_9 = _7 == _8;
_10 = (frost$core$Bit) {_9};
_12 = _10.value;
if (_12) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:194
_15 = &param0->owner;
_16 = *_15;
_17 = _16;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodDecl.frost:194:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_22 = &_17->_valid;
_23 = *_22;
_25 = _23.value;
if (_25) goto block7; else goto block8;
block8:;
_27 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s96, _27, &$s97);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_31 = &_17->value;
_32 = *_31;
_33 = _32;
_34 = _33;
frost$core$Frost$ref$frost$core$Object$Q(_34);
_37 = ((org$frostlang$frostc$ClassDecl*) _33);
_38 = &_37->name;
_39 = *_38;
_40 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s98, _39);
_41 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_40, &$s99);
_42 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
_43 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_41, _42);
_44 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_43, &$s100);
_45 = ((frost$core$Object*) _44);
frost$core$Frost$ref$frost$core$Object$Q(_45);
_47 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_47);
_49 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_53);
_55 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_55);
_57 = _33;
frost$core$Frost$unref$frost$core$Object$Q(_57);
return _44;
block3:;
_60 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:196:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_63 = _3.value;
_64 = _60.value;
_65 = _63 == _64;
_66 = (frost$core$Bit) {_65};
_68 = _66.value;
if (_68) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:197
_71 = &param0->owner;
_72 = *_71;
_73 = _72;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodDecl.frost:197:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_78 = &_73->_valid;
_79 = *_78;
_81 = _79.value;
if (_81) goto block14; else goto block15;
block15:;
_83 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s101, _83, &$s102);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_87 = &_73->value;
_88 = *_87;
_89 = _88;
_90 = _89;
frost$core$Frost$ref$frost$core$Object$Q(_90);
_93 = ((org$frostlang$frostc$ClassDecl*) _89);
_94 = &_93->name;
_95 = *_94;
_96 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s103, _95);
_97 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_96, &$s104);
_98 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
_99 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_97, _98);
_100 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_99, &$s105);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$ref$frost$core$Object$Q(_101);
_103 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_103);
_105 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_107);
_109 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_109);
_111 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_111);
_113 = _89;
frost$core$Frost$unref$frost$core$Object$Q(_113);
return _100;
block10:;
_116 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:199:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_119 = _3.value;
_120 = _116.value;
_121 = _119 == _120;
_122 = (frost$core$Bit) {_121};
_124 = _122.value;
if (_124) goto block16; else goto block1;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:200
_127 = &param0->owner;
_128 = *_127;
_129 = _128;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodDecl.frost:200:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_134 = &_129->_valid;
_135 = *_134;
_137 = _135.value;
if (_137) goto block20; else goto block21;
block21:;
_139 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s106, _139, &$s107);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_143 = &_129->value;
_144 = *_143;
_145 = _144;
_146 = _145;
frost$core$Frost$ref$frost$core$Object$Q(_146);
_149 = ((org$frostlang$frostc$ClassDecl*) _145);
_150 = &_149->name;
_151 = *_150;
// begin inline call to function frost.core.String.get_asString():frost.core.String from MethodDecl.frost:200:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_154 = ((frost$core$Object*) _151);
frost$core$Frost$ref$frost$core$Object$Q(_154);
_157 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_151, &$s108);
_158 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
_159 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_157, _158);
_160 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_159, &$s109);
_161 = ((frost$core$Object*) _160);
frost$core$Frost$ref$frost$core$Object$Q(_161);
_163 = ((frost$core$Object*) _160);
frost$core$Frost$unref$frost$core$Object$Q(_163);
_165 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_165);
_167 = ((frost$core$Object*) _158);
frost$core$Frost$unref$frost$core$Object$Q(_167);
_169 = ((frost$core$Object*) _157);
frost$core$Frost$unref$frost$core$Object$Q(_169);
_171 = ((frost$core$Object*) _151);
frost$core$Frost$unref$frost$core$Object$Q(_171);
_173 = _145;
frost$core$Frost$unref$frost$core$Object$Q(_173);
return _160;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:203
_177 = (frost$core$Int) {203u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s110, _177);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:208
_1 = &param0->body;
_2 = *_1;
_3 = _2 != NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:209
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
_21 = (frost$core$Int) {209u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s114, _21, &$s115);
abort(); // unreachable
block3:;
_24 = ((frost$core$Object*) _16);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodDecl.frost:209:23
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:211
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

